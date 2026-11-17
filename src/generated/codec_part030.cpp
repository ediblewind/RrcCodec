/* ============================================================================
 * src/generated/codec_part030.cpp — 生成的编解码函数
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

ErrorCode Encode_RF_ParametersMRDC_v16e0(Encoder& enc, const RF_ParametersMRDC_v16e0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v16e0);
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v16e0) {
        Encode_BandCombinationList_UplinkTxSwitch_v16e0(enc, value.supportedBandCombinationList_UplinkTxSwitch_v16e0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_v16e0(Decoder& dec, RF_ParametersMRDC_v16e0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v16e0(dec, value.supportedBandCombinationList_UplinkTxSwitch_v16e0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_v16e0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_v16e0(RF_ParametersMRDC_v16e0& value)
{
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v16e0) {
        Free_BandCombinationList_UplinkTxSwitch_v16e0(value.supportedBandCombinationList_UplinkTxSwitch_v16e0);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RLC_Parameters_ExtGroup1(Encoder& enc, const RLC_Parameters_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_extendedT_PollRetransmit_r16);
    enc.WriteBit(value.has_extendedT_StatusProhibit_r16);
    if (value.has_extendedT_PollRetransmit_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedT_PollRetransmit_r16), 0, 0);
    }
    if (value.has_extendedT_StatusProhibit_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedT_StatusProhibit_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_Parameters_ExtGroup1(Decoder& dec, RLC_Parameters_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.extendedT_PollRetransmit_r16 = (RLC_Parameters_ExtGroup1_ExtendedT_PollRetransmit_r16)0;
    }
    if (present_1) {
        value.extendedT_StatusProhibit_r16 = (RLC_Parameters_ExtGroup1_ExtendedT_StatusProhibit_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Parameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Parameters_ExtGroup1(RLC_Parameters_ExtGroup1& value)
{
    if (value.has_extendedT_PollRetransmit_r16) {
    }
    if (value.has_extendedT_StatusProhibit_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RLC_Parameters_ExtGroup2(Encoder& enc, const RLC_Parameters_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_am_WithLongSN_RedCap_r17);
    if (value.has_am_WithLongSN_RedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.am_WithLongSN_RedCap_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_Parameters_ExtGroup2(Decoder& dec, RLC_Parameters_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.am_WithLongSN_RedCap_r17 = (RLC_Parameters_ExtGroup2_Am_WithLongSN_RedCap_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Parameters_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Parameters_ExtGroup2(RLC_Parameters_ExtGroup2& value)
{
    if (value.has_am_WithLongSN_RedCap_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RLC_Parameters_ExtGroup3(Encoder& enc, const RLC_Parameters_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_am_WithLongSN_NCR_r18);
    if (value.has_am_WithLongSN_NCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.am_WithLongSN_NCR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_Parameters_ExtGroup3(Decoder& dec, RLC_Parameters_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.am_WithLongSN_NCR_r18 = (RLC_Parameters_ExtGroup3_Am_WithLongSN_NCR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_Parameters_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Parameters_ExtGroup3(RLC_Parameters_ExtGroup3& value)
{
    if (value.has_am_WithLongSN_NCR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RLC_Parameters(Encoder& enc, const RLC_Parameters& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_am_WithShortSN);
    enc.WriteBit(value.has_um_WithShortSN);
    enc.WriteBit(value.has_um_WithLongSN);
    if (value.has_am_WithShortSN) {
        enc.WriteConstrainedInteger((std::int64_t)(value.am_WithShortSN), 0, 0);
    }
    if (value.has_um_WithShortSN) {
        enc.WriteConstrainedInteger((std::int64_t)(value.um_WithShortSN), 0, 0);
    }
    if (value.has_um_WithLongSN) {
        enc.WriteConstrainedInteger((std::int64_t)(value.um_WithLongSN), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RLC_Parameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RLC_Parameters_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_RLC_Parameters_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RLC_Parameters(Decoder& dec, RLC_Parameters& value)
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
        value.am_WithShortSN = (RLC_Parameters_Am_WithShortSN)0;
    }
    if (present_1) {
        value.um_WithShortSN = (RLC_Parameters_Um_WithShortSN)0;
    }
    if (present_2) {
        value.um_WithLongSN = (RLC_Parameters_Um_WithLongSN)0;
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
    if (Decode_RLC_Parameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RLC_Parameters_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_RLC_Parameters_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_RLC_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_Parameters(RLC_Parameters& value)
{
    if (value.has_am_WithShortSN) {
    }
    if (value.has_um_WithShortSN) {
    }
    if (value.has_um_WithLongSN) {
    }
    if (value.has_extGroup1) {
        Free_RLC_Parameters_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RLC_Parameters_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_RLC_Parameters_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SDAP_Parameters_ExtGroup1(Encoder& enc, const SDAP_Parameters_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sdap_QOS_IAB_r16);
    enc.WriteBit(value.has_sdapHeaderIAB_r16);
    if (value.has_sdap_QOS_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdap_QOS_IAB_r16), 0, 0);
    }
    if (value.has_sdapHeaderIAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdapHeaderIAB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SDAP_Parameters_ExtGroup1(Decoder& dec, SDAP_Parameters_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sdap_QOS_IAB_r16 = (SDAP_Parameters_ExtGroup1_Sdap_QOS_IAB_r16)0;
    }
    if (present_1) {
        value.sdapHeaderIAB_r16 = (SDAP_Parameters_ExtGroup1_SdapHeaderIAB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDAP_Parameters_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDAP_Parameters_ExtGroup1(SDAP_Parameters_ExtGroup1& value)
{
    if (value.has_sdap_QOS_IAB_r16) {
    }
    if (value.has_sdapHeaderIAB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SDAP_Parameters_ExtGroup2(Encoder& enc, const SDAP_Parameters_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_sdap_QOS_NCR_r18);
    enc.WriteBit(value.has_sdap_HeaderNCR_r18);
    if (value.has_sdap_QOS_NCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdap_QOS_NCR_r18), 0, 0);
    }
    if (value.has_sdap_HeaderNCR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sdap_HeaderNCR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SDAP_Parameters_ExtGroup2(Decoder& dec, SDAP_Parameters_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sdap_QOS_NCR_r18 = (SDAP_Parameters_ExtGroup2_Sdap_QOS_NCR_r18)0;
    }
    if (present_1) {
        value.sdap_HeaderNCR_r18 = (SDAP_Parameters_ExtGroup2_Sdap_HeaderNCR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SDAP_Parameters_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDAP_Parameters_ExtGroup2(SDAP_Parameters_ExtGroup2& value)
{
    if (value.has_sdap_QOS_NCR_r18) {
    }
    if (value.has_sdap_HeaderNCR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SDAP_Parameters(Encoder& enc, const SDAP_Parameters& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_as_ReflectiveQoS);
    if (value.has_as_ReflectiveQoS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.as_ReflectiveQoS), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SDAP_Parameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SDAP_Parameters_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SDAP_Parameters(Decoder& dec, SDAP_Parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.as_ReflectiveQoS = (SDAP_Parameters_As_ReflectiveQoS)0;
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
    if (Decode_SDAP_Parameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SDAP_Parameters_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_SDAP_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SDAP_Parameters(SDAP_Parameters& value)
{
    if (value.has_as_ReflectiveQoS) {
    }
    if (value.has_extGroup1) {
        Free_SDAP_Parameters_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SDAP_Parameters_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SharedSpectrumChAccessParamsSidelinkPerBand_r18(Encoder& enc, const SharedSpectrumChAccessParamsSidelinkPerBand_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_DynamicChannelAccess_r18);
    enc.WriteBit(value.has_sl_LBT_Option1_r18);
    enc.WriteBit(value.has_sl_LBT_Option2_r18);
    enc.WriteBit(value.has_sl_Interlace_RB_TxRx_r18);
    enc.WriteBit(value.has_sl_PowerClassUnlicensed_r18);
    if (value.has_sl_DynamicChannelAccess_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DynamicChannelAccess_r18), 0, 0);
    }
    if (value.has_sl_LBT_Option1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LBT_Option1_r18), 0, 0);
    }
    if (value.has_sl_LBT_Option2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LBT_Option2_r18), 0, 0);
    }
    if (value.has_sl_Interlace_RB_TxRx_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Interlace_RB_TxRx_r18), 0, 0);
    }
    if (value.has_sl_PowerClassUnlicensed_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PowerClassUnlicensed_r18), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SharedSpectrumChAccessParamsSidelinkPerBand_r18(Decoder& dec, SharedSpectrumChAccessParamsSidelinkPerBand_r18& value)
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
        value.sl_DynamicChannelAccess_r18 = (SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_DynamicChannelAccess_r18)0;
    }
    if (present_1) {
        value.sl_LBT_Option1_r18 = (SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option1_r18)0;
    }
    if (present_2) {
        value.sl_LBT_Option2_r18 = (SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_LBT_Option2_r18)0;
    }
    if (present_3) {
        value.sl_Interlace_RB_TxRx_r18 = (SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_Interlace_RB_TxRx_r18)0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.sl_PowerClassUnlicensed_r18 = (SharedSpectrumChAccessParamsSidelinkPerBand_r18_Sl_PowerClassUnlicensed_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SharedSpectrumChAccessParamsSidelinkPerBand_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SharedSpectrumChAccessParamsSidelinkPerBand_r18(SharedSpectrumChAccessParamsSidelinkPerBand_r18& value)
{
    if (value.has_sl_DynamicChannelAccess_r18) {
    }
    if (value.has_sl_LBT_Option1_r18) {
    }
    if (value.has_sl_LBT_Option2_r18) {
    }
    if (value.has_sl_Interlace_RB_TxRx_r18) {
    }
    if (value.has_sl_PowerClassUnlicensed_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RelayParameters_r17_ExtGroup1(Encoder& enc, const RelayParameters_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_relayUE_U2U_OperationL2_r18);
    enc.WriteBit(value.has_remoteUE_U2U_OperationL2_r18);
    enc.WriteBit(value.has_remoteUE_U2N_PathSwitchOperationL2_r18);
    enc.WriteBit(value.has_multipathRemoteUE_PC5L2_r18);
    enc.WriteBit(value.has_multipathRelayUE_N3C_r18);
    enc.WriteBit(value.has_multipathRemoteUE_N3C_r18);
    enc.WriteBit(value.has_remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18);
    enc.WriteBit(value.has_pdcp_DuplicationMoreThanOneUuRLC_r18);
    enc.WriteBit(value.has_pdcp_CADuplicationDirectpath_DRB_r18);
    enc.WriteBit(value.has_pdcp_CADuplicationDirectpath_SRB_r18);
    enc.WriteBit(value.has_pdcp_DuplicationMP_SplitDRB_r18);
    enc.WriteBit(value.has_pdcp_DuplicationMP_SplitSRB_r18);
    enc.WriteBit(value.has_directpathRLF_RecoveryViaSRB1_r18);
    if (value.has_relayUE_U2U_OperationL2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.relayUE_U2U_OperationL2_r18), 0, 0);
    }
    if (value.has_remoteUE_U2U_OperationL2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.remoteUE_U2U_OperationL2_r18), 0, 0);
    }
    if (value.has_remoteUE_U2N_PathSwitchOperationL2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.remoteUE_U2N_PathSwitchOperationL2_r18), 0, 0);
    }
    if (value.has_multipathRemoteUE_PC5L2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipathRemoteUE_PC5L2_r18), 0, 0);
    }
    if (value.has_multipathRelayUE_N3C_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipathRelayUE_N3C_r18), 0, 0);
    }
    if (value.has_multipathRemoteUE_N3C_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipathRemoteUE_N3C_r18), 0, 0);
    }
    if (value.has_remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18), 0, 0);
    }
    if (value.has_pdcp_DuplicationMoreThanOneUuRLC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationMoreThanOneUuRLC_r18), 0, 0);
    }
    if (value.has_pdcp_CADuplicationDirectpath_DRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_CADuplicationDirectpath_DRB_r18), 0, 0);
    }
    if (value.has_pdcp_CADuplicationDirectpath_SRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_CADuplicationDirectpath_SRB_r18), 0, 0);
    }
    if (value.has_pdcp_DuplicationMP_SplitDRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationMP_SplitDRB_r18), 0, 0);
    }
    if (value.has_pdcp_DuplicationMP_SplitSRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationMP_SplitSRB_r18), 0, 0);
    }
    if (value.has_directpathRLF_RecoveryViaSRB1_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directpathRLF_RecoveryViaSRB1_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RelayParameters_r17_ExtGroup1(Decoder& dec, RelayParameters_r17_ExtGroup1& value)
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
        value.relayUE_U2U_OperationL2_r18 = (RelayParameters_r17_ExtGroup1_RelayUE_U2U_OperationL2_r18)0;
    }
    if (present_1) {
        value.remoteUE_U2U_OperationL2_r18 = (RelayParameters_r17_ExtGroup1_RemoteUE_U2U_OperationL2_r18)0;
    }
    if (present_2) {
        value.remoteUE_U2N_PathSwitchOperationL2_r18 = (RelayParameters_r17_ExtGroup1_RemoteUE_U2N_PathSwitchOperationL2_r18)0;
    }
    if (present_3) {
        value.multipathRemoteUE_PC5L2_r18 = (RelayParameters_r17_ExtGroup1_MultipathRemoteUE_PC5L2_r18)0;
    }
    if (present_4) {
        value.multipathRelayUE_N3C_r18 = (RelayParameters_r17_ExtGroup1_MultipathRelayUE_N3C_r18)0;
    }
    if (present_5) {
        value.multipathRemoteUE_N3C_r18 = (RelayParameters_r17_ExtGroup1_MultipathRemoteUE_N3C_r18)0;
    }
    if (present_6) {
        value.remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18 = (RelayParameters_r17_ExtGroup1_RemoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18)0;
    }
    if (present_7) {
        value.pdcp_DuplicationMoreThanOneUuRLC_r18 = (RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMoreThanOneUuRLC_r18)0;
    }
    if (present_8) {
        value.pdcp_CADuplicationDirectpath_DRB_r18 = (RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_DRB_r18)0;
    }
    if (present_9) {
        value.pdcp_CADuplicationDirectpath_SRB_r18 = (RelayParameters_r17_ExtGroup1_Pdcp_CADuplicationDirectpath_SRB_r18)0;
    }
    if (present_10) {
        value.pdcp_DuplicationMP_SplitDRB_r18 = (RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitDRB_r18)0;
    }
    if (present_11) {
        value.pdcp_DuplicationMP_SplitSRB_r18 = (RelayParameters_r17_ExtGroup1_Pdcp_DuplicationMP_SplitSRB_r18)0;
    }
    if (present_12) {
        value.directpathRLF_RecoveryViaSRB1_r18 = (RelayParameters_r17_ExtGroup1_DirectpathRLF_RecoveryViaSRB1_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RelayParameters_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RelayParameters_r17_ExtGroup1(RelayParameters_r17_ExtGroup1& value)
{
    if (value.has_relayUE_U2U_OperationL2_r18) {
    }
    if (value.has_remoteUE_U2U_OperationL2_r18) {
    }
    if (value.has_remoteUE_U2N_PathSwitchOperationL2_r18) {
    }
    if (value.has_multipathRemoteUE_PC5L2_r18) {
    }
    if (value.has_multipathRelayUE_N3C_r18) {
    }
    if (value.has_multipathRemoteUE_N3C_r18) {
    }
    if (value.has_remoteUE_IndirectPathAddChangeToIdleInactiveRelay_r18) {
    }
    if (value.has_pdcp_DuplicationMoreThanOneUuRLC_r18) {
    }
    if (value.has_pdcp_CADuplicationDirectpath_DRB_r18) {
    }
    if (value.has_pdcp_CADuplicationDirectpath_SRB_r18) {
    }
    if (value.has_pdcp_DuplicationMP_SplitDRB_r18) {
    }
    if (value.has_pdcp_DuplicationMP_SplitSRB_r18) {
    }
    if (value.has_directpathRLF_RecoveryViaSRB1_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RelayParameters_r17(Encoder& enc, const RelayParameters_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_relayUE_Operation_L2_r17);
    enc.WriteBit(value.has_remoteUE_Operation_L2_r17);
    enc.WriteBit(value.has_remoteUE_PathSwitchToIdleInactiveRelay_r17);
    if (value.has_relayUE_Operation_L2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.relayUE_Operation_L2_r17), 0, 0);
    }
    if (value.has_remoteUE_Operation_L2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.remoteUE_Operation_L2_r17), 0, 0);
    }
    if (value.has_remoteUE_PathSwitchToIdleInactiveRelay_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.remoteUE_PathSwitchToIdleInactiveRelay_r17), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RelayParameters_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RelayParameters_r17(Decoder& dec, RelayParameters_r17& value)
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
        value.relayUE_Operation_L2_r17 = (RelayParameters_r17_RelayUE_Operation_L2_r17)0;
    }
    if (present_1) {
        value.remoteUE_Operation_L2_r17 = (RelayParameters_r17_RemoteUE_Operation_L2_r17)0;
    }
    if (present_2) {
        value.remoteUE_PathSwitchToIdleInactiveRelay_r17 = (RelayParameters_r17_RemoteUE_PathSwitchToIdleInactiveRelay_r17)0;
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
    if (Decode_RelayParameters_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RelayParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RelayParameters_r17(RelayParameters_r17& value)
{
    if (value.has_relayUE_Operation_L2_r17) {
    }
    if (value.has_remoteUE_Operation_L2_r17) {
    }
    if (value.has_remoteUE_PathSwitchToIdleInactiveRelay_r17) {
    }
    if (value.has_extGroup1) {
        Free_RelayParameters_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkParametersNR_r16_ExtGroup1(Encoder& enc, const SidelinkParametersNR_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_relayParameters_r17);
    if (value.has_relayParameters_r17) {
        Encode_RelayParameters_r17(enc, value.relayParameters_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkParametersNR_r16_ExtGroup1(Decoder& dec, SidelinkParametersNR_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_RelayParameters_r17(dec, value.relayParameters_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkParametersNR_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkParametersNR_r16_ExtGroup1(SidelinkParametersNR_r16_ExtGroup1& value)
{
    if (value.has_relayParameters_r17) {
        Free_RelayParameters_r17(value.relayParameters_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkParametersNR_r16_ExtGroup2(Encoder& enc, const SidelinkParametersNR_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_p0_OLPC_Sidelink_r17);
    if (value.has_p0_OLPC_Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.p0_OLPC_Sidelink_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkParametersNR_r16_ExtGroup2(Decoder& dec, SidelinkParametersNR_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.p0_OLPC_Sidelink_r17 = (SidelinkParametersNR_r16_ExtGroup2_P0_OLPC_Sidelink_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkParametersNR_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkParametersNR_r16_ExtGroup2(SidelinkParametersNR_r16_ExtGroup2& value)
{
    if (value.has_p0_OLPC_Sidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PDCP_ParametersSidelink_r18(Encoder& enc, const PDCP_ParametersSidelink_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pdcp_DuplicationSRB_sidelink_r18);
    enc.WriteBit(value.has_pdcp_DuplicationDRB_sidelink_r18);
    if (value.has_pdcp_DuplicationSRB_sidelink_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationSRB_sidelink_r18), 0, 0);
    }
    if (value.has_pdcp_DuplicationDRB_sidelink_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcp_DuplicationDRB_sidelink_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_PDCP_ParametersSidelink_r18(Decoder& dec, PDCP_ParametersSidelink_r18& value)
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
        value.pdcp_DuplicationSRB_sidelink_r18 = (PDCP_ParametersSidelink_r18_Pdcp_DuplicationSRB_sidelink_r18)0;
    }
    if (present_1) {
        value.pdcp_DuplicationDRB_sidelink_r18 = (PDCP_ParametersSidelink_r18_Pdcp_DuplicationDRB_sidelink_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PDCP_ParametersSidelink_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PDCP_ParametersSidelink_r18(PDCP_ParametersSidelink_r18& value)
{
    if (value.has_pdcp_DuplicationSRB_sidelink_r18) {
    }
    if (value.has_pdcp_DuplicationDRB_sidelink_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkParametersNR_r16_ExtGroup3(Encoder& enc, const SidelinkParametersNR_r16_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_pdcp_ParametersSidelink_r18);
    if (value.has_pdcp_ParametersSidelink_r18) {
        Encode_PDCP_ParametersSidelink_r18(enc, value.pdcp_ParametersSidelink_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkParametersNR_r16_ExtGroup3(Decoder& dec, SidelinkParametersNR_r16_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_PDCP_ParametersSidelink_r18(dec, value.pdcp_ParametersSidelink_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkParametersNR_r16_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkParametersNR_r16_ExtGroup3(SidelinkParametersNR_r16_ExtGroup3& value)
{
    if (value.has_pdcp_ParametersSidelink_r18) {
        Free_PDCP_ParametersSidelink_r18(value.pdcp_ParametersSidelink_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RLC_ParametersSidelink_r16(Encoder& enc, const RLC_ParametersSidelink_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_am_WithLongSN_Sidelink_r16);
    enc.WriteBit(value.has_um_WithLongSN_Sidelink_r16);
    if (value.has_am_WithLongSN_Sidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.am_WithLongSN_Sidelink_r16), 0, 0);
    }
    if (value.has_um_WithLongSN_Sidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.um_WithLongSN_Sidelink_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RLC_ParametersSidelink_r16(Decoder& dec, RLC_ParametersSidelink_r16& value)
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
        value.am_WithLongSN_Sidelink_r16 = (RLC_ParametersSidelink_r16_Am_WithLongSN_Sidelink_r16)0;
    }
    if (present_1) {
        value.um_WithLongSN_Sidelink_r16 = (RLC_ParametersSidelink_r16_Um_WithLongSN_Sidelink_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RLC_ParametersSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RLC_ParametersSidelink_r16(RLC_ParametersSidelink_r16& value)
{
    if (value.has_am_WithLongSN_Sidelink_r16) {
    }
    if (value.has_um_WithLongSN_Sidelink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersSidelinkCommon_r16_ExtGroup1(Encoder& enc, const MAC_ParametersSidelinkCommon_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_drx_OnSidelink_r17);
    if (value.has_drx_OnSidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_OnSidelink_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersSidelinkCommon_r16_ExtGroup1(Decoder& dec, MAC_ParametersSidelinkCommon_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.drx_OnSidelink_r17 = (MAC_ParametersSidelinkCommon_r16_ExtGroup1_Drx_OnSidelink_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersSidelinkCommon_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersSidelinkCommon_r16_ExtGroup1(MAC_ParametersSidelinkCommon_r16_ExtGroup1& value)
{
    if (value.has_drx_OnSidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersSidelinkCommon_r16_ExtGroup2(Encoder& enc, const MAC_ParametersSidelinkCommon_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_LBT_FailureDectectionRecovery_r18);
    if (value.has_sl_LBT_FailureDectectionRecovery_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_LBT_FailureDectectionRecovery_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersSidelinkCommon_r16_ExtGroup2(Decoder& dec, MAC_ParametersSidelinkCommon_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.sl_LBT_FailureDectectionRecovery_r18 = (MAC_ParametersSidelinkCommon_r16_ExtGroup2_Sl_LBT_FailureDectectionRecovery_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersSidelinkCommon_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersSidelinkCommon_r16_ExtGroup2(MAC_ParametersSidelinkCommon_r16_ExtGroup2& value)
{
    if (value.has_sl_LBT_FailureDectectionRecovery_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersSidelinkCommon_r16(Encoder& enc, const MAC_ParametersSidelinkCommon_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_lcp_RestrictionSidelink_r16);
    enc.WriteBit(value.has_multipleConfiguredGrantsSidelink_r16);
    if (value.has_lcp_RestrictionSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lcp_RestrictionSidelink_r16), 0, 0);
    }
    if (value.has_multipleConfiguredGrantsSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleConfiguredGrantsSidelink_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MAC_ParametersSidelinkCommon_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MAC_ParametersSidelinkCommon_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersSidelinkCommon_r16(Decoder& dec, MAC_ParametersSidelinkCommon_r16& value)
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
        value.lcp_RestrictionSidelink_r16 = (MAC_ParametersSidelinkCommon_r16_Lcp_RestrictionSidelink_r16)0;
    }
    if (present_1) {
        value.multipleConfiguredGrantsSidelink_r16 = (MAC_ParametersSidelinkCommon_r16_MultipleConfiguredGrantsSidelink_r16)0;
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
    if (Decode_MAC_ParametersSidelinkCommon_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MAC_ParametersSidelinkCommon_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_MAC_ParametersSidelinkCommon_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersSidelinkCommon_r16(MAC_ParametersSidelinkCommon_r16& value)
{
    if (value.has_lcp_RestrictionSidelink_r16) {
    }
    if (value.has_multipleConfiguredGrantsSidelink_r16) {
    }
    if (value.has_extGroup1) {
        Free_MAC_ParametersSidelinkCommon_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MAC_ParametersSidelinkCommon_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersSidelinkXDD_Diff_r16(Encoder& enc, const MAC_ParametersSidelinkXDD_Diff_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_multipleSR_ConfigurationsSidelink_r16);
    enc.WriteBit(value.has_logicalChannelSR_DelayTimerSidelink_r16);
    if (value.has_multipleSR_ConfigurationsSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleSR_ConfigurationsSidelink_r16), 0, 0);
    }
    if (value.has_logicalChannelSR_DelayTimerSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelSR_DelayTimerSidelink_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersSidelinkXDD_Diff_r16(Decoder& dec, MAC_ParametersSidelinkXDD_Diff_r16& value)
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
        value.multipleSR_ConfigurationsSidelink_r16 = (MAC_ParametersSidelinkXDD_Diff_r16_MultipleSR_ConfigurationsSidelink_r16)0;
    }
    if (present_1) {
        value.logicalChannelSR_DelayTimerSidelink_r16 = (MAC_ParametersSidelinkXDD_Diff_r16_LogicalChannelSR_DelayTimerSidelink_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersSidelinkXDD_Diff_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersSidelinkXDD_Diff_r16(MAC_ParametersSidelinkXDD_Diff_r16& value)
{
    if (value.has_multipleSR_ConfigurationsSidelink_r16) {
    }
    if (value.has_logicalChannelSR_DelayTimerSidelink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MAC_ParametersSidelink_r16(Encoder& enc, const MAC_ParametersSidelink_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_mac_ParametersSidelinkCommon_r16);
    enc.WriteBit(value.has_mac_ParametersSidelinkXDD_Diff_r16);
    if (value.has_mac_ParametersSidelinkCommon_r16) {
        Encode_MAC_ParametersSidelinkCommon_r16(enc, value.mac_ParametersSidelinkCommon_r16);
    }
    if (value.has_mac_ParametersSidelinkXDD_Diff_r16) {
        Encode_MAC_ParametersSidelinkXDD_Diff_r16(enc, value.mac_ParametersSidelinkXDD_Diff_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MAC_ParametersSidelink_r16(Decoder& dec, MAC_ParametersSidelink_r16& value)
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
        if (Decode_MAC_ParametersSidelinkCommon_r16(dec, value.mac_ParametersSidelinkCommon_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MAC_ParametersSidelinkXDD_Diff_r16(dec, value.mac_ParametersSidelinkXDD_Diff_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MAC_ParametersSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MAC_ParametersSidelink_r16(MAC_ParametersSidelink_r16& value)
{
    if (value.has_mac_ParametersSidelinkCommon_r16) {
        Free_MAC_ParametersSidelinkCommon_r16(value.mac_ParametersSidelinkCommon_r16);
    }
    if (value.has_mac_ParametersSidelinkXDD_Diff_r16) {
        Free_MAC_ParametersSidelinkXDD_Diff_r16(value.mac_ParametersSidelinkXDD_Diff_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_SidelinkCapabilityAddXDD_Mode_r16(Encoder& enc, const UE_SidelinkCapabilityAddXDD_Mode_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_mac_ParametersSidelinkXDD_Diff_r16);
    if (value.has_mac_ParametersSidelinkXDD_Diff_r16) {
        Encode_MAC_ParametersSidelinkXDD_Diff_r16(enc, value.mac_ParametersSidelinkXDD_Diff_r16);
    }
    return enc.Error();
}

ErrorCode Decode_UE_SidelinkCapabilityAddXDD_Mode_r16(Decoder& dec, UE_SidelinkCapabilityAddXDD_Mode_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MAC_ParametersSidelinkXDD_Diff_r16(dec, value.mac_ParametersSidelinkXDD_Diff_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_SidelinkCapabilityAddXDD_Mode_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_SidelinkCapabilityAddXDD_Mode_r16(UE_SidelinkCapabilityAddXDD_Mode_r16& value)
{
    if (value.has_mac_ParametersSidelinkXDD_Diff_r16) {
        Free_MAC_ParametersSidelinkXDD_Diff_r16(value.mac_ParametersSidelinkXDD_Diff_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkParametersNR_r16(Encoder& enc, const SidelinkParametersNR_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rlc_ParametersSidelink_r16);
    enc.WriteBit(value.has_mac_ParametersSidelink_r16);
    enc.WriteBit(value.has_fdd_Add_UE_Sidelink_Capabilities_r16);
    enc.WriteBit(value.has_tdd_Add_UE_Sidelink_Capabilities_r16);
    enc.WriteBit(value.has_supportedBandListSidelink_r16);
    if (value.has_rlc_ParametersSidelink_r16) {
        Encode_RLC_ParametersSidelink_r16(enc, value.rlc_ParametersSidelink_r16);
    }
    if (value.has_mac_ParametersSidelink_r16) {
        Encode_MAC_ParametersSidelink_r16(enc, value.mac_ParametersSidelink_r16);
    }
    if (value.has_fdd_Add_UE_Sidelink_Capabilities_r16) {
        Encode_UE_SidelinkCapabilityAddXDD_Mode_r16(enc, value.fdd_Add_UE_Sidelink_Capabilities_r16);
    }
    if (value.has_tdd_Add_UE_Sidelink_Capabilities_r16) {
        Encode_UE_SidelinkCapabilityAddXDD_Mode_r16(enc, value.tdd_Add_UE_Sidelink_Capabilities_r16);
    }
    if (value.has_supportedBandListSidelink_r16) {
enc.WriteConstrainedLength(value.supportedBandListSidelink_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandListSidelink_r16_count; ++i) {
    Encode_BandSidelink_r16(enc, value.supportedBandListSidelink_r16_items[i]);
}
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(3u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SidelinkParametersNR_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SidelinkParametersNR_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SidelinkParametersNR_r16_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkParametersNR_r16(Decoder& dec, SidelinkParametersNR_r16& value)
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
        if (Decode_RLC_ParametersSidelink_r16(dec, value.rlc_ParametersSidelink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MAC_ParametersSidelink_r16(dec, value.mac_ParametersSidelink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_SidelinkCapabilityAddXDD_Mode_r16(dec, value.fdd_Add_UE_Sidelink_Capabilities_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_SidelinkCapabilityAddXDD_Mode_r16(dec, value.tdd_Add_UE_Sidelink_Capabilities_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandListSidelink_r16_count)) { goto fail; }
if (value.supportedBandListSidelink_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandListSidelink_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandListSidelink_r16_count > 0u) {
    value.supportedBandListSidelink_r16_items = (BandSidelink_r16*)std::malloc((std::size_t)value.supportedBandListSidelink_r16_count * sizeof(BandSidelink_r16));
    if (value.supportedBandListSidelink_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandListSidelink_r16_items, 0, (std::size_t)value.supportedBandListSidelink_r16_count * sizeof(BandSidelink_r16));
}
for (std::uint32_t i = 0; i < value.supportedBandListSidelink_r16_count; ++i) {
    if (Decode_BandSidelink_r16(dec, value.supportedBandListSidelink_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
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
    if (Decode_SidelinkParametersNR_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SidelinkParametersNR_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SidelinkParametersNR_r16_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    Free_SidelinkParametersNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkParametersNR_r16(SidelinkParametersNR_r16& value)
{
    if (value.has_rlc_ParametersSidelink_r16) {
        Free_RLC_ParametersSidelink_r16(value.rlc_ParametersSidelink_r16);
    }
    if (value.has_mac_ParametersSidelink_r16) {
        Free_MAC_ParametersSidelink_r16(value.mac_ParametersSidelink_r16);
    }
    if (value.has_fdd_Add_UE_Sidelink_Capabilities_r16) {
        Free_UE_SidelinkCapabilityAddXDD_Mode_r16(value.fdd_Add_UE_Sidelink_Capabilities_r16);
    }
    if (value.has_tdd_Add_UE_Sidelink_Capabilities_r16) {
        Free_UE_SidelinkCapabilityAddXDD_Mode_r16(value.tdd_Add_UE_Sidelink_Capabilities_r16);
    }
    if (value.has_supportedBandListSidelink_r16) {
        if (value.supportedBandListSidelink_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.supportedBandListSidelink_r16_count; ++i) {
                Free_BandSidelink_r16(value.supportedBandListSidelink_r16_items[i]);
            }
            std::free(value.supportedBandListSidelink_r16_items);
            value.supportedBandListSidelink_r16_items = nullptr;
        }
        value.supportedBandListSidelink_r16_count = 0;
    }
    if (value.has_extGroup1) {
        Free_SidelinkParametersNR_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SidelinkParametersNR_r16_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SidelinkParametersNR_r16_ExtGroup3(value.extGroup3);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkParametersEUTRA_r16(Encoder& enc, const SidelinkParametersEUTRA_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_ParametersEUTRA1_r16);
    enc.WriteBit(value.has_sl_ParametersEUTRA2_r16);
    enc.WriteBit(value.has_sl_ParametersEUTRA3_r16);
    enc.WriteBit(value.has_supportedBandListSidelinkEUTRA_r16);
    if (value.has_sl_ParametersEUTRA1_r16) {
        enc.WriteSemiConstrainedOctetString(value.sl_ParametersEUTRA1_r16.bytes, value.sl_ParametersEUTRA1_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_sl_ParametersEUTRA2_r16) {
        enc.WriteSemiConstrainedOctetString(value.sl_ParametersEUTRA2_r16.bytes, value.sl_ParametersEUTRA2_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_sl_ParametersEUTRA3_r16) {
        enc.WriteSemiConstrainedOctetString(value.sl_ParametersEUTRA3_r16.bytes, value.sl_ParametersEUTRA3_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_supportedBandListSidelinkEUTRA_r16) {
enc.WriteConstrainedLength(value.supportedBandListSidelinkEUTRA_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandListSidelinkEUTRA_r16_count; ++i) {
    Encode_BandSidelinkEUTRA_r16(enc, value.supportedBandListSidelinkEUTRA_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkParametersEUTRA_r16(Decoder& dec, SidelinkParametersEUTRA_r16& value)
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
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_ParametersEUTRA1_r16.bytes = string_bytes;
        value.sl_ParametersEUTRA1_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_ParametersEUTRA2_r16.bytes = string_bytes;
        value.sl_ParametersEUTRA2_r16.length = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_ParametersEUTRA3_r16.bytes = string_bytes;
        value.sl_ParametersEUTRA3_r16.length = string_length;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandListSidelinkEUTRA_r16_count)) { goto fail; }
if (value.supportedBandListSidelinkEUTRA_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandListSidelinkEUTRA_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandListSidelinkEUTRA_r16_count > 0u) {
    value.supportedBandListSidelinkEUTRA_r16_items = (BandSidelinkEUTRA_r16*)std::malloc((std::size_t)value.supportedBandListSidelinkEUTRA_r16_count * sizeof(BandSidelinkEUTRA_r16));
    if (value.supportedBandListSidelinkEUTRA_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandListSidelinkEUTRA_r16_items, 0, (std::size_t)value.supportedBandListSidelinkEUTRA_r16_count * sizeof(BandSidelinkEUTRA_r16));
}
for (std::uint32_t i = 0; i < value.supportedBandListSidelinkEUTRA_r16_count; ++i) {
    if (Decode_BandSidelinkEUTRA_r16(dec, value.supportedBandListSidelinkEUTRA_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkParametersEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkParametersEUTRA_r16(SidelinkParametersEUTRA_r16& value)
{
    if (value.has_sl_ParametersEUTRA1_r16) {
        std::free(value.sl_ParametersEUTRA1_r16.bytes);
        value.sl_ParametersEUTRA1_r16.bytes = nullptr;
        value.sl_ParametersEUTRA1_r16.length = 0;
    }
    if (value.has_sl_ParametersEUTRA2_r16) {
        std::free(value.sl_ParametersEUTRA2_r16.bytes);
        value.sl_ParametersEUTRA2_r16.bytes = nullptr;
        value.sl_ParametersEUTRA2_r16.length = 0;
    }
    if (value.has_sl_ParametersEUTRA3_r16) {
        std::free(value.sl_ParametersEUTRA3_r16.bytes);
        value.sl_ParametersEUTRA3_r16.bytes = nullptr;
        value.sl_ParametersEUTRA3_r16.length = 0;
    }
    if (value.has_supportedBandListSidelinkEUTRA_r16) {
        if (value.supportedBandListSidelinkEUTRA_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.supportedBandListSidelinkEUTRA_r16_count; ++i) {
                Free_BandSidelinkEUTRA_r16(value.supportedBandListSidelinkEUTRA_r16_items[i]);
            }
            std::free(value.supportedBandListSidelinkEUTRA_r16_items);
            value.supportedBandListSidelinkEUTRA_r16_items = nullptr;
        }
        value.supportedBandListSidelinkEUTRA_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SidelinkParameters_r16(Encoder& enc, const SidelinkParameters_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_sidelinkParametersNR_r16);
    enc.WriteBit(value.has_sidelinkParametersEUTRA_r16);
    if (value.has_sidelinkParametersNR_r16) {
        Encode_SidelinkParametersNR_r16(enc, value.sidelinkParametersNR_r16);
    }
    if (value.has_sidelinkParametersEUTRA_r16) {
        Encode_SidelinkParametersEUTRA_r16(enc, value.sidelinkParametersEUTRA_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SidelinkParameters_r16(Decoder& dec, SidelinkParameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SidelinkParametersNR_r16(dec, value.sidelinkParametersNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SidelinkParametersEUTRA_r16(dec, value.sidelinkParametersEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SidelinkParameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SidelinkParameters_r16(SidelinkParameters_r16& value)
{
    if (value.has_sidelinkParametersNR_r16) {
        Free_SidelinkParametersNR_r16(value.sidelinkParametersNR_r16);
    }
    if (value.has_sidelinkParametersEUTRA_r16) {
        Free_SidelinkParametersEUTRA_r16(value.sidelinkParametersEUTRA_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(Encoder& enc, const BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.gnb_ScheduledMode3DelaySidelinkEUTRA_r16), 0, 17);
    return enc.Error();
}

ErrorCode Decode_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(Decoder& dec, BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 17, tmp_value)) { goto fail; }
        value.gnb_ScheduledMode3DelaySidelinkEUTRA_r16 = (BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16_Gnb_ScheduledMode3DelaySidelinkEUTRA_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelinkEUTRA_r16(Encoder& enc, const BandSidelinkEUTRA_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_gnb_ScheduledMode3SidelinkEUTRA_r16);
    enc.WriteBit(value.has_gnb_ScheduledMode4SidelinkEUTRA_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.freqBandSidelinkEUTRA_r16), 1, 256);
    if (value.has_gnb_ScheduledMode3SidelinkEUTRA_r16) {
        Encode_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(enc, value.gnb_ScheduledMode3SidelinkEUTRA_r16);
    }
    if (value.has_gnb_ScheduledMode4SidelinkEUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gnb_ScheduledMode4SidelinkEUTRA_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelinkEUTRA_r16(Decoder& dec, BandSidelinkEUTRA_r16& value)
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
        value.freqBandSidelinkEUTRA_r16 = (FreqBandIndicatorEUTRA)tmp_value;
    }
    if (present_0) {
        if (Decode_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(dec, value.gnb_ScheduledMode3SidelinkEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.gnb_ScheduledMode4SidelinkEUTRA_r16 = (BandSidelinkEUTRA_r16_Gnb_ScheduledMode4SidelinkEUTRA_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelinkEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelinkEUTRA_r16(BandSidelinkEUTRA_r16& value)
{
    if (value.has_gnb_ScheduledMode3SidelinkEUTRA_r16) {
        Free_BandSidelinkEUTRA_r16_Gnb_ScheduledMode3SidelinkEUTRA_r16(value.gnb_ScheduledMode3SidelinkEUTRA_r16);
    }
    if (value.has_gnb_ScheduledMode4SidelinkEUTRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(Encoder& enc, const BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_CP_PatternTxSidelinkModeTwo_r16);
    enc.WriteBit(value.has_dl_openLoopPC_Sidelink_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.harq_TxProcessModeTwoSidelink_r16), 0, 1);
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_CP_PatternTxSidelinkModeTwo_r16), 0, 0);
    }
    if (value.has_dl_openLoopPC_Sidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_openLoopPC_Sidelink_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(Decoder& dec, BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_TxProcessModeTwoSidelink_r16 = (BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Harq_TxProcessModeTwoSidelink_r16)tmp_value;
    }
    if (present_0) {
        value.scs_CP_PatternTxSidelinkModeTwo_r16 = (BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Scs_CP_PatternTxSidelinkModeTwo_r16)0;
    }
    if (present_1) {
        value.dl_openLoopPC_Sidelink_r16 = (BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16_Dl_openLoopPC_Sidelink_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16& value)
{
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r16) {
    }
    if (value.has_dl_openLoopPC_Sidelink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(Encoder& enc, const BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_cbr_ReportSidelink_r16);
    if (value.has_cbr_ReportSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cbr_ReportSidelink_r16), 0, 0);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.cbr_CR_TimeLimitSidelink_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(Decoder& dec, BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.cbr_ReportSidelink_r16 = (BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_ReportSidelink_r16)0;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.cbr_CR_TimeLimitSidelink_r16 = (BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16_Cbr_CR_TimeLimitSidelink_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16& value)
{
    if (value.has_cbr_ReportSidelink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup1(Encoder& enc, const BandSidelink_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_TransmissionMode2_r16);
    enc.WriteBit(value.has_congestionControlSidelink_r16);
    enc.WriteBit(value.has_fewerSymbolSlotSidelink_r16);
    enc.WriteBit(value.has_sl_openLoopPC_RSRP_ReportSidelink_r16);
    enc.WriteBit(value.has_sl_Rx_256QAM_r16);
    if (value.has_sl_TransmissionMode2_r16) {
        Encode_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(enc, value.sl_TransmissionMode2_r16);
    }
    if (value.has_congestionControlSidelink_r16) {
        Encode_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(enc, value.congestionControlSidelink_r16);
    }
    if (value.has_fewerSymbolSlotSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fewerSymbolSlotSidelink_r16), 0, 0);
    }
    if (value.has_sl_openLoopPC_RSRP_ReportSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_openLoopPC_RSRP_ReportSidelink_r16), 0, 0);
    }
    if (value.has_sl_Rx_256QAM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Rx_256QAM_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup1(Decoder& dec, BandSidelink_r16_ExtGroup1& value)
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
        if (Decode_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(dec, value.sl_TransmissionMode2_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(dec, value.congestionControlSidelink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.fewerSymbolSlotSidelink_r16 = (BandSidelink_r16_ExtGroup1_FewerSymbolSlotSidelink_r16)0;
    }
    if (present_3) {
        value.sl_openLoopPC_RSRP_ReportSidelink_r16 = (BandSidelink_r16_ExtGroup1_Sl_openLoopPC_RSRP_ReportSidelink_r16)0;
    }
    if (present_4) {
        value.sl_Rx_256QAM_r16 = (BandSidelink_r16_ExtGroup1_Sl_Rx_256QAM_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup1(BandSidelink_r16_ExtGroup1& value)
{
    if (value.has_sl_TransmissionMode2_r16) {
        Free_BandSidelink_r16_ExtGroup1_Sl_TransmissionMode2_r16(value.sl_TransmissionMode2_r16);
    }
    if (value.has_congestionControlSidelink_r16) {
        Free_BandSidelink_r16_ExtGroup1_CongestionControlSidelink_r16(value.congestionControlSidelink_r16);
    }
    if (value.has_fewerSymbolSlotSidelink_r16) {
    }
    if (value.has_sl_openLoopPC_RSRP_ReportSidelink_r16) {
    }
    if (value.has_sl_Rx_256QAM_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup2(Encoder& enc, const BandSidelink_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ue_PowerClassSidelink_r16);
    if (value.has_ue_PowerClassSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_PowerClassSidelink_r16), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup2(Decoder& dec, BandSidelink_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ue_PowerClassSidelink_r16 = (BandSidelink_r16_ExtGroup2_Ue_PowerClassSidelink_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup2(BandSidelink_r16_ExtGroup2& value)
{
    if (value.has_ue_PowerClassSidelink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(Encoder& enc, const BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r17);
    enc.WriteBit(value.has_scs_30kHz_r17);
    enc.WriteBit(value.has_scs_60kHz_r17);
    if (value.has_scs_15kHz_r17) {
        enc.WriteFixedBitString(value.scs_15kHz_r17.bytes, value.scs_15kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz_r17) {
        enc.WriteFixedBitString(value.scs_30kHz_r17.bytes, value.scs_30kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz_r17) {
        enc.WriteFixedBitString(value.scs_60kHz_r17.bytes, value.scs_60kHz_r17.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(Decoder& dec, BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_15kHz_r17.bytes = string_bytes;
        value.scs_15kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz_r17.bytes = string_bytes;
        value.scs_30kHz_r17.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r17.bytes = string_bytes;
        value.scs_60kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17& value)
{
    if (value.has_scs_15kHz_r17) {
        std::free(value.scs_15kHz_r17.bytes);
        value.scs_15kHz_r17.bytes = nullptr;
        value.scs_15kHz_r17.bitLength = 0;
    }
    if (value.has_scs_30kHz_r17) {
        std::free(value.scs_30kHz_r17.bytes);
        value.scs_30kHz_r17.bytes = nullptr;
        value.scs_30kHz_r17.bitLength = 0;
    }
    if (value.has_scs_60kHz_r17) {
        std::free(value.scs_60kHz_r17.bytes);
        value.scs_60kHz_r17.bytes = nullptr;
        value.scs_60kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(Encoder& enc, const BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r17);
    enc.WriteBit(value.has_scs_120kHz_r17);
    if (value.has_scs_60kHz_r17) {
        enc.WriteFixedBitString(value.scs_60kHz_r17.bytes, value.scs_60kHz_r17.bitLength, 16, 16);
    }
    if (value.has_scs_120kHz_r17) {
        enc.WriteFixedBitString(value.scs_120kHz_r17.bytes, value.scs_120kHz_r17.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(Decoder& dec, BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r17.bytes = string_bytes;
        value.scs_60kHz_r17.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_120kHz_r17.bytes = string_bytes;
        value.scs_120kHz_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17& value)
{
    if (value.has_scs_60kHz_r17) {
        std::free(value.scs_60kHz_r17.bytes);
        value.scs_60kHz_r17.bytes = nullptr;
        value.scs_60kHz_r17.bitLength = 0;
    }
    if (value.has_scs_120kHz_r17) {
        std::free(value.scs_120kHz_r17.bytes);
        value.scs_120kHz_r17.bytes = nullptr;
        value.scs_120kHz_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(Encoder& enc, const BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17:
        Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(enc, value.u.fr1_r17);
        break;
    case BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17:
        Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(enc, value.u.fr2_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(Decoder& dec, BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag)root_index;
    switch (value.tag) {
    case BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17: {
        if (Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(dec, value.u.fr1_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17: {
        if (Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(dec, value.u.fr2_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17& value)
{
    switch (value.tag) {
    case BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr1_r17:
        Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr1_r17(value.u.fr1_r17);
        break;
    case BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Tag_fr2_r17:
        Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17_Fr2_r17(value.u.fr2_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(Encoder& enc, const BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_CP_PatternTxSidelinkModeTwo_r17);
    enc.WriteBit(value.has_extendedCP_Mode2Random_r17);
    enc.WriteBit(value.has_dl_openLoopPC_Sidelink_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.harq_TxProcessModeTwoSidelink_r17), 0, 1);
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r17) {
        Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(enc, value.scs_CP_PatternTxSidelinkModeTwo_r17);
    }
    if (value.has_extendedCP_Mode2Random_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCP_Mode2Random_r17), 0, 0);
    }
    if (value.has_dl_openLoopPC_Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_openLoopPC_Sidelink_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(Decoder& dec, BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_TxProcessModeTwoSidelink_r17 = (BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Harq_TxProcessModeTwoSidelink_r17)tmp_value;
    }
    if (present_0) {
        if (Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(dec, value.scs_CP_PatternTxSidelinkModeTwo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.extendedCP_Mode2Random_r17 = (BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_ExtendedCP_Mode2Random_r17)0;
    }
    if (present_2) {
        value.dl_openLoopPC_Sidelink_r17 = (BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Dl_openLoopPC_Sidelink_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17& value)
{
    if (value.has_scs_CP_PatternTxSidelinkModeTwo_r17) {
        Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17_Scs_CP_PatternTxSidelinkModeTwo_r17(value.scs_CP_PatternTxSidelinkModeTwo_r17);
    }
    if (value.has_extendedCP_Mode2Random_r17) {
    }
    if (value.has_dl_openLoopPC_Sidelink_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(Encoder& enc, const BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_sync_GNSS_r17);
    enc.WriteBit(value.has_gNB_Sync_r17);
    enc.WriteBit(value.has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17);
    enc.WriteBit(value.has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17);
    if (value.has_sync_GNSS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sync_GNSS_r17), 0, 0);
    }
    if (value.has_gNB_Sync_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_Sync_r17), 0, 0);
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17), 0, 0);
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(Decoder& dec, BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710& value)
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
        value.sync_GNSS_r17 = (BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_Sync_GNSS_r17)0;
    }
    if (present_1) {
        value.gNB_Sync_r17 = (BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_Sync_r17)0;
    }
    if (present_2) {
        value.gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17 = (BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17)0;
    }
    if (present_3) {
        value.gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17 = (BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710& value)
{
    if (value.has_sync_GNSS_r17) {
    }
    if (value.has_gNB_Sync_r17) {
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r17) {
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup3(Encoder& enc, const BandSidelink_r16_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_sl_TransmissionMode2_RandomResourceSelection_r17);
    enc.WriteBit(value.has_sync_Sidelink_v1710);
    enc.WriteBit(value.has_enb_sync_Sidelink_v1710);
    enc.WriteBit(value.has_rx_IUC_Scheme1_PreferredMode2Sidelink_r17);
    enc.WriteBit(value.has_rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17);
    enc.WriteBit(value.has_rx_IUC_Scheme2_Mode2Sidelink_r17);
    enc.WriteBit(value.has_rx_IUC_Scheme1_SCI_r17);
    enc.WriteBit(value.has_rx_IUC_Scheme1_SCI_ExplicitReq_r17);
    if (value.has_sl_TransmissionMode2_RandomResourceSelection_r17) {
        Encode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(enc, value.sl_TransmissionMode2_RandomResourceSelection_r17);
    }
    if (value.has_sync_Sidelink_v1710) {
        Encode_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(enc, value.sync_Sidelink_v1710);
    }
    if (value.has_enb_sync_Sidelink_v1710) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enb_sync_Sidelink_v1710), 0, 0);
    }
    if (value.has_rx_IUC_Scheme1_PreferredMode2Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_IUC_Scheme1_PreferredMode2Sidelink_r17), 0, 0);
    }
    if (value.has_rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17), 0, 0);
    }
    if (value.has_rx_IUC_Scheme2_Mode2Sidelink_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_IUC_Scheme2_Mode2Sidelink_r17), 0, 7);
    }
    if (value.has_rx_IUC_Scheme1_SCI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_IUC_Scheme1_SCI_r17), 0, 0);
    }
    if (value.has_rx_IUC_Scheme1_SCI_ExplicitReq_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rx_IUC_Scheme1_SCI_ExplicitReq_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup3(Decoder& dec, BandSidelink_r16_ExtGroup3& value)
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
        if (Decode_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(dec, value.sl_TransmissionMode2_RandomResourceSelection_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(dec, value.sync_Sidelink_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.enb_sync_Sidelink_v1710 = (BandSidelink_r16_ExtGroup3_Enb_sync_Sidelink_v1710)0;
    }
    if (present_3) {
        value.rx_IUC_Scheme1_PreferredMode2Sidelink_r17 = (BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_PreferredMode2Sidelink_r17)0;
    }
    if (present_4) {
        value.rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17 = (BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rx_IUC_Scheme2_Mode2Sidelink_r17 = (BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme2_Mode2Sidelink_r17)tmp_value;
    }
    if (present_6) {
        value.rx_IUC_Scheme1_SCI_r17 = (BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_r17)0;
    }
    if (present_7) {
        value.rx_IUC_Scheme1_SCI_ExplicitReq_r17 = (BandSidelink_r16_ExtGroup3_Rx_IUC_Scheme1_SCI_ExplicitReq_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup3(BandSidelink_r16_ExtGroup3& value)
{
    if (value.has_sl_TransmissionMode2_RandomResourceSelection_r17) {
        Free_BandSidelink_r16_ExtGroup3_Sl_TransmissionMode2_RandomResourceSelection_r17(value.sl_TransmissionMode2_RandomResourceSelection_r17);
    }
    if (value.has_sync_Sidelink_v1710) {
        Free_BandSidelink_r16_ExtGroup3_Sync_Sidelink_v1710(value.sync_Sidelink_v1710);
    }
    if (value.has_enb_sync_Sidelink_v1710) {
    }
    if (value.has_rx_IUC_Scheme1_PreferredMode2Sidelink_r17) {
    }
    if (value.has_rx_IUC_Scheme1_NonPreferredMode2Sidelink_r17) {
    }
    if (value.has_rx_IUC_Scheme2_Mode2Sidelink_r17) {
    }
    if (value.has_rx_IUC_Scheme1_SCI_r17) {
    }
    if (value.has_rx_IUC_Scheme1_SCI_ExplicitReq_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_ExtGroup4(Encoder& enc, const BandSidelink_r16_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_sharedSpectrumChAccessParamsSidelinkPerBand_r18);
    enc.WriteBit(value.has_sl_PRS_RxInSharedResourcePool_r18);
    enc.WriteBit(value.has_sl_PRS_RxInDedicatedResourcePool_r18);
    enc.WriteBit(value.has_sl_PRS_TxInSharedResourcePool_r18);
    enc.WriteBit(value.has_sl_PRS_TxScheme1InDedicatedResourcePool_r18);
    enc.WriteBit(value.has_sl_PRS_TxScheme2InDedicatedResourcePool_r18);
    enc.WriteBit(value.has_sl_PRS_CongestionCtrl_r18);
    enc.WriteBit(value.has_sl_PRS_TxRandomSelection_r18);
    enc.WriteBit(value.has_sl_DynamicSharingTxRx_r18);
    enc.WriteBit(value.has_sl_ReceptionIntraCarrierGuardBand_r18);
    if (value.has_sharedSpectrumChAccessParamsSidelinkPerBand_r18) {
        Encode_SharedSpectrumChAccessParamsSidelinkPerBand_r18(enc, value.sharedSpectrumChAccessParamsSidelinkPerBand_r18);
    }
    if (value.has_sl_PRS_RxInSharedResourcePool_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_RxInSharedResourcePool_r18), 0, 0);
    }
    if (value.has_sl_PRS_RxInDedicatedResourcePool_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_RxInDedicatedResourcePool_r18), 0, 0);
    }
    if (value.has_sl_PRS_TxInSharedResourcePool_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_TxInSharedResourcePool_r18), 0, 0);
    }
    if (value.has_sl_PRS_TxScheme1InDedicatedResourcePool_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_TxScheme1InDedicatedResourcePool_r18), 0, 0);
    }
    if (value.has_sl_PRS_TxScheme2InDedicatedResourcePool_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_TxScheme2InDedicatedResourcePool_r18), 0, 0);
    }
    if (value.has_sl_PRS_CongestionCtrl_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_CongestionCtrl_r18), 0, 0);
    }
    if (value.has_sl_PRS_TxRandomSelection_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_PRS_TxRandomSelection_r18), 0, 0);
    }
    if (value.has_sl_DynamicSharingTxRx_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_DynamicSharingTxRx_r18), 0, 0);
    }
    if (value.has_sl_ReceptionIntraCarrierGuardBand_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_ReceptionIntraCarrierGuardBand_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_ExtGroup4(Decoder& dec, BandSidelink_r16_ExtGroup4& value)
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
        if (Decode_SharedSpectrumChAccessParamsSidelinkPerBand_r18(dec, value.sharedSpectrumChAccessParamsSidelinkPerBand_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.sl_PRS_RxInSharedResourcePool_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_RxInSharedResourcePool_r18)0;
    }
    if (present_2) {
        value.sl_PRS_RxInDedicatedResourcePool_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_RxInDedicatedResourcePool_r18)0;
    }
    if (present_3) {
        value.sl_PRS_TxInSharedResourcePool_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_TxInSharedResourcePool_r18)0;
    }
    if (present_4) {
        value.sl_PRS_TxScheme1InDedicatedResourcePool_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme1InDedicatedResourcePool_r18)0;
    }
    if (present_5) {
        value.sl_PRS_TxScheme2InDedicatedResourcePool_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_TxScheme2InDedicatedResourcePool_r18)0;
    }
    if (present_6) {
        value.sl_PRS_CongestionCtrl_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_CongestionCtrl_r18)0;
    }
    if (present_7) {
        value.sl_PRS_TxRandomSelection_r18 = (BandSidelink_r16_ExtGroup4_Sl_PRS_TxRandomSelection_r18)0;
    }
    if (present_8) {
        value.sl_DynamicSharingTxRx_r18 = (BandSidelink_r16_ExtGroup4_Sl_DynamicSharingTxRx_r18)0;
    }
    if (present_9) {
        value.sl_ReceptionIntraCarrierGuardBand_r18 = (BandSidelink_r16_ExtGroup4_Sl_ReceptionIntraCarrierGuardBand_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_ExtGroup4(BandSidelink_r16_ExtGroup4& value)
{
    if (value.has_sharedSpectrumChAccessParamsSidelinkPerBand_r18) {
        Free_SharedSpectrumChAccessParamsSidelinkPerBand_r18(value.sharedSpectrumChAccessParamsSidelinkPerBand_r18);
    }
    if (value.has_sl_PRS_RxInSharedResourcePool_r18) {
    }
    if (value.has_sl_PRS_RxInDedicatedResourcePool_r18) {
    }
    if (value.has_sl_PRS_TxInSharedResourcePool_r18) {
    }
    if (value.has_sl_PRS_TxScheme1InDedicatedResourcePool_r18) {
    }
    if (value.has_sl_PRS_TxScheme2InDedicatedResourcePool_r18) {
    }
    if (value.has_sl_PRS_CongestionCtrl_r18) {
    }
    if (value.has_sl_PRS_TxRandomSelection_r18) {
    }
    if (value.has_sl_DynamicSharingTxRx_r18) {
    }
    if (value.has_sl_ReceptionIntraCarrierGuardBand_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(Encoder& enc, const BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteFixedBitString(value.scs_15kHz_r16.bytes, value.scs_15kHz_r16.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteFixedBitString(value.scs_30kHz_r16.bytes, value.scs_30kHz_r16.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteFixedBitString(value.scs_60kHz_r16.bytes, value.scs_60kHz_r16.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(Decoder& dec, BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_15kHz_r16.bytes = string_bytes;
        value.scs_15kHz_r16.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz_r16.bytes = string_bytes;
        value.scs_30kHz_r16.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r16.bytes = string_bytes;
        value.scs_60kHz_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16& value)
{
    if (value.has_scs_15kHz_r16) {
        std::free(value.scs_15kHz_r16.bytes);
        value.scs_15kHz_r16.bytes = nullptr;
        value.scs_15kHz_r16.bitLength = 0;
    }
    if (value.has_scs_30kHz_r16) {
        std::free(value.scs_30kHz_r16.bytes);
        value.scs_30kHz_r16.bytes = nullptr;
        value.scs_30kHz_r16.bitLength = 0;
    }
    if (value.has_scs_60kHz_r16) {
        std::free(value.scs_60kHz_r16.bytes);
        value.scs_60kHz_r16.bytes = nullptr;
        value.scs_60kHz_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(Encoder& enc, const BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_60kHz_r16) {
        enc.WriteFixedBitString(value.scs_60kHz_r16.bytes, value.scs_60kHz_r16.bitLength, 16, 16);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteFixedBitString(value.scs_120kHz_r16.bytes, value.scs_120kHz_r16.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(Decoder& dec, BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r16.bytes = string_bytes;
        value.scs_60kHz_r16.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_120kHz_r16.bytes = string_bytes;
        value.scs_120kHz_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16& value)
{
    if (value.has_scs_60kHz_r16) {
        std::free(value.scs_60kHz_r16.bytes);
        value.scs_60kHz_r16.bytes = nullptr;
        value.scs_60kHz_r16.bitLength = 0;
    }
    if (value.has_scs_120kHz_r16) {
        std::free(value.scs_120kHz_r16.bytes);
        value.scs_120kHz_r16.bytes = nullptr;
        value.scs_120kHz_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(Encoder& enc, const BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr1_r16:
        Encode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(enc, value.u.fr1_r16);
        break;
    case BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr2_r16:
        Encode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(enc, value.u.fr2_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(Decoder& dec, BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag)root_index;
    switch (value.tag) {
    case BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr1_r16: {
        if (Decode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(dec, value.u.fr1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr2_r16: {
        if (Decode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(dec, value.u.fr2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16& value)
{
    switch (value.tag) {
    case BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr1_r16:
        Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr1_r16(value.u.fr1_r16);
        break;
    case BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Tag_fr2_r16:
        Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16_Fr2_r16(value.u.fr2_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_Reception_r16(Encoder& enc, const BandSidelink_r16_Sl_Reception_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_CP_PatternRxSidelink_r16);
    enc.WriteBit(value.has_extendedCP_RxSidelink_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.harq_RxProcessSidelink_r16), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.pscch_RxSidelink_r16), 0, 1);
    if (value.has_scs_CP_PatternRxSidelink_r16) {
        Encode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(enc, value.scs_CP_PatternRxSidelink_r16);
    }
    if (value.has_extendedCP_RxSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCP_RxSidelink_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_Reception_r16(Decoder& dec, BandSidelink_r16_Sl_Reception_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.harq_RxProcessSidelink_r16 = (BandSidelink_r16_Sl_Reception_r16_Harq_RxProcessSidelink_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.pscch_RxSidelink_r16 = (BandSidelink_r16_Sl_Reception_r16_Pscch_RxSidelink_r16)tmp_value;
    }
    if (present_0) {
        if (Decode_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(dec, value.scs_CP_PatternRxSidelink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.extendedCP_RxSidelink_r16 = (BandSidelink_r16_Sl_Reception_r16_ExtendedCP_RxSidelink_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_Reception_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_Reception_r16(BandSidelink_r16_Sl_Reception_r16& value)
{
    if (value.has_scs_CP_PatternRxSidelink_r16) {
        Free_BandSidelink_r16_Sl_Reception_r16_Scs_CP_PatternRxSidelink_r16(value.scs_CP_PatternRxSidelink_r16);
    }
    if (value.has_extendedCP_RxSidelink_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(Encoder& enc, const BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r16);
    enc.WriteBit(value.has_scs_30kHz_r16);
    enc.WriteBit(value.has_scs_60kHz_r16);
    if (value.has_scs_15kHz_r16) {
        enc.WriteFixedBitString(value.scs_15kHz_r16.bytes, value.scs_15kHz_r16.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz_r16) {
        enc.WriteFixedBitString(value.scs_30kHz_r16.bytes, value.scs_30kHz_r16.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz_r16) {
        enc.WriteFixedBitString(value.scs_60kHz_r16.bytes, value.scs_60kHz_r16.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(Decoder& dec, BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_15kHz_r16.bytes = string_bytes;
        value.scs_15kHz_r16.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz_r16.bytes = string_bytes;
        value.scs_30kHz_r16.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r16.bytes = string_bytes;
        value.scs_60kHz_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16& value)
{
    if (value.has_scs_15kHz_r16) {
        std::free(value.scs_15kHz_r16.bytes);
        value.scs_15kHz_r16.bytes = nullptr;
        value.scs_15kHz_r16.bitLength = 0;
    }
    if (value.has_scs_30kHz_r16) {
        std::free(value.scs_30kHz_r16.bytes);
        value.scs_30kHz_r16.bytes = nullptr;
        value.scs_30kHz_r16.bitLength = 0;
    }
    if (value.has_scs_60kHz_r16) {
        std::free(value.scs_60kHz_r16.bytes);
        value.scs_60kHz_r16.bytes = nullptr;
        value.scs_60kHz_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(Encoder& enc, const BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r16);
    enc.WriteBit(value.has_scs_120kHz_r16);
    if (value.has_scs_60kHz_r16) {
        enc.WriteFixedBitString(value.scs_60kHz_r16.bytes, value.scs_60kHz_r16.bitLength, 16, 16);
    }
    if (value.has_scs_120kHz_r16) {
        enc.WriteFixedBitString(value.scs_120kHz_r16.bytes, value.scs_120kHz_r16.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(Decoder& dec, BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz_r16.bytes = string_bytes;
        value.scs_60kHz_r16.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_120kHz_r16.bytes = string_bytes;
        value.scs_120kHz_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16& value)
{
    if (value.has_scs_60kHz_r16) {
        std::free(value.scs_60kHz_r16.bytes);
        value.scs_60kHz_r16.bytes = nullptr;
        value.scs_60kHz_r16.bitLength = 0;
    }
    if (value.has_scs_120kHz_r16) {
        std::free(value.scs_120kHz_r16.bytes);
        value.scs_120kHz_r16.bytes = nullptr;
        value.scs_120kHz_r16.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(Encoder& enc, const BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr1_r16:
        Encode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(enc, value.u.fr1_r16);
        break;
    case BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr2_r16:
        Encode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(enc, value.u.fr2_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(Decoder& dec, BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag)root_index;
    switch (value.tag) {
    case BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr1_r16: {
        if (Decode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(dec, value.u.fr1_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr2_r16: {
        if (Decode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(dec, value.u.fr2_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16& value)
{
    switch (value.tag) {
    case BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr1_r16:
        Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr1_r16(value.u.fr1_r16);
        break;
    case BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Tag_fr2_r16:
        Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16_Fr2_r16(value.u.fr2_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sl_TransmissionMode1_r16(Encoder& enc, const BandSidelink_r16_Sl_TransmissionMode1_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_extendedCP_TxSidelink_r16);
    enc.WriteBit(value.has_harq_ReportOnPUCCH_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.harq_TxProcessModeOneSidelink_r16), 0, 1);
    Encode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(enc, value.scs_CP_PatternTxSidelinkModeOne_r16);
    if (value.has_extendedCP_TxSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCP_TxSidelink_r16), 0, 0);
    }
    if (value.has_harq_ReportOnPUCCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_ReportOnPUCCH_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sl_TransmissionMode1_r16(Decoder& dec, BandSidelink_r16_Sl_TransmissionMode1_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_TxProcessModeOneSidelink_r16 = (BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_TxProcessModeOneSidelink_r16)tmp_value;
    }
    {
        if (Decode_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(dec, value.scs_CP_PatternTxSidelinkModeOne_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.extendedCP_TxSidelink_r16 = (BandSidelink_r16_Sl_TransmissionMode1_r16_ExtendedCP_TxSidelink_r16)0;
    }
    if (present_1) {
        value.harq_ReportOnPUCCH_r16 = (BandSidelink_r16_Sl_TransmissionMode1_r16_Harq_ReportOnPUCCH_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sl_TransmissionMode1_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sl_TransmissionMode1_r16(BandSidelink_r16_Sl_TransmissionMode1_r16& value)
{
    Free_BandSidelink_r16_Sl_TransmissionMode1_r16_Scs_CP_PatternTxSidelinkModeOne_r16(value.scs_CP_PatternTxSidelinkModeOne_r16);
    if (value.has_extendedCP_TxSidelink_r16) {
    }
    if (value.has_harq_ReportOnPUCCH_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Sync_Sidelink_r16(Encoder& enc, const BandSidelink_r16_Sync_Sidelink_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_gNB_Sync_r16);
    enc.WriteBit(value.has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16);
    enc.WriteBit(value.has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16);
    if (value.has_gNB_Sync_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_Sync_r16), 0, 0);
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16), 0, 0);
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Sync_Sidelink_r16(Decoder& dec, BandSidelink_r16_Sync_Sidelink_r16& value)
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
        value.gNB_Sync_r16 = (BandSidelink_r16_Sync_Sidelink_r16_GNB_Sync_r16)0;
    }
    if (present_1) {
        value.gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16 = (BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16)0;
    }
    if (present_2) {
        value.gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16 = (BandSidelink_r16_Sync_Sidelink_r16_GNB_GNSS_UE_SyncWithPriorityOnGNSS_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Sync_Sidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Sync_Sidelink_r16(BandSidelink_r16_Sync_Sidelink_r16& value)
{
    if (value.has_gNB_Sync_r16) {
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNB_ENB_r16) {
    }
    if (value.has_gNB_GNSS_UE_SyncWithPriorityOnGNSS_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(Encoder& enc, const BandSidelink_r16_Psfch_FormatZeroSidelink_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.psfch_RxNumber), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.psfch_TxNumber), 0, 2);
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(Decoder& dec, BandSidelink_r16_Psfch_FormatZeroSidelink_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.psfch_RxNumber = (BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_RxNumber)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.psfch_TxNumber = (BandSidelink_r16_Psfch_FormatZeroSidelink_r16_Psfch_TxNumber)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(BandSidelink_r16_Psfch_FormatZeroSidelink_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BandSidelink_r16(Encoder& enc, const BandSidelink_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_sl_Reception_r16);
    enc.WriteBit(value.has_sl_TransmissionMode1_r16);
    enc.WriteBit(value.has_sync_Sidelink_r16);
    enc.WriteBit(value.has_sl_Tx_256QAM_r16);
    enc.WriteBit(value.has_psfch_FormatZeroSidelink_r16);
    enc.WriteBit(value.has_lowSE_64QAM_MCS_TableSidelink_r16);
    enc.WriteBit(value.has_enb_sync_Sidelink_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.freqBandSidelink_r16), 1, 1024);
    if (value.has_sl_Reception_r16) {
        Encode_BandSidelink_r16_Sl_Reception_r16(enc, value.sl_Reception_r16);
    }
    if (value.has_sl_TransmissionMode1_r16) {
        Encode_BandSidelink_r16_Sl_TransmissionMode1_r16(enc, value.sl_TransmissionMode1_r16);
    }
    if (value.has_sync_Sidelink_r16) {
        Encode_BandSidelink_r16_Sync_Sidelink_r16(enc, value.sync_Sidelink_r16);
    }
    if (value.has_sl_Tx_256QAM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sl_Tx_256QAM_r16), 0, 0);
    }
    if (value.has_psfch_FormatZeroSidelink_r16) {
        Encode_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(enc, value.psfch_FormatZeroSidelink_r16);
    }
    if (value.has_lowSE_64QAM_MCS_TableSidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.lowSE_64QAM_MCS_TableSidelink_r16), 0, 0);
    }
    if (value.has_enb_sync_Sidelink_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enb_sync_Sidelink_r16), 0, 0);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BandSidelink_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_BandSidelink_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_BandSidelink_r16_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_BandSidelink_r16_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BandSidelink_r16(Decoder& dec, BandSidelink_r16& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.freqBandSidelink_r16 = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_0) {
        if (Decode_BandSidelink_r16_Sl_Reception_r16(dec, value.sl_Reception_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandSidelink_r16_Sl_TransmissionMode1_r16(dec, value.sl_TransmissionMode1_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandSidelink_r16_Sync_Sidelink_r16(dec, value.sync_Sidelink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.sl_Tx_256QAM_r16 = (BandSidelink_r16_Sl_Tx_256QAM_r16)0;
    }
    if (present_4) {
        if (Decode_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(dec, value.psfch_FormatZeroSidelink_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.lowSE_64QAM_MCS_TableSidelink_r16 = (BandSidelink_r16_LowSE_64QAM_MCS_TableSidelink_r16)0;
    }
    if (present_6) {
        value.enb_sync_Sidelink_r16 = (BandSidelink_r16_Enb_sync_Sidelink_r16)0;
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
    if (Decode_BandSidelink_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_BandSidelink_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_BandSidelink_r16_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_BandSidelink_r16_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_BandSidelink_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandSidelink_r16(BandSidelink_r16& value)
{
    if (value.has_sl_Reception_r16) {
        Free_BandSidelink_r16_Sl_Reception_r16(value.sl_Reception_r16);
    }
    if (value.has_sl_TransmissionMode1_r16) {
        Free_BandSidelink_r16_Sl_TransmissionMode1_r16(value.sl_TransmissionMode1_r16);
    }
    if (value.has_sync_Sidelink_r16) {
        Free_BandSidelink_r16_Sync_Sidelink_r16(value.sync_Sidelink_r16);
    }
    if (value.has_sl_Tx_256QAM_r16) {
    }
    if (value.has_psfch_FormatZeroSidelink_r16) {
        Free_BandSidelink_r16_Psfch_FormatZeroSidelink_r16(value.psfch_FormatZeroSidelink_r16);
    }
    if (value.has_lowSE_64QAM_MCS_TableSidelink_r16) {
    }
    if (value.has_enb_sync_Sidelink_r16) {
    }
    if (value.has_extGroup1) {
        Free_BandSidelink_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_BandSidelink_r16_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_BandSidelink_r16_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_BandSidelink_r16_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_SwitchingTimeNR(Encoder& enc, const SRS_SwitchingTimeNR& value)
{
    (void)value;
    enc.WriteBit(value.has_switchingTimeDL);
    enc.WriteBit(value.has_switchingTimeUL);
    if (value.has_switchingTimeDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingTimeDL), 0, 7);
    }
    if (value.has_switchingTimeUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingTimeUL), 0, 7);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_SwitchingTimeNR(Decoder& dec, SRS_SwitchingTimeNR& value)
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
        value.switchingTimeDL = (SRS_SwitchingTimeNR_SwitchingTimeDL)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.switchingTimeUL = (SRS_SwitchingTimeNR_SwitchingTimeUL)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SwitchingTimeNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SwitchingTimeNR(SRS_SwitchingTimeNR& value)
{
    if (value.has_switchingTimeDL) {
    }
    if (value.has_switchingTimeUL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_SwitchingTimeEUTRA(Encoder& enc, const SRS_SwitchingTimeEUTRA& value)
{
    (void)value;
    enc.WriteBit(value.has_switchingTimeDL);
    enc.WriteBit(value.has_switchingTimeUL);
    if (value.has_switchingTimeDL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingTimeDL), 0, 14);
    }
    if (value.has_switchingTimeUL) {
        enc.WriteConstrainedInteger((std::int64_t)(value.switchingTimeUL), 0, 14);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_SwitchingTimeEUTRA(Decoder& dec, SRS_SwitchingTimeEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 14, tmp_value)) { goto fail; }
        value.switchingTimeDL = (SRS_SwitchingTimeEUTRA_SwitchingTimeDL)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 14, tmp_value)) { goto fail; }
        value.switchingTimeUL = (SRS_SwitchingTimeEUTRA_SwitchingTimeUL)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SwitchingTimeEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SwitchingTimeEUTRA(SRS_SwitchingTimeEUTRA& value)
{
    if (value.has_switchingTimeDL) {
    }
    if (value.has_switchingTimeUL) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_CapabilityRAT_Container(Encoder& enc, const UE_CapabilityRAT_Container& value)
{
    (void)value;
    {
        const std::int64_t enum_value = (std::int64_t)(value.rat_Type);
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
    enc.WriteSemiConstrainedOctetString(value.ue_CapabilityRAT_Container.bytes, value.ue_CapabilityRAT_Container.length, 0, 0xFFFFFFFFu);
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRAT_Container(Decoder& dec, UE_CapabilityRAT_Container& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
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
        value.rat_Type = (RAT_Type)enum_value;
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.ue_CapabilityRAT_Container.bytes = string_bytes;
        value.ue_CapabilityRAT_Container.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRAT_Container(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRAT_Container(UE_CapabilityRAT_Container& value)
{
    std::free(value.ue_CapabilityRAT_Container.bytes);
    value.ue_CapabilityRAT_Container.bytes = nullptr;
    value.ue_CapabilityRAT_Container.length = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_CapabilityRAT_Request(Encoder& enc, const UE_CapabilityRAT_Request& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_capabilityRequestFilter);
    {
        const std::int64_t enum_value = (std::int64_t)(value.rat_Type);
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
    if (value.has_capabilityRequestFilter) {
        enc.WriteSemiConstrainedOctetString(value.capabilityRequestFilter.bytes, value.capabilityRequestFilter.length, 0, 0xFFFFFFFFu);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRAT_Request(Decoder& dec, UE_CapabilityRAT_Request& value)
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
        value.rat_Type = (RAT_Type)enum_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.capabilityRequestFilter.bytes = string_bytes;
        value.capabilityRequestFilter.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRAT_Request(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRAT_Request(UE_CapabilityRAT_Request& value)
{
    if (value.has_capabilityRequestFilter) {
        std::free(value.capabilityRequestFilter.bytes);
        value.capabilityRequestFilter.bytes = nullptr;
        value.capabilityRequestFilter.length = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CellGrouping_r16(Encoder& enc, const CellGrouping_r16& value)
{
    (void)value;
enc.WriteConstrainedLength(value.mcg_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.mcg_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.mcg_r16_items[i]), 1, 1024);
}
enc.WriteConstrainedLength(value.scg_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.scg_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.scg_r16_items[i]), 1, 1024);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.mode_r16), 0, 1);
    return enc.Error();
}

ErrorCode Decode_CellGrouping_r16(Decoder& dec, CellGrouping_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.mcg_r16_count)) { goto fail; }
if (value.mcg_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.mcg_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.mcg_r16_count > 0u) {
    value.mcg_r16_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.mcg_r16_count * sizeof(FreqBandIndicatorNR));
    if (value.mcg_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.mcg_r16_items, 0, (std::size_t)value.mcg_r16_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.mcg_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.mcg_r16_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.scg_r16_count)) { goto fail; }
if (value.scg_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.scg_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.scg_r16_count > 0u) {
    value.scg_r16_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.scg_r16_count * sizeof(FreqBandIndicatorNR));
    if (value.scg_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.scg_r16_items, 0, (std::size_t)value.scg_r16_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.scg_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.scg_r16_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.mode_r16 = (CellGrouping_r16_Mode_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellGrouping_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGrouping_r16(CellGrouping_r16& value)
{
    if (value.mcg_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.mcg_r16_count; ++i) {
        }
        std::free(value.mcg_r16_items);
        value.mcg_r16_items = nullptr;
    }
    value.mcg_r16_count = 0;
    if (value.scg_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.scg_r16_count; ++i) {
        }
        std::free(value.scg_r16_items);
        value.scg_r16_items = nullptr;
    }
    value.scg_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(Encoder& enc, const UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(Decoder& dec, UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_CapabilityRequestFilterNR_v1710(Encoder& enc, const UE_CapabilityRequestFilterNR_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_sidelinkRequest_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sidelinkRequest_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sidelinkRequest_r17), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterNR_v1710(Decoder& dec, UE_CapabilityRequestFilterNR_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.sidelinkRequest_r17 = (UE_CapabilityRequestFilterNR_v1710_SidelinkRequest_r17)0;
    }
    if (present_1) {
        if (Decode_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterNR_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterNR_v1710(UE_CapabilityRequestFilterNR_v1710& value)
{
    if (value.has_sidelinkRequest_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_CapabilityRequestFilterNR_v1710_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_CapabilityRequestFilterNR_v1540(Encoder& enc, const UE_CapabilityRequestFilterNR_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_SwitchingTimeRequest);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_srs_SwitchingTimeRequest) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_SwitchingTimeRequest), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_CapabilityRequestFilterNR_v1710(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterNR_v1540(Decoder& dec, UE_CapabilityRequestFilterNR_v1540& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.srs_SwitchingTimeRequest = (UE_CapabilityRequestFilterNR_v1540_Srs_SwitchingTimeRequest)0;
    }
    if (present_1) {
        if (Decode_UE_CapabilityRequestFilterNR_v1710(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterNR_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterNR_v1540(UE_CapabilityRequestFilterNR_v1540& value)
{
    if (value.has_srs_SwitchingTimeRequest) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_CapabilityRequestFilterNR_v1710(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_CapabilityRequestFilterNR(Encoder& enc, const UE_CapabilityRequestFilterNR& value)
{
    (void)value;
    enc.WriteBit(value.has_frequencyBandListFilter);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_frequencyBandListFilter) {
        Encode_FreqBandList(enc, value.frequencyBandListFilter);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_CapabilityRequestFilterNR_v1540(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_CapabilityRequestFilterNR(Decoder& dec, UE_CapabilityRequestFilterNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FreqBandList(dec, value.frequencyBandListFilter) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_CapabilityRequestFilterNR_v1540(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_CapabilityRequestFilterNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_CapabilityRequestFilterNR(UE_CapabilityRequestFilterNR& value)
{
    if (value.has_frequencyBandListFilter) {
        Free_FreqBandList(value.frequencyBandListFilter);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_CapabilityRequestFilterNR_v1540(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v1800_NonCriticalExtension(Encoder& enc, const UE_MRDC_Capability_v1800_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v1800_NonCriticalExtension(Decoder& dec, UE_MRDC_Capability_v1800_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v1800_NonCriticalExtension(UE_MRDC_Capability_v1800_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v1800(Encoder& enc, const UE_MRDC_Capability_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_requirementTypeIndication_r18);
    enc.WriteBit(value.has_measAndMobParametersMRDC_v1810);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_requirementTypeIndication_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.requirementTypeIndication_r18), 0, 0);
    }
    if (value.has_measAndMobParametersMRDC_v1810) {
        Encode_MeasAndMobParametersMRDC_v1810(enc, value.measAndMobParametersMRDC_v1810);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v1800_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v1800(Decoder& dec, UE_MRDC_Capability_v1800& value)
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
        value.requirementTypeIndication_r18 = (UE_MRDC_Capability_v1800_RequirementTypeIndication_r18)0;
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersMRDC_v1810(dec, value.measAndMobParametersMRDC_v1810) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_MRDC_Capability_v1800_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v1800(UE_MRDC_Capability_v1800& value)
{
    if (value.has_requirementTypeIndication_r18) {
    }
    if (value.has_measAndMobParametersMRDC_v1810) {
        Free_MeasAndMobParametersMRDC_v1810(value.measAndMobParametersMRDC_v1810);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v1800_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v1730(Encoder& enc, const UE_MRDC_Capability_v1730& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_v1730);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_measAndMobParametersMRDC_v1730) {
        Encode_MeasAndMobParametersMRDC_v1730(enc, value.measAndMobParametersMRDC_v1730);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v1800(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v1730(Decoder& dec, UE_MRDC_Capability_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_v1730(dec, value.measAndMobParametersMRDC_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_MRDC_Capability_v1800(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v1730(UE_MRDC_Capability_v1730& value)
{
    if (value.has_measAndMobParametersMRDC_v1730) {
        Free_MeasAndMobParametersMRDC_v1730(value.measAndMobParametersMRDC_v1730);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v1800(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v1700(Encoder& enc, const UE_MRDC_Capability_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_MeasAndMobParametersMRDC_v1700(enc, value.measAndMobParametersMRDC_v1700);
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v1730(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v1700(Decoder& dec, UE_MRDC_Capability_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_MeasAndMobParametersMRDC_v1700(dec, value.measAndMobParametersMRDC_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_UE_MRDC_Capability_v1730(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v1700(UE_MRDC_Capability_v1700& value)
{
    Free_MeasAndMobParametersMRDC_v1700(value.measAndMobParametersMRDC_v1700);
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v1730(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_GeneralParametersMRDC_v1610(Encoder& enc, const GeneralParametersMRDC_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_f1c_OverEUTRA_r16);
    if (value.has_f1c_OverEUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1c_OverEUTRA_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_GeneralParametersMRDC_v1610(Decoder& dec, GeneralParametersMRDC_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.f1c_OverEUTRA_r16 = (GeneralParametersMRDC_v1610_F1c_OverEUTRA_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GeneralParametersMRDC_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GeneralParametersMRDC_v1610(GeneralParametersMRDC_v1610& value)
{
    if (value.has_f1c_OverEUTRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v1610(Encoder& enc, const UE_MRDC_Capability_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_v1610);
    enc.WriteBit(value.has_generalParametersMRDC_v1610);
    enc.WriteBit(value.has_pdcp_ParametersMRDC_v1610);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_measAndMobParametersMRDC_v1610) {
        Encode_MeasAndMobParametersMRDC_v1610(enc, value.measAndMobParametersMRDC_v1610);
    }
    if (value.has_generalParametersMRDC_v1610) {
        Encode_GeneralParametersMRDC_v1610(enc, value.generalParametersMRDC_v1610);
    }
    if (value.has_pdcp_ParametersMRDC_v1610) {
        Encode_PDCP_ParametersMRDC_v1610(enc, value.pdcp_ParametersMRDC_v1610);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v1700(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v1610(Decoder& dec, UE_MRDC_Capability_v1610& value)
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
        if (Decode_MeasAndMobParametersMRDC_v1610(dec, value.measAndMobParametersMRDC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_GeneralParametersMRDC_v1610(dec, value.generalParametersMRDC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PDCP_ParametersMRDC_v1610(dec, value.pdcp_ParametersMRDC_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_MRDC_Capability_v1700(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v1610(UE_MRDC_Capability_v1610& value)
{
    if (value.has_measAndMobParametersMRDC_v1610) {
        Free_MeasAndMobParametersMRDC_v1610(value.measAndMobParametersMRDC_v1610);
    }
    if (value.has_generalParametersMRDC_v1610) {
        Free_GeneralParametersMRDC_v1610(value.generalParametersMRDC_v1610);
    }
    if (value.has_pdcp_ParametersMRDC_v1610) {
        Free_PDCP_ParametersMRDC_v1610(value.pdcp_ParametersMRDC_v1610);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v1700(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_CapabilityAddXDD_Mode_v1560(Encoder& enc, const UE_MRDC_CapabilityAddXDD_Mode_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC_XDD_Diff_v1560);
    if (value.has_measAndMobParametersMRDC_XDD_Diff_v1560) {
        Encode_MeasAndMobParametersMRDC_XDD_Diff_v1560(enc, value.measAndMobParametersMRDC_XDD_Diff_v1560);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_CapabilityAddXDD_Mode_v1560(Decoder& dec, UE_MRDC_CapabilityAddXDD_Mode_v1560& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MeasAndMobParametersMRDC_XDD_Diff_v1560(dec, value.measAndMobParametersMRDC_XDD_Diff_v1560) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_CapabilityAddXDD_Mode_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_CapabilityAddXDD_Mode_v1560(UE_MRDC_CapabilityAddXDD_Mode_v1560& value)
{
    if (value.has_measAndMobParametersMRDC_XDD_Diff_v1560) {
        Free_MeasAndMobParametersMRDC_XDD_Diff_v1560(value.measAndMobParametersMRDC_XDD_Diff_v1560);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v1560(Encoder& enc, const UE_MRDC_Capability_v1560& value)
{
    (void)value;
    enc.WriteBit(value.receivedFilters != nullptr);
    enc.WriteBit(value.has_measAndMobParametersMRDC_v1560);
    enc.WriteBit(value.has_fdd_Add_UE_MRDC_Capabilities_v1560);
    enc.WriteBit(value.has_tdd_Add_UE_MRDC_Capabilities_v1560);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.receivedFilters != nullptr) {
        if (value.receivedFilters == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_UECapabilityEnquiry_v1560_IEs(enc, *value.receivedFilters);
        }
    }
    if (value.has_measAndMobParametersMRDC_v1560) {
        Encode_MeasAndMobParametersMRDC_v1560(enc, value.measAndMobParametersMRDC_v1560);
    }
    if (value.has_fdd_Add_UE_MRDC_Capabilities_v1560) {
        Encode_UE_MRDC_CapabilityAddXDD_Mode_v1560(enc, value.fdd_Add_UE_MRDC_Capabilities_v1560);
    }
    if (value.has_tdd_Add_UE_MRDC_Capabilities_v1560) {
        Encode_UE_MRDC_CapabilityAddXDD_Mode_v1560(enc, value.tdd_Add_UE_MRDC_Capabilities_v1560);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v1610(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v1560(Decoder& dec, UE_MRDC_Capability_v1560& value)
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
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        UECapabilityEnquiry_v1560_IEs* containing_value = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_UECapabilityEnquiry_v1560_IEs(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_UECapabilityEnquiry_v1560_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_UECapabilityEnquiry_v1560_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.receivedFilters = containing_value;
    }
    if (present_1) {
        if (Decode_MeasAndMobParametersMRDC_v1560(dec, value.measAndMobParametersMRDC_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_MRDC_CapabilityAddXDD_Mode_v1560(dec, value.fdd_Add_UE_MRDC_Capabilities_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_MRDC_CapabilityAddXDD_Mode_v1560(dec, value.tdd_Add_UE_MRDC_Capabilities_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_MRDC_Capability_v1610(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v1560(UE_MRDC_Capability_v1560& value)
{
    if (value.receivedFilters != nullptr) {
        if (value.receivedFilters != nullptr) {
            Free_UECapabilityEnquiry_v1560_IEs(*value.receivedFilters);
            std::free(value.receivedFilters);
            value.receivedFilters = nullptr;
        }
    }
    if (value.has_measAndMobParametersMRDC_v1560) {
        Free_MeasAndMobParametersMRDC_v1560(value.measAndMobParametersMRDC_v1560);
    }
    if (value.has_fdd_Add_UE_MRDC_Capabilities_v1560) {
        Free_UE_MRDC_CapabilityAddXDD_Mode_v1560(value.fdd_Add_UE_MRDC_Capabilities_v1560);
    }
    if (value.has_tdd_Add_UE_MRDC_Capabilities_v1560) {
        Free_UE_MRDC_CapabilityAddXDD_Mode_v1560(value.tdd_Add_UE_MRDC_Capabilities_v1560);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v1610(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability(Encoder& enc, const UE_MRDC_Capability& value)
{
    (void)value;
    enc.WriteBit(value.has_measAndMobParametersMRDC);
    enc.WriteBit(value.has_phy_ParametersMRDC_v1530);
    enc.WriteBit(value.has_generalParametersMRDC);
    enc.WriteBit(value.has_fdd_Add_UE_MRDC_Capabilities);
    enc.WriteBit(value.has_tdd_Add_UE_MRDC_Capabilities);
    enc.WriteBit(value.has_fr1_Add_UE_MRDC_Capabilities);
    enc.WriteBit(value.has_fr2_Add_UE_MRDC_Capabilities);
    enc.WriteBit(value.has_featureSetCombinations);
    enc.WriteBit(value.has_pdcp_ParametersMRDC_v1530);
    enc.WriteBit(value.lateNonCriticalExtension != nullptr);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_measAndMobParametersMRDC) {
        Encode_MeasAndMobParametersMRDC(enc, value.measAndMobParametersMRDC);
    }
    if (value.has_phy_ParametersMRDC_v1530) {
        Encode_Phy_ParametersMRDC(enc, value.phy_ParametersMRDC_v1530);
    }
    Encode_RF_ParametersMRDC(enc, value.rf_ParametersMRDC);
    if (value.has_generalParametersMRDC) {
        Encode_GeneralParametersMRDC_XDD_Diff(enc, value.generalParametersMRDC);
    }
    if (value.has_fdd_Add_UE_MRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddXDD_Mode(enc, value.fdd_Add_UE_MRDC_Capabilities);
    }
    if (value.has_tdd_Add_UE_MRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddXDD_Mode(enc, value.tdd_Add_UE_MRDC_Capabilities);
    }
    if (value.has_fr1_Add_UE_MRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddFRX_Mode(enc, value.fr1_Add_UE_MRDC_Capabilities);
    }
    if (value.has_fr2_Add_UE_MRDC_Capabilities) {
        Encode_UE_MRDC_CapabilityAddFRX_Mode(enc, value.fr2_Add_UE_MRDC_Capabilities);
    }
    if (value.has_featureSetCombinations) {
enc.WriteConstrainedLength(value.featureSetCombinations_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetCombinations_count; ++i) {
    Encode_FeatureSetCombination(enc, value.featureSetCombinations_items[i]);
}
    }
    if (value.has_pdcp_ParametersMRDC_v1530) {
        Encode_PDCP_ParametersMRDC(enc, value.pdcp_ParametersMRDC_v1530);
    }
    if (value.lateNonCriticalExtension != nullptr) {
        if (value.lateNonCriticalExtension == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_UE_MRDC_Capability_v15g0(enc, *value.lateNonCriticalExtension);
        }
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v1560(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability(Decoder& dec, UE_MRDC_Capability& value)
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
        if (Decode_MeasAndMobParametersMRDC(dec, value.measAndMobParametersMRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_Phy_ParametersMRDC(dec, value.phy_ParametersMRDC_v1530) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_RF_ParametersMRDC(dec, value.rf_ParametersMRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_GeneralParametersMRDC_XDD_Diff(dec, value.generalParametersMRDC) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_MRDC_CapabilityAddXDD_Mode(dec, value.fdd_Add_UE_MRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_MRDC_CapabilityAddXDD_Mode(dec, value.tdd_Add_UE_MRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_UE_MRDC_CapabilityAddFRX_Mode(dec, value.fr1_Add_UE_MRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_UE_MRDC_CapabilityAddFRX_Mode(dec, value.fr2_Add_UE_MRDC_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetCombinations_count)) { goto fail; }
if (value.featureSetCombinations_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetCombinations_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetCombinations_count > 0u) {
    value.featureSetCombinations_items = (FeatureSetCombination*)std::malloc((std::size_t)value.featureSetCombinations_count * sizeof(FeatureSetCombination));
    if (value.featureSetCombinations_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetCombinations_items, 0, (std::size_t)value.featureSetCombinations_count * sizeof(FeatureSetCombination));
}
for (std::uint32_t i = 0; i < value.featureSetCombinations_count; ++i) {
    if (Decode_FeatureSetCombination(dec, value.featureSetCombinations_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_8) {
        if (Decode_PDCP_ParametersMRDC(dec, value.pdcp_ParametersMRDC_v1530) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        UE_MRDC_Capability_v15g0* containing_value = (UE_MRDC_Capability_v15g0*)std::malloc(sizeof(UE_MRDC_Capability_v15g0));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_UE_MRDC_Capability_v15g0(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_UE_MRDC_Capability_v15g0(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_UE_MRDC_Capability_v15g0(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.lateNonCriticalExtension = containing_value;
    }
    if (present_10) {
        if (Decode_UE_MRDC_Capability_v1560(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability(UE_MRDC_Capability& value)
{
    if (value.has_measAndMobParametersMRDC) {
        Free_MeasAndMobParametersMRDC(value.measAndMobParametersMRDC);
    }
    if (value.has_phy_ParametersMRDC_v1530) {
        Free_Phy_ParametersMRDC(value.phy_ParametersMRDC_v1530);
    }
    Free_RF_ParametersMRDC(value.rf_ParametersMRDC);
    if (value.has_generalParametersMRDC) {
        Free_GeneralParametersMRDC_XDD_Diff(value.generalParametersMRDC);
    }
    if (value.has_fdd_Add_UE_MRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddXDD_Mode(value.fdd_Add_UE_MRDC_Capabilities);
    }
    if (value.has_tdd_Add_UE_MRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddXDD_Mode(value.tdd_Add_UE_MRDC_Capabilities);
    }
    if (value.has_fr1_Add_UE_MRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddFRX_Mode(value.fr1_Add_UE_MRDC_Capabilities);
    }
    if (value.has_fr2_Add_UE_MRDC_Capabilities) {
        Free_UE_MRDC_CapabilityAddFRX_Mode(value.fr2_Add_UE_MRDC_Capabilities);
    }
    if (value.has_featureSetCombinations) {
        if (value.featureSetCombinations_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetCombinations_count; ++i) {
                Free_FeatureSetCombination(value.featureSetCombinations_items[i]);
            }
            std::free(value.featureSetCombinations_items);
            value.featureSetCombinations_items = nullptr;
        }
        value.featureSetCombinations_count = 0;
    }
    if (value.has_pdcp_ParametersMRDC_v1530) {
        Free_PDCP_ParametersMRDC(value.pdcp_ParametersMRDC_v1530);
    }
    if (value.lateNonCriticalExtension != nullptr) {
        if (value.lateNonCriticalExtension != nullptr) {
            Free_UE_MRDC_Capability_v15g0(*value.lateNonCriticalExtension);
            std::free(value.lateNonCriticalExtension);
            value.lateNonCriticalExtension = nullptr;
        }
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v1560(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v16e0_NonCriticalExtension(Encoder& enc, const UE_MRDC_Capability_v16e0_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v16e0_NonCriticalExtension(Decoder& dec, UE_MRDC_Capability_v16e0_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v16e0_NonCriticalExtension(UE_MRDC_Capability_v16e0_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v16e0(Encoder& enc, const UE_MRDC_Capability_v16e0& value)
{
    (void)value;
    enc.WriteBit(value.has_rf_ParametersMRDC_v16e0);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_rf_ParametersMRDC_v16e0) {
        Encode_RF_ParametersMRDC_v16e0(enc, value.rf_ParametersMRDC_v16e0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v16e0_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v16e0(Decoder& dec, UE_MRDC_Capability_v16e0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RF_ParametersMRDC_v16e0(dec, value.rf_ParametersMRDC_v16e0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_MRDC_Capability_v16e0_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v16e0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v16e0(UE_MRDC_Capability_v16e0& value)
{
    if (value.has_rf_ParametersMRDC_v16e0) {
        Free_RF_ParametersMRDC_v16e0(value.rf_ParametersMRDC_v16e0);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v16e0_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v15n0(Encoder& enc, const UE_MRDC_Capability_v15n0& value)
{
    (void)value;
    enc.WriteBit(value.has_rf_ParametersMRDC_v15n0);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_rf_ParametersMRDC_v15n0) {
        Encode_RF_ParametersMRDC_v15n0(enc, value.rf_ParametersMRDC_v15n0);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v16e0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v15n0(Decoder& dec, UE_MRDC_Capability_v15n0& value)
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
        if (Decode_RF_ParametersMRDC_v15n0(dec, value.rf_ParametersMRDC_v15n0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_UE_MRDC_Capability_v16e0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v15n0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v15n0(UE_MRDC_Capability_v15n0& value)
{
    if (value.has_rf_ParametersMRDC_v15n0) {
        Free_RF_ParametersMRDC_v15n0(value.rf_ParametersMRDC_v15n0);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v16e0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_MRDC_Capability_v15g0(Encoder& enc, const UE_MRDC_Capability_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_rf_ParametersMRDC_v15g0);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_rf_ParametersMRDC_v15g0) {
        Encode_RF_ParametersMRDC_v15g0(enc, value.rf_ParametersMRDC_v15g0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_MRDC_Capability_v15n0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_MRDC_Capability_v15g0(Decoder& dec, UE_MRDC_Capability_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RF_ParametersMRDC_v15g0(dec, value.rf_ParametersMRDC_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_MRDC_Capability_v15n0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_MRDC_Capability_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_MRDC_Capability_v15g0(UE_MRDC_Capability_v15g0& value)
{
    if (value.has_rf_ParametersMRDC_v15g0) {
        Free_RF_ParametersMRDC_v15g0(value.rf_ParametersMRDC_v15g0);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_MRDC_Capability_v15n0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1800_NonCriticalExtension(Encoder& enc, const UE_NR_Capability_v1800_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1800_NonCriticalExtension(Decoder& dec, UE_NR_Capability_v1800_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1800_NonCriticalExtension(UE_NR_Capability_v1800_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1800(Encoder& enc, const UE_NR_Capability_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_airToGroundNetwork_r18);
    enc.WriteBit(value.has_eRedCapParameters_r18);
    enc.WriteBit(value.has_ncr_Parameters_r18);
    enc.WriteBit(value.has_softSatelliteSwitchResyncNTN_r18);
    enc.WriteBit(value.has_hardSatelliteSwitchResyncNTN_r18);
    enc.WriteBit(value.has_mt_SDT_r18);
    enc.WriteBit(value.has_mt_SDT_NTN_r18);
    enc.WriteBit(value.has_inDeviceCoexIndAutonomousDenial_r18);
    enc.WriteBit(value.has_inDeviceCoexIndFDM_r18);
    enc.WriteBit(value.has_inDeviceCoexIndTDM_r18);
    enc.WriteBit(value.has_musim_GapPriorityPreference_r18);
    enc.WriteBit(value.has_musim_CapabilityRestriction_r18);
    enc.WriteBit(value.has_multiRx_FR2_Preference_r18);
    enc.WriteBit(value.has_ra_InsteadCG_SDT_r18);
    enc.WriteBit(value.has_resumeAfterSDT_Release_r18);
    enc.WriteBit(value.has_ul_TrafficInfo_r18);
    enc.WriteBit(value.has_aerialParameters_r18);
    enc.WriteBit(value.has_ntn_VSAT_AntennaType_r18);
    enc.WriteBit(value.has_ntn_VSAT_MobilityType_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_airToGroundNetwork_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.airToGroundNetwork_r18), 0, 0);
    }
    if (value.has_eRedCapParameters_r18) {
        Encode_ERedCapParameters_r18(enc, value.eRedCapParameters_r18);
    }
    if (value.has_ncr_Parameters_r18) {
        Encode_NCR_Parameters_r18(enc, value.ncr_Parameters_r18);
    }
    if (value.has_softSatelliteSwitchResyncNTN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.softSatelliteSwitchResyncNTN_r18), 0, 0);
    }
    if (value.has_hardSatelliteSwitchResyncNTN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hardSatelliteSwitchResyncNTN_r18), 0, 0);
    }
    if (value.has_mt_SDT_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mt_SDT_r18), 0, 0);
    }
    if (value.has_mt_SDT_NTN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mt_SDT_NTN_r18), 0, 0);
    }
    if (value.has_inDeviceCoexIndAutonomousDenial_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inDeviceCoexIndAutonomousDenial_r18), 0, 0);
    }
    if (value.has_inDeviceCoexIndFDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inDeviceCoexIndFDM_r18), 0, 0);
    }
    if (value.has_inDeviceCoexIndTDM_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inDeviceCoexIndTDM_r18), 0, 0);
    }
    if (value.has_musim_GapPriorityPreference_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapPriorityPreference_r18), 0, 0);
    }
    if (value.has_musim_CapabilityRestriction_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_CapabilityRestriction_r18), 0, 0);
    }
    if (value.has_multiRx_FR2_Preference_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiRx_FR2_Preference_r18), 0, 0);
    }
    if (value.has_ra_InsteadCG_SDT_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_InsteadCG_SDT_r18), 0, 0);
    }
    if (value.has_resumeAfterSDT_Release_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resumeAfterSDT_Release_r18), 0, 0);
    }
    if (value.has_ul_TrafficInfo_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_TrafficInfo_r18), 0, 0);
    }
    if (value.has_aerialParameters_r18) {
        Encode_AerialParameters_r18(enc, value.aerialParameters_r18);
    }
    if (value.has_ntn_VSAT_AntennaType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_VSAT_AntennaType_r18), 0, 1);
    }
    if (value.has_ntn_VSAT_MobilityType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_VSAT_MobilityType_r18), 0, 1);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1800_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1800(Decoder& dec, UE_NR_Capability_v1800& value)
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
    if (present_0) {
        value.airToGroundNetwork_r18 = (UE_NR_Capability_v1800_AirToGroundNetwork_r18)0;
    }
    if (present_1) {
        if (Decode_ERedCapParameters_r18(dec, value.eRedCapParameters_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_NCR_Parameters_r18(dec, value.ncr_Parameters_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.softSatelliteSwitchResyncNTN_r18 = (UE_NR_Capability_v1800_SoftSatelliteSwitchResyncNTN_r18)0;
    }
    if (present_4) {
        value.hardSatelliteSwitchResyncNTN_r18 = (UE_NR_Capability_v1800_HardSatelliteSwitchResyncNTN_r18)0;
    }
    if (present_5) {
        value.mt_SDT_r18 = (UE_NR_Capability_v1800_Mt_SDT_r18)0;
    }
    if (present_6) {
        value.mt_SDT_NTN_r18 = (UE_NR_Capability_v1800_Mt_SDT_NTN_r18)0;
    }
    if (present_7) {
        value.inDeviceCoexIndAutonomousDenial_r18 = (UE_NR_Capability_v1800_InDeviceCoexIndAutonomousDenial_r18)0;
    }
    if (present_8) {
        value.inDeviceCoexIndFDM_r18 = (UE_NR_Capability_v1800_InDeviceCoexIndFDM_r18)0;
    }
    if (present_9) {
        value.inDeviceCoexIndTDM_r18 = (UE_NR_Capability_v1800_InDeviceCoexIndTDM_r18)0;
    }
    if (present_10) {
        value.musim_GapPriorityPreference_r18 = (UE_NR_Capability_v1800_Musim_GapPriorityPreference_r18)0;
    }
    if (present_11) {
        value.musim_CapabilityRestriction_r18 = (UE_NR_Capability_v1800_Musim_CapabilityRestriction_r18)0;
    }
    if (present_12) {
        value.multiRx_FR2_Preference_r18 = (UE_NR_Capability_v1800_MultiRx_FR2_Preference_r18)0;
    }
    if (present_13) {
        value.ra_InsteadCG_SDT_r18 = (UE_NR_Capability_v1800_Ra_InsteadCG_SDT_r18)0;
    }
    if (present_14) {
        value.resumeAfterSDT_Release_r18 = (UE_NR_Capability_v1800_ResumeAfterSDT_Release_r18)0;
    }
    if (present_15) {
        value.ul_TrafficInfo_r18 = (UE_NR_Capability_v1800_Ul_TrafficInfo_r18)0;
    }
    if (present_16) {
        if (Decode_AerialParameters_r18(dec, value.aerialParameters_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ntn_VSAT_AntennaType_r18 = (UE_NR_Capability_v1800_Ntn_VSAT_AntennaType_r18)tmp_value;
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ntn_VSAT_MobilityType_r18 = (UE_NR_Capability_v1800_Ntn_VSAT_MobilityType_r18)tmp_value;
    }
    if (present_19) {
        if (Decode_UE_NR_Capability_v1800_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1800(UE_NR_Capability_v1800& value)
{
    if (value.has_airToGroundNetwork_r18) {
    }
    if (value.has_eRedCapParameters_r18) {
        Free_ERedCapParameters_r18(value.eRedCapParameters_r18);
    }
    if (value.has_ncr_Parameters_r18) {
        Free_NCR_Parameters_r18(value.ncr_Parameters_r18);
    }
    if (value.has_softSatelliteSwitchResyncNTN_r18) {
    }
    if (value.has_hardSatelliteSwitchResyncNTN_r18) {
    }
    if (value.has_mt_SDT_r18) {
    }
    if (value.has_mt_SDT_NTN_r18) {
    }
    if (value.has_inDeviceCoexIndAutonomousDenial_r18) {
    }
    if (value.has_inDeviceCoexIndFDM_r18) {
    }
    if (value.has_inDeviceCoexIndTDM_r18) {
    }
    if (value.has_musim_GapPriorityPreference_r18) {
    }
    if (value.has_musim_CapabilityRestriction_r18) {
    }
    if (value.has_multiRx_FR2_Preference_r18) {
    }
    if (value.has_ra_InsteadCG_SDT_r18) {
    }
    if (value.has_resumeAfterSDT_Release_r18) {
    }
    if (value.has_ul_TrafficInfo_r18) {
    }
    if (value.has_aerialParameters_r18) {
        Free_AerialParameters_r18(value.aerialParameters_r18);
    }
    if (value.has_ntn_VSAT_AntennaType_r18) {
    }
    if (value.has_ntn_VSAT_MobilityType_r18) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1800_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1750(Encoder& enc, const UE_NR_Capability_v1750& value)
{
    (void)value;
    enc.WriteBit(value.has_crossCarrierSchedulingConfigurationRelease_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_crossCarrierSchedulingConfigurationRelease_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierSchedulingConfigurationRelease_r17), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1800(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1750(Decoder& dec, UE_NR_Capability_v1750& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.crossCarrierSchedulingConfigurationRelease_r17 = (UE_NR_Capability_v1750_CrossCarrierSchedulingConfigurationRelease_r17)0;
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v1800(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1750(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1750(UE_NR_Capability_v1750& value)
{
    if (value.has_crossCarrierSchedulingConfigurationRelease_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1800(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1740(Encoder& enc, const UE_NR_Capability_v1740& value)
{
    (void)value;
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_RedCapParameters_v1740(enc, value.redCapParameters_v1740);
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1750(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1740(Decoder& dec, UE_NR_Capability_v1740& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_RedCapParameters_v1740(dec, value.redCapParameters_v1740) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_UE_NR_Capability_v1750(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1740(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1740(UE_NR_Capability_v1740& value)
{
    Free_RedCapParameters_v1740(value.redCapParameters_v1740);
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1750(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BAP_Parameters_v1700(Encoder& enc, const BAP_Parameters_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_bapHeaderRewriting_Rerouting_r17);
    enc.WriteBit(value.has_bapHeaderRewriting_Routing_r17);
    if (value.has_bapHeaderRewriting_Rerouting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bapHeaderRewriting_Rerouting_r17), 0, 0);
    }
    if (value.has_bapHeaderRewriting_Routing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bapHeaderRewriting_Routing_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BAP_Parameters_v1700(Decoder& dec, BAP_Parameters_v1700& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.bapHeaderRewriting_Rerouting_r17 = (BAP_Parameters_v1700_BapHeaderRewriting_Rerouting_r17)0;
    }
    if (present_1) {
        value.bapHeaderRewriting_Routing_r17 = (BAP_Parameters_v1700_BapHeaderRewriting_Routing_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BAP_Parameters_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BAP_Parameters_v1700(BAP_Parameters_v1700& value)
{
    if (value.has_bapHeaderRewriting_Rerouting_r17) {
    }
    if (value.has_bapHeaderRewriting_Routing_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_Parameters_r17(Encoder& enc, const MBS_Parameters_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_maxMRB_Add_r17);
    if (value.has_maxMRB_Add_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxMRB_Add_r17), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_Parameters_r17(Decoder& dec, MBS_Parameters_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.maxMRB_Add_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_Parameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_Parameters_r17(MBS_Parameters_r17& value)
{
    if (value.has_maxMRB_Add_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_RadioPagingInfo_r17(Encoder& enc, const UE_RadioPagingInfo_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pei_SubgroupingSupportBandList_r17);
    if (value.has_pei_SubgroupingSupportBandList_r17) {
enc.WriteConstrainedLength(value.pei_SubgroupingSupportBandList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pei_SubgroupingSupportBandList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pei_SubgroupingSupportBandList_r17_items[i]), 1, 1024);
}
    }
    return enc.Error();
}

ErrorCode Decode_UE_RadioPagingInfo_r17(Decoder& dec, UE_RadioPagingInfo_r17& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.pei_SubgroupingSupportBandList_r17_count)) { goto fail; }
if (value.pei_SubgroupingSupportBandList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pei_SubgroupingSupportBandList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pei_SubgroupingSupportBandList_r17_count > 0u) {
    value.pei_SubgroupingSupportBandList_r17_items = (FreqBandIndicatorNR*)std::malloc((std::size_t)value.pei_SubgroupingSupportBandList_r17_count * sizeof(FreqBandIndicatorNR));
    if (value.pei_SubgroupingSupportBandList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pei_SubgroupingSupportBandList_r17_items, 0, (std::size_t)value.pei_SubgroupingSupportBandList_r17_count * sizeof(FreqBandIndicatorNR));
}
for (std::uint32_t i = 0; i < value.pei_SubgroupingSupportBandList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
    value.pei_SubgroupingSupportBandList_r17_items[i] = (FreqBandIndicatorNR)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_RadioPagingInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_RadioPagingInfo_r17(UE_RadioPagingInfo_r17& value)
{
    if (value.has_pei_SubgroupingSupportBandList_r17) {
        if (value.pei_SubgroupingSupportBandList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pei_SubgroupingSupportBandList_r17_count; ++i) {
            }
            std::free(value.pei_SubgroupingSupportBandList_r17_items);
            value.pei_SubgroupingSupportBandList_r17_items = nullptr;
        }
        value.pei_SubgroupingSupportBandList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1700(Encoder& enc, const UE_NR_Capability_v1700& value)
{
    (void)value;
    enc.WriteBit(value.has_inactiveStatePO_Determination_r17);
    enc.WriteBit(value.has_highSpeedParameters_v1700);
    enc.WriteBit(value.has_powSav_Parameters_v1700);
    enc.WriteBit(value.has_mac_Parameters_v1700);
    enc.WriteBit(value.has_ims_Parameters_v1700);
    enc.WriteBit(value.has_appLayerMeasParameters_r17);
    enc.WriteBit(value.has_redCapParameters_r17);
    enc.WriteBit(value.has_ra_SDT_r17);
    enc.WriteBit(value.has_srb_SDT_r17);
    enc.WriteBit(value.has_gNB_SideRTT_BasedPDC_r17);
    enc.WriteBit(value.has_bh_RLF_DetectionRecovery_Indication_r17);
    enc.WriteBit(value.has_nrdc_Parameters_v1700);
    enc.WriteBit(value.has_bap_Parameters_v1700);
    enc.WriteBit(value.has_musim_GapPreference_r17);
    enc.WriteBit(value.has_musimLeaveConnected_r17);
    enc.WriteBit(value.has_nonTerrestrialNetwork_r17);
    enc.WriteBit(value.has_ntn_ScenarioSupport_r17);
    enc.WriteBit(value.has_sliceInfoforCellReselection_r17);
    enc.WriteBit(value.has_ue_RadioPagingInfo_r17);
    enc.WriteBit(value.has_ul_GapFR2_Pattern_r17);
    enc.WriteBit(value.has_ntn_Parameters_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_inactiveStatePO_Determination_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactiveStatePO_Determination_r17), 0, 0);
    }
    if (value.has_highSpeedParameters_v1700) {
        Encode_HighSpeedParameters_v1700(enc, value.highSpeedParameters_v1700);
    }
    if (value.has_powSav_Parameters_v1700) {
        Encode_PowSav_Parameters_v1700(enc, value.powSav_Parameters_v1700);
    }
    if (value.has_mac_Parameters_v1700) {
        Encode_MAC_Parameters_v1700(enc, value.mac_Parameters_v1700);
    }
    if (value.has_ims_Parameters_v1700) {
        Encode_IMS_Parameters_v1700(enc, value.ims_Parameters_v1700);
    }
    Encode_MeasAndMobParameters_v1700(enc, value.measAndMobParameters_v1700);
    if (value.has_appLayerMeasParameters_r17) {
        Encode_AppLayerMeasParameters_r17(enc, value.appLayerMeasParameters_r17);
    }
    if (value.has_redCapParameters_r17) {
        Encode_RedCapParameters_r17(enc, value.redCapParameters_r17);
    }
    if (value.has_ra_SDT_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ra_SDT_r17), 0, 0);
    }
    if (value.has_srb_SDT_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srb_SDT_r17), 0, 0);
    }
    if (value.has_gNB_SideRTT_BasedPDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gNB_SideRTT_BasedPDC_r17), 0, 0);
    }
    if (value.has_bh_RLF_DetectionRecovery_Indication_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bh_RLF_DetectionRecovery_Indication_r17), 0, 0);
    }
    if (value.has_nrdc_Parameters_v1700) {
        Encode_NRDC_Parameters_v1700(enc, value.nrdc_Parameters_v1700);
    }
    if (value.has_bap_Parameters_v1700) {
        Encode_BAP_Parameters_v1700(enc, value.bap_Parameters_v1700);
    }
    if (value.has_musim_GapPreference_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapPreference_r17), 0, 0);
    }
    if (value.has_musimLeaveConnected_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.musimLeaveConnected_r17), 0, 0);
    }
    Encode_MBS_Parameters_r17(enc, value.mbs_Parameters_r17);
    if (value.has_nonTerrestrialNetwork_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nonTerrestrialNetwork_r17), 0, 0);
    }
    if (value.has_ntn_ScenarioSupport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_ScenarioSupport_r17), 0, 1);
    }
    if (value.has_sliceInfoforCellReselection_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sliceInfoforCellReselection_r17), 0, 0);
    }
    if (value.has_ue_RadioPagingInfo_r17) {
        Encode_UE_RadioPagingInfo_r17(enc, value.ue_RadioPagingInfo_r17);
    }
    if (value.has_ul_GapFR2_Pattern_r17) {
        enc.WriteFixedBitString(value.ul_GapFR2_Pattern_r17.bytes, value.ul_GapFR2_Pattern_r17.bitLength, 4, 4);
    }
    if (value.has_ntn_Parameters_r17) {
        Encode_NTN_Parameters_r17(enc, value.ntn_Parameters_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1740(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1700(Decoder& dec, UE_NR_Capability_v1700& value)
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
        value.inactiveStatePO_Determination_r17 = (UE_NR_Capability_v1700_InactiveStatePO_Determination_r17)0;
    }
    if (present_1) {
        if (Decode_HighSpeedParameters_v1700(dec, value.highSpeedParameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PowSav_Parameters_v1700(dec, value.powSav_Parameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MAC_Parameters_v1700(dec, value.mac_Parameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_IMS_Parameters_v1700(dec, value.ims_Parameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MeasAndMobParameters_v1700(dec, value.measAndMobParameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_AppLayerMeasParameters_r17(dec, value.appLayerMeasParameters_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_RedCapParameters_r17(dec, value.redCapParameters_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.ra_SDT_r17 = (UE_NR_Capability_v1700_Ra_SDT_r17)0;
    }
    if (present_8) {
        value.srb_SDT_r17 = (UE_NR_Capability_v1700_Srb_SDT_r17)0;
    }
    if (present_9) {
        value.gNB_SideRTT_BasedPDC_r17 = (UE_NR_Capability_v1700_GNB_SideRTT_BasedPDC_r17)0;
    }
    if (present_10) {
        value.bh_RLF_DetectionRecovery_Indication_r17 = (UE_NR_Capability_v1700_Bh_RLF_DetectionRecovery_Indication_r17)0;
    }
    if (present_11) {
        if (Decode_NRDC_Parameters_v1700(dec, value.nrdc_Parameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_BAP_Parameters_v1700(dec, value.bap_Parameters_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        value.musim_GapPreference_r17 = (UE_NR_Capability_v1700_Musim_GapPreference_r17)0;
    }
    if (present_14) {
        value.musimLeaveConnected_r17 = (UE_NR_Capability_v1700_MusimLeaveConnected_r17)0;
    }
    {
        if (Decode_MBS_Parameters_r17(dec, value.mbs_Parameters_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
        value.nonTerrestrialNetwork_r17 = (UE_NR_Capability_v1700_NonTerrestrialNetwork_r17)0;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ntn_ScenarioSupport_r17 = (UE_NR_Capability_v1700_Ntn_ScenarioSupport_r17)tmp_value;
    }
    if (present_17) {
        value.sliceInfoforCellReselection_r17 = (UE_NR_Capability_v1700_SliceInfoforCellReselection_r17)0;
    }
    if (present_18) {
        if (Decode_UE_RadioPagingInfo_r17(dec, value.ue_RadioPagingInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_19) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.ul_GapFR2_Pattern_r17.bytes = string_bytes;
        value.ul_GapFR2_Pattern_r17.bitLength = string_length;
    }
    if (present_20) {
        if (Decode_NTN_Parameters_r17(dec, value.ntn_Parameters_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_21) {
        if (Decode_UE_NR_Capability_v1740(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1700(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1700(UE_NR_Capability_v1700& value)
{
    if (value.has_inactiveStatePO_Determination_r17) {
    }
    if (value.has_highSpeedParameters_v1700) {
        Free_HighSpeedParameters_v1700(value.highSpeedParameters_v1700);
    }
    if (value.has_powSav_Parameters_v1700) {
        Free_PowSav_Parameters_v1700(value.powSav_Parameters_v1700);
    }
    if (value.has_mac_Parameters_v1700) {
        Free_MAC_Parameters_v1700(value.mac_Parameters_v1700);
    }
    if (value.has_ims_Parameters_v1700) {
        Free_IMS_Parameters_v1700(value.ims_Parameters_v1700);
    }
    Free_MeasAndMobParameters_v1700(value.measAndMobParameters_v1700);
    if (value.has_appLayerMeasParameters_r17) {
        Free_AppLayerMeasParameters_r17(value.appLayerMeasParameters_r17);
    }
    if (value.has_redCapParameters_r17) {
        Free_RedCapParameters_r17(value.redCapParameters_r17);
    }
    if (value.has_ra_SDT_r17) {
    }
    if (value.has_srb_SDT_r17) {
    }
    if (value.has_gNB_SideRTT_BasedPDC_r17) {
    }
    if (value.has_bh_RLF_DetectionRecovery_Indication_r17) {
    }
    if (value.has_nrdc_Parameters_v1700) {
        Free_NRDC_Parameters_v1700(value.nrdc_Parameters_v1700);
    }
    if (value.has_bap_Parameters_v1700) {
        Free_BAP_Parameters_v1700(value.bap_Parameters_v1700);
    }
    if (value.has_musim_GapPreference_r17) {
    }
    if (value.has_musimLeaveConnected_r17) {
    }
    Free_MBS_Parameters_r17(value.mbs_Parameters_r17);
    if (value.has_nonTerrestrialNetwork_r17) {
    }
    if (value.has_ntn_ScenarioSupport_r17) {
    }
    if (value.has_sliceInfoforCellReselection_r17) {
    }
    if (value.has_ue_RadioPagingInfo_r17) {
        Free_UE_RadioPagingInfo_r17(value.ue_RadioPagingInfo_r17);
    }
    if (value.has_ul_GapFR2_Pattern_r17) {
        std::free(value.ul_GapFR2_Pattern_r17.bytes);
        value.ul_GapFR2_Pattern_r17.bytes = nullptr;
        value.ul_GapFR2_Pattern_r17.bitLength = 0;
    }
    if (value.has_ntn_Parameters_r17) {
        Free_NTN_Parameters_r17(value.ntn_Parameters_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1740(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1690(Encoder& enc, const UE_NR_Capability_v1690& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_RRC_Segmentation_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_ul_RRC_Segmentation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_RRC_Segmentation_r16), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1700(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1690(Decoder& dec, UE_NR_Capability_v1690& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.ul_RRC_Segmentation_r16 = (UE_NR_Capability_v1690_Ul_RRC_Segmentation_r16)0;
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v1700(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1690(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1690(UE_NR_Capability_v1690& value)
{
    if (value.has_ul_RRC_Segmentation_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1700(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1650(Encoder& enc, const UE_NR_Capability_v1650& value)
{
    (void)value;
    enc.WriteBit(value.has_mpsPriorityIndication_r16);
    enc.WriteBit(value.has_highSpeedParameters_v1650);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_mpsPriorityIndication_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mpsPriorityIndication_r16), 0, 0);
    }
    if (value.has_highSpeedParameters_v1650) {
        Encode_HighSpeedParameters_v1650(enc, value.highSpeedParameters_v1650);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1690(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1650(Decoder& dec, UE_NR_Capability_v1650& value)
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
        value.mpsPriorityIndication_r16 = (UE_NR_Capability_v1650_MpsPriorityIndication_r16)0;
    }
    if (present_1) {
        if (Decode_HighSpeedParameters_v1650(dec, value.highSpeedParameters_v1650) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_NR_Capability_v1690(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1650(UE_NR_Capability_v1650& value)
{
    if (value.has_mpsPriorityIndication_r16) {
    }
    if (value.has_highSpeedParameters_v1650) {
        Free_HighSpeedParameters_v1650(value.highSpeedParameters_v1650);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1690(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1640(Encoder& enc, const UE_NR_Capability_v1640& value)
{
    (void)value;
    enc.WriteBit(value.has_redirectAtResumeByNAS_r16);
    enc.WriteBit(value.has_phy_ParametersSharedSpectrumChAccess_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_redirectAtResumeByNAS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.redirectAtResumeByNAS_r16), 0, 0);
    }
    if (value.has_phy_ParametersSharedSpectrumChAccess_r16) {
        Encode_Phy_ParametersSharedSpectrumChAccess_r16(enc, value.phy_ParametersSharedSpectrumChAccess_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1650(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1640(Decoder& dec, UE_NR_Capability_v1640& value)
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
        value.redirectAtResumeByNAS_r16 = (UE_NR_Capability_v1640_RedirectAtResumeByNAS_r16)0;
    }
    if (present_1) {
        if (Decode_Phy_ParametersSharedSpectrumChAccess_r16(dec, value.phy_ParametersSharedSpectrumChAccess_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_NR_Capability_v1650(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1640(UE_NR_Capability_v1640& value)
{
    if (value.has_redirectAtResumeByNAS_r16) {
    }
    if (value.has_phy_ParametersSharedSpectrumChAccess_r16) {
        Free_Phy_ParametersSharedSpectrumChAccess_r16(value.phy_ParametersSharedSpectrumChAccess_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1650(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_CapabilityAddFRX_Mode_v1610(Encoder& enc, const UE_NR_CapabilityAddFRX_Mode_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_powSav_ParametersFRX_Diff_r16);
    enc.WriteBit(value.has_mac_ParametersFRX_Diff_r16);
    if (value.has_powSav_ParametersFRX_Diff_r16) {
        Encode_PowSav_ParametersFRX_Diff_r16(enc, value.powSav_ParametersFRX_Diff_r16);
    }
    if (value.has_mac_ParametersFRX_Diff_r16) {
        Encode_MAC_ParametersFRX_Diff_r16(enc, value.mac_ParametersFRX_Diff_r16);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_CapabilityAddFRX_Mode_v1610(Decoder& dec, UE_NR_CapabilityAddFRX_Mode_v1610& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PowSav_ParametersFRX_Diff_r16(dec, value.powSav_ParametersFRX_Diff_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MAC_ParametersFRX_Diff_r16(dec, value.mac_ParametersFRX_Diff_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_CapabilityAddFRX_Mode_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_CapabilityAddFRX_Mode_v1610(UE_NR_CapabilityAddFRX_Mode_v1610& value)
{
    if (value.has_powSav_ParametersFRX_Diff_r16) {
        Free_PowSav_ParametersFRX_Diff_r16(value.powSav_ParametersFRX_Diff_r16);
    }
    if (value.has_mac_ParametersFRX_Diff_r16) {
        Free_MAC_ParametersFRX_Diff_r16(value.mac_ParametersFRX_Diff_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BAP_Parameters_r16(Encoder& enc, const BAP_Parameters_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_flowControlBH_RLC_ChannelBased_r16);
    enc.WriteBit(value.has_flowControlRouting_ID_Based_r16);
    if (value.has_flowControlBH_RLC_ChannelBased_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flowControlBH_RLC_ChannelBased_r16), 0, 0);
    }
    if (value.has_flowControlRouting_ID_Based_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.flowControlRouting_ID_Based_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BAP_Parameters_r16(Decoder& dec, BAP_Parameters_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.flowControlBH_RLC_ChannelBased_r16 = (BAP_Parameters_r16_FlowControlBH_RLC_ChannelBased_r16)0;
    }
    if (present_1) {
        value.flowControlRouting_ID_Based_r16 = (BAP_Parameters_r16_FlowControlRouting_ID_Based_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BAP_Parameters_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BAP_Parameters_r16(BAP_Parameters_r16& value)
{
    if (value.has_flowControlBH_RLC_ChannelBased_r16) {
    }
    if (value.has_flowControlRouting_ID_Based_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1610(Encoder& enc, const UE_NR_Capability_v1610& value)
{
    (void)value;
    enc.WriteBit(value.has_inDeviceCoexInd_r16);
    enc.WriteBit(value.has_dl_DedicatedMessageSegmentation_r16);
    enc.WriteBit(value.has_nrdc_Parameters_v1610);
    enc.WriteBit(value.has_powSav_Parameters_r16);
    enc.WriteBit(value.has_fr1_Add_UE_NR_Capabilities_v1610);
    enc.WriteBit(value.has_fr2_Add_UE_NR_Capabilities_v1610);
    enc.WriteBit(value.has_bh_RLF_Indication_r16);
    enc.WriteBit(value.has_directSN_AdditionFirstRRC_IAB_r16);
    enc.WriteBit(value.has_bap_Parameters_r16);
    enc.WriteBit(value.has_referenceTimeProvision_r16);
    enc.WriteBit(value.has_sidelinkParameters_r16);
    enc.WriteBit(value.has_highSpeedParameters_r16);
    enc.WriteBit(value.has_mac_Parameters_v1610);
    enc.WriteBit(value.has_mcgRLF_RecoveryViaSCG_r16);
    enc.WriteBit(value.has_resumeWithStoredMCG_SCells_r16);
    enc.WriteBit(value.has_resumeWithStoredSCG_r16);
    enc.WriteBit(value.has_resumeWithSCG_Config_r16);
    enc.WriteBit(value.has_ue_BasedPerfMeas_Parameters_r16);
    enc.WriteBit(value.has_son_Parameters_r16);
    enc.WriteBit(value.has_onDemandSIB_Connected_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_inDeviceCoexInd_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inDeviceCoexInd_r16), 0, 0);
    }
    if (value.has_dl_DedicatedMessageSegmentation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_DedicatedMessageSegmentation_r16), 0, 0);
    }
    if (value.has_nrdc_Parameters_v1610) {
        Encode_NRDC_Parameters_v1610(enc, value.nrdc_Parameters_v1610);
    }
    if (value.has_powSav_Parameters_r16) {
        Encode_PowSav_Parameters_r16(enc, value.powSav_Parameters_r16);
    }
    if (value.has_fr1_Add_UE_NR_Capabilities_v1610) {
        Encode_UE_NR_CapabilityAddFRX_Mode_v1610(enc, value.fr1_Add_UE_NR_Capabilities_v1610);
    }
    if (value.has_fr2_Add_UE_NR_Capabilities_v1610) {
        Encode_UE_NR_CapabilityAddFRX_Mode_v1610(enc, value.fr2_Add_UE_NR_Capabilities_v1610);
    }
    if (value.has_bh_RLF_Indication_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bh_RLF_Indication_r16), 0, 0);
    }
    if (value.has_directSN_AdditionFirstRRC_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.directSN_AdditionFirstRRC_IAB_r16), 0, 0);
    }
    if (value.has_bap_Parameters_r16) {
        Encode_BAP_Parameters_r16(enc, value.bap_Parameters_r16);
    }
    if (value.has_referenceTimeProvision_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceTimeProvision_r16), 0, 0);
    }
    if (value.has_sidelinkParameters_r16) {
        Encode_SidelinkParameters_r16(enc, value.sidelinkParameters_r16);
    }
    if (value.has_highSpeedParameters_r16) {
        Encode_HighSpeedParameters_r16(enc, value.highSpeedParameters_r16);
    }
    if (value.has_mac_Parameters_v1610) {
        Encode_MAC_Parameters_v1610(enc, value.mac_Parameters_v1610);
    }
    if (value.has_mcgRLF_RecoveryViaSCG_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mcgRLF_RecoveryViaSCG_r16), 0, 0);
    }
    if (value.has_resumeWithStoredMCG_SCells_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resumeWithStoredMCG_SCells_r16), 0, 0);
    }
    if (value.has_resumeWithStoredSCG_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resumeWithStoredSCG_r16), 0, 0);
    }
    if (value.has_resumeWithSCG_Config_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.resumeWithSCG_Config_r16), 0, 0);
    }
    if (value.has_ue_BasedPerfMeas_Parameters_r16) {
        Encode_UE_BasedPerfMeas_Parameters_r16(enc, value.ue_BasedPerfMeas_Parameters_r16);
    }
    if (value.has_son_Parameters_r16) {
        Encode_SON_Parameters_r16(enc, value.son_Parameters_r16);
    }
    if (value.has_onDemandSIB_Connected_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.onDemandSIB_Connected_r16), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1640(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1610(Decoder& dec, UE_NR_Capability_v1610& value)
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
    if (present_0) {
        value.inDeviceCoexInd_r16 = (UE_NR_Capability_v1610_InDeviceCoexInd_r16)0;
    }
    if (present_1) {
        value.dl_DedicatedMessageSegmentation_r16 = (UE_NR_Capability_v1610_Dl_DedicatedMessageSegmentation_r16)0;
    }
    if (present_2) {
        if (Decode_NRDC_Parameters_v1610(dec, value.nrdc_Parameters_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_PowSav_Parameters_r16(dec, value.powSav_Parameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode_v1610(dec, value.fr1_Add_UE_NR_Capabilities_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode_v1610(dec, value.fr2_Add_UE_NR_Capabilities_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        value.bh_RLF_Indication_r16 = (UE_NR_Capability_v1610_Bh_RLF_Indication_r16)0;
    }
    if (present_7) {
        value.directSN_AdditionFirstRRC_IAB_r16 = (UE_NR_Capability_v1610_DirectSN_AdditionFirstRRC_IAB_r16)0;
    }
    if (present_8) {
        if (Decode_BAP_Parameters_r16(dec, value.bap_Parameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        value.referenceTimeProvision_r16 = (UE_NR_Capability_v1610_ReferenceTimeProvision_r16)0;
    }
    if (present_10) {
        if (Decode_SidelinkParameters_r16(dec, value.sidelinkParameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_HighSpeedParameters_r16(dec, value.highSpeedParameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_MAC_Parameters_v1610(dec, value.mac_Parameters_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        value.mcgRLF_RecoveryViaSCG_r16 = (UE_NR_Capability_v1610_McgRLF_RecoveryViaSCG_r16)0;
    }
    if (present_14) {
        value.resumeWithStoredMCG_SCells_r16 = (UE_NR_Capability_v1610_ResumeWithStoredMCG_SCells_r16)0;
    }
    if (present_15) {
        value.resumeWithStoredSCG_r16 = (UE_NR_Capability_v1610_ResumeWithStoredSCG_r16)0;
    }
    if (present_16) {
        value.resumeWithSCG_Config_r16 = (UE_NR_Capability_v1610_ResumeWithSCG_Config_r16)0;
    }
    if (present_17) {
        if (Decode_UE_BasedPerfMeas_Parameters_r16(dec, value.ue_BasedPerfMeas_Parameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        if (Decode_SON_Parameters_r16(dec, value.son_Parameters_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_19) {
        value.onDemandSIB_Connected_r16 = (UE_NR_Capability_v1610_OnDemandSIB_Connected_r16)0;
    }
    if (present_20) {
        if (Decode_UE_NR_Capability_v1640(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1610(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1610(UE_NR_Capability_v1610& value)
{
    if (value.has_inDeviceCoexInd_r16) {
    }
    if (value.has_dl_DedicatedMessageSegmentation_r16) {
    }
    if (value.has_nrdc_Parameters_v1610) {
        Free_NRDC_Parameters_v1610(value.nrdc_Parameters_v1610);
    }
    if (value.has_powSav_Parameters_r16) {
        Free_PowSav_Parameters_r16(value.powSav_Parameters_r16);
    }
    if (value.has_fr1_Add_UE_NR_Capabilities_v1610) {
        Free_UE_NR_CapabilityAddFRX_Mode_v1610(value.fr1_Add_UE_NR_Capabilities_v1610);
    }
    if (value.has_fr2_Add_UE_NR_Capabilities_v1610) {
        Free_UE_NR_CapabilityAddFRX_Mode_v1610(value.fr2_Add_UE_NR_Capabilities_v1610);
    }
    if (value.has_bh_RLF_Indication_r16) {
    }
    if (value.has_directSN_AdditionFirstRRC_IAB_r16) {
    }
    if (value.has_bap_Parameters_r16) {
        Free_BAP_Parameters_r16(value.bap_Parameters_r16);
    }
    if (value.has_referenceTimeProvision_r16) {
    }
    if (value.has_sidelinkParameters_r16) {
        Free_SidelinkParameters_r16(value.sidelinkParameters_r16);
    }
    if (value.has_highSpeedParameters_r16) {
        Free_HighSpeedParameters_r16(value.highSpeedParameters_r16);
    }
    if (value.has_mac_Parameters_v1610) {
        Free_MAC_Parameters_v1610(value.mac_Parameters_v1610);
    }
    if (value.has_mcgRLF_RecoveryViaSCG_r16) {
    }
    if (value.has_resumeWithStoredMCG_SCells_r16) {
    }
    if (value.has_resumeWithStoredSCG_r16) {
    }
    if (value.has_resumeWithSCG_Config_r16) {
    }
    if (value.has_ue_BasedPerfMeas_Parameters_r16) {
        Free_UE_BasedPerfMeas_Parameters_r16(value.ue_BasedPerfMeas_Parameters_r16);
    }
    if (value.has_son_Parameters_r16) {
        Free_SON_Parameters_r16(value.son_Parameters_r16);
    }
    if (value.has_onDemandSIB_Connected_r16) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1640(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1570(Encoder& enc, const UE_NR_Capability_v1570& value)
{
    (void)value;
    enc.WriteBit(value.has_nrdc_Parameters_v1570);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_nrdc_Parameters_v1570) {
        Encode_NRDC_Parameters_v1570(enc, value.nrdc_Parameters_v1570);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1610(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1570(Decoder& dec, UE_NR_Capability_v1570& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_NRDC_Parameters_v1570(dec, value.nrdc_Parameters_v1570) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v1610(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1570(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1570(UE_NR_Capability_v1570& value)
{
    if (value.has_nrdc_Parameters_v1570) {
        Free_NRDC_Parameters_v1570(value.nrdc_Parameters_v1570);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1610(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1560(Encoder& enc, const UE_NR_Capability_v1560& value)
{
    (void)value;
    enc.WriteBit(value.has_nrdc_Parameters);
    enc.WriteBit(value.receivedFilters != nullptr);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_nrdc_Parameters) {
        Encode_NRDC_Parameters(enc, value.nrdc_Parameters);
    }
    if (value.receivedFilters != nullptr) {
        if (value.receivedFilters == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_UECapabilityEnquiry_v1560_IEs(enc, *value.receivedFilters);
        }
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1570(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1560(Decoder& dec, UE_NR_Capability_v1560& value)
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
        if (Decode_NRDC_Parameters(dec, value.nrdc_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        UECapabilityEnquiry_v1560_IEs* containing_value = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_UECapabilityEnquiry_v1560_IEs(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_UECapabilityEnquiry_v1560_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_UECapabilityEnquiry_v1560_IEs(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.receivedFilters = containing_value;
    }
    if (present_2) {
        if (Decode_UE_NR_Capability_v1570(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1560(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1560(UE_NR_Capability_v1560& value)
{
    if (value.has_nrdc_Parameters) {
        Free_NRDC_Parameters(value.nrdc_Parameters);
    }
    if (value.receivedFilters != nullptr) {
        if (value.receivedFilters != nullptr) {
            Free_UECapabilityEnquiry_v1560_IEs(*value.receivedFilters);
            std::free(value.receivedFilters);
            value.receivedFilters = nullptr;
        }
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1570(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1550(Encoder& enc, const UE_NR_Capability_v1550& value)
{
    (void)value;
    enc.WriteBit(value.has_reducedCP_Latency);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_reducedCP_Latency) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reducedCP_Latency), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1560(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1550(Decoder& dec, UE_NR_Capability_v1550& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.reducedCP_Latency = (UE_NR_Capability_v1550_ReducedCP_Latency)0;
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v1560(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1550(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1550(UE_NR_Capability_v1550& value)
{
    if (value.has_reducedCP_Latency) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1560(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_CapabilityAddFRX_Mode_v1540(Encoder& enc, const UE_NR_CapabilityAddFRX_Mode_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_ims_ParametersFRX_Diff);
    if (value.has_ims_ParametersFRX_Diff) {
        Encode_IMS_ParametersFRX_Diff(enc, value.ims_ParametersFRX_Diff);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_CapabilityAddFRX_Mode_v1540(Decoder& dec, UE_NR_CapabilityAddFRX_Mode_v1540& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_IMS_ParametersFRX_Diff(dec, value.ims_ParametersFRX_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_CapabilityAddFRX_Mode_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_CapabilityAddFRX_Mode_v1540(UE_NR_CapabilityAddFRX_Mode_v1540& value)
{
    if (value.has_ims_ParametersFRX_Diff) {
        Free_IMS_ParametersFRX_Diff(value.ims_ParametersFRX_Diff);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1540(Encoder& enc, const UE_NR_Capability_v1540& value)
{
    (void)value;
    enc.WriteBit(value.has_sdap_Parameters);
    enc.WriteBit(value.has_overheatingInd);
    enc.WriteBit(value.has_ims_Parameters);
    enc.WriteBit(value.has_fr1_Add_UE_NR_Capabilities_v1540);
    enc.WriteBit(value.has_fr2_Add_UE_NR_Capabilities_v1540);
    enc.WriteBit(value.has_fr1_fr2_Add_UE_NR_Capabilities);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sdap_Parameters) {
        Encode_SDAP_Parameters(enc, value.sdap_Parameters);
    }
    if (value.has_overheatingInd) {
        enc.WriteConstrainedInteger((std::int64_t)(value.overheatingInd), 0, 0);
    }
    if (value.has_ims_Parameters) {
        Encode_IMS_Parameters(enc, value.ims_Parameters);
    }
    if (value.has_fr1_Add_UE_NR_Capabilities_v1540) {
        Encode_UE_NR_CapabilityAddFRX_Mode_v1540(enc, value.fr1_Add_UE_NR_Capabilities_v1540);
    }
    if (value.has_fr2_Add_UE_NR_Capabilities_v1540) {
        Encode_UE_NR_CapabilityAddFRX_Mode_v1540(enc, value.fr2_Add_UE_NR_Capabilities_v1540);
    }
    if (value.has_fr1_fr2_Add_UE_NR_Capabilities) {
        Encode_UE_NR_CapabilityAddFRX_Mode(enc, value.fr1_fr2_Add_UE_NR_Capabilities);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1550(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1540(Decoder& dec, UE_NR_Capability_v1540& value)
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
        if (Decode_SDAP_Parameters(dec, value.sdap_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.overheatingInd = (UE_NR_Capability_v1540_OverheatingInd)0;
    }
    if (present_2) {
        if (Decode_IMS_Parameters(dec, value.ims_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode_v1540(dec, value.fr1_Add_UE_NR_Capabilities_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode_v1540(dec, value.fr2_Add_UE_NR_Capabilities_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode(dec, value.fr1_fr2_Add_UE_NR_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_UE_NR_Capability_v1550(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1540(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1540(UE_NR_Capability_v1540& value)
{
    if (value.has_sdap_Parameters) {
        Free_SDAP_Parameters(value.sdap_Parameters);
    }
    if (value.has_overheatingInd) {
    }
    if (value.has_ims_Parameters) {
        Free_IMS_Parameters(value.ims_Parameters);
    }
    if (value.has_fr1_Add_UE_NR_Capabilities_v1540) {
        Free_UE_NR_CapabilityAddFRX_Mode_v1540(value.fr1_Add_UE_NR_Capabilities_v1540);
    }
    if (value.has_fr2_Add_UE_NR_Capabilities_v1540) {
        Free_UE_NR_CapabilityAddFRX_Mode_v1540(value.fr2_Add_UE_NR_Capabilities_v1540);
    }
    if (value.has_fr1_fr2_Add_UE_NR_Capabilities) {
        Free_UE_NR_CapabilityAddFRX_Mode(value.fr1_fr2_Add_UE_NR_Capabilities);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1550(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_CapabilityAddXDD_Mode_v1530(Encoder& enc, const UE_NR_CapabilityAddXDD_Mode_v1530& value)
{
    (void)value;
    Encode_EUTRA_ParametersXDD_Diff(enc, value.eutra_ParametersXDD_Diff);
    return enc.Error();
}

ErrorCode Decode_UE_NR_CapabilityAddXDD_Mode_v1530(Decoder& dec, UE_NR_CapabilityAddXDD_Mode_v1530& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_EUTRA_ParametersXDD_Diff(dec, value.eutra_ParametersXDD_Diff) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_CapabilityAddXDD_Mode_v1530(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_CapabilityAddXDD_Mode_v1530(UE_NR_CapabilityAddXDD_Mode_v1530& value)
{
    Free_EUTRA_ParametersXDD_Diff(value.eutra_ParametersXDD_Diff);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v1530(Encoder& enc, const UE_NR_Capability_v1530& value)
{
    (void)value;
    enc.WriteBit(value.has_fdd_Add_UE_NR_Capabilities_v1530);
    enc.WriteBit(value.has_tdd_Add_UE_NR_Capabilities_v1530);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_interRAT_Parameters);
    enc.WriteBit(value.has_inactiveState);
    enc.WriteBit(value.has_delayBudgetReporting);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_fdd_Add_UE_NR_Capabilities_v1530) {
        Encode_UE_NR_CapabilityAddXDD_Mode_v1530(enc, value.fdd_Add_UE_NR_Capabilities_v1530);
    }
    if (value.has_tdd_Add_UE_NR_Capabilities_v1530) {
        Encode_UE_NR_CapabilityAddXDD_Mode_v1530(enc, value.tdd_Add_UE_NR_Capabilities_v1530);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_interRAT_Parameters) {
        Encode_InterRAT_Parameters(enc, value.interRAT_Parameters);
    }
    if (value.has_inactiveState) {
        enc.WriteConstrainedInteger((std::int64_t)(value.inactiveState), 0, 0);
    }
    if (value.has_delayBudgetReporting) {
        enc.WriteConstrainedInteger((std::int64_t)(value.delayBudgetReporting), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1540(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v1530(Decoder& dec, UE_NR_Capability_v1530& value)
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
        if (Decode_UE_NR_CapabilityAddXDD_Mode_v1530(dec, value.fdd_Add_UE_NR_Capabilities_v1530) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_NR_CapabilityAddXDD_Mode_v1530(dec, value.tdd_Add_UE_NR_Capabilities_v1530) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.dummy = (UE_NR_Capability_v1530_Dummy)0;
    }
    if (present_3) {
        if (Decode_InterRAT_Parameters(dec, value.interRAT_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        value.inactiveState = (UE_NR_Capability_v1530_InactiveState)0;
    }
    if (present_5) {
        value.delayBudgetReporting = (UE_NR_Capability_v1530_DelayBudgetReporting)0;
    }
    if (present_6) {
        if (Decode_UE_NR_Capability_v1540(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v1530(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v1530(UE_NR_Capability_v1530& value)
{
    if (value.has_fdd_Add_UE_NR_Capabilities_v1530) {
        Free_UE_NR_CapabilityAddXDD_Mode_v1530(value.fdd_Add_UE_NR_Capabilities_v1530);
    }
    if (value.has_tdd_Add_UE_NR_Capabilities_v1530) {
        Free_UE_NR_CapabilityAddXDD_Mode_v1530(value.tdd_Add_UE_NR_Capabilities_v1530);
    }
    if (value.has_dummy) {
    }
    if (value.has_interRAT_Parameters) {
        Free_InterRAT_Parameters(value.interRAT_Parameters);
    }
    if (value.has_inactiveState) {
    }
    if (value.has_delayBudgetReporting) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1540(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability(Encoder& enc, const UE_NR_Capability& value)
{
    (void)value;
    enc.WriteBit(value.has_rlc_Parameters);
    enc.WriteBit(value.has_mac_Parameters);
    enc.WriteBit(value.has_measAndMobParameters);
    enc.WriteBit(value.has_fdd_Add_UE_NR_Capabilities);
    enc.WriteBit(value.has_tdd_Add_UE_NR_Capabilities);
    enc.WriteBit(value.has_fr1_Add_UE_NR_Capabilities);
    enc.WriteBit(value.has_fr2_Add_UE_NR_Capabilities);
    enc.WriteBit(value.has_featureSets);
    enc.WriteBit(value.has_featureSetCombinations);
    enc.WriteBit(value.lateNonCriticalExtension != nullptr);
    enc.WriteBit(value.has_nonCriticalExtension);
    {
        const std::int64_t enum_value = (std::int64_t)(value.accessStratumRelease);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 8) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 7);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 8));
        }
    }
    Encode_PDCP_Parameters(enc, value.pdcp_Parameters);
    if (value.has_rlc_Parameters) {
        Encode_RLC_Parameters(enc, value.rlc_Parameters);
    }
    if (value.has_mac_Parameters) {
        Encode_MAC_Parameters(enc, value.mac_Parameters);
    }
    Encode_Phy_Parameters(enc, value.phy_Parameters);
    Encode_RF_Parameters(enc, value.rf_Parameters);
    if (value.has_measAndMobParameters) {
        Encode_MeasAndMobParameters(enc, value.measAndMobParameters);
    }
    if (value.has_fdd_Add_UE_NR_Capabilities) {
        Encode_UE_NR_CapabilityAddXDD_Mode(enc, value.fdd_Add_UE_NR_Capabilities);
    }
    if (value.has_tdd_Add_UE_NR_Capabilities) {
        Encode_UE_NR_CapabilityAddXDD_Mode(enc, value.tdd_Add_UE_NR_Capabilities);
    }
    if (value.has_fr1_Add_UE_NR_Capabilities) {
        Encode_UE_NR_CapabilityAddFRX_Mode(enc, value.fr1_Add_UE_NR_Capabilities);
    }
    if (value.has_fr2_Add_UE_NR_Capabilities) {
        Encode_UE_NR_CapabilityAddFRX_Mode(enc, value.fr2_Add_UE_NR_Capabilities);
    }
    if (value.has_featureSets) {
        Encode_FeatureSets(enc, value.featureSets);
    }
    if (value.has_featureSetCombinations) {
enc.WriteConstrainedLength(value.featureSetCombinations_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.featureSetCombinations_count; ++i) {
    Encode_FeatureSetCombination(enc, value.featureSetCombinations_items[i]);
}
    }
    if (value.lateNonCriticalExtension != nullptr) {
        if (value.lateNonCriticalExtension == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_UE_NR_Capability_v15c0(enc, *value.lateNonCriticalExtension);
        }
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v1530(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability(Decoder& dec, UE_NR_Capability& value)
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
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 7, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)8 + (std::int64_t)extension_index;
        }
        value.accessStratumRelease = (AccessStratumRelease)enum_value;
    }
    {
        if (Decode_PDCP_Parameters(dec, value.pdcp_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_RLC_Parameters(dec, value.rlc_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MAC_Parameters(dec, value.mac_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_Phy_Parameters(dec, value.phy_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_RF_Parameters(dec, value.rf_Parameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MeasAndMobParameters(dec, value.measAndMobParameters) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_UE_NR_CapabilityAddXDD_Mode(dec, value.fdd_Add_UE_NR_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_UE_NR_CapabilityAddXDD_Mode(dec, value.tdd_Add_UE_NR_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode(dec, value.fr1_Add_UE_NR_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_UE_NR_CapabilityAddFRX_Mode(dec, value.fr2_Add_UE_NR_Capabilities) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_FeatureSets(dec, value.featureSets) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.featureSetCombinations_count)) { goto fail; }
if (value.featureSetCombinations_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.featureSetCombinations_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.featureSetCombinations_count > 0u) {
    value.featureSetCombinations_items = (FeatureSetCombination*)std::malloc((std::size_t)value.featureSetCombinations_count * sizeof(FeatureSetCombination));
    if (value.featureSetCombinations_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.featureSetCombinations_items, 0, (std::size_t)value.featureSetCombinations_count * sizeof(FeatureSetCombination));
}
for (std::uint32_t i = 0; i < value.featureSetCombinations_count; ++i) {
    if (Decode_FeatureSetCombination(dec, value.featureSetCombinations_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        UE_NR_Capability_v15c0* containing_value = (UE_NR_Capability_v15c0*)std::malloc(sizeof(UE_NR_Capability_v15c0));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_UE_NR_Capability_v15c0(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_UE_NR_Capability_v15c0(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_UE_NR_Capability_v15c0(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.lateNonCriticalExtension = containing_value;
    }
    if (present_10) {
        if (Decode_UE_NR_Capability_v1530(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability(UE_NR_Capability& value)
{
    Free_PDCP_Parameters(value.pdcp_Parameters);
    if (value.has_rlc_Parameters) {
        Free_RLC_Parameters(value.rlc_Parameters);
    }
    if (value.has_mac_Parameters) {
        Free_MAC_Parameters(value.mac_Parameters);
    }
    Free_Phy_Parameters(value.phy_Parameters);
    Free_RF_Parameters(value.rf_Parameters);
    if (value.has_measAndMobParameters) {
        Free_MeasAndMobParameters(value.measAndMobParameters);
    }
    if (value.has_fdd_Add_UE_NR_Capabilities) {
        Free_UE_NR_CapabilityAddXDD_Mode(value.fdd_Add_UE_NR_Capabilities);
    }
    if (value.has_tdd_Add_UE_NR_Capabilities) {
        Free_UE_NR_CapabilityAddXDD_Mode(value.tdd_Add_UE_NR_Capabilities);
    }
    if (value.has_fr1_Add_UE_NR_Capabilities) {
        Free_UE_NR_CapabilityAddFRX_Mode(value.fr1_Add_UE_NR_Capabilities);
    }
    if (value.has_fr2_Add_UE_NR_Capabilities) {
        Free_UE_NR_CapabilityAddFRX_Mode(value.fr2_Add_UE_NR_Capabilities);
    }
    if (value.has_featureSets) {
        Free_FeatureSets(value.featureSets);
    }
    if (value.has_featureSetCombinations) {
        if (value.featureSetCombinations_items != nullptr) {
            for (std::uint32_t i = 0; i < value.featureSetCombinations_count; ++i) {
                Free_FeatureSetCombination(value.featureSetCombinations_items[i]);
            }
            std::free(value.featureSetCombinations_items);
            value.featureSetCombinations_items = nullptr;
        }
        value.featureSetCombinations_count = 0;
    }
    if (value.lateNonCriticalExtension != nullptr) {
        if (value.lateNonCriticalExtension != nullptr) {
            Free_UE_NR_Capability_v15c0(*value.lateNonCriticalExtension);
            std::free(value.lateNonCriticalExtension);
            value.lateNonCriticalExtension = nullptr;
        }
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v1530(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v16d0_NonCriticalExtension(Encoder& enc, const UE_NR_Capability_v16d0_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v16d0_NonCriticalExtension(Decoder& dec, UE_NR_Capability_v16d0_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v16d0_NonCriticalExtension(UE_NR_Capability_v16d0_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v16d0(Encoder& enc, const UE_NR_Capability_v16d0& value)
{
    (void)value;
    enc.WriteBit(value.has_featureSets_v16d0);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_featureSets_v16d0) {
        Encode_FeatureSets_v16d0(enc, value.featureSets_v16d0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v16d0_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v16d0(Decoder& dec, UE_NR_Capability_v16d0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FeatureSets_v16d0(dec, value.featureSets_v16d0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v16d0_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v16d0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v16d0(UE_NR_Capability_v16d0& value)
{
    if (value.has_featureSets_v16d0) {
        Free_FeatureSets_v16d0(value.featureSets_v16d0);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v16d0_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v16c0(Encoder& enc, const UE_NR_Capability_v16c0& value)
{
    (void)value;
    enc.WriteBit(value.has_rf_Parameters_v16c0);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_rf_Parameters_v16c0) {
        Encode_RF_Parameters_v16c0(enc, value.rf_Parameters_v16c0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v16d0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v16c0(Decoder& dec, UE_NR_Capability_v16c0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RF_Parameters_v16c0(dec, value.rf_Parameters_v16c0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v16d0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v16c0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v16c0(UE_NR_Capability_v16c0& value)
{
    if (value.has_rf_Parameters_v16c0) {
        Free_RF_Parameters_v16c0(value.rf_Parameters_v16c0);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v16d0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v16a0(Encoder& enc, const UE_NR_Capability_v16a0& value)
{
    (void)value;
    enc.WriteBit(value.has_phy_Parameters_v16a0);
    enc.WriteBit(value.has_rf_Parameters_v16a0);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_phy_Parameters_v16a0) {
        Encode_Phy_Parameters_v16a0(enc, value.phy_Parameters_v16a0);
    }
    if (value.has_rf_Parameters_v16a0) {
        Encode_RF_Parameters_v16a0(enc, value.rf_Parameters_v16a0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v16c0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v16a0(Decoder& dec, UE_NR_Capability_v16a0& value)
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
        if (Decode_Phy_Parameters_v16a0(dec, value.phy_Parameters_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RF_Parameters_v16a0(dec, value.rf_Parameters_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_UE_NR_Capability_v16c0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v16a0(UE_NR_Capability_v16a0& value)
{
    if (value.has_phy_Parameters_v16a0) {
        Free_Phy_Parameters_v16a0(value.phy_Parameters_v16a0);
    }
    if (value.has_rf_Parameters_v16a0) {
        Free_RF_Parameters_v16a0(value.rf_Parameters_v16a0);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v16c0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v15j0(Encoder& enc, const UE_NR_Capability_v15j0& value)
{
    (void)value;
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v16a0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v15j0(Decoder& dec, UE_NR_Capability_v15j0& value)
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
        if (Decode_UE_NR_Capability_v16a0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v15j0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v15j0(UE_NR_Capability_v15j0& value)
{
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v16a0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v15g0(Encoder& enc, const UE_NR_Capability_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_rf_Parameters_v15g0);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_rf_Parameters_v15g0) {
        Encode_RF_Parameters_v15g0(enc, value.rf_Parameters_v15g0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v15j0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v15g0(Decoder& dec, UE_NR_Capability_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_RF_Parameters_v15g0(dec, value.rf_Parameters_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_UE_NR_Capability_v15j0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v15g0(UE_NR_Capability_v15g0& value)
{
    if (value.has_rf_Parameters_v15g0) {
        Free_RF_Parameters_v15g0(value.rf_Parameters_v15g0);
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v15j0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_UE_NR_Capability_v15c0(Encoder& enc, const UE_NR_Capability_v15c0& value)
{
    (void)value;
    enc.WriteBit(value.has_nrdc_Parameters_v15c0);
    enc.WriteBit(value.has_partialFR2_FallbackRX_Req);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_nrdc_Parameters_v15c0) {
        Encode_NRDC_Parameters_v15c0(enc, value.nrdc_Parameters_v15c0);
    }
    if (value.has_partialFR2_FallbackRX_Req) {
        enc.WriteConstrainedInteger((std::int64_t)(value.partialFR2_FallbackRX_Req), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_UE_NR_Capability_v15g0(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_UE_NR_Capability_v15c0(Decoder& dec, UE_NR_Capability_v15c0& value)
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
        if (Decode_NRDC_Parameters_v15c0(dec, value.nrdc_Parameters_v15c0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.partialFR2_FallbackRX_Req = (UE_NR_Capability_v15c0_PartialFR2_FallbackRX_Req)0;
    }
    if (present_2) {
        if (Decode_UE_NR_Capability_v15g0(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_UE_NR_Capability_v15c0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UE_NR_Capability_v15c0(UE_NR_Capability_v15c0& value)
{
    if (value.has_nrdc_Parameters_v15c0) {
        Free_NRDC_Parameters_v15c0(value.nrdc_Parameters_v15c0);
    }
    if (value.has_partialFR2_FallbackRX_Req) {
    }
    if (value.has_nonCriticalExtension) {
        Free_UE_NR_Capability_v15g0(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_AppLayerIdleInactiveConfig_r18(Encoder& enc, const SetupRelease_AppLayerIdleInactiveConfig_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_setup:
        Encode_AppLayerIdleInactiveConfig_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_AppLayerIdleInactiveConfig_r18(Decoder& dec, SetupRelease_AppLayerIdleInactiveConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_AppLayerIdleInactiveConfig_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_setup: {
        if (Decode_AppLayerIdleInactiveConfig_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_AppLayerIdleInactiveConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_AppLayerIdleInactiveConfig_r18(SetupRelease_AppLayerIdleInactiveConfig_r18& value)
{
    switch (value.tag) {
    case SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_release:
        break;
    case SetupRelease_AppLayerIdleInactiveConfig_r18_Tag_setup:
        Free_AppLayerIdleInactiveConfig_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasConfigAppLayer_r17_ExtGroup1(Encoder& enc, const MeasConfigAppLayer_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_reportingSRB_r18);
    enc.WriteBit(value.has_appLayerMeasPriority_r18);
    enc.WriteBit(value.has_appLayerIdleInactiveConfig_r18);
    if (value.has_reportingSRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.reportingSRB_r18), 0, 1);
    }
    if (value.has_appLayerMeasPriority_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.appLayerMeasPriority_r18), 1, 16);
    }
    if (value.has_appLayerIdleInactiveConfig_r18) {
        Encode_SetupRelease_AppLayerIdleInactiveConfig_r18(enc, value.appLayerIdleInactiveConfig_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MeasConfigAppLayer_r17_ExtGroup1(Decoder& dec, MeasConfigAppLayer_r17_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.reportingSRB_r18 = (MeasConfigAppLayer_r17_ExtGroup1_ReportingSRB_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.appLayerMeasPriority_r18 = (int64_t)tmp_value;
    }
    if (present_2) {
        if (Decode_SetupRelease_AppLayerIdleInactiveConfig_r18(dec, value.appLayerIdleInactiveConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasConfigAppLayer_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasConfigAppLayer_r17_ExtGroup1(MeasConfigAppLayer_r17_ExtGroup1& value)
{
    if (value.has_reportingSRB_r18) {
    }
    if (value.has_appLayerMeasPriority_r18) {
    }
    if (value.has_appLayerIdleInactiveConfig_r18) {
        Free_SetupRelease_AppLayerIdleInactiveConfig_r18(value.appLayerIdleInactiveConfig_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RAN_VisibleParameters_r17_ExtGroup1(Encoder& enc, const RAN_VisibleParameters_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ran_VisibleReportingSRB_r18);
    if (value.has_ran_VisibleReportingSRB_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ran_VisibleReportingSRB_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_RAN_VisibleParameters_r17_ExtGroup1(Decoder& dec, RAN_VisibleParameters_r17_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ran_VisibleReportingSRB_r18 = (RAN_VisibleParameters_r17_ExtGroup1_Ran_VisibleReportingSRB_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RAN_VisibleParameters_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RAN_VisibleParameters_r17_ExtGroup1(RAN_VisibleParameters_r17_ExtGroup1& value)
{
    if (value.has_ran_VisibleReportingSRB_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RAN_VisibleParameters_r17(Encoder& enc, const RAN_VisibleParameters_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ran_VisiblePeriodicity_r17);
    enc.WriteBit(value.has_numberOfBufferLevelEntries_r17);
    enc.WriteBit(value.has_reportPlayoutDelayForMediaStartup_r17);
    if (value.has_ran_VisiblePeriodicity_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ran_VisiblePeriodicity_r17), 0, 4);
    }
    if (value.has_numberOfBufferLevelEntries_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.numberOfBufferLevelEntries_r17), 1, 8);
    }
    if (value.has_reportPlayoutDelayForMediaStartup_r17) {
        enc.WriteBool(value.reportPlayoutDelayForMediaStartup_r17);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RAN_VisibleParameters_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RAN_VisibleParameters_r17(Decoder& dec, RAN_VisibleParameters_r17& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.ran_VisiblePeriodicity_r17 = (RAN_VisibleParameters_r17_Ran_VisiblePeriodicity_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.numberOfBufferLevelEntries_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.reportPlayoutDelayForMediaStartup_r17 = tmp_value;
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
    if (Decode_RAN_VisibleParameters_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_RAN_VisibleParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RAN_VisibleParameters_r17(RAN_VisibleParameters_r17& value)
{
    if (value.has_ran_VisiblePeriodicity_r17) {
    }
    if (value.has_numberOfBufferLevelEntries_r17) {
    }
    if (value.has_reportPlayoutDelayForMediaStartup_r17) {
    }
    if (value.has_extGroup1) {
        Free_RAN_VisibleParameters_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_RAN_VisibleParameters_r17(Encoder& enc, const SetupRelease_RAN_VisibleParameters_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RAN_VisibleParameters_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_RAN_VisibleParameters_r17_Tag_setup:
        Encode_RAN_VisibleParameters_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RAN_VisibleParameters_r17(Decoder& dec, SetupRelease_RAN_VisibleParameters_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RAN_VisibleParameters_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RAN_VisibleParameters_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RAN_VisibleParameters_r17_Tag_setup: {
        if (Decode_RAN_VisibleParameters_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RAN_VisibleParameters_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RAN_VisibleParameters_r17(SetupRelease_RAN_VisibleParameters_r17& value)
{
    switch (value.tag) {
    case SetupRelease_RAN_VisibleParameters_r17_Tag_release:
        break;
    case SetupRelease_RAN_VisibleParameters_r17_Tag_setup:
        Free_RAN_VisibleParameters_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasConfigAppLayer_r17(Encoder& enc, const MeasConfigAppLayer_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measConfigAppLayerContainer_r17);
    enc.WriteBit(value.has_serviceType_r17);
    enc.WriteBit(value.has_pauseReporting_r17);
    enc.WriteBit(value.has_transmissionOfSessionStartStop_r17);
    enc.WriteBit(value.has_ran_VisibleParameters_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.measConfigAppLayerId_r17), 0, 15);
    if (value.has_measConfigAppLayerContainer_r17) {
        enc.WriteConstrainedOctetString(value.measConfigAppLayerContainer_r17.bytes, value.measConfigAppLayerContainer_r17.length, 1, 8000);
    }
    if (value.has_serviceType_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.serviceType_r17), 0, 7);
    }
    if (value.has_pauseReporting_r17) {
        enc.WriteBool(value.pauseReporting_r17);
    }
    if (value.has_transmissionOfSessionStartStop_r17) {
        enc.WriteBool(value.transmissionOfSessionStartStop_r17);
    }
    if (value.has_ran_VisibleParameters_r17) {
        Encode_SetupRelease_RAN_VisibleParameters_r17(enc, value.ran_VisibleParameters_r17);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasConfigAppLayer_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasConfigAppLayer_r17(Decoder& dec, MeasConfigAppLayer_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.measConfigAppLayerId_r17 = (MeasConfigAppLayerId_r17)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedOctetString(string_bytes, string_length, 1, 8000)) { goto fail; }
        value.measConfigAppLayerContainer_r17.bytes = string_bytes;
        value.measConfigAppLayerContainer_r17.length = string_length;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.serviceType_r17 = (MeasConfigAppLayer_r17_ServiceType_r17)tmp_value;
    }
    if (present_2) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.pauseReporting_r17 = tmp_value;
    }
    if (present_3) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.transmissionOfSessionStartStop_r17 = tmp_value;
    }
    if (present_4) {
        if (Decode_SetupRelease_RAN_VisibleParameters_r17(dec, value.ran_VisibleParameters_r17) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasConfigAppLayer_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MeasConfigAppLayer_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasConfigAppLayer_r17(MeasConfigAppLayer_r17& value)
{
    if (value.has_measConfigAppLayerContainer_r17) {
        std::free(value.measConfigAppLayerContainer_r17.bytes);
        value.measConfigAppLayerContainer_r17.bytes = nullptr;
        value.measConfigAppLayerContainer_r17.length = 0;
    }
    if (value.has_serviceType_r17) {
    }
    if (value.has_pauseReporting_r17) {
    }
    if (value.has_transmissionOfSessionStartStop_r17) {
    }
    if (value.has_ran_VisibleParameters_r17) {
        Free_SetupRelease_RAN_VisibleParameters_r17(value.ran_VisibleParameters_r17);
    }
    if (value.has_extGroup1) {
        Free_MeasConfigAppLayer_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_InterFreqTargetInfo_r16(Encoder& enc, const InterFreqTargetInfo_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_cellList_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_CarrierFreq_r16), 0, 3279165);
    if (value.has_cellList_r16) {
enc.WriteConstrainedLength(value.cellList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cellList_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.cellList_r16_items[i]), 0, 1007);
}
    }
    return enc.Error();
}

ErrorCode Decode_InterFreqTargetInfo_r16(Decoder& dec, InterFreqTargetInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.dl_CarrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cellList_r16_count)) { goto fail; }
if (value.cellList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cellList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cellList_r16_count > 0u) {
    value.cellList_r16_items = (PhysCellId*)std::malloc((std::size_t)value.cellList_r16_count * sizeof(PhysCellId));
    if (value.cellList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cellList_r16_items, 0, (std::size_t)value.cellList_r16_count * sizeof(PhysCellId));
}
for (std::uint32_t i = 0; i < value.cellList_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
    value.cellList_r16_items[i] = (PhysCellId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_InterFreqTargetInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_InterFreqTargetInfo_r16(InterFreqTargetInfo_r16& value)
{
    if (value.has_cellList_r16) {
        if (value.cellList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cellList_r16_count; ++i) {
            }
            std::free(value.cellList_r16_items);
            value.cellList_r16_items = nullptr;
        }
        value.cellList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_TrackingAreaIdentity_r16(Encoder& enc, const TrackingAreaIdentity_r16& value)
{
    (void)value;
    Encode_PLMN_Identity(enc, value.plmn_Identity_r16);
    enc.WriteFixedBitString(value.trackingAreaCode_r16.bytes, value.trackingAreaCode_r16.bitLength, 24, 24);
    return enc.Error();
}

ErrorCode Decode_TrackingAreaIdentity_r16(Decoder& dec, TrackingAreaIdentity_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode_r16.bytes = string_bytes;
        value.trackingAreaCode_r16.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TrackingAreaIdentity_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TrackingAreaIdentity_r16(TrackingAreaIdentity_r16& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r16);
    std::free(value.trackingAreaCode_r16.bytes);
    value.trackingAreaCode_r16.bytes = nullptr;
    value.trackingAreaCode_r16.bitLength = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CAG_Config_r18(Encoder& enc, const CAG_Config_r18& value)
{
    (void)value;
    Encode_PLMN_Identity(enc, value.plmn_Identity_r18);
enc.WriteConstrainedLength(value.cag_IdentityList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cag_IdentityList_r18_count; ++i) {
    enc.WriteFixedBitString(value.cag_IdentityList_r18_items[i].bytes, value.cag_IdentityList_r18_items[i].bitLength, 32, 32);
}
    return enc.Error();
}

ErrorCode Decode_CAG_Config_r18(Decoder& dec, CAG_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.cag_IdentityList_r18_count)) { goto fail; }
if (value.cag_IdentityList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cag_IdentityList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cag_IdentityList_r18_count > 0u) {
    value.cag_IdentityList_r18_items = (BitString*)std::malloc((std::size_t)value.cag_IdentityList_r18_count * sizeof(BitString));
    if (value.cag_IdentityList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cag_IdentityList_r18_items, 0, (std::size_t)value.cag_IdentityList_r18_count * sizeof(BitString));
}
for (std::uint32_t i = 0; i < value.cag_IdentityList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
    string_length = 32;
    value.cag_IdentityList_r18_items[i].bytes = string_bytes;
    value.cag_IdentityList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CAG_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CAG_Config_r18(CAG_Config_r18& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r18);
    if (value.cag_IdentityList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.cag_IdentityList_r18_count; ++i) {
            std::free(value.cag_IdentityList_r18_items[i].bytes);
            value.cag_IdentityList_r18_items[i].bytes = nullptr;
            value.cag_IdentityList_r18_items[i].bitLength = 0;
        }
        std::free(value.cag_IdentityList_r18_items);
        value.cag_IdentityList_r18_items = nullptr;
    }
    value.cag_IdentityList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SNPN_ConfigCellId_r18(Encoder& enc, const SNPN_ConfigCellId_r18& value)
{
    (void)value;
    Encode_CGI_Info_Logging_r16(enc, value.cgi_Identity_r18);
enc.WriteConstrainedLength(value.nid_IdentityList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
    enc.WriteFixedBitString(value.nid_IdentityList_r18_items[i].bytes, value.nid_IdentityList_r18_items[i].bitLength, 44, 44);
}
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigCellId_r18(Decoder& dec, SNPN_ConfigCellId_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CGI_Info_Logging_r16(dec, value.cgi_Identity_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nid_IdentityList_r18_count)) { goto fail; }
if (value.nid_IdentityList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nid_IdentityList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nid_IdentityList_r18_count > 0u) {
    value.nid_IdentityList_r18_items = (NID_r16*)std::malloc((std::size_t)value.nid_IdentityList_r18_count * sizeof(NID_r16));
    if (value.nid_IdentityList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nid_IdentityList_r18_items, 0, (std::size_t)value.nid_IdentityList_r18_count * sizeof(NID_r16));
}
for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 44)) { goto fail; }
    string_length = 44;
    value.nid_IdentityList_r18_items[i].bytes = string_bytes;
    value.nid_IdentityList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigCellId_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigCellId_r18(SNPN_ConfigCellId_r18& value)
{
    Free_CGI_Info_Logging_r16(value.cgi_Identity_r18);
    if (value.nid_IdentityList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
            std::free(value.nid_IdentityList_r18_items[i].bytes);
            value.nid_IdentityList_r18_items[i].bytes = nullptr;
            value.nid_IdentityList_r18_items[i].bitLength = 0;
        }
        std::free(value.nid_IdentityList_r18_items);
        value.nid_IdentityList_r18_items = nullptr;
    }
    value.nid_IdentityList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SNPN_ConfigTAI_r18(Encoder& enc, const SNPN_ConfigTAI_r18& value)
{
    (void)value;
    Encode_TrackingAreaIdentity_r16(enc, value.tai_Identity_r18);
enc.WriteConstrainedLength(value.nid_IdentityList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
    enc.WriteFixedBitString(value.nid_IdentityList_r18_items[i].bytes, value.nid_IdentityList_r18_items[i].bitLength, 44, 44);
}
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigTAI_r18(Decoder& dec, SNPN_ConfigTAI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_TrackingAreaIdentity_r16(dec, value.tai_Identity_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nid_IdentityList_r18_count)) { goto fail; }
if (value.nid_IdentityList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nid_IdentityList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nid_IdentityList_r18_count > 0u) {
    value.nid_IdentityList_r18_items = (NID_r16*)std::malloc((std::size_t)value.nid_IdentityList_r18_count * sizeof(NID_r16));
    if (value.nid_IdentityList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nid_IdentityList_r18_items, 0, (std::size_t)value.nid_IdentityList_r18_count * sizeof(NID_r16));
}
for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 44)) { goto fail; }
    string_length = 44;
    value.nid_IdentityList_r18_items[i].bytes = string_bytes;
    value.nid_IdentityList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigTAI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigTAI_r18(SNPN_ConfigTAI_r18& value)
{
    Free_TrackingAreaIdentity_r16(value.tai_Identity_r18);
    if (value.nid_IdentityList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
            std::free(value.nid_IdentityList_r18_items[i].bytes);
            value.nid_IdentityList_r18_items[i].bytes = nullptr;
            value.nid_IdentityList_r18_items[i].bitLength = 0;
        }
        std::free(value.nid_IdentityList_r18_items);
        value.nid_IdentityList_r18_items = nullptr;
    }
    value.nid_IdentityList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SNPN_ConfigID_r18(Encoder& enc, const SNPN_ConfigID_r18& value)
{
    (void)value;
    Encode_PLMN_Identity(enc, value.plmn_Identity_r18);
enc.WriteConstrainedLength(value.nid_IdentityList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
    enc.WriteFixedBitString(value.nid_IdentityList_r18_items[i].bytes, value.nid_IdentityList_r18_items[i].bitLength, 44, 44);
}
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigID_r18(Decoder& dec, SNPN_ConfigID_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nid_IdentityList_r18_count)) { goto fail; }
if (value.nid_IdentityList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nid_IdentityList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nid_IdentityList_r18_count > 0u) {
    value.nid_IdentityList_r18_items = (NID_r16*)std::malloc((std::size_t)value.nid_IdentityList_r18_count * sizeof(NID_r16));
    if (value.nid_IdentityList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nid_IdentityList_r18_items, 0, (std::size_t)value.nid_IdentityList_r18_count * sizeof(NID_r16));
}
for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 44)) { goto fail; }
    string_length = 44;
    value.nid_IdentityList_r18_items[i].bytes = string_bytes;
    value.nid_IdentityList_r18_items[i].bitLength = string_length;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigID_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigID_r18(SNPN_ConfigID_r18& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r18);
    if (value.nid_IdentityList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nid_IdentityList_r18_count; ++i) {
            std::free(value.nid_IdentityList_r18_items[i].bytes);
            value.nid_IdentityList_r18_items[i].bytes = nullptr;
            value.nid_IdentityList_r18_items[i].bitLength = 0;
        }
        std::free(value.nid_IdentityList_r18_items);
        value.nid_IdentityList_r18_items = nullptr;
    }
    value.nid_IdentityList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(Encoder& enc, const EUTRA_MBSFN_SubframeConfig_SubframeAllocation1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_oneFrame:
        enc.WriteFixedBitString(value.u.oneFrame.bytes, value.u.oneFrame.bitLength, 6, 6);
        break;
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_fourFrames:
        enc.WriteFixedBitString(value.u.fourFrames.bytes, value.u.fourFrames.bitLength, 24, 24);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(Decoder& dec, EUTRA_MBSFN_SubframeConfig_SubframeAllocation1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag)root_index;
    switch (value.tag) {
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_oneFrame: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.u.oneFrame.bytes = string_bytes;
        value.u.oneFrame.bitLength = string_length;
        break;
    }
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_fourFrames: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.u.fourFrames.bytes = string_bytes;
        value.u.fourFrames.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(EUTRA_MBSFN_SubframeConfig_SubframeAllocation1& value)
{
    switch (value.tag) {
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_oneFrame:
        std::free(value.u.oneFrame.bytes);
        break;
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation1_Tag_fourFrames:
        std::free(value.u.fourFrames.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(Encoder& enc, const EUTRA_MBSFN_SubframeConfig_SubframeAllocation2& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_oneFrame:
        enc.WriteFixedBitString(value.u.oneFrame.bytes, value.u.oneFrame.bitLength, 2, 2);
        break;
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_fourFrames:
        enc.WriteFixedBitString(value.u.fourFrames.bytes, value.u.fourFrames.bitLength, 8, 8);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(Decoder& dec, EUTRA_MBSFN_SubframeConfig_SubframeAllocation2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag)root_index;
    switch (value.tag) {
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_oneFrame: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 2)) { goto fail; }
        string_length = 2;
        value.u.oneFrame.bytes = string_bytes;
        value.u.oneFrame.bitLength = string_length;
        break;
    }
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_fourFrames: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.fourFrames.bytes = string_bytes;
        value.u.fourFrames.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(EUTRA_MBSFN_SubframeConfig_SubframeAllocation2& value)
{
    switch (value.tag) {
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_oneFrame:
        std::free(value.u.oneFrame.bytes);
        break;
    case EUTRA_MBSFN_SubframeConfig_SubframeAllocation2_Tag_fourFrames:
        std::free(value.u.fourFrames.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_MBSFN_SubframeConfig(Encoder& enc, const EUTRA_MBSFN_SubframeConfig& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_subframeAllocation2);
    enc.WriteConstrainedInteger((std::int64_t)(value.radioframeAllocationPeriod), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.radioframeAllocationOffset), 0, 7);
    Encode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(enc, value.subframeAllocation1);
    if (value.has_subframeAllocation2) {
        Encode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(enc, value.subframeAllocation2);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MBSFN_SubframeConfig(Decoder& dec, EUTRA_MBSFN_SubframeConfig& value)
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
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.radioframeAllocationPeriod = (EUTRA_MBSFN_SubframeConfig_RadioframeAllocationPeriod)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.radioframeAllocationOffset = (int64_t)tmp_value;
    }
    {
        if (Decode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(dec, value.subframeAllocation1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(dec, value.subframeAllocation2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MBSFN_SubframeConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MBSFN_SubframeConfig(EUTRA_MBSFN_SubframeConfig& value)
{
    Free_EUTRA_MBSFN_SubframeConfig_SubframeAllocation1(value.subframeAllocation1);
    if (value.has_subframeAllocation2) {
        Free_EUTRA_MBSFN_SubframeConfig_SubframeAllocation2(value.subframeAllocation2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_NS_PmaxList(Encoder& enc, const EUTRA_NS_PmaxList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_NS_PmaxValue(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_NS_PmaxList(Decoder& dec, EUTRA_NS_PmaxList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_NS_PmaxValue*)std::malloc((std::size_t)value.count * sizeof(EUTRA_NS_PmaxValue));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_NS_PmaxValue));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_NS_PmaxValue(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_NS_PmaxList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_NS_PmaxList(EUTRA_NS_PmaxList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_NS_PmaxValue(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_MultiBandInfo(Encoder& enc, const EUTRA_MultiBandInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_eutra_NS_PmaxList);
    enc.WriteConstrainedInteger((std::int64_t)(value.eutra_FreqBandIndicator), 1, 256);
    if (value.has_eutra_NS_PmaxList) {
        Encode_EUTRA_NS_PmaxList(enc, value.eutra_NS_PmaxList);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MultiBandInfo(Decoder& dec, EUTRA_MultiBandInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.eutra_FreqBandIndicator = (FreqBandIndicatorEUTRA)tmp_value;
    }
    if (present_0) {
        if (Decode_EUTRA_NS_PmaxList(dec, value.eutra_NS_PmaxList) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MultiBandInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MultiBandInfo(EUTRA_MultiBandInfo& value)
{
    if (value.has_eutra_NS_PmaxList) {
        Free_EUTRA_NS_PmaxList(value.eutra_NS_PmaxList);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_MultiBandInfoAerial_r18(Encoder& enc, const EUTRA_MultiBandInfoAerial_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_eutra_NS_PmaxListAerial_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.eutra_FreqBandIndicator_r18), 1, 256);
    if (value.has_eutra_NS_PmaxListAerial_r18) {
        Encode_EUTRA_NS_PmaxList(enc, value.eutra_NS_PmaxListAerial_r18);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_MultiBandInfoAerial_r18(Decoder& dec, EUTRA_MultiBandInfoAerial_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.eutra_FreqBandIndicator_r18 = (FreqBandIndicatorEUTRA)tmp_value;
    }
    if (present_0) {
        if (Decode_EUTRA_NS_PmaxList(dec, value.eutra_NS_PmaxListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_MultiBandInfoAerial_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_MultiBandInfoAerial_r18(EUTRA_MultiBandInfoAerial_r18& value)
{
    if (value.has_eutra_NS_PmaxListAerial_r18) {
        Free_EUTRA_NS_PmaxList(value.eutra_NS_PmaxListAerial_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_NS_PmaxValue(Encoder& enc, const EUTRA_NS_PmaxValue& value)
{
    (void)value;
    enc.WriteBit(value.has_additionalPmax);
    enc.WriteBit(value.has_additionalSpectrumEmission);
    if (value.has_additionalPmax) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalPmax), -30, 33);
    }
    if (value.has_additionalSpectrumEmission) {
        enc.WriteConstrainedInteger((std::int64_t)(value.additionalSpectrumEmission), 1, 288);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_NS_PmaxValue(Decoder& dec, EUTRA_NS_PmaxValue& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 33, tmp_value)) { goto fail; }
        value.additionalPmax = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 288, tmp_value)) { goto fail; }
        value.additionalSpectrumEmission = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_NS_PmaxValue(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_NS_PmaxValue(EUTRA_NS_PmaxValue& value)
{
    if (value.has_additionalPmax) {
    }
    if (value.has_additionalSpectrumEmission) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LogMeasResultBT_r16(Encoder& enc, const LogMeasResultBT_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rssi_BT_r16);
    enc.WriteFixedBitString(value.bt_Addr_r16.bytes, value.bt_Addr_r16.bitLength, 48, 48);
    if (value.has_rssi_BT_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rssi_BT_r16), -128, 127);
    }
    return enc.Error();
}

ErrorCode Decode_LogMeasResultBT_r16(Decoder& dec, LogMeasResultBT_r16& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.bt_Addr_r16.bytes = string_bytes;
        value.bt_Addr_r16.bitLength = string_length;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-128, 127, tmp_value)) { goto fail; }
        value.rssi_BT_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LogMeasResultBT_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LogMeasResultBT_r16(LogMeasResultBT_r16& value)
{
    std::free(value.bt_Addr_r16.bytes);
    value.bt_Addr_r16.bytes = nullptr;
    value.bt_Addr_r16.bitLength = 0;
    if (value.has_rssi_BT_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
