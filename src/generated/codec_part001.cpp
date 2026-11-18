/* ============================================================================
 * src/generated/codec_part001.cpp — 生成的编解码函数
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
// 消息入口 MessageKind_MIB：ASN.1 MIB；结构体 MIB；信道 ChannelType_BCCH_BCH；包装位 1 级（0/2）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MIB(Encoder& enc, const MIB& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    Encode_MIB(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MIB(Decoder& dec, MIB& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MIB(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MIB(MIB& value)
{
    Free_MIB(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SystemInformation：ASN.1 SystemInformation；结构体 SystemInformation；信道 ChannelType_BCCH_DL_SCH；包装位 2 级（0/2 → 0/2）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SystemInformation(Encoder& enc, const SystemInformation& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    Encode_SystemInformation(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SystemInformation(Decoder& dec, SystemInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SystemInformation(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SystemInformation(SystemInformation& value)
{
    Free_SystemInformation(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SIB1：ASN.1 SIB1；结构体 SIB1；信道 ChannelType_BCCH_DL_SCH；包装位 2 级（0/2 → 1/2）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SIB1(Encoder& enc, const SIB1& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(1, 0, 1);
    Encode_SIB1(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SIB1(Decoder& dec, SIB1& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SIB1(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SIB1(SIB1& value)
{
    Free_SIB1(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCReject：ASN.1 RRCReject；结构体 RRCReject；信道 ChannelType_DL_CCCH；包装位 2 级（0/2 → 0/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCReject(Encoder& enc, const RRCReject& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 3);
    Encode_RRCReject(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCReject(Decoder& dec, RRCReject& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 2:
        case 3:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCReject(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCReject(RRCReject& value)
{
    Free_RRCReject(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCSetup：ASN.1 RRCSetup；结构体 RRCSetup；信道 ChannelType_DL_CCCH；包装位 2 级（0/2 → 1/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCSetup(Encoder& enc, const RRCSetup& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(1, 0, 3);
    Encode_RRCSetup(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCSetup(Decoder& dec, RRCSetup& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        switch (selector) {
        case 2:
        case 3:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCSetup(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCSetup(RRCSetup& value)
{
    Free_RRCSetup(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCReconfiguration：ASN.1 RRCReconfiguration；结构体 RRCReconfiguration；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 0/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCReconfiguration(Encoder& enc, const RRCReconfiguration& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 15);
    Encode_RRCReconfiguration(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCReconfiguration(Decoder& dec, RRCReconfiguration& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCReconfiguration(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCReconfiguration(RRCReconfiguration& value)
{
    Free_RRCReconfiguration(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCResume：ASN.1 RRCResume；结构体 RRCResume；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 1/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCResume(Encoder& enc, const RRCResume& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(1, 0, 15);
    Encode_RRCResume(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCResume(Decoder& dec, RRCResume& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCResume(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCResume(RRCResume& value)
{
    Free_RRCResume(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCRelease：ASN.1 RRCRelease；结构体 RRCRelease；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 2/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCRelease(Encoder& enc, const RRCRelease& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(2, 0, 15);
    Encode_RRCRelease(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCRelease(Decoder& dec, RRCRelease& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 2) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCRelease(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCRelease(RRCRelease& value)
{
    Free_RRCRelease(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCReestablishment：ASN.1 RRCReestablishment；结构体 RRCReestablishment；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 3/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCReestablishment(Encoder& enc, const RRCReestablishment& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(3, 0, 15);
    Encode_RRCReestablishment(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCReestablishment(Decoder& dec, RRCReestablishment& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 3) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCReestablishment(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCReestablishment(RRCReestablishment& value)
{
    Free_RRCReestablishment(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SecurityModeCommand：ASN.1 SecurityModeCommand；结构体 SecurityModeCommand；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 4/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SecurityModeCommand(Encoder& enc, const SecurityModeCommand& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(4, 0, 15);
    Encode_SecurityModeCommand(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SecurityModeCommand(Decoder& dec, SecurityModeCommand& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 4) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SecurityModeCommand(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SecurityModeCommand(SecurityModeCommand& value)
{
    Free_SecurityModeCommand(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_DLInformationTransfer：ASN.1 DLInformationTransfer；结构体 DLInformationTransfer；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 5/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_DLInformationTransfer(Encoder& enc, const DLInformationTransfer& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(5, 0, 15);
    Encode_DLInformationTransfer(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_DLInformationTransfer(Decoder& dec, DLInformationTransfer& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 5) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_DLInformationTransfer(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_DLInformationTransfer(DLInformationTransfer& value)
{
    Free_DLInformationTransfer(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_UECapabilityEnquiry：ASN.1 UECapabilityEnquiry；结构体 UECapabilityEnquiry；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 6/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_UECapabilityEnquiry(Encoder& enc, const UECapabilityEnquiry& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(6, 0, 15);
    Encode_UECapabilityEnquiry(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_UECapabilityEnquiry(Decoder& dec, UECapabilityEnquiry& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 6) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_UECapabilityEnquiry(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_UECapabilityEnquiry(UECapabilityEnquiry& value)
{
    Free_UECapabilityEnquiry(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_CounterCheck：ASN.1 CounterCheck；结构体 CounterCheck；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 7/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_CounterCheck(Encoder& enc, const CounterCheck& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(7, 0, 15);
    Encode_CounterCheck(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_CounterCheck(Decoder& dec, CounterCheck& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 7) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_CounterCheck(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_CounterCheck(CounterCheck& value)
{
    Free_CounterCheck(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MobilityFromNRCommand：ASN.1 MobilityFromNRCommand；结构体 MobilityFromNRCommand；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 8/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MobilityFromNRCommand(Encoder& enc, const MobilityFromNRCommand& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(8, 0, 15);
    Encode_MobilityFromNRCommand(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MobilityFromNRCommand(Decoder& dec, MobilityFromNRCommand& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 8) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MobilityFromNRCommand(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MobilityFromNRCommand(MobilityFromNRCommand& value)
{
    Free_MobilityFromNRCommand(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_DLDedicatedMessageSegment_r16：ASN.1 DLDedicatedMessageSegment-r16；结构体 DLDedicatedMessageSegment_r16；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 9/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_DLDedicatedMessageSegment_r16(Encoder& enc, const DLDedicatedMessageSegment_r16& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(9, 0, 15);
    Encode_DLDedicatedMessageSegment_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_DLDedicatedMessageSegment_r16(Decoder& dec, DLDedicatedMessageSegment_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 9) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_DLDedicatedMessageSegment_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_DLDedicatedMessageSegment_r16(DLDedicatedMessageSegment_r16& value)
{
    Free_DLDedicatedMessageSegment_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_UEInformationRequest_r16：ASN.1 UEInformationRequest-r16；结构体 UEInformationRequest_r16；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 10/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_UEInformationRequest_r16(Encoder& enc, const UEInformationRequest_r16& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(10, 0, 15);
    Encode_UEInformationRequest_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_UEInformationRequest_r16(Decoder& dec, UEInformationRequest_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 10) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_UEInformationRequest_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_UEInformationRequest_r16(UEInformationRequest_r16& value)
{
    Free_UEInformationRequest_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_DLInformationTransferMRDC_r16：ASN.1 DLInformationTransferMRDC-r16；结构体 DLInformationTransferMRDC_r16；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 11/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_DLInformationTransferMRDC_r16(Encoder& enc, const DLInformationTransferMRDC_r16& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(11, 0, 15);
    Encode_DLInformationTransferMRDC_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_DLInformationTransferMRDC_r16(Decoder& dec, DLInformationTransferMRDC_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 11) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_DLInformationTransferMRDC_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_DLInformationTransferMRDC_r16(DLInformationTransferMRDC_r16& value)
{
    Free_DLInformationTransferMRDC_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_LoggedMeasurementConfiguration_r16：ASN.1 LoggedMeasurementConfiguration-r16；结构体 LoggedMeasurementConfiguration_r16；信道 ChannelType_DL_DCCH；包装位 2 级（0/2 → 12/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_LoggedMeasurementConfiguration_r16(Encoder& enc, const LoggedMeasurementConfiguration_r16& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(12, 0, 15);
    Encode_LoggedMeasurementConfiguration_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_LoggedMeasurementConfiguration_r16(Decoder& dec, LoggedMeasurementConfiguration_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 12) {
        switch (selector) {
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_LoggedMeasurementConfiguration_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_LoggedMeasurementConfiguration_r16(LoggedMeasurementConfiguration_r16& value)
{
    Free_LoggedMeasurementConfiguration_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MBSBroadcastConfiguration_r17：ASN.1 MBSBroadcastConfiguration-r17；结构体 MBSBroadcastConfiguration_r17；信道 ChannelType_MCCH_r17；包装位 2 级（0/2 → 0/2）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MBSBroadcastConfiguration_r17(Encoder& enc, const MBSBroadcastConfiguration_r17& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    Encode_MBSBroadcastConfiguration_r17(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MBSBroadcastConfiguration_r17(Decoder& dec, MBSBroadcastConfiguration_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MBSBroadcastConfiguration_r17(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MBSBroadcastConfiguration_r17(MBSBroadcastConfiguration_r17& value)
{
    Free_MBSBroadcastConfiguration_r17(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MBSMulticastConfiguration_r18：ASN.1 MBSMulticastConfiguration-r18；结构体 MBSMulticastConfiguration_r18；信道 ChannelType_MulticastMCCH_r18；包装位 2 级（0/2 → 0/2）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MBSMulticastConfiguration_r18(Encoder& enc, const MBSMulticastConfiguration_r18& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    Encode_MBSMulticastConfiguration_r18(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MBSMulticastConfiguration_r18(Decoder& dec, MBSMulticastConfiguration_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MBSMulticastConfiguration_r18(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MBSMulticastConfiguration_r18(MBSMulticastConfiguration_r18& value)
{
    Free_MBSMulticastConfiguration_r18(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_Paging：ASN.1 Paging；结构体 Paging；信道 ChannelType_PCCH；包装位 2 级（0/2 → 0/2）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_Paging(Encoder& enc, const Paging& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    Encode_Paging(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_Paging(Decoder& dec, Paging& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_Paging(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_Paging(Paging& value)
{
    Free_Paging(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCSetupRequest：ASN.1 RRCSetupRequest；结构体 RRCSetupRequest；信道 ChannelType_UL_CCCH；包装位 2 级（0/2 → 0/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCSetupRequest(Encoder& enc, const RRCSetupRequest& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 3);
    Encode_RRCSetupRequest(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCSetupRequest(Decoder& dec, RRCSetupRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCSetupRequest(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCSetupRequest(RRCSetupRequest& value)
{
    Free_RRCSetupRequest(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCResumeRequest：ASN.1 RRCResumeRequest；结构体 RRCResumeRequest；信道 ChannelType_UL_CCCH；包装位 2 级（0/2 → 1/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCResumeRequest(Encoder& enc, const RRCResumeRequest& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(1, 0, 3);
    Encode_RRCResumeRequest(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCResumeRequest(Decoder& dec, RRCResumeRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCResumeRequest(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCResumeRequest(RRCResumeRequest& value)
{
    Free_RRCResumeRequest(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCReestablishmentRequest：ASN.1 RRCReestablishmentRequest；结构体 RRCReestablishmentRequest；信道 ChannelType_UL_CCCH；包装位 2 级（0/2 → 2/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCReestablishmentRequest(Encoder& enc, const RRCReestablishmentRequest& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(2, 0, 3);
    Encode_RRCReestablishmentRequest(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCReestablishmentRequest(Decoder& dec, RRCReestablishmentRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 2) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCReestablishmentRequest(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCReestablishmentRequest(RRCReestablishmentRequest& value)
{
    Free_RRCReestablishmentRequest(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCSystemInfoRequest：ASN.1 RRCSystemInfoRequest；结构体 RRCSystemInfoRequest；信道 ChannelType_UL_CCCH；包装位 2 级（0/2 → 3/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCSystemInfoRequest(Encoder& enc, const RRCSystemInfoRequest& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(3, 0, 3);
    Encode_RRCSystemInfoRequest(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCSystemInfoRequest(Decoder& dec, RRCSystemInfoRequest& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 3) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCSystemInfoRequest(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCSystemInfoRequest(RRCSystemInfoRequest& value)
{
    Free_RRCSystemInfoRequest(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCResumeRequest1：ASN.1 RRCResumeRequest1；结构体 RRCResumeRequest1；信道 ChannelType_UL_CCCH1；包装位 2 级（0/2 → 0/4）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCResumeRequest1(Encoder& enc, const RRCResumeRequest1& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 3);
    Encode_RRCResumeRequest1(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCResumeRequest1(Decoder& dec, RRCResumeRequest1& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 3, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
        case 2:
        case 3:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCResumeRequest1(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCResumeRequest1(RRCResumeRequest1& value)
{
    Free_RRCResumeRequest1(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MeasurementReport：ASN.1 MeasurementReport；结构体 MeasurementReport；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 0/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MeasurementReport(Encoder& enc, const MeasurementReport& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 15);
    Encode_MeasurementReport(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MeasurementReport(Decoder& dec, MeasurementReport& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MeasurementReport(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MeasurementReport(MeasurementReport& value)
{
    Free_MeasurementReport(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCReconfigurationComplete：ASN.1 RRCReconfigurationComplete；结构体 RRCReconfigurationComplete；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 1/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCReconfigurationComplete(Encoder& enc, const RRCReconfigurationComplete& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(1, 0, 15);
    Encode_RRCReconfigurationComplete(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCReconfigurationComplete(Decoder& dec, RRCReconfigurationComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCReconfigurationComplete(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCReconfigurationComplete(RRCReconfigurationComplete& value)
{
    Free_RRCReconfigurationComplete(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCSetupComplete：ASN.1 RRCSetupComplete；结构体 RRCSetupComplete；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 2/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCSetupComplete(Encoder& enc, const RRCSetupComplete& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(2, 0, 15);
    Encode_RRCSetupComplete(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCSetupComplete(Decoder& dec, RRCSetupComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 2) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCSetupComplete(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCSetupComplete(RRCSetupComplete& value)
{
    Free_RRCSetupComplete(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCReestablishmentComplete：ASN.1 RRCReestablishmentComplete；结构体 RRCReestablishmentComplete；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 3/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCReestablishmentComplete(Encoder& enc, const RRCReestablishmentComplete& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(3, 0, 15);
    Encode_RRCReestablishmentComplete(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCReestablishmentComplete(Decoder& dec, RRCReestablishmentComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 3) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCReestablishmentComplete(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCReestablishmentComplete(RRCReestablishmentComplete& value)
{
    Free_RRCReestablishmentComplete(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_RRCResumeComplete：ASN.1 RRCResumeComplete；结构体 RRCResumeComplete；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 4/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_RRCResumeComplete(Encoder& enc, const RRCResumeComplete& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(4, 0, 15);
    Encode_RRCResumeComplete(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_RRCResumeComplete(Decoder& dec, RRCResumeComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 4) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_RRCResumeComplete(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_RRCResumeComplete(RRCResumeComplete& value)
{
    Free_RRCResumeComplete(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SecurityModeComplete：ASN.1 SecurityModeComplete；结构体 SecurityModeComplete；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 5/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SecurityModeComplete(Encoder& enc, const SecurityModeComplete& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(5, 0, 15);
    Encode_SecurityModeComplete(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SecurityModeComplete(Decoder& dec, SecurityModeComplete& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 5) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SecurityModeComplete(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SecurityModeComplete(SecurityModeComplete& value)
{
    Free_SecurityModeComplete(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SecurityModeFailure：ASN.1 SecurityModeFailure；结构体 SecurityModeFailure；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 6/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SecurityModeFailure(Encoder& enc, const SecurityModeFailure& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(6, 0, 15);
    Encode_SecurityModeFailure(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SecurityModeFailure(Decoder& dec, SecurityModeFailure& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 6) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SecurityModeFailure(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SecurityModeFailure(SecurityModeFailure& value)
{
    Free_SecurityModeFailure(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_ULInformationTransfer：ASN.1 ULInformationTransfer；结构体 ULInformationTransfer；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 7/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_ULInformationTransfer(Encoder& enc, const ULInformationTransfer& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(7, 0, 15);
    Encode_ULInformationTransfer(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_ULInformationTransfer(Decoder& dec, ULInformationTransfer& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 7) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_ULInformationTransfer(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_ULInformationTransfer(ULInformationTransfer& value)
{
    Free_ULInformationTransfer(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_LocationMeasurementIndication：ASN.1 LocationMeasurementIndication；结构体 LocationMeasurementIndication；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 8/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_LocationMeasurementIndication(Encoder& enc, const LocationMeasurementIndication& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(8, 0, 15);
    Encode_LocationMeasurementIndication(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_LocationMeasurementIndication(Decoder& dec, LocationMeasurementIndication& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 8) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_LocationMeasurementIndication(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_LocationMeasurementIndication(LocationMeasurementIndication& value)
{
    Free_LocationMeasurementIndication(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_UECapabilityInformation：ASN.1 UECapabilityInformation；结构体 UECapabilityInformation；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 9/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_UECapabilityInformation(Encoder& enc, const UECapabilityInformation& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(9, 0, 15);
    Encode_UECapabilityInformation(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_UECapabilityInformation(Decoder& dec, UECapabilityInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 9) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_UECapabilityInformation(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_UECapabilityInformation(UECapabilityInformation& value)
{
    Free_UECapabilityInformation(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_CounterCheckResponse：ASN.1 CounterCheckResponse；结构体 CounterCheckResponse；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 10/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_CounterCheckResponse(Encoder& enc, const CounterCheckResponse& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(10, 0, 15);
    Encode_CounterCheckResponse(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_CounterCheckResponse(Decoder& dec, CounterCheckResponse& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 10) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_CounterCheckResponse(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_CounterCheckResponse(CounterCheckResponse& value)
{
    Free_CounterCheckResponse(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_UEAssistanceInformation：ASN.1 UEAssistanceInformation；结构体 UEAssistanceInformation；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 11/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_UEAssistanceInformation(Encoder& enc, const UEAssistanceInformation& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(11, 0, 15);
    Encode_UEAssistanceInformation(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_UEAssistanceInformation(Decoder& dec, UEAssistanceInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 11) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_UEAssistanceInformation(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_UEAssistanceInformation(UEAssistanceInformation& value)
{
    Free_UEAssistanceInformation(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_FailureInformation：ASN.1 FailureInformation；结构体 FailureInformation；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 12/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_FailureInformation(Encoder& enc, const FailureInformation& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(12, 0, 15);
    Encode_FailureInformation(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_FailureInformation(Decoder& dec, FailureInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 12) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_FailureInformation(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_FailureInformation(FailureInformation& value)
{
    Free_FailureInformation(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_ULInformationTransferMRDC：ASN.1 ULInformationTransferMRDC；结构体 ULInformationTransferMRDC；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 13/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_ULInformationTransferMRDC(Encoder& enc, const ULInformationTransferMRDC& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(13, 0, 15);
    Encode_ULInformationTransferMRDC(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_ULInformationTransferMRDC(Decoder& dec, ULInformationTransferMRDC& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 13) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_ULInformationTransferMRDC(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_ULInformationTransferMRDC(ULInformationTransferMRDC& value)
{
    Free_ULInformationTransferMRDC(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SCGFailureInformation：ASN.1 SCGFailureInformation；结构体 SCGFailureInformation；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 14/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SCGFailureInformation(Encoder& enc, const SCGFailureInformation& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(14, 0, 15);
    Encode_SCGFailureInformation(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SCGFailureInformation(Decoder& dec, SCGFailureInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 14) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SCGFailureInformation(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SCGFailureInformation(SCGFailureInformation& value)
{
    Free_SCGFailureInformation(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SCGFailureInformationEUTRA：ASN.1 SCGFailureInformationEUTRA；结构体 SCGFailureInformationEUTRA；信道 ChannelType_UL_DCCH；包装位 2 级（0/2 → 15/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SCGFailureInformationEUTRA(Encoder& enc, const SCGFailureInformationEUTRA& value)
{
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(15, 0, 15);
    Encode_SCGFailureInformationEUTRA(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SCGFailureInformationEUTRA(Decoder& dec, SCGFailureInformationEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 15) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SCGFailureInformationEUTRA(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SCGFailureInformationEUTRA(SCGFailureInformationEUTRA& value)
{
    Free_SCGFailureInformationEUTRA(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_ULDedicatedMessageSegment_r16：ASN.1 ULDedicatedMessageSegment-r16；结构体 ULDedicatedMessageSegment_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 0/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_ULDedicatedMessageSegment_r16(Encoder& enc, const ULDedicatedMessageSegment_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 15);
    Encode_ULDedicatedMessageSegment_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_ULDedicatedMessageSegment_r16(Decoder& dec, ULDedicatedMessageSegment_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_ULDedicatedMessageSegment_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_ULDedicatedMessageSegment_r16(ULDedicatedMessageSegment_r16& value)
{
    Free_ULDedicatedMessageSegment_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_DedicatedSIBRequest_r16：ASN.1 DedicatedSIBRequest-r16；结构体 DedicatedSIBRequest_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 1/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_DedicatedSIBRequest_r16(Encoder& enc, const DedicatedSIBRequest_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(1, 0, 15);
    Encode_DedicatedSIBRequest_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_DedicatedSIBRequest_r16(Decoder& dec, DedicatedSIBRequest_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_DedicatedSIBRequest_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_DedicatedSIBRequest_r16(DedicatedSIBRequest_r16& value)
{
    Free_DedicatedSIBRequest_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MCGFailureInformation_r16：ASN.1 MCGFailureInformation-r16；结构体 MCGFailureInformation_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 2/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MCGFailureInformation_r16(Encoder& enc, const MCGFailureInformation_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(2, 0, 15);
    Encode_MCGFailureInformation_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MCGFailureInformation_r16(Decoder& dec, MCGFailureInformation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 2) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MCGFailureInformation_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MCGFailureInformation_r16(MCGFailureInformation_r16& value)
{
    Free_MCGFailureInformation_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_UEInformationResponse_r16：ASN.1 UEInformationResponse-r16；结构体 UEInformationResponse_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 3/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_UEInformationResponse_r16(Encoder& enc, const UEInformationResponse_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(3, 0, 15);
    Encode_UEInformationResponse_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_UEInformationResponse_r16(Decoder& dec, UEInformationResponse_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 3) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_UEInformationResponse_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_UEInformationResponse_r16(UEInformationResponse_r16& value)
{
    Free_UEInformationResponse_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_SidelinkUEInformationNR_r16：ASN.1 SidelinkUEInformationNR-r16；结构体 SidelinkUEInformationNR_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 4/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_SidelinkUEInformationNR_r16(Encoder& enc, const SidelinkUEInformationNR_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(4, 0, 15);
    Encode_SidelinkUEInformationNR_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_SidelinkUEInformationNR_r16(Decoder& dec, SidelinkUEInformationNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 4) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_SidelinkUEInformationNR_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_SidelinkUEInformationNR_r16(SidelinkUEInformationNR_r16& value)
{
    Free_SidelinkUEInformationNR_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_ULInformationTransferIRAT_r16：ASN.1 ULInformationTransferIRAT-r16；结构体 ULInformationTransferIRAT_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 5/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_ULInformationTransferIRAT_r16(Encoder& enc, const ULInformationTransferIRAT_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(5, 0, 15);
    Encode_ULInformationTransferIRAT_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_ULInformationTransferIRAT_r16(Decoder& dec, ULInformationTransferIRAT_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 5) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_ULInformationTransferIRAT_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_ULInformationTransferIRAT_r16(ULInformationTransferIRAT_r16& value)
{
    Free_ULInformationTransferIRAT_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_IABOtherInformation_r16：ASN.1 IABOtherInformation-r16；结构体 IABOtherInformation_r16；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 6/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_IABOtherInformation_r16(Encoder& enc, const IABOtherInformation_r16& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(6, 0, 15);
    Encode_IABOtherInformation_r16(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_IABOtherInformation_r16(Decoder& dec, IABOtherInformation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 6) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_IABOtherInformation_r16(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_IABOtherInformation_r16(IABOtherInformation_r16& value)
{
    Free_IABOtherInformation_r16(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MBSInterestIndication_r17：ASN.1 MBSInterestIndication-r17；结构体 MBSInterestIndication_r17；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 7/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MBSInterestIndication_r17(Encoder& enc, const MBSInterestIndication_r17& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(7, 0, 15);
    Encode_MBSInterestIndication_r17(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MBSInterestIndication_r17(Decoder& dec, MBSInterestIndication_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 7) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MBSInterestIndication_r17(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MBSInterestIndication_r17(MBSInterestIndication_r17& value)
{
    Free_MBSInterestIndication_r17(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_UEPositioningAssistanceInfo_r17：ASN.1 UEPositioningAssistanceInfo-r17；结构体 UEPositioningAssistanceInfo_r17；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 8/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_UEPositioningAssistanceInfo_r17(Encoder& enc, const UEPositioningAssistanceInfo_r17& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(8, 0, 15);
    Encode_UEPositioningAssistanceInfo_r17(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_UEPositioningAssistanceInfo_r17(Decoder& dec, UEPositioningAssistanceInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 8) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_UEPositioningAssistanceInfo_r17(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_UEPositioningAssistanceInfo_r17(UEPositioningAssistanceInfo_r17& value)
{
    Free_UEPositioningAssistanceInfo_r17(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_MeasurementReportAppLayer_r17：ASN.1 MeasurementReportAppLayer-r17；结构体 MeasurementReportAppLayer_r17；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 9/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_MeasurementReportAppLayer_r17(Encoder& enc, const MeasurementReportAppLayer_r17& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(9, 0, 15);
    Encode_MeasurementReportAppLayer_r17(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_MeasurementReportAppLayer_r17(Decoder& dec, MeasurementReportAppLayer_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 9) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_MeasurementReportAppLayer_r17(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_MeasurementReportAppLayer_r17(MeasurementReportAppLayer_r17& value)
{
    Free_MeasurementReportAppLayer_r17(value);
}

// --------------------------------------------------------------------------
// 消息入口 MessageKind_IndirectPathFailureInformation_r18：ASN.1 IndirectPathFailureInformation-r18；结构体 IndirectPathFailureInformation_r18；信道 ChannelType_UL_DCCH；包装位 3 级（1/2 → 0/2 → 10/16）。
// EncodeMessage_* 先按路径写入包装层 CHOICE 索引，再编码消息体；DecodeMessage_* 反向校验包装位。
// --------------------------------------------------------------------------
ErrorCode EncodeMessage_IndirectPathFailureInformation_r18(Encoder& enc, const IndirectPathFailureInformation_r18& value)
{
    enc.WriteConstrainedInteger(1, 0, 1);
    enc.WriteConstrainedInteger(0, 0, 1);
    enc.WriteConstrainedInteger(10, 0, 15);
    Encode_IndirectPathFailureInformation_r18(enc, value);
    return enc.Error();
}

ErrorCode DecodeMessage_IndirectPathFailureInformation_r18(Decoder& dec, IndirectPathFailureInformation_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 1) {
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 1, selector)) {
        return dec.Error();
    }
    if (selector != 0) {
        switch (selector) {
        case 1:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    {
    std::int64_t selector = 0;
    if (!dec.ReadConstrainedInteger(0, 15, selector)) {
        return dec.Error();
    }
    if (selector != 10) {
        switch (selector) {
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            dec.Fail(ErrorCode_UnsupportedMessage); return dec.Error();
        default: break;
        }
        dec.Fail(ErrorCode_MessageKindMismatch); return dec.Error();
    }
    }
    const ErrorCode body_result = Decode_IndirectPathFailureInformation_r18(dec, value);
    if (body_result != ErrorCode_Ok) {
        return body_result;
    }
    return dec.Error();
}

void FreeMessage_IndirectPathFailureInformation_r18(IndirectPathFailureInformation_r18& value)
{
    Free_IndirectPathFailureInformation_r18(value);
}


// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_MBSMulticastConfiguration_r18(Encoder& enc, const MBSMulticastConfiguration_r18& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_MBSMulticastConfiguration_r18(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_MBSMulticastConfiguration_r18(Decoder& dec, MBSMulticastConfiguration_r18*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    MBSMulticastConfiguration_r18* value = (MBSMulticastConfiguration_r18*)std::malloc(sizeof(MBSMulticastConfiguration_r18));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_MBSMulticastConfiguration_r18(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_MBSMulticastConfiguration_r18(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_MBSMulticastConfiguration_r18(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_Paging(Encoder& enc, const Paging& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_Paging(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_Paging(Decoder& dec, Paging*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    Paging* value = (Paging*)std::malloc(sizeof(Paging));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_Paging(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_Paging(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_Paging(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_RRCReconfiguration(Encoder& enc, const RRCReconfiguration& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_RRCReconfiguration(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_RRCReconfiguration(Decoder& dec, RRCReconfiguration*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    RRCReconfiguration* value = (RRCReconfiguration*)std::malloc(sizeof(RRCReconfiguration));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_RRCReconfiguration(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_RRCReconfiguration(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_RRCReconfiguration(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_RRCReconfigurationComplete(Encoder& enc, const RRCReconfigurationComplete& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_RRCReconfigurationComplete(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_RRCReconfigurationComplete(Decoder& dec, RRCReconfigurationComplete*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    RRCReconfigurationComplete* value = (RRCReconfigurationComplete*)std::malloc(sizeof(RRCReconfigurationComplete));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_RRCReconfigurationComplete(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_RRCReconfigurationComplete(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_RRCReconfigurationComplete(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_SDT_MAC_PHY_CG_Config_r17(Encoder& enc, const SDT_MAC_PHY_CG_Config_r17& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_SDT_MAC_PHY_CG_Config_r17(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_SDT_MAC_PHY_CG_Config_r17(Decoder& dec, SDT_MAC_PHY_CG_Config_r17*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    SDT_MAC_PHY_CG_Config_r17* value = (SDT_MAC_PHY_CG_Config_r17*)std::malloc(sizeof(SDT_MAC_PHY_CG_Config_r17));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_SDT_MAC_PHY_CG_Config_r17(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_SDT_MAC_PHY_CG_Config_r17(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_SDT_MAC_PHY_CG_Config_r17(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_SRS_PosRRC_InactiveConfig_r17(Encoder& enc, const SRS_PosRRC_InactiveConfig_r17& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_SRS_PosRRC_InactiveConfig_r17(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_SRS_PosRRC_InactiveConfig_r17(Decoder& dec, SRS_PosRRC_InactiveConfig_r17*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    SRS_PosRRC_InactiveConfig_r17* value = (SRS_PosRRC_InactiveConfig_r17*)std::malloc(sizeof(SRS_PosRRC_InactiveConfig_r17));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_SRS_PosRRC_InactiveConfig_r17(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_SRS_PosRRC_InactiveConfig_r17(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_SRS_PosRRC_InactiveConfig_r17(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_SIB1(Encoder& enc, const SIB1& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_SIB1(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_SIB1(Decoder& dec, SIB1*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    SIB1* value = (SIB1*)std::malloc(sizeof(SIB1));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_SIB1(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_SIB1(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_SIB1(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_SystemInformation(Encoder& enc, const SystemInformation& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_SystemInformation(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_SystemInformation(Decoder& dec, SystemInformation*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    SystemInformation* value = (SystemInformation*)std::malloc(sizeof(SystemInformation));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_SystemInformation(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_SystemInformation(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_SystemInformation(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_UECapabilityEnquiry_v1560_IEs(Encoder& enc, const UECapabilityEnquiry_v1560_IEs& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_UECapabilityEnquiry_v1560_IEs(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_UECapabilityEnquiry_v1560_IEs(Decoder& dec, UECapabilityEnquiry_v1560_IEs*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    UECapabilityEnquiry_v1560_IEs* value = (UECapabilityEnquiry_v1560_IEs*)std::malloc(sizeof(UECapabilityEnquiry_v1560_IEs));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_UECapabilityEnquiry_v1560_IEs(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_UECapabilityEnquiry_v1560_IEs(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_UECapabilityEnquiry_v1560_IEs(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_PosSystemInformation_r16_IEs(Encoder& enc, const PosSystemInformation_r16_IEs& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_PosSystemInformation_r16_IEs(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_PosSystemInformation_r16_IEs(Decoder& dec, PosSystemInformation_r16_IEs*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    PosSystemInformation_r16_IEs* value = (PosSystemInformation_r16_IEs*)std::malloc(sizeof(PosSystemInformation_r16_IEs));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_PosSystemInformation_r16_IEs(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_PosSystemInformation_r16_IEs(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_PosSystemInformation_r16_IEs(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_CellGroupConfig(Encoder& enc, const CellGroupConfig& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_CellGroupConfig(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_CellGroupConfig(Decoder& dec, CellGroupConfig*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    CellGroupConfig* value = (CellGroupConfig*)std::malloc(sizeof(CellGroupConfig));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_CellGroupConfig(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_CellGroupConfig(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_CellGroupConfig(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_CondReconfigExecCondSCG_r17(Encoder& enc, const CondReconfigExecCondSCG_r17& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_CondReconfigExecCondSCG_r17(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_CondReconfigExecCondSCG_r17(Decoder& dec, CondReconfigExecCondSCG_r17*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    CondReconfigExecCondSCG_r17* value = (CondReconfigExecCondSCG_r17*)std::malloc(sizeof(CondReconfigExecCondSCG_r17));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_CondReconfigExecCondSCG_r17(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_CondReconfigExecCondSCG_r17(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_CondReconfigExecCondSCG_r17(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_EarlyUL_SyncConfig_r18(Encoder& enc, const EarlyUL_SyncConfig_r18& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_EarlyUL_SyncConfig_r18(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_EarlyUL_SyncConfig_r18(Decoder& dec, EarlyUL_SyncConfig_r18*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    EarlyUL_SyncConfig_r18* value = (EarlyUL_SyncConfig_r18*)std::malloc(sizeof(EarlyUL_SyncConfig_r18));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_EarlyUL_SyncConfig_r18(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_EarlyUL_SyncConfig_r18(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_EarlyUL_SyncConfig_r18(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_MeasResultSCG_Failure(Encoder& enc, const MeasResultSCG_Failure& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_MeasResultSCG_Failure(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_MeasResultSCG_Failure(Decoder& dec, MeasResultSCG_Failure*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    MeasResultSCG_Failure* value = (MeasResultSCG_Failure*)std::malloc(sizeof(MeasResultSCG_Failure));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_MeasResultSCG_Failure(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_MeasResultSCG_Failure(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_MeasResultSCG_Failure(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_RadioBearerConfig(Encoder& enc, const RadioBearerConfig& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_RadioBearerConfig(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_RadioBearerConfig(Decoder& dec, RadioBearerConfig*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    RadioBearerConfig* value = (RadioBearerConfig*)std::malloc(sizeof(RadioBearerConfig));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_RadioBearerConfig(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_RadioBearerConfig(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_RadioBearerConfig(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_UE_MRDC_Capability_v15g0(Encoder& enc, const UE_MRDC_Capability_v15g0& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_UE_MRDC_Capability_v15g0(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_UE_MRDC_Capability_v15g0(Decoder& dec, UE_MRDC_Capability_v15g0*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    UE_MRDC_Capability_v15g0* value = (UE_MRDC_Capability_v15g0*)std::malloc(sizeof(UE_MRDC_Capability_v15g0));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_UE_MRDC_Capability_v15g0(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_UE_MRDC_Capability_v15g0(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_UE_MRDC_Capability_v15g0(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}

// CONTAINING 开放类型包装：编码内层并写长度行列式；解码递归解析内层；受深度上限保护。
ErrorCode EncodeContained_UE_NR_Capability_v15c0(Encoder& enc, const UE_NR_Capability_v15c0& value)
{
    if (enc.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return enc.Fail(ErrorCode_ContainingDepthExceeded);
    }
    Encoder sub;
    sub.SetContainingDepth(enc.ContainingDepth() + 1);
    Encode_UE_NR_Capability_v15c0(sub, value);
    if (sub.Error() != ErrorCode_Ok) {
        return enc.Fail(sub.Error());
    }
    enc.WriteOpenType(sub.Finish());
    return enc.Error();
}

ErrorCode DecodeContained_UE_NR_Capability_v15c0(Decoder& dec, UE_NR_Capability_v15c0*& out)
{
    out = nullptr;
    if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
        return dec.Fail(ErrorCode_ContainingDepthExceeded);
    }
    std::vector<std::uint8_t> open_bytes;
    if (!dec.ReadOpenType(open_bytes)) {
        return dec.Error();
    }
    Decoder sub(open_bytes.data(), open_bytes.size());
    sub.SetContainingDepth(dec.ContainingDepth() + 1);
    UE_NR_Capability_v15c0* value = (UE_NR_Capability_v15c0*)std::malloc(sizeof(UE_NR_Capability_v15c0));
    if (value == nullptr) {
        return dec.Fail(ErrorCode_OutOfMemory);
    }
    std::memset(value, 0, sizeof(*value));
    const ErrorCode decode_result = Decode_UE_NR_Capability_v15c0(sub, *value);
    if (decode_result != ErrorCode_Ok) {
        Free_UE_NR_Capability_v15c0(*value);
        std::free(value);
        return dec.Fail(decode_result);
    }
    if (!sub.CheckOpenTypeEnd()) {
        Free_UE_NR_Capability_v15c0(*value);
        std::free(value);
        return dec.Fail(ErrorCode_OpenTypeOverrun);
    }
    out = value;
    return dec.Error();
}


// --------------------------------------------------------------------------
// DRB_CountMSB_InfoList：ASN.1 DRB-CountMSB-InfoList；源文件第 229 行；SEQUENCE OF。
// Encode_DRB_CountMSB_InfoList 只读不分配；Decode_DRB_CountMSB_InfoList 可能 malloc（失败时内部已释放并清零）；Free_DRB_CountMSB_InfoList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRB_CountMSB_InfoList(Encoder& enc, const DRB_CountMSB_InfoList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 29u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_DRB_CountMSB_Info(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_CountMSB_InfoList(Decoder& dec, DRB_CountMSB_InfoList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 29u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 29u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (DRB_CountMSB_Info*)std::malloc((std::size_t)value.count * sizeof(DRB_CountMSB_Info));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_CountMSB_Info));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_DRB_CountMSB_Info(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_DRB_CountMSB_InfoList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_CountMSB_InfoList(DRB_CountMSB_InfoList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_DRB_CountMSB_Info(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheck_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 226 行；空 SEQUENCE{}。
// Encode_CounterCheck_IEs_NonCriticalExtension 只读不分配；Decode_CounterCheck_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_CounterCheck_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheck_IEs_NonCriticalExtension(Encoder& enc, const CounterCheck_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_CounterCheck_IEs_NonCriticalExtension(Decoder& dec, CounterCheck_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheck_IEs_NonCriticalExtension(CounterCheck_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheck_IEs：ASN.1 CounterCheck-IEs；源文件第 223 行；SEQUENCE。
// Encode_CounterCheck_IEs 只读不分配；Decode_CounterCheck_IEs 可能 malloc（失败时内部已释放并清零）；Free_CounterCheck_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheck_IEs(Encoder& enc, const CounterCheck_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_DRB_CountMSB_InfoList(enc, value.drb_CountMSB_InfoList);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_CounterCheck_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_CounterCheck_IEs(Decoder& dec, CounterCheck_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_DRB_CountMSB_InfoList(dec, value.drb_CountMSB_InfoList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_CounterCheck_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CounterCheck_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheck_IEs(CounterCheck_IEs& value)
{
    Free_DRB_CountMSB_InfoList(value.drb_CountMSB_InfoList);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_CounterCheck_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheck_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 219 行；空 SEQUENCE{}。
// Encode_CounterCheck_CriticalExtensionsFuture 只读不分配；Decode_CounterCheck_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_CounterCheck_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheck_CriticalExtensionsFuture(Encoder& enc, const CounterCheck_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_CounterCheck_CriticalExtensionsFuture(Decoder& dec, CounterCheck_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheck_CriticalExtensionsFuture(CounterCheck_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheck_CriticalExtensions：ASN.1 criticalExtensions；源文件第 217 行；CHOICE。
// Encode_CounterCheck_CriticalExtensions 只读不分配；Decode_CounterCheck_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_CounterCheck_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheck_CriticalExtensions(Encoder& enc, const CounterCheck_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CounterCheck_CriticalExtensions_Tag_counterCheck:
        Encode_CounterCheck_IEs(enc, value.u.counterCheck);
        break;
    case CounterCheck_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_CounterCheck_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CounterCheck_CriticalExtensions(Decoder& dec, CounterCheck_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CounterCheck_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case CounterCheck_CriticalExtensions_Tag_counterCheck: {
        if (Decode_CounterCheck_IEs(dec, value.u.counterCheck) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CounterCheck_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_CounterCheck_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CounterCheck_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheck_CriticalExtensions(CounterCheck_CriticalExtensions& value)
{
    switch (value.tag) {
    case CounterCheck_CriticalExtensions_Tag_counterCheck:
        Free_CounterCheck_IEs(value.u.counterCheck);
        break;
    case CounterCheck_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_CounterCheck_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheck：ASN.1 CounterCheck；源文件第 215 行；SEQUENCE。
// Encode_CounterCheck 只读不分配；Decode_CounterCheck 可能 malloc（失败时内部已释放并清零）；Free_CounterCheck 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheck(Encoder& enc, const CounterCheck& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_CounterCheck_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_CounterCheck(Decoder& dec, CounterCheck& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_CounterCheck_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CounterCheck(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheck(CounterCheck& value)
{
    Free_CounterCheck_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRB_CountMSB_Info：ASN.1 DRB-CountMSB-Info；源文件第 231 行；SEQUENCE。
// Encode_DRB_CountMSB_Info 只读不分配；Decode_DRB_CountMSB_Info 可能 malloc（失败时内部已释放并清零）；Free_DRB_CountMSB_Info 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRB_CountMSB_Info(Encoder& enc, const DRB_CountMSB_Info& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drb_Identity), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.countMSB_Uplink), 0, 33554431);
    enc.WriteConstrainedInteger((std::int64_t)(value.countMSB_Downlink), 0, 33554431);
    return enc.Error();
}

ErrorCode Decode_DRB_CountMSB_Info(Decoder& dec, DRB_CountMSB_Info& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.drb_Identity = (DRB_Identity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 33554431, tmp_value)) { goto fail; }
        value.countMSB_Uplink = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 33554431, tmp_value)) { goto fail; }
        value.countMSB_Downlink = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRB_CountMSB_Info(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_CountMSB_Info(DRB_CountMSB_Info& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRB_CountInfoList：ASN.1 DRB-CountInfoList；源文件第 255 行；SEQUENCE OF。
// Encode_DRB_CountInfoList 只读不分配；Decode_DRB_CountInfoList 可能 malloc（失败时内部已释放并清零）；Free_DRB_CountInfoList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRB_CountInfoList(Encoder& enc, const DRB_CountInfoList& value)
{
    enc.WriteConstrainedLength(value.count, 0u, 29u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_DRB_CountInfo(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_DRB_CountInfoList(Decoder& dec, DRB_CountInfoList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(0u, 29u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 29u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (DRB_CountInfo*)std::malloc((std::size_t)value.count * sizeof(DRB_CountInfo));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(DRB_CountInfo));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_DRB_CountInfo(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_DRB_CountInfoList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_CountInfoList(DRB_CountInfoList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_DRB_CountInfo(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheckResponse_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 251 行；空 SEQUENCE{}。
// Encode_CounterCheckResponse_IEs_NonCriticalExtension 只读不分配；Decode_CounterCheckResponse_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_CounterCheckResponse_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheckResponse_IEs_NonCriticalExtension(Encoder& enc, const CounterCheckResponse_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_CounterCheckResponse_IEs_NonCriticalExtension(Decoder& dec, CounterCheckResponse_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheckResponse_IEs_NonCriticalExtension(CounterCheckResponse_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheckResponse_IEs：ASN.1 CounterCheckResponse-IEs；源文件第 248 行；SEQUENCE。
// Encode_CounterCheckResponse_IEs 只读不分配；Decode_CounterCheckResponse_IEs 可能 malloc（失败时内部已释放并清零）；Free_CounterCheckResponse_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheckResponse_IEs(Encoder& enc, const CounterCheckResponse_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_DRB_CountInfoList(enc, value.drb_CountInfoList);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_CounterCheckResponse_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_CounterCheckResponse_IEs(Decoder& dec, CounterCheckResponse_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_DRB_CountInfoList(dec, value.drb_CountInfoList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_CounterCheckResponse_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CounterCheckResponse_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheckResponse_IEs(CounterCheckResponse_IEs& value)
{
    Free_DRB_CountInfoList(value.drb_CountInfoList);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_CounterCheckResponse_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheckResponse_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 244 行；空 SEQUENCE{}。
// Encode_CounterCheckResponse_CriticalExtensionsFuture 只读不分配；Decode_CounterCheckResponse_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_CounterCheckResponse_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheckResponse_CriticalExtensionsFuture(Encoder& enc, const CounterCheckResponse_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_CounterCheckResponse_CriticalExtensionsFuture(Decoder& dec, CounterCheckResponse_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheckResponse_CriticalExtensionsFuture(CounterCheckResponse_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheckResponse_CriticalExtensions：ASN.1 criticalExtensions；源文件第 242 行；CHOICE。
// Encode_CounterCheckResponse_CriticalExtensions 只读不分配；Decode_CounterCheckResponse_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_CounterCheckResponse_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheckResponse_CriticalExtensions(Encoder& enc, const CounterCheckResponse_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CounterCheckResponse_CriticalExtensions_Tag_counterCheckResponse:
        Encode_CounterCheckResponse_IEs(enc, value.u.counterCheckResponse);
        break;
    case CounterCheckResponse_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_CounterCheckResponse_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CounterCheckResponse_CriticalExtensions(Decoder& dec, CounterCheckResponse_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CounterCheckResponse_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case CounterCheckResponse_CriticalExtensions_Tag_counterCheckResponse: {
        if (Decode_CounterCheckResponse_IEs(dec, value.u.counterCheckResponse) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CounterCheckResponse_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_CounterCheckResponse_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CounterCheckResponse_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheckResponse_CriticalExtensions(CounterCheckResponse_CriticalExtensions& value)
{
    switch (value.tag) {
    case CounterCheckResponse_CriticalExtensions_Tag_counterCheckResponse:
        Free_CounterCheckResponse_IEs(value.u.counterCheckResponse);
        break;
    case CounterCheckResponse_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_CounterCheckResponse_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CounterCheckResponse：ASN.1 CounterCheckResponse；源文件第 240 行；SEQUENCE。
// Encode_CounterCheckResponse 只读不分配；Decode_CounterCheckResponse 可能 malloc（失败时内部已释放并清零）；Free_CounterCheckResponse 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CounterCheckResponse(Encoder& enc, const CounterCheckResponse& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_CounterCheckResponse_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_CounterCheckResponse(Decoder& dec, CounterCheckResponse& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_CounterCheckResponse_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CounterCheckResponse(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CounterCheckResponse(CounterCheckResponse& value)
{
    Free_CounterCheckResponse_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DRB_CountInfo：ASN.1 DRB-CountInfo；源文件第 257 行；SEQUENCE。
// Encode_DRB_CountInfo 只读不分配；Decode_DRB_CountInfo 可能 malloc（失败时内部已释放并清零）；Free_DRB_CountInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DRB_CountInfo(Encoder& enc, const DRB_CountInfo& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.drb_Identity), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.count_Uplink), 0, 4294967295);
    enc.WriteConstrainedInteger((std::int64_t)(value.count_Downlink), 0, 4294967295);
    return enc.Error();
}

ErrorCode Decode_DRB_CountInfo(Decoder& dec, DRB_CountInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.drb_Identity = (DRB_Identity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4294967295, tmp_value)) { goto fail; }
        value.count_Uplink = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4294967295, tmp_value)) { goto fail; }
        value.count_Downlink = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRB_CountInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRB_CountInfo(DRB_CountInfo& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16：ASN.1 onDemandSIB-RequestList-r16；源文件第 274 行；SEQUENCE。
// Encode_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16 只读不分配；Decode_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16 可能 malloc（失败时内部已释放并清零）；Free_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(Encoder& enc, const DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16& value)
{
    enc.WriteBit(value.has_requestedSIB_List_r16);
    enc.WriteBit(value.has_requestedPosSIB_List_r16);
    if (value.has_requestedSIB_List_r16) {
enc.WriteConstrainedLength(value.requestedSIB_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.requestedSIB_List_r16_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.requestedSIB_List_r16_items[i]), 0, 7);
}
    }
    if (value.has_requestedPosSIB_List_r16) {
enc.WriteConstrainedLength(value.requestedPosSIB_List_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.requestedPosSIB_List_r16_count; ++i) {
    Encode_PosSIB_ReqInfo_r16(enc, value.requestedPosSIB_List_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(Decoder& dec, DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.requestedSIB_List_r16_count)) { goto fail; }
if (value.requestedSIB_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.requestedSIB_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.requestedSIB_List_r16_count > 0u) {
    value.requestedSIB_List_r16_items = (SIB_ReqInfo_r16*)std::malloc((std::size_t)value.requestedSIB_List_r16_count * sizeof(SIB_ReqInfo_r16));
    if (value.requestedSIB_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.requestedSIB_List_r16_items, 0, (std::size_t)value.requestedSIB_List_r16_count * sizeof(SIB_ReqInfo_r16));
}
for (std::uint32_t i = 0; i < value.requestedSIB_List_r16_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.requestedSIB_List_r16_items[i] = (SIB_ReqInfo_r16)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.requestedPosSIB_List_r16_count)) { goto fail; }
if (value.requestedPosSIB_List_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.requestedPosSIB_List_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.requestedPosSIB_List_r16_count > 0u) {
    value.requestedPosSIB_List_r16_items = (PosSIB_ReqInfo_r16*)std::malloc((std::size_t)value.requestedPosSIB_List_r16_count * sizeof(PosSIB_ReqInfo_r16));
    if (value.requestedPosSIB_List_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.requestedPosSIB_List_r16_items, 0, (std::size_t)value.requestedPosSIB_List_r16_count * sizeof(PosSIB_ReqInfo_r16));
}
for (std::uint32_t i = 0; i < value.requestedPosSIB_List_r16_count; ++i) {
    if (Decode_PosSIB_ReqInfo_r16(dec, value.requestedPosSIB_List_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16& value)
{
    if (value.has_requestedSIB_List_r16) {
        if (value.requestedSIB_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.requestedSIB_List_r16_count; ++i) {
            }
            std::free(value.requestedSIB_List_r16_items);
            value.requestedSIB_List_r16_items = nullptr;
        }
        value.requestedSIB_List_r16_count = 0;
    }
    if (value.has_requestedPosSIB_List_r16) {
        if (value.requestedPosSIB_List_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.requestedPosSIB_List_r16_count; ++i) {
                Free_PosSIB_ReqInfo_r16(value.requestedPosSIB_List_r16_items[i]);
            }
            std::free(value.requestedPosSIB_List_r16_items);
            value.requestedPosSIB_List_r16_items = nullptr;
        }
        value.requestedPosSIB_List_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DedicatedSIBRequest_r16_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 280 行；空 SEQUENCE{}。
// Encode_DedicatedSIBRequest_r16_IEs_NonCriticalExtension 只读不分配；Decode_DedicatedSIBRequest_r16_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_DedicatedSIBRequest_r16_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(Encoder& enc, const DedicatedSIBRequest_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(Decoder& dec, DedicatedSIBRequest_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(DedicatedSIBRequest_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DedicatedSIBRequest_r16_IEs：ASN.1 DedicatedSIBRequest-r16-IEs；源文件第 273 行；SEQUENCE。
// Encode_DedicatedSIBRequest_r16_IEs 只读不分配；Decode_DedicatedSIBRequest_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_DedicatedSIBRequest_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DedicatedSIBRequest_r16_IEs(Encoder& enc, const DedicatedSIBRequest_r16_IEs& value)
{
    enc.WriteBit(value.has_onDemandSIB_RequestList_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_onDemandSIB_RequestList_r16) {
        Encode_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(enc, value.onDemandSIB_RequestList_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DedicatedSIBRequest_r16_IEs(Decoder& dec, DedicatedSIBRequest_r16_IEs& value)
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
        if (Decode_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(dec, value.onDemandSIB_RequestList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DedicatedSIBRequest_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DedicatedSIBRequest_r16_IEs(DedicatedSIBRequest_r16_IEs& value)
{
    if (value.has_onDemandSIB_RequestList_r16) {
        Free_DedicatedSIBRequest_r16_IEs_OnDemandSIB_RequestList_r16(value.onDemandSIB_RequestList_r16);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_DedicatedSIBRequest_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DedicatedSIBRequest_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 269 行；空 SEQUENCE{}。
// Encode_DedicatedSIBRequest_r16_CriticalExtensionsFuture 只读不分配；Decode_DedicatedSIBRequest_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_DedicatedSIBRequest_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DedicatedSIBRequest_r16_CriticalExtensionsFuture(Encoder& enc, const DedicatedSIBRequest_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DedicatedSIBRequest_r16_CriticalExtensionsFuture(Decoder& dec, DedicatedSIBRequest_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DedicatedSIBRequest_r16_CriticalExtensionsFuture(DedicatedSIBRequest_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DedicatedSIBRequest_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 267 行；CHOICE。
// Encode_DedicatedSIBRequest_r16_CriticalExtensions 只读不分配；Decode_DedicatedSIBRequest_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_DedicatedSIBRequest_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DedicatedSIBRequest_r16_CriticalExtensions(Encoder& enc, const DedicatedSIBRequest_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DedicatedSIBRequest_r16_CriticalExtensions_Tag_dedicatedSIBRequest_r16:
        Encode_DedicatedSIBRequest_r16_IEs(enc, value.u.dedicatedSIBRequest_r16);
        break;
    case DedicatedSIBRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_DedicatedSIBRequest_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DedicatedSIBRequest_r16_CriticalExtensions(Decoder& dec, DedicatedSIBRequest_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DedicatedSIBRequest_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case DedicatedSIBRequest_r16_CriticalExtensions_Tag_dedicatedSIBRequest_r16: {
        if (Decode_DedicatedSIBRequest_r16_IEs(dec, value.u.dedicatedSIBRequest_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DedicatedSIBRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_DedicatedSIBRequest_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DedicatedSIBRequest_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DedicatedSIBRequest_r16_CriticalExtensions(DedicatedSIBRequest_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case DedicatedSIBRequest_r16_CriticalExtensions_Tag_dedicatedSIBRequest_r16:
        Free_DedicatedSIBRequest_r16_IEs(value.u.dedicatedSIBRequest_r16);
        break;
    case DedicatedSIBRequest_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_DedicatedSIBRequest_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DedicatedSIBRequest_r16：ASN.1 DedicatedSIBRequest-r16；源文件第 266 行；SEQUENCE。
// Encode_DedicatedSIBRequest_r16 只读不分配；Decode_DedicatedSIBRequest_r16 可能 malloc（失败时内部已释放并清零）；Free_DedicatedSIBRequest_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DedicatedSIBRequest_r16(Encoder& enc, const DedicatedSIBRequest_r16& value)
{
    Encode_DedicatedSIBRequest_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_DedicatedSIBRequest_r16(Decoder& dec, DedicatedSIBRequest_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DedicatedSIBRequest_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DedicatedSIBRequest_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DedicatedSIBRequest_r16(DedicatedSIBRequest_r16& value)
{
    Free_DedicatedSIBRequest_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// GNSS_ID_r16：ASN.1 GNSS-ID-r16；源文件第 4232 行；SEQUENCE。
// Encode_GNSS_ID_r16 只读不分配；Decode_GNSS_ID_r16 可能 malloc（失败时内部已释放并清零）；Free_GNSS_ID_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_GNSS_ID_r16(Encoder& enc, const GNSS_ID_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    {
        const std::int64_t enum_value = (std::int64_t)(value.gnss_id_r16);
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
    return enc.Error();
}

ErrorCode Decode_GNSS_ID_r16(Decoder& dec, GNSS_ID_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
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
        value.gnss_id_r16 = (GNSS_ID_r16_Gnss_id_r16)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GNSS_ID_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GNSS_ID_r16(GNSS_ID_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SBAS_ID_r16：ASN.1 SBAS-ID-r16；源文件第 4237 行；SEQUENCE。
// Encode_SBAS_ID_r16 只读不分配；Decode_SBAS_ID_r16 可能 malloc（失败时内部已释放并清零）；Free_SBAS_ID_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SBAS_ID_r16(Encoder& enc, const SBAS_ID_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    {
        const std::int64_t enum_value = (std::int64_t)(value.sbas_id_r16);
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
    return enc.Error();
}

ErrorCode Decode_SBAS_ID_r16(Decoder& dec, SBAS_ID_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
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
        value.sbas_id_r16 = (SBAS_ID_r16_Sbas_id_r16)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SBAS_ID_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SBAS_ID_r16(SBAS_ID_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PosSIB_ReqInfo_r16：ASN.1 PosSIB-ReqInfo-r16；源文件第 285 行；SEQUENCE。
// Encode_PosSIB_ReqInfo_r16 只读不分配；Decode_PosSIB_ReqInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_PosSIB_ReqInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PosSIB_ReqInfo_r16(Encoder& enc, const PosSIB_ReqInfo_r16& value)
{
    enc.WriteBit(value.has_gnss_id_r16);
    enc.WriteBit(value.has_sbas_id_r16);
    if (value.has_gnss_id_r16) {
        Encode_GNSS_ID_r16(enc, value.gnss_id_r16);
    }
    if (value.has_sbas_id_r16) {
        Encode_SBAS_ID_r16(enc, value.sbas_id_r16);
    }
    {
        const std::int64_t enum_value = (std::int64_t)(value.posSibType_r16);
        if (enum_value < 0) {
            return enc.Fail(ErrorCode_InvalidEnumValue);
        }
        if (enum_value < 37) {
            enc.WriteBit(false);
            enc.WriteConstrainedInteger(enum_value, 0, 36);
        } else {
            enc.WriteBit(true);
            enc.WriteNormallySmallNonNegative((std::uint32_t)(enum_value - 37));
        }
    }
    return enc.Error();
}

ErrorCode Decode_PosSIB_ReqInfo_r16(Decoder& dec, PosSIB_ReqInfo_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_GNSS_ID_r16(dec, value.gnss_id_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SBAS_ID_r16(dec, value.sbas_id_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool enum_extension = false;
        if (!dec.ReadBit(enum_extension)) { goto fail; }
        std::int64_t enum_value = 0;
        if (!enum_extension) {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 36, root_index)) { goto fail; }
    enum_value = root_index;
        } else {
    std::uint32_t extension_index = 0;
    if (!dec.ReadNormallySmallNonNegative(extension_index)) { goto fail; }
    enum_value = (std::int64_t)37 + (std::int64_t)extension_index;
        }
        value.posSibType_r16 = (PosSIB_ReqInfo_r16_PosSibType_r16)enum_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosSIB_ReqInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosSIB_ReqInfo_r16(PosSIB_ReqInfo_r16& value)
{
    if (value.has_gnss_id_r16) {
        Free_GNSS_ID_r16(value.gnss_id_r16);
    }
    if (value.has_sbas_id_r16) {
        Free_SBAS_ID_r16(value.sbas_id_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 318 行；空 SEQUENCE{}。
// Encode_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension 只读不分配；Decode_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(Encoder& enc, const DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(Decoder& dec, DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLDedicatedMessageSegment_r16_IEs：ASN.1 DLDedicatedMessageSegment-r16-IEs；源文件第 313 行；SEQUENCE。
// Encode_DLDedicatedMessageSegment_r16_IEs 只读不分配；Decode_DLDedicatedMessageSegment_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_DLDedicatedMessageSegment_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLDedicatedMessageSegment_r16_IEs(Encoder& enc, const DLDedicatedMessageSegment_r16_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    enc.WriteConstrainedInteger((std::int64_t)(value.segmentNumber_r16), 0, 4);
    enc.WriteSemiConstrainedOctetString(value.rrc_MessageSegmentContainer_r16.bytes, value.rrc_MessageSegmentContainer_r16.length, 0, 0xFFFFFFFFu);
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_MessageSegmentType_r16), 0, 1);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DLDedicatedMessageSegment_r16_IEs(Decoder& dec, DLDedicatedMessageSegment_r16_IEs& value)
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
        value.rrc_MessageSegmentType_r16 = (DLDedicatedMessageSegment_r16_IEs_Rrc_MessageSegmentType_r16)tmp_value;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLDedicatedMessageSegment_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLDedicatedMessageSegment_r16_IEs(DLDedicatedMessageSegment_r16_IEs& value)
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
        Free_DLDedicatedMessageSegment_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLDedicatedMessageSegment_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 309 行；空 SEQUENCE{}。
// Encode_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture 只读不分配；Decode_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(Encoder& enc, const DLDedicatedMessageSegment_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(Decoder& dec, DLDedicatedMessageSegment_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(DLDedicatedMessageSegment_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLDedicatedMessageSegment_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 307 行；CHOICE。
// Encode_DLDedicatedMessageSegment_r16_CriticalExtensions 只读不分配；Decode_DLDedicatedMessageSegment_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_DLDedicatedMessageSegment_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLDedicatedMessageSegment_r16_CriticalExtensions(Encoder& enc, const DLDedicatedMessageSegment_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_dlDedicatedMessageSegment_r16:
        Encode_DLDedicatedMessageSegment_r16_IEs(enc, value.u.dlDedicatedMessageSegment_r16);
        break;
    case DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DLDedicatedMessageSegment_r16_CriticalExtensions(Decoder& dec, DLDedicatedMessageSegment_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DLDedicatedMessageSegment_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_dlDedicatedMessageSegment_r16: {
        if (Decode_DLDedicatedMessageSegment_r16_IEs(dec, value.u.dlDedicatedMessageSegment_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLDedicatedMessageSegment_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLDedicatedMessageSegment_r16_CriticalExtensions(DLDedicatedMessageSegment_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_dlDedicatedMessageSegment_r16:
        Free_DLDedicatedMessageSegment_r16_IEs(value.u.dlDedicatedMessageSegment_r16);
        break;
    case DLDedicatedMessageSegment_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_DLDedicatedMessageSegment_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLDedicatedMessageSegment_r16：ASN.1 DLDedicatedMessageSegment-r16；源文件第 306 行；SEQUENCE。
// Encode_DLDedicatedMessageSegment_r16 只读不分配；Decode_DLDedicatedMessageSegment_r16 可能 malloc（失败时内部已释放并清零）；Free_DLDedicatedMessageSegment_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLDedicatedMessageSegment_r16(Encoder& enc, const DLDedicatedMessageSegment_r16& value)
{
    Encode_DLDedicatedMessageSegment_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_DLDedicatedMessageSegment_r16(Decoder& dec, DLDedicatedMessageSegment_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DLDedicatedMessageSegment_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLDedicatedMessageSegment_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLDedicatedMessageSegment_r16(DLDedicatedMessageSegment_r16& value)
{
    Free_DLDedicatedMessageSegment_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ClockQualityMetrics_r18_ClockAccuracy_r18：ASN.1 clockAccuracy-r18；源文件第 5157 行；CHOICE。
// Encode_ClockQualityMetrics_r18_ClockAccuracy_r18 只读不分配；Decode_ClockQualityMetrics_r18_ClockAccuracy_r18 可能 malloc（失败时内部已释放并清零）；Free_ClockQualityMetrics_r18_ClockAccuracy_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ClockQualityMetrics_r18_ClockAccuracy_r18(Encoder& enc, const ClockQualityMetrics_r18_ClockAccuracy_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_value:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.value), 1, 40000000);
        break;
    case ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.index), 32, 47);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_ClockQualityMetrics_r18_ClockAccuracy_r18(Decoder& dec, ClockQualityMetrics_r18_ClockAccuracy_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (ClockQualityMetrics_r18_ClockAccuracy_r18_Tag)root_index;
    switch (value.tag) {
    case ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_value: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 40000000, tmp_value)) { goto fail; }
        value.u.value = (int64_t)tmp_value;
        break;
    }
    case ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(32, 47, tmp_value)) { goto fail; }
        value.u.index = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ClockQualityMetrics_r18_ClockAccuracy_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ClockQualityMetrics_r18_ClockAccuracy_r18(ClockQualityMetrics_r18_ClockAccuracy_r18& value)
{
    switch (value.tag) {
    case ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_value:
        break;
    case ClockQualityMetrics_r18_ClockAccuracy_r18_Tag_index:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ClockQualityMetrics_r18：ASN.1 ClockQualityMetrics-r18；源文件第 5152 行；SEQUENCE。
// Encode_ClockQualityMetrics_r18 只读不分配；Decode_ClockQualityMetrics_r18 可能 malloc（失败时内部已释放并清零）；Free_ClockQualityMetrics_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ClockQualityMetrics_r18(Encoder& enc, const ClockQualityMetrics_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_synchronisationState_r18);
    enc.WriteBit(value.has_tracebilityToUTC_r18);
    enc.WriteBit(value.has_tracebilityToGNSS_r18);
    enc.WriteBit(value.has_clockFrequencyStability_r18);
    enc.WriteBit(value.has_clockAccuracy_r18);
    enc.WriteBit(value.has_parentTimeSource_r18);
    if (value.has_synchronisationState_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.synchronisationState_r18), 0, 3);
    }
    if (value.has_tracebilityToUTC_r18) {
        enc.WriteBool(value.tracebilityToUTC_r18);
    }
    if (value.has_tracebilityToGNSS_r18) {
        enc.WriteBool(value.tracebilityToGNSS_r18);
    }
    if (value.has_clockFrequencyStability_r18) {
        enc.WriteFixedBitString(value.clockFrequencyStability_r18.bytes, value.clockFrequencyStability_r18.bitLength, 16, 16);
    }
    if (value.has_clockAccuracy_r18) {
        Encode_ClockQualityMetrics_r18_ClockAccuracy_r18(enc, value.clockAccuracy_r18);
    }
    if (value.has_parentTimeSource_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.parentTimeSource_r18), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_ClockQualityMetrics_r18(Decoder& dec, ClockQualityMetrics_r18& value)
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
        value.synchronisationState_r18 = (ClockQualityMetrics_r18_SynchronisationState_r18)tmp_value;
    }
    if (present_1) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.tracebilityToUTC_r18 = tmp_value;
    }
    if (present_2) {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.tracebilityToGNSS_r18 = tmp_value;
    }
    if (present_3) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 16)) { goto fail; }
        string_length = 16;
        value.clockFrequencyStability_r18.bytes = string_bytes;
        value.clockFrequencyStability_r18.bitLength = string_length;
    }
    if (present_4) {
        if (Decode_ClockQualityMetrics_r18_ClockAccuracy_r18(dec, value.clockAccuracy_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.parentTimeSource_r18 = (ClockQualityMetrics_r18_ParentTimeSource_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ClockQualityMetrics_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ClockQualityMetrics_r18(ClockQualityMetrics_r18& value)
{
    if (value.has_synchronisationState_r18) {
    }
    if (value.has_tracebilityToUTC_r18) {
    }
    if (value.has_tracebilityToGNSS_r18) {
    }
    if (value.has_clockFrequencyStability_r18) {
        std::free(value.clockFrequencyStability_r18.bytes);
        value.clockFrequencyStability_r18.bytes = nullptr;
        value.clockFrequencyStability_r18.bitLength = 0;
    }
    if (value.has_clockAccuracy_r18) {
        Free_ClockQualityMetrics_r18_ClockAccuracy_r18(value.clockAccuracy_r18);
    }
    if (value.has_parentTimeSource_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18：ASN.1 clockQualityDetailsLevel-r18；源文件第 353 行；CHOICE。
// Encode_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18 只读不分配；Decode_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(Encoder& enc, const DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityMetrics_r18:
        Encode_ClockQualityMetrics_r18(enc, value.u.clockQualityMetrics_r18);
        break;
    case DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityAcceptanceStatus_r18:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.clockQualityAcceptanceStatus_r18), 0, 1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(Decoder& dec, DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag)root_index;
    switch (value.tag) {
    case DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityMetrics_r18: {
        if (Decode_ClockQualityMetrics_r18(dec, value.u.clockQualityMetrics_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityAcceptanceStatus_r18: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.clockQualityAcceptanceStatus_r18 = (DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_ClockQualityAcceptanceStatus_r18)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18& value)
{
    switch (value.tag) {
    case DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityMetrics_r18:
        Free_ClockQualityMetrics_r18(value.u.clockQualityMetrics_r18);
        break;
    case DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18_Tag_clockQualityAcceptanceStatus_r18:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 357 行；空 SEQUENCE{}。
// Encode_DLInformationTransfer_v1800_IEs_NonCriticalExtension 只读不分配；Decode_DLInformationTransfer_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_v1800_IEs_NonCriticalExtension(Encoder& enc, const DLInformationTransfer_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_v1800_IEs_NonCriticalExtension(Decoder& dec, DLInformationTransfer_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_v1800_IEs_NonCriticalExtension(DLInformationTransfer_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_v1800_IEs：ASN.1 DLInformationTransfer-v1800-IEs；源文件第 351 行；SEQUENCE。
// Encode_DLInformationTransfer_v1800_IEs 只读不分配；Decode_DLInformationTransfer_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_v1800_IEs(Encoder& enc, const DLInformationTransfer_v1800_IEs& value)
{
    enc.WriteBit(value.has_eventID_TSS_r18);
    enc.WriteBit(value.has_clockQualityDetailsLevel_r18);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_eventID_TSS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eventID_TSS_r18), 0, 63);
    }
    if (value.has_clockQualityDetailsLevel_r18) {
        Encode_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(enc, value.clockQualityDetailsLevel_r18);
    }
    if (value.has_nonCriticalExtension) {
        Encode_DLInformationTransfer_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_v1800_IEs(Decoder& dec, DLInformationTransfer_v1800_IEs& value)
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
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.eventID_TSS_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(dec, value.clockQualityDetailsLevel_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_DLInformationTransfer_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_v1800_IEs(DLInformationTransfer_v1800_IEs& value)
{
    if (value.has_eventID_TSS_r18) {
    }
    if (value.has_clockQualityDetailsLevel_r18) {
        Free_DLInformationTransfer_v1800_IEs_ClockQualityDetailsLevel_r18(value.clockQualityDetailsLevel_r18);
    }
    if (value.has_nonCriticalExtension) {
        Free_DLInformationTransfer_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RxTxTimeDiff_r17：ASN.1 RxTxTimeDiff-r17；源文件第 12038 行；SEQUENCE。
// Encode_RxTxTimeDiff_r17 只读不分配；Decode_RxTxTimeDiff_r17 可能 malloc（失败时内部已释放并清零）；Free_RxTxTimeDiff_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RxTxTimeDiff_r17(Encoder& enc, const RxTxTimeDiff_r17& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_result_k5_r17);
    if (value.has_result_k5_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.result_k5_r17), 0, 61565);
    }
    return enc.Error();
}

ErrorCode Decode_RxTxTimeDiff_r17(Decoder& dec, RxTxTimeDiff_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 61565, tmp_value)) { goto fail; }
        value.result_k5_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RxTxTimeDiff_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RxTxTimeDiff_r17(RxTxTimeDiff_r17& value)
{
    if (value.has_result_k5_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_v1700_IEs：ASN.1 DLInformationTransfer-v1700-IEs；源文件第 343 行；SEQUENCE。
// Encode_DLInformationTransfer_v1700_IEs 只读不分配；Decode_DLInformationTransfer_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_v1700_IEs(Encoder& enc, const DLInformationTransfer_v1700_IEs& value)
{
    enc.WriteBit(value.has_dedicatedInfoF1c_r17);
    enc.WriteBit(value.has_rxTxTimeDiff_gNB_r17);
    enc.WriteBit(value.has_ta_PDC_r17);
    enc.WriteBit(value.has_sib9Fallback_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_dedicatedInfoF1c_r17) {
        enc.WriteSemiConstrainedOctetString(value.dedicatedInfoF1c_r17.bytes, value.dedicatedInfoF1c_r17.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_rxTxTimeDiff_gNB_r17) {
        Encode_RxTxTimeDiff_r17(enc, value.rxTxTimeDiff_gNB_r17);
    }
    if (value.has_ta_PDC_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ta_PDC_r17), 0, 1);
    }
    if (value.has_sib9Fallback_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sib9Fallback_r17), 0, 0);
    }
    if (value.has_nonCriticalExtension) {
        Encode_DLInformationTransfer_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_v1700_IEs(Decoder& dec, DLInformationTransfer_v1700_IEs& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.dedicatedInfoF1c_r17.bytes = string_bytes;
        value.dedicatedInfoF1c_r17.length = string_length;
    }
    if (present_1) {
        if (Decode_RxTxTimeDiff_r17(dec, value.rxTxTimeDiff_gNB_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ta_PDC_r17 = (DLInformationTransfer_v1700_IEs_Ta_PDC_r17)tmp_value;
    }
    if (present_3) {
        value.sib9Fallback_r17 = (DLInformationTransfer_v1700_IEs_Sib9Fallback_r17)0;
    }
    if (present_4) {
        if (Decode_DLInformationTransfer_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_v1700_IEs(DLInformationTransfer_v1700_IEs& value)
{
    if (value.has_dedicatedInfoF1c_r17) {
        std::free(value.dedicatedInfoF1c_r17.bytes);
        value.dedicatedInfoF1c_r17.bytes = nullptr;
        value.dedicatedInfoF1c_r17.length = 0;
    }
    if (value.has_rxTxTimeDiff_gNB_r17) {
        Free_RxTxTimeDiff_r17(value.rxTxTimeDiff_gNB_r17);
    }
    if (value.has_ta_PDC_r17) {
    }
    if (value.has_sib9Fallback_r17) {
    }
    if (value.has_nonCriticalExtension) {
        Free_DLInformationTransfer_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReferenceTime_r16：ASN.1 ReferenceTime-r16；源文件第 11187 行；SEQUENCE。
// Encode_ReferenceTime_r16 只读不分配；Decode_ReferenceTime_r16 可能 malloc（失败时内部已释放并清零）；Free_ReferenceTime_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReferenceTime_r16(Encoder& enc, const ReferenceTime_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.refDays_r16), 0, 72999);
    enc.WriteConstrainedInteger((std::int64_t)(value.refSeconds_r16), 0, 86399);
    enc.WriteConstrainedInteger((std::int64_t)(value.refMilliSeconds_r16), 0, 999);
    enc.WriteConstrainedInteger((std::int64_t)(value.refTenNanoSeconds_r16), 0, 99999);
    return enc.Error();
}

ErrorCode Decode_ReferenceTime_r16(Decoder& dec, ReferenceTime_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 72999, tmp_value)) { goto fail; }
        value.refDays_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 86399, tmp_value)) { goto fail; }
        value.refSeconds_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 999, tmp_value)) { goto fail; }
        value.refMilliSeconds_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 99999, tmp_value)) { goto fail; }
        value.refTenNanoSeconds_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReferenceTime_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReferenceTime_r16(ReferenceTime_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReferenceTimeInfo_r16：ASN.1 ReferenceTimeInfo-r16；源文件第 11180 行；SEQUENCE。
// Encode_ReferenceTimeInfo_r16 只读不分配；Decode_ReferenceTimeInfo_r16 可能 malloc（失败时内部已释放并清零）；Free_ReferenceTimeInfo_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReferenceTimeInfo_r16(Encoder& enc, const ReferenceTimeInfo_r16& value)
{
    enc.WriteBit(value.has_uncertainty_r16);
    enc.WriteBit(value.has_timeInfoType_r16);
    enc.WriteBit(value.has_referenceSFN_r16);
    Encode_ReferenceTime_r16(enc, value.time_r16);
    if (value.has_uncertainty_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.uncertainty_r16), 0, 32767);
    }
    if (value.has_timeInfoType_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeInfoType_r16), 0, 0);
    }
    if (value.has_referenceSFN_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceSFN_r16), 0, 1023);
    }
    return enc.Error();
}

ErrorCode Decode_ReferenceTimeInfo_r16(Decoder& dec, ReferenceTimeInfo_r16& value)
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
        if (Decode_ReferenceTime_r16(dec, value.time_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 32767, tmp_value)) { goto fail; }
        value.uncertainty_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        value.timeInfoType_r16 = (ReferenceTimeInfo_r16_TimeInfoType_r16)0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.referenceSFN_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReferenceTimeInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReferenceTimeInfo_r16(ReferenceTimeInfo_r16& value)
{
    Free_ReferenceTime_r16(value.time_r16);
    if (value.has_uncertainty_r16) {
    }
    if (value.has_timeInfoType_r16) {
    }
    if (value.has_referenceSFN_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_v1610_IEs：ASN.1 DLInformationTransfer-v1610-IEs；源文件第 338 行；SEQUENCE。
// Encode_DLInformationTransfer_v1610_IEs 只读不分配；Decode_DLInformationTransfer_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_v1610_IEs(Encoder& enc, const DLInformationTransfer_v1610_IEs& value)
{
    enc.WriteBit(value.has_referenceTimeInfo_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_referenceTimeInfo_r16) {
        Encode_ReferenceTimeInfo_r16(enc, value.referenceTimeInfo_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_DLInformationTransfer_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_v1610_IEs(Decoder& dec, DLInformationTransfer_v1610_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_ReferenceTimeInfo_r16(dec, value.referenceTimeInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_DLInformationTransfer_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_v1610_IEs(DLInformationTransfer_v1610_IEs& value)
{
    if (value.has_referenceTimeInfo_r16) {
        Free_ReferenceTimeInfo_r16(value.referenceTimeInfo_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_DLInformationTransfer_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_IEs：ASN.1 DLInformationTransfer-IEs；源文件第 332 行；SEQUENCE。
// Encode_DLInformationTransfer_IEs 只读不分配；Decode_DLInformationTransfer_IEs 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_IEs(Encoder& enc, const DLInformationTransfer_IEs& value)
{
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
        Encode_DLInformationTransfer_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_IEs(Decoder& dec, DLInformationTransfer_IEs& value)
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
        if (Decode_DLInformationTransfer_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_IEs(DLInformationTransfer_IEs& value)
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
        Free_DLInformationTransfer_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 328 行；空 SEQUENCE{}。
// Encode_DLInformationTransfer_CriticalExtensionsFuture 只读不分配；Decode_DLInformationTransfer_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_CriticalExtensionsFuture(Encoder& enc, const DLInformationTransfer_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_CriticalExtensionsFuture(Decoder& dec, DLInformationTransfer_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_CriticalExtensionsFuture(DLInformationTransfer_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer_CriticalExtensions：ASN.1 criticalExtensions；源文件第 326 行；CHOICE。
// Encode_DLInformationTransfer_CriticalExtensions 只读不分配；Decode_DLInformationTransfer_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer_CriticalExtensions(Encoder& enc, const DLInformationTransfer_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DLInformationTransfer_CriticalExtensions_Tag_dlInformationTransfer:
        Encode_DLInformationTransfer_IEs(enc, value.u.dlInformationTransfer);
        break;
    case DLInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_DLInformationTransfer_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer_CriticalExtensions(Decoder& dec, DLInformationTransfer_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DLInformationTransfer_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case DLInformationTransfer_CriticalExtensions_Tag_dlInformationTransfer: {
        if (Decode_DLInformationTransfer_IEs(dec, value.u.dlInformationTransfer) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DLInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_DLInformationTransfer_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer_CriticalExtensions(DLInformationTransfer_CriticalExtensions& value)
{
    switch (value.tag) {
    case DLInformationTransfer_CriticalExtensions_Tag_dlInformationTransfer:
        Free_DLInformationTransfer_IEs(value.u.dlInformationTransfer);
        break;
    case DLInformationTransfer_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_DLInformationTransfer_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransfer：ASN.1 DLInformationTransfer；源文件第 324 行；SEQUENCE。
// Encode_DLInformationTransfer 只读不分配；Decode_DLInformationTransfer 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransfer 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransfer(Encoder& enc, const DLInformationTransfer& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_DLInformationTransfer_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_DLInformationTransfer(Decoder& dec, DLInformationTransfer& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_DLInformationTransfer_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransfer(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransfer(DLInformationTransfer& value)
{
    Free_DLInformationTransfer_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransferMRDC_r16_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 377 行；空 SEQUENCE{}。
// Encode_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension 只读不分配；Decode_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(Encoder& enc, const DLInformationTransferMRDC_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(Decoder& dec, DLInformationTransferMRDC_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(DLInformationTransferMRDC_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransferMRDC_r16_IEs：ASN.1 DLInformationTransferMRDC-r16-IEs；源文件第 373 行；SEQUENCE。
// Encode_DLInformationTransferMRDC_r16_IEs 只读不分配；Decode_DLInformationTransferMRDC_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransferMRDC_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransferMRDC_r16_IEs(Encoder& enc, const DLInformationTransferMRDC_r16_IEs& value)
{
    enc.WriteBit(value.has_dl_DCCH_MessageNR_r16);
    enc.WriteBit(value.has_dl_DCCH_MessageEUTRA_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_dl_DCCH_MessageNR_r16) {
        enc.WriteSemiConstrainedOctetString(value.dl_DCCH_MessageNR_r16.bytes, value.dl_DCCH_MessageNR_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_dl_DCCH_MessageEUTRA_r16) {
        enc.WriteSemiConstrainedOctetString(value.dl_DCCH_MessageEUTRA_r16.bytes, value.dl_DCCH_MessageEUTRA_r16.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransferMRDC_r16_IEs(Decoder& dec, DLInformationTransferMRDC_r16_IEs& value)
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
        value.dl_DCCH_MessageNR_r16.bytes = string_bytes;
        value.dl_DCCH_MessageNR_r16.length = string_length;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.dl_DCCH_MessageEUTRA_r16.bytes = string_bytes;
        value.dl_DCCH_MessageEUTRA_r16.length = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_3) {
        if (Decode_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransferMRDC_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransferMRDC_r16_IEs(DLInformationTransferMRDC_r16_IEs& value)
{
    if (value.has_dl_DCCH_MessageNR_r16) {
        std::free(value.dl_DCCH_MessageNR_r16.bytes);
        value.dl_DCCH_MessageNR_r16.bytes = nullptr;
        value.dl_DCCH_MessageNR_r16.length = 0;
    }
    if (value.has_dl_DCCH_MessageEUTRA_r16) {
        std::free(value.dl_DCCH_MessageEUTRA_r16.bytes);
        value.dl_DCCH_MessageEUTRA_r16.bytes = nullptr;
        value.dl_DCCH_MessageEUTRA_r16.length = 0;
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_DLInformationTransferMRDC_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransferMRDC_r16_CriticalExtensions_C1：ASN.1 criticalExtensions/c1；源文件第 365 行；CHOICE。
// Encode_DLInformationTransferMRDC_r16_CriticalExtensions_C1 只读不分配；Decode_DLInformationTransferMRDC_r16_CriticalExtensions_C1 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransferMRDC_r16_CriticalExtensions_C1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransferMRDC_r16_CriticalExtensions_C1(Encoder& enc, const DLInformationTransferMRDC_r16_CriticalExtensions_C1& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_dlInformationTransferMRDC_r16:
        Encode_DLInformationTransferMRDC_r16_IEs(enc, value.u.dlInformationTransferMRDC_r16);
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare3:
        (void)0;
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare2:
        (void)0;
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare1:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransferMRDC_r16_CriticalExtensions_C1(Decoder& dec, DLInformationTransferMRDC_r16_CriticalExtensions_C1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag)root_index;
    switch (value.tag) {
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_dlInformationTransferMRDC_r16: {
        if (Decode_DLInformationTransferMRDC_r16_IEs(dec, value.u.dlInformationTransferMRDC_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare3: {
        (void)0;
        break;
    }
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare2: {
        (void)0;
        break;
    }
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare1: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransferMRDC_r16_CriticalExtensions_C1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransferMRDC_r16_CriticalExtensions_C1(DLInformationTransferMRDC_r16_CriticalExtensions_C1& value)
{
    switch (value.tag) {
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_dlInformationTransferMRDC_r16:
        Free_DLInformationTransferMRDC_r16_IEs(value.u.dlInformationTransferMRDC_r16);
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare3:
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare2:
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_C1_Tag_spare1:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransferMRDC_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 369 行；空 SEQUENCE{}。
// Encode_DLInformationTransferMRDC_r16_CriticalExtensionsFuture 只读不分配；Decode_DLInformationTransferMRDC_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransferMRDC_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(Encoder& enc, const DLInformationTransferMRDC_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(Decoder& dec, DLInformationTransferMRDC_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(DLInformationTransferMRDC_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransferMRDC_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 364 行；CHOICE。
// Encode_DLInformationTransferMRDC_r16_CriticalExtensions 只读不分配；Decode_DLInformationTransferMRDC_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransferMRDC_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransferMRDC_r16_CriticalExtensions(Encoder& enc, const DLInformationTransferMRDC_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DLInformationTransferMRDC_r16_CriticalExtensions_Tag_c1:
        Encode_DLInformationTransferMRDC_r16_CriticalExtensions_C1(enc, value.u.c1);
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DLInformationTransferMRDC_r16_CriticalExtensions(Decoder& dec, DLInformationTransferMRDC_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DLInformationTransferMRDC_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case DLInformationTransferMRDC_r16_CriticalExtensions_Tag_c1: {
        if (Decode_DLInformationTransferMRDC_r16_CriticalExtensions_C1(dec, value.u.c1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DLInformationTransferMRDC_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransferMRDC_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransferMRDC_r16_CriticalExtensions(DLInformationTransferMRDC_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case DLInformationTransferMRDC_r16_CriticalExtensions_Tag_c1:
        Free_DLInformationTransferMRDC_r16_CriticalExtensions_C1(value.u.c1);
        break;
    case DLInformationTransferMRDC_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_DLInformationTransferMRDC_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// DLInformationTransferMRDC_r16：ASN.1 DLInformationTransferMRDC-r16；源文件第 363 行；SEQUENCE。
// Encode_DLInformationTransferMRDC_r16 只读不分配；Decode_DLInformationTransferMRDC_r16 可能 malloc（失败时内部已释放并清零）；Free_DLInformationTransferMRDC_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_DLInformationTransferMRDC_r16(Encoder& enc, const DLInformationTransferMRDC_r16& value)
{
    Encode_DLInformationTransferMRDC_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_DLInformationTransferMRDC_r16(Decoder& dec, DLInformationTransferMRDC_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_DLInformationTransferMRDC_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_DLInformationTransferMRDC_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DLInformationTransferMRDC_r16(DLInformationTransferMRDC_r16& value)
{
    Free_DLInformationTransferMRDC_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInfoRLC_Bearer：ASN.1 FailureInfoRLC-Bearer；源文件第 397 行；SEQUENCE。
// Encode_FailureInfoRLC_Bearer 只读不分配；Decode_FailureInfoRLC_Bearer 可能 malloc（失败时内部已释放并清零）；Free_FailureInfoRLC_Bearer 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInfoRLC_Bearer(Encoder& enc, const FailureInfoRLC_Bearer& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.cellGroupId), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.logicalChannelIdentity), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.failureType), 0, 3);
    return enc.Error();
}

ErrorCode Decode_FailureInfoRLC_Bearer(Decoder& dec, FailureInfoRLC_Bearer& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cellGroupId = (CellGroupId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.logicalChannelIdentity = (LogicalChannelIdentity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.failureType = (FailureInfoRLC_Bearer_FailureType)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureInfoRLC_Bearer(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInfoRLC_Bearer(FailureInfoRLC_Bearer& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInfoDAPS_r16：ASN.1 FailureInfoDAPS-r16；源文件第 408 行；SEQUENCE。
// Encode_FailureInfoDAPS_r16 只读不分配；Decode_FailureInfoDAPS_r16 可能 malloc（失败时内部已释放并清零）；Free_FailureInfoDAPS_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInfoDAPS_r16(Encoder& enc, const FailureInfoDAPS_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.failureType_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_FailureInfoDAPS_r16(Decoder& dec, FailureInfoDAPS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.failureType_r16 = (FailureInfoDAPS_r16_FailureType_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureInfoDAPS_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInfoDAPS_r16(FailureInfoDAPS_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInformation_v1610_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 405 行；空 SEQUENCE{}。
// Encode_FailureInformation_v1610_IEs_NonCriticalExtension 只读不分配；Decode_FailureInformation_v1610_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_FailureInformation_v1610_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInformation_v1610_IEs_NonCriticalExtension(Encoder& enc, const FailureInformation_v1610_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_FailureInformation_v1610_IEs_NonCriticalExtension(Decoder& dec, FailureInformation_v1610_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInformation_v1610_IEs_NonCriticalExtension(FailureInformation_v1610_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInformation_v1610_IEs：ASN.1 FailureInformation-v1610-IEs；源文件第 403 行；SEQUENCE。
// Encode_FailureInformation_v1610_IEs 只读不分配；Decode_FailureInformation_v1610_IEs 可能 malloc（失败时内部已释放并清零）；Free_FailureInformation_v1610_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInformation_v1610_IEs(Encoder& enc, const FailureInformation_v1610_IEs& value)
{
    enc.WriteBit(value.has_failureInfoDAPS_r16);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_failureInfoDAPS_r16) {
        Encode_FailureInfoDAPS_r16(enc, value.failureInfoDAPS_r16);
    }
    if (value.has_nonCriticalExtension) {
        Encode_FailureInformation_v1610_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_FailureInformation_v1610_IEs(Decoder& dec, FailureInformation_v1610_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_FailureInfoDAPS_r16(dec, value.failureInfoDAPS_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_FailureInformation_v1610_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureInformation_v1610_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInformation_v1610_IEs(FailureInformation_v1610_IEs& value)
{
    if (value.has_failureInfoDAPS_r16) {
        Free_FailureInfoDAPS_r16(value.failureInfoDAPS_r16);
    }
    if (value.has_nonCriticalExtension) {
        Free_FailureInformation_v1610_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInformation_IEs：ASN.1 FailureInformation-IEs；源文件第 391 行；SEQUENCE。
// Encode_FailureInformation_IEs 只读不分配；Decode_FailureInformation_IEs 可能 malloc（失败时内部已释放并清零）；Free_FailureInformation_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInformation_IEs(Encoder& enc, const FailureInformation_IEs& value)
{
    enc.WriteBit(value.has_failureInfoRLC_Bearer);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_failureInfoRLC_Bearer) {
        Encode_FailureInfoRLC_Bearer(enc, value.failureInfoRLC_Bearer);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_FailureInformation_v1610_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_FailureInformation_IEs(Decoder& dec, FailureInformation_IEs& value)
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
        if (Decode_FailureInfoRLC_Bearer(dec, value.failureInfoRLC_Bearer) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_FailureInformation_v1610_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureInformation_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInformation_IEs(FailureInformation_IEs& value)
{
    if (value.has_failureInfoRLC_Bearer) {
        Free_FailureInfoRLC_Bearer(value.failureInfoRLC_Bearer);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_FailureInformation_v1610_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInformation_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 387 行；空 SEQUENCE{}。
// Encode_FailureInformation_CriticalExtensionsFuture 只读不分配；Decode_FailureInformation_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_FailureInformation_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInformation_CriticalExtensionsFuture(Encoder& enc, const FailureInformation_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_FailureInformation_CriticalExtensionsFuture(Decoder& dec, FailureInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInformation_CriticalExtensionsFuture(FailureInformation_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInformation_CriticalExtensions：ASN.1 criticalExtensions；源文件第 385 行；CHOICE。
// Encode_FailureInformation_CriticalExtensions 只读不分配；Decode_FailureInformation_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_FailureInformation_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInformation_CriticalExtensions(Encoder& enc, const FailureInformation_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case FailureInformation_CriticalExtensions_Tag_failureInformation:
        Encode_FailureInformation_IEs(enc, value.u.failureInformation);
        break;
    case FailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_FailureInformation_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_FailureInformation_CriticalExtensions(Decoder& dec, FailureInformation_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (FailureInformation_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case FailureInformation_CriticalExtensions_Tag_failureInformation: {
        if (Decode_FailureInformation_IEs(dec, value.u.failureInformation) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case FailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_FailureInformation_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureInformation_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInformation_CriticalExtensions(FailureInformation_CriticalExtensions& value)
{
    switch (value.tag) {
    case FailureInformation_CriticalExtensions_Tag_failureInformation:
        Free_FailureInformation_IEs(value.u.failureInformation);
        break;
    case FailureInformation_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_FailureInformation_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureInformation：ASN.1 FailureInformation；源文件第 384 行；SEQUENCE。
// Encode_FailureInformation 只读不分配；Decode_FailureInformation 可能 malloc（失败时内部已释放并清零）；Free_FailureInformation 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureInformation(Encoder& enc, const FailureInformation& value)
{
    Encode_FailureInformation_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_FailureInformation(Decoder& dec, FailureInformation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_FailureInformation_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureInformation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureInformation(FailureInformation& value)
{
    Free_FailureInformation_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_AddressNumReq_r16：ASN.1 IAB-IP-AddressNumReq-r16；源文件第 447 行；SEQUENCE。
// Encode_IAB_IP_AddressNumReq_r16 只读不分配；Decode_IAB_IP_AddressNumReq_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_AddressNumReq_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_AddressNumReq_r16(Encoder& enc, const IAB_IP_AddressNumReq_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_all_Traffic_NumReq_r16);
    enc.WriteBit(value.has_f1_C_Traffic_NumReq_r16);
    enc.WriteBit(value.has_f1_U_Traffic_NumReq_r16);
    enc.WriteBit(value.has_non_F1_Traffic_NumReq_r16);
    if (value.has_all_Traffic_NumReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.all_Traffic_NumReq_r16), 1, 8);
    }
    if (value.has_f1_C_Traffic_NumReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1_C_Traffic_NumReq_r16), 1, 8);
    }
    if (value.has_f1_U_Traffic_NumReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1_U_Traffic_NumReq_r16), 1, 8);
    }
    if (value.has_non_F1_Traffic_NumReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_F1_Traffic_NumReq_r16), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_AddressNumReq_r16(Decoder& dec, IAB_IP_AddressNumReq_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.all_Traffic_NumReq_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.f1_C_Traffic_NumReq_r16 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.f1_U_Traffic_NumReq_r16 = (int64_t)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.non_F1_Traffic_NumReq_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_AddressNumReq_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_AddressNumReq_r16(IAB_IP_AddressNumReq_r16& value)
{
    if (value.has_all_Traffic_NumReq_r16) {
    }
    if (value.has_f1_C_Traffic_NumReq_r16) {
    }
    if (value.has_f1_U_Traffic_NumReq_r16) {
    }
    if (value.has_non_F1_Traffic_NumReq_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_AddressPrefixReq_r16：ASN.1 IAB-IP-AddressPrefixReq-r16；源文件第 455 行；SEQUENCE。
// Encode_IAB_IP_AddressPrefixReq_r16 只读不分配；Decode_IAB_IP_AddressPrefixReq_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_AddressPrefixReq_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_AddressPrefixReq_r16(Encoder& enc, const IAB_IP_AddressPrefixReq_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_all_Traffic_PrefixReq_r16);
    enc.WriteBit(value.has_f1_C_Traffic_PrefixReq_r16);
    enc.WriteBit(value.has_f1_U_Traffic_PrefixReq_r16);
    enc.WriteBit(value.has_non_F1_Traffic_PrefixReq_r16);
    if (value.has_all_Traffic_PrefixReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.all_Traffic_PrefixReq_r16), 0, 0);
    }
    if (value.has_f1_C_Traffic_PrefixReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1_C_Traffic_PrefixReq_r16), 0, 0);
    }
    if (value.has_f1_U_Traffic_PrefixReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.f1_U_Traffic_PrefixReq_r16), 0, 0);
    }
    if (value.has_non_F1_Traffic_PrefixReq_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.non_F1_Traffic_PrefixReq_r16), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_AddressPrefixReq_r16(Decoder& dec, IAB_IP_AddressPrefixReq_r16& value)
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
        value.all_Traffic_PrefixReq_r16 = (IAB_IP_AddressPrefixReq_r16_All_Traffic_PrefixReq_r16)0;
    }
    if (present_1) {
        value.f1_C_Traffic_PrefixReq_r16 = (IAB_IP_AddressPrefixReq_r16_F1_C_Traffic_PrefixReq_r16)0;
    }
    if (present_2) {
        value.f1_U_Traffic_PrefixReq_r16 = (IAB_IP_AddressPrefixReq_r16_F1_U_Traffic_PrefixReq_r16)0;
    }
    if (present_3) {
        value.non_F1_Traffic_PrefixReq_r16 = (IAB_IP_AddressPrefixReq_r16_Non_F1_Traffic_PrefixReq_r16)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_AddressPrefixReq_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_AddressPrefixReq_r16(IAB_IP_AddressPrefixReq_r16& value)
{
    if (value.has_all_Traffic_PrefixReq_r16) {
    }
    if (value.has_f1_C_Traffic_PrefixReq_r16) {
    }
    if (value.has_f1_U_Traffic_PrefixReq_r16) {
    }
    if (value.has_non_F1_Traffic_PrefixReq_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16：ASN.1 ip-InfoType-r16/iab-IP-Request-r16/iab-IPv6-AddressReq-r16；源文件第 427 行；CHOICE。
// Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16 只读不分配；Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(Encoder& enc, const IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16& value)
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
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressNumReq_r16:
        Encode_IAB_IP_AddressNumReq_r16(enc, value.u.iab_IPv6_AddressNumReq_r16);
        break;
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressPrefixReq_r16:
        Encode_IAB_IP_AddressPrefixReq_r16(enc, value.u.iab_IPv6_AddressPrefixReq_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(Decoder& dec, IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16& value)
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
        value.tag = (IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag)(2 + extension_index);
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
    value.tag = (IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag)root_index;
    switch (value.tag) {
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressNumReq_r16: {
        if (Decode_IAB_IP_AddressNumReq_r16(dec, value.u.iab_IPv6_AddressNumReq_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressPrefixReq_r16: {
        if (Decode_IAB_IP_AddressPrefixReq_r16(dec, value.u.iab_IPv6_AddressPrefixReq_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16& value)
{
    switch (value.tag) {
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressNumReq_r16:
        Free_IAB_IP_AddressNumReq_r16(value.u.iab_IPv6_AddressNumReq_r16);
        break;
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16_Tag_iab_IPv6_AddressPrefixReq_r16:
        Free_IAB_IP_AddressPrefixReq_r16(value.u.iab_IPv6_AddressPrefixReq_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16：ASN.1 ip-InfoType-r16/iab-IP-Request-r16；源文件第 425 行；SEQUENCE。
// Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16 只读不分配；Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(Encoder& enc, const IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16& value)
{
    enc.WriteBit(value.has_iab_IPv4_AddressNumReq_r16);
    enc.WriteBit(value.has_iab_IPv6_AddressReq_r16);
    if (value.has_iab_IPv4_AddressNumReq_r16) {
        Encode_IAB_IP_AddressNumReq_r16(enc, value.iab_IPv4_AddressNumReq_r16);
    }
    if (value.has_iab_IPv6_AddressReq_r16) {
        Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(enc, value.iab_IPv6_AddressReq_r16);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(Decoder& dec, IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_IAB_IP_AddressNumReq_r16(dec, value.iab_IPv4_AddressNumReq_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(dec, value.iab_IPv6_AddressReq_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16& value)
{
    if (value.has_iab_IPv4_AddressNumReq_r16) {
        Free_IAB_IP_AddressNumReq_r16(value.iab_IPv4_AddressNumReq_r16);
    }
    if (value.has_iab_IPv6_AddressReq_r16) {
        Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16_Iab_IPv6_AddressReq_r16(value.iab_IPv6_AddressReq_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_AddressAndTraffic_r16：ASN.1 IAB-IP-AddressAndTraffic-r16；源文件第 463 行；SEQUENCE。
// Encode_IAB_IP_AddressAndTraffic_r16 只读不分配；Decode_IAB_IP_AddressAndTraffic_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_AddressAndTraffic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_AddressAndTraffic_r16(Encoder& enc, const IAB_IP_AddressAndTraffic_r16& value)
{
    enc.WriteBit(value.has_all_Traffic_IAB_IP_Address_r16);
    enc.WriteBit(value.has_f1_C_Traffic_IP_Address_r16);
    enc.WriteBit(value.has_f1_U_Traffic_IP_Address_r16);
    enc.WriteBit(value.has_non_F1_Traffic_IP_Address_r16);
    if (value.has_all_Traffic_IAB_IP_Address_r16) {
enc.WriteConstrainedLength(value.all_Traffic_IAB_IP_Address_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.all_Traffic_IAB_IP_Address_r16_count; ++i) {
    Encode_IAB_IP_Address_r16(enc, value.all_Traffic_IAB_IP_Address_r16_items[i]);
}
    }
    if (value.has_f1_C_Traffic_IP_Address_r16) {
enc.WriteConstrainedLength(value.f1_C_Traffic_IP_Address_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.f1_C_Traffic_IP_Address_r16_count; ++i) {
    Encode_IAB_IP_Address_r16(enc, value.f1_C_Traffic_IP_Address_r16_items[i]);
}
    }
    if (value.has_f1_U_Traffic_IP_Address_r16) {
enc.WriteConstrainedLength(value.f1_U_Traffic_IP_Address_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.f1_U_Traffic_IP_Address_r16_count; ++i) {
    Encode_IAB_IP_Address_r16(enc, value.f1_U_Traffic_IP_Address_r16_items[i]);
}
    }
    if (value.has_non_F1_Traffic_IP_Address_r16) {
enc.WriteConstrainedLength(value.non_F1_Traffic_IP_Address_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.non_F1_Traffic_IP_Address_r16_count; ++i) {
    Encode_IAB_IP_Address_r16(enc, value.non_F1_Traffic_IP_Address_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_AddressAndTraffic_r16(Decoder& dec, IAB_IP_AddressAndTraffic_r16& value)
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
if (!dec.ReadConstrainedLength(0u, 0u, value.all_Traffic_IAB_IP_Address_r16_count)) { goto fail; }
if (value.all_Traffic_IAB_IP_Address_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.all_Traffic_IAB_IP_Address_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.all_Traffic_IAB_IP_Address_r16_count > 0u) {
    value.all_Traffic_IAB_IP_Address_r16_items = (IAB_IP_Address_r16*)std::malloc((std::size_t)value.all_Traffic_IAB_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
    if (value.all_Traffic_IAB_IP_Address_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.all_Traffic_IAB_IP_Address_r16_items, 0, (std::size_t)value.all_Traffic_IAB_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
}
for (std::uint32_t i = 0; i < value.all_Traffic_IAB_IP_Address_r16_count; ++i) {
    if (Decode_IAB_IP_Address_r16(dec, value.all_Traffic_IAB_IP_Address_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.f1_C_Traffic_IP_Address_r16_count)) { goto fail; }
if (value.f1_C_Traffic_IP_Address_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.f1_C_Traffic_IP_Address_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.f1_C_Traffic_IP_Address_r16_count > 0u) {
    value.f1_C_Traffic_IP_Address_r16_items = (IAB_IP_Address_r16*)std::malloc((std::size_t)value.f1_C_Traffic_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
    if (value.f1_C_Traffic_IP_Address_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.f1_C_Traffic_IP_Address_r16_items, 0, (std::size_t)value.f1_C_Traffic_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
}
for (std::uint32_t i = 0; i < value.f1_C_Traffic_IP_Address_r16_count; ++i) {
    if (Decode_IAB_IP_Address_r16(dec, value.f1_C_Traffic_IP_Address_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.f1_U_Traffic_IP_Address_r16_count)) { goto fail; }
if (value.f1_U_Traffic_IP_Address_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.f1_U_Traffic_IP_Address_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.f1_U_Traffic_IP_Address_r16_count > 0u) {
    value.f1_U_Traffic_IP_Address_r16_items = (IAB_IP_Address_r16*)std::malloc((std::size_t)value.f1_U_Traffic_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
    if (value.f1_U_Traffic_IP_Address_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.f1_U_Traffic_IP_Address_r16_items, 0, (std::size_t)value.f1_U_Traffic_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
}
for (std::uint32_t i = 0; i < value.f1_U_Traffic_IP_Address_r16_count; ++i) {
    if (Decode_IAB_IP_Address_r16(dec, value.f1_U_Traffic_IP_Address_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.non_F1_Traffic_IP_Address_r16_count)) { goto fail; }
if (value.non_F1_Traffic_IP_Address_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.non_F1_Traffic_IP_Address_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.non_F1_Traffic_IP_Address_r16_count > 0u) {
    value.non_F1_Traffic_IP_Address_r16_items = (IAB_IP_Address_r16*)std::malloc((std::size_t)value.non_F1_Traffic_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
    if (value.non_F1_Traffic_IP_Address_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.non_F1_Traffic_IP_Address_r16_items, 0, (std::size_t)value.non_F1_Traffic_IP_Address_r16_count * sizeof(IAB_IP_Address_r16));
}
for (std::uint32_t i = 0; i < value.non_F1_Traffic_IP_Address_r16_count; ++i) {
    if (Decode_IAB_IP_Address_r16(dec, value.non_F1_Traffic_IP_Address_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_AddressAndTraffic_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_AddressAndTraffic_r16(IAB_IP_AddressAndTraffic_r16& value)
{
    if (value.has_all_Traffic_IAB_IP_Address_r16) {
        if (value.all_Traffic_IAB_IP_Address_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.all_Traffic_IAB_IP_Address_r16_count; ++i) {
                Free_IAB_IP_Address_r16(value.all_Traffic_IAB_IP_Address_r16_items[i]);
            }
            std::free(value.all_Traffic_IAB_IP_Address_r16_items);
            value.all_Traffic_IAB_IP_Address_r16_items = nullptr;
        }
        value.all_Traffic_IAB_IP_Address_r16_count = 0;
    }
    if (value.has_f1_C_Traffic_IP_Address_r16) {
        if (value.f1_C_Traffic_IP_Address_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.f1_C_Traffic_IP_Address_r16_count; ++i) {
                Free_IAB_IP_Address_r16(value.f1_C_Traffic_IP_Address_r16_items[i]);
            }
            std::free(value.f1_C_Traffic_IP_Address_r16_items);
            value.f1_C_Traffic_IP_Address_r16_items = nullptr;
        }
        value.f1_C_Traffic_IP_Address_r16_count = 0;
    }
    if (value.has_f1_U_Traffic_IP_Address_r16) {
        if (value.f1_U_Traffic_IP_Address_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.f1_U_Traffic_IP_Address_r16_count; ++i) {
                Free_IAB_IP_Address_r16(value.f1_U_Traffic_IP_Address_r16_items[i]);
            }
            std::free(value.f1_U_Traffic_IP_Address_r16_items);
            value.f1_U_Traffic_IP_Address_r16_items = nullptr;
        }
        value.f1_U_Traffic_IP_Address_r16_count = 0;
    }
    if (value.has_non_F1_Traffic_IP_Address_r16) {
        if (value.non_F1_Traffic_IP_Address_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.non_F1_Traffic_IP_Address_r16_count; ++i) {
                Free_IAB_IP_Address_r16(value.non_F1_Traffic_IP_Address_r16_items[i]);
            }
            std::free(value.non_F1_Traffic_IP_Address_r16_items);
            value.non_F1_Traffic_IP_Address_r16_items = nullptr;
        }
        value.non_F1_Traffic_IP_Address_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_Address_r16：ASN.1 IAB-IP-Address-r16；源文件第 21495 行；CHOICE。
// Encode_IAB_IP_Address_r16 只读不分配；Decode_IAB_IP_Address_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_Address_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_Address_r16(Encoder& enc, const IAB_IP_Address_r16& value)
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
    case IAB_IP_Address_r16_Tag_iPv4_Address_r16:
        enc.WriteFixedBitString(value.u.iPv4_Address_r16.bytes, value.u.iPv4_Address_r16.bitLength, 32, 32);
        break;
    case IAB_IP_Address_r16_Tag_iPv6_Address_r16:
        enc.WriteFixedBitString(value.u.iPv6_Address_r16.bytes, value.u.iPv6_Address_r16.bitLength, 128, 128);
        break;
    case IAB_IP_Address_r16_Tag_iPv6_Prefix_r16:
        enc.WriteFixedBitString(value.u.iPv6_Prefix_r16.bytes, value.u.iPv6_Prefix_r16.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_Address_r16(Decoder& dec, IAB_IP_Address_r16& value)
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
        value.tag = (IAB_IP_Address_r16_Tag)(3 + extension_index);
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
    value.tag = (IAB_IP_Address_r16_Tag)root_index;
    switch (value.tag) {
    case IAB_IP_Address_r16_Tag_iPv4_Address_r16: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 32)) { goto fail; }
        string_length = 32;
        value.u.iPv4_Address_r16.bytes = string_bytes;
        value.u.iPv4_Address_r16.bitLength = string_length;
        break;
    }
    case IAB_IP_Address_r16_Tag_iPv6_Address_r16: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 128)) { goto fail; }
        string_length = 128;
        value.u.iPv6_Address_r16.bytes = string_bytes;
        value.u.iPv6_Address_r16.bitLength = string_length;
        break;
    }
    case IAB_IP_Address_r16_Tag_iPv6_Prefix_r16: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 64)) { goto fail; }
        string_length = 64;
        value.u.iPv6_Prefix_r16.bytes = string_bytes;
        value.u.iPv6_Prefix_r16.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_Address_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_Address_r16(IAB_IP_Address_r16& value)
{
    switch (value.tag) {
    case IAB_IP_Address_r16_Tag_iPv4_Address_r16:
        std::free(value.u.iPv4_Address_r16.bytes);
        break;
    case IAB_IP_Address_r16_Tag_iPv6_Address_r16:
        std::free(value.u.iPv6_Address_r16.bytes);
        break;
    case IAB_IP_Address_r16_Tag_iPv6_Prefix_r16:
        std::free(value.u.iPv6_Prefix_r16.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IAB_IP_PrefixAndTraffic_r16：ASN.1 IAB-IP-PrefixAndTraffic-r16；源文件第 470 行；SEQUENCE。
// Encode_IAB_IP_PrefixAndTraffic_r16 只读不分配；Decode_IAB_IP_PrefixAndTraffic_r16 可能 malloc（失败时内部已释放并清零）；Free_IAB_IP_PrefixAndTraffic_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IAB_IP_PrefixAndTraffic_r16(Encoder& enc, const IAB_IP_PrefixAndTraffic_r16& value)
{
    enc.WriteBit(value.has_all_Traffic_IAB_IP_Address_r16);
    enc.WriteBit(value.has_f1_C_Traffic_IP_Address_r16);
    enc.WriteBit(value.has_f1_U_Traffic_IP_Address_r16);
    enc.WriteBit(value.has_non_F1_Traffic_IP_Address_r16);
    if (value.has_all_Traffic_IAB_IP_Address_r16) {
        Encode_IAB_IP_Address_r16(enc, value.all_Traffic_IAB_IP_Address_r16);
    }
    if (value.has_f1_C_Traffic_IP_Address_r16) {
        Encode_IAB_IP_Address_r16(enc, value.f1_C_Traffic_IP_Address_r16);
    }
    if (value.has_f1_U_Traffic_IP_Address_r16) {
        Encode_IAB_IP_Address_r16(enc, value.f1_U_Traffic_IP_Address_r16);
    }
    if (value.has_non_F1_Traffic_IP_Address_r16) {
        Encode_IAB_IP_Address_r16(enc, value.non_F1_Traffic_IP_Address_r16);
    }
    return enc.Error();
}

ErrorCode Decode_IAB_IP_PrefixAndTraffic_r16(Decoder& dec, IAB_IP_PrefixAndTraffic_r16& value)
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
        if (Decode_IAB_IP_Address_r16(dec, value.all_Traffic_IAB_IP_Address_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IAB_IP_Address_r16(dec, value.f1_C_Traffic_IP_Address_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_IAB_IP_Address_r16(dec, value.f1_U_Traffic_IP_Address_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_IAB_IP_Address_r16(dec, value.non_F1_Traffic_IP_Address_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IAB_IP_PrefixAndTraffic_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IAB_IP_PrefixAndTraffic_r16(IAB_IP_PrefixAndTraffic_r16& value)
{
    if (value.has_all_Traffic_IAB_IP_Address_r16) {
        Free_IAB_IP_Address_r16(value.all_Traffic_IAB_IP_Address_r16);
    }
    if (value.has_f1_C_Traffic_IP_Address_r16) {
        Free_IAB_IP_Address_r16(value.f1_C_Traffic_IP_Address_r16);
    }
    if (value.has_f1_U_Traffic_IP_Address_r16) {
        Free_IAB_IP_Address_r16(value.f1_U_Traffic_IP_Address_r16);
    }
    if (value.has_non_F1_Traffic_IP_Address_r16) {
        Free_IAB_IP_Address_r16(value.non_F1_Traffic_IP_Address_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16：ASN.1 ip-InfoType-r16/iab-IP-Report-r16/iab-IPv6-Report-r16；源文件第 435 行；CHOICE。
// Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16 只读不分配；Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(Encoder& enc, const IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16& value)
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
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_AddressReport_r16:
        Encode_IAB_IP_AddressAndTraffic_r16(enc, value.u.iab_IPv6_AddressReport_r16);
        break;
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_PrefixReport_r16:
        Encode_IAB_IP_PrefixAndTraffic_r16(enc, value.u.iab_IPv6_PrefixReport_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(Decoder& dec, IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16& value)
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
        value.tag = (IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag)(2 + extension_index);
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
    value.tag = (IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag)root_index;
    switch (value.tag) {
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_AddressReport_r16: {
        if (Decode_IAB_IP_AddressAndTraffic_r16(dec, value.u.iab_IPv6_AddressReport_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_PrefixReport_r16: {
        if (Decode_IAB_IP_PrefixAndTraffic_r16(dec, value.u.iab_IPv6_PrefixReport_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16& value)
{
    switch (value.tag) {
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_AddressReport_r16:
        Free_IAB_IP_AddressAndTraffic_r16(value.u.iab_IPv6_AddressReport_r16);
        break;
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16_Tag_iab_IPv6_PrefixReport_r16:
        Free_IAB_IP_PrefixAndTraffic_r16(value.u.iab_IPv6_PrefixReport_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16：ASN.1 ip-InfoType-r16/iab-IP-Report-r16；源文件第 433 行；SEQUENCE。
// Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16 只读不分配；Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(Encoder& enc, const IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16& value)
{
    enc.WriteBit(value.has_iab_IPv4_AddressReport_r16);
    enc.WriteBit(value.has_iab_IPv6_Report_r16);
    if (value.has_iab_IPv4_AddressReport_r16) {
        Encode_IAB_IP_AddressAndTraffic_r16(enc, value.iab_IPv4_AddressReport_r16);
    }
    if (value.has_iab_IPv6_Report_r16) {
        Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(enc, value.iab_IPv6_Report_r16);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(Decoder& dec, IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_IAB_IP_AddressAndTraffic_r16(dec, value.iab_IPv4_AddressReport_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(dec, value.iab_IPv6_Report_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16& value)
{
    if (value.has_iab_IPv4_AddressReport_r16) {
        Free_IAB_IP_AddressAndTraffic_r16(value.iab_IPv4_AddressReport_r16);
    }
    if (value.has_iab_IPv6_Report_r16) {
        Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16_Iab_IPv6_Report_r16(value.iab_IPv6_Report_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs_Ip_InfoType_r16：ASN.1 ip-InfoType-r16；源文件第 424 行；CHOICE。
// Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16 只读不分配；Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16(Encoder& enc, const IABOtherInformation_r16_IEs_Ip_InfoType_r16& value)
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
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Request_r16:
        Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(enc, value.u.iab_IP_Request_r16);
        break;
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Report_r16:
        Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(enc, value.u.iab_IP_Report_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16(Decoder& dec, IABOtherInformation_r16_IEs_Ip_InfoType_r16& value)
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
        value.tag = (IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag)(2 + extension_index);
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
    value.tag = (IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag)root_index;
    switch (value.tag) {
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Request_r16: {
        if (Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(dec, value.u.iab_IP_Request_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Report_r16: {
        if (Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(dec, value.u.iab_IP_Report_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16(IABOtherInformation_r16_IEs_Ip_InfoType_r16& value)
{
    switch (value.tag) {
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Request_r16:
        Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Request_r16(value.u.iab_IP_Request_r16);
        break;
    case IABOtherInformation_r16_IEs_Ip_InfoType_r16_Tag_iab_IP_Report_r16:
        Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16_Iab_IP_Report_r16(value.u.iab_IP_Report_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 444 行；空 SEQUENCE{}。
// Encode_IABOtherInformation_r16_IEs_NonCriticalExtension 只读不分配；Decode_IABOtherInformation_r16_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs_NonCriticalExtension(Encoder& enc, const IABOtherInformation_r16_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs_NonCriticalExtension(Decoder& dec, IABOtherInformation_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs_NonCriticalExtension(IABOtherInformation_r16_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_IEs：ASN.1 IABOtherInformation-r16-IEs；源文件第 423 行；SEQUENCE。
// Encode_IABOtherInformation_r16_IEs 只读不分配；Decode_IABOtherInformation_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_IEs(Encoder& enc, const IABOtherInformation_r16_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_IABOtherInformation_r16_IEs_Ip_InfoType_r16(enc, value.ip_InfoType_r16);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_IABOtherInformation_r16_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_IEs(Decoder& dec, IABOtherInformation_r16_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_IABOtherInformation_r16_IEs_Ip_InfoType_r16(dec, value.ip_InfoType_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_IABOtherInformation_r16_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_IEs(IABOtherInformation_r16_IEs& value)
{
    Free_IABOtherInformation_r16_IEs_Ip_InfoType_r16(value.ip_InfoType_r16);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_IABOtherInformation_r16_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 419 行；空 SEQUENCE{}。
// Encode_IABOtherInformation_r16_CriticalExtensionsFuture 只读不分配；Decode_IABOtherInformation_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_CriticalExtensionsFuture(Encoder& enc, const IABOtherInformation_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_CriticalExtensionsFuture(Decoder& dec, IABOtherInformation_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_CriticalExtensionsFuture(IABOtherInformation_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16_CriticalExtensions：ASN.1 criticalExtensions；源文件第 417 行；CHOICE。
// Encode_IABOtherInformation_r16_CriticalExtensions 只读不分配；Decode_IABOtherInformation_r16_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16_CriticalExtensions(Encoder& enc, const IABOtherInformation_r16_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case IABOtherInformation_r16_CriticalExtensions_Tag_iabOtherInformation_r16:
        Encode_IABOtherInformation_r16_IEs(enc, value.u.iabOtherInformation_r16);
        break;
    case IABOtherInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_IABOtherInformation_r16_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16_CriticalExtensions(Decoder& dec, IABOtherInformation_r16_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (IABOtherInformation_r16_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case IABOtherInformation_r16_CriticalExtensions_Tag_iabOtherInformation_r16: {
        if (Decode_IABOtherInformation_r16_IEs(dec, value.u.iabOtherInformation_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case IABOtherInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_IABOtherInformation_r16_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16_CriticalExtensions(IABOtherInformation_r16_CriticalExtensions& value)
{
    switch (value.tag) {
    case IABOtherInformation_r16_CriticalExtensions_Tag_iabOtherInformation_r16:
        Free_IABOtherInformation_r16_IEs(value.u.iabOtherInformation_r16);
        break;
    case IABOtherInformation_r16_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_IABOtherInformation_r16_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IABOtherInformation_r16：ASN.1 IABOtherInformation-r16；源文件第 415 行；SEQUENCE。
// Encode_IABOtherInformation_r16 只读不分配；Decode_IABOtherInformation_r16 可能 malloc（失败时内部已释放并清零）；Free_IABOtherInformation_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IABOtherInformation_r16(Encoder& enc, const IABOtherInformation_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.rrc_TransactionIdentifier), 0, 3);
    Encode_IABOtherInformation_r16_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_IABOtherInformation_r16(Decoder& dec, IABOtherInformation_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.rrc_TransactionIdentifier = (RRC_TransactionIdentifier)tmp_value;
    }
    {
        if (Decode_IABOtherInformation_r16_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IABOtherInformation_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IABOtherInformation_r16(IABOtherInformation_r16& value)
{
    Free_IABOtherInformation_r16_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// FailureReportIndirectPath_r18：ASN.1 FailureReportIndirectPath-r18；源文件第 493 行；SEQUENCE。
// Encode_FailureReportIndirectPath_r18 只读不分配；Decode_FailureReportIndirectPath_r18 可能 malloc（失败时内部已释放并清零）；Free_FailureReportIndirectPath_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_FailureReportIndirectPath_r18(Encoder& enc, const FailureReportIndirectPath_r18& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_failureTypeIndirectPath_r18);
    enc.WriteBit(value.has_sl_MeasResultServingRelay_r18);
    enc.WriteBit(value.has_sl_MeasResultsCandRelay_r18);
    enc.WriteBit(value.has_n3c_RelayUE_InfoList_r18);
    if (value.has_failureTypeIndirectPath_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.failureTypeIndirectPath_r18), 0, 7);
    }
    if (value.has_sl_MeasResultServingRelay_r18) {
        enc.WriteSemiConstrainedOctetString(value.sl_MeasResultServingRelay_r18.bytes, value.sl_MeasResultServingRelay_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_sl_MeasResultsCandRelay_r18) {
        enc.WriteSemiConstrainedOctetString(value.sl_MeasResultsCandRelay_r18.bytes, value.sl_MeasResultsCandRelay_r18.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_n3c_RelayUE_InfoList_r18) {
enc.WriteConstrainedLength(value.n3c_RelayUE_InfoList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.n3c_RelayUE_InfoList_r18_count; ++i) {
    Encode_N3C_RelayUE_Info_r18(enc, value.n3c_RelayUE_InfoList_r18_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_FailureReportIndirectPath_r18(Decoder& dec, FailureReportIndirectPath_r18& value)
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
        value.failureTypeIndirectPath_r18 = (FailureReportIndirectPath_r18_FailureTypeIndirectPath_r18)tmp_value;
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_MeasResultServingRelay_r18.bytes = string_bytes;
        value.sl_MeasResultServingRelay_r18.length = string_length;
    }
    if (present_2) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.sl_MeasResultsCandRelay_r18.bytes = string_bytes;
        value.sl_MeasResultsCandRelay_r18.length = string_length;
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.n3c_RelayUE_InfoList_r18_count)) { goto fail; }
if (value.n3c_RelayUE_InfoList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.n3c_RelayUE_InfoList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.n3c_RelayUE_InfoList_r18_count > 0u) {
    value.n3c_RelayUE_InfoList_r18_items = (N3C_RelayUE_Info_r18*)std::malloc((std::size_t)value.n3c_RelayUE_InfoList_r18_count * sizeof(N3C_RelayUE_Info_r18));
    if (value.n3c_RelayUE_InfoList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.n3c_RelayUE_InfoList_r18_items, 0, (std::size_t)value.n3c_RelayUE_InfoList_r18_count * sizeof(N3C_RelayUE_Info_r18));
}
for (std::uint32_t i = 0; i < value.n3c_RelayUE_InfoList_r18_count; ++i) {
    if (Decode_N3C_RelayUE_Info_r18(dec, value.n3c_RelayUE_InfoList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_FailureReportIndirectPath_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FailureReportIndirectPath_r18(FailureReportIndirectPath_r18& value)
{
    if (value.has_failureTypeIndirectPath_r18) {
    }
    if (value.has_sl_MeasResultServingRelay_r18) {
        std::free(value.sl_MeasResultServingRelay_r18.bytes);
        value.sl_MeasResultServingRelay_r18.bytes = nullptr;
        value.sl_MeasResultServingRelay_r18.length = 0;
    }
    if (value.has_sl_MeasResultsCandRelay_r18) {
        std::free(value.sl_MeasResultsCandRelay_r18.bytes);
        value.sl_MeasResultsCandRelay_r18.bytes = nullptr;
        value.sl_MeasResultsCandRelay_r18.length = 0;
    }
    if (value.has_n3c_RelayUE_InfoList_r18) {
        if (value.n3c_RelayUE_InfoList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.n3c_RelayUE_InfoList_r18_count; ++i) {
                Free_N3C_RelayUE_Info_r18(value.n3c_RelayUE_InfoList_r18_items[i]);
            }
            std::free(value.n3c_RelayUE_InfoList_r18_items);
            value.n3c_RelayUE_InfoList_r18_items = nullptr;
        }
        value.n3c_RelayUE_InfoList_r18_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IndirectPathFailureInformation_r18_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 490 行；空 SEQUENCE{}。
// Encode_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension 只读不分配；Decode_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(Encoder& enc, const IndirectPathFailureInformation_r18_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(Decoder& dec, IndirectPathFailureInformation_r18_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(IndirectPathFailureInformation_r18_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IndirectPathFailureInformation_r18_IEs：ASN.1 IndirectPathFailureInformation-r18-IEs；源文件第 487 行；SEQUENCE。
// Encode_IndirectPathFailureInformation_r18_IEs 只读不分配；Decode_IndirectPathFailureInformation_r18_IEs 可能 malloc（失败时内部已释放并清零）；Free_IndirectPathFailureInformation_r18_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IndirectPathFailureInformation_r18_IEs(Encoder& enc, const IndirectPathFailureInformation_r18_IEs& value)
{
    enc.WriteBit(value.has_failureReportIndirectPath_r18);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_failureReportIndirectPath_r18) {
        Encode_FailureReportIndirectPath_r18(enc, value.failureReportIndirectPath_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_IndirectPathFailureInformation_r18_IEs(Decoder& dec, IndirectPathFailureInformation_r18_IEs& value)
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
        if (Decode_FailureReportIndirectPath_r18(dec, value.failureReportIndirectPath_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_2) {
        if (Decode_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IndirectPathFailureInformation_r18_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IndirectPathFailureInformation_r18_IEs(IndirectPathFailureInformation_r18_IEs& value)
{
    if (value.has_failureReportIndirectPath_r18) {
        Free_FailureReportIndirectPath_r18(value.failureReportIndirectPath_r18);
    }
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_IndirectPathFailureInformation_r18_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IndirectPathFailureInformation_r18_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 483 行；空 SEQUENCE{}。
// Encode_IndirectPathFailureInformation_r18_CriticalExtensionsFuture 只读不分配；Decode_IndirectPathFailureInformation_r18_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_IndirectPathFailureInformation_r18_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(Encoder& enc, const IndirectPathFailureInformation_r18_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(Decoder& dec, IndirectPathFailureInformation_r18_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(IndirectPathFailureInformation_r18_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IndirectPathFailureInformation_r18_CriticalExtensions：ASN.1 criticalExtensions；源文件第 481 行；CHOICE。
// Encode_IndirectPathFailureInformation_r18_CriticalExtensions 只读不分配；Decode_IndirectPathFailureInformation_r18_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_IndirectPathFailureInformation_r18_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IndirectPathFailureInformation_r18_CriticalExtensions(Encoder& enc, const IndirectPathFailureInformation_r18_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case IndirectPathFailureInformation_r18_CriticalExtensions_Tag_indirectPathFailureInformation_r18:
        Encode_IndirectPathFailureInformation_r18_IEs(enc, value.u.indirectPathFailureInformation_r18);
        break;
    case IndirectPathFailureInformation_r18_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_IndirectPathFailureInformation_r18_CriticalExtensions(Decoder& dec, IndirectPathFailureInformation_r18_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (IndirectPathFailureInformation_r18_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case IndirectPathFailureInformation_r18_CriticalExtensions_Tag_indirectPathFailureInformation_r18: {
        if (Decode_IndirectPathFailureInformation_r18_IEs(dec, value.u.indirectPathFailureInformation_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case IndirectPathFailureInformation_r18_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_IndirectPathFailureInformation_r18_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IndirectPathFailureInformation_r18_CriticalExtensions(IndirectPathFailureInformation_r18_CriticalExtensions& value)
{
    switch (value.tag) {
    case IndirectPathFailureInformation_r18_CriticalExtensions_Tag_indirectPathFailureInformation_r18:
        Free_IndirectPathFailureInformation_r18_IEs(value.u.indirectPathFailureInformation_r18);
        break;
    case IndirectPathFailureInformation_r18_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_IndirectPathFailureInformation_r18_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// IndirectPathFailureInformation_r18：ASN.1 IndirectPathFailureInformation-r18；源文件第 480 行；SEQUENCE。
// Encode_IndirectPathFailureInformation_r18 只读不分配；Decode_IndirectPathFailureInformation_r18 可能 malloc（失败时内部已释放并清零）；Free_IndirectPathFailureInformation_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_IndirectPathFailureInformation_r18(Encoder& enc, const IndirectPathFailureInformation_r18& value)
{
    Encode_IndirectPathFailureInformation_r18_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_IndirectPathFailureInformation_r18(Decoder& dec, IndirectPathFailureInformation_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_IndirectPathFailureInformation_r18_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_IndirectPathFailureInformation_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_IndirectPathFailureInformation_r18(IndirectPathFailureInformation_r18& value)
{
    Free_IndirectPathFailureInformation_r18_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_RSTD_InfoList：ASN.1 EUTRA-RSTD-InfoList；源文件第 7078 行；SEQUENCE OF。
// Encode_EUTRA_RSTD_InfoList 只读不分配；Decode_EUTRA_RSTD_InfoList 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_RSTD_InfoList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_RSTD_InfoList(Encoder& enc, const EUTRA_RSTD_InfoList& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_RSTD_Info(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_RSTD_InfoList(Decoder& dec, EUTRA_RSTD_InfoList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_RSTD_Info*)std::malloc((std::size_t)value.count * sizeof(EUTRA_RSTD_Info));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_RSTD_Info));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_EUTRA_RSTD_Info(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_RSTD_InfoList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_RSTD_InfoList(EUTRA_RSTD_InfoList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_RSTD_Info(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_PRS_MeasurementInfoList_r16：ASN.1 NR-PRS-MeasurementInfoList-r16；源文件第 7086 行；SEQUENCE OF。
// Encode_NR_PRS_MeasurementInfoList_r16 只读不分配；Decode_NR_PRS_MeasurementInfoList_r16 可能 malloc（失败时内部已释放并清零）；Free_NR_PRS_MeasurementInfoList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_PRS_MeasurementInfoList_r16(Encoder& enc, const NR_PRS_MeasurementInfoList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_PRS_MeasurementInfo_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NR_PRS_MeasurementInfoList_r16(Decoder& dec, NR_PRS_MeasurementInfoList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_PRS_MeasurementInfo_r16*)std::malloc((std::size_t)value.count * sizeof(NR_PRS_MeasurementInfo_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_PRS_MeasurementInfo_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_PRS_MeasurementInfo_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NR_PRS_MeasurementInfoList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_PRS_MeasurementInfoList_r16(NR_PRS_MeasurementInfoList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_PRS_MeasurementInfo_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationMeasurementInfo：ASN.1 LocationMeasurementInfo；源文件第 7071 行；CHOICE。
// Encode_LocationMeasurementInfo 只读不分配；Decode_LocationMeasurementInfo 可能 malloc（失败时内部已释放并清零）；Free_LocationMeasurementInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationMeasurementInfo(Encoder& enc, const LocationMeasurementInfo& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 3) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
        Encoder sub;
        switch (value.tag) {
        case LocationMeasurementInfo_Tag_eutra_FineTimingDetection:
            (void)0;
            break;
        case LocationMeasurementInfo_Tag_nr_PRS_Measurement_r16:
            Encode_NR_PRS_MeasurementInfoList_r16(sub, value.u.nr_PRS_Measurement_r16);
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
    case LocationMeasurementInfo_Tag_eutra_RSTD:
        Encode_EUTRA_RSTD_InfoList(enc, value.u.eutra_RSTD);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LocationMeasurementInfo(Decoder& dec, LocationMeasurementInfo& value)
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
        if (extension_index >= 2u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (LocationMeasurementInfo_Tag)(1 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case LocationMeasurementInfo_Tag_eutra_FineTimingDetection: {
            (void)0;
            break;
        }
        case LocationMeasurementInfo_Tag_nr_PRS_Measurement_r16: {
            if (Decode_NR_PRS_MeasurementInfoList_r16(sub, value.u.nr_PRS_Measurement_r16) != ErrorCode_Ok) { goto fail; }
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
    value.tag = (LocationMeasurementInfo_Tag)0;
    switch (value.tag) {
    case LocationMeasurementInfo_Tag_eutra_RSTD: {
        if (Decode_EUTRA_RSTD_InfoList(dec, value.u.eutra_RSTD) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LocationMeasurementInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationMeasurementInfo(LocationMeasurementInfo& value)
{
    switch (value.tag) {
    case LocationMeasurementInfo_Tag_eutra_RSTD:
        Free_EUTRA_RSTD_InfoList(value.u.eutra_RSTD);
        break;
    case LocationMeasurementInfo_Tag_eutra_FineTimingDetection:
        break;
    case LocationMeasurementInfo_Tag_nr_PRS_Measurement_r16:
        Free_NR_PRS_MeasurementInfoList_r16(value.u.nr_PRS_Measurement_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_LocationMeasurementInfo：ASN.1 SetupRelease<LocationMeasurementInfo>；源文件第 515 行；CHOICE。
// Encode_SetupRelease_LocationMeasurementInfo 只读不分配；Decode_SetupRelease_LocationMeasurementInfo 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_LocationMeasurementInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_LocationMeasurementInfo(Encoder& enc, const SetupRelease_LocationMeasurementInfo& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_LocationMeasurementInfo_Tag_release:
        (void)0;
        break;
    case SetupRelease_LocationMeasurementInfo_Tag_setup:
        Encode_LocationMeasurementInfo(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_LocationMeasurementInfo(Decoder& dec, SetupRelease_LocationMeasurementInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_LocationMeasurementInfo_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_LocationMeasurementInfo_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_LocationMeasurementInfo_Tag_setup: {
        if (Decode_LocationMeasurementInfo(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_LocationMeasurementInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_LocationMeasurementInfo(SetupRelease_LocationMeasurementInfo& value)
{
    switch (value.tag) {
    case SetupRelease_LocationMeasurementInfo_Tag_release:
        break;
    case SetupRelease_LocationMeasurementInfo_Tag_setup:
        Free_LocationMeasurementInfo(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationMeasurementIndication_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 517 行；空 SEQUENCE{}。
// Encode_LocationMeasurementIndication_IEs_NonCriticalExtension 只读不分配；Decode_LocationMeasurementIndication_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_LocationMeasurementIndication_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationMeasurementIndication_IEs_NonCriticalExtension(Encoder& enc, const LocationMeasurementIndication_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_LocationMeasurementIndication_IEs_NonCriticalExtension(Decoder& dec, LocationMeasurementIndication_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationMeasurementIndication_IEs_NonCriticalExtension(LocationMeasurementIndication_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationMeasurementIndication_IEs：ASN.1 LocationMeasurementIndication-IEs；源文件第 514 行；SEQUENCE。
// Encode_LocationMeasurementIndication_IEs 只读不分配；Decode_LocationMeasurementIndication_IEs 可能 malloc（失败时内部已释放并清零）；Free_LocationMeasurementIndication_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationMeasurementIndication_IEs(Encoder& enc, const LocationMeasurementIndication_IEs& value)
{
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_SetupRelease_LocationMeasurementInfo(enc, value.measurementIndication);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_LocationMeasurementIndication_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_LocationMeasurementIndication_IEs(Decoder& dec, LocationMeasurementIndication_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_SetupRelease_LocationMeasurementInfo(dec, value.measurementIndication) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_1) {
        if (Decode_LocationMeasurementIndication_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LocationMeasurementIndication_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationMeasurementIndication_IEs(LocationMeasurementIndication_IEs& value)
{
    Free_SetupRelease_LocationMeasurementInfo(value.measurementIndication);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_LocationMeasurementIndication_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationMeasurementIndication_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 510 行；空 SEQUENCE{}。
// Encode_LocationMeasurementIndication_CriticalExtensionsFuture 只读不分配；Decode_LocationMeasurementIndication_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_LocationMeasurementIndication_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationMeasurementIndication_CriticalExtensionsFuture(Encoder& enc, const LocationMeasurementIndication_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_LocationMeasurementIndication_CriticalExtensionsFuture(Decoder& dec, LocationMeasurementIndication_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationMeasurementIndication_CriticalExtensionsFuture(LocationMeasurementIndication_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationMeasurementIndication_CriticalExtensions：ASN.1 criticalExtensions；源文件第 508 行；CHOICE。
// Encode_LocationMeasurementIndication_CriticalExtensions 只读不分配；Decode_LocationMeasurementIndication_CriticalExtensions 可能 malloc（失败时内部已释放并清零）；Free_LocationMeasurementIndication_CriticalExtensions 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationMeasurementIndication_CriticalExtensions(Encoder& enc, const LocationMeasurementIndication_CriticalExtensions& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case LocationMeasurementIndication_CriticalExtensions_Tag_locationMeasurementIndication:
        Encode_LocationMeasurementIndication_IEs(enc, value.u.locationMeasurementIndication);
        break;
    case LocationMeasurementIndication_CriticalExtensions_Tag_criticalExtensionsFuture:
        Encode_LocationMeasurementIndication_CriticalExtensionsFuture(enc, value.u.criticalExtensionsFuture);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LocationMeasurementIndication_CriticalExtensions(Decoder& dec, LocationMeasurementIndication_CriticalExtensions& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (LocationMeasurementIndication_CriticalExtensions_Tag)root_index;
    switch (value.tag) {
    case LocationMeasurementIndication_CriticalExtensions_Tag_locationMeasurementIndication: {
        if (Decode_LocationMeasurementIndication_IEs(dec, value.u.locationMeasurementIndication) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case LocationMeasurementIndication_CriticalExtensions_Tag_criticalExtensionsFuture: {
        if (Decode_LocationMeasurementIndication_CriticalExtensionsFuture(dec, value.u.criticalExtensionsFuture) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LocationMeasurementIndication_CriticalExtensions(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationMeasurementIndication_CriticalExtensions(LocationMeasurementIndication_CriticalExtensions& value)
{
    switch (value.tag) {
    case LocationMeasurementIndication_CriticalExtensions_Tag_locationMeasurementIndication:
        Free_LocationMeasurementIndication_IEs(value.u.locationMeasurementIndication);
        break;
    case LocationMeasurementIndication_CriticalExtensions_Tag_criticalExtensionsFuture:
        Free_LocationMeasurementIndication_CriticalExtensionsFuture(value.u.criticalExtensionsFuture);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LocationMeasurementIndication：ASN.1 LocationMeasurementIndication；源文件第 507 行；SEQUENCE。
// Encode_LocationMeasurementIndication 只读不分配；Decode_LocationMeasurementIndication 可能 malloc（失败时内部已释放并清零）；Free_LocationMeasurementIndication 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LocationMeasurementIndication(Encoder& enc, const LocationMeasurementIndication& value)
{
    Encode_LocationMeasurementIndication_CriticalExtensions(enc, value.criticalExtensions);
    return enc.Error();
}

ErrorCode Decode_LocationMeasurementIndication(Decoder& dec, LocationMeasurementIndication& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_LocationMeasurementIndication_CriticalExtensions(dec, value.criticalExtensions) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LocationMeasurementIndication(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LocationMeasurementIndication(LocationMeasurementIndication& value)
{
    Free_LocationMeasurementIndication_CriticalExtensions(value.criticalExtensions);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CAG_ConfigList_r18：ASN.1 CAG-ConfigList-r18；源文件第 21363 行；SEQUENCE OF。
// Encode_CAG_ConfigList_r18 只读不分配；Decode_CAG_ConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_CAG_ConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CAG_ConfigList_r18(Encoder& enc, const CAG_ConfigList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 12u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CAG_Config_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CAG_ConfigList_r18(Decoder& dec, CAG_ConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 12u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 12u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CAG_Config_r18*)std::malloc((std::size_t)value.count * sizeof(CAG_Config_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CAG_Config_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CAG_Config_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CAG_ConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CAG_ConfigList_r18(CAG_ConfigList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CAG_Config_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SNPN_ConfigCellIdList_r18：ASN.1 SNPN-ConfigCellIdList-r18；源文件第 21376 行；SEQUENCE OF。
// Encode_SNPN_ConfigCellIdList_r18 只读不分配；Decode_SNPN_ConfigCellIdList_r18 可能 malloc（失败时内部已释放并清零）；Free_SNPN_ConfigCellIdList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SNPN_ConfigCellIdList_r18(Encoder& enc, const SNPN_ConfigCellIdList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SNPN_ConfigCellId_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigCellIdList_r18(Decoder& dec, SNPN_ConfigCellIdList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SNPN_ConfigCellId_r18*)std::malloc((std::size_t)value.count * sizeof(SNPN_ConfigCellId_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SNPN_ConfigCellId_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SNPN_ConfigCellId_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigCellIdList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigCellIdList_r18(SNPN_ConfigCellIdList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SNPN_ConfigCellId_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SNPN_ConfigTAIList_r18：ASN.1 SNPN-ConfigTAIList-r18；源文件第 21383 行；SEQUENCE OF。
// Encode_SNPN_ConfigTAIList_r18 只读不分配；Decode_SNPN_ConfigTAIList_r18 可能 malloc（失败时内部已释放并清零）；Free_SNPN_ConfigTAIList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SNPN_ConfigTAIList_r18(Encoder& enc, const SNPN_ConfigTAIList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SNPN_ConfigTAI_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigTAIList_r18(Decoder& dec, SNPN_ConfigTAIList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SNPN_ConfigTAI_r18*)std::malloc((std::size_t)value.count * sizeof(SNPN_ConfigTAI_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SNPN_ConfigTAI_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SNPN_ConfigTAI_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigTAIList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigTAIList_r18(SNPN_ConfigTAIList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SNPN_ConfigTAI_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SNPN_ConfigIDList_r18：ASN.1 SNPN-ConfigIDList-r18；源文件第 21390 行；SEQUENCE OF。
// Encode_SNPN_ConfigIDList_r18 只读不分配；Decode_SNPN_ConfigIDList_r18 可能 malloc（失败时内部已释放并清零）；Free_SNPN_ConfigIDList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SNPN_ConfigIDList_r18(Encoder& enc, const SNPN_ConfigIDList_r18& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SNPN_ConfigID_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigIDList_r18(Decoder& dec, SNPN_ConfigIDList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SNPN_ConfigID_r18*)std::malloc((std::size_t)value.count * sizeof(SNPN_ConfigID_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SNPN_ConfigID_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SNPN_ConfigID_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigIDList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigIDList_r18(SNPN_ConfigIDList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SNPN_ConfigID_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SNPN_ConfigList_r18：ASN.1 SNPN-ConfigList-r18；源文件第 21370 行；CHOICE。
// Encode_SNPN_ConfigList_r18 只读不分配；Decode_SNPN_ConfigList_r18 可能 malloc（失败时内部已释放并清零）；Free_SNPN_ConfigList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SNPN_ConfigList_r18(Encoder& enc, const SNPN_ConfigList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SNPN_ConfigList_r18_Tag_snpn_ConfigCellIdList_r18:
        Encode_SNPN_ConfigCellIdList_r18(enc, value.u.snpn_ConfigCellIdList_r18);
        break;
    case SNPN_ConfigList_r18_Tag_snpn_ConfigTAIList_r18:
        Encode_SNPN_ConfigTAIList_r18(enc, value.u.snpn_ConfigTAIList_r18);
        break;
    case SNPN_ConfigList_r18_Tag_snpn_ConfigIDList_r18:
        Encode_SNPN_ConfigIDList_r18(enc, value.u.snpn_ConfigIDList_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SNPN_ConfigList_r18(Decoder& dec, SNPN_ConfigList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SNPN_ConfigList_r18_Tag)root_index;
    switch (value.tag) {
    case SNPN_ConfigList_r18_Tag_snpn_ConfigCellIdList_r18: {
        if (Decode_SNPN_ConfigCellIdList_r18(dec, value.u.snpn_ConfigCellIdList_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SNPN_ConfigList_r18_Tag_snpn_ConfigTAIList_r18: {
        if (Decode_SNPN_ConfigTAIList_r18(dec, value.u.snpn_ConfigTAIList_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SNPN_ConfigList_r18_Tag_snpn_ConfigIDList_r18: {
        if (Decode_SNPN_ConfigIDList_r18(dec, value.u.snpn_ConfigIDList_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SNPN_ConfigList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SNPN_ConfigList_r18(SNPN_ConfigList_r18& value)
{
    switch (value.tag) {
    case SNPN_ConfigList_r18_Tag_snpn_ConfigCellIdList_r18:
        Free_SNPN_ConfigCellIdList_r18(value.u.snpn_ConfigCellIdList_r18);
        break;
    case SNPN_ConfigList_r18_Tag_snpn_ConfigTAIList_r18:
        Free_SNPN_ConfigTAIList_r18(value.u.snpn_ConfigTAIList_r18);
        break;
    case SNPN_ConfigList_r18_Tag_snpn_ConfigIDList_r18:
        Free_SNPN_ConfigIDList_r18(value.u.snpn_ConfigIDList_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AreaConfiguration_v1800：ASN.1 AreaConfiguration-v1800；源文件第 21337 行；SEQUENCE。
// Encode_AreaConfiguration_v1800 只读不分配；Decode_AreaConfiguration_v1800 可能 malloc（失败时内部已释放并清零）；Free_AreaConfiguration_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AreaConfiguration_v1800(Encoder& enc, const AreaConfiguration_v1800& value)
{
    enc.WriteBit(value.has_cag_ConfigList_r18);
    enc.WriteBit(value.has_snpn_ConfigList_r18);
    if (value.has_cag_ConfigList_r18) {
        Encode_CAG_ConfigList_r18(enc, value.cag_ConfigList_r18);
    }
    if (value.has_snpn_ConfigList_r18) {
        Encode_SNPN_ConfigList_r18(enc, value.snpn_ConfigList_r18);
    }
    return enc.Error();
}

ErrorCode Decode_AreaConfiguration_v1800(Decoder& dec, AreaConfiguration_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CAG_ConfigList_r18(dec, value.cag_ConfigList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SNPN_ConfigList_r18(dec, value.snpn_ConfigList_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_AreaConfiguration_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AreaConfiguration_v1800(AreaConfiguration_v1800& value)
{
    if (value.has_cag_ConfigList_r18) {
        Free_CAG_ConfigList_r18(value.cag_ConfigList_r18);
    }
    if (value.has_snpn_ConfigList_r18) {
        Free_SNPN_ConfigList_r18(value.snpn_ConfigList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension：ASN.1 nonCriticalExtension；源文件第 559 行；空 SEQUENCE{}。
// Encode_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension 只读不分配；Decode_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension 可能 malloc（失败时内部已释放并清零）；Free_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(Encoder& enc, const LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(Decoder& dec, LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedMeasurementConfiguration_v1800_IEs：ASN.1 LoggedMeasurementConfiguration-v1800-IEs；源文件第 557 行；SEQUENCE。
// Encode_LoggedMeasurementConfiguration_v1800_IEs 只读不分配；Decode_LoggedMeasurementConfiguration_v1800_IEs 可能 malloc（失败时内部已释放并清零）；Free_LoggedMeasurementConfiguration_v1800_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedMeasurementConfiguration_v1800_IEs(Encoder& enc, const LoggedMeasurementConfiguration_v1800_IEs& value)
{
    enc.WriteBit(value.has_areaConfiguration_v1800);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_areaConfiguration_v1800) {
        Encode_AreaConfiguration_v1800(enc, value.areaConfiguration_v1800);
    }
    if (value.has_nonCriticalExtension) {
        Encode_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_v1800_IEs(Decoder& dec, LoggedMeasurementConfiguration_v1800_IEs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_AreaConfiguration_v1800(dec, value.areaConfiguration_v1800) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedMeasurementConfiguration_v1800_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_v1800_IEs(LoggedMeasurementConfiguration_v1800_IEs& value)
{
    if (value.has_areaConfiguration_v1800) {
        Free_AreaConfiguration_v1800(value.areaConfiguration_v1800);
    }
    if (value.has_nonCriticalExtension) {
        Free_LoggedMeasurementConfiguration_v1800_IEs_NonCriticalExtension(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellGlobalIdList_r16：ASN.1 CellGlobalIdList-r16；源文件第 21353 行；SEQUENCE OF。
// Encode_CellGlobalIdList_r16 只读不分配；Decode_CellGlobalIdList_r16 可能 malloc（失败时内部已释放并清零）；Free_CellGlobalIdList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellGlobalIdList_r16(Encoder& enc, const CellGlobalIdList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CGI_Info_Logging_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellGlobalIdList_r16(Decoder& dec, CellGlobalIdList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CGI_Info_Logging_r16*)std::malloc((std::size_t)value.count * sizeof(CGI_Info_Logging_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CGI_Info_Logging_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CGI_Info_Logging_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CellGlobalIdList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellGlobalIdList_r16(CellGlobalIdList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CGI_Info_Logging_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TrackingAreaCodeList_r16：ASN.1 TrackingAreaCodeList-r16；源文件第 21355 行；SEQUENCE OF。
// Encode_TrackingAreaCodeList_r16 只读不分配；Decode_TrackingAreaCodeList_r16 可能 malloc（失败时内部已释放并清零）；Free_TrackingAreaCodeList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TrackingAreaCodeList_r16(Encoder& enc, const TrackingAreaCodeList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteFixedBitString(value.items[i].bytes, value.items[i].bitLength, 24, 24);
    }
    return enc.Error();
}

ErrorCode Decode_TrackingAreaCodeList_r16(Decoder& dec, TrackingAreaCodeList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (TrackingAreaCode*)std::malloc((std::size_t)value.count * sizeof(TrackingAreaCode));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(TrackingAreaCode));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
    string_length = 24;
    value.items[i].bytes = string_bytes;
    value.items[i].bitLength = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_TrackingAreaCodeList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TrackingAreaCodeList_r16(TrackingAreaCodeList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            std::free(value.items[i].bytes);
            value.items[i].bytes = nullptr;
            value.items[i].bitLength = 0;
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TrackingAreaIdentityList_r16：ASN.1 TrackingAreaIdentityList-r16；源文件第 21357 行；SEQUENCE OF。
// Encode_TrackingAreaIdentityList_r16 只读不分配；Decode_TrackingAreaIdentityList_r16 可能 malloc（失败时内部已释放并清零）；Free_TrackingAreaIdentityList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TrackingAreaIdentityList_r16(Encoder& enc, const TrackingAreaIdentityList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_TrackingAreaIdentity_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_TrackingAreaIdentityList_r16(Decoder& dec, TrackingAreaIdentityList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (TrackingAreaIdentity_r16*)std::malloc((std::size_t)value.count * sizeof(TrackingAreaIdentity_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(TrackingAreaIdentity_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_TrackingAreaIdentity_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_TrackingAreaIdentityList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TrackingAreaIdentityList_r16(TrackingAreaIdentityList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_TrackingAreaIdentity_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AreaConfig_r16：ASN.1 AreaConfig-r16；源文件第 21342 行；CHOICE。
// Encode_AreaConfig_r16 只读不分配；Decode_AreaConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_AreaConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AreaConfig_r16(Encoder& enc, const AreaConfig_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case AreaConfig_r16_Tag_cellGlobalIdList_r16:
        Encode_CellGlobalIdList_r16(enc, value.u.cellGlobalIdList_r16);
        break;
    case AreaConfig_r16_Tag_trackingAreaCodeList_r16:
        Encode_TrackingAreaCodeList_r16(enc, value.u.trackingAreaCodeList_r16);
        break;
    case AreaConfig_r16_Tag_trackingAreaIdentityList_r16:
        Encode_TrackingAreaIdentityList_r16(enc, value.u.trackingAreaIdentityList_r16);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_AreaConfig_r16(Decoder& dec, AreaConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (AreaConfig_r16_Tag)root_index;
    switch (value.tag) {
    case AreaConfig_r16_Tag_cellGlobalIdList_r16: {
        if (Decode_CellGlobalIdList_r16(dec, value.u.cellGlobalIdList_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case AreaConfig_r16_Tag_trackingAreaCodeList_r16: {
        if (Decode_TrackingAreaCodeList_r16(dec, value.u.trackingAreaCodeList_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case AreaConfig_r16_Tag_trackingAreaIdentityList_r16: {
        if (Decode_TrackingAreaIdentityList_r16(dec, value.u.trackingAreaIdentityList_r16) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_AreaConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AreaConfig_r16(AreaConfig_r16& value)
{
    switch (value.tag) {
    case AreaConfig_r16_Tag_cellGlobalIdList_r16:
        Free_CellGlobalIdList_r16(value.u.cellGlobalIdList_r16);
        break;
    case AreaConfig_r16_Tag_trackingAreaCodeList_r16:
        Free_TrackingAreaCodeList_r16(value.u.trackingAreaCodeList_r16);
        break;
    case AreaConfig_r16_Tag_trackingAreaIdentityList_r16:
        Free_TrackingAreaIdentityList_r16(value.u.trackingAreaIdentityList_r16);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AreaConfiguration_r17：ASN.1 AreaConfiguration-r17；源文件第 21332 行；SEQUENCE。
// Encode_AreaConfiguration_r17 只读不分配；Decode_AreaConfiguration_r17 可能 malloc（失败时内部已释放并清零）；Free_AreaConfiguration_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AreaConfiguration_r17(Encoder& enc, const AreaConfiguration_r17& value)
{
    enc.WriteBit(value.has_areaConfig_r17);
    enc.WriteBit(value.has_interFreqTargetList_r17);
    if (value.has_areaConfig_r17) {
        Encode_AreaConfig_r16(enc, value.areaConfig_r17);
    }
    if (value.has_interFreqTargetList_r17) {
enc.WriteConstrainedLength(value.interFreqTargetList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.interFreqTargetList_r17_count; ++i) {
    Encode_InterFreqTargetInfo_r16(enc, value.interFreqTargetList_r17_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_AreaConfiguration_r17(Decoder& dec, AreaConfiguration_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_AreaConfig_r16(dec, value.areaConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.interFreqTargetList_r17_count)) { goto fail; }
if (value.interFreqTargetList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.interFreqTargetList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.interFreqTargetList_r17_count > 0u) {
    value.interFreqTargetList_r17_items = (InterFreqTargetInfo_r16*)std::malloc((std::size_t)value.interFreqTargetList_r17_count * sizeof(InterFreqTargetInfo_r16));
    if (value.interFreqTargetList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.interFreqTargetList_r17_items, 0, (std::size_t)value.interFreqTargetList_r17_count * sizeof(InterFreqTargetInfo_r16));
}
for (std::uint32_t i = 0; i < value.interFreqTargetList_r17_count; ++i) {
    if (Decode_InterFreqTargetInfo_r16(dec, value.interFreqTargetList_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_AreaConfiguration_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AreaConfiguration_r17(AreaConfiguration_r17& value)
{
    if (value.has_areaConfig_r17) {
        Free_AreaConfig_r16(value.areaConfig_r17);
    }
    if (value.has_interFreqTargetList_r17) {
        if (value.interFreqTargetList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.interFreqTargetList_r17_count; ++i) {
                Free_InterFreqTargetInfo_r16(value.interFreqTargetList_r17_items[i]);
            }
            std::free(value.interFreqTargetList_r17_items);
            value.interFreqTargetList_r17_items = nullptr;
        }
        value.interFreqTargetList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedMeasurementConfiguration_v1700_IEs：ASN.1 LoggedMeasurementConfiguration-v1700-IEs；源文件第 550 行；SEQUENCE。
// Encode_LoggedMeasurementConfiguration_v1700_IEs 只读不分配；Decode_LoggedMeasurementConfiguration_v1700_IEs 可能 malloc（失败时内部已释放并清零）；Free_LoggedMeasurementConfiguration_v1700_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedMeasurementConfiguration_v1700_IEs(Encoder& enc, const LoggedMeasurementConfiguration_v1700_IEs& value)
{
    enc.WriteBit(value.has_sigLoggedMeasType_r17);
    enc.WriteBit(value.has_earlyMeasIndication_r17);
    enc.WriteBit(value.has_areaConfiguration_r17);
    enc.WriteBit(value.has_nonCriticalExtension);
    if (value.has_sigLoggedMeasType_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sigLoggedMeasType_r17), 0, 0);
    }
    if (value.has_earlyMeasIndication_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.earlyMeasIndication_r17), 0, 0);
    }
    if (value.has_areaConfiguration_r17) {
        Encode_AreaConfiguration_r17(enc, value.areaConfiguration_r17);
    }
    if (value.has_nonCriticalExtension) {
        Encode_LoggedMeasurementConfiguration_v1800_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_v1700_IEs(Decoder& dec, LoggedMeasurementConfiguration_v1700_IEs& value)
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
        value.sigLoggedMeasType_r17 = (LoggedMeasurementConfiguration_v1700_IEs_SigLoggedMeasType_r17)0;
    }
    if (present_1) {
        value.earlyMeasIndication_r17 = (LoggedMeasurementConfiguration_v1700_IEs_EarlyMeasIndication_r17)0;
    }
    if (present_2) {
        if (Decode_AreaConfiguration_r17(dec, value.areaConfiguration_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_LoggedMeasurementConfiguration_v1800_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedMeasurementConfiguration_v1700_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_v1700_IEs(LoggedMeasurementConfiguration_v1700_IEs& value)
{
    if (value.has_sigLoggedMeasType_r17) {
    }
    if (value.has_earlyMeasIndication_r17) {
    }
    if (value.has_areaConfiguration_r17) {
        Free_AreaConfiguration_r17(value.areaConfiguration_r17);
    }
    if (value.has_nonCriticalExtension) {
        Free_LoggedMeasurementConfiguration_v1800_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_IdentityList2_r16：ASN.1 PLMN-IdentityList2-r16；源文件第 9879 行；SEQUENCE OF。
// Encode_PLMN_IdentityList2_r16 只读不分配；Decode_PLMN_IdentityList2_r16 可能 malloc（失败时内部已释放并清零）；Free_PLMN_IdentityList2_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_IdentityList2_r16(Encoder& enc, const PLMN_IdentityList2_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PLMN_Identity(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_PLMN_IdentityList2_r16(Decoder& dec, PLMN_IdentityList2_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PLMN_Identity*)std::malloc((std::size_t)value.count * sizeof(PLMN_Identity));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PLMN_Identity));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_PLMN_Identity(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_IdentityList2_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_IdentityList2_r16(PLMN_IdentityList2_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PLMN_Identity(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// AreaConfiguration_r16：ASN.1 AreaConfiguration-r16；源文件第 21327 行；SEQUENCE。
// Encode_AreaConfiguration_r16 只读不分配；Decode_AreaConfiguration_r16 可能 malloc（失败时内部已释放并清零）；Free_AreaConfiguration_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_AreaConfiguration_r16(Encoder& enc, const AreaConfiguration_r16& value)
{
    enc.WriteBit(value.has_interFreqTargetList_r16);
    Encode_AreaConfig_r16(enc, value.areaConfig_r16);
    if (value.has_interFreqTargetList_r16) {
enc.WriteConstrainedLength(value.interFreqTargetList_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.interFreqTargetList_r16_count; ++i) {
    Encode_InterFreqTargetInfo_r16(enc, value.interFreqTargetList_r16_items[i]);
}
    }
    return enc.Error();
}

ErrorCode Decode_AreaConfiguration_r16(Decoder& dec, AreaConfiguration_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_AreaConfig_r16(dec, value.areaConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.interFreqTargetList_r16_count)) { goto fail; }
if (value.interFreqTargetList_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.interFreqTargetList_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.interFreqTargetList_r16_count > 0u) {
    value.interFreqTargetList_r16_items = (InterFreqTargetInfo_r16*)std::malloc((std::size_t)value.interFreqTargetList_r16_count * sizeof(InterFreqTargetInfo_r16));
    if (value.interFreqTargetList_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.interFreqTargetList_r16_items, 0, (std::size_t)value.interFreqTargetList_r16_count * sizeof(InterFreqTargetInfo_r16));
}
for (std::uint32_t i = 0; i < value.interFreqTargetList_r16_count; ++i) {
    if (Decode_InterFreqTargetInfo_r16(dec, value.interFreqTargetList_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_AreaConfiguration_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_AreaConfiguration_r16(AreaConfiguration_r16& value)
{
    Free_AreaConfig_r16(value.areaConfig_r16);
    if (value.has_interFreqTargetList_r16) {
        if (value.interFreqTargetList_r16_items != nullptr) {
            for (std::uint32_t i = 0; i < value.interFreqTargetList_r16_count; ++i) {
                Free_InterFreqTargetInfo_r16(value.interFreqTargetList_r16_items[i]);
            }
            std::free(value.interFreqTargetList_r16_items);
            value.interFreqTargetList_r16_items = nullptr;
        }
        value.interFreqTargetList_r16_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MCC：ASN.1 MCC；源文件第 9847 行；SEQUENCE OF。
// Encode_MCC 只读不分配；Decode_MCC 可能 malloc（失败时内部已释放并清零）；Free_MCC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MCC(Encoder& enc, const MCC& value)
{
    if (value.count != 3u) {
        enc.Fail(ErrorCode_ValueOutOfRange);
    } else {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 9);
        }
    }
    return enc.Error();
}

ErrorCode Decode_MCC(Decoder& dec, MCC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
value.count = 3u;
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MCC_MNC_Digit*)std::malloc((std::size_t)value.count * sizeof(MCC_MNC_Digit));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MCC_MNC_Digit));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
    value.items[i] = (MCC_MNC_Digit)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MCC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MCC(MCC& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MNC：ASN.1 MNC；源文件第 9849 行；SEQUENCE OF。
// Encode_MNC 只读不分配；Decode_MNC 可能 malloc（失败时内部已释放并清零）；Free_MNC 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MNC(Encoder& enc, const MNC& value)
{
    enc.WriteConstrainedLength(value.count, 2u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 9);
    }
    return enc.Error();
}

ErrorCode Decode_MNC(Decoder& dec, MNC& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(2u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MCC_MNC_Digit*)std::malloc((std::size_t)value.count * sizeof(MCC_MNC_Digit));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MCC_MNC_Digit));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
    value.items[i] = (MCC_MNC_Digit)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_MNC(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MNC(MNC& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PLMN_Identity：ASN.1 PLMN-Identity；源文件第 9842 行；SEQUENCE。
// Encode_PLMN_Identity 只读不分配；Decode_PLMN_Identity 可能 malloc（失败时内部已释放并清零）；Free_PLMN_Identity 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PLMN_Identity(Encoder& enc, const PLMN_Identity& value)
{
    enc.WriteBit(value.has_mcc);
    if (value.has_mcc) {
        Encode_MCC(enc, value.mcc);
    }
    Encode_MNC(enc, value.mnc);
    return enc.Error();
}

ErrorCode Decode_PLMN_Identity(Decoder& dec, PLMN_Identity& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_MCC(dec, value.mcc) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_MNC(dec, value.mnc) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_PLMN_Identity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PLMN_Identity(PLMN_Identity& value)
{
    if (value.has_mcc) {
        Free_MCC(value.mcc);
    }
    Free_MNC(value.mnc);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// TraceReference_r16：ASN.1 TraceReference-r16；源文件第 21809 行；SEQUENCE。
// Encode_TraceReference_r16 只读不分配；Decode_TraceReference_r16 可能 malloc（失败时内部已释放并清零）；Free_TraceReference_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_TraceReference_r16(Encoder& enc, const TraceReference_r16& value)
{
    Encode_PLMN_Identity(enc, value.plmn_Identity_r16);
    enc.WriteFixedOctetString(value.traceId_r16.bytes, value.traceId_r16.length, 3, 3);
    return enc.Error();
}

ErrorCode Decode_TraceReference_r16(Decoder& dec, TraceReference_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_PLMN_Identity(dec, value.plmn_Identity_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedOctetString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.traceId_r16.bytes = string_bytes;
        value.traceId_r16.length = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_TraceReference_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_TraceReference_r16(TraceReference_r16& value)
{
    Free_PLMN_Identity(value.plmn_Identity_r16);
    std::free(value.traceId_r16.bytes);
    value.traceId_r16.bytes = nullptr;
    value.traceId_r16.length = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// BT_NameList_r16：ASN.1 BT-NameList-r16；源文件第 21400 行；SEQUENCE OF。
// Encode_BT_NameList_r16 只读不分配；Decode_BT_NameList_r16 可能 malloc（失败时内部已释放并清零）；Free_BT_NameList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_BT_NameList_r16(Encoder& enc, const BT_NameList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedOctetString(value.items[i].bytes, value.items[i].length, 1, 248);
    }
    return enc.Error();
}

ErrorCode Decode_BT_NameList_r16(Decoder& dec, BT_NameList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (BT_Name_r16*)std::malloc((std::size_t)value.count * sizeof(BT_Name_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(BT_Name_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadConstrainedOctetString(string_bytes, string_length, 1, 248)) { goto fail; }
    value.items[i].bytes = string_bytes;
    value.items[i].length = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_BT_NameList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BT_NameList_r16(BT_NameList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            std::free(value.items[i].bytes);
            value.items[i].bytes = nullptr;
            value.items[i].length = 0;
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_BT_NameList_r16：ASN.1 SetupRelease<BT-NameList-r16>；源文件第 537 行；CHOICE。
// Encode_SetupRelease_BT_NameList_r16 只读不分配；Decode_SetupRelease_BT_NameList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_BT_NameList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_BT_NameList_r16(Encoder& enc, const SetupRelease_BT_NameList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_BT_NameList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_BT_NameList_r16_Tag_setup:
        Encode_BT_NameList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_BT_NameList_r16(Decoder& dec, SetupRelease_BT_NameList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_BT_NameList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_BT_NameList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_BT_NameList_r16_Tag_setup: {
        if (Decode_BT_NameList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_BT_NameList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_BT_NameList_r16(SetupRelease_BT_NameList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_BT_NameList_r16_Tag_release:
        break;
    case SetupRelease_BT_NameList_r16_Tag_setup:
        Free_BT_NameList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// WLAN_NameList_r16：ASN.1 WLAN-NameList-r16；源文件第 21887 行；SEQUENCE OF。
// Encode_WLAN_NameList_r16 只读不分配；Decode_WLAN_NameList_r16 可能 malloc（失败时内部已释放并清零）；Free_WLAN_NameList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_WLAN_NameList_r16(Encoder& enc, const WLAN_NameList_r16& value)
{
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedOctetString(value.items[i].bytes, value.items[i].length, 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_WLAN_NameList_r16(Decoder& dec, WLAN_NameList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (WLAN_Name_r16*)std::malloc((std::size_t)value.count * sizeof(WLAN_Name_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(WLAN_Name_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::uint8_t* string_bytes = nullptr;
    std::uint32_t string_length = 0;
    if (!dec.ReadConstrainedOctetString(string_bytes, string_length, 1, 32)) { goto fail; }
    value.items[i].bytes = string_bytes;
    value.items[i].length = string_length;
}
    return dec.Error();
    } while (false);
fail:
    Free_WLAN_NameList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_WLAN_NameList_r16(WLAN_NameList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            std::free(value.items[i].bytes);
            value.items[i].bytes = nullptr;
            value.items[i].length = 0;
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_WLAN_NameList_r16：ASN.1 SetupRelease<WLAN-NameList-r16>；源文件第 538 行；CHOICE。
// Encode_SetupRelease_WLAN_NameList_r16 只读不分配；Decode_SetupRelease_WLAN_NameList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_WLAN_NameList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_WLAN_NameList_r16(Encoder& enc, const SetupRelease_WLAN_NameList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_WLAN_NameList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_WLAN_NameList_r16_Tag_setup:
        Encode_WLAN_NameList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_WLAN_NameList_r16(Decoder& dec, SetupRelease_WLAN_NameList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_WLAN_NameList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_WLAN_NameList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_WLAN_NameList_r16_Tag_setup: {
        if (Decode_WLAN_NameList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_WLAN_NameList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_WLAN_NameList_r16(SetupRelease_WLAN_NameList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_WLAN_NameList_r16_Tag_release:
        break;
    case SetupRelease_WLAN_NameList_r16_Tag_setup:
        Free_WLAN_NameList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Sensor_NameList_r16：ASN.1 Sensor-NameList-r16；源文件第 21799 行；SEQUENCE。
// Encode_Sensor_NameList_r16 只读不分配；Decode_Sensor_NameList_r16 可能 malloc（失败时内部已释放并清零）；Free_Sensor_NameList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Sensor_NameList_r16(Encoder& enc, const Sensor_NameList_r16& value)
{
    enc.WriteBit(value.has_measUncomBarPre_r16);
    enc.WriteBit(value.has_measUeSpeed);
    enc.WriteBit(value.has_measUeOrientation);
    if (value.has_measUncomBarPre_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measUncomBarPre_r16), 0, 0);
    }
    if (value.has_measUeSpeed) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measUeSpeed), 0, 0);
    }
    if (value.has_measUeOrientation) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measUeOrientation), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_Sensor_NameList_r16(Decoder& dec, Sensor_NameList_r16& value)
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
        value.measUncomBarPre_r16 = (Sensor_NameList_r16_MeasUncomBarPre_r16)0;
    }
    if (present_1) {
        value.measUeSpeed = (Sensor_NameList_r16_MeasUeSpeed)0;
    }
    if (present_2) {
        value.measUeOrientation = (Sensor_NameList_r16_MeasUeOrientation)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Sensor_NameList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Sensor_NameList_r16(Sensor_NameList_r16& value)
{
    if (value.has_measUncomBarPre_r16) {
    }
    if (value.has_measUeSpeed) {
    }
    if (value.has_measUeOrientation) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_Sensor_NameList_r16：ASN.1 SetupRelease<Sensor-NameList-r16>；源文件第 539 行；CHOICE。
// Encode_SetupRelease_Sensor_NameList_r16 只读不分配；Decode_SetupRelease_Sensor_NameList_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_Sensor_NameList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_Sensor_NameList_r16(Encoder& enc, const SetupRelease_Sensor_NameList_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_Sensor_NameList_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_Sensor_NameList_r16_Tag_setup:
        Encode_Sensor_NameList_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_Sensor_NameList_r16(Decoder& dec, SetupRelease_Sensor_NameList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_Sensor_NameList_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_Sensor_NameList_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_Sensor_NameList_r16_Tag_setup: {
        if (Decode_Sensor_NameList_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_Sensor_NameList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_Sensor_NameList_r16(SetupRelease_Sensor_NameList_r16& value)
{
    switch (value.tag) {
    case SetupRelease_Sensor_NameList_r16_Tag_release:
        break;
    case SetupRelease_Sensor_NameList_r16_Tag_setup:
        Free_Sensor_NameList_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedPeriodicalReportConfig_r16：ASN.1 LoggedPeriodicalReportConfig-r16；源文件第 562 行；SEQUENCE。
// Encode_LoggedPeriodicalReportConfig_r16 只读不分配；Decode_LoggedPeriodicalReportConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_LoggedPeriodicalReportConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedPeriodicalReportConfig_r16(Encoder& enc, const LoggedPeriodicalReportConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.loggingInterval_r16), 0, 10);
    return enc.Error();
}

ErrorCode Decode_LoggedPeriodicalReportConfig_r16(Decoder& dec, LoggedPeriodicalReportConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.loggingInterval_r16 = (LoggingInterval_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedPeriodicalReportConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedPeriodicalReportConfig_r16(LoggedPeriodicalReportConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasTriggerQuantity：ASN.1 MeasTriggerQuantity；源文件第 11694 行；CHOICE。
// Encode_MeasTriggerQuantity 只读不分配；Decode_MeasTriggerQuantity 可能 malloc（失败时内部已释放并清零）；Free_MeasTriggerQuantity 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasTriggerQuantity(Encoder& enc, const MeasTriggerQuantity& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case MeasTriggerQuantity_Tag_rsrp:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rsrp), 0, 127);
        break;
    case MeasTriggerQuantity_Tag_rsrq:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rsrq), 0, 127);
        break;
    case MeasTriggerQuantity_Tag_sinr:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sinr), 0, 127);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasTriggerQuantity(Decoder& dec, MeasTriggerQuantity& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (MeasTriggerQuantity_Tag)root_index;
    switch (value.tag) {
    case MeasTriggerQuantity_Tag_rsrp: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.rsrp = (RSRP_Range)tmp_value;
        break;
    }
    case MeasTriggerQuantity_Tag_rsrq: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.rsrq = (RSRQ_Range)tmp_value;
        break;
    }
    case MeasTriggerQuantity_Tag_sinr: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.sinr = (SINR_Range)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasTriggerQuantity(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasTriggerQuantity(MeasTriggerQuantity& value)
{
    switch (value.tag) {
    case MeasTriggerQuantity_Tag_rsrp:
        break;
    case MeasTriggerQuantity_Tag_rsrq:
        break;
    case MeasTriggerQuantity_Tag_sinr:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventType_r16_EventL1：ASN.1 eventL1；源文件第 575 行；SEQUENCE。
// Encode_EventType_r16_EventL1 只读不分配；Decode_EventType_r16_EventL1 可能 malloc（失败时内部已释放并清零）；Free_EventType_r16_EventL1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventType_r16_EventL1(Encoder& enc, const EventType_r16_EventL1& value)
{
    Encode_MeasTriggerQuantity(enc, value.l1_Threshold);
    enc.WriteConstrainedInteger((std::int64_t)(value.hysteresis), 0, 30);
    enc.WriteConstrainedInteger((std::int64_t)(value.timeToTrigger), 0, 15);
    return enc.Error();
}

ErrorCode Decode_EventType_r16_EventL1(Decoder& dec, EventType_r16_EventL1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_MeasTriggerQuantity(dec, value.l1_Threshold) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.hysteresis = (Hysteresis)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.timeToTrigger = (TimeToTrigger)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventType_r16_EventL1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventType_r16_EventL1(EventType_r16_EventL1& value)
{
    Free_MeasTriggerQuantity(value.l1_Threshold);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EventType_r16：ASN.1 EventType-r16；源文件第 573 行；CHOICE。
// Encode_EventType_r16 只读不分配；Decode_EventType_r16 可能 malloc（失败时内部已释放并清零）；Free_EventType_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EventType_r16(Encoder& enc, const EventType_r16& value)
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
    case EventType_r16_Tag_outOfCoverage:
        (void)0;
        break;
    case EventType_r16_Tag_eventL1:
        Encode_EventType_r16_EventL1(enc, value.u.eventL1);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EventType_r16(Decoder& dec, EventType_r16& value)
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
        value.tag = (EventType_r16_Tag)(2 + extension_index);
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
    value.tag = (EventType_r16_Tag)root_index;
    switch (value.tag) {
    case EventType_r16_Tag_outOfCoverage: {
        (void)0;
        break;
    }
    case EventType_r16_Tag_eventL1: {
        if (Decode_EventType_r16_EventL1(dec, value.u.eventL1) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EventType_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EventType_r16(EventType_r16& value)
{
    switch (value.tag) {
    case EventType_r16_Tag_outOfCoverage:
        break;
    case EventType_r16_Tag_eventL1:
        Free_EventType_r16_EventL1(value.u.eventL1);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedEventTriggerConfig_r16：ASN.1 LoggedEventTriggerConfig-r16；源文件第 567 行；SEQUENCE。
// Encode_LoggedEventTriggerConfig_r16 只读不分配；Decode_LoggedEventTriggerConfig_r16 可能 malloc（失败时内部已释放并清零）；Free_LoggedEventTriggerConfig_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedEventTriggerConfig_r16(Encoder& enc, const LoggedEventTriggerConfig_r16& value)
{
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_EventType_r16(enc, value.eventType_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.loggingInterval_r16), 0, 10);
    return enc.Error();
}

ErrorCode Decode_LoggedEventTriggerConfig_r16(Decoder& dec, LoggedEventTriggerConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_EventType_r16(dec, value.eventType_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.loggingInterval_r16 = (LoggingInterval_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedEventTriggerConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedEventTriggerConfig_r16(LoggedEventTriggerConfig_r16& value)
{
    Free_EventType_r16(value.eventType_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedMeasurementConfiguration_r16_IEs_ReportType：ASN.1 reportType；源文件第 541 行；CHOICE。
// Encode_LoggedMeasurementConfiguration_r16_IEs_ReportType 只读不分配；Decode_LoggedMeasurementConfiguration_r16_IEs_ReportType 可能 malloc（失败时内部已释放并清零）；Free_LoggedMeasurementConfiguration_r16_IEs_ReportType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedMeasurementConfiguration_r16_IEs_ReportType(Encoder& enc, const LoggedMeasurementConfiguration_r16_IEs_ReportType& value)
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
    case LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_periodical:
        Encode_LoggedPeriodicalReportConfig_r16(enc, value.u.periodical);
        break;
    case LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_eventTriggered:
        Encode_LoggedEventTriggerConfig_r16(enc, value.u.eventTriggered);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_r16_IEs_ReportType(Decoder& dec, LoggedMeasurementConfiguration_r16_IEs_ReportType& value)
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
        value.tag = (LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag)(2 + extension_index);
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
    value.tag = (LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag)root_index;
    switch (value.tag) {
    case LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_periodical: {
        if (Decode_LoggedPeriodicalReportConfig_r16(dec, value.u.periodical) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_eventTriggered: {
        if (Decode_LoggedEventTriggerConfig_r16(dec, value.u.eventTriggered) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedMeasurementConfiguration_r16_IEs_ReportType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_r16_IEs_ReportType(LoggedMeasurementConfiguration_r16_IEs_ReportType& value)
{
    switch (value.tag) {
    case LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_periodical:
        Free_LoggedPeriodicalReportConfig_r16(value.u.periodical);
        break;
    case LoggedMeasurementConfiguration_r16_IEs_ReportType_Tag_eventTriggered:
        Free_LoggedEventTriggerConfig_r16(value.u.eventTriggered);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedMeasurementConfiguration_r16_IEs：ASN.1 LoggedMeasurementConfiguration-r16-IEs；源文件第 530 行；SEQUENCE。
// Encode_LoggedMeasurementConfiguration_r16_IEs 只读不分配；Decode_LoggedMeasurementConfiguration_r16_IEs 可能 malloc（失败时内部已释放并清零）；Free_LoggedMeasurementConfiguration_r16_IEs 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedMeasurementConfiguration_r16_IEs(Encoder& enc, const LoggedMeasurementConfiguration_r16_IEs& value)
{
    enc.WriteBit(value.has_areaConfiguration_r16);
    enc.WriteBit(value.has_plmn_IdentityList_r16);
    enc.WriteBit(value.has_bt_NameList_r16);
    enc.WriteBit(value.has_wlan_NameList_r16);
    enc.WriteBit(value.has_sensor_NameList_r16);
    enc.WriteBit(value.has_lateNonCriticalExtension);
    enc.WriteBit(value.has_nonCriticalExtension);
    Encode_TraceReference_r16(enc, value.traceReference_r16);
    enc.WriteFixedOctetString(value.traceRecordingSessionRef_r16.bytes, value.traceRecordingSessionRef_r16.length, 2, 2);
    enc.WriteFixedOctetString(value.tce_Id_r16.bytes, value.tce_Id_r16.length, 1, 1);
    enc.WriteFixedBitString(value.absoluteTimeInfo_r16.bytes, value.absoluteTimeInfo_r16.bitLength, 48, 48);
    if (value.has_areaConfiguration_r16) {
        Encode_AreaConfiguration_r16(enc, value.areaConfiguration_r16);
    }
    if (value.has_plmn_IdentityList_r16) {
        Encode_PLMN_IdentityList2_r16(enc, value.plmn_IdentityList_r16);
    }
    if (value.has_bt_NameList_r16) {
        Encode_SetupRelease_BT_NameList_r16(enc, value.bt_NameList_r16);
    }
    if (value.has_wlan_NameList_r16) {
        Encode_SetupRelease_WLAN_NameList_r16(enc, value.wlan_NameList_r16);
    }
    if (value.has_sensor_NameList_r16) {
        Encode_SetupRelease_Sensor_NameList_r16(enc, value.sensor_NameList_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.loggingDuration_r16), 0, 7);
    Encode_LoggedMeasurementConfiguration_r16_IEs_ReportType(enc, value.reportType);
    if (value.has_lateNonCriticalExtension) {
        enc.WriteSemiConstrainedOctetString(value.lateNonCriticalExtension.bytes, value.lateNonCriticalExtension.length, 0, 0xFFFFFFFFu);
    }
    if (value.has_nonCriticalExtension) {
        Encode_LoggedMeasurementConfiguration_v1700_IEs(enc, value.nonCriticalExtension);
    }
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_r16_IEs(Decoder& dec, LoggedMeasurementConfiguration_r16_IEs& value)
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
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 48)) { goto fail; }
        string_length = 48;
        value.absoluteTimeInfo_r16.bytes = string_bytes;
        value.absoluteTimeInfo_r16.bitLength = string_length;
    }
    if (present_0) {
        if (Decode_AreaConfiguration_r16(dec, value.areaConfiguration_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PLMN_IdentityList2_r16(dec, value.plmn_IdentityList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_BT_NameList_r16(dec, value.bt_NameList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SetupRelease_WLAN_NameList_r16(dec, value.wlan_NameList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SetupRelease_Sensor_NameList_r16(dec, value.sensor_NameList_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.loggingDuration_r16 = (LoggingDuration_r16)tmp_value;
    }
    {
        if (Decode_LoggedMeasurementConfiguration_r16_IEs_ReportType(dec, value.reportType) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadSemiConstrainedOctetString(string_bytes, string_length, 0, 0xFFFFFFFFu)) { goto fail; }
        value.lateNonCriticalExtension.bytes = string_bytes;
        value.lateNonCriticalExtension.length = string_length;
    }
    if (present_6) {
        if (Decode_LoggedMeasurementConfiguration_v1700_IEs(dec, value.nonCriticalExtension) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LoggedMeasurementConfiguration_r16_IEs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_r16_IEs(LoggedMeasurementConfiguration_r16_IEs& value)
{
    Free_TraceReference_r16(value.traceReference_r16);
    std::free(value.traceRecordingSessionRef_r16.bytes);
    value.traceRecordingSessionRef_r16.bytes = nullptr;
    value.traceRecordingSessionRef_r16.length = 0;
    std::free(value.tce_Id_r16.bytes);
    value.tce_Id_r16.bytes = nullptr;
    value.tce_Id_r16.length = 0;
    std::free(value.absoluteTimeInfo_r16.bytes);
    value.absoluteTimeInfo_r16.bytes = nullptr;
    value.absoluteTimeInfo_r16.bitLength = 0;
    if (value.has_areaConfiguration_r16) {
        Free_AreaConfiguration_r16(value.areaConfiguration_r16);
    }
    if (value.has_plmn_IdentityList_r16) {
        Free_PLMN_IdentityList2_r16(value.plmn_IdentityList_r16);
    }
    if (value.has_bt_NameList_r16) {
        Free_SetupRelease_BT_NameList_r16(value.bt_NameList_r16);
    }
    if (value.has_wlan_NameList_r16) {
        Free_SetupRelease_WLAN_NameList_r16(value.wlan_NameList_r16);
    }
    if (value.has_sensor_NameList_r16) {
        Free_SetupRelease_Sensor_NameList_r16(value.sensor_NameList_r16);
    }
    Free_LoggedMeasurementConfiguration_r16_IEs_ReportType(value.reportType);
    if (value.has_lateNonCriticalExtension) {
        std::free(value.lateNonCriticalExtension.bytes);
        value.lateNonCriticalExtension.bytes = nullptr;
        value.lateNonCriticalExtension.length = 0;
    }
    if (value.has_nonCriticalExtension) {
        Free_LoggedMeasurementConfiguration_v1700_IEs(value.nonCriticalExtension);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture：ASN.1 criticalExtensions/criticalExtensionsFuture；源文件第 526 行；空 SEQUENCE{}。
// Encode_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture 只读不分配；Decode_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture 可能 malloc（失败时内部已释放并清零）；Free_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(Encoder& enc, const LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture& value)
{
    (void)value;
    return enc.Error();
}

ErrorCode Decode_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(Decoder& dec, LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture(LoggedMeasurementConfiguration_r16_CriticalExtensionsFuture& value)
{
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
