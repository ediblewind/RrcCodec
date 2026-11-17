/* ============================================================================
 * src/generated/codec_part015.cpp — 生成的编解码函数
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

ErrorCode Encode_ReconfigurationWithSync_ExtGroup1(Encoder& enc, const ReconfigurationWithSync_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_smtc);
    if (value.has_smtc) {
        Encode_SSB_MTC(enc, value.smtc);
    }
    return enc.Error();
}

ErrorCode Decode_ReconfigurationWithSync_ExtGroup1(Decoder& dec, ReconfigurationWithSync_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SSB_MTC(dec, value.smtc) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReconfigurationWithSync_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReconfigurationWithSync_ExtGroup1(ReconfigurationWithSync_ExtGroup1& value)
{
    if (value.has_smtc) {
        Free_SSB_MTC(value.smtc);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DAPS_UplinkPowerConfig_r16(Encoder& enc, const DAPS_UplinkPowerConfig_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.p_DAPS_Source_r16), -30, 33);
    enc.WriteConstrainedInteger((std::int64_t)(value.p_DAPS_Target_r16), -30, 33);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkPowerSharingDAPS_Mode_r16), 0, 2);
    return enc.Error();
}

ErrorCode Decode_DAPS_UplinkPowerConfig_r16(Decoder& dec, DAPS_UplinkPowerConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_DAPS_Source_r16 = (P_Max)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_DAPS_Target_r16 = (P_Max)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.uplinkPowerSharingDAPS_Mode_r16 = (DAPS_UplinkPowerConfig_r16_UplinkPowerSharingDAPS_Mode_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DAPS_UplinkPowerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DAPS_UplinkPowerConfig_r16(DAPS_UplinkPowerConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReconfigurationWithSync_ExtGroup2(Encoder& enc, const ReconfigurationWithSync_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_daps_UplinkPowerConfig_r16);
    if (value.has_daps_UplinkPowerConfig_r16) {
        Encode_DAPS_UplinkPowerConfig_r16(enc, value.daps_UplinkPowerConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_ReconfigurationWithSync_ExtGroup2(Decoder& dec, ReconfigurationWithSync_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_DAPS_UplinkPowerConfig_r16(dec, value.daps_UplinkPowerConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReconfigurationWithSync_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReconfigurationWithSync_ExtGroup2(ReconfigurationWithSync_ExtGroup2& value)
{
    if (value.has_daps_UplinkPowerConfig_r16) {
        Free_DAPS_UplinkPowerConfig_r16(value.daps_UplinkPowerConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SL_PathSwitchConfig_r17(Encoder& enc, const SL_PathSwitchConfig_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteFixedBitString(value.targetRelayUE_Identity_r17.bytes, value.targetRelayUE_Identity_r17.bitLength, 24, 24);
    enc.WriteConstrainedInteger((std::int64_t)(value.t420_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SL_PathSwitchConfig_r17(Decoder& dec, SL_PathSwitchConfig_r17& value)
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
        value.targetRelayUE_Identity_r17.bytes = string_bytes;
        value.targetRelayUE_Identity_r17.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t420_r17 = (SL_PathSwitchConfig_r17_T420_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PathSwitchConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PathSwitchConfig_r17(SL_PathSwitchConfig_r17& value)
{
    std::free(value.targetRelayUE_Identity_r17.bytes);
    value.targetRelayUE_Identity_r17.bytes = nullptr;
    value.targetRelayUE_Identity_r17.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReconfigurationWithSync_ExtGroup3(Encoder& enc, const ReconfigurationWithSync_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_PathSwitchConfig_r17);
    if (value.has_sl_PathSwitchConfig_r17) {
        Encode_SL_PathSwitchConfig_r17(enc, value.sl_PathSwitchConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_ReconfigurationWithSync_ExtGroup3(Decoder& dec, ReconfigurationWithSync_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_PathSwitchConfig_r17(dec, value.sl_PathSwitchConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReconfigurationWithSync_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReconfigurationWithSync_ExtGroup3(ReconfigurationWithSync_ExtGroup3& value)
{
    if (value.has_sl_PathSwitchConfig_r17) {
        Free_SL_PathSwitchConfig_r17(value.sl_PathSwitchConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_LessHO_r18_BeamIndication_r18(Encoder& enc, const RACH_LessHO_r18_BeamIndication_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RACH_LessHO_r18_BeamIndication_r18_Tag_tci_StateID_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.tci_StateID_r18), 0, 127);
        break;
    case RACH_LessHO_r18_BeamIndication_r18_Tag_ssb_Index_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index_r18), 0, 63);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_LessHO_r18_BeamIndication_r18(Decoder& dec, RACH_LessHO_r18_BeamIndication_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RACH_LessHO_r18_BeamIndication_r18_Tag)root_index;
    switch (value.tag) {
    case RACH_LessHO_r18_BeamIndication_r18_Tag_tci_StateID_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.tci_StateID_r18 = (TCI_StateId)tmp_value;
        break;
    }
    case RACH_LessHO_r18_BeamIndication_r18_Tag_ssb_Index_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index_r18 = (SSB_Index)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_LessHO_r18_BeamIndication_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_LessHO_r18_BeamIndication_r18(RACH_LessHO_r18_BeamIndication_r18& value)
{
    switch (value.tag) {
    case RACH_LessHO_r18_BeamIndication_r18_Tag_tci_StateID_r18:
        break;
    case RACH_LessHO_r18_BeamIndication_r18_Tag_ssb_Index_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_LessHO_r18(Encoder& enc, const RACH_LessHO_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_targetNTA_r18);
    enc.WriteBit(value.has_beamIndication_r18);
    if (value.has_targetNTA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.targetNTA_r18), 0, 1);
    }
    if (value.has_beamIndication_r18) {
        Encode_RACH_LessHO_r18_BeamIndication_r18(enc, value.beamIndication_r18);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_LessHO_r18(Decoder& dec, RACH_LessHO_r18& value)
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
        value.targetNTA_r18 = (RACH_LessHO_r18_TargetNTA_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_RACH_LessHO_r18_BeamIndication_r18(dec, value.beamIndication_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_LessHO_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_LessHO_r18(RACH_LessHO_r18& value)
{
    if (value.has_targetNTA_r18) {
    }
    if (value.has_beamIndication_r18) {
        Free_RACH_LessHO_r18_BeamIndication_r18(value.beamIndication_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReconfigurationWithSync_ExtGroup4(Encoder& enc, const ReconfigurationWithSync_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_rach_LessHO_r18);
    enc.WriteBit(value.has_sl_IndirectPathMaintain_r18);
    if (value.has_rach_LessHO_r18) {
        Encode_RACH_LessHO_r18(enc, value.rach_LessHO_r18);
    }
    if (value.has_sl_IndirectPathMaintain_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_IndirectPathMaintain_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ReconfigurationWithSync_ExtGroup4(Decoder& dec, ReconfigurationWithSync_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RACH_LessHO_r18(dec, value.rach_LessHO_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.sl_IndirectPathMaintain_r18 = (ReconfigurationWithSync_ExtGroup4_Sl_IndirectPathMaintain_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReconfigurationWithSync_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReconfigurationWithSync_ExtGroup4(ReconfigurationWithSync_ExtGroup4& value)
{
    if (value.has_rach_LessHO_r18) {
        Free_RACH_LessHO_r18(value.rach_LessHO_r18);
    }
    if (value.has_sl_IndirectPathMaintain_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DownlinkConfigCommon_ExtGroup1(Encoder& enc, const DownlinkConfigCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_initialDownlinkBWP_RedCap_r17);
    if (value.has_initialDownlinkBWP_RedCap_r17) {
        Encode_BWP_DownlinkCommon(enc, value.initialDownlinkBWP_RedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_DownlinkConfigCommon_ExtGroup1(Decoder& dec, DownlinkConfigCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BWP_DownlinkCommon(dec, value.initialDownlinkBWP_RedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DownlinkConfigCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkConfigCommon_ExtGroup1(DownlinkConfigCommon_ExtGroup1& value)
{
    if (value.has_initialDownlinkBWP_RedCap_r17) {
        Free_BWP_DownlinkCommon(value.initialDownlinkBWP_RedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoDL_ExtGroup1(Encoder& enc, const FrequencyInfoDL_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_referenceCell_r18);
    if (value.has_referenceCell_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceCell_r18), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoDL_ExtGroup1(Decoder& dec, FrequencyInfoDL_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.referenceCell_r18 = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoDL_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoDL_ExtGroup1(FrequencyInfoDL_ExtGroup1& value)
{
    if (value.has_referenceCell_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MultiFrequencyBandListNR(Encoder& enc, const MultiFrequencyBandListNR& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 1024);
    }
    return enc.Error();
}

ErrorCode Decode_MultiFrequencyBandListNR(Decoder& dec, MultiFrequencyBandListNR& value)
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
    Free_MultiFrequencyBandListNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiFrequencyBandListNR(MultiFrequencyBandListNR& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoDL(Encoder& enc, const FrequencyInfoDL& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_absoluteFrequencySSB);
    if (value.has_absoluteFrequencySSB) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencySSB), 0, 3279165);
    }
    Encode_MultiFrequencyBandListNR(enc, value.frequencyBandList);
    enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencyPointA), 0, 3279165);
enc.WriteConstrainedLength(value.scs_SpecificCarrierList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.scs_SpecificCarrierList_items[i]);
}
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FrequencyInfoDL_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoDL(Decoder& dec, FrequencyInfoDL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencySSB = (ARFCN_ValueNR)tmp_value;
    }
    {
        if (Decode_MultiFrequencyBandListNR(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencyPointA = (ARFCN_ValueNR)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.scs_SpecificCarrierList_count)) { goto fail; }
if (value.scs_SpecificCarrierList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scs_SpecificCarrierList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scs_SpecificCarrierList_count > 0u) {
    value.scs_SpecificCarrierList_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.scs_SpecificCarrierList_count * sizeof(SCS_SpecificCarrier));
    if (value.scs_SpecificCarrierList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scs_SpecificCarrierList_items, 0, (std::size_t)value.scs_SpecificCarrierList_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.scs_SpecificCarrierList_items[i]) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_FrequencyInfoDL_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_FrequencyInfoDL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoDL(FrequencyInfoDL& value)
{
    if (value.has_absoluteFrequencySSB) {
    }
    Free_MultiFrequencyBandListNR(value.frequencyBandList);
    if (value.scs_SpecificCarrierList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
            Free_SCS_SpecificCarrier(value.scs_SpecificCarrierList_items[i]);
        }
        std::free(value.scs_SpecificCarrierList_items);
        value.scs_SpecificCarrierList_items = nullptr;
    }
    value.scs_SpecificCarrierList_count = 0;
    if (value.has_extGroup1) {
        Free_FrequencyInfoDL_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DownlinkConfigCommon(Encoder& enc, const DownlinkConfigCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyInfoDL);
    enc.WriteBit(value.has_initialDownlinkBWP);
    if (value.has_frequencyInfoDL) {
        Encode_FrequencyInfoDL(enc, value.frequencyInfoDL);
    }
    if (value.has_initialDownlinkBWP) {
        Encode_BWP_DownlinkCommon(enc, value.initialDownlinkBWP);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DownlinkConfigCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DownlinkConfigCommon(Decoder& dec, DownlinkConfigCommon& value)
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
        if (Decode_FrequencyInfoDL(dec, value.frequencyInfoDL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BWP_DownlinkCommon(dec, value.initialDownlinkBWP) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_DownlinkConfigCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_DownlinkConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkConfigCommon(DownlinkConfigCommon& value)
{
    if (value.has_frequencyInfoDL) {
        Free_FrequencyInfoDL(value.frequencyInfoDL);
    }
    if (value.has_initialDownlinkBWP) {
        Free_BWP_DownlinkCommon(value.initialDownlinkBWP);
    }
    if (value.has_extGroup1) {
        Free_DownlinkConfigCommon_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(Encoder& enc, const ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic:
        (void)0;
        break;
    case ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic:
        Encode_SemiStaticChannelAccessConfig_r16(enc, value.u.semiStatic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(Decoder& dec, ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag)root_index;
    switch (value.tag) {
    case ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic: {
        (void)0;
        break;
    }
    case ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic: {
        if (Decode_SemiStaticChannelAccessConfig_r16(dec, value.u.semiStatic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16& value)
{
    switch (value.tag) {
    case ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic:
        break;
    case ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic:
        Free_SemiStaticChannelAccessConfig_r16(value.u.semiStatic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup1(Encoder& enc, const ServingCellConfigCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_channelAccessMode_r16);
    enc.WriteBit(value.has_discoveryBurstWindowLength_r16);
    enc.WriteBit(value.has_ssb_PositionQCL_r16);
    enc.WriteBit(value.has_highSpeedConfig_r16);
    if (value.has_channelAccessMode_r16) {
        Encode_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(enc, value.channelAccessMode_r16);
    }
    if (value.has_discoveryBurstWindowLength_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.discoveryBurstWindowLength_r16), 0, 5);
    }
    if (value.has_ssb_PositionQCL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r16), 0, 3);
    }
    if (value.has_highSpeedConfig_r16) {
        Encode_HighSpeedConfig_r16(enc, value.highSpeedConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup1(Decoder& dec, ServingCellConfigCommon_ExtGroup1& value)
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
        if (Decode_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(dec, value.channelAccessMode_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.discoveryBurstWindowLength_r16 = (ServingCellConfigCommon_ExtGroup1_DiscoveryBurstWindowLength_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    if (present_3) {
        if (Decode_HighSpeedConfig_r16(dec, value.highSpeedConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup1(ServingCellConfigCommon_ExtGroup1& value)
{
    if (value.has_channelAccessMode_r16) {
        Free_ServingCellConfigCommon_ExtGroup1_ChannelAccessMode_r16(value.channelAccessMode_r16);
    }
    if (value.has_discoveryBurstWindowLength_r16) {
    }
    if (value.has_ssb_PositionQCL_r16) {
    }
    if (value.has_highSpeedConfig_r16) {
        Free_HighSpeedConfig_r16(value.highSpeedConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_HighSpeedConfig_v1700(Encoder& enc, const HighSpeedConfig_v1700& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_highSpeedMeasCA_Scell_r17);
    enc.WriteBit(value.has_highSpeedMeasInterFreq_r17);
    enc.WriteBit(value.has_highSpeedDemodCA_Scell_r17);
    if (value.has_highSpeedMeasCA_Scell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedMeasCA_Scell_r17), 0, 0);
    }
    if (value.has_highSpeedMeasInterFreq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedMeasInterFreq_r17), 0, 0);
    }
    if (value.has_highSpeedDemodCA_Scell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedDemodCA_Scell_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_HighSpeedConfig_v1700(Decoder& dec, HighSpeedConfig_v1700& value)
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
        value.highSpeedMeasCA_Scell_r17 = (HighSpeedConfig_v1700_HighSpeedMeasCA_Scell_r17)0;
    }
    if (present_1) {
        value.highSpeedMeasInterFreq_r17 = (HighSpeedConfig_v1700_HighSpeedMeasInterFreq_r17)0;
    }
    if (present_2) {
        value.highSpeedDemodCA_Scell_r17 = (HighSpeedConfig_v1700_HighSpeedDemodCA_Scell_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HighSpeedConfig_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HighSpeedConfig_v1700(HighSpeedConfig_v1700& value)
{
    if (value.has_highSpeedMeasCA_Scell_r17) {
    }
    if (value.has_highSpeedMeasInterFreq_r17) {
    }
    if (value.has_highSpeedDemodCA_Scell_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfigCommon_v1700(Encoder& enc, const UplinkConfigCommon_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_initialUplinkBWP_RedCap_r17);
    if (value.has_initialUplinkBWP_RedCap_r17) {
        Encode_BWP_UplinkCommon(enc, value.initialUplinkBWP_RedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkConfigCommon_v1700(Decoder& dec, UplinkConfigCommon_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BWP_UplinkCommon(dec, value.initialUplinkBWP_RedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfigCommon_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfigCommon_v1700(UplinkConfigCommon_v1700& value)
{
    if (value.has_initialUplinkBWP_RedCap_r17) {
        Free_BWP_UplinkCommon(value.initialUplinkBWP_RedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup2(Encoder& enc, const ServingCellConfigCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_highSpeedConfig_v1700);
    enc.WriteBit(value.has_channelAccessMode2_r17);
    enc.WriteBit(value.has_discoveryBurstWindowLength_r17);
    enc.WriteBit(value.has_ssb_PositionQCL_r17);
    enc.WriteBit(value.has_highSpeedConfigFR2_r17);
    enc.WriteBit(value.has_uplinkConfigCommon_v1700);
    enc.WriteBit(value.has_ntn_Config_r17);
    if (value.has_highSpeedConfig_v1700) {
        Encode_HighSpeedConfig_v1700(enc, value.highSpeedConfig_v1700);
    }
    if (value.has_channelAccessMode2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessMode2_r17), 0, 0);
    }
    if (value.has_discoveryBurstWindowLength_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.discoveryBurstWindowLength_r17), 0, 5);
    }
    if (value.has_ssb_PositionQCL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r17), 0, 1);
    }
    if (value.has_highSpeedConfigFR2_r17) {
        Encode_HighSpeedConfigFR2_r17(enc, value.highSpeedConfigFR2_r17);
    }
    if (value.has_uplinkConfigCommon_v1700) {
        Encode_UplinkConfigCommon_v1700(enc, value.uplinkConfigCommon_v1700);
    }
    if (value.has_ntn_Config_r17) {
        Encode_NTN_Config_r17(enc, value.ntn_Config_r17);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup2(Decoder& dec, ServingCellConfigCommon_ExtGroup2& value)
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
        if (Decode_HighSpeedConfig_v1700(dec, value.highSpeedConfig_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.channelAccessMode2_r17 = (ServingCellConfigCommon_ExtGroup2_ChannelAccessMode2_r17)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.discoveryBurstWindowLength_r17 = (ServingCellConfigCommon_ExtGroup2_DiscoveryBurstWindowLength_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    if (present_4) {
        if (Decode_HighSpeedConfigFR2_r17(dec, value.highSpeedConfigFR2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_UplinkConfigCommon_v1700(dec, value.uplinkConfigCommon_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_NTN_Config_r17(dec, value.ntn_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup2(ServingCellConfigCommon_ExtGroup2& value)
{
    if (value.has_highSpeedConfig_v1700) {
        Free_HighSpeedConfig_v1700(value.highSpeedConfig_v1700);
    }
    if (value.has_channelAccessMode2_r17) {
    }
    if (value.has_discoveryBurstWindowLength_r17) {
    }
    if (value.has_ssb_PositionQCL_r17) {
    }
    if (value.has_highSpeedConfigFR2_r17) {
        Free_HighSpeedConfigFR2_r17(value.highSpeedConfigFR2_r17);
    }
    if (value.has_uplinkConfigCommon_v1700) {
        Free_UplinkConfigCommon_v1700(value.uplinkConfigCommon_v1700);
    }
    if (value.has_ntn_Config_r17) {
        Free_NTN_Config_r17(value.ntn_Config_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(Encoder& enc, const ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_redCapPriority_r17);
    enc.WriteBit(value.has_slicingPriority_r17);
    enc.WriteBit(value.has_msg3_Repetitions_Priority_r17);
    enc.WriteBit(value.has_sdt_Priority_r17);
    if (value.has_redCapPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.redCapPriority_r17), 0, 7);
    }
    if (value.has_slicingPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.slicingPriority_r17), 0, 7);
    }
    if (value.has_msg3_Repetitions_Priority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg3_Repetitions_Priority_r17), 0, 7);
    }
    if (value.has_sdt_Priority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_Priority_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(Decoder& dec, ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.redCapPriority_r17 = (FeaturePriority_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.slicingPriority_r17 = (FeaturePriority_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg3_Repetitions_Priority_r17 = (FeaturePriority_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sdt_Priority_r17 = (FeaturePriority_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17& value)
{
    if (value.has_redCapPriority_r17) {
    }
    if (value.has_slicingPriority_r17) {
    }
    if (value.has_msg3_Repetitions_Priority_r17) {
    }
    if (value.has_sdt_Priority_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup3(Encoder& enc, const ServingCellConfigCommon_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_featurePriorities_r17);
    if (value.has_featurePriorities_r17) {
        Encode_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(enc, value.featurePriorities_r17);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup3(Decoder& dec, ServingCellConfigCommon_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(dec, value.featurePriorities_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup3(ServingCellConfigCommon_ExtGroup3& value)
{
    if (value.has_featurePriorities_r17) {
        Free_ServingCellConfigCommon_ExtGroup3_FeaturePriorities_r17(value.featurePriorities_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup4(Encoder& enc, const ServingCellConfigCommon_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_ChannelAccess_r17);
    if (value.has_ra_ChannelAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_ChannelAccess_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup4(Decoder& dec, ServingCellConfigCommon_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.ra_ChannelAccess_r17 = (ServingCellConfigCommon_ExtGroup4_Ra_ChannelAccess_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup4(ServingCellConfigCommon_ExtGroup4& value)
{
    if (value.has_ra_ChannelAccess_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(Encoder& enc, const ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_msg1_Repetitions_Priority_r18);
    enc.WriteBit(value.has_eRedCapPriority_r18);
    if (value.has_msg1_Repetitions_Priority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_Repetitions_Priority_r18), 0, 7);
    }
    if (value.has_eRedCapPriority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eRedCapPriority_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(Decoder& dec, ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msg1_Repetitions_Priority_r18 = (FeaturePriority_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.eRedCapPriority_r18 = (FeaturePriority_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800& value)
{
    if (value.has_msg1_Repetitions_Priority_r18) {
    }
    if (value.has_eRedCapPriority_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_ExtGroup5(Encoder& enc, const ServingCellConfigCommon_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_featurePriorities_v1800);
    enc.WriteBit(value.has_atg_Config_r18);
    if (value.has_featurePriorities_v1800) {
        Encode_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(enc, value.featurePriorities_v1800);
    }
    if (value.has_atg_Config_r18) {
        Encode_ATG_Config_r18(enc, value.atg_Config_r18);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_ExtGroup5(Decoder& dec, ServingCellConfigCommon_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(dec, value.featurePriorities_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ATG_Config_r18(dec, value.atg_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommon_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_ExtGroup5(ServingCellConfigCommon_ExtGroup5& value)
{
    if (value.has_featurePriorities_v1800) {
        Free_ServingCellConfigCommon_ExtGroup5_FeaturePriorities_v1800(value.featurePriorities_v1800);
    }
    if (value.has_atg_Config_r18) {
        Free_ATG_Config_r18(value.atg_Config_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoUL_ExtGroup1(Encoder& enc, const FrequencyInfoUL_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalSpectrumEmission_v1760);
    if (value.has_additionalSpectrumEmission_v1760) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmission_v1760), 8, 39);
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoUL_ExtGroup1(Decoder& dec, FrequencyInfoUL_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(8, 39, tmp_value)) { goto fail; }
        value.additionalSpectrumEmission_v1760 = (AdditionalSpectrumEmission_v1760)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoUL_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoUL_ExtGroup1(FrequencyInfoUL_ExtGroup1& value)
{
    if (value.has_additionalSpectrumEmission_v1760) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoUL_ExtGroup2(Encoder& enc, const FrequencyInfoUL_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalSpectrumEmissionAerial_r18);
    if (value.has_additionalSpectrumEmissionAerial_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmissionAerial_r18), 0, 39);
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoUL_ExtGroup2(Decoder& dec, FrequencyInfoUL_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.additionalSpectrumEmissionAerial_r18 = (AdditionalSpectrumEmission_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoUL_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoUL_ExtGroup2(FrequencyInfoUL_ExtGroup2& value)
{
    if (value.has_additionalSpectrumEmissionAerial_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FrequencyInfoUL(Encoder& enc, const FrequencyInfoUL& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyBandList);
    enc.WriteBit(value.has_absoluteFrequencyPointA);
    enc.WriteBit(value.has_additionalSpectrumEmission);
    enc.WriteBit(value.has_p_Max);
    enc.WriteBit(value.has_frequencyShift7p5khz);
    if (value.has_frequencyBandList) {
        Encode_MultiFrequencyBandListNR(enc, value.frequencyBandList);
    }
    if (value.has_absoluteFrequencyPointA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absoluteFrequencyPointA), 0, 3279165);
    }
enc.WriteConstrainedLength(value.scs_SpecificCarrierList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.scs_SpecificCarrierList_items[i]);
}
    if (value.has_additionalSpectrumEmission) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmission), 0, 7);
    }
    if (value.has_p_Max) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p_Max), -30, 33);
    }
    if (value.has_frequencyShift7p5khz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.frequencyShift7p5khz), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FrequencyInfoUL_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_FrequencyInfoUL_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoUL(Decoder& dec, FrequencyInfoUL& value)
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
        if (Decode_MultiFrequencyBandListNR(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.absoluteFrequencyPointA = (ARFCN_ValueNR)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.scs_SpecificCarrierList_count)) { goto fail; }
if (value.scs_SpecificCarrierList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scs_SpecificCarrierList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scs_SpecificCarrierList_count > 0u) {
    value.scs_SpecificCarrierList_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.scs_SpecificCarrierList_count * sizeof(SCS_SpecificCarrier));
    if (value.scs_SpecificCarrierList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scs_SpecificCarrierList_items, 0, (std::size_t)value.scs_SpecificCarrierList_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.scs_SpecificCarrierList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.additionalSpectrumEmission = (AdditionalSpectrumEmission)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.p_Max = (P_Max)tmp_value;
    }
    if (present_4) {
        value.frequencyShift7p5khz = (FrequencyInfoUL_FrequencyShift7p5khz)0;
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
    if (Decode_FrequencyInfoUL_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_FrequencyInfoUL_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_FrequencyInfoUL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoUL(FrequencyInfoUL& value)
{
    if (value.has_frequencyBandList) {
        Free_MultiFrequencyBandListNR(value.frequencyBandList);
    }
    if (value.has_absoluteFrequencyPointA) {
    }
    if (value.scs_SpecificCarrierList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
            Free_SCS_SpecificCarrier(value.scs_SpecificCarrierList_items[i]);
        }
        std::free(value.scs_SpecificCarrierList_items);
        value.scs_SpecificCarrierList_items = nullptr;
    }
    value.scs_SpecificCarrierList_count = 0;
    if (value.has_additionalSpectrumEmission) {
    }
    if (value.has_p_Max) {
    }
    if (value.has_frequencyShift7p5khz) {
    }
    if (value.has_extGroup1) {
        Free_FrequencyInfoUL_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_FrequencyInfoUL_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfigCommon(Encoder& enc, const UplinkConfigCommon& value)
{
    (void)value;
    enc.WriteBit(value.has_frequencyInfoUL);
    enc.WriteBit(value.has_initialUplinkBWP);
    if (value.has_frequencyInfoUL) {
        Encode_FrequencyInfoUL(enc, value.frequencyInfoUL);
    }
    if (value.has_initialUplinkBWP) {
        Encode_BWP_UplinkCommon(enc, value.initialUplinkBWP);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 7);
    return enc.Error();
}

ErrorCode Decode_UplinkConfigCommon(Decoder& dec, UplinkConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FrequencyInfoUL(dec, value.frequencyInfoUL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BWP_UplinkCommon(dec, value.initialUplinkBWP) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.dummy = (TimeAlignmentTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfigCommon(UplinkConfigCommon& value)
{
    if (value.has_frequencyInfoUL) {
        Free_FrequencyInfoUL(value.frequencyInfoUL);
    }
    if (value.has_initialUplinkBWP) {
        Free_BWP_UplinkCommon(value.initialUplinkBWP);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_RateMatchPatternLTE_CRS(Encoder& enc, const SetupRelease_RateMatchPatternLTE_CRS& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RateMatchPatternLTE_CRS_Tag_release:
        (void)0;
        break;
    case SetupRelease_RateMatchPatternLTE_CRS_Tag_setup:
        Encode_RateMatchPatternLTE_CRS(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RateMatchPatternLTE_CRS(Decoder& dec, SetupRelease_RateMatchPatternLTE_CRS& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RateMatchPatternLTE_CRS_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RateMatchPatternLTE_CRS_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RateMatchPatternLTE_CRS_Tag_setup: {
        if (Decode_RateMatchPatternLTE_CRS(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RateMatchPatternLTE_CRS(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RateMatchPatternLTE_CRS(SetupRelease_RateMatchPatternLTE_CRS& value)
{
    switch (value.tag) {
    case SetupRelease_RateMatchPatternLTE_CRS_Tag_release:
        break;
    case SetupRelease_RateMatchPatternLTE_CRS_Tag_setup:
        Free_RateMatchPatternLTE_CRS(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon_Ssb_PositionsInBurst(Encoder& enc, const ServingCellConfigCommon_Ssb_PositionsInBurst& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_shortBitmap:
        enc.WriteFixedBitString(value.u.shortBitmap.bytes, value.u.shortBitmap.bitLength, 4, 4);
        break;
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_mediumBitmap:
        enc.WriteFixedBitString(value.u.mediumBitmap.bytes, value.u.mediumBitmap.bitLength, 8, 8);
        break;
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_longBitmap:
        enc.WriteFixedBitString(value.u.longBitmap.bytes, value.u.longBitmap.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon_Ssb_PositionsInBurst(Decoder& dec, ServingCellConfigCommon_Ssb_PositionsInBurst& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (ServingCellConfigCommon_Ssb_PositionsInBurst_Tag)root_index;
    switch (value.tag) {
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_shortBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.shortBitmap.bytes = string_bytes;
        value.u.shortBitmap.bitLength = string_length;
        break;
    }
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_mediumBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.mediumBitmap.bytes = string_bytes;
        value.u.mediumBitmap.bitLength = string_length;
        break;
    }
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_longBitmap: {
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
    Free_ServingCellConfigCommon_Ssb_PositionsInBurst(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon_Ssb_PositionsInBurst(ServingCellConfigCommon_Ssb_PositionsInBurst& value)
{
    switch (value.tag) {
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_shortBitmap:
        std::free(value.u.shortBitmap.bytes);
        break;
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_mediumBitmap:
        std::free(value.u.mediumBitmap.bytes);
        break;
    case ServingCellConfigCommon_Ssb_PositionsInBurst_Tag_longBitmap:
        std::free(value.u.longBitmap.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfigCommon(Encoder& enc, const ServingCellConfigCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_physCellId);
    enc.WriteBit(value.has_downlinkConfigCommon);
    enc.WriteBit(value.has_uplinkConfigCommon);
    enc.WriteBit(value.has_supplementaryUplinkConfig);
    enc.WriteBit(value.has_n_TimingAdvanceOffset);
    enc.WriteBit(value.has_ssb_PositionsInBurst);
    enc.WriteBit(value.has_ssb_periodicityServingCell);
    enc.WriteBit(value.has_lte_CRS_ToMatchAround);
    enc.WriteBit(value.has_rateMatchPatternToAddModList);
    enc.WriteBit(value.has_rateMatchPatternToReleaseList);
    enc.WriteBit(value.has_ssbSubcarrierSpacing);
    enc.WriteBit(value.has_tdd_UL_DL_ConfigurationCommon);
    if (value.has_physCellId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    }
    if (value.has_downlinkConfigCommon) {
        Encode_DownlinkConfigCommon(enc, value.downlinkConfigCommon);
    }
    if (value.has_uplinkConfigCommon) {
        Encode_UplinkConfigCommon(enc, value.uplinkConfigCommon);
    }
    if (value.has_supplementaryUplinkConfig) {
        Encode_UplinkConfigCommon(enc, value.supplementaryUplinkConfig);
    }
    if (value.has_n_TimingAdvanceOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n_TimingAdvanceOffset), 0, 2);
    }
    if (value.has_ssb_PositionsInBurst) {
        Encode_ServingCellConfigCommon_Ssb_PositionsInBurst(enc, value.ssb_PositionsInBurst);
    }
    if (value.has_ssb_periodicityServingCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_periodicityServingCell), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_TypeA_Position), 0, 1);
    if (value.has_lte_CRS_ToMatchAround) {
        Encode_SetupRelease_RateMatchPatternLTE_CRS(enc, value.lte_CRS_ToMatchAround);
    }
    if (value.has_rateMatchPatternToAddModList) {
enc.WriteConstrainedLength(value.rateMatchPatternToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
    Encode_RateMatchPattern(enc, value.rateMatchPatternToAddModList_items[i]);
}
    }
    if (value.has_rateMatchPatternToReleaseList) {
enc.WriteConstrainedLength(value.rateMatchPatternToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchPatternToReleaseList_items[i]), 0, 3);
}
    }
    if (value.has_ssbSubcarrierSpacing) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing), 0, 7);
    }
    if (value.has_tdd_UL_DL_ConfigurationCommon) {
        Encode_TDD_UL_DL_ConfigCommon(enc, value.tdd_UL_DL_ConfigurationCommon);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.ss_PBCH_BlockPower), -60, 50);
    if (any_extension) {
        enc.WriteNormallySmallLength(5u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ServingCellConfigCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ServingCellConfigCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ServingCellConfigCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_ServingCellConfigCommon_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_ServingCellConfigCommon_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommon(Decoder& dec, ServingCellConfigCommon& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    if (present_1) {
        if (Decode_DownlinkConfigCommon(dec, value.downlinkConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UplinkConfigCommon(dec, value.uplinkConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UplinkConfigCommon(dec, value.supplementaryUplinkConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.n_TimingAdvanceOffset = (ServingCellConfigCommon_N_TimingAdvanceOffset)tmp_value;
    }
    if (present_5) {
        if (Decode_ServingCellConfigCommon_Ssb_PositionsInBurst(dec, value.ssb_PositionsInBurst) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_periodicityServingCell = (ServingCellConfigCommon_Ssb_periodicityServingCell)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dmrs_TypeA_Position = (ServingCellConfigCommon_Dmrs_TypeA_Position)tmp_value;
    }
    if (present_7) {
        if (Decode_SetupRelease_RateMatchPatternLTE_CRS(dec, value.lte_CRS_ToMatchAround) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToAddModList_count)) { goto fail; }
if (value.rateMatchPatternToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToAddModList_count > 0u) {
    value.rateMatchPatternToAddModList_items = (RateMatchPattern*)std::malloc((std::size_t)value.rateMatchPatternToAddModList_count * sizeof(RateMatchPattern));
    if (value.rateMatchPatternToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToAddModList_items, 0, (std::size_t)value.rateMatchPatternToAddModList_count * sizeof(RateMatchPattern));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
    if (Decode_RateMatchPattern(dec, value.rateMatchPatternToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToReleaseList_count)) { goto fail; }
if (value.rateMatchPatternToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToReleaseList_count > 0u) {
    value.rateMatchPatternToReleaseList_items = (RateMatchPatternId*)std::malloc((std::size_t)value.rateMatchPatternToReleaseList_count * sizeof(RateMatchPatternId));
    if (value.rateMatchPatternToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToReleaseList_items, 0, (std::size_t)value.rateMatchPatternToReleaseList_count * sizeof(RateMatchPatternId));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.rateMatchPatternToReleaseList_items[i] = (RateMatchPatternId)tmp_value;
}
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    if (present_11) {
        if (Decode_TDD_UL_DL_ConfigCommon(dec, value.tdd_UL_DL_ConfigurationCommon) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-60, 50, tmp_value)) { goto fail; }
        value.ss_PBCH_BlockPower = (int64_t)tmp_value;
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
    if (Decode_ServingCellConfigCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommon_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_ServingCellConfigCommon_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    Free_ServingCellConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommon(ServingCellConfigCommon& value)
{
    if (value.has_physCellId) {
    }
    if (value.has_downlinkConfigCommon) {
        Free_DownlinkConfigCommon(value.downlinkConfigCommon);
    }
    if (value.has_uplinkConfigCommon) {
        Free_UplinkConfigCommon(value.uplinkConfigCommon);
    }
    if (value.has_supplementaryUplinkConfig) {
        Free_UplinkConfigCommon(value.supplementaryUplinkConfig);
    }
    if (value.has_n_TimingAdvanceOffset) {
    }
    if (value.has_ssb_PositionsInBurst) {
        Free_ServingCellConfigCommon_Ssb_PositionsInBurst(value.ssb_PositionsInBurst);
    }
    if (value.has_ssb_periodicityServingCell) {
    }
    if (value.has_lte_CRS_ToMatchAround) {
        Free_SetupRelease_RateMatchPatternLTE_CRS(value.lte_CRS_ToMatchAround);
    }
    if (value.has_rateMatchPatternToAddModList) {
        if (value.rateMatchPatternToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
                Free_RateMatchPattern(value.rateMatchPatternToAddModList_items[i]);
            }
            std::free(value.rateMatchPatternToAddModList_items);
            value.rateMatchPatternToAddModList_items = nullptr;
        }
        value.rateMatchPatternToAddModList_count = 0;
    }
    if (value.has_rateMatchPatternToReleaseList) {
        if (value.rateMatchPatternToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
            }
            std::free(value.rateMatchPatternToReleaseList_items);
            value.rateMatchPatternToReleaseList_items = nullptr;
        }
        value.rateMatchPatternToReleaseList_count = 0;
    }
    if (value.has_ssbSubcarrierSpacing) {
    }
    if (value.has_tdd_UL_DL_ConfigurationCommon) {
        Free_TDD_UL_DL_ConfigCommon(value.tdd_UL_DL_ConfigurationCommon);
    }
    if (value.has_extGroup1) {
        Free_ServingCellConfigCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ServingCellConfigCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ServingCellConfigCommon_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_ServingCellConfigCommon_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_ServingCellConfigCommon_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(Encoder& enc, const CFRA_TwoStep_r16_OccasionsTwoStepRA_r16& value)
{
    (void)value;
    Encode_RACH_ConfigGenericTwoStepRA_r16(enc, value.rach_ConfigGenericTwoStepRA_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PerRACH_OccasionTwoStepRA_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(Decoder& dec, CFRA_TwoStep_r16_OccasionsTwoStepRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RACH_ConfigGenericTwoStepRA_r16(dec, value.rach_ConfigGenericTwoStepRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_PerRACH_OccasionTwoStepRA_r16 = (CFRA_TwoStep_r16_OccasionsTwoStepRA_r16_Ssb_PerRACH_OccasionTwoStepRA_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(CFRA_TwoStep_r16_OccasionsTwoStepRA_r16& value)
{
    Free_RACH_ConfigGenericTwoStepRA_r16(value.rach_ConfigGenericTwoStepRA_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_TwoStep_r16_ResourcesTwoStep_r16(Encoder& enc, const CFRA_TwoStep_r16_ResourcesTwoStep_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.ssb_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ssb_ResourceList_count; ++i) {
    Encode_CFRA_SSB_Resource(enc, value.ssb_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_ssb_OccasionMaskIndex), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CFRA_TwoStep_r16_ResourcesTwoStep_r16(Decoder& dec, CFRA_TwoStep_r16_ResourcesTwoStep_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ssb_ResourceList_count)) { goto fail; }
if (value.ssb_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ssb_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ssb_ResourceList_count > 0u) {
    value.ssb_ResourceList_items = (CFRA_SSB_Resource*)std::malloc((std::size_t)value.ssb_ResourceList_count * sizeof(CFRA_SSB_Resource));
    if (value.ssb_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ssb_ResourceList_items, 0, (std::size_t)value.ssb_ResourceList_count * sizeof(CFRA_SSB_Resource));
}
for (std::uint32_t i = 0; i < value.ssb_ResourceList_count; ++i) {
    if (Decode_CFRA_SSB_Resource(dec, value.ssb_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_ssb_OccasionMaskIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_TwoStep_r16_ResourcesTwoStep_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_TwoStep_r16_ResourcesTwoStep_r16(CFRA_TwoStep_r16_ResourcesTwoStep_r16& value)
{
    if (value.ssb_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ssb_ResourceList_count; ++i) {
            Free_CFRA_SSB_Resource(value.ssb_ResourceList_items[i]);
        }
        std::free(value.ssb_ResourceList_items);
        value.ssb_ResourceList_items = nullptr;
    }
    value.ssb_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_TwoStep_r16(Encoder& enc, const CFRA_TwoStep_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_occasionsTwoStepRA_r16);
    enc.WriteBit(value.has_msgA_TransMax_r16);
    if (value.has_occasionsTwoStepRA_r16) {
        Encode_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(enc, value.occasionsTwoStepRA_r16);
    }
    Encode_MsgA_PUSCH_Resource_r16(enc, value.msgA_CFRA_PUSCH_r16);
    if (value.has_msgA_TransMax_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_TransMax_r16), 0, 9);
    }
    Encode_CFRA_TwoStep_r16_ResourcesTwoStep_r16(enc, value.resourcesTwoStep_r16);
    return enc.Error();
}

ErrorCode Decode_CFRA_TwoStep_r16(Decoder& dec, CFRA_TwoStep_r16& value)
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
        if (Decode_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(dec, value.occasionsTwoStepRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MsgA_PUSCH_Resource_r16(dec, value.msgA_CFRA_PUSCH_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.msgA_TransMax_r16 = (CFRA_TwoStep_r16_MsgA_TransMax_r16)tmp_value;
    }
    {
        if (Decode_CFRA_TwoStep_r16_ResourcesTwoStep_r16(dec, value.resourcesTwoStep_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_TwoStep_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_TwoStep_r16(CFRA_TwoStep_r16& value)
{
    if (value.has_occasionsTwoStepRA_r16) {
        Free_CFRA_TwoStep_r16_OccasionsTwoStepRA_r16(value.occasionsTwoStepRA_r16);
    }
    Free_MsgA_PUSCH_Resource_r16(value.msgA_CFRA_PUSCH_r16);
    if (value.has_msgA_TransMax_r16) {
    }
    Free_CFRA_TwoStep_r16_ResourcesTwoStep_r16(value.resourcesTwoStep_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigDedicated_ExtGroup1(Encoder& enc, const RACH_ConfigDedicated_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_PrioritizationTwoStep_r16);
    enc.WriteBit(value.has_cfra_TwoStep_r16);
    if (value.has_ra_PrioritizationTwoStep_r16) {
        Encode_RA_Prioritization(enc, value.ra_PrioritizationTwoStep_r16);
    }
    if (value.has_cfra_TwoStep_r16) {
        Encode_CFRA_TwoStep_r16(enc, value.cfra_TwoStep_r16);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigDedicated_ExtGroup1(Decoder& dec, RACH_ConfigDedicated_ExtGroup1& value)
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
        if (Decode_CFRA_TwoStep_r16(dec, value.cfra_TwoStep_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigDedicated_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigDedicated_ExtGroup1(RACH_ConfigDedicated_ExtGroup1& value)
{
    if (value.has_ra_PrioritizationTwoStep_r16) {
        Free_RA_Prioritization(value.ra_PrioritizationTwoStep_r16);
    }
    if (value.has_cfra_TwoStep_r16) {
        Free_CFRA_TwoStep_r16(value.cfra_TwoStep_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_ExtGroup1(Encoder& enc, const CFRA_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_totalNumberOfRA_Preambles);
    if (value.has_totalNumberOfRA_Preambles) {
        enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberOfRA_Preambles), 1, 63);
    }
    return enc.Error();
}

ErrorCode Decode_CFRA_ExtGroup1(Decoder& dec, CFRA_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 63, tmp_value)) { goto fail; }
        value.totalNumberOfRA_Preambles = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_ExtGroup1(CFRA_ExtGroup1& value)
{
    if (value.has_totalNumberOfRA_Preambles) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_ExtGroup2(Encoder& enc, const CFRA_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_msg1_RepetitionNum_r18);
    if (value.has_msg1_RepetitionNum_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_RepetitionNum_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_CFRA_ExtGroup2(Decoder& dec, CFRA_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_RepetitionNum_r18 = (CFRA_ExtGroup2_Msg1_RepetitionNum_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_ExtGroup2(CFRA_ExtGroup2& value)
{
    if (value.has_msg1_RepetitionNum_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_Occasions(Encoder& enc, const CFRA_Occasions& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_perRACH_Occasion);
    Encode_RACH_ConfigGeneric(enc, value.rach_ConfigGeneric);
    if (value.has_ssb_perRACH_Occasion) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_perRACH_Occasion), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_CFRA_Occasions(Decoder& dec, CFRA_Occasions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigGeneric) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_perRACH_Occasion = (CFRA_Occasions_Ssb_perRACH_Occasion)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_Occasions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_Occasions(CFRA_Occasions& value)
{
    Free_RACH_ConfigGeneric(value.rach_ConfigGeneric);
    if (value.has_ssb_perRACH_Occasion) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_Resources_Ssb(Encoder& enc, const CFRA_Resources_Ssb& value)
{
    (void)value;
enc.WriteConstrainedLength(value.ssb_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ssb_ResourceList_count; ++i) {
    Encode_CFRA_SSB_Resource(enc, value.ssb_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_ssb_OccasionMaskIndex), 0, 15);
    return enc.Error();
}

ErrorCode Decode_CFRA_Resources_Ssb(Decoder& dec, CFRA_Resources_Ssb& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ssb_ResourceList_count)) { goto fail; }
if (value.ssb_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ssb_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ssb_ResourceList_count > 0u) {
    value.ssb_ResourceList_items = (CFRA_SSB_Resource*)std::malloc((std::size_t)value.ssb_ResourceList_count * sizeof(CFRA_SSB_Resource));
    if (value.ssb_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ssb_ResourceList_items, 0, (std::size_t)value.ssb_ResourceList_count * sizeof(CFRA_SSB_Resource));
}
for (std::uint32_t i = 0; i < value.ssb_ResourceList_count; ++i) {
    if (Decode_CFRA_SSB_Resource(dec, value.ssb_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_ssb_OccasionMaskIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_Resources_Ssb(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_Resources_Ssb(CFRA_Resources_Ssb& value)
{
    if (value.ssb_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ssb_ResourceList_count; ++i) {
            Free_CFRA_SSB_Resource(value.ssb_ResourceList_items[i]);
        }
        std::free(value.ssb_ResourceList_items);
        value.ssb_ResourceList_items = nullptr;
    }
    value.ssb_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_Resources_Csirs(Encoder& enc, const CFRA_Resources_Csirs& value)
{
    (void)value;
enc.WriteConstrainedLength(value.csirs_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csirs_ResourceList_count; ++i) {
    Encode_CFRA_CSIRS_Resource(enc, value.csirs_ResourceList_items[i]);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdCSI_RS), 0, 127);
    return enc.Error();
}

ErrorCode Decode_CFRA_Resources_Csirs(Decoder& dec, CFRA_Resources_Csirs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.csirs_ResourceList_count)) { goto fail; }
if (value.csirs_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csirs_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csirs_ResourceList_count > 0u) {
    value.csirs_ResourceList_items = (CFRA_CSIRS_Resource*)std::malloc((std::size_t)value.csirs_ResourceList_count * sizeof(CFRA_CSIRS_Resource));
    if (value.csirs_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csirs_ResourceList_items, 0, (std::size_t)value.csirs_ResourceList_count * sizeof(CFRA_CSIRS_Resource));
}
for (std::uint32_t i = 0; i < value.csirs_ResourceList_count; ++i) {
    if (Decode_CFRA_CSIRS_Resource(dec, value.csirs_ResourceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdCSI_RS = (RSRP_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_Resources_Csirs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_Resources_Csirs(CFRA_Resources_Csirs& value)
{
    if (value.csirs_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.csirs_ResourceList_count; ++i) {
            Free_CFRA_CSIRS_Resource(value.csirs_ResourceList_items[i]);
        }
        std::free(value.csirs_ResourceList_items);
        value.csirs_ResourceList_items = nullptr;
    }
    value.csirs_ResourceList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA_Resources(Encoder& enc, const CFRA_Resources& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CFRA_Resources_Tag_ssb:
        Encode_CFRA_Resources_Ssb(enc, value.u.ssb);
        break;
    case CFRA_Resources_Tag_csirs:
        Encode_CFRA_Resources_Csirs(enc, value.u.csirs);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CFRA_Resources(Decoder& dec, CFRA_Resources& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CFRA_Resources_Tag)root_index;
    switch (value.tag) {
    case CFRA_Resources_Tag_ssb: {
        if (Decode_CFRA_Resources_Ssb(dec, value.u.ssb) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CFRA_Resources_Tag_csirs: {
        if (Decode_CFRA_Resources_Csirs(dec, value.u.csirs) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CFRA_Resources(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA_Resources(CFRA_Resources& value)
{
    switch (value.tag) {
    case CFRA_Resources_Tag_ssb:
        Free_CFRA_Resources_Ssb(value.u.ssb);
        break;
    case CFRA_Resources_Tag_csirs:
        Free_CFRA_Resources_Csirs(value.u.csirs);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CFRA(Encoder& enc, const CFRA& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_occasions);
    if (value.has_occasions) {
        Encode_CFRA_Occasions(enc, value.occasions);
    }
    Encode_CFRA_Resources(enc, value.resources);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CFRA_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CFRA_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CFRA(Decoder& dec, CFRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CFRA_Occasions(dec, value.occasions) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CFRA_Resources(dec, value.resources) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_CFRA_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CFRA_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CFRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CFRA(CFRA& value)
{
    if (value.has_occasions) {
        Free_CFRA_Occasions(value.occasions);
    }
    Free_CFRA_Resources(value.resources);
    if (value.has_extGroup1) {
        Free_CFRA_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CFRA_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RACH_ConfigDedicated(Encoder& enc, const RACH_ConfigDedicated& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cfra);
    enc.WriteBit(value.has_ra_Prioritization);
    if (value.has_cfra) {
        Encode_CFRA(enc, value.cfra);
    }
    if (value.has_ra_Prioritization) {
        Encode_RA_Prioritization(enc, value.ra_Prioritization);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RACH_ConfigDedicated_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigDedicated(Decoder& dec, RACH_ConfigDedicated& value)
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
        if (Decode_CFRA(dec, value.cfra) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RA_Prioritization(dec, value.ra_Prioritization) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_RACH_ConfigDedicated_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RACH_ConfigDedicated(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigDedicated(RACH_ConfigDedicated& value)
{
    if (value.has_cfra) {
        Free_CFRA(value.cfra);
    }
    if (value.has_ra_Prioritization) {
        Free_RA_Prioritization(value.ra_Prioritization);
    }
    if (value.has_extGroup1) {
        Free_RACH_ConfigDedicated_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReconfigurationWithSync_Rach_ConfigDedicated(Encoder& enc, const ReconfigurationWithSync_Rach_ConfigDedicated& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ReconfigurationWithSync_Rach_ConfigDedicated_Tag_uplink:
        Encode_RACH_ConfigDedicated(enc, value.u.uplink);
        break;
    case ReconfigurationWithSync_Rach_ConfigDedicated_Tag_supplementaryUplink:
        Encode_RACH_ConfigDedicated(enc, value.u.supplementaryUplink);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ReconfigurationWithSync_Rach_ConfigDedicated(Decoder& dec, ReconfigurationWithSync_Rach_ConfigDedicated& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ReconfigurationWithSync_Rach_ConfigDedicated_Tag)root_index;
    switch (value.tag) {
    case ReconfigurationWithSync_Rach_ConfigDedicated_Tag_uplink: {
        if (Decode_RACH_ConfigDedicated(dec, value.u.uplink) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ReconfigurationWithSync_Rach_ConfigDedicated_Tag_supplementaryUplink: {
        if (Decode_RACH_ConfigDedicated(dec, value.u.supplementaryUplink) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReconfigurationWithSync_Rach_ConfigDedicated(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReconfigurationWithSync_Rach_ConfigDedicated(ReconfigurationWithSync_Rach_ConfigDedicated& value)
{
    switch (value.tag) {
    case ReconfigurationWithSync_Rach_ConfigDedicated_Tag_uplink:
        Free_RACH_ConfigDedicated(value.u.uplink);
        break;
    case ReconfigurationWithSync_Rach_ConfigDedicated_Tag_supplementaryUplink:
        Free_RACH_ConfigDedicated(value.u.supplementaryUplink);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ReconfigurationWithSync(Encoder& enc, const ReconfigurationWithSync& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_spCellConfigCommon);
    enc.WriteBit(value.has_rach_ConfigDedicated);
    if (value.has_spCellConfigCommon) {
        Encode_ServingCellConfigCommon(enc, value.spCellConfigCommon);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.newUE_Identity), 0, 65535);
    enc.WriteConstrainedInteger((std::int64_t)(value.t304), 0, 7);
    if (value.has_rach_ConfigDedicated) {
        Encode_ReconfigurationWithSync_Rach_ConfigDedicated(enc, value.rach_ConfigDedicated);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ReconfigurationWithSync_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ReconfigurationWithSync_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ReconfigurationWithSync_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_ReconfigurationWithSync_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ReconfigurationWithSync(Decoder& dec, ReconfigurationWithSync& value)
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
        if (Decode_ServingCellConfigCommon(dec, value.spCellConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.newUE_Identity = (RNTI_Value)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t304 = (ReconfigurationWithSync_T304)tmp_value;
    }
    if (present_1) {
        if (Decode_ReconfigurationWithSync_Rach_ConfigDedicated(dec, value.rach_ConfigDedicated) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_ReconfigurationWithSync_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ReconfigurationWithSync_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ReconfigurationWithSync_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_ReconfigurationWithSync_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_ReconfigurationWithSync(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReconfigurationWithSync(ReconfigurationWithSync& value)
{
    if (value.has_spCellConfigCommon) {
        Free_ServingCellConfigCommon(value.spCellConfigCommon);
    }
    if (value.has_rach_ConfigDedicated) {
        Free_ReconfigurationWithSync_Rach_ConfigDedicated(value.rach_ConfigDedicated);
    }
    if (value.has_extGroup1) {
        Free_ReconfigurationWithSync_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ReconfigurationWithSync_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ReconfigurationWithSync_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_ReconfigurationWithSync_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig_ExtGroup2(Encoder& enc, const CrossCarrierSchedulingConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ccs_BlindDetectionSplit_r17);
    if (value.has_ccs_BlindDetectionSplit_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ccs_BlindDetectionSplit_r17), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig_ExtGroup2(Decoder& dec, CrossCarrierSchedulingConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ccs_BlindDetectionSplit_r17 = (CrossCarrierSchedulingConfig_ExtGroup2_Ccs_BlindDetectionSplit_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig_ExtGroup2(CrossCarrierSchedulingConfig_ExtGroup2& value)
{
    if (value.has_ccs_BlindDetectionSplit_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(Encoder& enc, const CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierIndicatorSizeDCI_1_2_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierIndicatorSizeDCI_0_2_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(Decoder& dec, CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.carrierIndicatorSizeDCI_1_2_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.carrierIndicatorSizeDCI_0_2_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig_ExtGroup1(Encoder& enc, const CrossCarrierSchedulingConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_carrierIndicatorSize_r16);
    enc.WriteBit(value.has_enableDefaultBeamForCCS_r16);
    if (value.has_carrierIndicatorSize_r16) {
        Encode_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(enc, value.carrierIndicatorSize_r16);
    }
    if (value.has_enableDefaultBeamForCCS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDefaultBeamForCCS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig_ExtGroup1(Decoder& dec, CrossCarrierSchedulingConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(dec, value.carrierIndicatorSize_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.enableDefaultBeamForCCS_r16 = (CrossCarrierSchedulingConfig_ExtGroup1_EnableDefaultBeamForCCS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig_ExtGroup1(CrossCarrierSchedulingConfig_ExtGroup1& value)
{
    if (value.has_carrierIndicatorSize_r16) {
        Free_CrossCarrierSchedulingConfig_ExtGroup1_CarrierIndicatorSize_r16(value.carrierIndicatorSize_r16);
    }
    if (value.has_enableDefaultBeamForCCS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(Encoder& enc, const CrossCarrierSchedulingConfig_SchedulingCellInfo_Own& value)
{
    (void)value;
    enc.WriteBool(value.cif_Presence);
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(Decoder& dec, CrossCarrierSchedulingConfig_SchedulingCellInfo_Own& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.cif_Presence = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(CrossCarrierSchedulingConfig_SchedulingCellInfo_Own& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(Encoder& enc, const CrossCarrierSchedulingConfig_SchedulingCellInfo_Other& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.schedulingCellId), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.cif_InSchedulingCell), 1, 7);
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(Decoder& dec, CrossCarrierSchedulingConfig_SchedulingCellInfo_Other& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.schedulingCellId = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
        value.cif_InSchedulingCell = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(CrossCarrierSchedulingConfig_SchedulingCellInfo_Other& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig_SchedulingCellInfo(Encoder& enc, const CrossCarrierSchedulingConfig_SchedulingCellInfo& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_own:
        Encode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(enc, value.u.own);
        break;
    case CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_other:
        Encode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(enc, value.u.other);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig_SchedulingCellInfo(Decoder& dec, CrossCarrierSchedulingConfig_SchedulingCellInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag)root_index;
    switch (value.tag) {
    case CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_own: {
        if (Decode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(dec, value.u.own) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_other: {
        if (Decode_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(dec, value.u.other) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CrossCarrierSchedulingConfig_SchedulingCellInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig_SchedulingCellInfo(CrossCarrierSchedulingConfig_SchedulingCellInfo& value)
{
    switch (value.tag) {
    case CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_own:
        Free_CrossCarrierSchedulingConfig_SchedulingCellInfo_Own(value.u.own);
        break;
    case CrossCarrierSchedulingConfig_SchedulingCellInfo_Tag_other:
        Free_CrossCarrierSchedulingConfig_SchedulingCellInfo_Other(value.u.other);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CrossCarrierSchedulingConfig(Encoder& enc, const CrossCarrierSchedulingConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    Encode_CrossCarrierSchedulingConfig_SchedulingCellInfo(enc, value.schedulingCellInfo);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CrossCarrierSchedulingConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CrossCarrierSchedulingConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CrossCarrierSchedulingConfig(Decoder& dec, CrossCarrierSchedulingConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_CrossCarrierSchedulingConfig_SchedulingCellInfo(dec, value.schedulingCellInfo) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_CrossCarrierSchedulingConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CrossCarrierSchedulingConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CrossCarrierSchedulingConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CrossCarrierSchedulingConfig(CrossCarrierSchedulingConfig& value)
{
    Free_CrossCarrierSchedulingConfig_SchedulingCellInfo(value.schedulingCellInfo);
    if (value.has_extGroup1) {
        Free_CrossCarrierSchedulingConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CrossCarrierSchedulingConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup1(Encoder& enc, const ServingCellConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_lte_CRS_ToMatchAround);
    enc.WriteBit(value.has_rateMatchPatternToAddModList);
    enc.WriteBit(value.has_rateMatchPatternToReleaseList);
    enc.WriteBit(value.has_downlinkChannelBW_PerSCS_List);
    if (value.has_lte_CRS_ToMatchAround) {
        Encode_SetupRelease_RateMatchPatternLTE_CRS(enc, value.lte_CRS_ToMatchAround);
    }
    if (value.has_rateMatchPatternToAddModList) {
enc.WriteConstrainedLength(value.rateMatchPatternToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
    Encode_RateMatchPattern(enc, value.rateMatchPatternToAddModList_items[i]);
}
    }
    if (value.has_rateMatchPatternToReleaseList) {
enc.WriteConstrainedLength(value.rateMatchPatternToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchPatternToReleaseList_items[i]), 0, 3);
}
    }
    if (value.has_downlinkChannelBW_PerSCS_List) {
enc.WriteConstrainedLength(value.downlinkChannelBW_PerSCS_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.downlinkChannelBW_PerSCS_List_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.downlinkChannelBW_PerSCS_List_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup1(Decoder& dec, ServingCellConfig_ExtGroup1& value)
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
        if (Decode_SetupRelease_RateMatchPatternLTE_CRS(dec, value.lte_CRS_ToMatchAround) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToAddModList_count)) { goto fail; }
if (value.rateMatchPatternToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToAddModList_count > 0u) {
    value.rateMatchPatternToAddModList_items = (RateMatchPattern*)std::malloc((std::size_t)value.rateMatchPatternToAddModList_count * sizeof(RateMatchPattern));
    if (value.rateMatchPatternToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToAddModList_items, 0, (std::size_t)value.rateMatchPatternToAddModList_count * sizeof(RateMatchPattern));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
    if (Decode_RateMatchPattern(dec, value.rateMatchPatternToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.rateMatchPatternToReleaseList_count)) { goto fail; }
if (value.rateMatchPatternToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.rateMatchPatternToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.rateMatchPatternToReleaseList_count > 0u) {
    value.rateMatchPatternToReleaseList_items = (RateMatchPatternId*)std::malloc((std::size_t)value.rateMatchPatternToReleaseList_count * sizeof(RateMatchPatternId));
    if (value.rateMatchPatternToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.rateMatchPatternToReleaseList_items, 0, (std::size_t)value.rateMatchPatternToReleaseList_count * sizeof(RateMatchPatternId));
}
for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.rateMatchPatternToReleaseList_items[i] = (RateMatchPatternId)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.downlinkChannelBW_PerSCS_List_count)) { goto fail; }
if (value.downlinkChannelBW_PerSCS_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.downlinkChannelBW_PerSCS_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.downlinkChannelBW_PerSCS_List_count > 0u) {
    value.downlinkChannelBW_PerSCS_List_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.downlinkChannelBW_PerSCS_List_count * sizeof(SCS_SpecificCarrier));
    if (value.downlinkChannelBW_PerSCS_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.downlinkChannelBW_PerSCS_List_items, 0, (std::size_t)value.downlinkChannelBW_PerSCS_List_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.downlinkChannelBW_PerSCS_List_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.downlinkChannelBW_PerSCS_List_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup1(ServingCellConfig_ExtGroup1& value)
{
    if (value.has_lte_CRS_ToMatchAround) {
        Free_SetupRelease_RateMatchPatternLTE_CRS(value.lte_CRS_ToMatchAround);
    }
    if (value.has_rateMatchPatternToAddModList) {
        if (value.rateMatchPatternToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToAddModList_count; ++i) {
                Free_RateMatchPattern(value.rateMatchPatternToAddModList_items[i]);
            }
            std::free(value.rateMatchPatternToAddModList_items);
            value.rateMatchPatternToAddModList_items = nullptr;
        }
        value.rateMatchPatternToAddModList_count = 0;
    }
    if (value.has_rateMatchPatternToReleaseList) {
        if (value.rateMatchPatternToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.rateMatchPatternToReleaseList_count; ++i) {
            }
            std::free(value.rateMatchPatternToReleaseList_items);
            value.rateMatchPatternToReleaseList_items = nullptr;
        }
        value.rateMatchPatternToReleaseList_count = 0;
    }
    if (value.has_downlinkChannelBW_PerSCS_List) {
        if (value.downlinkChannelBW_PerSCS_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.downlinkChannelBW_PerSCS_List_count; ++i) {
                Free_SCS_SpecificCarrier(value.downlinkChannelBW_PerSCS_List_items[i]);
            }
            std::free(value.downlinkChannelBW_PerSCS_List_items);
            value.downlinkChannelBW_PerSCS_List_items = nullptr;
        }
        value.downlinkChannelBW_PerSCS_List_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(Encoder& enc, const TDD_UL_DL_ConfigDedicated_IAB_MT_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotSpecificConfigurationsToAddModList_IAB_MT_r16);
    enc.WriteBit(value.has_slotSpecificConfigurationsToReleaseList_IAB_MT_r16);
    if (value.has_slotSpecificConfigurationsToAddModList_IAB_MT_r16) {
enc.WriteConstrainedLength(value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count; ++i) {
    Encode_TDD_UL_DL_SlotConfig_IAB_MT_r16(enc, value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items[i]);
}
    }
    if (value.has_slotSpecificConfigurationsToReleaseList_IAB_MT_r16) {
enc.WriteConstrainedLength(value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items[i]), 0, 319);
}
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(Decoder& dec, TDD_UL_DL_ConfigDedicated_IAB_MT_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count)) { goto fail; }
if (value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count > 0u) {
    value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items = (TDD_UL_DL_SlotConfig_IAB_MT_r16*)std::malloc((std::size_t)value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count * sizeof(TDD_UL_DL_SlotConfig_IAB_MT_r16));
    if (value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items, 0, (std::size_t)value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count * sizeof(TDD_UL_DL_SlotConfig_IAB_MT_r16));
}
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count; ++i) {
    if (Decode_TDD_UL_DL_SlotConfig_IAB_MT_r16(dec, value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count)) { goto fail; }
if (value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count > 0u) {
    value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items = (TDD_UL_DL_SlotIndex*)std::malloc((std::size_t)value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count * sizeof(TDD_UL_DL_SlotIndex));
    if (value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items, 0, (std::size_t)value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count * sizeof(TDD_UL_DL_SlotIndex));
}
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
    value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items[i] = (TDD_UL_DL_SlotIndex)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(TDD_UL_DL_ConfigDedicated_IAB_MT_r16& value)
{
    if (value.has_slotSpecificConfigurationsToAddModList_IAB_MT_r16) {
        if (value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count; ++i) {
                Free_TDD_UL_DL_SlotConfig_IAB_MT_r16(value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items[i]);
            }
            std::free(value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items);
            value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_items = nullptr;
        }
        value.slotSpecificConfigurationsToAddModList_IAB_MT_r16_count = 0;
    }
    if (value.has_slotSpecificConfigurationsToReleaseList_IAB_MT_r16) {
        if (value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count; ++i) {
            }
            std::free(value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items);
            value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_items = nullptr;
        }
        value.slotSpecificConfigurationsToReleaseList_IAB_MT_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_WithinActiveTimeConfig_r16(Encoder& enc, const WithinActiveTimeConfig_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_firstWithinActiveTimeBWP_Id_r16);
    enc.WriteBit(value.has_dormancyGroupWithinActiveTime_r16);
    if (value.has_firstWithinActiveTimeBWP_Id_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.firstWithinActiveTimeBWP_Id_r16), 0, 4);
    }
    if (value.has_dormancyGroupWithinActiveTime_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dormancyGroupWithinActiveTime_r16), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_WithinActiveTimeConfig_r16(Decoder& dec, WithinActiveTimeConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.firstWithinActiveTimeBWP_Id_r16 = (BWP_Id)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.dormancyGroupWithinActiveTime_r16 = (DormancyGroupID_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_WithinActiveTimeConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_WithinActiveTimeConfig_r16(WithinActiveTimeConfig_r16& value)
{
    if (value.has_firstWithinActiveTimeBWP_Id_r16) {
    }
    if (value.has_dormancyGroupWithinActiveTime_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_WithinActiveTimeConfig_r16(Encoder& enc, const SetupRelease_WithinActiveTimeConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_WithinActiveTimeConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_WithinActiveTimeConfig_r16_Tag_setup:
        Encode_WithinActiveTimeConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_WithinActiveTimeConfig_r16(Decoder& dec, SetupRelease_WithinActiveTimeConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_WithinActiveTimeConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_WithinActiveTimeConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_WithinActiveTimeConfig_r16_Tag_setup: {
        if (Decode_WithinActiveTimeConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_WithinActiveTimeConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_WithinActiveTimeConfig_r16(SetupRelease_WithinActiveTimeConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_WithinActiveTimeConfig_r16_Tag_release:
        break;
    case SetupRelease_WithinActiveTimeConfig_r16_Tag_setup:
        Free_WithinActiveTimeConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_OutsideActiveTimeConfig_r16(Encoder& enc, const OutsideActiveTimeConfig_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_firstOutsideActiveTimeBWP_Id_r16);
    enc.WriteBit(value.has_dormancyGroupOutsideActiveTime_r16);
    if (value.has_firstOutsideActiveTimeBWP_Id_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.firstOutsideActiveTimeBWP_Id_r16), 0, 4);
    }
    if (value.has_dormancyGroupOutsideActiveTime_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dormancyGroupOutsideActiveTime_r16), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_OutsideActiveTimeConfig_r16(Decoder& dec, OutsideActiveTimeConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.firstOutsideActiveTimeBWP_Id_r16 = (BWP_Id)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.dormancyGroupOutsideActiveTime_r16 = (DormancyGroupID_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OutsideActiveTimeConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OutsideActiveTimeConfig_r16(OutsideActiveTimeConfig_r16& value)
{
    if (value.has_firstOutsideActiveTimeBWP_Id_r16) {
    }
    if (value.has_dormancyGroupOutsideActiveTime_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_OutsideActiveTimeConfig_r16(Encoder& enc, const SetupRelease_OutsideActiveTimeConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_OutsideActiveTimeConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_OutsideActiveTimeConfig_r16_Tag_setup:
        Encode_OutsideActiveTimeConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_OutsideActiveTimeConfig_r16(Decoder& dec, SetupRelease_OutsideActiveTimeConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_OutsideActiveTimeConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_OutsideActiveTimeConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_OutsideActiveTimeConfig_r16_Tag_setup: {
        if (Decode_OutsideActiveTimeConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_OutsideActiveTimeConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_OutsideActiveTimeConfig_r16(SetupRelease_OutsideActiveTimeConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_OutsideActiveTimeConfig_r16_Tag_release:
        break;
    case SetupRelease_OutsideActiveTimeConfig_r16_Tag_setup:
        Free_OutsideActiveTimeConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DormantBWP_Config_r16(Encoder& enc, const DormantBWP_Config_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_dormantBWP_Id_r16);
    enc.WriteBit(value.has_withinActiveTimeConfig_r16);
    enc.WriteBit(value.has_outsideActiveTimeConfig_r16);
    if (value.has_dormantBWP_Id_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dormantBWP_Id_r16), 0, 4);
    }
    if (value.has_withinActiveTimeConfig_r16) {
        Encode_SetupRelease_WithinActiveTimeConfig_r16(enc, value.withinActiveTimeConfig_r16);
    }
    if (value.has_outsideActiveTimeConfig_r16) {
        Encode_SetupRelease_OutsideActiveTimeConfig_r16(enc, value.outsideActiveTimeConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_DormantBWP_Config_r16(Decoder& dec, DormantBWP_Config_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.dormantBWP_Id_r16 = (BWP_Id)tmp_value;
    }
    if (present_1) {
        if (Decode_SetupRelease_WithinActiveTimeConfig_r16(dec, value.withinActiveTimeConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_OutsideActiveTimeConfig_r16(dec, value.outsideActiveTimeConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DormantBWP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DormantBWP_Config_r16(DormantBWP_Config_r16& value)
{
    if (value.has_dormantBWP_Id_r16) {
    }
    if (value.has_withinActiveTimeConfig_r16) {
        Free_SetupRelease_WithinActiveTimeConfig_r16(value.withinActiveTimeConfig_r16);
    }
    if (value.has_outsideActiveTimeConfig_r16) {
        Free_SetupRelease_OutsideActiveTimeConfig_r16(value.outsideActiveTimeConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_DormantBWP_Config_r16(Encoder& enc, const SetupRelease_DormantBWP_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DormantBWP_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DormantBWP_Config_r16_Tag_setup:
        Encode_DormantBWP_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DormantBWP_Config_r16(Decoder& dec, SetupRelease_DormantBWP_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DormantBWP_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DormantBWP_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DormantBWP_Config_r16_Tag_setup: {
        if (Decode_DormantBWP_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DormantBWP_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DormantBWP_Config_r16(SetupRelease_DormantBWP_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DormantBWP_Config_r16_Tag_release:
        break;
    case SetupRelease_DormantBWP_Config_r16_Tag_setup:
        Free_DormantBWP_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(Encoder& enc, const ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS15kHz:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.refSCS15kHz), -2, 2);
        break;
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS30KHz:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.refSCS30KHz), -5, 5);
        break;
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS60KHz:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.refSCS60KHz), -10, 10);
        break;
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS120KHz:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.refSCS120KHz), -20, 20);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(Decoder& dec, ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag)root_index;
    switch (value.tag) {
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS15kHz: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-2, 2, tmp_value)) { goto fail; }
        value.u.refSCS15kHz = (int64_t)tmp_value;
        break;
    }
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS30KHz: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-5, 5, tmp_value)) { goto fail; }
        value.u.refSCS30KHz = (int64_t)tmp_value;
        break;
    }
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS60KHz: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-10, 10, tmp_value)) { goto fail; }
        value.u.refSCS60KHz = (int64_t)tmp_value;
        break;
    }
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS120KHz: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-20, 20, tmp_value)) { goto fail; }
        value.u.refSCS120KHz = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16& value)
{
    switch (value.tag) {
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS15kHz:
        break;
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS30KHz:
        break;
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS60KHz:
        break;
    case ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16_Tag_refSCS120KHz:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyJ(Encoder& enc, const DummyJ& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_toDL_COT_SharingED_Threshold_r16);
    enc.WriteBit(value.has_absenceOfAnyOtherTechnology_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxEnergyDetectionThreshold_r16), -85, -52);
    enc.WriteConstrainedInteger((std::int64_t)(value.energyDetectionThresholdOffset_r16), -20, -13);
    if (value.has_ul_toDL_COT_SharingED_Threshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_toDL_COT_SharingED_Threshold_r16), -85, -52);
    }
    if (value.has_absenceOfAnyOtherTechnology_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absenceOfAnyOtherTechnology_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DummyJ(Decoder& dec, DummyJ& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.maxEnergyDetectionThreshold_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-20, -13, tmp_value)) { goto fail; }
        value.energyDetectionThresholdOffset_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.ul_toDL_COT_SharingED_Threshold_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.absenceOfAnyOtherTechnology_r16 = (DummyJ_AbsenceOfAnyOtherTechnology_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyJ(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyJ(DummyJ& value)
{
    if (value.has_ul_toDL_COT_SharingED_Threshold_r16) {
    }
    if (value.has_absenceOfAnyOtherTechnology_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_DummyJ(Encoder& enc, const SetupRelease_DummyJ& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DummyJ_Tag_release:
        (void)0;
        break;
    case SetupRelease_DummyJ_Tag_setup:
        Encode_DummyJ(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DummyJ(Decoder& dec, SetupRelease_DummyJ& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DummyJ_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DummyJ_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DummyJ_Tag_setup: {
        if (Decode_DummyJ(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DummyJ(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DummyJ(SetupRelease_DummyJ& value)
{
    switch (value.tag) {
    case SetupRelease_DummyJ_Tag_release:
        break;
    case SetupRelease_DummyJ_Tag_setup:
        Free_DummyJ(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTE_CRS_PatternList_r16(Encoder& enc, const LTE_CRS_PatternList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_RateMatchPatternLTE_CRS(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_LTE_CRS_PatternList_r16(Decoder& dec, LTE_CRS_PatternList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (RateMatchPatternLTE_CRS*)std::malloc((std::size_t)value.count * sizeof(RateMatchPatternLTE_CRS));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(RateMatchPatternLTE_CRS));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_RateMatchPatternLTE_CRS(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_LTE_CRS_PatternList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTE_CRS_PatternList_r16(LTE_CRS_PatternList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_RateMatchPatternLTE_CRS(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_LTE_CRS_PatternList_r16(Encoder& enc, const SetupRelease_LTE_CRS_PatternList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_LTE_CRS_PatternList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_LTE_CRS_PatternList_r16_Tag_setup:
        Encode_LTE_CRS_PatternList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_LTE_CRS_PatternList_r16(Decoder& dec, SetupRelease_LTE_CRS_PatternList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_LTE_CRS_PatternList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_LTE_CRS_PatternList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_LTE_CRS_PatternList_r16_Tag_setup: {
        if (Decode_LTE_CRS_PatternList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_LTE_CRS_PatternList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_LTE_CRS_PatternList_r16(SetupRelease_LTE_CRS_PatternList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_LTE_CRS_PatternList_r16_Tag_release:
        break;
    case SetupRelease_LTE_CRS_PatternList_r16_Tag_setup:
        Free_LTE_CRS_PatternList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup2(Encoder& enc, const ServingCellConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_supplementaryUplinkRelease_r16);
    enc.WriteBit(value.has_tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16);
    enc.WriteBit(value.has_dormantBWP_Config_r16);
    enc.WriteBit(value.has_ca_SlotOffset_r16);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_intraCellGuardBandsDL_List_r16);
    enc.WriteBit(value.has_intraCellGuardBandsUL_List_r16);
    enc.WriteBit(value.has_csi_RS_ValidationWithDCI_r16);
    enc.WriteBit(value.has_lte_CRS_PatternList1_r16);
    enc.WriteBit(value.has_lte_CRS_PatternList2_r16);
    enc.WriteBit(value.has_crs_RateMatch_PerCORESETPoolIndex_r16);
    enc.WriteBit(value.has_enableTwoDefaultTCI_States_r16);
    enc.WriteBit(value.has_enableDefaultTCI_StatePerCoresetPoolIndex_r16);
    enc.WriteBit(value.has_enableBeamSwitchTiming_r16);
    enc.WriteBit(value.has_cbg_TxDiffTBsProcessingType1_r16);
    enc.WriteBit(value.has_cbg_TxDiffTBsProcessingType2_r16);
    if (value.has_supplementaryUplinkRelease_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supplementaryUplinkRelease_r16), 0, 0);
    }
    if (value.has_tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16) {
        Encode_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(enc, value.tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16);
    }
    if (value.has_dormantBWP_Config_r16) {
        Encode_SetupRelease_DormantBWP_Config_r16(enc, value.dormantBWP_Config_r16);
    }
    if (value.has_ca_SlotOffset_r16) {
        Encode_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(enc, value.ca_SlotOffset_r16);
    }
    if (value.has_dummy2) {
        Encode_SetupRelease_DummyJ(enc, value.dummy2);
    }
    if (value.has_intraCellGuardBandsDL_List_r16) {
enc.WriteConstrainedLength(value.intraCellGuardBandsDL_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intraCellGuardBandsDL_List_r16_count; ++i) {
    Encode_IntraCellGuardBandsPerSCS_r16(enc, value.intraCellGuardBandsDL_List_r16_items[i]);
}
    }
    if (value.has_intraCellGuardBandsUL_List_r16) {
enc.WriteConstrainedLength(value.intraCellGuardBandsUL_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.intraCellGuardBandsUL_List_r16_count; ++i) {
    Encode_IntraCellGuardBandsPerSCS_r16(enc, value.intraCellGuardBandsUL_List_r16_items[i]);
}
    }
    if (value.has_csi_RS_ValidationWithDCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_ValidationWithDCI_r16), 0, 0);
    }
    if (value.has_lte_CRS_PatternList1_r16) {
        Encode_SetupRelease_LTE_CRS_PatternList_r16(enc, value.lte_CRS_PatternList1_r16);
    }
    if (value.has_lte_CRS_PatternList2_r16) {
        Encode_SetupRelease_LTE_CRS_PatternList_r16(enc, value.lte_CRS_PatternList2_r16);
    }
    if (value.has_crs_RateMatch_PerCORESETPoolIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crs_RateMatch_PerCORESETPoolIndex_r16), 0, 0);
    }
    if (value.has_enableTwoDefaultTCI_States_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableTwoDefaultTCI_States_r16), 0, 0);
    }
    if (value.has_enableDefaultTCI_StatePerCoresetPoolIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDefaultTCI_StatePerCoresetPoolIndex_r16), 0, 0);
    }
    if (value.has_enableBeamSwitchTiming_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableBeamSwitchTiming_r16), 0, 0);
    }
    if (value.has_cbg_TxDiffTBsProcessingType1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbg_TxDiffTBsProcessingType1_r16), 0, 0);
    }
    if (value.has_cbg_TxDiffTBsProcessingType2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbg_TxDiffTBsProcessingType2_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup2(Decoder& dec, ServingCellConfig_ExtGroup2& value)
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
    if (present_0) {
        value.supplementaryUplinkRelease_r16 = (ServingCellConfig_ExtGroup2_SupplementaryUplinkRelease_r16)0;
    }
    if (present_1) {
        if (Decode_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(dec, value.tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_DormantBWP_Config_r16(dec, value.dormantBWP_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(dec, value.ca_SlotOffset_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_DummyJ(dec, value.dummy2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.intraCellGuardBandsDL_List_r16_count)) { goto fail; }
if (value.intraCellGuardBandsDL_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intraCellGuardBandsDL_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intraCellGuardBandsDL_List_r16_count > 0u) {
    value.intraCellGuardBandsDL_List_r16_items = (IntraCellGuardBandsPerSCS_r16*)std::malloc((std::size_t)value.intraCellGuardBandsDL_List_r16_count * sizeof(IntraCellGuardBandsPerSCS_r16));
    if (value.intraCellGuardBandsDL_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intraCellGuardBandsDL_List_r16_items, 0, (std::size_t)value.intraCellGuardBandsDL_List_r16_count * sizeof(IntraCellGuardBandsPerSCS_r16));
}
for (std::uint32_t i = 0; i < value.intraCellGuardBandsDL_List_r16_count; ++i) {
    if (Decode_IntraCellGuardBandsPerSCS_r16(dec, value.intraCellGuardBandsDL_List_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.intraCellGuardBandsUL_List_r16_count)) { goto fail; }
if (value.intraCellGuardBandsUL_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.intraCellGuardBandsUL_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.intraCellGuardBandsUL_List_r16_count > 0u) {
    value.intraCellGuardBandsUL_List_r16_items = (IntraCellGuardBandsPerSCS_r16*)std::malloc((std::size_t)value.intraCellGuardBandsUL_List_r16_count * sizeof(IntraCellGuardBandsPerSCS_r16));
    if (value.intraCellGuardBandsUL_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.intraCellGuardBandsUL_List_r16_items, 0, (std::size_t)value.intraCellGuardBandsUL_List_r16_count * sizeof(IntraCellGuardBandsPerSCS_r16));
}
for (std::uint32_t i = 0; i < value.intraCellGuardBandsUL_List_r16_count; ++i) {
    if (Decode_IntraCellGuardBandsPerSCS_r16(dec, value.intraCellGuardBandsUL_List_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
        value.csi_RS_ValidationWithDCI_r16 = (ServingCellConfig_ExtGroup2_Csi_RS_ValidationWithDCI_r16)0;
    }
    if (present_8) {
        if (Decode_SetupRelease_LTE_CRS_PatternList_r16(dec, value.lte_CRS_PatternList1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_SetupRelease_LTE_CRS_PatternList_r16(dec, value.lte_CRS_PatternList2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        value.crs_RateMatch_PerCORESETPoolIndex_r16 = (ServingCellConfig_ExtGroup2_Crs_RateMatch_PerCORESETPoolIndex_r16)0;
    }
    if (present_11) {
        value.enableTwoDefaultTCI_States_r16 = (ServingCellConfig_ExtGroup2_EnableTwoDefaultTCI_States_r16)0;
    }
    if (present_12) {
        value.enableDefaultTCI_StatePerCoresetPoolIndex_r16 = (ServingCellConfig_ExtGroup2_EnableDefaultTCI_StatePerCoresetPoolIndex_r16)0;
    }
    if (present_13) {
        value.enableBeamSwitchTiming_r16 = (ServingCellConfig_ExtGroup2_EnableBeamSwitchTiming_r16)0;
    }
    if (present_14) {
        value.cbg_TxDiffTBsProcessingType1_r16 = (ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType1_r16)0;
    }
    if (present_15) {
        value.cbg_TxDiffTBsProcessingType2_r16 = (ServingCellConfig_ExtGroup2_Cbg_TxDiffTBsProcessingType2_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup2(ServingCellConfig_ExtGroup2& value)
{
    if (value.has_supplementaryUplinkRelease_r16) {
    }
    if (value.has_tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16) {
        Free_TDD_UL_DL_ConfigDedicated_IAB_MT_r16(value.tdd_UL_DL_ConfigurationDedicated_IAB_MT_r16);
    }
    if (value.has_dormantBWP_Config_r16) {
        Free_SetupRelease_DormantBWP_Config_r16(value.dormantBWP_Config_r16);
    }
    if (value.has_ca_SlotOffset_r16) {
        Free_ServingCellConfig_ExtGroup2_Ca_SlotOffset_r16(value.ca_SlotOffset_r16);
    }
    if (value.has_dummy2) {
        Free_SetupRelease_DummyJ(value.dummy2);
    }
    if (value.has_intraCellGuardBandsDL_List_r16) {
        if (value.intraCellGuardBandsDL_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.intraCellGuardBandsDL_List_r16_count; ++i) {
                Free_IntraCellGuardBandsPerSCS_r16(value.intraCellGuardBandsDL_List_r16_items[i]);
            }
            std::free(value.intraCellGuardBandsDL_List_r16_items);
            value.intraCellGuardBandsDL_List_r16_items = nullptr;
        }
        value.intraCellGuardBandsDL_List_r16_count = 0;
    }
    if (value.has_intraCellGuardBandsUL_List_r16) {
        if (value.intraCellGuardBandsUL_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.intraCellGuardBandsUL_List_r16_count; ++i) {
                Free_IntraCellGuardBandsPerSCS_r16(value.intraCellGuardBandsUL_List_r16_items[i]);
            }
            std::free(value.intraCellGuardBandsUL_List_r16_items);
            value.intraCellGuardBandsUL_List_r16_items = nullptr;
        }
        value.intraCellGuardBandsUL_List_r16_count = 0;
    }
    if (value.has_csi_RS_ValidationWithDCI_r16) {
    }
    if (value.has_lte_CRS_PatternList1_r16) {
        Free_SetupRelease_LTE_CRS_PatternList_r16(value.lte_CRS_PatternList1_r16);
    }
    if (value.has_lte_CRS_PatternList2_r16) {
        Free_SetupRelease_LTE_CRS_PatternList_r16(value.lte_CRS_PatternList2_r16);
    }
    if (value.has_crs_RateMatch_PerCORESETPoolIndex_r16) {
    }
    if (value.has_enableTwoDefaultTCI_States_r16) {
    }
    if (value.has_enableDefaultTCI_StatePerCoresetPoolIndex_r16) {
    }
    if (value.has_enableBeamSwitchTiming_r16) {
    }
    if (value.has_cbg_TxDiffTBsProcessingType1_r16) {
    }
    if (value.has_cbg_TxDiffTBsProcessingType2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(Encoder& enc, const ChannelAccessConfig_r16_EnergyDetectionConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_maxEnergyDetectionThreshold_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.maxEnergyDetectionThreshold_r16), -85, -52);
        break;
    case ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_energyDetectionThresholdOffset_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.energyDetectionThresholdOffset_r16), -13, 20);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(Decoder& dec, ChannelAccessConfig_r16_EnergyDetectionConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag)root_index;
    switch (value.tag) {
    case ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_maxEnergyDetectionThreshold_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.u.maxEnergyDetectionThreshold_r16 = (int64_t)tmp_value;
        break;
    }
    case ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_energyDetectionThresholdOffset_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-13, 20, tmp_value)) { goto fail; }
        value.u.energyDetectionThresholdOffset_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(ChannelAccessConfig_r16_EnergyDetectionConfig_r16& value)
{
    switch (value.tag) {
    case ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_maxEnergyDetectionThreshold_r16:
        break;
    case ChannelAccessConfig_r16_EnergyDetectionConfig_r16_Tag_energyDetectionThresholdOffset_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ChannelAccessConfig_r16(Encoder& enc, const ChannelAccessConfig_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_energyDetectionConfig_r16);
    enc.WriteBit(value.has_ul_toDL_COT_SharingED_Threshold_r16);
    enc.WriteBit(value.has_absenceOfAnyOtherTechnology_r16);
    if (value.has_energyDetectionConfig_r16) {
        Encode_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(enc, value.energyDetectionConfig_r16);
    }
    if (value.has_ul_toDL_COT_SharingED_Threshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_toDL_COT_SharingED_Threshold_r16), -85, -52);
    }
    if (value.has_absenceOfAnyOtherTechnology_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.absenceOfAnyOtherTechnology_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ChannelAccessConfig_r16(Decoder& dec, ChannelAccessConfig_r16& value)
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
        if (Decode_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(dec, value.energyDetectionConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-85, -52, tmp_value)) { goto fail; }
        value.ul_toDL_COT_SharingED_Threshold_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        value.absenceOfAnyOtherTechnology_r16 = (ChannelAccessConfig_r16_AbsenceOfAnyOtherTechnology_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ChannelAccessConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ChannelAccessConfig_r16(ChannelAccessConfig_r16& value)
{
    if (value.has_energyDetectionConfig_r16) {
        Free_ChannelAccessConfig_r16_EnergyDetectionConfig_r16(value.energyDetectionConfig_r16);
    }
    if (value.has_ul_toDL_COT_SharingED_Threshold_r16) {
    }
    if (value.has_absenceOfAnyOtherTechnology_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_ChannelAccessConfig_r16(Encoder& enc, const SetupRelease_ChannelAccessConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_ChannelAccessConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_ChannelAccessConfig_r16_Tag_setup:
        Encode_ChannelAccessConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_ChannelAccessConfig_r16(Decoder& dec, SetupRelease_ChannelAccessConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_ChannelAccessConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_ChannelAccessConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_ChannelAccessConfig_r16_Tag_setup: {
        if (Decode_ChannelAccessConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_ChannelAccessConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_ChannelAccessConfig_r16(SetupRelease_ChannelAccessConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_ChannelAccessConfig_r16_Tag_release:
        break;
    case SetupRelease_ChannelAccessConfig_r16_Tag_setup:
        Free_ChannelAccessConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup3(Encoder& enc, const ServingCellConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_directionalCollisionHandling_r16);
    enc.WriteBit(value.has_channelAccessConfig_r16);
    if (value.has_directionalCollisionHandling_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directionalCollisionHandling_r16), 0, 0);
    }
    if (value.has_channelAccessConfig_r16) {
        Encode_SetupRelease_ChannelAccessConfig_r16(enc, value.channelAccessConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup3(Decoder& dec, ServingCellConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.directionalCollisionHandling_r16 = (ServingCellConfig_ExtGroup3_DirectionalCollisionHandling_r16)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_ChannelAccessConfig_r16(dec, value.channelAccessConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup3(ServingCellConfig_ExtGroup3& value)
{
    if (value.has_directionalCollisionHandling_r16) {
    }
    if (value.has_channelAccessConfig_r16) {
        Free_SetupRelease_ChannelAccessConfig_r16(value.channelAccessConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TCI_ActivatedConfig_r17(Encoder& enc, const TCI_ActivatedConfig_r17& value)
{
    (void)value;
enc.WriteConstrainedLength(value.pdcch_TCI_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pdcch_TCI_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_TCI_r17_items[i]), 0, 127);
}
    enc.WriteConstrainedBitString(value.pdsch_TCI_r17.bytes, value.pdsch_TCI_r17.bitLength, 1, 128);
    return enc.Error();
}

ErrorCode Decode_TCI_ActivatedConfig_r17(Decoder& dec, TCI_ActivatedConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pdcch_TCI_r17_count)) { goto fail; }
if (value.pdcch_TCI_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pdcch_TCI_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pdcch_TCI_r17_count > 0u) {
    value.pdcch_TCI_r17_items = (TCI_StateId*)std::malloc((std::size_t)value.pdcch_TCI_r17_count * sizeof(TCI_StateId));
    if (value.pdcch_TCI_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pdcch_TCI_r17_items, 0, (std::size_t)value.pdcch_TCI_r17_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.pdcch_TCI_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.pdcch_TCI_r17_items[i] = (TCI_StateId)tmp_value;
}
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 128)) { goto fail; }
        value.pdsch_TCI_r17.bytes = string_bytes;
        value.pdsch_TCI_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TCI_ActivatedConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TCI_ActivatedConfig_r17(TCI_ActivatedConfig_r17& value)
{
    if (value.pdcch_TCI_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pdcch_TCI_r17_count; ++i) {
        }
        std::free(value.pdcch_TCI_r17_items);
        value.pdcch_TCI_r17_items = nullptr;
    }
    value.pdcch_TCI_r17_count = 0;
    std::free(value.pdsch_TCI_r17.bytes);
    value.pdsch_TCI_r17.bytes = nullptr;
    value.pdsch_TCI_r17.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(Encoder& enc, const NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 17) {
        if (choice_index >= 17) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 17));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 16);
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n4_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n4_r17), 0, 3);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5_r17), 0, 4);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n8_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n8_r17), 0, 7);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10_r17), 0, 9);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n16_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n16_r17), 0, 15);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n20_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20_r17), 0, 19);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n32_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32_r17), 0, 31);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n40_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40_r17), 0, 39);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n64_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64_r17), 0, 63);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n80_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80_r17), 0, 79);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n160_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160_r17), 0, 159);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n320_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320_r17), 0, 319);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n640_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640_r17), 0, 639);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n1280_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280_r17), 0, 1279);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n2560_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560_r17), 0, 2559);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5120_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120_r17), 0, 5119);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10240_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240_r17), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(Decoder& dec, NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17& value)
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
        value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag)(17 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) {
        goto fail;
    }
    value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag)root_index;
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n4_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.n4_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.n5_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n8_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.n8_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.n10_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n16_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.n16_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n20_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.n20_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n32_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n40_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n64_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n80_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n160_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n320_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n640_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n1280_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n2560_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5120_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10240_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17& value)
{
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n4_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n8_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n16_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n20_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n32_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n40_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n64_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n80_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n160_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n320_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n640_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n1280_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n2560_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n5120_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17_Tag_n10240_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(Encoder& enc, const NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 17) {
        if (choice_index >= 17) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 17));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 16);
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n8_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n8_r17), 0, 7);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10_r17), 0, 9);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n16_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n16_r17), 0, 15);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20_r17), 0, 19);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n32_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32_r17), 0, 31);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n40_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40_r17), 0, 39);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n64_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64_r17), 0, 63);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n80_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80_r17), 0, 79);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n128_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n128_r17), 0, 127);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n160_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160_r17), 0, 159);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n320_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320_r17), 0, 319);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n640_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640_r17), 0, 639);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n1280_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280_r17), 0, 1279);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n2560_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560_r17), 0, 2559);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n5120_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120_r17), 0, 5119);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10240_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240_r17), 0, 10239);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20480_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20480_r17), 0, 20479);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(Decoder& dec, NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17& value)
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
        value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag)(17 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) {
        goto fail;
    }
    value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag)root_index;
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n8_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.n8_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.n10_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n16_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.n16_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.n20_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n32_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n40_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n64_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n80_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n128_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.n128_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n160_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n320_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n640_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n1280_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n2560_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n5120_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10240_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20480_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.n20480_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17& value)
{
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n8_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n16_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n32_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n40_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n64_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n80_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n128_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n160_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n320_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n640_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n1280_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n2560_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n5120_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n10240_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17_Tag_n20480_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(Encoder& enc, const NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 17) {
        if (choice_index >= 17) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 17));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 16);
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n16_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n16_r17), 0, 15);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20_r17), 0, 19);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n32_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32_r17), 0, 31);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40_r17), 0, 39);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n64_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64_r17), 0, 63);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n80_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80_r17), 0, 79);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n128_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n128_r17), 0, 127);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n160_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160_r17), 0, 159);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n256_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n256_r17), 0, 255);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n320_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320_r17), 0, 319);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n640_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640_r17), 0, 639);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n1280_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280_r17), 0, 1279);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n2560_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560_r17), 0, 2559);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n5120_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120_r17), 0, 5119);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n10240_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240_r17), 0, 10239);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20480_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20480_r17), 0, 20479);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40960_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40960_r17), 0, 40959);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(Decoder& dec, NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17& value)
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
        value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag)(17 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) {
        goto fail;
    }
    value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag)root_index;
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n16_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.n16_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.n20_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n32_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n64_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n80_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n128_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.n128_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n160_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n256_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.n256_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n320_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n640_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n1280_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n2560_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n5120_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n10240_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20480_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.n20480_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40960_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.u.n40960_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17& value)
{
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n16_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n32_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n64_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n80_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n128_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n160_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n256_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n320_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n640_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n1280_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n2560_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n5120_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n10240_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n20480_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17_Tag_n40960_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(Encoder& enc, const NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 17) {
        if (choice_index >= 17) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 17));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 16);
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n32_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32_r17), 0, 31);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40_r17), 0, 39);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n64_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64_r17), 0, 63);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n80_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80_r17), 0, 79);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n128_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n128_r17), 0, 127);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n160_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160_r17), 0, 159);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n256_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n256_r17), 0, 255);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n320_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320_r17), 0, 319);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n512_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n512_r17), 0, 511);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n640_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640_r17), 0, 639);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n1280_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280_r17), 0, 1279);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n2560_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560_r17), 0, 2559);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n5120_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120_r17), 0, 5119);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n10240_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240_r17), 0, 10239);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n20480_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20480_r17), 0, 20479);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40960_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40960_r17), 0, 40959);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n81920_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n81920_r17), 0, 81919);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(Decoder& dec, NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17& value)
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
        value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag)(17 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) {
        goto fail;
    }
    value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag)root_index;
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n32_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n64_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n80_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n128_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.n128_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n160_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n256_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.n256_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n320_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n512_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.n512_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n640_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n1280_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n2560_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n5120_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n10240_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n20480_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.n20480_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40960_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.u.n40960_r17 = (int64_t)tmp_value;
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n81920_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 81919, tmp_value)) { goto fail; }
        value.u.n81920_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17& value)
{
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n32_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n64_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n80_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n128_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n160_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n256_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n320_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n512_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n640_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n1280_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n2560_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n5120_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n10240_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n20480_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n40960_r17:
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17_Tag_n81920_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(Encoder& enc, const NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17& value)
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
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs15_r17:
        Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(enc, value.u.scs15_r17);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs30_r17:
        Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(enc, value.u.scs30_r17);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs60_r17:
        Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(enc, value.u.scs60_r17);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs120_r17:
        Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(enc, value.u.scs120_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(Decoder& dec, NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17& value)
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
        value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag)(4 + extension_index);
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
    value.tag = (NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag)root_index;
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs15_r17: {
        if (Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(dec, value.u.scs15_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs30_r17: {
        if (Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(dec, value.u.scs30_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs60_r17: {
        if (Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(dec, value.u.scs60_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs120_r17: {
        if (Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(dec, value.u.scs120_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17& value)
{
    switch (value.tag) {
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs15_r17:
        Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs15_r17(value.u.scs15_r17);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs30_r17:
        Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs30_r17(value.u.scs30_r17);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs60_r17:
        Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs60_r17(value.u.scs60_r17);
        break;
    case NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Tag_scs120_r17:
        Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17_Scs120_r17(value.u.scs120_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RepFactorAndTimeGap_r17(Encoder& enc, const RepFactorAndTimeGap_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.repetitionFactor_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeGap_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_RepFactorAndTimeGap_r17(Decoder& dec, RepFactorAndTimeGap_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.repetitionFactor_r17 = (RepFactorAndTimeGap_r17_RepetitionFactor_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.timeGap_r17 = (RepFactorAndTimeGap_r17_TimeGap_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RepFactorAndTimeGap_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RepFactorAndTimeGap_r17(RepFactorAndTimeGap_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_PDC_ResourceSet_r17(Encoder& enc, const NR_DL_PRS_PDC_ResourceSet_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_repFactorAndTimeGap_r17);
    Encode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(enc, value.periodicityAndOffset_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.numSymbols_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_ResourceBandwidth_r17), 1, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_StartPRB_r17), 0, 2176);
enc.WriteConstrainedLength(value.resourceList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.resourceList_r17_count; ++i) {
    Encode_NR_DL_PRS_Resource_r17(enc, value.resourceList_r17_items[i]);
}
    if (value.has_repFactorAndTimeGap_r17) {
        Encode_RepFactorAndTimeGap_r17(enc, value.repFactorAndTimeGap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_PDC_ResourceSet_r17(Decoder& dec, NR_DL_PRS_PDC_ResourceSet_r17& value)
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
        if (Decode_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(dec, value.periodicityAndOffset_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.numSymbols_r17 = (NR_DL_PRS_PDC_ResourceSet_r17_NumSymbols_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 63, tmp_value)) { goto fail; }
        value.dl_PRS_ResourceBandwidth_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2176, tmp_value)) { goto fail; }
        value.dl_PRS_StartPRB_r17 = (int64_t)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.resourceList_r17_count)) { goto fail; }
if (value.resourceList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.resourceList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.resourceList_r17_count > 0u) {
    value.resourceList_r17_items = (NR_DL_PRS_Resource_r17*)std::malloc((std::size_t)value.resourceList_r17_count * sizeof(NR_DL_PRS_Resource_r17));
    if (value.resourceList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.resourceList_r17_items, 0, (std::size_t)value.resourceList_r17_count * sizeof(NR_DL_PRS_Resource_r17));
}
for (std::uint32_t i = 0; i < value.resourceList_r17_count; ++i) {
    if (Decode_NR_DL_PRS_Resource_r17(dec, value.resourceList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_RepFactorAndTimeGap_r17(dec, value.repFactorAndTimeGap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_PDC_ResourceSet_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_PDC_ResourceSet_r17(NR_DL_PRS_PDC_ResourceSet_r17& value)
{
    Free_NR_DL_PRS_Periodicity_and_ResourceSetSlotOffset_r17(value.periodicityAndOffset_r17);
    if (value.resourceList_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.resourceList_r17_count; ++i) {
            Free_NR_DL_PRS_Resource_r17(value.resourceList_r17_items[i]);
        }
        std::free(value.resourceList_r17_items);
        value.resourceList_r17_items = nullptr;
    }
    value.resourceList_r17_count = 0;
    if (value.has_repFactorAndTimeGap_r17) {
        Free_RepFactorAndTimeGap_r17(value.repFactorAndTimeGap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_DL_PRS_PDC_Info_r17(Encoder& enc, const NR_DL_PRS_PDC_Info_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_nr_DL_PRS_PDC_ResourceSet_r17);
    if (value.has_nr_DL_PRS_PDC_ResourceSet_r17) {
        Encode_NR_DL_PRS_PDC_ResourceSet_r17(enc, value.nr_DL_PRS_PDC_ResourceSet_r17);
    }
    return enc.Error();
}

ErrorCode Decode_NR_DL_PRS_PDC_Info_r17(Decoder& dec, NR_DL_PRS_PDC_Info_r17& value)
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
        if (Decode_NR_DL_PRS_PDC_ResourceSet_r17(dec, value.nr_DL_PRS_PDC_ResourceSet_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_DL_PRS_PDC_Info_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_DL_PRS_PDC_Info_r17(NR_DL_PRS_PDC_Info_r17& value)
{
    if (value.has_nr_DL_PRS_PDC_ResourceSet_r17) {
        Free_NR_DL_PRS_PDC_ResourceSet_r17(value.nr_DL_PRS_PDC_ResourceSet_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_NR_DL_PRS_PDC_Info_r17(Encoder& enc, const SetupRelease_NR_DL_PRS_PDC_Info_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_setup:
        Encode_NR_DL_PRS_PDC_Info_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_NR_DL_PRS_PDC_Info_r17(Decoder& dec, SetupRelease_NR_DL_PRS_PDC_Info_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_setup: {
        if (Decode_NR_DL_PRS_PDC_Info_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_NR_DL_PRS_PDC_Info_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_NR_DL_PRS_PDC_Info_r17(SetupRelease_NR_DL_PRS_PDC_Info_r17& value)
{
    switch (value.tag) {
    case SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_release:
        break;
    case SetupRelease_NR_DL_PRS_PDC_Info_r17_Tag_setup:
        Free_NR_DL_PRS_PDC_Info_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SemiStaticChannelAccessConfigUE_r17(Encoder& enc, const SemiStaticChannelAccessConfigUE_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.periodUE_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.offsetUE_r17), 0, 559);
    return enc.Error();
}

ErrorCode Decode_SemiStaticChannelAccessConfigUE_r17(Decoder& dec, SemiStaticChannelAccessConfigUE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.periodUE_r17 = (SemiStaticChannelAccessConfigUE_r17_PeriodUE_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 559, tmp_value)) { goto fail; }
        value.offsetUE_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SemiStaticChannelAccessConfigUE_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SemiStaticChannelAccessConfigUE_r17(SemiStaticChannelAccessConfigUE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_SemiStaticChannelAccessConfigUE_r17(Encoder& enc, const SetupRelease_SemiStaticChannelAccessConfigUE_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_setup:
        Encode_SemiStaticChannelAccessConfigUE_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SemiStaticChannelAccessConfigUE_r17(Decoder& dec, SetupRelease_SemiStaticChannelAccessConfigUE_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_setup: {
        if (Decode_SemiStaticChannelAccessConfigUE_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SemiStaticChannelAccessConfigUE_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SemiStaticChannelAccessConfigUE_r17(SetupRelease_SemiStaticChannelAccessConfigUE_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_release:
        break;
    case SetupRelease_SemiStaticChannelAccessConfigUE_r17_Tag_setup:
        Free_SemiStaticChannelAccessConfigUE_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MIMOParam_r17(Encoder& enc, const MIMOParam_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPCI_ToAddModList_r17);
    enc.WriteBit(value.has_additionalPCI_ToReleaseList_r17);
    enc.WriteBit(value.has_unifiedTCI_StateType_r17);
    enc.WriteBit(value.has_uplink_PowerControlToAddModList_r17);
    enc.WriteBit(value.has_uplink_PowerControlToReleaseList_r17);
    enc.WriteBit(value.has_sfnSchemePDCCH_r17);
    enc.WriteBit(value.has_sfnSchemePDSCH_r17);
    if (value.has_additionalPCI_ToAddModList_r17) {
enc.WriteConstrainedLength(value.additionalPCI_ToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.additionalPCI_ToAddModList_r17_count; ++i) {
    Encode_SSB_MTC_AdditionalPCI_r17(enc, value.additionalPCI_ToAddModList_r17_items[i]);
}
    }
    if (value.has_additionalPCI_ToReleaseList_r17) {
enc.WriteConstrainedLength(value.additionalPCI_ToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.additionalPCI_ToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.additionalPCI_ToReleaseList_r17_items[i]), 1, 7);
}
    }
    if (value.has_unifiedTCI_StateType_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedTCI_StateType_r17), 0, 1);
    }
    if (value.has_uplink_PowerControlToAddModList_r17) {
enc.WriteConstrainedLength(value.uplink_PowerControlToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplink_PowerControlToAddModList_r17_count; ++i) {
    Encode_Uplink_powerControl_r17(enc, value.uplink_PowerControlToAddModList_r17_items[i]);
}
    }
    if (value.has_uplink_PowerControlToReleaseList_r17) {
enc.WriteConstrainedLength(value.uplink_PowerControlToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplink_PowerControlToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.uplink_PowerControlToReleaseList_r17_items[i]), 1, 64);
}
    }
    if (value.has_sfnSchemePDCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfnSchemePDCCH_r17), 0, 1);
    }
    if (value.has_sfnSchemePDSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfnSchemePDSCH_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MIMOParam_r17(Decoder& dec, MIMOParam_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.additionalPCI_ToAddModList_r17_count)) { goto fail; }
if (value.additionalPCI_ToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.additionalPCI_ToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.additionalPCI_ToAddModList_r17_count > 0u) {
    value.additionalPCI_ToAddModList_r17_items = (SSB_MTC_AdditionalPCI_r17*)std::malloc((std::size_t)value.additionalPCI_ToAddModList_r17_count * sizeof(SSB_MTC_AdditionalPCI_r17));
    if (value.additionalPCI_ToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.additionalPCI_ToAddModList_r17_items, 0, (std::size_t)value.additionalPCI_ToAddModList_r17_count * sizeof(SSB_MTC_AdditionalPCI_r17));
}
for (std::uint32_t i = 0; i < value.additionalPCI_ToAddModList_r17_count; ++i) {
    if (Decode_SSB_MTC_AdditionalPCI_r17(dec, value.additionalPCI_ToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.additionalPCI_ToReleaseList_r17_count)) { goto fail; }
if (value.additionalPCI_ToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.additionalPCI_ToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.additionalPCI_ToReleaseList_r17_count > 0u) {
    value.additionalPCI_ToReleaseList_r17_items = (AdditionalPCIIndex_r17*)std::malloc((std::size_t)value.additionalPCI_ToReleaseList_r17_count * sizeof(AdditionalPCIIndex_r17));
    if (value.additionalPCI_ToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.additionalPCI_ToReleaseList_r17_items, 0, (std::size_t)value.additionalPCI_ToReleaseList_r17_count * sizeof(AdditionalPCIIndex_r17));
}
for (std::uint32_t i = 0; i < value.additionalPCI_ToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 7, tmp_value)) { goto fail; }
    value.additionalPCI_ToReleaseList_r17_items[i] = (AdditionalPCIIndex_r17)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.unifiedTCI_StateType_r17 = (MIMOParam_r17_UnifiedTCI_StateType_r17)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplink_PowerControlToAddModList_r17_count)) { goto fail; }
if (value.uplink_PowerControlToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplink_PowerControlToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplink_PowerControlToAddModList_r17_count > 0u) {
    value.uplink_PowerControlToAddModList_r17_items = (Uplink_powerControl_r17*)std::malloc((std::size_t)value.uplink_PowerControlToAddModList_r17_count * sizeof(Uplink_powerControl_r17));
    if (value.uplink_PowerControlToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplink_PowerControlToAddModList_r17_items, 0, (std::size_t)value.uplink_PowerControlToAddModList_r17_count * sizeof(Uplink_powerControl_r17));
}
for (std::uint32_t i = 0; i < value.uplink_PowerControlToAddModList_r17_count; ++i) {
    if (Decode_Uplink_powerControl_r17(dec, value.uplink_PowerControlToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplink_PowerControlToReleaseList_r17_count)) { goto fail; }
if (value.uplink_PowerControlToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplink_PowerControlToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplink_PowerControlToReleaseList_r17_count > 0u) {
    value.uplink_PowerControlToReleaseList_r17_items = (Uplink_powerControlId_r17*)std::malloc((std::size_t)value.uplink_PowerControlToReleaseList_r17_count * sizeof(Uplink_powerControlId_r17));
    if (value.uplink_PowerControlToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplink_PowerControlToReleaseList_r17_items, 0, (std::size_t)value.uplink_PowerControlToReleaseList_r17_count * sizeof(Uplink_powerControlId_r17));
}
for (std::uint32_t i = 0; i < value.uplink_PowerControlToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.uplink_PowerControlToReleaseList_r17_items[i] = (Uplink_powerControlId_r17)tmp_value;
}
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sfnSchemePDCCH_r17 = (MIMOParam_r17_SfnSchemePDCCH_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sfnSchemePDSCH_r17 = (MIMOParam_r17_SfnSchemePDSCH_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MIMOParam_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MIMOParam_r17(MIMOParam_r17& value)
{
    if (value.has_additionalPCI_ToAddModList_r17) {
        if (value.additionalPCI_ToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.additionalPCI_ToAddModList_r17_count; ++i) {
                Free_SSB_MTC_AdditionalPCI_r17(value.additionalPCI_ToAddModList_r17_items[i]);
            }
            std::free(value.additionalPCI_ToAddModList_r17_items);
            value.additionalPCI_ToAddModList_r17_items = nullptr;
        }
        value.additionalPCI_ToAddModList_r17_count = 0;
    }
    if (value.has_additionalPCI_ToReleaseList_r17) {
        if (value.additionalPCI_ToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.additionalPCI_ToReleaseList_r17_count; ++i) {
            }
            std::free(value.additionalPCI_ToReleaseList_r17_items);
            value.additionalPCI_ToReleaseList_r17_items = nullptr;
        }
        value.additionalPCI_ToReleaseList_r17_count = 0;
    }
    if (value.has_unifiedTCI_StateType_r17) {
    }
    if (value.has_uplink_PowerControlToAddModList_r17) {
        if (value.uplink_PowerControlToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplink_PowerControlToAddModList_r17_count; ++i) {
                Free_Uplink_powerControl_r17(value.uplink_PowerControlToAddModList_r17_items[i]);
            }
            std::free(value.uplink_PowerControlToAddModList_r17_items);
            value.uplink_PowerControlToAddModList_r17_items = nullptr;
        }
        value.uplink_PowerControlToAddModList_r17_count = 0;
    }
    if (value.has_uplink_PowerControlToReleaseList_r17) {
        if (value.uplink_PowerControlToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplink_PowerControlToReleaseList_r17_count; ++i) {
            }
            std::free(value.uplink_PowerControlToReleaseList_r17_items);
            value.uplink_PowerControlToReleaseList_r17_items = nullptr;
        }
        value.uplink_PowerControlToReleaseList_r17_count = 0;
    }
    if (value.has_sfnSchemePDCCH_r17) {
    }
    if (value.has_sfnSchemePDSCH_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_MIMOParam_r17(Encoder& enc, const SetupRelease_MIMOParam_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MIMOParam_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_MIMOParam_r17_Tag_setup:
        Encode_MIMOParam_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MIMOParam_r17(Decoder& dec, SetupRelease_MIMOParam_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MIMOParam_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MIMOParam_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MIMOParam_r17_Tag_setup: {
        if (Decode_MIMOParam_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MIMOParam_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MIMOParam_r17(SetupRelease_MIMOParam_r17& value)
{
    switch (value.tag) {
    case SetupRelease_MIMOParam_r17_Tag_release:
        break;
    case SetupRelease_MIMOParam_r17_Tag_setup:
        Free_MIMOParam_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTE_NeighCellsCRS_AssistInfoList_r17(Encoder& enc, const LTE_NeighCellsCRS_AssistInfoList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_LTE_NeighCellsCRS_AssistInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_LTE_NeighCellsCRS_AssistInfoList_r17(Decoder& dec, LTE_NeighCellsCRS_AssistInfoList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (LTE_NeighCellsCRS_AssistInfo_r17*)std::malloc((std::size_t)value.count * sizeof(LTE_NeighCellsCRS_AssistInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(LTE_NeighCellsCRS_AssistInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_LTE_NeighCellsCRS_AssistInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_LTE_NeighCellsCRS_AssistInfoList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTE_NeighCellsCRS_AssistInfoList_r17(LTE_NeighCellsCRS_AssistInfoList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_LTE_NeighCellsCRS_AssistInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(Encoder& enc, const SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_setup:
        Encode_LTE_NeighCellsCRS_AssistInfoList_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(Decoder& dec, SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_setup: {
        if (Decode_LTE_NeighCellsCRS_AssistInfoList_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17& value)
{
    switch (value.tag) {
    case SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_release:
        break;
    case SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17_Tag_setup:
        Free_LTE_NeighCellsCRS_AssistInfoList_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup4(Encoder& enc, const ServingCellConfig_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_nr_dl_PRS_PDC_Info_r17);
    enc.WriteBit(value.has_semiStaticChannelAccessConfigUE_r17);
    enc.WriteBit(value.has_mimoParam_r17);
    enc.WriteBit(value.has_channelAccessMode2_r17);
    enc.WriteBit(value.has_timeDomainHARQ_BundlingType1_r17);
    enc.WriteBit(value.has_nrofHARQ_BundlingGroups_r17);
    enc.WriteBit(value.has_fdmed_ReceptionMulticast_r17);
    enc.WriteBit(value.has_moreThanOneNackOnlyMode_r17);
    enc.WriteBit(value.has_tci_ActivatedConfig_r17);
    enc.WriteBit(value.has_directionalCollisionHandling_DC_r17);
    enc.WriteBit(value.has_lte_NeighCellsCRS_AssistInfoList_r17);
    if (value.has_nr_dl_PRS_PDC_Info_r17) {
        Encode_SetupRelease_NR_DL_PRS_PDC_Info_r17(enc, value.nr_dl_PRS_PDC_Info_r17);
    }
    if (value.has_semiStaticChannelAccessConfigUE_r17) {
        Encode_SetupRelease_SemiStaticChannelAccessConfigUE_r17(enc, value.semiStaticChannelAccessConfigUE_r17);
    }
    if (value.has_mimoParam_r17) {
        Encode_SetupRelease_MIMOParam_r17(enc, value.mimoParam_r17);
    }
    if (value.has_channelAccessMode2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelAccessMode2_r17), 0, 0);
    }
    if (value.has_timeDomainHARQ_BundlingType1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeDomainHARQ_BundlingType1_r17), 0, 0);
    }
    if (value.has_nrofHARQ_BundlingGroups_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_BundlingGroups_r17), 0, 2);
    }
    if (value.has_fdmed_ReceptionMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdmed_ReceptionMulticast_r17), 0, 0);
    }
    if (value.has_moreThanOneNackOnlyMode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.moreThanOneNackOnlyMode_r17), 0, 0);
    }
    if (value.has_tci_ActivatedConfig_r17) {
        Encode_TCI_ActivatedConfig_r17(enc, value.tci_ActivatedConfig_r17);
    }
    if (value.has_directionalCollisionHandling_DC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directionalCollisionHandling_DC_r17), 0, 0);
    }
    if (value.has_lte_NeighCellsCRS_AssistInfoList_r17) {
        Encode_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(enc, value.lte_NeighCellsCRS_AssistInfoList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup4(Decoder& dec, ServingCellConfig_ExtGroup4& value)
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
        if (Decode_SetupRelease_NR_DL_PRS_PDC_Info_r17(dec, value.nr_dl_PRS_PDC_Info_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SemiStaticChannelAccessConfigUE_r17(dec, value.semiStaticChannelAccessConfigUE_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_MIMOParam_r17(dec, value.mimoParam_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.channelAccessMode2_r17 = (ServingCellConfig_ExtGroup4_ChannelAccessMode2_r17)0;
    }
    if (present_4) {
        value.timeDomainHARQ_BundlingType1_r17 = (ServingCellConfig_ExtGroup4_TimeDomainHARQ_BundlingType1_r17)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrofHARQ_BundlingGroups_r17 = (ServingCellConfig_ExtGroup4_NrofHARQ_BundlingGroups_r17)tmp_value;
    }
    if (present_6) {
        value.fdmed_ReceptionMulticast_r17 = (ServingCellConfig_ExtGroup4_Fdmed_ReceptionMulticast_r17)0;
    }
    if (present_7) {
        value.moreThanOneNackOnlyMode_r17 = (ServingCellConfig_ExtGroup4_MoreThanOneNackOnlyMode_r17)0;
    }
    if (present_8) {
        if (Decode_TCI_ActivatedConfig_r17(dec, value.tci_ActivatedConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        value.directionalCollisionHandling_DC_r17 = (ServingCellConfig_ExtGroup4_DirectionalCollisionHandling_DC_r17)0;
    }
    if (present_10) {
        if (Decode_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(dec, value.lte_NeighCellsCRS_AssistInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup4(ServingCellConfig_ExtGroup4& value)
{
    if (value.has_nr_dl_PRS_PDC_Info_r17) {
        Free_SetupRelease_NR_DL_PRS_PDC_Info_r17(value.nr_dl_PRS_PDC_Info_r17);
    }
    if (value.has_semiStaticChannelAccessConfigUE_r17) {
        Free_SetupRelease_SemiStaticChannelAccessConfigUE_r17(value.semiStaticChannelAccessConfigUE_r17);
    }
    if (value.has_mimoParam_r17) {
        Free_SetupRelease_MIMOParam_r17(value.mimoParam_r17);
    }
    if (value.has_channelAccessMode2_r17) {
    }
    if (value.has_timeDomainHARQ_BundlingType1_r17) {
    }
    if (value.has_nrofHARQ_BundlingGroups_r17) {
    }
    if (value.has_fdmed_ReceptionMulticast_r17) {
    }
    if (value.has_moreThanOneNackOnlyMode_r17) {
    }
    if (value.has_tci_ActivatedConfig_r17) {
        Free_TCI_ActivatedConfig_r17(value.tci_ActivatedConfig_r17);
    }
    if (value.has_directionalCollisionHandling_DC_r17) {
    }
    if (value.has_lte_NeighCellsCRS_AssistInfoList_r17) {
        Free_SetupRelease_LTE_NeighCellsCRS_AssistInfoList_r17(value.lte_NeighCellsCRS_AssistInfoList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup5(Encoder& enc, const ServingCellConfig_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_lte_NeighCellsCRS_Assumptions_r17);
    if (value.has_lte_NeighCellsCRS_Assumptions_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lte_NeighCellsCRS_Assumptions_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup5(Decoder& dec, ServingCellConfig_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.lte_NeighCellsCRS_Assumptions_r17 = (ServingCellConfig_ExtGroup5_Lte_NeighCellsCRS_Assumptions_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup5(ServingCellConfig_ExtGroup5& value)
{
    if (value.has_lte_NeighCellsCRS_Assumptions_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup6(Encoder& enc, const ServingCellConfig_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_crossCarrierSchedulingConfigRelease_r17);
    if (value.has_crossCarrierSchedulingConfigRelease_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierSchedulingConfigRelease_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup6(Decoder& dec, ServingCellConfig_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.crossCarrierSchedulingConfigRelease_r17 = (ServingCellConfig_ExtGroup6_CrossCarrierSchedulingConfigRelease_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup6(ServingCellConfig_ExtGroup6& value)
{
    if (value.has_crossCarrierSchedulingConfigRelease_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup7(Encoder& enc, const ServingCellConfig_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_multiPDSCH_PerSlotType1_CB_r17);
    if (value.has_multiPDSCH_PerSlotType1_CB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPDSCH_PerSlotType1_CB_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup7(Decoder& dec, ServingCellConfig_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.multiPDSCH_PerSlotType1_CB_r17 = (ServingCellConfig_ExtGroup7_MultiPDSCH_PerSlotType1_CB_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup7(ServingCellConfig_ExtGroup7& value)
{
    if (value.has_multiPDSCH_PerSlotType1_CB_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup8_Tag2_r18(Encoder& enc, const ServingCellConfig_ExtGroup8_Tag2_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_n_TimingAdvanceOffset2_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.tag2_Id_r18), 0, 3);
    enc.WriteBool(value.tag2_flag_r18);
    if (value.has_n_TimingAdvanceOffset2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n_TimingAdvanceOffset2_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup8_Tag2_r18(Decoder& dec, ServingCellConfig_ExtGroup8_Tag2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.tag2_Id_r18 = (TAG_Id)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.tag2_flag_r18 = tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.n_TimingAdvanceOffset2_r18 = (ServingCellConfig_ExtGroup8_Tag2_r18_N_TimingAdvanceOffset2_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup8_Tag2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup8_Tag2_r18(ServingCellConfig_ExtGroup8_Tag2_r18& value)
{
    if (value.has_n_TimingAdvanceOffset2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_CellDTXDRX_Config_r18(Encoder& enc, const SetupRelease_CellDTXDRX_Config_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CellDTXDRX_Config_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_CellDTXDRX_Config_r18_Tag_setup:
        Encode_CellDTXDRX_Config_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CellDTXDRX_Config_r18(Decoder& dec, SetupRelease_CellDTXDRX_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CellDTXDRX_Config_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CellDTXDRX_Config_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CellDTXDRX_Config_r18_Tag_setup: {
        if (Decode_CellDTXDRX_Config_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CellDTXDRX_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CellDTXDRX_Config_r18(SetupRelease_CellDTXDRX_Config_r18& value)
{
    switch (value.tag) {
    case SetupRelease_CellDTXDRX_Config_r18_Tag_release:
        break;
    case SetupRelease_CellDTXDRX_Config_r18_Tag_setup:
        Free_CellDTXDRX_Config_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ServingCellConfig_ExtGroup8(Encoder& enc, const ServingCellConfig_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_lte_CRS_PatternList3_r18);
    enc.WriteBit(value.has_lte_CRS_PatternList4_r18);
    enc.WriteBit(value.has_pdcch_CandidateReceptionWith_CRS_Overlap_r18);
    enc.WriteBit(value.has_cjt_Scheme_PDSCH_r18);
    enc.WriteBit(value.has_tag2_r18);
    enc.WriteBit(value.has_cellDTXDRX_Config_r18);
    enc.WriteBit(value.has_positionInDCI_cellDTRX_r18);
    enc.WriteBit(value.has_cellDTXDRX_L1activation_r18);
    enc.WriteBit(value.has_mc_DCI_SetOfCellsToAddModList_r18);
    enc.WriteBit(value.has_mc_DCI_SetOfCellsToReleaseList_r18);
    if (value.has_lte_CRS_PatternList3_r18) {
        Encode_SetupRelease_LTE_CRS_PatternList_r16(enc, value.lte_CRS_PatternList3_r18);
    }
    if (value.has_lte_CRS_PatternList4_r18) {
        Encode_SetupRelease_LTE_CRS_PatternList_r16(enc, value.lte_CRS_PatternList4_r18);
    }
    if (value.has_pdcch_CandidateReceptionWith_CRS_Overlap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_CandidateReceptionWith_CRS_Overlap_r18), 0, 0);
    }
    if (value.has_cjt_Scheme_PDSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cjt_Scheme_PDSCH_r18), 0, 1);
    }
    if (value.has_tag2_r18) {
        Encode_ServingCellConfig_ExtGroup8_Tag2_r18(enc, value.tag2_r18);
    }
    if (value.has_cellDTXDRX_Config_r18) {
        Encode_SetupRelease_CellDTXDRX_Config_r18(enc, value.cellDTXDRX_Config_r18);
    }
    if (value.has_positionInDCI_cellDTRX_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI_cellDTRX_r18), 0, 139);
    }
    if (value.has_cellDTXDRX_L1activation_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellDTXDRX_L1activation_r18), 0, 0);
    }
    if (value.has_mc_DCI_SetOfCellsToAddModList_r18) {
enc.WriteConstrainedLength(value.mc_DCI_SetOfCellsToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mc_DCI_SetOfCellsToAddModList_r18_count; ++i) {
    Encode_MC_DCI_SetOfCells_r18(enc, value.mc_DCI_SetOfCellsToAddModList_r18_items[i]);
}
    }
    if (value.has_mc_DCI_SetOfCellsToReleaseList_r18) {
enc.WriteConstrainedLength(value.mc_DCI_SetOfCellsToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mc_DCI_SetOfCellsToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.mc_DCI_SetOfCellsToReleaseList_r18_items[i]), 0, 3);
}
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfig_ExtGroup8(Decoder& dec, ServingCellConfig_ExtGroup8& value)
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
        if (Decode_SetupRelease_LTE_CRS_PatternList_r16(dec, value.lte_CRS_PatternList3_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_LTE_CRS_PatternList_r16(dec, value.lte_CRS_PatternList4_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.pdcch_CandidateReceptionWith_CRS_Overlap_r18 = (ServingCellConfig_ExtGroup8_Pdcch_CandidateReceptionWith_CRS_Overlap_r18)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cjt_Scheme_PDSCH_r18 = (ServingCellConfig_ExtGroup8_Cjt_Scheme_PDSCH_r18)tmp_value;
    }
    if (present_4) {
        if (Decode_ServingCellConfig_ExtGroup8_Tag2_r18(dec, value.tag2_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_CellDTXDRX_Config_r18(dec, value.cellDTXDRX_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 139, tmp_value)) { goto fail; }
        value.positionInDCI_cellDTRX_r18 = (int64_t)tmp_value;
    }
    if (present_7) {
        value.cellDTXDRX_L1activation_r18 = (ServingCellConfig_ExtGroup8_CellDTXDRX_L1activation_r18)0;
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mc_DCI_SetOfCellsToAddModList_r18_count)) { goto fail; }
if (value.mc_DCI_SetOfCellsToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mc_DCI_SetOfCellsToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mc_DCI_SetOfCellsToAddModList_r18_count > 0u) {
    value.mc_DCI_SetOfCellsToAddModList_r18_items = (MC_DCI_SetOfCells_r18*)std::malloc((std::size_t)value.mc_DCI_SetOfCellsToAddModList_r18_count * sizeof(MC_DCI_SetOfCells_r18));
    if (value.mc_DCI_SetOfCellsToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mc_DCI_SetOfCellsToAddModList_r18_items, 0, (std::size_t)value.mc_DCI_SetOfCellsToAddModList_r18_count * sizeof(MC_DCI_SetOfCells_r18));
}
for (std::uint32_t i = 0; i < value.mc_DCI_SetOfCellsToAddModList_r18_count; ++i) {
    if (Decode_MC_DCI_SetOfCells_r18(dec, value.mc_DCI_SetOfCellsToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.mc_DCI_SetOfCellsToReleaseList_r18_count)) { goto fail; }
if (value.mc_DCI_SetOfCellsToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mc_DCI_SetOfCellsToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mc_DCI_SetOfCellsToReleaseList_r18_count > 0u) {
    value.mc_DCI_SetOfCellsToReleaseList_r18_items = (SetOfCellsId_r18*)std::malloc((std::size_t)value.mc_DCI_SetOfCellsToReleaseList_r18_count * sizeof(SetOfCellsId_r18));
    if (value.mc_DCI_SetOfCellsToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mc_DCI_SetOfCellsToReleaseList_r18_items, 0, (std::size_t)value.mc_DCI_SetOfCellsToReleaseList_r18_count * sizeof(SetOfCellsId_r18));
}
for (std::uint32_t i = 0; i < value.mc_DCI_SetOfCellsToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.mc_DCI_SetOfCellsToReleaseList_r18_items[i] = (SetOfCellsId_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfig_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfig_ExtGroup8(ServingCellConfig_ExtGroup8& value)
{
    if (value.has_lte_CRS_PatternList3_r18) {
        Free_SetupRelease_LTE_CRS_PatternList_r16(value.lte_CRS_PatternList3_r18);
    }
    if (value.has_lte_CRS_PatternList4_r18) {
        Free_SetupRelease_LTE_CRS_PatternList_r16(value.lte_CRS_PatternList4_r18);
    }
    if (value.has_pdcch_CandidateReceptionWith_CRS_Overlap_r18) {
    }
    if (value.has_cjt_Scheme_PDSCH_r18) {
    }
    if (value.has_tag2_r18) {
        Free_ServingCellConfig_ExtGroup8_Tag2_r18(value.tag2_r18);
    }
    if (value.has_cellDTXDRX_Config_r18) {
        Free_SetupRelease_CellDTXDRX_Config_r18(value.cellDTXDRX_Config_r18);
    }
    if (value.has_positionInDCI_cellDTRX_r18) {
    }
    if (value.has_cellDTXDRX_L1activation_r18) {
    }
    if (value.has_mc_DCI_SetOfCellsToAddModList_r18) {
        if (value.mc_DCI_SetOfCellsToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mc_DCI_SetOfCellsToAddModList_r18_count; ++i) {
                Free_MC_DCI_SetOfCells_r18(value.mc_DCI_SetOfCellsToAddModList_r18_items[i]);
            }
            std::free(value.mc_DCI_SetOfCellsToAddModList_r18_items);
            value.mc_DCI_SetOfCellsToAddModList_r18_items = nullptr;
        }
        value.mc_DCI_SetOfCellsToAddModList_r18_count = 0;
    }
    if (value.has_mc_DCI_SetOfCellsToReleaseList_r18) {
        if (value.mc_DCI_SetOfCellsToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.mc_DCI_SetOfCellsToReleaseList_r18_count; ++i) {
            }
            std::free(value.mc_DCI_SetOfCellsToReleaseList_r18_items);
            value.mc_DCI_SetOfCellsToReleaseList_r18_items = nullptr;
        }
        value.mc_DCI_SetOfCellsToReleaseList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfig_ExtGroup1(Encoder& enc, const UplinkConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_powerBoostPi2BPSK);
    enc.WriteBit(value.has_uplinkChannelBW_PerSCS_List);
    if (value.has_powerBoostPi2BPSK) {
        enc.WriteBool(value.powerBoostPi2BPSK);
    }
    if (value.has_uplinkChannelBW_PerSCS_List) {
enc.WriteConstrainedLength(value.uplinkChannelBW_PerSCS_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkChannelBW_PerSCS_List_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.uplinkChannelBW_PerSCS_List_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_UplinkConfig_ExtGroup1(Decoder& dec, UplinkConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.powerBoostPi2BPSK = tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkChannelBW_PerSCS_List_count)) { goto fail; }
if (value.uplinkChannelBW_PerSCS_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkChannelBW_PerSCS_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkChannelBW_PerSCS_List_count > 0u) {
    value.uplinkChannelBW_PerSCS_List_items = (SCS_SpecificCarrier*)std::malloc((std::size_t)value.uplinkChannelBW_PerSCS_List_count * sizeof(SCS_SpecificCarrier));
    if (value.uplinkChannelBW_PerSCS_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkChannelBW_PerSCS_List_items, 0, (std::size_t)value.uplinkChannelBW_PerSCS_List_count * sizeof(SCS_SpecificCarrier));
}
for (std::uint32_t i = 0; i < value.uplinkChannelBW_PerSCS_List_count; ++i) {
    if (Decode_SCS_SpecificCarrier(dec, value.uplinkChannelBW_PerSCS_List_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfig_ExtGroup1(UplinkConfig_ExtGroup1& value)
{
    if (value.has_powerBoostPi2BPSK) {
    }
    if (value.has_uplinkChannelBW_PerSCS_List) {
        if (value.uplinkChannelBW_PerSCS_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkChannelBW_PerSCS_List_count; ++i) {
                Free_SCS_SpecificCarrier(value.uplinkChannelBW_PerSCS_List_items[i]);
            }
            std::free(value.uplinkChannelBW_PerSCS_List_items);
            value.uplinkChannelBW_PerSCS_List_items = nullptr;
        }
        value.uplinkChannelBW_PerSCS_List_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkTxSwitching_r16(Encoder& enc, const UplinkTxSwitching_r16& value)
{
    (void)value;
    enc.WriteBool(value.uplinkTxSwitchingPeriodLocation_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkTxSwitchingCarrier_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_UplinkTxSwitching_r16(Decoder& dec, UplinkTxSwitching_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.uplinkTxSwitchingPeriodLocation_r16 = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.uplinkTxSwitchingCarrier_r16 = (UplinkTxSwitching_r16_UplinkTxSwitchingCarrier_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkTxSwitching_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkTxSwitching_r16(UplinkTxSwitching_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_UplinkTxSwitching_r16(Encoder& enc, const SetupRelease_UplinkTxSwitching_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UplinkTxSwitching_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_UplinkTxSwitching_r16_Tag_setup:
        Encode_UplinkTxSwitching_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UplinkTxSwitching_r16(Decoder& dec, SetupRelease_UplinkTxSwitching_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UplinkTxSwitching_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UplinkTxSwitching_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UplinkTxSwitching_r16_Tag_setup: {
        if (Decode_UplinkTxSwitching_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UplinkTxSwitching_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UplinkTxSwitching_r16(SetupRelease_UplinkTxSwitching_r16& value)
{
    switch (value.tag) {
    case SetupRelease_UplinkTxSwitching_r16_Tag_release:
        break;
    case SetupRelease_UplinkTxSwitching_r16_Tag_setup:
        Free_UplinkTxSwitching_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfig_ExtGroup2(Encoder& enc, const UplinkConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_enablePL_RS_UpdateForPUSCH_SRS_r16);
    enc.WriteBit(value.has_enableDefaultBeamPL_ForPUSCH0_0_r16);
    enc.WriteBit(value.has_enableDefaultBeamPL_ForPUCCH_r16);
    enc.WriteBit(value.has_enableDefaultBeamPL_ForSRS_r16);
    enc.WriteBit(value.has_uplinkTxSwitching_r16);
    enc.WriteBit(value.has_mpr_PowerBoost_FR2_r16);
    if (value.has_enablePL_RS_UpdateForPUSCH_SRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enablePL_RS_UpdateForPUSCH_SRS_r16), 0, 0);
    }
    if (value.has_enableDefaultBeamPL_ForPUSCH0_0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDefaultBeamPL_ForPUSCH0_0_r16), 0, 0);
    }
    if (value.has_enableDefaultBeamPL_ForPUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDefaultBeamPL_ForPUCCH_r16), 0, 0);
    }
    if (value.has_enableDefaultBeamPL_ForSRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableDefaultBeamPL_ForSRS_r16), 0, 0);
    }
    if (value.has_uplinkTxSwitching_r16) {
        Encode_SetupRelease_UplinkTxSwitching_r16(enc, value.uplinkTxSwitching_r16);
    }
    if (value.has_mpr_PowerBoost_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mpr_PowerBoost_FR2_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkConfig_ExtGroup2(Decoder& dec, UplinkConfig_ExtGroup2& value)
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
        value.enablePL_RS_UpdateForPUSCH_SRS_r16 = (UplinkConfig_ExtGroup2_EnablePL_RS_UpdateForPUSCH_SRS_r16)0;
    }
    if (present_1) {
        value.enableDefaultBeamPL_ForPUSCH0_0_r16 = (UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUSCH0_0_r16)0;
    }
    if (present_2) {
        value.enableDefaultBeamPL_ForPUCCH_r16 = (UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForPUCCH_r16)0;
    }
    if (present_3) {
        value.enableDefaultBeamPL_ForSRS_r16 = (UplinkConfig_ExtGroup2_EnableDefaultBeamPL_ForSRS_r16)0;
    }
    if (present_4) {
        if (Decode_SetupRelease_UplinkTxSwitching_r16(dec, value.uplinkTxSwitching_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.mpr_PowerBoost_FR2_r16 = (UplinkConfig_ExtGroup2_Mpr_PowerBoost_FR2_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfig_ExtGroup2(UplinkConfig_ExtGroup2& value)
{
    if (value.has_enablePL_RS_UpdateForPUSCH_SRS_r16) {
    }
    if (value.has_enableDefaultBeamPL_ForPUSCH0_0_r16) {
    }
    if (value.has_enableDefaultBeamPL_ForPUCCH_r16) {
    }
    if (value.has_enableDefaultBeamPL_ForSRS_r16) {
    }
    if (value.has_uplinkTxSwitching_r16) {
        Free_SetupRelease_UplinkTxSwitching_r16(value.uplinkTxSwitching_r16);
    }
    if (value.has_mpr_PowerBoost_FR2_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfig_ExtGroup3(Encoder& enc, const UplinkConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PosTx_Hopping_r18);
    enc.WriteBit(value.has_enablePL_RS_UpdateForType1CG_PUSCH_r18);
    enc.WriteBit(value.has_powerBoostPi2BPSK_r18);
    enc.WriteBit(value.has_powerBoostQPSK_r18);
    if (value.has_srs_PosTx_Hopping_r18) {
        Encode_SetupRelease_SRS_PosTx_Hopping_r18(enc, value.srs_PosTx_Hopping_r18);
    }
    if (value.has_enablePL_RS_UpdateForType1CG_PUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enablePL_RS_UpdateForType1CG_PUSCH_r18), 0, 0);
    }
    if (value.has_powerBoostPi2BPSK_r18) {
        enc.WriteBool(value.powerBoostPi2BPSK_r18);
    }
    if (value.has_powerBoostQPSK_r18) {
        enc.WriteBool(value.powerBoostQPSK_r18);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkConfig_ExtGroup3(Decoder& dec, UplinkConfig_ExtGroup3& value)
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
        if (Decode_SetupRelease_SRS_PosTx_Hopping_r18(dec, value.srs_PosTx_Hopping_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.enablePL_RS_UpdateForType1CG_PUSCH_r18 = (UplinkConfig_ExtGroup3_EnablePL_RS_UpdateForType1CG_PUSCH_r18)0;
    }
    if (present_2) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.powerBoostPi2BPSK_r18 = tmp_value;
    }
    if (present_3) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.powerBoostQPSK_r18 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfig_ExtGroup3(UplinkConfig_ExtGroup3& value)
{
    if (value.has_srs_PosTx_Hopping_r18) {
        Free_SetupRelease_SRS_PosTx_Hopping_r18(value.srs_PosTx_Hopping_r18);
    }
    if (value.has_enablePL_RS_UpdateForType1CG_PUSCH_r18) {
    }
    if (value.has_powerBoostPi2BPSK_r18) {
    }
    if (value.has_powerBoostQPSK_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_ServingCellConfig_ExtGroup1(Encoder& enc, const PUSCH_ServingCellConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_maxMIMO_Layers);
    enc.WriteBit(value.has_processingType2Enabled);
    if (value.has_maxMIMO_Layers) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_Layers), 1, 4);
    }
    if (value.has_processingType2Enabled) {
        enc.WriteBool(value.processingType2Enabled);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ServingCellConfig_ExtGroup1(Decoder& dec, PUSCH_ServingCellConfig_ExtGroup1& value)
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
        value.maxMIMO_Layers = (int64_t)tmp_value;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.processingType2Enabled = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_ServingCellConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ServingCellConfig_ExtGroup1(PUSCH_ServingCellConfig_ExtGroup1& value)
{
    if (value.has_maxMIMO_Layers) {
    }
    if (value.has_processingType2Enabled) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(Encoder& enc, const SetupRelease_MaxMIMO_LayersDCI_0_2_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 1, 4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(Decoder& dec, SetupRelease_MaxMIMO_LayersDCI_0_2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.u.setup = (MaxMIMO_LayersDCI_0_2_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(SetupRelease_MaxMIMO_LayersDCI_0_2_r16& value)
{
    switch (value.tag) {
    case SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_release:
        break;
    case SetupRelease_MaxMIMO_LayersDCI_0_2_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_ServingCellConfig_ExtGroup2(Encoder& enc, const PUSCH_ServingCellConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_maxMIMO_LayersDCI_0_2_r16);
    if (value.has_maxMIMO_LayersDCI_0_2_r16) {
        Encode_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(enc, value.maxMIMO_LayersDCI_0_2_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ServingCellConfig_ExtGroup2(Decoder& dec, PUSCH_ServingCellConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(dec, value.maxMIMO_LayersDCI_0_2_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_ServingCellConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ServingCellConfig_ExtGroup2(PUSCH_ServingCellConfig_ExtGroup2& value)
{
    if (value.has_maxMIMO_LayersDCI_0_2_r16) {
        Free_SetupRelease_MaxMIMO_LayersDCI_0_2_r16(value.maxMIMO_LayersDCI_0_2_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_UplinkHARQ_mode_r17(Encoder& enc, const SetupRelease_UplinkHARQ_mode_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UplinkHARQ_mode_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UplinkHARQ_mode_r17_Tag_setup:
        enc.WriteFixedBitString(value.u.setup.bytes, value.u.setup.bitLength, 32, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UplinkHARQ_mode_r17(Decoder& dec, SetupRelease_UplinkHARQ_mode_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UplinkHARQ_mode_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UplinkHARQ_mode_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UplinkHARQ_mode_r17_Tag_setup: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.setup.bytes = string_bytes;
        value.u.setup.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UplinkHARQ_mode_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UplinkHARQ_mode_r17(SetupRelease_UplinkHARQ_mode_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UplinkHARQ_mode_r17_Tag_release:
        break;
    case SetupRelease_UplinkHARQ_mode_r17_Tag_setup:
        std::free(value.u.setup.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_ServingCellConfig_ExtGroup3(Encoder& enc, const PUSCH_ServingCellConfig_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofHARQ_ProcessesForPUSCH_r17);
    enc.WriteBit(value.has_uplinkHARQ_mode_r17);
    if (value.has_nrofHARQ_ProcessesForPUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofHARQ_ProcessesForPUSCH_r17), 0, 0);
    }
    if (value.has_uplinkHARQ_mode_r17) {
        Encode_SetupRelease_UplinkHARQ_mode_r17(enc, value.uplinkHARQ_mode_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ServingCellConfig_ExtGroup3(Decoder& dec, PUSCH_ServingCellConfig_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.nrofHARQ_ProcessesForPUSCH_r17 = (PUSCH_ServingCellConfig_ExtGroup3_NrofHARQ_ProcessesForPUSCH_r17)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_UplinkHARQ_mode_r17(dec, value.uplinkHARQ_mode_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_ServingCellConfig_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ServingCellConfig_ExtGroup3(PUSCH_ServingCellConfig_ExtGroup3& value)
{
    if (value.has_nrofHARQ_ProcessesForPUSCH_r17) {
    }
    if (value.has_uplinkHARQ_mode_r17) {
        Free_SetupRelease_UplinkHARQ_mode_r17(value.uplinkHARQ_mode_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_ServingCellConfig_ExtGroup4(Encoder& enc, const PUSCH_ServingCellConfig_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_maxMIMO_Layers_v1810);
    enc.WriteBit(value.has_maxMIMO_LayersforSDM_r18);
    enc.WriteBit(value.has_maxMIMO_LayersforSDM_DCI_0_2_r18);
    enc.WriteBit(value.has_maxMIMO_LayersforSFN_r18);
    enc.WriteBit(value.has_maxMIMO_LayersforSFN_DCI_0_2_r18);
    if (value.has_maxMIMO_Layers_v1810) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_Layers_v1810), 5, 8);
    }
    if (value.has_maxMIMO_LayersforSDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayersforSDM_r18), 1, 2);
    }
    if (value.has_maxMIMO_LayersforSDM_DCI_0_2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayersforSDM_DCI_0_2_r18), 1, 2);
    }
    if (value.has_maxMIMO_LayersforSFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayersforSFN_r18), 1, 2);
    }
    if (value.has_maxMIMO_LayersforSFN_DCI_0_2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMIMO_LayersforSFN_DCI_0_2_r18), 1, 2);
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ServingCellConfig_ExtGroup4(Decoder& dec, PUSCH_ServingCellConfig_ExtGroup4& value)
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
        if (!dec.ReadConstrainedInteger(5, 8, tmp_value)) { goto fail; }
        value.maxMIMO_Layers_v1810 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxMIMO_LayersforSDM_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxMIMO_LayersforSDM_DCI_0_2_r18 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxMIMO_LayersforSFN_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxMIMO_LayersforSFN_DCI_0_2_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_ServingCellConfig_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ServingCellConfig_ExtGroup4(PUSCH_ServingCellConfig_ExtGroup4& value)
{
    if (value.has_maxMIMO_Layers_v1810) {
    }
    if (value.has_maxMIMO_LayersforSDM_r18) {
    }
    if (value.has_maxMIMO_LayersforSDM_DCI_0_2_r18) {
    }
    if (value.has_maxMIMO_LayersforSFN_r18) {
    }
    if (value.has_maxMIMO_LayersforSFN_DCI_0_2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_CodeBlockGroupTransmission(Encoder& enc, const PUSCH_CodeBlockGroupTransmission& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxCodeBlockGroupsPerTransportBlock), 0, 3);
    return enc.Error();
}

ErrorCode Decode_PUSCH_CodeBlockGroupTransmission(Decoder& dec, PUSCH_CodeBlockGroupTransmission& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxCodeBlockGroupsPerTransportBlock = (PUSCH_CodeBlockGroupTransmission_MaxCodeBlockGroupsPerTransportBlock)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PUSCH_CodeBlockGroupTransmission(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_CodeBlockGroupTransmission(PUSCH_CodeBlockGroupTransmission& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_PUSCH_CodeBlockGroupTransmission(Encoder& enc, const SetupRelease_PUSCH_CodeBlockGroupTransmission& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_setup:
        Encode_PUSCH_CodeBlockGroupTransmission(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_CodeBlockGroupTransmission(Decoder& dec, SetupRelease_PUSCH_CodeBlockGroupTransmission& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_setup: {
        if (Decode_PUSCH_CodeBlockGroupTransmission(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_CodeBlockGroupTransmission(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_CodeBlockGroupTransmission(SetupRelease_PUSCH_CodeBlockGroupTransmission& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_release:
        break;
    case SetupRelease_PUSCH_CodeBlockGroupTransmission_Tag_setup:
        Free_PUSCH_CodeBlockGroupTransmission(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PUSCH_ServingCellConfig(Encoder& enc, const PUSCH_ServingCellConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_codeBlockGroupTransmission);
    enc.WriteBit(value.has_rateMatching);
    enc.WriteBit(value.has_xOverhead);
    if (value.has_codeBlockGroupTransmission) {
        Encode_SetupRelease_PUSCH_CodeBlockGroupTransmission(enc, value.codeBlockGroupTransmission);
    }
    if (value.has_rateMatching) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rateMatching), 0, 0);
    }
    if (value.has_xOverhead) {
        enc.WriteConstrainedInteger((std::int64_t)(value.xOverhead), 0, 2);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PUSCH_ServingCellConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PUSCH_ServingCellConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PUSCH_ServingCellConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_PUSCH_ServingCellConfig_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PUSCH_ServingCellConfig(Decoder& dec, PUSCH_ServingCellConfig& value)
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
        if (Decode_SetupRelease_PUSCH_CodeBlockGroupTransmission(dec, value.codeBlockGroupTransmission) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.rateMatching = (PUSCH_ServingCellConfig_RateMatching)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.xOverhead = (PUSCH_ServingCellConfig_XOverhead)tmp_value;
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
    if (Decode_PUSCH_ServingCellConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PUSCH_ServingCellConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PUSCH_ServingCellConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_PUSCH_ServingCellConfig_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_PUSCH_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PUSCH_ServingCellConfig(PUSCH_ServingCellConfig& value)
{
    if (value.has_codeBlockGroupTransmission) {
        Free_SetupRelease_PUSCH_CodeBlockGroupTransmission(value.codeBlockGroupTransmission);
    }
    if (value.has_rateMatching) {
    }
    if (value.has_xOverhead) {
    }
    if (value.has_extGroup1) {
        Free_PUSCH_ServingCellConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PUSCH_ServingCellConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PUSCH_ServingCellConfig_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_PUSCH_ServingCellConfig_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_PUSCH_ServingCellConfig(Encoder& enc, const SetupRelease_PUSCH_ServingCellConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PUSCH_ServingCellConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_PUSCH_ServingCellConfig_Tag_setup:
        Encode_PUSCH_ServingCellConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PUSCH_ServingCellConfig(Decoder& dec, SetupRelease_PUSCH_ServingCellConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PUSCH_ServingCellConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PUSCH_ServingCellConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PUSCH_ServingCellConfig_Tag_setup: {
        if (Decode_PUSCH_ServingCellConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PUSCH_ServingCellConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PUSCH_ServingCellConfig(SetupRelease_PUSCH_ServingCellConfig& value)
{
    switch (value.tag) {
    case SetupRelease_PUSCH_ServingCellConfig_Tag_release:
        break;
    case SetupRelease_PUSCH_ServingCellConfig_Tag_setup:
        Free_PUSCH_ServingCellConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_TPC_PDCCH_Config(Encoder& enc, const SRS_TPC_PDCCH_Config& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_CC_SetIndexlist);
    if (value.has_srs_CC_SetIndexlist) {
enc.WriteConstrainedLength(value.srs_CC_SetIndexlist_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.srs_CC_SetIndexlist_count; ++i) {
    Encode_SRS_CC_SetIndex(enc, value.srs_CC_SetIndexlist_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SRS_TPC_PDCCH_Config(Decoder& dec, SRS_TPC_PDCCH_Config& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.srs_CC_SetIndexlist_count)) { goto fail; }
if (value.srs_CC_SetIndexlist_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.srs_CC_SetIndexlist_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.srs_CC_SetIndexlist_count > 0u) {
    value.srs_CC_SetIndexlist_items = (SRS_CC_SetIndex*)std::malloc((std::size_t)value.srs_CC_SetIndexlist_count * sizeof(SRS_CC_SetIndex));
    if (value.srs_CC_SetIndexlist_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.srs_CC_SetIndexlist_items, 0, (std::size_t)value.srs_CC_SetIndexlist_count * sizeof(SRS_CC_SetIndex));
}
for (std::uint32_t i = 0; i < value.srs_CC_SetIndexlist_count; ++i) {
    if (Decode_SRS_CC_SetIndex(dec, value.srs_CC_SetIndexlist_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_TPC_PDCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_TPC_PDCCH_Config(SRS_TPC_PDCCH_Config& value)
{
    if (value.has_srs_CC_SetIndexlist) {
        if (value.srs_CC_SetIndexlist_items != nullptr) {
            for (std::uint32_t i = 0; i < value.srs_CC_SetIndexlist_count; ++i) {
                Free_SRS_CC_SetIndex(value.srs_CC_SetIndexlist_items[i]);
            }
            std::free(value.srs_CC_SetIndexlist_items);
            value.srs_CC_SetIndexlist_items = nullptr;
        }
        value.srs_CC_SetIndexlist_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(Encoder& enc, const SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SRS_TPC_PDCCH_Config(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(Decoder& dec, SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SRS_TPC_PDCCH_Config*)std::malloc((std::size_t)value.count * sizeof(SRS_TPC_PDCCH_Config));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_TPC_PDCCH_Config));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SRS_TPC_PDCCH_Config(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SRS_TPC_PDCCH_Config(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(Encoder& enc, const SRS_CarrierSwitching_Srs_TPC_PDCCH_Group& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeA:
        Encode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(enc, value.u.typeA);
        break;
    case SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeB:
        Encode_SRS_TPC_PDCCH_Config(enc, value.u.typeB);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(Decoder& dec, SRS_CarrierSwitching_Srs_TPC_PDCCH_Group& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag)root_index;
    switch (value.tag) {
    case SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeA: {
        if (Decode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(dec, value.u.typeA) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeB: {
        if (Decode_SRS_TPC_PDCCH_Config(dec, value.u.typeB) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(SRS_CarrierSwitching_Srs_TPC_PDCCH_Group& value)
{
    switch (value.tag) {
    case SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeA:
        Free_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_TypeA(value.u.typeA);
        break;
    case SRS_CarrierSwitching_Srs_TPC_PDCCH_Group_Tag_typeB:
        Free_SRS_TPC_PDCCH_Config(value.u.typeB);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_CarrierSwitching(Encoder& enc, const SRS_CarrierSwitching& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_srs_SwitchFromServCellIndex);
    enc.WriteBit(value.has_srs_TPC_PDCCH_Group);
    enc.WriteBit(value.has_monitoringCells);
    if (value.has_srs_SwitchFromServCellIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_SwitchFromServCellIndex), 0, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_SwitchFromCarrier), 0, 1);
    if (value.has_srs_TPC_PDCCH_Group) {
        Encode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(enc, value.srs_TPC_PDCCH_Group);
    }
    if (value.has_monitoringCells) {
enc.WriteConstrainedLength(value.monitoringCells_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.monitoringCells_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.monitoringCells_items[i]), 0, 31);
}
    }
    return enc.Error();
}

ErrorCode Decode_SRS_CarrierSwitching(Decoder& dec, SRS_CarrierSwitching& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.srs_SwitchFromServCellIndex = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.srs_SwitchFromCarrier = (SRS_CarrierSwitching_Srs_SwitchFromCarrier)tmp_value;
    }
    if (present_1) {
        if (Decode_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(dec, value.srs_TPC_PDCCH_Group) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.monitoringCells_count)) { goto fail; }
if (value.monitoringCells_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.monitoringCells_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.monitoringCells_count > 0u) {
    value.monitoringCells_items = (ServCellIndex*)std::malloc((std::size_t)value.monitoringCells_count * sizeof(ServCellIndex));
    if (value.monitoringCells_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.monitoringCells_items, 0, (std::size_t)value.monitoringCells_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.monitoringCells_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.monitoringCells_items[i] = (ServCellIndex)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_CarrierSwitching(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_CarrierSwitching(SRS_CarrierSwitching& value)
{
    if (value.has_srs_SwitchFromServCellIndex) {
    }
    if (value.has_srs_TPC_PDCCH_Group) {
        Free_SRS_CarrierSwitching_Srs_TPC_PDCCH_Group(value.srs_TPC_PDCCH_Group);
    }
    if (value.has_monitoringCells) {
        if (value.monitoringCells_items != nullptr) {
            for (std::uint32_t i = 0; i < value.monitoringCells_count; ++i) {
            }
            std::free(value.monitoringCells_items);
            value.monitoringCells_items = nullptr;
        }
        value.monitoringCells_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_SRS_CarrierSwitching(Encoder& enc, const SetupRelease_SRS_CarrierSwitching& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_CarrierSwitching_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_CarrierSwitching_Tag_setup:
        Encode_SRS_CarrierSwitching(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_CarrierSwitching(Decoder& dec, SetupRelease_SRS_CarrierSwitching& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_CarrierSwitching_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_CarrierSwitching_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_CarrierSwitching_Tag_setup: {
        if (Decode_SRS_CarrierSwitching(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_CarrierSwitching(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_CarrierSwitching(SetupRelease_SRS_CarrierSwitching& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_CarrierSwitching_Tag_release:
        break;
    case SetupRelease_SRS_CarrierSwitching_Tag_setup:
        Free_SRS_CarrierSwitching(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UplinkConfig(Encoder& enc, const UplinkConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_initialUplinkBWP);
    enc.WriteBit(value.has_uplinkBWP_ToReleaseList);
    enc.WriteBit(value.has_uplinkBWP_ToAddModList);
    enc.WriteBit(value.has_firstActiveUplinkBWP_Id);
    enc.WriteBit(value.has_pusch_ServingCellConfig);
    enc.WriteBit(value.has_carrierSwitching);
    if (value.has_initialUplinkBWP) {
        Encode_BWP_UplinkDedicated(enc, value.initialUplinkBWP);
    }
    if (value.has_uplinkBWP_ToReleaseList) {
enc.WriteConstrainedLength(value.uplinkBWP_ToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkBWP_ToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkBWP_ToReleaseList_items[i]), 0, 4);
}
    }
    if (value.has_uplinkBWP_ToAddModList) {
enc.WriteConstrainedLength(value.uplinkBWP_ToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uplinkBWP_ToAddModList_count; ++i) {
    Encode_BWP_Uplink(enc, value.uplinkBWP_ToAddModList_items[i]);
}
    }
    if (value.has_firstActiveUplinkBWP_Id) {
        enc.WriteConstrainedInteger((std::int64_t)(value.firstActiveUplinkBWP_Id), 0, 4);
    }
    if (value.has_pusch_ServingCellConfig) {
        Encode_SetupRelease_PUSCH_ServingCellConfig(enc, value.pusch_ServingCellConfig);
    }
    if (value.has_carrierSwitching) {
        Encode_SetupRelease_SRS_CarrierSwitching(enc, value.carrierSwitching);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_UplinkConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_UplinkConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_UplinkConfig_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_UplinkConfig(Decoder& dec, UplinkConfig& value)
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
        if (Decode_BWP_UplinkDedicated(dec, value.initialUplinkBWP) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkBWP_ToReleaseList_count)) { goto fail; }
if (value.uplinkBWP_ToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkBWP_ToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkBWP_ToReleaseList_count > 0u) {
    value.uplinkBWP_ToReleaseList_items = (BWP_Id*)std::malloc((std::size_t)value.uplinkBWP_ToReleaseList_count * sizeof(BWP_Id));
    if (value.uplinkBWP_ToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkBWP_ToReleaseList_items, 0, (std::size_t)value.uplinkBWP_ToReleaseList_count * sizeof(BWP_Id));
}
for (std::uint32_t i = 0; i < value.uplinkBWP_ToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
    value.uplinkBWP_ToReleaseList_items[i] = (BWP_Id)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.uplinkBWP_ToAddModList_count)) { goto fail; }
if (value.uplinkBWP_ToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uplinkBWP_ToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uplinkBWP_ToAddModList_count > 0u) {
    value.uplinkBWP_ToAddModList_items = (BWP_Uplink*)std::malloc((std::size_t)value.uplinkBWP_ToAddModList_count * sizeof(BWP_Uplink));
    if (value.uplinkBWP_ToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uplinkBWP_ToAddModList_items, 0, (std::size_t)value.uplinkBWP_ToAddModList_count * sizeof(BWP_Uplink));
}
for (std::uint32_t i = 0; i < value.uplinkBWP_ToAddModList_count; ++i) {
    if (Decode_BWP_Uplink(dec, value.uplinkBWP_ToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.firstActiveUplinkBWP_Id = (BWP_Id)tmp_value;
    }
    if (present_4) {
        if (Decode_SetupRelease_PUSCH_ServingCellConfig(dec, value.pusch_ServingCellConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SetupRelease_SRS_CarrierSwitching(dec, value.carrierSwitching) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_UplinkConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_UplinkConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_UplinkConfig_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_UplinkConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkConfig(UplinkConfig& value)
{
    if (value.has_initialUplinkBWP) {
        Free_BWP_UplinkDedicated(value.initialUplinkBWP);
    }
    if (value.has_uplinkBWP_ToReleaseList) {
        if (value.uplinkBWP_ToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkBWP_ToReleaseList_count; ++i) {
            }
            std::free(value.uplinkBWP_ToReleaseList_items);
            value.uplinkBWP_ToReleaseList_items = nullptr;
        }
        value.uplinkBWP_ToReleaseList_count = 0;
    }
    if (value.has_uplinkBWP_ToAddModList) {
        if (value.uplinkBWP_ToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.uplinkBWP_ToAddModList_count; ++i) {
                Free_BWP_Uplink(value.uplinkBWP_ToAddModList_items[i]);
            }
            std::free(value.uplinkBWP_ToAddModList_items);
            value.uplinkBWP_ToAddModList_items = nullptr;
        }
        value.uplinkBWP_ToAddModList_count = 0;
    }
    if (value.has_firstActiveUplinkBWP_Id) {
    }
    if (value.has_pusch_ServingCellConfig) {
        Free_SetupRelease_PUSCH_ServingCellConfig(value.pusch_ServingCellConfig);
    }
    if (value.has_carrierSwitching) {
        Free_SetupRelease_SRS_CarrierSwitching(value.carrierSwitching);
    }
    if (value.has_extGroup1) {
        Free_UplinkConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_UplinkConfig_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_UplinkConfig_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TDD_UL_DL_ConfigDedicated(Encoder& enc, const TDD_UL_DL_ConfigDedicated& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_slotSpecificConfigurationsToAddModList);
    enc.WriteBit(value.has_slotSpecificConfigurationsToReleaseList);
    if (value.has_slotSpecificConfigurationsToAddModList) {
enc.WriteConstrainedLength(value.slotSpecificConfigurationsToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToAddModList_count; ++i) {
    Encode_TDD_UL_DL_SlotConfig(enc, value.slotSpecificConfigurationsToAddModList_items[i]);
}
    }
    if (value.has_slotSpecificConfigurationsToReleaseList) {
enc.WriteConstrainedLength(value.slotSpecificConfigurationsToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.slotSpecificConfigurationsToReleaseList_items[i]), 0, 319);
}
    }
    return enc.Error();
}

ErrorCode Decode_TDD_UL_DL_ConfigDedicated(Decoder& dec, TDD_UL_DL_ConfigDedicated& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.slotSpecificConfigurationsToAddModList_count)) { goto fail; }
if (value.slotSpecificConfigurationsToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotSpecificConfigurationsToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotSpecificConfigurationsToAddModList_count > 0u) {
    value.slotSpecificConfigurationsToAddModList_items = (TDD_UL_DL_SlotConfig*)std::malloc((std::size_t)value.slotSpecificConfigurationsToAddModList_count * sizeof(TDD_UL_DL_SlotConfig));
    if (value.slotSpecificConfigurationsToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotSpecificConfigurationsToAddModList_items, 0, (std::size_t)value.slotSpecificConfigurationsToAddModList_count * sizeof(TDD_UL_DL_SlotConfig));
}
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToAddModList_count; ++i) {
    if (Decode_TDD_UL_DL_SlotConfig(dec, value.slotSpecificConfigurationsToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.slotSpecificConfigurationsToReleaseList_count)) { goto fail; }
if (value.slotSpecificConfigurationsToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.slotSpecificConfigurationsToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.slotSpecificConfigurationsToReleaseList_count > 0u) {
    value.slotSpecificConfigurationsToReleaseList_items = (TDD_UL_DL_SlotIndex*)std::malloc((std::size_t)value.slotSpecificConfigurationsToReleaseList_count * sizeof(TDD_UL_DL_SlotIndex));
    if (value.slotSpecificConfigurationsToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.slotSpecificConfigurationsToReleaseList_items, 0, (std::size_t)value.slotSpecificConfigurationsToReleaseList_count * sizeof(TDD_UL_DL_SlotIndex));
}
for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
    value.slotSpecificConfigurationsToReleaseList_items[i] = (TDD_UL_DL_SlotIndex)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_TDD_UL_DL_ConfigDedicated(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TDD_UL_DL_ConfigDedicated(TDD_UL_DL_ConfigDedicated& value)
{
    if (value.has_slotSpecificConfigurationsToAddModList) {
        if (value.slotSpecificConfigurationsToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToAddModList_count; ++i) {
                Free_TDD_UL_DL_SlotConfig(value.slotSpecificConfigurationsToAddModList_items[i]);
            }
            std::free(value.slotSpecificConfigurationsToAddModList_items);
            value.slotSpecificConfigurationsToAddModList_items = nullptr;
        }
        value.slotSpecificConfigurationsToAddModList_count = 0;
    }
    if (value.has_slotSpecificConfigurationsToReleaseList) {
        if (value.slotSpecificConfigurationsToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.slotSpecificConfigurationsToReleaseList_count; ++i) {
            }
            std::free(value.slotSpecificConfigurationsToReleaseList_items);
            value.slotSpecificConfigurationsToReleaseList_items = nullptr;
        }
        value.slotSpecificConfigurationsToReleaseList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_AvailabilityIndicator_r16(Encoder& enc, const SetupRelease_AvailabilityIndicator_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_AvailabilityIndicator_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_AvailabilityIndicator_r16_Tag_setup:
        Encode_AvailabilityIndicator_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_AvailabilityIndicator_r16(Decoder& dec, SetupRelease_AvailabilityIndicator_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_AvailabilityIndicator_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_AvailabilityIndicator_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_AvailabilityIndicator_r16_Tag_setup: {
        if (Decode_AvailabilityIndicator_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_AvailabilityIndicator_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_AvailabilityIndicator_r16(SetupRelease_AvailabilityIndicator_r16& value)
{
    switch (value.tag) {
    case SetupRelease_AvailabilityIndicator_r16_Tag_release:
        break;
    case SetupRelease_AvailabilityIndicator_r16_Tag_setup:
        Free_AvailabilityIndicator_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCCH_ServingCellConfig_ExtGroup1(Encoder& enc, const PDCCH_ServingCellConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_availabilityIndicator_r16);
    enc.WriteBit(value.has_searchSpaceSwitchTimer_r16);
    if (value.has_availabilityIndicator_r16) {
        Encode_SetupRelease_AvailabilityIndicator_r16(enc, value.availabilityIndicator_r16);
    }
    if (value.has_searchSpaceSwitchTimer_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchTimer_r16), 1, 80);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ServingCellConfig_ExtGroup1(Decoder& dec, PDCCH_ServingCellConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_AvailabilityIndicator_r16(dec, value.availabilityIndicator_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 80, tmp_value)) { goto fail; }
        value.searchSpaceSwitchTimer_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ServingCellConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ServingCellConfig_ExtGroup1(PDCCH_ServingCellConfig_ExtGroup1& value)
{
    if (value.has_availabilityIndicator_r16) {
        Free_SetupRelease_AvailabilityIndicator_r16(value.availabilityIndicator_r16);
    }
    if (value.has_searchSpaceSwitchTimer_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCCH_ServingCellConfig_ExtGroup2(Encoder& enc, const PDCCH_ServingCellConfig_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_searchSpaceSwitchTimer_v1710);
    if (value.has_searchSpaceSwitchTimer_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchTimer_v1710), 81, 1280);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ServingCellConfig_ExtGroup2(Decoder& dec, PDCCH_ServingCellConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(81, 1280, tmp_value)) { goto fail; }
        value.searchSpaceSwitchTimer_v1710 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ServingCellConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ServingCellConfig_ExtGroup2(PDCCH_ServingCellConfig_ExtGroup2& value)
{
    if (value.has_searchSpaceSwitchTimer_v1710) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SlotFormatIndicator_ExtGroup1(Encoder& enc, const SlotFormatIndicator_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_availableRB_SetsToAddModList_r16);
    enc.WriteBit(value.has_availableRB_SetsToReleaseList_r16);
    enc.WriteBit(value.has_switchTriggerToAddModList_r16);
    enc.WriteBit(value.has_switchTriggerToReleaseList_r16);
    enc.WriteBit(value.has_co_DurationsPerCellToAddModList_r16);
    enc.WriteBit(value.has_co_DurationsPerCellToReleaseList_r16);
    if (value.has_availableRB_SetsToAddModList_r16) {
enc.WriteConstrainedLength(value.availableRB_SetsToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availableRB_SetsToAddModList_r16_count; ++i) {
    Encode_AvailableRB_SetsPerCell_r16(enc, value.availableRB_SetsToAddModList_r16_items[i]);
}
    }
    if (value.has_availableRB_SetsToReleaseList_r16) {
enc.WriteConstrainedLength(value.availableRB_SetsToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.availableRB_SetsToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.availableRB_SetsToReleaseList_r16_items[i]), 0, 31);
}
    }
    if (value.has_switchTriggerToAddModList_r16) {
enc.WriteConstrainedLength(value.switchTriggerToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.switchTriggerToAddModList_r16_count; ++i) {
    Encode_SearchSpaceSwitchTrigger_r16(enc, value.switchTriggerToAddModList_r16_items[i]);
}
    }
    if (value.has_switchTriggerToReleaseList_r16) {
enc.WriteConstrainedLength(value.switchTriggerToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.switchTriggerToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.switchTriggerToReleaseList_r16_items[i]), 0, 31);
}
    }
    if (value.has_co_DurationsPerCellToAddModList_r16) {
enc.WriteConstrainedLength(value.co_DurationsPerCellToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.co_DurationsPerCellToAddModList_r16_count; ++i) {
    Encode_CO_DurationsPerCell_r16(enc, value.co_DurationsPerCellToAddModList_r16_items[i]);
}
    }
    if (value.has_co_DurationsPerCellToReleaseList_r16) {
enc.WriteConstrainedLength(value.co_DurationsPerCellToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.co_DurationsPerCellToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.co_DurationsPerCellToReleaseList_r16_items[i]), 0, 31);
}
    }
    return enc.Error();
}

ErrorCode Decode_SlotFormatIndicator_ExtGroup1(Decoder& dec, SlotFormatIndicator_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.availableRB_SetsToAddModList_r16_count)) { goto fail; }
if (value.availableRB_SetsToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availableRB_SetsToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availableRB_SetsToAddModList_r16_count > 0u) {
    value.availableRB_SetsToAddModList_r16_items = (AvailableRB_SetsPerCell_r16*)std::malloc((std::size_t)value.availableRB_SetsToAddModList_r16_count * sizeof(AvailableRB_SetsPerCell_r16));
    if (value.availableRB_SetsToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availableRB_SetsToAddModList_r16_items, 0, (std::size_t)value.availableRB_SetsToAddModList_r16_count * sizeof(AvailableRB_SetsPerCell_r16));
}
for (std::uint32_t i = 0; i < value.availableRB_SetsToAddModList_r16_count; ++i) {
    if (Decode_AvailableRB_SetsPerCell_r16(dec, value.availableRB_SetsToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.availableRB_SetsToReleaseList_r16_count)) { goto fail; }
if (value.availableRB_SetsToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.availableRB_SetsToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.availableRB_SetsToReleaseList_r16_count > 0u) {
    value.availableRB_SetsToReleaseList_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.availableRB_SetsToReleaseList_r16_count * sizeof(ServCellIndex));
    if (value.availableRB_SetsToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.availableRB_SetsToReleaseList_r16_items, 0, (std::size_t)value.availableRB_SetsToReleaseList_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.availableRB_SetsToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.availableRB_SetsToReleaseList_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.switchTriggerToAddModList_r16_count)) { goto fail; }
if (value.switchTriggerToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.switchTriggerToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.switchTriggerToAddModList_r16_count > 0u) {
    value.switchTriggerToAddModList_r16_items = (SearchSpaceSwitchTrigger_r16*)std::malloc((std::size_t)value.switchTriggerToAddModList_r16_count * sizeof(SearchSpaceSwitchTrigger_r16));
    if (value.switchTriggerToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.switchTriggerToAddModList_r16_items, 0, (std::size_t)value.switchTriggerToAddModList_r16_count * sizeof(SearchSpaceSwitchTrigger_r16));
}
for (std::uint32_t i = 0; i < value.switchTriggerToAddModList_r16_count; ++i) {
    if (Decode_SearchSpaceSwitchTrigger_r16(dec, value.switchTriggerToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.switchTriggerToReleaseList_r16_count)) { goto fail; }
if (value.switchTriggerToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.switchTriggerToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.switchTriggerToReleaseList_r16_count > 0u) {
    value.switchTriggerToReleaseList_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.switchTriggerToReleaseList_r16_count * sizeof(ServCellIndex));
    if (value.switchTriggerToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.switchTriggerToReleaseList_r16_items, 0, (std::size_t)value.switchTriggerToReleaseList_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.switchTriggerToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.switchTriggerToReleaseList_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.co_DurationsPerCellToAddModList_r16_count)) { goto fail; }
if (value.co_DurationsPerCellToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.co_DurationsPerCellToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.co_DurationsPerCellToAddModList_r16_count > 0u) {
    value.co_DurationsPerCellToAddModList_r16_items = (CO_DurationsPerCell_r16*)std::malloc((std::size_t)value.co_DurationsPerCellToAddModList_r16_count * sizeof(CO_DurationsPerCell_r16));
    if (value.co_DurationsPerCellToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.co_DurationsPerCellToAddModList_r16_items, 0, (std::size_t)value.co_DurationsPerCellToAddModList_r16_count * sizeof(CO_DurationsPerCell_r16));
}
for (std::uint32_t i = 0; i < value.co_DurationsPerCellToAddModList_r16_count; ++i) {
    if (Decode_CO_DurationsPerCell_r16(dec, value.co_DurationsPerCellToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.co_DurationsPerCellToReleaseList_r16_count)) { goto fail; }
if (value.co_DurationsPerCellToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.co_DurationsPerCellToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.co_DurationsPerCellToReleaseList_r16_count > 0u) {
    value.co_DurationsPerCellToReleaseList_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.co_DurationsPerCellToReleaseList_r16_count * sizeof(ServCellIndex));
    if (value.co_DurationsPerCellToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.co_DurationsPerCellToReleaseList_r16_items, 0, (std::size_t)value.co_DurationsPerCellToReleaseList_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.co_DurationsPerCellToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.co_DurationsPerCellToReleaseList_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotFormatIndicator_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatIndicator_ExtGroup1(SlotFormatIndicator_ExtGroup1& value)
{
    if (value.has_availableRB_SetsToAddModList_r16) {
        if (value.availableRB_SetsToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.availableRB_SetsToAddModList_r16_count; ++i) {
                Free_AvailableRB_SetsPerCell_r16(value.availableRB_SetsToAddModList_r16_items[i]);
            }
            std::free(value.availableRB_SetsToAddModList_r16_items);
            value.availableRB_SetsToAddModList_r16_items = nullptr;
        }
        value.availableRB_SetsToAddModList_r16_count = 0;
    }
    if (value.has_availableRB_SetsToReleaseList_r16) {
        if (value.availableRB_SetsToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.availableRB_SetsToReleaseList_r16_count; ++i) {
            }
            std::free(value.availableRB_SetsToReleaseList_r16_items);
            value.availableRB_SetsToReleaseList_r16_items = nullptr;
        }
        value.availableRB_SetsToReleaseList_r16_count = 0;
    }
    if (value.has_switchTriggerToAddModList_r16) {
        if (value.switchTriggerToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.switchTriggerToAddModList_r16_count; ++i) {
                Free_SearchSpaceSwitchTrigger_r16(value.switchTriggerToAddModList_r16_items[i]);
            }
            std::free(value.switchTriggerToAddModList_r16_items);
            value.switchTriggerToAddModList_r16_items = nullptr;
        }
        value.switchTriggerToAddModList_r16_count = 0;
    }
    if (value.has_switchTriggerToReleaseList_r16) {
        if (value.switchTriggerToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.switchTriggerToReleaseList_r16_count; ++i) {
            }
            std::free(value.switchTriggerToReleaseList_r16_items);
            value.switchTriggerToReleaseList_r16_items = nullptr;
        }
        value.switchTriggerToReleaseList_r16_count = 0;
    }
    if (value.has_co_DurationsPerCellToAddModList_r16) {
        if (value.co_DurationsPerCellToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.co_DurationsPerCellToAddModList_r16_count; ++i) {
                Free_CO_DurationsPerCell_r16(value.co_DurationsPerCellToAddModList_r16_items[i]);
            }
            std::free(value.co_DurationsPerCellToAddModList_r16_items);
            value.co_DurationsPerCellToAddModList_r16_items = nullptr;
        }
        value.co_DurationsPerCellToAddModList_r16_count = 0;
    }
    if (value.has_co_DurationsPerCellToReleaseList_r16) {
        if (value.co_DurationsPerCellToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.co_DurationsPerCellToReleaseList_r16_count; ++i) {
            }
            std::free(value.co_DurationsPerCellToReleaseList_r16_items);
            value.co_DurationsPerCellToReleaseList_r16_items = nullptr;
        }
        value.co_DurationsPerCellToReleaseList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SlotFormatIndicator_ExtGroup2(Encoder& enc, const SlotFormatIndicator_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_switchTriggerToAddModListSizeExt_r16);
    enc.WriteBit(value.has_switchTriggerToReleaseListSizeExt_r16);
    if (value.has_switchTriggerToAddModListSizeExt_r16) {
enc.WriteConstrainedLength(value.switchTriggerToAddModListSizeExt_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.switchTriggerToAddModListSizeExt_r16_count; ++i) {
    Encode_SearchSpaceSwitchTrigger_r16(enc, value.switchTriggerToAddModListSizeExt_r16_items[i]);
}
    }
    if (value.has_switchTriggerToReleaseListSizeExt_r16) {
enc.WriteConstrainedLength(value.switchTriggerToReleaseListSizeExt_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.switchTriggerToReleaseListSizeExt_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.switchTriggerToReleaseListSizeExt_r16_items[i]), 0, 31);
}
    }
    return enc.Error();
}

ErrorCode Decode_SlotFormatIndicator_ExtGroup2(Decoder& dec, SlotFormatIndicator_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.switchTriggerToAddModListSizeExt_r16_count)) { goto fail; }
if (value.switchTriggerToAddModListSizeExt_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.switchTriggerToAddModListSizeExt_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.switchTriggerToAddModListSizeExt_r16_count > 0u) {
    value.switchTriggerToAddModListSizeExt_r16_items = (SearchSpaceSwitchTrigger_r16*)std::malloc((std::size_t)value.switchTriggerToAddModListSizeExt_r16_count * sizeof(SearchSpaceSwitchTrigger_r16));
    if (value.switchTriggerToAddModListSizeExt_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.switchTriggerToAddModListSizeExt_r16_items, 0, (std::size_t)value.switchTriggerToAddModListSizeExt_r16_count * sizeof(SearchSpaceSwitchTrigger_r16));
}
for (std::uint32_t i = 0; i < value.switchTriggerToAddModListSizeExt_r16_count; ++i) {
    if (Decode_SearchSpaceSwitchTrigger_r16(dec, value.switchTriggerToAddModListSizeExt_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.switchTriggerToReleaseListSizeExt_r16_count)) { goto fail; }
if (value.switchTriggerToReleaseListSizeExt_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.switchTriggerToReleaseListSizeExt_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.switchTriggerToReleaseListSizeExt_r16_count > 0u) {
    value.switchTriggerToReleaseListSizeExt_r16_items = (ServCellIndex*)std::malloc((std::size_t)value.switchTriggerToReleaseListSizeExt_r16_count * sizeof(ServCellIndex));
    if (value.switchTriggerToReleaseListSizeExt_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.switchTriggerToReleaseListSizeExt_r16_items, 0, (std::size_t)value.switchTriggerToReleaseListSizeExt_r16_count * sizeof(ServCellIndex));
}
for (std::uint32_t i = 0; i < value.switchTriggerToReleaseListSizeExt_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.switchTriggerToReleaseListSizeExt_r16_items[i] = (ServCellIndex)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotFormatIndicator_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatIndicator_ExtGroup2(SlotFormatIndicator_ExtGroup2& value)
{
    if (value.has_switchTriggerToAddModListSizeExt_r16) {
        if (value.switchTriggerToAddModListSizeExt_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.switchTriggerToAddModListSizeExt_r16_count; ++i) {
                Free_SearchSpaceSwitchTrigger_r16(value.switchTriggerToAddModListSizeExt_r16_items[i]);
            }
            std::free(value.switchTriggerToAddModListSizeExt_r16_items);
            value.switchTriggerToAddModListSizeExt_r16_items = nullptr;
        }
        value.switchTriggerToAddModListSizeExt_r16_count = 0;
    }
    if (value.has_switchTriggerToReleaseListSizeExt_r16) {
        if (value.switchTriggerToReleaseListSizeExt_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.switchTriggerToReleaseListSizeExt_r16_count; ++i) {
            }
            std::free(value.switchTriggerToReleaseListSizeExt_r16_items);
            value.switchTriggerToReleaseListSizeExt_r16_items = nullptr;
        }
        value.switchTriggerToReleaseListSizeExt_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SlotFormatIndicator_ExtGroup3(Encoder& enc, const SlotFormatIndicator_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_co_DurationsPerCellToAddModList_r17);
    if (value.has_co_DurationsPerCellToAddModList_r17) {
enc.WriteConstrainedLength(value.co_DurationsPerCellToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.co_DurationsPerCellToAddModList_r17_count; ++i) {
    Encode_CO_DurationsPerCell_r17(enc, value.co_DurationsPerCellToAddModList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SlotFormatIndicator_ExtGroup3(Decoder& dec, SlotFormatIndicator_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.co_DurationsPerCellToAddModList_r17_count)) { goto fail; }
if (value.co_DurationsPerCellToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.co_DurationsPerCellToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.co_DurationsPerCellToAddModList_r17_count > 0u) {
    value.co_DurationsPerCellToAddModList_r17_items = (CO_DurationsPerCell_r17*)std::malloc((std::size_t)value.co_DurationsPerCellToAddModList_r17_count * sizeof(CO_DurationsPerCell_r17));
    if (value.co_DurationsPerCellToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.co_DurationsPerCellToAddModList_r17_items, 0, (std::size_t)value.co_DurationsPerCellToAddModList_r17_count * sizeof(CO_DurationsPerCell_r17));
}
for (std::uint32_t i = 0; i < value.co_DurationsPerCellToAddModList_r17_count; ++i) {
    if (Decode_CO_DurationsPerCell_r17(dec, value.co_DurationsPerCellToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SlotFormatIndicator_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SlotFormatIndicator_ExtGroup3(SlotFormatIndicator_ExtGroup3& value)
{
    if (value.has_co_DurationsPerCellToAddModList_r17) {
        if (value.co_DurationsPerCellToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.co_DurationsPerCellToAddModList_r17_count; ++i) {
                Free_CO_DurationsPerCell_r17(value.co_DurationsPerCellToAddModList_r17_items[i]);
            }
            std::free(value.co_DurationsPerCellToAddModList_r17_items);
            value.co_DurationsPerCellToAddModList_r17_items = nullptr;
        }
        value.co_DurationsPerCellToAddModList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
