/* ============================================================================
 * src/generated/codec_part004.cpp — 生成的编解码函数
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
// OnDemandSIB_Request_r16：ASN.1 OnDemandSIB-Request-r16；源文件第 1034 行；SEQUENCE。
// Encode_OnDemandSIB_Request_r16 只读不分配；Decode_OnDemandSIB_Request_r16 可能 malloc（失败时内部已释放并清零）；Free_OnDemandSIB_Request_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OnDemandSIB_Request_r16(Encoder& enc, const OnDemandSIB_Request_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.onDemandSIB_RequestProhibitTimer_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_OnDemandSIB_Request_r16(Decoder& dec, OnDemandSIB_Request_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.onDemandSIB_RequestProhibitTimer_r16 = (OnDemandSIB_Request_r16_OnDemandSIB_RequestProhibitTimer_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OnDemandSIB_Request_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OnDemandSIB_Request_r16(OnDemandSIB_Request_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_OnDemandSIB_Request_r16：ASN.1 SetupRelease<OnDemandSIB-Request-r16>；源文件第 976 行；CHOICE。
// Encode_SetupRelease_OnDemandSIB_Request_r16 只读不分配；Decode_SetupRelease_OnDemandSIB_Request_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_OnDemandSIB_Request_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_OnDemandSIB_Request_r16(Encoder& enc, const SetupRelease_OnDemandSIB_Request_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_OnDemandSIB_Request_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_OnDemandSIB_Request_r16_Tag_setup:
        Encode_OnDemandSIB_Request_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_OnDemandSIB_Request_r16(Decoder& dec, SetupRelease_OnDemandSIB_Request_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_OnDemandSIB_Request_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_OnDemandSIB_Request_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_OnDemandSIB_Request_r16_Tag_setup: {
        if (Decode_OnDemandSIB_Request_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_OnDemandSIB_Request_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_OnDemandSIB_Request_r16(SetupRelease_OnDemandSIB_Request_r16& value)
{
    switch (value.tag) {
    case SetupRelease_OnDemandSIB_Request_r16_Tag_release:
        break;
    case SetupRelease_OnDemandSIB_Request_r16_Tag_setup:
        Free_OnDemandSIB_Request_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SchedulingRequestId：ASN.1 SetupRelease<SchedulingRequestId>；源文件第 22117 行；CHOICE。
// Encode_SetupRelease_SchedulingRequestId 只读不分配；Decode_SetupRelease_SchedulingRequestId 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SchedulingRequestId 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SchedulingRequestId(Encoder& enc, const SetupRelease_SchedulingRequestId& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SchedulingRequestId_Tag_release:
        (void)0;
        break;
    case SetupRelease_SchedulingRequestId_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 7);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SchedulingRequestId(Decoder& dec, SetupRelease_SchedulingRequestId& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SchedulingRequestId_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SchedulingRequestId_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SchedulingRequestId_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.setup = (SchedulingRequestId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SchedulingRequestId(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SchedulingRequestId(SetupRelease_SchedulingRequestId& value)
{
    switch (value.tag) {
    case SetupRelease_SchedulingRequestId_Tag_release:
        break;
    case SetupRelease_SchedulingRequestId_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_SCCH_CarrierSetConfigList_r18：ASN.1 SL-SCCH-CarrierSetConfigList-r18；源文件第 22150 行；SEQUENCE OF。
// Encode_SL_SCCH_CarrierSetConfigList_r18 只读不分配；Decode_SL_SCCH_CarrierSetConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_SCCH_CarrierSetConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_SCCH_CarrierSetConfigList_r18(Encoder& enc, const SL_SCCH_CarrierSetConfigList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 96u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_SCCH_CarrierSetConfig_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_SCCH_CarrierSetConfigList_r18(Decoder& dec, SL_SCCH_CarrierSetConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 96u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 96u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_SCCH_CarrierSetConfig_r18*)std::malloc((std::size_t)value.count * sizeof(SL_SCCH_CarrierSetConfig_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_SCCH_CarrierSetConfig_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_SCCH_CarrierSetConfig_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_SCCH_CarrierSetConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_SCCH_CarrierSetConfigList_r18(SL_SCCH_CarrierSetConfigList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_SCCH_CarrierSetConfig_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_SCCH_CarrierSetConfigList_r18：ASN.1 SetupRelease<SL-SCCH-CarrierSetConfigList-r18>；源文件第 22135 行；CHOICE。
// Encode_SetupRelease_SL_SCCH_CarrierSetConfigList_r18 只读不分配；Decode_SetupRelease_SL_SCCH_CarrierSetConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_SCCH_CarrierSetConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(Encoder& enc, const SetupRelease_SL_SCCH_CarrierSetConfigList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_setup:
        Encode_SL_SCCH_CarrierSetConfigList_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(Decoder& dec, SetupRelease_SL_SCCH_CarrierSetConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_setup: {
        if (Decode_SL_SCCH_CarrierSetConfigList_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(SetupRelease_SL_SCCH_CarrierSetConfigList_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_release:
        break;
    case SetupRelease_SL_SCCH_CarrierSetConfigList_r18_Tag_setup:
        Free_SL_SCCH_CarrierSetConfigList_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PHY_MAC_RLC_Config_v1700_ExtGroup1：ASN.1 SL_PHY_MAC_RLC_Config_v1700_ExtGroup1；源文件第 22127 行；扩展添加组 [[ ]]。
// Encode_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1 只读不分配；Decode_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(Encoder& enc, const SL_PHY_MAC_RLC_Config_v1700_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_RLC_BearerToAddModListSizeExt_v1800);
    enc.WriteBit(value.has_sl_RLC_BearerToReleaseListSizeExt_v1800);
    enc.WriteBit(value.has_sl_FreqInfoToAddModListExt_v1800);
    enc.WriteBit(value.has_sl_LBT_SchedulingRequestId_r18);
    enc.WriteBit(value.has_sl_SyncFreqList_r18);
    enc.WriteBit(value.has_sl_SyncTxMultiFreq_r18);
    enc.WriteBit(value.has_sl_MaxTransPowerCA_r18);
    enc.WriteBit(value.has_sl_SCCH_CarrierSetConfig_r18);
    enc.WriteBit(value.has_sl_PRS_SchedulingRequestId_r18);
    if (value.has_sl_RLC_BearerToAddModListSizeExt_v1800) {
enc.WriteConstrainedLength(value.sl_RLC_BearerToAddModListSizeExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToAddModListSizeExt_v1800_count; ++i) {
    Encode_SL_RLC_BearerConfig_r16(enc, value.sl_RLC_BearerToAddModListSizeExt_v1800_items[i]);
}
    }
    if (value.has_sl_RLC_BearerToReleaseListSizeExt_v1800) {
enc.WriteConstrainedLength(value.sl_RLC_BearerToReleaseListSizeExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToReleaseListSizeExt_v1800_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RLC_BearerToReleaseListSizeExt_v1800_items[i]), 513, 1024);
}
    }
    if (value.has_sl_FreqInfoToAddModListExt_v1800) {
enc.WriteConstrainedLength(value.sl_FreqInfoToAddModListExt_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqInfoToAddModListExt_v1800_count; ++i) {
    Encode_SL_FreqConfigExt_v1800(enc, value.sl_FreqInfoToAddModListExt_v1800_items[i]);
}
    }
    if (value.has_sl_LBT_SchedulingRequestId_r18) {
        Encode_SetupRelease_SchedulingRequestId(enc, value.sl_LBT_SchedulingRequestId_r18);
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
    if (value.has_sl_SCCH_CarrierSetConfig_r18) {
        Encode_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(enc, value.sl_SCCH_CarrierSetConfig_r18);
    }
    if (value.has_sl_PRS_SchedulingRequestId_r18) {
        Encode_SetupRelease_SchedulingRequestId(enc, value.sl_PRS_SchedulingRequestId_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(Decoder& dec, SL_PHY_MAC_RLC_Config_v1700_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_BearerToAddModListSizeExt_v1800_count)) { goto fail; }
if (value.sl_RLC_BearerToAddModListSizeExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_BearerToAddModListSizeExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_BearerToAddModListSizeExt_v1800_count > 0u) {
    value.sl_RLC_BearerToAddModListSizeExt_v1800_items = (SL_RLC_BearerConfig_r16*)std::malloc((std::size_t)value.sl_RLC_BearerToAddModListSizeExt_v1800_count * sizeof(SL_RLC_BearerConfig_r16));
    if (value.sl_RLC_BearerToAddModListSizeExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_BearerToAddModListSizeExt_v1800_items, 0, (std::size_t)value.sl_RLC_BearerToAddModListSizeExt_v1800_count * sizeof(SL_RLC_BearerConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToAddModListSizeExt_v1800_count; ++i) {
    if (Decode_SL_RLC_BearerConfig_r16(dec, value.sl_RLC_BearerToAddModListSizeExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_BearerToReleaseListSizeExt_v1800_count)) { goto fail; }
if (value.sl_RLC_BearerToReleaseListSizeExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_BearerToReleaseListSizeExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_BearerToReleaseListSizeExt_v1800_count > 0u) {
    value.sl_RLC_BearerToReleaseListSizeExt_v1800_items = (SL_RLC_BearerConfigIndex_v1800*)std::malloc((std::size_t)value.sl_RLC_BearerToReleaseListSizeExt_v1800_count * sizeof(SL_RLC_BearerConfigIndex_v1800));
    if (value.sl_RLC_BearerToReleaseListSizeExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_BearerToReleaseListSizeExt_v1800_items, 0, (std::size_t)value.sl_RLC_BearerToReleaseListSizeExt_v1800_count * sizeof(SL_RLC_BearerConfigIndex_v1800));
}
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToReleaseListSizeExt_v1800_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(513, 1024, tmp_value)) { goto fail; }
    value.sl_RLC_BearerToReleaseListSizeExt_v1800_items[i] = (SL_RLC_BearerConfigIndex_v1800)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqInfoToAddModListExt_v1800_count)) { goto fail; }
if (value.sl_FreqInfoToAddModListExt_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqInfoToAddModListExt_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqInfoToAddModListExt_v1800_count > 0u) {
    value.sl_FreqInfoToAddModListExt_v1800_items = (SL_FreqConfigExt_v1800*)std::malloc((std::size_t)value.sl_FreqInfoToAddModListExt_v1800_count * sizeof(SL_FreqConfigExt_v1800));
    if (value.sl_FreqInfoToAddModListExt_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqInfoToAddModListExt_v1800_items, 0, (std::size_t)value.sl_FreqInfoToAddModListExt_v1800_count * sizeof(SL_FreqConfigExt_v1800));
}
for (std::uint32_t i = 0; i < value.sl_FreqInfoToAddModListExt_v1800_count; ++i) {
    if (Decode_SL_FreqConfigExt_v1800(dec, value.sl_FreqInfoToAddModListExt_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
        if (Decode_SetupRelease_SchedulingRequestId(dec, value.sl_LBT_SchedulingRequestId_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
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
    if (present_5) {
        value.sl_SyncTxMultiFreq_r18 = (SL_PHY_MAC_RLC_Config_v1700_ExtGroup1_Sl_SyncTxMultiFreq_r18)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.sl_MaxTransPowerCA_r18 = (P_Max)tmp_value;
    }
    if (present_7) {
        if (Decode_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(dec, value.sl_SCCH_CarrierSetConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_SetupRelease_SchedulingRequestId(dec, value.sl_PRS_SchedulingRequestId_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(SL_PHY_MAC_RLC_Config_v1700_ExtGroup1& value)
{
    if (value.has_sl_RLC_BearerToAddModListSizeExt_v1800) {
        if (value.sl_RLC_BearerToAddModListSizeExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_BearerToAddModListSizeExt_v1800_count; ++i) {
                Free_SL_RLC_BearerConfig_r16(value.sl_RLC_BearerToAddModListSizeExt_v1800_items[i]);
            }
            std::free(value.sl_RLC_BearerToAddModListSizeExt_v1800_items);
            value.sl_RLC_BearerToAddModListSizeExt_v1800_items = nullptr;
        }
        value.sl_RLC_BearerToAddModListSizeExt_v1800_count = 0;
    }
    if (value.has_sl_RLC_BearerToReleaseListSizeExt_v1800) {
        if (value.sl_RLC_BearerToReleaseListSizeExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_BearerToReleaseListSizeExt_v1800_count; ++i) {
            }
            std::free(value.sl_RLC_BearerToReleaseListSizeExt_v1800_items);
            value.sl_RLC_BearerToReleaseListSizeExt_v1800_items = nullptr;
        }
        value.sl_RLC_BearerToReleaseListSizeExt_v1800_count = 0;
    }
    if (value.has_sl_FreqInfoToAddModListExt_v1800) {
        if (value.sl_FreqInfoToAddModListExt_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqInfoToAddModListExt_v1800_count; ++i) {
                Free_SL_FreqConfigExt_v1800(value.sl_FreqInfoToAddModListExt_v1800_items[i]);
            }
            std::free(value.sl_FreqInfoToAddModListExt_v1800_items);
            value.sl_FreqInfoToAddModListExt_v1800_items = nullptr;
        }
        value.sl_FreqInfoToAddModListExt_v1800_count = 0;
    }
    if (value.has_sl_LBT_SchedulingRequestId_r18) {
        Free_SetupRelease_SchedulingRequestId(value.sl_LBT_SchedulingRequestId_r18);
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
    if (value.has_sl_SCCH_CarrierSetConfig_r18) {
        Free_SetupRelease_SL_SCCH_CarrierSetConfigList_r18(value.sl_SCCH_CarrierSetConfig_r18);
    }
    if (value.has_sl_PRS_SchedulingRequestId_r18) {
        Free_SetupRelease_SchedulingRequestId(value.sl_PRS_SchedulingRequestId_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17：ASN.1 sl-DRX-GC-BC-OnDurationTimer-r17；源文件第 22252 行；CHOICE。
// Encode_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17 只读不分配；Decode_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(Encoder& enc, const SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(Decoder& dec, SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag)root_index;
    switch (value.tag) {
    case SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17& value)
{
    switch (value.tag) {
    case SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_subMilliSeconds:
        break;
    case SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_GC_BC_QoS_r17：ASN.1 SL-DRX-GC-BC-QoS-r17；源文件第 22250 行；SEQUENCE。
// Encode_SL_DRX_GC_BC_QoS_r17 只读不分配；Decode_SL_DRX_GC_BC_QoS_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_GC_BC_QoS_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_GC_BC_QoS_r17(Encoder& enc, const SL_DRX_GC_BC_QoS_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DRX_GC_BC_MappedQoS_FlowList_r17);
    if (value.has_sl_DRX_GC_BC_MappedQoS_FlowList_r17) {
enc.WriteConstrainedLength(value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count; ++i) {
    Encode_SL_QoS_Profile_r16(enc, value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items[i]);
}
    }
    Encode_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(enc, value.sl_DRX_GC_BC_OnDurationTimer_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_GC_InactivityTimer_r17), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_GC_BC_Cycle_r17), 0, 31);
    return enc.Error();
}

ErrorCode Decode_SL_DRX_GC_BC_QoS_r17(Decoder& dec, SL_DRX_GC_BC_QoS_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count)) { goto fail; }
if (value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count > 0u) {
    value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items = (SL_QoS_Profile_r16*)std::malloc((std::size_t)value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count * sizeof(SL_QoS_Profile_r16));
    if (value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items, 0, (std::size_t)value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count * sizeof(SL_QoS_Profile_r16));
}
for (std::uint32_t i = 0; i < value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count; ++i) {
    if (Decode_SL_QoS_Profile_r16(dec, value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        if (Decode_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(dec, value.sl_DRX_GC_BC_OnDurationTimer_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_DRX_GC_InactivityTimer_r17 = (SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_InactivityTimer_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_DRX_GC_BC_Cycle_r17 = (SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_Cycle_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_GC_BC_QoS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_GC_BC_QoS_r17(SL_DRX_GC_BC_QoS_r17& value)
{
    if (value.has_sl_DRX_GC_BC_MappedQoS_FlowList_r17) {
        if (value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count; ++i) {
                Free_SL_QoS_Profile_r16(value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items[i]);
            }
            std::free(value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items);
            value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_items = nullptr;
        }
        value.sl_DRX_GC_BC_MappedQoS_FlowList_r17_count = 0;
    }
    Free_SL_DRX_GC_BC_QoS_r17_Sl_DRX_GC_BC_OnDurationTimer_r17(value.sl_DRX_GC_BC_OnDurationTimer_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_GC_Generic_r17：ASN.1 SL-DRX-GC-Generic-r17；源文件第 22270 行；SEQUENCE。
// Encode_SL_DRX_GC_Generic_r17 只读不分配；Decode_SL_DRX_GC_Generic_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_GC_Generic_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_GC_Generic_r17(Encoder& enc, const SL_DRX_GC_Generic_r17& value)
{
    enc.WriteBit(value.has_sl_DRX_GC_HARQ_RTT_Timer1_r17);
    enc.WriteBit(value.has_sl_DRX_GC_HARQ_RTT_Timer2_r17);
    if (value.has_sl_DRX_GC_HARQ_RTT_Timer1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_GC_HARQ_RTT_Timer1_r17), 0, 7);
    }
    if (value.has_sl_DRX_GC_HARQ_RTT_Timer2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_GC_HARQ_RTT_Timer2_r17), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_GC_RetransmissionTimer_r17), 0, 31);
    return enc.Error();
}

ErrorCode Decode_SL_DRX_GC_Generic_r17(Decoder& dec, SL_DRX_GC_Generic_r17& value)
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
        value.sl_DRX_GC_HARQ_RTT_Timer1_r17 = (SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer1_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_DRX_GC_HARQ_RTT_Timer2_r17 = (SL_DRX_GC_Generic_r17_Sl_DRX_GC_HARQ_RTT_Timer2_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.sl_DRX_GC_RetransmissionTimer_r17 = (SL_DRX_GC_Generic_r17_Sl_DRX_GC_RetransmissionTimer_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_GC_Generic_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_GC_Generic_r17(SL_DRX_GC_Generic_r17& value)
{
    if (value.has_sl_DRX_GC_HARQ_RTT_Timer1_r17) {
    }
    if (value.has_sl_DRX_GC_HARQ_RTT_Timer2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_ConfigGC_BC_r17：ASN.1 SL-DRX-ConfigGC-BC-r17；源文件第 22243 行；SEQUENCE。
// Encode_SL_DRX_ConfigGC_BC_r17 只读不分配；Decode_SL_DRX_ConfigGC_BC_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_ConfigGC_BC_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_ConfigGC_BC_r17(Encoder& enc, const SL_DRX_ConfigGC_BC_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DRX_GC_BC_PerQoS_List_r17);
    enc.WriteBit(value.has_sl_DRX_GC_generic_r17);
    enc.WriteBit(value.has_sl_DefaultDRX_GC_BC_r17);
    if (value.has_sl_DRX_GC_BC_PerQoS_List_r17) {
enc.WriteConstrainedLength(value.sl_DRX_GC_BC_PerQoS_List_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DRX_GC_BC_PerQoS_List_r17_count; ++i) {
    Encode_SL_DRX_GC_BC_QoS_r17(enc, value.sl_DRX_GC_BC_PerQoS_List_r17_items[i]);
}
    }
    if (value.has_sl_DRX_GC_generic_r17) {
        Encode_SL_DRX_GC_Generic_r17(enc, value.sl_DRX_GC_generic_r17);
    }
    if (value.has_sl_DefaultDRX_GC_BC_r17) {
        Encode_SL_DRX_GC_BC_QoS_r17(enc, value.sl_DefaultDRX_GC_BC_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_ConfigGC_BC_r17(Decoder& dec, SL_DRX_ConfigGC_BC_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DRX_GC_BC_PerQoS_List_r17_count)) { goto fail; }
if (value.sl_DRX_GC_BC_PerQoS_List_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DRX_GC_BC_PerQoS_List_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DRX_GC_BC_PerQoS_List_r17_count > 0u) {
    value.sl_DRX_GC_BC_PerQoS_List_r17_items = (SL_DRX_GC_BC_QoS_r17*)std::malloc((std::size_t)value.sl_DRX_GC_BC_PerQoS_List_r17_count * sizeof(SL_DRX_GC_BC_QoS_r17));
    if (value.sl_DRX_GC_BC_PerQoS_List_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DRX_GC_BC_PerQoS_List_r17_items, 0, (std::size_t)value.sl_DRX_GC_BC_PerQoS_List_r17_count * sizeof(SL_DRX_GC_BC_QoS_r17));
}
for (std::uint32_t i = 0; i < value.sl_DRX_GC_BC_PerQoS_List_r17_count; ++i) {
    if (Decode_SL_DRX_GC_BC_QoS_r17(dec, value.sl_DRX_GC_BC_PerQoS_List_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
        if (Decode_SL_DRX_GC_Generic_r17(dec, value.sl_DRX_GC_generic_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SL_DRX_GC_BC_QoS_r17(dec, value.sl_DefaultDRX_GC_BC_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_ConfigGC_BC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_ConfigGC_BC_r17(SL_DRX_ConfigGC_BC_r17& value)
{
    if (value.has_sl_DRX_GC_BC_PerQoS_List_r17) {
        if (value.sl_DRX_GC_BC_PerQoS_List_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DRX_GC_BC_PerQoS_List_r17_count; ++i) {
                Free_SL_DRX_GC_BC_QoS_r17(value.sl_DRX_GC_BC_PerQoS_List_r17_items[i]);
            }
            std::free(value.sl_DRX_GC_BC_PerQoS_List_r17_items);
            value.sl_DRX_GC_BC_PerQoS_List_r17_items = nullptr;
        }
        value.sl_DRX_GC_BC_PerQoS_List_r17_count = 0;
    }
    if (value.has_sl_DRX_GC_generic_r17) {
        Free_SL_DRX_GC_Generic_r17(value.sl_DRX_GC_generic_r17);
    }
    if (value.has_sl_DefaultDRX_GC_BC_r17) {
        Free_SL_DRX_GC_BC_QoS_r17(value.sl_DefaultDRX_GC_BC_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DRX_Config_r17：ASN.1 SL-DRX-Config-r17；源文件第 22226 行；SEQUENCE。
// Encode_SL_DRX_Config_r17 只读不分配；Decode_SL_DRX_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DRX_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DRX_Config_r17(Encoder& enc, const SL_DRX_Config_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DRX_ConfigGC_BC_r17);
    enc.WriteBit(value.has_sl_DRX_ConfigUC_ToReleaseList_r17);
    enc.WriteBit(value.has_sl_DRX_ConfigUC_ToAddModList_r17);
    if (value.has_sl_DRX_ConfigGC_BC_r17) {
        Encode_SL_DRX_ConfigGC_BC_r17(enc, value.sl_DRX_ConfigGC_BC_r17);
    }
    if (value.has_sl_DRX_ConfigUC_ToReleaseList_r17) {
enc.WriteConstrainedLength(value.sl_DRX_ConfigUC_ToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DRX_ConfigUC_ToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DRX_ConfigUC_ToReleaseList_r17_items[i]), 0, 31);
}
    }
    if (value.has_sl_DRX_ConfigUC_ToAddModList_r17) {
enc.WriteConstrainedLength(value.sl_DRX_ConfigUC_ToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DRX_ConfigUC_ToAddModList_r17_count; ++i) {
    Encode_SL_DRX_ConfigUC_Info_r17(enc, value.sl_DRX_ConfigUC_ToAddModList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_DRX_Config_r17(Decoder& dec, SL_DRX_Config_r17& value)
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
        if (Decode_SL_DRX_ConfigGC_BC_r17(dec, value.sl_DRX_ConfigGC_BC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DRX_ConfigUC_ToReleaseList_r17_count)) { goto fail; }
if (value.sl_DRX_ConfigUC_ToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DRX_ConfigUC_ToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DRX_ConfigUC_ToReleaseList_r17_count > 0u) {
    value.sl_DRX_ConfigUC_ToReleaseList_r17_items = (SL_DestinationIndex_r16*)std::malloc((std::size_t)value.sl_DRX_ConfigUC_ToReleaseList_r17_count * sizeof(SL_DestinationIndex_r16));
    if (value.sl_DRX_ConfigUC_ToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DRX_ConfigUC_ToReleaseList_r17_items, 0, (std::size_t)value.sl_DRX_ConfigUC_ToReleaseList_r17_count * sizeof(SL_DestinationIndex_r16));
}
for (std::uint32_t i = 0; i < value.sl_DRX_ConfigUC_ToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.sl_DRX_ConfigUC_ToReleaseList_r17_items[i] = (SL_DestinationIndex_r16)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DRX_ConfigUC_ToAddModList_r17_count)) { goto fail; }
if (value.sl_DRX_ConfigUC_ToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DRX_ConfigUC_ToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DRX_ConfigUC_ToAddModList_r17_count > 0u) {
    value.sl_DRX_ConfigUC_ToAddModList_r17_items = (SL_DRX_ConfigUC_Info_r17*)std::malloc((std::size_t)value.sl_DRX_ConfigUC_ToAddModList_r17_count * sizeof(SL_DRX_ConfigUC_Info_r17));
    if (value.sl_DRX_ConfigUC_ToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DRX_ConfigUC_ToAddModList_r17_items, 0, (std::size_t)value.sl_DRX_ConfigUC_ToAddModList_r17_count * sizeof(SL_DRX_ConfigUC_Info_r17));
}
for (std::uint32_t i = 0; i < value.sl_DRX_ConfigUC_ToAddModList_r17_count; ++i) {
    if (Decode_SL_DRX_ConfigUC_Info_r17(dec, value.sl_DRX_ConfigUC_ToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DRX_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DRX_Config_r17(SL_DRX_Config_r17& value)
{
    if (value.has_sl_DRX_ConfigGC_BC_r17) {
        Free_SL_DRX_ConfigGC_BC_r17(value.sl_DRX_ConfigGC_BC_r17);
    }
    if (value.has_sl_DRX_ConfigUC_ToReleaseList_r17) {
        if (value.sl_DRX_ConfigUC_ToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DRX_ConfigUC_ToReleaseList_r17_count; ++i) {
            }
            std::free(value.sl_DRX_ConfigUC_ToReleaseList_r17_items);
            value.sl_DRX_ConfigUC_ToReleaseList_r17_items = nullptr;
        }
        value.sl_DRX_ConfigUC_ToReleaseList_r17_count = 0;
    }
    if (value.has_sl_DRX_ConfigUC_ToAddModList_r17) {
        if (value.sl_DRX_ConfigUC_ToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DRX_ConfigUC_ToAddModList_r17_count; ++i) {
                Free_SL_DRX_ConfigUC_Info_r17(value.sl_DRX_ConfigUC_ToAddModList_r17_items[i]);
            }
            std::free(value.sl_DRX_ConfigUC_ToAddModList_r17_items);
            value.sl_DRX_ConfigUC_ToAddModList_r17_items = nullptr;
        }
        value.sl_DRX_ConfigUC_ToAddModList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PHY_MAC_RLC_Config_v1700：ASN.1 SL-PHY-MAC-RLC-Config-v1700；源文件第 22122 行；SEQUENCE。
// Encode_SL_PHY_MAC_RLC_Config_v1700 只读不分配；Decode_SL_PHY_MAC_RLC_Config_v1700 可能 malloc（失败时内部已释放并清零）；Free_SL_PHY_MAC_RLC_Config_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PHY_MAC_RLC_Config_v1700(Encoder& enc, const SL_PHY_MAC_RLC_Config_v1700& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_DRX_Config_r17);
    enc.WriteBit(value.has_sl_RLC_ChannelToReleaseList_r17);
    enc.WriteBit(value.has_sl_RLC_ChannelToAddModList_r17);
    if (value.has_sl_DRX_Config_r17) {
        Encode_SL_DRX_Config_r17(enc, value.sl_DRX_Config_r17);
    }
    if (value.has_sl_RLC_ChannelToReleaseList_r17) {
enc.WriteConstrainedLength(value.sl_RLC_ChannelToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_ChannelToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RLC_ChannelToReleaseList_r17_items[i]), 1, 512);
}
    }
    if (value.has_sl_RLC_ChannelToAddModList_r17) {
enc.WriteConstrainedLength(value.sl_RLC_ChannelToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_ChannelToAddModList_r17_count; ++i) {
    Encode_SL_RLC_ChannelConfig_r17(enc, value.sl_RLC_ChannelToAddModList_r17_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_PHY_MAC_RLC_Config_v1700(Decoder& dec, SL_PHY_MAC_RLC_Config_v1700& value)
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
        if (Decode_SL_DRX_Config_r17(dec, value.sl_DRX_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_ChannelToReleaseList_r17_count)) { goto fail; }
if (value.sl_RLC_ChannelToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_ChannelToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_ChannelToReleaseList_r17_count > 0u) {
    value.sl_RLC_ChannelToReleaseList_r17_items = (SL_RLC_ChannelID_r17*)std::malloc((std::size_t)value.sl_RLC_ChannelToReleaseList_r17_count * sizeof(SL_RLC_ChannelID_r17));
    if (value.sl_RLC_ChannelToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_ChannelToReleaseList_r17_items, 0, (std::size_t)value.sl_RLC_ChannelToReleaseList_r17_count * sizeof(SL_RLC_ChannelID_r17));
}
for (std::uint32_t i = 0; i < value.sl_RLC_ChannelToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
    value.sl_RLC_ChannelToReleaseList_r17_items[i] = (SL_RLC_ChannelID_r17)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_ChannelToAddModList_r17_count)) { goto fail; }
if (value.sl_RLC_ChannelToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_ChannelToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_ChannelToAddModList_r17_count > 0u) {
    value.sl_RLC_ChannelToAddModList_r17_items = (SL_RLC_ChannelConfig_r17*)std::malloc((std::size_t)value.sl_RLC_ChannelToAddModList_r17_count * sizeof(SL_RLC_ChannelConfig_r17));
    if (value.sl_RLC_ChannelToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_ChannelToAddModList_r17_items, 0, (std::size_t)value.sl_RLC_ChannelToAddModList_r17_count * sizeof(SL_RLC_ChannelConfig_r17));
}
for (std::uint32_t i = 0; i < value.sl_RLC_ChannelToAddModList_r17_count; ++i) {
    if (Decode_SL_RLC_ChannelConfig_r17(dec, value.sl_RLC_ChannelToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_PHY_MAC_RLC_Config_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PHY_MAC_RLC_Config_v1700(SL_PHY_MAC_RLC_Config_v1700& value)
{
    if (value.has_sl_DRX_Config_r17) {
        Free_SL_DRX_Config_r17(value.sl_DRX_Config_r17);
    }
    if (value.has_sl_RLC_ChannelToReleaseList_r17) {
        if (value.sl_RLC_ChannelToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_ChannelToReleaseList_r17_count; ++i) {
            }
            std::free(value.sl_RLC_ChannelToReleaseList_r17_items);
            value.sl_RLC_ChannelToReleaseList_r17_items = nullptr;
        }
        value.sl_RLC_ChannelToReleaseList_r17_count = 0;
    }
    if (value.has_sl_RLC_ChannelToAddModList_r17) {
        if (value.sl_RLC_ChannelToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_ChannelToAddModList_r17_count; ++i) {
                Free_SL_RLC_ChannelConfig_r17(value.sl_RLC_ChannelToAddModList_r17_items[i]);
            }
            std::free(value.sl_RLC_ChannelToAddModList_r17_items);
            value.sl_RLC_ChannelToAddModList_r17_items = nullptr;
        }
        value.sl_RLC_ChannelToAddModList_r17_count = 0;
    }
    if (value.has_extGroup1) {
        Free_SL_PHY_MAC_RLC_Config_v1700_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_PHY_MAC_RLC_Config_v1700：ASN.1 SetupRelease<SL-PHY-MAC-RLC-Config-v1700>；源文件第 22098 行；CHOICE。
// Encode_SetupRelease_SL_PHY_MAC_RLC_Config_v1700 只读不分配；Decode_SetupRelease_SL_PHY_MAC_RLC_Config_v1700 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_PHY_MAC_RLC_Config_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(Encoder& enc, const SetupRelease_SL_PHY_MAC_RLC_Config_v1700& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_setup:
        Encode_SL_PHY_MAC_RLC_Config_v1700(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(Decoder& dec, SetupRelease_SL_PHY_MAC_RLC_Config_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_setup: {
        if (Decode_SL_PHY_MAC_RLC_Config_v1700(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(SetupRelease_SL_PHY_MAC_RLC_Config_v1700& value)
{
    switch (value.tag) {
    case SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_release:
        break;
    case SetupRelease_SL_PHY_MAC_RLC_Config_v1700_Tag_setup:
        Free_SL_PHY_MAC_RLC_Config_v1700(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RelayUE_Config_r17：ASN.1 SL-RelayUE-Config-r17；源文件第 22879 行；SEQUENCE。
// Encode_SL_RelayUE_Config_r17 只读不分配；Decode_SL_RelayUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_RelayUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RelayUE_Config_r17(Encoder& enc, const SL_RelayUE_Config_r17& value)
{
    enc.WriteBit(value.has_threshHighRelay_r17);
    enc.WriteBit(value.has_threshLowRelay_r17);
    enc.WriteBit(value.has_hystMaxRelay_r17);
    enc.WriteBit(value.has_hystMinRelay_r17);
    if (value.has_threshHighRelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.threshHighRelay_r17), 0, 127);
    }
    if (value.has_threshLowRelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.threshLowRelay_r17), 0, 127);
    }
    if (value.has_hystMaxRelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hystMaxRelay_r17), 0, 30);
    }
    if (value.has_hystMinRelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hystMinRelay_r17), 0, 30);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RelayUE_Config_r17(Decoder& dec, SL_RelayUE_Config_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.threshHighRelay_r17 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.threshLowRelay_r17 = (RSRP_Range)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hystMaxRelay_r17 = (Hysteresis)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hystMinRelay_r17 = (Hysteresis)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RelayUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RelayUE_Config_r17(SL_RelayUE_Config_r17& value)
{
    if (value.has_threshHighRelay_r17) {
    }
    if (value.has_threshLowRelay_r17) {
    }
    if (value.has_hystMaxRelay_r17) {
    }
    if (value.has_hystMinRelay_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_RelayUE_Config_r17：ASN.1 SetupRelease<SL-RelayUE-Config-r17>；源文件第 22141 行；CHOICE。
// Encode_SetupRelease_SL_RelayUE_Config_r17 只读不分配；Decode_SetupRelease_SL_RelayUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_RelayUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_RelayUE_Config_r17(Encoder& enc, const SetupRelease_SL_RelayUE_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_RelayUE_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_RelayUE_Config_r17_Tag_setup:
        Encode_SL_RelayUE_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_RelayUE_Config_r17(Decoder& dec, SetupRelease_SL_RelayUE_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_RelayUE_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_RelayUE_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_RelayUE_Config_r17_Tag_setup: {
        if (Decode_SL_RelayUE_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_RelayUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_RelayUE_Config_r17(SetupRelease_SL_RelayUE_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_RelayUE_Config_r17_Tag_release:
        break;
    case SetupRelease_SL_RelayUE_Config_r17_Tag_setup:
        Free_SL_RelayUE_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ReselectionConfig_r17：ASN.1 SL-ReselectionConfig-r17；源文件第 22904 行；SEQUENCE。
// Encode_SL_ReselectionConfig_r17 只读不分配；Decode_SL_ReselectionConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_ReselectionConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ReselectionConfig_r17(Encoder& enc, const SL_ReselectionConfig_r17& value)
{
    enc.WriteBit(value.has_sl_RSRP_Thresh_r17);
    enc.WriteBit(value.has_sl_FilterCoefficientRSRP_r17);
    enc.WriteBit(value.has_sl_HystMin_r17);
    if (value.has_sl_RSRP_Thresh_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_RSRP_Thresh_r17), 0, 13);
    }
    if (value.has_sl_FilterCoefficientRSRP_r17) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.sl_FilterCoefficientRSRP_r17);
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
    if (value.has_sl_HystMin_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_HystMin_r17), 0, 30);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ReselectionConfig_r17(Decoder& dec, SL_ReselectionConfig_r17& value)
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
        value.sl_RSRP_Thresh_r17 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_1) {
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
        value.sl_FilterCoefficientRSRP_r17 = (FilterCoefficient)enum_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sl_HystMin_r17 = (Hysteresis)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ReselectionConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ReselectionConfig_r17(SL_ReselectionConfig_r17& value)
{
    if (value.has_sl_RSRP_Thresh_r17) {
    }
    if (value.has_sl_FilterCoefficientRSRP_r17) {
    }
    if (value.has_sl_HystMin_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RemoteUE_Config_r17：ASN.1 SL-RemoteUE-Config-r17；源文件第 22898 行；SEQUENCE。
// Encode_SL_RemoteUE_Config_r17 只读不分配；Decode_SL_RemoteUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_RemoteUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RemoteUE_Config_r17(Encoder& enc, const SL_RemoteUE_Config_r17& value)
{
    enc.WriteBit(value.has_threshHighRemote_r17);
    enc.WriteBit(value.has_hystMaxRemote_r17);
    enc.WriteBit(value.has_sl_ReselectionConfig_r17);
    if (value.has_threshHighRemote_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.threshHighRemote_r17), 0, 127);
    }
    if (value.has_hystMaxRemote_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hystMaxRemote_r17), 0, 30);
    }
    if (value.has_sl_ReselectionConfig_r17) {
        Encode_SL_ReselectionConfig_r17(enc, value.sl_ReselectionConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RemoteUE_Config_r17(Decoder& dec, SL_RemoteUE_Config_r17& value)
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
        value.threshHighRemote_r17 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hystMaxRemote_r17 = (Hysteresis)tmp_value;
    }
    if (present_2) {
        if (Decode_SL_ReselectionConfig_r17(dec, value.sl_ReselectionConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RemoteUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RemoteUE_Config_r17(SL_RemoteUE_Config_r17& value)
{
    if (value.has_threshHighRemote_r17) {
    }
    if (value.has_hystMaxRemote_r17) {
    }
    if (value.has_sl_ReselectionConfig_r17) {
        Free_SL_ReselectionConfig_r17(value.sl_ReselectionConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_RemoteUE_Config_r17：ASN.1 SetupRelease<SL-RemoteUE-Config-r17>；源文件第 22142 行；CHOICE。
// Encode_SetupRelease_SL_RemoteUE_Config_r17 只读不分配；Decode_SetupRelease_SL_RemoteUE_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_RemoteUE_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_RemoteUE_Config_r17(Encoder& enc, const SetupRelease_SL_RemoteUE_Config_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_RemoteUE_Config_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_RemoteUE_Config_r17_Tag_setup:
        Encode_SL_RemoteUE_Config_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_RemoteUE_Config_r17(Decoder& dec, SetupRelease_SL_RemoteUE_Config_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_RemoteUE_Config_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_RemoteUE_Config_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_RemoteUE_Config_r17_Tag_setup: {
        if (Decode_SL_RemoteUE_Config_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_RemoteUE_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_RemoteUE_Config_r17(SetupRelease_SL_RemoteUE_Config_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_RemoteUE_Config_r17_Tag_release:
        break;
    case SetupRelease_SL_RemoteUE_Config_r17_Tag_setup:
        Free_SL_RemoteUE_Config_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DiscConfig_r17：ASN.1 SL-DiscConfig-r17；源文件第 22140 行；SEQUENCE。
// Encode_SL_DiscConfig_r17 只读不分配；Decode_SL_DiscConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_DiscConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DiscConfig_r17(Encoder& enc, const SL_DiscConfig_r17& value)
{
    enc.WriteBit(value.has_sl_RelayUE_Config_r17);
    enc.WriteBit(value.has_sl_RemoteUE_Config_r17);
    if (value.has_sl_RelayUE_Config_r17) {
        Encode_SetupRelease_SL_RelayUE_Config_r17(enc, value.sl_RelayUE_Config_r17);
    }
    if (value.has_sl_RemoteUE_Config_r17) {
        Encode_SetupRelease_SL_RemoteUE_Config_r17(enc, value.sl_RemoteUE_Config_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DiscConfig_r17(Decoder& dec, SL_DiscConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_RelayUE_Config_r17(dec, value.sl_RelayUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_RemoteUE_Config_r17(dec, value.sl_RemoteUE_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DiscConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DiscConfig_r17(SL_DiscConfig_r17& value)
{
    if (value.has_sl_RelayUE_Config_r17) {
        Free_SetupRelease_SL_RelayUE_Config_r17(value.sl_RelayUE_Config_r17);
    }
    if (value.has_sl_RemoteUE_Config_r17) {
        Free_SetupRelease_SL_RemoteUE_Config_r17(value.sl_RemoteUE_Config_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_DiscConfig_r17：ASN.1 SetupRelease<SL-DiscConfig-r17>；源文件第 22099 行；CHOICE。
// Encode_SetupRelease_SL_DiscConfig_r17 只读不分配；Decode_SetupRelease_SL_DiscConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_DiscConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_DiscConfig_r17(Encoder& enc, const SetupRelease_SL_DiscConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_DiscConfig_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_DiscConfig_r17_Tag_setup:
        Encode_SL_DiscConfig_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_DiscConfig_r17(Decoder& dec, SetupRelease_SL_DiscConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_DiscConfig_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_DiscConfig_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_DiscConfig_r17_Tag_setup: {
        if (Decode_SL_DiscConfig_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_DiscConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_DiscConfig_r17(SetupRelease_SL_DiscConfig_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SL_DiscConfig_r17_Tag_release:
        break;
    case SetupRelease_SL_DiscConfig_r17_Tag_setup:
        Free_SL_DiscConfig_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfigDedicatedNR_r16_ExtGroup1：ASN.1 SL_ConfigDedicatedNR_r16_ExtGroup1；源文件第 22097 行；扩展添加组 [[ ]]。
// Encode_SL_ConfigDedicatedNR_r16_ExtGroup1 只读不分配；Decode_SL_ConfigDedicatedNR_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfigDedicatedNR_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfigDedicatedNR_r16_ExtGroup1(Encoder& enc, const SL_ConfigDedicatedNR_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_PHY_MAC_RLC_Config_v1700);
    enc.WriteBit(value.has_sl_DiscConfig_r17);
    if (value.has_sl_PHY_MAC_RLC_Config_v1700) {
        Encode_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(enc, value.sl_PHY_MAC_RLC_Config_v1700);
    }
    if (value.has_sl_DiscConfig_r17) {
        Encode_SetupRelease_SL_DiscConfig_r17(enc, value.sl_DiscConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfigDedicatedNR_r16_ExtGroup1(Decoder& dec, SL_ConfigDedicatedNR_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(dec, value.sl_PHY_MAC_RLC_Config_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_DiscConfig_r17(dec, value.sl_DiscConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfigDedicatedNR_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfigDedicatedNR_r16_ExtGroup1(SL_ConfigDedicatedNR_r16_ExtGroup1& value)
{
    if (value.has_sl_PHY_MAC_RLC_Config_v1700) {
        Free_SetupRelease_SL_PHY_MAC_RLC_Config_v1700(value.sl_PHY_MAC_RLC_Config_v1700);
    }
    if (value.has_sl_DiscConfig_r17) {
        Free_SetupRelease_SL_DiscConfig_r17(value.sl_DiscConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RelayUE_ConfigU2U_r18：ASN.1 SL-RelayUE-ConfigU2U-r18；源文件第 22889 行；SEQUENCE。
// Encode_SL_RelayUE_ConfigU2U_r18 只读不分配；Decode_SL_RelayUE_ConfigU2U_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_RelayUE_ConfigU2U_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RelayUE_ConfigU2U_r18(Encoder& enc, const SL_RelayUE_ConfigU2U_r18& value)
{
    enc.WriteBit(value.has_sl_RSRP_Thresh_DiscConfig_r18);
    enc.WriteBit(value.has_sd_RSRP_ThreshDiscConfig_r18);
    enc.WriteBit(value.has_sd_hystMaxRelay_r18);
    if (value.has_sl_RSRP_Thresh_DiscConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_RSRP_Thresh_DiscConfig_r18), 0, 13);
    }
    if (value.has_sd_RSRP_ThreshDiscConfig_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sd_RSRP_ThreshDiscConfig_r18), 0, 13);
    }
    if (value.has_sd_hystMaxRelay_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sd_hystMaxRelay_r18), 0, 30);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RelayUE_ConfigU2U_r18(Decoder& dec, SL_RelayUE_ConfigU2U_r18& value)
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
        value.sl_RSRP_Thresh_DiscConfig_r18 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.sd_RSRP_ThreshDiscConfig_r18 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sd_hystMaxRelay_r18 = (Hysteresis)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RelayUE_ConfigU2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RelayUE_ConfigU2U_r18(SL_RelayUE_ConfigU2U_r18& value)
{
    if (value.has_sl_RSRP_Thresh_DiscConfig_r18) {
    }
    if (value.has_sd_RSRP_ThreshDiscConfig_r18) {
    }
    if (value.has_sd_hystMaxRelay_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_RelayUE_ConfigU2U_r18：ASN.1 SetupRelease<SL-RelayUE-ConfigU2U-r18>；源文件第 22146 行；CHOICE。
// Encode_SetupRelease_SL_RelayUE_ConfigU2U_r18 只读不分配；Decode_SetupRelease_SL_RelayUE_ConfigU2U_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_RelayUE_ConfigU2U_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_RelayUE_ConfigU2U_r18(Encoder& enc, const SetupRelease_SL_RelayUE_ConfigU2U_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_setup:
        Encode_SL_RelayUE_ConfigU2U_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_RelayUE_ConfigU2U_r18(Decoder& dec, SetupRelease_SL_RelayUE_ConfigU2U_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_setup: {
        if (Decode_SL_RelayUE_ConfigU2U_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_RelayUE_ConfigU2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_RelayUE_ConfigU2U_r18(SetupRelease_SL_RelayUE_ConfigU2U_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_release:
        break;
    case SetupRelease_SL_RelayUE_ConfigU2U_r18_Tag_setup:
        Free_SL_RelayUE_ConfigU2U_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RemoteUE_ConfigU2U_r18：ASN.1 SL-RemoteUE-ConfigU2U-r18；源文件第 22913 行；SEQUENCE。
// Encode_SL_RemoteUE_ConfigU2U_r18 只读不分配；Decode_SL_RemoteUE_ConfigU2U_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_RemoteUE_ConfigU2U_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RemoteUE_ConfigU2U_r18(Encoder& enc, const SL_RemoteUE_ConfigU2U_r18& value)
{
    enc.WriteBit(value.has_sl_RSRP_ThreshU2U_r18);
    enc.WriteBit(value.has_sl_FilterCoefficientU2U_r18);
    enc.WriteBit(value.has_sl_HystMinU2U_r18);
    enc.WriteBit(value.has_sd_RSRP_ThreshU2U_r18);
    enc.WriteBit(value.has_sd_FilterCoefficientU2U_r18);
    enc.WriteBit(value.has_sd_HystMinU2U_r18);
    if (value.has_sl_RSRP_ThreshU2U_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_RSRP_ThreshU2U_r18), 0, 13);
    }
    if (value.has_sl_FilterCoefficientU2U_r18) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.sl_FilterCoefficientU2U_r18);
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
    if (value.has_sl_HystMinU2U_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_HystMinU2U_r18), 0, 30);
    }
    if (value.has_sd_RSRP_ThreshU2U_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sd_RSRP_ThreshU2U_r18), 0, 13);
    }
    if (value.has_sd_FilterCoefficientU2U_r18) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.sd_FilterCoefficientU2U_r18);
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
    if (value.has_sd_HystMinU2U_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sd_HystMinU2U_r18), 0, 30);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RemoteUE_ConfigU2U_r18(Decoder& dec, SL_RemoteUE_ConfigU2U_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.sl_RSRP_ThreshU2U_r18 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_1) {
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
        value.sl_FilterCoefficientU2U_r18 = (FilterCoefficient)enum_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sl_HystMinU2U_r18 = (Hysteresis)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.sd_RSRP_ThreshU2U_r18 = (SL_RSRP_Range_r16)tmp_value;
    }
    if (present_4) {
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
        value.sd_FilterCoefficientU2U_r18 = (FilterCoefficient)enum_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sd_HystMinU2U_r18 = (Hysteresis)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RemoteUE_ConfigU2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RemoteUE_ConfigU2U_r18(SL_RemoteUE_ConfigU2U_r18& value)
{
    if (value.has_sl_RSRP_ThreshU2U_r18) {
    }
    if (value.has_sl_FilterCoefficientU2U_r18) {
    }
    if (value.has_sl_HystMinU2U_r18) {
    }
    if (value.has_sd_RSRP_ThreshU2U_r18) {
    }
    if (value.has_sd_FilterCoefficientU2U_r18) {
    }
    if (value.has_sd_HystMinU2U_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_RemoteUE_ConfigU2U_r18：ASN.1 SetupRelease<SL-RemoteUE-ConfigU2U-r18>；源文件第 22147 行；CHOICE。
// Encode_SetupRelease_SL_RemoteUE_ConfigU2U_r18 只读不分配；Decode_SetupRelease_SL_RemoteUE_ConfigU2U_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_RemoteUE_ConfigU2U_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_RemoteUE_ConfigU2U_r18(Encoder& enc, const SetupRelease_SL_RemoteUE_ConfigU2U_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_setup:
        Encode_SL_RemoteUE_ConfigU2U_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_RemoteUE_ConfigU2U_r18(Decoder& dec, SetupRelease_SL_RemoteUE_ConfigU2U_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_setup: {
        if (Decode_SL_RemoteUE_ConfigU2U_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_RemoteUE_ConfigU2U_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_RemoteUE_ConfigU2U_r18(SetupRelease_SL_RemoteUE_ConfigU2U_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_release:
        break;
    case SetupRelease_SL_RemoteUE_ConfigU2U_r18_Tag_setup:
        Free_SL_RemoteUE_ConfigU2U_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_DiscConfig_v1800：ASN.1 SL-DiscConfig-v1800；源文件第 22145 行；SEQUENCE。
// Encode_SL_DiscConfig_v1800 只读不分配；Decode_SL_DiscConfig_v1800 可能 malloc（失败时内部已释放并清零）；Free_SL_DiscConfig_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_DiscConfig_v1800(Encoder& enc, const SL_DiscConfig_v1800& value)
{
    enc.WriteBit(value.has_sl_RelayUE_ConfigU2U_r18);
    enc.WriteBit(value.has_sl_RemoteUE_ConfigU2U_r18);
    if (value.has_sl_RelayUE_ConfigU2U_r18) {
        Encode_SetupRelease_SL_RelayUE_ConfigU2U_r18(enc, value.sl_RelayUE_ConfigU2U_r18);
    }
    if (value.has_sl_RemoteUE_ConfigU2U_r18) {
        Encode_SetupRelease_SL_RemoteUE_ConfigU2U_r18(enc, value.sl_RemoteUE_ConfigU2U_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_DiscConfig_v1800(Decoder& dec, SL_DiscConfig_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SL_RelayUE_ConfigU2U_r18(dec, value.sl_RelayUE_ConfigU2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_RemoteUE_ConfigU2U_r18(dec, value.sl_RemoteUE_ConfigU2U_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_DiscConfig_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_DiscConfig_v1800(SL_DiscConfig_v1800& value)
{
    if (value.has_sl_RelayUE_ConfigU2U_r18) {
        Free_SetupRelease_SL_RelayUE_ConfigU2U_r18(value.sl_RelayUE_ConfigU2U_r18);
    }
    if (value.has_sl_RemoteUE_ConfigU2U_r18) {
        Free_SetupRelease_SL_RemoteUE_ConfigU2U_r18(value.sl_RemoteUE_ConfigU2U_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfigDedicatedNR_r16_ExtGroup2：ASN.1 SL_ConfigDedicatedNR_r16_ExtGroup2；源文件第 22101 行；扩展添加组 [[ ]]。
// Encode_SL_ConfigDedicatedNR_r16_ExtGroup2 只读不分配；Decode_SL_ConfigDedicatedNR_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfigDedicatedNR_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfigDedicatedNR_r16_ExtGroup2(Encoder& enc, const SL_ConfigDedicatedNR_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_DiscConfig_v1800);
    if (value.has_sl_DiscConfig_v1800) {
        Encode_SL_DiscConfig_v1800(enc, value.sl_DiscConfig_v1800);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfigDedicatedNR_r16_ExtGroup2(Decoder& dec, SL_ConfigDedicatedNR_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_DiscConfig_v1800(dec, value.sl_DiscConfig_v1800) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfigDedicatedNR_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfigDedicatedNR_r16_ExtGroup2(SL_ConfigDedicatedNR_r16_ExtGroup2& value)
{
    if (value.has_sl_DiscConfig_v1800) {
        Free_SL_DiscConfig_v1800(value.sl_DiscConfig_v1800);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ScheduledConfig_r16_ExtGroup1：ASN.1 SL_ScheduledConfig_r16_ExtGroup1；源文件第 23253 行；扩展添加组 [[ ]]。
// Encode_SL_ScheduledConfig_r16_ExtGroup1 只读不分配；Decode_SL_ScheduledConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_ScheduledConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ScheduledConfig_r16_ExtGroup1(Encoder& enc, const SL_ScheduledConfig_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_DCI_ToSL_Trans_r16);
    if (value.has_sl_DCI_ToSL_Trans_r16) {
enc.WriteConstrainedLength(value.sl_DCI_ToSL_Trans_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_DCI_ToSL_Trans_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_DCI_ToSL_Trans_r16_items[i]), 1, 32);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_ScheduledConfig_r16_ExtGroup1(Decoder& dec, SL_ScheduledConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_DCI_ToSL_Trans_r16_count)) { goto fail; }
if (value.sl_DCI_ToSL_Trans_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_DCI_ToSL_Trans_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_DCI_ToSL_Trans_r16_count > 0u) {
    value.sl_DCI_ToSL_Trans_r16_items = (int64_t*)std::malloc((std::size_t)value.sl_DCI_ToSL_Trans_r16_count * sizeof(int64_t));
    if (value.sl_DCI_ToSL_Trans_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_DCI_ToSL_Trans_r16_items, 0, (std::size_t)value.sl_DCI_ToSL_Trans_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_DCI_ToSL_Trans_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.sl_DCI_ToSL_Trans_r16_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ScheduledConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ScheduledConfig_r16_ExtGroup1(SL_ScheduledConfig_r16_ExtGroup1& value)
{
    if (value.has_sl_DCI_ToSL_Trans_r16) {
        if (value.sl_DCI_ToSL_Trans_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_DCI_ToSL_Trans_r16_count; ++i) {
            }
            std::free(value.sl_DCI_ToSL_Trans_r16_items);
            value.sl_DCI_ToSL_Trans_r16_items = nullptr;
        }
        value.sl_DCI_ToSL_Trans_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18：ASN.1 SL-ConfiguredGrantConfigDedicated-SL-PRS-RP-List-r18；源文件第 23273 行；SEQUENCE。
// Encode_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18 只读不分配；Decode_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(Encoder& enc, const SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18& value)
{
    enc.WriteBit(value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18);
    enc.WriteBit(value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18);
    if (value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18) {
enc.WriteConstrainedLength(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items[i]), 0, 7);
}
    }
    if (value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18) {
enc.WriteConstrainedLength(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count; ++i) {
    Encode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(enc, value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(Decoder& dec, SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count)) { goto fail; }
if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count > 0u) {
    value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items = (SL_ConfigIndexCG_r16*)std::malloc((std::size_t)value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count * sizeof(SL_ConfigIndexCG_r16));
    if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items, 0, (std::size_t)value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count * sizeof(SL_ConfigIndexCG_r16));
}
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items[i] = (SL_ConfigIndexCG_r16)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count)) { goto fail; }
if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count > 0u) {
    value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items = (SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18*)std::malloc((std::size_t)value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count * sizeof(SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18));
    if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items, 0, (std::size_t)value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count * sizeof(SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count; ++i) {
    if (Decode_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(dec, value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18& value)
{
    if (value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18) {
        if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count; ++i) {
            }
            std::free(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items);
            value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_items = nullptr;
        }
        value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToReleaseList_r18_count = 0;
    }
    if (value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18) {
        if (value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count; ++i) {
                Free_SL_ConfiguredGrantConfigDedicatedSL_PRS_RP_r18(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items[i]);
            }
            std::free(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items);
            value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_items = nullptr;
        }
        value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RPToAddModList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ScheduledConfig_r16_ExtGroup2：ASN.1 SL_ScheduledConfig_r16_ExtGroup2；源文件第 23256 行；扩展添加组 [[ ]]。
// Encode_SL_ScheduledConfig_r16_ExtGroup2 只读不分配；Decode_SL_ScheduledConfig_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SL_ScheduledConfig_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ScheduledConfig_r16_ExtGroup2(Encoder& enc, const SL_ScheduledConfig_r16_ExtGroup2& value)
{
    enc.WriteBit(value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18);
    if (value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18) {
        Encode_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(enc, value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_ScheduledConfig_r16_ExtGroup2(Decoder& dec, SL_ScheduledConfig_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(dec, value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ScheduledConfig_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ScheduledConfig_r16_ExtGroup2(SL_ScheduledConfig_r16_ExtGroup2& value)
{
    if (value.has_sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18) {
        Free_SL_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18(value.sl_ConfiguredGrantConfigDedicated_SL_PRS_RP_List_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BSR_Config：ASN.1 BSR-Config；源文件第 4495 行；SEQUENCE。
// Encode_BSR_Config 只读不分配；Decode_BSR_Config 可能 malloc（失败时内部已释放并清零）；Free_BSR_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BSR_Config(Encoder& enc, const BSR_Config& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_logicalChannelSR_DelayTimer);
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicBSR_Timer), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.retxBSR_Timer), 0, 15);
    if (value.has_logicalChannelSR_DelayTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelSR_DelayTimer), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_BSR_Config(Decoder& dec, BSR_Config& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.periodicBSR_Timer = (BSR_Config_PeriodicBSR_Timer)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.retxBSR_Timer = (BSR_Config_RetxBSR_Timer)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.logicalChannelSR_DelayTimer = (BSR_Config_LogicalChannelSR_DelayTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BSR_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BSR_Config(BSR_Config& value)
{
    if (value.has_logicalChannelSR_DelayTimer) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MAC_MainConfigSL_r16：ASN.1 MAC-MainConfigSL-r16；源文件第 23261 行；SEQUENCE。
// Encode_MAC_MainConfigSL_r16 只读不分配；Decode_MAC_MainConfigSL_r16 可能 malloc（失败时内部已释放并清零）；Free_MAC_MainConfigSL_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MAC_MainConfigSL_r16(Encoder& enc, const MAC_MainConfigSL_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_BSR_Config_r16);
    enc.WriteBit(value.has_ul_PrioritizationThres_r16);
    enc.WriteBit(value.has_sl_PrioritizationThres_r16);
    if (value.has_sl_BSR_Config_r16) {
        Encode_BSR_Config(enc, value.sl_BSR_Config_r16);
    }
    if (value.has_ul_PrioritizationThres_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_PrioritizationThres_r16), 1, 16);
    }
    if (value.has_sl_PrioritizationThres_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PrioritizationThres_r16), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_MainConfigSL_r16(Decoder& dec, MAC_MainConfigSL_r16& value)
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
        if (Decode_BSR_Config(dec, value.sl_BSR_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.ul_PrioritizationThres_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PrioritizationThres_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_MainConfigSL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_MainConfigSL_r16(MAC_MainConfigSL_r16& value)
{
    if (value.has_sl_BSR_Config_r16) {
        Free_BSR_Config(value.sl_BSR_Config_r16);
    }
    if (value.has_ul_PrioritizationThres_r16) {
    }
    if (value.has_sl_PrioritizationThres_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfiguredGrantConfigList_r16：ASN.1 SL-ConfiguredGrantConfigList-r16；源文件第 23268 行；SEQUENCE。
// Encode_SL_ConfiguredGrantConfigList_r16 只读不分配；Decode_SL_ConfiguredGrantConfigList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfiguredGrantConfigList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfiguredGrantConfigList_r16(Encoder& enc, const SL_ConfiguredGrantConfigList_r16& value)
{
    enc.WriteBit(value.has_sl_ConfiguredGrantConfigToReleaseList_r16);
    enc.WriteBit(value.has_sl_ConfiguredGrantConfigToAddModList_r16);
    if (value.has_sl_ConfiguredGrantConfigToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_ConfiguredGrantConfigToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_ConfiguredGrantConfigToReleaseList_r16_items[i]), 0, 7);
}
    }
    if (value.has_sl_ConfiguredGrantConfigToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_ConfiguredGrantConfigToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigToAddModList_r16_count; ++i) {
    Encode_SL_ConfiguredGrantConfig_r16(enc, value.sl_ConfiguredGrantConfigToAddModList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfiguredGrantConfigList_r16(Decoder& dec, SL_ConfiguredGrantConfigList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ConfiguredGrantConfigToReleaseList_r16_count)) { goto fail; }
if (value.sl_ConfiguredGrantConfigToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ConfiguredGrantConfigToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ConfiguredGrantConfigToReleaseList_r16_count > 0u) {
    value.sl_ConfiguredGrantConfigToReleaseList_r16_items = (SL_ConfigIndexCG_r16*)std::malloc((std::size_t)value.sl_ConfiguredGrantConfigToReleaseList_r16_count * sizeof(SL_ConfigIndexCG_r16));
    if (value.sl_ConfiguredGrantConfigToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ConfiguredGrantConfigToReleaseList_r16_items, 0, (std::size_t)value.sl_ConfiguredGrantConfigToReleaseList_r16_count * sizeof(SL_ConfigIndexCG_r16));
}
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.sl_ConfiguredGrantConfigToReleaseList_r16_items[i] = (SL_ConfigIndexCG_r16)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_ConfiguredGrantConfigToAddModList_r16_count)) { goto fail; }
if (value.sl_ConfiguredGrantConfigToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_ConfiguredGrantConfigToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_ConfiguredGrantConfigToAddModList_r16_count > 0u) {
    value.sl_ConfiguredGrantConfigToAddModList_r16_items = (SL_ConfiguredGrantConfig_r16*)std::malloc((std::size_t)value.sl_ConfiguredGrantConfigToAddModList_r16_count * sizeof(SL_ConfiguredGrantConfig_r16));
    if (value.sl_ConfiguredGrantConfigToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_ConfiguredGrantConfigToAddModList_r16_items, 0, (std::size_t)value.sl_ConfiguredGrantConfigToAddModList_r16_count * sizeof(SL_ConfiguredGrantConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigToAddModList_r16_count; ++i) {
    if (Decode_SL_ConfiguredGrantConfig_r16(dec, value.sl_ConfiguredGrantConfigToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfiguredGrantConfigList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfiguredGrantConfigList_r16(SL_ConfiguredGrantConfigList_r16& value)
{
    if (value.has_sl_ConfiguredGrantConfigToReleaseList_r16) {
        if (value.sl_ConfiguredGrantConfigToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_ConfiguredGrantConfigToReleaseList_r16_items);
            value.sl_ConfiguredGrantConfigToReleaseList_r16_items = nullptr;
        }
        value.sl_ConfiguredGrantConfigToReleaseList_r16_count = 0;
    }
    if (value.has_sl_ConfiguredGrantConfigToAddModList_r16) {
        if (value.sl_ConfiguredGrantConfigToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_ConfiguredGrantConfigToAddModList_r16_count; ++i) {
                Free_SL_ConfiguredGrantConfig_r16(value.sl_ConfiguredGrantConfigToAddModList_r16_items[i]);
            }
            std::free(value.sl_ConfiguredGrantConfigToAddModList_r16_items);
            value.sl_ConfiguredGrantConfigToAddModList_r16_items = nullptr;
        }
        value.sl_ConfiguredGrantConfigToAddModList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ScheduledConfig_r16：ASN.1 SL-ScheduledConfig-r16；源文件第 23246 行；SEQUENCE。
// Encode_SL_ScheduledConfig_r16 只读不分配；Decode_SL_ScheduledConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ScheduledConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ScheduledConfig_r16(Encoder& enc, const SL_ScheduledConfig_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mac_MainConfigSL_r16);
    enc.WriteBit(value.has_sl_CS_RNTI_r16);
    enc.WriteBit(value.has_sl_PSFCH_ToPUCCH_r16);
    enc.WriteBit(value.has_sl_ConfiguredGrantConfigList_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RNTI_r16), 0, 65535);
    if (value.has_mac_MainConfigSL_r16) {
        Encode_MAC_MainConfigSL_r16(enc, value.mac_MainConfigSL_r16);
    }
    if (value.has_sl_CS_RNTI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CS_RNTI_r16), 0, 65535);
    }
    if (value.has_sl_PSFCH_ToPUCCH_r16) {
enc.WriteConstrainedLength(value.sl_PSFCH_ToPUCCH_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_PSFCH_ToPUCCH_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_PSFCH_ToPUCCH_r16_items[i]), 0, 15);
}
    }
    if (value.has_sl_ConfiguredGrantConfigList_r16) {
        Encode_SL_ConfiguredGrantConfigList_r16(enc, value.sl_ConfiguredGrantConfigList_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_ScheduledConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_ScheduledConfig_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_ScheduledConfig_r16(Decoder& dec, SL_ScheduledConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sl_RNTI_r16 = (RNTI_Value)tmp_value;
    }
    if (present_0) {
        if (Decode_MAC_MainConfigSL_r16(dec, value.mac_MainConfigSL_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sl_CS_RNTI_r16 = (RNTI_Value)tmp_value;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_PSFCH_ToPUCCH_r16_count)) { goto fail; }
if (value.sl_PSFCH_ToPUCCH_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_PSFCH_ToPUCCH_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_PSFCH_ToPUCCH_r16_count > 0u) {
    value.sl_PSFCH_ToPUCCH_r16_items = (int64_t*)std::malloc((std::size_t)value.sl_PSFCH_ToPUCCH_r16_count * sizeof(int64_t));
    if (value.sl_PSFCH_ToPUCCH_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_PSFCH_ToPUCCH_r16_items, 0, (std::size_t)value.sl_PSFCH_ToPUCCH_r16_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.sl_PSFCH_ToPUCCH_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
    value.sl_PSFCH_ToPUCCH_r16_items[i] = (int64_t)tmp_value;
}
    }
    if (present_3) {
        if (Decode_SL_ConfiguredGrantConfigList_r16(dec, value.sl_ConfiguredGrantConfigList_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SL_ScheduledConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_ScheduledConfig_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SL_ScheduledConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ScheduledConfig_r16(SL_ScheduledConfig_r16& value)
{
    if (value.has_mac_MainConfigSL_r16) {
        Free_MAC_MainConfigSL_r16(value.mac_MainConfigSL_r16);
    }
    if (value.has_sl_CS_RNTI_r16) {
    }
    if (value.has_sl_PSFCH_ToPUCCH_r16) {
        if (value.sl_PSFCH_ToPUCCH_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_PSFCH_ToPUCCH_r16_count; ++i) {
            }
            std::free(value.sl_PSFCH_ToPUCCH_r16_items);
            value.sl_PSFCH_ToPUCCH_r16_items = nullptr;
        }
        value.sl_PSFCH_ToPUCCH_r16_count = 0;
    }
    if (value.has_sl_ConfiguredGrantConfigList_r16) {
        Free_SL_ConfiguredGrantConfigList_r16(value.sl_ConfiguredGrantConfigList_r16);
    }
    if (value.has_extGroup1) {
        Free_SL_ScheduledConfig_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_ScheduledConfig_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_ScheduledConfig_r16：ASN.1 SetupRelease<SL-ScheduledConfig-r16>；源文件第 22109 行；CHOICE。
// Encode_SetupRelease_SL_ScheduledConfig_r16 只读不分配；Decode_SetupRelease_SL_ScheduledConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_ScheduledConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_ScheduledConfig_r16(Encoder& enc, const SetupRelease_SL_ScheduledConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_ScheduledConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_ScheduledConfig_r16_Tag_setup:
        Encode_SL_ScheduledConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_ScheduledConfig_r16(Decoder& dec, SetupRelease_SL_ScheduledConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_ScheduledConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_ScheduledConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_ScheduledConfig_r16_Tag_setup: {
        if (Decode_SL_ScheduledConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_ScheduledConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_ScheduledConfig_r16(SetupRelease_SL_ScheduledConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_ScheduledConfig_r16_Tag_release:
        break;
    case SetupRelease_SL_ScheduledConfig_r16_Tag_setup:
        Free_SL_ScheduledConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_CommonTxConfigList_r16：ASN.1 SL-CBR-CommonTxConfigList-r16；源文件第 22052 行；SEQUENCE。
// Encode_SL_CBR_CommonTxConfigList_r16 只读不分配；Decode_SL_CBR_CommonTxConfigList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_CommonTxConfigList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_CommonTxConfigList_r16(Encoder& enc, const SL_CBR_CommonTxConfigList_r16& value)
{
    enc.WriteBit(value.has_sl_CBR_RangeConfigList_r16);
    enc.WriteBit(value.has_sl_CBR_PSSCH_TxConfigList_r16);
    if (value.has_sl_CBR_RangeConfigList_r16) {
enc.WriteConstrainedLength(value.sl_CBR_RangeConfigList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CBR_RangeConfigList_r16_count; ++i) {
    Encode_SL_CBR_LevelsConfig_r16(enc, value.sl_CBR_RangeConfigList_r16_items[i]);
}
    }
    if (value.has_sl_CBR_PSSCH_TxConfigList_r16) {
enc.WriteConstrainedLength(value.sl_CBR_PSSCH_TxConfigList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CBR_PSSCH_TxConfigList_r16_count; ++i) {
    Encode_SL_CBR_PSSCH_TxConfig_r16(enc, value.sl_CBR_PSSCH_TxConfigList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_CommonTxConfigList_r16(Decoder& dec, SL_CBR_CommonTxConfigList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CBR_RangeConfigList_r16_count)) { goto fail; }
if (value.sl_CBR_RangeConfigList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CBR_RangeConfigList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CBR_RangeConfigList_r16_count > 0u) {
    value.sl_CBR_RangeConfigList_r16_items = (SL_CBR_LevelsConfig_r16*)std::malloc((std::size_t)value.sl_CBR_RangeConfigList_r16_count * sizeof(SL_CBR_LevelsConfig_r16));
    if (value.sl_CBR_RangeConfigList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CBR_RangeConfigList_r16_items, 0, (std::size_t)value.sl_CBR_RangeConfigList_r16_count * sizeof(SL_CBR_LevelsConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_CBR_RangeConfigList_r16_count; ++i) {
    if (Decode_SL_CBR_LevelsConfig_r16(dec, value.sl_CBR_RangeConfigList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CBR_PSSCH_TxConfigList_r16_count)) { goto fail; }
if (value.sl_CBR_PSSCH_TxConfigList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CBR_PSSCH_TxConfigList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CBR_PSSCH_TxConfigList_r16_count > 0u) {
    value.sl_CBR_PSSCH_TxConfigList_r16_items = (SL_CBR_PSSCH_TxConfig_r16*)std::malloc((std::size_t)value.sl_CBR_PSSCH_TxConfigList_r16_count * sizeof(SL_CBR_PSSCH_TxConfig_r16));
    if (value.sl_CBR_PSSCH_TxConfigList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CBR_PSSCH_TxConfigList_r16_items, 0, (std::size_t)value.sl_CBR_PSSCH_TxConfigList_r16_count * sizeof(SL_CBR_PSSCH_TxConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_CBR_PSSCH_TxConfigList_r16_count; ++i) {
    if (Decode_SL_CBR_PSSCH_TxConfig_r16(dec, value.sl_CBR_PSSCH_TxConfigList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_CommonTxConfigList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_CommonTxConfigList_r16(SL_CBR_CommonTxConfigList_r16& value)
{
    if (value.has_sl_CBR_RangeConfigList_r16) {
        if (value.sl_CBR_RangeConfigList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_CBR_RangeConfigList_r16_count; ++i) {
                Free_SL_CBR_LevelsConfig_r16(value.sl_CBR_RangeConfigList_r16_items[i]);
            }
            std::free(value.sl_CBR_RangeConfigList_r16_items);
            value.sl_CBR_RangeConfigList_r16_items = nullptr;
        }
        value.sl_CBR_RangeConfigList_r16_count = 0;
    }
    if (value.has_sl_CBR_PSSCH_TxConfigList_r16) {
        if (value.sl_CBR_PSSCH_TxConfigList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_CBR_PSSCH_TxConfigList_r16_count; ++i) {
                Free_SL_CBR_PSSCH_TxConfig_r16(value.sl_CBR_PSSCH_TxConfigList_r16_items[i]);
            }
            std::free(value.sl_CBR_PSSCH_TxConfigList_r16_items);
            value.sl_CBR_PSSCH_TxConfigList_r16_items = nullptr;
        }
        value.sl_CBR_PSSCH_TxConfigList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PSSCH_TxConfigList_r16：ASN.1 SL-PSSCH-TxConfigList-r16；源文件第 22787 行；SEQUENCE OF。
// Encode_SL_PSSCH_TxConfigList_r16 只读不分配；Decode_SL_PSSCH_TxConfigList_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PSSCH_TxConfigList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PSSCH_TxConfigList_r16(Encoder& enc, const SL_PSSCH_TxConfigList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SL_PSSCH_TxConfig_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PSSCH_TxConfigList_r16(Decoder& dec, SL_PSSCH_TxConfigList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_PSSCH_TxConfig_r16*)std::malloc((std::size_t)value.count * sizeof(SL_PSSCH_TxConfig_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_PSSCH_TxConfig_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SL_PSSCH_TxConfig_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SL_PSSCH_TxConfigList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PSSCH_TxConfigList_r16(SL_PSSCH_TxConfigList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SL_PSSCH_TxConfig_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18：ASN.1 SL-CBR-CommonTxDedicatedSL-PRS-RP-List-r18；源文件第 22069 行；SEQUENCE。
// Encode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18 只读不分配；Decode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18 可能 malloc（失败时内部已释放并清零）；Free_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(Encoder& enc, const SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18& value)
{
    enc.WriteBit(value.has_sl_CBR_RangeDedicatedSL_PRS_RP_List_r18);
    enc.WriteBit(value.has_sl_CBR_SL_PRS_TxConfigList_r18);
    if (value.has_sl_CBR_RangeDedicatedSL_PRS_RP_List_r18) {
enc.WriteConstrainedLength(value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count; ++i) {
    Encode_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(enc, value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items[i]);
}
    }
    if (value.has_sl_CBR_SL_PRS_TxConfigList_r18) {
enc.WriteConstrainedLength(value.sl_CBR_SL_PRS_TxConfigList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_CBR_SL_PRS_TxConfigList_r18_count; ++i) {
    Encode_SL_CBR_SL_PRS_TxConfig_r18(enc, value.sl_CBR_SL_PRS_TxConfigList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(Decoder& dec, SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count)) { goto fail; }
if (value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count > 0u) {
    value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items = (SL_CBR_LevelsDedicatedSL_PRS_RP_r18*)std::malloc((std::size_t)value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count * sizeof(SL_CBR_LevelsDedicatedSL_PRS_RP_r18));
    if (value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items, 0, (std::size_t)value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count * sizeof(SL_CBR_LevelsDedicatedSL_PRS_RP_r18));
}
for (std::uint32_t i = 0; i < value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count; ++i) {
    if (Decode_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(dec, value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_CBR_SL_PRS_TxConfigList_r18_count)) { goto fail; }
if (value.sl_CBR_SL_PRS_TxConfigList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_CBR_SL_PRS_TxConfigList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_CBR_SL_PRS_TxConfigList_r18_count > 0u) {
    value.sl_CBR_SL_PRS_TxConfigList_r18_items = (SL_CBR_SL_PRS_TxConfig_r18*)std::malloc((std::size_t)value.sl_CBR_SL_PRS_TxConfigList_r18_count * sizeof(SL_CBR_SL_PRS_TxConfig_r18));
    if (value.sl_CBR_SL_PRS_TxConfigList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_CBR_SL_PRS_TxConfigList_r18_items, 0, (std::size_t)value.sl_CBR_SL_PRS_TxConfigList_r18_count * sizeof(SL_CBR_SL_PRS_TxConfig_r18));
}
for (std::uint32_t i = 0; i < value.sl_CBR_SL_PRS_TxConfigList_r18_count; ++i) {
    if (Decode_SL_CBR_SL_PRS_TxConfig_r18(dec, value.sl_CBR_SL_PRS_TxConfigList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18& value)
{
    if (value.has_sl_CBR_RangeDedicatedSL_PRS_RP_List_r18) {
        if (value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count; ++i) {
                Free_SL_CBR_LevelsDedicatedSL_PRS_RP_r18(value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items[i]);
            }
            std::free(value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items);
            value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_items = nullptr;
        }
        value.sl_CBR_RangeDedicatedSL_PRS_RP_List_r18_count = 0;
    }
    if (value.has_sl_CBR_SL_PRS_TxConfigList_r18) {
        if (value.sl_CBR_SL_PRS_TxConfigList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_CBR_SL_PRS_TxConfigList_r18_count; ++i) {
                Free_SL_CBR_SL_PRS_TxConfig_r18(value.sl_CBR_SL_PRS_TxConfigList_r18_items[i]);
            }
            std::free(value.sl_CBR_SL_PRS_TxConfigList_r18_items);
            value.sl_CBR_SL_PRS_TxConfigList_r18_items = nullptr;
        }
        value.sl_CBR_SL_PRS_TxConfigList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_UE_SelectedConfig_r16_ExtGroup1：ASN.1 SL_UE_SelectedConfig_r16_ExtGroup1；源文件第 23410 行；扩展添加组 [[ ]]。
// Encode_SL_UE_SelectedConfig_r16_ExtGroup1 只读不分配；Decode_SL_UE_SelectedConfig_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SL_UE_SelectedConfig_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_UE_SelectedConfig_r16_ExtGroup1(Encoder& enc, const SL_UE_SelectedConfig_r16_ExtGroup1& value)
{
    enc.WriteBit(value.has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18);
    if (value.has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18) {
        Encode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(enc, value.sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SL_UE_SelectedConfig_r16_ExtGroup1(Decoder& dec, SL_UE_SelectedConfig_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(dec, value.sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_UE_SelectedConfig_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_UE_SelectedConfig_r16_ExtGroup1(SL_UE_SelectedConfig_r16_ExtGroup1& value)
{
    if (value.has_sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18) {
        Free_SL_CBR_CommonTxDedicatedSL_PRS_RP_List_r18(value.sl_CBR_CommonTxDedicatedSL_PRS_RP_List_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_UE_SelectedConfig_r16：ASN.1 SL-UE-SelectedConfig-r16；源文件第 23402 行；SEQUENCE。
// Encode_SL_UE_SelectedConfig_r16 只读不分配；Decode_SL_UE_SelectedConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_UE_SelectedConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_UE_SelectedConfig_r16(Encoder& enc, const SL_UE_SelectedConfig_r16& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PSSCH_TxConfigList_r16);
    enc.WriteBit(value.has_sl_ProbResourceKeep_r16);
    enc.WriteBit(value.has_sl_ReselectAfter_r16);
    enc.WriteBit(value.has_sl_CBR_CommonTxConfigList_r16);
    enc.WriteBit(value.has_ul_PrioritizationThres_r16);
    enc.WriteBit(value.has_sl_PrioritizationThres_r16);
    if (value.has_sl_PSSCH_TxConfigList_r16) {
        Encode_SL_PSSCH_TxConfigList_r16(enc, value.sl_PSSCH_TxConfigList_r16);
    }
    if (value.has_sl_ProbResourceKeep_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ProbResourceKeep_r16), 0, 4);
    }
    if (value.has_sl_ReselectAfter_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReselectAfter_r16), 0, 8);
    }
    if (value.has_sl_CBR_CommonTxConfigList_r16) {
        Encode_SL_CBR_CommonTxConfigList_r16(enc, value.sl_CBR_CommonTxConfigList_r16);
    }
    if (value.has_ul_PrioritizationThres_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_PrioritizationThres_r16), 1, 16);
    }
    if (value.has_sl_PrioritizationThres_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PrioritizationThres_r16), 1, 8);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_UE_SelectedConfig_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_UE_SelectedConfig_r16(Decoder& dec, SL_UE_SelectedConfig_r16& value)
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
        if (Decode_SL_PSSCH_TxConfigList_r16(dec, value.sl_PSSCH_TxConfigList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.sl_ProbResourceKeep_r16 = (SL_UE_SelectedConfig_r16_Sl_ProbResourceKeep_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.sl_ReselectAfter_r16 = (SL_UE_SelectedConfig_r16_Sl_ReselectAfter_r16)tmp_value;
    }
    if (present_3) {
        if (Decode_SL_CBR_CommonTxConfigList_r16(dec, value.sl_CBR_CommonTxConfigList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.ul_PrioritizationThres_r16 = (int64_t)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_PrioritizationThres_r16 = (int64_t)tmp_value;
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
    if (Decode_SL_UE_SelectedConfig_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_SL_UE_SelectedConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_UE_SelectedConfig_r16(SL_UE_SelectedConfig_r16& value)
{
    if (value.has_sl_PSSCH_TxConfigList_r16) {
        Free_SL_PSSCH_TxConfigList_r16(value.sl_PSSCH_TxConfigList_r16);
    }
    if (value.has_sl_ProbResourceKeep_r16) {
    }
    if (value.has_sl_ReselectAfter_r16) {
    }
    if (value.has_sl_CBR_CommonTxConfigList_r16) {
        Free_SL_CBR_CommonTxConfigList_r16(value.sl_CBR_CommonTxConfigList_r16);
    }
    if (value.has_ul_PrioritizationThres_r16) {
    }
    if (value.has_sl_PrioritizationThres_r16) {
    }
    if (value.has_extGroup1) {
        Free_SL_UE_SelectedConfig_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_UE_SelectedConfig_r16：ASN.1 SetupRelease<SL-UE-SelectedConfig-r16>；源文件第 22110 行；CHOICE。
// Encode_SetupRelease_SL_UE_SelectedConfig_r16 只读不分配；Decode_SetupRelease_SL_UE_SelectedConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_UE_SelectedConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_UE_SelectedConfig_r16(Encoder& enc, const SetupRelease_SL_UE_SelectedConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_UE_SelectedConfig_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_UE_SelectedConfig_r16_Tag_setup:
        Encode_SL_UE_SelectedConfig_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_UE_SelectedConfig_r16(Decoder& dec, SetupRelease_SL_UE_SelectedConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_UE_SelectedConfig_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_UE_SelectedConfig_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_UE_SelectedConfig_r16_Tag_setup: {
        if (Decode_SL_UE_SelectedConfig_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_UE_SelectedConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_UE_SelectedConfig_r16(SetupRelease_SL_UE_SelectedConfig_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_UE_SelectedConfig_r16_Tag_release:
        break;
    case SetupRelease_SL_UE_SelectedConfig_r16_Tag_setup:
        Free_SL_UE_SelectedConfig_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_PHY_MAC_RLC_Config_r16：ASN.1 SL-PHY-MAC-RLC-Config-r16；源文件第 22108 行；SEQUENCE。
// Encode_SL_PHY_MAC_RLC_Config_r16 只读不分配；Decode_SL_PHY_MAC_RLC_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_PHY_MAC_RLC_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_PHY_MAC_RLC_Config_r16(Encoder& enc, const SL_PHY_MAC_RLC_Config_r16& value)
{
    enc.WriteBit(value.has_sl_ScheduledConfig_r16);
    enc.WriteBit(value.has_sl_UE_SelectedConfig_r16);
    enc.WriteBit(value.has_sl_FreqInfoToReleaseList_r16);
    enc.WriteBit(value.has_sl_FreqInfoToAddModList_r16);
    enc.WriteBit(value.has_sl_RLC_BearerToReleaseList_r16);
    enc.WriteBit(value.has_sl_RLC_BearerToAddModList_r16);
    enc.WriteBit(value.has_sl_MaxNumConsecutiveDTX_r16);
    enc.WriteBit(value.has_sl_CSI_Acquisition_r16);
    enc.WriteBit(value.has_sl_CSI_SchedulingRequestId_r16);
    enc.WriteBit(value.has_sl_SSB_PriorityNR_r16);
    enc.WriteBit(value.has_networkControlledSyncTx_r16);
    if (value.has_sl_ScheduledConfig_r16) {
        Encode_SetupRelease_SL_ScheduledConfig_r16(enc, value.sl_ScheduledConfig_r16);
    }
    if (value.has_sl_UE_SelectedConfig_r16) {
        Encode_SetupRelease_SL_UE_SelectedConfig_r16(enc, value.sl_UE_SelectedConfig_r16);
    }
    if (value.has_sl_FreqInfoToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_FreqInfoToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqInfoToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_FreqInfoToReleaseList_r16_items[i]), 1, 8);
}
    }
    if (value.has_sl_FreqInfoToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_FreqInfoToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_FreqInfoToAddModList_r16_count; ++i) {
    Encode_SL_FreqConfig_r16(enc, value.sl_FreqInfoToAddModList_r16_items[i]);
}
    }
    if (value.has_sl_RLC_BearerToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_RLC_BearerToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RLC_BearerToReleaseList_r16_items[i]), 1, 512);
}
    }
    if (value.has_sl_RLC_BearerToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_RLC_BearerToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToAddModList_r16_count; ++i) {
    Encode_SL_RLC_BearerConfig_r16(enc, value.sl_RLC_BearerToAddModList_r16_items[i]);
}
    }
    if (value.has_sl_MaxNumConsecutiveDTX_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_MaxNumConsecutiveDTX_r16), 0, 7);
    }
    if (value.has_sl_CSI_Acquisition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_CSI_Acquisition_r16), 0, 0);
    }
    if (value.has_sl_CSI_SchedulingRequestId_r16) {
        Encode_SetupRelease_SchedulingRequestId(enc, value.sl_CSI_SchedulingRequestId_r16);
    }
    if (value.has_sl_SSB_PriorityNR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_SSB_PriorityNR_r16), 1, 8);
    }
    if (value.has_networkControlledSyncTx_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.networkControlledSyncTx_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SL_PHY_MAC_RLC_Config_r16(Decoder& dec, SL_PHY_MAC_RLC_Config_r16& value)
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
        if (Decode_SetupRelease_SL_ScheduledConfig_r16(dec, value.sl_ScheduledConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_SL_UE_SelectedConfig_r16(dec, value.sl_UE_SelectedConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqInfoToReleaseList_r16_count)) { goto fail; }
if (value.sl_FreqInfoToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqInfoToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqInfoToReleaseList_r16_count > 0u) {
    value.sl_FreqInfoToReleaseList_r16_items = (SL_Freq_Id_r16*)std::malloc((std::size_t)value.sl_FreqInfoToReleaseList_r16_count * sizeof(SL_Freq_Id_r16));
    if (value.sl_FreqInfoToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqInfoToReleaseList_r16_items, 0, (std::size_t)value.sl_FreqInfoToReleaseList_r16_count * sizeof(SL_Freq_Id_r16));
}
for (std::uint32_t i = 0; i < value.sl_FreqInfoToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.sl_FreqInfoToReleaseList_r16_items[i] = (SL_Freq_Id_r16)tmp_value;
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_FreqInfoToAddModList_r16_count)) { goto fail; }
if (value.sl_FreqInfoToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_FreqInfoToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_FreqInfoToAddModList_r16_count > 0u) {
    value.sl_FreqInfoToAddModList_r16_items = (SL_FreqConfig_r16*)std::malloc((std::size_t)value.sl_FreqInfoToAddModList_r16_count * sizeof(SL_FreqConfig_r16));
    if (value.sl_FreqInfoToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_FreqInfoToAddModList_r16_items, 0, (std::size_t)value.sl_FreqInfoToAddModList_r16_count * sizeof(SL_FreqConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_FreqInfoToAddModList_r16_count; ++i) {
    if (Decode_SL_FreqConfig_r16(dec, value.sl_FreqInfoToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_BearerToReleaseList_r16_count)) { goto fail; }
if (value.sl_RLC_BearerToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_BearerToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_BearerToReleaseList_r16_count > 0u) {
    value.sl_RLC_BearerToReleaseList_r16_items = (SL_RLC_BearerConfigIndex_r16*)std::malloc((std::size_t)value.sl_RLC_BearerToReleaseList_r16_count * sizeof(SL_RLC_BearerConfigIndex_r16));
    if (value.sl_RLC_BearerToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_BearerToReleaseList_r16_items, 0, (std::size_t)value.sl_RLC_BearerToReleaseList_r16_count * sizeof(SL_RLC_BearerConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
    value.sl_RLC_BearerToReleaseList_r16_items[i] = (SL_RLC_BearerConfigIndex_r16)tmp_value;
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RLC_BearerToAddModList_r16_count)) { goto fail; }
if (value.sl_RLC_BearerToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RLC_BearerToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RLC_BearerToAddModList_r16_count > 0u) {
    value.sl_RLC_BearerToAddModList_r16_items = (SL_RLC_BearerConfig_r16*)std::malloc((std::size_t)value.sl_RLC_BearerToAddModList_r16_count * sizeof(SL_RLC_BearerConfig_r16));
    if (value.sl_RLC_BearerToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RLC_BearerToAddModList_r16_items, 0, (std::size_t)value.sl_RLC_BearerToAddModList_r16_count * sizeof(SL_RLC_BearerConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_RLC_BearerToAddModList_r16_count; ++i) {
    if (Decode_SL_RLC_BearerConfig_r16(dec, value.sl_RLC_BearerToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_MaxNumConsecutiveDTX_r16 = (SL_PHY_MAC_RLC_Config_r16_Sl_MaxNumConsecutiveDTX_r16)tmp_value;
    }
    if (present_7) {
        value.sl_CSI_Acquisition_r16 = (SL_PHY_MAC_RLC_Config_r16_Sl_CSI_Acquisition_r16)0;
    }
    if (present_8) {
        if (Decode_SetupRelease_SchedulingRequestId(dec, value.sl_CSI_SchedulingRequestId_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_SSB_PriorityNR_r16 = (int64_t)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.networkControlledSyncTx_r16 = (SL_PHY_MAC_RLC_Config_r16_NetworkControlledSyncTx_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_PHY_MAC_RLC_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_PHY_MAC_RLC_Config_r16(SL_PHY_MAC_RLC_Config_r16& value)
{
    if (value.has_sl_ScheduledConfig_r16) {
        Free_SetupRelease_SL_ScheduledConfig_r16(value.sl_ScheduledConfig_r16);
    }
    if (value.has_sl_UE_SelectedConfig_r16) {
        Free_SetupRelease_SL_UE_SelectedConfig_r16(value.sl_UE_SelectedConfig_r16);
    }
    if (value.has_sl_FreqInfoToReleaseList_r16) {
        if (value.sl_FreqInfoToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqInfoToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_FreqInfoToReleaseList_r16_items);
            value.sl_FreqInfoToReleaseList_r16_items = nullptr;
        }
        value.sl_FreqInfoToReleaseList_r16_count = 0;
    }
    if (value.has_sl_FreqInfoToAddModList_r16) {
        if (value.sl_FreqInfoToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_FreqInfoToAddModList_r16_count; ++i) {
                Free_SL_FreqConfig_r16(value.sl_FreqInfoToAddModList_r16_items[i]);
            }
            std::free(value.sl_FreqInfoToAddModList_r16_items);
            value.sl_FreqInfoToAddModList_r16_items = nullptr;
        }
        value.sl_FreqInfoToAddModList_r16_count = 0;
    }
    if (value.has_sl_RLC_BearerToReleaseList_r16) {
        if (value.sl_RLC_BearerToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_BearerToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_RLC_BearerToReleaseList_r16_items);
            value.sl_RLC_BearerToReleaseList_r16_items = nullptr;
        }
        value.sl_RLC_BearerToReleaseList_r16_count = 0;
    }
    if (value.has_sl_RLC_BearerToAddModList_r16) {
        if (value.sl_RLC_BearerToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RLC_BearerToAddModList_r16_count; ++i) {
                Free_SL_RLC_BearerConfig_r16(value.sl_RLC_BearerToAddModList_r16_items[i]);
            }
            std::free(value.sl_RLC_BearerToAddModList_r16_items);
            value.sl_RLC_BearerToAddModList_r16_items = nullptr;
        }
        value.sl_RLC_BearerToAddModList_r16_count = 0;
    }
    if (value.has_sl_MaxNumConsecutiveDTX_r16) {
    }
    if (value.has_sl_CSI_Acquisition_r16) {
    }
    if (value.has_sl_CSI_SchedulingRequestId_r16) {
        Free_SetupRelease_SchedulingRequestId(value.sl_CSI_SchedulingRequestId_r16);
    }
    if (value.has_sl_SSB_PriorityNR_r16) {
    }
    if (value.has_networkControlledSyncTx_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfigDedicatedNR_r16：ASN.1 SL-ConfigDedicatedNR-r16；源文件第 22089 行；SEQUENCE。
// Encode_SL_ConfigDedicatedNR_r16 只读不分配；Decode_SL_ConfigDedicatedNR_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfigDedicatedNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfigDedicatedNR_r16(Encoder& enc, const SL_ConfigDedicatedNR_r16& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_PHY_MAC_RLC_Config_r16);
    enc.WriteBit(value.has_sl_RadioBearerToReleaseList_r16);
    enc.WriteBit(value.has_sl_RadioBearerToAddModList_r16);
    enc.WriteBit(value.has_sl_MeasConfigInfoToReleaseList_r16);
    enc.WriteBit(value.has_sl_MeasConfigInfoToAddModList_r16);
    enc.WriteBit(value.has_t400_r16);
    if (value.has_sl_PHY_MAC_RLC_Config_r16) {
        Encode_SL_PHY_MAC_RLC_Config_r16(enc, value.sl_PHY_MAC_RLC_Config_r16);
    }
    if (value.has_sl_RadioBearerToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_RadioBearerToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RadioBearerToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_RadioBearerToReleaseList_r16_items[i]), 1, 512);
}
    }
    if (value.has_sl_RadioBearerToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_RadioBearerToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_RadioBearerToAddModList_r16_count; ++i) {
    Encode_SL_RadioBearerConfig_r16(enc, value.sl_RadioBearerToAddModList_r16_items[i]);
}
    }
    if (value.has_sl_MeasConfigInfoToReleaseList_r16) {
enc.WriteConstrainedLength(value.sl_MeasConfigInfoToReleaseList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MeasConfigInfoToReleaseList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_MeasConfigInfoToReleaseList_r16_items[i]), 0, 31);
}
    }
    if (value.has_sl_MeasConfigInfoToAddModList_r16) {
enc.WriteConstrainedLength(value.sl_MeasConfigInfoToAddModList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_MeasConfigInfoToAddModList_r16_count; ++i) {
    Encode_SL_MeasConfigInfo_r16(enc, value.sl_MeasConfigInfoToAddModList_r16_items[i]);
}
    }
    if (value.has_t400_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t400_r16), 0, 7);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SL_ConfigDedicatedNR_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SL_ConfigDedicatedNR_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfigDedicatedNR_r16(Decoder& dec, SL_ConfigDedicatedNR_r16& value)
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
        if (Decode_SL_PHY_MAC_RLC_Config_r16(dec, value.sl_PHY_MAC_RLC_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RadioBearerToReleaseList_r16_count)) { goto fail; }
if (value.sl_RadioBearerToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RadioBearerToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RadioBearerToReleaseList_r16_count > 0u) {
    value.sl_RadioBearerToReleaseList_r16_items = (SLRB_Uu_ConfigIndex_r16*)std::malloc((std::size_t)value.sl_RadioBearerToReleaseList_r16_count * sizeof(SLRB_Uu_ConfigIndex_r16));
    if (value.sl_RadioBearerToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RadioBearerToReleaseList_r16_items, 0, (std::size_t)value.sl_RadioBearerToReleaseList_r16_count * sizeof(SLRB_Uu_ConfigIndex_r16));
}
for (std::uint32_t i = 0; i < value.sl_RadioBearerToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 512, tmp_value)) { goto fail; }
    value.sl_RadioBearerToReleaseList_r16_items[i] = (SLRB_Uu_ConfigIndex_r16)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_RadioBearerToAddModList_r16_count)) { goto fail; }
if (value.sl_RadioBearerToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_RadioBearerToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_RadioBearerToAddModList_r16_count > 0u) {
    value.sl_RadioBearerToAddModList_r16_items = (SL_RadioBearerConfig_r16*)std::malloc((std::size_t)value.sl_RadioBearerToAddModList_r16_count * sizeof(SL_RadioBearerConfig_r16));
    if (value.sl_RadioBearerToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_RadioBearerToAddModList_r16_items, 0, (std::size_t)value.sl_RadioBearerToAddModList_r16_count * sizeof(SL_RadioBearerConfig_r16));
}
for (std::uint32_t i = 0; i < value.sl_RadioBearerToAddModList_r16_count; ++i) {
    if (Decode_SL_RadioBearerConfig_r16(dec, value.sl_RadioBearerToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MeasConfigInfoToReleaseList_r16_count)) { goto fail; }
if (value.sl_MeasConfigInfoToReleaseList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MeasConfigInfoToReleaseList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MeasConfigInfoToReleaseList_r16_count > 0u) {
    value.sl_MeasConfigInfoToReleaseList_r16_items = (SL_DestinationIndex_r16*)std::malloc((std::size_t)value.sl_MeasConfigInfoToReleaseList_r16_count * sizeof(SL_DestinationIndex_r16));
    if (value.sl_MeasConfigInfoToReleaseList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MeasConfigInfoToReleaseList_r16_items, 0, (std::size_t)value.sl_MeasConfigInfoToReleaseList_r16_count * sizeof(SL_DestinationIndex_r16));
}
for (std::uint32_t i = 0; i < value.sl_MeasConfigInfoToReleaseList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.sl_MeasConfigInfoToReleaseList_r16_items[i] = (SL_DestinationIndex_r16)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_MeasConfigInfoToAddModList_r16_count)) { goto fail; }
if (value.sl_MeasConfigInfoToAddModList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_MeasConfigInfoToAddModList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_MeasConfigInfoToAddModList_r16_count > 0u) {
    value.sl_MeasConfigInfoToAddModList_r16_items = (SL_MeasConfigInfo_r16*)std::malloc((std::size_t)value.sl_MeasConfigInfoToAddModList_r16_count * sizeof(SL_MeasConfigInfo_r16));
    if (value.sl_MeasConfigInfoToAddModList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_MeasConfigInfoToAddModList_r16_items, 0, (std::size_t)value.sl_MeasConfigInfoToAddModList_r16_count * sizeof(SL_MeasConfigInfo_r16));
}
for (std::uint32_t i = 0; i < value.sl_MeasConfigInfoToAddModList_r16_count; ++i) {
    if (Decode_SL_MeasConfigInfo_r16(dec, value.sl_MeasConfigInfoToAddModList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.t400_r16 = (SL_ConfigDedicatedNR_r16_T400_r16)tmp_value;
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
    if (Decode_SL_ConfigDedicatedNR_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SL_ConfigDedicatedNR_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SL_ConfigDedicatedNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfigDedicatedNR_r16(SL_ConfigDedicatedNR_r16& value)
{
    if (value.has_sl_PHY_MAC_RLC_Config_r16) {
        Free_SL_PHY_MAC_RLC_Config_r16(value.sl_PHY_MAC_RLC_Config_r16);
    }
    if (value.has_sl_RadioBearerToReleaseList_r16) {
        if (value.sl_RadioBearerToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RadioBearerToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_RadioBearerToReleaseList_r16_items);
            value.sl_RadioBearerToReleaseList_r16_items = nullptr;
        }
        value.sl_RadioBearerToReleaseList_r16_count = 0;
    }
    if (value.has_sl_RadioBearerToAddModList_r16) {
        if (value.sl_RadioBearerToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_RadioBearerToAddModList_r16_count; ++i) {
                Free_SL_RadioBearerConfig_r16(value.sl_RadioBearerToAddModList_r16_items[i]);
            }
            std::free(value.sl_RadioBearerToAddModList_r16_items);
            value.sl_RadioBearerToAddModList_r16_items = nullptr;
        }
        value.sl_RadioBearerToAddModList_r16_count = 0;
    }
    if (value.has_sl_MeasConfigInfoToReleaseList_r16) {
        if (value.sl_MeasConfigInfoToReleaseList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MeasConfigInfoToReleaseList_r16_count; ++i) {
            }
            std::free(value.sl_MeasConfigInfoToReleaseList_r16_items);
            value.sl_MeasConfigInfoToReleaseList_r16_items = nullptr;
        }
        value.sl_MeasConfigInfoToReleaseList_r16_count = 0;
    }
    if (value.has_sl_MeasConfigInfoToAddModList_r16) {
        if (value.sl_MeasConfigInfoToAddModList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_MeasConfigInfoToAddModList_r16_count; ++i) {
                Free_SL_MeasConfigInfo_r16(value.sl_MeasConfigInfoToAddModList_r16_items[i]);
            }
            std::free(value.sl_MeasConfigInfoToAddModList_r16_items);
            value.sl_MeasConfigInfoToAddModList_r16_items = nullptr;
        }
        value.sl_MeasConfigInfoToAddModList_r16_count = 0;
    }
    if (value.has_t400_r16) {
    }
    if (value.has_extGroup1) {
        Free_SL_ConfigDedicatedNR_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SL_ConfigDedicatedNR_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_ConfigDedicatedNR_r16：ASN.1 SetupRelease<SL-ConfigDedicatedNR-r16>；源文件第 978 行；CHOICE。
// Encode_SetupRelease_SL_ConfigDedicatedNR_r16 只读不分配；Decode_SetupRelease_SL_ConfigDedicatedNR_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_ConfigDedicatedNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_ConfigDedicatedNR_r16(Encoder& enc, const SetupRelease_SL_ConfigDedicatedNR_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_ConfigDedicatedNR_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_ConfigDedicatedNR_r16_Tag_setup:
        Encode_SL_ConfigDedicatedNR_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_ConfigDedicatedNR_r16(Decoder& dec, SetupRelease_SL_ConfigDedicatedNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_ConfigDedicatedNR_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_ConfigDedicatedNR_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_ConfigDedicatedNR_r16_Tag_setup: {
        if (Decode_SL_ConfigDedicatedNR_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_ConfigDedicatedNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_ConfigDedicatedNR_r16(SetupRelease_SL_ConfigDedicatedNR_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_ConfigDedicatedNR_r16_Tag_release:
        break;
    case SetupRelease_SL_ConfigDedicatedNR_r16_Tag_setup:
        Free_SL_ConfigDedicatedNR_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_ConfigDedicatedEUTRA_Info_r16：ASN.1 SL-ConfigDedicatedEUTRA-Info-r16；源文件第 1054 行；SEQUENCE。
// Encode_SL_ConfigDedicatedEUTRA_Info_r16 只读不分配；Decode_SL_ConfigDedicatedEUTRA_Info_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_ConfigDedicatedEUTRA_Info_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_ConfigDedicatedEUTRA_Info_r16(Encoder& enc, const SL_ConfigDedicatedEUTRA_Info_r16& value)
{
    enc.WriteBit(value.has_sl_ConfigDedicatedEUTRA_r16);
    enc.WriteBit(value.has_sl_TimeOffsetEUTRA_List_r16);
    if (value.has_sl_ConfigDedicatedEUTRA_r16) {
        enc.WriteSemiConstrainedOctetString(value.sl_ConfigDedicatedEUTRA_r16.bytes, value.sl_ConfigDedicatedEUTRA_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_sl_TimeOffsetEUTRA_List_r16) {
enc.WriteConstrainedLength(value.sl_TimeOffsetEUTRA_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.sl_TimeOffsetEUTRA_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_TimeOffsetEUTRA_List_r16_items[i]), 0, 17);
}
    }
    return enc.Error();
}

ErrorCode Decode_SL_ConfigDedicatedEUTRA_Info_r16(Decoder& dec, SL_ConfigDedicatedEUTRA_Info_r16& value)
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
        value.sl_ConfigDedicatedEUTRA_r16.bytes = string_bytes;
        value.sl_ConfigDedicatedEUTRA_r16.length = string_length;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.sl_TimeOffsetEUTRA_List_r16_count)) { goto fail; }
if (value.sl_TimeOffsetEUTRA_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.sl_TimeOffsetEUTRA_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.sl_TimeOffsetEUTRA_List_r16_count > 0u) {
    value.sl_TimeOffsetEUTRA_List_r16_items = (SL_TimeOffsetEUTRA_r16*)std::malloc((std::size_t)value.sl_TimeOffsetEUTRA_List_r16_count * sizeof(SL_TimeOffsetEUTRA_r16));
    if (value.sl_TimeOffsetEUTRA_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.sl_TimeOffsetEUTRA_List_r16_items, 0, (std::size_t)value.sl_TimeOffsetEUTRA_List_r16_count * sizeof(SL_TimeOffsetEUTRA_r16));
}
for (std::uint32_t i = 0; i < value.sl_TimeOffsetEUTRA_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 17, tmp_value)) { goto fail; }
    value.sl_TimeOffsetEUTRA_List_r16_items[i] = (SL_TimeOffsetEUTRA_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_ConfigDedicatedEUTRA_Info_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_ConfigDedicatedEUTRA_Info_r16(SL_ConfigDedicatedEUTRA_Info_r16& value)
{
    if (value.has_sl_ConfigDedicatedEUTRA_r16) {
        std::free(value.sl_ConfigDedicatedEUTRA_r16.bytes);
        value.sl_ConfigDedicatedEUTRA_r16.bytes = nullptr;
        value.sl_ConfigDedicatedEUTRA_r16.length = 0;
    }
    if (value.has_sl_TimeOffsetEUTRA_List_r16) {
        if (value.sl_TimeOffsetEUTRA_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.sl_TimeOffsetEUTRA_List_r16_count; ++i) {
            }
            std::free(value.sl_TimeOffsetEUTRA_List_r16_items);
            value.sl_TimeOffsetEUTRA_List_r16_items = nullptr;
        }
        value.sl_TimeOffsetEUTRA_List_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16：ASN.1 SetupRelease<SL-ConfigDedicatedEUTRA-Info-r16>；源文件第 979 行；CHOICE。
// Encode_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16 只读不分配；Decode_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(Encoder& enc, const SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_setup:
        Encode_SL_ConfigDedicatedEUTRA_Info_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(Decoder& dec, SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_setup: {
        if (Decode_SL_ConfigDedicatedEUTRA_Info_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_release:
        break;
    case SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16_Tag_setup:
        Free_SL_ConfigDedicatedEUTRA_Info_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1610_IEs：ASN.1 RRCReconfiguration-v1610-IEs；源文件第 968 行；SEQUENCE。
// Encode_RRCReconfiguration_v1610_IEs 只读不分配；Decode_RRCReconfiguration_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1610_IEs(Encoder& enc, const RRCReconfiguration_v1610_IEs& value)
{
    enc.WriteBit(value.has_otherConfig_v1610);
    enc.WriteBit(value.has_bap_Config_r16);
    enc.WriteBit(value.has_iab_IP_AddressConfigurationList_r16);
    enc.WriteBit(value.has_conditionalReconfiguration_r16);
    enc.WriteBit(value.has_daps_SourceRelease_r16);
    enc.WriteBit(value.has_t316_r16);
    enc.WriteBit(value.has_needForGapsConfigNR_r16);
    enc.WriteBit(value.has_onDemandSIB_Request_r16);
    enc.WriteBit(value.dedicatedPosSysInfoDelivery_r16 != nullptr);
    enc.WriteBit(value.has_sl_ConfigDedicatedNR_r16);
    enc.WriteBit(value.has_sl_ConfigDedicatedEUTRA_Info_r16);
    enc.WriteBit(value.has_targetCellSMTC_SCG_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_otherConfig_v1610) {
        Encode_OtherConfig_v1610(enc, value.otherConfig_v1610);
    }
    if (value.has_bap_Config_r16) {
        Encode_SetupRelease_BAP_Config_r16(enc, value.bap_Config_r16);
    }
    if (value.has_iab_IP_AddressConfigurationList_r16) {
        Encode_IAB_IP_AddressConfigurationList_r16(enc, value.iab_IP_AddressConfigurationList_r16);
    }
    if (value.has_conditionalReconfiguration_r16) {
        Encode_ConditionalReconfiguration_r16(enc, value.conditionalReconfiguration_r16);
    }
    if (value.has_daps_SourceRelease_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.daps_SourceRelease_r16), 0, 0);
    }
    if (value.has_t316_r16) {
        Encode_SetupRelease_T316_r16(enc, value.t316_r16);
    }
    if (value.has_needForGapsConfigNR_r16) {
        Encode_SetupRelease_NeedForGapsConfigNR_r16(enc, value.needForGapsConfigNR_r16);
    }
    if (value.has_onDemandSIB_Request_r16) {
        Encode_SetupRelease_OnDemandSIB_Request_r16(enc, value.onDemandSIB_Request_r16);
    }
    if (value.dedicatedPosSysInfoDelivery_r16 != nullptr) {
        if (value.dedicatedPosSysInfoDelivery_r16 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_PosSystemInformation_r16_IEs(enc, *value.dedicatedPosSysInfoDelivery_r16);
        }
    }
    if (value.has_sl_ConfigDedicatedNR_r16) {
        Encode_SetupRelease_SL_ConfigDedicatedNR_r16(enc, value.sl_ConfigDedicatedNR_r16);
    }
    if (value.has_sl_ConfigDedicatedEUTRA_Info_r16) {
        Encode_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(enc, value.sl_ConfigDedicatedEUTRA_Info_r16);
    }
    if (value.has_targetCellSMTC_SCG_r16) {
        Encode_SSB_MTC(enc, value.targetCellSMTC_SCG_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1610_IEs(Decoder& dec, RRCReconfiguration_v1610_IEs& value)
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
        if (Decode_OtherConfig_v1610(dec, value.otherConfig_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_BAP_Config_r16(dec, value.bap_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_IAB_IP_AddressConfigurationList_r16(dec, value.iab_IP_AddressConfigurationList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_ConditionalReconfiguration_r16(dec, value.conditionalReconfiguration_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.daps_SourceRelease_r16 = (RRCReconfiguration_v1610_IEs_Daps_SourceRelease_r16)0;
    }
    if (present_5) {
        if (Decode_SetupRelease_T316_r16(dec, value.t316_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SetupRelease_NeedForGapsConfigNR_r16(dec, value.needForGapsConfigNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SetupRelease_OnDemandSIB_Request_r16(dec, value.onDemandSIB_Request_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        PosSystemInformation_r16_IEs* containing_value = (PosSystemInformation_r16_IEs*)std::malloc(sizeof(PosSystemInformation_r16_IEs));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_PosSystemInformation_r16_IEs(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_PosSystemInformation_r16_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_PosSystemInformation_r16_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.dedicatedPosSysInfoDelivery_r16 = containing_value;
    }
    if (present_9) {
        if (Decode_SetupRelease_SL_ConfigDedicatedNR_r16(dec, value.sl_ConfigDedicatedNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(dec, value.sl_ConfigDedicatedEUTRA_Info_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_SSB_MTC(dec, value.targetCellSMTC_SCG_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_RRCReconfiguration_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1610_IEs(RRCReconfiguration_v1610_IEs& value)
{
    if (value.has_otherConfig_v1610) {
        Free_OtherConfig_v1610(value.otherConfig_v1610);
    }
    if (value.has_bap_Config_r16) {
        Free_SetupRelease_BAP_Config_r16(value.bap_Config_r16);
    }
    if (value.has_iab_IP_AddressConfigurationList_r16) {
        Free_IAB_IP_AddressConfigurationList_r16(value.iab_IP_AddressConfigurationList_r16);
    }
    if (value.has_conditionalReconfiguration_r16) {
        Free_ConditionalReconfiguration_r16(value.conditionalReconfiguration_r16);
    }
    if (value.has_daps_SourceRelease_r16) {
    }
    if (value.has_t316_r16) {
        Free_SetupRelease_T316_r16(value.t316_r16);
    }
    if (value.has_needForGapsConfigNR_r16) {
        Free_SetupRelease_NeedForGapsConfigNR_r16(value.needForGapsConfigNR_r16);
    }
    if (value.has_onDemandSIB_Request_r16) {
        Free_SetupRelease_OnDemandSIB_Request_r16(value.onDemandSIB_Request_r16);
    }
    if (value.dedicatedPosSysInfoDelivery_r16 != nullptr) {
        if (value.dedicatedPosSysInfoDelivery_r16 != nullptr) {
            Free_PosSystemInformation_r16_IEs(*value.dedicatedPosSysInfoDelivery_r16);
            std::free(value.dedicatedPosSysInfoDelivery_r16);
            value.dedicatedPosSysInfoDelivery_r16 = nullptr;
        }
    }
    if (value.has_sl_ConfigDedicatedNR_r16) {
        Free_SetupRelease_SL_ConfigDedicatedNR_r16(value.sl_ConfigDedicatedNR_r16);
    }
    if (value.has_sl_ConfigDedicatedEUTRA_Info_r16) {
        Free_SetupRelease_SL_ConfigDedicatedEUTRA_Info_r16(value.sl_ConfigDedicatedEUTRA_Info_r16);
    }
    if (value.has_targetCellSMTC_SCG_r16) {
        Free_SSB_MTC(value.targetCellSMTC_SCG_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup：ASN.1 mrdc-SecondaryCellGroup；源文件第 1013 行；CHOICE。
// Encode_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup 只读不分配；Decode_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup 可能 malloc（失败时内部已释放并清零）；Free_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(Encoder& enc, const MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_nr_SCG:
        if (value.u.nr_SCG == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfiguration(enc, *value.u.nr_SCG);
        }
        break;
    case MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_eutra_SCG:
        enc.WriteSemiConstrainedOctetString(value.u.eutra_SCG.bytes, value.u.eutra_SCG.length, 0, 0xFFFFFFFFu);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(Decoder& dec, MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag)root_index;
    switch (value.tag) {
    case MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_nr_SCG: {
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
        value.u.nr_SCG = containing_value;
        break;
    }
    case MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_eutra_SCG: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.u.eutra_SCG.bytes = string_bytes;
        value.u.eutra_SCG.length = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup& value)
{
    switch (value.tag) {
    case MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_nr_SCG:
        if (value.u.nr_SCG != nullptr) {
            Free_RRCReconfiguration(*value.u.nr_SCG);
            std::free(value.u.nr_SCG);
        }
        break;
    case MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup_Tag_eutra_SCG:
        std::free(value.u.eutra_SCG.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRDC_SecondaryCellGroupConfig：ASN.1 MRDC-SecondaryCellGroupConfig；源文件第 1011 行；SEQUENCE。
// Encode_MRDC_SecondaryCellGroupConfig 只读不分配；Decode_MRDC_SecondaryCellGroupConfig 可能 malloc（失败时内部已释放并清零）；Free_MRDC_SecondaryCellGroupConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRDC_SecondaryCellGroupConfig(Encoder& enc, const MRDC_SecondaryCellGroupConfig& value)
{
    enc.WriteBit(value.has_mrdc_ReleaseAndAdd);
    if (value.has_mrdc_ReleaseAndAdd) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mrdc_ReleaseAndAdd), 0, 0);
    }
    Encode_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(enc, value.mrdc_SecondaryCellGroup);
    return enc.Error();
}

ErrorCode Decode_MRDC_SecondaryCellGroupConfig(Decoder& dec, MRDC_SecondaryCellGroupConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.mrdc_ReleaseAndAdd = (MRDC_SecondaryCellGroupConfig_Mrdc_ReleaseAndAdd)0;
    }
    {
        if (Decode_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(dec, value.mrdc_SecondaryCellGroup) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MRDC_SecondaryCellGroupConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRDC_SecondaryCellGroupConfig(MRDC_SecondaryCellGroupConfig& value)
{
    if (value.has_mrdc_ReleaseAndAdd) {
    }
    Free_MRDC_SecondaryCellGroupConfig_Mrdc_SecondaryCellGroup(value.mrdc_SecondaryCellGroup);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MRDC_SecondaryCellGroupConfig：ASN.1 SetupRelease<MRDC-SecondaryCellGroupConfig>；源文件第 963 行；CHOICE。
// Encode_SetupRelease_MRDC_SecondaryCellGroupConfig 只读不分配；Decode_SetupRelease_MRDC_SecondaryCellGroupConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MRDC_SecondaryCellGroupConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MRDC_SecondaryCellGroupConfig(Encoder& enc, const SetupRelease_MRDC_SecondaryCellGroupConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_setup:
        Encode_MRDC_SecondaryCellGroupConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MRDC_SecondaryCellGroupConfig(Decoder& dec, SetupRelease_MRDC_SecondaryCellGroupConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MRDC_SecondaryCellGroupConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_setup: {
        if (Decode_MRDC_SecondaryCellGroupConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MRDC_SecondaryCellGroupConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MRDC_SecondaryCellGroupConfig(SetupRelease_MRDC_SecondaryCellGroupConfig& value)
{
    switch (value.tag) {
    case SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_release:
        break;
    case SetupRelease_MRDC_SecondaryCellGroupConfig_Tag_setup:
        Free_MRDC_SecondaryCellGroupConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1560_IEs：ASN.1 RRCReconfiguration-v1560-IEs；源文件第 962 行；SEQUENCE。
// Encode_RRCReconfiguration_v1560_IEs 只读不分配；Decode_RRCReconfiguration_v1560_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1560_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1560_IEs(Encoder& enc, const RRCReconfiguration_v1560_IEs& value)
{
    enc.WriteBit(value.has_mrdc_SecondaryCellGroupConfig);
    enc.WriteBit(value.radioBearerConfig2 != nullptr);
    enc.WriteBit(value.has_sk_Counter);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mrdc_SecondaryCellGroupConfig) {
        Encode_SetupRelease_MRDC_SecondaryCellGroupConfig(enc, value.mrdc_SecondaryCellGroupConfig);
    }
    if (value.radioBearerConfig2 != nullptr) {
        if (value.radioBearerConfig2 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RadioBearerConfig(enc, *value.radioBearerConfig2);
        }
    }
    if (value.has_sk_Counter) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sk_Counter), 0, 65535);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1560_IEs(Decoder& dec, RRCReconfiguration_v1560_IEs& value)
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
        if (Decode_SetupRelease_MRDC_SecondaryCellGroupConfig(dec, value.mrdc_SecondaryCellGroupConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        RadioBearerConfig* containing_value = (RadioBearerConfig*)std::malloc(sizeof(RadioBearerConfig));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_RadioBearerConfig(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_RadioBearerConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_RadioBearerConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.radioBearerConfig2 = containing_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.sk_Counter = (SK_Counter)tmp_value;
    }
    if (present_3) {
        if (Decode_RRCReconfiguration_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_v1560_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1560_IEs(RRCReconfiguration_v1560_IEs& value)
{
    if (value.has_mrdc_SecondaryCellGroupConfig) {
        Free_SetupRelease_MRDC_SecondaryCellGroupConfig(value.mrdc_SecondaryCellGroupConfig);
    }
    if (value.radioBearerConfig2 != nullptr) {
        if (value.radioBearerConfig2 != nullptr) {
            Free_RadioBearerConfig(*value.radioBearerConfig2);
            std::free(value.radioBearerConfig2);
            value.radioBearerConfig2 = nullptr;
        }
    }
    if (value.has_sk_Counter) {
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OverheatingAssistanceConfig：ASN.1 OverheatingAssistanceConfig；源文件第 21680 行；SEQUENCE。
// Encode_OverheatingAssistanceConfig 只读不分配；Decode_OverheatingAssistanceConfig 可能 malloc（失败时内部已释放并清零）；Free_OverheatingAssistanceConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OverheatingAssistanceConfig(Encoder& enc, const OverheatingAssistanceConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.overheatingIndicationProhibitTimer), 0, 15);
    return enc.Error();
}

ErrorCode Decode_OverheatingAssistanceConfig(Decoder& dec, OverheatingAssistanceConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.overheatingIndicationProhibitTimer = (OverheatingAssistanceConfig_OverheatingIndicationProhibitTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OverheatingAssistanceConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OverheatingAssistanceConfig(OverheatingAssistanceConfig& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_OverheatingAssistanceConfig：ASN.1 SetupRelease<OverheatingAssistanceConfig>；源文件第 21588 行；CHOICE。
// Encode_SetupRelease_OverheatingAssistanceConfig 只读不分配；Decode_SetupRelease_OverheatingAssistanceConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_OverheatingAssistanceConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_OverheatingAssistanceConfig(Encoder& enc, const SetupRelease_OverheatingAssistanceConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_OverheatingAssistanceConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_OverheatingAssistanceConfig_Tag_setup:
        Encode_OverheatingAssistanceConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_OverheatingAssistanceConfig(Decoder& dec, SetupRelease_OverheatingAssistanceConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_OverheatingAssistanceConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_OverheatingAssistanceConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_OverheatingAssistanceConfig_Tag_setup: {
        if (Decode_OverheatingAssistanceConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_OverheatingAssistanceConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_OverheatingAssistanceConfig(SetupRelease_OverheatingAssistanceConfig& value)
{
    switch (value.tag) {
    case SetupRelease_OverheatingAssistanceConfig_Tag_release:
        break;
    case SetupRelease_OverheatingAssistanceConfig_Tag_setup:
        Free_OverheatingAssistanceConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig_v1540：ASN.1 OtherConfig-v1540；源文件第 21587 行；SEQUENCE。
// Encode_OtherConfig_v1540 只读不分配；Decode_OtherConfig_v1540 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig_v1540 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig_v1540(Encoder& enc, const OtherConfig_v1540& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_overheatingAssistanceConfig);
    if (value.has_overheatingAssistanceConfig) {
        Encode_SetupRelease_OverheatingAssistanceConfig(enc, value.overheatingAssistanceConfig);
    }
    return enc.Error();
}

ErrorCode Decode_OtherConfig_v1540(Decoder& dec, OtherConfig_v1540& value)
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
        if (Decode_SetupRelease_OverheatingAssistanceConfig(dec, value.overheatingAssistanceConfig) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig_v1540(OtherConfig_v1540& value)
{
    if (value.has_overheatingAssistanceConfig) {
        Free_SetupRelease_OverheatingAssistanceConfig(value.overheatingAssistanceConfig);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1540_IEs：ASN.1 RRCReconfiguration-v1540-IEs；源文件第 957 行；SEQUENCE。
// Encode_RRCReconfiguration_v1540_IEs 只读不分配；Decode_RRCReconfiguration_v1540_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1540_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1540_IEs(Encoder& enc, const RRCReconfiguration_v1540_IEs& value)
{
    enc.WriteBit(value.has_otherConfig_v1540);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_otherConfig_v1540) {
        Encode_OtherConfig_v1540(enc, value.otherConfig_v1540);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1560_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1540_IEs(Decoder& dec, RRCReconfiguration_v1540_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_OtherConfig_v1540(dec, value.otherConfig_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RRCReconfiguration_v1560_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_v1540_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1540_IEs(RRCReconfiguration_v1540_IEs& value)
{
    if (value.has_otherConfig_v1540) {
        Free_OtherConfig_v1540(value.otherConfig_v1540);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1560_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MasterKeyUpdate：ASN.1 MasterKeyUpdate；源文件第 1027 行；SEQUENCE。
// Encode_MasterKeyUpdate 只读不分配；Decode_MasterKeyUpdate 可能 malloc（失败时内部已释放并清零）；Free_MasterKeyUpdate 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MasterKeyUpdate(Encoder& enc, const MasterKeyUpdate& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_nas_Container);
    enc.WriteBool(value.keySetChangeIndicator);
    enc.WriteConstrainedInteger((std::int64_t)(value.nextHopChainingCount), 0, 7);
    if (value.has_nas_Container) {
        enc.WriteSemiConstrainedOctetString(value.nas_Container.bytes, value.nas_Container.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_MasterKeyUpdate(Decoder& dec, MasterKeyUpdate& value)
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
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.keySetChangeIndicator = tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nextHopChainingCount = (NextHopChainingCount)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.nas_Container.bytes = string_bytes;
        value.nas_Container.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MasterKeyUpdate(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MasterKeyUpdate(MasterKeyUpdate& value)
{
    if (value.has_nas_Container) {
        std::free(value.nas_Container.bytes);
        value.nas_Container.bytes = nullptr;
        value.nas_Container.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig_DelayBudgetReportingConfig_Setup：ASN.1 delayBudgetReportingConfig/setup；源文件第 21581 行；SEQUENCE。
// Encode_OtherConfig_DelayBudgetReportingConfig_Setup 只读不分配；Decode_OtherConfig_DelayBudgetReportingConfig_Setup 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig_DelayBudgetReportingConfig_Setup 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig_DelayBudgetReportingConfig_Setup(Encoder& enc, const OtherConfig_DelayBudgetReportingConfig_Setup& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.delayBudgetReportingProhibitTimer), 0, 7);
    return enc.Error();
}

ErrorCode Decode_OtherConfig_DelayBudgetReportingConfig_Setup(Decoder& dec, OtherConfig_DelayBudgetReportingConfig_Setup& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.delayBudgetReportingProhibitTimer = (OtherConfig_DelayBudgetReportingConfig_Setup_DelayBudgetReportingProhibitTimer)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig_DelayBudgetReportingConfig_Setup(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig_DelayBudgetReportingConfig_Setup(OtherConfig_DelayBudgetReportingConfig_Setup& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig_DelayBudgetReportingConfig：ASN.1 delayBudgetReportingConfig；源文件第 21579 行；CHOICE。
// Encode_OtherConfig_DelayBudgetReportingConfig 只读不分配；Decode_OtherConfig_DelayBudgetReportingConfig 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig_DelayBudgetReportingConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig_DelayBudgetReportingConfig(Encoder& enc, const OtherConfig_DelayBudgetReportingConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case OtherConfig_DelayBudgetReportingConfig_Tag_release:
        (void)0;
        break;
    case OtherConfig_DelayBudgetReportingConfig_Tag_setup:
        Encode_OtherConfig_DelayBudgetReportingConfig_Setup(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_OtherConfig_DelayBudgetReportingConfig(Decoder& dec, OtherConfig_DelayBudgetReportingConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (OtherConfig_DelayBudgetReportingConfig_Tag)root_index;
    switch (value.tag) {
    case OtherConfig_DelayBudgetReportingConfig_Tag_release: {
        (void)0;
        break;
    }
    case OtherConfig_DelayBudgetReportingConfig_Tag_setup: {
        if (Decode_OtherConfig_DelayBudgetReportingConfig_Setup(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig_DelayBudgetReportingConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig_DelayBudgetReportingConfig(OtherConfig_DelayBudgetReportingConfig& value)
{
    switch (value.tag) {
    case OtherConfig_DelayBudgetReportingConfig_Tag_release:
        break;
    case OtherConfig_DelayBudgetReportingConfig_Tag_setup:
        Free_OtherConfig_DelayBudgetReportingConfig_Setup(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// OtherConfig：ASN.1 OtherConfig；源文件第 21578 行；SEQUENCE。
// Encode_OtherConfig 只读不分配；Decode_OtherConfig 可能 malloc（失败时内部已释放并清零）；Free_OtherConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_OtherConfig(Encoder& enc, const OtherConfig& value)
{
    enc.WriteBit(value.has_delayBudgetReportingConfig);
    if (value.has_delayBudgetReportingConfig) {
        Encode_OtherConfig_DelayBudgetReportingConfig(enc, value.delayBudgetReportingConfig);
    }
    return enc.Error();
}

ErrorCode Decode_OtherConfig(Decoder& dec, OtherConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_OtherConfig_DelayBudgetReportingConfig(dec, value.delayBudgetReportingConfig) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_OtherConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_OtherConfig(OtherConfig& value)
{
    if (value.has_delayBudgetReportingConfig) {
        Free_OtherConfig_DelayBudgetReportingConfig(value.delayBudgetReportingConfig);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RRCReconfiguration_v1530_IEs：ASN.1 RRCReconfiguration-v1530-IEs；源文件第 946 行；SEQUENCE。
// Encode_RRCReconfiguration_v1530_IEs 只读不分配；Decode_RRCReconfiguration_v1530_IEs 可能 malloc（失败时内部已释放并清零）；Free_RRCReconfiguration_v1530_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RRCReconfiguration_v1530_IEs(Encoder& enc, const RRCReconfiguration_v1530_IEs& value)
{
    enc.WriteBit(value.masterCellGroup != nullptr);
    enc.WriteBit(value.has_fullConfig);
    enc.WriteBit(value.has_dedicatedNAS_MessageList);
    enc.WriteBit(value.has_masterKeyUpdate);
    enc.WriteBit(value.dedicatedSIB1_Delivery != nullptr);
    enc.WriteBit(value.dedicatedSystemInformationDelivery != nullptr);
    enc.WriteBit(value.has_otherConfig);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.masterCellGroup != nullptr) {
        if (value.masterCellGroup == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_CellGroupConfig(enc, *value.masterCellGroup);
        }
    }
    if (value.has_fullConfig) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fullConfig), 0, 0);
    }
    if (value.has_dedicatedNAS_MessageList) {
enc.WriteConstrainedLength(value.dedicatedNAS_MessageList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.dedicatedNAS_MessageList_count; ++i) {
    enc.WriteSemiConstrainedOctetString(value.dedicatedNAS_MessageList_items[i].bytes, value.dedicatedNAS_MessageList_items[i].length, 0, 0xFFFFFFFFu);
}
    }
    if (value.has_masterKeyUpdate) {
        Encode_MasterKeyUpdate(enc, value.masterKeyUpdate);
    }
    if (value.dedicatedSIB1_Delivery != nullptr) {
        if (value.dedicatedSIB1_Delivery == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_SIB1(enc, *value.dedicatedSIB1_Delivery);
        }
    }
    if (value.dedicatedSystemInformationDelivery != nullptr) {
        if (value.dedicatedSystemInformationDelivery == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_SystemInformation(enc, *value.dedicatedSystemInformationDelivery);
        }
    }
    if (value.has_otherConfig) {
        Encode_OtherConfig(enc, value.otherConfig);
    }
    if (value.has_nonCriticalExtension) {
        Encode_RRCReconfiguration_v1540_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_RRCReconfiguration_v1530_IEs(Decoder& dec, RRCReconfiguration_v1530_IEs& value)
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
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        CellGroupConfig* containing_value = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_CellGroupConfig(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_CellGroupConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_CellGroupConfig(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.masterCellGroup = containing_value;
    }
    if (present_1) {
        value.fullConfig = (RRCReconfiguration_v1530_IEs_FullConfig)0;
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.dedicatedNAS_MessageList_count)) { goto fail; }
if (value.dedicatedNAS_MessageList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.dedicatedNAS_MessageList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.dedicatedNAS_MessageList_count > 0u) {
    value.dedicatedNAS_MessageList_items = (DedicatedNAS_Message*)std::malloc((std::size_t)value.dedicatedNAS_MessageList_count * sizeof(DedicatedNAS_Message));
    if (value.dedicatedNAS_MessageList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.dedicatedNAS_MessageList_items, 0, (std::size_t)value.dedicatedNAS_MessageList_count * sizeof(DedicatedNAS_Message));
}
for (std::uint32_t i = 0; i < value.dedicatedNAS_MessageList_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
    value.dedicatedNAS_MessageList_items[i].bytes = string_bytes;
    value.dedicatedNAS_MessageList_items[i].length = string_length;
}
    }
    if (present_3) {
        if (Decode_MasterKeyUpdate(dec, value.masterKeyUpdate) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        SIB1* containing_value = (SIB1*)std::malloc(sizeof(SIB1));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_SIB1(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_SIB1(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_SIB1(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.dedicatedSIB1_Delivery = containing_value;
    }
    if (present_5) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        SystemInformation* containing_value = (SystemInformation*)std::malloc(sizeof(SystemInformation));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_SystemInformation(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_SystemInformation(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_SystemInformation(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.dedicatedSystemInformationDelivery = containing_value;
    }
    if (present_6) {
        if (Decode_OtherConfig(dec, value.otherConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_RRCReconfiguration_v1540_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RRCReconfiguration_v1530_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RRCReconfiguration_v1530_IEs(RRCReconfiguration_v1530_IEs& value)
{
    if (value.masterCellGroup != nullptr) {
        if (value.masterCellGroup != nullptr) {
            Free_CellGroupConfig(*value.masterCellGroup);
            std::free(value.masterCellGroup);
            value.masterCellGroup = nullptr;
        }
    }
    if (value.has_fullConfig) {
    }
    if (value.has_dedicatedNAS_MessageList) {
        if (value.dedicatedNAS_MessageList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.dedicatedNAS_MessageList_count; ++i) {
                std::free(value.dedicatedNAS_MessageList_items[i].bytes);
                value.dedicatedNAS_MessageList_items[i].bytes = nullptr;
                value.dedicatedNAS_MessageList_items[i].length = 0;
            }
            std::free(value.dedicatedNAS_MessageList_items);
            value.dedicatedNAS_MessageList_items = nullptr;
        }
        value.dedicatedNAS_MessageList_count = 0;
    }
    if (value.has_masterKeyUpdate) {
        Free_MasterKeyUpdate(value.masterKeyUpdate);
    }
    if (value.dedicatedSIB1_Delivery != nullptr) {
        if (value.dedicatedSIB1_Delivery != nullptr) {
            Free_SIB1(*value.dedicatedSIB1_Delivery);
            std::free(value.dedicatedSIB1_Delivery);
            value.dedicatedSIB1_Delivery = nullptr;
        }
    }
    if (value.dedicatedSystemInformationDelivery != nullptr) {
        if (value.dedicatedSystemInformationDelivery != nullptr) {
            Free_SystemInformation(*value.dedicatedSystemInformationDelivery);
            std::free(value.dedicatedSystemInformationDelivery);
            value.dedicatedSystemInformationDelivery = nullptr;
        }
    }
    if (value.has_otherConfig) {
        Free_OtherConfig(value.otherConfig);
    }
    if (value.has_nonCriticalExtension) {
        Free_RRCReconfiguration_v1540_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasWindowConfig_r18_WindowOffsetPeriodicity：ASN.1 windowOffsetPeriodicity；源文件第 8294 行；CHOICE。
// Encode_MeasWindowConfig_r18_WindowOffsetPeriodicity 只读不分配；Decode_MeasWindowConfig_r18_WindowOffsetPeriodicity 可能 malloc（失败时内部已释放并清零）；Free_MeasWindowConfig_r18_WindowOffsetPeriodicity 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasWindowConfig_r18_WindowOffsetPeriodicity(Encoder& enc, const MeasWindowConfig_r18_WindowOffsetPeriodicity& value)
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
    case MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.periodicityMs40), 0, 39);
        break;
    case MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.periodicityMs80), 0, 79);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasWindowConfig_r18_WindowOffsetPeriodicity(Decoder& dec, MeasWindowConfig_r18_WindowOffsetPeriodicity& value)
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
        value.tag = (MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag)(2 + extension_index);
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
    value.tag = (MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag)root_index;
    switch (value.tag) {
    case MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.periodicityMs40 = (int64_t)tmp_value;
        break;
    }
    case MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.periodicityMs80 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasWindowConfig_r18_WindowOffsetPeriodicity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasWindowConfig_r18_WindowOffsetPeriodicity(MeasWindowConfig_r18_WindowOffsetPeriodicity& value)
{
    switch (value.tag) {
    case MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs40:
        break;
    case MeasWindowConfig_r18_WindowOffsetPeriodicity_Tag_periodicityMs80:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasWindowConfig_r18：ASN.1 MeasWindowConfig-r18；源文件第 8293 行；SEQUENCE。
// Encode_MeasWindowConfig_r18 只读不分配；Decode_MeasWindowConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_MeasWindowConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasWindowConfig_r18(Encoder& enc, const MeasWindowConfig_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_MeasWindowConfig_r18_WindowOffsetPeriodicity(enc, value.windowOffsetPeriodicity);
    enc.WriteConstrainedInteger((std::int64_t)(value.windowDuration), 0, 3);
    return enc.Error();
}

ErrorCode Decode_MeasWindowConfig_r18(Decoder& dec, MeasWindowConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_MeasWindowConfig_r18_WindowOffsetPeriodicity(dec, value.windowOffsetPeriodicity) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.windowDuration = (MeasWindowConfig_r18_WindowDuration)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasWindowConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasWindowConfig_r18(MeasWindowConfig_r18& value)
{
    Free_MeasWindowConfig_r18_WindowOffsetPeriodicity(value.windowOffsetPeriodicity);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MeasWindowConfig_r18：ASN.1 SetupRelease<MeasWindowConfig-r18>；源文件第 7405 行；CHOICE。
// Encode_SetupRelease_MeasWindowConfig_r18 只读不分配；Decode_SetupRelease_MeasWindowConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MeasWindowConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MeasWindowConfig_r18(Encoder& enc, const SetupRelease_MeasWindowConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MeasWindowConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_MeasWindowConfig_r18_Tag_setup:
        Encode_MeasWindowConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MeasWindowConfig_r18(Decoder& dec, SetupRelease_MeasWindowConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MeasWindowConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MeasWindowConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MeasWindowConfig_r18_Tag_setup: {
        if (Decode_MeasWindowConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MeasWindowConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MeasWindowConfig_r18(SetupRelease_MeasWindowConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_MeasWindowConfig_r18_Tag_release:
        break;
    case SetupRelease_MeasWindowConfig_r18_Tag_setup:
        Free_MeasWindowConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasConfig_ExtGroup2：ASN.1 MeasConfig_ExtGroup2；源文件第 7404 行；扩展添加组 [[ ]]。
// Encode_MeasConfig_ExtGroup2 只读不分配；Decode_MeasConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_MeasConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasConfig_ExtGroup2(Encoder& enc, const MeasConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_effectiveMeasWindowConfig_r18);
    if (value.has_effectiveMeasWindowConfig_r18) {
        Encode_SetupRelease_MeasWindowConfig_r18(enc, value.effectiveMeasWindowConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MeasConfig_ExtGroup2(Decoder& dec, MeasConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MeasWindowConfig_r18(dec, value.effectiveMeasWindowConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasConfig_ExtGroup2(MeasConfig_ExtGroup2& value)
{
    if (value.has_effectiveMeasWindowConfig_r18) {
        Free_SetupRelease_MeasWindowConfig_r18(value.effectiveMeasWindowConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasConfig_ExtGroup1：ASN.1 MeasConfig_ExtGroup1；源文件第 7401 行；扩展添加组 [[ ]]。
// Encode_MeasConfig_ExtGroup1 只读不分配；Decode_MeasConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasConfig_ExtGroup1(Encoder& enc, const MeasConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_interFrequencyConfig_NoGap_r16);
    if (value.has_interFrequencyConfig_NoGap_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interFrequencyConfig_NoGap_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MeasConfig_ExtGroup1(Decoder& dec, MeasConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.interFrequencyConfig_NoGap_r16 = (MeasConfig_ExtGroup1_InterFrequencyConfig_NoGap_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasConfig_ExtGroup1(MeasConfig_ExtGroup1& value)
{
    if (value.has_interFrequencyConfig_NoGap_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectToRemoveList：ASN.1 MeasObjectToRemoveList；源文件第 7409 行；SEQUENCE OF。
// Encode_MeasObjectToRemoveList 只读不分配；Decode_MeasObjectToRemoveList 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectToRemoveList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectToRemoveList(Encoder& enc, const MeasObjectToRemoveList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectToRemoveList(Decoder& dec, MeasObjectToRemoveList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasObjectId*)std::malloc((std::size_t)value.count * sizeof(MeasObjectId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasObjectId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (MeasObjectId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectToRemoveList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectToRemoveList(MeasObjectToRemoveList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasIdToRemoveList：ASN.1 MeasIdToRemoveList；源文件第 7411 行；SEQUENCE OF。
// Encode_MeasIdToRemoveList 只读不分配；Decode_MeasIdToRemoveList 可能 malloc（失败时内部已释放并清零）；Free_MeasIdToRemoveList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasIdToRemoveList(Encoder& enc, const MeasIdToRemoveList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdToRemoveList(Decoder& dec, MeasIdToRemoveList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasId*)std::malloc((std::size_t)value.count * sizeof(MeasId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (MeasId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdToRemoveList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdToRemoveList(MeasIdToRemoveList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigToRemoveList：ASN.1 ReportConfigToRemoveList；源文件第 7413 行；SEQUENCE OF。
// Encode_ReportConfigToRemoveList 只读不分配；Decode_ReportConfigToRemoveList 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigToRemoveList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigToRemoveList(Encoder& enc, const ReportConfigToRemoveList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_ReportConfigToRemoveList(Decoder& dec, ReportConfigToRemoveList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ReportConfigId*)std::malloc((std::size_t)value.count * sizeof(ReportConfigId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ReportConfigId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
    value.items[i] = (ReportConfigId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigToRemoveList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigToRemoveList(ReportConfigToRemoveList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosMeasGapPreConfigToAddModList_r17：ASN.1 PosMeasGapPreConfigToAddModList-r17；源文件第 7466 行；SEQUENCE OF。
// Encode_PosMeasGapPreConfigToAddModList_r17 只读不分配；Decode_PosMeasGapPreConfigToAddModList_r17 可能 malloc（失败时内部已释放并清零）；Free_PosMeasGapPreConfigToAddModList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosMeasGapPreConfigToAddModList_r17(Encoder& enc, const PosMeasGapPreConfigToAddModList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PosGapConfig_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PosMeasGapPreConfigToAddModList_r17(Decoder& dec, PosMeasGapPreConfigToAddModList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PosGapConfig_r17*)std::malloc((std::size_t)value.count * sizeof(PosGapConfig_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PosGapConfig_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PosGapConfig_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PosMeasGapPreConfigToAddModList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosMeasGapPreConfigToAddModList_r17(PosMeasGapPreConfigToAddModList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PosGapConfig_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosMeasGapPreConfigToReleaseList_r17：ASN.1 PosMeasGapPreConfigToReleaseList-r17；源文件第 7468 行；SEQUENCE OF。
// Encode_PosMeasGapPreConfigToReleaseList_r17 只读不分配；Decode_PosMeasGapPreConfigToReleaseList_r17 可能 malloc（失败时内部已释放并清零）；Free_PosMeasGapPreConfigToReleaseList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosMeasGapPreConfigToReleaseList_r17(Encoder& enc, const PosMeasGapPreConfigToReleaseList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_PosMeasGapPreConfigToReleaseList_r17(Decoder& dec, PosMeasGapPreConfigToReleaseList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasPosPreConfigGapId_r17*)std::malloc((std::size_t)value.count * sizeof(MeasPosPreConfigGapId_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasPosPreConfigGapId_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
    value.items[i] = (MeasPosPreConfigGapId_r17)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PosMeasGapPreConfigToReleaseList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosMeasGapPreConfigToReleaseList_r17(PosMeasGapPreConfigToReleaseList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasGapConfig_ExtGroup2：ASN.1 MeasGapConfig_ExtGroup2；源文件第 7425 行；扩展添加组 [[ ]]。
// Encode_MeasGapConfig_ExtGroup2 只读不分配；Decode_MeasGapConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_MeasGapConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasGapConfig_ExtGroup2(Encoder& enc, const MeasGapConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_gapToAddModList_r17);
    enc.WriteBit(value.has_gapToReleaseList_r17);
    enc.WriteBit(value.has_posMeasGapPreConfigToAddModList_r17);
    enc.WriteBit(value.has_posMeasGapPreConfigToReleaseList_r17);
    if (value.has_gapToAddModList_r17) {
enc.WriteConstrainedLength(value.gapToAddModList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.gapToAddModList_r17_count; ++i) {
    Encode_GapConfig_r17(enc, value.gapToAddModList_r17_items[i]);
}
    }
    if (value.has_gapToReleaseList_r17) {
enc.WriteConstrainedLength(value.gapToReleaseList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.gapToReleaseList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.gapToReleaseList_r17_items[i]), 1, 8);
}
    }
    if (value.has_posMeasGapPreConfigToAddModList_r17) {
        Encode_PosMeasGapPreConfigToAddModList_r17(enc, value.posMeasGapPreConfigToAddModList_r17);
    }
    if (value.has_posMeasGapPreConfigToReleaseList_r17) {
        Encode_PosMeasGapPreConfigToReleaseList_r17(enc, value.posMeasGapPreConfigToReleaseList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasGapConfig_ExtGroup2(Decoder& dec, MeasGapConfig_ExtGroup2& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.gapToAddModList_r17_count)) { goto fail; }
if (value.gapToAddModList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.gapToAddModList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.gapToAddModList_r17_count > 0u) {
    value.gapToAddModList_r17_items = (GapConfig_r17*)std::malloc((std::size_t)value.gapToAddModList_r17_count * sizeof(GapConfig_r17));
    if (value.gapToAddModList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.gapToAddModList_r17_items, 0, (std::size_t)value.gapToAddModList_r17_count * sizeof(GapConfig_r17));
}
for (std::uint32_t i = 0; i < value.gapToAddModList_r17_count; ++i) {
    if (Decode_GapConfig_r17(dec, value.gapToAddModList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.gapToReleaseList_r17_count)) { goto fail; }
if (value.gapToReleaseList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.gapToReleaseList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.gapToReleaseList_r17_count > 0u) {
    value.gapToReleaseList_r17_items = (MeasGapId_r17*)std::malloc((std::size_t)value.gapToReleaseList_r17_count * sizeof(MeasGapId_r17));
    if (value.gapToReleaseList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.gapToReleaseList_r17_items, 0, (std::size_t)value.gapToReleaseList_r17_count * sizeof(MeasGapId_r17));
}
for (std::uint32_t i = 0; i < value.gapToReleaseList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.gapToReleaseList_r17_items[i] = (MeasGapId_r17)tmp_value;
}
    }
    if (present_2) {
        if (Decode_PosMeasGapPreConfigToAddModList_r17(dec, value.posMeasGapPreConfigToAddModList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PosMeasGapPreConfigToReleaseList_r17(dec, value.posMeasGapPreConfigToReleaseList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasGapConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasGapConfig_ExtGroup2(MeasGapConfig_ExtGroup2& value)
{
    if (value.has_gapToAddModList_r17) {
        if (value.gapToAddModList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.gapToAddModList_r17_count; ++i) {
                Free_GapConfig_r17(value.gapToAddModList_r17_items[i]);
            }
            std::free(value.gapToAddModList_r17_items);
            value.gapToAddModList_r17_items = nullptr;
        }
        value.gapToAddModList_r17_count = 0;
    }
    if (value.has_gapToReleaseList_r17) {
        if (value.gapToReleaseList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.gapToReleaseList_r17_count; ++i) {
            }
            std::free(value.gapToReleaseList_r17_items);
            value.gapToReleaseList_r17_items = nullptr;
        }
        value.gapToReleaseList_r17_count = 0;
    }
    if (value.has_posMeasGapPreConfigToAddModList_r17) {
        Free_PosMeasGapPreConfigToAddModList_r17(value.posMeasGapPreConfigToAddModList_r17);
    }
    if (value.has_posMeasGapPreConfigToReleaseList_r17) {
        Free_PosMeasGapPreConfigToReleaseList_r17(value.posMeasGapPreConfigToReleaseList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GapConfig_ExtGroup1：ASN.1 GapConfig_ExtGroup1；源文件第 7440 行；扩展添加组 [[ ]]。
// Encode_GapConfig_ExtGroup1 只读不分配；Decode_GapConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_GapConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GapConfig_ExtGroup1(Encoder& enc, const GapConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_refServCellIndicator);
    if (value.has_refServCellIndicator) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refServCellIndicator), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_GapConfig_ExtGroup1(Decoder& dec, GapConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.refServCellIndicator = (GapConfig_ExtGroup1_RefServCellIndicator)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GapConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GapConfig_ExtGroup1(GapConfig_ExtGroup1& value)
{
    if (value.has_refServCellIndicator) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GapConfig_ExtGroup2：ASN.1 GapConfig_ExtGroup2；源文件第 7443 行；扩展添加组 [[ ]]。
// Encode_GapConfig_ExtGroup2 只读不分配；Decode_GapConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_GapConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GapConfig_ExtGroup2(Encoder& enc, const GapConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_refFR2ServCellAsyncCA_r16);
    enc.WriteBit(value.has_mgl_r16);
    if (value.has_refFR2ServCellAsyncCA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFR2ServCellAsyncCA_r16), 0, 31);
    }
    if (value.has_mgl_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mgl_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_GapConfig_ExtGroup2(Decoder& dec, GapConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.refFR2ServCellAsyncCA_r16 = (ServCellIndex)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mgl_r16 = (GapConfig_ExtGroup2_Mgl_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GapConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GapConfig_ExtGroup2(GapConfig_ExtGroup2& value)
{
    if (value.has_refFR2ServCellAsyncCA_r16) {
    }
    if (value.has_mgl_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GapConfig：ASN.1 GapConfig；源文件第 7434 行；SEQUENCE。
// Encode_GapConfig 只读不分配；Decode_GapConfig 可能 malloc（失败时内部已释放并清零）；Free_GapConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GapConfig(Encoder& enc, const GapConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapOffset), 0, 159);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgl), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgrp), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgta), 0, 2);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_GapConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_GapConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_GapConfig(Decoder& dec, GapConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.gapOffset = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.mgl = (GapConfig_Mgl)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mgrp = (GapConfig_Mgrp)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mgta = (GapConfig_Mgta)tmp_value;
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
    if (Decode_GapConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_GapConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_GapConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GapConfig(GapConfig& value)
{
    if (value.has_extGroup1) {
        Free_GapConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_GapConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_GapConfig：ASN.1 SetupRelease<GapConfig>；源文件第 7419 行；CHOICE。
// Encode_SetupRelease_GapConfig 只读不分配；Decode_SetupRelease_GapConfig 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_GapConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_GapConfig(Encoder& enc, const SetupRelease_GapConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_GapConfig_Tag_release:
        (void)0;
        break;
    case SetupRelease_GapConfig_Tag_setup:
        Encode_GapConfig(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_GapConfig(Decoder& dec, SetupRelease_GapConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_GapConfig_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_GapConfig_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_GapConfig_Tag_setup: {
        if (Decode_GapConfig(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_GapConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_GapConfig(SetupRelease_GapConfig& value)
{
    switch (value.tag) {
    case SetupRelease_GapConfig_Tag_release:
        break;
    case SetupRelease_GapConfig_Tag_setup:
        Free_GapConfig(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasGapConfig_ExtGroup1：ASN.1 MeasGapConfig_ExtGroup1；源文件第 7421 行；扩展添加组 [[ ]]。
// Encode_MeasGapConfig_ExtGroup1 只读不分配；Decode_MeasGapConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasGapConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasGapConfig_ExtGroup1(Encoder& enc, const MeasGapConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_gapFR1);
    enc.WriteBit(value.has_gapUE);
    if (value.has_gapFR1) {
        Encode_SetupRelease_GapConfig(enc, value.gapFR1);
    }
    if (value.has_gapUE) {
        Encode_SetupRelease_GapConfig(enc, value.gapUE);
    }
    return enc.Error();
}

ErrorCode Decode_MeasGapConfig_ExtGroup1(Decoder& dec, MeasGapConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_GapConfig(dec, value.gapFR1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_GapConfig(dec, value.gapUE) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasGapConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasGapConfig_ExtGroup1(MeasGapConfig_ExtGroup1& value)
{
    if (value.has_gapFR1) {
        Free_SetupRelease_GapConfig(value.gapFR1);
    }
    if (value.has_gapUE) {
        Free_SetupRelease_GapConfig(value.gapUE);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasGapConfig：ASN.1 MeasGapConfig；源文件第 7418 行；SEQUENCE。
// Encode_MeasGapConfig 只读不分配；Decode_MeasGapConfig 可能 malloc（失败时内部已释放并清零）；Free_MeasGapConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasGapConfig(Encoder& enc, const MeasGapConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_gapFR2);
    if (value.has_gapFR2) {
        Encode_SetupRelease_GapConfig(enc, value.gapFR2);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasGapConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasGapConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasGapConfig(Decoder& dec, MeasGapConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_GapConfig(dec, value.gapFR2) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasGapConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MeasGapConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_MeasGapConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasGapConfig(MeasGapConfig& value)
{
    if (value.has_gapFR2) {
        Free_SetupRelease_GapConfig(value.gapFR2);
    }
    if (value.has_extGroup1) {
        Free_MeasGapConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasGapConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_MeasGapSharingScheme：ASN.1 SetupRelease<MeasGapSharingScheme>；源文件第 7491 行；CHOICE。
// Encode_SetupRelease_MeasGapSharingScheme 只读不分配；Decode_SetupRelease_MeasGapSharingScheme 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_MeasGapSharingScheme 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_MeasGapSharingScheme(Encoder& enc, const SetupRelease_MeasGapSharingScheme& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_MeasGapSharingScheme_Tag_release:
        (void)0;
        break;
    case SetupRelease_MeasGapSharingScheme_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_MeasGapSharingScheme(Decoder& dec, SetupRelease_MeasGapSharingScheme& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_MeasGapSharingScheme_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_MeasGapSharingScheme_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_MeasGapSharingScheme_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.setup = (MeasGapSharingScheme)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_MeasGapSharingScheme(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_MeasGapSharingScheme(SetupRelease_MeasGapSharingScheme& value)
{
    switch (value.tag) {
    case SetupRelease_MeasGapSharingScheme_Tag_release:
        break;
    case SetupRelease_MeasGapSharingScheme_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasGapSharingConfig_ExtGroup1：ASN.1 MeasGapSharingConfig_ExtGroup1；源文件第 7493 行；扩展添加组 [[ ]]。
// Encode_MeasGapSharingConfig_ExtGroup1 只读不分配；Decode_MeasGapSharingConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasGapSharingConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasGapSharingConfig_ExtGroup1(Encoder& enc, const MeasGapSharingConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_gapSharingFR1);
    enc.WriteBit(value.has_gapSharingUE);
    if (value.has_gapSharingFR1) {
        Encode_SetupRelease_MeasGapSharingScheme(enc, value.gapSharingFR1);
    }
    if (value.has_gapSharingUE) {
        Encode_SetupRelease_MeasGapSharingScheme(enc, value.gapSharingUE);
    }
    return enc.Error();
}

ErrorCode Decode_MeasGapSharingConfig_ExtGroup1(Decoder& dec, MeasGapSharingConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MeasGapSharingScheme(dec, value.gapSharingFR1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_MeasGapSharingScheme(dec, value.gapSharingUE) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasGapSharingConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasGapSharingConfig_ExtGroup1(MeasGapSharingConfig_ExtGroup1& value)
{
    if (value.has_gapSharingFR1) {
        Free_SetupRelease_MeasGapSharingScheme(value.gapSharingFR1);
    }
    if (value.has_gapSharingUE) {
        Free_SetupRelease_MeasGapSharingScheme(value.gapSharingUE);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasGapSharingConfig：ASN.1 MeasGapSharingConfig；源文件第 7490 行；SEQUENCE。
// Encode_MeasGapSharingConfig 只读不分配；Decode_MeasGapSharingConfig 可能 malloc（失败时内部已释放并清零）；Free_MeasGapSharingConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasGapSharingConfig(Encoder& enc, const MeasGapSharingConfig& value)
{
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_gapSharingFR2);
    if (value.has_gapSharingFR2) {
        Encode_SetupRelease_MeasGapSharingScheme(enc, value.gapSharingFR2);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasGapSharingConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasGapSharingConfig(Decoder& dec, MeasGapSharingConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_MeasGapSharingScheme(dec, value.gapSharingFR2) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasGapSharingConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MeasGapSharingConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasGapSharingConfig(MeasGapSharingConfig& value)
{
    if (value.has_gapSharingFR2) {
        Free_SetupRelease_MeasGapSharingScheme(value.gapSharingFR2);
    }
    if (value.has_extGroup1) {
        Free_MeasGapSharingConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasIdToAddModList：ASN.1 MeasIdToAddModList；源文件第 7599 行；SEQUENCE OF。
// Encode_MeasIdToAddModList 只读不分配；Decode_MeasIdToAddModList 可能 malloc（失败时内部已释放并清零）；Free_MeasIdToAddModList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasIdToAddModList(Encoder& enc, const MeasIdToAddModList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasIdToAddMod(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdToAddModList(Decoder& dec, MeasIdToAddModList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasIdToAddMod*)std::malloc((std::size_t)value.count * sizeof(MeasIdToAddMod));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasIdToAddMod));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasIdToAddMod(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdToAddModList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdToAddModList(MeasIdToAddModList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasIdToAddMod(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectToAddModList：ASN.1 MeasObjectToAddModList；源文件第 7905 行；SEQUENCE OF。
// Encode_MeasObjectToAddModList 只读不分配；Decode_MeasObjectToAddModList 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectToAddModList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectToAddModList(Encoder& enc, const MeasObjectToAddModList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasObjectToAddMod(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectToAddModList(Decoder& dec, MeasObjectToAddModList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasObjectToAddMod*)std::malloc((std::size_t)value.count * sizeof(MeasObjectToAddMod));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasObjectToAddMod));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasObjectToAddMod(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectToAddModList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectToAddModList(MeasObjectToAddModList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasObjectToAddMod(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FilterConfig：ASN.1 FilterConfig；源文件第 10696 行；SEQUENCE。
// Encode_FilterConfig 只读不分配；Decode_FilterConfig 可能 malloc（失败时内部已释放并清零）；Free_FilterConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FilterConfig(Encoder& enc, const FilterConfig& value)
{
    enc.WriteBit(value.filterCoefficientRSRP != FilterCoefficient_fc4);
    enc.WriteBit(value.filterCoefficientRSRQ != FilterCoefficient_fc4);
    enc.WriteBit(value.filterCoefficientRS_SINR != FilterCoefficient_fc4);
    if (value.filterCoefficientRSRP != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientRSRP);
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
    if (value.filterCoefficientRSRQ != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientRSRQ);
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
    if (value.filterCoefficientRS_SINR != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientRS_SINR);
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

ErrorCode Decode_FilterConfig(Decoder& dec, FilterConfig& value)
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
        value.filterCoefficientRSRP = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientRSRP = FilterCoefficient_fc4;
    }
    if (present_1) {
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
        value.filterCoefficientRSRQ = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientRSRQ = FilterCoefficient_fc4;
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
        value.filterCoefficientRS_SINR = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientRS_SINR = FilterCoefficient_fc4;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FilterConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FilterConfig(FilterConfig& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QuantityConfig_ExtGroup1：ASN.1 QuantityConfig_ExtGroup1；源文件第 10677 行；扩展添加组 [[ ]]。
// Encode_QuantityConfig_ExtGroup1 只读不分配；Decode_QuantityConfig_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_QuantityConfig_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QuantityConfig_ExtGroup1(Encoder& enc, const QuantityConfig_ExtGroup1& value)
{
    enc.WriteBit(value.has_quantityConfigEUTRA);
    if (value.has_quantityConfigEUTRA) {
        Encode_FilterConfig(enc, value.quantityConfigEUTRA);
    }
    return enc.Error();
}

ErrorCode Decode_QuantityConfig_ExtGroup1(Decoder& dec, QuantityConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_FilterConfig(dec, value.quantityConfigEUTRA) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_QuantityConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QuantityConfig_ExtGroup1(QuantityConfig_ExtGroup1& value)
{
    if (value.has_quantityConfigEUTRA) {
        Free_FilterConfig(value.quantityConfigEUTRA);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FilterConfigCLI_r16：ASN.1 FilterConfigCLI-r16；源文件第 10702 行；SEQUENCE。
// Encode_FilterConfigCLI_r16 只读不分配；Decode_FilterConfigCLI_r16 可能 malloc（失败时内部已释放并清零）；Free_FilterConfigCLI_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FilterConfigCLI_r16(Encoder& enc, const FilterConfigCLI_r16& value)
{
    enc.WriteBit(value.filterCoefficientSRS_RSRP_r16 != FilterCoefficient_fc4);
    enc.WriteBit(value.filterCoefficientCLI_RSSI_r16 != FilterCoefficient_fc4);
    if (value.filterCoefficientSRS_RSRP_r16 != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientSRS_RSRP_r16);
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
    if (value.filterCoefficientCLI_RSSI_r16 != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientCLI_RSSI_r16);
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

ErrorCode Decode_FilterConfigCLI_r16(Decoder& dec, FilterConfigCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
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
        value.filterCoefficientSRS_RSRP_r16 = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientSRS_RSRP_r16 = FilterCoefficient_fc4;
    }
    if (present_1) {
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
        value.filterCoefficientCLI_RSSI_r16 = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientCLI_RSSI_r16 = FilterCoefficient_fc4;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FilterConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FilterConfigCLI_r16(FilterConfigCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QuantityConfigUTRA_FDD_r16：ASN.1 QuantityConfigUTRA-FDD-r16；源文件第 10707 行；SEQUENCE。
// Encode_QuantityConfigUTRA_FDD_r16 只读不分配；Decode_QuantityConfigUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_QuantityConfigUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QuantityConfigUTRA_FDD_r16(Encoder& enc, const QuantityConfigUTRA_FDD_r16& value)
{
    enc.WriteBit(value.filterCoefficientRSCP_r16 != FilterCoefficient_fc4);
    enc.WriteBit(value.filterCoefficientEcNO_r16 != FilterCoefficient_fc4);
    if (value.filterCoefficientRSCP_r16 != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientRSCP_r16);
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
    if (value.filterCoefficientEcNO_r16 != FilterCoefficient_fc4) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.filterCoefficientEcNO_r16);
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

ErrorCode Decode_QuantityConfigUTRA_FDD_r16(Decoder& dec, QuantityConfigUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
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
        value.filterCoefficientRSCP_r16 = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientRSCP_r16 = FilterCoefficient_fc4;
    }
    if (present_1) {
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
        value.filterCoefficientEcNO_r16 = (FilterCoefficient)enum_value;
    } else {
        value.filterCoefficientEcNO_r16 = FilterCoefficient_fc4;
    }
    return dec.Error();
    } while (false);
fail:
    Free_QuantityConfigUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QuantityConfigUTRA_FDD_r16(QuantityConfigUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QuantityConfig_ExtGroup2：ASN.1 QuantityConfig_ExtGroup2；源文件第 10680 行；扩展添加组 [[ ]]。
// Encode_QuantityConfig_ExtGroup2 只读不分配；Decode_QuantityConfig_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_QuantityConfig_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QuantityConfig_ExtGroup2(Encoder& enc, const QuantityConfig_ExtGroup2& value)
{
    enc.WriteBit(value.has_quantityConfigUTRA_FDD_r16);
    enc.WriteBit(value.has_quantityConfigCLI_r16);
    if (value.has_quantityConfigUTRA_FDD_r16) {
        Encode_QuantityConfigUTRA_FDD_r16(enc, value.quantityConfigUTRA_FDD_r16);
    }
    if (value.has_quantityConfigCLI_r16) {
        Encode_FilterConfigCLI_r16(enc, value.quantityConfigCLI_r16);
    }
    return enc.Error();
}

ErrorCode Decode_QuantityConfig_ExtGroup2(Decoder& dec, QuantityConfig_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_QuantityConfigUTRA_FDD_r16(dec, value.quantityConfigUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FilterConfigCLI_r16(dec, value.quantityConfigCLI_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_QuantityConfig_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QuantityConfig_ExtGroup2(QuantityConfig_ExtGroup2& value)
{
    if (value.has_quantityConfigUTRA_FDD_r16) {
        Free_QuantityConfigUTRA_FDD_r16(value.quantityConfigUTRA_FDD_r16);
    }
    if (value.has_quantityConfigCLI_r16) {
        Free_FilterConfigCLI_r16(value.quantityConfigCLI_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// QuantityConfig：ASN.1 QuantityConfig；源文件第 10674 行；SEQUENCE。
// Encode_QuantityConfig 只读不分配；Decode_QuantityConfig 可能 malloc（失败时内部已释放并清零）；Free_QuantityConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_QuantityConfig(Encoder& enc, const QuantityConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_quantityConfigNR_List);
    if (value.has_quantityConfigNR_List) {
enc.WriteConstrainedLength(value.quantityConfigNR_List_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.quantityConfigNR_List_count; ++i) {
    Encode_QuantityConfigNR(enc, value.quantityConfigNR_List_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_QuantityConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_QuantityConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_QuantityConfig(Decoder& dec, QuantityConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.quantityConfigNR_List_count)) { goto fail; }
if (value.quantityConfigNR_List_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.quantityConfigNR_List_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.quantityConfigNR_List_count > 0u) {
    value.quantityConfigNR_List_items = (QuantityConfigNR*)std::malloc((std::size_t)value.quantityConfigNR_List_count * sizeof(QuantityConfigNR));
    if (value.quantityConfigNR_List_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.quantityConfigNR_List_items, 0, (std::size_t)value.quantityConfigNR_List_count * sizeof(QuantityConfigNR));
}
for (std::uint32_t i = 0; i < value.quantityConfigNR_List_count; ++i) {
    if (Decode_QuantityConfigNR(dec, value.quantityConfigNR_List_items[i]) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_QuantityConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_QuantityConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_QuantityConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_QuantityConfig(QuantityConfig& value)
{
    if (value.has_quantityConfigNR_List) {
        if (value.quantityConfigNR_List_items != nullptr) {
            for (std::uint32_t i = 0; i < value.quantityConfigNR_List_count; ++i) {
                Free_QuantityConfigNR(value.quantityConfigNR_List_items[i]);
            }
            std::free(value.quantityConfigNR_List_items);
            value.quantityConfigNR_List_items = nullptr;
        }
        value.quantityConfigNR_List_count = 0;
    }
    if (value.has_extGroup1) {
        Free_QuantityConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_QuantityConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReportConfigToAddModList：ASN.1 ReportConfigToAddModList；源文件第 11813 行；SEQUENCE OF。
// Encode_ReportConfigToAddModList 只读不分配；Decode_ReportConfigToAddModList 可能 malloc（失败时内部已释放并清零）；Free_ReportConfigToAddModList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReportConfigToAddModList(Encoder& enc, const ReportConfigToAddModList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_ReportConfigToAddMod(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ReportConfigToAddModList(Decoder& dec, ReportConfigToAddModList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (ReportConfigToAddMod*)std::malloc((std::size_t)value.count * sizeof(ReportConfigToAddMod));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(ReportConfigToAddMod));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_ReportConfigToAddMod(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_ReportConfigToAddModList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReportConfigToAddModList(ReportConfigToAddModList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_ReportConfigToAddMod(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasConfig_S_MeasureConfig：ASN.1 s-MeasureConfig；源文件第 7393 行；CHOICE。
// Encode_MeasConfig_S_MeasureConfig 只读不分配；Decode_MeasConfig_S_MeasureConfig 可能 malloc（失败时内部已释放并清零）；Free_MeasConfig_S_MeasureConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasConfig_S_MeasureConfig(Encoder& enc, const MeasConfig_S_MeasureConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MeasConfig_S_MeasureConfig_Tag_ssb_RSRP:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_RSRP), 0, 127);
        break;
    case MeasConfig_S_MeasureConfig_Tag_csi_RSRP:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RSRP), 0, 127);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasConfig_S_MeasureConfig(Decoder& dec, MeasConfig_S_MeasureConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MeasConfig_S_MeasureConfig_Tag)root_index;
    switch (value.tag) {
    case MeasConfig_S_MeasureConfig_Tag_ssb_RSRP: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ssb_RSRP = (RSRP_Range)tmp_value;
        break;
    }
    case MeasConfig_S_MeasureConfig_Tag_csi_RSRP: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.csi_RSRP = (RSRP_Range)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasConfig_S_MeasureConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasConfig_S_MeasureConfig(MeasConfig_S_MeasureConfig& value)
{
    switch (value.tag) {
    case MeasConfig_S_MeasureConfig_Tag_ssb_RSRP:
        break;
    case MeasConfig_S_MeasureConfig_Tag_csi_RSRP:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasConfig：ASN.1 MeasConfig；源文件第 7386 行；SEQUENCE。
// Encode_MeasConfig 只读不分配；Decode_MeasConfig 可能 malloc（失败时内部已释放并清零）；Free_MeasConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasConfig(Encoder& enc, const MeasConfig& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measObjectToRemoveList);
    enc.WriteBit(value.has_measObjectToAddModList);
    enc.WriteBit(value.has_reportConfigToRemoveList);
    enc.WriteBit(value.has_reportConfigToAddModList);
    enc.WriteBit(value.has_measIdToRemoveList);
    enc.WriteBit(value.has_measIdToAddModList);
    enc.WriteBit(value.has_s_MeasureConfig);
    enc.WriteBit(value.has_quantityConfig);
    enc.WriteBit(value.has_measGapConfig);
    enc.WriteBit(value.has_measGapSharingConfig);
    if (value.has_measObjectToRemoveList) {
        Encode_MeasObjectToRemoveList(enc, value.measObjectToRemoveList);
    }
    if (value.has_measObjectToAddModList) {
        Encode_MeasObjectToAddModList(enc, value.measObjectToAddModList);
    }
    if (value.has_reportConfigToRemoveList) {
        Encode_ReportConfigToRemoveList(enc, value.reportConfigToRemoveList);
    }
    if (value.has_reportConfigToAddModList) {
        Encode_ReportConfigToAddModList(enc, value.reportConfigToAddModList);
    }
    if (value.has_measIdToRemoveList) {
        Encode_MeasIdToRemoveList(enc, value.measIdToRemoveList);
    }
    if (value.has_measIdToAddModList) {
        Encode_MeasIdToAddModList(enc, value.measIdToAddModList);
    }
    if (value.has_s_MeasureConfig) {
        Encode_MeasConfig_S_MeasureConfig(enc, value.s_MeasureConfig);
    }
    if (value.has_quantityConfig) {
        Encode_QuantityConfig(enc, value.quantityConfig);
    }
    if (value.has_measGapConfig) {
        Encode_MeasGapConfig(enc, value.measGapConfig);
    }
    if (value.has_measGapSharingConfig) {
        Encode_MeasGapSharingConfig(enc, value.measGapSharingConfig);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasConfig_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasConfig(Decoder& dec, MeasConfig& value)
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
    if (present_0) {
        if (Decode_MeasObjectToRemoveList(dec, value.measObjectToRemoveList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasObjectToAddModList(dec, value.measObjectToAddModList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_ReportConfigToRemoveList(dec, value.reportConfigToRemoveList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_ReportConfigToAddModList(dec, value.reportConfigToAddModList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_MeasIdToRemoveList(dec, value.measIdToRemoveList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_MeasIdToAddModList(dec, value.measIdToAddModList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_MeasConfig_S_MeasureConfig(dec, value.s_MeasureConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_QuantityConfig(dec, value.quantityConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        if (Decode_MeasGapConfig(dec, value.measGapConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_MeasGapSharingConfig(dec, value.measGapSharingConfig) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MeasConfig_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_MeasConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasConfig(MeasConfig& value)
{
    if (value.has_measObjectToRemoveList) {
        Free_MeasObjectToRemoveList(value.measObjectToRemoveList);
    }
    if (value.has_measObjectToAddModList) {
        Free_MeasObjectToAddModList(value.measObjectToAddModList);
    }
    if (value.has_reportConfigToRemoveList) {
        Free_ReportConfigToRemoveList(value.reportConfigToRemoveList);
    }
    if (value.has_reportConfigToAddModList) {
        Free_ReportConfigToAddModList(value.reportConfigToAddModList);
    }
    if (value.has_measIdToRemoveList) {
        Free_MeasIdToRemoveList(value.measIdToRemoveList);
    }
    if (value.has_measIdToAddModList) {
        Free_MeasIdToAddModList(value.measIdToAddModList);
    }
    if (value.has_s_MeasureConfig) {
        Free_MeasConfig_S_MeasureConfig(value.s_MeasureConfig);
    }
    if (value.has_quantityConfig) {
        Free_QuantityConfig(value.quantityConfig);
    }
    if (value.has_measGapConfig) {
        Free_MeasGapConfig(value.measGapConfig);
    }
    if (value.has_measGapSharingConfig) {
        Free_MeasGapSharingConfig(value.measGapSharingConfig);
    }
    if (value.has_extGroup1) {
        Free_MeasConfig_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasConfig_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_ExtGroup1：ASN.1 PDCP_Config_ExtGroup1；源文件第 9338 行；扩展添加组 [[ ]]。
// Encode_PDCP_Config_ExtGroup1 只读不分配；Decode_PDCP_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_ExtGroup1(Encoder& enc, const PDCP_Config_ExtGroup1& value)
{
    enc.WriteBit(value.has_cipheringDisabled);
    if (value.has_cipheringDisabled) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cipheringDisabled), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_ExtGroup1(Decoder& dec, PDCP_Config_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.cipheringDisabled = (PDCP_Config_ExtGroup1_CipheringDisabled)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_ExtGroup1(PDCP_Config_ExtGroup1& value)
{
    if (value.has_cipheringDisabled) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DiscardTimerExt_r16：ASN.1 SetupRelease<DiscardTimerExt-r16>；源文件第 9342 行；CHOICE。
// Encode_SetupRelease_DiscardTimerExt_r16 只读不分配；Decode_SetupRelease_DiscardTimerExt_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DiscardTimerExt_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DiscardTimerExt_r16(Encoder& enc, const SetupRelease_DiscardTimerExt_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DiscardTimerExt_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_DiscardTimerExt_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 7);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DiscardTimerExt_r16(Decoder& dec, SetupRelease_DiscardTimerExt_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DiscardTimerExt_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DiscardTimerExt_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DiscardTimerExt_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.setup = (DiscardTimerExt_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DiscardTimerExt_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DiscardTimerExt_r16(SetupRelease_DiscardTimerExt_r16& value)
{
    switch (value.tag) {
    case SetupRelease_DiscardTimerExt_r16_Tag_release:
        break;
    case SetupRelease_DiscardTimerExt_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16：ASN.1 moreThanTwoRLC-DRB-r16；源文件第 9343 行；SEQUENCE。
// Encode_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16 只读不分配；Decode_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(Encoder& enc, const PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16& value)
{
    enc.WriteBit(value.has_splitSecondaryPath_r16);
    enc.WriteBit(value.has_duplicationState_r16);
    if (value.has_splitSecondaryPath_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.splitSecondaryPath_r16), 1, 32);
    }
    if (value.has_duplicationState_r16) {
enc.WriteConstrainedLength(value.duplicationState_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.duplicationState_r16_count; ++i) {
    enc.WriteBool(value.duplicationState_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(Decoder& dec, PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.splitSecondaryPath_r16 = (LogicalChannelIdentity)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.duplicationState_r16_count)) { goto fail; }
if (value.duplicationState_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.duplicationState_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.duplicationState_r16_count > 0u) {
    value.duplicationState_r16_items = (bool*)std::malloc((std::size_t)value.duplicationState_r16_count * sizeof(bool));
    if (value.duplicationState_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.duplicationState_r16_items, 0, (std::size_t)value.duplicationState_r16_count * sizeof(bool));
}
for (std::uint32_t i = 0; i < value.duplicationState_r16_count; ++i) {
    bool tmp_value = false;
    if (!dec.ReadBool(tmp_value)) { goto fail; }
    value.duplicationState_r16_items[i] = tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16& value)
{
    if (value.has_splitSecondaryPath_r16) {
    }
    if (value.has_duplicationState_r16) {
        if (value.duplicationState_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.duplicationState_r16_count; ++i) {
            }
            std::free(value.duplicationState_r16_items);
            value.duplicationState_r16_items = nullptr;
        }
        value.duplicationState_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EthernetHeaderCompression_r16_Ehc_Common_r16：ASN.1 ehc-Common-r16；源文件第 9363 行；SEQUENCE。
// Encode_EthernetHeaderCompression_r16_Ehc_Common_r16 只读不分配；Decode_EthernetHeaderCompression_r16_Ehc_Common_r16 可能 malloc（失败时内部已释放并清零）；Free_EthernetHeaderCompression_r16_Ehc_Common_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EthernetHeaderCompression_r16_Ehc_Common_r16(Encoder& enc, const EthernetHeaderCompression_r16_Ehc_Common_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ehc_CID_Length_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_EthernetHeaderCompression_r16_Ehc_Common_r16(Decoder& dec, EthernetHeaderCompression_r16_Ehc_Common_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ehc_CID_Length_r16 = (EthernetHeaderCompression_r16_Ehc_Common_r16_Ehc_CID_Length_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EthernetHeaderCompression_r16_Ehc_Common_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EthernetHeaderCompression_r16_Ehc_Common_r16(EthernetHeaderCompression_r16_Ehc_Common_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EthernetHeaderCompression_r16_Ehc_Downlink_r16：ASN.1 ehc-Downlink-r16；源文件第 9367 行；SEQUENCE。
// Encode_EthernetHeaderCompression_r16_Ehc_Downlink_r16 只读不分配；Decode_EthernetHeaderCompression_r16_Ehc_Downlink_r16 可能 malloc（失败时内部已释放并清零）；Free_EthernetHeaderCompression_r16_Ehc_Downlink_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EthernetHeaderCompression_r16_Ehc_Downlink_r16(Encoder& enc, const EthernetHeaderCompression_r16_Ehc_Downlink_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_drb_ContinueEHC_DL_r16);
    if (value.has_drb_ContinueEHC_DL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drb_ContinueEHC_DL_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_EthernetHeaderCompression_r16_Ehc_Downlink_r16(Decoder& dec, EthernetHeaderCompression_r16_Ehc_Downlink_r16& value)
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
        value.drb_ContinueEHC_DL_r16 = (EthernetHeaderCompression_r16_Ehc_Downlink_r16_Drb_ContinueEHC_DL_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EthernetHeaderCompression_r16_Ehc_Downlink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EthernetHeaderCompression_r16_Ehc_Downlink_r16(EthernetHeaderCompression_r16_Ehc_Downlink_r16& value)
{
    if (value.has_drb_ContinueEHC_DL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EthernetHeaderCompression_r16_Ehc_Uplink_r16：ASN.1 ehc-Uplink-r16；源文件第 9371 行；SEQUENCE。
// Encode_EthernetHeaderCompression_r16_Ehc_Uplink_r16 只读不分配；Decode_EthernetHeaderCompression_r16_Ehc_Uplink_r16 可能 malloc（失败时内部已释放并清零）；Free_EthernetHeaderCompression_r16_Ehc_Uplink_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EthernetHeaderCompression_r16_Ehc_Uplink_r16(Encoder& enc, const EthernetHeaderCompression_r16_Ehc_Uplink_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_drb_ContinueEHC_UL_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxCID_EHC_UL_r16), 1, 32767);
    if (value.has_drb_ContinueEHC_UL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drb_ContinueEHC_UL_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_EthernetHeaderCompression_r16_Ehc_Uplink_r16(Decoder& dec, EthernetHeaderCompression_r16_Ehc_Uplink_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 32767, tmp_value)) { goto fail; }
        value.maxCID_EHC_UL_r16 = (int64_t)tmp_value;
    }
    if (present_0) {
        value.drb_ContinueEHC_UL_r16 = (EthernetHeaderCompression_r16_Ehc_Uplink_r16_Drb_ContinueEHC_UL_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EthernetHeaderCompression_r16_Ehc_Uplink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EthernetHeaderCompression_r16_Ehc_Uplink_r16(EthernetHeaderCompression_r16_Ehc_Uplink_r16& value)
{
    if (value.has_drb_ContinueEHC_UL_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EthernetHeaderCompression_r16：ASN.1 EthernetHeaderCompression-r16；源文件第 9362 行；SEQUENCE。
// Encode_EthernetHeaderCompression_r16 只读不分配；Decode_EthernetHeaderCompression_r16 可能 malloc（失败时内部已释放并清零）；Free_EthernetHeaderCompression_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EthernetHeaderCompression_r16(Encoder& enc, const EthernetHeaderCompression_r16& value)
{
    enc.WriteBit(value.has_ehc_Downlink_r16);
    enc.WriteBit(value.has_ehc_Uplink_r16);
    Encode_EthernetHeaderCompression_r16_Ehc_Common_r16(enc, value.ehc_Common_r16);
    if (value.has_ehc_Downlink_r16) {
        Encode_EthernetHeaderCompression_r16_Ehc_Downlink_r16(enc, value.ehc_Downlink_r16);
    }
    if (value.has_ehc_Uplink_r16) {
        Encode_EthernetHeaderCompression_r16_Ehc_Uplink_r16(enc, value.ehc_Uplink_r16);
    }
    return enc.Error();
}

ErrorCode Decode_EthernetHeaderCompression_r16(Decoder& dec, EthernetHeaderCompression_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_EthernetHeaderCompression_r16_Ehc_Common_r16(dec, value.ehc_Common_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_EthernetHeaderCompression_r16_Ehc_Downlink_r16(dec, value.ehc_Downlink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_EthernetHeaderCompression_r16_Ehc_Uplink_r16(dec, value.ehc_Uplink_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EthernetHeaderCompression_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EthernetHeaderCompression_r16(EthernetHeaderCompression_r16& value)
{
    Free_EthernetHeaderCompression_r16_Ehc_Common_r16(value.ehc_Common_r16);
    if (value.has_ehc_Downlink_r16) {
        Free_EthernetHeaderCompression_r16_Ehc_Downlink_r16(value.ehc_Downlink_r16);
    }
    if (value.has_ehc_Uplink_r16) {
        Free_EthernetHeaderCompression_r16_Ehc_Uplink_r16(value.ehc_Uplink_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_EthernetHeaderCompression_r16：ASN.1 SetupRelease<EthernetHeaderCompression-r16>；源文件第 9347 行；CHOICE。
// Encode_SetupRelease_EthernetHeaderCompression_r16 只读不分配；Decode_SetupRelease_EthernetHeaderCompression_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_EthernetHeaderCompression_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_EthernetHeaderCompression_r16(Encoder& enc, const SetupRelease_EthernetHeaderCompression_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_EthernetHeaderCompression_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_EthernetHeaderCompression_r16_Tag_setup:
        Encode_EthernetHeaderCompression_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_EthernetHeaderCompression_r16(Decoder& dec, SetupRelease_EthernetHeaderCompression_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_EthernetHeaderCompression_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_EthernetHeaderCompression_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_EthernetHeaderCompression_r16_Tag_setup: {
        if (Decode_EthernetHeaderCompression_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_EthernetHeaderCompression_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_EthernetHeaderCompression_r16(SetupRelease_EthernetHeaderCompression_r16& value)
{
    switch (value.tag) {
    case SetupRelease_EthernetHeaderCompression_r16_Tag_release:
        break;
    case SetupRelease_EthernetHeaderCompression_r16_Tag_setup:
        Free_EthernetHeaderCompression_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_ExtGroup2：ASN.1 PDCP_Config_ExtGroup2；源文件第 9341 行；扩展添加组 [[ ]]。
// Encode_PDCP_Config_ExtGroup2 只读不分配；Decode_PDCP_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_ExtGroup2(Encoder& enc, const PDCP_Config_ExtGroup2& value)
{
    enc.WriteBit(value.has_discardTimerExt_r16);
    enc.WriteBit(value.has_moreThanTwoRLC_DRB_r16);
    enc.WriteBit(value.has_ethernetHeaderCompression_r16);
    if (value.has_discardTimerExt_r16) {
        Encode_SetupRelease_DiscardTimerExt_r16(enc, value.discardTimerExt_r16);
    }
    if (value.has_moreThanTwoRLC_DRB_r16) {
        Encode_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(enc, value.moreThanTwoRLC_DRB_r16);
    }
    if (value.has_ethernetHeaderCompression_r16) {
        Encode_SetupRelease_EthernetHeaderCompression_r16(enc, value.ethernetHeaderCompression_r16);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_ExtGroup2(Decoder& dec, PDCP_Config_ExtGroup2& value)
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
        if (Decode_SetupRelease_DiscardTimerExt_r16(dec, value.discardTimerExt_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(dec, value.moreThanTwoRLC_DRB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_EthernetHeaderCompression_r16(dec, value.ethernetHeaderCompression_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_ExtGroup2(PDCP_Config_ExtGroup2& value)
{
    if (value.has_discardTimerExt_r16) {
        Free_SetupRelease_DiscardTimerExt_r16(value.discardTimerExt_r16);
    }
    if (value.has_moreThanTwoRLC_DRB_r16) {
        Free_PDCP_Config_ExtGroup2_MoreThanTwoRLC_DRB_r16(value.moreThanTwoRLC_DRB_r16);
    }
    if (value.has_ethernetHeaderCompression_r16) {
        Free_SetupRelease_EthernetHeaderCompression_r16(value.ethernetHeaderCompression_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkDataCompression_r17_NewSetup：ASN.1 newSetup；源文件第 9388 行；SEQUENCE。
// Encode_UplinkDataCompression_r17_NewSetup 只读不分配；Decode_UplinkDataCompression_r17_NewSetup 可能 malloc（失败时内部已释放并清零）；Free_UplinkDataCompression_r17_NewSetup 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkDataCompression_r17_NewSetup(Encoder& enc, const UplinkDataCompression_r17_NewSetup& value)
{
    enc.WriteBit(value.has_dictionary_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.bufferSize_r17), 0, 3);
    if (value.has_dictionary_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dictionary_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkDataCompression_r17_NewSetup(Decoder& dec, UplinkDataCompression_r17_NewSetup& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.bufferSize_r17 = (UplinkDataCompression_r17_NewSetup_BufferSize_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dictionary_r17 = (UplinkDataCompression_r17_NewSetup_Dictionary_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkDataCompression_r17_NewSetup(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkDataCompression_r17_NewSetup(UplinkDataCompression_r17_NewSetup& value)
{
    if (value.has_dictionary_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UplinkDataCompression_r17：ASN.1 UplinkDataCompression-r17；源文件第 9387 行；CHOICE。
// Encode_UplinkDataCompression_r17 只读不分配；Decode_UplinkDataCompression_r17 可能 malloc（失败时内部已释放并清零）；Free_UplinkDataCompression_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UplinkDataCompression_r17(Encoder& enc, const UplinkDataCompression_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case UplinkDataCompression_r17_Tag_newSetup:
        Encode_UplinkDataCompression_r17_NewSetup(enc, value.u.newSetup);
        break;
    case UplinkDataCompression_r17_Tag_drb_ContinueUDC:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_UplinkDataCompression_r17(Decoder& dec, UplinkDataCompression_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (UplinkDataCompression_r17_Tag)root_index;
    switch (value.tag) {
    case UplinkDataCompression_r17_Tag_newSetup: {
        if (Decode_UplinkDataCompression_r17_NewSetup(dec, value.u.newSetup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case UplinkDataCompression_r17_Tag_drb_ContinueUDC: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UplinkDataCompression_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UplinkDataCompression_r17(UplinkDataCompression_r17& value)
{
    switch (value.tag) {
    case UplinkDataCompression_r17_Tag_newSetup:
        Free_UplinkDataCompression_r17_NewSetup(value.u.newSetup);
        break;
    case UplinkDataCompression_r17_Tag_drb_ContinueUDC:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_UplinkDataCompression_r17：ASN.1 SetupRelease<UplinkDataCompression-r17>；源文件第 9351 行；CHOICE。
// Encode_SetupRelease_UplinkDataCompression_r17 只读不分配；Decode_SetupRelease_UplinkDataCompression_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_UplinkDataCompression_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_UplinkDataCompression_r17(Encoder& enc, const SetupRelease_UplinkDataCompression_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_UplinkDataCompression_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_UplinkDataCompression_r17_Tag_setup:
        Encode_UplinkDataCompression_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_UplinkDataCompression_r17(Decoder& dec, SetupRelease_UplinkDataCompression_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_UplinkDataCompression_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_UplinkDataCompression_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_UplinkDataCompression_r17_Tag_setup: {
        if (Decode_UplinkDataCompression_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_UplinkDataCompression_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_UplinkDataCompression_r17(SetupRelease_UplinkDataCompression_r17& value)
{
    switch (value.tag) {
    case SetupRelease_UplinkDataCompression_r17_Tag_release:
        break;
    case SetupRelease_UplinkDataCompression_r17_Tag_setup:
        Free_UplinkDataCompression_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DiscardTimerExt2_r17：ASN.1 SetupRelease<DiscardTimerExt2-r17>；源文件第 9352 行；CHOICE。
// Encode_SetupRelease_DiscardTimerExt2_r17 只读不分配；Decode_SetupRelease_DiscardTimerExt2_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DiscardTimerExt2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DiscardTimerExt2_r17(Encoder& enc, const SetupRelease_DiscardTimerExt2_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DiscardTimerExt2_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DiscardTimerExt2_r17_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DiscardTimerExt2_r17(Decoder& dec, SetupRelease_DiscardTimerExt2_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DiscardTimerExt2_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DiscardTimerExt2_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DiscardTimerExt2_r17_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.setup = (DiscardTimerExt2_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DiscardTimerExt2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DiscardTimerExt2_r17(SetupRelease_DiscardTimerExt2_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DiscardTimerExt2_r17_Tag_release:
        break;
    case SetupRelease_DiscardTimerExt2_r17_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_ExtGroup3：ASN.1 PDCP_Config_ExtGroup3；源文件第 9349 行；扩展添加组 [[ ]]。
// Encode_PDCP_Config_ExtGroup3 只读不分配；Decode_PDCP_Config_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_ExtGroup3(Encoder& enc, const PDCP_Config_ExtGroup3& value)
{
    enc.WriteBit(value.has_survivalTimeStateSupport_r17);
    enc.WriteBit(value.has_uplinkDataCompression_r17);
    enc.WriteBit(value.has_discardTimerExt2_r17);
    enc.WriteBit(value.has_initialRX_DELIV_r17);
    if (value.has_survivalTimeStateSupport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.survivalTimeStateSupport_r17), 0, 0);
    }
    if (value.has_uplinkDataCompression_r17) {
        Encode_SetupRelease_UplinkDataCompression_r17(enc, value.uplinkDataCompression_r17);
    }
    if (value.has_discardTimerExt2_r17) {
        Encode_SetupRelease_DiscardTimerExt2_r17(enc, value.discardTimerExt2_r17);
    }
    if (value.has_initialRX_DELIV_r17) {
        enc.WriteFixedBitString(value.initialRX_DELIV_r17.bytes, value.initialRX_DELIV_r17.bitLength, 32, 32);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_ExtGroup3(Decoder& dec, PDCP_Config_ExtGroup3& value)
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
        value.survivalTimeStateSupport_r17 = (PDCP_Config_ExtGroup3_SurvivalTimeStateSupport_r17)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_UplinkDataCompression_r17(dec, value.uplinkDataCompression_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_DiscardTimerExt2_r17(dec, value.discardTimerExt2_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.initialRX_DELIV_r17.bytes = string_bytes;
        value.initialRX_DELIV_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_ExtGroup3(PDCP_Config_ExtGroup3& value)
{
    if (value.has_survivalTimeStateSupport_r17) {
    }
    if (value.has_uplinkDataCompression_r17) {
        Free_SetupRelease_UplinkDataCompression_r17(value.uplinkDataCompression_r17);
    }
    if (value.has_discardTimerExt2_r17) {
        Free_SetupRelease_DiscardTimerExt2_r17(value.discardTimerExt2_r17);
    }
    if (value.has_initialRX_DELIV_r17) {
        std::free(value.initialRX_DELIV_r17.bytes);
        value.initialRX_DELIV_r17.bytes = nullptr;
        value.initialRX_DELIV_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_DiscardTimerForLowImportance_r18：ASN.1 SetupRelease<DiscardTimerForLowImportance-r18>；源文件第 9357 行；CHOICE。
// Encode_SetupRelease_DiscardTimerForLowImportance_r18 只读不分配；Decode_SetupRelease_DiscardTimerForLowImportance_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_DiscardTimerForLowImportance_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_DiscardTimerForLowImportance_r18(Encoder& enc, const SetupRelease_DiscardTimerForLowImportance_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DiscardTimerForLowImportance_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_DiscardTimerForLowImportance_r18_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DiscardTimerForLowImportance_r18(Decoder& dec, SetupRelease_DiscardTimerForLowImportance_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DiscardTimerForLowImportance_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DiscardTimerForLowImportance_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DiscardTimerForLowImportance_r18_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.setup = (DiscardTimerForLowImportance_r18)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DiscardTimerForLowImportance_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DiscardTimerForLowImportance_r18(SetupRelease_DiscardTimerForLowImportance_r18& value)
{
    switch (value.tag) {
    case SetupRelease_DiscardTimerForLowImportance_r18_Tag_release:
        break;
    case SetupRelease_DiscardTimerForLowImportance_r18_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_ExtGroup4：ASN.1 PDCP_Config_ExtGroup4；源文件第 9355 行；扩展添加组 [[ ]]。
// Encode_PDCP_Config_ExtGroup4 只读不分配；Decode_PDCP_Config_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_ExtGroup4(Encoder& enc, const PDCP_Config_ExtGroup4& value)
{
    enc.WriteBit(value.has_pdu_SetDiscard_r18);
    enc.WriteBit(value.has_discardTimerForLowImportance_r18);
    enc.WriteBit(value.has_primaryPathOnIndirectPath_r18);
    if (value.has_pdu_SetDiscard_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdu_SetDiscard_r18), 0, 0);
    }
    if (value.has_discardTimerForLowImportance_r18) {
        Encode_SetupRelease_DiscardTimerForLowImportance_r18(enc, value.discardTimerForLowImportance_r18);
    }
    if (value.has_primaryPathOnIndirectPath_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.primaryPathOnIndirectPath_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_ExtGroup4(Decoder& dec, PDCP_Config_ExtGroup4& value)
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
        value.pdu_SetDiscard_r18 = (PDCP_Config_ExtGroup4_Pdu_SetDiscard_r18)0;
    }
    if (present_1) {
        if (Decode_SetupRelease_DiscardTimerForLowImportance_r18(dec, value.discardTimerForLowImportance_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.primaryPathOnIndirectPath_r18 = (PDCP_Config_ExtGroup4_PrimaryPathOnIndirectPath_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_ExtGroup4(PDCP_Config_ExtGroup4& value)
{
    if (value.has_pdu_SetDiscard_r18) {
    }
    if (value.has_discardTimerForLowImportance_r18) {
        Free_SetupRelease_DiscardTimerForLowImportance_r18(value.discardTimerForLowImportance_r18);
    }
    if (value.has_primaryPathOnIndirectPath_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_Drb_HeaderCompression_Rohc_Profiles：ASN.1 drb/headerCompression/rohc/profiles；源文件第 9291 行；SEQUENCE。
// Encode_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles 只读不分配；Decode_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(Encoder& enc, const PDCP_Config_Drb_HeaderCompression_Rohc_Profiles& value)
{
    enc.WriteBool(value.profile0x0001);
    enc.WriteBool(value.profile0x0002);
    enc.WriteBool(value.profile0x0003);
    enc.WriteBool(value.profile0x0004);
    enc.WriteBool(value.profile0x0006);
    enc.WriteBool(value.profile0x0101);
    enc.WriteBool(value.profile0x0102);
    enc.WriteBool(value.profile0x0103);
    enc.WriteBool(value.profile0x0104);
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(Decoder& dec, PDCP_Config_Drb_HeaderCompression_Rohc_Profiles& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0001 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0002 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0003 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0004 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0006 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0101 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0102 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0103 = tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0104 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(PDCP_Config_Drb_HeaderCompression_Rohc_Profiles& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_Drb_HeaderCompression_Rohc：ASN.1 drb/headerCompression/rohc；源文件第 9289 行；SEQUENCE。
// Encode_PDCP_Config_Drb_HeaderCompression_Rohc 只读不分配；Decode_PDCP_Config_Drb_HeaderCompression_Rohc 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_Drb_HeaderCompression_Rohc 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_Drb_HeaderCompression_Rohc(Encoder& enc, const PDCP_Config_Drb_HeaderCompression_Rohc& value)
{
    enc.WriteBit(value.maxCID != 15);
    enc.WriteBit(value.has_drb_ContinueROHC);
    if (value.maxCID != 15) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCID), 1, 16383);
    }
    Encode_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(enc, value.profiles);
    if (value.has_drb_ContinueROHC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drb_ContinueROHC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_Drb_HeaderCompression_Rohc(Decoder& dec, PDCP_Config_Drb_HeaderCompression_Rohc& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16383, tmp_value)) { goto fail; }
        value.maxCID = (int64_t)tmp_value;
    } else {
        value.maxCID = 15;
    }
    {
        if (Decode_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(dec, value.profiles) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.drb_ContinueROHC = (PDCP_Config_Drb_HeaderCompression_Rohc_Drb_ContinueROHC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_Drb_HeaderCompression_Rohc(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_Drb_HeaderCompression_Rohc(PDCP_Config_Drb_HeaderCompression_Rohc& value)
{
    Free_PDCP_Config_Drb_HeaderCompression_Rohc_Profiles(value.profiles);
    if (value.has_drb_ContinueROHC) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles：ASN.1 drb/headerCompression/uplinkOnlyROHC/profiles；源文件第 9306 行；SEQUENCE。
// Encode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles 只读不分配；Decode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(Encoder& enc, const PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles& value)
{
    enc.WriteBool(value.profile0x0006);
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(Decoder& dec, PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.profile0x0006 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC：ASN.1 drb/headerCompression/uplinkOnlyROHC；源文件第 9304 行；SEQUENCE。
// Encode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC 只读不分配；Decode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(Encoder& enc, const PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC& value)
{
    enc.WriteBit(value.maxCID != 15);
    enc.WriteBit(value.has_drb_ContinueROHC);
    if (value.maxCID != 15) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCID), 1, 16383);
    }
    Encode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(enc, value.profiles);
    if (value.has_drb_ContinueROHC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drb_ContinueROHC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(Decoder& dec, PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16383, tmp_value)) { goto fail; }
        value.maxCID = (int64_t)tmp_value;
    } else {
        value.maxCID = 15;
    }
    {
        if (Decode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(dec, value.profiles) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.drb_ContinueROHC = (PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Drb_ContinueROHC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC& value)
{
    Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC_Profiles(value.profiles);
    if (value.has_drb_ContinueROHC) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_Drb_HeaderCompression：ASN.1 drb/headerCompression；源文件第 9287 行；CHOICE。
// Encode_PDCP_Config_Drb_HeaderCompression 只读不分配；Decode_PDCP_Config_Drb_HeaderCompression 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_Drb_HeaderCompression 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_Drb_HeaderCompression(Encoder& enc, const PDCP_Config_Drb_HeaderCompression& value)
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
    case PDCP_Config_Drb_HeaderCompression_Tag_notUsed:
        (void)0;
        break;
    case PDCP_Config_Drb_HeaderCompression_Tag_rohc:
        Encode_PDCP_Config_Drb_HeaderCompression_Rohc(enc, value.u.rohc);
        break;
    case PDCP_Config_Drb_HeaderCompression_Tag_uplinkOnlyROHC:
        Encode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(enc, value.u.uplinkOnlyROHC);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_Drb_HeaderCompression(Decoder& dec, PDCP_Config_Drb_HeaderCompression& value)
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
        value.tag = (PDCP_Config_Drb_HeaderCompression_Tag)(3 + extension_index);
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
    value.tag = (PDCP_Config_Drb_HeaderCompression_Tag)root_index;
    switch (value.tag) {
    case PDCP_Config_Drb_HeaderCompression_Tag_notUsed: {
        (void)0;
        break;
    }
    case PDCP_Config_Drb_HeaderCompression_Tag_rohc: {
        if (Decode_PDCP_Config_Drb_HeaderCompression_Rohc(dec, value.u.rohc) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCP_Config_Drb_HeaderCompression_Tag_uplinkOnlyROHC: {
        if (Decode_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(dec, value.u.uplinkOnlyROHC) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_Drb_HeaderCompression(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_Drb_HeaderCompression(PDCP_Config_Drb_HeaderCompression& value)
{
    switch (value.tag) {
    case PDCP_Config_Drb_HeaderCompression_Tag_notUsed:
        break;
    case PDCP_Config_Drb_HeaderCompression_Tag_rohc:
        Free_PDCP_Config_Drb_HeaderCompression_Rohc(value.u.rohc);
        break;
    case PDCP_Config_Drb_HeaderCompression_Tag_uplinkOnlyROHC:
        Free_PDCP_Config_Drb_HeaderCompression_UplinkOnlyROHC(value.u.uplinkOnlyROHC);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_Drb：ASN.1 drb；源文件第 9282 行；SEQUENCE。
// Encode_PDCP_Config_Drb 只读不分配；Decode_PDCP_Config_Drb 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_Drb 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_Drb(Encoder& enc, const PDCP_Config_Drb& value)
{
    enc.WriteBit(value.has_discardTimer);
    enc.WriteBit(value.has_pdcp_SN_SizeUL);
    enc.WriteBit(value.has_pdcp_SN_SizeDL);
    enc.WriteBit(value.has_integrityProtection);
    enc.WriteBit(value.has_statusReportRequired);
    enc.WriteBit(value.has_outOfOrderDelivery);
    if (value.has_discardTimer) {
        enc.WriteConstrainedInteger((std::int64_t)(value.discardTimer), 0, 15);
    }
    if (value.has_pdcp_SN_SizeUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_SN_SizeUL), 0, 1);
    }
    if (value.has_pdcp_SN_SizeDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_SN_SizeDL), 0, 1);
    }
    Encode_PDCP_Config_Drb_HeaderCompression(enc, value.headerCompression);
    if (value.has_integrityProtection) {
        enc.WriteConstrainedInteger((std::int64_t)(value.integrityProtection), 0, 0);
    }
    if (value.has_statusReportRequired) {
        enc.WriteConstrainedInteger((std::int64_t)(value.statusReportRequired), 0, 0);
    }
    if (value.has_outOfOrderDelivery) {
        enc.WriteConstrainedInteger((std::int64_t)(value.outOfOrderDelivery), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_Drb(Decoder& dec, PDCP_Config_Drb& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.discardTimer = (PDCP_Config_Drb_DiscardTimer)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdcp_SN_SizeUL = (PDCP_Config_Drb_Pdcp_SN_SizeUL)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdcp_SN_SizeDL = (PDCP_Config_Drb_Pdcp_SN_SizeDL)tmp_value;
    }
    {
        if (Decode_PDCP_Config_Drb_HeaderCompression(dec, value.headerCompression) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.integrityProtection = (PDCP_Config_Drb_IntegrityProtection)0;
    }
    if (present_4) {
        value.statusReportRequired = (PDCP_Config_Drb_StatusReportRequired)0;
    }
    if (present_5) {
        value.outOfOrderDelivery = (PDCP_Config_Drb_OutOfOrderDelivery)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_Drb(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_Drb(PDCP_Config_Drb& value)
{
    if (value.has_discardTimer) {
    }
    if (value.has_pdcp_SN_SizeUL) {
    }
    if (value.has_pdcp_SN_SizeDL) {
    }
    Free_PDCP_Config_Drb_HeaderCompression(value.headerCompression);
    if (value.has_integrityProtection) {
    }
    if (value.has_statusReportRequired) {
    }
    if (value.has_outOfOrderDelivery) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_MoreThanOneRLC_PrimaryPath：ASN.1 moreThanOneRLC/primaryPath；源文件第 9318 行；SEQUENCE。
// Encode_PDCP_Config_MoreThanOneRLC_PrimaryPath 只读不分配；Decode_PDCP_Config_MoreThanOneRLC_PrimaryPath 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_MoreThanOneRLC_PrimaryPath 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_MoreThanOneRLC_PrimaryPath(Encoder& enc, const PDCP_Config_MoreThanOneRLC_PrimaryPath& value)
{
    enc.WriteBit(value.has_cellGroup);
    enc.WriteBit(value.has_logicalChannel);
    if (value.has_cellGroup) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellGroup), 0, 3);
    }
    if (value.has_logicalChannel) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannel), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_MoreThanOneRLC_PrimaryPath(Decoder& dec, PDCP_Config_MoreThanOneRLC_PrimaryPath& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellGroup = (CellGroupId)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.logicalChannel = (LogicalChannelIdentity)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_MoreThanOneRLC_PrimaryPath(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_MoreThanOneRLC_PrimaryPath(PDCP_Config_MoreThanOneRLC_PrimaryPath& value)
{
    if (value.has_cellGroup) {
    }
    if (value.has_logicalChannel) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config_MoreThanOneRLC：ASN.1 moreThanOneRLC；源文件第 9317 行；SEQUENCE。
// Encode_PDCP_Config_MoreThanOneRLC 只读不分配；Decode_PDCP_Config_MoreThanOneRLC 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config_MoreThanOneRLC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config_MoreThanOneRLC(Encoder& enc, const PDCP_Config_MoreThanOneRLC& value)
{
    enc.WriteBit(value.has_ul_DataSplitThreshold);
    enc.WriteBit(value.has_pdcp_Duplication);
    Encode_PDCP_Config_MoreThanOneRLC_PrimaryPath(enc, value.primaryPath);
    if (value.has_ul_DataSplitThreshold) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_DataSplitThreshold), 0, 31);
    }
    if (value.has_pdcp_Duplication) {
        enc.WriteBool(value.pdcp_Duplication);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config_MoreThanOneRLC(Decoder& dec, PDCP_Config_MoreThanOneRLC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_PDCP_Config_MoreThanOneRLC_PrimaryPath(dec, value.primaryPath) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.ul_DataSplitThreshold = (UL_DataSplitThreshold)tmp_value;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.pdcp_Duplication = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_Config_MoreThanOneRLC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config_MoreThanOneRLC(PDCP_Config_MoreThanOneRLC& value)
{
    Free_PDCP_Config_MoreThanOneRLC_PrimaryPath(value.primaryPath);
    if (value.has_ul_DataSplitThreshold) {
    }
    if (value.has_pdcp_Duplication) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCP_Config：ASN.1 PDCP-Config；源文件第 9281 行；SEQUENCE。
// Encode_PDCP_Config 只读不分配；Decode_PDCP_Config 可能 malloc（失败时内部已释放并清零）；Free_PDCP_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCP_Config(Encoder& enc, const PDCP_Config& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_drb);
    enc.WriteBit(value.has_moreThanOneRLC);
    enc.WriteBit(value.has_t_Reordering);
    if (value.has_drb) {
        Encode_PDCP_Config_Drb(enc, value.drb);
    }
    if (value.has_moreThanOneRLC) {
        Encode_PDCP_Config_MoreThanOneRLC(enc, value.moreThanOneRLC);
    }
    if (value.has_t_Reordering) {
        enc.WriteConstrainedInteger((std::int64_t)(value.t_Reordering), 0, 63);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PDCP_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDCP_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PDCP_Config_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_PDCP_Config_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_Config(Decoder& dec, PDCP_Config& value)
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
        if (Decode_PDCP_Config_Drb(dec, value.drb) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCP_Config_MoreThanOneRLC(dec, value.moreThanOneRLC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.t_Reordering = (PDCP_Config_T_Reordering)tmp_value;
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
    if (Decode_PDCP_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDCP_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PDCP_Config_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_PDCP_Config_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_PDCP_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_Config(PDCP_Config& value)
{
    if (value.has_drb) {
        Free_PDCP_Config_Drb(value.drb);
    }
    if (value.has_moreThanOneRLC) {
        Free_PDCP_Config_MoreThanOneRLC(value.moreThanOneRLC);
    }
    if (value.has_t_Reordering) {
    }
    if (value.has_extGroup1) {
        Free_PDCP_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDCP_Config_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PDCP_Config_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_PDCP_Config_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRB_ToAddMod_ExtGroup1：ASN.1 SRB_ToAddMod_ExtGroup1；源文件第 10999 行；扩展添加组 [[ ]]。
// Encode_SRB_ToAddMod_ExtGroup1 只读不分配；Decode_SRB_ToAddMod_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SRB_ToAddMod_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRB_ToAddMod_ExtGroup1(Encoder& enc, const SRB_ToAddMod_ExtGroup1& value)
{
    enc.WriteBit(value.has_srb_Identity_v1700);
    if (value.has_srb_Identity_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb_Identity_v1700), 4, 4);
    }
    return enc.Error();
}

ErrorCode Decode_SRB_ToAddMod_ExtGroup1(Decoder& dec, SRB_ToAddMod_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 4, tmp_value)) { goto fail; }
        value.srb_Identity_v1700 = (SRB_Identity_v1700)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRB_ToAddMod_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRB_ToAddMod_ExtGroup1(SRB_ToAddMod_ExtGroup1& value)
{
    if (value.has_srb_Identity_v1700) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRB_ToAddMod_ExtGroup2：ASN.1 SRB_ToAddMod_ExtGroup2；源文件第 11002 行；扩展添加组 [[ ]]。
// Encode_SRB_ToAddMod_ExtGroup2 只读不分配；Decode_SRB_ToAddMod_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SRB_ToAddMod_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRB_ToAddMod_ExtGroup2(Encoder& enc, const SRB_ToAddMod_ExtGroup2& value)
{
    enc.WriteBit(value.has_srb_Identity_v1800);
    enc.WriteBit(value.has_n3c_BearerAssociated_r18);
    if (value.has_srb_Identity_v1800) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb_Identity_v1800), 5, 5);
    }
    if (value.has_n3c_BearerAssociated_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n3c_BearerAssociated_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SRB_ToAddMod_ExtGroup2(Decoder& dec, SRB_ToAddMod_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 5, tmp_value)) { goto fail; }
        value.srb_Identity_v1800 = (SRB_Identity_v1800)tmp_value;
    }
    if (present_1) {
        value.n3c_BearerAssociated_r18 = (SRB_ToAddMod_ExtGroup2_N3c_BearerAssociated_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRB_ToAddMod_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRB_ToAddMod_ExtGroup2(SRB_ToAddMod_ExtGroup2& value)
{
    if (value.has_srb_Identity_v1800) {
    }
    if (value.has_n3c_BearerAssociated_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRB_ToAddMod：ASN.1 SRB-ToAddMod；源文件第 10993 行；SEQUENCE。
// Encode_SRB_ToAddMod 只读不分配；Decode_SRB_ToAddMod 可能 malloc（失败时内部已释放并清零）；Free_SRB_ToAddMod 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRB_ToAddMod(Encoder& enc, const SRB_ToAddMod& value)
{
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_reestablishPDCP);
    enc.WriteBit(value.has_discardOnPDCP);
    enc.WriteBit(value.has_pdcp_Config);
    enc.WriteConstrainedInteger((std::int64_t)(value.srb_Identity), 1, 3);
    if (value.has_reestablishPDCP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reestablishPDCP), 0, 0);
    }
    if (value.has_discardOnPDCP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.discardOnPDCP), 0, 0);
    }
    if (value.has_pdcp_Config) {
        Encode_PDCP_Config(enc, value.pdcp_Config);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRB_ToAddMod_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SRB_ToAddMod_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRB_ToAddMod(Decoder& dec, SRB_ToAddMod& value)
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
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.srb_Identity = (SRB_Identity)tmp_value;
    }
    if (present_0) {
        value.reestablishPDCP = (SRB_ToAddMod_ReestablishPDCP)0;
    }
    if (present_1) {
        value.discardOnPDCP = (SRB_ToAddMod_DiscardOnPDCP)0;
    }
    if (present_2) {
        if (Decode_PDCP_Config(dec, value.pdcp_Config) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SRB_ToAddMod_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SRB_ToAddMod_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SRB_ToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRB_ToAddMod(SRB_ToAddMod& value)
{
    if (value.has_reestablishPDCP) {
    }
    if (value.has_discardOnPDCP) {
    }
    if (value.has_pdcp_Config) {
        Free_PDCP_Config(value.pdcp_Config);
    }
    if (value.has_extGroup1) {
        Free_SRB_ToAddMod_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SRB_ToAddMod_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MRB_ToAddModList_r17：ASN.1 MRB-ToAddModList-r17；源文件第 11035 行；SEQUENCE OF。
// Encode_MRB_ToAddModList_r17 只读不分配；Decode_MRB_ToAddModList_r17 可能 malloc（失败时内部已释放并清零）；Free_MRB_ToAddModList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MRB_ToAddModList_r17(Encoder& enc, const MRB_ToAddModList_r17& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MRB_ToAddMod_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MRB_ToAddModList_r17(Decoder& dec, MRB_ToAddModList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MRB_ToAddMod_r17*)std::malloc((std::size_t)value.count * sizeof(MRB_ToAddMod_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MRB_ToAddMod_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MRB_ToAddMod_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MRB_ToAddModList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MRB_ToAddModList_r17(MRB_ToAddModList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MRB_ToAddMod_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
