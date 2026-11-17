/* ============================================================================
 * src/generated/codec_part002.cpp — 生成的编解码函数
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

ErrorCode Encode_LoggedMeasurementConfiguration_r16_CriticalExtensions(Encoder& enc, const LoggedMeasurementConfiguration_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_loggedMeasurementConfiguration_r16:
        Encode_LoggedMeasurementConfiguration_r16_IEs(enc, value.u.loggedMeasurementConfiguration_r16);
        break;
    case LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_r16_CriticalExtensions(Decoder& dec, LoggedMeasurementConfiguration_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_loggedMeasurementConfiguration_r16: {
        if (Decode_LoggedMeasurementConfiguration_r16_IEs(dec, value.u.loggedMeasurementConfiguration_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedMeasurementConfiguration_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_r16_CriticalExtensions(LoggedMeasurementConfiguration_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_loggedMeasurementConfiguration_r16:
        Free_LoggedMeasurementConfiguration_r16_IEs(value.u.loggedMeasurementConfiguration_r16);
        break;
    case LoggedMeasurementConfiguration_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LoggedMeasurementConfiguration_r16(Encoder& enc, const LoggedMeasurementConfiguration_r16& value)
{
    (void)value;
    Encode_LoggedMeasurementConfiguration_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_r16(Decoder& dec, LoggedMeasurementConfiguration_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_LoggedMeasurementConfiguration_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedMeasurementConfiguration_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_r16(LoggedMeasurementConfiguration_r16& value)
{
    Free_LoggedMeasurementConfiguration_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_NeighbourCellList_r17(Encoder& enc, const MBS_NeighbourCellList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 0u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MBS_NeighbourCell_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_NeighbourCellList_r17(Decoder& dec, MBS_NeighbourCellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(0u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MBS_NeighbourCell_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_NeighbourCell_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_NeighbourCell_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MBS_NeighbourCell_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_NeighbourCellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_NeighbourCellList_r17(MBS_NeighbourCellList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MBS_NeighbourCell_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_SessionInfoList_r17(Encoder& enc, const MBS_SessionInfoList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 1024u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MBS_SessionInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_SessionInfoList_r17(Decoder& dec, MBS_SessionInfoList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 1024u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 1024u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MBS_SessionInfo_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_SessionInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_SessionInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MBS_SessionInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_SessionInfoList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_SessionInfoList_r17(MBS_SessionInfoList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MBS_SessionInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MTCH_SSB_MappingWindowList_r17(Encoder& enc, const MTCH_SSB_MappingWindowList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MTCH_SSB_MappingWindowCycleOffset_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MTCH_SSB_MappingWindowList_r17(Decoder& dec, MTCH_SSB_MappingWindowList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MTCH_SSB_MappingWindowCycleOffset_r17*)std::malloc((std::size_t)value.count * sizeof(MTCH_SSB_MappingWindowCycleOffset_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MTCH_SSB_MappingWindowCycleOffset_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MTCH_SSB_MappingWindowCycleOffset_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MTCH_SSB_MappingWindowList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MTCH_SSB_MappingWindowList_r17(MTCH_SSB_MappingWindowList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MTCH_SSB_MappingWindowCycleOffset_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_TimeDomainResourceAllocationList_r16(Encoder& enc, const PDSCH_TimeDomainResourceAllocationList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PDSCH_TimeDomainResourceAllocation_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_TimeDomainResourceAllocationList_r16(Decoder& dec, PDSCH_TimeDomainResourceAllocationList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PDSCH_TimeDomainResourceAllocation_r16*)std::malloc((std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PDSCH_TimeDomainResourceAllocation_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PDSCH_TimeDomainResourceAllocation_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_TimeDomainResourceAllocationList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_TimeDomainResourceAllocationList_r16(PDSCH_TimeDomainResourceAllocationList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PDSCH_TimeDomainResourceAllocation_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_MBSFN_SubframeConfigList(Encoder& enc, const EUTRA_MBSFN_SubframeConfigList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_MBSFN_SubframeConfig(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MBSFN_SubframeConfigList(Decoder& dec, EUTRA_MBSFN_SubframeConfigList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_MBSFN_SubframeConfig*)std::malloc((std::size_t)value.count * sizeof(EUTRA_MBSFN_SubframeConfig));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_MBSFN_SubframeConfig));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_MBSFN_SubframeConfig(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MBSFN_SubframeConfigList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MBSFN_SubframeConfigList(EUTRA_MBSFN_SubframeConfigList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_MBSFN_SubframeConfig(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RateMatchPatternLTE_CRS(Encoder& enc, const RateMatchPatternLTE_CRS& value)
{
    (void)value;
    enc.WriteBit(value.has_mbsfn_SubframeConfigList);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreqDL), 0, 16383);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierBandwidthDL), 0, 7);
    if (value.has_mbsfn_SubframeConfigList) {
        Encode_EUTRA_MBSFN_SubframeConfigList(enc, value.mbsfn_SubframeConfigList);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofCRS_Ports), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.v_Shift), 0, 5);
    return enc.Error();
}

ErrorCode Decode_RateMatchPatternLTE_CRS(Decoder& dec, RateMatchPatternLTE_CRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16383, tmp_value)) { goto fail; }
        value.carrierFreqDL = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.carrierBandwidthDL = (RateMatchPatternLTE_CRS_CarrierBandwidthDL)tmp_value;
    }
    if (present_0) {
        if (Decode_EUTRA_MBSFN_SubframeConfigList(dec, value.mbsfn_SubframeConfigList) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrofCRS_Ports = (RateMatchPatternLTE_CRS_NrofCRS_Ports)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.v_Shift = (RateMatchPatternLTE_CRS_V_Shift)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RateMatchPatternLTE_CRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RateMatchPatternLTE_CRS(RateMatchPatternLTE_CRS& value)
{
    if (value.has_mbsfn_SubframeConfigList) {
        Free_EUTRA_MBSFN_SubframeConfigList(value.mbsfn_SubframeConfigList);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDSCH_ConfigBroadcast_r17(Encoder& enc, const PDSCH_ConfigBroadcast_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdsch_TimeDomainAllocationList_r17);
    enc.WriteBit(value.has_rateMatchPatternToAddModList_r17);
    enc.WriteBit(value.has_lte_CRS_ToMatchAround_r17);
    enc.WriteBit(value.has_mcs_Table_r17);
    enc.WriteBit(value.has_xOverhead_r17);
enc.WriteConstrainedLength(value.pdschConfigList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdschConfigList_r17_count; ++i) {
    Encode_PDSCH_ConfigPTM_r17(enc, value.pdschConfigList_r17_items[i]);
}
    if (value.has_pdsch_TimeDomainAllocationList_r17) {
        Encode_PDSCH_TimeDomainResourceAllocationList_r16(enc, value.pdsch_TimeDomainAllocationList_r17);
    }
    if (value.has_rateMatchPatternToAddModList_r17) {
enc.WriteConstrainedLength(value.rateMatchPatternToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_r17_count; ++i) {
    Encode_RateMatchPattern(enc, value.rateMatchPatternToAddModList_r17_items[i]);
}
    }
    if (value.has_lte_CRS_ToMatchAround_r17) {
        Encode_RateMatchPatternLTE_CRS(enc, value.lte_CRS_ToMatchAround_r17);
    }
    if (value.has_mcs_Table_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcs_Table_r17), 0, 1);
    }
    if (value.has_xOverhead_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.xOverhead_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ConfigBroadcast_r17(Decoder& dec, PDSCH_ConfigBroadcast_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.pdschConfigList_r17_count)) { goto fail; }
if (value.pdschConfigList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdschConfigList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdschConfigList_r17_count > 0u) {
    value.pdschConfigList_r17_items = (PDSCH_ConfigPTM_r17*)std::malloc((std::size_t)value.pdschConfigList_r17_count * sizeof(PDSCH_ConfigPTM_r17));
    if (value.pdschConfigList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdschConfigList_r17_items, 0, (std::size_t)value.pdschConfigList_r17_count * sizeof(PDSCH_ConfigPTM_r17));
}
for (std::uint32_t i = 0; i < value.pdschConfigList_r17_count; ++i) {
    if (Decode_PDSCH_ConfigPTM_r17(dec, value.pdschConfigList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_PDSCH_TimeDomainResourceAllocationList_r16(dec, value.pdsch_TimeDomainAllocationList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToAddModList_r17_count)) { goto fail; }
if (value.rateMatchPatternToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToAddModList_r17_count > 0u) {
    value.rateMatchPatternToAddModList_r17_items = (RateMatchPattern*)std::malloc((std::size_t)value.rateMatchPatternToAddModList_r17_count * sizeof(RateMatchPattern));
    if (value.rateMatchPatternToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToAddModList_r17_items, 0, (std::size_t)value.rateMatchPatternToAddModList_r17_count * sizeof(RateMatchPattern));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_r17_count; ++i) {
    if (Decode_RateMatchPattern(dec, value.rateMatchPatternToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_RateMatchPatternLTE_CRS(dec, value.lte_CRS_ToMatchAround_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mcs_Table_r17 = (PDSCH_ConfigBroadcast_r17_Mcs_Table_r17)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.xOverhead_r17 = (PDSCH_ConfigBroadcast_r17_XOverhead_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ConfigBroadcast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ConfigBroadcast_r17(PDSCH_ConfigBroadcast_r17& value)
{
    if (value.pdschConfigList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pdschConfigList_r17_count; ++i) {
            Free_PDSCH_ConfigPTM_r17(value.pdschConfigList_r17_items[i]);
        }
        std::free(value.pdschConfigList_r17_items);
        value.pdschConfigList_r17_items = nullptr;
    }
    value.pdschConfigList_r17_count = 0;
    if (value.has_pdsch_TimeDomainAllocationList_r17) {
        Free_PDSCH_TimeDomainResourceAllocationList_r16(value.pdsch_TimeDomainAllocationList_r17);
    }
    if (value.has_rateMatchPatternToAddModList_r17) {
        if (value.rateMatchPatternToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_r17_count; ++i) {
                Free_RateMatchPattern(value.rateMatchPatternToAddModList_r17_items[i]);
            }
            std::free(value.rateMatchPatternToAddModList_r17_items);
            value.rateMatchPatternToAddModList_r17_items = nullptr;
        }
        value.rateMatchPatternToAddModList_r17_count = 0;
    }
    if (value.has_lte_CRS_ToMatchAround_r17) {
        Free_RateMatchPatternLTE_CRS(value.lte_CRS_ToMatchAround_r17);
    }
    if (value.has_mcs_Table_r17) {
    }
    if (value.has_xOverhead_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(Encoder& enc, const MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(Decoder& dec, MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSBroadcastConfiguration_r17_IEs(Encoder& enc, const MBSBroadcastConfiguration_r17_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_mbs_SessionInfoList_r17);
    enc.WriteBit(value.has_mbs_NeighbourCellList_r17);
    enc.WriteBit(value.has_drx_ConfigPTM_List_r17);
    enc.WriteBit(value.has_pdsch_ConfigMTCH_r17);
    enc.WriteBit(value.has_mtch_SSB_MappingWindowList_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mbs_SessionInfoList_r17) {
        Encode_MBS_SessionInfoList_r17(enc, value.mbs_SessionInfoList_r17);
    }
    if (value.has_mbs_NeighbourCellList_r17) {
        Encode_MBS_NeighbourCellList_r17(enc, value.mbs_NeighbourCellList_r17);
    }
    if (value.has_drx_ConfigPTM_List_r17) {
enc.WriteConstrainedLength(value.drx_ConfigPTM_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.drx_ConfigPTM_List_r17_count; ++i) {
    Encode_DRX_ConfigPTM_r17(enc, value.drx_ConfigPTM_List_r17_items[i]);
}
    }
    if (value.has_pdsch_ConfigMTCH_r17) {
        Encode_PDSCH_ConfigBroadcast_r17(enc, value.pdsch_ConfigMTCH_r17);
    }
    if (value.has_mtch_SSB_MappingWindowList_r17) {
        Encode_MTCH_SSB_MappingWindowList_r17(enc, value.mtch_SSB_MappingWindowList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MBSBroadcastConfiguration_r17_IEs(Decoder& dec, MBSBroadcastConfiguration_r17_IEs& value)
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
        if (Decode_MBS_SessionInfoList_r17(dec, value.mbs_SessionInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MBS_NeighbourCellList_r17(dec, value.mbs_NeighbourCellList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.drx_ConfigPTM_List_r17_count)) { goto fail; }
if (value.drx_ConfigPTM_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.drx_ConfigPTM_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.drx_ConfigPTM_List_r17_count > 0u) {
    value.drx_ConfigPTM_List_r17_items = (DRX_ConfigPTM_r17*)std::malloc((std::size_t)value.drx_ConfigPTM_List_r17_count * sizeof(DRX_ConfigPTM_r17));
    if (value.drx_ConfigPTM_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.drx_ConfigPTM_List_r17_items, 0, (std::size_t)value.drx_ConfigPTM_List_r17_count * sizeof(DRX_ConfigPTM_r17));
}
for (std::uint32_t i = 0; i < value.drx_ConfigPTM_List_r17_count; ++i) {
    if (Decode_DRX_ConfigPTM_r17(dec, value.drx_ConfigPTM_List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        if (Decode_PDSCH_ConfigBroadcast_r17(dec, value.pdsch_ConfigMTCH_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MTCH_SSB_MappingWindowList_r17(dec, value.mtch_SSB_MappingWindowList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_6) {
        if (Decode_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSBroadcastConfiguration_r17_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSBroadcastConfiguration_r17_IEs(MBSBroadcastConfiguration_r17_IEs& value)
{
    if (value.has_mbs_SessionInfoList_r17) {
        Free_MBS_SessionInfoList_r17(value.mbs_SessionInfoList_r17);
    }
    if (value.has_mbs_NeighbourCellList_r17) {
        Free_MBS_NeighbourCellList_r17(value.mbs_NeighbourCellList_r17);
    }
    if (value.has_drx_ConfigPTM_List_r17) {
        if (value.drx_ConfigPTM_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.drx_ConfigPTM_List_r17_count; ++i) {
                Free_DRX_ConfigPTM_r17(value.drx_ConfigPTM_List_r17_items[i]);
            }
            std::free(value.drx_ConfigPTM_List_r17_items);
            value.drx_ConfigPTM_List_r17_items = nullptr;
        }
        value.drx_ConfigPTM_List_r17_count = 0;
    }
    if (value.has_pdsch_ConfigMTCH_r17) {
        Free_PDSCH_ConfigBroadcast_r17(value.pdsch_ConfigMTCH_r17);
    }
    if (value.has_mtch_SSB_MappingWindowList_r17) {
        Free_MTCH_SSB_MappingWindowList_r17(value.mtch_SSB_MappingWindowList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MBSBroadcastConfiguration_r17_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(Encoder& enc, const MBSBroadcastConfiguration_r17_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(Decoder& dec, MBSBroadcastConfiguration_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(MBSBroadcastConfiguration_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSBroadcastConfiguration_r17_CriticalExtensions(Encoder& enc, const MBSBroadcastConfiguration_r17_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_mbsBroadcastConfiguration_r17:
        Encode_MBSBroadcastConfiguration_r17_IEs(enc, value.u.mbsBroadcastConfiguration_r17);
        break;
    case MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MBSBroadcastConfiguration_r17_CriticalExtensions(Decoder& dec, MBSBroadcastConfiguration_r17_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MBSBroadcastConfiguration_r17_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_mbsBroadcastConfiguration_r17: {
        if (Decode_MBSBroadcastConfiguration_r17_IEs(dec, value.u.mbsBroadcastConfiguration_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSBroadcastConfiguration_r17_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSBroadcastConfiguration_r17_CriticalExtensions(MBSBroadcastConfiguration_r17_CriticalExtensions& value)
{
    switch (value.tag) {
    case MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_mbsBroadcastConfiguration_r17:
        Free_MBSBroadcastConfiguration_r17_IEs(value.u.mbsBroadcastConfiguration_r17);
        break;
    case MBSBroadcastConfiguration_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MBSBroadcastConfiguration_r17_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSBroadcastConfiguration_r17(Encoder& enc, const MBSBroadcastConfiguration_r17& value)
{
    (void)value;
    Encode_MBSBroadcastConfiguration_r17_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MBSBroadcastConfiguration_r17(Decoder& dec, MBSBroadcastConfiguration_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MBSBroadcastConfiguration_r17_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSBroadcastConfiguration_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSBroadcastConfiguration_r17(MBSBroadcastConfiguration_r17& value)
{
    Free_MBSBroadcastConfiguration_r17_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_NonServingInfoList_r18(Encoder& enc, const MBS_NonServingInfoList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NonServingInfo_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_NonServingInfoList_r18(Decoder& dec, MBS_NonServingInfoList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NonServingInfo_r18*)std::malloc((std::size_t)value.count * sizeof(NonServingInfo_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NonServingInfo_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NonServingInfo_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_NonServingInfoList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_NonServingInfoList_r18(MBS_NonServingInfoList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NonServingInfo_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSInterestIndication_v1800_NonCriticalExtension(Encoder& enc, const MBSInterestIndication_v1800_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MBSInterestIndication_v1800_NonCriticalExtension(Decoder& dec, MBSInterestIndication_v1800_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSInterestIndication_v1800_NonCriticalExtension(MBSInterestIndication_v1800_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSInterestIndication_v1800(Encoder& enc, const MBSInterestIndication_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_mbs_NonServingInfoList_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mbs_NonServingInfoList_r18) {
        Encode_MBS_NonServingInfoList_r18(enc, value.mbs_NonServingInfoList_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MBSInterestIndication_v1800_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MBSInterestIndication_v1800(Decoder& dec, MBSInterestIndication_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MBS_NonServingInfoList_r18(dec, value.mbs_NonServingInfoList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MBSInterestIndication_v1800_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSInterestIndication_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSInterestIndication_v1800(MBSInterestIndication_v1800& value)
{
    if (value.has_mbs_NonServingInfoList_r18) {
        Free_MBS_NonServingInfoList_r18(value.mbs_NonServingInfoList_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_MBSInterestIndication_v1800_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CarrierFreqListMBS_r17(Encoder& enc, const CarrierFreqListMBS_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 3279165);
    }
    return enc.Error();
}

ErrorCode Decode_CarrierFreqListMBS_r17(Decoder& dec, CarrierFreqListMBS_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
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
    Free_CarrierFreqListMBS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CarrierFreqListMBS_r17(CarrierFreqListMBS_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_ServiceList_r17(Encoder& enc, const MBS_ServiceList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MBS_ServiceInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_ServiceList_r17(Decoder& dec, MBS_ServiceList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MBS_ServiceInfo_r17*)std::malloc((std::size_t)value.count * sizeof(MBS_ServiceInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_ServiceInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MBS_ServiceInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_ServiceList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_ServiceList_r17(MBS_ServiceList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MBS_ServiceInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSInterestIndication_r17_IEs(Encoder& enc, const MBSInterestIndication_r17_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_mbs_FreqList_r17);
    enc.WriteBit(value.has_mbs_Priority_r17);
    enc.WriteBit(value.has_mbs_ServiceList_r17);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mbs_FreqList_r17) {
        Encode_CarrierFreqListMBS_r17(enc, value.mbs_FreqList_r17);
    }
    if (value.has_mbs_Priority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mbs_Priority_r17), 0, 0);
    }
    if (value.has_mbs_ServiceList_r17) {
        Encode_MBS_ServiceList_r17(enc, value.mbs_ServiceList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MBSInterestIndication_v1800(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MBSInterestIndication_r17_IEs(Decoder& dec, MBSInterestIndication_r17_IEs& value)
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
        if (Decode_CarrierFreqListMBS_r17(dec, value.mbs_FreqList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.mbs_Priority_r17 = (MBSInterestIndication_r17_IEs_Mbs_Priority_r17)0;
    }
    if (present_2) {
        if (Decode_MBS_ServiceList_r17(dec, value.mbs_ServiceList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_4) {
        if (Decode_MBSInterestIndication_v1800(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSInterestIndication_r17_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSInterestIndication_r17_IEs(MBSInterestIndication_r17_IEs& value)
{
    if (value.has_mbs_FreqList_r17) {
        Free_CarrierFreqListMBS_r17(value.mbs_FreqList_r17);
    }
    if (value.has_mbs_Priority_r17) {
    }
    if (value.has_mbs_ServiceList_r17) {
        Free_MBS_ServiceList_r17(value.mbs_ServiceList_r17);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MBSInterestIndication_v1800(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSInterestIndication_r17_CriticalExtensionsFuture(Encoder& enc, const MBSInterestIndication_r17_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MBSInterestIndication_r17_CriticalExtensionsFuture(Decoder& dec, MBSInterestIndication_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSInterestIndication_r17_CriticalExtensionsFuture(MBSInterestIndication_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSInterestIndication_r17_CriticalExtensions(Encoder& enc, const MBSInterestIndication_r17_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MBSInterestIndication_r17_CriticalExtensions_Tag_mbsInterestIndication_r17:
        Encode_MBSInterestIndication_r17_IEs(enc, value.u.mbsInterestIndication_r17);
        break;
    case MBSInterestIndication_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MBSInterestIndication_r17_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MBSInterestIndication_r17_CriticalExtensions(Decoder& dec, MBSInterestIndication_r17_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MBSInterestIndication_r17_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MBSInterestIndication_r17_CriticalExtensions_Tag_mbsInterestIndication_r17: {
        if (Decode_MBSInterestIndication_r17_IEs(dec, value.u.mbsInterestIndication_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MBSInterestIndication_r17_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MBSInterestIndication_r17_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSInterestIndication_r17_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSInterestIndication_r17_CriticalExtensions(MBSInterestIndication_r17_CriticalExtensions& value)
{
    switch (value.tag) {
    case MBSInterestIndication_r17_CriticalExtensions_Tag_mbsInterestIndication_r17:
        Free_MBSInterestIndication_r17_IEs(value.u.mbsInterestIndication_r17);
        break;
    case MBSInterestIndication_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MBSInterestIndication_r17_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSInterestIndication_r17(Encoder& enc, const MBSInterestIndication_r17& value)
{
    (void)value;
    Encode_MBSInterestIndication_r17_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MBSInterestIndication_r17(Decoder& dec, MBSInterestIndication_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MBSInterestIndication_r17_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSInterestIndication_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSInterestIndication_r17(MBSInterestIndication_r17& value)
{
    Free_MBSInterestIndication_r17_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_SessionInfoListMulticast_r18(Encoder& enc, const MBS_SessionInfoListMulticast_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 1024u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MBS_SessionInfoMulticast_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_SessionInfoListMulticast_r18(Decoder& dec, MBS_SessionInfoListMulticast_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 1024u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 1024u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MBS_SessionInfoMulticast_r18*)std::malloc((std::size_t)value.count * sizeof(MBS_SessionInfoMulticast_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MBS_SessionInfoMulticast_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MBS_SessionInfoMulticast_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MBS_SessionInfoListMulticast_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_SessionInfoListMulticast_r18(MBS_SessionInfoListMulticast_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MBS_SessionInfoMulticast_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(Encoder& enc, const MBSMulticastConfiguration_r18_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(Decoder& dec, MBSMulticastConfiguration_r18_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(MBSMulticastConfiguration_r18_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSMulticastConfiguration_r18_IEs(Encoder& enc, const MBSMulticastConfiguration_r18_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_mbs_SessionInfoListMulticast_r18);
    enc.WriteBit(value.has_mbs_NeighbourCellList_r18);
    enc.WriteBit(value.has_drx_ConfigPTM_List_r18);
    enc.WriteBit(value.has_pdsch_ConfigMTCH_r18);
    enc.WriteBit(value.has_mtch_SSB_MappingWindowList_r18);
    enc.WriteBit(value.has_thresholdMBS_List_r18);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mbs_SessionInfoListMulticast_r18) {
        Encode_MBS_SessionInfoListMulticast_r18(enc, value.mbs_SessionInfoListMulticast_r18);
    }
    if (value.has_mbs_NeighbourCellList_r18) {
        Encode_MBS_NeighbourCellList_r17(enc, value.mbs_NeighbourCellList_r18);
    }
    if (value.has_drx_ConfigPTM_List_r18) {
enc.WriteConstrainedLength(value.drx_ConfigPTM_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.drx_ConfigPTM_List_r18_count; ++i) {
    Encode_DRX_ConfigPTM_r17(enc, value.drx_ConfigPTM_List_r18_items[i]);
}
    }
    if (value.has_pdsch_ConfigMTCH_r18) {
        Encode_PDSCH_ConfigBroadcast_r17(enc, value.pdsch_ConfigMTCH_r18);
    }
    if (value.has_mtch_SSB_MappingWindowList_r18) {
        Encode_MTCH_SSB_MappingWindowList_r17(enc, value.mtch_SSB_MappingWindowList_r18);
    }
    if (value.has_thresholdMBS_List_r18) {
enc.WriteConstrainedLength(value.thresholdMBS_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.thresholdMBS_List_r18_count; ++i) {
    Encode_ThresholdMBS_r18(enc, value.thresholdMBS_List_r18_items[i]);
}
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MBSMulticastConfiguration_r18_IEs(Decoder& dec, MBSMulticastConfiguration_r18_IEs& value)
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
        if (Decode_MBS_SessionInfoListMulticast_r18(dec, value.mbs_SessionInfoListMulticast_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MBS_NeighbourCellList_r17(dec, value.mbs_NeighbourCellList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.drx_ConfigPTM_List_r18_count)) { goto fail; }
if (value.drx_ConfigPTM_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.drx_ConfigPTM_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.drx_ConfigPTM_List_r18_count > 0u) {
    value.drx_ConfigPTM_List_r18_items = (DRX_ConfigPTM_r17*)std::malloc((std::size_t)value.drx_ConfigPTM_List_r18_count * sizeof(DRX_ConfigPTM_r17));
    if (value.drx_ConfigPTM_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.drx_ConfigPTM_List_r18_items, 0, (std::size_t)value.drx_ConfigPTM_List_r18_count * sizeof(DRX_ConfigPTM_r17));
}
for (std::uint32_t i = 0; i < value.drx_ConfigPTM_List_r18_count; ++i) {
    if (Decode_DRX_ConfigPTM_r17(dec, value.drx_ConfigPTM_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        if (Decode_PDSCH_ConfigBroadcast_r17(dec, value.pdsch_ConfigMTCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MTCH_SSB_MappingWindowList_r17(dec, value.mtch_SSB_MappingWindowList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.thresholdMBS_List_r18_count)) { goto fail; }
if (value.thresholdMBS_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.thresholdMBS_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.thresholdMBS_List_r18_count > 0u) {
    value.thresholdMBS_List_r18_items = (ThresholdMBS_r18*)std::malloc((std::size_t)value.thresholdMBS_List_r18_count * sizeof(ThresholdMBS_r18));
    if (value.thresholdMBS_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.thresholdMBS_List_r18_items, 0, (std::size_t)value.thresholdMBS_List_r18_count * sizeof(ThresholdMBS_r18));
}
for (std::uint32_t i = 0; i < value.thresholdMBS_List_r18_count; ++i) {
    if (Decode_ThresholdMBS_r18(dec, value.thresholdMBS_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_7) {
        if (Decode_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSMulticastConfiguration_r18_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSMulticastConfiguration_r18_IEs(MBSMulticastConfiguration_r18_IEs& value)
{
    if (value.has_mbs_SessionInfoListMulticast_r18) {
        Free_MBS_SessionInfoListMulticast_r18(value.mbs_SessionInfoListMulticast_r18);
    }
    if (value.has_mbs_NeighbourCellList_r18) {
        Free_MBS_NeighbourCellList_r17(value.mbs_NeighbourCellList_r18);
    }
    if (value.has_drx_ConfigPTM_List_r18) {
        if (value.drx_ConfigPTM_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.drx_ConfigPTM_List_r18_count; ++i) {
                Free_DRX_ConfigPTM_r17(value.drx_ConfigPTM_List_r18_items[i]);
            }
            std::free(value.drx_ConfigPTM_List_r18_items);
            value.drx_ConfigPTM_List_r18_items = nullptr;
        }
        value.drx_ConfigPTM_List_r18_count = 0;
    }
    if (value.has_pdsch_ConfigMTCH_r18) {
        Free_PDSCH_ConfigBroadcast_r17(value.pdsch_ConfigMTCH_r18);
    }
    if (value.has_mtch_SSB_MappingWindowList_r18) {
        Free_MTCH_SSB_MappingWindowList_r17(value.mtch_SSB_MappingWindowList_r18);
    }
    if (value.has_thresholdMBS_List_r18) {
        if (value.thresholdMBS_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.thresholdMBS_List_r18_count; ++i) {
                Free_ThresholdMBS_r18(value.thresholdMBS_List_r18_items[i]);
            }
            std::free(value.thresholdMBS_List_r18_items);
            value.thresholdMBS_List_r18_items = nullptr;
        }
        value.thresholdMBS_List_r18_count = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MBSMulticastConfiguration_r18_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(Encoder& enc, const MBSMulticastConfiguration_r18_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(Decoder& dec, MBSMulticastConfiguration_r18_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(MBSMulticastConfiguration_r18_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSMulticastConfiguration_r18_CriticalExtensions(Encoder& enc, const MBSMulticastConfiguration_r18_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MBSMulticastConfiguration_r18_CriticalExtensions_Tag_mbsMulticastConfiguration_r18:
        Encode_MBSMulticastConfiguration_r18_IEs(enc, value.u.mbsMulticastConfiguration_r18);
        break;
    case MBSMulticastConfiguration_r18_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MBSMulticastConfiguration_r18_CriticalExtensions(Decoder& dec, MBSMulticastConfiguration_r18_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MBSMulticastConfiguration_r18_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MBSMulticastConfiguration_r18_CriticalExtensions_Tag_mbsMulticastConfiguration_r18: {
        if (Decode_MBSMulticastConfiguration_r18_IEs(dec, value.u.mbsMulticastConfiguration_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MBSMulticastConfiguration_r18_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSMulticastConfiguration_r18_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSMulticastConfiguration_r18_CriticalExtensions(MBSMulticastConfiguration_r18_CriticalExtensions& value)
{
    switch (value.tag) {
    case MBSMulticastConfiguration_r18_CriticalExtensions_Tag_mbsMulticastConfiguration_r18:
        Free_MBSMulticastConfiguration_r18_IEs(value.u.mbsMulticastConfiguration_r18);
        break;
    case MBSMulticastConfiguration_r18_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MBSMulticastConfiguration_r18_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBSMulticastConfiguration_r18(Encoder& enc, const MBSMulticastConfiguration_r18& value)
{
    (void)value;
    Encode_MBSMulticastConfiguration_r18_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MBSMulticastConfiguration_r18(Decoder& dec, MBSMulticastConfiguration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MBSMulticastConfiguration_r18_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBSMulticastConfiguration_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBSMulticastConfiguration_r18(MBSMulticastConfiguration_r18& value)
{
    Free_MBSMulticastConfiguration_r18_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ThresholdMBS_r18(Encoder& enc, const ThresholdMBS_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp_r18);
    enc.WriteBit(value.has_rsrq_r18);
    if (value.has_rsrp_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_r18), 0, 127);
    }
    if (value.has_rsrq_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrq_r18), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_ThresholdMBS_r18(Decoder& dec, ThresholdMBS_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_r18 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrq_r18 = (RSRQ_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ThresholdMBS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ThresholdMBS_r18(ThresholdMBS_r18& value)
{
    if (value.has_rsrp_r18) {
    }
    if (value.has_rsrq_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultList2UTRA(Encoder& enc, const MeasResultList2UTRA& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2UTRA_FDD_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultList2UTRA(Decoder& dec, MeasResultList2UTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2UTRA_FDD_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResult2UTRA_FDD_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2UTRA_FDD_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2UTRA_FDD_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultList2UTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultList2UTRA(MeasResultList2UTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2UTRA_FDD_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultList2EUTRA(Encoder& enc, const MeasResultList2EUTRA& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2EUTRA_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultList2EUTRA(Decoder& dec, MeasResultList2EUTRA& value)
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
    Free_MeasResultList2EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultList2EUTRA(MeasResultList2EUTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2EUTRA_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultList2NR(Encoder& enc, const MeasResultList2NR& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2NR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultList2NR(Decoder& dec, MeasResultList2NR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2NR*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2NR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultList2NR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultList2NR(MeasResultList2NR& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2NR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FailureReportMCG_r16(Encoder& enc, const FailureReportMCG_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_failureType_r16);
    enc.WriteBit(value.has_measResultFreqList_r16);
    enc.WriteBit(value.has_measResultFreqListEUTRA_r16);
    enc.WriteBit(value.measResultSCG_r16 != nullptr);
    enc.WriteBit(value.has_measResultSCG_EUTRA_r16);
    enc.WriteBit(value.has_measResultFreqListUTRA_FDD_r16);
    if (value.has_failureType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.failureType_r16), 0, 7);
    }
    if (value.has_measResultFreqList_r16) {
        Encode_MeasResultList2NR(enc, value.measResultFreqList_r16);
    }
    if (value.has_measResultFreqListEUTRA_r16) {
        Encode_MeasResultList2EUTRA(enc, value.measResultFreqListEUTRA_r16);
    }
    if (value.measResultSCG_r16 != nullptr) {
        if (value.measResultSCG_r16 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_MeasResultSCG_Failure(enc, *value.measResultSCG_r16);
        }
    }
    if (value.has_measResultSCG_EUTRA_r16) {
        enc.WriteSemiConstrainedOctetString(value.measResultSCG_EUTRA_r16.bytes, value.measResultSCG_EUTRA_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_measResultFreqListUTRA_FDD_r16) {
        Encode_MeasResultList2UTRA(enc, value.measResultFreqListUTRA_FDD_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportMCG_r16(Decoder& dec, FailureReportMCG_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.failureType_r16 = (FailureReportMCG_r16_FailureType_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_MeasResultList2NR(dec, value.measResultFreqList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasResultList2EUTRA(dec, value.measResultFreqListEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        MeasResultSCG_Failure* containing_value = (MeasResultSCG_Failure*)std::malloc(sizeof(MeasResultSCG_Failure));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_MeasResultSCG_Failure(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_MeasResultSCG_Failure(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_MeasResultSCG_Failure(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.measResultSCG_r16 = containing_value;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.measResultSCG_EUTRA_r16.bytes = string_bytes;
        value.measResultSCG_EUTRA_r16.length = string_length;
    }
    if (present_5) {
        if (Decode_MeasResultList2UTRA(dec, value.measResultFreqListUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportMCG_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportMCG_r16(FailureReportMCG_r16& value)
{
    if (value.has_failureType_r16) {
    }
    if (value.has_measResultFreqList_r16) {
        Free_MeasResultList2NR(value.measResultFreqList_r16);
    }
    if (value.has_measResultFreqListEUTRA_r16) {
        Free_MeasResultList2EUTRA(value.measResultFreqListEUTRA_r16);
    }
    if (value.measResultSCG_r16 != nullptr) {
        if (value.measResultSCG_r16 != nullptr) {
            Free_MeasResultSCG_Failure(*value.measResultSCG_r16);
            std::free(value.measResultSCG_r16);
            value.measResultSCG_r16 = nullptr;
        }
    }
    if (value.has_measResultSCG_EUTRA_r16) {
        std::free(value.measResultSCG_EUTRA_r16.bytes);
        value.measResultSCG_EUTRA_r16.bytes = nullptr;
        value.measResultSCG_EUTRA_r16.length = 0;
    }
    if (value.has_measResultFreqListUTRA_FDD_r16) {
        Free_MeasResultList2UTRA(value.measResultFreqListUTRA_FDD_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MCGFailureInformation_r16_IEs_NonCriticalExtension(Encoder& enc, const MCGFailureInformation_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MCGFailureInformation_r16_IEs_NonCriticalExtension(Decoder& dec, MCGFailureInformation_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCGFailureInformation_r16_IEs_NonCriticalExtension(MCGFailureInformation_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MCGFailureInformation_r16_IEs(Encoder& enc, const MCGFailureInformation_r16_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_failureReportMCG_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_failureReportMCG_r16) {
        Encode_FailureReportMCG_r16(enc, value.failureReportMCG_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MCGFailureInformation_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MCGFailureInformation_r16_IEs(Decoder& dec, MCGFailureInformation_r16_IEs& value)
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
        if (Decode_FailureReportMCG_r16(dec, value.failureReportMCG_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_MCGFailureInformation_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MCGFailureInformation_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCGFailureInformation_r16_IEs(MCGFailureInformation_r16_IEs& value)
{
    if (value.has_failureReportMCG_r16) {
        Free_FailureReportMCG_r16(value.failureReportMCG_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MCGFailureInformation_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MCGFailureInformation_r16_CriticalExtensionsFuture(Encoder& enc, const MCGFailureInformation_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MCGFailureInformation_r16_CriticalExtensionsFuture(Decoder& dec, MCGFailureInformation_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCGFailureInformation_r16_CriticalExtensionsFuture(MCGFailureInformation_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MCGFailureInformation_r16_CriticalExtensions(Encoder& enc, const MCGFailureInformation_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MCGFailureInformation_r16_CriticalExtensions_Tag_mcgFailureInformation_r16:
        Encode_MCGFailureInformation_r16_IEs(enc, value.u.mcgFailureInformation_r16);
        break;
    case MCGFailureInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MCGFailureInformation_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MCGFailureInformation_r16_CriticalExtensions(Decoder& dec, MCGFailureInformation_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MCGFailureInformation_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MCGFailureInformation_r16_CriticalExtensions_Tag_mcgFailureInformation_r16: {
        if (Decode_MCGFailureInformation_r16_IEs(dec, value.u.mcgFailureInformation_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MCGFailureInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MCGFailureInformation_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MCGFailureInformation_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCGFailureInformation_r16_CriticalExtensions(MCGFailureInformation_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case MCGFailureInformation_r16_CriticalExtensions_Tag_mcgFailureInformation_r16:
        Free_MCGFailureInformation_r16_IEs(value.u.mcgFailureInformation_r16);
        break;
    case MCGFailureInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MCGFailureInformation_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MCGFailureInformation_r16(Encoder& enc, const MCGFailureInformation_r16& value)
{
    (void)value;
    Encode_MCGFailureInformation_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MCGFailureInformation_r16(Decoder& dec, MCGFailureInformation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MCGFailureInformation_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MCGFailureInformation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCGFailureInformation_r16(MCGFailureInformation_r16& value)
{
    Free_MCGFailureInformation_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultListUTRA_FDD_r16(Encoder& enc, const MeasResultListUTRA_FDD_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultUTRA_FDD_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListUTRA_FDD_r16(Decoder& dec, MeasResultListUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultUTRA_FDD_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultUTRA_FDD_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultUTRA_FDD_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultUTRA_FDD_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListUTRA_FDD_r16(MeasResultListUTRA_FDD_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultUTRA_FDD_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResult2UTRA_FDD_r16(Encoder& enc, const MeasResult2UTRA_FDD_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 16383);
    Encode_MeasResultListUTRA_FDD_r16(enc, value.measResultNeighCellList_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResult2UTRA_FDD_r16(Decoder& dec, MeasResult2UTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16383, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueUTRA_FDD_r16)tmp_value;
    }
    {
        if (Decode_MeasResultListUTRA_FDD_r16(dec, value.measResultNeighCellList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResult2UTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResult2UTRA_FDD_r16(MeasResult2UTRA_FDD_r16& value)
{
    Free_MeasResultListUTRA_FDD_r16(value.measResultNeighCellList_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultCellSFTD_NR(Encoder& enc, const MeasResultCellSFTD_NR& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp_Result);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.sfn_OffsetResult), 0, 1023);
    enc.WriteConstrainedInteger((std::int64_t)(value.frameBoundaryOffsetResult), -30720, 30719);
    if (value.has_rsrp_Result) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_Result), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultCellSFTD_NR(Decoder& dec, MeasResultCellSFTD_NR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sfn_OffsetResult = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30720, 30719, tmp_value)) { goto fail; }
        value.frameBoundaryOffsetResult = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_Result = (RSRP_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultCellSFTD_NR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultCellSFTD_NR(MeasResultCellSFTD_NR& value)
{
    if (value.has_rsrp_Result) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultSFTD_EUTRA(Encoder& enc, const MeasResultSFTD_EUTRA& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp_Result);
    enc.WriteConstrainedInteger((std::int64_t)(value.eutra_PhysCellId), 0, 503);
    enc.WriteConstrainedInteger((std::int64_t)(value.sfn_OffsetResult), 0, 1023);
    enc.WriteConstrainedInteger((std::int64_t)(value.frameBoundaryOffsetResult), -30720, 30719);
    if (value.has_rsrp_Result) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_Result), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultSFTD_EUTRA(Decoder& dec, MeasResultSFTD_EUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.eutra_PhysCellId = (EUTRA_PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sfn_OffsetResult = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30720, 30719, tmp_value)) { goto fail; }
        value.frameBoundaryOffsetResult = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_Result = (RSRP_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSFTD_EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSFTD_EUTRA(MeasResultSFTD_EUTRA& value)
{
    if (value.has_rsrp_Result) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultServFreqListEUTRA_SCG(Encoder& enc, const MeasResultServFreqListEUTRA_SCG& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2EUTRA(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultServFreqListEUTRA_SCG(Decoder& dec, MeasResultServFreqListEUTRA_SCG& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2EUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResult2EUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2EUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2EUTRA(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultServFreqListEUTRA_SCG(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultServFreqListEUTRA_SCG(MeasResultServFreqListEUTRA_SCG& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2EUTRA(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultServFreqListNR_SCG(Encoder& enc, const MeasResultServFreqListNR_SCG& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResult2NR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultServFreqListNR_SCG(Decoder& dec, MeasResultServFreqListNR_SCG& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResult2NR*)std::malloc((std::size_t)value.count * sizeof(MeasResult2NR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResult2NR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResult2NR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultServFreqListNR_SCG(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultServFreqListNR_SCG(MeasResultServFreqListNR_SCG& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResult2NR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults_ExtGroup1(Encoder& enc, const MeasResults_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultServFreqListEUTRA_SCG);
    enc.WriteBit(value.has_measResultServFreqListNR_SCG);
    enc.WriteBit(value.has_measResultSFTD_EUTRA);
    enc.WriteBit(value.has_measResultSFTD_NR);
    if (value.has_measResultServFreqListEUTRA_SCG) {
        Encode_MeasResultServFreqListEUTRA_SCG(enc, value.measResultServFreqListEUTRA_SCG);
    }
    if (value.has_measResultServFreqListNR_SCG) {
        Encode_MeasResultServFreqListNR_SCG(enc, value.measResultServFreqListNR_SCG);
    }
    if (value.has_measResultSFTD_EUTRA) {
        Encode_MeasResultSFTD_EUTRA(enc, value.measResultSFTD_EUTRA);
    }
    if (value.has_measResultSFTD_NR) {
        Encode_MeasResultCellSFTD_NR(enc, value.measResultSFTD_NR);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults_ExtGroup1(Decoder& dec, MeasResults_ExtGroup1& value)
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
        if (Decode_MeasResultServFreqListEUTRA_SCG(dec, value.measResultServFreqListEUTRA_SCG) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultServFreqListNR_SCG(dec, value.measResultServFreqListNR_SCG) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasResultSFTD_EUTRA(dec, value.measResultSFTD_EUTRA) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MeasResultCellSFTD_NR(dec, value.measResultSFTD_NR) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults_ExtGroup1(MeasResults_ExtGroup1& value)
{
    if (value.has_measResultServFreqListEUTRA_SCG) {
        Free_MeasResultServFreqListEUTRA_SCG(value.measResultServFreqListEUTRA_SCG);
    }
    if (value.has_measResultServFreqListNR_SCG) {
        Free_MeasResultServFreqListNR_SCG(value.measResultServFreqListNR_SCG);
    }
    if (value.has_measResultSFTD_EUTRA) {
        Free_MeasResultSFTD_EUTRA(value.measResultSFTD_EUTRA);
    }
    if (value.has_measResultSFTD_NR) {
        Free_MeasResultCellSFTD_NR(value.measResultSFTD_NR);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultCellListSFTD_NR(Encoder& enc, const MeasResultCellListSFTD_NR& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultCellSFTD_NR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultCellListSFTD_NR(Decoder& dec, MeasResultCellListSFTD_NR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultCellSFTD_NR*)std::malloc((std::size_t)value.count * sizeof(MeasResultCellSFTD_NR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultCellSFTD_NR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultCellSFTD_NR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultCellListSFTD_NR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultCellListSFTD_NR(MeasResultCellListSFTD_NR& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultCellSFTD_NR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults_ExtGroup2(Encoder& enc, const MeasResults_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultCellListSFTD_NR);
    if (value.has_measResultCellListSFTD_NR) {
        Encode_MeasResultCellListSFTD_NR(enc, value.measResultCellListSFTD_NR);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults_ExtGroup2(Decoder& dec, MeasResults_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultCellListSFTD_NR(dec, value.measResultCellListSFTD_NR) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults_ExtGroup2(MeasResults_ExtGroup2& value)
{
    if (value.has_measResultCellListSFTD_NR) {
        Free_MeasResultCellListSFTD_NR(value.measResultCellListSFTD_NR);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CommonLocationInfo_r16(Encoder& enc, const CommonLocationInfo_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_gnss_TOD_msec_r16);
    enc.WriteBit(value.has_locationTimestamp_r16);
    enc.WriteBit(value.has_locationCoordinate_r16);
    enc.WriteBit(value.has_locationError_r16);
    enc.WriteBit(value.has_locationSource_r16);
    enc.WriteBit(value.has_velocityEstimate_r16);
    if (value.has_gnss_TOD_msec_r16) {
        enc.WriteSemiConstrainedOctetString(value.gnss_TOD_msec_r16.bytes, value.gnss_TOD_msec_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_locationTimestamp_r16) {
        enc.WriteSemiConstrainedOctetString(value.locationTimestamp_r16.bytes, value.locationTimestamp_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_locationCoordinate_r16) {
        enc.WriteSemiConstrainedOctetString(value.locationCoordinate_r16.bytes, value.locationCoordinate_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_locationError_r16) {
        enc.WriteSemiConstrainedOctetString(value.locationError_r16.bytes, value.locationError_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_locationSource_r16) {
        enc.WriteSemiConstrainedOctetString(value.locationSource_r16.bytes, value.locationSource_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_velocityEstimate_r16) {
        enc.WriteSemiConstrainedOctetString(value.velocityEstimate_r16.bytes, value.velocityEstimate_r16.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_CommonLocationInfo_r16(Decoder& dec, CommonLocationInfo_r16& value)
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
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.gnss_TOD_msec_r16.bytes = string_bytes;
        value.gnss_TOD_msec_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.locationTimestamp_r16.bytes = string_bytes;
        value.locationTimestamp_r16.length = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.locationCoordinate_r16.bytes = string_bytes;
        value.locationCoordinate_r16.length = string_length;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.locationError_r16.bytes = string_bytes;
        value.locationError_r16.length = string_length;
    }
    if (present_4) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.locationSource_r16.bytes = string_bytes;
        value.locationSource_r16.length = string_length;
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.velocityEstimate_r16.bytes = string_bytes;
        value.velocityEstimate_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CommonLocationInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CommonLocationInfo_r16(CommonLocationInfo_r16& value)
{
    if (value.has_gnss_TOD_msec_r16) {
        std::free(value.gnss_TOD_msec_r16.bytes);
        value.gnss_TOD_msec_r16.bytes = nullptr;
        value.gnss_TOD_msec_r16.length = 0;
    }
    if (value.has_locationTimestamp_r16) {
        std::free(value.locationTimestamp_r16.bytes);
        value.locationTimestamp_r16.bytes = nullptr;
        value.locationTimestamp_r16.length = 0;
    }
    if (value.has_locationCoordinate_r16) {
        std::free(value.locationCoordinate_r16.bytes);
        value.locationCoordinate_r16.bytes = nullptr;
        value.locationCoordinate_r16.length = 0;
    }
    if (value.has_locationError_r16) {
        std::free(value.locationError_r16.bytes);
        value.locationError_r16.bytes = nullptr;
        value.locationError_r16.length = 0;
    }
    if (value.has_locationSource_r16) {
        std::free(value.locationSource_r16.bytes);
        value.locationSource_r16.bytes = nullptr;
        value.locationSource_r16.length = 0;
    }
    if (value.has_velocityEstimate_r16) {
        std::free(value.velocityEstimate_r16.bytes);
        value.velocityEstimate_r16.bytes = nullptr;
        value.velocityEstimate_r16.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Sensor_LocationInfo_r16(Encoder& enc, const Sensor_LocationInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sensor_MeasurementInformation_r16);
    enc.WriteBit(value.has_sensor_MotionInformation_r16);
    if (value.has_sensor_MeasurementInformation_r16) {
        enc.WriteSemiConstrainedOctetString(value.sensor_MeasurementInformation_r16.bytes, value.sensor_MeasurementInformation_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_sensor_MotionInformation_r16) {
        enc.WriteSemiConstrainedOctetString(value.sensor_MotionInformation_r16.bytes, value.sensor_MotionInformation_r16.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_Sensor_LocationInfo_r16(Decoder& dec, Sensor_LocationInfo_r16& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sensor_MeasurementInformation_r16.bytes = string_bytes;
        value.sensor_MeasurementInformation_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sensor_MotionInformation_r16.bytes = string_bytes;
        value.sensor_MotionInformation_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Sensor_LocationInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Sensor_LocationInfo_r16(Sensor_LocationInfo_r16& value)
{
    if (value.has_sensor_MeasurementInformation_r16) {
        std::free(value.sensor_MeasurementInformation_r16.bytes);
        value.sensor_MeasurementInformation_r16.bytes = nullptr;
        value.sensor_MeasurementInformation_r16.length = 0;
    }
    if (value.has_sensor_MotionInformation_r16) {
        std::free(value.sensor_MotionInformation_r16.bytes);
        value.sensor_MotionInformation_r16.bytes = nullptr;
        value.sensor_MotionInformation_r16.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LogMeasResultListBT_r16(Encoder& enc, const LogMeasResultListBT_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_LogMeasResultBT_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasResultListBT_r16(Decoder& dec, LogMeasResultListBT_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (LogMeasResultBT_r16*)std::malloc((std::size_t)value.count * sizeof(LogMeasResultBT_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(LogMeasResultBT_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_LogMeasResultBT_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasResultListBT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasResultListBT_r16(LogMeasResultListBT_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_LogMeasResultBT_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LogMeasResultListWLAN_r16(Encoder& enc, const LogMeasResultListWLAN_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_LogMeasResultWLAN_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasResultListWLAN_r16(Decoder& dec, LogMeasResultListWLAN_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (LogMeasResultWLAN_r16*)std::malloc((std::size_t)value.count * sizeof(LogMeasResultWLAN_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(LogMeasResultWLAN_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_LogMeasResultWLAN_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasResultListWLAN_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasResultListWLAN_r16(LogMeasResultListWLAN_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_LogMeasResultWLAN_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LocationInfo_r16(Encoder& enc, const LocationInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_commonLocationInfo_r16);
    enc.WriteBit(value.has_bt_LocationInfo_r16);
    enc.WriteBit(value.has_wlan_LocationInfo_r16);
    enc.WriteBit(value.has_sensor_LocationInfo_r16);
    if (value.has_commonLocationInfo_r16) {
        Encode_CommonLocationInfo_r16(enc, value.commonLocationInfo_r16);
    }
    if (value.has_bt_LocationInfo_r16) {
        Encode_LogMeasResultListBT_r16(enc, value.bt_LocationInfo_r16);
    }
    if (value.has_wlan_LocationInfo_r16) {
        Encode_LogMeasResultListWLAN_r16(enc, value.wlan_LocationInfo_r16);
    }
    if (value.has_sensor_LocationInfo_r16) {
        Encode_Sensor_LocationInfo_r16(enc, value.sensor_LocationInfo_r16);
    }
    return enc.Error();
}

ErrorCode Decode_LocationInfo_r16(Decoder& dec, LocationInfo_r16& value)
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
        if (Decode_CommonLocationInfo_r16(dec, value.commonLocationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_LogMeasResultListBT_r16(dec, value.bt_LocationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_LogMeasResultListWLAN_r16(dec, value.wlan_LocationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_Sensor_LocationInfo_r16(dec, value.sensor_LocationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LocationInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationInfo_r16(LocationInfo_r16& value)
{
    if (value.has_commonLocationInfo_r16) {
        Free_CommonLocationInfo_r16(value.commonLocationInfo_r16);
    }
    if (value.has_bt_LocationInfo_r16) {
        Free_LogMeasResultListBT_r16(value.bt_LocationInfo_r16);
    }
    if (value.has_wlan_LocationInfo_r16) {
        Free_LogMeasResultListWLAN_r16(value.wlan_LocationInfo_r16);
    }
    if (value.has_sensor_LocationInfo_r16) {
        Free_Sensor_LocationInfo_r16(value.sensor_LocationInfo_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultForRSSI_r16(Encoder& enc, const MeasResultForRSSI_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rssi_Result_r16), 0, 76);
    enc.WriteConstrainedInteger((std::int64_t)(value.channelOccupancy_r16), 0, 100);
    return enc.Error();
}

ErrorCode Decode_MeasResultForRSSI_r16(Decoder& dec, MeasResultForRSSI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.rssi_Result_r16 = (RSSI_Range_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.channelOccupancy_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultForRSSI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultForRSSI_r16(MeasResultForRSSI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultListSRS_RSRP_r16(Encoder& enc, const MeasResultListSRS_RSRP_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultSRS_RSRP_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListSRS_RSRP_r16(Decoder& dec, MeasResultListSRS_RSRP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultSRS_RSRP_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultSRS_RSRP_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultSRS_RSRP_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultSRS_RSRP_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListSRS_RSRP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListSRS_RSRP_r16(MeasResultListSRS_RSRP_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultSRS_RSRP_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultListCLI_RSSI_r16(Encoder& enc, const MeasResultListCLI_RSSI_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultCLI_RSSI_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListCLI_RSSI_r16(Decoder& dec, MeasResultListCLI_RSSI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultCLI_RSSI_r16*)std::malloc((std::size_t)value.count * sizeof(MeasResultCLI_RSSI_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultCLI_RSSI_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultCLI_RSSI_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListCLI_RSSI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListCLI_RSSI_r16(MeasResultListCLI_RSSI_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultCLI_RSSI_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultCLI_r16(Encoder& enc, const MeasResultCLI_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultListSRS_RSRP_r16);
    enc.WriteBit(value.has_measResultListCLI_RSSI_r16);
    if (value.has_measResultListSRS_RSRP_r16) {
        Encode_MeasResultListSRS_RSRP_r16(enc, value.measResultListSRS_RSRP_r16);
    }
    if (value.has_measResultListCLI_RSSI_r16) {
        Encode_MeasResultListCLI_RSSI_r16(enc, value.measResultListCLI_RSSI_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultCLI_r16(Decoder& dec, MeasResultCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasResultListSRS_RSRP_r16(dec, value.measResultListSRS_RSRP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultListCLI_RSSI_r16(dec, value.measResultListCLI_RSSI_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultCLI_r16(MeasResultCLI_r16& value)
{
    if (value.has_measResultListSRS_RSRP_r16) {
        Free_MeasResultListSRS_RSRP_r16(value.measResultListSRS_RSRP_r16);
    }
    if (value.has_measResultListCLI_RSSI_r16) {
        Free_MeasResultListCLI_RSSI_r16(value.measResultListCLI_RSSI_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UL_PDCP_DelayValueResultList_r16(Encoder& enc, const UL_PDCP_DelayValueResultList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 29u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UL_PDCP_DelayValueResult_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UL_PDCP_DelayValueResultList_r16(Decoder& dec, UL_PDCP_DelayValueResultList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 29u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 29u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UL_PDCP_DelayValueResult_r16*)std::malloc((std::size_t)value.count * sizeof(UL_PDCP_DelayValueResult_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UL_PDCP_DelayValueResult_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UL_PDCP_DelayValueResult_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UL_PDCP_DelayValueResultList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_PDCP_DelayValueResultList_r16(UL_PDCP_DelayValueResultList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UL_PDCP_DelayValueResult_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultNR_SL_r16(Encoder& enc, const MeasResultNR_SL_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.measResultListCBR_NR_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measResultListCBR_NR_r16_count; ++i) {
    Encode_MeasResultCBR_NR_r16(enc, value.measResultListCBR_NR_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_SL_r16(Decoder& dec, MeasResultNR_SL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.measResultListCBR_NR_r16_count)) { goto fail; }
if (value.measResultListCBR_NR_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measResultListCBR_NR_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measResultListCBR_NR_r16_count > 0u) {
    value.measResultListCBR_NR_r16_items = (MeasResultCBR_NR_r16*)std::malloc((std::size_t)value.measResultListCBR_NR_r16_count * sizeof(MeasResultCBR_NR_r16));
    if (value.measResultListCBR_NR_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measResultListCBR_NR_r16_items, 0, (std::size_t)value.measResultListCBR_NR_r16_count * sizeof(MeasResultCBR_NR_r16));
}
for (std::uint32_t i = 0; i < value.measResultListCBR_NR_r16_count; ++i) {
    if (Decode_MeasResultCBR_NR_r16(dec, value.measResultListCBR_NR_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_SL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_SL_r16(MeasResultNR_SL_r16& value)
{
    if (value.measResultListCBR_NR_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.measResultListCBR_NR_r16_count; ++i) {
            Free_MeasResultCBR_NR_r16(value.measResultListCBR_NR_r16_items[i]);
        }
        std::free(value.measResultListCBR_NR_r16_items);
        value.measResultListCBR_NR_r16_items = nullptr;
    }
    value.measResultListCBR_NR_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultsSL_r16_MeasResultsListSL_r16(Encoder& enc, const MeasResultsSL_r16_MeasResultsListSL_r16& value)
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
    case MeasResultsSL_r16_MeasResultsListSL_r16_Tag_measResultNR_SL_r16:
        Encode_MeasResultNR_SL_r16(enc, value.u.measResultNR_SL_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultsSL_r16_MeasResultsListSL_r16(Decoder& dec, MeasResultsSL_r16_MeasResultsListSL_r16& value)
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
        value.tag = (MeasResultsSL_r16_MeasResultsListSL_r16_Tag)(1 + extension_index);
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
    value.tag = (MeasResultsSL_r16_MeasResultsListSL_r16_Tag)0;
    switch (value.tag) {
    case MeasResultsSL_r16_MeasResultsListSL_r16_Tag_measResultNR_SL_r16: {
        if (Decode_MeasResultNR_SL_r16(dec, value.u.measResultNR_SL_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsSL_r16_MeasResultsListSL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsSL_r16_MeasResultsListSL_r16(MeasResultsSL_r16_MeasResultsListSL_r16& value)
{
    switch (value.tag) {
    case MeasResultsSL_r16_MeasResultsListSL_r16_Tag_measResultNR_SL_r16:
        Free_MeasResultNR_SL_r16(value.u.measResultNR_SL_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultsSL_r16(Encoder& enc, const MeasResultsSL_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasResultsSL_r16_MeasResultsListSL_r16(enc, value.measResultsListSL_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultsSL_r16(Decoder& dec, MeasResultsSL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasResultsSL_r16_MeasResultsListSL_r16(dec, value.measResultsListSL_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsSL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsSL_r16(MeasResultsSL_r16& value)
{
    Free_MeasResultsSL_r16_MeasResultsListSL_r16(value.measResultsListSL_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults_ExtGroup3(Encoder& enc, const MeasResults_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultForRSSI_r16);
    enc.WriteBit(value.has_locationInfo_r16);
    enc.WriteBit(value.has_ul_PDCP_DelayValueResultList_r16);
    enc.WriteBit(value.has_measResultsSL_r16);
    enc.WriteBit(value.has_measResultCLI_r16);
    if (value.has_measResultForRSSI_r16) {
        Encode_MeasResultForRSSI_r16(enc, value.measResultForRSSI_r16);
    }
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    if (value.has_ul_PDCP_DelayValueResultList_r16) {
        Encode_UL_PDCP_DelayValueResultList_r16(enc, value.ul_PDCP_DelayValueResultList_r16);
    }
    if (value.has_measResultsSL_r16) {
        Encode_MeasResultsSL_r16(enc, value.measResultsSL_r16);
    }
    if (value.has_measResultCLI_r16) {
        Encode_MeasResultCLI_r16(enc, value.measResultCLI_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults_ExtGroup3(Decoder& dec, MeasResults_ExtGroup3& value)
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
        if (Decode_MeasResultForRSSI_r16(dec, value.measResultForRSSI_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UL_PDCP_DelayValueResultList_r16(dec, value.ul_PDCP_DelayValueResultList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MeasResultsSL_r16(dec, value.measResultsSL_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MeasResultCLI_r16(dec, value.measResultCLI_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults_ExtGroup3(MeasResults_ExtGroup3& value)
{
    if (value.has_measResultForRSSI_r16) {
        Free_MeasResultForRSSI_r16(value.measResultForRSSI_r16);
    }
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    if (value.has_ul_PDCP_DelayValueResultList_r16) {
        Free_UL_PDCP_DelayValueResultList_r16(value.ul_PDCP_DelayValueResultList_r16);
    }
    if (value.has_measResultsSL_r16) {
        Free_MeasResultsSL_r16(value.measResultsSL_r16);
    }
    if (value.has_measResultCLI_r16) {
        Free_MeasResultCLI_r16(value.measResultCLI_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UL_PDCP_ExcessDelayResultList_r17(Encoder& enc, const UL_PDCP_ExcessDelayResultList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 29u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UL_PDCP_ExcessDelayResult_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UL_PDCP_ExcessDelayResultList_r17(Decoder& dec, UL_PDCP_ExcessDelayResultList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 29u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 29u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UL_PDCP_ExcessDelayResult_r17*)std::malloc((std::size_t)value.count * sizeof(UL_PDCP_ExcessDelayResult_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UL_PDCP_ExcessDelayResult_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UL_PDCP_ExcessDelayResult_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UL_PDCP_ExcessDelayResultList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_PDCP_ExcessDelayResultList_r17(UL_PDCP_ExcessDelayResultList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UL_PDCP_ExcessDelayResult_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultRxTxTimeDiff_r17(Encoder& enc, const MeasResultRxTxTimeDiff_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rxTxTimeDiff_ue_r17);
    if (value.has_rxTxTimeDiff_ue_r17) {
        Encode_RxTxTimeDiff_r17(enc, value.rxTxTimeDiff_ue_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultRxTxTimeDiff_r17(Decoder& dec, MeasResultRxTxTimeDiff_r17& value)
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
        if (Decode_RxTxTimeDiff_r17(dec, value.rxTxTimeDiff_ue_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultRxTxTimeDiff_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultRxTxTimeDiff_r17(MeasResultRxTxTimeDiff_r17& value)
{
    if (value.has_rxTxTimeDiff_ue_r17) {
        Free_RxTxTimeDiff_r17(value.rxTxTimeDiff_ue_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults_ExtGroup4(Encoder& enc, const MeasResults_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_measResultRxTxTimeDiff_r17);
    enc.WriteBit(value.has_sl_MeasResultServingRelay_r17);
    enc.WriteBit(value.has_ul_PDCP_ExcessDelayResultList_r17);
    enc.WriteBit(value.has_coarseLocationInfo_r17);
    if (value.has_measResultRxTxTimeDiff_r17) {
        Encode_MeasResultRxTxTimeDiff_r17(enc, value.measResultRxTxTimeDiff_r17);
    }
    if (value.has_sl_MeasResultServingRelay_r17) {
        enc.WriteSemiConstrainedOctetString(value.sl_MeasResultServingRelay_r17.bytes, value.sl_MeasResultServingRelay_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_ul_PDCP_ExcessDelayResultList_r17) {
        Encode_UL_PDCP_ExcessDelayResultList_r17(enc, value.ul_PDCP_ExcessDelayResultList_r17);
    }
    if (value.has_coarseLocationInfo_r17) {
        enc.WriteSemiConstrainedOctetString(value.coarseLocationInfo_r17.bytes, value.coarseLocationInfo_r17.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults_ExtGroup4(Decoder& dec, MeasResults_ExtGroup4& value)
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
        if (Decode_MeasResultRxTxTimeDiff_r17(dec, value.measResultRxTxTimeDiff_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_MeasResultServingRelay_r17.bytes = string_bytes;
        value.sl_MeasResultServingRelay_r17.length = string_length;
    }
    if (present_2) {
        if (Decode_UL_PDCP_ExcessDelayResultList_r17(dec, value.ul_PDCP_ExcessDelayResultList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.coarseLocationInfo_r17.bytes = string_bytes;
        value.coarseLocationInfo_r17.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults_ExtGroup4(MeasResults_ExtGroup4& value)
{
    if (value.has_measResultRxTxTimeDiff_r17) {
        Free_MeasResultRxTxTimeDiff_r17(value.measResultRxTxTimeDiff_r17);
    }
    if (value.has_sl_MeasResultServingRelay_r17) {
        std::free(value.sl_MeasResultServingRelay_r17.bytes);
        value.sl_MeasResultServingRelay_r17.bytes = nullptr;
        value.sl_MeasResultServingRelay_r17.length = 0;
    }
    if (value.has_ul_PDCP_ExcessDelayResultList_r17) {
        Free_UL_PDCP_ExcessDelayResultList_r17(value.ul_PDCP_ExcessDelayResultList_r17);
    }
    if (value.has_coarseLocationInfo_r17) {
        std::free(value.coarseLocationInfo_r17.bytes);
        value.coarseLocationInfo_r17.bytes = nullptr;
        value.coarseLocationInfo_r17.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults_ExtGroup5(Encoder& enc, const MeasResults_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_altitudeUE_r18);
    if (value.has_altitudeUE_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.altitudeUE_r18), -420, 10000);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults_ExtGroup5(Decoder& dec, MeasResults_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.altitudeUE_r18 = (Altitude_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults_ExtGroup5(MeasResults_ExtGroup5& value)
{
    if (value.has_altitudeUE_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultServMOList(Encoder& enc, const MeasResultServMOList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultServMO(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultServMOList(Decoder& dec, MeasResultServMOList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultServMO*)std::malloc((std::size_t)value.count * sizeof(MeasResultServMO));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultServMO));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultServMO(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultServMOList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultServMOList(MeasResultServMOList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultServMO(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultListNR(Encoder& enc, const MeasResultListNR& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultNR(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListNR(Decoder& dec, MeasResultListNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultNR*)std::malloc((std::size_t)value.count * sizeof(MeasResultNR));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultNR));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultNR(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListNR(MeasResultListNR& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultNR(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResultListEUTRA(Encoder& enc, const MeasResultListEUTRA& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultEUTRA(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultListEUTRA(Decoder& dec, MeasResultListEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultEUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResultEUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultEUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultEUTRA(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultListEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultListEUTRA(MeasResultListEUTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultEUTRA(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults_MeasResultNeighCells(Encoder& enc, const MeasResults_MeasResultNeighCells& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 4) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
        Encoder sub;
        switch (value.tag) {
        case MeasResults_MeasResultNeighCells_Tag_measResultListEUTRA:
            Encode_MeasResultListEUTRA(sub, value.u.measResultListEUTRA);
            break;
        case MeasResults_MeasResultNeighCells_Tag_measResultListUTRA_FDD_r16:
            Encode_MeasResultListUTRA_FDD_r16(sub, value.u.measResultListUTRA_FDD_r16);
            break;
        case MeasResults_MeasResultNeighCells_Tag_sl_MeasResultsCandRelay_r17:
            sub.WriteSemiConstrainedOctetString(value.u.sl_MeasResultsCandRelay_r17.bytes, value.u.sl_MeasResultsCandRelay_r17.length, 0, 0xFFFFFFFFu);
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
    case MeasResults_MeasResultNeighCells_Tag_measResultListNR:
        Encode_MeasResultListNR(enc, value.u.measResultListNR);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults_MeasResultNeighCells(Decoder& dec, MeasResults_MeasResultNeighCells& value)
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
        if (extension_index >= 3u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (MeasResults_MeasResultNeighCells_Tag)(1 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case MeasResults_MeasResultNeighCells_Tag_measResultListEUTRA: {
            if (Decode_MeasResultListEUTRA(sub, value.u.measResultListEUTRA) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasResults_MeasResultNeighCells_Tag_measResultListUTRA_FDD_r16: {
            if (Decode_MeasResultListUTRA_FDD_r16(sub, value.u.measResultListUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasResults_MeasResultNeighCells_Tag_sl_MeasResultsCandRelay_r17: {
            std::uint8_t* string_bytes = nullptr;
            std::uint32_t string_length = 0;
            if (!sub.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
            value.u.sl_MeasResultsCandRelay_r17.bytes = string_bytes;
            value.u.sl_MeasResultsCandRelay_r17.length = string_length;
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
    value.tag = (MeasResults_MeasResultNeighCells_Tag)0;
    switch (value.tag) {
    case MeasResults_MeasResultNeighCells_Tag_measResultListNR: {
        if (Decode_MeasResultListNR(dec, value.u.measResultListNR) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults_MeasResultNeighCells(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults_MeasResultNeighCells(MeasResults_MeasResultNeighCells& value)
{
    switch (value.tag) {
    case MeasResults_MeasResultNeighCells_Tag_measResultListNR:
        Free_MeasResultListNR(value.u.measResultListNR);
        break;
    case MeasResults_MeasResultNeighCells_Tag_measResultListEUTRA:
        Free_MeasResultListEUTRA(value.u.measResultListEUTRA);
        break;
    case MeasResults_MeasResultNeighCells_Tag_measResultListUTRA_FDD_r16:
        Free_MeasResultListUTRA_FDD_r16(value.u.measResultListUTRA_FDD_r16);
        break;
    case MeasResults_MeasResultNeighCells_Tag_sl_MeasResultsCandRelay_r17:
        std::free(value.u.sl_MeasResultsCandRelay_r17.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasResults(Encoder& enc, const MeasResults& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultNeighCells);
    enc.WriteConstrainedInteger((std::int64_t)(value.measId), 1, 64);
    Encode_MeasResultServMOList(enc, value.measResultServingMOList);
    if (value.has_measResultNeighCells) {
        Encode_MeasResults_MeasResultNeighCells(enc, value.measResultNeighCells);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(5u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasResults_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasResults_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MeasResults_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MeasResults_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MeasResults_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasResults(Decoder& dec, MeasResults& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.measId = (MeasId)tmp_value;
    }
    {
        if (Decode_MeasResultServMOList(dec, value.measResultServingMOList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResults_MeasResultNeighCells(dec, value.measResultNeighCells) != ErrorCode_Ok) { goto fail; }
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 5u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[5] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_MeasResults_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MeasResults_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_MeasResults_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_MeasResults_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_MeasResults_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup5 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResults(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResults(MeasResults& value)
{
    Free_MeasResultServMOList(value.measResultServingMOList);
    if (value.has_measResultNeighCells) {
        Free_MeasResults_MeasResultNeighCells(value.measResultNeighCells);
    }
    if (value.has_extGroup1) {
        Free_MeasResults_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasResults_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MeasResults_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MeasResults_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MeasResults_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReport_IEs_NonCriticalExtension(Encoder& enc, const MeasurementReport_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MeasurementReport_IEs_NonCriticalExtension(Decoder& dec, MeasurementReport_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReport_IEs_NonCriticalExtension(MeasurementReport_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReport_IEs(Encoder& enc, const MeasurementReport_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_MeasResults(enc, value.measResults);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MeasurementReport_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReport_IEs(Decoder& dec, MeasurementReport_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_MeasResults(dec, value.measResults) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_MeasurementReport_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReport_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReport_IEs(MeasurementReport_IEs& value)
{
    Free_MeasResults(value.measResults);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MeasurementReport_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReport_CriticalExtensionsFuture(Encoder& enc, const MeasurementReport_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MeasurementReport_CriticalExtensionsFuture(Decoder& dec, MeasurementReport_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReport_CriticalExtensionsFuture(MeasurementReport_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReport_CriticalExtensions(Encoder& enc, const MeasurementReport_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MeasurementReport_CriticalExtensions_Tag_measurementReport:
        Encode_MeasurementReport_IEs(enc, value.u.measurementReport);
        break;
    case MeasurementReport_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MeasurementReport_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReport_CriticalExtensions(Decoder& dec, MeasurementReport_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MeasurementReport_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MeasurementReport_CriticalExtensions_Tag_measurementReport: {
        if (Decode_MeasurementReport_IEs(dec, value.u.measurementReport) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MeasurementReport_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MeasurementReport_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReport_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReport_CriticalExtensions(MeasurementReport_CriticalExtensions& value)
{
    switch (value.tag) {
    case MeasurementReport_CriticalExtensions_Tag_measurementReport:
        Free_MeasurementReport_IEs(value.u.measurementReport);
        break;
    case MeasurementReport_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MeasurementReport_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReport(Encoder& enc, const MeasurementReport& value)
{
    (void)value;
    Encode_MeasurementReport_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MeasurementReport(Decoder& dec, MeasurementReport& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasurementReport_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReport(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReport(MeasurementReport& value)
{
    Free_MeasurementReport_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayerList_v1800(Encoder& enc, const MeasurementReportAppLayerList_v1800& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasReportAppLayer_v1800(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayerList_v1800(Decoder& dec, MeasurementReportAppLayerList_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasReportAppLayer_v1800*)std::malloc((std::size_t)value.count * sizeof(MeasReportAppLayer_v1800));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasReportAppLayer_v1800));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasReportAppLayer_v1800(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReportAppLayerList_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayerList_v1800(MeasurementReportAppLayerList_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasReportAppLayer_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(Encoder& enc, const MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(Decoder& dec, MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayer_v1800_IEs(Encoder& enc, const MeasurementReportAppLayer_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_measurementReportAppLayerList_v1800);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_measurementReportAppLayerList_v1800) {
        Encode_MeasurementReportAppLayerList_v1800(enc, value.measurementReportAppLayerList_v1800);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayer_v1800_IEs(Decoder& dec, MeasurementReportAppLayer_v1800_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasurementReportAppLayerList_v1800(dec, value.measurementReportAppLayerList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReportAppLayer_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayer_v1800_IEs(MeasurementReportAppLayer_v1800_IEs& value)
{
    if (value.has_measurementReportAppLayerList_v1800) {
        Free_MeasurementReportAppLayerList_v1800(value.measurementReportAppLayerList_v1800);
    }
    if (value.has_nonCriticalExtension) {
        Free_MeasurementReportAppLayer_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayerList_r17(Encoder& enc, const MeasurementReportAppLayerList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasReportAppLayer_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayerList_r17(Decoder& dec, MeasurementReportAppLayerList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasReportAppLayer_r17*)std::malloc((std::size_t)value.count * sizeof(MeasReportAppLayer_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasReportAppLayer_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasReportAppLayer_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReportAppLayerList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayerList_r17(MeasurementReportAppLayerList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasReportAppLayer_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayer_r17_IEs(Encoder& enc, const MeasurementReportAppLayer_r17_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_MeasurementReportAppLayerList_r17(enc, value.measurementReportAppLayerList_r17);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MeasurementReportAppLayer_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayer_r17_IEs(Decoder& dec, MeasurementReportAppLayer_r17_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_MeasurementReportAppLayerList_r17(dec, value.measurementReportAppLayerList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_MeasurementReportAppLayer_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReportAppLayer_r17_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayer_r17_IEs(MeasurementReportAppLayer_r17_IEs& value)
{
    Free_MeasurementReportAppLayerList_r17(value.measurementReportAppLayerList_r17);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MeasurementReportAppLayer_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(Encoder& enc, const MeasurementReportAppLayer_r17_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(Decoder& dec, MeasurementReportAppLayer_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(MeasurementReportAppLayer_r17_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayer_r17_CriticalExtensions(Encoder& enc, const MeasurementReportAppLayer_r17_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MeasurementReportAppLayer_r17_CriticalExtensions_Tag_measurementReportAppLayer_r17:
        Encode_MeasurementReportAppLayer_r17_IEs(enc, value.u.measurementReportAppLayer_r17);
        break;
    case MeasurementReportAppLayer_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayer_r17_CriticalExtensions(Decoder& dec, MeasurementReportAppLayer_r17_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MeasurementReportAppLayer_r17_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MeasurementReportAppLayer_r17_CriticalExtensions_Tag_measurementReportAppLayer_r17: {
        if (Decode_MeasurementReportAppLayer_r17_IEs(dec, value.u.measurementReportAppLayer_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MeasurementReportAppLayer_r17_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReportAppLayer_r17_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayer_r17_CriticalExtensions(MeasurementReportAppLayer_r17_CriticalExtensions& value)
{
    switch (value.tag) {
    case MeasurementReportAppLayer_r17_CriticalExtensions_Tag_measurementReportAppLayer_r17:
        Free_MeasurementReportAppLayer_r17_IEs(value.u.measurementReportAppLayer_r17);
        break;
    case MeasurementReportAppLayer_r17_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MeasurementReportAppLayer_r17_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasurementReportAppLayer_r17(Encoder& enc, const MeasurementReportAppLayer_r17& value)
{
    (void)value;
    Encode_MeasurementReportAppLayer_r17_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MeasurementReportAppLayer_r17(Decoder& dec, MeasurementReportAppLayer_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasurementReportAppLayer_r17_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasurementReportAppLayer_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasurementReportAppLayer_r17(MeasurementReportAppLayer_r17& value)
{
    Free_MeasurementReportAppLayer_r17_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RAN_VisibleMeasurements_r17_ExtGroup1(Encoder& enc, const RAN_VisibleMeasurements_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pdu_SessionIdListExt_v1800);
    if (value.has_pdu_SessionIdListExt_v1800) {
enc.WriteConstrainedLength(value.pdu_SessionIdListExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdu_SessionIdListExt_v1800_count; ++i) {
    Encode_QFI_List_r18(enc, value.pdu_SessionIdListExt_v1800_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_RAN_VisibleMeasurements_r17_ExtGroup1(Decoder& dec, RAN_VisibleMeasurements_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdu_SessionIdListExt_v1800_count)) { goto fail; }
if (value.pdu_SessionIdListExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdu_SessionIdListExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdu_SessionIdListExt_v1800_count > 0u) {
    value.pdu_SessionIdListExt_v1800_items = (QFI_List_r18*)std::malloc((std::size_t)value.pdu_SessionIdListExt_v1800_count * sizeof(QFI_List_r18));
    if (value.pdu_SessionIdListExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdu_SessionIdListExt_v1800_items, 0, (std::size_t)value.pdu_SessionIdListExt_v1800_count * sizeof(QFI_List_r18));
}
for (std::uint32_t i = 0; i < value.pdu_SessionIdListExt_v1800_count; ++i) {
    if (Decode_QFI_List_r18(dec, value.pdu_SessionIdListExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RAN_VisibleMeasurements_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RAN_VisibleMeasurements_r17_ExtGroup1(RAN_VisibleMeasurements_r17_ExtGroup1& value)
{
    if (value.has_pdu_SessionIdListExt_v1800) {
        if (value.pdu_SessionIdListExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdu_SessionIdListExt_v1800_count; ++i) {
                Free_QFI_List_r18(value.pdu_SessionIdListExt_v1800_items[i]);
            }
            std::free(value.pdu_SessionIdListExt_v1800_items);
            value.pdu_SessionIdListExt_v1800_items = nullptr;
        }
        value.pdu_SessionIdListExt_v1800_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RAN_VisibleMeasurements_r17(Encoder& enc, const RAN_VisibleMeasurements_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_appLayerBufferLevelList_r17);
    enc.WriteBit(value.has_playoutDelayForMediaStartup_r17);
    enc.WriteBit(value.has_pdu_SessionIdList_r17);
    if (value.has_appLayerBufferLevelList_r17) {
enc.WriteConstrainedLength(value.appLayerBufferLevelList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.appLayerBufferLevelList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.appLayerBufferLevelList_r17_items[i]), 0, 30000);
}
    }
    if (value.has_playoutDelayForMediaStartup_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.playoutDelayForMediaStartup_r17), 0, 30000);
    }
    if (value.has_pdu_SessionIdList_r17) {
enc.WriteConstrainedLength(value.pdu_SessionIdList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdu_SessionIdList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pdu_SessionIdList_r17_items[i]), 0, 255);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RAN_VisibleMeasurements_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RAN_VisibleMeasurements_r17(Decoder& dec, RAN_VisibleMeasurements_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.appLayerBufferLevelList_r17_count)) { goto fail; }
if (value.appLayerBufferLevelList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.appLayerBufferLevelList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.appLayerBufferLevelList_r17_count > 0u) {
    value.appLayerBufferLevelList_r17_items = (AppLayerBufferLevel_r17*)std::malloc((std::size_t)value.appLayerBufferLevelList_r17_count * sizeof(AppLayerBufferLevel_r17));
    if (value.appLayerBufferLevelList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.appLayerBufferLevelList_r17_items, 0, (std::size_t)value.appLayerBufferLevelList_r17_count * sizeof(AppLayerBufferLevel_r17));
}
for (std::uint32_t i = 0; i < value.appLayerBufferLevelList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 30000, tmp_value)) { goto fail; }
    value.appLayerBufferLevelList_r17_items[i] = (AppLayerBufferLevel_r17)tmp_value;
}
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30000, tmp_value)) { goto fail; }
        value.playoutDelayForMediaStartup_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdu_SessionIdList_r17_count)) { goto fail; }
if (value.pdu_SessionIdList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdu_SessionIdList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdu_SessionIdList_r17_count > 0u) {
    value.pdu_SessionIdList_r17_items = (PDU_SessionID*)std::malloc((std::size_t)value.pdu_SessionIdList_r17_count * sizeof(PDU_SessionID));
    if (value.pdu_SessionIdList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdu_SessionIdList_r17_items, 0, (std::size_t)value.pdu_SessionIdList_r17_count * sizeof(PDU_SessionID));
}
for (std::uint32_t i = 0; i < value.pdu_SessionIdList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
    value.pdu_SessionIdList_r17_items[i] = (PDU_SessionID)tmp_value;
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
    if (Decode_RAN_VisibleMeasurements_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RAN_VisibleMeasurements_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RAN_VisibleMeasurements_r17(RAN_VisibleMeasurements_r17& value)
{
    if (value.has_appLayerBufferLevelList_r17) {
        if (value.appLayerBufferLevelList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.appLayerBufferLevelList_r17_count; ++i) {
            }
            std::free(value.appLayerBufferLevelList_r17_items);
            value.appLayerBufferLevelList_r17_items = nullptr;
        }
        value.appLayerBufferLevelList_r17_count = 0;
    }
    if (value.has_playoutDelayForMediaStartup_r17) {
    }
    if (value.has_pdu_SessionIdList_r17) {
        if (value.pdu_SessionIdList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pdu_SessionIdList_r17_count; ++i) {
            }
            std::free(value.pdu_SessionIdList_r17_items);
            value.pdu_SessionIdList_r17_items = nullptr;
        }
        value.pdu_SessionIdList_r17_count = 0;
    }
    if (value.has_extGroup1) {
        Free_RAN_VisibleMeasurements_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasReportAppLayer_r17(Encoder& enc, const MeasReportAppLayer_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_measReportAppLayerContainer_r17);
    enc.WriteBit(value.has_appLayerSessionStatus_r17);
    enc.WriteBit(value.has_ran_VisibleMeasurements_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.measConfigAppLayerId_r17), 0, 15);
    if (value.has_measReportAppLayerContainer_r17) {
        enc.WriteSemiConstrainedOctetString(value.measReportAppLayerContainer_r17.bytes, value.measReportAppLayerContainer_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_appLayerSessionStatus_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.appLayerSessionStatus_r17), 0, 1);
    }
    if (value.has_ran_VisibleMeasurements_r17) {
        Encode_RAN_VisibleMeasurements_r17(enc, value.ran_VisibleMeasurements_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasReportAppLayer_r17(Decoder& dec, MeasReportAppLayer_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.measConfigAppLayerId_r17 = (MeasConfigAppLayerId_r17)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.measReportAppLayerContainer_r17.bytes = string_bytes;
        value.measReportAppLayerContainer_r17.length = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.appLayerSessionStatus_r17 = (MeasReportAppLayer_r17_AppLayerSessionStatus_r17)tmp_value;
    }
    if (present_2) {
        if (Decode_RAN_VisibleMeasurements_r17(dec, value.ran_VisibleMeasurements_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasReportAppLayer_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasReportAppLayer_r17(MeasReportAppLayer_r17& value)
{
    if (value.has_measReportAppLayerContainer_r17) {
        std::free(value.measReportAppLayerContainer_r17.bytes);
        value.measReportAppLayerContainer_r17.bytes = nullptr;
        value.measReportAppLayerContainer_r17.length = 0;
    }
    if (value.has_appLayerSessionStatus_r17) {
    }
    if (value.has_ran_VisibleMeasurements_r17) {
        Free_RAN_VisibleMeasurements_r17(value.ran_VisibleMeasurements_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Qoe_AreaScope_r18(Encoder& enc, const Qoe_AreaScope_r18& value)
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
    case Qoe_AreaScope_r18_Tag_cellGlobalIdList:
        Encode_CellGlobalIdList_r16(enc, value.u.cellGlobalIdList);
        break;
    case Qoe_AreaScope_r18_Tag_trackingAreaCodeList:
        Encode_TrackingAreaCodeList_r16(enc, value.u.trackingAreaCodeList);
        break;
    case Qoe_AreaScope_r18_Tag_trackingAreaIdentityList:
        Encode_TrackingAreaIdentityList_r16(enc, value.u.trackingAreaIdentityList);
        break;
    case Qoe_AreaScope_r18_Tag_plmn_IdentityList:
        Encode_PLMN_IdentityList2_r16(enc, value.u.plmn_IdentityList);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_Qoe_AreaScope_r18(Decoder& dec, Qoe_AreaScope_r18& value)
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
        value.tag = (Qoe_AreaScope_r18_Tag)(4 + extension_index);
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
    value.tag = (Qoe_AreaScope_r18_Tag)root_index;
    switch (value.tag) {
    case Qoe_AreaScope_r18_Tag_cellGlobalIdList: {
        if (Decode_CellGlobalIdList_r16(dec, value.u.cellGlobalIdList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case Qoe_AreaScope_r18_Tag_trackingAreaCodeList: {
        if (Decode_TrackingAreaCodeList_r16(dec, value.u.trackingAreaCodeList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case Qoe_AreaScope_r18_Tag_trackingAreaIdentityList: {
        if (Decode_TrackingAreaIdentityList_r16(dec, value.u.trackingAreaIdentityList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case Qoe_AreaScope_r18_Tag_plmn_IdentityList: {
        if (Decode_PLMN_IdentityList2_r16(dec, value.u.plmn_IdentityList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Qoe_AreaScope_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Qoe_AreaScope_r18(Qoe_AreaScope_r18& value)
{
    switch (value.tag) {
    case Qoe_AreaScope_r18_Tag_cellGlobalIdList:
        Free_CellGlobalIdList_r16(value.u.cellGlobalIdList);
        break;
    case Qoe_AreaScope_r18_Tag_trackingAreaCodeList:
        Free_TrackingAreaCodeList_r16(value.u.trackingAreaCodeList);
        break;
    case Qoe_AreaScope_r18_Tag_trackingAreaIdentityList:
        Free_TrackingAreaIdentityList_r16(value.u.trackingAreaIdentityList);
        break;
    case Qoe_AreaScope_r18_Tag_plmn_IdentityList:
        Free_PLMN_IdentityList2_r16(value.u.plmn_IdentityList);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_AvailableRAN_VisibleMetrics_r18(Encoder& enc, const AvailableRAN_VisibleMetrics_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_appLayerBufferLevelList_r18);
    enc.WriteBit(value.has_playoutDelayForMediaStartup_r18);
    if (value.has_appLayerBufferLevelList_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.appLayerBufferLevelList_r18), 0, 0);
    }
    if (value.has_playoutDelayForMediaStartup_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.playoutDelayForMediaStartup_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_AvailableRAN_VisibleMetrics_r18(Decoder& dec, AvailableRAN_VisibleMetrics_r18& value)
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
        value.appLayerBufferLevelList_r18 = (AvailableRAN_VisibleMetrics_r18_AppLayerBufferLevelList_r18)0;
    }
    if (present_1) {
        value.playoutDelayForMediaStartup_r18 = (AvailableRAN_VisibleMetrics_r18_PlayoutDelayForMediaStartup_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AvailableRAN_VisibleMetrics_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AvailableRAN_VisibleMetrics_r18(AvailableRAN_VisibleMetrics_r18& value)
{
    if (value.has_appLayerBufferLevelList_r18) {
    }
    if (value.has_playoutDelayForMediaStartup_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_AppLayerIdleInactiveConfig_r18(Encoder& enc, const AppLayerIdleInactiveConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_serviceType_r18);
    enc.WriteBit(value.has_appLayerMeasPriority_r18);
    enc.WriteBit(value.has_qoe_Reference_r18);
    enc.WriteBit(value.has_qoe_MeasurementType_r18);
    enc.WriteBit(value.has_qoe_AreaScope_r18);
    enc.WriteBit(value.has_mce_Id_r18);
    enc.WriteBit(value.has_availableRAN_VisibleMetrics_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.measConfigAppLayerId_r18), 0, 15);
    if (value.has_serviceType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.serviceType_r18), 0, 7);
    }
    if (value.has_appLayerMeasPriority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.appLayerMeasPriority_r18), 1, 16);
    }
    if (value.has_qoe_Reference_r18) {
        enc.WriteFixedOctetString(value.qoe_Reference_r18.bytes, value.qoe_Reference_r18.length, 6, 6);
    }
    if (value.has_qoe_MeasurementType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.qoe_MeasurementType_r18), 0, 1);
    }
    if (value.has_qoe_AreaScope_r18) {
        Encode_Qoe_AreaScope_r18(enc, value.qoe_AreaScope_r18);
    }
    if (value.has_mce_Id_r18) {
        enc.WriteFixedOctetString(value.mce_Id_r18.bytes, value.mce_Id_r18.length, 1, 1);
    }
    if (value.has_availableRAN_VisibleMetrics_r18) {
        Encode_AvailableRAN_VisibleMetrics_r18(enc, value.availableRAN_VisibleMetrics_r18);
    }
    return enc.Error();
}

ErrorCode Decode_AppLayerIdleInactiveConfig_r18(Decoder& dec, AppLayerIdleInactiveConfig_r18& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.measConfigAppLayerId_r18 = (MeasConfigAppLayerId_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.serviceType_r18 = (AppLayerIdleInactiveConfig_r18_ServiceType_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.appLayerMeasPriority_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.qoe_Reference_r18.bytes = string_bytes;
        value.qoe_Reference_r18.length = string_length;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.qoe_MeasurementType_r18 = (AppLayerIdleInactiveConfig_r18_Qoe_MeasurementType_r18)tmp_value;
    }
    if (present_4) {
        if (Decode_Qoe_AreaScope_r18(dec, value.qoe_AreaScope_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 1)) { goto fail; }
        string_length = 1;
        value.mce_Id_r18.bytes = string_bytes;
        value.mce_Id_r18.length = string_length;
    }
    if (present_6) {
        if (Decode_AvailableRAN_VisibleMetrics_r18(dec, value.availableRAN_VisibleMetrics_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_AppLayerIdleInactiveConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AppLayerIdleInactiveConfig_r18(AppLayerIdleInactiveConfig_r18& value)
{
    if (value.has_serviceType_r18) {
    }
    if (value.has_appLayerMeasPriority_r18) {
    }
    if (value.has_qoe_Reference_r18) {
        std::free(value.qoe_Reference_r18.bytes);
        value.qoe_Reference_r18.bytes = nullptr;
        value.qoe_Reference_r18.length = 0;
    }
    if (value.has_qoe_MeasurementType_r18) {
    }
    if (value.has_qoe_AreaScope_r18) {
        Free_Qoe_AreaScope_r18(value.qoe_AreaScope_r18);
    }
    if (value.has_mce_Id_r18) {
        std::free(value.mce_Id_r18.bytes);
        value.mce_Id_r18.bytes = nullptr;
        value.mce_Id_r18.length = 0;
    }
    if (value.has_availableRAN_VisibleMetrics_r18) {
        Free_AvailableRAN_VisibleMetrics_r18(value.availableRAN_VisibleMetrics_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasReportAppLayer_v1800(Encoder& enc, const MeasReportAppLayer_v1800& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_appLayerIdleInactiveConfig_r18);
    enc.WriteBit(value.has_measReportAppLayerContainerList_r18);
    if (value.has_appLayerIdleInactiveConfig_r18) {
        Encode_AppLayerIdleInactiveConfig_r18(enc, value.appLayerIdleInactiveConfig_r18);
    }
    if (value.has_measReportAppLayerContainerList_r18) {
enc.WriteConstrainedLength(value.measReportAppLayerContainerList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measReportAppLayerContainerList_r18_count; ++i) {
    enc.WriteSemiConstrainedOctetString(value.measReportAppLayerContainerList_r18_items[i].bytes, value.measReportAppLayerContainerList_r18_items[i].length, 0, 0xFFFFFFFFu);
}
    }
    return enc.Error();
}

ErrorCode Decode_MeasReportAppLayer_v1800(Decoder& dec, MeasReportAppLayer_v1800& value)
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
        if (Decode_AppLayerIdleInactiveConfig_r18(dec, value.appLayerIdleInactiveConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.measReportAppLayerContainerList_r18_count)) { goto fail; }
if (value.measReportAppLayerContainerList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measReportAppLayerContainerList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measReportAppLayerContainerList_r18_count > 0u) {
    value.measReportAppLayerContainerList_r18_items = (OctetString*)std::malloc((std::size_t)value.measReportAppLayerContainerList_r18_count * sizeof(OctetString));
    if (value.measReportAppLayerContainerList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measReportAppLayerContainerList_r18_items, 0, (std::size_t)value.measReportAppLayerContainerList_r18_count * sizeof(OctetString));
}
for (std::uint32_t i = 0; i < value.measReportAppLayerContainerList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
    value.measReportAppLayerContainerList_r18_items[i].bytes = string_bytes;
    value.measReportAppLayerContainerList_r18_items[i].length = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasReportAppLayer_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasReportAppLayer_v1800(MeasReportAppLayer_v1800& value)
{
    if (value.has_appLayerIdleInactiveConfig_r18) {
        Free_AppLayerIdleInactiveConfig_r18(value.appLayerIdleInactiveConfig_r18);
    }
    if (value.has_measReportAppLayerContainerList_r18) {
        if (value.measReportAppLayerContainerList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.measReportAppLayerContainerList_r18_count; ++i) {
                std::free(value.measReportAppLayerContainerList_r18_items[i].bytes);
                value.measReportAppLayerContainerList_r18_items[i].bytes = nullptr;
                value.measReportAppLayerContainerList_r18_items[i].length = 0;
            }
            std::free(value.measReportAppLayerContainerList_r18_items);
            value.measReportAppLayerContainerList_r18_items = nullptr;
        }
        value.measReportAppLayerContainerList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_QFI_List_r18(Encoder& enc, const QFI_List_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_QFI_List_r18(Decoder& dec, QFI_List_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (QFI*)std::malloc((std::size_t)value.count * sizeof(QFI));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(QFI));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.items[i] = (QFI)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_QFI_List_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QFI_List_r18(QFI_List_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCCH_ConfigSIB1(Encoder& enc, const PDCCH_ConfigSIB1& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetZero), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceZero), 0, 15);
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigSIB1(Decoder& dec, PDCCH_ConfigSIB1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.controlResourceSetZero = (ControlResourceSetZero)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.searchSpaceZero = (SearchSpaceZero)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigSIB1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigSIB1(PDCCH_ConfigSIB1& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIB(Encoder& enc, const MIB& value)
{
    (void)value;
    enc.WriteFixedBitString(value.systemFrameNumber.bytes, value.systemFrameNumber.bitLength, 6, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.subCarrierSpacingCommon), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_SubcarrierOffset), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_TypeA_Position), 0, 1);
    Encode_PDCCH_ConfigSIB1(enc, value.pdcch_ConfigSIB1);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellBarred), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqReselection), 0, 1);
    enc.WriteFixedBitString(value.spare.bytes, value.spare.bitLength, 1, 1);
    return enc.Error();
}

ErrorCode Decode_MIB(Decoder& dec, MIB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.systemFrameNumber.bytes = string_bytes;
        value.systemFrameNumber.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.subCarrierSpacingCommon = (MIB_SubCarrierSpacingCommon)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ssb_SubcarrierOffset = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dmrs_TypeA_Position = (MIB_Dmrs_TypeA_Position)tmp_value;
    }
    {
        if (Decode_PDCCH_ConfigSIB1(dec, value.pdcch_ConfigSIB1) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarred = (MIB_CellBarred)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraFreqReselection = (MIB_IntraFreqReselection)tmp_value;
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
    Free_MIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIB(MIB& value)
{
    std::free(value.systemFrameNumber.bytes);
    value.systemFrameNumber.bytes = nullptr;
    value.systemFrameNumber.bitLength = 0;
    Free_PDCCH_ConfigSIB1(value.pdcch_ConfigSIB1);
    std::free(value.spare.bytes);
    value.spare.bytes = nullptr;
    value.spare.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SuccessHO_Config_r17(Encoder& enc, const SuccessHO_Config_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_thresholdPercentageT304_r17);
    enc.WriteBit(value.has_thresholdPercentageT310_r17);
    enc.WriteBit(value.has_thresholdPercentageT312_r17);
    enc.WriteBit(value.has_sourceDAPS_FailureReporting_r17);
    if (value.has_thresholdPercentageT304_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdPercentageT304_r17), 0, 7);
    }
    if (value.has_thresholdPercentageT310_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdPercentageT310_r17), 0, 7);
    }
    if (value.has_thresholdPercentageT312_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdPercentageT312_r17), 0, 7);
    }
    if (value.has_sourceDAPS_FailureReporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sourceDAPS_FailureReporting_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SuccessHO_Config_r17(Decoder& dec, SuccessHO_Config_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdPercentageT304_r17 = (SuccessHO_Config_r17_ThresholdPercentageT304_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdPercentageT310_r17 = (SuccessHO_Config_r17_ThresholdPercentageT310_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.thresholdPercentageT312_r17 = (SuccessHO_Config_r17_ThresholdPercentageT312_r17)tmp_value;
    }
    if (present_3) {
        value.sourceDAPS_FailureReporting_r17 = (SuccessHO_Config_r17_SourceDAPS_FailureReporting_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SuccessHO_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SuccessHO_Config_r17(SuccessHO_Config_r17& value)
{
    if (value.has_thresholdPercentageT304_r17) {
    }
    if (value.has_thresholdPercentageT310_r17) {
    }
    if (value.has_thresholdPercentageT312_r17) {
    }
    if (value.has_sourceDAPS_FailureReporting_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_SuccessHO_Config_r17(Encoder& enc, const SetupRelease_SuccessHO_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SuccessHO_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SuccessHO_Config_r17_Tag_setup:
        Encode_SuccessHO_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SuccessHO_Config_r17(Decoder& dec, SetupRelease_SuccessHO_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SuccessHO_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SuccessHO_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SuccessHO_Config_r17_Tag_setup: {
        if (Decode_SuccessHO_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SuccessHO_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SuccessHO_Config_r17(SetupRelease_SuccessHO_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SuccessHO_Config_r17_Tag_release:
        break;
    case SetupRelease_SuccessHO_Config_r17_Tag_setup:
        Free_SuccessHO_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(Encoder& enc, const MobilityFromNRCommand_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(Decoder& dec, MobilityFromNRCommand_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(MobilityFromNRCommand_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand_v1800_IEs(Encoder& enc, const MobilityFromNRCommand_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_successHO_Config_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_successHO_Config_r18) {
        Encode_SetupRelease_SuccessHO_Config_r17(enc, value.successHO_Config_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand_v1800_IEs(Decoder& dec, MobilityFromNRCommand_v1800_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SuccessHO_Config_r17(dec, value.successHO_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MobilityFromNRCommand_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand_v1800_IEs(MobilityFromNRCommand_v1800_IEs& value)
{
    if (value.has_successHO_Config_r18) {
        Free_SetupRelease_SuccessHO_Config_r17(value.successHO_Config_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_MobilityFromNRCommand_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand_v1610_IEs(Encoder& enc, const MobilityFromNRCommand_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_voiceFallbackIndication_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_voiceFallbackIndication_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceFallbackIndication_r16), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MobilityFromNRCommand_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand_v1610_IEs(Decoder& dec, MobilityFromNRCommand_v1610_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.voiceFallbackIndication_r16 = (MobilityFromNRCommand_v1610_IEs_VoiceFallbackIndication_r16)0;
    }
    if (present_1) {
        if (Decode_MobilityFromNRCommand_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MobilityFromNRCommand_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand_v1610_IEs(MobilityFromNRCommand_v1610_IEs& value)
{
    if (value.has_voiceFallbackIndication_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_MobilityFromNRCommand_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand_IEs(Encoder& enc, const MobilityFromNRCommand_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_nas_SecurityParamFromNR);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    {
        const std::int64_t enum_value = (std::int64_t)(value.targetRAT_Type);
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
    enc.WriteSemiConstrainedOctetString(value.targetRAT_MessageContainer.bytes, value.targetRAT_MessageContainer.length, 0, 0xFFFFFFFFu);
    if (value.has_nas_SecurityParamFromNR) {
        enc.WriteSemiConstrainedOctetString(value.nas_SecurityParamFromNR.bytes, value.nas_SecurityParamFromNR.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_MobilityFromNRCommand_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand_IEs(Decoder& dec, MobilityFromNRCommand_IEs& value)
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
        value.targetRAT_Type = (MobilityFromNRCommand_IEs_TargetRAT_Type)enum_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.targetRAT_MessageContainer.bytes = string_bytes;
        value.targetRAT_MessageContainer.length = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.nas_SecurityParamFromNR.bytes = string_bytes;
        value.nas_SecurityParamFromNR.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_MobilityFromNRCommand_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MobilityFromNRCommand_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand_IEs(MobilityFromNRCommand_IEs& value)
{
    std::free(value.targetRAT_MessageContainer.bytes);
    value.targetRAT_MessageContainer.bytes = nullptr;
    value.targetRAT_MessageContainer.length = 0;
    if (value.has_nas_SecurityParamFromNR) {
        std::free(value.nas_SecurityParamFromNR.bytes);
        value.nas_SecurityParamFromNR.bytes = nullptr;
        value.nas_SecurityParamFromNR.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_MobilityFromNRCommand_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand_CriticalExtensionsFuture(Encoder& enc, const MobilityFromNRCommand_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand_CriticalExtensionsFuture(Decoder& dec, MobilityFromNRCommand_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand_CriticalExtensionsFuture(MobilityFromNRCommand_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand_CriticalExtensions(Encoder& enc, const MobilityFromNRCommand_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MobilityFromNRCommand_CriticalExtensions_Tag_mobilityFromNRCommand:
        Encode_MobilityFromNRCommand_IEs(enc, value.u.mobilityFromNRCommand);
        break;
    case MobilityFromNRCommand_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_MobilityFromNRCommand_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand_CriticalExtensions(Decoder& dec, MobilityFromNRCommand_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MobilityFromNRCommand_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case MobilityFromNRCommand_CriticalExtensions_Tag_mobilityFromNRCommand: {
        if (Decode_MobilityFromNRCommand_IEs(dec, value.u.mobilityFromNRCommand) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case MobilityFromNRCommand_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_MobilityFromNRCommand_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MobilityFromNRCommand_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand_CriticalExtensions(MobilityFromNRCommand_CriticalExtensions& value)
{
    switch (value.tag) {
    case MobilityFromNRCommand_CriticalExtensions_Tag_mobilityFromNRCommand:
        Free_MobilityFromNRCommand_IEs(value.u.mobilityFromNRCommand);
        break;
    case MobilityFromNRCommand_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_MobilityFromNRCommand_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MobilityFromNRCommand(Encoder& enc, const MobilityFromNRCommand& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_MobilityFromNRCommand_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_MobilityFromNRCommand(Decoder& dec, MobilityFromNRCommand& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_MobilityFromNRCommand_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MobilityFromNRCommand(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MobilityFromNRCommand(MobilityFromNRCommand& value)
{
    Free_MobilityFromNRCommand_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingRecordList_v1800(Encoder& enc, const PagingRecordList_v1800& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PagingRecord_v1800(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PagingRecordList_v1800(Decoder& dec, PagingRecordList_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PagingRecord_v1800*)std::malloc((std::size_t)value.count * sizeof(PagingRecord_v1800));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PagingRecord_v1800));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PagingRecord_v1800(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PagingRecordList_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingRecordList_v1800(PagingRecordList_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PagingRecord_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingGroupList_v1800(Encoder& enc, const PagingGroupList_v1800& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_GroupPaging_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PagingGroupList_v1800(Decoder& dec, PagingGroupList_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (GroupPaging_r18*)std::malloc((std::size_t)value.count * sizeof(GroupPaging_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(GroupPaging_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_GroupPaging_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PagingGroupList_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingGroupList_v1800(PagingGroupList_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_GroupPaging_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Paging_v1800_IEs_NonCriticalExtension(Encoder& enc, const Paging_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_Paging_v1800_IEs_NonCriticalExtension(Decoder& dec, Paging_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Paging_v1800_IEs_NonCriticalExtension(Paging_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Paging_v1800_IEs(Encoder& enc, const Paging_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_pagingRecordList_v1800);
    enc.WriteBit(value.has_pagingGroupList_v1800);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_pagingRecordList_v1800) {
        Encode_PagingRecordList_v1800(enc, value.pagingRecordList_v1800);
    }
    if (value.has_pagingGroupList_v1800) {
        Encode_PagingGroupList_v1800(enc, value.pagingGroupList_v1800);
    }
    if (value.has_nonCriticalExtension) {
        Encode_Paging_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_Paging_v1800_IEs(Decoder& dec, Paging_v1800_IEs& value)
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
        if (Decode_PagingRecordList_v1800(dec, value.pagingRecordList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PagingGroupList_v1800(dec, value.pagingGroupList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_Paging_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Paging_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Paging_v1800_IEs(Paging_v1800_IEs& value)
{
    if (value.has_pagingRecordList_v1800) {
        Free_PagingRecordList_v1800(value.pagingRecordList_v1800);
    }
    if (value.has_pagingGroupList_v1800) {
        Free_PagingGroupList_v1800(value.pagingGroupList_v1800);
    }
    if (value.has_nonCriticalExtension) {
        Free_Paging_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingRecordList_v1700(Encoder& enc, const PagingRecordList_v1700& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PagingRecord_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PagingRecordList_v1700(Decoder& dec, PagingRecordList_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PagingRecord_v1700*)std::malloc((std::size_t)value.count * sizeof(PagingRecord_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PagingRecord_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PagingRecord_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PagingRecordList_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingRecordList_v1700(PagingRecordList_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PagingRecord_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingGroupList_r17(Encoder& enc, const PagingGroupList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_TMGI_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PagingGroupList_r17(Decoder& dec, PagingGroupList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (TMGI_r17*)std::malloc((std::size_t)value.count * sizeof(TMGI_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(TMGI_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_TMGI_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PagingGroupList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingGroupList_r17(PagingGroupList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_TMGI_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Paging_v1700_IEs(Encoder& enc, const Paging_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_pagingRecordList_v1700);
    enc.WriteBit(value.has_pagingGroupList_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_pagingRecordList_v1700) {
        Encode_PagingRecordList_v1700(enc, value.pagingRecordList_v1700);
    }
    if (value.has_pagingGroupList_r17) {
        Encode_PagingGroupList_r17(enc, value.pagingGroupList_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_Paging_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_Paging_v1700_IEs(Decoder& dec, Paging_v1700_IEs& value)
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
        if (Decode_PagingRecordList_v1700(dec, value.pagingRecordList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PagingGroupList_r17(dec, value.pagingGroupList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_Paging_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Paging_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Paging_v1700_IEs(Paging_v1700_IEs& value)
{
    if (value.has_pagingRecordList_v1700) {
        Free_PagingRecordList_v1700(value.pagingRecordList_v1700);
    }
    if (value.has_pagingGroupList_r17) {
        Free_PagingGroupList_r17(value.pagingGroupList_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_Paging_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingRecordList(Encoder& enc, const PagingRecordList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PagingRecord(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PagingRecordList(Decoder& dec, PagingRecordList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PagingRecord*)std::malloc((std::size_t)value.count * sizeof(PagingRecord));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PagingRecord));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PagingRecord(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PagingRecordList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingRecordList(PagingRecordList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PagingRecord(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_Paging(Encoder& enc, const Paging& value)
{
    (void)value;
    enc.WriteBit(value.has_pagingRecordList);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_pagingRecordList) {
        Encode_PagingRecordList(enc, value.pagingRecordList);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_Paging_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_Paging(Decoder& dec, Paging& value)
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
        if (Decode_PagingRecordList(dec, value.pagingRecordList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_Paging_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_Paging(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Paging(Paging& value)
{
    if (value.has_pagingRecordList) {
        Free_PagingRecordList(value.pagingRecordList);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_Paging_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingUE_Identity(Encoder& enc, const PagingUE_Identity& value)
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
    case PagingUE_Identity_Tag_ng_5G_S_TMSI:
        enc.WriteFixedBitString(value.u.ng_5G_S_TMSI.bytes, value.u.ng_5G_S_TMSI.bitLength, 48, 48);
        break;
    case PagingUE_Identity_Tag_fullI_RNTI:
        enc.WriteFixedBitString(value.u.fullI_RNTI.bytes, value.u.fullI_RNTI.bitLength, 40, 40);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PagingUE_Identity(Decoder& dec, PagingUE_Identity& value)
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
        value.tag = (PagingUE_Identity_Tag)(2 + extension_index);
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
    value.tag = (PagingUE_Identity_Tag)root_index;
    switch (value.tag) {
    case PagingUE_Identity_Tag_ng_5G_S_TMSI: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.u.ng_5G_S_TMSI.bytes = string_bytes;
        value.u.ng_5G_S_TMSI.bitLength = string_length;
        break;
    }
    case PagingUE_Identity_Tag_fullI_RNTI: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 40)) { goto fail; }
        string_length = 40;
        value.u.fullI_RNTI.bytes = string_bytes;
        value.u.fullI_RNTI.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PagingUE_Identity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingUE_Identity(PagingUE_Identity& value)
{
    switch (value.tag) {
    case PagingUE_Identity_Tag_ng_5G_S_TMSI:
        std::free(value.u.ng_5G_S_TMSI.bytes);
        break;
    case PagingUE_Identity_Tag_fullI_RNTI:
        std::free(value.u.fullI_RNTI.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingRecord(Encoder& enc, const PagingRecord& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_accessType);
    Encode_PagingUE_Identity(enc, value.ue_Identity);
    if (value.has_accessType) {
        enc.WriteConstrainedInteger((std::int64_t)(value.accessType), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PagingRecord(Decoder& dec, PagingRecord& value)
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
        if (Decode_PagingUE_Identity(dec, value.ue_Identity) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.accessType = (PagingRecord_AccessType)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PagingRecord(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingRecord(PagingRecord& value)
{
    Free_PagingUE_Identity(value.ue_Identity);
    if (value.has_accessType) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingRecord_v1700(Encoder& enc, const PagingRecord_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_pagingCause_r17);
    if (value.has_pagingCause_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pagingCause_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PagingRecord_v1700(Decoder& dec, PagingRecord_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.pagingCause_r17 = (PagingRecord_v1700_PagingCause_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PagingRecord_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingRecord_v1700(PagingRecord_v1700& value)
{
    if (value.has_pagingCause_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PagingRecord_v1800(Encoder& enc, const PagingRecord_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_mt_SDT);
    if (value.has_mt_SDT) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mt_SDT), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PagingRecord_v1800(Decoder& dec, PagingRecord_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.mt_SDT = (PagingRecord_v1800_Mt_SDT)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PagingRecord_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PagingRecord_v1800(PagingRecord_v1800& value)
{
    if (value.has_mt_SDT) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_GroupPaging_r18(Encoder& enc, const GroupPaging_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_inactiveReceptionAllowed_r18);
    if (value.has_inactiveReceptionAllowed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactiveReceptionAllowed_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_GroupPaging_r18(Decoder& dec, GroupPaging_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.inactiveReceptionAllowed_r18 = (GroupPaging_r18_InactiveReceptionAllowed_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GroupPaging_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GroupPaging_r18(GroupPaging_r18& value)
{
    if (value.has_inactiveReceptionAllowed_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_L2RemoteUE_Config_r17_ExtGroup1(Encoder& enc, const SL_L2RemoteUE_Config_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_U2U_RelayUE_ToAddModList_r18);
    enc.WriteBit(value.has_sl_U2U_RelayUE_ToReleaseList_r18);
    if (value.has_sl_U2U_RelayUE_ToAddModList_r18) {
enc.WriteConstrainedLength(value.sl_U2U_RelayUE_ToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_U2U_RelayUE_ToAddModList_r18_count; ++i) {
    Encode_SL_U2U_RelayUE_ToAddMod_r18(enc, value.sl_U2U_RelayUE_ToAddModList_r18_items[i]);
}
    }
    if (value.has_sl_U2U_RelayUE_ToReleaseList_r18) {
enc.WriteConstrainedLength(value.sl_U2U_RelayUE_ToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_U2U_RelayUE_ToReleaseList_r18_count; ++i) {
    enc.WriteFixedBitString(value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bytes, value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bitLength, 24, 24);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_L2RemoteUE_Config_r17_ExtGroup1(Decoder& dec, SL_L2RemoteUE_Config_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_U2U_RelayUE_ToAddModList_r18_count)) { goto fail; }
if (value.sl_U2U_RelayUE_ToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_U2U_RelayUE_ToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_U2U_RelayUE_ToAddModList_r18_count > 0u) {
    value.sl_U2U_RelayUE_ToAddModList_r18_items = (SL_U2U_RelayUE_ToAddMod_r18*)std::malloc((std::size_t)value.sl_U2U_RelayUE_ToAddModList_r18_count * sizeof(SL_U2U_RelayUE_ToAddMod_r18));
    if (value.sl_U2U_RelayUE_ToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_U2U_RelayUE_ToAddModList_r18_items, 0, (std::size_t)value.sl_U2U_RelayUE_ToAddModList_r18_count * sizeof(SL_U2U_RelayUE_ToAddMod_r18));
}
for (std::uint32_t i = 0; i < value.sl_U2U_RelayUE_ToAddModList_r18_count; ++i) {
    if (Decode_SL_U2U_RelayUE_ToAddMod_r18(dec, value.sl_U2U_RelayUE_ToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_U2U_RelayUE_ToReleaseList_r18_count)) { goto fail; }
if (value.sl_U2U_RelayUE_ToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_U2U_RelayUE_ToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_U2U_RelayUE_ToReleaseList_r18_count > 0u) {
    value.sl_U2U_RelayUE_ToReleaseList_r18_items = (SL_DestinationIdentity_r16*)std::malloc((std::size_t)value.sl_U2U_RelayUE_ToReleaseList_r18_count * sizeof(SL_DestinationIdentity_r16));
    if (value.sl_U2U_RelayUE_ToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_U2U_RelayUE_ToReleaseList_r18_items, 0, (std::size_t)value.sl_U2U_RelayUE_ToReleaseList_r18_count * sizeof(SL_DestinationIdentity_r16));
}
for (std::uint32_t i = 0; i < value.sl_U2U_RelayUE_ToReleaseList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bytes = string_bytes;
    value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_L2RemoteUE_Config_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_L2RemoteUE_Config_r17_ExtGroup1(SL_L2RemoteUE_Config_r17_ExtGroup1& value)
{
    if (value.has_sl_U2U_RelayUE_ToAddModList_r18) {
        if (value.sl_U2U_RelayUE_ToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_U2U_RelayUE_ToAddModList_r18_count; ++i) {
                Free_SL_U2U_RelayUE_ToAddMod_r18(value.sl_U2U_RelayUE_ToAddModList_r18_items[i]);
            }
            std::free(value.sl_U2U_RelayUE_ToAddModList_r18_items);
            value.sl_U2U_RelayUE_ToAddModList_r18_items = nullptr;
        }
        value.sl_U2U_RelayUE_ToAddModList_r18_count = 0;
    }
    if (value.has_sl_U2U_RelayUE_ToReleaseList_r18) {
        if (value.sl_U2U_RelayUE_ToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_U2U_RelayUE_ToReleaseList_r18_count; ++i) {
                std::free(value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bytes);
                value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bytes = nullptr;
                value.sl_U2U_RelayUE_ToReleaseList_r18_items[i].bitLength = 0;
            }
            std::free(value.sl_U2U_RelayUE_ToReleaseList_r18_items);
            value.sl_U2U_RelayUE_ToReleaseList_r18_items = nullptr;
        }
        value.sl_U2U_RelayUE_ToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_SRAP_Config_r17(Encoder& enc, const SL_SRAP_Config_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_LocalIdentity_r17);
    enc.WriteBit(value.has_sl_MappingToAddModList_r17);
    enc.WriteBit(value.has_sl_MappingToReleaseList_r17);
    if (value.has_sl_LocalIdentity_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LocalIdentity_r17), 0, 255);
    }
    if (value.has_sl_MappingToAddModList_r17) {
enc.WriteConstrainedLength(value.sl_MappingToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MappingToAddModList_r17_count; ++i) {
    Encode_SL_MappingToAddMod_r17(enc, value.sl_MappingToAddModList_r17_items[i]);
}
    }
    if (value.has_sl_MappingToReleaseList_r17) {
enc.WriteConstrainedLength(value.sl_MappingToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MappingToReleaseList_r17_count; ++i) {
    Encode_SL_RemoteUE_RB_Identity_r17(enc, value.sl_MappingToReleaseList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_SRAP_Config_r17(Decoder& dec, SL_SRAP_Config_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.sl_LocalIdentity_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MappingToAddModList_r17_count)) { goto fail; }
if (value.sl_MappingToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MappingToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MappingToAddModList_r17_count > 0u) {
    value.sl_MappingToAddModList_r17_items = (SL_MappingToAddMod_r17*)std::malloc((std::size_t)value.sl_MappingToAddModList_r17_count * sizeof(SL_MappingToAddMod_r17));
    if (value.sl_MappingToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MappingToAddModList_r17_items, 0, (std::size_t)value.sl_MappingToAddModList_r17_count * sizeof(SL_MappingToAddMod_r17));
}
for (std::uint32_t i = 0; i < value.sl_MappingToAddModList_r17_count; ++i) {
    if (Decode_SL_MappingToAddMod_r17(dec, value.sl_MappingToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MappingToReleaseList_r17_count)) { goto fail; }
if (value.sl_MappingToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MappingToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MappingToReleaseList_r17_count > 0u) {
    value.sl_MappingToReleaseList_r17_items = (SL_RemoteUE_RB_Identity_r17*)std::malloc((std::size_t)value.sl_MappingToReleaseList_r17_count * sizeof(SL_RemoteUE_RB_Identity_r17));
    if (value.sl_MappingToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MappingToReleaseList_r17_items, 0, (std::size_t)value.sl_MappingToReleaseList_r17_count * sizeof(SL_RemoteUE_RB_Identity_r17));
}
for (std::uint32_t i = 0; i < value.sl_MappingToReleaseList_r17_count; ++i) {
    if (Decode_SL_RemoteUE_RB_Identity_r17(dec, value.sl_MappingToReleaseList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_SRAP_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SRAP_Config_r17(SL_SRAP_Config_r17& value)
{
    if (value.has_sl_LocalIdentity_r17) {
    }
    if (value.has_sl_MappingToAddModList_r17) {
        if (value.sl_MappingToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MappingToAddModList_r17_count; ++i) {
                Free_SL_MappingToAddMod_r17(value.sl_MappingToAddModList_r17_items[i]);
            }
            std::free(value.sl_MappingToAddModList_r17_items);
            value.sl_MappingToAddModList_r17_items = nullptr;
        }
        value.sl_MappingToAddModList_r17_count = 0;
    }
    if (value.has_sl_MappingToReleaseList_r17) {
        if (value.sl_MappingToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MappingToReleaseList_r17_count; ++i) {
                Free_SL_RemoteUE_RB_Identity_r17(value.sl_MappingToReleaseList_r17_items[i]);
            }
            std::free(value.sl_MappingToReleaseList_r17_items);
            value.sl_MappingToReleaseList_r17_items = nullptr;
        }
        value.sl_MappingToReleaseList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_L2RemoteUE_Config_r17(Encoder& enc, const SL_L2RemoteUE_Config_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_SRAP_ConfigRemote_r17);
    enc.WriteBit(value.has_sl_UEIdentityRemote_r17);
    if (value.has_sl_SRAP_ConfigRemote_r17) {
        Encode_SL_SRAP_Config_r17(enc, value.sl_SRAP_ConfigRemote_r17);
    }
    if (value.has_sl_UEIdentityRemote_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_UEIdentityRemote_r17), 0, 65535);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_L2RemoteUE_Config_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_L2RemoteUE_Config_r17(Decoder& dec, SL_L2RemoteUE_Config_r17& value)
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
        if (Decode_SL_SRAP_Config_r17(dec, value.sl_SRAP_ConfigRemote_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sl_UEIdentityRemote_r17 = (RNTI_Value)tmp_value;
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
    if (Decode_SL_L2RemoteUE_Config_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_L2RemoteUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_L2RemoteUE_Config_r17(SL_L2RemoteUE_Config_r17& value)
{
    if (value.has_sl_SRAP_ConfigRemote_r17) {
        Free_SL_SRAP_Config_r17(value.sl_SRAP_ConfigRemote_r17);
    }
    if (value.has_sl_UEIdentityRemote_r17) {
    }
    if (value.has_extGroup1) {
        Free_SL_L2RemoteUE_Config_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
