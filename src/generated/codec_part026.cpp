/* ============================================================================
 * src/generated/codec_part026.cpp — 生成的编解码函数
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

ErrorCode Encode_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(Encoder& enc, const FeatureSetDownlink_v1700_TimeDurationForQCL_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_480kHz);
    enc.WriteBit(value.has_scs_960kHz);
    if (value.has_scs_480kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz), 0, 1);
    }
    if (value.has_scs_960kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(Decoder& dec, FeatureSetDownlink_v1700_TimeDurationForQCL_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_480kHz = (FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_480kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.scs_960kHz = (FeatureSetDownlink_v1700_TimeDurationForQCL_v1710_Scs_960kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(FeatureSetDownlink_v1700_TimeDurationForQCL_v1710& value)
{
    if (value.has_scs_480kHz) {
    }
    if (value.has_scs_960kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCCH_RepetitionParameters_r17(Encoder& enc, const PDCCH_RepetitionParameters_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_limitX_PerCC_r17);
    enc.WriteBit(value.has_limitX_AcrossCC_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedMode_r17), 0, 2);
    if (value.has_limitX_PerCC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.limitX_PerCC_r17), 0, 6);
    }
    if (value.has_limitX_AcrossCC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.limitX_AcrossCC_r17), 0, 9);
    }
    return enc.Error();
}

ErrorCode Decode_PDCCH_RepetitionParameters_r17(Decoder& dec, PDCCH_RepetitionParameters_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedMode_r17 = (PDCCH_RepetitionParameters_r17_SupportedMode_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.limitX_PerCC_r17 = (PDCCH_RepetitionParameters_r17_LimitX_PerCC_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.limitX_AcrossCC_r17 = (PDCCH_RepetitionParameters_r17_LimitX_AcrossCC_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCCH_RepetitionParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCCH_RepetitionParameters_r17(PDCCH_RepetitionParameters_r17& value)
{
    if (value.has_limitX_PerCC_r17) {
    }
    if (value.has_limitX_AcrossCC_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(Encoder& enc, const FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    enc.WriteBit(value.has_scs_60kHz_r17);
    enc.WriteBit(value.has_scs_120kHz_r17);
    if (value.has_scs_15kHz_r17) {
        Encode_PDCCH_RepetitionParameters_r17(enc, value.scs_15kHz_r17);
    }
    if (value.has_scs_30kHz_r17) {
        Encode_PDCCH_RepetitionParameters_r17(enc, value.scs_30kHz_r17);
    }
    if (value.has_scs_60kHz_r17) {
        Encode_PDCCH_RepetitionParameters_r17(enc, value.scs_60kHz_r17);
    }
    if (value.has_scs_120kHz_r17) {
        Encode_PDCCH_RepetitionParameters_r17(enc, value.scs_120kHz_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(Decoder& dec, FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17& value)
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
        if (Decode_PDCCH_RepetitionParameters_r17(dec, value.scs_15kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_RepetitionParameters_r17(dec, value.scs_30kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PDCCH_RepetitionParameters_r17(dec, value.scs_60kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PDCCH_RepetitionParameters_r17(dec, value.scs_120kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17& value)
{
    if (value.has_scs_15kHz_r17) {
        Free_PDCCH_RepetitionParameters_r17(value.scs_15kHz_r17);
    }
    if (value.has_scs_30kHz_r17) {
        Free_PDCCH_RepetitionParameters_r17(value.scs_30kHz_r17);
    }
    if (value.has_scs_60kHz_r17) {
        Free_PDCCH_RepetitionParameters_r17(value.scs_60kHz_r17);
    }
    if (value.has_scs_120kHz_r17) {
        Free_PDCCH_RepetitionParameters_r17(value.scs_120kHz_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(Encoder& enc, const FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    if (value.has_scs_15kHz_r17) {
        Encode_PDCCH_RepetitionParameters_r17(enc, value.scs_15kHz_r17);
    }
    if (value.has_scs_30kHz_r17) {
        Encode_PDCCH_RepetitionParameters_r17(enc, value.scs_30kHz_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(Decoder& dec, FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PDCCH_RepetitionParameters_r17(dec, value.scs_15kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PDCCH_RepetitionParameters_r17(dec, value.scs_30kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17& value)
{
    if (value.has_scs_15kHz_r17) {
        Free_PDCCH_RepetitionParameters_r17(value.scs_15kHz_r17);
    }
    if (value.has_scs_30kHz_r17) {
        Free_PDCCH_RepetitionParameters_r17(value.scs_30kHz_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(Encoder& enc, const FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.numBD_twoPDCCH_r17), 2, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOverlaps_r17), 0, 6);
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(Decoder& dec, FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 3, tmp_value)) { goto fail; }
        value.numBD_twoPDCCH_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumOverlaps_r17 = (FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17_MaxNumOverlaps_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1700(Encoder& enc, const FeatureSetDownlink_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_scalingFactor_1024QAM_FR1_r17);
    enc.WriteBit(value.has_timeDurationForQCL_v1710);
    enc.WriteBit(value.has_sfn_SchemeA_r17);
    enc.WriteBit(value.has_sfn_SchemeA_PDCCH_only_r17);
    enc.WriteBit(value.has_sfn_SchemeA_DynamicSwitching_r17);
    enc.WriteBit(value.has_sfn_SchemeA_PDSCH_only_r17);
    enc.WriteBit(value.has_sfn_SchemeB_r17);
    enc.WriteBit(value.has_sfn_SchemeB_DynamicSwitching_r17);
    enc.WriteBit(value.has_sfn_SchemeB_PDSCH_only_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_Case2_1SpanGap_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_legacyMonitoring_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_multiDCI_multiTRP_r17);
    enc.WriteBit(value.has_dynamicMulticastPCell_r17);
    enc.WriteBit(value.has_mTRP_PDCCH_Repetition_r17);
    if (value.has_scalingFactor_1024QAM_FR1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactor_1024QAM_FR1_r17), 0, 2);
    }
    if (value.has_timeDurationForQCL_v1710) {
        Encode_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(enc, value.timeDurationForQCL_v1710);
    }
    if (value.has_sfn_SchemeA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeA_r17), 0, 0);
    }
    if (value.has_sfn_SchemeA_PDCCH_only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeA_PDCCH_only_r17), 0, 0);
    }
    if (value.has_sfn_SchemeA_DynamicSwitching_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeA_DynamicSwitching_r17), 0, 0);
    }
    if (value.has_sfn_SchemeA_PDSCH_only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeA_PDSCH_only_r17), 0, 0);
    }
    if (value.has_sfn_SchemeB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeB_r17), 0, 0);
    }
    if (value.has_sfn_SchemeB_DynamicSwitching_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeB_DynamicSwitching_r17), 0, 0);
    }
    if (value.has_sfn_SchemeB_PDSCH_only_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sfn_SchemeB_PDSCH_only_r17), 0, 0);
    }
    if (value.has_mTRP_PDCCH_Case2_1SpanGap_r17) {
        Encode_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(enc, value.mTRP_PDCCH_Case2_1SpanGap_r17);
    }
    if (value.has_mTRP_PDCCH_legacyMonitoring_r17) {
        Encode_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(enc, value.mTRP_PDCCH_legacyMonitoring_r17);
    }
    if (value.has_mTRP_PDCCH_multiDCI_multiTRP_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PDCCH_multiDCI_multiTRP_r17), 0, 0);
    }
    if (value.has_dynamicMulticastPCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicMulticastPCell_r17), 0, 0);
    }
    if (value.has_mTRP_PDCCH_Repetition_r17) {
        Encode_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(enc, value.mTRP_PDCCH_Repetition_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1700(Decoder& dec, FeatureSetDownlink_v1700& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingFactor_1024QAM_FR1_r17 = (FeatureSetDownlink_v1700_ScalingFactor_1024QAM_FR1_r17)tmp_value;
    }
    if (present_1) {
        if (Decode_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(dec, value.timeDurationForQCL_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.sfn_SchemeA_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeA_r17)0;
    }
    if (present_3) {
        value.sfn_SchemeA_PDCCH_only_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeA_PDCCH_only_r17)0;
    }
    if (present_4) {
        value.sfn_SchemeA_DynamicSwitching_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeA_DynamicSwitching_r17)0;
    }
    if (present_5) {
        value.sfn_SchemeA_PDSCH_only_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeA_PDSCH_only_r17)0;
    }
    if (present_6) {
        value.sfn_SchemeB_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeB_r17)0;
    }
    if (present_7) {
        value.sfn_SchemeB_DynamicSwitching_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeB_DynamicSwitching_r17)0;
    }
    if (present_8) {
        value.sfn_SchemeB_PDSCH_only_r17 = (FeatureSetDownlink_v1700_Sfn_SchemeB_PDSCH_only_r17)0;
    }
    if (present_9) {
        if (Decode_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(dec, value.mTRP_PDCCH_Case2_1SpanGap_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(dec, value.mTRP_PDCCH_legacyMonitoring_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        value.mTRP_PDCCH_multiDCI_multiTRP_r17 = (FeatureSetDownlink_v1700_MTRP_PDCCH_multiDCI_multiTRP_r17)0;
    }
    if (present_12) {
        value.dynamicMulticastPCell_r17 = (FeatureSetDownlink_v1700_DynamicMulticastPCell_r17)0;
    }
    if (present_13) {
        if (Decode_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(dec, value.mTRP_PDCCH_Repetition_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1700(FeatureSetDownlink_v1700& value)
{
    if (value.has_scalingFactor_1024QAM_FR1_r17) {
    }
    if (value.has_timeDurationForQCL_v1710) {
        Free_FeatureSetDownlink_v1700_TimeDurationForQCL_v1710(value.timeDurationForQCL_v1710);
    }
    if (value.has_sfn_SchemeA_r17) {
    }
    if (value.has_sfn_SchemeA_PDCCH_only_r17) {
    }
    if (value.has_sfn_SchemeA_DynamicSwitching_r17) {
    }
    if (value.has_sfn_SchemeA_PDSCH_only_r17) {
    }
    if (value.has_sfn_SchemeB_r17) {
    }
    if (value.has_sfn_SchemeB_DynamicSwitching_r17) {
    }
    if (value.has_sfn_SchemeB_PDSCH_only_r17) {
    }
    if (value.has_mTRP_PDCCH_Case2_1SpanGap_r17) {
        Free_FeatureSetDownlink_v1700_MTRP_PDCCH_Case2_1SpanGap_r17(value.mTRP_PDCCH_Case2_1SpanGap_r17);
    }
    if (value.has_mTRP_PDCCH_legacyMonitoring_r17) {
        Free_FeatureSetDownlink_v1700_MTRP_PDCCH_legacyMonitoring_r17(value.mTRP_PDCCH_legacyMonitoring_r17);
    }
    if (value.has_mTRP_PDCCH_multiDCI_multiTRP_r17) {
    }
    if (value.has_dynamicMulticastPCell_r17) {
    }
    if (value.has_mTRP_PDCCH_Repetition_r17) {
        Free_FeatureSetDownlink_v1700_MTRP_PDCCH_Repetition_r17(value.mTRP_PDCCH_Repetition_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(Encoder& enc, const FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    enc.WriteBit(value.has_scs_60kHz_r17);
    enc.WriteBit(value.has_scs_120kHz_r17);
    if (value.has_scs_15kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r17), 0, 10);
    }
    if (value.has_scs_30kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r17), 0, 10);
    }
    if (value.has_scs_60kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r17), 0, 10);
    }
    if (value.has_scs_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r17), 0, 10);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(Decoder& dec, FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_15kHz_r17 = (FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_15kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_30kHz_r17 = (FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_30kHz_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_60kHz_r17 = (FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_60kHz_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_120kHz_r17 = (FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17_Scs_120kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17& value)
{
    if (value.has_scs_15kHz_r17) {
    }
    if (value.has_scs_30kHz_r17) {
    }
    if (value.has_scs_60kHz_r17) {
    }
    if (value.has_scs_120kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(Encoder& enc, const FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPRS_Resource_r17), 0, 6);
    Encode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(enc, value.maxNumberPRS_ResourceProcessedPerSlot_r17);
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(Decoder& dec, FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberPRS_Resource_r17 = (FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_Resource_r17)tmp_value;
    }
    {
        if (Decode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(dec, value.maxNumberPRS_ResourceProcessedPerSlot_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17& value)
{
    Free_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17_MaxNumberPRS_ResourceProcessedPerSlot_r17(value.maxNumberPRS_ResourceProcessedPerSlot_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1720(Encoder& enc, const FeatureSetDownlink_v1720& value)
{
    (void)value;
    enc.WriteBit(value.has_rtt_BasedPDC_CSI_RS_ForTracking_r17);
    enc.WriteBit(value.has_rtt_BasedPDC_PRS_r17);
    enc.WriteBit(value.has_sps_Multicast_r17);
    if (value.has_rtt_BasedPDC_CSI_RS_ForTracking_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rtt_BasedPDC_CSI_RS_ForTracking_r17), 0, 0);
    }
    if (value.has_rtt_BasedPDC_PRS_r17) {
        Encode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(enc, value.rtt_BasedPDC_PRS_r17);
    }
    if (value.has_sps_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_Multicast_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1720(Decoder& dec, FeatureSetDownlink_v1720& value)
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
        value.rtt_BasedPDC_CSI_RS_ForTracking_r17 = (FeatureSetDownlink_v1720_Rtt_BasedPDC_CSI_RS_ForTracking_r17)0;
    }
    if (present_1) {
        if (Decode_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(dec, value.rtt_BasedPDC_PRS_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.sps_Multicast_r17 = (FeatureSetDownlink_v1720_Sps_Multicast_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1720(FeatureSetDownlink_v1720& value)
{
    if (value.has_rtt_BasedPDC_CSI_RS_ForTracking_r17) {
    }
    if (value.has_rtt_BasedPDC_PRS_r17) {
        Free_FeatureSetDownlink_v1720_Rtt_BasedPDC_PRS_r17(value.rtt_BasedPDC_PRS_r17);
    }
    if (value.has_sps_Multicast_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1730(Encoder& enc, const FeatureSetDownlink_v1730& value)
{
    (void)value;
    enc.WriteBit(value.has_prs_AsSpatialRelationRS_For_SRS_r17);
    if (value.has_prs_AsSpatialRelationRS_For_SRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prs_AsSpatialRelationRS_For_SRS_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1730(Decoder& dec, FeatureSetDownlink_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.prs_AsSpatialRelationRS_For_SRS_r17 = (FeatureSetDownlink_v1730_Prs_AsSpatialRelationRS_For_SRS_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1730(FeatureSetDownlink_v1730& value)
{
    if (value.has_prs_AsSpatialRelationRS_For_SRS_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(Encoder& enc, const FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_r18);
    enc.WriteBit(value.has_scs_60kHz_r18);
    if (value.has_scs_15kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r18), 0, 4);
    }
    if (value.has_scs_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r18), 0, 5);
    }
    if (value.has_scs_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(Decoder& dec, FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18& value)
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
        value.scs_15kHz_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.scs_30kHz_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.scs_60kHz_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18& value)
{
    if (value.has_scs_15kHz_r18) {
    }
    if (value.has_scs_30kHz_r18) {
    }
    if (value.has_scs_60kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(Encoder& enc, const FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_r18);
    if (value.has_scs_15kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r18), 0, 0);
    }
    if (value.has_scs_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(Decoder& dec, FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.scs_15kHz_r18 = (FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_15kHz_r18)0;
    }
    if (present_1) {
        value.scs_30kHz_r18 = (FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18_Scs_30kHz_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18& value)
{
    if (value.has_scs_15kHz_r18) {
    }
    if (value.has_scs_30kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(Encoder& enc, const FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_r18);
    if (value.has_scs_15kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r18), 0, 0);
    }
    if (value.has_scs_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(Decoder& dec, FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.scs_15kHz_r18 = (FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_15kHz_r18)0;
    }
    if (present_1) {
        value.scs_30kHz_r18 = (FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18_Scs_30kHz_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18& value)
{
    if (value.has_scs_15kHz_r18) {
    }
    if (value.has_scs_30kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(Encoder& enc, const FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18& value)
{
    (void)value;
    Encode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(enc, value.pdsch_ProcessingType1_r18);
    Encode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(enc, value.pdsch_ProcessingType2_r18);
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(Decoder& dec, FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(dec, value.pdsch_ProcessingType1_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(dec, value.pdsch_ProcessingType2_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18& value)
{
    Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType1_r18(value.pdsch_ProcessingType1_r18);
    Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18_Pdsch_ProcessingType2_r18(value.pdsch_ProcessingType2_r18);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlink_v1800(Encoder& enc, const FeatureSetDownlink_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_pdsch_TypeA_DMRS_r18);
    enc.WriteBit(value.has_pdsch_TypeB_DMRS_r18);
    enc.WriteBit(value.has_pdsch_1SymbolFL_DMRS_Addition2Symbol_r18);
    enc.WriteBit(value.has_pdsch_AlternativeDMRS_Coexistence_r18);
    enc.WriteBit(value.has_pdsch_2SymbolFL_DMRS_r18);
    enc.WriteBit(value.has_pdsch_2SymbolFL_DMRS_Addition2Symbol_r18);
    enc.WriteBit(value.has_pdsch_1SymbolFL_DMRS_Addition3Symbol_r18);
    enc.WriteBit(value.has_pdsch_DMRS_Type_r18);
    enc.WriteBit(value.has_pdsch_1PortDL_PTRS_r18);
    enc.WriteBit(value.has_pdsch_2PortDL_PTRS_r18);
    enc.WriteBit(value.has_mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18);
    enc.WriteBit(value.has_pdsch_ReceptionWithoutSchedulingRestriction_r18);
    enc.WriteBit(value.has_pdsch_ReceptionSchemeA_r18);
    enc.WriteBit(value.has_pdsch_ReceptionSchemeB_r18);
    enc.WriteBit(value.has_dmrs_MultiTRP_SingleDCI_r18);
    enc.WriteBit(value.has_dmrs_MultiTRP_AddtionRows_r18);
    enc.WriteBit(value.has_dmrs_MultiTRP_MultiDCI_r18);
    enc.WriteBit(value.has_simulDMRS_PDSCH_r18);
    enc.WriteBit(value.has_bwpOperationMeasWithoutInterrupt_r18);
    enc.WriteBit(value.has_pdcch_MonitoringSpan2_2_r18);
    enc.WriteBit(value.has_pdcch_MonitoringMixed_r18);
    enc.WriteBit(value.has_scellWithoutSSB_InterBandCA_r18);
    enc.WriteBit(value.has_multicastInactive_r18);
    enc.WriteBit(value.has_thresholdBasedMulticastResume_r18);
    if (value.has_pdsch_TypeA_DMRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_TypeA_DMRS_r18), 0, 0);
    }
    if (value.has_pdsch_TypeB_DMRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_TypeB_DMRS_r18), 0, 0);
    }
    if (value.has_pdsch_1SymbolFL_DMRS_Addition2Symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_1SymbolFL_DMRS_Addition2Symbol_r18), 0, 0);
    }
    if (value.has_pdsch_AlternativeDMRS_Coexistence_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_AlternativeDMRS_Coexistence_r18), 0, 0);
    }
    if (value.has_pdsch_2SymbolFL_DMRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_2SymbolFL_DMRS_r18), 0, 0);
    }
    if (value.has_pdsch_2SymbolFL_DMRS_Addition2Symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_2SymbolFL_DMRS_Addition2Symbol_r18), 0, 0);
    }
    if (value.has_pdsch_1SymbolFL_DMRS_Addition3Symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_1SymbolFL_DMRS_Addition3Symbol_r18), 0, 0);
    }
    if (value.has_pdsch_DMRS_Type_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_DMRS_Type_r18), 0, 1);
    }
    if (value.has_pdsch_1PortDL_PTRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_1PortDL_PTRS_r18), 0, 0);
    }
    if (value.has_pdsch_2PortDL_PTRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_2PortDL_PTRS_r18), 0, 0);
    }
    if (value.has_mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18), 0, 0);
    }
    if (value.has_pdsch_ReceptionWithoutSchedulingRestriction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_ReceptionWithoutSchedulingRestriction_r18), 0, 0);
    }
    if (value.has_pdsch_ReceptionSchemeA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_ReceptionSchemeA_r18), 0, 0);
    }
    if (value.has_pdsch_ReceptionSchemeB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_ReceptionSchemeB_r18), 0, 0);
    }
    if (value.has_dmrs_MultiTRP_SingleDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_MultiTRP_SingleDCI_r18), 0, 0);
    }
    if (value.has_dmrs_MultiTRP_AddtionRows_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_MultiTRP_AddtionRows_r18), 0, 0);
    }
    if (value.has_dmrs_MultiTRP_MultiDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_MultiTRP_MultiDCI_r18), 0, 0);
    }
    if (value.has_simulDMRS_PDSCH_r18) {
        Encode_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(enc, value.simulDMRS_PDSCH_r18);
    }
    if (value.has_bwpOperationMeasWithoutInterrupt_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwpOperationMeasWithoutInterrupt_r18), 0, 0);
    }
    if (value.has_pdcch_MonitoringSpan2_2_r18) {
        Encode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(enc, value.pdcch_MonitoringSpan2_2_r18);
    }
    if (value.has_pdcch_MonitoringMixed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringMixed_r18), 0, 0);
    }
    if (value.has_scellWithoutSSB_InterBandCA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scellWithoutSSB_InterBandCA_r18), 0, 0);
    }
    if (value.has_multicastInactive_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multicastInactive_r18), 0, 0);
    }
    if (value.has_thresholdBasedMulticastResume_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.thresholdBasedMulticastResume_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlink_v1800(Decoder& dec, FeatureSetDownlink_v1800& value)
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
        value.pdsch_TypeA_DMRS_r18 = (FeatureSetDownlink_v1800_Pdsch_TypeA_DMRS_r18)0;
    }
    if (present_1) {
        value.pdsch_TypeB_DMRS_r18 = (FeatureSetDownlink_v1800_Pdsch_TypeB_DMRS_r18)0;
    }
    if (present_2) {
        value.pdsch_1SymbolFL_DMRS_Addition2Symbol_r18 = (FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition2Symbol_r18)0;
    }
    if (present_3) {
        value.pdsch_AlternativeDMRS_Coexistence_r18 = (FeatureSetDownlink_v1800_Pdsch_AlternativeDMRS_Coexistence_r18)0;
    }
    if (present_4) {
        value.pdsch_2SymbolFL_DMRS_r18 = (FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_r18)0;
    }
    if (present_5) {
        value.pdsch_2SymbolFL_DMRS_Addition2Symbol_r18 = (FeatureSetDownlink_v1800_Pdsch_2SymbolFL_DMRS_Addition2Symbol_r18)0;
    }
    if (present_6) {
        value.pdsch_1SymbolFL_DMRS_Addition3Symbol_r18 = (FeatureSetDownlink_v1800_Pdsch_1SymbolFL_DMRS_Addition3Symbol_r18)0;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pdsch_DMRS_Type_r18 = (FeatureSetDownlink_v1800_Pdsch_DMRS_Type_r18)tmp_value;
    }
    if (present_8) {
        value.pdsch_1PortDL_PTRS_r18 = (FeatureSetDownlink_v1800_Pdsch_1PortDL_PTRS_r18)0;
    }
    if (present_9) {
        value.pdsch_2PortDL_PTRS_r18 = (FeatureSetDownlink_v1800_Pdsch_2PortDL_PTRS_r18)0;
    }
    if (present_10) {
        value.mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18 = (FeatureSetDownlink_v1800_MappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18)0;
    }
    if (present_11) {
        value.pdsch_ReceptionWithoutSchedulingRestriction_r18 = (FeatureSetDownlink_v1800_Pdsch_ReceptionWithoutSchedulingRestriction_r18)0;
    }
    if (present_12) {
        value.pdsch_ReceptionSchemeA_r18 = (FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeA_r18)0;
    }
    if (present_13) {
        value.pdsch_ReceptionSchemeB_r18 = (FeatureSetDownlink_v1800_Pdsch_ReceptionSchemeB_r18)0;
    }
    if (present_14) {
        value.dmrs_MultiTRP_SingleDCI_r18 = (FeatureSetDownlink_v1800_Dmrs_MultiTRP_SingleDCI_r18)0;
    }
    if (present_15) {
        value.dmrs_MultiTRP_AddtionRows_r18 = (FeatureSetDownlink_v1800_Dmrs_MultiTRP_AddtionRows_r18)0;
    }
    if (present_16) {
        value.dmrs_MultiTRP_MultiDCI_r18 = (FeatureSetDownlink_v1800_Dmrs_MultiTRP_MultiDCI_r18)0;
    }
    if (present_17) {
        if (Decode_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(dec, value.simulDMRS_PDSCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        value.bwpOperationMeasWithoutInterrupt_r18 = (FeatureSetDownlink_v1800_BwpOperationMeasWithoutInterrupt_r18)0;
    }
    if (present_19) {
        if (Decode_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(dec, value.pdcch_MonitoringSpan2_2_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        value.pdcch_MonitoringMixed_r18 = (FeatureSetDownlink_v1800_Pdcch_MonitoringMixed_r18)0;
    }
    if (present_21) {
        value.scellWithoutSSB_InterBandCA_r18 = (FeatureSetDownlink_v1800_ScellWithoutSSB_InterBandCA_r18)0;
    }
    if (present_22) {
        value.multicastInactive_r18 = (FeatureSetDownlink_v1800_MulticastInactive_r18)0;
    }
    if (present_23) {
        value.thresholdBasedMulticastResume_r18 = (FeatureSetDownlink_v1800_ThresholdBasedMulticastResume_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlink_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlink_v1800(FeatureSetDownlink_v1800& value)
{
    if (value.has_pdsch_TypeA_DMRS_r18) {
    }
    if (value.has_pdsch_TypeB_DMRS_r18) {
    }
    if (value.has_pdsch_1SymbolFL_DMRS_Addition2Symbol_r18) {
    }
    if (value.has_pdsch_AlternativeDMRS_Coexistence_r18) {
    }
    if (value.has_pdsch_2SymbolFL_DMRS_r18) {
    }
    if (value.has_pdsch_2SymbolFL_DMRS_Addition2Symbol_r18) {
    }
    if (value.has_pdsch_1SymbolFL_DMRS_Addition3Symbol_r18) {
    }
    if (value.has_pdsch_DMRS_Type_r18) {
    }
    if (value.has_pdsch_1PortDL_PTRS_r18) {
    }
    if (value.has_pdsch_2PortDL_PTRS_r18) {
    }
    if (value.has_mappingTypeA_1SymbolFL_DMRS_Addition2Symbol_r18) {
    }
    if (value.has_pdsch_ReceptionWithoutSchedulingRestriction_r18) {
    }
    if (value.has_pdsch_ReceptionSchemeA_r18) {
    }
    if (value.has_pdsch_ReceptionSchemeB_r18) {
    }
    if (value.has_dmrs_MultiTRP_SingleDCI_r18) {
    }
    if (value.has_dmrs_MultiTRP_AddtionRows_r18) {
    }
    if (value.has_dmrs_MultiTRP_MultiDCI_r18) {
    }
    if (value.has_simulDMRS_PDSCH_r18) {
        Free_FeatureSetDownlink_v1800_SimulDMRS_PDSCH_r18(value.simulDMRS_PDSCH_r18);
    }
    if (value.has_bwpOperationMeasWithoutInterrupt_r18) {
    }
    if (value.has_pdcch_MonitoringSpan2_2_r18) {
        Free_FeatureSetDownlink_v1800_Pdcch_MonitoringSpan2_2_r18(value.pdcch_MonitoringSpan2_2_r18);
    }
    if (value.has_pdcch_MonitoringMixed_r18) {
    }
    if (value.has_scellWithoutSSB_InterBandCA_r18) {
    }
    if (value.has_multicastInactive_r18) {
    }
    if (value.has_thresholdBasedMulticastResume_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyB(Encoder& enc, const DummyB& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTxPortsPerResource), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResources), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberTxPorts), 2, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCodebookMode), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_PerResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_DummyB(Decoder& dec, DummyB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberTxPortsPerResource = (DummyB_MaxNumberTxPortsPerResource)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberResources = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberTxPorts = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedCodebookMode = (DummyB_SupportedCodebookMode)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_PerResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyB(DummyB& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyC(Encoder& enc, const DummyC& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTxPortsPerResource), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResources), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberTxPorts), 2, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedCodebookMode), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedNumberPanels), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_PerResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_DummyC(Decoder& dec, DummyC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberTxPortsPerResource = (DummyC_MaxNumberTxPortsPerResource)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberResources = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberTxPorts = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.supportedCodebookMode = (DummyC_SupportedCodebookMode)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.supportedNumberPanels = (DummyC_SupportedNumberPanels)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_PerResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyC(DummyC& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyD(Encoder& enc, const DummyD& value)
{
    (void)value;
    enc.WriteBit(value.has_amplitudeSubsetRestriction);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTxPortsPerResource), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResources), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberTxPorts), 2, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.parameterLx), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeScalingType), 0, 1);
    if (value.has_amplitudeSubsetRestriction) {
        enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeSubsetRestriction), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_PerResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_DummyD(Decoder& dec, DummyD& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTxPortsPerResource = (DummyD_MaxNumberTxPortsPerResource)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberResources = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberTxPorts = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.parameterLx = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.amplitudeScalingType = (DummyD_AmplitudeScalingType)tmp_value;
    }
    if (present_0) {
        value.amplitudeSubsetRestriction = (DummyD_AmplitudeSubsetRestriction)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_PerResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyD(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyD(DummyD& value)
{
    if (value.has_amplitudeSubsetRestriction) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyE(Encoder& enc, const DummyE& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTxPortsPerResource), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberResources), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberTxPorts), 2, 256);
    enc.WriteConstrainedInteger((std::int64_t)(value.parameterLx), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.amplitudeScalingType), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_RS_PerResourceSet), 1, 8);
    return enc.Error();
}

ErrorCode Decode_DummyE(Decoder& dec, DummyE& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTxPortsPerResource = (DummyE_MaxNumberTxPortsPerResource)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberResources = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 256, tmp_value)) { goto fail; }
        value.totalNumberTxPorts = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.parameterLx = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.amplitudeScalingType = (DummyE_AmplitudeScalingType)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCSI_RS_PerResourceSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyE(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyE(DummyE& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC(Encoder& enc, const FeatureSetDownlinkPerCC& value)
{
    (void)value;
    enc.WriteBit(value.has_channelBW_90mhz);
    enc.WriteBit(value.has_maxNumberMIMO_LayersPDSCH);
    enc.WriteBit(value.has_supportedModulationOrderDL);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSubcarrierSpacingDL), 0, 7);
    Encode_SupportedBandwidth(enc, value.supportedBandwidthDL);
    if (value.has_channelBW_90mhz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelBW_90mhz), 0, 0);
    }
    if (value.has_maxNumberMIMO_LayersPDSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberMIMO_LayersPDSCH), 0, 2);
    }
    if (value.has_supportedModulationOrderDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedModulationOrderDL), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC(Decoder& dec, FeatureSetDownlinkPerCC& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.supportedSubcarrierSpacingDL = (SubcarrierSpacing)tmp_value;
    }
    {
        if (Decode_SupportedBandwidth(dec, value.supportedBandwidthDL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.channelBW_90mhz = (FeatureSetDownlinkPerCC_ChannelBW_90mhz)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberMIMO_LayersPDSCH = (MIMO_LayersDL)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.supportedModulationOrderDL = (ModulationOrder)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC(FeatureSetDownlinkPerCC& value)
{
    Free_SupportedBandwidth(value.supportedBandwidthDL);
    if (value.has_channelBW_90mhz) {
    }
    if (value.has_maxNumberMIMO_LayersPDSCH) {
    }
    if (value.has_supportedModulationOrderDL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MultiDCI_MultiTRP_r16(Encoder& enc, const MultiDCI_MultiTRP_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCORESET_r16), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCORESETPerPoolIndex_r16), 1, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberUnicastPDSCH_PerPool_r16), 0, 4);
    return enc.Error();
}

ErrorCode Decode_MultiDCI_MultiTRP_r16(Decoder& dec, MultiDCI_MultiTRP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumberCORESET_r16 = (MultiDCI_MultiTRP_r16_MaxNumberCORESET_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.maxNumberCORESETPerPoolIndex_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberUnicastPDSCH_PerPool_r16 = (MultiDCI_MultiTRP_r16_MaxNumberUnicastPDSCH_PerPool_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MultiDCI_MultiTRP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MultiDCI_MultiTRP_r16(MultiDCI_MultiTRP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC_v1620(Encoder& enc, const FeatureSetDownlinkPerCC_v1620& value)
{
    (void)value;
    enc.WriteBit(value.has_multiDCI_MultiTRP_r16);
    enc.WriteBit(value.has_supportFDM_SchemeB_r16);
    if (value.has_multiDCI_MultiTRP_r16) {
        Encode_MultiDCI_MultiTRP_r16(enc, value.multiDCI_MultiTRP_r16);
    }
    if (value.has_supportFDM_SchemeB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportFDM_SchemeB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC_v1620(Decoder& dec, FeatureSetDownlinkPerCC_v1620& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MultiDCI_MultiTRP_r16(dec, value.multiDCI_MultiTRP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.supportFDM_SchemeB_r16 = (FeatureSetDownlinkPerCC_v1620_SupportFDM_SchemeB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC_v1620(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC_v1620(FeatureSetDownlinkPerCC_v1620& value)
{
    if (value.has_multiDCI_MultiTRP_r16) {
        Free_MultiDCI_MultiTRP_r16(value.multiDCI_MultiTRP_r16);
    }
    if (value.has_supportFDM_SchemeB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CRS_InterfMitigation_r17(Encoder& enc, const CRS_InterfMitigation_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_crs_IM_DSS_15kHzSCS_r17);
    enc.WriteBit(value.has_crs_IM_nonDSS_15kHzSCS_r17);
    enc.WriteBit(value.has_crs_IM_nonDSS_NWA_15kHzSCS_r17);
    enc.WriteBit(value.has_crs_IM_nonDSS_30kHzSCS_r17);
    enc.WriteBit(value.has_crs_IM_nonDSS_NWA_30kHzSCS_r17);
    if (value.has_crs_IM_DSS_15kHzSCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crs_IM_DSS_15kHzSCS_r17), 0, 0);
    }
    if (value.has_crs_IM_nonDSS_15kHzSCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crs_IM_nonDSS_15kHzSCS_r17), 0, 0);
    }
    if (value.has_crs_IM_nonDSS_NWA_15kHzSCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crs_IM_nonDSS_NWA_15kHzSCS_r17), 0, 0);
    }
    if (value.has_crs_IM_nonDSS_30kHzSCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crs_IM_nonDSS_30kHzSCS_r17), 0, 0);
    }
    if (value.has_crs_IM_nonDSS_NWA_30kHzSCS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crs_IM_nonDSS_NWA_30kHzSCS_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CRS_InterfMitigation_r17(Decoder& dec, CRS_InterfMitigation_r17& value)
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
        value.crs_IM_DSS_15kHzSCS_r17 = (CRS_InterfMitigation_r17_Crs_IM_DSS_15kHzSCS_r17)0;
    }
    if (present_1) {
        value.crs_IM_nonDSS_15kHzSCS_r17 = (CRS_InterfMitigation_r17_Crs_IM_nonDSS_15kHzSCS_r17)0;
    }
    if (present_2) {
        value.crs_IM_nonDSS_NWA_15kHzSCS_r17 = (CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_15kHzSCS_r17)0;
    }
    if (present_3) {
        value.crs_IM_nonDSS_30kHzSCS_r17 = (CRS_InterfMitigation_r17_Crs_IM_nonDSS_30kHzSCS_r17)0;
    }
    if (present_4) {
        value.crs_IM_nonDSS_NWA_30kHzSCS_r17 = (CRS_InterfMitigation_r17_Crs_IM_nonDSS_NWA_30kHzSCS_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CRS_InterfMitigation_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CRS_InterfMitigation_r17(CRS_InterfMitigation_r17& value)
{
    if (value.has_crs_IM_DSS_15kHzSCS_r17) {
    }
    if (value.has_crs_IM_nonDSS_15kHzSCS_r17) {
    }
    if (value.has_crs_IM_nonDSS_NWA_15kHzSCS_r17) {
    }
    if (value.has_crs_IM_nonDSS_30kHzSCS_r17) {
    }
    if (value.has_crs_IM_nonDSS_NWA_30kHzSCS_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SupportedBandwidth_v1700(Encoder& enc, const SupportedBandwidth_v1700& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SupportedBandwidth_v1700_Tag_fr1_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr1_r17), 0, 14);
        break;
    case SupportedBandwidth_v1700_Tag_fr2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr2_r17), 0, 6);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SupportedBandwidth_v1700(Decoder& dec, SupportedBandwidth_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SupportedBandwidth_v1700_Tag)root_index;
    switch (value.tag) {
    case SupportedBandwidth_v1700_Tag_fr1_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 14, tmp_value)) { goto fail; }
        value.u.fr1_r17 = (SupportedBandwidth_v1700_Fr1_r17)tmp_value;
        break;
    }
    case SupportedBandwidth_v1700_Tag_fr2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.u.fr2_r17 = (SupportedBandwidth_v1700_Fr2_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SupportedBandwidth_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SupportedBandwidth_v1700(SupportedBandwidth_v1700& value)
{
    switch (value.tag) {
    case SupportedBandwidth_v1700_Tag_fr1_r17:
        break;
    case SupportedBandwidth_v1700_Tag_fr2_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC_v1700(Encoder& enc, const FeatureSetDownlinkPerCC_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedMinBandwidthDL_r17);
    enc.WriteBit(value.has_broadcastSCell_r17);
    enc.WriteBit(value.has_maxNumberMIMO_LayersMulticastPDSCH_r17);
    enc.WriteBit(value.has_dynamicMulticastSCell_r17);
    enc.WriteBit(value.has_supportedBandwidthDL_v1710);
    enc.WriteBit(value.has_supportedCRS_InterfMitigation_r17);
    if (value.has_supportedMinBandwidthDL_r17) {
        Encode_SupportedBandwidth_v1700(enc, value.supportedMinBandwidthDL_r17);
    }
    if (value.has_broadcastSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.broadcastSCell_r17), 0, 0);
    }
    if (value.has_maxNumberMIMO_LayersMulticastPDSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberMIMO_LayersMulticastPDSCH_r17), 0, 2);
    }
    if (value.has_dynamicMulticastSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicMulticastSCell_r17), 0, 0);
    }
    if (value.has_supportedBandwidthDL_v1710) {
        Encode_SupportedBandwidth_v1700(enc, value.supportedBandwidthDL_v1710);
    }
    if (value.has_supportedCRS_InterfMitigation_r17) {
        Encode_CRS_InterfMitigation_r17(enc, value.supportedCRS_InterfMitigation_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC_v1700(Decoder& dec, FeatureSetDownlinkPerCC_v1700& value)
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
        if (Decode_SupportedBandwidth_v1700(dec, value.supportedMinBandwidthDL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.broadcastSCell_r17 = (FeatureSetDownlinkPerCC_v1700_BroadcastSCell_r17)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberMIMO_LayersMulticastPDSCH_r17 = (FeatureSetDownlinkPerCC_v1700_MaxNumberMIMO_LayersMulticastPDSCH_r17)tmp_value;
    }
    if (present_3) {
        value.dynamicMulticastSCell_r17 = (FeatureSetDownlinkPerCC_v1700_DynamicMulticastSCell_r17)0;
    }
    if (present_4) {
        if (Decode_SupportedBandwidth_v1700(dec, value.supportedBandwidthDL_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_CRS_InterfMitigation_r17(dec, value.supportedCRS_InterfMitigation_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC_v1700(FeatureSetDownlinkPerCC_v1700& value)
{
    if (value.has_supportedMinBandwidthDL_r17) {
        Free_SupportedBandwidth_v1700(value.supportedMinBandwidthDL_r17);
    }
    if (value.has_broadcastSCell_r17) {
    }
    if (value.has_maxNumberMIMO_LayersMulticastPDSCH_r17) {
    }
    if (value.has_dynamicMulticastSCell_r17) {
    }
    if (value.has_supportedBandwidthDL_v1710) {
        Free_SupportedBandwidth_v1700(value.supportedBandwidthDL_v1710);
    }
    if (value.has_supportedCRS_InterfMitigation_r17) {
        Free_CRS_InterfMitigation_r17(value.supportedCRS_InterfMitigation_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC_v1720(Encoder& enc, const FeatureSetDownlinkPerCC_v1720& value)
{
    (void)value;
    enc.WriteBit(value.has_maxModulationOrderForMulticastDataRateCalculation_r17);
    enc.WriteBit(value.has_fdm_BroadcastUnicast_r17);
    enc.WriteBit(value.has_fdm_MulticastUnicast_r17);
    if (value.has_maxModulationOrderForMulticastDataRateCalculation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxModulationOrderForMulticastDataRateCalculation_r17), 0, 2);
    }
    if (value.has_fdm_BroadcastUnicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdm_BroadcastUnicast_r17), 0, 0);
    }
    if (value.has_fdm_MulticastUnicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdm_MulticastUnicast_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC_v1720(Decoder& dec, FeatureSetDownlinkPerCC_v1720& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxModulationOrderForMulticastDataRateCalculation_r17 = (FeatureSetDownlinkPerCC_v1720_MaxModulationOrderForMulticastDataRateCalculation_r17)tmp_value;
    }
    if (present_1) {
        value.fdm_BroadcastUnicast_r17 = (FeatureSetDownlinkPerCC_v1720_Fdm_BroadcastUnicast_r17)0;
    }
    if (present_2) {
        value.fdm_MulticastUnicast_r17 = (FeatureSetDownlinkPerCC_v1720_Fdm_MulticastUnicast_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC_v1720(FeatureSetDownlinkPerCC_v1720& value)
{
    if (value.has_maxModulationOrderForMulticastDataRateCalculation_r17) {
    }
    if (value.has_fdm_BroadcastUnicast_r17) {
    }
    if (value.has_fdm_MulticastUnicast_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC_v1730(Encoder& enc, const FeatureSetDownlinkPerCC_v1730& value)
{
    (void)value;
    enc.WriteBit(value.has_intraSlotTDM_UnicastGroupCommonPDSCH_r17);
    enc.WriteBit(value.has_sps_MulticastSCell_r17);
    enc.WriteBit(value.has_sps_MulticastSCellMultiConfig_r17);
    enc.WriteBit(value.has_dci_BroadcastWith16Repetitions_r17);
    if (value.has_intraSlotTDM_UnicastGroupCommonPDSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraSlotTDM_UnicastGroupCommonPDSCH_r17), 0, 1);
    }
    if (value.has_sps_MulticastSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_MulticastSCell_r17), 0, 0);
    }
    if (value.has_sps_MulticastSCellMultiConfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_MulticastSCellMultiConfig_r17), 1, 8);
    }
    if (value.has_dci_BroadcastWith16Repetitions_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_BroadcastWith16Repetitions_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC_v1730(Decoder& dec, FeatureSetDownlinkPerCC_v1730& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.intraSlotTDM_UnicastGroupCommonPDSCH_r17 = (FeatureSetDownlinkPerCC_v1730_IntraSlotTDM_UnicastGroupCommonPDSCH_r17)tmp_value;
    }
    if (present_1) {
        value.sps_MulticastSCell_r17 = (FeatureSetDownlinkPerCC_v1730_Sps_MulticastSCell_r17)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sps_MulticastSCellMultiConfig_r17 = (int64_t)tmp_value;
    }
    if (present_3) {
        value.dci_BroadcastWith16Repetitions_r17 = (FeatureSetDownlinkPerCC_v1730_Dci_BroadcastWith16Repetitions_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC_v1730(FeatureSetDownlinkPerCC_v1730& value)
{
    if (value.has_intraSlotTDM_UnicastGroupCommonPDSCH_r17) {
    }
    if (value.has_sps_MulticastSCell_r17) {
    }
    if (value.has_sps_MulticastSCellMultiConfig_r17) {
    }
    if (value.has_dci_BroadcastWith16Repetitions_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC_v1780(Encoder& enc, const FeatureSetDownlinkPerCC_v1780& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandwidthDL_v1780);
    if (value.has_supportedBandwidthDL_v1780) {
        Encode_SupportedBandwidth_v1700(enc, value.supportedBandwidthDL_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC_v1780(Decoder& dec, FeatureSetDownlinkPerCC_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SupportedBandwidth_v1700(dec, value.supportedBandwidthDL_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC_v1780(FeatureSetDownlinkPerCC_v1780& value)
{
    if (value.has_supportedBandwidthDL_v1780) {
        Free_SupportedBandwidth_v1700(value.supportedBandwidthDL_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetDownlinkPerCC_v1800(Encoder& enc, const FeatureSetDownlinkPerCC_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_multiDCI_IntraCellMultiTRP_TwoTA_r18);
    enc.WriteBit(value.has_multiDCI_InterCellMultiTRP_TwoTA_r18);
    enc.WriteBit(value.has_rxTimingDiff_r18);
    enc.WriteBit(value.has_multiDCI_MultiTRP_CORESET_Monitoring_r18);
    enc.WriteBit(value.has_broadcastNonServingCell_r18);
    enc.WriteBit(value.has_schedulingMeasurementRelaxation_r18);
    if (value.has_multiDCI_IntraCellMultiTRP_TwoTA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiDCI_IntraCellMultiTRP_TwoTA_r18), 0, 0);
    }
    if (value.has_multiDCI_InterCellMultiTRP_TwoTA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiDCI_InterCellMultiTRP_TwoTA_r18), 1, 2);
    }
    if (value.has_rxTimingDiff_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rxTimingDiff_r18), 0, 0);
    }
    if (value.has_multiDCI_MultiTRP_CORESET_Monitoring_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiDCI_MultiTRP_CORESET_Monitoring_r18), 0, 0);
    }
    if (value.has_broadcastNonServingCell_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.broadcastNonServingCell_r18), 0, 0);
    }
    if (value.has_schedulingMeasurementRelaxation_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.schedulingMeasurementRelaxation_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetDownlinkPerCC_v1800(Decoder& dec, FeatureSetDownlinkPerCC_v1800& value)
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
        value.multiDCI_IntraCellMultiTRP_TwoTA_r18 = (FeatureSetDownlinkPerCC_v1800_MultiDCI_IntraCellMultiTRP_TwoTA_r18)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.multiDCI_InterCellMultiTRP_TwoTA_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        value.rxTimingDiff_r18 = (FeatureSetDownlinkPerCC_v1800_RxTimingDiff_r18)0;
    }
    if (present_3) {
        value.multiDCI_MultiTRP_CORESET_Monitoring_r18 = (FeatureSetDownlinkPerCC_v1800_MultiDCI_MultiTRP_CORESET_Monitoring_r18)0;
    }
    if (present_4) {
        value.broadcastNonServingCell_r18 = (FeatureSetDownlinkPerCC_v1800_BroadcastNonServingCell_r18)0;
    }
    if (present_5) {
        value.schedulingMeasurementRelaxation_r18 = (FeatureSetDownlinkPerCC_v1800_SchedulingMeasurementRelaxation_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetDownlinkPerCC_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetDownlinkPerCC_v1800(FeatureSetDownlinkPerCC_v1800& value)
{
    if (value.has_multiDCI_IntraCellMultiTRP_TwoTA_r18) {
    }
    if (value.has_multiDCI_InterCellMultiTRP_TwoTA_r18) {
    }
    if (value.has_rxTimingDiff_r18) {
    }
    if (value.has_multiDCI_MultiTRP_CORESET_Monitoring_r18) {
    }
    if (value.has_broadcastNonServingCell_r18) {
    }
    if (value.has_schedulingMeasurementRelaxation_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup8(Encoder& enc, const FeatureSets_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v1730);
    enc.WriteBit(value.has_featureSetsDownlinkPerCC_v1730);
    if (value.has_featureSetsDownlink_v1730) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v1730_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1730_count; ++i) {
    Encode_FeatureSetDownlink_v1730(enc, value.featureSetsDownlink_v1730_items[i]);
}
    }
    if (value.has_featureSetsDownlinkPerCC_v1730) {
enc.WriteConstrainedLength(value.featureSetsDownlinkPerCC_v1730_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1730_count; ++i) {
    Encode_FeatureSetDownlinkPerCC_v1730(enc, value.featureSetsDownlinkPerCC_v1730_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup8(Decoder& dec, FeatureSets_ExtGroup8& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v1730_count)) { goto fail; }
if (value.featureSetsDownlink_v1730_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v1730_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v1730_count > 0u) {
    value.featureSetsDownlink_v1730_items = (FeatureSetDownlink_v1730*)std::malloc((std::size_t)value.featureSetsDownlink_v1730_count * sizeof(FeatureSetDownlink_v1730));
    if (value.featureSetsDownlink_v1730_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v1730_items, 0, (std::size_t)value.featureSetsDownlink_v1730_count * sizeof(FeatureSetDownlink_v1730));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1730_count; ++i) {
    if (Decode_FeatureSetDownlink_v1730(dec, value.featureSetsDownlink_v1730_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlinkPerCC_v1730_count)) { goto fail; }
if (value.featureSetsDownlinkPerCC_v1730_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlinkPerCC_v1730_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlinkPerCC_v1730_count > 0u) {
    value.featureSetsDownlinkPerCC_v1730_items = (FeatureSetDownlinkPerCC_v1730*)std::malloc((std::size_t)value.featureSetsDownlinkPerCC_v1730_count * sizeof(FeatureSetDownlinkPerCC_v1730));
    if (value.featureSetsDownlinkPerCC_v1730_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlinkPerCC_v1730_items, 0, (std::size_t)value.featureSetsDownlinkPerCC_v1730_count * sizeof(FeatureSetDownlinkPerCC_v1730));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1730_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC_v1730(dec, value.featureSetsDownlinkPerCC_v1730_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup8(FeatureSets_ExtGroup8& value)
{
    if (value.has_featureSetsDownlink_v1730) {
        if (value.featureSetsDownlink_v1730_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1730_count; ++i) {
                Free_FeatureSetDownlink_v1730(value.featureSetsDownlink_v1730_items[i]);
            }
            std::free(value.featureSetsDownlink_v1730_items);
            value.featureSetsDownlink_v1730_items = nullptr;
        }
        value.featureSetsDownlink_v1730_count = 0;
    }
    if (value.has_featureSetsDownlinkPerCC_v1730) {
        if (value.featureSetsDownlinkPerCC_v1730_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1730_count; ++i) {
                Free_FeatureSetDownlinkPerCC_v1730(value.featureSetsDownlinkPerCC_v1730_items[i]);
            }
            std::free(value.featureSetsDownlinkPerCC_v1730_items);
            value.featureSetsDownlinkPerCC_v1730_items = nullptr;
        }
        value.featureSetsDownlinkPerCC_v1730_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup9(Encoder& enc, const FeatureSets_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlinkPerCC_v1780);
    enc.WriteBit(value.has_featureSetsUplinkPerCC_v1780);
    if (value.has_featureSetsDownlinkPerCC_v1780) {
enc.WriteConstrainedLength(value.featureSetsDownlinkPerCC_v1780_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1780_count; ++i) {
    Encode_FeatureSetDownlinkPerCC_v1780(enc, value.featureSetsDownlinkPerCC_v1780_items[i]);
}
    }
    if (value.has_featureSetsUplinkPerCC_v1780) {
enc.WriteConstrainedLength(value.featureSetsUplinkPerCC_v1780_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1780_count; ++i) {
    Encode_FeatureSetUplinkPerCC_v1780(enc, value.featureSetsUplinkPerCC_v1780_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup9(Decoder& dec, FeatureSets_ExtGroup9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlinkPerCC_v1780_count)) { goto fail; }
if (value.featureSetsDownlinkPerCC_v1780_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlinkPerCC_v1780_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlinkPerCC_v1780_count > 0u) {
    value.featureSetsDownlinkPerCC_v1780_items = (FeatureSetDownlinkPerCC_v1780*)std::malloc((std::size_t)value.featureSetsDownlinkPerCC_v1780_count * sizeof(FeatureSetDownlinkPerCC_v1780));
    if (value.featureSetsDownlinkPerCC_v1780_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlinkPerCC_v1780_items, 0, (std::size_t)value.featureSetsDownlinkPerCC_v1780_count * sizeof(FeatureSetDownlinkPerCC_v1780));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1780_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC_v1780(dec, value.featureSetsDownlinkPerCC_v1780_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplinkPerCC_v1780_count)) { goto fail; }
if (value.featureSetsUplinkPerCC_v1780_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplinkPerCC_v1780_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplinkPerCC_v1780_count > 0u) {
    value.featureSetsUplinkPerCC_v1780_items = (FeatureSetUplinkPerCC_v1780*)std::malloc((std::size_t)value.featureSetsUplinkPerCC_v1780_count * sizeof(FeatureSetUplinkPerCC_v1780));
    if (value.featureSetsUplinkPerCC_v1780_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplinkPerCC_v1780_items, 0, (std::size_t)value.featureSetsUplinkPerCC_v1780_count * sizeof(FeatureSetUplinkPerCC_v1780));
}
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1780_count; ++i) {
    if (Decode_FeatureSetUplinkPerCC_v1780(dec, value.featureSetsUplinkPerCC_v1780_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup9(FeatureSets_ExtGroup9& value)
{
    if (value.has_featureSetsDownlinkPerCC_v1780) {
        if (value.featureSetsDownlinkPerCC_v1780_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1780_count; ++i) {
                Free_FeatureSetDownlinkPerCC_v1780(value.featureSetsDownlinkPerCC_v1780_items[i]);
            }
            std::free(value.featureSetsDownlinkPerCC_v1780_items);
            value.featureSetsDownlinkPerCC_v1780_items = nullptr;
        }
        value.featureSetsDownlinkPerCC_v1780_count = 0;
    }
    if (value.has_featureSetsUplinkPerCC_v1780) {
        if (value.featureSetsUplinkPerCC_v1780_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1780_count; ++i) {
                Free_FeatureSetUplinkPerCC_v1780(value.featureSetsUplinkPerCC_v1780_items[i]);
            }
            std::free(value.featureSetsUplinkPerCC_v1780_items);
            value.featureSetsUplinkPerCC_v1780_items = nullptr;
        }
        value.featureSetsUplinkPerCC_v1780_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup10(Encoder& enc, const FeatureSets_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v1800);
    enc.WriteBit(value.has_featureSetsDownlinkPerCC_v1800);
    enc.WriteBit(value.has_featureSetsUplink_v1800);
    enc.WriteBit(value.has_featureSetsUplinkPerCC_v1800);
    if (value.has_featureSetsDownlink_v1800) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1800_count; ++i) {
    Encode_FeatureSetDownlink_v1800(enc, value.featureSetsDownlink_v1800_items[i]);
}
    }
    if (value.has_featureSetsDownlinkPerCC_v1800) {
enc.WriteConstrainedLength(value.featureSetsDownlinkPerCC_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1800_count; ++i) {
    Encode_FeatureSetDownlinkPerCC_v1800(enc, value.featureSetsDownlinkPerCC_v1800_items[i]);
}
    }
    if (value.has_featureSetsUplink_v1800) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1800_count; ++i) {
    Encode_FeatureSetUplink_v1800(enc, value.featureSetsUplink_v1800_items[i]);
}
    }
    if (value.has_featureSetsUplinkPerCC_v1800) {
enc.WriteConstrainedLength(value.featureSetsUplinkPerCC_v1800_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1800_count; ++i) {
    Encode_FeatureSetUplinkPerCC_v1800(enc, value.featureSetsUplinkPerCC_v1800_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup10(Decoder& dec, FeatureSets_ExtGroup10& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v1800_count)) { goto fail; }
if (value.featureSetsDownlink_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v1800_count > 0u) {
    value.featureSetsDownlink_v1800_items = (FeatureSetDownlink_v1800*)std::malloc((std::size_t)value.featureSetsDownlink_v1800_count * sizeof(FeatureSetDownlink_v1800));
    if (value.featureSetsDownlink_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v1800_items, 0, (std::size_t)value.featureSetsDownlink_v1800_count * sizeof(FeatureSetDownlink_v1800));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1800_count; ++i) {
    if (Decode_FeatureSetDownlink_v1800(dec, value.featureSetsDownlink_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlinkPerCC_v1800_count)) { goto fail; }
if (value.featureSetsDownlinkPerCC_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlinkPerCC_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlinkPerCC_v1800_count > 0u) {
    value.featureSetsDownlinkPerCC_v1800_items = (FeatureSetDownlinkPerCC_v1800*)std::malloc((std::size_t)value.featureSetsDownlinkPerCC_v1800_count * sizeof(FeatureSetDownlinkPerCC_v1800));
    if (value.featureSetsDownlinkPerCC_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlinkPerCC_v1800_items, 0, (std::size_t)value.featureSetsDownlinkPerCC_v1800_count * sizeof(FeatureSetDownlinkPerCC_v1800));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1800_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC_v1800(dec, value.featureSetsDownlinkPerCC_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1800_count)) { goto fail; }
if (value.featureSetsUplink_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1800_count > 0u) {
    value.featureSetsUplink_v1800_items = (FeatureSetUplink_v1800*)std::malloc((std::size_t)value.featureSetsUplink_v1800_count * sizeof(FeatureSetUplink_v1800));
    if (value.featureSetsUplink_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1800_items, 0, (std::size_t)value.featureSetsUplink_v1800_count * sizeof(FeatureSetUplink_v1800));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1800_count; ++i) {
    if (Decode_FeatureSetUplink_v1800(dec, value.featureSetsUplink_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplinkPerCC_v1800_count)) { goto fail; }
if (value.featureSetsUplinkPerCC_v1800_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplinkPerCC_v1800_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplinkPerCC_v1800_count > 0u) {
    value.featureSetsUplinkPerCC_v1800_items = (FeatureSetUplinkPerCC_v1800*)std::malloc((std::size_t)value.featureSetsUplinkPerCC_v1800_count * sizeof(FeatureSetUplinkPerCC_v1800));
    if (value.featureSetsUplinkPerCC_v1800_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplinkPerCC_v1800_items, 0, (std::size_t)value.featureSetsUplinkPerCC_v1800_count * sizeof(FeatureSetUplinkPerCC_v1800));
}
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1800_count; ++i) {
    if (Decode_FeatureSetUplinkPerCC_v1800(dec, value.featureSetsUplinkPerCC_v1800_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup10(FeatureSets_ExtGroup10& value)
{
    if (value.has_featureSetsDownlink_v1800) {
        if (value.featureSetsDownlink_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1800_count; ++i) {
                Free_FeatureSetDownlink_v1800(value.featureSetsDownlink_v1800_items[i]);
            }
            std::free(value.featureSetsDownlink_v1800_items);
            value.featureSetsDownlink_v1800_items = nullptr;
        }
        value.featureSetsDownlink_v1800_count = 0;
    }
    if (value.has_featureSetsDownlinkPerCC_v1800) {
        if (value.featureSetsDownlinkPerCC_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1800_count; ++i) {
                Free_FeatureSetDownlinkPerCC_v1800(value.featureSetsDownlinkPerCC_v1800_items[i]);
            }
            std::free(value.featureSetsDownlinkPerCC_v1800_items);
            value.featureSetsDownlinkPerCC_v1800_items = nullptr;
        }
        value.featureSetsDownlinkPerCC_v1800_count = 0;
    }
    if (value.has_featureSetsUplink_v1800) {
        if (value.featureSetsUplink_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1800_count; ++i) {
                Free_FeatureSetUplink_v1800(value.featureSetsUplink_v1800_items[i]);
            }
            std::free(value.featureSetsUplink_v1800_items);
            value.featureSetsUplink_v1800_items = nullptr;
        }
        value.featureSetsUplink_v1800_count = 0;
    }
    if (value.has_featureSetsUplinkPerCC_v1800) {
        if (value.featureSetsUplinkPerCC_v1800_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1800_count; ++i) {
                Free_FeatureSetUplinkPerCC_v1800(value.featureSetsUplinkPerCC_v1800_items[i]);
            }
            std::free(value.featureSetsUplinkPerCC_v1800_items);
            value.featureSetsUplinkPerCC_v1800_items = nullptr;
        }
        value.featureSetsUplinkPerCC_v1800_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup1(Encoder& enc, const FeatureSets_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v1540);
    enc.WriteBit(value.has_featureSetsUplink_v1540);
    enc.WriteBit(value.has_featureSetsUplinkPerCC_v1540);
    if (value.has_featureSetsDownlink_v1540) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v1540_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1540_count; ++i) {
    Encode_FeatureSetDownlink_v1540(enc, value.featureSetsDownlink_v1540_items[i]);
}
    }
    if (value.has_featureSetsUplink_v1540) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1540_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1540_count; ++i) {
    Encode_FeatureSetUplink_v1540(enc, value.featureSetsUplink_v1540_items[i]);
}
    }
    if (value.has_featureSetsUplinkPerCC_v1540) {
enc.WriteConstrainedLength(value.featureSetsUplinkPerCC_v1540_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1540_count; ++i) {
    Encode_FeatureSetUplinkPerCC_v1540(enc, value.featureSetsUplinkPerCC_v1540_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup1(Decoder& dec, FeatureSets_ExtGroup1& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v1540_count)) { goto fail; }
if (value.featureSetsDownlink_v1540_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v1540_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v1540_count > 0u) {
    value.featureSetsDownlink_v1540_items = (FeatureSetDownlink_v1540*)std::malloc((std::size_t)value.featureSetsDownlink_v1540_count * sizeof(FeatureSetDownlink_v1540));
    if (value.featureSetsDownlink_v1540_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v1540_items, 0, (std::size_t)value.featureSetsDownlink_v1540_count * sizeof(FeatureSetDownlink_v1540));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1540_count; ++i) {
    if (Decode_FeatureSetDownlink_v1540(dec, value.featureSetsDownlink_v1540_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1540_count)) { goto fail; }
if (value.featureSetsUplink_v1540_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1540_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1540_count > 0u) {
    value.featureSetsUplink_v1540_items = (FeatureSetUplink_v1540*)std::malloc((std::size_t)value.featureSetsUplink_v1540_count * sizeof(FeatureSetUplink_v1540));
    if (value.featureSetsUplink_v1540_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1540_items, 0, (std::size_t)value.featureSetsUplink_v1540_count * sizeof(FeatureSetUplink_v1540));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1540_count; ++i) {
    if (Decode_FeatureSetUplink_v1540(dec, value.featureSetsUplink_v1540_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplinkPerCC_v1540_count)) { goto fail; }
if (value.featureSetsUplinkPerCC_v1540_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplinkPerCC_v1540_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplinkPerCC_v1540_count > 0u) {
    value.featureSetsUplinkPerCC_v1540_items = (FeatureSetUplinkPerCC_v1540*)std::malloc((std::size_t)value.featureSetsUplinkPerCC_v1540_count * sizeof(FeatureSetUplinkPerCC_v1540));
    if (value.featureSetsUplinkPerCC_v1540_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplinkPerCC_v1540_items, 0, (std::size_t)value.featureSetsUplinkPerCC_v1540_count * sizeof(FeatureSetUplinkPerCC_v1540));
}
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1540_count; ++i) {
    if (Decode_FeatureSetUplinkPerCC_v1540(dec, value.featureSetsUplinkPerCC_v1540_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup1(FeatureSets_ExtGroup1& value)
{
    if (value.has_featureSetsDownlink_v1540) {
        if (value.featureSetsDownlink_v1540_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1540_count; ++i) {
                Free_FeatureSetDownlink_v1540(value.featureSetsDownlink_v1540_items[i]);
            }
            std::free(value.featureSetsDownlink_v1540_items);
            value.featureSetsDownlink_v1540_items = nullptr;
        }
        value.featureSetsDownlink_v1540_count = 0;
    }
    if (value.has_featureSetsUplink_v1540) {
        if (value.featureSetsUplink_v1540_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1540_count; ++i) {
                Free_FeatureSetUplink_v1540(value.featureSetsUplink_v1540_items[i]);
            }
            std::free(value.featureSetsUplink_v1540_items);
            value.featureSetsUplink_v1540_items = nullptr;
        }
        value.featureSetsUplink_v1540_count = 0;
    }
    if (value.has_featureSetsUplinkPerCC_v1540) {
        if (value.featureSetsUplinkPerCC_v1540_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1540_count; ++i) {
                Free_FeatureSetUplinkPerCC_v1540(value.featureSetsUplinkPerCC_v1540_items[i]);
            }
            std::free(value.featureSetsUplinkPerCC_v1540_items);
            value.featureSetsUplinkPerCC_v1540_items = nullptr;
        }
        value.featureSetsUplinkPerCC_v1540_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup2(Encoder& enc, const FeatureSets_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v15a0);
    if (value.has_featureSetsDownlink_v15a0) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v15a0_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v15a0_count; ++i) {
    Encode_FeatureSetDownlink_v15a0(enc, value.featureSetsDownlink_v15a0_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup2(Decoder& dec, FeatureSets_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v15a0_count)) { goto fail; }
if (value.featureSetsDownlink_v15a0_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v15a0_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v15a0_count > 0u) {
    value.featureSetsDownlink_v15a0_items = (FeatureSetDownlink_v15a0*)std::malloc((std::size_t)value.featureSetsDownlink_v15a0_count * sizeof(FeatureSetDownlink_v15a0));
    if (value.featureSetsDownlink_v15a0_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v15a0_items, 0, (std::size_t)value.featureSetsDownlink_v15a0_count * sizeof(FeatureSetDownlink_v15a0));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v15a0_count; ++i) {
    if (Decode_FeatureSetDownlink_v15a0(dec, value.featureSetsDownlink_v15a0_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup2(FeatureSets_ExtGroup2& value)
{
    if (value.has_featureSetsDownlink_v15a0) {
        if (value.featureSetsDownlink_v15a0_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v15a0_count; ++i) {
                Free_FeatureSetDownlink_v15a0(value.featureSetsDownlink_v15a0_items[i]);
            }
            std::free(value.featureSetsDownlink_v15a0_items);
            value.featureSetsDownlink_v15a0_items = nullptr;
        }
        value.featureSetsDownlink_v15a0_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup3(Encoder& enc, const FeatureSets_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v1610);
    enc.WriteBit(value.has_featureSetsUplink_v1610);
    enc.WriteBit(value.has_featureSetDownlinkPerCC_v1620);
    if (value.has_featureSetsDownlink_v1610) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1610_count; ++i) {
    Encode_FeatureSetDownlink_v1610(enc, value.featureSetsDownlink_v1610_items[i]);
}
    }
    if (value.has_featureSetsUplink_v1610) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1610_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1610_count; ++i) {
    Encode_FeatureSetUplink_v1610(enc, value.featureSetsUplink_v1610_items[i]);
}
    }
    if (value.has_featureSetDownlinkPerCC_v1620) {
enc.WriteConstrainedLength(value.featureSetDownlinkPerCC_v1620_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetDownlinkPerCC_v1620_count; ++i) {
    Encode_FeatureSetDownlinkPerCC_v1620(enc, value.featureSetDownlinkPerCC_v1620_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup3(Decoder& dec, FeatureSets_ExtGroup3& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v1610_count)) { goto fail; }
if (value.featureSetsDownlink_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v1610_count > 0u) {
    value.featureSetsDownlink_v1610_items = (FeatureSetDownlink_v1610*)std::malloc((std::size_t)value.featureSetsDownlink_v1610_count * sizeof(FeatureSetDownlink_v1610));
    if (value.featureSetsDownlink_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v1610_items, 0, (std::size_t)value.featureSetsDownlink_v1610_count * sizeof(FeatureSetDownlink_v1610));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1610_count; ++i) {
    if (Decode_FeatureSetDownlink_v1610(dec, value.featureSetsDownlink_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1610_count)) { goto fail; }
if (value.featureSetsUplink_v1610_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1610_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1610_count > 0u) {
    value.featureSetsUplink_v1610_items = (FeatureSetUplink_v1610*)std::malloc((std::size_t)value.featureSetsUplink_v1610_count * sizeof(FeatureSetUplink_v1610));
    if (value.featureSetsUplink_v1610_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1610_items, 0, (std::size_t)value.featureSetsUplink_v1610_count * sizeof(FeatureSetUplink_v1610));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1610_count; ++i) {
    if (Decode_FeatureSetUplink_v1610(dec, value.featureSetsUplink_v1610_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetDownlinkPerCC_v1620_count)) { goto fail; }
if (value.featureSetDownlinkPerCC_v1620_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetDownlinkPerCC_v1620_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetDownlinkPerCC_v1620_count > 0u) {
    value.featureSetDownlinkPerCC_v1620_items = (FeatureSetDownlinkPerCC_v1620*)std::malloc((std::size_t)value.featureSetDownlinkPerCC_v1620_count * sizeof(FeatureSetDownlinkPerCC_v1620));
    if (value.featureSetDownlinkPerCC_v1620_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetDownlinkPerCC_v1620_items, 0, (std::size_t)value.featureSetDownlinkPerCC_v1620_count * sizeof(FeatureSetDownlinkPerCC_v1620));
}
for (std::uint32_t i = 0; i < value.featureSetDownlinkPerCC_v1620_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC_v1620(dec, value.featureSetDownlinkPerCC_v1620_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup3(FeatureSets_ExtGroup3& value)
{
    if (value.has_featureSetsDownlink_v1610) {
        if (value.featureSetsDownlink_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1610_count; ++i) {
                Free_FeatureSetDownlink_v1610(value.featureSetsDownlink_v1610_items[i]);
            }
            std::free(value.featureSetsDownlink_v1610_items);
            value.featureSetsDownlink_v1610_items = nullptr;
        }
        value.featureSetsDownlink_v1610_count = 0;
    }
    if (value.has_featureSetsUplink_v1610) {
        if (value.featureSetsUplink_v1610_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1610_count; ++i) {
                Free_FeatureSetUplink_v1610(value.featureSetsUplink_v1610_items[i]);
            }
            std::free(value.featureSetsUplink_v1610_items);
            value.featureSetsUplink_v1610_items = nullptr;
        }
        value.featureSetsUplink_v1610_count = 0;
    }
    if (value.has_featureSetDownlinkPerCC_v1620) {
        if (value.featureSetDownlinkPerCC_v1620_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetDownlinkPerCC_v1620_count; ++i) {
                Free_FeatureSetDownlinkPerCC_v1620(value.featureSetDownlinkPerCC_v1620_items[i]);
            }
            std::free(value.featureSetDownlinkPerCC_v1620_items);
            value.featureSetDownlinkPerCC_v1620_items = nullptr;
        }
        value.featureSetDownlinkPerCC_v1620_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup4(Encoder& enc, const FeatureSets_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsUplink_v1630);
    if (value.has_featureSetsUplink_v1630) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1630_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1630_count; ++i) {
    Encode_FeatureSetUplink_v1630(enc, value.featureSetsUplink_v1630_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup4(Decoder& dec, FeatureSets_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1630_count)) { goto fail; }
if (value.featureSetsUplink_v1630_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1630_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1630_count > 0u) {
    value.featureSetsUplink_v1630_items = (FeatureSetUplink_v1630*)std::malloc((std::size_t)value.featureSetsUplink_v1630_count * sizeof(FeatureSetUplink_v1630));
    if (value.featureSetsUplink_v1630_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1630_items, 0, (std::size_t)value.featureSetsUplink_v1630_count * sizeof(FeatureSetUplink_v1630));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1630_count; ++i) {
    if (Decode_FeatureSetUplink_v1630(dec, value.featureSetsUplink_v1630_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup4(FeatureSets_ExtGroup4& value)
{
    if (value.has_featureSetsUplink_v1630) {
        if (value.featureSetsUplink_v1630_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1630_count; ++i) {
                Free_FeatureSetUplink_v1630(value.featureSetsUplink_v1630_items[i]);
            }
            std::free(value.featureSetsUplink_v1630_items);
            value.featureSetsUplink_v1630_items = nullptr;
        }
        value.featureSetsUplink_v1630_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup5(Encoder& enc, const FeatureSets_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsUplink_v1640);
    if (value.has_featureSetsUplink_v1640) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1640_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1640_count; ++i) {
    Encode_FeatureSetUplink_v1640(enc, value.featureSetsUplink_v1640_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup5(Decoder& dec, FeatureSets_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1640_count)) { goto fail; }
if (value.featureSetsUplink_v1640_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1640_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1640_count > 0u) {
    value.featureSetsUplink_v1640_items = (FeatureSetUplink_v1640*)std::malloc((std::size_t)value.featureSetsUplink_v1640_count * sizeof(FeatureSetUplink_v1640));
    if (value.featureSetsUplink_v1640_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1640_items, 0, (std::size_t)value.featureSetsUplink_v1640_count * sizeof(FeatureSetUplink_v1640));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1640_count; ++i) {
    if (Decode_FeatureSetUplink_v1640(dec, value.featureSetsUplink_v1640_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup5(FeatureSets_ExtGroup5& value)
{
    if (value.has_featureSetsUplink_v1640) {
        if (value.featureSetsUplink_v1640_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1640_count; ++i) {
                Free_FeatureSetUplink_v1640(value.featureSetsUplink_v1640_items[i]);
            }
            std::free(value.featureSetsUplink_v1640_items);
            value.featureSetsUplink_v1640_items = nullptr;
        }
        value.featureSetsUplink_v1640_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup6(Encoder& enc, const FeatureSets_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v1700);
    enc.WriteBit(value.has_featureSetsDownlinkPerCC_v1700);
    enc.WriteBit(value.has_featureSetsUplink_v1710);
    enc.WriteBit(value.has_featureSetsUplinkPerCC_v1700);
    if (value.has_featureSetsDownlink_v1700) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1700_count; ++i) {
    Encode_FeatureSetDownlink_v1700(enc, value.featureSetsDownlink_v1700_items[i]);
}
    }
    if (value.has_featureSetsDownlinkPerCC_v1700) {
enc.WriteConstrainedLength(value.featureSetsDownlinkPerCC_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1700_count; ++i) {
    Encode_FeatureSetDownlinkPerCC_v1700(enc, value.featureSetsDownlinkPerCC_v1700_items[i]);
}
    }
    if (value.has_featureSetsUplink_v1710) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1710_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1710_count; ++i) {
    Encode_FeatureSetUplink_v1710(enc, value.featureSetsUplink_v1710_items[i]);
}
    }
    if (value.has_featureSetsUplinkPerCC_v1700) {
enc.WriteConstrainedLength(value.featureSetsUplinkPerCC_v1700_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1700_count; ++i) {
    Encode_FeatureSetUplinkPerCC_v1700(enc, value.featureSetsUplinkPerCC_v1700_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup6(Decoder& dec, FeatureSets_ExtGroup6& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v1700_count)) { goto fail; }
if (value.featureSetsDownlink_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v1700_count > 0u) {
    value.featureSetsDownlink_v1700_items = (FeatureSetDownlink_v1700*)std::malloc((std::size_t)value.featureSetsDownlink_v1700_count * sizeof(FeatureSetDownlink_v1700));
    if (value.featureSetsDownlink_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v1700_items, 0, (std::size_t)value.featureSetsDownlink_v1700_count * sizeof(FeatureSetDownlink_v1700));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1700_count; ++i) {
    if (Decode_FeatureSetDownlink_v1700(dec, value.featureSetsDownlink_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlinkPerCC_v1700_count)) { goto fail; }
if (value.featureSetsDownlinkPerCC_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlinkPerCC_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlinkPerCC_v1700_count > 0u) {
    value.featureSetsDownlinkPerCC_v1700_items = (FeatureSetDownlinkPerCC_v1700*)std::malloc((std::size_t)value.featureSetsDownlinkPerCC_v1700_count * sizeof(FeatureSetDownlinkPerCC_v1700));
    if (value.featureSetsDownlinkPerCC_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlinkPerCC_v1700_items, 0, (std::size_t)value.featureSetsDownlinkPerCC_v1700_count * sizeof(FeatureSetDownlinkPerCC_v1700));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1700_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC_v1700(dec, value.featureSetsDownlinkPerCC_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1710_count)) { goto fail; }
if (value.featureSetsUplink_v1710_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1710_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1710_count > 0u) {
    value.featureSetsUplink_v1710_items = (FeatureSetUplink_v1710*)std::malloc((std::size_t)value.featureSetsUplink_v1710_count * sizeof(FeatureSetUplink_v1710));
    if (value.featureSetsUplink_v1710_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1710_items, 0, (std::size_t)value.featureSetsUplink_v1710_count * sizeof(FeatureSetUplink_v1710));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1710_count; ++i) {
    if (Decode_FeatureSetUplink_v1710(dec, value.featureSetsUplink_v1710_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplinkPerCC_v1700_count)) { goto fail; }
if (value.featureSetsUplinkPerCC_v1700_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplinkPerCC_v1700_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplinkPerCC_v1700_count > 0u) {
    value.featureSetsUplinkPerCC_v1700_items = (FeatureSetUplinkPerCC_v1700*)std::malloc((std::size_t)value.featureSetsUplinkPerCC_v1700_count * sizeof(FeatureSetUplinkPerCC_v1700));
    if (value.featureSetsUplinkPerCC_v1700_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplinkPerCC_v1700_items, 0, (std::size_t)value.featureSetsUplinkPerCC_v1700_count * sizeof(FeatureSetUplinkPerCC_v1700));
}
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1700_count; ++i) {
    if (Decode_FeatureSetUplinkPerCC_v1700(dec, value.featureSetsUplinkPerCC_v1700_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup6(FeatureSets_ExtGroup6& value)
{
    if (value.has_featureSetsDownlink_v1700) {
        if (value.featureSetsDownlink_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1700_count; ++i) {
                Free_FeatureSetDownlink_v1700(value.featureSetsDownlink_v1700_items[i]);
            }
            std::free(value.featureSetsDownlink_v1700_items);
            value.featureSetsDownlink_v1700_items = nullptr;
        }
        value.featureSetsDownlink_v1700_count = 0;
    }
    if (value.has_featureSetsDownlinkPerCC_v1700) {
        if (value.featureSetsDownlinkPerCC_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1700_count; ++i) {
                Free_FeatureSetDownlinkPerCC_v1700(value.featureSetsDownlinkPerCC_v1700_items[i]);
            }
            std::free(value.featureSetsDownlinkPerCC_v1700_items);
            value.featureSetsDownlinkPerCC_v1700_items = nullptr;
        }
        value.featureSetsDownlinkPerCC_v1700_count = 0;
    }
    if (value.has_featureSetsUplink_v1710) {
        if (value.featureSetsUplink_v1710_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1710_count; ++i) {
                Free_FeatureSetUplink_v1710(value.featureSetsUplink_v1710_items[i]);
            }
            std::free(value.featureSetsUplink_v1710_items);
            value.featureSetsUplink_v1710_items = nullptr;
        }
        value.featureSetsUplink_v1710_count = 0;
    }
    if (value.has_featureSetsUplinkPerCC_v1700) {
        if (value.featureSetsUplinkPerCC_v1700_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_v1700_count; ++i) {
                Free_FeatureSetUplinkPerCC_v1700(value.featureSetsUplinkPerCC_v1700_items[i]);
            }
            std::free(value.featureSetsUplinkPerCC_v1700_items);
            value.featureSetsUplinkPerCC_v1700_items = nullptr;
        }
        value.featureSetsUplinkPerCC_v1700_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_ExtGroup7(Encoder& enc, const FeatureSets_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsDownlink_v1720);
    enc.WriteBit(value.has_featureSetsDownlinkPerCC_v1720);
    enc.WriteBit(value.has_featureSetsUplink_v1720);
    if (value.has_featureSetsDownlink_v1720) {
enc.WriteConstrainedLength(value.featureSetsDownlink_v1720_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1720_count; ++i) {
    Encode_FeatureSetDownlink_v1720(enc, value.featureSetsDownlink_v1720_items[i]);
}
    }
    if (value.has_featureSetsDownlinkPerCC_v1720) {
enc.WriteConstrainedLength(value.featureSetsDownlinkPerCC_v1720_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1720_count; ++i) {
    Encode_FeatureSetDownlinkPerCC_v1720(enc, value.featureSetsDownlinkPerCC_v1720_items[i]);
}
    }
    if (value.has_featureSetsUplink_v1720) {
enc.WriteConstrainedLength(value.featureSetsUplink_v1720_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1720_count; ++i) {
    Encode_FeatureSetUplink_v1720(enc, value.featureSetsUplink_v1720_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_ExtGroup7(Decoder& dec, FeatureSets_ExtGroup7& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_v1720_count)) { goto fail; }
if (value.featureSetsDownlink_v1720_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_v1720_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_v1720_count > 0u) {
    value.featureSetsDownlink_v1720_items = (FeatureSetDownlink_v1720*)std::malloc((std::size_t)value.featureSetsDownlink_v1720_count * sizeof(FeatureSetDownlink_v1720));
    if (value.featureSetsDownlink_v1720_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_v1720_items, 0, (std::size_t)value.featureSetsDownlink_v1720_count * sizeof(FeatureSetDownlink_v1720));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1720_count; ++i) {
    if (Decode_FeatureSetDownlink_v1720(dec, value.featureSetsDownlink_v1720_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlinkPerCC_v1720_count)) { goto fail; }
if (value.featureSetsDownlinkPerCC_v1720_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlinkPerCC_v1720_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlinkPerCC_v1720_count > 0u) {
    value.featureSetsDownlinkPerCC_v1720_items = (FeatureSetDownlinkPerCC_v1720*)std::malloc((std::size_t)value.featureSetsDownlinkPerCC_v1720_count * sizeof(FeatureSetDownlinkPerCC_v1720));
    if (value.featureSetsDownlinkPerCC_v1720_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlinkPerCC_v1720_items, 0, (std::size_t)value.featureSetsDownlinkPerCC_v1720_count * sizeof(FeatureSetDownlinkPerCC_v1720));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1720_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC_v1720(dec, value.featureSetsDownlinkPerCC_v1720_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v1720_count)) { goto fail; }
if (value.featureSetsUplink_v1720_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v1720_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v1720_count > 0u) {
    value.featureSetsUplink_v1720_items = (FeatureSetUplink_v1720*)std::malloc((std::size_t)value.featureSetsUplink_v1720_count * sizeof(FeatureSetUplink_v1720));
    if (value.featureSetsUplink_v1720_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v1720_items, 0, (std::size_t)value.featureSetsUplink_v1720_count * sizeof(FeatureSetUplink_v1720));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v1720_count; ++i) {
    if (Decode_FeatureSetUplink_v1720(dec, value.featureSetsUplink_v1720_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_ExtGroup7(FeatureSets_ExtGroup7& value)
{
    if (value.has_featureSetsDownlink_v1720) {
        if (value.featureSetsDownlink_v1720_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_v1720_count; ++i) {
                Free_FeatureSetDownlink_v1720(value.featureSetsDownlink_v1720_items[i]);
            }
            std::free(value.featureSetsDownlink_v1720_items);
            value.featureSetsDownlink_v1720_items = nullptr;
        }
        value.featureSetsDownlink_v1720_count = 0;
    }
    if (value.has_featureSetsDownlinkPerCC_v1720) {
        if (value.featureSetsDownlinkPerCC_v1720_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_v1720_count; ++i) {
                Free_FeatureSetDownlinkPerCC_v1720(value.featureSetsDownlinkPerCC_v1720_items[i]);
            }
            std::free(value.featureSetsDownlinkPerCC_v1720_items);
            value.featureSetsDownlinkPerCC_v1720_items = nullptr;
        }
        value.featureSetsDownlinkPerCC_v1720_count = 0;
    }
    if (value.has_featureSetsUplink_v1720) {
        if (value.featureSetsUplink_v1720_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v1720_count; ++i) {
                Free_FeatureSetUplink_v1720(value.featureSetsUplink_v1720_items[i]);
            }
            std::free(value.featureSetsUplink_v1720_items);
            value.featureSetsUplink_v1720_items = nullptr;
        }
        value.featureSetsUplink_v1720_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets(Encoder& enc, const FeatureSets& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_featureSetsDownlink);
    enc.WriteBit(value.has_featureSetsDownlinkPerCC);
    enc.WriteBit(value.has_featureSetsUplink);
    enc.WriteBit(value.has_featureSetsUplinkPerCC);
    if (value.has_featureSetsDownlink) {
enc.WriteConstrainedLength(value.featureSetsDownlink_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlink_count; ++i) {
    Encode_FeatureSetDownlink(enc, value.featureSetsDownlink_items[i]);
}
    }
    if (value.has_featureSetsDownlinkPerCC) {
enc.WriteConstrainedLength(value.featureSetsDownlinkPerCC_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_count; ++i) {
    Encode_FeatureSetDownlinkPerCC(enc, value.featureSetsDownlinkPerCC_items[i]);
}
    }
    if (value.has_featureSetsUplink) {
enc.WriteConstrainedLength(value.featureSetsUplink_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_count; ++i) {
    Encode_FeatureSetUplink(enc, value.featureSetsUplink_items[i]);
}
    }
    if (value.has_featureSetsUplinkPerCC) {
enc.WriteConstrainedLength(value.featureSetsUplinkPerCC_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_count; ++i) {
    Encode_FeatureSetUplinkPerCC(enc, value.featureSetsUplinkPerCC_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(10u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        enc.WriteBit(value.has_extGroup5);
        enc.WriteBit(value.has_extGroup6);
        enc.WriteBit(value.has_extGroup7);
        enc.WriteBit(value.has_extGroup8);
        enc.WriteBit(value.has_extGroup9);
        enc.WriteBit(value.has_extGroup10);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_FeatureSets_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets(Decoder& dec, FeatureSets& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlink_count)) { goto fail; }
if (value.featureSetsDownlink_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlink_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlink_count > 0u) {
    value.featureSetsDownlink_items = (FeatureSetDownlink*)std::malloc((std::size_t)value.featureSetsDownlink_count * sizeof(FeatureSetDownlink));
    if (value.featureSetsDownlink_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlink_items, 0, (std::size_t)value.featureSetsDownlink_count * sizeof(FeatureSetDownlink));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlink_count; ++i) {
    if (Decode_FeatureSetDownlink(dec, value.featureSetsDownlink_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsDownlinkPerCC_count)) { goto fail; }
if (value.featureSetsDownlinkPerCC_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsDownlinkPerCC_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsDownlinkPerCC_count > 0u) {
    value.featureSetsDownlinkPerCC_items = (FeatureSetDownlinkPerCC*)std::malloc((std::size_t)value.featureSetsDownlinkPerCC_count * sizeof(FeatureSetDownlinkPerCC));
    if (value.featureSetsDownlinkPerCC_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsDownlinkPerCC_items, 0, (std::size_t)value.featureSetsDownlinkPerCC_count * sizeof(FeatureSetDownlinkPerCC));
}
for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_count; ++i) {
    if (Decode_FeatureSetDownlinkPerCC(dec, value.featureSetsDownlinkPerCC_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_count)) { goto fail; }
if (value.featureSetsUplink_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_count > 0u) {
    value.featureSetsUplink_items = (FeatureSetUplink*)std::malloc((std::size_t)value.featureSetsUplink_count * sizeof(FeatureSetUplink));
    if (value.featureSetsUplink_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_items, 0, (std::size_t)value.featureSetsUplink_count * sizeof(FeatureSetUplink));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_count; ++i) {
    if (Decode_FeatureSetUplink(dec, value.featureSetsUplink_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplinkPerCC_count)) { goto fail; }
if (value.featureSetsUplinkPerCC_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplinkPerCC_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplinkPerCC_count > 0u) {
    value.featureSetsUplinkPerCC_items = (FeatureSetUplinkPerCC*)std::malloc((std::size_t)value.featureSetsUplinkPerCC_count * sizeof(FeatureSetUplinkPerCC));
    if (value.featureSetsUplinkPerCC_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplinkPerCC_items, 0, (std::size_t)value.featureSetsUplinkPerCC_count * sizeof(FeatureSetUplinkPerCC));
}
for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_count; ++i) {
    if (Decode_FeatureSetUplinkPerCC(dec, value.featureSetsUplinkPerCC_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 10u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[10] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_FeatureSets_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_FeatureSets_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_FeatureSets_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_FeatureSets_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_FeatureSets_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_FeatureSets_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup6 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[6]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_FeatureSets_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup7 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[7]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_FeatureSets_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup8 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[8]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_FeatureSets_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup9 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[9]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_FeatureSets_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets(FeatureSets& value)
{
    if (value.has_featureSetsDownlink) {
        if (value.featureSetsDownlink_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlink_count; ++i) {
                Free_FeatureSetDownlink(value.featureSetsDownlink_items[i]);
            }
            std::free(value.featureSetsDownlink_items);
            value.featureSetsDownlink_items = nullptr;
        }
        value.featureSetsDownlink_count = 0;
    }
    if (value.has_featureSetsDownlinkPerCC) {
        if (value.featureSetsDownlinkPerCC_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsDownlinkPerCC_count; ++i) {
                Free_FeatureSetDownlinkPerCC(value.featureSetsDownlinkPerCC_items[i]);
            }
            std::free(value.featureSetsDownlinkPerCC_items);
            value.featureSetsDownlinkPerCC_items = nullptr;
        }
        value.featureSetsDownlinkPerCC_count = 0;
    }
    if (value.has_featureSetsUplink) {
        if (value.featureSetsUplink_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_count; ++i) {
                Free_FeatureSetUplink(value.featureSetsUplink_items[i]);
            }
            std::free(value.featureSetsUplink_items);
            value.featureSetsUplink_items = nullptr;
        }
        value.featureSetsUplink_count = 0;
    }
    if (value.has_featureSetsUplinkPerCC) {
        if (value.featureSetsUplinkPerCC_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplinkPerCC_count; ++i) {
                Free_FeatureSetUplinkPerCC(value.featureSetsUplinkPerCC_items[i]);
            }
            std::free(value.featureSetsUplinkPerCC_items);
            value.featureSetsUplinkPerCC_items = nullptr;
        }
        value.featureSetsUplinkPerCC_count = 0;
    }
    if (value.has_extGroup1) {
        Free_FeatureSets_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_FeatureSets_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_FeatureSets_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_FeatureSets_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_FeatureSets_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_FeatureSets_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_FeatureSets_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_FeatureSets_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_FeatureSets_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_FeatureSets_ExtGroup10(value.extGroup10);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSets_v16d0(Encoder& enc, const FeatureSets_v16d0& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSetsUplink_v16d0);
    if (value.has_featureSetsUplink_v16d0) {
enc.WriteConstrainedLength(value.featureSetsUplink_v16d0_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetsUplink_v16d0_count; ++i) {
    Encode_FeatureSetUplink_v16d0(enc, value.featureSetsUplink_v16d0_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSets_v16d0(Decoder& dec, FeatureSets_v16d0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetsUplink_v16d0_count)) { goto fail; }
if (value.featureSetsUplink_v16d0_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetsUplink_v16d0_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetsUplink_v16d0_count > 0u) {
    value.featureSetsUplink_v16d0_items = (FeatureSetUplink_v16d0*)std::malloc((std::size_t)value.featureSetsUplink_v16d0_count * sizeof(FeatureSetUplink_v16d0));
    if (value.featureSetsUplink_v16d0_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetsUplink_v16d0_items, 0, (std::size_t)value.featureSetsUplink_v16d0_count * sizeof(FeatureSetUplink_v16d0));
}
for (std::uint32_t i = 0; i < value.featureSetsUplink_v16d0_count; ++i) {
    if (Decode_FeatureSetUplink_v16d0(dec, value.featureSetsUplink_v16d0_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSets_v16d0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSets_v16d0(FeatureSets_v16d0& value)
{
    if (value.has_featureSetsUplink_v16d0) {
        if (value.featureSetsUplink_v16d0_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetsUplink_v16d0_count; ++i) {
                Free_FeatureSetUplink_v16d0(value.featureSetsUplink_v16d0_items[i]);
            }
            std::free(value.featureSetsUplink_v16d0_items);
            value.featureSetsUplink_v16d0_items = nullptr;
        }
        value.featureSetsUplink_v16d0_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyF(Encoder& enc, const DummyF& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicCSI_ReportPerBWP), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_ReportPerBWP), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSemiPersistentCSI_ReportPerBWP), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousCSI_ReportsAllCC), 5, 32);
    return enc.Error();
}

ErrorCode Decode_DummyF(Decoder& dec, DummyF& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberPeriodicCSI_ReportPerBWP = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_ReportPerBWP = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberSemiPersistentCSI_ReportPerBWP = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(5, 32, tmp_value)) { goto fail; }
        value.simultaneousCSI_ReportsAllCC = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyF(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyF(DummyF& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DummyI(Encoder& enc, const DummyI& value)
{
    (void)value;
    enc.WriteBit(value.has_txSwitchImpactToRx);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSRS_TxPortSwitch), 0, 4);
    if (value.has_txSwitchImpactToRx) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txSwitchImpactToRx), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_DummyI(Decoder& dec, DummyI& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.supportedSRS_TxPortSwitch = (DummyI_SupportedSRS_TxPortSwitch)tmp_value;
    }
    if (present_0) {
        value.txSwitchImpactToRx = (DummyI_TxSwitchImpactToRx)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DummyI(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DummyI(DummyI& value)
{
    if (value.has_txSwitchImpactToRx) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(Encoder& enc, const FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 2);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 2);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 2);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(Decoder& dec, FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz = (FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_15kHz)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz = (FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_30kHz)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz = (FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_60kHz)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_120kHz = (FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot_Scs_120kHz)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink(Encoder& enc, const FeatureSetUplink& value)
{
    (void)value;
    enc.WriteBit(value.has_scalingFactor);
    enc.WriteBit(value.has_dummy3);
    enc.WriteBit(value.has_intraBandFreqSeparationUL);
    enc.WriteBit(value.has_searchSpaceSharingCA_UL);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_supportedSRS_Resources);
    enc.WriteBit(value.has_twoPUCCH_Group);
    enc.WriteBit(value.has_dynamicSwitchSUL);
    enc.WriteBit(value.has_simultaneousTxSUL_NonSUL);
    enc.WriteBit(value.has_pusch_ProcessingType1_DifferentTB_PerSlot);
    enc.WriteBit(value.has_dummy2);
enc.WriteConstrainedLength(value.featureSetListPerUplinkCC_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetListPerUplinkCC_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.featureSetListPerUplinkCC_items[i]), 1, 1024);
}
    if (value.has_scalingFactor) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scalingFactor), 0, 2);
    }
    if (value.has_dummy3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy3), 0, 0);
    }
    if (value.has_intraBandFreqSeparationUL) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.intraBandFreqSeparationUL);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 3) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 2);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 3));
            }
        }
    }
    if (value.has_searchSpaceSharingCA_UL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSharingCA_UL), 0, 0);
    }
    if (value.has_dummy1) {
        Encode_DummyI(enc, value.dummy1);
    }
    if (value.has_supportedSRS_Resources) {
        Encode_SRS_Resources(enc, value.supportedSRS_Resources);
    }
    if (value.has_twoPUCCH_Group) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Group), 0, 0);
    }
    if (value.has_dynamicSwitchSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSwitchSUL), 0, 0);
    }
    if (value.has_simultaneousTxSUL_NonSUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousTxSUL_NonSUL), 0, 0);
    }
    if (value.has_pusch_ProcessingType1_DifferentTB_PerSlot) {
        Encode_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(enc, value.pusch_ProcessingType1_DifferentTB_PerSlot);
    }
    if (value.has_dummy2) {
        Encode_DummyF(enc, value.dummy2);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink(Decoder& dec, FeatureSetUplink& value)
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
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetListPerUplinkCC_count)) { goto fail; }
if (value.featureSetListPerUplinkCC_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetListPerUplinkCC_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetListPerUplinkCC_count > 0u) {
    value.featureSetListPerUplinkCC_items = (FeatureSetUplinkPerCC_Id*)std::malloc((std::size_t)value.featureSetListPerUplinkCC_count * sizeof(FeatureSetUplinkPerCC_Id));
    if (value.featureSetListPerUplinkCC_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetListPerUplinkCC_items, 0, (std::size_t)value.featureSetListPerUplinkCC_count * sizeof(FeatureSetUplinkPerCC_Id));
}
for (std::uint32_t i = 0; i < value.featureSetListPerUplinkCC_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.featureSetListPerUplinkCC_items[i] = (FeatureSetUplinkPerCC_Id)tmp_value;
}
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scalingFactor = (FeatureSetUplink_ScalingFactor)tmp_value;
    }
    if (present_1) {
        value.dummy3 = (FeatureSetUplink_Dummy3)0;
    }
    if (present_2) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)3 + (std::int64_t)extension_index;
        }
        value.intraBandFreqSeparationUL = (FreqSeparationClass)enum_value;
    }
    if (present_3) {
        value.searchSpaceSharingCA_UL = (FeatureSetUplink_SearchSpaceSharingCA_UL)0;
    }
    if (present_4) {
        if (Decode_DummyI(dec, value.dummy1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_SRS_Resources(dec, value.supportedSRS_Resources) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.twoPUCCH_Group = (FeatureSetUplink_TwoPUCCH_Group)0;
    }
    if (present_7) {
        value.dynamicSwitchSUL = (FeatureSetUplink_DynamicSwitchSUL)0;
    }
    if (present_8) {
        value.simultaneousTxSUL_NonSUL = (FeatureSetUplink_SimultaneousTxSUL_NonSUL)0;
    }
    if (present_9) {
        if (Decode_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(dec, value.pusch_ProcessingType1_DifferentTB_PerSlot) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_DummyF(dec, value.dummy2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink(FeatureSetUplink& value)
{
    if (value.featureSetListPerUplinkCC_items != nullptr) {
        for (std::uint32_t i = 0; i < value.featureSetListPerUplinkCC_count; ++i) {
        }
        std::free(value.featureSetListPerUplinkCC_items);
        value.featureSetListPerUplinkCC_items = nullptr;
    }
    value.featureSetListPerUplinkCC_count = 0;
    if (value.has_scalingFactor) {
    }
    if (value.has_dummy3) {
    }
    if (value.has_intraBandFreqSeparationUL) {
    }
    if (value.has_searchSpaceSharingCA_UL) {
    }
    if (value.has_dummy1) {
        Free_DummyI(value.dummy1);
    }
    if (value.has_supportedSRS_Resources) {
        Free_SRS_Resources(value.supportedSRS_Resources);
    }
    if (value.has_twoPUCCH_Group) {
    }
    if (value.has_dynamicSwitchSUL) {
    }
    if (value.has_simultaneousTxSUL_NonSUL) {
    }
    if (value.has_pusch_ProcessingType1_DifferentTB_PerSlot) {
        Free_FeatureSetUplink_Pusch_ProcessingType1_DifferentTB_PerSlot(value.pusch_ProcessingType1_DifferentTB_PerSlot);
    }
    if (value.has_dummy2) {
        Free_DummyF(value.dummy2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1540_Pusch_ProcessingType2(Encoder& enc, const FeatureSetUplink_v1540_Pusch_ProcessingType2& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        Encode_ProcessingParameters(enc, value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Encode_ProcessingParameters(enc, value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Encode_ProcessingParameters(enc, value.scs_60kHz);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1540_Pusch_ProcessingType2(Decoder& dec, FeatureSetUplink_v1540_Pusch_ProcessingType2& value)
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
        if (Decode_ProcessingParameters(dec, value.scs_15kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ProcessingParameters(dec, value.scs_30kHz) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_ProcessingParameters(dec, value.scs_60kHz) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1540_Pusch_ProcessingType2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1540_Pusch_ProcessingType2(FeatureSetUplink_v1540_Pusch_ProcessingType2& value)
{
    if (value.has_scs_15kHz) {
        Free_ProcessingParameters(value.scs_15kHz);
    }
    if (value.has_scs_30kHz) {
        Free_ProcessingParameters(value.scs_30kHz);
    }
    if (value.has_scs_60kHz) {
        Free_ProcessingParameters(value.scs_60kHz);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1540(Encoder& enc, const FeatureSetUplink_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_zeroSlotOffsetAperiodicSRS);
    enc.WriteBit(value.has_pa_PhaseDiscontinuityImpacts);
    enc.WriteBit(value.has_pusch_SeparationWithGap);
    enc.WriteBit(value.has_pusch_ProcessingType2);
    enc.WriteBit(value.has_ul_MCS_TableAlt_DynamicIndication);
    if (value.has_zeroSlotOffsetAperiodicSRS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.zeroSlotOffsetAperiodicSRS), 0, 0);
    }
    if (value.has_pa_PhaseDiscontinuityImpacts) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pa_PhaseDiscontinuityImpacts), 0, 0);
    }
    if (value.has_pusch_SeparationWithGap) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_SeparationWithGap), 0, 0);
    }
    if (value.has_pusch_ProcessingType2) {
        Encode_FeatureSetUplink_v1540_Pusch_ProcessingType2(enc, value.pusch_ProcessingType2);
    }
    if (value.has_ul_MCS_TableAlt_DynamicIndication) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_MCS_TableAlt_DynamicIndication), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1540(Decoder& dec, FeatureSetUplink_v1540& value)
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
        value.zeroSlotOffsetAperiodicSRS = (FeatureSetUplink_v1540_ZeroSlotOffsetAperiodicSRS)0;
    }
    if (present_1) {
        value.pa_PhaseDiscontinuityImpacts = (FeatureSetUplink_v1540_Pa_PhaseDiscontinuityImpacts)0;
    }
    if (present_2) {
        value.pusch_SeparationWithGap = (FeatureSetUplink_v1540_Pusch_SeparationWithGap)0;
    }
    if (present_3) {
        if (Decode_FeatureSetUplink_v1540_Pusch_ProcessingType2(dec, value.pusch_ProcessingType2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.ul_MCS_TableAlt_DynamicIndication = (FeatureSetUplink_v1540_Ul_MCS_TableAlt_DynamicIndication)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1540(FeatureSetUplink_v1540& value)
{
    if (value.has_zeroSlotOffsetAperiodicSRS) {
    }
    if (value.has_pa_PhaseDiscontinuityImpacts) {
    }
    if (value.has_pusch_SeparationWithGap) {
    }
    if (value.has_pusch_ProcessingType2) {
        Free_FeatureSetUplink_v1540_Pusch_ProcessingType2(value.pusch_ProcessingType2);
    }
    if (value.has_ul_MCS_TableAlt_DynamicIndication) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_PosResources_r16(Encoder& enc, const SRS_PosResources_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_PosResourceSetPerBWP_r16), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_PosResourcesPerBWP_r16), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcesPerBWP_PerSlot_r16), 0, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_PosResourcesPerBWP_r16), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16), 0, 9);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResources_r16(Decoder& dec, SRS_PosResources_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberSRS_PosResourceSetPerBWP_r16 = (SRS_PosResources_r16_MaxNumberSRS_PosResourceSetPerBWP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberSRS_PosResourcesPerBWP_r16 = (SRS_PosResources_r16_MaxNumberSRS_PosResourcesPerBWP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcesPerBWP_PerSlot_r16 = (SRS_PosResources_r16_MaxNumberSRS_ResourcesPerBWP_PerSlot_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_PosResourcesPerBWP_r16 = (SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16 = (SRS_PosResources_r16_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResources_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResources_r16(SRS_PosResources_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_PosResourceAP_r16(Encoder& enc, const SRS_PosResourceAP_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAP_SRS_PosResourcesPerBWP_r16), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16), 0, 9);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceAP_r16(Decoder& dec, SRS_PosResourceAP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberAP_SRS_PosResourcesPerBWP_r16 = (SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16 = (SRS_PosResourceAP_r16_MaxNumberAP_SRS_PosResourcesPerBWP_PerSlot_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceAP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceAP_r16(SRS_PosResourceAP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_PosResourceSP_r16(Encoder& enc, const SRS_PosResourceSP_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSP_SRS_PosResourcesPerBWP_r16), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16), 0, 9);
    return enc.Error();
}

ErrorCode Decode_SRS_PosResourceSP_r16(Decoder& dec, SRS_PosResourceSP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberSP_SRS_PosResourcesPerBWP_r16 = (SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16 = (SRS_PosResourceSP_r16_MaxNumberSP_SRS_PosResourcesPerBWP_PerSlot_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_PosResourceSP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PosResourceSP_r16(SRS_PosResourceSP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_AllPosResources_r16(Encoder& enc, const SRS_AllPosResources_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_PosResourceAP_r16);
    enc.WriteBit(value.has_srs_PosResourceSP_r16);
    Encode_SRS_PosResources_r16(enc, value.srs_PosResources_r16);
    if (value.has_srs_PosResourceAP_r16) {
        Encode_SRS_PosResourceAP_r16(enc, value.srs_PosResourceAP_r16);
    }
    if (value.has_srs_PosResourceSP_r16) {
        Encode_SRS_PosResourceSP_r16(enc, value.srs_PosResourceSP_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_AllPosResources_r16(Decoder& dec, SRS_AllPosResources_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SRS_PosResources_r16(dec, value.srs_PosResources_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SRS_PosResourceAP_r16(dec, value.srs_PosResourceAP_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SRS_PosResourceSP_r16(dec, value.srs_PosResourceSP_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_AllPosResources_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_AllPosResources_r16(SRS_AllPosResources_r16& value)
{
    Free_SRS_PosResources_r16(value.srs_PosResources_r16);
    if (value.has_srs_PosResourceAP_r16) {
        Free_SRS_PosResourceAP_r16(value.srs_PosResourceAP_r16);
    }
    if (value.has_srs_PosResourceSP_r16) {
        Free_SRS_PosResourceSP_r16(value.srs_PosResourceSP_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(Encoder& enc, const FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUSCH_Tx_r16), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.hoppingScheme_r16), 0, 2);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(Decoder& dec, FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberPUSCH_Tx_r16 = (FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_MaxNumberPUSCH_Tx_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.hoppingScheme_r16 = (FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16_HoppingScheme_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(Encoder& enc, const FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r16), 0, 3);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r16), 0, 3);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 3);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(Decoder& dec, FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16& value)
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
        value.scs_15kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_30kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_120kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16_Scs_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16& value)
{
    if (value.has_scs_15kHz_r16) {
    }
    if (value.has_scs_30kHz_r16) {
    }
    if (value.has_scs_60kHz_r16) {
    }
    if (value.has_scs_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(Encoder& enc, const FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r16), 0, 3);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r16), 0, 3);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 3);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r16), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(Decoder& dec, FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16& value)
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
        value.scs_15kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_30kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_60kHz_r16)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.scs_120kHz_r16 = (FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16_Scs_120kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16& value)
{
    if (value.has_scs_15kHz_r16) {
    }
    if (value.has_scs_30kHz_r16) {
    }
    if (value.has_scs_60kHz_r16) {
    }
    if (value.has_scs_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(Encoder& enc, const FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_intraFreqTwoTAGs_DAPS_r16);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_dummy3);
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_intraFreqTwoTAGs_DAPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraFreqTwoTAGs_DAPS_r16), 0, 0);
    }
    if (value.has_dummy1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 0);
    }
    if (value.has_dummy2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 0);
    }
    if (value.has_dummy3) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy3), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(Decoder& dec, FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16& value)
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
        value.dummy = (FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy)0;
    }
    if (present_1) {
        value.intraFreqTwoTAGs_DAPS_r16 = (FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_IntraFreqTwoTAGs_DAPS_r16)0;
    }
    if (present_2) {
        value.dummy1 = (FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy1)0;
    }
    if (present_3) {
        value.dummy2 = (FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy2)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dummy3 = (FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16_Dummy3)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16& value)
{
    if (value.has_dummy) {
    }
    if (value.has_intraFreqTwoTAGs_DAPS_r16) {
    }
    if (value.has_dummy1) {
    }
    if (value.has_dummy2) {
    }
    if (value.has_dummy3) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_MultiPUCCH_r16(Encoder& enc, const FeatureSetUplink_v1610_MultiPUCCH_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sub_SlotConfig_NCP_r16);
    enc.WriteBit(value.has_sub_SlotConfig_ECP_r16);
    if (value.has_sub_SlotConfig_NCP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sub_SlotConfig_NCP_r16), 0, 1);
    }
    if (value.has_sub_SlotConfig_ECP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sub_SlotConfig_ECP_r16), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_MultiPUCCH_r16(Decoder& dec, FeatureSetUplink_v1610_MultiPUCCH_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sub_SlotConfig_NCP_r16 = (FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_NCP_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.sub_SlotConfig_ECP_r16 = (FeatureSetUplink_v1610_MultiPUCCH_r16_Sub_SlotConfig_ECP_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_MultiPUCCH_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_MultiPUCCH_r16(FeatureSetUplink_v1610_MultiPUCCH_r16& value)
{
    if (value.has_sub_SlotConfig_NCP_r16) {
    }
    if (value.has_sub_SlotConfig_ECP_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(Encoder& enc, const FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PreparationLowPriority_r16), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PreparationHighPriority_r16), 0, 2);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(Decoder& dec, FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pusch_PreparationLowPriority_r16 = (FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationLowPriority_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pusch_PreparationHighPriority_r16 = (FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16_Pusch_PreparationHighPriority_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(Encoder& enc, const FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_120kHz_r16);
    enc.WriteBit(value.has_scs_15kHz_60kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_120kHz_r16);
    enc.WriteBit(value.has_scs_15kHz_30kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_60kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_120kHz_r16);
    if (value.has_scs_15kHz_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_120kHz_r16), 0, 2);
    }
    if (value.has_scs_15kHz_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_60kHz_r16), 0, 2);
    }
    if (value.has_scs_30kHz_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_120kHz_r16), 0, 2);
    }
    if (value.has_scs_15kHz_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_30kHz_r16), 0, 0);
    }
    if (value.has_scs_30kHz_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_60kHz_r16), 0, 0);
    }
    if (value.has_scs_60kHz_120kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_120kHz_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(Decoder& dec, FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz_120kHz_r16 = (FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_120kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz_60kHz_r16 = (FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_60kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz_120kHz_r16 = (FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_120kHz_r16)tmp_value;
    }
    if (present_3) {
        value.scs_15kHz_30kHz_r16 = (FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_15kHz_30kHz_r16)0;
    }
    if (present_4) {
        value.scs_30kHz_60kHz_r16 = (FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_30kHz_60kHz_r16)0;
    }
    if (present_5) {
        value.scs_60kHz_120kHz_r16 = (FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16_Scs_60kHz_120kHz_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16& value)
{
    if (value.has_scs_15kHz_120kHz_r16) {
    }
    if (value.has_scs_15kHz_60kHz_r16) {
    }
    if (value.has_scs_30kHz_120kHz_r16) {
    }
    if (value.has_scs_15kHz_30kHz_r16) {
    }
    if (value.has_scs_30kHz_60kHz_r16) {
    }
    if (value.has_scs_60kHz_120kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(Encoder& enc, const FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_twoPorts_r16);
    enc.WriteBit(value.has_fourPortsNonCoherent_r16);
    enc.WriteBit(value.has_fourPortsPartialCoherent_r16);
    if (value.has_twoPorts_r16) {
        enc.WriteFixedBitString(value.twoPorts_r16.bytes, value.twoPorts_r16.bitLength, 2, 2);
    }
    if (value.has_fourPortsNonCoherent_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fourPortsNonCoherent_r16), 0, 3);
    }
    if (value.has_fourPortsPartialCoherent_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fourPortsPartialCoherent_r16), 0, 6);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(Decoder& dec, FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.twoPorts_r16.bytes = string_bytes;
        value.twoPorts_r16.bitLength = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.fourPortsNonCoherent_r16 = (FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsNonCoherent_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.fourPortsPartialCoherent_r16 = (FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16_FourPortsPartialCoherent_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16& value)
{
    if (value.has_twoPorts_r16) {
        std::free(value.twoPorts_r16.bytes);
        value.twoPorts_r16.bytes = nullptr;
        value.twoPorts_r16.bitLength = 0;
    }
    if (value.has_fourPortsNonCoherent_r16) {
    }
    if (value.has_fourPortsPartialCoherent_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1610(Encoder& enc, const FeatureSetUplink_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_pusch_RepetitionTypeB_r16);
    enc.WriteBit(value.has_ul_CancellationSelfCarrier_r16);
    enc.WriteBit(value.has_ul_CancellationCrossCarrier_r16);
    enc.WriteBit(value.has_ul_FullPwrMode2_MaxSRS_ResInSet_r16);
    enc.WriteBit(value.has_cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16);
    enc.WriteBit(value.has_cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16);
    enc.WriteBit(value.has_supportedSRS_PosResources_r16);
    enc.WriteBit(value.has_intraFreqDAPS_UL_r16);
    enc.WriteBit(value.has_intraBandFreqSeparationUL_v1620);
    enc.WriteBit(value.has_multiPUCCH_r16);
    enc.WriteBit(value.has_twoPUCCH_Type1_r16);
    enc.WriteBit(value.has_twoPUCCH_Type2_r16);
    enc.WriteBit(value.has_twoPUCCH_Type3_r16);
    enc.WriteBit(value.has_twoPUCCH_Type4_r16);
    enc.WriteBit(value.has_mux_SR_HARQ_ACK_r16);
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_dummy2);
    enc.WriteBit(value.has_twoPUCCH_Type5_r16);
    enc.WriteBit(value.has_twoPUCCH_Type6_r16);
    enc.WriteBit(value.has_twoPUCCH_Type7_r16);
    enc.WriteBit(value.has_twoPUCCH_Type8_r16);
    enc.WriteBit(value.has_twoPUCCH_Type9_r16);
    enc.WriteBit(value.has_twoPUCCH_Type10_r16);
    enc.WriteBit(value.has_twoPUCCH_Type11_r16);
    enc.WriteBit(value.has_ul_IntraUE_Mux_r16);
    enc.WriteBit(value.has_ul_FullPwrMode_r16);
    enc.WriteBit(value.has_crossCarrierSchedulingProcessing_DiffSCS_r16);
    enc.WriteBit(value.has_ul_FullPwrMode1_r16);
    enc.WriteBit(value.has_ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16);
    enc.WriteBit(value.has_ul_FullPwrMode2_TPMIGroup_r16);
    if (value.has_pusch_RepetitionTypeB_r16) {
        Encode_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(enc, value.pusch_RepetitionTypeB_r16);
    }
    if (value.has_ul_CancellationSelfCarrier_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_CancellationSelfCarrier_r16), 0, 0);
    }
    if (value.has_ul_CancellationCrossCarrier_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_CancellationCrossCarrier_r16), 0, 0);
    }
    if (value.has_ul_FullPwrMode2_MaxSRS_ResInSet_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrMode2_MaxSRS_ResInSet_r16), 0, 2);
    }
    if (value.has_cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16) {
        Encode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(enc, value.cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16);
    }
    if (value.has_cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16) {
        Encode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(enc, value.cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16);
    }
    if (value.has_supportedSRS_PosResources_r16) {
        Encode_SRS_AllPosResources_r16(enc, value.supportedSRS_PosResources_r16);
    }
    if (value.has_intraFreqDAPS_UL_r16) {
        Encode_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(enc, value.intraFreqDAPS_UL_r16);
    }
    if (value.has_intraBandFreqSeparationUL_v1620) {
        enc.WriteConstrainedInteger((std::int64_t)(value.intraBandFreqSeparationUL_v1620), 0, 0);
    }
    if (value.has_multiPUCCH_r16) {
        Encode_FeatureSetUplink_v1610_MultiPUCCH_r16(enc, value.multiPUCCH_r16);
    }
    if (value.has_twoPUCCH_Type1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type1_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type2_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type3_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type3_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type4_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type4_r16), 0, 0);
    }
    if (value.has_mux_SR_HARQ_ACK_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_SR_HARQ_ACK_r16), 0, 0);
    }
    if (value.has_dummy1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 0);
    }
    if (value.has_dummy2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 0);
    }
    if (value.has_twoPUCCH_Type5_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type5_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type6_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type6_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type7_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type7_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type8_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type8_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type9_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type9_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type10_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type10_r16), 0, 0);
    }
    if (value.has_twoPUCCH_Type11_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUCCH_Type11_r16), 0, 0);
    }
    if (value.has_ul_IntraUE_Mux_r16) {
        Encode_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(enc, value.ul_IntraUE_Mux_r16);
    }
    if (value.has_ul_FullPwrMode_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrMode_r16), 0, 0);
    }
    if (value.has_crossCarrierSchedulingProcessing_DiffSCS_r16) {
        Encode_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(enc, value.crossCarrierSchedulingProcessing_DiffSCS_r16);
    }
    if (value.has_ul_FullPwrMode1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrMode1_r16), 0, 0);
    }
    if (value.has_ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16), 0, 2);
    }
    if (value.has_ul_FullPwrMode2_TPMIGroup_r16) {
        Encode_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(enc, value.ul_FullPwrMode2_TPMIGroup_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1610(Decoder& dec, FeatureSetUplink_v1610& value)
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
    bool present_24 = false;
    bool present_25 = false;
    bool present_26 = false;
    bool present_27 = false;
    bool present_28 = false;
    bool present_29 = false;
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
    if (!dec.ReadBit(present_25)) { goto fail; }
    if (!dec.ReadBit(present_26)) { goto fail; }
    if (!dec.ReadBit(present_27)) { goto fail; }
    if (!dec.ReadBit(present_28)) { goto fail; }
    if (!dec.ReadBit(present_29)) { goto fail; }
    if (present_0) {
        if (Decode_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(dec, value.pusch_RepetitionTypeB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.ul_CancellationSelfCarrier_r16 = (FeatureSetUplink_v1610_Ul_CancellationSelfCarrier_r16)0;
    }
    if (present_2) {
        value.ul_CancellationCrossCarrier_r16 = (FeatureSetUplink_v1610_Ul_CancellationCrossCarrier_r16)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ul_FullPwrMode2_MaxSRS_ResInSet_r16 = (FeatureSetUplink_v1610_Ul_FullPwrMode2_MaxSRS_ResInSet_r16)tmp_value;
    }
    if (present_4) {
        if (Decode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(dec, value.cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(dec, value.cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_SRS_AllPosResources_r16(dec, value.supportedSRS_PosResources_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(dec, value.intraFreqDAPS_UL_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.intraBandFreqSeparationUL_v1620 = (FreqSeparationClassUL_v1620)0;
    }
    if (present_9) {
        if (Decode_FeatureSetUplink_v1610_MultiPUCCH_r16(dec, value.multiPUCCH_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        value.twoPUCCH_Type1_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type1_r16)0;
    }
    if (present_11) {
        value.twoPUCCH_Type2_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type2_r16)0;
    }
    if (present_12) {
        value.twoPUCCH_Type3_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type3_r16)0;
    }
    if (present_13) {
        value.twoPUCCH_Type4_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type4_r16)0;
    }
    if (present_14) {
        value.mux_SR_HARQ_ACK_r16 = (FeatureSetUplink_v1610_Mux_SR_HARQ_ACK_r16)0;
    }
    if (present_15) {
        value.dummy1 = (FeatureSetUplink_v1610_Dummy1)0;
    }
    if (present_16) {
        value.dummy2 = (FeatureSetUplink_v1610_Dummy2)0;
    }
    if (present_17) {
        value.twoPUCCH_Type5_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type5_r16)0;
    }
    if (present_18) {
        value.twoPUCCH_Type6_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type6_r16)0;
    }
    if (present_19) {
        value.twoPUCCH_Type7_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type7_r16)0;
    }
    if (present_20) {
        value.twoPUCCH_Type8_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type8_r16)0;
    }
    if (present_21) {
        value.twoPUCCH_Type9_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type9_r16)0;
    }
    if (present_22) {
        value.twoPUCCH_Type10_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type10_r16)0;
    }
    if (present_23) {
        value.twoPUCCH_Type11_r16 = (FeatureSetUplink_v1610_TwoPUCCH_Type11_r16)0;
    }
    if (present_24) {
        if (Decode_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(dec, value.ul_IntraUE_Mux_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_25) {
        value.ul_FullPwrMode_r16 = (FeatureSetUplink_v1610_Ul_FullPwrMode_r16)0;
    }
    if (present_26) {
        if (Decode_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(dec, value.crossCarrierSchedulingProcessing_DiffSCS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_27) {
        value.ul_FullPwrMode1_r16 = (FeatureSetUplink_v1610_Ul_FullPwrMode1_r16)0;
    }
    if (present_28) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16 = (FeatureSetUplink_v1610_Ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16)tmp_value;
    }
    if (present_29) {
        if (Decode_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(dec, value.ul_FullPwrMode2_TPMIGroup_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1610(FeatureSetUplink_v1610& value)
{
    if (value.has_pusch_RepetitionTypeB_r16) {
        Free_FeatureSetUplink_v1610_Pusch_RepetitionTypeB_r16(value.pusch_RepetitionTypeB_r16);
    }
    if (value.has_ul_CancellationSelfCarrier_r16) {
    }
    if (value.has_ul_CancellationCrossCarrier_r16) {
    }
    if (value.has_ul_FullPwrMode2_MaxSRS_ResInSet_r16) {
    }
    if (value.has_cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16) {
        Free_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16(value.cbgPUSCH_ProcessingType1_DifferentTB_PerSlot_r16);
    }
    if (value.has_cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16) {
        Free_FeatureSetUplink_v1610_CbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16(value.cbgPUSCH_ProcessingType2_DifferentTB_PerSlot_r16);
    }
    if (value.has_supportedSRS_PosResources_r16) {
        Free_SRS_AllPosResources_r16(value.supportedSRS_PosResources_r16);
    }
    if (value.has_intraFreqDAPS_UL_r16) {
        Free_FeatureSetUplink_v1610_IntraFreqDAPS_UL_r16(value.intraFreqDAPS_UL_r16);
    }
    if (value.has_intraBandFreqSeparationUL_v1620) {
    }
    if (value.has_multiPUCCH_r16) {
        Free_FeatureSetUplink_v1610_MultiPUCCH_r16(value.multiPUCCH_r16);
    }
    if (value.has_twoPUCCH_Type1_r16) {
    }
    if (value.has_twoPUCCH_Type2_r16) {
    }
    if (value.has_twoPUCCH_Type3_r16) {
    }
    if (value.has_twoPUCCH_Type4_r16) {
    }
    if (value.has_mux_SR_HARQ_ACK_r16) {
    }
    if (value.has_dummy1) {
    }
    if (value.has_dummy2) {
    }
    if (value.has_twoPUCCH_Type5_r16) {
    }
    if (value.has_twoPUCCH_Type6_r16) {
    }
    if (value.has_twoPUCCH_Type7_r16) {
    }
    if (value.has_twoPUCCH_Type8_r16) {
    }
    if (value.has_twoPUCCH_Type9_r16) {
    }
    if (value.has_twoPUCCH_Type10_r16) {
    }
    if (value.has_twoPUCCH_Type11_r16) {
    }
    if (value.has_ul_IntraUE_Mux_r16) {
        Free_FeatureSetUplink_v1610_Ul_IntraUE_Mux_r16(value.ul_IntraUE_Mux_r16);
    }
    if (value.has_ul_FullPwrMode_r16) {
    }
    if (value.has_crossCarrierSchedulingProcessing_DiffSCS_r16) {
        Free_FeatureSetUplink_v1610_CrossCarrierSchedulingProcessing_DiffSCS_r16(value.crossCarrierSchedulingProcessing_DiffSCS_r16);
    }
    if (value.has_ul_FullPwrMode1_r16) {
    }
    if (value.has_ul_FullPwrMode2_SRSConfig_diffNumSRSPorts_r16) {
    }
    if (value.has_ul_FullPwrMode2_TPMIGroup_r16) {
        Free_FeatureSetUplink_v1610_Ul_FullPwrMode2_TPMIGroup_r16(value.ul_FullPwrMode2_TPMIGroup_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1630(Encoder& enc, const FeatureSetUplink_v1630& value)
{
    (void)value;
    enc.WriteBit(value.has_offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16);
    enc.WriteBit(value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16);
    enc.WriteBit(value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16);
    enc.WriteBit(value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_partialCancellationPUCCH_PUSCH_PRACH_TX_r16);
    if (value.has_offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16), 0, 0);
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16), 0, 0);
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16), 0, 0);
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16), 0, 0);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_partialCancellationPUCCH_PUSCH_PRACH_TX_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.partialCancellationPUCCH_PUSCH_PRACH_TX_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1630(Decoder& dec, FeatureSetUplink_v1630& value)
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
        value.offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16 = (FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_Ant_Switch_fr1_r16)0;
    }
    if (present_1) {
        value.offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16 = (FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16)0;
    }
    if (present_2) {
        value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16 = (FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16)0;
    }
    if (present_3) {
        value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16 = (FeatureSetUplink_v1630_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16)0;
    }
    if (present_4) {
        value.dummy = (FeatureSetUplink_v1630_Dummy)0;
    }
    if (present_5) {
        value.partialCancellationPUCCH_PUSCH_PRACH_TX_r16 = (FeatureSetUplink_v1630_PartialCancellationPUCCH_PUSCH_PRACH_TX_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1630(FeatureSetUplink_v1630& value)
{
    if (value.has_offsetSRS_CB_PUSCH_Ant_Switch_fr1_r16) {
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorSingleOcc_fr1_r16) {
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithoutGap_fr1_r16) {
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithGap_fr1_r16) {
    }
    if (value.has_dummy) {
    }
    if (value.has_partialCancellationPUCCH_PUSCH_PRACH_TX_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SubSlot_Config_r16(Encoder& enc, const SubSlot_Config_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sub_SlotConfig_NCP_r16);
    enc.WriteBit(value.has_sub_SlotConfig_ECP_r16);
    if (value.has_sub_SlotConfig_NCP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sub_SlotConfig_NCP_r16), 0, 3);
    }
    if (value.has_sub_SlotConfig_ECP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sub_SlotConfig_ECP_r16), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_SubSlot_Config_r16(Decoder& dec, SubSlot_Config_r16& value)
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
        value.sub_SlotConfig_NCP_r16 = (SubSlot_Config_r16_Sub_SlotConfig_NCP_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.sub_SlotConfig_ECP_r16 = (SubSlot_Config_r16_Sub_SlotConfig_ECP_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SubSlot_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SubSlot_Config_r16(SubSlot_Config_r16& value)
{
    if (value.has_sub_SlotConfig_NCP_r16) {
    }
    if (value.has_sub_SlotConfig_ECP_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(Encoder& enc, const FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r16), 0, 2);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r16), 0, 2);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r16), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(Decoder& dec, FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz_r16 = (FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_15kHz_r16)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_30kHz_r16 = (FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_30kHz_r16)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_60kHz_r16 = (FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16_Scs_60kHz_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16& value)
{
    if (value.has_scs_15kHz_r16) {
    }
    if (value.has_scs_30kHz_r16) {
    }
    if (value.has_scs_60kHz_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1640(Encoder& enc, const FeatureSetUplink_v1640& value)
{
    (void)value;
    enc.WriteBit(value.has_twoHARQ_ACK_Codebook_type1_r16);
    enc.WriteBit(value.has_twoHARQ_ACK_Codebook_type2_r16);
    enc.WriteBit(value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16);
    if (value.has_twoHARQ_ACK_Codebook_type1_r16) {
        Encode_SubSlot_Config_r16(enc, value.twoHARQ_ACK_Codebook_type1_r16);
    }
    if (value.has_twoHARQ_ACK_Codebook_type2_r16) {
        Encode_SubSlot_Config_r16(enc, value.twoHARQ_ACK_Codebook_type2_r16);
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16) {
        Encode_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(enc, value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1640(Decoder& dec, FeatureSetUplink_v1640& value)
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
        if (Decode_SubSlot_Config_r16(dec, value.twoHARQ_ACK_Codebook_type1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SubSlot_Config_r16(dec, value.twoHARQ_ACK_Codebook_type2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(dec, value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1640(FeatureSetUplink_v1640& value)
{
    if (value.has_twoHARQ_ACK_Codebook_type1_r16) {
        Free_SubSlot_Config_r16(value.twoHARQ_ACK_Codebook_type1_r16);
    }
    if (value.has_twoHARQ_ACK_Codebook_type2_r16) {
        Free_SubSlot_Config_r16(value.twoHARQ_ACK_Codebook_type2_r16);
    }
    if (value.has_offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16) {
        Free_FeatureSetUplink_v1640_OffsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16(value.offsetSRS_CB_PUSCH_PDCCH_MonitorAnyOccWithSpanGap_fr1_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(Encoder& enc, const FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUSCH_Tx_Cap1_r16), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUSCH_Tx_Cap2_r16), 0, 5);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(Decoder& dec, FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberPUSCH_Tx_Cap1_r16 = (FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap1_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberPUSCH_Tx_Cap2_r16 = (FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0_MaxNumberPUSCH_Tx_Cap2_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v16d0(Encoder& enc, const FeatureSetUplink_v16d0& value)
{
    (void)value;
    enc.WriteBit(value.has_pusch_RepetitionTypeB_v16d0);
    if (value.has_pusch_RepetitionTypeB_v16d0) {
        Encode_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(enc, value.pusch_RepetitionTypeB_v16d0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v16d0(Decoder& dec, FeatureSetUplink_v16d0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(dec, value.pusch_RepetitionTypeB_v16d0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v16d0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v16d0(FeatureSetUplink_v16d0& value)
{
    if (value.has_pusch_RepetitionTypeB_v16d0) {
        Free_FeatureSetUplink_v16d0_Pusch_RepetitionTypeB_v16d0(value.pusch_RepetitionTypeB_v16d0);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1710(Encoder& enc, const FeatureSetUplink_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_mTRP_PUSCH_TypeA_CB_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_RepetitionTypeA_r17);
    enc.WriteBit(value.has_mTRP_PUCCH_IntraSlot_r17);
    enc.WriteBit(value.has_srs_AntennaSwitching2SP_1Periodic_r17);
    enc.WriteBit(value.has_srs_ExtensionAperiodicSRS_r17);
    enc.WriteBit(value.has_srs_OneAP_SRS_r17);
    enc.WriteBit(value.has_ue_PowerClassPerBandPerBC_r17);
    enc.WriteBit(value.has_tx_Support_UL_GapFR2_r17);
    if (value.has_mTRP_PUSCH_TypeA_CB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_TypeA_CB_r17), 0, 2);
    }
    if (value.has_mTRP_PUSCH_RepetitionTypeA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_RepetitionTypeA_r17), 0, 3);
    }
    if (value.has_mTRP_PUCCH_IntraSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUCCH_IntraSlot_r17), 0, 2);
    }
    if (value.has_srs_AntennaSwitching2SP_1Periodic_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_AntennaSwitching2SP_1Periodic_r17), 0, 0);
    }
    if (value.has_srs_ExtensionAperiodicSRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_ExtensionAperiodicSRS_r17), 0, 0);
    }
    if (value.has_srs_OneAP_SRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_OneAP_SRS_r17), 0, 0);
    }
    if (value.has_ue_PowerClassPerBandPerBC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_PowerClassPerBandPerBC_r17), 0, 2);
    }
    if (value.has_tx_Support_UL_GapFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tx_Support_UL_GapFR2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1710(Decoder& dec, FeatureSetUplink_v1710& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mTRP_PUSCH_TypeA_CB_r17 = (FeatureSetUplink_v1710_MTRP_PUSCH_TypeA_CB_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mTRP_PUSCH_RepetitionTypeA_r17 = (FeatureSetUplink_v1710_MTRP_PUSCH_RepetitionTypeA_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mTRP_PUCCH_IntraSlot_r17 = (FeatureSetUplink_v1710_MTRP_PUCCH_IntraSlot_r17)tmp_value;
    }
    if (present_3) {
        value.srs_AntennaSwitching2SP_1Periodic_r17 = (FeatureSetUplink_v1710_Srs_AntennaSwitching2SP_1Periodic_r17)0;
    }
    if (present_4) {
        value.srs_ExtensionAperiodicSRS_r17 = (FeatureSetUplink_v1710_Srs_ExtensionAperiodicSRS_r17)0;
    }
    if (present_5) {
        value.srs_OneAP_SRS_r17 = (FeatureSetUplink_v1710_Srs_OneAP_SRS_r17)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ue_PowerClassPerBandPerBC_r17 = (FeatureSetUplink_v1710_Ue_PowerClassPerBandPerBC_r17)tmp_value;
    }
    if (present_7) {
        value.tx_Support_UL_GapFR2_r17 = (FeatureSetUplink_v1710_Tx_Support_UL_GapFR2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1710(FeatureSetUplink_v1710& value)
{
    if (value.has_mTRP_PUSCH_TypeA_CB_r17) {
    }
    if (value.has_mTRP_PUSCH_RepetitionTypeA_r17) {
    }
    if (value.has_mTRP_PUCCH_IntraSlot_r17) {
    }
    if (value.has_srs_AntennaSwitching2SP_1Periodic_r17) {
    }
    if (value.has_srs_ExtensionAperiodicSRS_r17) {
    }
    if (value.has_srs_OneAP_SRS_r17) {
    }
    if (value.has_ue_PowerClassPerBandPerBC_r17) {
    }
    if (value.has_tx_Support_UL_GapFR2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(Encoder& enc, const FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    enc.WriteBit(value.has_scs_60kHz_r17);
    enc.WriteBit(value.has_scs_120kHz_r17);
    if (value.has_scs_15kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r17), 0, 2);
    }
    if (value.has_scs_30kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r17), 0, 4);
    }
    if (value.has_scs_60kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r17), 0, 8);
    }
    if (value.has_scs_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r17), 0, 16);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(Decoder& dec, FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.scs_15kHz_r17 = (FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_15kHz_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_30kHz_r17 = (FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_30kHz_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.scs_60kHz_r17 = (FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_60kHz_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16, tmp_value)) { goto fail; }
        value.scs_120kHz_r17 = (FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17_Scs_120kHz_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17& value)
{
    if (value.has_scs_15kHz_r17) {
    }
    if (value.has_scs_30kHz_r17) {
    }
    if (value.has_scs_60kHz_r17) {
    }
    if (value.has_scs_120kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(Encoder& enc, const FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PreparationLowPriority_r17), 0, 2);
    Encode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(enc, value.additionalCancellationTime_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCarriers_r17), 1, 16);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(Decoder& dec, FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pusch_PreparationLowPriority_r17 = (FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_Pusch_PreparationLowPriority_r17)tmp_value;
    }
    {
        if (Decode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(dec, value.additionalCancellationTime_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.maxNumberCarriers_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17& value)
{
    Free_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17_AdditionalCancellationTime_r17(value.additionalCancellationTime_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1720(Encoder& enc, const FeatureSetUplink_v1720& value)
{
    (void)value;
    enc.WriteBit(value.has_pucch_Repetition_F0_1_2_3_4_RRC_Config_r17);
    enc.WriteBit(value.has_pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17);
    enc.WriteBit(value.has_interSubslotFreqHopping_PUCCH_r17);
    enc.WriteBit(value.has_semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17);
    enc.WriteBit(value.has_phy_PrioritizationLowPriorityDG_HighPriorityCG_r17);
    enc.WriteBit(value.has_phy_PrioritizationHighPriorityDG_LowPriorityCG_r17);
    enc.WriteBit(value.has_extendedDC_LocationReport_r17);
    if (value.has_pucch_Repetition_F0_1_2_3_4_RRC_Config_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Repetition_F0_1_2_3_4_RRC_Config_r17), 0, 0);
    }
    if (value.has_pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17), 0, 0);
    }
    if (value.has_interSubslotFreqHopping_PUCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interSubslotFreqHopping_PUCCH_r17), 0, 0);
    }
    if (value.has_semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17), 0, 0);
    }
    if (value.has_phy_PrioritizationLowPriorityDG_HighPriorityCG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.phy_PrioritizationLowPriorityDG_HighPriorityCG_r17), 1, 16);
    }
    if (value.has_phy_PrioritizationHighPriorityDG_LowPriorityCG_r17) {
        Encode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(enc, value.phy_PrioritizationHighPriorityDG_LowPriorityCG_r17);
    }
    if (value.has_extendedDC_LocationReport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedDC_LocationReport_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1720(Decoder& dec, FeatureSetUplink_v1720& value)
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
        value.pucch_Repetition_F0_1_2_3_4_RRC_Config_r17 = (FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_RRC_Config_r17)0;
    }
    if (present_1) {
        value.pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17 = (FeatureSetUplink_v1720_Pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17)0;
    }
    if (present_2) {
        value.interSubslotFreqHopping_PUCCH_r17 = (FeatureSetUplink_v1720_InterSubslotFreqHopping_PUCCH_r17)0;
    }
    if (present_3) {
        value.semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17 = (FeatureSetUplink_v1720_SemiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.phy_PrioritizationLowPriorityDG_HighPriorityCG_r17 = (int64_t)tmp_value;
    }
    if (present_5) {
        if (Decode_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(dec, value.phy_PrioritizationHighPriorityDG_LowPriorityCG_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.extendedDC_LocationReport_r17 = (FeatureSetUplink_v1720_ExtendedDC_LocationReport_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1720(FeatureSetUplink_v1720& value)
{
    if (value.has_pucch_Repetition_F0_1_2_3_4_RRC_Config_r17) {
    }
    if (value.has_pucch_Repetition_F0_1_2_3_4_DynamicIndication_r17) {
    }
    if (value.has_interSubslotFreqHopping_PUCCH_r17) {
    }
    if (value.has_semiStaticHARQ_ACK_CodebookSub_SlotPUCCH_r17) {
    }
    if (value.has_phy_PrioritizationLowPriorityDG_HighPriorityCG_r17) {
    }
    if (value.has_phy_PrioritizationHighPriorityDG_LowPriorityCG_r17) {
        Free_FeatureSetUplink_v1720_Phy_PrioritizationHighPriorityDG_LowPriorityCG_r17(value.phy_PrioritizationHighPriorityDG_LowPriorityCG_r17);
    }
    if (value.has_extendedDC_LocationReport_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSRS_BWA_RRC_Connected_r18(Encoder& enc, const PosSRS_BWA_RRC_Connected_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_numOfCarriersIntraBandContiguous_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_TwoCarriersFR1_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_TwoCarriersFR2_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_ThreeCarriersFR1_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_ThreeCarriersFR2_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSet_r18);
    enc.WriteBit(value.has_maximumAggregatedResourcePeriodic_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceAperiodic_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSemi_r18);
    enc.WriteBit(value.has_maximumAggregatedResourcePeriodicPerSlot_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceAperiodicPerSlot_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSemiPerSlot_r18);
    enc.WriteBit(value.has_supportOfSameSRS_PowerReduction_r18);
    if (value.has_numOfCarriersIntraBandContiguous_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numOfCarriersIntraBandContiguous_r18), 0, 2);
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_TwoCarriersFR1_r18), 0, 3);
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_TwoCarriersFR2_r18), 0, 5);
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_ThreeCarriersFR1_r18), 0, 4);
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_ThreeCarriersFR2_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourceSet_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSet_r18), 0, 5);
    }
    if (value.has_maximumAggregatedResourcePeriodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourcePeriodic_r18), 0, 6);
    }
    if (value.has_maximumAggregatedResourceAperiodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceAperiodic_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourceSemi_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSemi_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourcePeriodicPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourcePeriodicPerSlot_r18), 0, 9);
    }
    if (value.has_maximumAggregatedResourceAperiodicPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceAperiodicPerSlot_r18), 0, 10);
    }
    if (value.has_maximumAggregatedResourceSemiPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSemiPerSlot_r18), 0, 10);
    }
    if (value.has_supportOfSameSRS_PowerReduction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfSameSRS_PowerReduction_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PosSRS_BWA_RRC_Connected_r18(Decoder& dec, PosSRS_BWA_RRC_Connected_r18& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numOfCarriersIntraBandContiguous_r18 = (PosSRS_BWA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_TwoCarriersFR1_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_TwoCarriersFR2_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_ThreeCarriersFR1_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_ThreeCarriersFR2_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSet_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maximumAggregatedResourcePeriodic_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceAperiodic_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSemi_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maximumAggregatedResourcePeriodicPerSlot_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceAperiodicPerSlot_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSemiPerSlot_r18 = (PosSRS_BWA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18)tmp_value;
    }
    if (present_12) {
        value.supportOfSameSRS_PowerReduction_r18 = (PosSRS_BWA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSRS_BWA_RRC_Connected_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSRS_BWA_RRC_Connected_r18(PosSRS_BWA_RRC_Connected_r18& value)
{
    if (value.has_numOfCarriersIntraBandContiguous_r18) {
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR1_r18) {
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR2_r18) {
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR1_r18) {
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR2_r18) {
    }
    if (value.has_maximumAggregatedResourceSet_r18) {
    }
    if (value.has_maximumAggregatedResourcePeriodic_r18) {
    }
    if (value.has_maximumAggregatedResourceAperiodic_r18) {
    }
    if (value.has_maximumAggregatedResourceSemi_r18) {
    }
    if (value.has_maximumAggregatedResourcePeriodicPerSlot_r18) {
    }
    if (value.has_maximumAggregatedResourceAperiodicPerSlot_r18) {
    }
    if (value.has_maximumAggregatedResourceSemiPerSlot_r18) {
    }
    if (value.has_supportOfSameSRS_PowerReduction_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosSRS_BWA_IndependentCA_RRC_Connected_r18(Encoder& enc, const PosSRS_BWA_IndependentCA_RRC_Connected_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_numOfCarriersIntraBandContiguous_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_TwoCarriersFR1_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_TwoCarriersFR2_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_ThreeCarriersFR1_r18);
    enc.WriteBit(value.has_maximumAggregatedBW_ThreeCarriersFR2_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSet_r18);
    enc.WriteBit(value.has_maximumAggregatedResourcePeriodic_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceAperiodic_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSemi_r18);
    enc.WriteBit(value.has_maximumAggregatedResourcePeriodicPerSlot_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceAperiodicPerSlot_r18);
    enc.WriteBit(value.has_maximumAggregatedResourceSemiPerSlot_r18);
    enc.WriteBit(value.has_supportOfSameSRS_PowerReduction_r18);
    enc.WriteBit(value.has_guardPeriod_r18);
    if (value.has_numOfCarriersIntraBandContiguous_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numOfCarriersIntraBandContiguous_r18), 0, 2);
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_TwoCarriersFR1_r18), 0, 3);
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_TwoCarriersFR2_r18), 0, 5);
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_ThreeCarriersFR1_r18), 0, 4);
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedBW_ThreeCarriersFR2_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourceSet_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSet_r18), 0, 5);
    }
    if (value.has_maximumAggregatedResourcePeriodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourcePeriodic_r18), 0, 6);
    }
    if (value.has_maximumAggregatedResourceAperiodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceAperiodic_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourceSemi_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSemi_r18), 0, 7);
    }
    if (value.has_maximumAggregatedResourcePeriodicPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourcePeriodicPerSlot_r18), 0, 9);
    }
    if (value.has_maximumAggregatedResourceAperiodicPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceAperiodicPerSlot_r18), 0, 10);
    }
    if (value.has_maximumAggregatedResourceSemiPerSlot_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maximumAggregatedResourceSemiPerSlot_r18), 0, 10);
    }
    if (value.has_supportOfSameSRS_PowerReduction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOfSameSRS_PowerReduction_r18), 0, 0);
    }
    if (value.has_guardPeriod_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.guardPeriod_r18), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_PosSRS_BWA_IndependentCA_RRC_Connected_r18(Decoder& dec, PosSRS_BWA_IndependentCA_RRC_Connected_r18& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.numOfCarriersIntraBandContiguous_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_NumOfCarriersIntraBandContiguous_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_TwoCarriersFR1_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR1_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_TwoCarriersFR2_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_TwoCarriersFR2_r18)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_ThreeCarriersFR1_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR1_r18)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedBW_ThreeCarriersFR2_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedBW_ThreeCarriersFR2_r18)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSet_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSet_r18)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maximumAggregatedResourcePeriodic_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodic_r18)tmp_value;
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceAperiodic_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodic_r18)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSemi_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemi_r18)tmp_value;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maximumAggregatedResourcePeriodicPerSlot_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourcePeriodicPerSlot_r18)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceAperiodicPerSlot_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceAperiodicPerSlot_r18)tmp_value;
    }
    if (present_11) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maximumAggregatedResourceSemiPerSlot_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_MaximumAggregatedResourceSemiPerSlot_r18)tmp_value;
    }
    if (present_12) {
        value.supportOfSameSRS_PowerReduction_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_SupportOfSameSRS_PowerReduction_r18)0;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.guardPeriod_r18 = (PosSRS_BWA_IndependentCA_RRC_Connected_r18_GuardPeriod_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSRS_BWA_IndependentCA_RRC_Connected_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSRS_BWA_IndependentCA_RRC_Connected_r18(PosSRS_BWA_IndependentCA_RRC_Connected_r18& value)
{
    if (value.has_numOfCarriersIntraBandContiguous_r18) {
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR1_r18) {
    }
    if (value.has_maximumAggregatedBW_TwoCarriersFR2_r18) {
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR1_r18) {
    }
    if (value.has_maximumAggregatedBW_ThreeCarriersFR2_r18) {
    }
    if (value.has_maximumAggregatedResourceSet_r18) {
    }
    if (value.has_maximumAggregatedResourcePeriodic_r18) {
    }
    if (value.has_maximumAggregatedResourceAperiodic_r18) {
    }
    if (value.has_maximumAggregatedResourceSemi_r18) {
    }
    if (value.has_maximumAggregatedResourcePeriodicPerSlot_r18) {
    }
    if (value.has_maximumAggregatedResourceAperiodicPerSlot_r18) {
    }
    if (value.has_maximumAggregatedResourceSemiPerSlot_r18) {
    }
    if (value.has_supportOfSameSRS_PowerReduction_r18) {
    }
    if (value.has_guardPeriod_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(Encoder& enc, const FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_pusch_2SymbolFL_DMRS_r18);
    enc.WriteBit(value.has_pusch_2SymbolFL_DMRS_Addition2Symbol_r18);
    enc.WriteBit(value.has_pusch_1SymbolFL_DMRS_Addition3Symbol_r18);
    enc.WriteBit(value.has_pusch_DMRS8Tx_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_TypeA_r18), 0, 0);
    if (value.has_pusch_2SymbolFL_DMRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_2SymbolFL_DMRS_r18), 0, 0);
    }
    if (value.has_pusch_2SymbolFL_DMRS_Addition2Symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_2SymbolFL_DMRS_Addition2Symbol_r18), 0, 0);
    }
    if (value.has_pusch_1SymbolFL_DMRS_Addition3Symbol_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_1SymbolFL_DMRS_Addition3Symbol_r18), 0, 0);
    }
    if (value.has_pusch_DMRS8Tx_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_DMRS8Tx_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(Decoder& dec, FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18& value)
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
        value.dmrs_TypeA_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Dmrs_TypeA_r18)0;
    }
    if (present_0) {
        value.pusch_2SymbolFL_DMRS_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_r18)0;
    }
    if (present_1) {
        value.pusch_2SymbolFL_DMRS_Addition2Symbol_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_2SymbolFL_DMRS_Addition2Symbol_r18)0;
    }
    if (present_2) {
        value.pusch_1SymbolFL_DMRS_Addition3Symbol_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_1SymbolFL_DMRS_Addition3Symbol_r18)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pusch_DMRS8Tx_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18_Pusch_DMRS8Tx_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18& value)
{
    if (value.has_pusch_2SymbolFL_DMRS_r18) {
    }
    if (value.has_pusch_2SymbolFL_DMRS_Addition2Symbol_r18) {
    }
    if (value.has_pusch_1SymbolFL_DMRS_Addition3Symbol_r18) {
    }
    if (value.has_pusch_DMRS8Tx_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(Encoder& enc, const FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_pusch_TypeA_DMRS_r18);
    enc.WriteBit(value.has_pusch_TypeB_DMRS_r18);
    enc.WriteBit(value.has_pusch_rank_1_4_1Port_r18);
    enc.WriteBit(value.has_pusch_rank_5_8_1Port_r18);
    enc.WriteBit(value.has_pusch_rank_1_4_2Port_r18);
    enc.WriteBit(value.has_pusch_rank_5_8_2Port_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_Type_r18), 0, 1);
    if (value.has_pusch_TypeA_DMRS_r18) {
        Encode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(enc, value.pusch_TypeA_DMRS_r18);
    }
    if (value.has_pusch_TypeB_DMRS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_TypeB_DMRS_r18), 0, 0);
    }
    if (value.has_pusch_rank_1_4_1Port_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_rank_1_4_1Port_r18), 0, 0);
    }
    if (value.has_pusch_rank_5_8_1Port_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_rank_5_8_1Port_r18), 0, 0);
    }
    if (value.has_pusch_rank_1_4_2Port_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_rank_1_4_2Port_r18), 0, 0);
    }
    if (value.has_pusch_rank_5_8_2Port_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_rank_5_8_2Port_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(Decoder& dec, FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dmrs_Type_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Dmrs_Type_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(dec, value.pusch_TypeA_DMRS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.pusch_TypeB_DMRS_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeB_DMRS_r18)0;
    }
    if (present_2) {
        value.pusch_rank_1_4_1Port_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_1Port_r18)0;
    }
    if (present_3) {
        value.pusch_rank_5_8_1Port_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_1Port_r18)0;
    }
    if (present_4) {
        value.pusch_rank_1_4_2Port_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_1_4_2Port_r18)0;
    }
    if (present_5) {
        value.pusch_rank_5_8_2Port_r18 = (FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_rank_5_8_2Port_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18& value)
{
    if (value.has_pusch_TypeA_DMRS_r18) {
        Free_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18_Pusch_TypeA_DMRS_r18(value.pusch_TypeA_DMRS_r18);
    }
    if (value.has_pusch_TypeB_DMRS_r18) {
    }
    if (value.has_pusch_rank_1_4_1Port_r18) {
    }
    if (value.has_pusch_rank_5_8_1Port_r18) {
    }
    if (value.has_pusch_rank_1_4_2Port_r18) {
    }
    if (value.has_pusch_rank_5_8_2Port_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplink_v1800(Encoder& enc, const FeatureSetUplink_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_maxDelayValueBeyondD_Basic_r18);
    enc.WriteBit(value.has_tdcp_NumberDelayValue_r18);
    enc.WriteBit(value.has_phaseReportMoreThanOne_r18);
    enc.WriteBit(value.has_maxNumberTRS_ResourceSet_r18);
    enc.WriteBit(value.has_maxNumberTDCP_PerBWP_r18);
    enc.WriteBit(value.has_pusch_DMRS_TypeEnh_r18);
    enc.WriteBit(value.has_ul_DMRS_SingleDCI_M_TRP_r18);
    enc.WriteBit(value.has_ul_DMRS_M_DCI_M_TRP_r18);
    enc.WriteBit(value.has_srs_AntennaSwitching8T8R2SP_1Periodic_r18);
    enc.WriteBit(value.has_pucch_SingleDCI_STx2P_SFN_r18);
    enc.WriteBit(value.has_posSRS_BWA_RRC_Connected_r18);
    enc.WriteBit(value.has_posSRS_BWA_IndependentCA_RRC_Connected_r18);
    enc.WriteBit(value.has_posSRS_BWA_AffectedBandList_r18);
    enc.WriteBit(value.has_txDiversity4Tx_r18);
    enc.WriteBit(value.has_powerBoosting_pi2BPSK_QPSK_r18);
    enc.WriteBit(value.has_powerBoosting_pi2BPSK_QPSK_Modified_r18);
    enc.WriteBit(value.has_txDiversity2Tx_r18);
    if (value.has_maxDelayValueBeyondD_Basic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxDelayValueBeyondD_Basic_r18), 0, 5);
    }
    if (value.has_tdcp_NumberDelayValue_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdcp_NumberDelayValue_r18), 2, 4);
    }
    if (value.has_phaseReportMoreThanOne_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.phaseReportMoreThanOne_r18), 0, 0);
    }
    if (value.has_maxNumberTRS_ResourceSet_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTRS_ResourceSet_r18), 2, 3);
    }
    if (value.has_maxNumberTDCP_PerBWP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTDCP_PerBWP_r18), 1, 4);
    }
    if (value.has_pusch_DMRS_TypeEnh_r18) {
        Encode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(enc, value.pusch_DMRS_TypeEnh_r18);
    }
    if (value.has_ul_DMRS_SingleDCI_M_TRP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_DMRS_SingleDCI_M_TRP_r18), 0, 0);
    }
    if (value.has_ul_DMRS_M_DCI_M_TRP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_DMRS_M_DCI_M_TRP_r18), 0, 0);
    }
    if (value.has_srs_AntennaSwitching8T8R2SP_1Periodic_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_AntennaSwitching8T8R2SP_1Periodic_r18), 0, 0);
    }
    if (value.has_pucch_SingleDCI_STx2P_SFN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_SingleDCI_STx2P_SFN_r18), 0, 2);
    }
    if (value.has_posSRS_BWA_RRC_Connected_r18) {
        Encode_PosSRS_BWA_RRC_Connected_r18(enc, value.posSRS_BWA_RRC_Connected_r18);
    }
    if (value.has_posSRS_BWA_IndependentCA_RRC_Connected_r18) {
        Encode_PosSRS_BWA_IndependentCA_RRC_Connected_r18(enc, value.posSRS_BWA_IndependentCA_RRC_Connected_r18);
    }
    if (value.has_posSRS_BWA_AffectedBandList_r18) {
enc.WriteConstrainedLength(value.posSRS_BWA_AffectedBandList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.posSRS_BWA_AffectedBandList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.posSRS_BWA_AffectedBandList_r18_items[i]), 1, 1024);
}
    }
    if (value.has_txDiversity4Tx_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txDiversity4Tx_r18), 0, 0);
    }
    if (value.has_powerBoosting_pi2BPSK_QPSK_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerBoosting_pi2BPSK_QPSK_r18), 0, 0);
    }
    if (value.has_powerBoosting_pi2BPSK_QPSK_Modified_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerBoosting_pi2BPSK_QPSK_Modified_r18), 0, 0);
    }
    if (value.has_txDiversity2Tx_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txDiversity2Tx_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplink_v1800(Decoder& dec, FeatureSetUplink_v1800& value)
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
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxDelayValueBeyondD_Basic_r18 = (FeatureSetUplink_v1800_MaxDelayValueBeyondD_Basic_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.tdcp_NumberDelayValue_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        value.phaseReportMoreThanOne_r18 = (FeatureSetUplink_v1800_PhaseReportMoreThanOne_r18)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 3, tmp_value)) { goto fail; }
        value.maxNumberTRS_ResourceSet_r18 = (int64_t)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberTDCP_PerBWP_r18 = (int64_t)tmp_value;
    }
    if (present_5) {
        if (Decode_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(dec, value.pusch_DMRS_TypeEnh_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.ul_DMRS_SingleDCI_M_TRP_r18 = (FeatureSetUplink_v1800_Ul_DMRS_SingleDCI_M_TRP_r18)0;
    }
    if (present_7) {
        value.ul_DMRS_M_DCI_M_TRP_r18 = (FeatureSetUplink_v1800_Ul_DMRS_M_DCI_M_TRP_r18)0;
    }
    if (present_8) {
        value.srs_AntennaSwitching8T8R2SP_1Periodic_r18 = (FeatureSetUplink_v1800_Srs_AntennaSwitching8T8R2SP_1Periodic_r18)0;
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pucch_SingleDCI_STx2P_SFN_r18 = (FeatureSetUplink_v1800_Pucch_SingleDCI_STx2P_SFN_r18)tmp_value;
    }
    if (present_10) {
        if (Decode_PosSRS_BWA_RRC_Connected_r18(dec, value.posSRS_BWA_RRC_Connected_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_PosSRS_BWA_IndependentCA_RRC_Connected_r18(dec, value.posSRS_BWA_IndependentCA_RRC_Connected_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.posSRS_BWA_AffectedBandList_r18_count)) { goto fail; }
if (value.posSRS_BWA_AffectedBandList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.posSRS_BWA_AffectedBandList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.posSRS_BWA_AffectedBandList_r18_count > 0u) {
    value.posSRS_BWA_AffectedBandList_r18_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.posSRS_BWA_AffectedBandList_r18_count * sizeof(FreqBandIndicatorNR));
    if (value.posSRS_BWA_AffectedBandList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.posSRS_BWA_AffectedBandList_r18_items, 0, (std::size_t)value.posSRS_BWA_AffectedBandList_r18_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.posSRS_BWA_AffectedBandList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.posSRS_BWA_AffectedBandList_r18_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    if (present_13) {
        value.txDiversity4Tx_r18 = (FeatureSetUplink_v1800_TxDiversity4Tx_r18)0;
    }
    if (present_14) {
        value.powerBoosting_pi2BPSK_QPSK_r18 = (FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_r18)0;
    }
    if (present_15) {
        value.powerBoosting_pi2BPSK_QPSK_Modified_r18 = (FeatureSetUplink_v1800_PowerBoosting_pi2BPSK_QPSK_Modified_r18)0;
    }
    if (present_16) {
        value.txDiversity2Tx_r18 = (FeatureSetUplink_v1800_TxDiversity2Tx_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplink_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplink_v1800(FeatureSetUplink_v1800& value)
{
    if (value.has_maxDelayValueBeyondD_Basic_r18) {
    }
    if (value.has_tdcp_NumberDelayValue_r18) {
    }
    if (value.has_phaseReportMoreThanOne_r18) {
    }
    if (value.has_maxNumberTRS_ResourceSet_r18) {
    }
    if (value.has_maxNumberTDCP_PerBWP_r18) {
    }
    if (value.has_pusch_DMRS_TypeEnh_r18) {
        Free_FeatureSetUplink_v1800_Pusch_DMRS_TypeEnh_r18(value.pusch_DMRS_TypeEnh_r18);
    }
    if (value.has_ul_DMRS_SingleDCI_M_TRP_r18) {
    }
    if (value.has_ul_DMRS_M_DCI_M_TRP_r18) {
    }
    if (value.has_srs_AntennaSwitching8T8R2SP_1Periodic_r18) {
    }
    if (value.has_pucch_SingleDCI_STx2P_SFN_r18) {
    }
    if (value.has_posSRS_BWA_RRC_Connected_r18) {
        Free_PosSRS_BWA_RRC_Connected_r18(value.posSRS_BWA_RRC_Connected_r18);
    }
    if (value.has_posSRS_BWA_IndependentCA_RRC_Connected_r18) {
        Free_PosSRS_BWA_IndependentCA_RRC_Connected_r18(value.posSRS_BWA_IndependentCA_RRC_Connected_r18);
    }
    if (value.has_posSRS_BWA_AffectedBandList_r18) {
        if (value.posSRS_BWA_AffectedBandList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.posSRS_BWA_AffectedBandList_r18_count; ++i) {
            }
            std::free(value.posSRS_BWA_AffectedBandList_r18_items);
            value.posSRS_BWA_AffectedBandList_r18_items = nullptr;
        }
        value.posSRS_BWA_AffectedBandList_r18_count = 0;
    }
    if (value.has_txDiversity4Tx_r18) {
    }
    if (value.has_powerBoosting_pi2BPSK_QPSK_r18) {
    }
    if (value.has_powerBoosting_pi2BPSK_QPSK_Modified_r18) {
    }
    if (value.has_txDiversity2Tx_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(Encoder& enc, const FeatureSetUplinkPerCC_Mimo_CB_PUSCH& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberMIMO_LayersCB_PUSCH);
    if (value.has_maxNumberMIMO_LayersCB_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberMIMO_LayersCB_PUSCH), 0, 2);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet), 1, 2);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(Decoder& dec, FeatureSetUplinkPerCC_Mimo_CB_PUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberMIMO_LayersCB_PUSCH = (MIMO_LayersUL)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(FeatureSetUplinkPerCC_Mimo_CB_PUSCH& value)
{
    if (value.has_maxNumberMIMO_LayersCB_PUSCH) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC(Encoder& enc, const FeatureSetUplinkPerCC& value)
{
    (void)value;
    enc.WriteBit(value.has_channelBW_90mhz);
    enc.WriteBit(value.has_mimo_CB_PUSCH);
    enc.WriteBit(value.has_maxNumberMIMO_LayersNonCB_PUSCH);
    enc.WriteBit(value.has_supportedModulationOrderUL);
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedSubcarrierSpacingUL), 0, 7);
    Encode_SupportedBandwidth(enc, value.supportedBandwidthUL);
    if (value.has_channelBW_90mhz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.channelBW_90mhz), 0, 0);
    }
    if (value.has_mimo_CB_PUSCH) {
        Encode_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(enc, value.mimo_CB_PUSCH);
    }
    if (value.has_maxNumberMIMO_LayersNonCB_PUSCH) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberMIMO_LayersNonCB_PUSCH), 0, 2);
    }
    if (value.has_supportedModulationOrderUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportedModulationOrderUL), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC(Decoder& dec, FeatureSetUplinkPerCC& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.supportedSubcarrierSpacingUL = (SubcarrierSpacing)tmp_value;
    }
    {
        if (Decode_SupportedBandwidth(dec, value.supportedBandwidthUL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.channelBW_90mhz = (FeatureSetUplinkPerCC_ChannelBW_90mhz)0;
    }
    if (present_1) {
        if (Decode_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(dec, value.mimo_CB_PUSCH) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberMIMO_LayersNonCB_PUSCH = (MIMO_LayersUL)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.supportedModulationOrderUL = (ModulationOrder)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC(FeatureSetUplinkPerCC& value)
{
    Free_SupportedBandwidth(value.supportedBandwidthUL);
    if (value.has_channelBW_90mhz) {
    }
    if (value.has_mimo_CB_PUSCH) {
        Free_FeatureSetUplinkPerCC_Mimo_CB_PUSCH(value.mimo_CB_PUSCH);
    }
    if (value.has_maxNumberMIMO_LayersNonCB_PUSCH) {
    }
    if (value.has_supportedModulationOrderUL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(Encoder& enc, const FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousSRS_ResourceTx), 1, 4);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(Decoder& dec, FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousSRS_ResourceTx = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1540(Encoder& enc, const FeatureSetUplinkPerCC_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_mimo_NonCB_PUSCH);
    if (value.has_mimo_NonCB_PUSCH) {
        Encode_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(enc, value.mimo_NonCB_PUSCH);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1540(Decoder& dec, FeatureSetUplinkPerCC_v1540& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(dec, value.mimo_NonCB_PUSCH) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1540(FeatureSetUplinkPerCC_v1540& value)
{
    if (value.has_mimo_NonCB_PUSCH) {
        Free_FeatureSetUplinkPerCC_v1540_Mimo_NonCB_PUSCH(value.mimo_NonCB_PUSCH);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1700(Encoder& enc, const FeatureSetUplinkPerCC_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedMinBandwidthUL_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_RepetitionTypeB_r17);
    enc.WriteBit(value.has_mTRP_PUSCH_TypeB_CB_r17);
    enc.WriteBit(value.has_supportedBandwidthUL_v1710);
    if (value.has_supportedMinBandwidthUL_r17) {
        Encode_SupportedBandwidth_v1700(enc, value.supportedMinBandwidthUL_r17);
    }
    if (value.has_mTRP_PUSCH_RepetitionTypeB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_RepetitionTypeB_r17), 0, 3);
    }
    if (value.has_mTRP_PUSCH_TypeB_CB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mTRP_PUSCH_TypeB_CB_r17), 0, 2);
    }
    if (value.has_supportedBandwidthUL_v1710) {
        Encode_SupportedBandwidth_v1700(enc, value.supportedBandwidthUL_v1710);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1700(Decoder& dec, FeatureSetUplinkPerCC_v1700& value)
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
        if (Decode_SupportedBandwidth_v1700(dec, value.supportedMinBandwidthUL_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mTRP_PUSCH_RepetitionTypeB_r17 = (FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_RepetitionTypeB_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mTRP_PUSCH_TypeB_CB_r17 = (FeatureSetUplinkPerCC_v1700_MTRP_PUSCH_TypeB_CB_r17)tmp_value;
    }
    if (present_3) {
        if (Decode_SupportedBandwidth_v1700(dec, value.supportedBandwidthUL_v1710) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1700(FeatureSetUplinkPerCC_v1700& value)
{
    if (value.has_supportedMinBandwidthUL_r17) {
        Free_SupportedBandwidth_v1700(value.supportedMinBandwidthUL_r17);
    }
    if (value.has_mTRP_PUSCH_RepetitionTypeB_r17) {
    }
    if (value.has_mTRP_PUSCH_TypeB_CB_r17) {
    }
    if (value.has_supportedBandwidthUL_v1710) {
        Free_SupportedBandwidth_v1700(value.supportedBandwidthUL_v1710);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1780(Encoder& enc, const FeatureSetUplinkPerCC_v1780& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandwidthUL_v1780);
    if (value.has_supportedBandwidthUL_v1780) {
        Encode_SupportedBandwidth_v1700(enc, value.supportedBandwidthUL_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1780(Decoder& dec, FeatureSetUplinkPerCC_v1780& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SupportedBandwidth_v1700(dec, value.supportedBandwidthUL_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1780(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1780(FeatureSetUplinkPerCC_v1780& value)
{
    if (value.has_supportedBandwidthUL_v1780) {
        Free_SupportedBandwidth_v1700(value.supportedBandwidthUL_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLayerPerPanel_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNZP_PUSCH_PortsPerSet_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_AntennaPortsPerSet_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_r18 = (FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_ResourcePerSet_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberLayerPerPanel_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberNZP_PUSCH_PortsPerSet_r18 = (FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_AntennaPortsPerSet_r18 = (FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18_MaxNumberSRS_AntennaPortsPerSet_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLayerPerPanel_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimulSRS_ResourcePerSet_r18), 1, 4);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberLayerPerPanel_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSimulSRS_ResourcePerSet_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLayerPerSet_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_AntennaPortsPerSet_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNZP_PUSCH_PortsPerSet_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_r18 = (FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_ResourcePerSet_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberLayerPerSet_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_AntennaPortsPerSet_r18 = (FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberSRS_AntennaPortsPerSet_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberNZP_PUSCH_PortsPerSet_r18 = (FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18_MaxNumberNZP_PUSCH_PortsPerSet_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLayerPerSet_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimulSRS_ResourcePerSet_r18), 1, 4);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberLayerPerSet_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSimulSRS_ResourcePerSet_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r18);
    enc.WriteBit(value.has_scs_120kHz_r18);
    if (value.has_scs_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r18), 0, 4);
    }
    if (value.has_scs_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r18), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value)
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
        value.scs_60kHz_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_120kHz_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value)
{
    if (value.has_scs_60kHz_r18) {
    }
    if (value.has_scs_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberPUSCH_PerCORESET_PerSlot_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLayerOverlapping_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNZP_PUSCH_Overlapping_r18), 0, 2);
    if (value.has_maxNumberPUSCH_PerCORESET_PerSlot_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(enc, value.maxNumberPUSCH_PerCORESET_PerSlot_r18);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalLayerOverlapping_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_AntennaPortsPerSet_r18), 0, 2);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_ResourcePerSet_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberLayerOverlapping_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberNZP_PUSCH_Overlapping_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberNZP_PUSCH_Overlapping_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(dec, value.maxNumberPUSCH_PerCORESET_PerSlot_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberTotalLayerOverlapping_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_AntennaPortsPerSet_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberSRS_AntennaPortsPerSet_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18& value)
{
    if (value.has_maxNumberPUSCH_PerCORESET_PerSlot_r18) {
        Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(value.maxNumberPUSCH_PerCORESET_PerSlot_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r18);
    enc.WriteBit(value.has_scs_120kHz_r18);
    if (value.has_scs_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r18), 0, 4);
    }
    if (value.has_scs_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r18), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value)
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
        value.scs_60kHz_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_60kHz_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.scs_120kHz_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18_Scs_120kHz_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18& value)
{
    if (value.has_scs_60kHz_r18) {
    }
    if (value.has_scs_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_maxNumberPUSCH_PerCORESET_PerSlot_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcePerSet_r18), 1, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLayerOverlapping_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimulSRS_ResourcePerSet_r18), 1, 4);
    if (value.has_maxNumberPUSCH_PerCORESET_PerSlot_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(enc, value.maxNumberPUSCH_PerCORESET_PerSlot_r18);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalLayerOverlapping_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcePerSet_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberLayerOverlapping_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 4, tmp_value)) { goto fail; }
        value.maxNumberSimulSRS_ResourcePerSet_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(dec, value.maxNumberPUSCH_PerCORESET_PerSlot_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberTotalLayerOverlapping_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18& value)
{
    if (value.has_maxNumberPUSCH_PerCORESET_PerSlot_r18) {
        Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18_MaxNumberPUSCH_PerCORESET_PerSlot_r18(value.maxNumberPUSCH_PerCORESET_PerSlot_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUSCH_MIMO_Layer_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_Resource_r18), 1, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_8TxPorts_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberPUSCH_MIMO_Layer_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.maxNumberSRS_Resource_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.srs_8TxPorts_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18_Srs_8TxPorts_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_codebook1_8TxPUSCH_r18);
    enc.WriteBit(value.has_codebook2_8TxPUSCH_r18);
    enc.WriteBit(value.has_codebook3_8TxPUSCH_r18);
    enc.WriteBit(value.has_codebook4_8TxPUSCH_r18);
    enc.WriteBit(value.has_ul_FullPwrTransMode0_r18);
    enc.WriteBit(value.has_ul_FullPwrTransMode1_r18);
    enc.WriteBit(value.has_ul_FullPwrTransMode2_r18);
    enc.WriteBit(value.has_ul_SRS_TransMode2_r18);
    enc.WriteBit(value.has_tpmi_FullPwrCodebook2_r18);
    Encode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(enc, value.codebook_8TxBasic_r18);
    if (value.has_codebook1_8TxPUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebook1_8TxPUSCH_r18), 0, 2);
    }
    if (value.has_codebook2_8TxPUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebook2_8TxPUSCH_r18), 0, 0);
    }
    if (value.has_codebook3_8TxPUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebook3_8TxPUSCH_r18), 0, 0);
    }
    if (value.has_codebook4_8TxPUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.codebook4_8TxPUSCH_r18), 0, 0);
    }
    if (value.has_ul_FullPwrTransMode0_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrTransMode0_r18), 0, 0);
    }
    if (value.has_ul_FullPwrTransMode1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrTransMode1_r18), 0, 0);
    }
    if (value.has_ul_FullPwrTransMode2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FullPwrTransMode2_r18), 0, 2);
    }
    if (value.has_ul_SRS_TransMode2_r18) {
        enc.WriteFixedBitString(value.ul_SRS_TransMode2_r18.bytes, value.ul_SRS_TransMode2_r18.bitLength, 3, 3);
    }
    if (value.has_tpmi_FullPwrCodebook2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tpmi_FullPwrCodebook2_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18& value)
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
    {
        if (Decode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(dec, value.codebook_8TxBasic_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.codebook1_8TxPUSCH_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook1_8TxPUSCH_r18)tmp_value;
    }
    if (present_1) {
        value.codebook2_8TxPUSCH_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook2_8TxPUSCH_r18)0;
    }
    if (present_2) {
        value.codebook3_8TxPUSCH_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook3_8TxPUSCH_r18)0;
    }
    if (present_3) {
        value.codebook4_8TxPUSCH_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook4_8TxPUSCH_r18)0;
    }
    if (present_4) {
        value.ul_FullPwrTransMode0_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode0_r18)0;
    }
    if (present_5) {
        value.ul_FullPwrTransMode1_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode1_r18)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ul_FullPwrTransMode2_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Ul_FullPwrTransMode2_r18)tmp_value;
    }
    if (present_7) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.ul_SRS_TransMode2_r18.bytes = string_bytes;
        value.ul_SRS_TransMode2_r18.bitLength = string_length;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.tpmi_FullPwrCodebook2_r18 = (FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Tpmi_FullPwrCodebook2_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18& value)
{
    Free_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18_Codebook_8TxBasic_r18(value.codebook_8TxBasic_r18);
    if (value.has_codebook1_8TxPUSCH_r18) {
    }
    if (value.has_codebook2_8TxPUSCH_r18) {
    }
    if (value.has_codebook3_8TxPUSCH_r18) {
    }
    if (value.has_codebook4_8TxPUSCH_r18) {
    }
    if (value.has_ul_FullPwrTransMode0_r18) {
    }
    if (value.has_ul_FullPwrTransMode1_r18) {
    }
    if (value.has_ul_FullPwrTransMode2_r18) {
    }
    if (value.has_ul_SRS_TransMode2_r18) {
        std::free(value.ul_SRS_TransMode2_r18.bytes);
        value.ul_SRS_TransMode2_r18.bytes = nullptr;
        value.ul_SRS_TransMode2_r18.bitLength = 0;
    }
    if (value.has_tpmi_FullPwrCodebook2_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(Encoder& enc, const FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUSCH_MIMO_Layer_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_Resource_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSimultaneousSRS_r18), 1, 8);
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(Decoder& dec, FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberPUSCH_MIMO_Layer_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSRS_Resource_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberSimultaneousSRS_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureSetUplinkPerCC_v1800(Encoder& enc, const FeatureSetUplinkPerCC_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_twoPUSCH_MultiDCI_STxMP_TwoTA_r18);
    enc.WriteBit(value.has_pusch_CB_SingleDCI_STx2P_SDM_r18);
    enc.WriteBit(value.has_pusch_NonCB_SingleDCI_STx2P_SDM_r18);
    enc.WriteBit(value.has_pusch_CB_SingleDCI_STx2P_SFN_r18);
    enc.WriteBit(value.has_pusch_NonCB_SingleDCI_STx2P_SFN_r18);
    enc.WriteBit(value.has_twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18);
    enc.WriteBit(value.has_twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18);
    enc.WriteBit(value.has_twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18);
    enc.WriteBit(value.has_codebookParameter8TxPUSCH_r18);
    enc.WriteBit(value.has_nonCodebook_8TxPUSCH_r18);
    enc.WriteBit(value.has_nonCodebook_CSI_RS_SRS_r18);
    enc.WriteBit(value.has_cgb_2CW_PUSCH_r18);
    if (value.has_twoPUSCH_MultiDCI_STxMP_TwoTA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_MultiDCI_STxMP_TwoTA_r18), 0, 0);
    }
    if (value.has_pusch_CB_SingleDCI_STx2P_SDM_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(enc, value.pusch_CB_SingleDCI_STx2P_SDM_r18);
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SDM_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(enc, value.pusch_NonCB_SingleDCI_STx2P_SDM_r18);
    }
    if (value.has_pusch_CB_SingleDCI_STx2P_SFN_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(enc, value.pusch_CB_SingleDCI_STx2P_SFN_r18);
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SFN_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(enc, value.pusch_NonCB_SingleDCI_STx2P_SFN_r18);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(enc, value.twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(enc, value.twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18);
    }
    if (value.has_twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18), 0, 0);
    }
    if (value.has_codebookParameter8TxPUSCH_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(enc, value.codebookParameter8TxPUSCH_r18);
    }
    if (value.has_nonCodebook_8TxPUSCH_r18) {
        Encode_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(enc, value.nonCodebook_8TxPUSCH_r18);
    }
    if (value.has_nonCodebook_CSI_RS_SRS_r18) {
        Encode_CodebookVariantsList_r16(enc, value.nonCodebook_CSI_RS_SRS_r18);
    }
    if (value.has_cgb_2CW_PUSCH_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cgb_2CW_PUSCH_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureSetUplinkPerCC_v1800(Decoder& dec, FeatureSetUplinkPerCC_v1800& value)
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
        value.twoPUSCH_MultiDCI_STxMP_TwoTA_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STxMP_TwoTA_r18)0;
    }
    if (present_1) {
        if (Decode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(dec, value.pusch_CB_SingleDCI_STx2P_SDM_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(dec, value.pusch_NonCB_SingleDCI_STx2P_SDM_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(dec, value.pusch_CB_SingleDCI_STx2P_SFN_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(dec, value.pusch_NonCB_SingleDCI_STx2P_SFN_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(dec, value.twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(dec, value.twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18 = (FeatureSetUplinkPerCC_v1800_TwoPUSCH_MultiDCI_STx2P_OutOfOrder_r18)0;
    }
    if (present_8) {
        if (Decode_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(dec, value.codebookParameter8TxPUSCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(dec, value.nonCodebook_8TxPUSCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_CodebookVariantsList_r16(dec, value.nonCodebook_CSI_RS_SRS_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        value.cgb_2CW_PUSCH_r18 = (FeatureSetUplinkPerCC_v1800_Cgb_2CW_PUSCH_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureSetUplinkPerCC_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureSetUplinkPerCC_v1800(FeatureSetUplinkPerCC_v1800& value)
{
    if (value.has_twoPUSCH_MultiDCI_STxMP_TwoTA_r18) {
    }
    if (value.has_pusch_CB_SingleDCI_STx2P_SDM_r18) {
        Free_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SDM_r18(value.pusch_CB_SingleDCI_STx2P_SDM_r18);
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SDM_r18) {
        Free_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SDM_r18(value.pusch_NonCB_SingleDCI_STx2P_SDM_r18);
    }
    if (value.has_pusch_CB_SingleDCI_STx2P_SFN_r18) {
        Free_FeatureSetUplinkPerCC_v1800_Pusch_CB_SingleDCI_STx2P_SFN_r18(value.pusch_CB_SingleDCI_STx2P_SFN_r18);
    }
    if (value.has_pusch_NonCB_SingleDCI_STx2P_SFN_r18) {
        Free_FeatureSetUplinkPerCC_v1800_Pusch_NonCB_SingleDCI_STx2P_SFN_r18(value.pusch_NonCB_SingleDCI_STx2P_SFN_r18);
    }
    if (value.has_twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18) {
        Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18(value.twoPUSCH_CB_MultiDCI_STx2P_DG_DG_r18);
    }
    if (value.has_twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18) {
        Free_FeatureSetUplinkPerCC_v1800_TwoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18(value.twoPUSCH_NonCB_MultiDCI_STx2P_DG_DG_r18);
    }
    if (value.has_twoPUSCH_MultiDCI_STx2P_OutOfOrder_r18) {
    }
    if (value.has_codebookParameter8TxPUSCH_r18) {
        Free_FeatureSetUplinkPerCC_v1800_CodebookParameter8TxPUSCH_r18(value.codebookParameter8TxPUSCH_r18);
    }
    if (value.has_nonCodebook_8TxPUSCH_r18) {
        Free_FeatureSetUplinkPerCC_v1800_NonCodebook_8TxPUSCH_r18(value.nonCodebook_8TxPUSCH_r18);
    }
    if (value.has_nonCodebook_CSI_RS_SRS_r18) {
        Free_CodebookVariantsList_r16(value.nonCodebook_CSI_RS_SRS_r18);
    }
    if (value.has_cgb_2CW_PUSCH_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FreqBandList(Encoder& enc, const FreqBandList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 1280u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_FreqBandInformation(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_FreqBandList(Decoder& dec, FreqBandList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 1280u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 1280u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (FreqBandInformation*)std::malloc((std::size_t)value.count * sizeof(FreqBandInformation));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(FreqBandInformation));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_FreqBandInformation(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_FreqBandList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqBandList(FreqBandList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_FreqBandInformation(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FreqBandInformationEUTRA(Encoder& enc, const FreqBandInformationEUTRA& value)
{
    (void)value;
    enc.WriteBit(value.has_ca_BandwidthClassDL_EUTRA);
    enc.WriteBit(value.has_ca_BandwidthClassUL_EUTRA);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandEUTRA), 1, 256);
    if (value.has_ca_BandwidthClassDL_EUTRA) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassDL_EUTRA);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 6) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 5);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 6));
            }
        }
    }
    if (value.has_ca_BandwidthClassUL_EUTRA) {
        {
            const std::int64_t enum_value = (std::int64_t)(value.ca_BandwidthClassUL_EUTRA);
            if (enum_value < 0) {
                return enc.Fail(ErrorCode_InvalidEnumValue);
            }
            if (enum_value < 6) {
                enc.WriteBit(false);
                enc.WriteConstrainedInteger(enum_value, 0, 5);
            } else {
                enc.WriteBit(true);
                enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 6));
            }
        }
    }
    return enc.Error();
}

ErrorCode Decode_FreqBandInformationEUTRA(Decoder& dec, FreqBandInformationEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.bandEUTRA = (FreqBandIndicatorEUTRA)tmp_value;
    }
    if (present_0) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)6 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassDL_EUTRA = (CA_BandwidthClassEUTRA)enum_value;
    }
    if (present_1) {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 5, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)6 + (std::int64_t)extension_index;
        }
        value.ca_BandwidthClassUL_EUTRA = (CA_BandwidthClassEUTRA)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqBandInformationEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqBandInformationEUTRA(FreqBandInformationEUTRA& value)
{
    if (value.has_ca_BandwidthClassDL_EUTRA) {
    }
    if (value.has_ca_BandwidthClassUL_EUTRA) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FreqBandInformationNR(Encoder& enc, const FreqBandInformationNR& value)
{
    (void)value;
    enc.WriteBit(value.has_maxBandwidthRequestedDL);
    enc.WriteBit(value.has_maxBandwidthRequestedUL);
    enc.WriteBit(value.has_maxCarriersRequestedDL);
    enc.WriteBit(value.has_maxCarriersRequestedUL);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandNR), 1, 1024);
    if (value.has_maxBandwidthRequestedDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxBandwidthRequestedDL), 0, 15);
    }
    if (value.has_maxBandwidthRequestedUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxBandwidthRequestedUL), 0, 15);
    }
    if (value.has_maxCarriersRequestedDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCarriersRequestedDL), 1, 32);
    }
    if (value.has_maxCarriersRequestedUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxCarriersRequestedUL), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_FreqBandInformationNR(Decoder& dec, FreqBandInformationNR& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.bandNR = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxBandwidthRequestedDL = (AggregatedBandwidth)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.maxBandwidthRequestedUL = (AggregatedBandwidth)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxCarriersRequestedDL = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxCarriersRequestedUL = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqBandInformationNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqBandInformationNR(FreqBandInformationNR& value)
{
    if (value.has_maxBandwidthRequestedDL) {
    }
    if (value.has_maxBandwidthRequestedUL) {
    }
    if (value.has_maxCarriersRequestedDL) {
    }
    if (value.has_maxCarriersRequestedUL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FreqBandInformation(Encoder& enc, const FreqBandInformation& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case FreqBandInformation_Tag_bandInformationEUTRA:
        Encode_FreqBandInformationEUTRA(enc, value.u.bandInformationEUTRA);
        break;
    case FreqBandInformation_Tag_bandInformationNR:
        Encode_FreqBandInformationNR(enc, value.u.bandInformationNR);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_FreqBandInformation(Decoder& dec, FreqBandInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (FreqBandInformation_Tag)root_index;
    switch (value.tag) {
    case FreqBandInformation_Tag_bandInformationEUTRA: {
        if (Decode_FreqBandInformationEUTRA(dec, value.u.bandInformationEUTRA) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case FreqBandInformation_Tag_bandInformationNR: {
        if (Decode_FreqBandInformationNR(dec, value.u.bandInformationNR) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqBandInformation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqBandInformation(FreqBandInformation& value)
{
    switch (value.tag) {
    case FreqBandInformation_Tag_bandInformationEUTRA:
        Free_FreqBandInformationEUTRA(value.u.bandInformationEUTRA);
        break;
    case FreqBandInformation_Tag_bandInformationNR:
        Free_FreqBandInformationNR(value.u.bandInformationNR);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FR2_2_AccessParamsPerBand_r17_ExtGroup1(Encoder& enc, const FR2_2_AccessParamsPerBand_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_modulation64_QAM_PUSCH_FR2_2_r17);
    if (value.has_modulation64_QAM_PUSCH_FR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.modulation64_QAM_PUSCH_FR2_2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FR2_2_AccessParamsPerBand_r17_ExtGroup1(Decoder& dec, FR2_2_AccessParamsPerBand_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.modulation64_QAM_PUSCH_FR2_2_r17 = (FR2_2_AccessParamsPerBand_r17_ExtGroup1_Modulation64_QAM_PUSCH_FR2_2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FR2_2_AccessParamsPerBand_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FR2_2_AccessParamsPerBand_r17_ExtGroup1(FR2_2_AccessParamsPerBand_r17_ExtGroup1& value)
{
    if (value.has_modulation64_QAM_PUSCH_FR2_2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(Encoder& enc, const FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcch_monitoring4_1_r17);
    enc.WriteBit(value.has_pdcch_monitoring4_2_r17);
    enc.WriteBit(value.has_pdcch_monitoring8_4_r17);
    if (value.has_pdcch_monitoring4_1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_monitoring4_1_r17), 0, 0);
    }
    if (value.has_pdcch_monitoring4_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_monitoring4_2_r17), 0, 0);
    }
    if (value.has_pdcch_monitoring8_4_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_monitoring8_4_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(Decoder& dec, FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17& value)
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
        value.pdcch_monitoring4_1_r17 = (FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_1_r17)0;
    }
    if (present_1) {
        value.pdcch_monitoring4_2_r17 = (FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring4_2_r17)0;
    }
    if (present_2) {
        value.pdcch_monitoring8_4_r17 = (FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17_Pdcch_monitoring8_4_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17& value)
{
    if (value.has_pdcch_monitoring4_1_r17) {
    }
    if (value.has_pdcch_monitoring4_2_r17) {
    }
    if (value.has_pdcch_monitoring8_4_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(Encoder& enc, const FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_120kHz_r17);
    enc.WriteBit(value.has_scs_480kHz_r17);
    enc.WriteBit(value.has_scs_960kHz_r17);
    if (value.has_scs_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r17), 0, 0);
    }
    if (value.has_scs_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz_r17), 0, 0);
    }
    if (value.has_scs_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(Decoder& dec, FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17& value)
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
        value.scs_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17)0;
    }
    if (present_1) {
        value.scs_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17)0;
    }
    if (present_2) {
        value.scs_960kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17& value)
{
    if (value.has_scs_120kHz_r17) {
    }
    if (value.has_scs_480kHz_r17) {
    }
    if (value.has_scs_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(Encoder& enc, const FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_120kHz_r17);
    enc.WriteBit(value.has_scs_480kHz_r17);
    enc.WriteBit(value.has_scs_960kHz_r17);
    if (value.has_scs_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r17), 0, 0);
    }
    if (value.has_scs_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_480kHz_r17), 0, 0);
    }
    if (value.has_scs_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_960kHz_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(Decoder& dec, FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17& value)
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
        value.scs_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_120kHz_r17)0;
    }
    if (present_1) {
        value.scs_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_480kHz_r17)0;
    }
    if (present_2) {
        value.scs_960kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17_Scs_960kHz_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17& value)
{
    if (value.has_scs_120kHz_r17) {
    }
    if (value.has_scs_480kHz_r17) {
    }
    if (value.has_scs_960kHz_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FR2_2_AccessParamsPerBand_r17(Encoder& enc, const FR2_2_AccessParamsPerBand_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dl_FR2_2_SCS_120kHz_r17);
    enc.WriteBit(value.has_ul_FR2_2_SCS_120kHz_r17);
    enc.WriteBit(value.has_initialAccessSSB_120kHz_r17);
    enc.WriteBit(value.has_widebandPRACH_SCS_120kHz_r17);
    enc.WriteBit(value.has_multiRB_PUCCH_SCS_120kHz_r17);
    enc.WriteBit(value.has_multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17);
    enc.WriteBit(value.has_multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17);
    enc.WriteBit(value.has_dl_FR2_2_SCS_480kHz_r17);
    enc.WriteBit(value.has_ul_FR2_2_SCS_480kHz_r17);
    enc.WriteBit(value.has_initialAccessSSB_480kHz_r17);
    enc.WriteBit(value.has_widebandPRACH_SCS_480kHz_r17);
    enc.WriteBit(value.has_multiRB_PUCCH_SCS_480kHz_r17);
    enc.WriteBit(value.has_enhancedPDCCH_monitoringSCS_480kHz_r17);
    enc.WriteBit(value.has_dl_FR2_2_SCS_960kHz_r17);
    enc.WriteBit(value.has_ul_FR2_2_SCS_960kHz_r17);
    enc.WriteBit(value.has_multiRB_PUCCH_SCS_960kHz_r17);
    enc.WriteBit(value.has_enhancedPDCCH_monitoringSCS_960kHz_r17);
    enc.WriteBit(value.has_type1_ChannelAccess_FR2_2_r17);
    enc.WriteBit(value.has_type2_ChannelAccess_FR2_2_r17);
    enc.WriteBit(value.has_reduced_BeamSwitchTiming_FR2_2_r17);
    enc.WriteBit(value.has_support32_DL_HARQ_ProcessPerSCS_r17);
    enc.WriteBit(value.has_support32_UL_HARQ_ProcessPerSCS_r17);
    if (value.has_dl_FR2_2_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_FR2_2_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_ul_FR2_2_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FR2_2_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_initialAccessSSB_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.initialAccessSSB_120kHz_r17), 0, 0);
    }
    if (value.has_widebandPRACH_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.widebandPRACH_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_multiRB_PUCCH_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiRB_PUCCH_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_dl_FR2_2_SCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_FR2_2_SCS_480kHz_r17), 0, 0);
    }
    if (value.has_ul_FR2_2_SCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FR2_2_SCS_480kHz_r17), 0, 0);
    }
    if (value.has_initialAccessSSB_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.initialAccessSSB_480kHz_r17), 0, 0);
    }
    if (value.has_widebandPRACH_SCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.widebandPRACH_SCS_480kHz_r17), 0, 0);
    }
    if (value.has_multiRB_PUCCH_SCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiRB_PUCCH_SCS_480kHz_r17), 0, 0);
    }
    if (value.has_enhancedPDCCH_monitoringSCS_480kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedPDCCH_monitoringSCS_480kHz_r17), 0, 0);
    }
    if (value.has_dl_FR2_2_SCS_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_FR2_2_SCS_960kHz_r17), 0, 0);
    }
    if (value.has_ul_FR2_2_SCS_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_FR2_2_SCS_960kHz_r17), 0, 0);
    }
    if (value.has_multiRB_PUCCH_SCS_960kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiRB_PUCCH_SCS_960kHz_r17), 0, 0);
    }
    if (value.has_enhancedPDCCH_monitoringSCS_960kHz_r17) {
        Encode_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(enc, value.enhancedPDCCH_monitoringSCS_960kHz_r17);
    }
    if (value.has_type1_ChannelAccess_FR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_ChannelAccess_FR2_2_r17), 0, 0);
    }
    if (value.has_type2_ChannelAccess_FR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_ChannelAccess_FR2_2_r17), 0, 0);
    }
    if (value.has_reduced_BeamSwitchTiming_FR2_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reduced_BeamSwitchTiming_FR2_2_r17), 0, 0);
    }
    if (value.has_support32_DL_HARQ_ProcessPerSCS_r17) {
        Encode_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(enc, value.support32_DL_HARQ_ProcessPerSCS_r17);
    }
    if (value.has_support32_UL_HARQ_ProcessPerSCS_r17) {
        Encode_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(enc, value.support32_UL_HARQ_ProcessPerSCS_r17);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FR2_2_AccessParamsPerBand_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FR2_2_AccessParamsPerBand_r17(Decoder& dec, FR2_2_AccessParamsPerBand_r17& value)
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
    if (present_0) {
        value.dl_FR2_2_SCS_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_120kHz_r17)0;
    }
    if (present_1) {
        value.ul_FR2_2_SCS_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_120kHz_r17)0;
    }
    if (present_2) {
        value.initialAccessSSB_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_120kHz_r17)0;
    }
    if (present_3) {
        value.widebandPRACH_SCS_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_120kHz_r17)0;
    }
    if (present_4) {
        value.multiRB_PUCCH_SCS_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_120kHz_r17)0;
    }
    if (present_5) {
        value.multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_MultiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17)0;
    }
    if (present_6) {
        value.multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17 = (FR2_2_AccessParamsPerBand_r17_MultiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17)0;
    }
    if (present_7) {
        value.dl_FR2_2_SCS_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_480kHz_r17)0;
    }
    if (present_8) {
        value.ul_FR2_2_SCS_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_480kHz_r17)0;
    }
    if (present_9) {
        value.initialAccessSSB_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_InitialAccessSSB_480kHz_r17)0;
    }
    if (present_10) {
        value.widebandPRACH_SCS_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_WidebandPRACH_SCS_480kHz_r17)0;
    }
    if (present_11) {
        value.multiRB_PUCCH_SCS_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_480kHz_r17)0;
    }
    if (present_12) {
        value.enhancedPDCCH_monitoringSCS_480kHz_r17 = (FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_480kHz_r17)0;
    }
    if (present_13) {
        value.dl_FR2_2_SCS_960kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Dl_FR2_2_SCS_960kHz_r17)0;
    }
    if (present_14) {
        value.ul_FR2_2_SCS_960kHz_r17 = (FR2_2_AccessParamsPerBand_r17_Ul_FR2_2_SCS_960kHz_r17)0;
    }
    if (present_15) {
        value.multiRB_PUCCH_SCS_960kHz_r17 = (FR2_2_AccessParamsPerBand_r17_MultiRB_PUCCH_SCS_960kHz_r17)0;
    }
    if (present_16) {
        if (Decode_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(dec, value.enhancedPDCCH_monitoringSCS_960kHz_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        value.type1_ChannelAccess_FR2_2_r17 = (FR2_2_AccessParamsPerBand_r17_Type1_ChannelAccess_FR2_2_r17)0;
    }
    if (present_18) {
        value.type2_ChannelAccess_FR2_2_r17 = (FR2_2_AccessParamsPerBand_r17_Type2_ChannelAccess_FR2_2_r17)0;
    }
    if (present_19) {
        value.reduced_BeamSwitchTiming_FR2_2_r17 = (FR2_2_AccessParamsPerBand_r17_Reduced_BeamSwitchTiming_FR2_2_r17)0;
    }
    if (present_20) {
        if (Decode_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(dec, value.support32_DL_HARQ_ProcessPerSCS_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_21) {
        if (Decode_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(dec, value.support32_UL_HARQ_ProcessPerSCS_r17) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_FR2_2_AccessParamsPerBand_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_FR2_2_AccessParamsPerBand_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FR2_2_AccessParamsPerBand_r17(FR2_2_AccessParamsPerBand_r17& value)
{
    if (value.has_dl_FR2_2_SCS_120kHz_r17) {
    }
    if (value.has_ul_FR2_2_SCS_120kHz_r17) {
    }
    if (value.has_initialAccessSSB_120kHz_r17) {
    }
    if (value.has_widebandPRACH_SCS_120kHz_r17) {
    }
    if (value.has_multiRB_PUCCH_SCS_120kHz_r17) {
    }
    if (value.has_multiPDSCH_SingleDCI_FR2_2_SCS_120kHz_r17) {
    }
    if (value.has_multiPUSCH_SingleDCI_FR2_2_SCS_120kHz_r17) {
    }
    if (value.has_dl_FR2_2_SCS_480kHz_r17) {
    }
    if (value.has_ul_FR2_2_SCS_480kHz_r17) {
    }
    if (value.has_initialAccessSSB_480kHz_r17) {
    }
    if (value.has_widebandPRACH_SCS_480kHz_r17) {
    }
    if (value.has_multiRB_PUCCH_SCS_480kHz_r17) {
    }
    if (value.has_enhancedPDCCH_monitoringSCS_480kHz_r17) {
    }
    if (value.has_dl_FR2_2_SCS_960kHz_r17) {
    }
    if (value.has_ul_FR2_2_SCS_960kHz_r17) {
    }
    if (value.has_multiRB_PUCCH_SCS_960kHz_r17) {
    }
    if (value.has_enhancedPDCCH_monitoringSCS_960kHz_r17) {
        Free_FR2_2_AccessParamsPerBand_r17_EnhancedPDCCH_monitoringSCS_960kHz_r17(value.enhancedPDCCH_monitoringSCS_960kHz_r17);
    }
    if (value.has_type1_ChannelAccess_FR2_2_r17) {
    }
    if (value.has_type2_ChannelAccess_FR2_2_r17) {
    }
    if (value.has_reduced_BeamSwitchTiming_FR2_2_r17) {
    }
    if (value.has_support32_DL_HARQ_ProcessPerSCS_r17) {
        Free_FR2_2_AccessParamsPerBand_r17_Support32_DL_HARQ_ProcessPerSCS_r17(value.support32_DL_HARQ_ProcessPerSCS_r17);
    }
    if (value.has_support32_UL_HARQ_ProcessPerSCS_r17) {
        Free_FR2_2_AccessParamsPerBand_r17_Support32_UL_HARQ_ProcessPerSCS_r17(value.support32_UL_HARQ_ProcessPerSCS_r17);
    }
    if (value.has_extGroup1) {
        Free_FR2_2_AccessParamsPerBand_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_HighSpeedParameters_r16(Encoder& enc, const HighSpeedParameters_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_measurementEnhancement_r16);
    enc.WriteBit(value.has_demodulationEnhancement_r16);
    if (value.has_measurementEnhancement_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measurementEnhancement_r16), 0, 0);
    }
    if (value.has_demodulationEnhancement_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.demodulationEnhancement_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_HighSpeedParameters_r16(Decoder& dec, HighSpeedParameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.measurementEnhancement_r16 = (HighSpeedParameters_r16_MeasurementEnhancement_r16)0;
    }
    if (present_1) {
        value.demodulationEnhancement_r16 = (HighSpeedParameters_r16_DemodulationEnhancement_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HighSpeedParameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HighSpeedParameters_r16(HighSpeedParameters_r16& value)
{
    if (value.has_measurementEnhancement_r16) {
    }
    if (value.has_demodulationEnhancement_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_HighSpeedParameters_v1650(Encoder& enc, const HighSpeedParameters_v1650& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case HighSpeedParameters_v1650_Tag_intraNR_MeasurementEnhancement_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.intraNR_MeasurementEnhancement_r16), 0, 0);
        break;
    case HighSpeedParameters_v1650_Tag_interRAT_MeasurementEnhancement_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.interRAT_MeasurementEnhancement_r16), 0, 0);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_HighSpeedParameters_v1650(Decoder& dec, HighSpeedParameters_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (HighSpeedParameters_v1650_Tag)root_index;
    switch (value.tag) {
    case HighSpeedParameters_v1650_Tag_intraNR_MeasurementEnhancement_r16: {
        value.u.intraNR_MeasurementEnhancement_r16 = (HighSpeedParameters_v1650_IntraNR_MeasurementEnhancement_r16)0;
        break;
    }
    case HighSpeedParameters_v1650_Tag_interRAT_MeasurementEnhancement_r16: {
        value.u.interRAT_MeasurementEnhancement_r16 = (HighSpeedParameters_v1650_InterRAT_MeasurementEnhancement_r16)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HighSpeedParameters_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HighSpeedParameters_v1650(HighSpeedParameters_v1650& value)
{
    switch (value.tag) {
    case HighSpeedParameters_v1650_Tag_intraNR_MeasurementEnhancement_r16:
        break;
    case HighSpeedParameters_v1650_Tag_interRAT_MeasurementEnhancement_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_HighSpeedParameters_v1700(Encoder& enc, const HighSpeedParameters_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_measurementEnhancementCA_r17);
    enc.WriteBit(value.has_measurementEnhancementInterFreq_r17);
    if (value.has_measurementEnhancementCA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measurementEnhancementCA_r17), 0, 0);
    }
    if (value.has_measurementEnhancementInterFreq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measurementEnhancementInterFreq_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_HighSpeedParameters_v1700(Decoder& dec, HighSpeedParameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.measurementEnhancementCA_r17 = (HighSpeedParameters_v1700_MeasurementEnhancementCA_r17)0;
    }
    if (present_1) {
        value.measurementEnhancementInterFreq_r17 = (HighSpeedParameters_v1700_MeasurementEnhancementInterFreq_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_HighSpeedParameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_HighSpeedParameters_v1700(HighSpeedParameters_v1700& value)
{
    if (value.has_measurementEnhancementCA_r17) {
    }
    if (value.has_measurementEnhancementInterFreq_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_ParametersCommon_ExtGroup1(Encoder& enc, const IMS_ParametersCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_voiceOverSCG_BearerEUTRA_5GC);
    if (value.has_voiceOverSCG_BearerEUTRA_5GC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceOverSCG_BearerEUTRA_5GC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_IMS_ParametersCommon_ExtGroup1(Decoder& dec, IMS_ParametersCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.voiceOverSCG_BearerEUTRA_5GC = (IMS_ParametersCommon_ExtGroup1_VoiceOverSCG_BearerEUTRA_5GC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IMS_ParametersCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_ParametersCommon_ExtGroup1(IMS_ParametersCommon_ExtGroup1& value)
{
    if (value.has_voiceOverSCG_BearerEUTRA_5GC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_ParametersCommon_ExtGroup2(Encoder& enc, const IMS_ParametersCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_voiceFallbackIndicationEPS_r16);
    if (value.has_voiceFallbackIndicationEPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceFallbackIndicationEPS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_IMS_ParametersCommon_ExtGroup2(Decoder& dec, IMS_ParametersCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.voiceFallbackIndicationEPS_r16 = (IMS_ParametersCommon_ExtGroup2_VoiceFallbackIndicationEPS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IMS_ParametersCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_ParametersCommon_ExtGroup2(IMS_ParametersCommon_ExtGroup2& value)
{
    if (value.has_voiceFallbackIndicationEPS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_ParametersCommon(Encoder& enc, const IMS_ParametersCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_voiceOverEUTRA_5GC);
    if (value.has_voiceOverEUTRA_5GC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceOverEUTRA_5GC), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_IMS_ParametersCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_IMS_ParametersCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_IMS_ParametersCommon(Decoder& dec, IMS_ParametersCommon& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.voiceOverEUTRA_5GC = (IMS_ParametersCommon_VoiceOverEUTRA_5GC)0;
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
    if (Decode_IMS_ParametersCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_IMS_ParametersCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_IMS_ParametersCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_ParametersCommon(IMS_ParametersCommon& value)
{
    if (value.has_voiceOverEUTRA_5GC) {
    }
    if (value.has_extGroup1) {
        Free_IMS_ParametersCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_IMS_ParametersCommon_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_ParametersFRX_Diff(Encoder& enc, const IMS_ParametersFRX_Diff& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_voiceOverNR);
    if (value.has_voiceOverNR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceOverNR), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_IMS_ParametersFRX_Diff(Decoder& dec, IMS_ParametersFRX_Diff& value)
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
        value.voiceOverNR = (IMS_ParametersFRX_Diff_VoiceOverNR)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IMS_ParametersFRX_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_ParametersFRX_Diff(IMS_ParametersFRX_Diff& value)
{
    if (value.has_voiceOverNR) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_Parameters(Encoder& enc, const IMS_Parameters& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ims_ParametersCommon);
    enc.WriteBit(value.has_ims_ParametersFRX_Diff);
    if (value.has_ims_ParametersCommon) {
        Encode_IMS_ParametersCommon(enc, value.ims_ParametersCommon);
    }
    if (value.has_ims_ParametersFRX_Diff) {
        Encode_IMS_ParametersFRX_Diff(enc, value.ims_ParametersFRX_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_IMS_Parameters(Decoder& dec, IMS_Parameters& value)
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
        if (Decode_IMS_ParametersCommon(dec, value.ims_ParametersCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IMS_ParametersFRX_Diff(dec, value.ims_ParametersFRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IMS_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_Parameters(IMS_Parameters& value)
{
    if (value.has_ims_ParametersCommon) {
        Free_IMS_ParametersCommon(value.ims_ParametersCommon);
    }
    if (value.has_ims_ParametersFRX_Diff) {
        Free_IMS_ParametersFRX_Diff(value.ims_ParametersFRX_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_ParametersFR2_2_r17(Encoder& enc, const IMS_ParametersFR2_2_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_voiceOverNR_r17);
    if (value.has_voiceOverNR_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.voiceOverNR_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_IMS_ParametersFR2_2_r17(Decoder& dec, IMS_ParametersFR2_2_r17& value)
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
        value.voiceOverNR_r17 = (IMS_ParametersFR2_2_r17_VoiceOverNR_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IMS_ParametersFR2_2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_ParametersFR2_2_r17(IMS_ParametersFR2_2_r17& value)
{
    if (value.has_voiceOverNR_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_IMS_Parameters_v1700(Encoder& enc, const IMS_Parameters_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_ims_ParametersFR2_2_r17);
    if (value.has_ims_ParametersFR2_2_r17) {
        Encode_IMS_ParametersFR2_2_r17(enc, value.ims_ParametersFR2_2_r17);
    }
    return enc.Error();
}

ErrorCode Decode_IMS_Parameters_v1700(Decoder& dec, IMS_Parameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_IMS_ParametersFR2_2_r17(dec, value.ims_ParametersFR2_2_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IMS_Parameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IMS_Parameters_v1700(IMS_Parameters_v1700& value)
{
    if (value.has_ims_ParametersFR2_2_r17) {
        Free_IMS_ParametersFR2_2_r17(value.ims_ParametersFR2_2_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UTRA_FDD_Parameters_r16(Encoder& enc, const UTRA_FDD_Parameters_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.supportedBandListUTRA_FDD_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandListUTRA_FDD_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedBandListUTRA_FDD_r16_items[i]), 0, 31);
}
    return enc.Error();
}

ErrorCode Decode_UTRA_FDD_Parameters_r16(Decoder& dec, UTRA_FDD_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandListUTRA_FDD_r16_count)) { goto fail; }
if (value.supportedBandListUTRA_FDD_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandListUTRA_FDD_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandListUTRA_FDD_r16_count > 0u) {
    value.supportedBandListUTRA_FDD_r16_items = (SupportedBandUTRA_FDD_r16*)std::malloc((std::size_t)value.supportedBandListUTRA_FDD_r16_count * sizeof(SupportedBandUTRA_FDD_r16));
    if (value.supportedBandListUTRA_FDD_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandListUTRA_FDD_r16_items, 0, (std::size_t)value.supportedBandListUTRA_FDD_r16_count * sizeof(SupportedBandUTRA_FDD_r16));
}
for (std::uint32_t i = 0; i < value.supportedBandListUTRA_FDD_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
    value.supportedBandListUTRA_FDD_r16_items[i] = (SupportedBandUTRA_FDD_r16)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UTRA_FDD_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UTRA_FDD_Parameters_r16(UTRA_FDD_Parameters_r16& value)
{
    if (value.supportedBandListUTRA_FDD_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedBandListUTRA_FDD_r16_count; ++i) {
        }
        std::free(value.supportedBandListUTRA_FDD_r16_items);
        value.supportedBandListUTRA_FDD_r16_items = nullptr;
    }
    value.supportedBandListUTRA_FDD_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_InterRAT_Parameters_ExtGroup1(Encoder& enc, const InterRAT_Parameters_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_utra_FDD_r16);
    if (value.has_utra_FDD_r16) {
        Encode_UTRA_FDD_Parameters_r16(enc, value.utra_FDD_r16);
    }
    return enc.Error();
}

ErrorCode Decode_InterRAT_Parameters_ExtGroup1(Decoder& dec, InterRAT_Parameters_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_UTRA_FDD_Parameters_r16(dec, value.utra_FDD_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterRAT_Parameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterRAT_Parameters_ExtGroup1(InterRAT_Parameters_ExtGroup1& value)
{
    if (value.has_utra_FDD_r16) {
        Free_UTRA_FDD_Parameters_r16(value.utra_FDD_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_ParametersCommon_ExtGroup1(Encoder& enc, const EUTRA_ParametersCommon_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ne_DC);
    if (value.has_ne_DC) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ne_DC), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_ParametersCommon_ExtGroup1(Decoder& dec, EUTRA_ParametersCommon_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.ne_DC = (EUTRA_ParametersCommon_ExtGroup1_Ne_DC)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_ParametersCommon_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_ParametersCommon_ExtGroup1(EUTRA_ParametersCommon_ExtGroup1& value)
{
    if (value.has_ne_DC) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_ParametersCommon_ExtGroup2(Encoder& enc, const EUTRA_ParametersCommon_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_nr_HO_ToEN_DC_r16);
    if (value.has_nr_HO_ToEN_DC_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_HO_ToEN_DC_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_ParametersCommon_ExtGroup2(Decoder& dec, EUTRA_ParametersCommon_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.nr_HO_ToEN_DC_r16 = (EUTRA_ParametersCommon_ExtGroup2_Nr_HO_ToEN_DC_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_ParametersCommon_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_ParametersCommon_ExtGroup2(EUTRA_ParametersCommon_ExtGroup2& value)
{
    if (value.has_nr_HO_ToEN_DC_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_ParametersCommon(Encoder& enc, const EUTRA_ParametersCommon& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mfbi_EUTRA);
    enc.WriteBit(value.has_modifiedMPR_BehaviorEUTRA);
    enc.WriteBit(value.has_multiNS_Pmax_EUTRA);
    enc.WriteBit(value.has_rs_SINR_MeasEUTRA);
    if (value.has_mfbi_EUTRA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mfbi_EUTRA), 0, 0);
    }
    if (value.has_modifiedMPR_BehaviorEUTRA) {
        enc.WriteFixedBitString(value.modifiedMPR_BehaviorEUTRA.bytes, value.modifiedMPR_BehaviorEUTRA.bitLength, 32, 32);
    }
    if (value.has_multiNS_Pmax_EUTRA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiNS_Pmax_EUTRA), 0, 0);
    }
    if (value.has_rs_SINR_MeasEUTRA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rs_SINR_MeasEUTRA), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_EUTRA_ParametersCommon_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_EUTRA_ParametersCommon_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_ParametersCommon(Decoder& dec, EUTRA_ParametersCommon& value)
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
        value.mfbi_EUTRA = (EUTRA_ParametersCommon_Mfbi_EUTRA)0;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.modifiedMPR_BehaviorEUTRA.bytes = string_bytes;
        value.modifiedMPR_BehaviorEUTRA.bitLength = string_length;
    }
    if (present_2) {
        value.multiNS_Pmax_EUTRA = (EUTRA_ParametersCommon_MultiNS_Pmax_EUTRA)0;
    }
    if (present_3) {
        value.rs_SINR_MeasEUTRA = (EUTRA_ParametersCommon_Rs_SINR_MeasEUTRA)0;
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
    if (Decode_EUTRA_ParametersCommon_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_EUTRA_ParametersCommon_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_EUTRA_ParametersCommon(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_ParametersCommon(EUTRA_ParametersCommon& value)
{
    if (value.has_mfbi_EUTRA) {
    }
    if (value.has_modifiedMPR_BehaviorEUTRA) {
        std::free(value.modifiedMPR_BehaviorEUTRA.bytes);
        value.modifiedMPR_BehaviorEUTRA.bytes = nullptr;
        value.modifiedMPR_BehaviorEUTRA.bitLength = 0;
    }
    if (value.has_multiNS_Pmax_EUTRA) {
    }
    if (value.has_rs_SINR_MeasEUTRA) {
    }
    if (value.has_extGroup1) {
        Free_EUTRA_ParametersCommon_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_EUTRA_ParametersCommon_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_ParametersXDD_Diff(Encoder& enc, const EUTRA_ParametersXDD_Diff& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rsrqMeasWidebandEUTRA);
    if (value.has_rsrqMeasWidebandEUTRA) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrqMeasWidebandEUTRA), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_ParametersXDD_Diff(Decoder& dec, EUTRA_ParametersXDD_Diff& value)
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
        value.rsrqMeasWidebandEUTRA = (EUTRA_ParametersXDD_Diff_RsrqMeasWidebandEUTRA)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_ParametersXDD_Diff(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_ParametersXDD_Diff(EUTRA_ParametersXDD_Diff& value)
{
    if (value.has_rsrqMeasWidebandEUTRA) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_Parameters(Encoder& enc, const EUTRA_Parameters& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_eutra_ParametersCommon);
    enc.WriteBit(value.has_eutra_ParametersXDD_Diff);
enc.WriteConstrainedLength(value.supportedBandListEUTRA_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandListEUTRA_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.supportedBandListEUTRA_items[i]), 1, 256);
}
    if (value.has_eutra_ParametersCommon) {
        Encode_EUTRA_ParametersCommon(enc, value.eutra_ParametersCommon);
    }
    if (value.has_eutra_ParametersXDD_Diff) {
        Encode_EUTRA_ParametersXDD_Diff(enc, value.eutra_ParametersXDD_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_Parameters(Decoder& dec, EUTRA_Parameters& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandListEUTRA_count)) { goto fail; }
if (value.supportedBandListEUTRA_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandListEUTRA_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandListEUTRA_count > 0u) {
    value.supportedBandListEUTRA_items = (FreqBandIndicatorEUTRA*)std::malloc((std::size_t)value.supportedBandListEUTRA_count * sizeof(FreqBandIndicatorEUTRA));
    if (value.supportedBandListEUTRA_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandListEUTRA_items, 0, (std::size_t)value.supportedBandListEUTRA_count * sizeof(FreqBandIndicatorEUTRA));
}
for (std::uint32_t i = 0; i < value.supportedBandListEUTRA_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
    value.supportedBandListEUTRA_items[i] = (FreqBandIndicatorEUTRA)tmp_value;
}
    }
    if (present_0) {
        if (Decode_EUTRA_ParametersCommon(dec, value.eutra_ParametersCommon) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_EUTRA_ParametersXDD_Diff(dec, value.eutra_ParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_Parameters(EUTRA_Parameters& value)
{
    if (value.supportedBandListEUTRA_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedBandListEUTRA_count; ++i) {
        }
        std::free(value.supportedBandListEUTRA_items);
        value.supportedBandListEUTRA_items = nullptr;
    }
    value.supportedBandListEUTRA_count = 0;
    if (value.has_eutra_ParametersCommon) {
        Free_EUTRA_ParametersCommon(value.eutra_ParametersCommon);
    }
    if (value.has_eutra_ParametersXDD_Diff) {
        Free_EUTRA_ParametersXDD_Diff(value.eutra_ParametersXDD_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_InterRAT_Parameters(Encoder& enc, const InterRAT_Parameters& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_eutra);
    if (value.has_eutra) {
        Encode_EUTRA_Parameters(enc, value.eutra);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_InterRAT_Parameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_InterRAT_Parameters(Decoder& dec, InterRAT_Parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_EUTRA_Parameters(dec, value.eutra) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_InterRAT_Parameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_InterRAT_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterRAT_Parameters(InterRAT_Parameters& value)
{
    if (value.has_eutra) {
        Free_EUTRA_Parameters(value.eutra);
    }
    if (value.has_extGroup1) {
        Free_InterRAT_Parameters_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
