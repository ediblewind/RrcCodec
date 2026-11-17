/* ============================================================================
 * src/generated/codec_part008.cpp — 生成的编解码函数
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
// SI_RequestConfigRepetition_r18：ASN.1 SI-RequestConfigRepetition-r18；源文件第 12788 行；SEQUENCE。
// Encode_SI_RequestConfigRepetition_r18 只读不分配；Decode_SI_RequestConfigRepetition_r18 可能 malloc（失败时内部已释放并清零）；Free_SI_RequestConfigRepetition_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_RequestConfigRepetition_r18(Encoder& enc, const SI_RequestConfigRepetition_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rach_OccasionsSI_r18);
    enc.WriteBit(value.has_si_RequestResourcesRepetitionNum2_r18);
    enc.WriteBit(value.has_si_RequestResourcesRepetitionNum4_r18);
    enc.WriteBit(value.has_si_RequestResourcesRepetitionNum8_r18);
    if (value.has_rach_OccasionsSI_r18) {
        Encode_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(enc, value.rach_OccasionsSI_r18);
    }
    if (value.has_si_RequestResourcesRepetitionNum2_r18) {
enc.WriteConstrainedLength(value.si_RequestResourcesRepetitionNum2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum2_r18_count; ++i) {
    Encode_SI_RequestResourcesRepetition_r18(enc, value.si_RequestResourcesRepetitionNum2_r18_items[i]);
}
    }
    if (value.has_si_RequestResourcesRepetitionNum4_r18) {
enc.WriteConstrainedLength(value.si_RequestResourcesRepetitionNum4_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum4_r18_count; ++i) {
    Encode_SI_RequestResourcesRepetition_r18(enc, value.si_RequestResourcesRepetitionNum4_r18_items[i]);
}
    }
    if (value.has_si_RequestResourcesRepetitionNum8_r18) {
enc.WriteConstrainedLength(value.si_RequestResourcesRepetitionNum8_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum8_r18_count; ++i) {
    Encode_SI_RequestResourcesRepetition_r18(enc, value.si_RequestResourcesRepetitionNum8_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SI_RequestConfigRepetition_r18(Decoder& dec, SI_RequestConfigRepetition_r18& value)
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
        if (Decode_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(dec, value.rach_OccasionsSI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.si_RequestResourcesRepetitionNum2_r18_count)) { goto fail; }
if (value.si_RequestResourcesRepetitionNum2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.si_RequestResourcesRepetitionNum2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.si_RequestResourcesRepetitionNum2_r18_count > 0u) {
    value.si_RequestResourcesRepetitionNum2_r18_items = (SI_RequestResourcesRepetition_r18*)std::malloc((std::size_t)value.si_RequestResourcesRepetitionNum2_r18_count * sizeof(SI_RequestResourcesRepetition_r18));
    if (value.si_RequestResourcesRepetitionNum2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.si_RequestResourcesRepetitionNum2_r18_items, 0, (std::size_t)value.si_RequestResourcesRepetitionNum2_r18_count * sizeof(SI_RequestResourcesRepetition_r18));
}
for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum2_r18_count; ++i) {
    if (Decode_SI_RequestResourcesRepetition_r18(dec, value.si_RequestResourcesRepetitionNum2_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.si_RequestResourcesRepetitionNum4_r18_count)) { goto fail; }
if (value.si_RequestResourcesRepetitionNum4_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.si_RequestResourcesRepetitionNum4_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.si_RequestResourcesRepetitionNum4_r18_count > 0u) {
    value.si_RequestResourcesRepetitionNum4_r18_items = (SI_RequestResourcesRepetition_r18*)std::malloc((std::size_t)value.si_RequestResourcesRepetitionNum4_r18_count * sizeof(SI_RequestResourcesRepetition_r18));
    if (value.si_RequestResourcesRepetitionNum4_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.si_RequestResourcesRepetitionNum4_r18_items, 0, (std::size_t)value.si_RequestResourcesRepetitionNum4_r18_count * sizeof(SI_RequestResourcesRepetition_r18));
}
for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum4_r18_count; ++i) {
    if (Decode_SI_RequestResourcesRepetition_r18(dec, value.si_RequestResourcesRepetitionNum4_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.si_RequestResourcesRepetitionNum8_r18_count)) { goto fail; }
if (value.si_RequestResourcesRepetitionNum8_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.si_RequestResourcesRepetitionNum8_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.si_RequestResourcesRepetitionNum8_r18_count > 0u) {
    value.si_RequestResourcesRepetitionNum8_r18_items = (SI_RequestResourcesRepetition_r18*)std::malloc((std::size_t)value.si_RequestResourcesRepetitionNum8_r18_count * sizeof(SI_RequestResourcesRepetition_r18));
    if (value.si_RequestResourcesRepetitionNum8_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.si_RequestResourcesRepetitionNum8_r18_items, 0, (std::size_t)value.si_RequestResourcesRepetitionNum8_r18_count * sizeof(SI_RequestResourcesRepetition_r18));
}
for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum8_r18_count; ++i) {
    if (Decode_SI_RequestResourcesRepetition_r18(dec, value.si_RequestResourcesRepetitionNum8_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_RequestConfigRepetition_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_RequestConfigRepetition_r18(SI_RequestConfigRepetition_r18& value)
{
    if (value.has_rach_OccasionsSI_r18) {
        Free_SI_RequestConfigRepetition_r18_Rach_OccasionsSI_r18(value.rach_OccasionsSI_r18);
    }
    if (value.has_si_RequestResourcesRepetitionNum2_r18) {
        if (value.si_RequestResourcesRepetitionNum2_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum2_r18_count; ++i) {
                Free_SI_RequestResourcesRepetition_r18(value.si_RequestResourcesRepetitionNum2_r18_items[i]);
            }
            std::free(value.si_RequestResourcesRepetitionNum2_r18_items);
            value.si_RequestResourcesRepetitionNum2_r18_items = nullptr;
        }
        value.si_RequestResourcesRepetitionNum2_r18_count = 0;
    }
    if (value.has_si_RequestResourcesRepetitionNum4_r18) {
        if (value.si_RequestResourcesRepetitionNum4_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum4_r18_count; ++i) {
                Free_SI_RequestResourcesRepetition_r18(value.si_RequestResourcesRepetitionNum4_r18_items[i]);
            }
            std::free(value.si_RequestResourcesRepetitionNum4_r18_items);
            value.si_RequestResourcesRepetitionNum4_r18_items = nullptr;
        }
        value.si_RequestResourcesRepetitionNum4_r18_count = 0;
    }
    if (value.has_si_RequestResourcesRepetitionNum8_r18) {
        if (value.si_RequestResourcesRepetitionNum8_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.si_RequestResourcesRepetitionNum8_r18_count; ++i) {
                Free_SI_RequestResourcesRepetition_r18(value.si_RequestResourcesRepetitionNum8_r18_items[i]);
            }
            std::free(value.si_RequestResourcesRepetitionNum8_r18_items);
            value.si_RequestResourcesRepetitionNum8_r18_items = nullptr;
        }
        value.si_RequestResourcesRepetitionNum8_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_SchedulingInfo_v1800：ASN.1 SI-SchedulingInfo-v1800；源文件第 12831 行；SEQUENCE。
// Encode_SI_SchedulingInfo_v1800 只读不分配；Decode_SI_SchedulingInfo_v1800 可能 malloc（失败时内部已释放并清零）；Free_SI_SchedulingInfo_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_SchedulingInfo_v1800(Encoder& enc, const SI_SchedulingInfo_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_si_RequestConfigMSG1_Repetition_r18);
    enc.WriteBit(value.has_si_RequestConfigRedCap_MSG1_Repetition_r18);
    enc.WriteBit(value.has_si_RequestConfigSUL_MSG1_Repetition_r18);
    if (value.has_si_RequestConfigMSG1_Repetition_r18) {
        Encode_SI_RequestConfigRepetition_r18(enc, value.si_RequestConfigMSG1_Repetition_r18);
    }
    if (value.has_si_RequestConfigRedCap_MSG1_Repetition_r18) {
        Encode_SI_RequestConfigRepetition_r18(enc, value.si_RequestConfigRedCap_MSG1_Repetition_r18);
    }
    if (value.has_si_RequestConfigSUL_MSG1_Repetition_r18) {
        Encode_SI_RequestConfigRepetition_r18(enc, value.si_RequestConfigSUL_MSG1_Repetition_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SI_SchedulingInfo_v1800(Decoder& dec, SI_SchedulingInfo_v1800& value)
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
        if (Decode_SI_RequestConfigRepetition_r18(dec, value.si_RequestConfigMSG1_Repetition_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SI_RequestConfigRepetition_r18(dec, value.si_RequestConfigRedCap_MSG1_Repetition_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SI_RequestConfigRepetition_r18(dec, value.si_RequestConfigSUL_MSG1_Repetition_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_SchedulingInfo_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_SchedulingInfo_v1800(SI_SchedulingInfo_v1800& value)
{
    if (value.has_si_RequestConfigMSG1_Repetition_r18) {
        Free_SI_RequestConfigRepetition_r18(value.si_RequestConfigMSG1_Repetition_r18);
    }
    if (value.has_si_RequestConfigRedCap_MSG1_Repetition_r18) {
        Free_SI_RequestConfigRepetition_r18(value.si_RequestConfigRedCap_MSG1_Repetition_r18);
    }
    if (value.has_si_RequestConfigSUL_MSG1_Repetition_r18) {
        Free_SI_RequestConfigRepetition_r18(value.si_RequestConfigSUL_MSG1_Repetition_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1800_IEs_FeaturePriorities_v1800：ASN.1 featurePriorities-v1800；源文件第 1904 行；SEQUENCE。
// Encode_SIB1_v1800_IEs_FeaturePriorities_v1800 只读不分配；Decode_SIB1_v1800_IEs_FeaturePriorities_v1800 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1800_IEs_FeaturePriorities_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1800_IEs_FeaturePriorities_v1800(Encoder& enc, const SIB1_v1800_IEs_FeaturePriorities_v1800& value)
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

ErrorCode Decode_SIB1_v1800_IEs_FeaturePriorities_v1800(Decoder& dec, SIB1_v1800_IEs_FeaturePriorities_v1800& value)
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
    Free_SIB1_v1800_IEs_FeaturePriorities_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1800_IEs_FeaturePriorities_v1800(SIB1_v1800_IEs_FeaturePriorities_v1800& value)
{
    if (value.has_msg1_Repetitions_Priority_r18) {
    }
    if (value.has_eRedCapPriority_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 1923 行；空 SEQUENCE{}。
// Encode_SIB1_v1800_IEs_NonCriticalExtension 只读不分配；Decode_SIB1_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1800_IEs_NonCriticalExtension(Encoder& enc, const SIB1_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_SIB1_v1800_IEs_NonCriticalExtension(Decoder& dec, SIB1_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1800_IEs_NonCriticalExtension(SIB1_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1800_IEs：ASN.1 SIB1-v1800-IEs；源文件第 1900 行；SEQUENCE。
// Encode_SIB1_v1800_IEs 只读不分配；Decode_SIB1_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1800_IEs(Encoder& enc, const SIB1_v1800_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_ncr_Support_r18);
    enc.WriteBit(value.has_mt_SDT_ConfigCommonSIB_r18);
    enc.WriteBit(value.has_musim_CapRestrictionAllowed_r18);
    enc.WriteBit(value.has_featurePriorities_v1800);
    enc.WriteBit(value.has_si_SchedulingInfo_v1800);
    enc.WriteBit(value.has_cellBarredATG_r18);
    enc.WriteBit(value.has_cellBarredNES_r18);
    enc.WriteBit(value.has_mobileIAB_Cell_r18);
    enc.WriteBit(value.has_eDRX_AllowedInactive_r18);
    enc.WriteBit(value.has_intraFreqReselection_eRedCap_r18);
    enc.WriteBit(value.has_nonServingCellMII_r18);
    enc.WriteBit(value.has_sdt_BeamFailureRecoveryProhibitTimer_r18);
    enc.WriteBit(value.has_eRedCap_ConfigCommon_r18);
    enc.WriteBit(value.has_cellBarredFixedVSAT_r18);
    enc.WriteBit(value.has_cellBarredMobileVSAT_r18);
    enc.WriteBit(value.has_reselectionMeasurementsNR_r18);
    enc.WriteBit(value.has_cellBarred2RxXR_r18);
    enc.WriteBit(value.has_intraFreqReselection2RxXR_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ncr_Support_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncr_Support_r18), 0, 0);
    }
    if (value.has_mt_SDT_ConfigCommonSIB_r18) {
        Encode_MT_SDT_ConfigCommonSIB_r18(enc, value.mt_SDT_ConfigCommonSIB_r18);
    }
    if (value.has_musim_CapRestrictionAllowed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_CapRestrictionAllowed_r18), 0, 0);
    }
    if (value.has_featurePriorities_v1800) {
        Encode_SIB1_v1800_IEs_FeaturePriorities_v1800(enc, value.featurePriorities_v1800);
    }
    if (value.has_si_SchedulingInfo_v1800) {
        Encode_SI_SchedulingInfo_v1800(enc, value.si_SchedulingInfo_v1800);
    }
    if (value.has_cellBarredATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredATG_r18), 0, 1);
    }
    if (value.has_cellBarredNES_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredNES_r18), 0, 0);
    }
    if (value.has_mobileIAB_Cell_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mobileIAB_Cell_r18), 0, 0);
    }
    if (value.has_eDRX_AllowedInactive_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eDRX_AllowedInactive_r18), 0, 0);
    }
    if (value.has_intraFreqReselection_eRedCap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqReselection_eRedCap_r18), 0, 1);
    }
    if (value.has_nonServingCellMII_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonServingCellMII_r18), 0, 0);
    }
    if (value.has_sdt_BeamFailureRecoveryProhibitTimer_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_BeamFailureRecoveryProhibitTimer_r18), 0, 7);
    }
    if (value.has_eRedCap_ConfigCommon_r18) {
        Encode_ERedCap_ConfigCommonSIB_r18(enc, value.eRedCap_ConfigCommon_r18);
    }
    if (value.has_cellBarredFixedVSAT_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredFixedVSAT_r18), 0, 1);
    }
    if (value.has_cellBarredMobileVSAT_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredMobileVSAT_r18), 0, 1);
    }
    if (value.has_reselectionMeasurementsNR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reselectionMeasurementsNR_r18), 0, 0);
    }
    if (value.has_cellBarred2RxXR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellBarred2RxXR_r18), 0, 0);
    }
    if (value.has_intraFreqReselection2RxXR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqReselection2RxXR_r18), 0, 1);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SIB1_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_v1800_IEs(Decoder& dec, SIB1_v1800_IEs& value)
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
    if (present_0) {
        value.ncr_Support_r18 = (SIB1_v1800_IEs_Ncr_Support_r18)0;
    }
    if (present_1) {
        if (Decode_MT_SDT_ConfigCommonSIB_r18(dec, value.mt_SDT_ConfigCommonSIB_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.musim_CapRestrictionAllowed_r18 = (SIB1_v1800_IEs_Musim_CapRestrictionAllowed_r18)0;
    }
    if (present_3) {
        if (Decode_SIB1_v1800_IEs_FeaturePriorities_v1800(dec, value.featurePriorities_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SI_SchedulingInfo_v1800(dec, value.si_SchedulingInfo_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredATG_r18 = (SIB1_v1800_IEs_CellBarredATG_r18)tmp_value;
    }
    if (present_6) {
        value.cellBarredNES_r18 = (SIB1_v1800_IEs_CellBarredNES_r18)0;
    }
    if (present_7) {
        value.mobileIAB_Cell_r18 = (SIB1_v1800_IEs_MobileIAB_Cell_r18)0;
    }
    if (present_8) {
        value.eDRX_AllowedInactive_r18 = (SIB1_v1800_IEs_EDRX_AllowedInactive_r18)0;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraFreqReselection_eRedCap_r18 = (SIB1_v1800_IEs_IntraFreqReselection_eRedCap_r18)tmp_value;
    }
    if (present_10) {
        value.nonServingCellMII_r18 = (SIB1_v1800_IEs_NonServingCellMII_r18)0;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sdt_BeamFailureRecoveryProhibitTimer_r18 = (SIB1_v1800_IEs_Sdt_BeamFailureRecoveryProhibitTimer_r18)tmp_value;
    }
    if (present_12) {
        if (Decode_ERedCap_ConfigCommonSIB_r18(dec, value.eRedCap_ConfigCommon_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredFixedVSAT_r18 = (SIB1_v1800_IEs_CellBarredFixedVSAT_r18)tmp_value;
    }
    if (present_14) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredMobileVSAT_r18 = (SIB1_v1800_IEs_CellBarredMobileVSAT_r18)tmp_value;
    }
    if (present_15) {
        value.reselectionMeasurementsNR_r18 = (SIB1_v1800_IEs_ReselectionMeasurementsNR_r18)0;
    }
    if (present_16) {
        value.cellBarred2RxXR_r18 = (SIB1_v1800_IEs_CellBarred2RxXR_r18)0;
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraFreqReselection2RxXR_r18 = (SIB1_v1800_IEs_IntraFreqReselection2RxXR_r18)tmp_value;
    }
    if (present_18) {
        if (Decode_SIB1_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1800_IEs(SIB1_v1800_IEs& value)
{
    if (value.has_ncr_Support_r18) {
    }
    if (value.has_mt_SDT_ConfigCommonSIB_r18) {
        Free_MT_SDT_ConfigCommonSIB_r18(value.mt_SDT_ConfigCommonSIB_r18);
    }
    if (value.has_musim_CapRestrictionAllowed_r18) {
    }
    if (value.has_featurePriorities_v1800) {
        Free_SIB1_v1800_IEs_FeaturePriorities_v1800(value.featurePriorities_v1800);
    }
    if (value.has_si_SchedulingInfo_v1800) {
        Free_SI_SchedulingInfo_v1800(value.si_SchedulingInfo_v1800);
    }
    if (value.has_cellBarredATG_r18) {
    }
    if (value.has_cellBarredNES_r18) {
    }
    if (value.has_mobileIAB_Cell_r18) {
    }
    if (value.has_eDRX_AllowedInactive_r18) {
    }
    if (value.has_intraFreqReselection_eRedCap_r18) {
    }
    if (value.has_nonServingCellMII_r18) {
    }
    if (value.has_sdt_BeamFailureRecoveryProhibitTimer_r18) {
    }
    if (value.has_eRedCap_ConfigCommon_r18) {
        Free_ERedCap_ConfigCommonSIB_r18(value.eRedCap_ConfigCommon_r18);
    }
    if (value.has_cellBarredFixedVSAT_r18) {
    }
    if (value.has_cellBarredMobileVSAT_r18) {
    }
    if (value.has_reselectionMeasurementsNR_r18) {
    }
    if (value.has_cellBarred2RxXR_r18) {
    }
    if (value.has_intraFreqReselection2RxXR_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_SIB1_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_RequestConfig_Rach_OccasionsSI：ASN.1 rach-OccasionsSI；源文件第 12771 行；SEQUENCE。
// Encode_SI_RequestConfig_Rach_OccasionsSI 只读不分配；Decode_SI_RequestConfig_Rach_OccasionsSI 可能 malloc（失败时内部已释放并清零）；Free_SI_RequestConfig_Rach_OccasionsSI 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_RequestConfig_Rach_OccasionsSI(Encoder& enc, const SI_RequestConfig_Rach_OccasionsSI& value)
{
    (void)value;
    Encode_RACH_ConfigGeneric(enc, value.rach_ConfigSI);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_perRACH_Occasion), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SI_RequestConfig_Rach_OccasionsSI(Decoder& dec, SI_RequestConfig_Rach_OccasionsSI& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigSI) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_perRACH_Occasion = (SI_RequestConfig_Rach_OccasionsSI_Ssb_perRACH_Occasion)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_RequestConfig_Rach_OccasionsSI(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_RequestConfig_Rach_OccasionsSI(SI_RequestConfig_Rach_OccasionsSI& value)
{
    Free_RACH_ConfigGeneric(value.rach_ConfigSI);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_RequestConfig：ASN.1 SI-RequestConfig；源文件第 12770 行；SEQUENCE。
// Encode_SI_RequestConfig 只读不分配；Decode_SI_RequestConfig 可能 malloc（失败时内部已释放并清零）；Free_SI_RequestConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_RequestConfig(Encoder& enc, const SI_RequestConfig& value)
{
    (void)value;
    enc.WriteBit(value.has_rach_OccasionsSI);
    enc.WriteBit(value.has_si_RequestPeriod);
    if (value.has_rach_OccasionsSI) {
        Encode_SI_RequestConfig_Rach_OccasionsSI(enc, value.rach_OccasionsSI);
    }
    if (value.has_si_RequestPeriod) {
        enc.WriteConstrainedInteger((std::int64_t)(value.si_RequestPeriod), 0, 7);
    }
enc.WriteConstrainedLength(value.si_RequestResources_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.si_RequestResources_count; ++i) {
    Encode_SI_RequestResources(enc, value.si_RequestResources_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_SI_RequestConfig(Decoder& dec, SI_RequestConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SI_RequestConfig_Rach_OccasionsSI(dec, value.rach_OccasionsSI) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.si_RequestPeriod = (SI_RequestConfig_Si_RequestPeriod)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.si_RequestResources_count)) { goto fail; }
if (value.si_RequestResources_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.si_RequestResources_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.si_RequestResources_count > 0u) {
    value.si_RequestResources_items = (SI_RequestResources*)std::malloc((std::size_t)value.si_RequestResources_count * sizeof(SI_RequestResources));
    if (value.si_RequestResources_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.si_RequestResources_items, 0, (std::size_t)value.si_RequestResources_count * sizeof(SI_RequestResources));
}
for (std::uint32_t i = 0; i < value.si_RequestResources_count; ++i) {
    if (Decode_SI_RequestResources(dec, value.si_RequestResources_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_RequestConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_RequestConfig(SI_RequestConfig& value)
{
    if (value.has_rach_OccasionsSI) {
        Free_SI_RequestConfig_Rach_OccasionsSI(value.rach_OccasionsSI);
    }
    if (value.has_si_RequestPeriod) {
    }
    if (value.si_RequestResources_items != nullptr) {
        for (std::uint32_t i = 0; i < value.si_RequestResources_count; ++i) {
            Free_SI_RequestResources(value.si_RequestResources_items[i]);
        }
        std::free(value.si_RequestResources_items);
        value.si_RequestResources_items = nullptr;
    }
    value.si_RequestResources_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_SchedulingInfo_v1740：ASN.1 SI-SchedulingInfo-v1740；源文件第 12827 行；SEQUENCE。
// Encode_SI_SchedulingInfo_v1740 只读不分配；Decode_SI_SchedulingInfo_v1740 可能 malloc（失败时内部已释放并清零）；Free_SI_SchedulingInfo_v1740 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_SchedulingInfo_v1740(Encoder& enc, const SI_SchedulingInfo_v1740& value)
{
    (void)value;
    enc.WriteBit(value.has_si_RequestConfigRedCap_r17);
    if (value.has_si_RequestConfigRedCap_r17) {
        Encode_SI_RequestConfig(enc, value.si_RequestConfigRedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SI_SchedulingInfo_v1740(Decoder& dec, SI_SchedulingInfo_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SI_RequestConfig(dec, value.si_RequestConfigRedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_SchedulingInfo_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_SchedulingInfo_v1740(SI_SchedulingInfo_v1740& value)
{
    if (value.has_si_RequestConfigRedCap_r17) {
        Free_SI_RequestConfig(value.si_RequestConfigRedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1740_IEs：ASN.1 SIB1-v1740-IEs；源文件第 1895 行；SEQUENCE。
// Encode_SIB1_v1740_IEs 只读不分配；Decode_SIB1_v1740_IEs 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1740_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1740_IEs(Encoder& enc, const SIB1_v1740_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_si_SchedulingInfo_v1740);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_si_SchedulingInfo_v1740) {
        Encode_SI_SchedulingInfo_v1740(enc, value.si_SchedulingInfo_v1740);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SIB1_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_v1740_IEs(Decoder& dec, SIB1_v1740_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SI_SchedulingInfo_v1740(dec, value.si_SchedulingInfo_v1740) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SIB1_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1740_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1740_IEs(SIB1_v1740_IEs& value)
{
    if (value.has_si_SchedulingInfo_v1740) {
        Free_SI_SchedulingInfo_v1740(value.si_SchedulingInfo_v1740);
    }
    if (value.has_nonCriticalExtension) {
        Free_SIB1_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SDT_ConfigCommonSIB_r17：ASN.1 SDT-ConfigCommonSIB-r17；源文件第 1930 行；SEQUENCE。
// Encode_SDT_ConfigCommonSIB_r17 只读不分配；Decode_SDT_ConfigCommonSIB_r17 可能 malloc（失败时内部已释放并清零）；Free_SDT_ConfigCommonSIB_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SDT_ConfigCommonSIB_r17(Encoder& enc, const SDT_ConfigCommonSIB_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sdt_RSRP_Threshold_r17);
    enc.WriteBit(value.has_sdt_LogicalChannelSR_DelayTimer_r17);
    if (value.has_sdt_RSRP_Threshold_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_RSRP_Threshold_r17), 0, 127);
    }
    if (value.has_sdt_LogicalChannelSR_DelayTimer_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdt_LogicalChannelSR_DelayTimer_r17), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.sdt_DataVolumeThreshold_r17), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.t319a_r17), 0, 15);
    return enc.Error();
}

ErrorCode Decode_SDT_ConfigCommonSIB_r17(Decoder& dec, SDT_ConfigCommonSIB_r17& value)
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
        value.sdt_RSRP_Threshold_r17 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sdt_LogicalChannelSR_DelayTimer_r17 = (SDT_ConfigCommonSIB_r17_Sdt_LogicalChannelSR_DelayTimer_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.sdt_DataVolumeThreshold_r17 = (SDT_ConfigCommonSIB_r17_Sdt_DataVolumeThreshold_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.t319a_r17 = (SDT_ConfigCommonSIB_r17_T319a_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDT_ConfigCommonSIB_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDT_ConfigCommonSIB_r17(SDT_ConfigCommonSIB_r17& value)
{
    if (value.has_sdt_RSRP_Threshold_r17) {
    }
    if (value.has_sdt_LogicalChannelSR_DelayTimer_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17：ASN.1 cellBarredRedCap-r17；源文件第 1941 行；SEQUENCE。
// Encode_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17 只读不分配；Decode_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17 可能 malloc（失败时内部已释放并清零）；Free_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(Encoder& enc, const RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredRedCap1Rx_r17), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredRedCap2Rx_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(Decoder& dec, RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredRedCap1Rx_r17 = (RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap1Rx_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredRedCap2Rx_r17 = (RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17_CellBarredRedCap2Rx_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RedCap_ConfigCommonSIB_r17：ASN.1 RedCap-ConfigCommonSIB-r17；源文件第 1939 行；SEQUENCE。
// Encode_RedCap_ConfigCommonSIB_r17 只读不分配；Decode_RedCap_ConfigCommonSIB_r17 可能 malloc（失败时内部已释放并清零）；Free_RedCap_ConfigCommonSIB_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RedCap_ConfigCommonSIB_r17(Encoder& enc, const RedCap_ConfigCommonSIB_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_halfDuplexRedCapAllowed_r17);
    enc.WriteBit(value.has_cellBarredRedCap_r17);
    if (value.has_halfDuplexRedCapAllowed_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.halfDuplexRedCapAllowed_r17), 0, 0);
    }
    if (value.has_cellBarredRedCap_r17) {
        Encode_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(enc, value.cellBarredRedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_RedCap_ConfigCommonSIB_r17(Decoder& dec, RedCap_ConfigCommonSIB_r17& value)
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
        value.halfDuplexRedCapAllowed_r17 = (RedCap_ConfigCommonSIB_r17_HalfDuplexRedCapAllowed_r17)0;
    }
    if (present_1) {
        if (Decode_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(dec, value.cellBarredRedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RedCap_ConfigCommonSIB_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RedCap_ConfigCommonSIB_r17(RedCap_ConfigCommonSIB_r17& value)
{
    if (value.has_halfDuplexRedCapAllowed_r17) {
    }
    if (value.has_cellBarredRedCap_r17) {
        Free_RedCap_ConfigCommonSIB_r17_CellBarredRedCap_r17(value.cellBarredRedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SI_SchedulingInfo_v1700：ASN.1 SI-SchedulingInfo-v1700；源文件第 12822 行；SEQUENCE。
// Encode_SI_SchedulingInfo_v1700 只读不分配；Decode_SI_SchedulingInfo_v1700 可能 malloc（失败时内部已释放并清零）；Free_SI_SchedulingInfo_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SI_SchedulingInfo_v1700(Encoder& enc, const SI_SchedulingInfo_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy);
enc.WriteConstrainedLength(value.schedulingInfoList2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.schedulingInfoList2_r17_count; ++i) {
    Encode_SchedulingInfo2_r17(enc, value.schedulingInfoList2_r17_items[i]);
}
    if (value.has_dummy) {
        Encode_SI_RequestConfig(enc, value.dummy);
    }
    return enc.Error();
}

ErrorCode Decode_SI_SchedulingInfo_v1700(Decoder& dec, SI_SchedulingInfo_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.schedulingInfoList2_r17_count)) { goto fail; }
if (value.schedulingInfoList2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.schedulingInfoList2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.schedulingInfoList2_r17_count > 0u) {
    value.schedulingInfoList2_r17_items = (SchedulingInfo2_r17*)std::malloc((std::size_t)value.schedulingInfoList2_r17_count * sizeof(SchedulingInfo2_r17));
    if (value.schedulingInfoList2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.schedulingInfoList2_r17_items, 0, (std::size_t)value.schedulingInfoList2_r17_count * sizeof(SchedulingInfo2_r17));
}
for (std::uint32_t i = 0; i < value.schedulingInfoList2_r17_count; ++i) {
    if (Decode_SchedulingInfo2_r17(dec, value.schedulingInfoList2_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_SI_RequestConfig(dec, value.dummy) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SI_SchedulingInfo_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SI_SchedulingInfo_v1700(SI_SchedulingInfo_v1700& value)
{
    if (value.schedulingInfoList2_r17_items != nullptr) {
        for (std::uint32_t i = 0; i < value.schedulingInfoList2_r17_count; ++i) {
            Free_SchedulingInfo2_r17(value.schedulingInfoList2_r17_items[i]);
        }
        std::free(value.schedulingInfoList2_r17_items);
        value.schedulingInfoList2_r17_items = nullptr;
    }
    value.schedulingInfoList2_r17_count = 0;
    if (value.has_dummy) {
        Free_SI_RequestConfig(value.dummy);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UAC_BarringInfoSetList_v1700：ASN.1 UAC-BarringInfoSetList-v1700；源文件第 13829 行；SEQUENCE OF。
// Encode_UAC_BarringInfoSetList_v1700 只读不分配；Decode_UAC_BarringInfoSetList_v1700 可能 malloc（失败时内部已释放并清零）；Free_UAC_BarringInfoSetList_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UAC_BarringInfoSetList_v1700(Encoder& enc, const UAC_BarringInfoSetList_v1700& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_UAC_BarringInfoSet_v1700(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_UAC_BarringInfoSetList_v1700(Decoder& dec, UAC_BarringInfoSetList_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UAC_BarringInfoSet_v1700*)std::malloc((std::size_t)value.count * sizeof(UAC_BarringInfoSet_v1700));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UAC_BarringInfoSet_v1700));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_UAC_BarringInfoSet_v1700(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_UAC_BarringInfoSetList_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UAC_BarringInfoSetList_v1700(UAC_BarringInfoSetList_v1700& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_UAC_BarringInfoSet_v1700(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1700_IEs_Uac_BarringInfo_v1700：ASN.1 uac-BarringInfo-v1700；源文件第 1875 行；SEQUENCE。
// Encode_SIB1_v1700_IEs_Uac_BarringInfo_v1700 只读不分配；Decode_SIB1_v1700_IEs_Uac_BarringInfo_v1700 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1700_IEs_Uac_BarringInfo_v1700 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1700_IEs_Uac_BarringInfo_v1700(Encoder& enc, const SIB1_v1700_IEs_Uac_BarringInfo_v1700& value)
{
    (void)value;
    Encode_UAC_BarringInfoSetList_v1700(enc, value.uac_BarringInfoSetList_v1700);
    return enc.Error();
}

ErrorCode Decode_SIB1_v1700_IEs_Uac_BarringInfo_v1700(Decoder& dec, SIB1_v1700_IEs_Uac_BarringInfo_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_UAC_BarringInfoSetList_v1700(dec, value.uac_BarringInfoSetList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1700_IEs_Uac_BarringInfo_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1700_IEs_Uac_BarringInfo_v1700(SIB1_v1700_IEs_Uac_BarringInfo_v1700& value)
{
    Free_UAC_BarringInfoSetList_v1700(value.uac_BarringInfoSetList_v1700);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1700_IEs_FeaturePriorities_r17：ASN.1 featurePriorities-r17；源文件第 1880 行；SEQUENCE。
// Encode_SIB1_v1700_IEs_FeaturePriorities_r17 只读不分配；Decode_SIB1_v1700_IEs_FeaturePriorities_r17 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1700_IEs_FeaturePriorities_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1700_IEs_FeaturePriorities_r17(Encoder& enc, const SIB1_v1700_IEs_FeaturePriorities_r17& value)
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

ErrorCode Decode_SIB1_v1700_IEs_FeaturePriorities_r17(Decoder& dec, SIB1_v1700_IEs_FeaturePriorities_r17& value)
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
    Free_SIB1_v1700_IEs_FeaturePriorities_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1700_IEs_FeaturePriorities_r17(SIB1_v1700_IEs_FeaturePriorities_r17& value)
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

// --------------------------------------------------------------------------
// SIB1_v1700_IEs：ASN.1 SIB1-v1700-IEs；源文件第 1873 行；SEQUENCE。
// Encode_SIB1_v1700_IEs 只读不分配；Decode_SIB1_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1700_IEs(Encoder& enc, const SIB1_v1700_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_hsdn_Cell_r17);
    enc.WriteBit(value.has_uac_BarringInfo_v1700);
    enc.WriteBit(value.has_sdt_ConfigCommon_r17);
    enc.WriteBit(value.has_redCap_ConfigCommon_r17);
    enc.WriteBit(value.has_featurePriorities_r17);
    enc.WriteBit(value.has_si_SchedulingInfo_v1700);
    enc.WriteBit(value.has_hyperSFN_r17);
    enc.WriteBit(value.has_eDRX_AllowedIdle_r17);
    enc.WriteBit(value.has_eDRX_AllowedInactive_r17);
    enc.WriteBit(value.has_intraFreqReselectionRedCap_r17);
    enc.WriteBit(value.has_cellBarredNTN_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_hsdn_Cell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hsdn_Cell_r17), 0, 0);
    }
    if (value.has_uac_BarringInfo_v1700) {
        Encode_SIB1_v1700_IEs_Uac_BarringInfo_v1700(enc, value.uac_BarringInfo_v1700);
    }
    if (value.has_sdt_ConfigCommon_r17) {
        Encode_SDT_ConfigCommonSIB_r17(enc, value.sdt_ConfigCommon_r17);
    }
    if (value.has_redCap_ConfigCommon_r17) {
        Encode_RedCap_ConfigCommonSIB_r17(enc, value.redCap_ConfigCommon_r17);
    }
    if (value.has_featurePriorities_r17) {
        Encode_SIB1_v1700_IEs_FeaturePriorities_r17(enc, value.featurePriorities_r17);
    }
    if (value.has_si_SchedulingInfo_v1700) {
        Encode_SI_SchedulingInfo_v1700(enc, value.si_SchedulingInfo_v1700);
    }
    if (value.has_hyperSFN_r17) {
        enc.WriteFixedBitString(value.hyperSFN_r17.bytes, value.hyperSFN_r17.bitLength, 10, 10);
    }
    if (value.has_eDRX_AllowedIdle_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eDRX_AllowedIdle_r17), 0, 0);
    }
    if (value.has_eDRX_AllowedInactive_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eDRX_AllowedInactive_r17), 0, 0);
    }
    if (value.has_intraFreqReselectionRedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqReselectionRedCap_r17), 0, 1);
    }
    if (value.has_cellBarredNTN_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellBarredNTN_r17), 0, 1);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SIB1_v1740_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_v1700_IEs(Decoder& dec, SIB1_v1700_IEs& value)
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
        value.hsdn_Cell_r17 = (SIB1_v1700_IEs_Hsdn_Cell_r17)0;
    }
    if (present_1) {
        if (Decode_SIB1_v1700_IEs_Uac_BarringInfo_v1700(dec, value.uac_BarringInfo_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SDT_ConfigCommonSIB_r17(dec, value.sdt_ConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_RedCap_ConfigCommonSIB_r17(dec, value.redCap_ConfigCommon_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SIB1_v1700_IEs_FeaturePriorities_r17(dec, value.featurePriorities_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SI_SchedulingInfo_v1700(dec, value.si_SchedulingInfo_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.hyperSFN_r17.bytes = string_bytes;
        value.hyperSFN_r17.bitLength = string_length;
    }
    if (present_7) {
        value.eDRX_AllowedIdle_r17 = (SIB1_v1700_IEs_EDRX_AllowedIdle_r17)0;
    }
    if (present_8) {
        value.eDRX_AllowedInactive_r17 = (SIB1_v1700_IEs_EDRX_AllowedInactive_r17)0;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraFreqReselectionRedCap_r17 = (SIB1_v1700_IEs_IntraFreqReselectionRedCap_r17)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cellBarredNTN_r17 = (SIB1_v1700_IEs_CellBarredNTN_r17)tmp_value;
    }
    if (present_11) {
        if (Decode_SIB1_v1740_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1700_IEs(SIB1_v1700_IEs& value)
{
    if (value.has_hsdn_Cell_r17) {
    }
    if (value.has_uac_BarringInfo_v1700) {
        Free_SIB1_v1700_IEs_Uac_BarringInfo_v1700(value.uac_BarringInfo_v1700);
    }
    if (value.has_sdt_ConfigCommon_r17) {
        Free_SDT_ConfigCommonSIB_r17(value.sdt_ConfigCommon_r17);
    }
    if (value.has_redCap_ConfigCommon_r17) {
        Free_RedCap_ConfigCommonSIB_r17(value.redCap_ConfigCommon_r17);
    }
    if (value.has_featurePriorities_r17) {
        Free_SIB1_v1700_IEs_FeaturePriorities_r17(value.featurePriorities_r17);
    }
    if (value.has_si_SchedulingInfo_v1700) {
        Free_SI_SchedulingInfo_v1700(value.si_SchedulingInfo_v1700);
    }
    if (value.has_hyperSFN_r17) {
        std::free(value.hyperSFN_r17.bytes);
        value.hyperSFN_r17.bytes = nullptr;
        value.hyperSFN_r17.bitLength = 0;
    }
    if (value.has_eDRX_AllowedIdle_r17) {
    }
    if (value.has_eDRX_AllowedInactive_r17) {
    }
    if (value.has_intraFreqReselectionRedCap_r17) {
    }
    if (value.has_cellBarredNTN_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_SIB1_v1740_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1630_IEs_Uac_BarringInfo_v1630：ASN.1 uac-BarringInfo-v1630；源文件第 1867 行；SEQUENCE。
// Encode_SIB1_v1630_IEs_Uac_BarringInfo_v1630 只读不分配；Decode_SIB1_v1630_IEs_Uac_BarringInfo_v1630 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1630_IEs_Uac_BarringInfo_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1630_IEs_Uac_BarringInfo_v1630(Encoder& enc, const SIB1_v1630_IEs_Uac_BarringInfo_v1630& value)
{
    (void)value;
enc.WriteConstrainedLength(value.uac_AC1_SelectAssistInfo_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.uac_AC1_SelectAssistInfo_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.uac_AC1_SelectAssistInfo_r16_items[i]), 0, 3);
}
    return enc.Error();
}

ErrorCode Decode_SIB1_v1630_IEs_Uac_BarringInfo_v1630(Decoder& dec, SIB1_v1630_IEs_Uac_BarringInfo_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.uac_AC1_SelectAssistInfo_r16_count)) { goto fail; }
if (value.uac_AC1_SelectAssistInfo_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.uac_AC1_SelectAssistInfo_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.uac_AC1_SelectAssistInfo_r16_count > 0u) {
    value.uac_AC1_SelectAssistInfo_r16_items = (UAC_AC1_SelectAssistInfo_r16*)std::malloc((std::size_t)value.uac_AC1_SelectAssistInfo_r16_count * sizeof(UAC_AC1_SelectAssistInfo_r16));
    if (value.uac_AC1_SelectAssistInfo_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.uac_AC1_SelectAssistInfo_r16_items, 0, (std::size_t)value.uac_AC1_SelectAssistInfo_r16_count * sizeof(UAC_AC1_SelectAssistInfo_r16));
}
for (std::uint32_t i = 0; i < value.uac_AC1_SelectAssistInfo_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
    value.uac_AC1_SelectAssistInfo_r16_items[i] = (UAC_AC1_SelectAssistInfo_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1630_IEs_Uac_BarringInfo_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1630_IEs_Uac_BarringInfo_v1630(SIB1_v1630_IEs_Uac_BarringInfo_v1630& value)
{
    if (value.uac_AC1_SelectAssistInfo_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.uac_AC1_SelectAssistInfo_r16_count; ++i) {
        }
        std::free(value.uac_AC1_SelectAssistInfo_r16_items);
        value.uac_AC1_SelectAssistInfo_r16_items = nullptr;
    }
    value.uac_AC1_SelectAssistInfo_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1630_IEs：ASN.1 SIB1-v1630-IEs；源文件第 1866 行；SEQUENCE。
// Encode_SIB1_v1630_IEs 只读不分配；Decode_SIB1_v1630_IEs 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1630_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1630_IEs(Encoder& enc, const SIB1_v1630_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_uac_BarringInfo_v1630);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_uac_BarringInfo_v1630) {
        Encode_SIB1_v1630_IEs_Uac_BarringInfo_v1630(enc, value.uac_BarringInfo_v1630);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SIB1_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_v1630_IEs(Decoder& dec, SIB1_v1630_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SIB1_v1630_IEs_Uac_BarringInfo_v1630(dec, value.uac_BarringInfo_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SIB1_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1630_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1630_IEs(SIB1_v1630_IEs& value)
{
    if (value.has_uac_BarringInfo_v1630) {
        Free_SIB1_v1630_IEs_Uac_BarringInfo_v1630(value.uac_BarringInfo_v1630);
    }
    if (value.has_nonCriticalExtension) {
        Free_SIB1_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSI_SchedulingInfo_r16_ExtGroup2：ASN.1 PosSI_SchedulingInfo_r16_ExtGroup2；源文件第 4201 行；扩展添加组 [[ ]]。
// Encode_PosSI_SchedulingInfo_r16_ExtGroup2 只读不分配；Decode_PosSI_SchedulingInfo_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PosSI_SchedulingInfo_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSI_SchedulingInfo_r16_ExtGroup2(Encoder& enc, const PosSI_SchedulingInfo_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_posSI_RequestConfigMSG1_Repetition_r18);
    enc.WriteBit(value.has_posSI_RequestConfigSUL_MSG1_Repetition_r18);
    enc.WriteBit(value.has_posSI_RequestConfigRedCap_MSG1_Repetition_r18);
    if (value.has_posSI_RequestConfigMSG1_Repetition_r18) {
        Encode_SI_RequestConfigRepetition_r18(enc, value.posSI_RequestConfigMSG1_Repetition_r18);
    }
    if (value.has_posSI_RequestConfigSUL_MSG1_Repetition_r18) {
        Encode_SI_RequestConfigRepetition_r18(enc, value.posSI_RequestConfigSUL_MSG1_Repetition_r18);
    }
    if (value.has_posSI_RequestConfigRedCap_MSG1_Repetition_r18) {
        Encode_SI_RequestConfigRepetition_r18(enc, value.posSI_RequestConfigRedCap_MSG1_Repetition_r18);
    }
    return enc.Error();
}

ErrorCode Decode_PosSI_SchedulingInfo_r16_ExtGroup2(Decoder& dec, PosSI_SchedulingInfo_r16_ExtGroup2& value)
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
        if (Decode_SI_RequestConfigRepetition_r18(dec, value.posSI_RequestConfigMSG1_Repetition_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SI_RequestConfigRepetition_r18(dec, value.posSI_RequestConfigSUL_MSG1_Repetition_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SI_RequestConfigRepetition_r18(dec, value.posSI_RequestConfigRedCap_MSG1_Repetition_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSI_SchedulingInfo_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSI_SchedulingInfo_r16_ExtGroup2(PosSI_SchedulingInfo_r16_ExtGroup2& value)
{
    if (value.has_posSI_RequestConfigMSG1_Repetition_r18) {
        Free_SI_RequestConfigRepetition_r18(value.posSI_RequestConfigMSG1_Repetition_r18);
    }
    if (value.has_posSI_RequestConfigSUL_MSG1_Repetition_r18) {
        Free_SI_RequestConfigRepetition_r18(value.posSI_RequestConfigSUL_MSG1_Repetition_r18);
    }
    if (value.has_posSI_RequestConfigRedCap_MSG1_Repetition_r18) {
        Free_SI_RequestConfigRepetition_r18(value.posSI_RequestConfigRedCap_MSG1_Repetition_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSI_SchedulingInfo_r16_ExtGroup1：ASN.1 PosSI_SchedulingInfo_r16_ExtGroup1；源文件第 4198 行；扩展添加组 [[ ]]。
// Encode_PosSI_SchedulingInfo_r16_ExtGroup1 只读不分配；Decode_PosSI_SchedulingInfo_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PosSI_SchedulingInfo_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSI_SchedulingInfo_r16_ExtGroup1(Encoder& enc, const PosSI_SchedulingInfo_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_posSI_RequestConfigRedCap_r17);
    if (value.has_posSI_RequestConfigRedCap_r17) {
        Encode_SI_RequestConfig(enc, value.posSI_RequestConfigRedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PosSI_SchedulingInfo_r16_ExtGroup1(Decoder& dec, PosSI_SchedulingInfo_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SI_RequestConfig(dec, value.posSI_RequestConfigRedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSI_SchedulingInfo_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSI_SchedulingInfo_r16_ExtGroup1(PosSI_SchedulingInfo_r16_ExtGroup1& value)
{
    if (value.has_posSI_RequestConfigRedCap_r17) {
        Free_SI_RequestConfig(value.posSI_RequestConfigRedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSI_SchedulingInfo_r16：ASN.1 PosSI-SchedulingInfo-r16；源文件第 4193 行；SEQUENCE。
// Encode_PosSI_SchedulingInfo_r16 只读不分配；Decode_PosSI_SchedulingInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PosSI_SchedulingInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSI_SchedulingInfo_r16(Encoder& enc, const PosSI_SchedulingInfo_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_posSI_RequestConfig_r16);
    enc.WriteBit(value.has_posSI_RequestConfigSUL_r16);
enc.WriteConstrainedLength(value.posSchedulingInfoList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.posSchedulingInfoList_r16_count; ++i) {
    Encode_PosSchedulingInfo_r16(enc, value.posSchedulingInfoList_r16_items[i]);
}
    if (value.has_posSI_RequestConfig_r16) {
        Encode_SI_RequestConfig(enc, value.posSI_RequestConfig_r16);
    }
    if (value.has_posSI_RequestConfigSUL_r16) {
        Encode_SI_RequestConfig(enc, value.posSI_RequestConfigSUL_r16);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PosSI_SchedulingInfo_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PosSI_SchedulingInfo_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PosSI_SchedulingInfo_r16(Decoder& dec, PosSI_SchedulingInfo_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.posSchedulingInfoList_r16_count)) { goto fail; }
if (value.posSchedulingInfoList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.posSchedulingInfoList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.posSchedulingInfoList_r16_count > 0u) {
    value.posSchedulingInfoList_r16_items = (PosSchedulingInfo_r16*)std::malloc((std::size_t)value.posSchedulingInfoList_r16_count * sizeof(PosSchedulingInfo_r16));
    if (value.posSchedulingInfoList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.posSchedulingInfoList_r16_items, 0, (std::size_t)value.posSchedulingInfoList_r16_count * sizeof(PosSchedulingInfo_r16));
}
for (std::uint32_t i = 0; i < value.posSchedulingInfoList_r16_count; ++i) {
    if (Decode_PosSchedulingInfo_r16(dec, value.posSchedulingInfoList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_SI_RequestConfig(dec, value.posSI_RequestConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SI_RequestConfig(dec, value.posSI_RequestConfigSUL_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PosSI_SchedulingInfo_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PosSI_SchedulingInfo_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PosSI_SchedulingInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSI_SchedulingInfo_r16(PosSI_SchedulingInfo_r16& value)
{
    if (value.posSchedulingInfoList_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.posSchedulingInfoList_r16_count; ++i) {
            Free_PosSchedulingInfo_r16(value.posSchedulingInfoList_r16_items[i]);
        }
        std::free(value.posSchedulingInfoList_r16_items);
        value.posSchedulingInfoList_r16_items = nullptr;
    }
    value.posSchedulingInfoList_r16_count = 0;
    if (value.has_posSI_RequestConfig_r16) {
        Free_SI_RequestConfig(value.posSI_RequestConfig_r16);
    }
    if (value.has_posSI_RequestConfigSUL_r16) {
        Free_SI_RequestConfig(value.posSI_RequestConfigSUL_r16);
    }
    if (value.has_extGroup1) {
        Free_PosSI_SchedulingInfo_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PosSI_SchedulingInfo_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SIB1_v1610_IEs：ASN.1 SIB1-v1610-IEs；源文件第 1859 行；SEQUENCE。
// Encode_SIB1_v1610_IEs 只读不分配；Decode_SIB1_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_SIB1_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SIB1_v1610_IEs(Encoder& enc, const SIB1_v1610_IEs& value)
{
    (void)value;
    enc.WriteBit(value.has_idleModeMeasurementsEUTRA_r16);
    enc.WriteBit(value.has_idleModeMeasurementsNR_r16);
    enc.WriteBit(value.has_posSI_SchedulingInfo_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_idleModeMeasurementsEUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleModeMeasurementsEUTRA_r16), 0, 0);
    }
    if (value.has_idleModeMeasurementsNR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleModeMeasurementsNR_r16), 0, 0);
    }
    if (value.has_posSI_SchedulingInfo_r16) {
        Encode_PosSI_SchedulingInfo_r16(enc, value.posSI_SchedulingInfo_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_SIB1_v1630_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_SIB1_v1610_IEs(Decoder& dec, SIB1_v1610_IEs& value)
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
        value.idleModeMeasurementsEUTRA_r16 = (SIB1_v1610_IEs_IdleModeMeasurementsEUTRA_r16)0;
    }
    if (present_1) {
        value.idleModeMeasurementsNR_r16 = (SIB1_v1610_IEs_IdleModeMeasurementsNR_r16)0;
    }
    if (present_2) {
        if (Decode_PosSI_SchedulingInfo_r16(dec, value.posSI_SchedulingInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SIB1_v1630_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SIB1_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SIB1_v1610_IEs(SIB1_v1610_IEs& value)
{
    if (value.has_idleModeMeasurementsEUTRA_r16) {
    }
    if (value.has_idleModeMeasurementsNR_r16) {
    }
    if (value.has_posSI_SchedulingInfo_r16) {
        Free_PosSI_SchedulingInfo_r16(value.posSI_SchedulingInfo_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_SIB1_v1630_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NPN_IdentityInfoList_r16：ASN.1 NPN-IdentityInfoList-r16；源文件第 8787 行；SEQUENCE OF。
// Encode_NPN_IdentityInfoList_r16 只读不分配；Decode_NPN_IdentityInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_NPN_IdentityInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NPN_IdentityInfoList_r16(Encoder& enc, const NPN_IdentityInfoList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NPN_IdentityInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NPN_IdentityInfoList_r16(Decoder& dec, NPN_IdentityInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NPN_IdentityInfo_r16*)std::malloc((std::size_t)value.count * sizeof(NPN_IdentityInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NPN_IdentityInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NPN_IdentityInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NPN_IdentityInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NPN_IdentityInfoList_r16(NPN_IdentityInfoList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NPN_IdentityInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellAccessRelatedInfo_ExtGroup1：ASN.1 CellAccessRelatedInfo_ExtGroup1；源文件第 4746 行；扩展添加组 [[ ]]。
// Encode_CellAccessRelatedInfo_ExtGroup1 只读不分配；Decode_CellAccessRelatedInfo_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_CellAccessRelatedInfo_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellAccessRelatedInfo_ExtGroup1(Encoder& enc, const CellAccessRelatedInfo_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_cellReservedForFutureUse_r16);
    enc.WriteBit(value.has_npn_IdentityInfoList_r16);
    if (value.has_cellReservedForFutureUse_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReservedForFutureUse_r16), 0, 0);
    }
    if (value.has_npn_IdentityInfoList_r16) {
        Encode_NPN_IdentityInfoList_r16(enc, value.npn_IdentityInfoList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CellAccessRelatedInfo_ExtGroup1(Decoder& dec, CellAccessRelatedInfo_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.cellReservedForFutureUse_r16 = (CellAccessRelatedInfo_ExtGroup1_CellReservedForFutureUse_r16)0;
    }
    if (present_1) {
        if (Decode_NPN_IdentityInfoList_r16(dec, value.npn_IdentityInfoList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellAccessRelatedInfo_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellAccessRelatedInfo_ExtGroup1(CellAccessRelatedInfo_ExtGroup1& value)
{
    if (value.has_cellReservedForFutureUse_r16) {
    }
    if (value.has_npn_IdentityInfoList_r16) {
        Free_NPN_IdentityInfoList_r16(value.npn_IdentityInfoList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellAccessRelatedInfo_ExtGroup2：ASN.1 CellAccessRelatedInfo_ExtGroup2；源文件第 4750 行；扩展添加组 [[ ]]。
// Encode_CellAccessRelatedInfo_ExtGroup2 只读不分配；Decode_CellAccessRelatedInfo_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_CellAccessRelatedInfo_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellAccessRelatedInfo_ExtGroup2(Encoder& enc, const CellAccessRelatedInfo_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_snpn_AccessInfoList_r17);
    if (value.has_snpn_AccessInfoList_r17) {
enc.WriteConstrainedLength(value.snpn_AccessInfoList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.snpn_AccessInfoList_r17_count; ++i) {
    Encode_SNPN_AccessInfo_r17(enc, value.snpn_AccessInfoList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_CellAccessRelatedInfo_ExtGroup2(Decoder& dec, CellAccessRelatedInfo_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.snpn_AccessInfoList_r17_count)) { goto fail; }
if (value.snpn_AccessInfoList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.snpn_AccessInfoList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.snpn_AccessInfoList_r17_count > 0u) {
    value.snpn_AccessInfoList_r17_items = (SNPN_AccessInfo_r17*)std::malloc((std::size_t)value.snpn_AccessInfoList_r17_count * sizeof(SNPN_AccessInfo_r17));
    if (value.snpn_AccessInfoList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.snpn_AccessInfoList_r17_items, 0, (std::size_t)value.snpn_AccessInfoList_r17_count * sizeof(SNPN_AccessInfo_r17));
}
for (std::uint32_t i = 0; i < value.snpn_AccessInfoList_r17_count; ++i) {
    if (Decode_SNPN_AccessInfo_r17(dec, value.snpn_AccessInfoList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellAccessRelatedInfo_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellAccessRelatedInfo_ExtGroup2(CellAccessRelatedInfo_ExtGroup2& value)
{
    if (value.has_snpn_AccessInfoList_r17) {
        if (value.snpn_AccessInfoList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.snpn_AccessInfoList_r17_count; ++i) {
                Free_SNPN_AccessInfo_r17(value.snpn_AccessInfoList_r17_items[i]);
            }
            std::free(value.snpn_AccessInfoList_r17_items);
            value.snpn_AccessInfoList_r17_items = nullptr;
        }
        value.snpn_AccessInfoList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_IdentityInfoList：ASN.1 PLMN-IdentityInfoList；源文件第 9856 行；SEQUENCE OF。
// Encode_PLMN_IdentityInfoList 只读不分配；Decode_PLMN_IdentityInfoList 可能 malloc（失败时内部已释放并清零）；Free_PLMN_IdentityInfoList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_IdentityInfoList(Encoder& enc, const PLMN_IdentityInfoList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_IdentityInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityInfoList(Decoder& dec, PLMN_IdentityInfoList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PLMN_IdentityInfo*)std::malloc((std::size_t)value.count * sizeof(PLMN_IdentityInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_IdentityInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PLMN_IdentityInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityInfoList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityInfoList(PLMN_IdentityInfoList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PLMN_IdentityInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellAccessRelatedInfo：ASN.1 CellAccessRelatedInfo；源文件第 4742 行；SEQUENCE。
// Encode_CellAccessRelatedInfo 只读不分配；Decode_CellAccessRelatedInfo 可能 malloc（失败时内部已释放并清零）；Free_CellAccessRelatedInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellAccessRelatedInfo(Encoder& enc, const CellAccessRelatedInfo& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cellReservedForOtherUse);
    Encode_PLMN_IdentityInfoList(enc, value.plmn_IdentityInfoList);
    if (value.has_cellReservedForOtherUse) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cellReservedForOtherUse), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CellAccessRelatedInfo_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CellAccessRelatedInfo_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CellAccessRelatedInfo(Decoder& dec, CellAccessRelatedInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_PLMN_IdentityInfoList(dec, value.plmn_IdentityInfoList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.cellReservedForOtherUse = (CellAccessRelatedInfo_CellReservedForOtherUse)0;
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
    if (Decode_CellAccessRelatedInfo_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CellAccessRelatedInfo_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CellAccessRelatedInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellAccessRelatedInfo(CellAccessRelatedInfo& value)
{
    Free_PLMN_IdentityInfoList(value.plmn_IdentityInfoList);
    if (value.has_cellReservedForOtherUse) {
    }
    if (value.has_extGroup1) {
        Free_CellAccessRelatedInfo_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CellAccessRelatedInfo_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ConnEstFailureControl：ASN.1 ConnEstFailureControl；源文件第 5716 行；SEQUENCE。
// Encode_ConnEstFailureControl 只读不分配；Decode_ConnEstFailureControl 可能 malloc（失败时内部已释放并清零）；Free_ConnEstFailureControl 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ConnEstFailureControl(Encoder& enc, const ConnEstFailureControl& value)
{
    (void)value;
    enc.WriteBit(value.has_connEstFailOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.connEstFailCount), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.connEstFailOffsetValidity), 0, 7);
    if (value.has_connEstFailOffset) {
        enc.WriteConstrainedInteger((std::int64_t)(value.connEstFailOffset), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_ConnEstFailureControl(Decoder& dec, ConnEstFailureControl& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.connEstFailCount = (ConnEstFailureControl_ConnEstFailCount)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.connEstFailOffsetValidity = (ConnEstFailureControl_ConnEstFailOffsetValidity)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.connEstFailOffset = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ConnEstFailureControl(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ConnEstFailureControl(ConnEstFailureControl& value)
{
    if (value.has_connEstFailOffset) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ControlResourceSet_ExtGroup2：ASN.1 ControlResourceSet_ExtGroup2；源文件第 5749 行；扩展添加组 [[ ]]。
// Encode_ControlResourceSet_ExtGroup2 只读不分配；Decode_ControlResourceSet_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_ControlResourceSet_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ControlResourceSet_ExtGroup2(Encoder& enc, const ControlResourceSet_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_followUnifiedTCI_State_r17);
    if (value.has_followUnifiedTCI_State_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.followUnifiedTCI_State_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_ControlResourceSet_ExtGroup2(Decoder& dec, ControlResourceSet_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.followUnifiedTCI_State_r17 = (ControlResourceSet_ExtGroup2_FollowUnifiedTCI_State_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ControlResourceSet_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ControlResourceSet_ExtGroup2(ControlResourceSet_ExtGroup2& value)
{
    if (value.has_followUnifiedTCI_State_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ControlResourceSet_ExtGroup3：ASN.1 ControlResourceSet_ExtGroup3；源文件第 5752 行；扩展添加组 [[ ]]。
// Encode_ControlResourceSet_ExtGroup3 只读不分配；Decode_ControlResourceSet_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_ControlResourceSet_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ControlResourceSet_ExtGroup3(Encoder& enc, const ControlResourceSet_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    if (value.has_applyIndicatedTCI_State_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_State_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_ControlResourceSet_ExtGroup3(Decoder& dec, ControlResourceSet_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_State_r18 = (ControlResourceSet_ExtGroup3_ApplyIndicatedTCI_State_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ControlResourceSet_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ControlResourceSet_ExtGroup3(ControlResourceSet_ExtGroup3& value)
{
    if (value.has_applyIndicatedTCI_State_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ControlResourceSet_ExtGroup1：ASN.1 ControlResourceSet_ExtGroup1；源文件第 5743 行；扩展添加组 [[ ]]。
// Encode_ControlResourceSet_ExtGroup1 只读不分配；Decode_ControlResourceSet_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ControlResourceSet_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ControlResourceSet_ExtGroup1(Encoder& enc, const ControlResourceSet_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_rb_Offset_r16);
    enc.WriteBit(value.has_tci_PresentDCI_1_2_r16);
    enc.WriteBit(value.has_coresetPoolIndex_r16);
    enc.WriteBit(value.has_controlResourceSetId_v1610);
    if (value.has_rb_Offset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rb_Offset_r16), 0, 5);
    }
    if (value.has_tci_PresentDCI_1_2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_PresentDCI_1_2_r16), 1, 3);
    }
    if (value.has_coresetPoolIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.coresetPoolIndex_r16), 0, 1);
    }
    if (value.has_controlResourceSetId_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetId_v1610), 12, 15);
    }
    return enc.Error();
}

ErrorCode Decode_ControlResourceSet_ExtGroup1(Decoder& dec, ControlResourceSet_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.rb_Offset_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.tci_PresentDCI_1_2_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.coresetPoolIndex_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(12, 15, tmp_value)) { goto fail; }
        value.controlResourceSetId_v1610 = (ControlResourceSetId_v1610)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ControlResourceSet_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ControlResourceSet_ExtGroup1(ControlResourceSet_ExtGroup1& value)
{
    if (value.has_rb_Offset_r16) {
    }
    if (value.has_tci_PresentDCI_1_2_r16) {
    }
    if (value.has_coresetPoolIndex_r16) {
    }
    if (value.has_controlResourceSetId_v1610) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ControlResourceSet_Cce_REG_MappingType_Interleaved：ASN.1 cce-REG-MappingType/interleaved；源文件第 5730 行；SEQUENCE。
// Encode_ControlResourceSet_Cce_REG_MappingType_Interleaved 只读不分配；Decode_ControlResourceSet_Cce_REG_MappingType_Interleaved 可能 malloc（失败时内部已释放并清零）；Free_ControlResourceSet_Cce_REG_MappingType_Interleaved 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ControlResourceSet_Cce_REG_MappingType_Interleaved(Encoder& enc, const ControlResourceSet_Cce_REG_MappingType_Interleaved& value)
{
    (void)value;
    enc.WriteBit(value.has_shiftIndex);
    enc.WriteConstrainedInteger((std::int64_t)(value.reg_BundleSize), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.interleaverSize), 0, 2);
    if (value.has_shiftIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.shiftIndex), 0, 274);
    }
    return enc.Error();
}

ErrorCode Decode_ControlResourceSet_Cce_REG_MappingType_Interleaved(Decoder& dec, ControlResourceSet_Cce_REG_MappingType_Interleaved& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reg_BundleSize = (ControlResourceSet_Cce_REG_MappingType_Interleaved_Reg_BundleSize)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.interleaverSize = (ControlResourceSet_Cce_REG_MappingType_Interleaved_InterleaverSize)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 274, tmp_value)) { goto fail; }
        value.shiftIndex = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ControlResourceSet_Cce_REG_MappingType_Interleaved(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ControlResourceSet_Cce_REG_MappingType_Interleaved(ControlResourceSet_Cce_REG_MappingType_Interleaved& value)
{
    if (value.has_shiftIndex) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ControlResourceSet_Cce_REG_MappingType：ASN.1 cce-REG-MappingType；源文件第 5729 行；CHOICE。
// Encode_ControlResourceSet_Cce_REG_MappingType 只读不分配；Decode_ControlResourceSet_Cce_REG_MappingType 可能 malloc（失败时内部已释放并清零）；Free_ControlResourceSet_Cce_REG_MappingType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ControlResourceSet_Cce_REG_MappingType(Encoder& enc, const ControlResourceSet_Cce_REG_MappingType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ControlResourceSet_Cce_REG_MappingType_Tag_interleaved:
        Encode_ControlResourceSet_Cce_REG_MappingType_Interleaved(enc, value.u.interleaved);
        break;
    case ControlResourceSet_Cce_REG_MappingType_Tag_nonInterleaved:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ControlResourceSet_Cce_REG_MappingType(Decoder& dec, ControlResourceSet_Cce_REG_MappingType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ControlResourceSet_Cce_REG_MappingType_Tag)root_index;
    switch (value.tag) {
    case ControlResourceSet_Cce_REG_MappingType_Tag_interleaved: {
        if (Decode_ControlResourceSet_Cce_REG_MappingType_Interleaved(dec, value.u.interleaved) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case ControlResourceSet_Cce_REG_MappingType_Tag_nonInterleaved: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ControlResourceSet_Cce_REG_MappingType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ControlResourceSet_Cce_REG_MappingType(ControlResourceSet_Cce_REG_MappingType& value)
{
    switch (value.tag) {
    case ControlResourceSet_Cce_REG_MappingType_Tag_interleaved:
        Free_ControlResourceSet_Cce_REG_MappingType_Interleaved(value.u.interleaved);
        break;
    case ControlResourceSet_Cce_REG_MappingType_Tag_nonInterleaved:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ControlResourceSet：ASN.1 ControlResourceSet；源文件第 5725 行；SEQUENCE。
// Encode_ControlResourceSet 只读不分配；Decode_ControlResourceSet 可能 malloc（失败时内部已释放并清零）；Free_ControlResourceSet 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ControlResourceSet(Encoder& enc, const ControlResourceSet& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_tci_StatesPDCCH_ToAddList);
    enc.WriteBit(value.has_tci_StatesPDCCH_ToReleaseList);
    enc.WriteBit(value.has_tci_PresentInDCI);
    enc.WriteBit(value.has_pdcch_DMRS_ScramblingID);
    enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetId), 0, 11);
    enc.WriteFixedBitString(value.frequencyDomainResources.bytes, value.frequencyDomainResources.bitLength, 45, 45);
    enc.WriteConstrainedInteger((std::int64_t)(value.duration), 1, 3);
    Encode_ControlResourceSet_Cce_REG_MappingType(enc, value.cce_REG_MappingType);
    enc.WriteConstrainedInteger((std::int64_t)(value.precoderGranularity), 0, 1);
    if (value.has_tci_StatesPDCCH_ToAddList) {
enc.WriteConstrainedLength(value.tci_StatesPDCCH_ToAddList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tci_StatesPDCCH_ToAddList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StatesPDCCH_ToAddList_items[i]), 0, 127);
}
    }
    if (value.has_tci_StatesPDCCH_ToReleaseList) {
enc.WriteConstrainedLength(value.tci_StatesPDCCH_ToReleaseList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.tci_StatesPDCCH_ToReleaseList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StatesPDCCH_ToReleaseList_items[i]), 0, 127);
}
    }
    if (value.has_tci_PresentInDCI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_PresentInDCI), 0, 0);
    }
    if (value.has_pdcch_DMRS_ScramblingID) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_DMRS_ScramblingID), 0, 65535);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_ControlResourceSet_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_ControlResourceSet_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_ControlResourceSet_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_ControlResourceSet(Decoder& dec, ControlResourceSet& value)
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
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.controlResourceSetId = (ControlResourceSetId)tmp_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 45)) { goto fail; }
        string_length = 45;
        value.frequencyDomainResources.bytes = string_bytes;
        value.frequencyDomainResources.bitLength = string_length;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.duration = (int64_t)tmp_value;
    }
    {
        if (Decode_ControlResourceSet_Cce_REG_MappingType(dec, value.cce_REG_MappingType) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.precoderGranularity = (ControlResourceSet_PrecoderGranularity)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tci_StatesPDCCH_ToAddList_count)) { goto fail; }
if (value.tci_StatesPDCCH_ToAddList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tci_StatesPDCCH_ToAddList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tci_StatesPDCCH_ToAddList_count > 0u) {
    value.tci_StatesPDCCH_ToAddList_items = (TCI_StateId*)std::malloc((std::size_t)value.tci_StatesPDCCH_ToAddList_count * sizeof(TCI_StateId));
    if (value.tci_StatesPDCCH_ToAddList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tci_StatesPDCCH_ToAddList_items, 0, (std::size_t)value.tci_StatesPDCCH_ToAddList_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.tci_StatesPDCCH_ToAddList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.tci_StatesPDCCH_ToAddList_items[i] = (TCI_StateId)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.tci_StatesPDCCH_ToReleaseList_count)) { goto fail; }
if (value.tci_StatesPDCCH_ToReleaseList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.tci_StatesPDCCH_ToReleaseList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.tci_StatesPDCCH_ToReleaseList_count > 0u) {
    value.tci_StatesPDCCH_ToReleaseList_items = (TCI_StateId*)std::malloc((std::size_t)value.tci_StatesPDCCH_ToReleaseList_count * sizeof(TCI_StateId));
    if (value.tci_StatesPDCCH_ToReleaseList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.tci_StatesPDCCH_ToReleaseList_items, 0, (std::size_t)value.tci_StatesPDCCH_ToReleaseList_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.tci_StatesPDCCH_ToReleaseList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.tci_StatesPDCCH_ToReleaseList_items[i] = (TCI_StateId)tmp_value;
}
    }
    if (present_2) {
        value.tci_PresentInDCI = (ControlResourceSet_Tci_PresentInDCI)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.pdcch_DMRS_ScramblingID = (int64_t)tmp_value;
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
    if (Decode_ControlResourceSet_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_ControlResourceSet_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_ControlResourceSet_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_ControlResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ControlResourceSet(ControlResourceSet& value)
{
    std::free(value.frequencyDomainResources.bytes);
    value.frequencyDomainResources.bytes = nullptr;
    value.frequencyDomainResources.bitLength = 0;
    Free_ControlResourceSet_Cce_REG_MappingType(value.cce_REG_MappingType);
    if (value.has_tci_StatesPDCCH_ToAddList) {
        if (value.tci_StatesPDCCH_ToAddList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tci_StatesPDCCH_ToAddList_count; ++i) {
            }
            std::free(value.tci_StatesPDCCH_ToAddList_items);
            value.tci_StatesPDCCH_ToAddList_items = nullptr;
        }
        value.tci_StatesPDCCH_ToAddList_count = 0;
    }
    if (value.has_tci_StatesPDCCH_ToReleaseList) {
        if (value.tci_StatesPDCCH_ToReleaseList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.tci_StatesPDCCH_ToReleaseList_count; ++i) {
            }
            std::free(value.tci_StatesPDCCH_ToReleaseList_items);
            value.tci_StatesPDCCH_ToReleaseList_items = nullptr;
        }
        value.tci_StatesPDCCH_ToReleaseList_count = 0;
    }
    if (value.has_tci_PresentInDCI) {
    }
    if (value.has_pdcch_DMRS_ScramblingID) {
    }
    if (value.has_extGroup1) {
        Free_ControlResourceSet_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_ControlResourceSet_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_ControlResourceSet_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS15KHZoneT；源文件第 9203 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 139);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 139, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS30KHZoneT-SCS15KHZhalfT；源文件第 9204 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 279);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 279, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT；源文件第 9205 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 559);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 559, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT；源文件第 9206 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1119);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1119, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT；源文件第 9207 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 2239);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2239, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT；源文件第 9208 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 4479);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4479, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneEighthT-SCS60KHZoneSixteenthT；源文件第 9209 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 8959);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 8959, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneSixteenthT；源文件第 9210 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 17919);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 17919, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO：ASN.1 firstPDCCH-MonitoringOccasionOfPO；源文件第 9202 行；CHOICE。
// Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(enc, value.u.sCS15KHZoneT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(enc, value.u.sCS30KHZoneT_SCS15KHZhalfT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(enc, value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(enc, value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(enc, value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(enc, value.u.sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneEighthT_SCS60KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(enc, value.u.sCS120KHZoneEighthT_SCS60KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(enc, value.u.sCS120KHZoneSixteenthT);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag)root_index;
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(dec, value.u.sCS15KHZoneT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(dec, value.u.sCS30KHZoneT_SCS15KHZhalfT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(dec, value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(dec, value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(dec, value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(dec, value.u.sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneEighthT_SCS60KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(dec, value.u.sCS120KHZoneEighthT_SCS60KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(dec, value.u.sCS120KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO& value)
{
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(value.u.sCS15KHZoneT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(value.u.sCS30KHZoneT_SCS15KHZhalfT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZq_c04df89c(value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30_400ca2d9(value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZquarterT_SCS60KHZoneEighthT__0e19d5e0(value.u.sCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneEighthT_SCS60KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(value.u.sCS120KHZoneEighthT_SCS60KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneSixteenthT(value.u.sCS120KHZoneSixteenthT);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup1：ASN.1 PDCCH_ConfigCommon_ExtGroup1；源文件第 9201 行；扩展添加组 [[ ]]。
// Encode_PDCCH_ConfigCommon_ExtGroup1 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup1(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_firstPDCCH_MonitoringOccasionOfPO);
    if (value.has_firstPDCCH_MonitoringOccasionOfPO) {
        Encode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(enc, value.firstPDCCH_MonitoringOccasionOfPO);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup1(Decoder& dec, PDCCH_ConfigCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(dec, value.firstPDCCH_MonitoringOccasionOfPO) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup1(PDCCH_ConfigCommon_ExtGroup1& value)
{
    if (value.has_firstPDCCH_MonitoringOccasionOfPO) {
        Free_PDCCH_ConfigCommon_ExtGroup1_FirstPDCCH_MonitoringOccasionOfPO(value.firstPDCCH_MonitoringOccasionOfPO);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup2：ASN.1 PDCCH_ConfigCommon_ExtGroup2；源文件第 9213 行；扩展添加组 [[ ]]。
// Encode_PDCCH_ConfigCommon_ExtGroup2 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup2(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_commonSearchSpaceListExt_r16);
    if (value.has_commonSearchSpaceListExt_r16) {
enc.WriteConstrainedLength(value.commonSearchSpaceListExt_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt_r16_count; ++i) {
    Encode_SearchSpaceExt_r16(enc, value.commonSearchSpaceListExt_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup2(Decoder& dec, PDCCH_ConfigCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.commonSearchSpaceListExt_r16_count)) { goto fail; }
if (value.commonSearchSpaceListExt_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.commonSearchSpaceListExt_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.commonSearchSpaceListExt_r16_count > 0u) {
    value.commonSearchSpaceListExt_r16_items = (SearchSpaceExt_r16*)std::malloc((std::size_t)value.commonSearchSpaceListExt_r16_count * sizeof(SearchSpaceExt_r16));
    if (value.commonSearchSpaceListExt_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.commonSearchSpaceListExt_r16_items, 0, (std::size_t)value.commonSearchSpaceListExt_r16_count * sizeof(SearchSpaceExt_r16));
}
for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt_r16_count; ++i) {
    if (Decode_SearchSpaceExt_r16(dec, value.commonSearchSpaceListExt_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup2(PDCCH_ConfigCommon_ExtGroup2& value)
{
    if (value.has_commonSearchSpaceListExt_r16) {
        if (value.commonSearchSpaceListExt_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt_r16_count; ++i) {
                Free_SearchSpaceExt_r16(value.commonSearchSpaceListExt_r16_items[i]);
            }
            std::free(value.commonSearchSpaceListExt_r16_items);
            value.commonSearchSpaceListExt_r16_items = nullptr;
        }
        value.commonSearchSpaceListExt_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpace_MonitoringSlotPeriodicityAndOffset：ASN.1 monitoringSlotPeriodicityAndOffset；源文件第 12176 行；CHOICE。
// Encode_SearchSpace_MonitoringSlotPeriodicityAndOffset 只读不分配；Decode_SearchSpace_MonitoringSlotPeriodicityAndOffset 可能 malloc（失败时内部已释放并清零）；Free_SearchSpace_MonitoringSlotPeriodicityAndOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpace_MonitoringSlotPeriodicityAndOffset(Encoder& enc, const SearchSpace_MonitoringSlotPeriodicityAndOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 14);
    switch (value.tag) {
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1:
        (void)0;
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2), 0, 1);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl4), 0, 3);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5), 0, 4);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl8), 0, 7);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10), 0, 9);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl16), 0, 15);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20), 0, 19);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40), 0, 39);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl80), 0, 79);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl160), 0, 159);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl320), 0, 319);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl640), 0, 639);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl1280), 0, 1279);
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2560), 0, 2559);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpace_MonitoringSlotPeriodicityAndOffset(Decoder& dec, SearchSpace_MonitoringSlotPeriodicityAndOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 14, root_index)) {
        goto fail;
    }
    value.tag = (SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag)root_index;
    switch (value.tag) {
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1: {
        (void)0;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.sl2 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.sl4 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sl5 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.sl8 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sl10 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.sl16 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sl20 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sl40 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sl80 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sl160 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sl320 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.sl640 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.sl1280 = (int64_t)tmp_value;
        break;
    }
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.sl2560 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpace_MonitoringSlotPeriodicityAndOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpace_MonitoringSlotPeriodicityAndOffset(SearchSpace_MonitoringSlotPeriodicityAndOffset& value)
{
    switch (value.tag) {
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl4:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl5:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl8:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl10:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl16:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl20:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl40:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl80:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl160:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl320:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl640:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl1280:
        break;
    case SearchSpace_MonitoringSlotPeriodicityAndOffset_Tag_sl2560:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpace_NrofCandidates：ASN.1 nrofCandidates；源文件第 12195 行；SEQUENCE。
// Encode_SearchSpace_NrofCandidates 只读不分配；Decode_SearchSpace_NrofCandidates 可能 malloc（失败时内部已释放并清零）；Free_SearchSpace_NrofCandidates 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpace_NrofCandidates(Encoder& enc, const SearchSpace_NrofCandidates& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel1), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel2), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel4), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel8), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SearchSpace_NrofCandidates(Decoder& dec, SearchSpace_NrofCandidates& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.aggregationLevel1 = (SearchSpace_NrofCandidates_AggregationLevel1)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.aggregationLevel2 = (SearchSpace_NrofCandidates_AggregationLevel2)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.aggregationLevel4 = (SearchSpace_NrofCandidates_AggregationLevel4)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.aggregationLevel8 = (SearchSpace_NrofCandidates_AggregationLevel8)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.aggregationLevel16 = (SearchSpace_NrofCandidates_AggregationLevel16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpace_NrofCandidates(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpace_NrofCandidates(SearchSpace_NrofCandidates& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0：ASN.1 searchSpaceType/common/dci-Format0-0-AndFormat1-0；源文件第 12204 行；空 SEQUENCE{}。
// Encode_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0 只读不分配；Decode_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(Encoder& enc, const SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(Decoder& dec, SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI：ASN.1 searchSpaceType/common/dci-Format2-0/nrofCandidates-SFI；源文件第 12208 行；SEQUENCE。
// Encode_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI 只读不分配；Decode_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(Encoder& enc, const SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI& value)
{
    (void)value;
    enc.WriteBit(value.has_aggregationLevel1);
    enc.WriteBit(value.has_aggregationLevel2);
    enc.WriteBit(value.has_aggregationLevel4);
    enc.WriteBit(value.has_aggregationLevel8);
    enc.WriteBit(value.has_aggregationLevel16);
    if (value.has_aggregationLevel1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel1), 0, 1);
    }
    if (value.has_aggregationLevel2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel2), 0, 1);
    }
    if (value.has_aggregationLevel4) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel4), 0, 1);
    }
    if (value.has_aggregationLevel8) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel8), 0, 1);
    }
    if (value.has_aggregationLevel16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggregationLevel16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(Decoder& dec, SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI& value)
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
        value.aggregationLevel1 = (SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel1)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel2 = (SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel2)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel4 = (SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel4)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel8 = (SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel8)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aggregationLevel16 = (SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI_AggregationLevel16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI& value)
{
    if (value.has_aggregationLevel1) {
    }
    if (value.has_aggregationLevel2) {
    }
    if (value.has_aggregationLevel4) {
    }
    if (value.has_aggregationLevel8) {
    }
    if (value.has_aggregationLevel16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common_Dci_Format2_0：ASN.1 searchSpaceType/common/dci-Format2-0；源文件第 12207 行；SEQUENCE。
// Encode_SearchSpaceType_Common_Dci_Format2_0 只读不分配；Decode_SearchSpaceType_Common_Dci_Format2_0 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common_Dci_Format2_0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common_Dci_Format2_0(Encoder& enc, const SearchSpaceType_Common_Dci_Format2_0& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(enc, value.nrofCandidates_SFI);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common_Dci_Format2_0(Decoder& dec, SearchSpaceType_Common_Dci_Format2_0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(dec, value.nrofCandidates_SFI) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType_Common_Dci_Format2_0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Common_Dci_Format2_0(SearchSpaceType_Common_Dci_Format2_0& value)
{
    Free_SearchSpaceType_Common_Dci_Format2_0_NrofCandidates_SFI(value.nrofCandidates_SFI);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common_Dci_Format2_1：ASN.1 searchSpaceType/common/dci-Format2-1；源文件第 12217 行；空 SEQUENCE{}。
// Encode_SearchSpaceType_Common_Dci_Format2_1 只读不分配；Decode_SearchSpaceType_Common_Dci_Format2_1 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common_Dci_Format2_1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common_Dci_Format2_1(Encoder& enc, const SearchSpaceType_Common_Dci_Format2_1& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common_Dci_Format2_1(Decoder& dec, SearchSpaceType_Common_Dci_Format2_1& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceType_Common_Dci_Format2_1(SearchSpaceType_Common_Dci_Format2_1& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common_Dci_Format2_2：ASN.1 searchSpaceType/common/dci-Format2-2；源文件第 12220 行；空 SEQUENCE{}。
// Encode_SearchSpaceType_Common_Dci_Format2_2 只读不分配；Decode_SearchSpaceType_Common_Dci_Format2_2 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common_Dci_Format2_2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common_Dci_Format2_2(Encoder& enc, const SearchSpaceType_Common_Dci_Format2_2& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common_Dci_Format2_2(Decoder& dec, SearchSpaceType_Common_Dci_Format2_2& value)
{
    std::memset(&value, 0, sizeof(value));
    bool extension = false;
    if (!dec.ReadBit(extension)) {
        dec.Fail(dec.Error());
        return dec.Error();
    }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension);
        return dec.Error();
    }
    return dec.Error();
}

void Free_SearchSpaceType_Common_Dci_Format2_2(SearchSpaceType_Common_Dci_Format2_2& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common_Dci_Format2_3：ASN.1 searchSpaceType/common/dci-Format2-3；源文件第 12223 行；SEQUENCE。
// Encode_SearchSpaceType_Common_Dci_Format2_3 只读不分配；Decode_SearchSpaceType_Common_Dci_Format2_3 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common_Dci_Format2_3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common_Dci_Format2_3(Encoder& enc, const SearchSpaceType_Common_Dci_Format2_3& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dummy1);
    if (value.has_dummy1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 7);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 1);
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common_Dci_Format2_3(Decoder& dec, SearchSpaceType_Common_Dci_Format2_3& value)
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
        value.dummy1 = (SearchSpaceType_Common_Dci_Format2_3_Dummy1)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dummy2 = (SearchSpaceType_Common_Dci_Format2_3_Dummy2)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType_Common_Dci_Format2_3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Common_Dci_Format2_3(SearchSpaceType_Common_Dci_Format2_3& value)
{
    if (value.has_dummy1) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Common：ASN.1 searchSpaceType/common；源文件第 12203 行；SEQUENCE。
// Encode_SearchSpaceType_Common 只读不分配；Decode_SearchSpaceType_Common 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Common 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Common(Encoder& enc, const SearchSpaceType_Common& value)
{
    (void)value;
    enc.WriteBit(value.has_dci_Format0_0_AndFormat1_0);
    enc.WriteBit(value.has_dci_Format2_0);
    enc.WriteBit(value.has_dci_Format2_1);
    enc.WriteBit(value.has_dci_Format2_2);
    enc.WriteBit(value.has_dci_Format2_3);
    if (value.has_dci_Format0_0_AndFormat1_0) {
        Encode_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(enc, value.dci_Format0_0_AndFormat1_0);
    }
    if (value.has_dci_Format2_0) {
        Encode_SearchSpaceType_Common_Dci_Format2_0(enc, value.dci_Format2_0);
    }
    if (value.has_dci_Format2_1) {
        Encode_SearchSpaceType_Common_Dci_Format2_1(enc, value.dci_Format2_1);
    }
    if (value.has_dci_Format2_2) {
        Encode_SearchSpaceType_Common_Dci_Format2_2(enc, value.dci_Format2_2);
    }
    if (value.has_dci_Format2_3) {
        Encode_SearchSpaceType_Common_Dci_Format2_3(enc, value.dci_Format2_3);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Common(Decoder& dec, SearchSpaceType_Common& value)
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
        if (Decode_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(dec, value.dci_Format0_0_AndFormat1_0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SearchSpaceType_Common_Dci_Format2_0(dec, value.dci_Format2_0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SearchSpaceType_Common_Dci_Format2_1(dec, value.dci_Format2_1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SearchSpaceType_Common_Dci_Format2_2(dec, value.dci_Format2_2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SearchSpaceType_Common_Dci_Format2_3(dec, value.dci_Format2_3) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType_Common(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Common(SearchSpaceType_Common& value)
{
    if (value.has_dci_Format0_0_AndFormat1_0) {
        Free_SearchSpaceType_Common_Dci_Format0_0_AndFormat1_0(value.dci_Format0_0_AndFormat1_0);
    }
    if (value.has_dci_Format2_0) {
        Free_SearchSpaceType_Common_Dci_Format2_0(value.dci_Format2_0);
    }
    if (value.has_dci_Format2_1) {
        Free_SearchSpaceType_Common_Dci_Format2_1(value.dci_Format2_1);
    }
    if (value.has_dci_Format2_2) {
        Free_SearchSpaceType_Common_Dci_Format2_2(value.dci_Format2_2);
    }
    if (value.has_dci_Format2_3) {
        Free_SearchSpaceType_Common_Dci_Format2_3(value.dci_Format2_3);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Ue_Specific_ExtGroup1：ASN.1 SearchSpaceType_Ue_Specific_ExtGroup1；源文件第 12232 行；扩展添加组 [[ ]]。
// Encode_SearchSpaceType_Ue_Specific_ExtGroup1 只读不分配；Decode_SearchSpaceType_Ue_Specific_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Ue_Specific_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Ue_Specific_ExtGroup1(Encoder& enc, const SearchSpaceType_Ue_Specific_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_dci_Formats_MT_r16);
    enc.WriteBit(value.has_dci_FormatsSL_r16);
    enc.WriteBit(value.has_dci_FormatsExt_r16);
    if (value.has_dci_Formats_MT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_Formats_MT_r16), 0, 0);
    }
    if (value.has_dci_FormatsSL_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_FormatsSL_r16), 0, 4);
    }
    if (value.has_dci_FormatsExt_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_FormatsExt_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Ue_Specific_ExtGroup1(Decoder& dec, SearchSpaceType_Ue_Specific_ExtGroup1& value)
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
        value.dci_Formats_MT_r16 = (SearchSpaceType_Ue_Specific_ExtGroup1_Dci_Formats_MT_r16)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.dci_FormatsSL_r16 = (SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsSL_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dci_FormatsExt_r16 = (SearchSpaceType_Ue_Specific_ExtGroup1_Dci_FormatsExt_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType_Ue_Specific_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Ue_Specific_ExtGroup1(SearchSpaceType_Ue_Specific_ExtGroup1& value)
{
    if (value.has_dci_Formats_MT_r16) {
    }
    if (value.has_dci_FormatsSL_r16) {
    }
    if (value.has_dci_FormatsExt_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Ue_Specific_ExtGroup2：ASN.1 SearchSpaceType_Ue_Specific_ExtGroup2；源文件第 12239 行；扩展添加组 [[ ]]。
// Encode_SearchSpaceType_Ue_Specific_ExtGroup2 只读不分配；Decode_SearchSpaceType_Ue_Specific_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Ue_Specific_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Ue_Specific_ExtGroup2(Encoder& enc, const SearchSpaceType_Ue_Specific_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_dci_FormatsMC);
    enc.WriteBit(value.has_dci_FormatsNCR_r18);
    if (value.has_dci_FormatsMC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_FormatsMC), 0, 2);
    }
    if (value.has_dci_FormatsNCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_FormatsNCR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Ue_Specific_ExtGroup2(Decoder& dec, SearchSpaceType_Ue_Specific_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.dci_FormatsMC = (SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsMC)tmp_value;
    }
    if (present_1) {
        value.dci_FormatsNCR_r18 = (SearchSpaceType_Ue_Specific_ExtGroup2_Dci_FormatsNCR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType_Ue_Specific_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Ue_Specific_ExtGroup2(SearchSpaceType_Ue_Specific_ExtGroup2& value)
{
    if (value.has_dci_FormatsMC) {
    }
    if (value.has_dci_FormatsNCR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType_Ue_Specific：ASN.1 searchSpaceType/ue-Specific；源文件第 12229 行；SEQUENCE。
// Encode_SearchSpaceType_Ue_Specific 只读不分配；Decode_SearchSpaceType_Ue_Specific 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType_Ue_Specific 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType_Ue_Specific(Encoder& enc, const SearchSpaceType_Ue_Specific& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.dci_Formats), 0, 1);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SearchSpaceType_Ue_Specific_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SearchSpaceType_Ue_Specific_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType_Ue_Specific(Decoder& dec, SearchSpaceType_Ue_Specific& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dci_Formats = (SearchSpaceType_Ue_Specific_Dci_Formats)tmp_value;
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
    if (Decode_SearchSpaceType_Ue_Specific_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SearchSpaceType_Ue_Specific_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SearchSpaceType_Ue_Specific(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType_Ue_Specific(SearchSpaceType_Ue_Specific& value)
{
    if (value.has_extGroup1) {
        Free_SearchSpaceType_Ue_Specific_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SearchSpaceType_Ue_Specific_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpaceType：ASN.1 searchSpaceType；源文件第 12202 行；CHOICE。
// Encode_SearchSpaceType 只读不分配；Decode_SearchSpaceType 可能 malloc（失败时内部已释放并清零）；Free_SearchSpaceType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpaceType(Encoder& enc, const SearchSpaceType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SearchSpaceType_Tag_common:
        Encode_SearchSpaceType_Common(enc, value.u.common);
        break;
    case SearchSpaceType_Tag_ue_Specific:
        Encode_SearchSpaceType_Ue_Specific(enc, value.u.ue_Specific);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpaceType(Decoder& dec, SearchSpaceType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SearchSpaceType_Tag)root_index;
    switch (value.tag) {
    case SearchSpaceType_Tag_common: {
        if (Decode_SearchSpaceType_Common(dec, value.u.common) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SearchSpaceType_Tag_ue_Specific: {
        if (Decode_SearchSpaceType_Ue_Specific(dec, value.u.ue_Specific) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpaceType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpaceType(SearchSpaceType& value)
{
    switch (value.tag) {
    case SearchSpaceType_Tag_common:
        Free_SearchSpaceType_Common(value.u.common);
        break;
    case SearchSpaceType_Tag_ue_Specific:
        Free_SearchSpaceType_Ue_Specific(value.u.ue_Specific);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SearchSpace：ASN.1 SearchSpace；源文件第 12173 行；SEQUENCE。
// Encode_SearchSpace 只读不分配；Decode_SearchSpace 可能 malloc（失败时内部已释放并清零）；Free_SearchSpace 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SearchSpace(Encoder& enc, const SearchSpace& value)
{
    (void)value;
    enc.WriteBit(value.has_controlResourceSetId);
    enc.WriteBit(value.has_monitoringSlotPeriodicityAndOffset);
    enc.WriteBit(value.has_duration);
    enc.WriteBit(value.has_monitoringSymbolsWithinSlot);
    enc.WriteBit(value.has_nrofCandidates);
    enc.WriteBit(value.has_searchSpaceType);
    enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceId), 0, 39);
    if (value.has_controlResourceSetId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetId), 0, 11);
    }
    if (value.has_monitoringSlotPeriodicityAndOffset) {
        Encode_SearchSpace_MonitoringSlotPeriodicityAndOffset(enc, value.monitoringSlotPeriodicityAndOffset);
    }
    if (value.has_duration) {
        enc.WriteConstrainedInteger((std::int64_t)(value.duration), 2, 2559);
    }
    if (value.has_monitoringSymbolsWithinSlot) {
        enc.WriteFixedBitString(value.monitoringSymbolsWithinSlot.bytes, value.monitoringSymbolsWithinSlot.bitLength, 14, 14);
    }
    if (value.has_nrofCandidates) {
        Encode_SearchSpace_NrofCandidates(enc, value.nrofCandidates);
    }
    if (value.has_searchSpaceType) {
        Encode_SearchSpaceType(enc, value.searchSpaceType);
    }
    return enc.Error();
}

ErrorCode Decode_SearchSpace(Decoder& dec, SearchSpace& value)
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
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceId = (SearchSpaceId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.controlResourceSetId = (ControlResourceSetId)tmp_value;
    }
    if (present_1) {
        if (Decode_SearchSpace_MonitoringSlotPeriodicityAndOffset(dec, value.monitoringSlotPeriodicityAndOffset) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 2559, tmp_value)) { goto fail; }
        value.duration = (int64_t)tmp_value;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 14)) { goto fail; }
        string_length = 14;
        value.monitoringSymbolsWithinSlot.bytes = string_bytes;
        value.monitoringSymbolsWithinSlot.bitLength = string_length;
    }
    if (present_4) {
        if (Decode_SearchSpace_NrofCandidates(dec, value.nrofCandidates) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SearchSpaceType(dec, value.searchSpaceType) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SearchSpace(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SearchSpace(SearchSpace& value)
{
    if (value.has_controlResourceSetId) {
    }
    if (value.has_monitoringSlotPeriodicityAndOffset) {
        Free_SearchSpace_MonitoringSlotPeriodicityAndOffset(value.monitoringSlotPeriodicityAndOffset);
    }
    if (value.has_duration) {
    }
    if (value.has_monitoringSymbolsWithinSlot) {
        std::free(value.monitoringSymbolsWithinSlot.bytes);
        value.monitoringSymbolsWithinSlot.bytes = nullptr;
        value.monitoringSymbolsWithinSlot.bitLength = 0;
    }
    if (value.has_nrofCandidates) {
        Free_SearchSpace_NrofCandidates(value.nrofCandidates);
    }
    if (value.has_searchSpaceType) {
        Free_SearchSpaceType(value.searchSpaceType);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17：ASN.1 sdt-SearchSpace-r17；源文件第 9217 行；CHOICE。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_newSearchSpace:
        Encode_SearchSpace(enc, value.u.newSearchSpace);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_existingSearchSpace:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.existingSearchSpace), 0, 39);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag)root_index;
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_newSearchSpace: {
        if (Decode_SearchSpace(dec, value.u.newSearchSpace) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_existingSearchSpace: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.existingSearchSpace = (SearchSpaceId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17& value)
{
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_newSearchSpace:
        Free_SearchSpace(value.u.newSearchSpace);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17_Tag_existingSearchSpace:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneEighthT；源文件第 9225 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 35839);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 35839, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneSixteenthT；源文件第 9226 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 71679);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 71679, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710：ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710；源文件第 9224 行；CHOICE。
// Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(enc, value.u.sCS480KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(enc, value.u.sCS480KHZoneSixteenthT);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag)root_index;
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(dec, value.u.sCS480KHZoneEighthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(dec, value.u.sCS480KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710& value)
{
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(value.u.sCS480KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(value.u.sCS480KHZoneSixteenthT);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS15KHZoneT；源文件第 9231 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 139);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 139, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS30KHZoneT-SCS15KHZhalfT；源文件第 9232 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 279);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 279, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT；源文件第 9233 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 559);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 559, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT；源文件第 9234 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1119);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1119, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT；源文件第 9235 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 2239);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2239, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT；源文件第 9236 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 4479);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4479, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT；源文件第 9237 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 8959);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 8959, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZquarterT-SCS120KHZoneSixteenthT；源文件第 9238 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 17919);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 17919, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZoneEighthT；源文件第 9239 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 35839);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 35839, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17/sCS480KHZoneSixteenthT；源文件第 9240 行；SEQUENCE OF。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 71679);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 71679, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17：ASN.1 pei-ConfigBWP-r17/firstPDCCH-MonitoringOccasionOfPEI-O-r17；源文件第 9230 行；CHOICE。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 9);
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS15KHZoneT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(enc, value.u.sCS15KHZoneT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS30KHZoneT_SCS15KHZhalfT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(enc, value.u.sCS30KHZoneT_SCS15KHZhalfT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(enc, value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(enc, value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(enc, value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(enc, value.u.sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(enc, value.u.sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(enc, value.u.sCS480KHZquarterT_SCS120KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneEighthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(enc, value.u.sCS480KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneSixteenthT:
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(enc, value.u.sCS480KHZoneSixteenthT);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 9, root_index)) {
        goto fail;
    }
    value.tag = (PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag)root_index;
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS15KHZoneT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(dec, value.u.sCS15KHZoneT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS30KHZoneT_SCS15KHZhalfT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(dec, value.u.sCS30KHZoneT_SCS15KHZhalfT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(dec, value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(dec, value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(dec, value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(dec, value.u.sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(dec, value.u.sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(dec, value.u.sCS480KHZquarterT_SCS120KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneEighthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(dec, value.u.sCS480KHZoneEighthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneSixteenthT: {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(dec, value.u.sCS480KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17& value)
{
    switch (value.tag) {
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS15KHZoneT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS15KHZoneT(value.u.sCS15KHZoneT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS30KHZoneT_SCS15KHZhalfT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS30KHZoneT_SCS15KHZhalfT(value.u.sCS30KHZoneT_SCS15KHZhalfT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS60KHZoneT_e6741208(value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZone_26de7ad4(value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS120KHZhal_fdd06d92(value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZone_fa6dd3e5(value.u.sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZhal_10d37c5c(value.u.sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZqua_a3381043(value.u.sCS480KHZquarterT_SCS120KHZoneSixteenthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneEighthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneEighthT(value.u.sCS480KHZoneEighthT);
        break;
    case PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_Tag_sCS480KHZoneSixteenthT:
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17_SCS480KHZoneSixteenthT(value.u.sCS480KHZoneSixteenthT);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17：ASN.1 pei-ConfigBWP-r17；源文件第 9228 行；SEQUENCE。
// Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pei_SearchSpace_r17), 0, 39);
    Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(enc, value.firstPDCCH_MonitoringOccasionOfPEI_O_r17);
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.pei_SearchSpace_r17 = (SearchSpaceId)tmp_value;
    }
    {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(dec, value.firstPDCCH_MonitoringOccasionOfPEI_O_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17& value)
{
    Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17_FirstPDCCH_MonitoringOccasionOfPEI_O_r17(value.firstPDCCH_MonitoringOccasionOfPEI_O_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup3：ASN.1 PDCCH_ConfigCommon_ExtGroup3；源文件第 9216 行；扩展添加组 [[ ]]。
// Encode_PDCCH_ConfigCommon_ExtGroup3 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup3(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_sdt_SearchSpace_r17);
    enc.WriteBit(value.has_searchSpaceMCCH_r17);
    enc.WriteBit(value.has_searchSpaceMTCH_r17);
    enc.WriteBit(value.has_commonSearchSpaceListExt2_r17);
    enc.WriteBit(value.has_firstPDCCH_MonitoringOccasionOfPO_v1710);
    enc.WriteBit(value.has_pei_ConfigBWP_r17);
    if (value.has_sdt_SearchSpace_r17) {
        Encode_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(enc, value.sdt_SearchSpace_r17);
    }
    if (value.has_searchSpaceMCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceMCCH_r17), 0, 39);
    }
    if (value.has_searchSpaceMTCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceMTCH_r17), 0, 39);
    }
    if (value.has_commonSearchSpaceListExt2_r17) {
enc.WriteConstrainedLength(value.commonSearchSpaceListExt2_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt2_r17_count; ++i) {
    Encode_SearchSpaceExt_v1700(enc, value.commonSearchSpaceListExt2_r17_items[i]);
}
    }
    if (value.has_firstPDCCH_MonitoringOccasionOfPO_v1710) {
        Encode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(enc, value.firstPDCCH_MonitoringOccasionOfPO_v1710);
    }
    if (value.has_pei_ConfigBWP_r17) {
        Encode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(enc, value.pei_ConfigBWP_r17);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup3(Decoder& dec, PDCCH_ConfigCommon_ExtGroup3& value)
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
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(dec, value.sdt_SearchSpace_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceMCCH_r17 = (SearchSpaceId)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceMTCH_r17 = (SearchSpaceId)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.commonSearchSpaceListExt2_r17_count)) { goto fail; }
if (value.commonSearchSpaceListExt2_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.commonSearchSpaceListExt2_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.commonSearchSpaceListExt2_r17_count > 0u) {
    value.commonSearchSpaceListExt2_r17_items = (SearchSpaceExt_v1700*)std::malloc((std::size_t)value.commonSearchSpaceListExt2_r17_count * sizeof(SearchSpaceExt_v1700));
    if (value.commonSearchSpaceListExt2_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.commonSearchSpaceListExt2_r17_items, 0, (std::size_t)value.commonSearchSpaceListExt2_r17_count * sizeof(SearchSpaceExt_v1700));
}
for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt2_r17_count; ++i) {
    if (Decode_SearchSpaceExt_v1700(dec, value.commonSearchSpaceListExt2_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(dec, value.firstPDCCH_MonitoringOccasionOfPO_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(dec, value.pei_ConfigBWP_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup3(PDCCH_ConfigCommon_ExtGroup3& value)
{
    if (value.has_sdt_SearchSpace_r17) {
        Free_PDCCH_ConfigCommon_ExtGroup3_Sdt_SearchSpace_r17(value.sdt_SearchSpace_r17);
    }
    if (value.has_searchSpaceMCCH_r17) {
    }
    if (value.has_searchSpaceMTCH_r17) {
    }
    if (value.has_commonSearchSpaceListExt2_r17) {
        if (value.commonSearchSpaceListExt2_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt2_r17_count; ++i) {
                Free_SearchSpaceExt_v1700(value.commonSearchSpaceListExt2_r17_items[i]);
            }
            std::free(value.commonSearchSpaceListExt2_r17_items);
            value.commonSearchSpaceListExt2_r17_items = nullptr;
        }
        value.commonSearchSpaceListExt2_r17_count = 0;
    }
    if (value.has_firstPDCCH_MonitoringOccasionOfPO_v1710) {
        Free_PDCCH_ConfigCommon_ExtGroup3_FirstPDCCH_MonitoringOccasionOfPO_v1710(value.firstPDCCH_MonitoringOccasionOfPO_v1710);
    }
    if (value.has_pei_ConfigBWP_r17) {
        Free_PDCCH_ConfigCommon_ExtGroup3_Pei_ConfigBWP_r17(value.pei_ConfigBWP_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup4：ASN.1 PDCCH_ConfigCommon_ExtGroup4；源文件第 9244 行；扩展添加组 [[ ]]。
// Encode_PDCCH_ConfigCommon_ExtGroup4 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup4(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_followUnifiedTCI_State_v1720);
    if (value.has_followUnifiedTCI_State_v1720) {
        enc.WriteConstrainedInteger((std::int64_t)(value.followUnifiedTCI_State_v1720), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup4(Decoder& dec, PDCCH_ConfigCommon_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.followUnifiedTCI_State_v1720 = (PDCCH_ConfigCommon_ExtGroup4_FollowUnifiedTCI_State_v1720)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup4(PDCCH_ConfigCommon_ExtGroup4& value)
{
    if (value.has_followUnifiedTCI_State_v1720) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon_ExtGroup5：ASN.1 PDCCH_ConfigCommon_ExtGroup5；源文件第 9247 行；扩展添加组 [[ ]]。
// Encode_PDCCH_ConfigCommon_ExtGroup5 只读不分配；Decode_PDCCH_ConfigCommon_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon_ExtGroup5(Encoder& enc, const PDCCH_ConfigCommon_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_applyIndicatedTCI_State_r18);
    enc.WriteBit(value.has_commonSearchSpaceListExt_r18);
    enc.WriteBit(value.has_searchSpaceMulticastMCCH_r18);
    enc.WriteBit(value.has_searchSpaceMulticastMTCH_r18);
    if (value.has_applyIndicatedTCI_State_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.applyIndicatedTCI_State_r18), 0, 3);
    }
    if (value.has_commonSearchSpaceListExt_r18) {
enc.WriteConstrainedLength(value.commonSearchSpaceListExt_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt_r18_count; ++i) {
    Encode_SearchSpaceExt_v1800(enc, value.commonSearchSpaceListExt_r18_items[i]);
}
    }
    if (value.has_searchSpaceMulticastMCCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceMulticastMCCH_r18), 0, 39);
    }
    if (value.has_searchSpaceMulticastMTCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceMulticastMTCH_r18), 0, 39);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon_ExtGroup5(Decoder& dec, PDCCH_ConfigCommon_ExtGroup5& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.applyIndicatedTCI_State_r18 = (PDCCH_ConfigCommon_ExtGroup5_ApplyIndicatedTCI_State_r18)tmp_value;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.commonSearchSpaceListExt_r18_count)) { goto fail; }
if (value.commonSearchSpaceListExt_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.commonSearchSpaceListExt_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.commonSearchSpaceListExt_r18_count > 0u) {
    value.commonSearchSpaceListExt_r18_items = (SearchSpaceExt_v1800*)std::malloc((std::size_t)value.commonSearchSpaceListExt_r18_count * sizeof(SearchSpaceExt_v1800));
    if (value.commonSearchSpaceListExt_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.commonSearchSpaceListExt_r18_items, 0, (std::size_t)value.commonSearchSpaceListExt_r18_count * sizeof(SearchSpaceExt_v1800));
}
for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt_r18_count; ++i) {
    if (Decode_SearchSpaceExt_v1800(dec, value.commonSearchSpaceListExt_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceMulticastMCCH_r18 = (SearchSpaceId)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceMulticastMTCH_r18 = (SearchSpaceId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_ConfigCommon_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon_ExtGroup5(PDCCH_ConfigCommon_ExtGroup5& value)
{
    if (value.has_applyIndicatedTCI_State_r18) {
    }
    if (value.has_commonSearchSpaceListExt_r18) {
        if (value.commonSearchSpaceListExt_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.commonSearchSpaceListExt_r18_count; ++i) {
                Free_SearchSpaceExt_v1800(value.commonSearchSpaceListExt_r18_items[i]);
            }
            std::free(value.commonSearchSpaceListExt_r18_items);
            value.commonSearchSpaceListExt_r18_items = nullptr;
        }
        value.commonSearchSpaceListExt_r18_count = 0;
    }
    if (value.has_searchSpaceMulticastMCCH_r18) {
    }
    if (value.has_searchSpaceMulticastMTCH_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDCCH_ConfigCommon：ASN.1 PDCCH-ConfigCommon；源文件第 9191 行；SEQUENCE。
// Encode_PDCCH_ConfigCommon 只读不分配；Decode_PDCCH_ConfigCommon 可能 malloc（失败时内部已释放并清零）；Free_PDCCH_ConfigCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDCCH_ConfigCommon(Encoder& enc, const PDCCH_ConfigCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_controlResourceSetZero);
    enc.WriteBit(value.has_commonControlResourceSet);
    enc.WriteBit(value.has_searchSpaceZero);
    enc.WriteBit(value.has_commonSearchSpaceList);
    enc.WriteBit(value.has_searchSpaceSIB1);
    enc.WriteBit(value.has_searchSpaceOtherSystemInformation);
    enc.WriteBit(value.has_pagingSearchSpace);
    enc.WriteBit(value.has_ra_SearchSpace);
    if (value.has_controlResourceSetZero) {
        enc.WriteConstrainedInteger((std::int64_t)(value.controlResourceSetZero), 0, 15);
    }
    if (value.has_commonControlResourceSet) {
        Encode_ControlResourceSet(enc, value.commonControlResourceSet);
    }
    if (value.has_searchSpaceZero) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceZero), 0, 15);
    }
    if (value.has_commonSearchSpaceList) {
enc.WriteConstrainedLength(value.commonSearchSpaceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.commonSearchSpaceList_count; ++i) {
    Encode_SearchSpace(enc, value.commonSearchSpaceList_items[i]);
}
    }
    if (value.has_searchSpaceSIB1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSIB1), 0, 39);
    }
    if (value.has_searchSpaceOtherSystemInformation) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceOtherSystemInformation), 0, 39);
    }
    if (value.has_pagingSearchSpace) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pagingSearchSpace), 0, 39);
    }
    if (value.has_ra_SearchSpace) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_SearchSpace), 0, 39);
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
    Encode_PDCCH_ConfigCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PDCCH_ConfigCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_PDCCH_ConfigCommon_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_PDCCH_ConfigCommon_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_PDCCH_ConfigCommon_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_ConfigCommon(Decoder& dec, PDCCH_ConfigCommon& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.controlResourceSetZero = (ControlResourceSetZero)tmp_value;
    }
    if (present_1) {
        if (Decode_ControlResourceSet(dec, value.commonControlResourceSet) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.searchSpaceZero = (SearchSpaceZero)tmp_value;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.commonSearchSpaceList_count)) { goto fail; }
if (value.commonSearchSpaceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.commonSearchSpaceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.commonSearchSpaceList_count > 0u) {
    value.commonSearchSpaceList_items = (SearchSpace*)std::malloc((std::size_t)value.commonSearchSpaceList_count * sizeof(SearchSpace));
    if (value.commonSearchSpaceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.commonSearchSpaceList_items, 0, (std::size_t)value.commonSearchSpaceList_count * sizeof(SearchSpace));
}
for (std::uint32_t i = 0; i < value.commonSearchSpaceList_count; ++i) {
    if (Decode_SearchSpace(dec, value.commonSearchSpaceList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceSIB1 = (SearchSpaceId)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.searchSpaceOtherSystemInformation = (SearchSpaceId)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.pagingSearchSpace = (SearchSpaceId)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.ra_SearchSpace = (SearchSpaceId)tmp_value;
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
    if (Decode_PDCCH_ConfigCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_ConfigCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_ConfigCommon_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_ConfigCommon_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_PDCCH_ConfigCommon_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    Free_PDCCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_ConfigCommon(PDCCH_ConfigCommon& value)
{
    if (value.has_controlResourceSetZero) {
    }
    if (value.has_commonControlResourceSet) {
        Free_ControlResourceSet(value.commonControlResourceSet);
    }
    if (value.has_searchSpaceZero) {
    }
    if (value.has_commonSearchSpaceList) {
        if (value.commonSearchSpaceList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.commonSearchSpaceList_count; ++i) {
                Free_SearchSpace(value.commonSearchSpaceList_items[i]);
            }
            std::free(value.commonSearchSpaceList_items);
            value.commonSearchSpaceList_items = nullptr;
        }
        value.commonSearchSpaceList_count = 0;
    }
    if (value.has_searchSpaceSIB1) {
    }
    if (value.has_searchSpaceOtherSystemInformation) {
    }
    if (value.has_pagingSearchSpace) {
    }
    if (value.has_ra_SearchSpace) {
    }
    if (value.has_extGroup1) {
        Free_PDCCH_ConfigCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PDCCH_ConfigCommon_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_PDCCH_ConfigCommon_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_PDCCH_ConfigCommon_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_PDCCH_ConfigCommon_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDCCH_ConfigCommon：ASN.1 SetupRelease<PDCCH-ConfigCommon>；源文件第 4528 行；CHOICE。
// Encode_SetupRelease_PDCCH_ConfigCommon 只读不分配；Decode_SetupRelease_PDCCH_ConfigCommon 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDCCH_ConfigCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDCCH_ConfigCommon(Encoder& enc, const SetupRelease_PDCCH_ConfigCommon& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDCCH_ConfigCommon_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDCCH_ConfigCommon_Tag_setup:
        Encode_PDCCH_ConfigCommon(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDCCH_ConfigCommon(Decoder& dec, SetupRelease_PDCCH_ConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDCCH_ConfigCommon_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDCCH_ConfigCommon_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDCCH_ConfigCommon_Tag_setup: {
        if (Decode_PDCCH_ConfigCommon(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDCCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDCCH_ConfigCommon(SetupRelease_PDCCH_ConfigCommon& value)
{
    switch (value.tag) {
    case SetupRelease_PDCCH_ConfigCommon_Tag_release:
        break;
    case SetupRelease_PDCCH_ConfigCommon_Tag_setup:
        Free_PDCCH_ConfigCommon(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PDSCH_ConfigCommon：ASN.1 PDSCH-ConfigCommon；源文件第 9549 行；SEQUENCE。
// Encode_PDSCH_ConfigCommon 只读不分配；Decode_PDSCH_ConfigCommon 可能 malloc（失败时内部已释放并清零）；Free_PDSCH_ConfigCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PDSCH_ConfigCommon(Encoder& enc, const PDSCH_ConfigCommon& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdsch_TimeDomainAllocationList);
    if (value.has_pdsch_TimeDomainAllocationList) {
        Encode_PDSCH_TimeDomainResourceAllocationList(enc, value.pdsch_TimeDomainAllocationList);
    }
    return enc.Error();
}

ErrorCode Decode_PDSCH_ConfigCommon(Decoder& dec, PDSCH_ConfigCommon& value)
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
        if (Decode_PDSCH_TimeDomainResourceAllocationList(dec, value.pdsch_TimeDomainAllocationList) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDSCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDSCH_ConfigCommon(PDSCH_ConfigCommon& value)
{
    if (value.has_pdsch_TimeDomainAllocationList) {
        Free_PDSCH_TimeDomainResourceAllocationList(value.pdsch_TimeDomainAllocationList);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_PDSCH_ConfigCommon：ASN.1 SetupRelease<PDSCH-ConfigCommon>；源文件第 4529 行；CHOICE。
// Encode_SetupRelease_PDSCH_ConfigCommon 只读不分配；Decode_SetupRelease_PDSCH_ConfigCommon 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_PDSCH_ConfigCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_PDSCH_ConfigCommon(Encoder& enc, const SetupRelease_PDSCH_ConfigCommon& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_PDSCH_ConfigCommon_Tag_release:
        (void)0;
        break;
    case SetupRelease_PDSCH_ConfigCommon_Tag_setup:
        Encode_PDSCH_ConfigCommon(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_PDSCH_ConfigCommon(Decoder& dec, SetupRelease_PDSCH_ConfigCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_PDSCH_ConfigCommon_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_PDSCH_ConfigCommon_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_PDSCH_ConfigCommon_Tag_setup: {
        if (Decode_PDSCH_ConfigCommon(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_PDSCH_ConfigCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_PDSCH_ConfigCommon(SetupRelease_PDSCH_ConfigCommon& value)
{
    switch (value.tag) {
    case SetupRelease_PDSCH_ConfigCommon_Tag_release:
        break;
    case SetupRelease_PDSCH_ConfigCommon_Tag_setup:
        Free_PDSCH_ConfigCommon(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BWP_DownlinkCommon：ASN.1 BWP-DownlinkCommon；源文件第 4526 行；SEQUENCE。
// Encode_BWP_DownlinkCommon 只读不分配；Decode_BWP_DownlinkCommon 可能 malloc（失败时内部已释放并清零）；Free_BWP_DownlinkCommon 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BWP_DownlinkCommon(Encoder& enc, const BWP_DownlinkCommon& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdcch_ConfigCommon);
    enc.WriteBit(value.has_pdsch_ConfigCommon);
    Encode_BWP(enc, value.genericParameters);
    if (value.has_pdcch_ConfigCommon) {
        Encode_SetupRelease_PDCCH_ConfigCommon(enc, value.pdcch_ConfigCommon);
    }
    if (value.has_pdsch_ConfigCommon) {
        Encode_SetupRelease_PDSCH_ConfigCommon(enc, value.pdsch_ConfigCommon);
    }
    return enc.Error();
}

ErrorCode Decode_BWP_DownlinkCommon(Decoder& dec, BWP_DownlinkCommon& value)
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
        if (Decode_BWP(dec, value.genericParameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SetupRelease_PDCCH_ConfigCommon(dec, value.pdcch_ConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_PDSCH_ConfigCommon(dec, value.pdsch_ConfigCommon) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BWP_DownlinkCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BWP_DownlinkCommon(BWP_DownlinkCommon& value)
{
    Free_BWP(value.genericParameters);
    if (value.has_pdcch_ConfigCommon) {
        Free_SetupRelease_PDCCH_ConfigCommon(value.pdcch_ConfigCommon);
    }
    if (value.has_pdsch_ConfigCommon) {
        Free_SetupRelease_PDSCH_ConfigCommon(value.pdsch_ConfigCommon);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SubgroupConfig_r17：ASN.1 SubgroupConfig-r17；源文件第 6603 行；SEQUENCE。
// Encode_SubgroupConfig_r17 只读不分配；Decode_SubgroupConfig_r17 可能 malloc（失败时内部已释放并清零）；Free_SubgroupConfig_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SubgroupConfig_r17(Encoder& enc, const SubgroupConfig_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_subgroupsNumForUEID_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.subgroupsNumPerPO_r17), 1, 8);
    if (value.has_subgroupsNumForUEID_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.subgroupsNumForUEID_r17), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_SubgroupConfig_r17(Decoder& dec, SubgroupConfig_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.subgroupsNumPerPO_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.subgroupsNumForUEID_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SubgroupConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SubgroupConfig_r17(SubgroupConfig_r17& value)
{
    if (value.has_subgroupsNumForUEID_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PEI_Config_r17：ASN.1 PEI-Config-r17；源文件第 6594 行；SEQUENCE。
// Encode_PEI_Config_r17 只读不分配；Decode_PEI_Config_r17 可能 malloc（失败时内部已释放并清零）；Free_PEI_Config_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PEI_Config_r17(Encoder& enc, const PEI_Config_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lastUsedCellOnly_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.po_NumPerPEI_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.payloadSizeDCI_2_7_r17), 1, 43);
    enc.WriteConstrainedInteger((std::int64_t)(value.pei_FrameOffset_r17), 0, 16);
    Encode_SubgroupConfig_r17(enc, value.subgroupConfig_r17);
    if (value.has_lastUsedCellOnly_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lastUsedCellOnly_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PEI_Config_r17(Decoder& dec, PEI_Config_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.po_NumPerPEI_r17 = (PEI_Config_r17_Po_NumPerPEI_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 43, tmp_value)) { goto fail; }
        value.payloadSizeDCI_2_7_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
        value.pei_FrameOffset_r17 = (int64_t)tmp_value;
    }
    {
        if (Decode_SubgroupConfig_r17(dec, value.subgroupConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.lastUsedCellOnly_r17 = (PEI_Config_r17_LastUsedCellOnly_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PEI_Config_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PEI_Config_r17(PEI_Config_r17& value)
{
    Free_SubgroupConfig_r17(value.subgroupConfig_r17);
    if (value.has_lastUsedCellOnly_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DownlinkConfigCommonSIB_ExtGroup1：ASN.1 DownlinkConfigCommonSIB_ExtGroup1；源文件第 6541 行；扩展添加组 [[ ]]。
// Encode_DownlinkConfigCommonSIB_ExtGroup1 只读不分配；Decode_DownlinkConfigCommonSIB_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_DownlinkConfigCommonSIB_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DownlinkConfigCommonSIB_ExtGroup1(Encoder& enc, const DownlinkConfigCommonSIB_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_pei_Config_r17);
    enc.WriteBit(value.has_initialDownlinkBWP_RedCap_r17);
    if (value.has_pei_Config_r17) {
        Encode_PEI_Config_r17(enc, value.pei_Config_r17);
    }
    if (value.has_initialDownlinkBWP_RedCap_r17) {
        Encode_BWP_DownlinkCommon(enc, value.initialDownlinkBWP_RedCap_r17);
    }
    return enc.Error();
}

ErrorCode Decode_DownlinkConfigCommonSIB_ExtGroup1(Decoder& dec, DownlinkConfigCommonSIB_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PEI_Config_r17(dec, value.pei_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BWP_DownlinkCommon(dec, value.initialDownlinkBWP_RedCap_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DownlinkConfigCommonSIB_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkConfigCommonSIB_ExtGroup1(DownlinkConfigCommonSIB_ExtGroup1& value)
{
    if (value.has_pei_Config_r17) {
        Free_PEI_Config_r17(value.pei_Config_r17);
    }
    if (value.has_initialDownlinkBWP_RedCap_r17) {
        Free_BWP_DownlinkCommon(value.initialDownlinkBWP_RedCap_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MultiFrequencyBandListNR_Aerial_SIB_r18：ASN.1 MultiFrequencyBandListNR-Aerial-SIB-r18；源文件第 8393 行；SEQUENCE OF。
// Encode_MultiFrequencyBandListNR_Aerial_SIB_r18 只读不分配；Decode_MultiFrequencyBandListNR_Aerial_SIB_r18 可能 malloc（失败时内部已释放并清零）；Free_MultiFrequencyBandListNR_Aerial_SIB_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MultiFrequencyBandListNR_Aerial_SIB_r18(Encoder& enc, const MultiFrequencyBandListNR_Aerial_SIB_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_MultiBandInfoAerial_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MultiFrequencyBandListNR_Aerial_SIB_r18(Decoder& dec, MultiFrequencyBandListNR_Aerial_SIB_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_MultiBandInfoAerial_r18*)std::malloc((std::size_t)value.count * sizeof(NR_MultiBandInfoAerial_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_MultiBandInfoAerial_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_MultiBandInfoAerial_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MultiFrequencyBandListNR_Aerial_SIB_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiFrequencyBandListNR_Aerial_SIB_r18(MultiFrequencyBandListNR_Aerial_SIB_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_MultiBandInfoAerial_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FrequencyInfoDL_SIB_v1800：ASN.1 FrequencyInfoDL-SIB-v1800；源文件第 6938 行；SEQUENCE。
// Encode_FrequencyInfoDL_SIB_v1800 只读不分配；Decode_FrequencyInfoDL_SIB_v1800 可能 malloc（失败时内部已释放并清零）；Free_FrequencyInfoDL_SIB_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FrequencyInfoDL_SIB_v1800(Encoder& enc, const FrequencyInfoDL_SIB_v1800& value)
{
    (void)value;
    Encode_MultiFrequencyBandListNR_Aerial_SIB_r18(enc, value.frequencyBandListAerial_r18);
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoDL_SIB_v1800(Decoder& dec, FrequencyInfoDL_SIB_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MultiFrequencyBandListNR_Aerial_SIB_r18(dec, value.frequencyBandListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoDL_SIB_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoDL_SIB_v1800(FrequencyInfoDL_SIB_v1800& value)
{
    Free_MultiFrequencyBandListNR_Aerial_SIB_r18(value.frequencyBandListAerial_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DownlinkConfigCommonSIB_ExtGroup2：ASN.1 DownlinkConfigCommonSIB_ExtGroup2；源文件第 6545 行；扩展添加组 [[ ]]。
// Encode_DownlinkConfigCommonSIB_ExtGroup2 只读不分配；Decode_DownlinkConfigCommonSIB_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_DownlinkConfigCommonSIB_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DownlinkConfigCommonSIB_ExtGroup2(Encoder& enc, const DownlinkConfigCommonSIB_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_frequencyInfoDL_v1800);
    if (value.has_frequencyInfoDL_v1800) {
        Encode_FrequencyInfoDL_SIB_v1800(enc, value.frequencyInfoDL_v1800);
    }
    return enc.Error();
}

ErrorCode Decode_DownlinkConfigCommonSIB_ExtGroup2(Decoder& dec, DownlinkConfigCommonSIB_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_FrequencyInfoDL_SIB_v1800(dec, value.frequencyInfoDL_v1800) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DownlinkConfigCommonSIB_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkConfigCommonSIB_ExtGroup2(DownlinkConfigCommonSIB_ExtGroup2& value)
{
    if (value.has_frequencyInfoDL_v1800) {
        Free_FrequencyInfoDL_SIB_v1800(value.frequencyInfoDL_v1800);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BCCH_Config：ASN.1 BCCH-Config；源文件第 6554 行；SEQUENCE。
// Encode_BCCH_Config 只读不分配；Decode_BCCH_Config 可能 malloc（失败时内部已释放并清零）；Free_BCCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BCCH_Config(Encoder& enc, const BCCH_Config& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.modificationPeriodCoeff), 0, 3);
    return enc.Error();
}

ErrorCode Decode_BCCH_Config(Decoder& dec, BCCH_Config& value)
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
        value.modificationPeriodCoeff = (BCCH_Config_ModificationPeriodCoeff)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BCCH_Config(BCCH_Config& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_ExtGroup1：ASN.1 PCCH_Config_ExtGroup1；源文件第 6581 行；扩展添加组 [[ ]]。
// Encode_PCCH_Config_ExtGroup1 只读不分配；Decode_PCCH_Config_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_ExtGroup1(Encoder& enc, const PCCH_Config_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16);
    if (value.has_nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16), 2, 4);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_ExtGroup1(Decoder& dec, PCCH_Config_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_ExtGroup1(PCCH_Config_ExtGroup1& value)
{
    if (value.has_nrofPDCCH_MonitoringOccasionPerSSB_InPO_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneEighthT；源文件第 6588 行；SEQUENCE OF。
// Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT 只读不分配；Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(Encoder& enc, const PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 35839);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(Decoder& dec, PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 35839, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710/sCS480KHZoneSixteenthT；源文件第 6589 行；SEQUENCE OF。
// Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT 只读不分配；Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(Encoder& enc, const PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 71679);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(Decoder& dec, PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 71679, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710：ASN.1 firstPDCCH-MonitoringOccasionOfPO-v1710；源文件第 6587 行；CHOICE。
// Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710 只读不分配；Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(Encoder& enc, const PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT:
        Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(enc, value.u.sCS480KHZoneEighthT);
        break;
    case PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT:
        Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(enc, value.u.sCS480KHZoneSixteenthT);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(Decoder& dec, PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag)root_index;
    switch (value.tag) {
    case PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT: {
        if (Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(dec, value.u.sCS480KHZoneEighthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT: {
        if (Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(dec, value.u.sCS480KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710& value)
{
    switch (value.tag) {
    case PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneEighthT:
        Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneEighthT(value.u.sCS480KHZoneEighthT);
        break;
    case PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_Tag_sCS480KHZoneSixteenthT:
        Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710_SCS480KHZoneSixteenthT(value.u.sCS480KHZoneSixteenthT);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_ExtGroup2：ASN.1 PCCH_Config_ExtGroup2；源文件第 6584 行；扩展添加组 [[ ]]。
// Encode_PCCH_Config_ExtGroup2 只读不分配；Decode_PCCH_Config_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_ExtGroup2(Encoder& enc, const PCCH_Config_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ranPagingInIdlePO_r17);
    enc.WriteBit(value.has_firstPDCCH_MonitoringOccasionOfPO_v1710);
    if (value.has_ranPagingInIdlePO_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ranPagingInIdlePO_r17), 0, 0);
    }
    if (value.has_firstPDCCH_MonitoringOccasionOfPO_v1710) {
        Encode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(enc, value.firstPDCCH_MonitoringOccasionOfPO_v1710);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_ExtGroup2(Decoder& dec, PCCH_Config_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.ranPagingInIdlePO_r17 = (PCCH_Config_ExtGroup2_RanPagingInIdlePO_r17)0;
    }
    if (present_1) {
        if (Decode_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(dec, value.firstPDCCH_MonitoringOccasionOfPO_v1710) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_ExtGroup2(PCCH_Config_ExtGroup2& value)
{
    if (value.has_ranPagingInIdlePO_r17) {
    }
    if (value.has_firstPDCCH_MonitoringOccasionOfPO_v1710) {
        Free_PCCH_Config_ExtGroup2_FirstPDCCH_MonitoringOccasionOfPO_v1710(value.firstPDCCH_MonitoringOccasionOfPO_v1710);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_NAndPagingFrameOffset：ASN.1 nAndPagingFrameOffset；源文件第 6562 行；CHOICE。
// Encode_PCCH_Config_NAndPagingFrameOffset 只读不分配；Decode_PCCH_Config_NAndPagingFrameOffset 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_NAndPagingFrameOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_NAndPagingFrameOffset(Encoder& enc, const PCCH_Config_NAndPagingFrameOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 4);
    switch (value.tag) {
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneT:
        (void)0;
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_halfT:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.halfT), 0, 1);
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_quarterT:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.quarterT), 0, 3);
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneEighthT:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneEighthT), 0, 7);
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneSixteenthT:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.oneSixteenthT), 0, 15);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_NAndPagingFrameOffset(Decoder& dec, PCCH_Config_NAndPagingFrameOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 4, root_index)) {
        goto fail;
    }
    value.tag = (PCCH_Config_NAndPagingFrameOffset_Tag)root_index;
    switch (value.tag) {
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneT: {
        (void)0;
        break;
    }
    case PCCH_Config_NAndPagingFrameOffset_Tag_halfT: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.halfT = (int64_t)tmp_value;
        break;
    }
    case PCCH_Config_NAndPagingFrameOffset_Tag_quarterT: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.quarterT = (int64_t)tmp_value;
        break;
    }
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneEighthT: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.oneEighthT = (int64_t)tmp_value;
        break;
    }
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneSixteenthT: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.oneSixteenthT = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_NAndPagingFrameOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_NAndPagingFrameOffset(PCCH_Config_NAndPagingFrameOffset& value)
{
    switch (value.tag) {
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneT:
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_halfT:
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_quarterT:
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneEighthT:
        break;
    case PCCH_Config_NAndPagingFrameOffset_Tag_oneSixteenthT:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS15KHZoneT；源文件第 6571 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 139);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 139, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS30KHZoneT-SCS15KHZhalfT；源文件第 6572 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 279);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 279, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS60KHZoneT-SCS30KHZhalfT-SCS15KHZquarterT；源文件第 6573 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 559);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 559, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZoneT-SCS60KHZhalfT-SCS30KHZquarterT-SCS15KHZoneEighthT；源文件第 6574 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1119);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1119, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS120KHZhalfT-SCS60KHZquarterT-SCS30KHZoneEighthT-SCS15KHZoneSixteenthT；源文件第 6575 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 2239);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 2239, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS480KHZoneT-SCS120KHZquarterT-SCS60KHZoneEighthT-SCS30KHZoneSixteenthT；源文件第 6576 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 4479);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 4479, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS480KHZhalfT-SCS120KHZoneEighthT-SCS60KHZoneSixteenthT；源文件第 6577 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 8959);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 8959, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT：ASN.1 firstPDCCH-MonitoringOccasionOfPO/sCS480KHZquarterT-SCS120KHZoneSixteenthT；源文件第 6578 行；SEQUENCE OF。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 17919);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (int64_t*)std::malloc((std::size_t)value.count * sizeof(int64_t));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 17919, tmp_value)) { goto fail; }
    value.items[i] = (int64_t)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO：ASN.1 firstPDCCH-MonitoringOccasionOfPO；源文件第 6570 行；CHOICE。
// Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO 只读不分配；Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(Encoder& enc, const PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 7);
    switch (value.tag) {
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(enc, value.u.sCS15KHZoneT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(enc, value.u.sCS30KHZoneT_SCS15KHZhalfT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(enc, value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(enc, value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(enc, value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(enc, value.u.sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(enc, value.u.sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT:
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(enc, value.u.sCS480KHZquarterT_SCS120KHZoneSixteenthT);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(Decoder& dec, PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) {
        goto fail;
    }
    value.tag = (PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag)root_index;
    switch (value.tag) {
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(dec, value.u.sCS15KHZoneT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(dec, value.u.sCS30KHZoneT_SCS15KHZhalfT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(dec, value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(dec, value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(dec, value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(dec, value.u.sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(dec, value.u.sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT: {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(dec, value.u.sCS480KHZquarterT_SCS120KHZoneSixteenthT) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO& value)
{
    switch (value.tag) {
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS15KHZoneT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS15KHZoneT(value.u.sCS15KHZoneT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS30KHZoneT_SCS15KHZhalfT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS30KHZoneT_SCS15KHZhalfT(value.u.sCS30KHZoneT_SCS15KHZhalfT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT(value.u.sCS60KHZoneT_SCS30KHZhalfT_SCS15KHZquarterT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT(value.u.sCS120KHZoneT_SCS60KHZhalfT_SCS30KHZquarterT_SCS15KHZoneEighthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT(value.u.sCS120KHZhalfT_SCS60KHZquarterT_SCS30KHZoneEighthT_SCS15KHZoneSixteenthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT(value.u.sCS480KHZoneT_SCS120KHZquarterT_SCS60KHZoneEighthT_SCS30KHZoneSixteenthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT(value.u.sCS480KHZhalfT_SCS120KHZoneEighthT_SCS60KHZoneSixteenthT);
        break;
    case PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_Tag_sCS480KHZquarterT_SCS120KHZoneSixteenthT:
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO_SCS480KHZquarterT_SCS120KHZoneSixteenthT(value.u.sCS480KHZquarterT_SCS120KHZoneSixteenthT);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCCH_Config：ASN.1 PCCH-Config；源文件第 6560 行；SEQUENCE。
// Encode_PCCH_Config 只读不分配；Decode_PCCH_Config 可能 malloc（失败时内部已释放并清零）；Free_PCCH_Config 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCCH_Config(Encoder& enc, const PCCH_Config& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_firstPDCCH_MonitoringOccasionOfPO);
    enc.WriteConstrainedInteger((std::int64_t)(value.defaultPagingCycle), 0, 3);
    Encode_PCCH_Config_NAndPagingFrameOffset(enc, value.nAndPagingFrameOffset);
    enc.WriteConstrainedInteger((std::int64_t)(value.ns), 0, 2);
    if (value.has_firstPDCCH_MonitoringOccasionOfPO) {
        Encode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(enc, value.firstPDCCH_MonitoringOccasionOfPO);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_PCCH_Config_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_PCCH_Config_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_PCCH_Config(Decoder& dec, PCCH_Config& value)
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
        value.defaultPagingCycle = (PagingCycle)tmp_value;
    }
    {
        if (Decode_PCCH_Config_NAndPagingFrameOffset(dec, value.nAndPagingFrameOffset) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ns = (PCCH_Config_Ns)tmp_value;
    }
    if (present_0) {
        if (Decode_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(dec, value.firstPDCCH_MonitoringOccasionOfPO) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_PCCH_Config_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_PCCH_Config_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_PCCH_Config(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCCH_Config(PCCH_Config& value)
{
    Free_PCCH_Config_NAndPagingFrameOffset(value.nAndPagingFrameOffset);
    if (value.has_firstPDCCH_MonitoringOccasionOfPO) {
        Free_PCCH_Config_FirstPDCCH_MonitoringOccasionOfPO(value.firstPDCCH_MonitoringOccasionOfPO);
    }
    if (value.has_extGroup1) {
        Free_PCCH_Config_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_PCCH_Config_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MultiFrequencyBandListNR_SIB：ASN.1 MultiFrequencyBandListNR-SIB；源文件第 8380 行；SEQUENCE OF。
// Encode_MultiFrequencyBandListNR_SIB 只读不分配；Decode_MultiFrequencyBandListNR_SIB 可能 malloc（失败时内部已释放并清零）；Free_MultiFrequencyBandListNR_SIB 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MultiFrequencyBandListNR_SIB(Encoder& enc, const MultiFrequencyBandListNR_SIB& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_MultiBandInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MultiFrequencyBandListNR_SIB(Decoder& dec, MultiFrequencyBandListNR_SIB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_MultiBandInfo*)std::malloc((std::size_t)value.count * sizeof(NR_MultiBandInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_MultiBandInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_MultiBandInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MultiFrequencyBandListNR_SIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiFrequencyBandListNR_SIB(MultiFrequencyBandListNR_SIB& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_MultiBandInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FrequencyInfoDL_SIB：ASN.1 FrequencyInfoDL-SIB；源文件第 6928 行；SEQUENCE。
// Encode_FrequencyInfoDL_SIB 只读不分配；Decode_FrequencyInfoDL_SIB 可能 malloc（失败时内部已释放并清零）；Free_FrequencyInfoDL_SIB 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FrequencyInfoDL_SIB(Encoder& enc, const FrequencyInfoDL_SIB& value)
{
    (void)value;
    Encode_MultiFrequencyBandListNR_SIB(enc, value.frequencyBandList);
    enc.WriteConstrainedInteger((std::int64_t)(value.offsetToPointA), 0, 2199);
enc.WriteConstrainedLength(value.scs_SpecificCarrierList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
    Encode_SCS_SpecificCarrier(enc, value.scs_SpecificCarrierList_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_FrequencyInfoDL_SIB(Decoder& dec, FrequencyInfoDL_SIB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MultiFrequencyBandListNR_SIB(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2199, tmp_value)) { goto fail; }
        value.offsetToPointA = (int64_t)tmp_value;
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
    return dec.Error();
    } while (false);
fail:
    Free_FrequencyInfoDL_SIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FrequencyInfoDL_SIB(FrequencyInfoDL_SIB& value)
{
    Free_MultiFrequencyBandListNR_SIB(value.frequencyBandList);
    if (value.scs_SpecificCarrierList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.scs_SpecificCarrierList_count; ++i) {
            Free_SCS_SpecificCarrier(value.scs_SpecificCarrierList_items[i]);
        }
        std::free(value.scs_SpecificCarrierList_items);
        value.scs_SpecificCarrierList_items = nullptr;
    }
    value.scs_SpecificCarrierList_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DownlinkConfigCommonSIB：ASN.1 DownlinkConfigCommonSIB；源文件第 6535 行；SEQUENCE。
// Encode_DownlinkConfigCommonSIB 只读不分配；Decode_DownlinkConfigCommonSIB 可能 malloc（失败时内部已释放并清零）；Free_DownlinkConfigCommonSIB 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DownlinkConfigCommonSIB(Encoder& enc, const DownlinkConfigCommonSIB& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    Encode_FrequencyInfoDL_SIB(enc, value.frequencyInfoDL);
    Encode_BWP_DownlinkCommon(enc, value.initialDownlinkBWP);
    Encode_BCCH_Config(enc, value.bcch_Config);
    Encode_PCCH_Config(enc, value.pcch_Config);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_DownlinkConfigCommonSIB_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_DownlinkConfigCommonSIB_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_DownlinkConfigCommonSIB(Decoder& dec, DownlinkConfigCommonSIB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_FrequencyInfoDL_SIB(dec, value.frequencyInfoDL) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BWP_DownlinkCommon(dec, value.initialDownlinkBWP) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BCCH_Config(dec, value.bcch_Config) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_PCCH_Config(dec, value.pcch_Config) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_DownlinkConfigCommonSIB_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_DownlinkConfigCommonSIB_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_DownlinkConfigCommonSIB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DownlinkConfigCommonSIB(DownlinkConfigCommonSIB& value)
{
    Free_FrequencyInfoDL_SIB(value.frequencyInfoDL);
    Free_BWP_DownlinkCommon(value.initialDownlinkBWP);
    Free_BCCH_Config(value.bcch_Config);
    Free_PCCH_Config(value.pcch_Config);
    if (value.has_extGroup1) {
        Free_DownlinkConfigCommonSIB_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_DownlinkConfigCommonSIB_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// HighSpeedConfig_r16：ASN.1 HighSpeedConfig-r16；源文件第 6988 行；SEQUENCE。
// Encode_HighSpeedConfig_r16 只读不分配；Decode_HighSpeedConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_HighSpeedConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_HighSpeedConfig_r16(Encoder& enc, const HighSpeedConfig_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_highSpeedMeasFlag_r16);
    enc.WriteBit(value.has_highSpeedDemodFlag_r16);
    if (value.has_highSpeedMeasFlag_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedMeasFlag_r16), 0, 0);
    }
    if (value.has_highSpeedDemodFlag_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedDemodFlag_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_HighSpeedConfig_r16(Decoder& dec, HighSpeedConfig_r16& value)
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
        value.highSpeedMeasFlag_r16 = (HighSpeedConfig_r16_HighSpeedMeasFlag_r16)0;
    }
    if (present_1) {
        value.highSpeedDemodFlag_r16 = (HighSpeedConfig_r16_HighSpeedDemodFlag_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HighSpeedConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HighSpeedConfig_r16(HighSpeedConfig_r16& value)
{
    if (value.has_highSpeedMeasFlag_r16) {
    }
    if (value.has_highSpeedDemodFlag_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SemiStaticChannelAccessConfig_r16：ASN.1 SemiStaticChannelAccessConfig-r16；源文件第 12374 行；SEQUENCE。
// Encode_SemiStaticChannelAccessConfig_r16 只读不分配；Decode_SemiStaticChannelAccessConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_SemiStaticChannelAccessConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SemiStaticChannelAccessConfig_r16(Encoder& enc, const SemiStaticChannelAccessConfig_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.period_r16), 0, 5);
    return enc.Error();
}

ErrorCode Decode_SemiStaticChannelAccessConfig_r16(Decoder& dec, SemiStaticChannelAccessConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.period_r16 = (SemiStaticChannelAccessConfig_r16_Period_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SemiStaticChannelAccessConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SemiStaticChannelAccessConfig_r16(SemiStaticChannelAccessConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16：ASN.1 channelAccessMode-r16；源文件第 12727 行；CHOICE。
// Encode_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16 只读不分配；Decode_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16 可能 malloc（失败时内部已释放并清零）；Free_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(Encoder& enc, const ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic:
        (void)0;
        break;
    case ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic:
        Encode_SemiStaticChannelAccessConfig_r16(enc, value.u.semiStatic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(Decoder& dec, ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag)root_index;
    switch (value.tag) {
    case ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic: {
        (void)0;
        break;
    }
    case ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic: {
        if (Decode_SemiStaticChannelAccessConfig_r16(dec, value.u.semiStatic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16& value)
{
    switch (value.tag) {
    case ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_dynamic:
        break;
    case ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16_Tag_semiStatic:
        Free_SemiStaticChannelAccessConfig_r16(value.u.semiStatic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ServingCellConfigCommonSIB_ExtGroup1：ASN.1 ServingCellConfigCommonSIB_ExtGroup1；源文件第 12726 行；扩展添加组 [[ ]]。
// Encode_ServingCellConfigCommonSIB_ExtGroup1 只读不分配；Decode_ServingCellConfigCommonSIB_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_ServingCellConfigCommonSIB_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ServingCellConfigCommonSIB_ExtGroup1(Encoder& enc, const ServingCellConfigCommonSIB_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_channelAccessMode_r16);
    enc.WriteBit(value.has_discoveryBurstWindowLength_r16);
    enc.WriteBit(value.has_highSpeedConfig_r16);
    if (value.has_channelAccessMode_r16) {
        Encode_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(enc, value.channelAccessMode_r16);
    }
    if (value.has_discoveryBurstWindowLength_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.discoveryBurstWindowLength_r16), 0, 5);
    }
    if (value.has_highSpeedConfig_r16) {
        Encode_HighSpeedConfig_r16(enc, value.highSpeedConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_ServingCellConfigCommonSIB_ExtGroup1(Decoder& dec, ServingCellConfigCommonSIB_ExtGroup1& value)
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
        if (Decode_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(dec, value.channelAccessMode_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.discoveryBurstWindowLength_r16 = (ServingCellConfigCommonSIB_ExtGroup1_DiscoveryBurstWindowLength_r16)tmp_value;
    }
    if (present_2) {
        if (Decode_HighSpeedConfig_r16(dec, value.highSpeedConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ServingCellConfigCommonSIB_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ServingCellConfigCommonSIB_ExtGroup1(ServingCellConfigCommonSIB_ExtGroup1& value)
{
    if (value.has_channelAccessMode_r16) {
        Free_ServingCellConfigCommonSIB_ExtGroup1_ChannelAccessMode_r16(value.channelAccessMode_r16);
    }
    if (value.has_discoveryBurstWindowLength_r16) {
    }
    if (value.has_highSpeedConfig_r16) {
        Free_HighSpeedConfig_r16(value.highSpeedConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// HighSpeedConfigFR2_r17：ASN.1 HighSpeedConfigFR2-r17；源文件第 7001 行；SEQUENCE。
// Encode_HighSpeedConfigFR2_r17 只读不分配；Decode_HighSpeedConfigFR2_r17 可能 malloc（失败时内部已释放并清零）；Free_HighSpeedConfigFR2_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_HighSpeedConfigFR2_r17(Encoder& enc, const HighSpeedConfigFR2_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_highSpeedMeasFlagFR2_r17);
    enc.WriteBit(value.has_highSpeedDeploymentTypeFR2_r17);
    enc.WriteBit(value.has_highSpeedLargeOneStepUL_TimingFR2_r17);
    if (value.has_highSpeedMeasFlagFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedMeasFlagFR2_r17), 0, 1);
    }
    if (value.has_highSpeedDeploymentTypeFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedDeploymentTypeFR2_r17), 0, 1);
    }
    if (value.has_highSpeedLargeOneStepUL_TimingFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.highSpeedLargeOneStepUL_TimingFR2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_HighSpeedConfigFR2_r17(Decoder& dec, HighSpeedConfigFR2_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.highSpeedMeasFlagFR2_r17 = (HighSpeedConfigFR2_r17_HighSpeedMeasFlagFR2_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.highSpeedDeploymentTypeFR2_r17 = (HighSpeedConfigFR2_r17_HighSpeedDeploymentTypeFR2_r17)tmp_value;
    }
    if (present_2) {
        value.highSpeedLargeOneStepUL_TimingFR2_r17 = (HighSpeedConfigFR2_r17_HighSpeedLargeOneStepUL_TimingFR2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HighSpeedConfigFR2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HighSpeedConfigFR2_r17(HighSpeedConfigFR2_r17& value)
{
    if (value.has_highSpeedMeasFlagFR2_r17) {
    }
    if (value.has_highSpeedDeploymentTypeFR2_r17) {
    }
    if (value.has_highSpeedLargeOneStepUL_TimingFR2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_Prioritization：ASN.1 RA-Prioritization；源文件第 10947 行；SEQUENCE。
// Encode_RA_Prioritization 只读不分配；Decode_RA_Prioritization 可能 malloc（失败时内部已释放并清零）；Free_RA_Prioritization 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_Prioritization(Encoder& enc, const RA_Prioritization& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_scalingFactorBI);
    enc.WriteConstrainedInteger((std::int64_t)(value.powerRampingStepHighPriority), 0, 3);
    if (value.has_scalingFactorBI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactorBI), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_RA_Prioritization(Decoder& dec, RA_Prioritization& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.powerRampingStepHighPriority = (RA_Prioritization_PowerRampingStepHighPriority)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scalingFactorBI = (RA_Prioritization_ScalingFactorBI)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RA_Prioritization(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_Prioritization(RA_Prioritization& value)
{
    if (value.has_scalingFactorBI) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16：ASN.1 ra-PrioritizationForAccessIdentity-r16；源文件第 10747 行；SEQUENCE。
// Encode_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16 只读不分配；Decode_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16 可能 malloc（失败时内部已释放并清零）；Free_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(Encoder& enc, const RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16& value)
{
    (void)value;
    Encode_RA_Prioritization(enc, value.ra_Prioritization_r16);
    enc.WriteFixedBitString(value.ra_PrioritizationForAI_r16.bytes, value.ra_PrioritizationForAI_r16.bitLength, 2, 2);
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(Decoder& dec, RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_RA_Prioritization(dec, value.ra_Prioritization_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.ra_PrioritizationForAI_r16.bytes = string_bytes;
        value.ra_PrioritizationForAI_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16& value)
{
    Free_RA_Prioritization(value.ra_Prioritization_r16);
    std::free(value.ra_PrioritizationForAI_r16.bytes);
    value.ra_PrioritizationForAI_r16.bytes = nullptr;
    value.ra_PrioritizationForAI_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16：ASN.1 prach-RootSequenceIndex-r16；源文件第 10751 行；CHOICE。
// Encode_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16 只读不分配；Decode_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16 可能 malloc（失败时内部已释放并清零）；Free_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(Encoder& enc, const RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l571:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l571), 0, 569);
        break;
    case RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l1151:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l1151), 0, 1149);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(Decoder& dec, RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag)root_index;
    switch (value.tag) {
    case RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l571: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 569, tmp_value)) { goto fail; }
        value.u.l571 = (int64_t)tmp_value;
        break;
    }
    case RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l1151: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1149, tmp_value)) { goto fail; }
        value.u.l1151 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16& value)
{
    switch (value.tag) {
    case RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l571:
        break;
    case RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16_Tag_l1151:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RACH_ConfigCommon_ExtGroup1：ASN.1 RACH_ConfigCommon_ExtGroup1；源文件第 10746 行；扩展添加组 [[ ]]。
// Encode_RACH_ConfigCommon_ExtGroup1 只读不分配；Decode_RACH_ConfigCommon_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RACH_ConfigCommon_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RACH_ConfigCommon_ExtGroup1(Encoder& enc, const RACH_ConfigCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ra_PrioritizationForAccessIdentity_r16);
    enc.WriteBit(value.has_prach_RootSequenceIndex_r16);
    if (value.has_ra_PrioritizationForAccessIdentity_r16) {
        Encode_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(enc, value.ra_PrioritizationForAccessIdentity_r16);
    }
    if (value.has_prach_RootSequenceIndex_r16) {
        Encode_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(enc, value.prach_RootSequenceIndex_r16);
    }
    return enc.Error();
}

ErrorCode Decode_RACH_ConfigCommon_ExtGroup1(Decoder& dec, RACH_ConfigCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(dec, value.ra_PrioritizationForAccessIdentity_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(dec, value.prach_RootSequenceIndex_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RACH_ConfigCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RACH_ConfigCommon_ExtGroup1(RACH_ConfigCommon_ExtGroup1& value)
{
    if (value.has_ra_PrioritizationForAccessIdentity_r16) {
        Free_RACH_ConfigCommon_ExtGroup1_Ra_PrioritizationForAccessIdentity_r16(value.ra_PrioritizationForAccessIdentity_r16);
    }
    if (value.has_prach_RootSequenceIndex_r16) {
        Free_RACH_ConfigCommon_ExtGroup1_Prach_RootSequenceIndex_r16(value.prach_RootSequenceIndex_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RA_PrioritizationSliceInfoList_r17：ASN.1 RA-PrioritizationSliceInfoList-r17；源文件第 10961 行；SEQUENCE OF。
// Encode_RA_PrioritizationSliceInfoList_r17 只读不分配；Decode_RA_PrioritizationSliceInfoList_r17 可能 malloc（失败时内部已释放并清零）；Free_RA_PrioritizationSliceInfoList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RA_PrioritizationSliceInfoList_r17(Encoder& enc, const RA_PrioritizationSliceInfoList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_RA_PrioritizationSliceInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_RA_PrioritizationSliceInfoList_r17(Decoder& dec, RA_PrioritizationSliceInfoList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (RA_PrioritizationSliceInfo_r17*)std::malloc((std::size_t)value.count * sizeof(RA_PrioritizationSliceInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(RA_PrioritizationSliceInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_RA_PrioritizationSliceInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_RA_PrioritizationSliceInfoList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RA_PrioritizationSliceInfoList_r17(RA_PrioritizationSliceInfoList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_RA_PrioritizationSliceInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
