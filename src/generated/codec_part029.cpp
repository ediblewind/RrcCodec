/* ============================================================================
 * src/generated/codec_part029.cpp — 生成的编解码函数
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
// RF_Parameters_ExtGroup7：ASN.1 RF_Parameters_ExtGroup7；源文件第 19442 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup7 只读不分配；Decode_RF_Parameters_ExtGroup7 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup7(Encoder& enc, const RF_Parameters_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1650);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1650);
    if (value.has_supportedBandCombinationList_v1650) {
        Encode_BandCombinationList_v1650(enc, value.supportedBandCombinationList_v1650);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1650) {
        Encode_BandCombinationList_UplinkTxSwitch_v1650(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1650);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup7(Decoder& dec, RF_Parameters_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1650(dec, value.supportedBandCombinationList_v1650) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1650(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1650) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup7(RF_Parameters_ExtGroup7& value)
{
    if (value.has_supportedBandCombinationList_v1650) {
        Free_BandCombinationList_v1650(value.supportedBandCombinationList_v1650);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1650) {
        Free_BandCombinationList_UplinkTxSwitch_v1650(value.supportedBandCombinationList_UplinkTxSwitch_v1650);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup8：ASN.1 RF_Parameters_ExtGroup8；源文件第 19446 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup8 只读不分配；Decode_RF_Parameters_ExtGroup8 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup8 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup8(Encoder& enc, const RF_Parameters_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_extendedBand_n77_r16);
    if (value.has_extendedBand_n77_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedBand_n77_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup8(Decoder& dec, RF_Parameters_ExtGroup8& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.extendedBand_n77_r16 = (RF_Parameters_ExtGroup8_ExtendedBand_n77_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup8(RF_Parameters_ExtGroup8& value)
{
    if (value.has_extendedBand_n77_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup9：ASN.1 RF_Parameters_ExtGroup9；源文件第 19449 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup9 只读不分配；Decode_RF_Parameters_ExtGroup9 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup9 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup9(Encoder& enc, const RF_Parameters_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1670);
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1670) {
        Encode_BandCombinationList_UplinkTxSwitch_v1670(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1670);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup9(Decoder& dec, RF_Parameters_ExtGroup9& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1670(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1670) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup9(RF_Parameters_ExtGroup9& value)
{
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1670) {
        Free_BandCombinationList_UplinkTxSwitch_v1670(value.supportedBandCombinationList_UplinkTxSwitch_v1670);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup10：ASN.1 RF_Parameters_ExtGroup10；源文件第 19452 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup10 只读不分配；Decode_RF_Parameters_ExtGroup10 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup10 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup10(Encoder& enc, const RF_Parameters_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1680);
    if (value.has_supportedBandCombinationList_v1680) {
        Encode_BandCombinationList_v1680(enc, value.supportedBandCombinationList_v1680);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup10(Decoder& dec, RF_Parameters_ExtGroup10& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1680(dec, value.supportedBandCombinationList_v1680) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup10(RF_Parameters_ExtGroup10& value)
{
    if (value.has_supportedBandCombinationList_v1680) {
        Free_BandCombinationList_v1680(value.supportedBandCombinationList_v1680);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup11：ASN.1 RF_Parameters_ExtGroup11；源文件第 19455 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup11 只读不分配；Decode_RF_Parameters_ExtGroup11 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup11 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup11(Encoder& enc, const RF_Parameters_ExtGroup11& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1690);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1690);
    if (value.has_supportedBandCombinationList_v1690) {
        Encode_BandCombinationList_v1690(enc, value.supportedBandCombinationList_v1690);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1690) {
        Encode_BandCombinationList_UplinkTxSwitch_v1690(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1690);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup11(Decoder& dec, RF_Parameters_ExtGroup11& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1690(dec, value.supportedBandCombinationList_v1690) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1690(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1690) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup11(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup11(RF_Parameters_ExtGroup11& value)
{
    if (value.has_supportedBandCombinationList_v1690) {
        Free_BandCombinationList_v1690(value.supportedBandCombinationList_v1690);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1690) {
        Free_BandCombinationList_UplinkTxSwitch_v1690(value.supportedBandCombinationList_UplinkTxSwitch_v1690);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup12：ASN.1 RF_Parameters_ExtGroup12；源文件第 19459 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup12 只读不分配；Decode_RF_Parameters_ExtGroup12 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup12 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup12(Encoder& enc, const RF_Parameters_ExtGroup12& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1700);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1700);
    enc.WriteBit(value.has_supportedBandCombinationListSL_RelayDiscovery_r17);
    enc.WriteBit(value.has_supportedBandCombinationListSL_NonRelayDiscovery_r17);
    enc.WriteBit(value.has_supportedBandCombinationListSidelinkEUTRA_NR_v1710);
    enc.WriteBit(value.has_sidelinkRequested_r17);
    enc.WriteBit(value.has_extendedBand_n77_2_r17);
    if (value.has_supportedBandCombinationList_v1700) {
        Encode_BandCombinationList_v1700(enc, value.supportedBandCombinationList_v1700);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1700) {
        Encode_BandCombinationList_UplinkTxSwitch_v1700(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1700);
    }
    if (value.has_supportedBandCombinationListSL_RelayDiscovery_r17) {
        enc.WriteSemiConstrainedOctetString(value.supportedBandCombinationListSL_RelayDiscovery_r17.bytes, value.supportedBandCombinationListSL_RelayDiscovery_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_supportedBandCombinationListSL_NonRelayDiscovery_r17) {
        enc.WriteSemiConstrainedOctetString(value.supportedBandCombinationListSL_NonRelayDiscovery_r17.bytes, value.supportedBandCombinationListSL_NonRelayDiscovery_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_supportedBandCombinationListSidelinkEUTRA_NR_v1710) {
        Encode_BandCombinationListSidelinkEUTRA_NR_v1710(enc, value.supportedBandCombinationListSidelinkEUTRA_NR_v1710);
    }
    if (value.has_sidelinkRequested_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sidelinkRequested_r17), 0, 0);
    }
    if (value.has_extendedBand_n77_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedBand_n77_2_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup12(Decoder& dec, RF_Parameters_ExtGroup12& value)
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
        if (Decode_BandCombinationList_v1700(dec, value.supportedBandCombinationList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1700(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.supportedBandCombinationListSL_RelayDiscovery_r17.bytes = string_bytes;
        value.supportedBandCombinationListSL_RelayDiscovery_r17.length = string_length;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.supportedBandCombinationListSL_NonRelayDiscovery_r17.bytes = string_bytes;
        value.supportedBandCombinationListSL_NonRelayDiscovery_r17.length = string_length;
    }
    if (present_4) {
        if (Decode_BandCombinationListSidelinkEUTRA_NR_v1710(dec, value.supportedBandCombinationListSidelinkEUTRA_NR_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        value.sidelinkRequested_r17 = (RF_Parameters_ExtGroup12_SidelinkRequested_r17)0;
    }
    if (present_6) {
        value.extendedBand_n77_2_r17 = (RF_Parameters_ExtGroup12_ExtendedBand_n77_2_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup12(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup12(RF_Parameters_ExtGroup12& value)
{
    if (value.has_supportedBandCombinationList_v1700) {
        Free_BandCombinationList_v1700(value.supportedBandCombinationList_v1700);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1700) {
        Free_BandCombinationList_UplinkTxSwitch_v1700(value.supportedBandCombinationList_UplinkTxSwitch_v1700);
    }
    if (value.has_supportedBandCombinationListSL_RelayDiscovery_r17) {
        std::free(value.supportedBandCombinationListSL_RelayDiscovery_r17.bytes);
        value.supportedBandCombinationListSL_RelayDiscovery_r17.bytes = nullptr;
        value.supportedBandCombinationListSL_RelayDiscovery_r17.length = 0;
    }
    if (value.has_supportedBandCombinationListSL_NonRelayDiscovery_r17) {
        std::free(value.supportedBandCombinationListSL_NonRelayDiscovery_r17.bytes);
        value.supportedBandCombinationListSL_NonRelayDiscovery_r17.bytes = nullptr;
        value.supportedBandCombinationListSL_NonRelayDiscovery_r17.length = 0;
    }
    if (value.has_supportedBandCombinationListSidelinkEUTRA_NR_v1710) {
        Free_BandCombinationListSidelinkEUTRA_NR_v1710(value.supportedBandCombinationListSidelinkEUTRA_NR_v1710);
    }
    if (value.has_sidelinkRequested_r17) {
    }
    if (value.has_extendedBand_n77_2_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup13：ASN.1 RF_Parameters_ExtGroup13；源文件第 19468 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup13 只读不分配；Decode_RF_Parameters_ExtGroup13 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup13 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup13(Encoder& enc, const RF_Parameters_ExtGroup13& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1720);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1720);
    if (value.has_supportedBandCombinationList_v1720) {
        Encode_BandCombinationList_v1720(enc, value.supportedBandCombinationList_v1720);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1720) {
        Encode_BandCombinationList_UplinkTxSwitch_v1720(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup13(Decoder& dec, RF_Parameters_ExtGroup13& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1720(dec, value.supportedBandCombinationList_v1720) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1720(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup13(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup13(RF_Parameters_ExtGroup13& value)
{
    if (value.has_supportedBandCombinationList_v1720) {
        Free_BandCombinationList_v1720(value.supportedBandCombinationList_v1720);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1720) {
        Free_BandCombinationList_UplinkTxSwitch_v1720(value.supportedBandCombinationList_UplinkTxSwitch_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup14：ASN.1 RF_Parameters_ExtGroup14；源文件第 19472 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup14 只读不分配；Decode_RF_Parameters_ExtGroup14 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup14 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup14(Encoder& enc, const RF_Parameters_ExtGroup14& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1730);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1730);
    enc.WriteBit(value.has_supportedBandCombinationListSL_RelayDiscovery_v1730);
    enc.WriteBit(value.has_supportedBandCombinationListSL_NonRelayDiscovery_v1730);
    if (value.has_supportedBandCombinationList_v1730) {
        Encode_BandCombinationList_v1730(enc, value.supportedBandCombinationList_v1730);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1730) {
        Encode_BandCombinationList_UplinkTxSwitch_v1730(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1730);
    }
    if (value.has_supportedBandCombinationListSL_RelayDiscovery_v1730) {
        Encode_BandCombinationListSL_Discovery_r17(enc, value.supportedBandCombinationListSL_RelayDiscovery_v1730);
    }
    if (value.has_supportedBandCombinationListSL_NonRelayDiscovery_v1730) {
        Encode_BandCombinationListSL_Discovery_r17(enc, value.supportedBandCombinationListSL_NonRelayDiscovery_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup14(Decoder& dec, RF_Parameters_ExtGroup14& value)
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
        if (Decode_BandCombinationList_v1730(dec, value.supportedBandCombinationList_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1730(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationListSL_Discovery_r17(dec, value.supportedBandCombinationListSL_RelayDiscovery_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_BandCombinationListSL_Discovery_r17(dec, value.supportedBandCombinationListSL_NonRelayDiscovery_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup14(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup14(RF_Parameters_ExtGroup14& value)
{
    if (value.has_supportedBandCombinationList_v1730) {
        Free_BandCombinationList_v1730(value.supportedBandCombinationList_v1730);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1730) {
        Free_BandCombinationList_UplinkTxSwitch_v1730(value.supportedBandCombinationList_UplinkTxSwitch_v1730);
    }
    if (value.has_supportedBandCombinationListSL_RelayDiscovery_v1730) {
        Free_BandCombinationListSL_Discovery_r17(value.supportedBandCombinationListSL_RelayDiscovery_v1730);
    }
    if (value.has_supportedBandCombinationListSL_NonRelayDiscovery_v1730) {
        Free_BandCombinationListSL_Discovery_r17(value.supportedBandCombinationListSL_NonRelayDiscovery_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup15：ASN.1 RF_Parameters_ExtGroup15；源文件第 19478 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup15 只读不分配；Decode_RF_Parameters_ExtGroup15 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup15 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup15(Encoder& enc, const RF_Parameters_ExtGroup15& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1740);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1740);
    if (value.has_supportedBandCombinationList_v1740) {
        Encode_BandCombinationList_v1740(enc, value.supportedBandCombinationList_v1740);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1740) {
        Encode_BandCombinationList_UplinkTxSwitch_v1740(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1740);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup15(Decoder& dec, RF_Parameters_ExtGroup15& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1740(dec, value.supportedBandCombinationList_v1740) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1740(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1740) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup15(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup15(RF_Parameters_ExtGroup15& value)
{
    if (value.has_supportedBandCombinationList_v1740) {
        Free_BandCombinationList_v1740(value.supportedBandCombinationList_v1740);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1740) {
        Free_BandCombinationList_UplinkTxSwitch_v1740(value.supportedBandCombinationList_UplinkTxSwitch_v1740);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup16：ASN.1 RF_Parameters_ExtGroup16；源文件第 19482 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup16 只读不分配；Decode_RF_Parameters_ExtGroup16 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup16(Encoder& enc, const RF_Parameters_ExtGroup16& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1760);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1760);
    if (value.has_supportedBandCombinationList_v1760) {
        Encode_BandCombinationList_v1760(enc, value.supportedBandCombinationList_v1760);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1760) {
        Encode_BandCombinationList_UplinkTxSwitch_v1760(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup16(Decoder& dec, RF_Parameters_ExtGroup16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1760(dec, value.supportedBandCombinationList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1760(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup16(RF_Parameters_ExtGroup16& value)
{
    if (value.has_supportedBandCombinationList_v1760) {
        Free_BandCombinationList_v1760(value.supportedBandCombinationList_v1760);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1760) {
        Free_BandCombinationList_UplinkTxSwitch_v1760(value.supportedBandCombinationList_UplinkTxSwitch_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup17：ASN.1 RF_Parameters_ExtGroup17；源文件第 19486 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup17 只读不分配；Decode_RF_Parameters_ExtGroup17 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup17(Encoder& enc, const RF_Parameters_ExtGroup17& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_dummy2);
    if (value.has_dummy1) {
        Encode_BandCombinationList_v1770(enc, value.dummy1);
    }
    if (value.has_dummy2) {
        Encode_BandCombinationList_UplinkTxSwitch_v1770(enc, value.dummy2);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup17(Decoder& dec, RF_Parameters_ExtGroup17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1770(dec, value.dummy1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1770(dec, value.dummy2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup17(RF_Parameters_ExtGroup17& value)
{
    if (value.has_dummy1) {
        Free_BandCombinationList_v1770(value.dummy1);
    }
    if (value.has_dummy2) {
        Free_BandCombinationList_UplinkTxSwitch_v1770(value.dummy2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup18：ASN.1 RF_Parameters_ExtGroup18；源文件第 19490 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup18 只读不分配；Decode_RF_Parameters_ExtGroup18 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup18(Encoder& enc, const RF_Parameters_ExtGroup18& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1780);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1780);
    if (value.has_supportedBandCombinationList_v1780) {
        Encode_BandCombinationList_v1780(enc, value.supportedBandCombinationList_v1780);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1780) {
        Encode_BandCombinationList_UplinkTxSwitch_v1780(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup18(Decoder& dec, RF_Parameters_ExtGroup18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1780(dec, value.supportedBandCombinationList_v1780) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1780(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup18(RF_Parameters_ExtGroup18& value)
{
    if (value.has_supportedBandCombinationList_v1780) {
        Free_BandCombinationList_v1780(value.supportedBandCombinationList_v1780);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1780) {
        Free_BandCombinationList_UplinkTxSwitch_v1780(value.supportedBandCombinationList_UplinkTxSwitch_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18：ASN.1 supportedBandCombinationListSL-U2U-Relay-r18；源文件第 19497 行；SEQUENCE。
// Encode_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18 只读不分配；Decode_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(Encoder& enc, const RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationListSL_U2U_RelayDiscovery_r18);
    enc.WriteBit(value.has_supportedBandCombinationListSL_U2U_DiscoveryExt);
    if (value.has_supportedBandCombinationListSL_U2U_RelayDiscovery_r18) {
        enc.WriteSemiConstrainedOctetString(value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.bytes, value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_supportedBandCombinationListSL_U2U_DiscoveryExt) {
        Encode_BandCombinationListSL_Discovery_r17(enc, value.supportedBandCombinationListSL_U2U_DiscoveryExt);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(Decoder& dec, RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18& value)
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
        value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.bytes = string_bytes;
        value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.length = string_length;
    }
    if (present_1) {
        if (Decode_BandCombinationListSL_Discovery_r17(dec, value.supportedBandCombinationListSL_U2U_DiscoveryExt) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18& value)
{
    if (value.has_supportedBandCombinationListSL_U2U_RelayDiscovery_r18) {
        std::free(value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.bytes);
        value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.bytes = nullptr;
        value.supportedBandCombinationListSL_U2U_RelayDiscovery_r18.length = 0;
    }
    if (value.has_supportedBandCombinationListSL_U2U_DiscoveryExt) {
        Free_BandCombinationListSL_Discovery_r17(value.supportedBandCombinationListSL_U2U_DiscoveryExt);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_ExtGroup19：ASN.1 RF_Parameters_ExtGroup19；源文件第 19494 行；扩展添加组 [[ ]]。
// Encode_RF_Parameters_ExtGroup19 只读不分配；Decode_RF_Parameters_ExtGroup19 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_ExtGroup19 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_ExtGroup19(Encoder& enc, const RF_Parameters_ExtGroup19& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1800);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1800);
    enc.WriteBit(value.has_supportedBandCombinationListSL_U2U_Relay_r18);
    if (value.has_supportedBandCombinationList_v1800) {
        Encode_BandCombinationList_v1800(enc, value.supportedBandCombinationList_v1800);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1800) {
        Encode_BandCombinationList_UplinkTxSwitch_v1800(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1800);
    }
    if (value.has_supportedBandCombinationListSL_U2U_Relay_r18) {
        Encode_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(enc, value.supportedBandCombinationListSL_U2U_Relay_r18);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_ExtGroup19(Decoder& dec, RF_Parameters_ExtGroup19& value)
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
        if (Decode_BandCombinationList_v1800(dec, value.supportedBandCombinationList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1800(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(dec, value.supportedBandCombinationListSL_U2U_Relay_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_ExtGroup19(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_ExtGroup19(RF_Parameters_ExtGroup19& value)
{
    if (value.has_supportedBandCombinationList_v1800) {
        Free_BandCombinationList_v1800(value.supportedBandCombinationList_v1800);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1800) {
        Free_BandCombinationList_UplinkTxSwitch_v1800(value.supportedBandCombinationList_UplinkTxSwitch_v1800);
    }
    if (value.has_supportedBandCombinationListSL_U2U_Relay_r18) {
        Free_RF_Parameters_ExtGroup19_SupportedBandCombinationListSL_U2U_Relay_r18(value.supportedBandCombinationListSL_U2U_Relay_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters：ASN.1 RF-Parameters；源文件第 19413 行；SEQUENCE。
// Encode_RF_Parameters 只读不分配；Decode_RF_Parameters 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters(Encoder& enc, const RF_Parameters& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10 || value.has_extGroup11 || value.has_extGroup12 || value.has_extGroup13 || value.has_extGroup14 || value.has_extGroup15 || value.has_extGroup16 || value.has_extGroup17 || value.has_extGroup18 || value.has_extGroup19;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_supportedBandCombinationList);
    enc.WriteBit(value.has_appliedFreqBandListFilter);
enc.WriteConstrainedLength(value.supportedBandListNR_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandListNR_count; ++i) {
    Encode_BandNR(enc, value.supportedBandListNR_items[i]);
}
    if (value.has_supportedBandCombinationList) {
        Encode_BandCombinationList(enc, value.supportedBandCombinationList);
    }
    if (value.has_appliedFreqBandListFilter) {
        Encode_FreqBandList(enc, value.appliedFreqBandListFilter);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(19u);
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
        enc.WriteBit(value.has_extGroup11);
        enc.WriteBit(value.has_extGroup12);
        enc.WriteBit(value.has_extGroup13);
        enc.WriteBit(value.has_extGroup14);
        enc.WriteBit(value.has_extGroup15);
        enc.WriteBit(value.has_extGroup16);
        enc.WriteBit(value.has_extGroup17);
        enc.WriteBit(value.has_extGroup18);
        enc.WriteBit(value.has_extGroup19);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup11) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup11(sub, value.extGroup11);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup12) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup12(sub, value.extGroup12);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup13) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup13(sub, value.extGroup13);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup14) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup14(sub, value.extGroup14);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup15) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup15(sub, value.extGroup15);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup16) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup16(sub, value.extGroup16);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup17) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup17(sub, value.extGroup17);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup18) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup18(sub, value.extGroup18);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup19) {
    Encoder sub;
    Encode_RF_Parameters_ExtGroup19(sub, value.extGroup19);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters(Decoder& dec, RF_Parameters& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandListNR_count)) { goto fail; }
if (value.supportedBandListNR_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandListNR_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandListNR_count > 0u) {
    value.supportedBandListNR_items = (BandNR*)std::malloc((std::size_t)value.supportedBandListNR_count * sizeof(BandNR));
    if (value.supportedBandListNR_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandListNR_items, 0, (std::size_t)value.supportedBandListNR_count * sizeof(BandNR));
}
for (std::uint32_t i = 0; i < value.supportedBandListNR_count; ++i) {
    if (Decode_BandNR(dec, value.supportedBandListNR_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_0) {
        if (Decode_BandCombinationList(dec, value.supportedBandCombinationList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FreqBandList(dec, value.appliedFreqBandListFilter) != ErrorCode_Ok) { goto fail; }
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 19u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[19] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
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
    if (Decode_RF_Parameters_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[10]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup11(sub, value.extGroup11) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup11 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[11]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup12(sub, value.extGroup12) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup12 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[12]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup13(sub, value.extGroup13) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup13 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[13]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup14(sub, value.extGroup14) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup14 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[14]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup15(sub, value.extGroup15) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup15 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[15]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup16(sub, value.extGroup16) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup16 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[16]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup17(sub, value.extGroup17) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup17 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[17]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup18(sub, value.extGroup18) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup18 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[18]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_Parameters_ExtGroup19(sub, value.extGroup19) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup19 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters(RF_Parameters& value)
{
    if (value.supportedBandListNR_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedBandListNR_count; ++i) {
            Free_BandNR(value.supportedBandListNR_items[i]);
        }
        std::free(value.supportedBandListNR_items);
        value.supportedBandListNR_items = nullptr;
    }
    value.supportedBandListNR_count = 0;
    if (value.has_supportedBandCombinationList) {
        Free_BandCombinationList(value.supportedBandCombinationList);
    }
    if (value.has_appliedFreqBandListFilter) {
        Free_FreqBandList(value.appliedFreqBandListFilter);
    }
    if (value.has_extGroup1) {
        Free_RF_Parameters_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RF_Parameters_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_RF_Parameters_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_RF_Parameters_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_RF_Parameters_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_RF_Parameters_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_RF_Parameters_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_RF_Parameters_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_RF_Parameters_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_RF_Parameters_ExtGroup10(value.extGroup10);
    }
    if (value.has_extGroup11) {
        Free_RF_Parameters_ExtGroup11(value.extGroup11);
    }
    if (value.has_extGroup12) {
        Free_RF_Parameters_ExtGroup12(value.extGroup12);
    }
    if (value.has_extGroup13) {
        Free_RF_Parameters_ExtGroup13(value.extGroup13);
    }
    if (value.has_extGroup14) {
        Free_RF_Parameters_ExtGroup14(value.extGroup14);
    }
    if (value.has_extGroup15) {
        Free_RF_Parameters_ExtGroup15(value.extGroup15);
    }
    if (value.has_extGroup16) {
        Free_RF_Parameters_ExtGroup16(value.extGroup16);
    }
    if (value.has_extGroup17) {
        Free_RF_Parameters_ExtGroup17(value.extGroup17);
    }
    if (value.has_extGroup18) {
        Free_RF_Parameters_ExtGroup18(value.extGroup18);
    }
    if (value.has_extGroup19) {
        Free_RF_Parameters_ExtGroup19(value.extGroup19);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_v15g0：ASN.1 RF-Parameters-v15g0；源文件第 19505 行；SEQUENCE。
// Encode_RF_Parameters_v15g0 只读不分配；Decode_RF_Parameters_v15g0 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_v15g0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_v15g0(Encoder& enc, const RF_Parameters_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v15g0);
    if (value.has_supportedBandCombinationList_v15g0) {
        Encode_BandCombinationList_v15g0(enc, value.supportedBandCombinationList_v15g0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_v15g0(Decoder& dec, RF_Parameters_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v15g0(dec, value.supportedBandCombinationList_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_v15g0(RF_Parameters_v15g0& value)
{
    if (value.has_supportedBandCombinationList_v15g0) {
        Free_BandCombinationList_v15g0(value.supportedBandCombinationList_v15g0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_v16a0：ASN.1 RF-Parameters-v16a0；源文件第 19509 行；SEQUENCE。
// Encode_RF_Parameters_v16a0 只读不分配；Decode_RF_Parameters_v16a0 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_v16a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_v16a0(Encoder& enc, const RF_Parameters_v16a0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v16a0);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v16a0);
    if (value.has_supportedBandCombinationList_v16a0) {
        Encode_BandCombinationList_v16a0(enc, value.supportedBandCombinationList_v16a0);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v16a0) {
        Encode_BandCombinationList_UplinkTxSwitch_v16a0(enc, value.supportedBandCombinationList_UplinkTxSwitch_v16a0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_v16a0(Decoder& dec, RF_Parameters_v16a0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v16a0(dec, value.supportedBandCombinationList_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v16a0(dec, value.supportedBandCombinationList_UplinkTxSwitch_v16a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_v16a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_v16a0(RF_Parameters_v16a0& value)
{
    if (value.has_supportedBandCombinationList_v16a0) {
        Free_BandCombinationList_v16a0(value.supportedBandCombinationList_v16a0);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v16a0) {
        Free_BandCombinationList_UplinkTxSwitch_v16a0(value.supportedBandCombinationList_UplinkTxSwitch_v16a0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_Parameters_v16c0：ASN.1 RF-Parameters-v16c0；源文件第 19514 行；SEQUENCE。
// Encode_RF_Parameters_v16c0 只读不分配；Decode_RF_Parameters_v16c0 可能 malloc（失败时内部已释放并清零）；Free_RF_Parameters_v16c0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_Parameters_v16c0(Encoder& enc, const RF_Parameters_v16c0& value)
{
    (void)value;
enc.WriteConstrainedLength(value.supportedBandListNR_v16c0_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.supportedBandListNR_v16c0_count; ++i) {
    Encode_BandNR_v16c0(enc, value.supportedBandListNR_v16c0_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_RF_Parameters_v16c0(Decoder& dec, RF_Parameters_v16c0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.supportedBandListNR_v16c0_count)) { goto fail; }
if (value.supportedBandListNR_v16c0_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.supportedBandListNR_v16c0_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.supportedBandListNR_v16c0_count > 0u) {
    value.supportedBandListNR_v16c0_items = (BandNR_v16c0*)std::malloc((std::size_t)value.supportedBandListNR_v16c0_count * sizeof(BandNR_v16c0));
    if (value.supportedBandListNR_v16c0_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.supportedBandListNR_v16c0_items, 0, (std::size_t)value.supportedBandListNR_v16c0_count * sizeof(BandNR_v16c0));
}
for (std::uint32_t i = 0; i < value.supportedBandListNR_v16c0_count; ++i) {
    if (Decode_BandNR_v16c0(dec, value.supportedBandListNR_v16c0_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_Parameters_v16c0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_Parameters_v16c0(RF_Parameters_v16c0& value)
{
    if (value.supportedBandListNR_v16c0_items != nullptr) {
        for (std::uint32_t i = 0; i < value.supportedBandListNR_v16c0_count; ++i) {
            Free_BandNR_v16c0(value.supportedBandListNR_v16c0_items[i]);
        }
        std::free(value.supportedBandListNR_v16c0_items);
        value.supportedBandListNR_v16c0_items = nullptr;
    }
    value.supportedBandListNR_v16c0_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup1：ASN.1 BandNR_ExtGroup1；源文件第 19555 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup1 只读不分配；Decode_BandNR_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup1(Encoder& enc, const BandNR_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_maxUplinkDutyCycle_PC2_FR1);
    if (value.has_maxUplinkDutyCycle_PC2_FR1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_PC2_FR1), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup1(Decoder& dec, BandNR_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxUplinkDutyCycle_PC2_FR1 = (BandNR_ExtGroup1_MaxUplinkDutyCycle_PC2_FR1)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup1(BandNR_ExtGroup1& value)
{
    if (value.has_maxUplinkDutyCycle_PC2_FR1) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup2：ASN.1 BandNR_ExtGroup2；源文件第 19558 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup2 只读不分配；Decode_BandNR_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup2(Encoder& enc, const BandNR_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_pucch_SpatialRelInfoMAC_CE);
    enc.WriteBit(value.has_powerBoosting_pi2BPSK);
    if (value.has_pucch_SpatialRelInfoMAC_CE) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_SpatialRelInfoMAC_CE), 0, 0);
    }
    if (value.has_powerBoosting_pi2BPSK) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerBoosting_pi2BPSK), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup2(Decoder& dec, BandNR_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.pucch_SpatialRelInfoMAC_CE = (BandNR_ExtGroup2_Pucch_SpatialRelInfoMAC_CE)0;
    }
    if (present_1) {
        value.powerBoosting_pi2BPSK = (BandNR_ExtGroup2_PowerBoosting_pi2BPSK)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup2(BandNR_ExtGroup2& value)
{
    if (value.has_pucch_SpatialRelInfoMAC_CE) {
    }
    if (value.has_powerBoosting_pi2BPSK) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup3：ASN.1 BandNR_ExtGroup3；源文件第 19562 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup3 只读不分配；Decode_BandNR_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup3(Encoder& enc, const BandNR_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_maxUplinkDutyCycle_FR2);
    if (value.has_maxUplinkDutyCycle_FR2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_FR2), 0, 10);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup3(Decoder& dec, BandNR_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maxUplinkDutyCycle_FR2 = (BandNR_ExtGroup3_MaxUplinkDutyCycle_FR2)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup3(BandNR_ExtGroup3& value)
{
    if (value.has_maxUplinkDutyCycle_FR2) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1：ASN.1 channelBWs-DL-v1590/fr1；源文件第 19567 行；SEQUENCE。
// Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1 只读不分配；Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(Encoder& enc, const BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        enc.WriteFixedBitString(value.scs_15kHz.bytes, value.scs_15kHz.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz) {
        enc.WriteFixedBitString(value.scs_30kHz.bytes, value.scs_30kHz.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(Decoder& dec, BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1& value)
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
        value.scs_15kHz.bytes = string_bytes;
        value.scs_15kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz.bytes = string_bytes;
        value.scs_30kHz.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1& value)
{
    if (value.has_scs_15kHz) {
        std::free(value.scs_15kHz.bytes);
        value.scs_15kHz.bytes = nullptr;
        value.scs_15kHz.bitLength = 0;
    }
    if (value.has_scs_30kHz) {
        std::free(value.scs_30kHz.bytes);
        value.scs_30kHz.bytes = nullptr;
        value.scs_30kHz.bitLength = 0;
    }
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2：ASN.1 channelBWs-DL-v1590/fr2；源文件第 19572 行；SEQUENCE。
// Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2 只读不分配；Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(Encoder& enc, const BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 8, 8);
    }
    if (value.has_scs_120kHz) {
        enc.WriteFixedBitString(value.scs_120kHz.bytes, value.scs_120kHz.bitLength, 8, 8);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(Decoder& dec, BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.scs_120kHz.bytes = string_bytes;
        value.scs_120kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2& value)
{
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    if (value.has_scs_120kHz) {
        std::free(value.scs_120kHz.bytes);
        value.scs_120kHz.bytes = nullptr;
        value.scs_120kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4_ChannelBWs_DL_v1590：ASN.1 channelBWs-DL-v1590；源文件第 19566 行；CHOICE。
// Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590 只读不分配；Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590(Encoder& enc, const BandNR_ExtGroup4_ChannelBWs_DL_v1590& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr1:
        Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(enc, value.u.fr1);
        break;
    case BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr2:
        Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(enc, value.u.fr2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590(Decoder& dec, BandNR_ExtGroup4_ChannelBWs_DL_v1590& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag)root_index;
    switch (value.tag) {
    case BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr1: {
        if (Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(dec, value.u.fr1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr2: {
        if (Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(dec, value.u.fr2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590(BandNR_ExtGroup4_ChannelBWs_DL_v1590& value)
{
    switch (value.tag) {
    case BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr1:
        Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr1(value.u.fr1);
        break;
    case BandNR_ExtGroup4_ChannelBWs_DL_v1590_Tag_fr2:
        Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590_Fr2(value.u.fr2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1：ASN.1 channelBWs-UL-v1590/fr1；源文件第 19578 行；SEQUENCE。
// Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1 只读不分配；Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(Encoder& enc, const BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        enc.WriteFixedBitString(value.scs_15kHz.bytes, value.scs_15kHz.bitLength, 16, 16);
    }
    if (value.has_scs_30kHz) {
        enc.WriteFixedBitString(value.scs_30kHz.bytes, value.scs_30kHz.bitLength, 16, 16);
    }
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 16, 16);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(Decoder& dec, BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1& value)
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
        value.scs_15kHz.bytes = string_bytes;
        value.scs_15kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_30kHz.bytes = string_bytes;
        value.scs_30kHz.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1& value)
{
    if (value.has_scs_15kHz) {
        std::free(value.scs_15kHz.bytes);
        value.scs_15kHz.bytes = nullptr;
        value.scs_15kHz.bitLength = 0;
    }
    if (value.has_scs_30kHz) {
        std::free(value.scs_30kHz.bytes);
        value.scs_30kHz.bytes = nullptr;
        value.scs_30kHz.bitLength = 0;
    }
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2：ASN.1 channelBWs-UL-v1590/fr2；源文件第 19583 行；SEQUENCE。
// Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2 只读不分配；Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(Encoder& enc, const BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 8, 8);
    }
    if (value.has_scs_120kHz) {
        enc.WriteFixedBitString(value.scs_120kHz.bytes, value.scs_120kHz.bitLength, 8, 8);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(Decoder& dec, BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.scs_120kHz.bytes = string_bytes;
        value.scs_120kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2& value)
{
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    if (value.has_scs_120kHz) {
        std::free(value.scs_120kHz.bytes);
        value.scs_120kHz.bytes = nullptr;
        value.scs_120kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4_ChannelBWs_UL_v1590：ASN.1 channelBWs-UL-v1590；源文件第 19577 行；CHOICE。
// Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590 只读不分配；Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590(Encoder& enc, const BandNR_ExtGroup4_ChannelBWs_UL_v1590& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr1:
        Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(enc, value.u.fr1);
        break;
    case BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr2:
        Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(enc, value.u.fr2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590(Decoder& dec, BandNR_ExtGroup4_ChannelBWs_UL_v1590& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag)root_index;
    switch (value.tag) {
    case BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr1: {
        if (Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(dec, value.u.fr1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr2: {
        if (Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(dec, value.u.fr2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590(BandNR_ExtGroup4_ChannelBWs_UL_v1590& value)
{
    switch (value.tag) {
    case BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr1:
        Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr1(value.u.fr1);
        break;
    case BandNR_ExtGroup4_ChannelBWs_UL_v1590_Tag_fr2:
        Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590_Fr2(value.u.fr2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup4：ASN.1 BandNR_ExtGroup4；源文件第 19565 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup4 只读不分配；Decode_BandNR_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup4(Encoder& enc, const BandNR_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_channelBWs_DL_v1590);
    enc.WriteBit(value.has_channelBWs_UL_v1590);
    if (value.has_channelBWs_DL_v1590) {
        Encode_BandNR_ExtGroup4_ChannelBWs_DL_v1590(enc, value.channelBWs_DL_v1590);
    }
    if (value.has_channelBWs_UL_v1590) {
        Encode_BandNR_ExtGroup4_ChannelBWs_UL_v1590(enc, value.channelBWs_UL_v1590);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup4(Decoder& dec, BandNR_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandNR_ExtGroup4_ChannelBWs_DL_v1590(dec, value.channelBWs_DL_v1590) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandNR_ExtGroup4_ChannelBWs_UL_v1590(dec, value.channelBWs_UL_v1590) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup4(BandNR_ExtGroup4& value)
{
    if (value.has_channelBWs_DL_v1590) {
        Free_BandNR_ExtGroup4_ChannelBWs_DL_v1590(value.channelBWs_DL_v1590);
    }
    if (value.has_channelBWs_UL_v1590) {
        Free_BandNR_ExtGroup4_ChannelBWs_UL_v1590(value.channelBWs_UL_v1590);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup5：ASN.1 BandNR_ExtGroup5；源文件第 19589 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup5 只读不分配；Decode_BandNR_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup5(Encoder& enc, const BandNR_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_asymmetricBandwidthCombinationSet);
    if (value.has_asymmetricBandwidthCombinationSet) {
        enc.WriteConstrainedBitString(value.asymmetricBandwidthCombinationSet.bytes, value.asymmetricBandwidthCombinationSet.bitLength, 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup5(Decoder& dec, BandNR_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadConstrainedBitString(string_bytes, string_length, 1, 32)) { goto fail; }
        value.asymmetricBandwidthCombinationSet.bytes = string_bytes;
        value.asymmetricBandwidthCombinationSet.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup5(BandNR_ExtGroup5& value)
{
    if (value.has_asymmetricBandwidthCombinationSet) {
        std::free(value.asymmetricBandwidthCombinationSet.bytes);
        value.asymmetricBandwidthCombinationSet.bytes = nullptr;
        value.asymmetricBandwidthCombinationSet.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SharedSpectrumChAccessParamsPerBand_r16：ASN.1 SharedSpectrumChAccessParamsPerBand-r16；源文件第 20324 行；SEQUENCE。
// Encode_SharedSpectrumChAccessParamsPerBand_r16 只读不分配；Decode_SharedSpectrumChAccessParamsPerBand_r16 可能 malloc（失败时内部已释放并清零）；Free_SharedSpectrumChAccessParamsPerBand_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SharedSpectrumChAccessParamsPerBand_r16(Encoder& enc, const SharedSpectrumChAccessParamsPerBand_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_DynamicChAccess_r16);
    enc.WriteBit(value.has_ul_Semi_StaticChAccess_r16);
    enc.WriteBit(value.has_ssb_RRM_DynamicChAccess_r16);
    enc.WriteBit(value.has_ssb_RRM_Semi_StaticChAccess_r16);
    enc.WriteBit(value.has_mib_Acquisition_r16);
    enc.WriteBit(value.has_ssb_RLM_DynamicChAccess_r16);
    enc.WriteBit(value.has_ssb_RLM_Semi_StaticChAccess_r16);
    enc.WriteBit(value.has_sib1_Acquisition_r16);
    enc.WriteBit(value.has_extRA_ResponseWindow_r16);
    enc.WriteBit(value.has_ssb_BFD_CBD_dynamicChannelAccess_r16);
    enc.WriteBit(value.has_ssb_BFD_CBD_semi_staticChannelAccess_r16);
    enc.WriteBit(value.has_csi_RS_BFD_CBD_r16);
    enc.WriteBit(value.has_ul_ChannelBW_SCell_10mhz_r16);
    enc.WriteBit(value.has_rssi_ChannelOccupancyReporting_r16);
    enc.WriteBit(value.has_srs_StartAnyOFDM_Symbol_r16);
    enc.WriteBit(value.has_searchSpaceFreqMonitorLocation_r16);
    enc.WriteBit(value.has_coreset_RB_Offset_r16);
    enc.WriteBit(value.has_cgi_Acquisition_r16);
    enc.WriteBit(value.has_configuredUL_Tx_r16);
    enc.WriteBit(value.has_prach_Wideband_r16);
    enc.WriteBit(value.has_dci_AvailableRB_Set_r16);
    enc.WriteBit(value.has_dci_ChOccupancyDuration_r16);
    enc.WriteBit(value.has_typeB_PDSCH_length_r16);
    enc.WriteBit(value.has_searchSpaceSwitchWithDCI_r16);
    enc.WriteBit(value.has_searchSpaceSwitchWithoutDCI_r16);
    enc.WriteBit(value.has_searchSpaceSwitchCapability2_r16);
    enc.WriteBit(value.has_non_numericalPDSCH_HARQ_timing_r16);
    enc.WriteBit(value.has_enhancedDynamicHARQ_codebook_r16);
    enc.WriteBit(value.has_oneShotHARQ_feedback_r16);
    enc.WriteBit(value.has_multiPUSCH_UL_grant_r16);
    enc.WriteBit(value.has_csi_RS_RLM_r16);
    enc.WriteBit(value.has_dummy);
    enc.WriteBit(value.has_periodicAndSemi_PersistentCSI_RS_r16);
    enc.WriteBit(value.has_pusch_PRB_interlace_r16);
    enc.WriteBit(value.has_pucch_F0_F1_PRB_Interlace_r16);
    enc.WriteBit(value.has_occ_PRB_PF2_PF3_r16);
    enc.WriteBit(value.has_extCP_rangeCG_PUSCH_r16);
    enc.WriteBit(value.has_configuredGrantWithReTx_r16);
    enc.WriteBit(value.has_ed_Threshold_r16);
    enc.WriteBit(value.has_ul_DL_COT_Sharing_r16);
    enc.WriteBit(value.has_mux_CG_UCI_HARQ_ACK_r16);
    enc.WriteBit(value.has_cg_resourceConfig_r16);
    if (value.has_ul_DynamicChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_DynamicChAccess_r16), 0, 0);
    }
    if (value.has_ul_Semi_StaticChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_Semi_StaticChAccess_r16), 0, 0);
    }
    if (value.has_ssb_RRM_DynamicChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RRM_DynamicChAccess_r16), 0, 0);
    }
    if (value.has_ssb_RRM_Semi_StaticChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RRM_Semi_StaticChAccess_r16), 0, 0);
    }
    if (value.has_mib_Acquisition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mib_Acquisition_r16), 0, 0);
    }
    if (value.has_ssb_RLM_DynamicChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RLM_DynamicChAccess_r16), 0, 0);
    }
    if (value.has_ssb_RLM_Semi_StaticChAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RLM_Semi_StaticChAccess_r16), 0, 0);
    }
    if (value.has_sib1_Acquisition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sib1_Acquisition_r16), 0, 0);
    }
    if (value.has_extRA_ResponseWindow_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extRA_ResponseWindow_r16), 0, 0);
    }
    if (value.has_ssb_BFD_CBD_dynamicChannelAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_BFD_CBD_dynamicChannelAccess_r16), 0, 0);
    }
    if (value.has_ssb_BFD_CBD_semi_staticChannelAccess_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_BFD_CBD_semi_staticChannelAccess_r16), 0, 0);
    }
    if (value.has_csi_RS_BFD_CBD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_BFD_CBD_r16), 0, 0);
    }
    if (value.has_ul_ChannelBW_SCell_10mhz_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_ChannelBW_SCell_10mhz_r16), 0, 0);
    }
    if (value.has_rssi_ChannelOccupancyReporting_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rssi_ChannelOccupancyReporting_r16), 0, 0);
    }
    if (value.has_srs_StartAnyOFDM_Symbol_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_StartAnyOFDM_Symbol_r16), 0, 0);
    }
    if (value.has_searchSpaceFreqMonitorLocation_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceFreqMonitorLocation_r16), 1, 5);
    }
    if (value.has_coreset_RB_Offset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.coreset_RB_Offset_r16), 0, 0);
    }
    if (value.has_cgi_Acquisition_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cgi_Acquisition_r16), 0, 0);
    }
    if (value.has_configuredUL_Tx_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_Tx_r16), 0, 0);
    }
    if (value.has_prach_Wideband_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_Wideband_r16), 0, 0);
    }
    if (value.has_dci_AvailableRB_Set_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_AvailableRB_Set_r16), 0, 0);
    }
    if (value.has_dci_ChOccupancyDuration_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dci_ChOccupancyDuration_r16), 0, 0);
    }
    if (value.has_typeB_PDSCH_length_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.typeB_PDSCH_length_r16), 0, 0);
    }
    if (value.has_searchSpaceSwitchWithDCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchWithDCI_r16), 0, 0);
    }
    if (value.has_searchSpaceSwitchWithoutDCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchWithoutDCI_r16), 0, 0);
    }
    if (value.has_searchSpaceSwitchCapability2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSwitchCapability2_r16), 0, 0);
    }
    if (value.has_non_numericalPDSCH_HARQ_timing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_numericalPDSCH_HARQ_timing_r16), 0, 0);
    }
    if (value.has_enhancedDynamicHARQ_codebook_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedDynamicHARQ_codebook_r16), 0, 0);
    }
    if (value.has_oneShotHARQ_feedback_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneShotHARQ_feedback_r16), 0, 0);
    }
    if (value.has_multiPUSCH_UL_grant_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_UL_grant_r16), 0, 0);
    }
    if (value.has_csi_RS_RLM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_RLM_r16), 0, 0);
    }
    if (value.has_dummy) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dummy), 0, 0);
    }
    if (value.has_periodicAndSemi_PersistentCSI_RS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.periodicAndSemi_PersistentCSI_RS_r16), 0, 0);
    }
    if (value.has_pusch_PRB_interlace_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_PRB_interlace_r16), 0, 0);
    }
    if (value.has_pucch_F0_F1_PRB_Interlace_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_F0_F1_PRB_Interlace_r16), 0, 0);
    }
    if (value.has_occ_PRB_PF2_PF3_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.occ_PRB_PF2_PF3_r16), 0, 0);
    }
    if (value.has_extCP_rangeCG_PUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extCP_rangeCG_PUSCH_r16), 0, 0);
    }
    if (value.has_configuredGrantWithReTx_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredGrantWithReTx_r16), 0, 0);
    }
    if (value.has_ed_Threshold_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ed_Threshold_r16), 0, 0);
    }
    if (value.has_ul_DL_COT_Sharing_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_DL_COT_Sharing_r16), 0, 0);
    }
    if (value.has_mux_CG_UCI_HARQ_ACK_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_CG_UCI_HARQ_ACK_r16), 0, 0);
    }
    if (value.has_cg_resourceConfig_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_resourceConfig_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SharedSpectrumChAccessParamsPerBand_r16(Decoder& dec, SharedSpectrumChAccessParamsPerBand_r16& value)
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
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    bool present_34 = false;
    bool present_35 = false;
    bool present_36 = false;
    bool present_37 = false;
    bool present_38 = false;
    bool present_39 = false;
    bool present_40 = false;
    bool present_41 = false;
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
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (!dec.ReadBit(present_34)) { goto fail; }
    if (!dec.ReadBit(present_35)) { goto fail; }
    if (!dec.ReadBit(present_36)) { goto fail; }
    if (!dec.ReadBit(present_37)) { goto fail; }
    if (!dec.ReadBit(present_38)) { goto fail; }
    if (!dec.ReadBit(present_39)) { goto fail; }
    if (!dec.ReadBit(present_40)) { goto fail; }
    if (!dec.ReadBit(present_41)) { goto fail; }
    if (present_0) {
        value.ul_DynamicChAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ul_DynamicChAccess_r16)0;
    }
    if (present_1) {
        value.ul_Semi_StaticChAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ul_Semi_StaticChAccess_r16)0;
    }
    if (present_2) {
        value.ssb_RRM_DynamicChAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_DynamicChAccess_r16)0;
    }
    if (present_3) {
        value.ssb_RRM_Semi_StaticChAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ssb_RRM_Semi_StaticChAccess_r16)0;
    }
    if (present_4) {
        value.mib_Acquisition_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Mib_Acquisition_r16)0;
    }
    if (present_5) {
        value.ssb_RLM_DynamicChAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_DynamicChAccess_r16)0;
    }
    if (present_6) {
        value.ssb_RLM_Semi_StaticChAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ssb_RLM_Semi_StaticChAccess_r16)0;
    }
    if (present_7) {
        value.sib1_Acquisition_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Sib1_Acquisition_r16)0;
    }
    if (present_8) {
        value.extRA_ResponseWindow_r16 = (SharedSpectrumChAccessParamsPerBand_r16_ExtRA_ResponseWindow_r16)0;
    }
    if (present_9) {
        value.ssb_BFD_CBD_dynamicChannelAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_dynamicChannelAccess_r16)0;
    }
    if (present_10) {
        value.ssb_BFD_CBD_semi_staticChannelAccess_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ssb_BFD_CBD_semi_staticChannelAccess_r16)0;
    }
    if (present_11) {
        value.csi_RS_BFD_CBD_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_BFD_CBD_r16)0;
    }
    if (present_12) {
        value.ul_ChannelBW_SCell_10mhz_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ul_ChannelBW_SCell_10mhz_r16)0;
    }
    if (present_13) {
        value.rssi_ChannelOccupancyReporting_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Rssi_ChannelOccupancyReporting_r16)0;
    }
    if (present_14) {
        value.srs_StartAnyOFDM_Symbol_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Srs_StartAnyOFDM_Symbol_r16)0;
    }
    if (present_15) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 5, tmp_value)) { goto fail; }
        value.searchSpaceFreqMonitorLocation_r16 = (int64_t)tmp_value;
    }
    if (present_16) {
        value.coreset_RB_Offset_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Coreset_RB_Offset_r16)0;
    }
    if (present_17) {
        value.cgi_Acquisition_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Cgi_Acquisition_r16)0;
    }
    if (present_18) {
        value.configuredUL_Tx_r16 = (SharedSpectrumChAccessParamsPerBand_r16_ConfiguredUL_Tx_r16)0;
    }
    if (present_19) {
        value.prach_Wideband_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Prach_Wideband_r16)0;
    }
    if (present_20) {
        value.dci_AvailableRB_Set_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Dci_AvailableRB_Set_r16)0;
    }
    if (present_21) {
        value.dci_ChOccupancyDuration_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Dci_ChOccupancyDuration_r16)0;
    }
    if (present_22) {
        value.typeB_PDSCH_length_r16 = (SharedSpectrumChAccessParamsPerBand_r16_TypeB_PDSCH_length_r16)0;
    }
    if (present_23) {
        value.searchSpaceSwitchWithDCI_r16 = (SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithDCI_r16)0;
    }
    if (present_24) {
        value.searchSpaceSwitchWithoutDCI_r16 = (SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchWithoutDCI_r16)0;
    }
    if (present_25) {
        value.searchSpaceSwitchCapability2_r16 = (SharedSpectrumChAccessParamsPerBand_r16_SearchSpaceSwitchCapability2_r16)0;
    }
    if (present_26) {
        value.non_numericalPDSCH_HARQ_timing_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Non_numericalPDSCH_HARQ_timing_r16)0;
    }
    if (present_27) {
        value.enhancedDynamicHARQ_codebook_r16 = (SharedSpectrumChAccessParamsPerBand_r16_EnhancedDynamicHARQ_codebook_r16)0;
    }
    if (present_28) {
        value.oneShotHARQ_feedback_r16 = (SharedSpectrumChAccessParamsPerBand_r16_OneShotHARQ_feedback_r16)0;
    }
    if (present_29) {
        value.multiPUSCH_UL_grant_r16 = (SharedSpectrumChAccessParamsPerBand_r16_MultiPUSCH_UL_grant_r16)0;
    }
    if (present_30) {
        value.csi_RS_RLM_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Csi_RS_RLM_r16)0;
    }
    if (present_31) {
        value.dummy = (SharedSpectrumChAccessParamsPerBand_r16_Dummy)0;
    }
    if (present_32) {
        value.periodicAndSemi_PersistentCSI_RS_r16 = (SharedSpectrumChAccessParamsPerBand_r16_PeriodicAndSemi_PersistentCSI_RS_r16)0;
    }
    if (present_33) {
        value.pusch_PRB_interlace_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Pusch_PRB_interlace_r16)0;
    }
    if (present_34) {
        value.pucch_F0_F1_PRB_Interlace_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Pucch_F0_F1_PRB_Interlace_r16)0;
    }
    if (present_35) {
        value.occ_PRB_PF2_PF3_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Occ_PRB_PF2_PF3_r16)0;
    }
    if (present_36) {
        value.extCP_rangeCG_PUSCH_r16 = (SharedSpectrumChAccessParamsPerBand_r16_ExtCP_rangeCG_PUSCH_r16)0;
    }
    if (present_37) {
        value.configuredGrantWithReTx_r16 = (SharedSpectrumChAccessParamsPerBand_r16_ConfiguredGrantWithReTx_r16)0;
    }
    if (present_38) {
        value.ed_Threshold_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ed_Threshold_r16)0;
    }
    if (present_39) {
        value.ul_DL_COT_Sharing_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Ul_DL_COT_Sharing_r16)0;
    }
    if (present_40) {
        value.mux_CG_UCI_HARQ_ACK_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Mux_CG_UCI_HARQ_ACK_r16)0;
    }
    if (present_41) {
        value.cg_resourceConfig_r16 = (SharedSpectrumChAccessParamsPerBand_r16_Cg_resourceConfig_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SharedSpectrumChAccessParamsPerBand_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SharedSpectrumChAccessParamsPerBand_r16(SharedSpectrumChAccessParamsPerBand_r16& value)
{
    if (value.has_ul_DynamicChAccess_r16) {
    }
    if (value.has_ul_Semi_StaticChAccess_r16) {
    }
    if (value.has_ssb_RRM_DynamicChAccess_r16) {
    }
    if (value.has_ssb_RRM_Semi_StaticChAccess_r16) {
    }
    if (value.has_mib_Acquisition_r16) {
    }
    if (value.has_ssb_RLM_DynamicChAccess_r16) {
    }
    if (value.has_ssb_RLM_Semi_StaticChAccess_r16) {
    }
    if (value.has_sib1_Acquisition_r16) {
    }
    if (value.has_extRA_ResponseWindow_r16) {
    }
    if (value.has_ssb_BFD_CBD_dynamicChannelAccess_r16) {
    }
    if (value.has_ssb_BFD_CBD_semi_staticChannelAccess_r16) {
    }
    if (value.has_csi_RS_BFD_CBD_r16) {
    }
    if (value.has_ul_ChannelBW_SCell_10mhz_r16) {
    }
    if (value.has_rssi_ChannelOccupancyReporting_r16) {
    }
    if (value.has_srs_StartAnyOFDM_Symbol_r16) {
    }
    if (value.has_searchSpaceFreqMonitorLocation_r16) {
    }
    if (value.has_coreset_RB_Offset_r16) {
    }
    if (value.has_cgi_Acquisition_r16) {
    }
    if (value.has_configuredUL_Tx_r16) {
    }
    if (value.has_prach_Wideband_r16) {
    }
    if (value.has_dci_AvailableRB_Set_r16) {
    }
    if (value.has_dci_ChOccupancyDuration_r16) {
    }
    if (value.has_typeB_PDSCH_length_r16) {
    }
    if (value.has_searchSpaceSwitchWithDCI_r16) {
    }
    if (value.has_searchSpaceSwitchWithoutDCI_r16) {
    }
    if (value.has_searchSpaceSwitchCapability2_r16) {
    }
    if (value.has_non_numericalPDSCH_HARQ_timing_r16) {
    }
    if (value.has_enhancedDynamicHARQ_codebook_r16) {
    }
    if (value.has_oneShotHARQ_feedback_r16) {
    }
    if (value.has_multiPUSCH_UL_grant_r16) {
    }
    if (value.has_csi_RS_RLM_r16) {
    }
    if (value.has_dummy) {
    }
    if (value.has_periodicAndSemi_PersistentCSI_RS_r16) {
    }
    if (value.has_pusch_PRB_interlace_r16) {
    }
    if (value.has_pucch_F0_F1_PRB_Interlace_r16) {
    }
    if (value.has_occ_PRB_PF2_PF3_r16) {
    }
    if (value.has_extCP_rangeCG_PUSCH_r16) {
    }
    if (value.has_configuredGrantWithReTx_r16) {
    }
    if (value.has_ed_Threshold_r16) {
    }
    if (value.has_ul_DL_COT_Sharing_r16) {
    }
    if (value.has_mux_CG_UCI_HARQ_ACK_r16) {
    }
    if (value.has_cg_resourceConfig_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SpatialRelationsSRS_Pos_r16：ASN.1 SpatialRelationsSRS-Pos-r16；源文件第 20735 行；SEQUENCE。
// Encode_SpatialRelationsSRS_Pos_r16 只读不分配；Decode_SpatialRelationsSRS_Pos_r16 可能 malloc（失败时内部已释放并清零）；Free_SpatialRelationsSRS_Pos_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SpatialRelationsSRS_Pos_r16(Encoder& enc, const SpatialRelationsSRS_Pos_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_spatialRelation_SRS_PosBasedOnSSB_Serving_r16);
    enc.WriteBit(value.has_spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16);
    enc.WriteBit(value.has_spatialRelation_SRS_PosBasedOnPRS_Serving_r16);
    enc.WriteBit(value.has_spatialRelation_SRS_PosBasedOnSRS_r16);
    enc.WriteBit(value.has_spatialRelation_SRS_PosBasedOnSSB_Neigh_r16);
    enc.WriteBit(value.has_spatialRelation_SRS_PosBasedOnPRS_Neigh_r16);
    if (value.has_spatialRelation_SRS_PosBasedOnSSB_Serving_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelation_SRS_PosBasedOnSSB_Serving_r16), 0, 0);
    }
    if (value.has_spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16), 0, 0);
    }
    if (value.has_spatialRelation_SRS_PosBasedOnPRS_Serving_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelation_SRS_PosBasedOnPRS_Serving_r16), 0, 0);
    }
    if (value.has_spatialRelation_SRS_PosBasedOnSRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelation_SRS_PosBasedOnSRS_r16), 0, 0);
    }
    if (value.has_spatialRelation_SRS_PosBasedOnSSB_Neigh_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelation_SRS_PosBasedOnSSB_Neigh_r16), 0, 0);
    }
    if (value.has_spatialRelation_SRS_PosBasedOnPRS_Neigh_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spatialRelation_SRS_PosBasedOnPRS_Neigh_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SpatialRelationsSRS_Pos_r16(Decoder& dec, SpatialRelationsSRS_Pos_r16& value)
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
        value.spatialRelation_SRS_PosBasedOnSSB_Serving_r16 = (SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Serving_r16)0;
    }
    if (present_1) {
        value.spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16 = (SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16)0;
    }
    if (present_2) {
        value.spatialRelation_SRS_PosBasedOnPRS_Serving_r16 = (SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Serving_r16)0;
    }
    if (present_3) {
        value.spatialRelation_SRS_PosBasedOnSRS_r16 = (SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSRS_r16)0;
    }
    if (present_4) {
        value.spatialRelation_SRS_PosBasedOnSSB_Neigh_r16 = (SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnSSB_Neigh_r16)0;
    }
    if (present_5) {
        value.spatialRelation_SRS_PosBasedOnPRS_Neigh_r16 = (SpatialRelationsSRS_Pos_r16_SpatialRelation_SRS_PosBasedOnPRS_Neigh_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpatialRelationsSRS_Pos_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpatialRelationsSRS_Pos_r16(SpatialRelationsSRS_Pos_r16& value)
{
    if (value.has_spatialRelation_SRS_PosBasedOnSSB_Serving_r16) {
    }
    if (value.has_spatialRelation_SRS_PosBasedOnCSI_RS_Serving_r16) {
    }
    if (value.has_spatialRelation_SRS_PosBasedOnPRS_Serving_r16) {
    }
    if (value.has_spatialRelation_SRS_PosBasedOnSRS_r16) {
    }
    if (value.has_spatialRelation_SRS_PosBasedOnSSB_Neigh_r16) {
    }
    if (value.has_spatialRelation_SRS_PosBasedOnPRS_Neigh_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16：ASN.1 multipleRateMatchingEUTRA-CRS-r16；源文件第 19598 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16 只读不分配；Decode_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(Encoder& enc, const BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPatterns_r16), 2, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNon_OverlapPatterns_r16), 1, 3);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(Decoder& dec, BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 6, tmp_value)) { goto fail; }
        value.maxNumberPatterns_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.maxNumberNon_OverlapPatterns_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz：ASN.1 channelBW-DL-IAB-r16/fr1-100mhz；源文件第 19612 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz 只读不分配；Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(Encoder& enc, const BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 0);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 0);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(Decoder& dec, BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz& value)
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
        value.scs_15kHz = (BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_15kHz)0;
    }
    if (present_1) {
        value.scs_30kHz = (BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_30kHz)0;
    }
    if (present_2) {
        value.scs_60kHz = (BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz_Scs_60kHz)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz：ASN.1 channelBW-DL-IAB-r16/fr2-200mhz；源文件第 19617 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz 只读不分配；Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(Encoder& enc, const BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 0);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(Decoder& dec, BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.scs_60kHz = (BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_60kHz)0;
    }
    if (present_1) {
        value.scs_120kHz = (BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz_Scs_120kHz)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz& value)
{
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ChannelBW_DL_IAB_r16：ASN.1 channelBW-DL-IAB-r16；源文件第 19611 行；CHOICE。
// Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16 只读不分配；Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(Encoder& enc, const BandNR_ExtGroup6_ChannelBW_DL_IAB_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr1_100mhz:
        Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(enc, value.u.fr1_100mhz);
        break;
    case BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr2_200mhz:
        Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(enc, value.u.fr2_200mhz);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(Decoder& dec, BandNR_ExtGroup6_ChannelBW_DL_IAB_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag)root_index;
    switch (value.tag) {
    case BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr1_100mhz: {
        if (Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(dec, value.u.fr1_100mhz) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr2_200mhz: {
        if (Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(dec, value.u.fr2_200mhz) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(BandNR_ExtGroup6_ChannelBW_DL_IAB_r16& value)
{
    switch (value.tag) {
    case BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr1_100mhz:
        Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr1_100mhz(value.u.fr1_100mhz);
        break;
    case BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Tag_fr2_200mhz:
        Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16_Fr2_200mhz(value.u.fr2_200mhz);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz：ASN.1 channelBW-UL-IAB-r16/fr1-100mhz；源文件第 19623 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz 只读不分配；Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(Encoder& enc, const BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz), 0, 0);
    }
    if (value.has_scs_30kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz), 0, 0);
    }
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(Decoder& dec, BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz& value)
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
        value.scs_15kHz = (BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_15kHz)0;
    }
    if (present_1) {
        value.scs_30kHz = (BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_30kHz)0;
    }
    if (present_2) {
        value.scs_60kHz = (BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz_Scs_60kHz)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz& value)
{
    if (value.has_scs_15kHz) {
    }
    if (value.has_scs_30kHz) {
    }
    if (value.has_scs_60kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz：ASN.1 channelBW-UL-IAB-r16/fr2-200mhz；源文件第 19628 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz 只读不分配；Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(Encoder& enc, const BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz), 0, 0);
    }
    if (value.has_scs_120kHz) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(Decoder& dec, BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.scs_60kHz = (BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_60kHz)0;
    }
    if (present_1) {
        value.scs_120kHz = (BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz_Scs_120kHz)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz& value)
{
    if (value.has_scs_60kHz) {
    }
    if (value.has_scs_120kHz) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ChannelBW_UL_IAB_r16：ASN.1 channelBW-UL-IAB-r16；源文件第 19622 行；CHOICE。
// Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16 只读不分配；Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(Encoder& enc, const BandNR_ExtGroup6_ChannelBW_UL_IAB_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr1_100mhz:
        Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(enc, value.u.fr1_100mhz);
        break;
    case BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr2_200mhz:
        Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(enc, value.u.fr2_200mhz);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(Decoder& dec, BandNR_ExtGroup6_ChannelBW_UL_IAB_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag)root_index;
    switch (value.tag) {
    case BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr1_100mhz: {
        if (Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(dec, value.u.fr1_100mhz) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr2_200mhz: {
        if (Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(dec, value.u.fr2_200mhz) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(BandNR_ExtGroup6_ChannelBW_UL_IAB_r16& value)
{
    switch (value.tag) {
    case BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr1_100mhz:
        Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr1_100mhz(value.u.fr1_100mhz);
        break;
    case BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Tag_fr2_200mhz:
        Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16_Fr2_200mhz(value.u.fr2_200mhz);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_ActiveConfiguredGrant_r16：ASN.1 activeConfiguredGrant-r16；源文件第 19643 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_ActiveConfiguredGrant_r16 只读不分配；Decode_BandNR_ExtGroup6_ActiveConfiguredGrant_r16 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_ActiveConfiguredGrant_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(Encoder& enc, const BandNR_ExtGroup6_ActiveConfiguredGrant_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsPerBWP_r16), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsAllCC_r16), 2, 32);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(Decoder& dec, BandNR_ExtGroup6_ActiveConfiguredGrant_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberConfigsPerBWP_r16 = (BandNR_ExtGroup6_ActiveConfiguredGrant_r16_MaxNumberConfigsPerBWP_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.maxNumberConfigsAllCC_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(BandNR_ExtGroup6_ActiveConfiguredGrant_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6_Sps_r16：ASN.1 sps-r16；源文件第 19650 行；SEQUENCE。
// Encode_BandNR_ExtGroup6_Sps_r16 只读不分配；Decode_BandNR_ExtGroup6_Sps_r16 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6_Sps_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6_Sps_r16(Encoder& enc, const BandNR_ExtGroup6_Sps_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsPerBWP_r16), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsAllCC_r16), 2, 32);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6_Sps_r16(Decoder& dec, BandNR_ExtGroup6_Sps_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberConfigsPerBWP_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.maxNumberConfigsAllCC_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6_Sps_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6_Sps_r16(BandNR_ExtGroup6_Sps_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup6：ASN.1 BandNR_ExtGroup6；源文件第 19592 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup6 只读不分配；Decode_BandNR_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup6(Encoder& enc, const BandNR_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_sharedSpectrumChAccessParamsPerBand_r16);
    enc.WriteBit(value.has_cancelOverlappingPUSCH_r16);
    enc.WriteBit(value.has_multipleRateMatchingEUTRA_CRS_r16);
    enc.WriteBit(value.has_overlapRateMatchingEUTRA_CRS_r16);
    enc.WriteBit(value.has_pdsch_MappingTypeB_Alt_r16);
    enc.WriteBit(value.has_oneSlotPeriodicTRS_r16);
    enc.WriteBit(value.has_olpc_SRS_Pos_r16);
    enc.WriteBit(value.has_spatialRelationsSRS_Pos_r16);
    enc.WriteBit(value.has_simulSRS_MIMO_TransWithinBand_r16);
    enc.WriteBit(value.has_channelBW_DL_IAB_r16);
    enc.WriteBit(value.has_channelBW_UL_IAB_r16);
    enc.WriteBit(value.has_rasterShift7dot5_IAB_r16);
    enc.WriteBit(value.has_ue_PowerClass_v1610);
    enc.WriteBit(value.has_condHandover_r16);
    enc.WriteBit(value.has_condHandoverFailure_r16);
    enc.WriteBit(value.has_condHandoverTwoTriggerEvents_r16);
    enc.WriteBit(value.has_condPSCellChange_r16);
    enc.WriteBit(value.has_condPSCellChangeTwoTriggerEvents_r16);
    enc.WriteBit(value.has_mpr_PowerBoost_FR2_r16);
    enc.WriteBit(value.has_activeConfiguredGrant_r16);
    enc.WriteBit(value.has_jointReleaseConfiguredGrantType2_r16);
    enc.WriteBit(value.has_sps_r16);
    enc.WriteBit(value.has_jointReleaseSPS_r16);
    enc.WriteBit(value.has_simulSRS_TransWithinBand_r16);
    enc.WriteBit(value.has_trs_AdditionalBandwidth_r16);
    enc.WriteBit(value.has_handoverIntraF_IAB_r16);
    if (value.has_sharedSpectrumChAccessParamsPerBand_r16) {
        Encode_SharedSpectrumChAccessParamsPerBand_r16(enc, value.sharedSpectrumChAccessParamsPerBand_r16);
    }
    if (value.has_cancelOverlappingPUSCH_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cancelOverlappingPUSCH_r16), 0, 0);
    }
    if (value.has_multipleRateMatchingEUTRA_CRS_r16) {
        Encode_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(enc, value.multipleRateMatchingEUTRA_CRS_r16);
    }
    if (value.has_overlapRateMatchingEUTRA_CRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.overlapRateMatchingEUTRA_CRS_r16), 0, 0);
    }
    if (value.has_pdsch_MappingTypeB_Alt_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_MappingTypeB_Alt_r16), 0, 0);
    }
    if (value.has_oneSlotPeriodicTRS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneSlotPeriodicTRS_r16), 0, 0);
    }
    if (value.has_olpc_SRS_Pos_r16) {
        Encode_OLPC_SRS_Pos_r16(enc, value.olpc_SRS_Pos_r16);
    }
    if (value.has_spatialRelationsSRS_Pos_r16) {
        Encode_SpatialRelationsSRS_Pos_r16(enc, value.spatialRelationsSRS_Pos_r16);
    }
    if (value.has_simulSRS_MIMO_TransWithinBand_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simulSRS_MIMO_TransWithinBand_r16), 0, 0);
    }
    if (value.has_channelBW_DL_IAB_r16) {
        Encode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(enc, value.channelBW_DL_IAB_r16);
    }
    if (value.has_channelBW_UL_IAB_r16) {
        Encode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(enc, value.channelBW_UL_IAB_r16);
    }
    if (value.has_rasterShift7dot5_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rasterShift7dot5_IAB_r16), 0, 0);
    }
    if (value.has_ue_PowerClass_v1610) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_PowerClass_v1610), 0, 0);
    }
    if (value.has_condHandover_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandover_r16), 0, 0);
    }
    if (value.has_condHandoverFailure_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverFailure_r16), 0, 0);
    }
    if (value.has_condHandoverTwoTriggerEvents_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condHandoverTwoTriggerEvents_r16), 0, 0);
    }
    if (value.has_condPSCellChange_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condPSCellChange_r16), 0, 0);
    }
    if (value.has_condPSCellChangeTwoTriggerEvents_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.condPSCellChangeTwoTriggerEvents_r16), 0, 0);
    }
    if (value.has_mpr_PowerBoost_FR2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mpr_PowerBoost_FR2_r16), 0, 0);
    }
    if (value.has_activeConfiguredGrant_r16) {
        Encode_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(enc, value.activeConfiguredGrant_r16);
    }
    if (value.has_jointReleaseConfiguredGrantType2_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointReleaseConfiguredGrantType2_r16), 0, 0);
    }
    if (value.has_sps_r16) {
        Encode_BandNR_ExtGroup6_Sps_r16(enc, value.sps_r16);
    }
    if (value.has_jointReleaseSPS_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointReleaseSPS_r16), 0, 0);
    }
    if (value.has_simulSRS_TransWithinBand_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simulSRS_TransWithinBand_r16), 0, 0);
    }
    if (value.has_trs_AdditionalBandwidth_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.trs_AdditionalBandwidth_r16), 0, 1);
    }
    if (value.has_handoverIntraF_IAB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverIntraF_IAB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup6(Decoder& dec, BandNR_ExtGroup6& value)
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
    if (present_0) {
        if (Decode_SharedSpectrumChAccessParamsPerBand_r16(dec, value.sharedSpectrumChAccessParamsPerBand_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        value.cancelOverlappingPUSCH_r16 = (BandNR_ExtGroup6_CancelOverlappingPUSCH_r16)0;
    }
    if (present_2) {
        if (Decode_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(dec, value.multipleRateMatchingEUTRA_CRS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.overlapRateMatchingEUTRA_CRS_r16 = (BandNR_ExtGroup6_OverlapRateMatchingEUTRA_CRS_r16)0;
    }
    if (present_4) {
        value.pdsch_MappingTypeB_Alt_r16 = (BandNR_ExtGroup6_Pdsch_MappingTypeB_Alt_r16)0;
    }
    if (present_5) {
        value.oneSlotPeriodicTRS_r16 = (BandNR_ExtGroup6_OneSlotPeriodicTRS_r16)0;
    }
    if (present_6) {
        if (Decode_OLPC_SRS_Pos_r16(dec, value.olpc_SRS_Pos_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        if (Decode_SpatialRelationsSRS_Pos_r16(dec, value.spatialRelationsSRS_Pos_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_8) {
        value.simulSRS_MIMO_TransWithinBand_r16 = (BandNR_ExtGroup6_SimulSRS_MIMO_TransWithinBand_r16)0;
    }
    if (present_9) {
        if (Decode_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(dec, value.channelBW_DL_IAB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(dec, value.channelBW_UL_IAB_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        value.rasterShift7dot5_IAB_r16 = (BandNR_ExtGroup6_RasterShift7dot5_IAB_r16)0;
    }
    if (present_12) {
        value.ue_PowerClass_v1610 = (BandNR_ExtGroup6_Ue_PowerClass_v1610)0;
    }
    if (present_13) {
        value.condHandover_r16 = (BandNR_ExtGroup6_CondHandover_r16)0;
    }
    if (present_14) {
        value.condHandoverFailure_r16 = (BandNR_ExtGroup6_CondHandoverFailure_r16)0;
    }
    if (present_15) {
        value.condHandoverTwoTriggerEvents_r16 = (BandNR_ExtGroup6_CondHandoverTwoTriggerEvents_r16)0;
    }
    if (present_16) {
        value.condPSCellChange_r16 = (BandNR_ExtGroup6_CondPSCellChange_r16)0;
    }
    if (present_17) {
        value.condPSCellChangeTwoTriggerEvents_r16 = (BandNR_ExtGroup6_CondPSCellChangeTwoTriggerEvents_r16)0;
    }
    if (present_18) {
        value.mpr_PowerBoost_FR2_r16 = (BandNR_ExtGroup6_Mpr_PowerBoost_FR2_r16)0;
    }
    if (present_19) {
        if (Decode_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(dec, value.activeConfiguredGrant_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        value.jointReleaseConfiguredGrantType2_r16 = (BandNR_ExtGroup6_JointReleaseConfiguredGrantType2_r16)0;
    }
    if (present_21) {
        if (Decode_BandNR_ExtGroup6_Sps_r16(dec, value.sps_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_22) {
        value.jointReleaseSPS_r16 = (BandNR_ExtGroup6_JointReleaseSPS_r16)0;
    }
    if (present_23) {
        value.simulSRS_TransWithinBand_r16 = (BandNR_ExtGroup6_SimulSRS_TransWithinBand_r16)0;
    }
    if (present_24) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.trs_AdditionalBandwidth_r16 = (BandNR_ExtGroup6_Trs_AdditionalBandwidth_r16)tmp_value;
    }
    if (present_25) {
        value.handoverIntraF_IAB_r16 = (BandNR_ExtGroup6_HandoverIntraF_IAB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup6(BandNR_ExtGroup6& value)
{
    if (value.has_sharedSpectrumChAccessParamsPerBand_r16) {
        Free_SharedSpectrumChAccessParamsPerBand_r16(value.sharedSpectrumChAccessParamsPerBand_r16);
    }
    if (value.has_cancelOverlappingPUSCH_r16) {
    }
    if (value.has_multipleRateMatchingEUTRA_CRS_r16) {
        Free_BandNR_ExtGroup6_MultipleRateMatchingEUTRA_CRS_r16(value.multipleRateMatchingEUTRA_CRS_r16);
    }
    if (value.has_overlapRateMatchingEUTRA_CRS_r16) {
    }
    if (value.has_pdsch_MappingTypeB_Alt_r16) {
    }
    if (value.has_oneSlotPeriodicTRS_r16) {
    }
    if (value.has_olpc_SRS_Pos_r16) {
        Free_OLPC_SRS_Pos_r16(value.olpc_SRS_Pos_r16);
    }
    if (value.has_spatialRelationsSRS_Pos_r16) {
        Free_SpatialRelationsSRS_Pos_r16(value.spatialRelationsSRS_Pos_r16);
    }
    if (value.has_simulSRS_MIMO_TransWithinBand_r16) {
    }
    if (value.has_channelBW_DL_IAB_r16) {
        Free_BandNR_ExtGroup6_ChannelBW_DL_IAB_r16(value.channelBW_DL_IAB_r16);
    }
    if (value.has_channelBW_UL_IAB_r16) {
        Free_BandNR_ExtGroup6_ChannelBW_UL_IAB_r16(value.channelBW_UL_IAB_r16);
    }
    if (value.has_rasterShift7dot5_IAB_r16) {
    }
    if (value.has_ue_PowerClass_v1610) {
    }
    if (value.has_condHandover_r16) {
    }
    if (value.has_condHandoverFailure_r16) {
    }
    if (value.has_condHandoverTwoTriggerEvents_r16) {
    }
    if (value.has_condPSCellChange_r16) {
    }
    if (value.has_condPSCellChangeTwoTriggerEvents_r16) {
    }
    if (value.has_mpr_PowerBoost_FR2_r16) {
    }
    if (value.has_activeConfiguredGrant_r16) {
        Free_BandNR_ExtGroup6_ActiveConfiguredGrant_r16(value.activeConfiguredGrant_r16);
    }
    if (value.has_jointReleaseConfiguredGrantType2_r16) {
    }
    if (value.has_sps_r16) {
        Free_BandNR_ExtGroup6_Sps_r16(value.sps_r16);
    }
    if (value.has_jointReleaseSPS_r16) {
    }
    if (value.has_simulSRS_TransWithinBand_r16) {
    }
    if (value.has_trs_AdditionalBandwidth_r16) {
    }
    if (value.has_handoverIntraF_IAB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SharedSpectrumChAccessParamsPerBand_v1630：ASN.1 SharedSpectrumChAccessParamsPerBand-v1630；源文件第 20411 行；SEQUENCE。
// Encode_SharedSpectrumChAccessParamsPerBand_v1630 只读不分配；Decode_SharedSpectrumChAccessParamsPerBand_v1630 可能 malloc（失败时内部已释放并清零）；Free_SharedSpectrumChAccessParamsPerBand_v1630 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SharedSpectrumChAccessParamsPerBand_v1630(Encoder& enc, const SharedSpectrumChAccessParamsPerBand_v1630& value)
{
    (void)value;
    enc.WriteBit(value.has_dl_ReceptionIntraCellGuardband_r16);
    enc.WriteBit(value.has_dl_ReceptionLBT_subsetRB_r16);
    if (value.has_dl_ReceptionIntraCellGuardband_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_ReceptionIntraCellGuardband_r16), 0, 0);
    }
    if (value.has_dl_ReceptionLBT_subsetRB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_ReceptionLBT_subsetRB_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SharedSpectrumChAccessParamsPerBand_v1630(Decoder& dec, SharedSpectrumChAccessParamsPerBand_v1630& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.dl_ReceptionIntraCellGuardband_r16 = (SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionIntraCellGuardband_r16)0;
    }
    if (present_1) {
        value.dl_ReceptionLBT_subsetRB_r16 = (SharedSpectrumChAccessParamsPerBand_v1630_Dl_ReceptionLBT_subsetRB_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SharedSpectrumChAccessParamsPerBand_v1630(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SharedSpectrumChAccessParamsPerBand_v1630(SharedSpectrumChAccessParamsPerBand_v1630& value)
{
    if (value.has_dl_ReceptionIntraCellGuardband_r16) {
    }
    if (value.has_dl_ReceptionLBT_subsetRB_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup7：ASN.1 BandNR_ExtGroup7；源文件第 19661 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup7 只读不分配；Decode_BandNR_ExtGroup7 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup7(Encoder& enc, const BandNR_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_simulTX_SRS_AntSwitchingIntraBandUL_CA_r16);
    enc.WriteBit(value.has_sharedSpectrumChAccessParamsPerBand_v1630);
    if (value.has_simulTX_SRS_AntSwitchingIntraBandUL_CA_r16) {
        Encode_SimulSRS_ForAntennaSwitching_r16(enc, value.simulTX_SRS_AntSwitchingIntraBandUL_CA_r16);
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1630) {
        Encode_SharedSpectrumChAccessParamsPerBand_v1630(enc, value.sharedSpectrumChAccessParamsPerBand_v1630);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup7(Decoder& dec, BandNR_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SimulSRS_ForAntennaSwitching_r16(dec, value.simulTX_SRS_AntSwitchingIntraBandUL_CA_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SharedSpectrumChAccessParamsPerBand_v1630(dec, value.sharedSpectrumChAccessParamsPerBand_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup7(BandNR_ExtGroup7& value)
{
    if (value.has_simulTX_SRS_AntSwitchingIntraBandUL_CA_r16) {
        Free_SimulSRS_ForAntennaSwitching_r16(value.simulTX_SRS_AntSwitchingIntraBandUL_CA_r16);
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1630) {
        Free_SharedSpectrumChAccessParamsPerBand_v1630(value.sharedSpectrumChAccessParamsPerBand_v1630);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SharedSpectrumChAccessParamsPerBand_v1640：ASN.1 SharedSpectrumChAccessParamsPerBand-v1640；源文件第 20418 行；SEQUENCE。
// Encode_SharedSpectrumChAccessParamsPerBand_v1640 只读不分配；Decode_SharedSpectrumChAccessParamsPerBand_v1640 可能 malloc（失败时内部已释放并清零）；Free_SharedSpectrumChAccessParamsPerBand_v1640 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SharedSpectrumChAccessParamsPerBand_v1640(Encoder& enc, const SharedSpectrumChAccessParamsPerBand_v1640& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_RSRP_AndRSRQ_MeasWithSSB_r16);
    enc.WriteBit(value.has_csi_RSRP_AndRSRQ_MeasWithoutSSB_r16);
    enc.WriteBit(value.has_csi_SINR_Meas_r16);
    enc.WriteBit(value.has_ssb_AndCSI_RS_RLM_r16);
    enc.WriteBit(value.has_csi_RS_CFRA_ForHO_r16);
    if (value.has_csi_RSRP_AndRSRQ_MeasWithSSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RSRP_AndRSRQ_MeasWithSSB_r16), 0, 0);
    }
    if (value.has_csi_RSRP_AndRSRQ_MeasWithoutSSB_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RSRP_AndRSRQ_MeasWithoutSSB_r16), 0, 0);
    }
    if (value.has_csi_SINR_Meas_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_SINR_Meas_r16), 0, 0);
    }
    if (value.has_ssb_AndCSI_RS_RLM_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_AndCSI_RS_RLM_r16), 0, 0);
    }
    if (value.has_csi_RS_CFRA_ForHO_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_CFRA_ForHO_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SharedSpectrumChAccessParamsPerBand_v1640(Decoder& dec, SharedSpectrumChAccessParamsPerBand_v1640& value)
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
        value.csi_RSRP_AndRSRQ_MeasWithSSB_r16 = (SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithSSB_r16)0;
    }
    if (present_1) {
        value.csi_RSRP_AndRSRQ_MeasWithoutSSB_r16 = (SharedSpectrumChAccessParamsPerBand_v1640_Csi_RSRP_AndRSRQ_MeasWithoutSSB_r16)0;
    }
    if (present_2) {
        value.csi_SINR_Meas_r16 = (SharedSpectrumChAccessParamsPerBand_v1640_Csi_SINR_Meas_r16)0;
    }
    if (present_3) {
        value.ssb_AndCSI_RS_RLM_r16 = (SharedSpectrumChAccessParamsPerBand_v1640_Ssb_AndCSI_RS_RLM_r16)0;
    }
    if (present_4) {
        value.csi_RS_CFRA_ForHO_r16 = (SharedSpectrumChAccessParamsPerBand_v1640_Csi_RS_CFRA_ForHO_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SharedSpectrumChAccessParamsPerBand_v1640(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SharedSpectrumChAccessParamsPerBand_v1640(SharedSpectrumChAccessParamsPerBand_v1640& value)
{
    if (value.has_csi_RSRP_AndRSRQ_MeasWithSSB_r16) {
    }
    if (value.has_csi_RSRP_AndRSRQ_MeasWithoutSSB_r16) {
    }
    if (value.has_csi_SINR_Meas_r16) {
    }
    if (value.has_ssb_AndCSI_RS_RLM_r16) {
    }
    if (value.has_csi_RS_CFRA_ForHO_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup8：ASN.1 BandNR_ExtGroup8；源文件第 19668 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup8 只读不分配；Decode_BandNR_ExtGroup8 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup8 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup8(Encoder& enc, const BandNR_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_handoverUTRA_FDD_r16);
    enc.WriteBit(value.has_enhancedUL_TransientPeriod_r16);
    enc.WriteBit(value.has_sharedSpectrumChAccessParamsPerBand_v1640);
    if (value.has_handoverUTRA_FDD_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.handoverUTRA_FDD_r16), 0, 0);
    }
    if (value.has_enhancedUL_TransientPeriod_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedUL_TransientPeriod_r16), 0, 2);
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1640) {
        Encode_SharedSpectrumChAccessParamsPerBand_v1640(enc, value.sharedSpectrumChAccessParamsPerBand_v1640);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup8(Decoder& dec, BandNR_ExtGroup8& value)
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
        value.handoverUTRA_FDD_r16 = (BandNR_ExtGroup8_HandoverUTRA_FDD_r16)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.enhancedUL_TransientPeriod_r16 = (BandNR_ExtGroup8_EnhancedUL_TransientPeriod_r16)tmp_value;
    }
    if (present_2) {
        if (Decode_SharedSpectrumChAccessParamsPerBand_v1640(dec, value.sharedSpectrumChAccessParamsPerBand_v1640) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup8(BandNR_ExtGroup8& value)
{
    if (value.has_handoverUTRA_FDD_r16) {
    }
    if (value.has_enhancedUL_TransientPeriod_r16) {
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1640) {
        Free_SharedSpectrumChAccessParamsPerBand_v1640(value.sharedSpectrumChAccessParamsPerBand_v1640);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SharedSpectrumChAccessParamsPerBand_v1650：ASN.1 SharedSpectrumChAccessParamsPerBand-v1650；源文件第 20431 行；SEQUENCE。
// Encode_SharedSpectrumChAccessParamsPerBand_v1650 只读不分配；Decode_SharedSpectrumChAccessParamsPerBand_v1650 可能 malloc（失败时内部已释放并清零）；Free_SharedSpectrumChAccessParamsPerBand_v1650 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SharedSpectrumChAccessParamsPerBand_v1650(Encoder& enc, const SharedSpectrumChAccessParamsPerBand_v1650& value)
{
    (void)value;
    enc.WriteBit(value.has_extendedSearchSpaceSwitchWithDCI_r16);
    if (value.has_extendedSearchSpaceSwitchWithDCI_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedSearchSpaceSwitchWithDCI_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SharedSpectrumChAccessParamsPerBand_v1650(Decoder& dec, SharedSpectrumChAccessParamsPerBand_v1650& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.extendedSearchSpaceSwitchWithDCI_r16 = (SharedSpectrumChAccessParamsPerBand_v1650_ExtendedSearchSpaceSwitchWithDCI_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SharedSpectrumChAccessParamsPerBand_v1650(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SharedSpectrumChAccessParamsPerBand_v1650(SharedSpectrumChAccessParamsPerBand_v1650& value)
{
    if (value.has_extendedSearchSpaceSwitchWithDCI_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup9：ASN.1 BandNR_ExtGroup9；源文件第 19674 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup9 只读不分配；Decode_BandNR_ExtGroup9 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup9 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup9(Encoder& enc, const BandNR_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_type1_PUSCH_RepetitionMultiSlots_v1650);
    enc.WriteBit(value.has_type2_PUSCH_RepetitionMultiSlots_v1650);
    enc.WriteBit(value.has_pusch_RepetitionMultiSlots_v1650);
    enc.WriteBit(value.has_configuredUL_GrantType1_v1650);
    enc.WriteBit(value.has_configuredUL_GrantType2_v1650);
    enc.WriteBit(value.has_sharedSpectrumChAccessParamsPerBand_v1650);
    if (value.has_type1_PUSCH_RepetitionMultiSlots_v1650) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_PUSCH_RepetitionMultiSlots_v1650), 0, 0);
    }
    if (value.has_type2_PUSCH_RepetitionMultiSlots_v1650) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_PUSCH_RepetitionMultiSlots_v1650), 0, 0);
    }
    if (value.has_pusch_RepetitionMultiSlots_v1650) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepetitionMultiSlots_v1650), 0, 0);
    }
    if (value.has_configuredUL_GrantType1_v1650) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_GrantType1_v1650), 0, 0);
    }
    if (value.has_configuredUL_GrantType2_v1650) {
        enc.WriteConstrainedInteger((std::int64_t)(value.configuredUL_GrantType2_v1650), 0, 0);
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1650) {
        Encode_SharedSpectrumChAccessParamsPerBand_v1650(enc, value.sharedSpectrumChAccessParamsPerBand_v1650);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup9(Decoder& dec, BandNR_ExtGroup9& value)
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
        value.type1_PUSCH_RepetitionMultiSlots_v1650 = (BandNR_ExtGroup9_Type1_PUSCH_RepetitionMultiSlots_v1650)0;
    }
    if (present_1) {
        value.type2_PUSCH_RepetitionMultiSlots_v1650 = (BandNR_ExtGroup9_Type2_PUSCH_RepetitionMultiSlots_v1650)0;
    }
    if (present_2) {
        value.pusch_RepetitionMultiSlots_v1650 = (BandNR_ExtGroup9_Pusch_RepetitionMultiSlots_v1650)0;
    }
    if (present_3) {
        value.configuredUL_GrantType1_v1650 = (BandNR_ExtGroup9_ConfiguredUL_GrantType1_v1650)0;
    }
    if (present_4) {
        value.configuredUL_GrantType2_v1650 = (BandNR_ExtGroup9_ConfiguredUL_GrantType2_v1650)0;
    }
    if (present_5) {
        if (Decode_SharedSpectrumChAccessParamsPerBand_v1650(dec, value.sharedSpectrumChAccessParamsPerBand_v1650) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup9(BandNR_ExtGroup9& value)
{
    if (value.has_type1_PUSCH_RepetitionMultiSlots_v1650) {
    }
    if (value.has_type2_PUSCH_RepetitionMultiSlots_v1650) {
    }
    if (value.has_pusch_RepetitionMultiSlots_v1650) {
    }
    if (value.has_configuredUL_GrantType1_v1650) {
    }
    if (value.has_configuredUL_GrantType2_v1650) {
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1650) {
        Free_SharedSpectrumChAccessParamsPerBand_v1650(value.sharedSpectrumChAccessParamsPerBand_v1650);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup10：ASN.1 BandNR_ExtGroup10；源文件第 19682 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup10 只读不分配；Decode_BandNR_ExtGroup10 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup10 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup10(Encoder& enc, const BandNR_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_enhancedSkipUplinkTxConfigured_v1660);
    enc.WriteBit(value.has_enhancedSkipUplinkTxDynamic_v1660);
    if (value.has_enhancedSkipUplinkTxConfigured_v1660) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedSkipUplinkTxConfigured_v1660), 0, 0);
    }
    if (value.has_enhancedSkipUplinkTxDynamic_v1660) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedSkipUplinkTxDynamic_v1660), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup10(Decoder& dec, BandNR_ExtGroup10& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.enhancedSkipUplinkTxConfigured_v1660 = (BandNR_ExtGroup10_EnhancedSkipUplinkTxConfigured_v1660)0;
    }
    if (present_1) {
        value.enhancedSkipUplinkTxDynamic_v1660 = (BandNR_ExtGroup10_EnhancedSkipUplinkTxDynamic_v1660)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup10(BandNR_ExtGroup10& value)
{
    if (value.has_enhancedSkipUplinkTxConfigured_v1660) {
    }
    if (value.has_enhancedSkipUplinkTxDynamic_v1660) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup11：ASN.1 BandNR_ExtGroup11；源文件第 19686 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup11 只读不分配；Decode_BandNR_ExtGroup11 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup11 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup11(Encoder& enc, const BandNR_ExtGroup11& value)
{
    (void)value;
    enc.WriteBit(value.has_maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16);
    enc.WriteBit(value.has_txDiversity_r16);
    if (value.has_maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16), 0, 11);
    }
    if (value.has_txDiversity_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.txDiversity_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup11(Decoder& dec, BandNR_ExtGroup11& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16 = (BandNR_ExtGroup11_MaxUplinkDutyCycle_PC1dot5_MPE_FR1_r16)tmp_value;
    }
    if (present_1) {
        value.txDiversity_r16 = (BandNR_ExtGroup11_TxDiversity_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup11(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup11(BandNR_ExtGroup11& value)
{
    if (value.has_maxUplinkDutyCycle_PC1dot5_MPE_FR1_r16) {
    }
    if (value.has_txDiversity_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SharedSpectrumChAccessParamsPerBand_v1710：ASN.1 SharedSpectrumChAccessParamsPerBand-v1710；源文件第 20436 行；SEQUENCE。
// Encode_SharedSpectrumChAccessParamsPerBand_v1710 只读不分配；Decode_SharedSpectrumChAccessParamsPerBand_v1710 可能 malloc（失败时内部已释放并清零）；Free_SharedSpectrumChAccessParamsPerBand_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SharedSpectrumChAccessParamsPerBand_v1710(Encoder& enc, const SharedSpectrumChAccessParamsPerBand_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_ul_Semi_StaticChAccessDependentConfig_r17);
    enc.WriteBit(value.has_ul_Semi_StaticChAccessIndependentConfig_r17);
    if (value.has_ul_Semi_StaticChAccessDependentConfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_Semi_StaticChAccessDependentConfig_r17), 0, 0);
    }
    if (value.has_ul_Semi_StaticChAccessIndependentConfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_Semi_StaticChAccessIndependentConfig_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SharedSpectrumChAccessParamsPerBand_v1710(Decoder& dec, SharedSpectrumChAccessParamsPerBand_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.ul_Semi_StaticChAccessDependentConfig_r17 = (SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessDependentConfig_r17)0;
    }
    if (present_1) {
        value.ul_Semi_StaticChAccessIndependentConfig_r17 = (SharedSpectrumChAccessParamsPerBand_v1710_Ul_Semi_StaticChAccessIndependentConfig_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SharedSpectrumChAccessParamsPerBand_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SharedSpectrumChAccessParamsPerBand_v1710(SharedSpectrumChAccessParamsPerBand_v1710& value)
{
    if (value.has_ul_Semi_StaticChAccessDependentConfig_r17) {
    }
    if (value.has_ul_Semi_StaticChAccessIndependentConfig_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17：ASN.1 srs-PosResourcesRRC-Inactive-r17；源文件第 20748 行；SEQUENCE。
// Encode_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17 只读不分配；Decode_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17 可能 malloc（失败时内部已释放并清零）；Free_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(Encoder& enc, const SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_PosResourceSetPerBWP_r17), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_PosResourcesPerBWP_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberSRS_ResourcesPerBWP_PerSlot_r17), 0, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_PosResourcesPerBWP_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17), 0, 9);
    enc.WriteConstrainedInteger((std::int64_t)(value.dummy1), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.dummy2), 0, 9);
    return enc.Error();
}

ErrorCode Decode_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(Decoder& dec, SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberSRS_PosResourceSetPerBWP_r17 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourceSetPerBWP_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberSRS_PosResourcesPerBWP_r17 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_PosResourcesPerBWP_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberSRS_ResourcesPerBWP_PerSlot_r17 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberSRS_ResourcesPerBWP_PerSlot_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_PosResourcesPerBWP_r17 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_MaxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.dummy1 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy1)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.dummy2 = (SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17_Dummy2)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_AllPosResourcesRRC_Inactive_r17：ASN.1 SRS-AllPosResourcesRRC-Inactive-r17；源文件第 20747 行；SEQUENCE。
// Encode_SRS_AllPosResourcesRRC_Inactive_r17 只读不分配；Decode_SRS_AllPosResourcesRRC_Inactive_r17 可能 malloc（失败时内部已释放并清零）；Free_SRS_AllPosResourcesRRC_Inactive_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_AllPosResourcesRRC_Inactive_r17(Encoder& enc, const SRS_AllPosResourcesRRC_Inactive_r17& value)
{
    (void)value;
    Encode_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(enc, value.srs_PosResourcesRRC_Inactive_r17);
    return enc.Error();
}

ErrorCode Decode_SRS_AllPosResourcesRRC_Inactive_r17(Decoder& dec, SRS_AllPosResourcesRRC_Inactive_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(dec, value.srs_PosResourcesRRC_Inactive_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_AllPosResourcesRRC_Inactive_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_AllPosResourcesRRC_Inactive_r17(SRS_AllPosResourcesRRC_Inactive_r17& value)
{
    Free_SRS_AllPosResourcesRRC_Inactive_r17_Srs_PosResourcesRRC_Inactive_r17(value.srs_PosResourcesRRC_Inactive_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17：ASN.1 maxDurationDMRS-Bundling-r17；源文件第 19758 行；SEQUENCE。
// Encode_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17 只读不分配；Decode_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(Encoder& enc, const BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_fdd_r17);
    enc.WriteBit(value.has_tdd_r17);
    if (value.has_fdd_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.fdd_r17), 0, 3);
    }
    if (value.has_tdd_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tdd_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(Decoder& dec, BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17& value)
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
        value.fdd_r17 = (BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Fdd_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.tdd_r17 = (BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17_Tdd_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17& value)
{
    if (value.has_fdd_r17) {
    }
    if (value.has_tdd_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17：ASN.1 aperiodicCSI-RS-FastScellActivation-r17；源文件第 19773 行；SEQUENCE。
// Encode_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17 只读不分配；Decode_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(Encoder& enc, const BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_RS_PerCC_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberAperiodicCSI_RS_AcrossCCs_r17), 0, 7);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(Decoder& dec, BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_RS_PerCC_r17 = (BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_PerCC_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberAperiodicCSI_RS_AcrossCCs_r17 = (BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17_MaxNumberAperiodicCSI_RS_AcrossCCs_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17：ASN.1 enhancedType3-HARQ-CodebookFeedback-r17；源文件第 19798 行；SEQUENCE。
// Encode_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17 只读不分配；Decode_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(Encoder& enc, const BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.enhancedType3_HARQ_Codebooks_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUCCH_Transmissions_r17), 0, 6);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(Decoder& dec, BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.enhancedType3_HARQ_Codebooks_r17 = (BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_EnhancedType3_HARQ_Codebooks_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberPUCCH_Transmissions_r17 = (BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17_MaxNumberPUCCH_Transmissions_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17：ASN.1 triggeredHARQ-CodebookRetx-r17；源文件第 19803 行；SEQUENCE。
// Encode_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17 只读不分配；Decode_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(Encoder& enc, const BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.minHARQ_Retx_Offset_r17), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxHARQ_Retx_Offset_r17), 0, 10);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(Decoder& dec, BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.minHARQ_Retx_Offset_r17 = (BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MinHARQ_Retx_Offset_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.maxHARQ_Retx_Offset_r17 = (BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17_MaxHARQ_Retx_Offset_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup12：ASN.1 BandNR_ExtGroup12；源文件第 19690 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup12 只读不分配；Decode_BandNR_ExtGroup12 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup12 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup12(Encoder& enc, const BandNR_ExtGroup12& value)
{
    (void)value;
    enc.WriteBit(value.has_pdsch_1024QAM_FR1_r17);
    enc.WriteBit(value.has_ue_PowerClass_v1700);
    enc.WriteBit(value.has_fr2_2_AccessParamsPerBand_r17);
    enc.WriteBit(value.has_rlm_Relaxation_r17);
    enc.WriteBit(value.has_bfd_Relaxation_r17);
    enc.WriteBit(value.has_cg_SDT_r17);
    enc.WriteBit(value.has_locationBasedCondHandover_r17);
    enc.WriteBit(value.has_timeBasedCondHandover_r17);
    enc.WriteBit(value.has_eventA4BasedCondHandover_r17);
    enc.WriteBit(value.has_mn_InitiatedCondPSCellChangeNRDC_r17);
    enc.WriteBit(value.has_sn_InitiatedCondPSCellChangeNRDC_r17);
    enc.WriteBit(value.has_pdcch_SkippingWithoutSSSG_r17);
    enc.WriteBit(value.has_sssg_Switching_1BitInd_r17);
    enc.WriteBit(value.has_sssg_Switching_2BitInd_r17);
    enc.WriteBit(value.has_pdcch_SkippingWithSSSG_r17);
    enc.WriteBit(value.has_searchSpaceSetGrp_switchCap2_r17);
    enc.WriteBit(value.has_uplinkPreCompensation_r17);
    enc.WriteBit(value.has_uplink_TA_Reporting_r17);
    enc.WriteBit(value.has_max_HARQ_ProcessNumber_r17);
    enc.WriteBit(value.has_type2_HARQ_Codebook_r17);
    enc.WriteBit(value.has_type1_HARQ_Codebook_r17);
    enc.WriteBit(value.has_type3_HARQ_Codebook_r17);
    enc.WriteBit(value.has_ue_specific_K_Offset_r17);
    enc.WriteBit(value.has_multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17);
    enc.WriteBit(value.has_multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17);
    enc.WriteBit(value.has_parallelPRS_MeasRRC_Inactive_r17);
    enc.WriteBit(value.has_nr_UE_TxTEG_ID_MaxSupport_r17);
    enc.WriteBit(value.has_prs_ProcessingRRC_Inactive_r17);
    enc.WriteBit(value.has_prs_ProcessingWindowType1A_r17);
    enc.WriteBit(value.has_prs_ProcessingWindowType1B_r17);
    enc.WriteBit(value.has_prs_ProcessingWindowType2_r17);
    enc.WriteBit(value.has_srs_AllPosResourcesRRC_Inactive_r17);
    enc.WriteBit(value.has_olpc_SRS_PosRRC_Inactive_r17);
    enc.WriteBit(value.has_spatialRelationsSRS_PosRRC_Inactive_r17);
    enc.WriteBit(value.has_maxNumberPUSCH_TypeA_Repetition_r17);
    enc.WriteBit(value.has_puschTypeA_RepetitionsAvailSlot_r17);
    enc.WriteBit(value.has_tb_ProcessingMultiSlotPUSCH_r17);
    enc.WriteBit(value.has_tb_ProcessingRepMultiSlotPUSCH_r17);
    enc.WriteBit(value.has_maxDurationDMRS_Bundling_r17);
    enc.WriteBit(value.has_pusch_RepetitionMsg3_r17);
    enc.WriteBit(value.has_sharedSpectrumChAccessParamsPerBand_v1710);
    enc.WriteBit(value.has_parallelMeasurementWithoutRestriction_r17);
    enc.WriteBit(value.has_maxNumber_NGSO_SatellitesWithinOneSMTC_r17);
    enc.WriteBit(value.has_k1_RangeExtension_r17);
    enc.WriteBit(value.has_aperiodicCSI_RS_FastScellActivation_r17);
    enc.WriteBit(value.has_aperiodicCSI_RS_AdditionalBandwidth_r17);
    enc.WriteBit(value.has_bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17);
    enc.WriteBit(value.has_halfDuplexFDD_TypeA_RedCap_r17);
    enc.WriteBit(value.has_posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17);
    enc.WriteBit(value.has_channelBWs_DL_SCS_480kHz_FR2_2_r17);
    enc.WriteBit(value.has_channelBWs_UL_SCS_480kHz_FR2_2_r17);
    enc.WriteBit(value.has_channelBWs_DL_SCS_960kHz_FR2_2_r17);
    enc.WriteBit(value.has_channelBWs_UL_SCS_960kHz_FR2_2_r17);
    enc.WriteBit(value.has_ul_GapFR2_r17);
    enc.WriteBit(value.has_oneShotHARQ_feedbackTriggeredByDCI_1_2_r17);
    enc.WriteBit(value.has_oneShotHARQ_feedbackPhy_Priority_r17);
    enc.WriteBit(value.has_enhancedType3_HARQ_CodebookFeedback_r17);
    enc.WriteBit(value.has_triggeredHARQ_CodebookRetx_r17);
    if (value.has_pdsch_1024QAM_FR1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_1024QAM_FR1_r17), 0, 0);
    }
    if (value.has_ue_PowerClass_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_PowerClass_v1700), 0, 2);
    }
    if (value.has_fr2_2_AccessParamsPerBand_r17) {
        Encode_FR2_2_AccessParamsPerBand_r17(enc, value.fr2_2_AccessParamsPerBand_r17);
    }
    if (value.has_rlm_Relaxation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlm_Relaxation_r17), 0, 0);
    }
    if (value.has_bfd_Relaxation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bfd_Relaxation_r17), 0, 0);
    }
    if (value.has_cg_SDT_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_r17), 0, 0);
    }
    if (value.has_locationBasedCondHandover_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.locationBasedCondHandover_r17), 0, 0);
    }
    if (value.has_timeBasedCondHandover_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeBasedCondHandover_r17), 0, 0);
    }
    if (value.has_eventA4BasedCondHandover_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventA4BasedCondHandover_r17), 0, 0);
    }
    if (value.has_mn_InitiatedCondPSCellChangeNRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mn_InitiatedCondPSCellChangeNRDC_r17), 0, 0);
    }
    if (value.has_sn_InitiatedCondPSCellChangeNRDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sn_InitiatedCondPSCellChangeNRDC_r17), 0, 0);
    }
    if (value.has_pdcch_SkippingWithoutSSSG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_SkippingWithoutSSSG_r17), 0, 0);
    }
    if (value.has_sssg_Switching_1BitInd_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sssg_Switching_1BitInd_r17), 0, 0);
    }
    if (value.has_sssg_Switching_2BitInd_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sssg_Switching_2BitInd_r17), 0, 0);
    }
    if (value.has_pdcch_SkippingWithSSSG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_SkippingWithSSSG_r17), 0, 0);
    }
    if (value.has_searchSpaceSetGrp_switchCap2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.searchSpaceSetGrp_switchCap2_r17), 0, 0);
    }
    if (value.has_uplinkPreCompensation_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplinkPreCompensation_r17), 0, 0);
    }
    if (value.has_uplink_TA_Reporting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uplink_TA_Reporting_r17), 0, 0);
    }
    if (value.has_max_HARQ_ProcessNumber_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.max_HARQ_ProcessNumber_r17), 0, 2);
    }
    if (value.has_type2_HARQ_Codebook_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type2_HARQ_Codebook_r17), 0, 0);
    }
    if (value.has_type1_HARQ_Codebook_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type1_HARQ_Codebook_r17), 0, 0);
    }
    if (value.has_type3_HARQ_Codebook_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type3_HARQ_Codebook_r17), 0, 0);
    }
    if (value.has_ue_specific_K_Offset_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_specific_K_Offset_r17), 0, 0);
    }
    if (value.has_multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17), 0, 0);
    }
    if (value.has_parallelPRS_MeasRRC_Inactive_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelPRS_MeasRRC_Inactive_r17), 0, 0);
    }
    if (value.has_nr_UE_TxTEG_ID_MaxSupport_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_UE_TxTEG_ID_MaxSupport_r17), 0, 5);
    }
    if (value.has_prs_ProcessingRRC_Inactive_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prs_ProcessingRRC_Inactive_r17), 0, 0);
    }
    if (value.has_prs_ProcessingWindowType1A_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prs_ProcessingWindowType1A_r17), 0, 2);
    }
    if (value.has_prs_ProcessingWindowType1B_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prs_ProcessingWindowType1B_r17), 0, 2);
    }
    if (value.has_prs_ProcessingWindowType2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prs_ProcessingWindowType2_r17), 0, 2);
    }
    if (value.has_srs_AllPosResourcesRRC_Inactive_r17) {
        Encode_SRS_AllPosResourcesRRC_Inactive_r17(enc, value.srs_AllPosResourcesRRC_Inactive_r17);
    }
    if (value.has_olpc_SRS_PosRRC_Inactive_r17) {
        Encode_OLPC_SRS_Pos_r16(enc, value.olpc_SRS_PosRRC_Inactive_r17);
    }
    if (value.has_spatialRelationsSRS_PosRRC_Inactive_r17) {
        Encode_SpatialRelationsSRS_Pos_r16(enc, value.spatialRelationsSRS_PosRRC_Inactive_r17);
    }
    if (value.has_maxNumberPUSCH_TypeA_Repetition_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPUSCH_TypeA_Repetition_r17), 0, 0);
    }
    if (value.has_puschTypeA_RepetitionsAvailSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.puschTypeA_RepetitionsAvailSlot_r17), 0, 0);
    }
    if (value.has_tb_ProcessingMultiSlotPUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tb_ProcessingMultiSlotPUSCH_r17), 0, 0);
    }
    if (value.has_tb_ProcessingRepMultiSlotPUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tb_ProcessingRepMultiSlotPUSCH_r17), 0, 0);
    }
    if (value.has_maxDurationDMRS_Bundling_r17) {
        Encode_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(enc, value.maxDurationDMRS_Bundling_r17);
    }
    if (value.has_pusch_RepetitionMsg3_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepetitionMsg3_r17), 0, 0);
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1710) {
        Encode_SharedSpectrumChAccessParamsPerBand_v1710(enc, value.sharedSpectrumChAccessParamsPerBand_v1710);
    }
    if (value.has_parallelMeasurementWithoutRestriction_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parallelMeasurementWithoutRestriction_r17), 0, 0);
    }
    if (value.has_maxNumber_NGSO_SatellitesWithinOneSMTC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumber_NGSO_SatellitesWithinOneSMTC_r17), 0, 3);
    }
    if (value.has_k1_RangeExtension_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.k1_RangeExtension_r17), 0, 0);
    }
    if (value.has_aperiodicCSI_RS_FastScellActivation_r17) {
        Encode_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(enc, value.aperiodicCSI_RS_FastScellActivation_r17);
    }
    if (value.has_aperiodicCSI_RS_AdditionalBandwidth_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicCSI_RS_AdditionalBandwidth_r17), 0, 1);
    }
    if (value.has_bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17), 0, 0);
    }
    if (value.has_halfDuplexFDD_TypeA_RedCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.halfDuplexFDD_TypeA_RedCap_r17), 0, 0);
    }
    if (value.has_posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17) {
        Encode_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(enc, value.posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17);
    }
    if (value.has_channelBWs_DL_SCS_480kHz_FR2_2_r17) {
        enc.WriteFixedBitString(value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bytes, value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bitLength, 8, 8);
    }
    if (value.has_channelBWs_UL_SCS_480kHz_FR2_2_r17) {
        enc.WriteFixedBitString(value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bytes, value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bitLength, 8, 8);
    }
    if (value.has_channelBWs_DL_SCS_960kHz_FR2_2_r17) {
        enc.WriteFixedBitString(value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bytes, value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bitLength, 8, 8);
    }
    if (value.has_channelBWs_UL_SCS_960kHz_FR2_2_r17) {
        enc.WriteFixedBitString(value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bytes, value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bitLength, 8, 8);
    }
    if (value.has_ul_GapFR2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ul_GapFR2_r17), 0, 0);
    }
    if (value.has_oneShotHARQ_feedbackTriggeredByDCI_1_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneShotHARQ_feedbackTriggeredByDCI_1_2_r17), 0, 0);
    }
    if (value.has_oneShotHARQ_feedbackPhy_Priority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.oneShotHARQ_feedbackPhy_Priority_r17), 0, 0);
    }
    if (value.has_enhancedType3_HARQ_CodebookFeedback_r17) {
        Encode_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(enc, value.enhancedType3_HARQ_CodebookFeedback_r17);
    }
    if (value.has_triggeredHARQ_CodebookRetx_r17) {
        Encode_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(enc, value.triggeredHARQ_CodebookRetx_r17);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup12(Decoder& dec, BandNR_ExtGroup12& value)
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
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    bool present_34 = false;
    bool present_35 = false;
    bool present_36 = false;
    bool present_37 = false;
    bool present_38 = false;
    bool present_39 = false;
    bool present_40 = false;
    bool present_41 = false;
    bool present_42 = false;
    bool present_43 = false;
    bool present_44 = false;
    bool present_45 = false;
    bool present_46 = false;
    bool present_47 = false;
    bool present_48 = false;
    bool present_49 = false;
    bool present_50 = false;
    bool present_51 = false;
    bool present_52 = false;
    bool present_53 = false;
    bool present_54 = false;
    bool present_55 = false;
    bool present_56 = false;
    bool present_57 = false;
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
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (!dec.ReadBit(present_34)) { goto fail; }
    if (!dec.ReadBit(present_35)) { goto fail; }
    if (!dec.ReadBit(present_36)) { goto fail; }
    if (!dec.ReadBit(present_37)) { goto fail; }
    if (!dec.ReadBit(present_38)) { goto fail; }
    if (!dec.ReadBit(present_39)) { goto fail; }
    if (!dec.ReadBit(present_40)) { goto fail; }
    if (!dec.ReadBit(present_41)) { goto fail; }
    if (!dec.ReadBit(present_42)) { goto fail; }
    if (!dec.ReadBit(present_43)) { goto fail; }
    if (!dec.ReadBit(present_44)) { goto fail; }
    if (!dec.ReadBit(present_45)) { goto fail; }
    if (!dec.ReadBit(present_46)) { goto fail; }
    if (!dec.ReadBit(present_47)) { goto fail; }
    if (!dec.ReadBit(present_48)) { goto fail; }
    if (!dec.ReadBit(present_49)) { goto fail; }
    if (!dec.ReadBit(present_50)) { goto fail; }
    if (!dec.ReadBit(present_51)) { goto fail; }
    if (!dec.ReadBit(present_52)) { goto fail; }
    if (!dec.ReadBit(present_53)) { goto fail; }
    if (!dec.ReadBit(present_54)) { goto fail; }
    if (!dec.ReadBit(present_55)) { goto fail; }
    if (!dec.ReadBit(present_56)) { goto fail; }
    if (!dec.ReadBit(present_57)) { goto fail; }
    if (present_0) {
        value.pdsch_1024QAM_FR1_r17 = (BandNR_ExtGroup12_Pdsch_1024QAM_FR1_r17)0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ue_PowerClass_v1700 = (BandNR_ExtGroup12_Ue_PowerClass_v1700)tmp_value;
    }
    if (present_2) {
        if (Decode_FR2_2_AccessParamsPerBand_r17(dec, value.fr2_2_AccessParamsPerBand_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.rlm_Relaxation_r17 = (BandNR_ExtGroup12_Rlm_Relaxation_r17)0;
    }
    if (present_4) {
        value.bfd_Relaxation_r17 = (BandNR_ExtGroup12_Bfd_Relaxation_r17)0;
    }
    if (present_5) {
        value.cg_SDT_r17 = (BandNR_ExtGroup12_Cg_SDT_r17)0;
    }
    if (present_6) {
        value.locationBasedCondHandover_r17 = (BandNR_ExtGroup12_LocationBasedCondHandover_r17)0;
    }
    if (present_7) {
        value.timeBasedCondHandover_r17 = (BandNR_ExtGroup12_TimeBasedCondHandover_r17)0;
    }
    if (present_8) {
        value.eventA4BasedCondHandover_r17 = (BandNR_ExtGroup12_EventA4BasedCondHandover_r17)0;
    }
    if (present_9) {
        value.mn_InitiatedCondPSCellChangeNRDC_r17 = (BandNR_ExtGroup12_Mn_InitiatedCondPSCellChangeNRDC_r17)0;
    }
    if (present_10) {
        value.sn_InitiatedCondPSCellChangeNRDC_r17 = (BandNR_ExtGroup12_Sn_InitiatedCondPSCellChangeNRDC_r17)0;
    }
    if (present_11) {
        value.pdcch_SkippingWithoutSSSG_r17 = (BandNR_ExtGroup12_Pdcch_SkippingWithoutSSSG_r17)0;
    }
    if (present_12) {
        value.sssg_Switching_1BitInd_r17 = (BandNR_ExtGroup12_Sssg_Switching_1BitInd_r17)0;
    }
    if (present_13) {
        value.sssg_Switching_2BitInd_r17 = (BandNR_ExtGroup12_Sssg_Switching_2BitInd_r17)0;
    }
    if (present_14) {
        value.pdcch_SkippingWithSSSG_r17 = (BandNR_ExtGroup12_Pdcch_SkippingWithSSSG_r17)0;
    }
    if (present_15) {
        value.searchSpaceSetGrp_switchCap2_r17 = (BandNR_ExtGroup12_SearchSpaceSetGrp_switchCap2_r17)0;
    }
    if (present_16) {
        value.uplinkPreCompensation_r17 = (BandNR_ExtGroup12_UplinkPreCompensation_r17)0;
    }
    if (present_17) {
        value.uplink_TA_Reporting_r17 = (BandNR_ExtGroup12_Uplink_TA_Reporting_r17)0;
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.max_HARQ_ProcessNumber_r17 = (BandNR_ExtGroup12_Max_HARQ_ProcessNumber_r17)tmp_value;
    }
    if (present_19) {
        value.type2_HARQ_Codebook_r17 = (BandNR_ExtGroup12_Type2_HARQ_Codebook_r17)0;
    }
    if (present_20) {
        value.type1_HARQ_Codebook_r17 = (BandNR_ExtGroup12_Type1_HARQ_Codebook_r17)0;
    }
    if (present_21) {
        value.type3_HARQ_Codebook_r17 = (BandNR_ExtGroup12_Type3_HARQ_Codebook_r17)0;
    }
    if (present_22) {
        value.ue_specific_K_Offset_r17 = (BandNR_ExtGroup12_Ue_specific_K_Offset_r17)0;
    }
    if (present_23) {
        value.multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17 = (BandNR_ExtGroup12_MultiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17)0;
    }
    if (present_24) {
        value.multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17 = (BandNR_ExtGroup12_MultiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17)0;
    }
    if (present_25) {
        value.parallelPRS_MeasRRC_Inactive_r17 = (BandNR_ExtGroup12_ParallelPRS_MeasRRC_Inactive_r17)0;
    }
    if (present_26) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.nr_UE_TxTEG_ID_MaxSupport_r17 = (BandNR_ExtGroup12_Nr_UE_TxTEG_ID_MaxSupport_r17)tmp_value;
    }
    if (present_27) {
        value.prs_ProcessingRRC_Inactive_r17 = (BandNR_ExtGroup12_Prs_ProcessingRRC_Inactive_r17)0;
    }
    if (present_28) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.prs_ProcessingWindowType1A_r17 = (BandNR_ExtGroup12_Prs_ProcessingWindowType1A_r17)tmp_value;
    }
    if (present_29) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.prs_ProcessingWindowType1B_r17 = (BandNR_ExtGroup12_Prs_ProcessingWindowType1B_r17)tmp_value;
    }
    if (present_30) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.prs_ProcessingWindowType2_r17 = (BandNR_ExtGroup12_Prs_ProcessingWindowType2_r17)tmp_value;
    }
    if (present_31) {
        if (Decode_SRS_AllPosResourcesRRC_Inactive_r17(dec, value.srs_AllPosResourcesRRC_Inactive_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_32) {
        if (Decode_OLPC_SRS_Pos_r16(dec, value.olpc_SRS_PosRRC_Inactive_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_33) {
        if (Decode_SpatialRelationsSRS_Pos_r16(dec, value.spatialRelationsSRS_PosRRC_Inactive_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_34) {
        value.maxNumberPUSCH_TypeA_Repetition_r17 = (BandNR_ExtGroup12_MaxNumberPUSCH_TypeA_Repetition_r17)0;
    }
    if (present_35) {
        value.puschTypeA_RepetitionsAvailSlot_r17 = (BandNR_ExtGroup12_PuschTypeA_RepetitionsAvailSlot_r17)0;
    }
    if (present_36) {
        value.tb_ProcessingMultiSlotPUSCH_r17 = (BandNR_ExtGroup12_Tb_ProcessingMultiSlotPUSCH_r17)0;
    }
    if (present_37) {
        value.tb_ProcessingRepMultiSlotPUSCH_r17 = (BandNR_ExtGroup12_Tb_ProcessingRepMultiSlotPUSCH_r17)0;
    }
    if (present_38) {
        if (Decode_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(dec, value.maxDurationDMRS_Bundling_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_39) {
        value.pusch_RepetitionMsg3_r17 = (BandNR_ExtGroup12_Pusch_RepetitionMsg3_r17)0;
    }
    if (present_40) {
        if (Decode_SharedSpectrumChAccessParamsPerBand_v1710(dec, value.sharedSpectrumChAccessParamsPerBand_v1710) != ErrorCode_Ok) { goto fail; }
    }
    if (present_41) {
        value.parallelMeasurementWithoutRestriction_r17 = (BandNR_ExtGroup12_ParallelMeasurementWithoutRestriction_r17)0;
    }
    if (present_42) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.maxNumber_NGSO_SatellitesWithinOneSMTC_r17 = (BandNR_ExtGroup12_MaxNumber_NGSO_SatellitesWithinOneSMTC_r17)tmp_value;
    }
    if (present_43) {
        value.k1_RangeExtension_r17 = (BandNR_ExtGroup12_K1_RangeExtension_r17)0;
    }
    if (present_44) {
        if (Decode_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(dec, value.aperiodicCSI_RS_FastScellActivation_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_45) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.aperiodicCSI_RS_AdditionalBandwidth_r17 = (BandNR_ExtGroup12_AperiodicCSI_RS_AdditionalBandwidth_r17)tmp_value;
    }
    if (present_46) {
        value.bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17 = (BandNR_ExtGroup12_Bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17)0;
    }
    if (present_47) {
        value.halfDuplexFDD_TypeA_RedCap_r17 = (BandNR_ExtGroup12_HalfDuplexFDD_TypeA_RedCap_r17)0;
    }
    if (present_48) {
        if (Decode_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(dec, value.posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_49) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bytes = string_bytes;
        value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bitLength = string_length;
    }
    if (present_50) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bytes = string_bytes;
        value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bitLength = string_length;
    }
    if (present_51) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bytes = string_bytes;
        value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bitLength = string_length;
    }
    if (present_52) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bytes = string_bytes;
        value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bitLength = string_length;
    }
    if (present_53) {
        value.ul_GapFR2_r17 = (BandNR_ExtGroup12_Ul_GapFR2_r17)0;
    }
    if (present_54) {
        value.oneShotHARQ_feedbackTriggeredByDCI_1_2_r17 = (BandNR_ExtGroup12_OneShotHARQ_feedbackTriggeredByDCI_1_2_r17)0;
    }
    if (present_55) {
        value.oneShotHARQ_feedbackPhy_Priority_r17 = (BandNR_ExtGroup12_OneShotHARQ_feedbackPhy_Priority_r17)0;
    }
    if (present_56) {
        if (Decode_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(dec, value.enhancedType3_HARQ_CodebookFeedback_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_57) {
        if (Decode_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(dec, value.triggeredHARQ_CodebookRetx_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup12(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup12(BandNR_ExtGroup12& value)
{
    if (value.has_pdsch_1024QAM_FR1_r17) {
    }
    if (value.has_ue_PowerClass_v1700) {
    }
    if (value.has_fr2_2_AccessParamsPerBand_r17) {
        Free_FR2_2_AccessParamsPerBand_r17(value.fr2_2_AccessParamsPerBand_r17);
    }
    if (value.has_rlm_Relaxation_r17) {
    }
    if (value.has_bfd_Relaxation_r17) {
    }
    if (value.has_cg_SDT_r17) {
    }
    if (value.has_locationBasedCondHandover_r17) {
    }
    if (value.has_timeBasedCondHandover_r17) {
    }
    if (value.has_eventA4BasedCondHandover_r17) {
    }
    if (value.has_mn_InitiatedCondPSCellChangeNRDC_r17) {
    }
    if (value.has_sn_InitiatedCondPSCellChangeNRDC_r17) {
    }
    if (value.has_pdcch_SkippingWithoutSSSG_r17) {
    }
    if (value.has_sssg_Switching_1BitInd_r17) {
    }
    if (value.has_sssg_Switching_2BitInd_r17) {
    }
    if (value.has_pdcch_SkippingWithSSSG_r17) {
    }
    if (value.has_searchSpaceSetGrp_switchCap2_r17) {
    }
    if (value.has_uplinkPreCompensation_r17) {
    }
    if (value.has_uplink_TA_Reporting_r17) {
    }
    if (value.has_max_HARQ_ProcessNumber_r17) {
    }
    if (value.has_type2_HARQ_Codebook_r17) {
    }
    if (value.has_type1_HARQ_Codebook_r17) {
    }
    if (value.has_type3_HARQ_Codebook_r17) {
    }
    if (value.has_ue_specific_K_Offset_r17) {
    }
    if (value.has_multiPDSCH_SingleDCI_FR2_1_SCS_120kHz_r17) {
    }
    if (value.has_multiPUSCH_SingleDCI_FR2_1_SCS_120kHz_r17) {
    }
    if (value.has_parallelPRS_MeasRRC_Inactive_r17) {
    }
    if (value.has_nr_UE_TxTEG_ID_MaxSupport_r17) {
    }
    if (value.has_prs_ProcessingRRC_Inactive_r17) {
    }
    if (value.has_prs_ProcessingWindowType1A_r17) {
    }
    if (value.has_prs_ProcessingWindowType1B_r17) {
    }
    if (value.has_prs_ProcessingWindowType2_r17) {
    }
    if (value.has_srs_AllPosResourcesRRC_Inactive_r17) {
        Free_SRS_AllPosResourcesRRC_Inactive_r17(value.srs_AllPosResourcesRRC_Inactive_r17);
    }
    if (value.has_olpc_SRS_PosRRC_Inactive_r17) {
        Free_OLPC_SRS_Pos_r16(value.olpc_SRS_PosRRC_Inactive_r17);
    }
    if (value.has_spatialRelationsSRS_PosRRC_Inactive_r17) {
        Free_SpatialRelationsSRS_Pos_r16(value.spatialRelationsSRS_PosRRC_Inactive_r17);
    }
    if (value.has_maxNumberPUSCH_TypeA_Repetition_r17) {
    }
    if (value.has_puschTypeA_RepetitionsAvailSlot_r17) {
    }
    if (value.has_tb_ProcessingMultiSlotPUSCH_r17) {
    }
    if (value.has_tb_ProcessingRepMultiSlotPUSCH_r17) {
    }
    if (value.has_maxDurationDMRS_Bundling_r17) {
        Free_BandNR_ExtGroup12_MaxDurationDMRS_Bundling_r17(value.maxDurationDMRS_Bundling_r17);
    }
    if (value.has_pusch_RepetitionMsg3_r17) {
    }
    if (value.has_sharedSpectrumChAccessParamsPerBand_v1710) {
        Free_SharedSpectrumChAccessParamsPerBand_v1710(value.sharedSpectrumChAccessParamsPerBand_v1710);
    }
    if (value.has_parallelMeasurementWithoutRestriction_r17) {
    }
    if (value.has_maxNumber_NGSO_SatellitesWithinOneSMTC_r17) {
    }
    if (value.has_k1_RangeExtension_r17) {
    }
    if (value.has_aperiodicCSI_RS_FastScellActivation_r17) {
        Free_BandNR_ExtGroup12_AperiodicCSI_RS_FastScellActivation_r17(value.aperiodicCSI_RS_FastScellActivation_r17);
    }
    if (value.has_aperiodicCSI_RS_AdditionalBandwidth_r17) {
    }
    if (value.has_bwp_WithoutCD_SSB_OrNCD_SSB_RedCap_r17) {
    }
    if (value.has_halfDuplexFDD_TypeA_RedCap_r17) {
    }
    if (value.has_posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17) {
        Free_PosSRS_RRC_Inactive_OutsideInitialUL_BWP_r17(value.posSRS_RRC_Inactive_OutsideInitialUL_BWP_r17);
    }
    if (value.has_channelBWs_DL_SCS_480kHz_FR2_2_r17) {
        std::free(value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bytes);
        value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bytes = nullptr;
        value.channelBWs_DL_SCS_480kHz_FR2_2_r17.bitLength = 0;
    }
    if (value.has_channelBWs_UL_SCS_480kHz_FR2_2_r17) {
        std::free(value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bytes);
        value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bytes = nullptr;
        value.channelBWs_UL_SCS_480kHz_FR2_2_r17.bitLength = 0;
    }
    if (value.has_channelBWs_DL_SCS_960kHz_FR2_2_r17) {
        std::free(value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bytes);
        value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bytes = nullptr;
        value.channelBWs_DL_SCS_960kHz_FR2_2_r17.bitLength = 0;
    }
    if (value.has_channelBWs_UL_SCS_960kHz_FR2_2_r17) {
        std::free(value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bytes);
        value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bytes = nullptr;
        value.channelBWs_UL_SCS_960kHz_FR2_2_r17.bitLength = 0;
    }
    if (value.has_ul_GapFR2_r17) {
    }
    if (value.has_oneShotHARQ_feedbackTriggeredByDCI_1_2_r17) {
    }
    if (value.has_oneShotHARQ_feedbackPhy_Priority_r17) {
    }
    if (value.has_enhancedType3_HARQ_CodebookFeedback_r17) {
        Free_BandNR_ExtGroup12_EnhancedType3_HARQ_CodebookFeedback_r17(value.enhancedType3_HARQ_CodebookFeedback_r17);
    }
    if (value.has_triggeredHARQ_CodebookRetx_r17) {
        Free_BandNR_ExtGroup12_TriggeredHARQ_CodebookRetx_r17(value.triggeredHARQ_CodebookRetx_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17：ASN.1 maxModulationOrderForMulticast-r17；源文件第 19826 行；CHOICE。
// Encode_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17 只读不分配；Decode_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(Encoder& enc, const BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr1_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr1_r17), 0, 1);
        break;
    case BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.fr2_r17), 0, 1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(Decoder& dec, BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag)root_index;
    switch (value.tag) {
    case BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr1_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.fr1_r17 = (BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr1_r17)tmp_value;
        break;
    }
    case BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.fr2_r17 = (BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Fr2_r17)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17& value)
{
    switch (value.tag) {
    case BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr1_r17:
        break;
    case BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17_Tag_fr2_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17：ASN.1 srs-SemiPersistent-PosResourcesRRC-Inactive-r17；源文件第 19851 行；SEQUENCE。
// Encode_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17 只读不分配；Decode_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(Encoder& enc, const BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfSemiPersistentSRSposResources_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumOfSemiPersistentSRSposResourcesPerSlot_r17), 0, 9);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(Decoder& dec, BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumOfSemiPersistentSRSposResources_r17 = (BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResources_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.maxNumOfSemiPersistentSRSposResourcesPerSlot_r17 = (BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17_MaxNumOfSemiPersistentSRSposResourcesPerSlot_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup13：ASN.1 BandNR_ExtGroup13；源文件第 19808 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup13 只读不分配；Decode_BandNR_ExtGroup13 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup13 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup13(Encoder& enc, const BandNR_ExtGroup13& value)
{
    (void)value;
    enc.WriteBit(value.has_ue_OneShotUL_TimingAdj_r17);
    enc.WriteBit(value.has_pucch_Repetition_F0_2_r17);
    enc.WriteBit(value.has_cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_mux_HARQ_ACK_DiffPriorities_r17);
    enc.WriteBit(value.has_ta_BasedPDC_NTN_SharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17);
    enc.WriteBit(value.has_maxNumberG_RNTI_r17);
    enc.WriteBit(value.has_dynamicMulticastDCI_Format4_2_r17);
    enc.WriteBit(value.has_maxModulationOrderForMulticast_r17);
    enc.WriteBit(value.has_dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17);
    enc.WriteBit(value.has_nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17);
    enc.WriteBit(value.has_ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17);
    enc.WriteBit(value.has_maxNumberG_CS_RNTI_r17);
    enc.WriteBit(value.has_re_LevelRateMatchingForMulticast_r17);
    enc.WriteBit(value.has_pdsch_1024QAM_2MIMO_FR1_r17);
    enc.WriteBit(value.has_prs_MeasurementWithoutMG_r17);
    enc.WriteBit(value.has_maxNumber_LEO_SatellitesPerCarrier_r17);
    enc.WriteBit(value.has_prs_ProcessingCapabilityOutsideMGinPPW_r17);
    enc.WriteBit(value.has_srs_SemiPersistent_PosResourcesRRC_Inactive_r17);
    enc.WriteBit(value.has_channelBWs_DL_SCS_120kHz_FR2_2_r17);
    enc.WriteBit(value.has_channelBWs_UL_SCS_120kHz_FR2_2_r17);
    if (value.has_ue_OneShotUL_TimingAdj_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_OneShotUL_TimingAdj_r17), 0, 0);
    }
    if (value.has_pucch_Repetition_F0_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pucch_Repetition_F0_2_r17), 0, 0);
    }
    if (value.has_cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17), 0, 0);
    }
    if (value.has_mux_HARQ_ACK_DiffPriorities_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mux_HARQ_ACK_DiffPriorities_r17), 0, 0);
    }
    if (value.has_ta_BasedPDC_NTN_SharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_BasedPDC_NTN_SharedSpectrumChAccess_r17), 0, 0);
    }
    if (value.has_ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17), 0, 0);
    }
    if (value.has_maxNumberG_RNTI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberG_RNTI_r17), 2, 8);
    }
    if (value.has_dynamicMulticastDCI_Format4_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicMulticastDCI_Format4_2_r17), 0, 0);
    }
    if (value.has_maxModulationOrderForMulticast_r17) {
        Encode_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(enc, value.maxModulationOrderForMulticast_r17);
    }
    if (value.has_dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17), 0, 1);
    }
    if (value.has_dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17), 0, 1);
    }
    if (value.has_nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17), 0, 0);
    }
    if (value.has_ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17), 0, 0);
    }
    if (value.has_maxNumberG_CS_RNTI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberG_CS_RNTI_r17), 2, 8);
    }
    if (value.has_re_LevelRateMatchingForMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.re_LevelRateMatchingForMulticast_r17), 0, 0);
    }
    if (value.has_pdsch_1024QAM_2MIMO_FR1_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_1024QAM_2MIMO_FR1_r17), 0, 0);
    }
    if (value.has_prs_MeasurementWithoutMG_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prs_MeasurementWithoutMG_r17), 0, 3);
    }
    if (value.has_maxNumber_LEO_SatellitesPerCarrier_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxNumber_LEO_SatellitesPerCarrier_r17), 3, 4);
    }
    if (value.has_prs_ProcessingCapabilityOutsideMGinPPW_r17) {
enc.WriteConstrainedLength(value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count; ++i) {
    Encode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(enc, value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items[i]);
}
    }
    if (value.has_srs_SemiPersistent_PosResourcesRRC_Inactive_r17) {
        Encode_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(enc, value.srs_SemiPersistent_PosResourcesRRC_Inactive_r17);
    }
    if (value.has_channelBWs_DL_SCS_120kHz_FR2_2_r17) {
        enc.WriteFixedBitString(value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bytes, value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bitLength, 8, 8);
    }
    if (value.has_channelBWs_UL_SCS_120kHz_FR2_2_r17) {
        enc.WriteFixedBitString(value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bytes, value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bitLength, 8, 8);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup13(Decoder& dec, BandNR_ExtGroup13& value)
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
        value.ue_OneShotUL_TimingAdj_r17 = (BandNR_ExtGroup13_Ue_OneShotUL_TimingAdj_r17)0;
    }
    if (present_1) {
        value.pucch_Repetition_F0_2_r17 = (BandNR_ExtGroup13_Pucch_Repetition_F0_2_r17)0;
    }
    if (present_2) {
        value.cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17 = (BandNR_ExtGroup13_Cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17)0;
    }
    if (present_3) {
        value.mux_HARQ_ACK_DiffPriorities_r17 = (BandNR_ExtGroup13_Mux_HARQ_ACK_DiffPriorities_r17)0;
    }
    if (present_4) {
        value.ta_BasedPDC_NTN_SharedSpectrumChAccess_r17 = (BandNR_ExtGroup13_Ta_BasedPDC_NTN_SharedSpectrumChAccess_r17)0;
    }
    if (present_5) {
        value.ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17 = (BandNR_ExtGroup13_Ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17)0;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberG_RNTI_r17 = (int64_t)tmp_value;
    }
    if (present_7) {
        value.dynamicMulticastDCI_Format4_2_r17 = (BandNR_ExtGroup13_DynamicMulticastDCI_Format4_2_r17)0;
    }
    if (present_8) {
        if (Decode_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(dec, value.maxModulationOrderForMulticast_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17 = (BandNR_ExtGroup13_DynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17)tmp_value;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17 = (BandNR_ExtGroup13_DynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17)tmp_value;
    }
    if (present_11) {
        value.nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17 = (BandNR_ExtGroup13_Nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17)0;
    }
    if (present_12) {
        value.ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17 = (BandNR_ExtGroup13_Ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17)0;
    }
    if (present_13) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberG_CS_RNTI_r17 = (int64_t)tmp_value;
    }
    if (present_14) {
        value.re_LevelRateMatchingForMulticast_r17 = (BandNR_ExtGroup13_Re_LevelRateMatchingForMulticast_r17)0;
    }
    if (present_15) {
        value.pdsch_1024QAM_2MIMO_FR1_r17 = (BandNR_ExtGroup13_Pdsch_1024QAM_2MIMO_FR1_r17)0;
    }
    if (present_16) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.prs_MeasurementWithoutMG_r17 = (BandNR_ExtGroup13_Prs_MeasurementWithoutMG_r17)tmp_value;
    }
    if (present_17) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(3, 4, tmp_value)) { goto fail; }
        value.maxNumber_LEO_SatellitesPerCarrier_r17 = (int64_t)tmp_value;
    }
    if (present_18) {
if (!dec.ReadConstrainedLength(0u, 0u, value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count)) { goto fail; }
if (value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count > 0u) {
    value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items = (PRS_ProcessingCapabilityOutsideMGinPPWperType_r17*)std::malloc((std::size_t)value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count * sizeof(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17));
    if (value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items, 0, (std::size_t)value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count * sizeof(PRS_ProcessingCapabilityOutsideMGinPPWperType_r17));
}
for (std::uint32_t i = 0; i < value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count; ++i) {
    if (Decode_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(dec, value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_19) {
        if (Decode_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(dec, value.srs_SemiPersistent_PosResourcesRRC_Inactive_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_20) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bytes = string_bytes;
        value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bitLength = string_length;
    }
    if (present_21) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bytes = string_bytes;
        value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup13(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup13(BandNR_ExtGroup13& value)
{
    if (value.has_ue_OneShotUL_TimingAdj_r17) {
    }
    if (value.has_pucch_Repetition_F0_2_r17) {
    }
    if (value.has_cqi_4_BitsSubbandNTN_SharedSpectrumChAccess_r17) {
    }
    if (value.has_mux_HARQ_ACK_DiffPriorities_r17) {
    }
    if (value.has_ta_BasedPDC_NTN_SharedSpectrumChAccess_r17) {
    }
    if (value.has_ack_NACK_FeedbackForMulticastWithDCI_Enabler_r17) {
    }
    if (value.has_maxNumberG_RNTI_r17) {
    }
    if (value.has_dynamicMulticastDCI_Format4_2_r17) {
    }
    if (value.has_maxModulationOrderForMulticast_r17) {
        Free_BandNR_ExtGroup13_MaxModulationOrderForMulticast_r17(value.maxModulationOrderForMulticast_r17);
    }
    if (value.has_dynamicSlotRepetitionMulticastTN_NonSharedSpectrumChAccess_r17) {
    }
    if (value.has_dynamicSlotRepetitionMulticastNTN_SharedSpectrumChAccess_r17) {
    }
    if (value.has_nack_OnlyFeedbackForMulticastWithDCI_Enabler_r17) {
    }
    if (value.has_ack_NACK_FeedbackForSPS_MulticastWithDCI_Enabler_r17) {
    }
    if (value.has_maxNumberG_CS_RNTI_r17) {
    }
    if (value.has_re_LevelRateMatchingForMulticast_r17) {
    }
    if (value.has_pdsch_1024QAM_2MIMO_FR1_r17) {
    }
    if (value.has_prs_MeasurementWithoutMG_r17) {
    }
    if (value.has_maxNumber_LEO_SatellitesPerCarrier_r17) {
    }
    if (value.has_prs_ProcessingCapabilityOutsideMGinPPW_r17) {
        if (value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count; ++i) {
                Free_PRS_ProcessingCapabilityOutsideMGinPPWperType_r17(value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items[i]);
            }
            std::free(value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items);
            value.prs_ProcessingCapabilityOutsideMGinPPW_r17_items = nullptr;
        }
        value.prs_ProcessingCapabilityOutsideMGinPPW_r17_count = 0;
    }
    if (value.has_srs_SemiPersistent_PosResourcesRRC_Inactive_r17) {
        Free_BandNR_ExtGroup13_Srs_SemiPersistent_PosResourcesRRC_Inactive_r17(value.srs_SemiPersistent_PosResourcesRRC_Inactive_r17);
    }
    if (value.has_channelBWs_DL_SCS_120kHz_FR2_2_r17) {
        std::free(value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bytes);
        value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bytes = nullptr;
        value.channelBWs_DL_SCS_120kHz_FR2_2_r17.bitLength = 0;
    }
    if (value.has_channelBWs_UL_SCS_120kHz_FR2_2_r17) {
        std::free(value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bytes);
        value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bytes = nullptr;
        value.channelBWs_UL_SCS_120kHz_FR2_2_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup14：ASN.1 BandNR_ExtGroup14；源文件第 19859 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup14 只读不分配；Decode_BandNR_ExtGroup14 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup14 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup14(Encoder& enc, const BandNR_ExtGroup14& value)
{
    (void)value;
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_RepTypeA_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_RepTypeB_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUSCH_multiSlot_r17);
    enc.WriteBit(value.has_dmrs_BundlingPUCCH_Rep_r17);
    enc.WriteBit(value.has_interSlotFreqHopInterSlotBundlingPUSCH_r17);
    enc.WriteBit(value.has_interSlotFreqHopPUCCH_r17);
    enc.WriteBit(value.has_dmrs_BundlingRestart_r17);
    enc.WriteBit(value.has_dmrs_BundlingNonBackToBackTX_r17);
    if (value.has_dmrs_BundlingPUSCH_RepTypeA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUSCH_RepTypeA_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUSCH_RepTypeB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUSCH_RepTypeB_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUSCH_multiSlot_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUSCH_multiSlot_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingPUCCH_Rep_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingPUCCH_Rep_r17), 0, 0);
    }
    if (value.has_interSlotFreqHopInterSlotBundlingPUSCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interSlotFreqHopInterSlotBundlingPUSCH_r17), 0, 0);
    }
    if (value.has_interSlotFreqHopPUCCH_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.interSlotFreqHopPUCCH_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingRestart_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingRestart_r17), 0, 0);
    }
    if (value.has_dmrs_BundlingNonBackToBackTX_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dmrs_BundlingNonBackToBackTX_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup14(Decoder& dec, BandNR_ExtGroup14& value)
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
        value.dmrs_BundlingPUSCH_RepTypeA_r17 = (BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeA_r17)0;
    }
    if (present_1) {
        value.dmrs_BundlingPUSCH_RepTypeB_r17 = (BandNR_ExtGroup14_Dmrs_BundlingPUSCH_RepTypeB_r17)0;
    }
    if (present_2) {
        value.dmrs_BundlingPUSCH_multiSlot_r17 = (BandNR_ExtGroup14_Dmrs_BundlingPUSCH_multiSlot_r17)0;
    }
    if (present_3) {
        value.dmrs_BundlingPUCCH_Rep_r17 = (BandNR_ExtGroup14_Dmrs_BundlingPUCCH_Rep_r17)0;
    }
    if (present_4) {
        value.interSlotFreqHopInterSlotBundlingPUSCH_r17 = (BandNR_ExtGroup14_InterSlotFreqHopInterSlotBundlingPUSCH_r17)0;
    }
    if (present_5) {
        value.interSlotFreqHopPUCCH_r17 = (BandNR_ExtGroup14_InterSlotFreqHopPUCCH_r17)0;
    }
    if (present_6) {
        value.dmrs_BundlingRestart_r17 = (BandNR_ExtGroup14_Dmrs_BundlingRestart_r17)0;
    }
    if (present_7) {
        value.dmrs_BundlingNonBackToBackTX_r17 = (BandNR_ExtGroup14_Dmrs_BundlingNonBackToBackTX_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup14(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup14(BandNR_ExtGroup14& value)
{
    if (value.has_dmrs_BundlingPUSCH_RepTypeA_r17) {
    }
    if (value.has_dmrs_BundlingPUSCH_RepTypeB_r17) {
    }
    if (value.has_dmrs_BundlingPUSCH_multiSlot_r17) {
    }
    if (value.has_dmrs_BundlingPUCCH_Rep_r17) {
    }
    if (value.has_interSlotFreqHopInterSlotBundlingPUSCH_r17) {
    }
    if (value.has_interSlotFreqHopPUCCH_r17) {
    }
    if (value.has_dmrs_BundlingRestart_r17) {
    }
    if (value.has_dmrs_BundlingNonBackToBackTX_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup15：ASN.1 BandNR_ExtGroup15；源文件第 19877 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup15 只读不分配；Decode_BandNR_ExtGroup15 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup15 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup15(Encoder& enc, const BandNR_ExtGroup15& value)
{
    (void)value;
    enc.WriteBit(value.has_maxDynamicSlotRepetitionForSPS_Multicast_r17);
    enc.WriteBit(value.has_nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17);
    enc.WriteBit(value.has_sps_MulticastDCI_Format4_2_r17);
    enc.WriteBit(value.has_sps_MulticastMultiConfig_r17);
    enc.WriteBit(value.has_priorityIndicatorInDCI_Multicast_r17);
    enc.WriteBit(value.has_priorityIndicatorInDCI_SPS_Multicast_r17);
    enc.WriteBit(value.has_twoHARQ_ACK_CodebookForUnicastAndMulticast_r17);
    enc.WriteBit(value.has_multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17);
    enc.WriteBit(value.has_releaseSPS_MulticastWithCS_RNTI_r17);
    if (value.has_maxDynamicSlotRepetitionForSPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxDynamicSlotRepetitionForSPS_Multicast_r17), 0, 1);
    }
    if (value.has_nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17), 0, 0);
    }
    if (value.has_sps_MulticastDCI_Format4_2_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_MulticastDCI_Format4_2_r17), 0, 0);
    }
    if (value.has_sps_MulticastMultiConfig_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sps_MulticastMultiConfig_r17), 1, 8);
    }
    if (value.has_priorityIndicatorInDCI_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorInDCI_Multicast_r17), 0, 0);
    }
    if (value.has_priorityIndicatorInDCI_SPS_Multicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityIndicatorInDCI_SPS_Multicast_r17), 0, 0);
    }
    if (value.has_twoHARQ_ACK_CodebookForUnicastAndMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.twoHARQ_ACK_CodebookForUnicastAndMulticast_r17), 0, 0);
    }
    if (value.has_multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17), 0, 0);
    }
    if (value.has_releaseSPS_MulticastWithCS_RNTI_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.releaseSPS_MulticastWithCS_RNTI_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup15(Decoder& dec, BandNR_ExtGroup15& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.maxDynamicSlotRepetitionForSPS_Multicast_r17 = (BandNR_ExtGroup15_MaxDynamicSlotRepetitionForSPS_Multicast_r17)tmp_value;
    }
    if (present_1) {
        value.nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17 = (BandNR_ExtGroup15_Nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17)0;
    }
    if (present_2) {
        value.sps_MulticastDCI_Format4_2_r17 = (BandNR_ExtGroup15_Sps_MulticastDCI_Format4_2_r17)0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sps_MulticastMultiConfig_r17 = (int64_t)tmp_value;
    }
    if (present_4) {
        value.priorityIndicatorInDCI_Multicast_r17 = (BandNR_ExtGroup15_PriorityIndicatorInDCI_Multicast_r17)0;
    }
    if (present_5) {
        value.priorityIndicatorInDCI_SPS_Multicast_r17 = (BandNR_ExtGroup15_PriorityIndicatorInDCI_SPS_Multicast_r17)0;
    }
    if (present_6) {
        value.twoHARQ_ACK_CodebookForUnicastAndMulticast_r17 = (BandNR_ExtGroup15_TwoHARQ_ACK_CodebookForUnicastAndMulticast_r17)0;
    }
    if (present_7) {
        value.multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17 = (BandNR_ExtGroup15_MultiPUCCH_HARQ_ACK_ForMulticastUnicast_r17)0;
    }
    if (present_8) {
        value.releaseSPS_MulticastWithCS_RNTI_r17 = (BandNR_ExtGroup15_ReleaseSPS_MulticastWithCS_RNTI_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup15(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup15(BandNR_ExtGroup15& value)
{
    if (value.has_maxDynamicSlotRepetitionForSPS_Multicast_r17) {
    }
    if (value.has_nack_OnlyFeedbackForSPS_MulticastWithDCI_Enabler_r17) {
    }
    if (value.has_sps_MulticastDCI_Format4_2_r17) {
    }
    if (value.has_sps_MulticastMultiConfig_r17) {
    }
    if (value.has_priorityIndicatorInDCI_Multicast_r17) {
    }
    if (value.has_priorityIndicatorInDCI_SPS_Multicast_r17) {
    }
    if (value.has_twoHARQ_ACK_CodebookForUnicastAndMulticast_r17) {
    }
    if (value.has_multiPUCCH_HARQ_ACK_ForMulticastUnicast_r17) {
    }
    if (value.has_releaseSPS_MulticastWithCS_RNTI_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18：ASN.1 spatialAdaptation-CSI-Feedback-r18/maxNumberCSI-ResourcePerCC-r18；源文件第 19925 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18：ASN.1 spatialAdaptation-CSI-Feedback-r18/maxNumberTotalCSI-ResourcePerCC-r18；源文件第 19929 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 0, 5);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18：ASN.1 spatialAdaptation-CSI-Feedback-r18；源文件第 19922 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.csiFeedbackType_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 4);
    Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(enc, value.maxNumberCSI_ResourcePerCC_r18);
    Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(enc, value.maxNumberTotalCSI_ResourcePerCC_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.csiFeedbackType_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_CsiFeedbackType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(dec, value.maxNumberCSI_ResourcePerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(dec, value.maxNumberTotalCSI_ResourcePerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18& value)
{
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberCSI_ResourcePerCC_r18(value.maxNumberCSI_ResourcePerCC_r18);
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18(value.maxNumberTotalCSI_ResourcePerCC_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18：ASN.1 spatialAdaptation-CSI-FeedbackPUSCH-r18；源文件第 19937 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.csiFeedbackType_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.subReportCSI_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourcePerCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalCSI_ResourcePerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 12);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.csiFeedbackType_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_CsiFeedbackType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.subReportCSI_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourcePerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTotalCSI_ResourcePerCC_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 12, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18：ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18/maxNumberCSI-ResourcePerCC-r18；源文件第 19950 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18：ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18/maxNumberTotalCSI-ResourcePerCC-r18；源文件第 19954 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType1_Resource_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.sdType2_Resource_r18), 0, 5);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.sdType1_Resource_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType1_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.sdType2_Resource_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18_SdType2_Resource_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18：ASN.1 spatialAdaptation-CSI-FeedbackAperiodic-r18；源文件第 19946 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.csiFeedbackType_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.subReportCSI_r18), 2, 4);
    Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(enc, value.maxNumberCSI_ResourcePerCC_r18);
    Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(enc, value.maxNumberTotalCSI_ResourcePerCC_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 12);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.csiFeedbackType_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_CsiFeedbackType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.subReportCSI_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(dec, value.maxNumberCSI_ResourcePerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(dec, value.maxNumberTotalCSI_ResourcePerCC_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 12, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18& value)
{
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberCSI_ResourcePerCC_r18(value.maxNumberCSI_ResourcePerCC_r18);
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18(value.maxNumberTotalCSI_ResourcePerCC_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18：ASN.1 spatialAdaptation-CSI-FeedbackPUCCH-r18；源文件第 19962 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18 只读不分配；Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(Encoder& enc, const BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.csiFeedbackType_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.subReportCSI_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourcePerCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalCSI_ResourcePerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(Decoder& dec, BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.csiFeedbackType_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_CsiFeedbackType_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.subReportCSI_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourcePerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTotalCSI_ResourcePerCC_r18 = (BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18：ASN.1 powerAdaptation-CSI-Feedback-r18；源文件第 19971 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18 只读不分配；Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(Encoder& enc, const BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourcePerCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalCSI_ResourcePerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(Decoder& dec, BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourcePerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTotalCSI_ResourcePerCC_r18 = (BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18_MaxNumberTotalCSI_ResourcePerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18：ASN.1 powerAdaptation-CSI-FeedbackPUSCH-r18；源文件第 19979 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18 只读不分配；Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(Encoder& enc, const BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.subReportCSI_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourcePerCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalCSI_ResourcePerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 12);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(Decoder& dec, BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.subReportCSI_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourcePerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTotalCSI_ResourcePerCC_r18 = (BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 12, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18：ASN.1 powerAdaptation-CSI-FeedbackAperiodic-r18；源文件第 19987 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18 只读不分配；Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(Encoder& enc, const BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.subReportCSI_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourcePerCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalCSI_ResourcePerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 12);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(Decoder& dec, BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.subReportCSI_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourcePerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTotalCSI_ResourcePerCC_r18 = (BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18_MaxNumberTotalCSI_ResourcePerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 12, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18：ASN.1 powerAdaptation-CSI-FeedbackPUCCH-r18；源文件第 19996 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18 只读不分配；Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(Encoder& enc, const BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberLmax_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.subReportCSI_r18), 2, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCSI_ResourcePerCC_r18), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberTotalCSI_ResourcePerCC_r18), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.totalNumberCSI_Reporting_r18), 2, 4);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(Decoder& dec, BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.maxNumberLmax_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.subReportCSI_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNumberCSI_ResourcePerCC_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.maxNumberTotalCSI_ResourcePerCC_r18 = (BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18_MaxNumberTotalCSI_ResourcePerCC_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 4, tmp_value)) { goto fail; }
        value.totalNumberCSI_Reporting_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18：ASN.1 ltm-BeamIndicationJointTCI-r18；源文件第 20013 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18 只读不分配；Decode_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(Encoder& enc, const BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberJointTCI_PerCell_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Resource_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberJointTCI_AcrossCells_r18), 1, 128);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCells_r18), 1, 8);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(Decoder& dec, BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberJointTCI_PerCell_r18 = (BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_MaxNumberJointTCI_PerCell_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.qcl_Resource_r18 = (BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18_Qcl_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 128, tmp_value)) { goto fail; }
        value.maxNumberJointTCI_AcrossCells_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCells_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18：ASN.1 ltm-MAC-CE-JointTCI-r18；源文件第 20020 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18 只读不分配；Decode_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(Encoder& enc, const BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Resource_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberJointTCI_PerCell_r18), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberJointTCI_AcrossCells_r18), 0, 6);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(Decoder& dec, BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.qcl_Resource_r18 = (BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_Qcl_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.maxNumberJointTCI_PerCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.maxNumberJointTCI_AcrossCells_r18 = (BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18_MaxNumberJointTCI_AcrossCells_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18：ASN.1 ltm-BeamIndicationSeparateTCI-r18；源文件第 20026 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18 只读不分配；Decode_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(Encoder& enc, const BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberDL_TCI_PerCell_r18), 0, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberUL_TCI_PerCell_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Resource_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberDL_TCI_AcrossCells_r18), 1, 128);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberUL_TCI_AcrossCells_r18), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberCells_r18), 1, 8);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(Decoder& dec, BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.maxNumberDL_TCI_PerCell_r18 = (BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberDL_TCI_PerCell_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.maxNumberUL_TCI_PerCell_r18 = (BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_MaxNumberUL_TCI_PerCell_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.qcl_Resource_r18 = (BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18_Qcl_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 128, tmp_value)) { goto fail; }
        value.maxNumberDL_TCI_AcrossCells_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.maxNumberUL_TCI_AcrossCells_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberCells_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18：ASN.1 ltm-MAC-CE-SeparateTCI-r18；源文件第 20035 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18 只读不分配；Decode_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(Encoder& enc, const BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.qcl_Resource_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberDL_TCI_PerCell_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberUL_TCI_PerCell_r18), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberDL_TCI_AcrossCells_r18), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberUL_TCI_AcrossCells_r18), 0, 4);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(Decoder& dec, BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.qcl_Resource_r18 = (BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_Qcl_Resource_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberDL_TCI_PerCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.maxNumberUL_TCI_PerCell_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberDL_TCI_AcrossCells_r18 = (BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberDL_TCI_AcrossCells_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberUL_TCI_AcrossCells_r18 = (BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18_MaxNumberUL_TCI_AcrossCells_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18：ASN.1 multiPUSCH-ActiveConfiguredGrant-r18；源文件第 20052 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18 只读不分配；Decode_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(Encoder& enc, const BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsPerBWP), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsAllCC_FR1), 2, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberConfigsAllCC_FR2), 2, 32);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(Decoder& dec, BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.maxNumberConfigsPerBWP = (BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18_MaxNumberConfigsPerBWP)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.maxNumberConfigsAllCC_FR1 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 32, tmp_value)) { goto fail; }
        value.maxNumberConfigsAllCC_FR2 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18：ASN.1 nr-PDCCH-OverlapLTE-CRS-RE-r18；源文件第 20071 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18 只读不分配；Decode_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(Encoder& enc, const BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.overlapInRE_r18), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.overlapInSymbol_r18), 0, 1);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(Decoder& dec, BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.overlapInRE_r18 = (BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInRE_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.overlapInSymbol_r18 = (BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18_OverlapInSymbol_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18：ASN.1 twoRateMatchingEUTRA-CRS-patterns-3-4-r18；源文件第 20084 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18 只读不分配；Decode_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(Encoder& enc, const BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberPatterns_r18), 2, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNumberNon_OverlapPatterns_r18), 1, 3);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(Decoder& dec, BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 6, tmp_value)) { goto fail; }
        value.maxNumberPatterns_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 3, tmp_value)) { goto fail; }
        value.maxNumberNon_OverlapPatterns_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18：ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr1-r18；源文件第 20112 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18 只读不分配；Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(Encoder& enc, const BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz_r18);
    enc.WriteBit(value.has_scs_30kHz_r18);
    enc.WriteBit(value.has_scs_60kHz_r18);
    if (value.has_scs_15kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_15kHz_r18), 0, 10);
    }
    if (value.has_scs_30kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_30kHz_r18), 0, 10);
    }
    if (value.has_scs_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r18), 0, 10);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(Decoder& dec, BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_15kHz_r18 = (BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_15kHz_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_30kHz_r18 = (BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_30kHz_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_60kHz_r18 = (BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18_Scs_60kHz_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18& value)
{
    if (value.has_scs_15kHz_r18) {
    }
    if (value.has_scs_30kHz_r18) {
    }
    if (value.has_scs_60kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18：ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18/fr2-r18；源文件第 20117 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18 只读不分配；Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(Encoder& enc, const BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz_r18);
    enc.WriteBit(value.has_scs_120kHz_r18);
    if (value.has_scs_60kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_60kHz_r18), 0, 10);
    }
    if (value.has_scs_120kHz_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.scs_120kHz_r18), 0, 10);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(Decoder& dec, BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_60kHz_r18 = (BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_60kHz_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.scs_120kHz_r18 = (BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18_Scs_120kHz_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18& value)
{
    if (value.has_scs_60kHz_r18) {
    }
    if (value.has_scs_120kHz_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18：ASN.1 pdc-maxNumberPRS-ResourceProcessedPerSlot-r18；源文件第 20111 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18 只读不分配；Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(Encoder& enc, const BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18& value)
{
    (void)value;
    Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(enc, value.fr1_r18);
    Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(enc, value.fr2_r18);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(Decoder& dec, BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(dec, value.fr1_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(dec, value.fr2_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18& value)
{
    Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr1_r18(value.fr1_r18);
    Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18_Fr2_r18(value.fr2_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16_BeamSweepingFactorReduction_r18：ASN.1 beamSweepingFactorReduction-r18；源文件第 20129 行；SEQUENCE。
// Encode_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18 只读不分配；Decode_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(Encoder& enc, const BandNR_ExtGroup16_BeamSweepingFactorReduction_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reduceForCellDetection), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.reduceForSSB_L1_RSRP_Meas), 0, 7);
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(Decoder& dec, BandNR_ExtGroup16_BeamSweepingFactorReduction_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.reduceForCellDetection = (BandNR_ExtGroup16_BeamSweepingFactorReduction_r18_ReduceForCellDetection)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reduceForSSB_L1_RSRP_Meas = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(BandNR_ExtGroup16_BeamSweepingFactorReduction_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ExtGroup16：ASN.1 BandNR_ExtGroup16；源文件第 19898 行；扩展添加组 [[ ]]。
// Encode_BandNR_ExtGroup16 只读不分配；Decode_BandNR_ExtGroup16 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ExtGroup16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ExtGroup16(Encoder& enc, const BandNR_ExtGroup16& value)
{
    (void)value;
    enc.WriteBit(value.has_posUE_TA_AutoAdjustment_r18);
    enc.WriteBit(value.has_posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18);
    enc.WriteBit(value.has_posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18);
    enc.WriteBit(value.has_dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18);
    enc.WriteBit(value.has_posSRS_TxFH_RRC_ConnectedForRedCap_r18);
    enc.WriteBit(value.has_posSRS_TxFH_RRC_InactiveForRedCap_r18);
    enc.WriteBit(value.has_posSRS_BWA_RRC_Inactive_r18);
    enc.WriteBit(value.has_posJointTriggerBySingleDCI_RRC_Connected_r18);
    enc.WriteBit(value.has_dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18);
    enc.WriteBit(value.has_dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_Feedback_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackPUSCH_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackAperiodic_r18);
    enc.WriteBit(value.has_spatialAdaptation_CSI_FeedbackPUCCH_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_Feedback_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackPUSCH_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackAperiodic_r18);
    enc.WriteBit(value.has_powerAdaptation_CSI_FeedbackPUCCH_r18);
    enc.WriteBit(value.has_nes_CellDTX_DRX_r18);
    enc.WriteBit(value.has_nes_CellDTX_DRX_DCI2_9_r18);
    enc.WriteBit(value.has_mixCodeBookSpatialAdaptation_r18);
    enc.WriteBit(value.has_ntn_DMRS_BundlingNGSO_r18);
    enc.WriteBit(value.has_ltm_BeamIndicationJointTCI_r18);
    enc.WriteBit(value.has_ltm_MAC_CE_JointTCI_r18);
    enc.WriteBit(value.has_ltm_BeamIndicationSeparateTCI_r18);
    enc.WriteBit(value.has_ltm_MAC_CE_SeparateTCI_r18);
    enc.WriteBit(value.has_rach_EarlyTA_Measurement_r18);
    enc.WriteBit(value.has_ue_TA_Measurement_r18);
    enc.WriteBit(value.has_ta_IndicationCellSwitch_r18);
    enc.WriteBit(value.has_multiPUSCH_CG_r18);
    enc.WriteBit(value.has_multiPUSCH_ActiveConfiguredGrant_r18);
    enc.WriteBit(value.has_jointReleaseDCI_r18);
    enc.WriteBit(value.has_cg_PUSCH_UTO_UCI_Ind_r18);
    enc.WriteBit(value.has_pdcch_MonitoringResumptionAfterUL_NACK_r18);
    enc.WriteBit(value.has_support_3MHz_ChannelBW_r18);
    enc.WriteBit(value.has_support_12PRB_CORESET0_r18);
    enc.WriteBit(value.has_nr_PDCCH_OverlapLTE_CRS_RE_r18);
    enc.WriteBit(value.has_nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18);
    enc.WriteBit(value.has_nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18);
    enc.WriteBit(value.has_twoRateMatchingEUTRA_CRS_patterns_3_4_r18);
    enc.WriteBit(value.has_overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18);
    enc.WriteBit(value.has_ncd_SSB_BWP_Wor_r18);
    enc.WriteBit(value.has_rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18);
    enc.WriteBit(value.has_prach_CoverageEnh_r18);
    enc.WriteBit(value.has_prach_Repetition_r18);
    enc.WriteBit(value.has_dynamicWaveformSwitch_r18);
    enc.WriteBit(value.has_dynamicWaveformSwitchPHR_r18);
    enc.WriteBit(value.has_dynamicWaveformSwitchIntraCA_r18);
    enc.WriteBit(value.has_multiPUSCH_SingleDCI_NonConsSlots_r18);
    enc.WriteBit(value.has_pdc_maxNumberPRS_ResourceProcessedPerSlot_r18);
    enc.WriteBit(value.has_lowerMSD_r18);
    enc.WriteBit(value.has_lowerMSD_ENDC_r18);
    enc.WriteBit(value.has_enhancedChannelRaster_r18);
    enc.WriteBit(value.has_beamSweepingFactorReduction_r18);
    enc.WriteBit(value.has_simultaneousReceptionTwoQCL_r18);
    enc.WriteBit(value.has_measEnhCAInterFreqFR2_r18);
    enc.WriteBit(value.has_tci_StateSwitchInd_r18);
    enc.WriteBit(value.has_antennaArrayType_r18);
    enc.WriteBit(value.has_locationBasedCondHandoverATG_r18);
    enc.WriteBit(value.has_maxOutputPowerATG_r18);
    enc.WriteBit(value.has_eventA4BasedCondHandoverNES_r18);
    enc.WriteBit(value.has_nesBasedCondHandoverWithDCI_r18);
    enc.WriteBit(value.has_rachLessHandoverNTN_r18);
    enc.WriteBit(value.has_locationBasedCondHandoverEMC_r18);
    enc.WriteBit(value.has_mt_CG_SDT_r18);
    enc.WriteBit(value.has_posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18);
    enc.WriteBit(value.has_posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18);
    enc.WriteBit(value.has_cg_SDT_PeriodicityExt_r18);
    enc.WriteBit(value.has_supportOf2RxXR_r18);
    if (value.has_posUE_TA_AutoAdjustment_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posUE_TA_AutoAdjustment_r18), 0, 0);
    }
    if (value.has_posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18), 0, 0);
    }
    if (value.has_posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18), 0, 0);
    }
    if (value.has_dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18) {
        Encode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(enc, value.dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18);
    }
    if (value.has_posSRS_TxFH_RRC_ConnectedForRedCap_r18) {
        Encode_PosSRS_TxFrequencyHoppingRRC_Connected_r18(enc, value.posSRS_TxFH_RRC_ConnectedForRedCap_r18);
    }
    if (value.has_posSRS_TxFH_RRC_InactiveForRedCap_r18) {
        Encode_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(enc, value.posSRS_TxFH_RRC_InactiveForRedCap_r18);
    }
    if (value.has_posSRS_BWA_RRC_Inactive_r18) {
        Encode_PosSRS_BWA_RRC_Inactive_r18(enc, value.posSRS_BWA_RRC_Inactive_r18);
    }
    if (value.has_posJointTriggerBySingleDCI_RRC_Connected_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posJointTriggerBySingleDCI_RRC_Connected_r18), 0, 0);
    }
    if (value.has_dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18), 0, 0);
    }
    if (value.has_dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18), 0, 0);
    }
    if (value.has_spatialAdaptation_CSI_Feedback_r18) {
        Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(enc, value.spatialAdaptation_CSI_Feedback_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUSCH_r18) {
        Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(enc, value.spatialAdaptation_CSI_FeedbackPUSCH_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackAperiodic_r18) {
        Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(enc, value.spatialAdaptation_CSI_FeedbackAperiodic_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUCCH_r18) {
        Encode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(enc, value.spatialAdaptation_CSI_FeedbackPUCCH_r18);
    }
    if (value.has_powerAdaptation_CSI_Feedback_r18) {
        Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(enc, value.powerAdaptation_CSI_Feedback_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUSCH_r18) {
        Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(enc, value.powerAdaptation_CSI_FeedbackPUSCH_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackAperiodic_r18) {
        Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(enc, value.powerAdaptation_CSI_FeedbackAperiodic_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUCCH_r18) {
        Encode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(enc, value.powerAdaptation_CSI_FeedbackPUCCH_r18);
    }
    if (value.has_nes_CellDTX_DRX_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nes_CellDTX_DRX_r18), 0, 2);
    }
    if (value.has_nes_CellDTX_DRX_DCI2_9_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nes_CellDTX_DRX_DCI2_9_r18), 0, 0);
    }
    if (value.has_mixCodeBookSpatialAdaptation_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mixCodeBookSpatialAdaptation_r18), 0, 0);
    }
    if (value.has_ntn_DMRS_BundlingNGSO_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_DMRS_BundlingNGSO_r18), 0, 3);
    }
    if (value.has_ltm_BeamIndicationJointTCI_r18) {
        Encode_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(enc, value.ltm_BeamIndicationJointTCI_r18);
    }
    if (value.has_ltm_MAC_CE_JointTCI_r18) {
        Encode_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(enc, value.ltm_MAC_CE_JointTCI_r18);
    }
    if (value.has_ltm_BeamIndicationSeparateTCI_r18) {
        Encode_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(enc, value.ltm_BeamIndicationSeparateTCI_r18);
    }
    if (value.has_ltm_MAC_CE_SeparateTCI_r18) {
        Encode_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(enc, value.ltm_MAC_CE_SeparateTCI_r18);
    }
    if (value.has_rach_EarlyTA_Measurement_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rach_EarlyTA_Measurement_r18), 1, 8);
    }
    if (value.has_ue_TA_Measurement_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_TA_Measurement_r18), 1, 8);
    }
    if (value.has_ta_IndicationCellSwitch_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_IndicationCellSwitch_r18), 0, 0);
    }
    if (value.has_multiPUSCH_CG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_CG_r18), 0, 1);
    }
    if (value.has_multiPUSCH_ActiveConfiguredGrant_r18) {
        Encode_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(enc, value.multiPUSCH_ActiveConfiguredGrant_r18);
    }
    if (value.has_jointReleaseDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.jointReleaseDCI_r18), 0, 0);
    }
    if (value.has_cg_PUSCH_UTO_UCI_Ind_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_PUSCH_UTO_UCI_Ind_r18), 0, 0);
    }
    if (value.has_pdcch_MonitoringResumptionAfterUL_NACK_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdcch_MonitoringResumptionAfterUL_NACK_r18), 0, 0);
    }
    if (value.has_support_3MHz_ChannelBW_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.support_3MHz_ChannelBW_r18), 0, 0);
    }
    if (value.has_support_12PRB_CORESET0_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.support_12PRB_CORESET0_r18), 0, 0);
    }
    if (value.has_nr_PDCCH_OverlapLTE_CRS_RE_r18) {
        Encode_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(enc, value.nr_PDCCH_OverlapLTE_CRS_RE_r18);
    }
    if (value.has_nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18), 0, 0);
    }
    if (value.has_nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18), 0, 0);
    }
    if (value.has_twoRateMatchingEUTRA_CRS_patterns_3_4_r18) {
        Encode_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(enc, value.twoRateMatchingEUTRA_CRS_patterns_3_4_r18);
    }
    if (value.has_overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18), 0, 0);
    }
    if (value.has_ncd_SSB_BWP_Wor_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncd_SSB_BWP_Wor_r18), 0, 0);
    }
    if (value.has_rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18), 0, 0);
    }
    if (value.has_prach_CoverageEnh_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_CoverageEnh_r18), 0, 0);
    }
    if (value.has_prach_Repetition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.prach_Repetition_r18), 0, 0);
    }
    if (value.has_dynamicWaveformSwitch_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicWaveformSwitch_r18), 0, 0);
    }
    if (value.has_dynamicWaveformSwitchPHR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicWaveformSwitchPHR_r18), 0, 0);
    }
    if (value.has_dynamicWaveformSwitchIntraCA_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.dynamicWaveformSwitchIntraCA_r18), 2, 8);
    }
    if (value.has_multiPUSCH_SingleDCI_NonConsSlots_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multiPUSCH_SingleDCI_NonConsSlots_r18), 0, 0);
    }
    if (value.has_pdc_maxNumberPRS_ResourceProcessedPerSlot_r18) {
        Encode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(enc, value.pdc_maxNumberPRS_ResourceProcessedPerSlot_r18);
    }
    if (value.has_lowerMSD_r18) {
enc.WriteConstrainedLength(value.lowerMSD_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.lowerMSD_r18_count; ++i) {
    Encode_LowerMSD_r18(enc, value.lowerMSD_r18_items[i]);
}
    }
    if (value.has_lowerMSD_ENDC_r18) {
enc.WriteConstrainedLength(value.lowerMSD_ENDC_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.lowerMSD_ENDC_r18_count; ++i) {
    Encode_LowerMSD_r18(enc, value.lowerMSD_ENDC_r18_items[i]);
}
    }
    if (value.has_enhancedChannelRaster_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enhancedChannelRaster_r18), 0, 0);
    }
    if (value.has_beamSweepingFactorReduction_r18) {
        Encode_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(enc, value.beamSweepingFactorReduction_r18);
    }
    if (value.has_simultaneousReceptionTwoQCL_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.simultaneousReceptionTwoQCL_r18), 0, 0);
    }
    if (value.has_measEnhCAInterFreqFR2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measEnhCAInterFreqFR2_r18), 0, 0);
    }
    if (value.has_tci_StateSwitchInd_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.tci_StateSwitchInd_r18), 0, 0);
    }
    if (value.has_antennaArrayType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.antennaArrayType_r18), 0, 0);
    }
    if (value.has_locationBasedCondHandoverATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.locationBasedCondHandoverATG_r18), 0, 0);
    }
    if (value.has_maxOutputPowerATG_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.maxOutputPowerATG_r18), 1, 18);
    }
    if (value.has_eventA4BasedCondHandoverNES_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventA4BasedCondHandoverNES_r18), 0, 0);
    }
    if (value.has_nesBasedCondHandoverWithDCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nesBasedCondHandoverWithDCI_r18), 0, 0);
    }
    if (value.has_rachLessHandoverNTN_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rachLessHandoverNTN_r18), 0, 0);
    }
    if (value.has_locationBasedCondHandoverEMC_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.locationBasedCondHandoverEMC_r18), 0, 0);
    }
    if (value.has_mt_CG_SDT_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.mt_CG_SDT_r18), 0, 0);
    }
    if (value.has_posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18), 0, 0);
    }
    if (value.has_posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18), 0, 0);
    }
    if (value.has_cg_SDT_PeriodicityExt_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.cg_SDT_PeriodicityExt_r18), 0, 0);
    }
    if (value.has_supportOf2RxXR_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.supportOf2RxXR_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ExtGroup16(Decoder& dec, BandNR_ExtGroup16& value)
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
    bool present_30 = false;
    bool present_31 = false;
    bool present_32 = false;
    bool present_33 = false;
    bool present_34 = false;
    bool present_35 = false;
    bool present_36 = false;
    bool present_37 = false;
    bool present_38 = false;
    bool present_39 = false;
    bool present_40 = false;
    bool present_41 = false;
    bool present_42 = false;
    bool present_43 = false;
    bool present_44 = false;
    bool present_45 = false;
    bool present_46 = false;
    bool present_47 = false;
    bool present_48 = false;
    bool present_49 = false;
    bool present_50 = false;
    bool present_51 = false;
    bool present_52 = false;
    bool present_53 = false;
    bool present_54 = false;
    bool present_55 = false;
    bool present_56 = false;
    bool present_57 = false;
    bool present_58 = false;
    bool present_59 = false;
    bool present_60 = false;
    bool present_61 = false;
    bool present_62 = false;
    bool present_63 = false;
    bool present_64 = false;
    bool present_65 = false;
    bool present_66 = false;
    bool present_67 = false;
    bool present_68 = false;
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
    if (!dec.ReadBit(present_30)) { goto fail; }
    if (!dec.ReadBit(present_31)) { goto fail; }
    if (!dec.ReadBit(present_32)) { goto fail; }
    if (!dec.ReadBit(present_33)) { goto fail; }
    if (!dec.ReadBit(present_34)) { goto fail; }
    if (!dec.ReadBit(present_35)) { goto fail; }
    if (!dec.ReadBit(present_36)) { goto fail; }
    if (!dec.ReadBit(present_37)) { goto fail; }
    if (!dec.ReadBit(present_38)) { goto fail; }
    if (!dec.ReadBit(present_39)) { goto fail; }
    if (!dec.ReadBit(present_40)) { goto fail; }
    if (!dec.ReadBit(present_41)) { goto fail; }
    if (!dec.ReadBit(present_42)) { goto fail; }
    if (!dec.ReadBit(present_43)) { goto fail; }
    if (!dec.ReadBit(present_44)) { goto fail; }
    if (!dec.ReadBit(present_45)) { goto fail; }
    if (!dec.ReadBit(present_46)) { goto fail; }
    if (!dec.ReadBit(present_47)) { goto fail; }
    if (!dec.ReadBit(present_48)) { goto fail; }
    if (!dec.ReadBit(present_49)) { goto fail; }
    if (!dec.ReadBit(present_50)) { goto fail; }
    if (!dec.ReadBit(present_51)) { goto fail; }
    if (!dec.ReadBit(present_52)) { goto fail; }
    if (!dec.ReadBit(present_53)) { goto fail; }
    if (!dec.ReadBit(present_54)) { goto fail; }
    if (!dec.ReadBit(present_55)) { goto fail; }
    if (!dec.ReadBit(present_56)) { goto fail; }
    if (!dec.ReadBit(present_57)) { goto fail; }
    if (!dec.ReadBit(present_58)) { goto fail; }
    if (!dec.ReadBit(present_59)) { goto fail; }
    if (!dec.ReadBit(present_60)) { goto fail; }
    if (!dec.ReadBit(present_61)) { goto fail; }
    if (!dec.ReadBit(present_62)) { goto fail; }
    if (!dec.ReadBit(present_63)) { goto fail; }
    if (!dec.ReadBit(present_64)) { goto fail; }
    if (!dec.ReadBit(present_65)) { goto fail; }
    if (!dec.ReadBit(present_66)) { goto fail; }
    if (!dec.ReadBit(present_67)) { goto fail; }
    if (!dec.ReadBit(present_68)) { goto fail; }
    if (present_0) {
        value.posUE_TA_AutoAdjustment_r18 = (BandNR_ExtGroup16_PosUE_TA_AutoAdjustment_r18)0;
    }
    if (present_1) {
        value.posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18 = (BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18)0;
    }
    if (present_2) {
        value.posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18 = (BandNR_ExtGroup16_PosSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18)0;
    }
    if (present_3) {
        if (Decode_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(dec, value.dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_PosSRS_TxFrequencyHoppingRRC_Connected_r18(dec, value.posSRS_TxFH_RRC_ConnectedForRedCap_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(dec, value.posSRS_TxFH_RRC_InactiveForRedCap_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_PosSRS_BWA_RRC_Inactive_r18(dec, value.posSRS_BWA_RRC_Inactive_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        value.posJointTriggerBySingleDCI_RRC_Connected_r18 = (BandNR_ExtGroup16_PosJointTriggerBySingleDCI_RRC_Connected_r18)0;
    }
    if (present_8) {
        value.dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18 = (BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18)0;
    }
    if (present_9) {
        value.dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18 = (BandNR_ExtGroup16_Dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18)0;
    }
    if (present_10) {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(dec, value.spatialAdaptation_CSI_Feedback_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(dec, value.spatialAdaptation_CSI_FeedbackPUSCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(dec, value.spatialAdaptation_CSI_FeedbackAperiodic_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(dec, value.spatialAdaptation_CSI_FeedbackPUCCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
        if (Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(dec, value.powerAdaptation_CSI_Feedback_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_15) {
        if (Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(dec, value.powerAdaptation_CSI_FeedbackPUSCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_16) {
        if (Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(dec, value.powerAdaptation_CSI_FeedbackAperiodic_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_17) {
        if (Decode_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(dec, value.powerAdaptation_CSI_FeedbackPUCCH_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_18) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nes_CellDTX_DRX_r18 = (BandNR_ExtGroup16_Nes_CellDTX_DRX_r18)tmp_value;
    }
    if (present_19) {
        value.nes_CellDTX_DRX_DCI2_9_r18 = (BandNR_ExtGroup16_Nes_CellDTX_DRX_DCI2_9_r18)0;
    }
    if (present_20) {
        value.mixCodeBookSpatialAdaptation_r18 = (BandNR_ExtGroup16_MixCodeBookSpatialAdaptation_r18)0;
    }
    if (present_21) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ntn_DMRS_BundlingNGSO_r18 = (BandNR_ExtGroup16_Ntn_DMRS_BundlingNGSO_r18)tmp_value;
    }
    if (present_22) {
        if (Decode_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(dec, value.ltm_BeamIndicationJointTCI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_23) {
        if (Decode_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(dec, value.ltm_MAC_CE_JointTCI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_24) {
        if (Decode_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(dec, value.ltm_BeamIndicationSeparateTCI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_25) {
        if (Decode_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(dec, value.ltm_MAC_CE_SeparateTCI_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_26) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.rach_EarlyTA_Measurement_r18 = (int64_t)tmp_value;
    }
    if (present_27) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.ue_TA_Measurement_r18 = (int64_t)tmp_value;
    }
    if (present_28) {
        value.ta_IndicationCellSwitch_r18 = (BandNR_ExtGroup16_Ta_IndicationCellSwitch_r18)0;
    }
    if (present_29) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.multiPUSCH_CG_r18 = (BandNR_ExtGroup16_MultiPUSCH_CG_r18)tmp_value;
    }
    if (present_30) {
        if (Decode_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(dec, value.multiPUSCH_ActiveConfiguredGrant_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_31) {
        value.jointReleaseDCI_r18 = (BandNR_ExtGroup16_JointReleaseDCI_r18)0;
    }
    if (present_32) {
        value.cg_PUSCH_UTO_UCI_Ind_r18 = (BandNR_ExtGroup16_Cg_PUSCH_UTO_UCI_Ind_r18)0;
    }
    if (present_33) {
        value.pdcch_MonitoringResumptionAfterUL_NACK_r18 = (BandNR_ExtGroup16_Pdcch_MonitoringResumptionAfterUL_NACK_r18)0;
    }
    if (present_34) {
        value.support_3MHz_ChannelBW_r18 = (BandNR_ExtGroup16_Support_3MHz_ChannelBW_r18)0;
    }
    if (present_35) {
        value.support_12PRB_CORESET0_r18 = (BandNR_ExtGroup16_Support_12PRB_CORESET0_r18)0;
    }
    if (present_36) {
        if (Decode_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(dec, value.nr_PDCCH_OverlapLTE_CRS_RE_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_37) {
        value.nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18 = (BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18)0;
    }
    if (present_38) {
        value.nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18 = (BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18)0;
    }
    if (present_39) {
        if (Decode_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(dec, value.twoRateMatchingEUTRA_CRS_patterns_3_4_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_40) {
        value.overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18 = (BandNR_ExtGroup16_OverlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18)0;
    }
    if (present_41) {
        value.ncd_SSB_BWP_Wor_r18 = (BandNR_ExtGroup16_Ncd_SSB_BWP_Wor_r18)0;
    }
    if (present_42) {
        value.rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18 = (BandNR_ExtGroup16_Rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18)0;
    }
    if (present_43) {
        value.prach_CoverageEnh_r18 = (BandNR_ExtGroup16_Prach_CoverageEnh_r18)0;
    }
    if (present_44) {
        value.prach_Repetition_r18 = (BandNR_ExtGroup16_Prach_Repetition_r18)0;
    }
    if (present_45) {
        value.dynamicWaveformSwitch_r18 = (BandNR_ExtGroup16_DynamicWaveformSwitch_r18)0;
    }
    if (present_46) {
        value.dynamicWaveformSwitchPHR_r18 = (BandNR_ExtGroup16_DynamicWaveformSwitchPHR_r18)0;
    }
    if (present_47) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 8, tmp_value)) { goto fail; }
        value.dynamicWaveformSwitchIntraCA_r18 = (int64_t)tmp_value;
    }
    if (present_48) {
        value.multiPUSCH_SingleDCI_NonConsSlots_r18 = (BandNR_ExtGroup16_MultiPUSCH_SingleDCI_NonConsSlots_r18)0;
    }
    if (present_49) {
        if (Decode_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(dec, value.pdc_maxNumberPRS_ResourceProcessedPerSlot_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_50) {
if (!dec.ReadConstrainedLength(0u, 0u, value.lowerMSD_r18_count)) { goto fail; }
if (value.lowerMSD_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.lowerMSD_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.lowerMSD_r18_count > 0u) {
    value.lowerMSD_r18_items = (LowerMSD_r18*)std::malloc((std::size_t)value.lowerMSD_r18_count * sizeof(LowerMSD_r18));
    if (value.lowerMSD_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.lowerMSD_r18_items, 0, (std::size_t)value.lowerMSD_r18_count * sizeof(LowerMSD_r18));
}
for (std::uint32_t i = 0; i < value.lowerMSD_r18_count; ++i) {
    if (Decode_LowerMSD_r18(dec, value.lowerMSD_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_51) {
if (!dec.ReadConstrainedLength(0u, 0u, value.lowerMSD_ENDC_r18_count)) { goto fail; }
if (value.lowerMSD_ENDC_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.lowerMSD_ENDC_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.lowerMSD_ENDC_r18_count > 0u) {
    value.lowerMSD_ENDC_r18_items = (LowerMSD_r18*)std::malloc((std::size_t)value.lowerMSD_ENDC_r18_count * sizeof(LowerMSD_r18));
    if (value.lowerMSD_ENDC_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.lowerMSD_ENDC_r18_items, 0, (std::size_t)value.lowerMSD_ENDC_r18_count * sizeof(LowerMSD_r18));
}
for (std::uint32_t i = 0; i < value.lowerMSD_ENDC_r18_count; ++i) {
    if (Decode_LowerMSD_r18(dec, value.lowerMSD_ENDC_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_52) {
        value.enhancedChannelRaster_r18 = (BandNR_ExtGroup16_EnhancedChannelRaster_r18)0;
    }
    if (present_53) {
        if (Decode_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(dec, value.beamSweepingFactorReduction_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_54) {
        value.simultaneousReceptionTwoQCL_r18 = (BandNR_ExtGroup16_SimultaneousReceptionTwoQCL_r18)0;
    }
    if (present_55) {
        value.measEnhCAInterFreqFR2_r18 = (BandNR_ExtGroup16_MeasEnhCAInterFreqFR2_r18)0;
    }
    if (present_56) {
        value.tci_StateSwitchInd_r18 = (BandNR_ExtGroup16_Tci_StateSwitchInd_r18)0;
    }
    if (present_57) {
        value.antennaArrayType_r18 = (BandNR_ExtGroup16_AntennaArrayType_r18)0;
    }
    if (present_58) {
        value.locationBasedCondHandoverATG_r18 = (BandNR_ExtGroup16_LocationBasedCondHandoverATG_r18)0;
    }
    if (present_59) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 18, tmp_value)) { goto fail; }
        value.maxOutputPowerATG_r18 = (int64_t)tmp_value;
    }
    if (present_60) {
        value.eventA4BasedCondHandoverNES_r18 = (BandNR_ExtGroup16_EventA4BasedCondHandoverNES_r18)0;
    }
    if (present_61) {
        value.nesBasedCondHandoverWithDCI_r18 = (BandNR_ExtGroup16_NesBasedCondHandoverWithDCI_r18)0;
    }
    if (present_62) {
        value.rachLessHandoverNTN_r18 = (BandNR_ExtGroup16_RachLessHandoverNTN_r18)0;
    }
    if (present_63) {
        value.locationBasedCondHandoverEMC_r18 = (BandNR_ExtGroup16_LocationBasedCondHandoverEMC_r18)0;
    }
    if (present_64) {
        value.mt_CG_SDT_r18 = (BandNR_ExtGroup16_Mt_CG_SDT_r18)0;
    }
    if (present_65) {
        value.posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18 = (BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18)0;
    }
    if (present_66) {
        value.posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18 = (BandNR_ExtGroup16_PosSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18)0;
    }
    if (present_67) {
        value.cg_SDT_PeriodicityExt_r18 = (BandNR_ExtGroup16_Cg_SDT_PeriodicityExt_r18)0;
    }
    if (present_68) {
        value.supportOf2RxXR_r18 = (BandNR_ExtGroup16_SupportOf2RxXR_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ExtGroup16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ExtGroup16(BandNR_ExtGroup16& value)
{
    if (value.has_posUE_TA_AutoAdjustment_r18) {
    }
    if (value.has_posSRS_ValidityAreaRRC_InactiveInitialUL_BWP_r18) {
    }
    if (value.has_posSRS_ValidityAreaRRC_InactiveOutsideInitialUL_BWP_r18) {
    }
    if (value.has_dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18) {
        Free_DL_PRS_MeasurementWithRxFH_RRC_Connected_r18(value.dl_PRS_MeasurementWithRxFH_RRC_ConnectedForRedCap_r18);
    }
    if (value.has_posSRS_TxFH_RRC_ConnectedForRedCap_r18) {
        Free_PosSRS_TxFrequencyHoppingRRC_Connected_r18(value.posSRS_TxFH_RRC_ConnectedForRedCap_r18);
    }
    if (value.has_posSRS_TxFH_RRC_InactiveForRedCap_r18) {
        Free_PosSRS_TxFrequencyHoppingRRC_Inactive_r18(value.posSRS_TxFH_RRC_InactiveForRedCap_r18);
    }
    if (value.has_posSRS_BWA_RRC_Inactive_r18) {
        Free_PosSRS_BWA_RRC_Inactive_r18(value.posSRS_BWA_RRC_Inactive_r18);
    }
    if (value.has_posJointTriggerBySingleDCI_RRC_Connected_r18) {
    }
    if (value.has_dl_PRS_MeasurementWithRxFH_RRC_InactiveforRedCap_r18) {
    }
    if (value.has_dl_PRS_MeasurementWithRxFH_RRC_IdleforRedCap_r18) {
    }
    if (value.has_spatialAdaptation_CSI_Feedback_r18) {
        Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_Feedback_r18(value.spatialAdaptation_CSI_Feedback_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUSCH_r18) {
        Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUSCH_r18(value.spatialAdaptation_CSI_FeedbackPUSCH_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackAperiodic_r18) {
        Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackAperiodic_r18(value.spatialAdaptation_CSI_FeedbackAperiodic_r18);
    }
    if (value.has_spatialAdaptation_CSI_FeedbackPUCCH_r18) {
        Free_BandNR_ExtGroup16_SpatialAdaptation_CSI_FeedbackPUCCH_r18(value.spatialAdaptation_CSI_FeedbackPUCCH_r18);
    }
    if (value.has_powerAdaptation_CSI_Feedback_r18) {
        Free_BandNR_ExtGroup16_PowerAdaptation_CSI_Feedback_r18(value.powerAdaptation_CSI_Feedback_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUSCH_r18) {
        Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUSCH_r18(value.powerAdaptation_CSI_FeedbackPUSCH_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackAperiodic_r18) {
        Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackAperiodic_r18(value.powerAdaptation_CSI_FeedbackAperiodic_r18);
    }
    if (value.has_powerAdaptation_CSI_FeedbackPUCCH_r18) {
        Free_BandNR_ExtGroup16_PowerAdaptation_CSI_FeedbackPUCCH_r18(value.powerAdaptation_CSI_FeedbackPUCCH_r18);
    }
    if (value.has_nes_CellDTX_DRX_r18) {
    }
    if (value.has_nes_CellDTX_DRX_DCI2_9_r18) {
    }
    if (value.has_mixCodeBookSpatialAdaptation_r18) {
    }
    if (value.has_ntn_DMRS_BundlingNGSO_r18) {
    }
    if (value.has_ltm_BeamIndicationJointTCI_r18) {
        Free_BandNR_ExtGroup16_Ltm_BeamIndicationJointTCI_r18(value.ltm_BeamIndicationJointTCI_r18);
    }
    if (value.has_ltm_MAC_CE_JointTCI_r18) {
        Free_BandNR_ExtGroup16_Ltm_MAC_CE_JointTCI_r18(value.ltm_MAC_CE_JointTCI_r18);
    }
    if (value.has_ltm_BeamIndicationSeparateTCI_r18) {
        Free_BandNR_ExtGroup16_Ltm_BeamIndicationSeparateTCI_r18(value.ltm_BeamIndicationSeparateTCI_r18);
    }
    if (value.has_ltm_MAC_CE_SeparateTCI_r18) {
        Free_BandNR_ExtGroup16_Ltm_MAC_CE_SeparateTCI_r18(value.ltm_MAC_CE_SeparateTCI_r18);
    }
    if (value.has_rach_EarlyTA_Measurement_r18) {
    }
    if (value.has_ue_TA_Measurement_r18) {
    }
    if (value.has_ta_IndicationCellSwitch_r18) {
    }
    if (value.has_multiPUSCH_CG_r18) {
    }
    if (value.has_multiPUSCH_ActiveConfiguredGrant_r18) {
        Free_BandNR_ExtGroup16_MultiPUSCH_ActiveConfiguredGrant_r18(value.multiPUSCH_ActiveConfiguredGrant_r18);
    }
    if (value.has_jointReleaseDCI_r18) {
    }
    if (value.has_cg_PUSCH_UTO_UCI_Ind_r18) {
    }
    if (value.has_pdcch_MonitoringResumptionAfterUL_NACK_r18) {
    }
    if (value.has_support_3MHz_ChannelBW_r18) {
    }
    if (value.has_support_12PRB_CORESET0_r18) {
    }
    if (value.has_nr_PDCCH_OverlapLTE_CRS_RE_r18) {
        Free_BandNR_ExtGroup16_Nr_PDCCH_OverlapLTE_CRS_RE_r18(value.nr_PDCCH_OverlapLTE_CRS_RE_r18);
    }
    if (value.has_nr_PDCCH_OverlapLTE_CRS_RE_MultiPatterns_r18) {
    }
    if (value.has_nr_PDCCH_OverlapLTE_CRS_RE_Span_3_4_r18) {
    }
    if (value.has_twoRateMatchingEUTRA_CRS_patterns_3_4_r18) {
        Free_BandNR_ExtGroup16_TwoRateMatchingEUTRA_CRS_patterns_3_4_r18(value.twoRateMatchingEUTRA_CRS_patterns_3_4_r18);
    }
    if (value.has_overlapRateMatchingEUTRA_CRS_Patterns_3_4_Diff_CS_Pool_r18) {
    }
    if (value.has_ncd_SSB_BWP_Wor_r18) {
    }
    if (value.has_rlm_BM_BFD_CSI_RS_OutsideActiveBWP_r18) {
    }
    if (value.has_prach_CoverageEnh_r18) {
    }
    if (value.has_prach_Repetition_r18) {
    }
    if (value.has_dynamicWaveformSwitch_r18) {
    }
    if (value.has_dynamicWaveformSwitchPHR_r18) {
    }
    if (value.has_dynamicWaveformSwitchIntraCA_r18) {
    }
    if (value.has_multiPUSCH_SingleDCI_NonConsSlots_r18) {
    }
    if (value.has_pdc_maxNumberPRS_ResourceProcessedPerSlot_r18) {
        Free_BandNR_ExtGroup16_Pdc_maxNumberPRS_ResourceProcessedPerSlot_r18(value.pdc_maxNumberPRS_ResourceProcessedPerSlot_r18);
    }
    if (value.has_lowerMSD_r18) {
        if (value.lowerMSD_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.lowerMSD_r18_count; ++i) {
                Free_LowerMSD_r18(value.lowerMSD_r18_items[i]);
            }
            std::free(value.lowerMSD_r18_items);
            value.lowerMSD_r18_items = nullptr;
        }
        value.lowerMSD_r18_count = 0;
    }
    if (value.has_lowerMSD_ENDC_r18) {
        if (value.lowerMSD_ENDC_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.lowerMSD_ENDC_r18_count; ++i) {
                Free_LowerMSD_r18(value.lowerMSD_ENDC_r18_items[i]);
            }
            std::free(value.lowerMSD_ENDC_r18_items);
            value.lowerMSD_ENDC_r18_items = nullptr;
        }
        value.lowerMSD_ENDC_r18_count = 0;
    }
    if (value.has_enhancedChannelRaster_r18) {
    }
    if (value.has_beamSweepingFactorReduction_r18) {
        Free_BandNR_ExtGroup16_BeamSweepingFactorReduction_r18(value.beamSweepingFactorReduction_r18);
    }
    if (value.has_simultaneousReceptionTwoQCL_r18) {
    }
    if (value.has_measEnhCAInterFreqFR2_r18) {
    }
    if (value.has_tci_StateSwitchInd_r18) {
    }
    if (value.has_antennaArrayType_r18) {
    }
    if (value.has_locationBasedCondHandoverATG_r18) {
    }
    if (value.has_maxOutputPowerATG_r18) {
    }
    if (value.has_eventA4BasedCondHandoverNES_r18) {
    }
    if (value.has_nesBasedCondHandoverWithDCI_r18) {
    }
    if (value.has_rachLessHandoverNTN_r18) {
    }
    if (value.has_locationBasedCondHandoverEMC_r18) {
    }
    if (value.has_mt_CG_SDT_r18) {
    }
    if (value.has_posSRS_PreconfigureRRC_InactiveInitialUL_BWP_r18) {
    }
    if (value.has_posSRS_PreconfigureRRC_InactiveOutsideInitialUL_BWP_r18) {
    }
    if (value.has_cg_SDT_PeriodicityExt_r18) {
    }
    if (value.has_supportOf2RxXR_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ChannelBWs_DL_Fr1：ASN.1 channelBWs-DL/fr1；源文件第 19533 行；SEQUENCE。
// Encode_BandNR_ChannelBWs_DL_Fr1 只读不分配；Decode_BandNR_ChannelBWs_DL_Fr1 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ChannelBWs_DL_Fr1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ChannelBWs_DL_Fr1(Encoder& enc, const BandNR_ChannelBWs_DL_Fr1& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        enc.WriteFixedBitString(value.scs_15kHz.bytes, value.scs_15kHz.bitLength, 10, 10);
    }
    if (value.has_scs_30kHz) {
        enc.WriteFixedBitString(value.scs_30kHz.bytes, value.scs_30kHz.bitLength, 10, 10);
    }
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 10, 10);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ChannelBWs_DL_Fr1(Decoder& dec, BandNR_ChannelBWs_DL_Fr1& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.scs_15kHz.bytes = string_bytes;
        value.scs_15kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.scs_30kHz.bytes = string_bytes;
        value.scs_30kHz.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ChannelBWs_DL_Fr1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ChannelBWs_DL_Fr1(BandNR_ChannelBWs_DL_Fr1& value)
{
    if (value.has_scs_15kHz) {
        std::free(value.scs_15kHz.bytes);
        value.scs_15kHz.bytes = nullptr;
        value.scs_15kHz.bitLength = 0;
    }
    if (value.has_scs_30kHz) {
        std::free(value.scs_30kHz.bytes);
        value.scs_30kHz.bytes = nullptr;
        value.scs_30kHz.bitLength = 0;
    }
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ChannelBWs_DL_Fr2：ASN.1 channelBWs-DL/fr2；源文件第 19538 行；SEQUENCE。
// Encode_BandNR_ChannelBWs_DL_Fr2 只读不分配；Decode_BandNR_ChannelBWs_DL_Fr2 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ChannelBWs_DL_Fr2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ChannelBWs_DL_Fr2(Encoder& enc, const BandNR_ChannelBWs_DL_Fr2& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 3, 3);
    }
    if (value.has_scs_120kHz) {
        enc.WriteFixedBitString(value.scs_120kHz.bytes, value.scs_120kHz.bitLength, 3, 3);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ChannelBWs_DL_Fr2(Decoder& dec, BandNR_ChannelBWs_DL_Fr2& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.scs_120kHz.bytes = string_bytes;
        value.scs_120kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ChannelBWs_DL_Fr2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ChannelBWs_DL_Fr2(BandNR_ChannelBWs_DL_Fr2& value)
{
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    if (value.has_scs_120kHz) {
        std::free(value.scs_120kHz.bytes);
        value.scs_120kHz.bytes = nullptr;
        value.scs_120kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ChannelBWs_DL：ASN.1 channelBWs-DL；源文件第 19532 行；CHOICE。
// Encode_BandNR_ChannelBWs_DL 只读不分配；Decode_BandNR_ChannelBWs_DL 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ChannelBWs_DL 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ChannelBWs_DL(Encoder& enc, const BandNR_ChannelBWs_DL& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ChannelBWs_DL_Tag_fr1:
        Encode_BandNR_ChannelBWs_DL_Fr1(enc, value.u.fr1);
        break;
    case BandNR_ChannelBWs_DL_Tag_fr2:
        Encode_BandNR_ChannelBWs_DL_Fr2(enc, value.u.fr2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ChannelBWs_DL(Decoder& dec, BandNR_ChannelBWs_DL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ChannelBWs_DL_Tag)root_index;
    switch (value.tag) {
    case BandNR_ChannelBWs_DL_Tag_fr1: {
        if (Decode_BandNR_ChannelBWs_DL_Fr1(dec, value.u.fr1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandNR_ChannelBWs_DL_Tag_fr2: {
        if (Decode_BandNR_ChannelBWs_DL_Fr2(dec, value.u.fr2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ChannelBWs_DL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ChannelBWs_DL(BandNR_ChannelBWs_DL& value)
{
    switch (value.tag) {
    case BandNR_ChannelBWs_DL_Tag_fr1:
        Free_BandNR_ChannelBWs_DL_Fr1(value.u.fr1);
        break;
    case BandNR_ChannelBWs_DL_Tag_fr2:
        Free_BandNR_ChannelBWs_DL_Fr2(value.u.fr2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ChannelBWs_UL_Fr1：ASN.1 channelBWs-UL/fr1；源文件第 19544 行；SEQUENCE。
// Encode_BandNR_ChannelBWs_UL_Fr1 只读不分配；Decode_BandNR_ChannelBWs_UL_Fr1 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ChannelBWs_UL_Fr1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ChannelBWs_UL_Fr1(Encoder& enc, const BandNR_ChannelBWs_UL_Fr1& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_15kHz);
    enc.WriteBit(value.has_scs_30kHz);
    enc.WriteBit(value.has_scs_60kHz);
    if (value.has_scs_15kHz) {
        enc.WriteFixedBitString(value.scs_15kHz.bytes, value.scs_15kHz.bitLength, 10, 10);
    }
    if (value.has_scs_30kHz) {
        enc.WriteFixedBitString(value.scs_30kHz.bytes, value.scs_30kHz.bitLength, 10, 10);
    }
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 10, 10);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ChannelBWs_UL_Fr1(Decoder& dec, BandNR_ChannelBWs_UL_Fr1& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.scs_15kHz.bytes = string_bytes;
        value.scs_15kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.scs_30kHz.bytes = string_bytes;
        value.scs_30kHz.bitLength = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 10)) { goto fail; }
        string_length = 10;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ChannelBWs_UL_Fr1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ChannelBWs_UL_Fr1(BandNR_ChannelBWs_UL_Fr1& value)
{
    if (value.has_scs_15kHz) {
        std::free(value.scs_15kHz.bytes);
        value.scs_15kHz.bytes = nullptr;
        value.scs_15kHz.bitLength = 0;
    }
    if (value.has_scs_30kHz) {
        std::free(value.scs_30kHz.bytes);
        value.scs_30kHz.bytes = nullptr;
        value.scs_30kHz.bitLength = 0;
    }
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ChannelBWs_UL_Fr2：ASN.1 channelBWs-UL/fr2；源文件第 19549 行；SEQUENCE。
// Encode_BandNR_ChannelBWs_UL_Fr2 只读不分配；Decode_BandNR_ChannelBWs_UL_Fr2 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ChannelBWs_UL_Fr2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ChannelBWs_UL_Fr2(Encoder& enc, const BandNR_ChannelBWs_UL_Fr2& value)
{
    (void)value;
    enc.WriteBit(value.has_scs_60kHz);
    enc.WriteBit(value.has_scs_120kHz);
    if (value.has_scs_60kHz) {
        enc.WriteFixedBitString(value.scs_60kHz.bytes, value.scs_60kHz.bitLength, 3, 3);
    }
    if (value.has_scs_120kHz) {
        enc.WriteFixedBitString(value.scs_120kHz.bytes, value.scs_120kHz.bitLength, 3, 3);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ChannelBWs_UL_Fr2(Decoder& dec, BandNR_ChannelBWs_UL_Fr2& value)
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
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.scs_60kHz.bytes = string_bytes;
        value.scs_60kHz.bitLength = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.scs_120kHz.bytes = string_bytes;
        value.scs_120kHz.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ChannelBWs_UL_Fr2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ChannelBWs_UL_Fr2(BandNR_ChannelBWs_UL_Fr2& value)
{
    if (value.has_scs_60kHz) {
        std::free(value.scs_60kHz.bytes);
        value.scs_60kHz.bytes = nullptr;
        value.scs_60kHz.bitLength = 0;
    }
    if (value.has_scs_120kHz) {
        std::free(value.scs_120kHz.bytes);
        value.scs_120kHz.bytes = nullptr;
        value.scs_120kHz.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_ChannelBWs_UL：ASN.1 channelBWs-UL；源文件第 19543 行；CHOICE。
// Encode_BandNR_ChannelBWs_UL 只读不分配；Decode_BandNR_ChannelBWs_UL 可能 malloc（失败时内部已释放并清零）；Free_BandNR_ChannelBWs_UL 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_ChannelBWs_UL(Encoder& enc, const BandNR_ChannelBWs_UL& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case BandNR_ChannelBWs_UL_Tag_fr1:
        Encode_BandNR_ChannelBWs_UL_Fr1(enc, value.u.fr1);
        break;
    case BandNR_ChannelBWs_UL_Tag_fr2:
        Encode_BandNR_ChannelBWs_UL_Fr2(enc, value.u.fr2);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_ChannelBWs_UL(Decoder& dec, BandNR_ChannelBWs_UL& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (BandNR_ChannelBWs_UL_Tag)root_index;
    switch (value.tag) {
    case BandNR_ChannelBWs_UL_Tag_fr1: {
        if (Decode_BandNR_ChannelBWs_UL_Fr1(dec, value.u.fr1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case BandNR_ChannelBWs_UL_Tag_fr2: {
        if (Decode_BandNR_ChannelBWs_UL_Fr2(dec, value.u.fr2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_ChannelBWs_UL(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_ChannelBWs_UL(BandNR_ChannelBWs_UL& value)
{
    switch (value.tag) {
    case BandNR_ChannelBWs_UL_Tag_fr1:
        Free_BandNR_ChannelBWs_UL_Fr1(value.u.fr1);
        break;
    case BandNR_ChannelBWs_UL_Tag_fr2:
        Free_BandNR_ChannelBWs_UL_Fr2(value.u.fr2);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR：ASN.1 BandNR；源文件第 19518 行；SEQUENCE。
// Encode_BandNR 只读不分配；Decode_BandNR 可能 malloc（失败时内部已释放并清零）；Free_BandNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR(Encoder& enc, const BandNR& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10 || value.has_extGroup11 || value.has_extGroup12 || value.has_extGroup13 || value.has_extGroup14 || value.has_extGroup15 || value.has_extGroup16;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_modifiedMPR_Behaviour);
    enc.WriteBit(value.has_mimo_ParametersPerBand);
    enc.WriteBit(value.has_extendedCP);
    enc.WriteBit(value.has_multipleTCI);
    enc.WriteBit(value.has_bwp_WithoutRestriction);
    enc.WriteBit(value.has_bwp_SameNumerology);
    enc.WriteBit(value.has_bwp_DiffNumerology);
    enc.WriteBit(value.has_crossCarrierScheduling_SameSCS);
    enc.WriteBit(value.has_pdsch_256QAM_FR2);
    enc.WriteBit(value.has_pusch_256QAM);
    enc.WriteBit(value.has_ue_PowerClass);
    enc.WriteBit(value.has_rateMatchingLTE_CRS);
    enc.WriteBit(value.has_channelBWs_DL);
    enc.WriteBit(value.has_channelBWs_UL);
    enc.WriteConstrainedInteger((std::int64_t)(value.bandNR), 1, 1024);
    if (value.has_modifiedMPR_Behaviour) {
        enc.WriteFixedBitString(value.modifiedMPR_Behaviour.bytes, value.modifiedMPR_Behaviour.bitLength, 8, 8);
    }
    if (value.has_mimo_ParametersPerBand) {
        Encode_MIMO_ParametersPerBand(enc, value.mimo_ParametersPerBand);
    }
    if (value.has_extendedCP) {
        enc.WriteConstrainedInteger((std::int64_t)(value.extendedCP), 0, 0);
    }
    if (value.has_multipleTCI) {
        enc.WriteConstrainedInteger((std::int64_t)(value.multipleTCI), 0, 0);
    }
    if (value.has_bwp_WithoutRestriction) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_WithoutRestriction), 0, 0);
    }
    if (value.has_bwp_SameNumerology) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_SameNumerology), 0, 1);
    }
    if (value.has_bwp_DiffNumerology) {
        enc.WriteConstrainedInteger((std::int64_t)(value.bwp_DiffNumerology), 0, 0);
    }
    if (value.has_crossCarrierScheduling_SameSCS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.crossCarrierScheduling_SameSCS), 0, 0);
    }
    if (value.has_pdsch_256QAM_FR2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_256QAM_FR2), 0, 0);
    }
    if (value.has_pusch_256QAM) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_256QAM), 0, 0);
    }
    if (value.has_ue_PowerClass) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ue_PowerClass), 0, 3);
    }
    if (value.has_rateMatchingLTE_CRS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rateMatchingLTE_CRS), 0, 0);
    }
    if (value.has_channelBWs_DL) {
        Encode_BandNR_ChannelBWs_DL(enc, value.channelBWs_DL);
    }
    if (value.has_channelBWs_UL) {
        Encode_BandNR_ChannelBWs_UL(enc, value.channelBWs_UL);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(16u);
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
        enc.WriteBit(value.has_extGroup11);
        enc.WriteBit(value.has_extGroup12);
        enc.WriteBit(value.has_extGroup13);
        enc.WriteBit(value.has_extGroup14);
        enc.WriteBit(value.has_extGroup15);
        enc.WriteBit(value.has_extGroup16);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_BandNR_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_BandNR_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_BandNR_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_BandNR_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_BandNR_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_BandNR_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_BandNR_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_BandNR_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_BandNR_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_BandNR_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup11) {
    Encoder sub;
    Encode_BandNR_ExtGroup11(sub, value.extGroup11);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup12) {
    Encoder sub;
    Encode_BandNR_ExtGroup12(sub, value.extGroup12);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup13) {
    Encoder sub;
    Encode_BandNR_ExtGroup13(sub, value.extGroup13);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup14) {
    Encoder sub;
    Encode_BandNR_ExtGroup14(sub, value.extGroup14);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup15) {
    Encoder sub;
    Encode_BandNR_ExtGroup15(sub, value.extGroup15);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup16) {
    Encoder sub;
    Encode_BandNR_ExtGroup16(sub, value.extGroup16);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_BandNR(Decoder& dec, BandNR& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.bandNR = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.modifiedMPR_Behaviour.bytes = string_bytes;
        value.modifiedMPR_Behaviour.bitLength = string_length;
    }
    if (present_1) {
        if (Decode_MIMO_ParametersPerBand(dec, value.mimo_ParametersPerBand) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.extendedCP = (BandNR_ExtendedCP)0;
    }
    if (present_3) {
        value.multipleTCI = (BandNR_MultipleTCI)0;
    }
    if (present_4) {
        value.bwp_WithoutRestriction = (BandNR_Bwp_WithoutRestriction)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.bwp_SameNumerology = (BandNR_Bwp_SameNumerology)tmp_value;
    }
    if (present_6) {
        value.bwp_DiffNumerology = (BandNR_Bwp_DiffNumerology)0;
    }
    if (present_7) {
        value.crossCarrierScheduling_SameSCS = (BandNR_CrossCarrierScheduling_SameSCS)0;
    }
    if (present_8) {
        value.pdsch_256QAM_FR2 = (BandNR_Pdsch_256QAM_FR2)0;
    }
    if (present_9) {
        value.pusch_256QAM = (BandNR_Pusch_256QAM)0;
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ue_PowerClass = (BandNR_Ue_PowerClass)tmp_value;
    }
    if (present_11) {
        value.rateMatchingLTE_CRS = (BandNR_RateMatchingLTE_CRS)0;
    }
    if (present_12) {
        if (Decode_BandNR_ChannelBWs_DL(dec, value.channelBWs_DL) != ErrorCode_Ok) { goto fail; }
    }
    if (present_13) {
        if (Decode_BandNR_ChannelBWs_UL(dec, value.channelBWs_UL) != ErrorCode_Ok) { goto fail; }
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 16u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[16] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
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
    if (Decode_BandNR_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[10]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup11(sub, value.extGroup11) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup11 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[11]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup12(sub, value.extGroup12) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup12 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[12]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup13(sub, value.extGroup13) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup13 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[13]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup14(sub, value.extGroup14) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup14 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[14]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup15(sub, value.extGroup15) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup15 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[15]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_BandNR_ExtGroup16(sub, value.extGroup16) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup16 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR(BandNR& value)
{
    if (value.has_modifiedMPR_Behaviour) {
        std::free(value.modifiedMPR_Behaviour.bytes);
        value.modifiedMPR_Behaviour.bytes = nullptr;
        value.modifiedMPR_Behaviour.bitLength = 0;
    }
    if (value.has_mimo_ParametersPerBand) {
        Free_MIMO_ParametersPerBand(value.mimo_ParametersPerBand);
    }
    if (value.has_extendedCP) {
    }
    if (value.has_multipleTCI) {
    }
    if (value.has_bwp_WithoutRestriction) {
    }
    if (value.has_bwp_SameNumerology) {
    }
    if (value.has_bwp_DiffNumerology) {
    }
    if (value.has_crossCarrierScheduling_SameSCS) {
    }
    if (value.has_pdsch_256QAM_FR2) {
    }
    if (value.has_pusch_256QAM) {
    }
    if (value.has_ue_PowerClass) {
    }
    if (value.has_rateMatchingLTE_CRS) {
    }
    if (value.has_channelBWs_DL) {
        Free_BandNR_ChannelBWs_DL(value.channelBWs_DL);
    }
    if (value.has_channelBWs_UL) {
        Free_BandNR_ChannelBWs_UL(value.channelBWs_UL);
    }
    if (value.has_extGroup1) {
        Free_BandNR_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_BandNR_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_BandNR_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_BandNR_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_BandNR_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_BandNR_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_BandNR_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_BandNR_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_BandNR_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_BandNR_ExtGroup10(value.extGroup10);
    }
    if (value.has_extGroup11) {
        Free_BandNR_ExtGroup11(value.extGroup11);
    }
    if (value.has_extGroup12) {
        Free_BandNR_ExtGroup12(value.extGroup12);
    }
    if (value.has_extGroup13) {
        Free_BandNR_ExtGroup13(value.extGroup13);
    }
    if (value.has_extGroup14) {
        Free_BandNR_ExtGroup14(value.extGroup14);
    }
    if (value.has_extGroup15) {
        Free_BandNR_ExtGroup15(value.extGroup15);
    }
    if (value.has_extGroup16) {
        Free_BandNR_ExtGroup16(value.extGroup16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BandNR_v16c0：ASN.1 BandNR-v16c0；源文件第 20159 行；SEQUENCE。
// Encode_BandNR_v16c0 只读不分配；Decode_BandNR_v16c0 可能 malloc（失败时内部已释放并清零）；Free_BandNR_v16c0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BandNR_v16c0(Encoder& enc, const BandNR_v16c0& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_pusch_RepetitionTypeA_v16c0);
    if (value.has_pusch_RepetitionTypeA_v16c0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pusch_RepetitionTypeA_v16c0), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_BandNR_v16c0(Decoder& dec, BandNR_v16c0& value)
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
        value.pusch_RepetitionTypeA_v16c0 = (BandNR_v16c0_Pusch_RepetitionTypeA_v16c0)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BandNR_v16c0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BandNR_v16c0(BandNR_v16c0& value)
{
    if (value.has_pusch_RepetitionTypeA_v16c0) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LowerMSD_r18_Aggressorband1_r18：ASN.1 aggressorband1-r18；源文件第 20165 行；CHOICE。
// Encode_LowerMSD_r18_Aggressorband1_r18 只读不分配；Decode_LowerMSD_r18_Aggressorband1_r18 可能 malloc（失败时内部已释放并清零）；Free_LowerMSD_r18_Aggressorband1_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LowerMSD_r18_Aggressorband1_r18(Encoder& enc, const LowerMSD_r18_Aggressorband1_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case LowerMSD_r18_Aggressorband1_r18_Tag_nr:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.nr), 1, 1024);
        break;
    case LowerMSD_r18_Aggressorband1_r18_Tag_eutra:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.eutra), 1, 256);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LowerMSD_r18_Aggressorband1_r18(Decoder& dec, LowerMSD_r18_Aggressorband1_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (LowerMSD_r18_Aggressorband1_r18_Tag)root_index;
    switch (value.tag) {
    case LowerMSD_r18_Aggressorband1_r18_Tag_nr: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.u.nr = (FreqBandIndicatorNR)tmp_value;
        break;
    }
    case LowerMSD_r18_Aggressorband1_r18_Tag_eutra: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 256, tmp_value)) { goto fail; }
        value.u.eutra = (FreqBandIndicatorEUTRA)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LowerMSD_r18_Aggressorband1_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LowerMSD_r18_Aggressorband1_r18(LowerMSD_r18_Aggressorband1_r18& value)
{
    switch (value.tag) {
    case LowerMSD_r18_Aggressorband1_r18_Tag_nr:
        break;
    case LowerMSD_r18_Aggressorband1_r18_Tag_eutra:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LowerMSD_r18：ASN.1 LowerMSD-r18；源文件第 20164 行；SEQUENCE。
// Encode_LowerMSD_r18 只读不分配；Decode_LowerMSD_r18 可能 malloc（失败时内部已释放并清零）；Free_LowerMSD_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LowerMSD_r18(Encoder& enc, const LowerMSD_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_aggressorband2_r18);
    Encode_LowerMSD_r18_Aggressorband1_r18(enc, value.aggressorband1_r18);
    if (value.has_aggressorband2_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.aggressorband2_r18), 1, 1024);
    }
enc.WriteConstrainedLength(value.msd_Information_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.msd_Information_r18_count; ++i) {
    Encode_MSD_Information_r18(enc, value.msd_Information_r18_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_LowerMSD_r18(Decoder& dec, LowerMSD_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_LowerMSD_r18_Aggressorband1_r18(dec, value.aggressorband1_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.aggressorband2_r18 = (FreqBandIndicatorNR)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.msd_Information_r18_count)) { goto fail; }
if (value.msd_Information_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.msd_Information_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.msd_Information_r18_count > 0u) {
    value.msd_Information_r18_items = (MSD_Information_r18*)std::malloc((std::size_t)value.msd_Information_r18_count * sizeof(MSD_Information_r18));
    if (value.msd_Information_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.msd_Information_r18_items, 0, (std::size_t)value.msd_Information_r18_count * sizeof(MSD_Information_r18));
}
for (std::uint32_t i = 0; i < value.msd_Information_r18_count; ++i) {
    if (Decode_MSD_Information_r18(dec, value.msd_Information_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_LowerMSD_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LowerMSD_r18(LowerMSD_r18& value)
{
    Free_LowerMSD_r18_Aggressorband1_r18(value.aggressorband1_r18);
    if (value.has_aggressorband2_r18) {
    }
    if (value.msd_Information_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.msd_Information_r18_count; ++i) {
            Free_MSD_Information_r18(value.msd_Information_r18_items[i]);
        }
        std::free(value.msd_Information_r18_items);
        value.msd_Information_r18_items = nullptr;
    }
    value.msd_Information_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MSD_Information_r18：ASN.1 MSD-Information-r18；源文件第 20173 行；SEQUENCE。
// Encode_MSD_Information_r18 只读不分配；Decode_MSD_Information_r18 可能 malloc（失败时内部已释放并清零）；Free_MSD_Information_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MSD_Information_r18(Encoder& enc, const MSD_Information_r18& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.msd_Type_r18), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.msd_PowerClass_r18), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.msd_Class_r18), 0, 7);
    return enc.Error();
}

ErrorCode Decode_MSD_Information_r18(Decoder& dec, MSD_Information_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.msd_Type_r18 = (MSD_Information_r18_Msd_Type_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.msd_PowerClass_r18 = (MSD_Information_r18_Msd_PowerClass_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.msd_Class_r18 = (MSD_Information_r18_Msd_Class_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MSD_Information_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MSD_Information_r18(MSD_Information_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup1：ASN.1 RF_ParametersMRDC_ExtGroup1；源文件第 20187 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup1 只读不分配；Decode_RF_ParametersMRDC_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup1(Encoder& enc, const RF_ParametersMRDC_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_SwitchingTimeRequested);
    enc.WriteBit(value.has_supportedBandCombinationList_v1540);
    if (value.has_srs_SwitchingTimeRequested) {
        enc.WriteConstrainedInteger((std::int64_t)(value.srs_SwitchingTimeRequested), 0, 0);
    }
    if (value.has_supportedBandCombinationList_v1540) {
        Encode_BandCombinationList_v1540(enc, value.supportedBandCombinationList_v1540);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup1(Decoder& dec, RF_ParametersMRDC_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.srs_SwitchingTimeRequested = (RF_ParametersMRDC_ExtGroup1_Srs_SwitchingTimeRequested)0;
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1540(dec, value.supportedBandCombinationList_v1540) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup1(RF_ParametersMRDC_ExtGroup1& value)
{
    if (value.has_srs_SwitchingTimeRequested) {
    }
    if (value.has_supportedBandCombinationList_v1540) {
        Free_BandCombinationList_v1540(value.supportedBandCombinationList_v1540);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup2：ASN.1 RF_ParametersMRDC_ExtGroup2；源文件第 20191 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup2 只读不分配；Decode_RF_ParametersMRDC_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup2(Encoder& enc, const RF_ParametersMRDC_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1550);
    if (value.has_supportedBandCombinationList_v1550) {
        Encode_BandCombinationList_v1550(enc, value.supportedBandCombinationList_v1550);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup2(Decoder& dec, RF_ParametersMRDC_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1550(dec, value.supportedBandCombinationList_v1550) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup2(RF_ParametersMRDC_ExtGroup2& value)
{
    if (value.has_supportedBandCombinationList_v1550) {
        Free_BandCombinationList_v1550(value.supportedBandCombinationList_v1550);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup3：ASN.1 RF_ParametersMRDC_ExtGroup3；源文件第 20194 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup3 只读不分配；Decode_RF_ParametersMRDC_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup3(Encoder& enc, const RF_ParametersMRDC_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1560);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only);
    if (value.has_supportedBandCombinationList_v1560) {
        Encode_BandCombinationList_v1560(enc, value.supportedBandCombinationList_v1560);
    }
    if (value.has_supportedBandCombinationListNEDC_Only) {
        Encode_BandCombinationList(enc, value.supportedBandCombinationListNEDC_Only);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup3(Decoder& dec, RF_ParametersMRDC_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1560(dec, value.supportedBandCombinationList_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList(dec, value.supportedBandCombinationListNEDC_Only) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup3(RF_ParametersMRDC_ExtGroup3& value)
{
    if (value.has_supportedBandCombinationList_v1560) {
        Free_BandCombinationList_v1560(value.supportedBandCombinationList_v1560);
    }
    if (value.has_supportedBandCombinationListNEDC_Only) {
        Free_BandCombinationList(value.supportedBandCombinationListNEDC_Only);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup4：ASN.1 RF_ParametersMRDC_ExtGroup4；源文件第 20198 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup4 只读不分配；Decode_RF_ParametersMRDC_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup4(Encoder& enc, const RF_ParametersMRDC_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1570);
    if (value.has_supportedBandCombinationList_v1570) {
        Encode_BandCombinationList_v1570(enc, value.supportedBandCombinationList_v1570);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup4(Decoder& dec, RF_ParametersMRDC_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1570(dec, value.supportedBandCombinationList_v1570) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup4(RF_ParametersMRDC_ExtGroup4& value)
{
    if (value.has_supportedBandCombinationList_v1570) {
        Free_BandCombinationList_v1570(value.supportedBandCombinationList_v1570);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup5：ASN.1 RF_ParametersMRDC_ExtGroup5；源文件第 20201 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup5 只读不分配；Decode_RF_ParametersMRDC_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup5(Encoder& enc, const RF_ParametersMRDC_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1580);
    if (value.has_supportedBandCombinationList_v1580) {
        Encode_BandCombinationList_v1580(enc, value.supportedBandCombinationList_v1580);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup5(Decoder& dec, RF_ParametersMRDC_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1580(dec, value.supportedBandCombinationList_v1580) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup5(RF_ParametersMRDC_ExtGroup5& value)
{
    if (value.has_supportedBandCombinationList_v1580) {
        Free_BandCombinationList_v1580(value.supportedBandCombinationList_v1580);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup6：ASN.1 RF_ParametersMRDC_ExtGroup6；源文件第 20204 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup6 只读不分配；Decode_RF_ParametersMRDC_ExtGroup6 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup6 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup6(Encoder& enc, const RF_ParametersMRDC_ExtGroup6& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1590);
    if (value.has_supportedBandCombinationList_v1590) {
        Encode_BandCombinationList_v1590(enc, value.supportedBandCombinationList_v1590);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup6(Decoder& dec, RF_ParametersMRDC_ExtGroup6& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1590(dec, value.supportedBandCombinationList_v1590) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup6(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup6(RF_ParametersMRDC_ExtGroup6& value)
{
    if (value.has_supportedBandCombinationList_v1590) {
        Free_BandCombinationList_v1590(value.supportedBandCombinationList_v1590);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0：ASN.1 supportedBandCombinationListNEDC-Only-v15a0；源文件第 20208 行；SEQUENCE。
// Encode_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0 只读不分配；Decode_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(Encoder& enc, const RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1540);
    enc.WriteBit(value.has_supportedBandCombinationList_v1560);
    enc.WriteBit(value.has_supportedBandCombinationList_v1570);
    enc.WriteBit(value.has_supportedBandCombinationList_v1580);
    enc.WriteBit(value.has_supportedBandCombinationList_v1590);
    if (value.has_supportedBandCombinationList_v1540) {
        Encode_BandCombinationList_v1540(enc, value.supportedBandCombinationList_v1540);
    }
    if (value.has_supportedBandCombinationList_v1560) {
        Encode_BandCombinationList_v1560(enc, value.supportedBandCombinationList_v1560);
    }
    if (value.has_supportedBandCombinationList_v1570) {
        Encode_BandCombinationList_v1570(enc, value.supportedBandCombinationList_v1570);
    }
    if (value.has_supportedBandCombinationList_v1580) {
        Encode_BandCombinationList_v1580(enc, value.supportedBandCombinationList_v1580);
    }
    if (value.has_supportedBandCombinationList_v1590) {
        Encode_BandCombinationList_v1590(enc, value.supportedBandCombinationList_v1590);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(Decoder& dec, RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0& value)
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
        if (Decode_BandCombinationList_v1540(dec, value.supportedBandCombinationList_v1540) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1560(dec, value.supportedBandCombinationList_v1560) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_v1570(dec, value.supportedBandCombinationList_v1570) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_BandCombinationList_v1580(dec, value.supportedBandCombinationList_v1580) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_BandCombinationList_v1590(dec, value.supportedBandCombinationList_v1590) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0& value)
{
    if (value.has_supportedBandCombinationList_v1540) {
        Free_BandCombinationList_v1540(value.supportedBandCombinationList_v1540);
    }
    if (value.has_supportedBandCombinationList_v1560) {
        Free_BandCombinationList_v1560(value.supportedBandCombinationList_v1560);
    }
    if (value.has_supportedBandCombinationList_v1570) {
        Free_BandCombinationList_v1570(value.supportedBandCombinationList_v1570);
    }
    if (value.has_supportedBandCombinationList_v1580) {
        Free_BandCombinationList_v1580(value.supportedBandCombinationList_v1580);
    }
    if (value.has_supportedBandCombinationList_v1590) {
        Free_BandCombinationList_v1590(value.supportedBandCombinationList_v1590);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup7：ASN.1 RF_ParametersMRDC_ExtGroup7；源文件第 20207 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup7 只读不分配；Decode_RF_ParametersMRDC_ExtGroup7 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup7 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup7(Encoder& enc, const RF_ParametersMRDC_ExtGroup7& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v15a0);
    if (value.has_supportedBandCombinationListNEDC_Only_v15a0) {
        Encode_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(enc, value.supportedBandCombinationListNEDC_Only_v15a0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup7(Decoder& dec, RF_ParametersMRDC_ExtGroup7& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(dec, value.supportedBandCombinationListNEDC_Only_v15a0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup7(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup7(RF_ParametersMRDC_ExtGroup7& value)
{
    if (value.has_supportedBandCombinationListNEDC_Only_v15a0) {
        Free_RF_ParametersMRDC_ExtGroup7_SupportedBandCombinationListNEDC_Only_v15a0(value.supportedBandCombinationListNEDC_Only_v15a0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup8：ASN.1 RF_ParametersMRDC_ExtGroup8；源文件第 20216 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup8 只读不分配；Decode_RF_ParametersMRDC_ExtGroup8 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup8 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup8(Encoder& enc, const RF_ParametersMRDC_ExtGroup8& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1610);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1610);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_r16);
    if (value.has_supportedBandCombinationList_v1610) {
        Encode_BandCombinationList_v1610(enc, value.supportedBandCombinationList_v1610);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1610) {
        Encode_BandCombinationList_v1610(enc, value.supportedBandCombinationListNEDC_Only_v1610);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_r16) {
        Encode_BandCombinationList_UplinkTxSwitch_r16(enc, value.supportedBandCombinationList_UplinkTxSwitch_r16);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup8(Decoder& dec, RF_ParametersMRDC_ExtGroup8& value)
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
        if (Decode_BandCombinationList_v1610(dec, value.supportedBandCombinationList_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1610(dec, value.supportedBandCombinationListNEDC_Only_v1610) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_r16(dec, value.supportedBandCombinationList_UplinkTxSwitch_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup8(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup8(RF_ParametersMRDC_ExtGroup8& value)
{
    if (value.has_supportedBandCombinationList_v1610) {
        Free_BandCombinationList_v1610(value.supportedBandCombinationList_v1610);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1610) {
        Free_BandCombinationList_v1610(value.supportedBandCombinationListNEDC_Only_v1610);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_r16) {
        Free_BandCombinationList_UplinkTxSwitch_r16(value.supportedBandCombinationList_UplinkTxSwitch_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup9：ASN.1 RF_ParametersMRDC_ExtGroup9；源文件第 20221 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup9 只读不分配；Decode_RF_ParametersMRDC_ExtGroup9 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup9 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup9(Encoder& enc, const RF_ParametersMRDC_ExtGroup9& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1630);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1630);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1630);
    if (value.has_supportedBandCombinationList_v1630) {
        Encode_BandCombinationList_v1630(enc, value.supportedBandCombinationList_v1630);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1630) {
        Encode_BandCombinationList_v1630(enc, value.supportedBandCombinationListNEDC_Only_v1630);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1630) {
        Encode_BandCombinationList_UplinkTxSwitch_v1630(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1630);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup9(Decoder& dec, RF_ParametersMRDC_ExtGroup9& value)
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
        if (Decode_BandCombinationList_v1630(dec, value.supportedBandCombinationList_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1630(dec, value.supportedBandCombinationListNEDC_Only_v1630) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1630(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1630) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup9(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup9(RF_ParametersMRDC_ExtGroup9& value)
{
    if (value.has_supportedBandCombinationList_v1630) {
        Free_BandCombinationList_v1630(value.supportedBandCombinationList_v1630);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1630) {
        Free_BandCombinationList_v1630(value.supportedBandCombinationListNEDC_Only_v1630);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1630) {
        Free_BandCombinationList_UplinkTxSwitch_v1630(value.supportedBandCombinationList_UplinkTxSwitch_v1630);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup10：ASN.1 RF_ParametersMRDC_ExtGroup10；源文件第 20226 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup10 只读不分配；Decode_RF_ParametersMRDC_ExtGroup10 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup10 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup10(Encoder& enc, const RF_ParametersMRDC_ExtGroup10& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1640);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1640);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1640);
    if (value.has_supportedBandCombinationList_v1640) {
        Encode_BandCombinationList_v1640(enc, value.supportedBandCombinationList_v1640);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1640) {
        Encode_BandCombinationList_v1640(enc, value.supportedBandCombinationListNEDC_Only_v1640);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1640) {
        Encode_BandCombinationList_UplinkTxSwitch_v1640(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1640);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup10(Decoder& dec, RF_ParametersMRDC_ExtGroup10& value)
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
        if (Decode_BandCombinationList_v1640(dec, value.supportedBandCombinationList_v1640) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1640(dec, value.supportedBandCombinationListNEDC_Only_v1640) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1640(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1640) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup10(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup10(RF_ParametersMRDC_ExtGroup10& value)
{
    if (value.has_supportedBandCombinationList_v1640) {
        Free_BandCombinationList_v1640(value.supportedBandCombinationList_v1640);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1640) {
        Free_BandCombinationList_v1640(value.supportedBandCombinationListNEDC_Only_v1640);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1640) {
        Free_BandCombinationList_UplinkTxSwitch_v1640(value.supportedBandCombinationList_UplinkTxSwitch_v1640);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup11：ASN.1 RF_ParametersMRDC_ExtGroup11；源文件第 20231 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup11 只读不分配；Decode_RF_ParametersMRDC_ExtGroup11 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup11 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup11(Encoder& enc, const RF_ParametersMRDC_ExtGroup11& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1670);
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1670) {
        Encode_BandCombinationList_UplinkTxSwitch_v1670(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1670);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup11(Decoder& dec, RF_ParametersMRDC_ExtGroup11& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1670(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1670) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup11(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup11(RF_ParametersMRDC_ExtGroup11& value)
{
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1670) {
        Free_BandCombinationList_UplinkTxSwitch_v1670(value.supportedBandCombinationList_UplinkTxSwitch_v1670);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup12：ASN.1 RF_ParametersMRDC_ExtGroup12；源文件第 20234 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup12 只读不分配；Decode_RF_ParametersMRDC_ExtGroup12 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup12 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup12(Encoder& enc, const RF_ParametersMRDC_ExtGroup12& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1700);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1700);
    if (value.has_supportedBandCombinationList_v1700) {
        Encode_BandCombinationList_v1700(enc, value.supportedBandCombinationList_v1700);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1700) {
        Encode_BandCombinationList_UplinkTxSwitch_v1700(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1700);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup12(Decoder& dec, RF_ParametersMRDC_ExtGroup12& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1700(dec, value.supportedBandCombinationList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1700(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1700) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup12(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup12(RF_ParametersMRDC_ExtGroup12& value)
{
    if (value.has_supportedBandCombinationList_v1700) {
        Free_BandCombinationList_v1700(value.supportedBandCombinationList_v1700);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1700) {
        Free_BandCombinationList_UplinkTxSwitch_v1700(value.supportedBandCombinationList_UplinkTxSwitch_v1700);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720：ASN.1 supportedBandCombinationListNEDC-Only-v1720；源文件第 20240 行；SEQUENCE。
// Encode_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720 只读不分配；Decode_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(Encoder& enc, const RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1700);
    enc.WriteBit(value.has_supportedBandCombinationList_v1720);
    if (value.has_supportedBandCombinationList_v1700) {
        Encode_BandCombinationList_v1700(enc, value.supportedBandCombinationList_v1700);
    }
    if (value.has_supportedBandCombinationList_v1720) {
        Encode_BandCombinationList_v1720(enc, value.supportedBandCombinationList_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(Decoder& dec, RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1700(dec, value.supportedBandCombinationList_v1700) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1720(dec, value.supportedBandCombinationList_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720& value)
{
    if (value.has_supportedBandCombinationList_v1700) {
        Free_BandCombinationList_v1700(value.supportedBandCombinationList_v1700);
    }
    if (value.has_supportedBandCombinationList_v1720) {
        Free_BandCombinationList_v1720(value.supportedBandCombinationList_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup13：ASN.1 RF_ParametersMRDC_ExtGroup13；源文件第 20238 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup13 只读不分配；Decode_RF_ParametersMRDC_ExtGroup13 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup13 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup13(Encoder& enc, const RF_ParametersMRDC_ExtGroup13& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1720);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1720);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1720);
    if (value.has_supportedBandCombinationList_v1720) {
        Encode_BandCombinationList_v1720(enc, value.supportedBandCombinationList_v1720);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1720) {
        Encode_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(enc, value.supportedBandCombinationListNEDC_Only_v1720);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1720) {
        Encode_BandCombinationList_UplinkTxSwitch_v1720(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1720);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup13(Decoder& dec, RF_ParametersMRDC_ExtGroup13& value)
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
        if (Decode_BandCombinationList_v1720(dec, value.supportedBandCombinationList_v1720) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(dec, value.supportedBandCombinationListNEDC_Only_v1720) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1720(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1720) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup13(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup13(RF_ParametersMRDC_ExtGroup13& value)
{
    if (value.has_supportedBandCombinationList_v1720) {
        Free_BandCombinationList_v1720(value.supportedBandCombinationList_v1720);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1720) {
        Free_RF_ParametersMRDC_ExtGroup13_SupportedBandCombinationListNEDC_Only_v1720(value.supportedBandCombinationListNEDC_Only_v1720);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1720) {
        Free_BandCombinationList_UplinkTxSwitch_v1720(value.supportedBandCombinationList_UplinkTxSwitch_v1720);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup14：ASN.1 RF_ParametersMRDC_ExtGroup14；源文件第 20246 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup14 只读不分配；Decode_RF_ParametersMRDC_ExtGroup14 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup14 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup14(Encoder& enc, const RF_ParametersMRDC_ExtGroup14& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1730);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1730);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1730);
    if (value.has_supportedBandCombinationList_v1730) {
        Encode_BandCombinationList_v1730(enc, value.supportedBandCombinationList_v1730);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1730) {
        Encode_BandCombinationList_v1730(enc, value.supportedBandCombinationListNEDC_Only_v1730);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1730) {
        Encode_BandCombinationList_UplinkTxSwitch_v1730(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup14(Decoder& dec, RF_ParametersMRDC_ExtGroup14& value)
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
        if (Decode_BandCombinationList_v1730(dec, value.supportedBandCombinationList_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1730(dec, value.supportedBandCombinationListNEDC_Only_v1730) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1730(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup14(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup14(RF_ParametersMRDC_ExtGroup14& value)
{
    if (value.has_supportedBandCombinationList_v1730) {
        Free_BandCombinationList_v1730(value.supportedBandCombinationList_v1730);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1730) {
        Free_BandCombinationList_v1730(value.supportedBandCombinationListNEDC_Only_v1730);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1730) {
        Free_BandCombinationList_UplinkTxSwitch_v1730(value.supportedBandCombinationList_UplinkTxSwitch_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup15：ASN.1 RF_ParametersMRDC_ExtGroup15；源文件第 20251 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup15 只读不分配；Decode_RF_ParametersMRDC_ExtGroup15 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup15 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup15(Encoder& enc, const RF_ParametersMRDC_ExtGroup15& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1740);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1740);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1740);
    if (value.has_supportedBandCombinationList_v1740) {
        Encode_BandCombinationList_v1740(enc, value.supportedBandCombinationList_v1740);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1740) {
        Encode_BandCombinationList_v1740(enc, value.supportedBandCombinationListNEDC_Only_v1740);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1740) {
        Encode_BandCombinationList_UplinkTxSwitch_v1740(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1740);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup15(Decoder& dec, RF_ParametersMRDC_ExtGroup15& value)
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
        if (Decode_BandCombinationList_v1740(dec, value.supportedBandCombinationList_v1740) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1740(dec, value.supportedBandCombinationListNEDC_Only_v1740) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1740(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1740) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup15(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup15(RF_ParametersMRDC_ExtGroup15& value)
{
    if (value.has_supportedBandCombinationList_v1740) {
        Free_BandCombinationList_v1740(value.supportedBandCombinationList_v1740);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1740) {
        Free_BandCombinationList_v1740(value.supportedBandCombinationListNEDC_Only_v1740);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1740) {
        Free_BandCombinationList_UplinkTxSwitch_v1740(value.supportedBandCombinationList_UplinkTxSwitch_v1740);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup16：ASN.1 RF_ParametersMRDC_ExtGroup16；源文件第 20256 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup16 只读不分配；Decode_RF_ParametersMRDC_ExtGroup16 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup16(Encoder& enc, const RF_ParametersMRDC_ExtGroup16& value)
{
    (void)value;
    enc.WriteBit(value.has_dummy1);
    enc.WriteBit(value.has_dummy2);
    if (value.has_dummy1) {
        Encode_BandCombinationList_v1770(enc, value.dummy1);
    }
    if (value.has_dummy2) {
        Encode_BandCombinationList_UplinkTxSwitch_v1770(enc, value.dummy2);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup16(Decoder& dec, RF_ParametersMRDC_ExtGroup16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1770(dec, value.dummy1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1770(dec, value.dummy2) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup16(RF_ParametersMRDC_ExtGroup16& value)
{
    if (value.has_dummy1) {
        Free_BandCombinationList_v1770(value.dummy1);
    }
    if (value.has_dummy2) {
        Free_BandCombinationList_UplinkTxSwitch_v1770(value.dummy2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup17：ASN.1 RF_ParametersMRDC_ExtGroup17；源文件第 20260 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup17 只读不分配；Decode_RF_ParametersMRDC_ExtGroup17 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup17(Encoder& enc, const RF_ParametersMRDC_ExtGroup17& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1780);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v1780);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1780);
    if (value.has_supportedBandCombinationList_v1780) {
        Encode_BandCombinationList_v1780(enc, value.supportedBandCombinationList_v1780);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1780) {
        Encode_BandCombinationList_v1780(enc, value.supportedBandCombinationListNEDC_Only_v1780);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1780) {
        Encode_BandCombinationList_UplinkTxSwitch_v1780(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1780);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup17(Decoder& dec, RF_ParametersMRDC_ExtGroup17& value)
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
        if (Decode_BandCombinationList_v1780(dec, value.supportedBandCombinationList_v1780) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v1780(dec, value.supportedBandCombinationListNEDC_Only_v1780) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1780(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1780) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup17(RF_ParametersMRDC_ExtGroup17& value)
{
    if (value.has_supportedBandCombinationList_v1780) {
        Free_BandCombinationList_v1780(value.supportedBandCombinationList_v1780);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v1780) {
        Free_BandCombinationList_v1780(value.supportedBandCombinationListNEDC_Only_v1780);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1780) {
        Free_BandCombinationList_UplinkTxSwitch_v1780(value.supportedBandCombinationList_UplinkTxSwitch_v1780);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_ExtGroup18：ASN.1 RF_ParametersMRDC_ExtGroup18；源文件第 20265 行；扩展添加组 [[ ]]。
// Encode_RF_ParametersMRDC_ExtGroup18 只读不分配；Decode_RF_ParametersMRDC_ExtGroup18 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_ExtGroup18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_ExtGroup18(Encoder& enc, const RF_ParametersMRDC_ExtGroup18& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v1800);
    enc.WriteBit(value.has_supportedBandCombinationList_UplinkTxSwitch_v1800);
    if (value.has_supportedBandCombinationList_v1800) {
        Encode_BandCombinationList_v1800(enc, value.supportedBandCombinationList_v1800);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1800) {
        Encode_BandCombinationList_UplinkTxSwitch_v1800(enc, value.supportedBandCombinationList_UplinkTxSwitch_v1800);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_ExtGroup18(Decoder& dec, RF_ParametersMRDC_ExtGroup18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v1800(dec, value.supportedBandCombinationList_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_UplinkTxSwitch_v1800(dec, value.supportedBandCombinationList_UplinkTxSwitch_v1800) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_ExtGroup18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_ExtGroup18(RF_ParametersMRDC_ExtGroup18& value)
{
    if (value.has_supportedBandCombinationList_v1800) {
        Free_BandCombinationList_v1800(value.supportedBandCombinationList_v1800);
    }
    if (value.has_supportedBandCombinationList_UplinkTxSwitch_v1800) {
        Free_BandCombinationList_UplinkTxSwitch_v1800(value.supportedBandCombinationList_UplinkTxSwitch_v1800);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC：ASN.1 RF-ParametersMRDC；源文件第 20183 行；SEQUENCE。
// Encode_RF_ParametersMRDC 只读不分配；Decode_RF_ParametersMRDC 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC(Encoder& enc, const RF_ParametersMRDC& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5 || value.has_extGroup6 || value.has_extGroup7 || value.has_extGroup8 || value.has_extGroup9 || value.has_extGroup10 || value.has_extGroup11 || value.has_extGroup12 || value.has_extGroup13 || value.has_extGroup14 || value.has_extGroup15 || value.has_extGroup16 || value.has_extGroup17 || value.has_extGroup18;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_supportedBandCombinationList);
    enc.WriteBit(value.has_appliedFreqBandListFilter);
    if (value.has_supportedBandCombinationList) {
        Encode_BandCombinationList(enc, value.supportedBandCombinationList);
    }
    if (value.has_appliedFreqBandListFilter) {
        Encode_FreqBandList(enc, value.appliedFreqBandListFilter);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(18u);
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
        enc.WriteBit(value.has_extGroup11);
        enc.WriteBit(value.has_extGroup12);
        enc.WriteBit(value.has_extGroup13);
        enc.WriteBit(value.has_extGroup14);
        enc.WriteBit(value.has_extGroup15);
        enc.WriteBit(value.has_extGroup16);
        enc.WriteBit(value.has_extGroup17);
        enc.WriteBit(value.has_extGroup18);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup6) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup6(sub, value.extGroup6);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup7) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup7(sub, value.extGroup7);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup8) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup8(sub, value.extGroup8);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup9) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup9(sub, value.extGroup9);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup10) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup10(sub, value.extGroup10);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup11) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup11(sub, value.extGroup11);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup12) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup12(sub, value.extGroup12);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup13) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup13(sub, value.extGroup13);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup14) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup14(sub, value.extGroup14);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup15) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup15(sub, value.extGroup15);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup16) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup16(sub, value.extGroup16);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup17) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup17(sub, value.extGroup17);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup18) {
    Encoder sub;
    Encode_RF_ParametersMRDC_ExtGroup18(sub, value.extGroup18);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC(Decoder& dec, RF_ParametersMRDC& value)
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
        if (Decode_BandCombinationList(dec, value.supportedBandCombinationList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FreqBandList(dec, value.appliedFreqBandListFilter) != ErrorCode_Ok) { goto fail; }
    }
    if (extension) {
        std::uint32_t addition_count = 0;
        if (!dec.ReadNormallySmallLength(addition_count)) { goto fail; }
        if (addition_count > 18u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        bool addition_present[18] = {false};
        for (std::uint32_t i = 0; i < addition_count; ++i) {
            bool bit = false;
            if (!dec.ReadBit(bit)) { goto fail; }
            addition_present[i] = bit;
        }
        if (addition_present[0]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup6(sub, value.extGroup6) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup7(sub, value.extGroup7) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup8(sub, value.extGroup8) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup9(sub, value.extGroup9) != ErrorCode_Ok) {
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
    if (Decode_RF_ParametersMRDC_ExtGroup10(sub, value.extGroup10) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup10 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[10]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup11(sub, value.extGroup11) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup11 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[11]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup12(sub, value.extGroup12) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup12 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[12]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup13(sub, value.extGroup13) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup13 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[13]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup14(sub, value.extGroup14) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup14 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[14]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup15(sub, value.extGroup15) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup15 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[15]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup16(sub, value.extGroup16) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup16 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[16]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup17(sub, value.extGroup17) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup17 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
        if (addition_present[17]) {
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) { goto fail; }
    Decoder sub(open_bytes.data(), open_bytes.size());
    if (Decode_RF_ParametersMRDC_ExtGroup18(sub, value.extGroup18) != ErrorCode_Ok) {
        dec.Fail(sub.Error()); goto fail;
    }
    value.has_extGroup18 = true;
    if (!sub.Ok()) { dec.Fail(sub.Error()); goto fail; }
    if (!sub.CheckOpenTypeEnd()) {
        dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
    }
        }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC(RF_ParametersMRDC& value)
{
    if (value.has_supportedBandCombinationList) {
        Free_BandCombinationList(value.supportedBandCombinationList);
    }
    if (value.has_appliedFreqBandListFilter) {
        Free_FreqBandList(value.appliedFreqBandListFilter);
    }
    if (value.has_extGroup1) {
        Free_RF_ParametersMRDC_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RF_ParametersMRDC_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_RF_ParametersMRDC_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_RF_ParametersMRDC_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_RF_ParametersMRDC_ExtGroup5(value.extGroup5);
    }
    if (value.has_extGroup6) {
        Free_RF_ParametersMRDC_ExtGroup6(value.extGroup6);
    }
    if (value.has_extGroup7) {
        Free_RF_ParametersMRDC_ExtGroup7(value.extGroup7);
    }
    if (value.has_extGroup8) {
        Free_RF_ParametersMRDC_ExtGroup8(value.extGroup8);
    }
    if (value.has_extGroup9) {
        Free_RF_ParametersMRDC_ExtGroup9(value.extGroup9);
    }
    if (value.has_extGroup10) {
        Free_RF_ParametersMRDC_ExtGroup10(value.extGroup10);
    }
    if (value.has_extGroup11) {
        Free_RF_ParametersMRDC_ExtGroup11(value.extGroup11);
    }
    if (value.has_extGroup12) {
        Free_RF_ParametersMRDC_ExtGroup12(value.extGroup12);
    }
    if (value.has_extGroup13) {
        Free_RF_ParametersMRDC_ExtGroup13(value.extGroup13);
    }
    if (value.has_extGroup14) {
        Free_RF_ParametersMRDC_ExtGroup14(value.extGroup14);
    }
    if (value.has_extGroup15) {
        Free_RF_ParametersMRDC_ExtGroup15(value.extGroup15);
    }
    if (value.has_extGroup16) {
        Free_RF_ParametersMRDC_ExtGroup16(value.extGroup16);
    }
    if (value.has_extGroup17) {
        Free_RF_ParametersMRDC_ExtGroup17(value.extGroup17);
    }
    if (value.has_extGroup18) {
        Free_RF_ParametersMRDC_ExtGroup18(value.extGroup18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_v15g0：ASN.1 RF-ParametersMRDC-v15g0；源文件第 20272 行；SEQUENCE。
// Encode_RF_ParametersMRDC_v15g0 只读不分配；Decode_RF_ParametersMRDC_v15g0 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_v15g0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_v15g0(Encoder& enc, const RF_ParametersMRDC_v15g0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v15g0);
    enc.WriteBit(value.has_supportedBandCombinationListNEDC_Only_v15g0);
    if (value.has_supportedBandCombinationList_v15g0) {
        Encode_BandCombinationList_v15g0(enc, value.supportedBandCombinationList_v15g0);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v15g0) {
        Encode_BandCombinationList_v15g0(enc, value.supportedBandCombinationListNEDC_Only_v15g0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_v15g0(Decoder& dec, RF_ParametersMRDC_v15g0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v15g0(dec, value.supportedBandCombinationList_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_BandCombinationList_v15g0(dec, value.supportedBandCombinationListNEDC_Only_v15g0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_v15g0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_v15g0(RF_ParametersMRDC_v15g0& value)
{
    if (value.has_supportedBandCombinationList_v15g0) {
        Free_BandCombinationList_v15g0(value.supportedBandCombinationList_v15g0);
    }
    if (value.has_supportedBandCombinationListNEDC_Only_v15g0) {
        Free_BandCombinationList_v15g0(value.supportedBandCombinationListNEDC_Only_v15g0);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RF_ParametersMRDC_v15n0：ASN.1 RF-ParametersMRDC-v15n0；源文件第 20277 行；SEQUENCE。
// Encode_RF_ParametersMRDC_v15n0 只读不分配；Decode_RF_ParametersMRDC_v15n0 可能 malloc（失败时内部已释放并清零）；Free_RF_ParametersMRDC_v15n0 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RF_ParametersMRDC_v15n0(Encoder& enc, const RF_ParametersMRDC_v15n0& value)
{
    (void)value;
    enc.WriteBit(value.has_supportedBandCombinationList_v15n0);
    if (value.has_supportedBandCombinationList_v15n0) {
        Encode_BandCombinationList_v15n0(enc, value.supportedBandCombinationList_v15n0);
    }
    return enc.Error();
}

ErrorCode Decode_RF_ParametersMRDC_v15n0(Decoder& dec, RF_ParametersMRDC_v15n0& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_BandCombinationList_v15n0(dec, value.supportedBandCombinationList_v15n0) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RF_ParametersMRDC_v15n0(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RF_ParametersMRDC_v15n0(RF_ParametersMRDC_v15n0& value)
{
    if (value.has_supportedBandCombinationList_v15n0) {
        Free_BandCombinationList_v15n0(value.supportedBandCombinationList_v15n0);
    }
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
