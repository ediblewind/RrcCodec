/* ============================================================================
 * src/generated/codec_part019.cpp — 生成的编解码函数
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
// SRS_ResourceType_Aperiodic：ASN.1 resourceType/aperiodic；源文件第 13198 行；空 SEQUENCE{}。
// Encode_SRS_ResourceType_Aperiodic 只读不分配；Decode_SRS_ResourceType_Aperiodic 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceType_Aperiodic 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceType_Aperiodic(Encoder& enc, const SRS_ResourceType_Aperiodic& value)
{
    (void)value;
    enc.WriteBit(false);
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceType_Aperiodic(Decoder& dec, SRS_ResourceType_Aperiodic& value)
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

void Free_SRS_ResourceType_Aperiodic(SRS_ResourceType_Aperiodic& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_PeriodicityAndOffset：ASN.1 SRS-PeriodicityAndOffset；源文件第 13386 行；CHOICE。
// Encode_SRS_PeriodicityAndOffset 只读不分配；Decode_SRS_PeriodicityAndOffset 可能 malloc（失败时内部已释放并清零）；Free_SRS_PeriodicityAndOffset 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_PeriodicityAndOffset(Encoder& enc, const SRS_PeriodicityAndOffset& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 16);
    switch (value.tag) {
    case SRS_PeriodicityAndOffset_Tag_sl1:
        (void)0;
        break;
    case SRS_PeriodicityAndOffset_Tag_sl2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2), 0, 1);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl4), 0, 3);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5), 0, 4);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl8), 0, 7);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10), 0, 9);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl16), 0, 15);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20), 0, 19);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl32), 0, 31);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40), 0, 39);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl64), 0, 63);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl80), 0, 79);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl160), 0, 159);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl320), 0, 319);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl640), 0, 639);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl1280), 0, 1279);
        break;
    case SRS_PeriodicityAndOffset_Tag_sl2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2560), 0, 2559);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_PeriodicityAndOffset(Decoder& dec, SRS_PeriodicityAndOffset& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 16, root_index)) {
        goto fail;
    }
    value.tag = (SRS_PeriodicityAndOffset_Tag)root_index;
    switch (value.tag) {
    case SRS_PeriodicityAndOffset_Tag_sl1: {
        (void)0;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.sl2 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.sl4 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sl5 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.sl8 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sl10 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.sl16 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sl20 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.sl32 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sl40 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.sl64 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sl80 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sl160 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sl320 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.sl640 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.sl1280 = (int64_t)tmp_value;
        break;
    }
    case SRS_PeriodicityAndOffset_Tag_sl2560: {
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
    Free_SRS_PeriodicityAndOffset(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_PeriodicityAndOffset(SRS_PeriodicityAndOffset& value)
{
    switch (value.tag) {
    case SRS_PeriodicityAndOffset_Tag_sl1:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl2:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl4:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl5:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl8:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl10:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl16:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl20:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl32:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl40:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl64:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl80:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl160:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl320:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl640:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl1280:
        break;
    case SRS_PeriodicityAndOffset_Tag_sl2560:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceType_Semi_persistent：ASN.1 resourceType/semi-persistent；源文件第 13201 行；SEQUENCE。
// Encode_SRS_ResourceType_Semi_persistent 只读不分配；Decode_SRS_ResourceType_Semi_persistent 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceType_Semi_persistent 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceType_Semi_persistent(Encoder& enc, const SRS_ResourceType_Semi_persistent& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SRS_PeriodicityAndOffset(enc, value.periodicityAndOffset_sp);
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceType_Semi_persistent(Decoder& dec, SRS_ResourceType_Semi_persistent& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SRS_PeriodicityAndOffset(dec, value.periodicityAndOffset_sp) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceType_Semi_persistent(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceType_Semi_persistent(SRS_ResourceType_Semi_persistent& value)
{
    Free_SRS_PeriodicityAndOffset(value.periodicityAndOffset_sp);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceType_Periodic：ASN.1 resourceType/periodic；源文件第 13205 行；SEQUENCE。
// Encode_SRS_ResourceType_Periodic 只读不分配；Decode_SRS_ResourceType_Periodic 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceType_Periodic 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceType_Periodic(Encoder& enc, const SRS_ResourceType_Periodic& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SRS_PeriodicityAndOffset(enc, value.periodicityAndOffset_p);
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceType_Periodic(Decoder& dec, SRS_ResourceType_Periodic& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SRS_PeriodicityAndOffset(dec, value.periodicityAndOffset_p) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceType_Periodic(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceType_Periodic(SRS_ResourceType_Periodic& value)
{
    Free_SRS_PeriodicityAndOffset(value.periodicityAndOffset_p);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceType：ASN.1 resourceType；源文件第 13197 行；CHOICE。
// Encode_SRS_ResourceType 只读不分配；Decode_SRS_ResourceType 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceType 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceType(Encoder& enc, const SRS_ResourceType& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_ResourceType_Tag_aperiodic:
        Encode_SRS_ResourceType_Aperiodic(enc, value.u.aperiodic);
        break;
    case SRS_ResourceType_Tag_semi_persistent:
        Encode_SRS_ResourceType_Semi_persistent(enc, value.u.semi_persistent);
        break;
    case SRS_ResourceType_Tag_periodic:
        Encode_SRS_ResourceType_Periodic(enc, value.u.periodic);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceType(Decoder& dec, SRS_ResourceType& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_ResourceType_Tag)root_index;
    switch (value.tag) {
    case SRS_ResourceType_Tag_aperiodic: {
        if (Decode_SRS_ResourceType_Aperiodic(dec, value.u.aperiodic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_ResourceType_Tag_semi_persistent: {
        if (Decode_SRS_ResourceType_Semi_persistent(dec, value.u.semi_persistent) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_ResourceType_Tag_periodic: {
        if (Decode_SRS_ResourceType_Periodic(dec, value.u.periodic) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceType(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceType(SRS_ResourceType& value)
{
    switch (value.tag) {
    case SRS_ResourceType_Tag_aperiodic:
        Free_SRS_ResourceType_Aperiodic(value.u.aperiodic);
        break;
    case SRS_ResourceType_Tag_semi_persistent:
        Free_SRS_ResourceType_Semi_persistent(value.u.semi_persistent);
        break;
    case SRS_ResourceType_Tag_periodic:
        Free_SRS_ResourceType_Periodic(value.u.periodic);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_Resource：ASN.1 SRS-Resource；源文件第 13170 行；SEQUENCE。
// Encode_SRS_Resource 只读不分配；Decode_SRS_Resource 可能 malloc（失败时内部已释放并清零）；Free_SRS_Resource 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_Resource(Encoder& enc, const SRS_Resource& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ptrs_PortIndex);
    enc.WriteBit(value.has_spatialRelationInfo);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceId), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSRS_Ports), 0, 2);
    if (value.has_ptrs_PortIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ptrs_PortIndex), 0, 1);
    }
    Encode_SRS_Resource_TransmissionComb(enc, value.transmissionComb);
    Encode_SRS_ResourceMapping(enc, value.resourceMapping);
    enc.WriteConstrainedInteger((std::int64_t)(value.freqDomainPosition), 0, 67);
    enc.WriteConstrainedInteger((std::int64_t)(value.freqDomainShift), 0, 268);
    Encode_SRS_Resource_FreqHopping(enc, value.freqHopping);
    enc.WriteConstrainedInteger((std::int64_t)(value.groupOrSequenceHopping), 0, 2);
    Encode_SRS_ResourceType(enc, value.resourceType);
    enc.WriteConstrainedInteger((std::int64_t)(value.sequenceId), 0, 1023);
    if (value.has_spatialRelationInfo) {
        Encode_SRS_SpatialRelationInfo(enc, value.spatialRelationInfo);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SRS_Resource_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SRS_Resource_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SRS_Resource_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_SRS_Resource_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource(Decoder& dec, SRS_Resource& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.srs_ResourceId = (SRS_ResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrofSRS_Ports = (SRS_Resource_NrofSRS_Ports)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ptrs_PortIndex = (SRS_Resource_Ptrs_PortIndex)tmp_value;
    }
    {
        if (Decode_SRS_Resource_TransmissionComb(dec, value.transmissionComb) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_SRS_ResourceMapping(dec, value.resourceMapping) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 67, tmp_value)) { goto fail; }
        value.freqDomainPosition = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 268, tmp_value)) { goto fail; }
        value.freqDomainShift = (int64_t)tmp_value;
    }
    {
        if (Decode_SRS_Resource_FreqHopping(dec, value.freqHopping) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.groupOrSequenceHopping = (SRS_Resource_GroupOrSequenceHopping)tmp_value;
    }
    {
        if (Decode_SRS_ResourceType(dec, value.resourceType) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sequenceId = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_SRS_SpatialRelationInfo(dec, value.spatialRelationInfo) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SRS_Resource_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SRS_Resource_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SRS_Resource_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_SRS_Resource_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_SRS_Resource(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource(SRS_Resource& value)
{
    if (value.has_ptrs_PortIndex) {
    }
    Free_SRS_Resource_TransmissionComb(value.transmissionComb);
    Free_SRS_ResourceMapping(value.resourceMapping);
    Free_SRS_Resource_FreqHopping(value.freqHopping);
    Free_SRS_ResourceType(value.resourceType);
    if (value.has_spatialRelationInfo) {
        Free_SRS_SpatialRelationInfo(value.spatialRelationInfo);
    }
    if (value.has_extGroup1) {
        Free_SRS_Resource_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SRS_Resource_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SRS_Resource_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_SRS_Resource_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SRS_ResourceConfigCLI_r16：ASN.1 SRS-ResourceConfigCLI-r16；源文件第 7624 行；SEQUENCE。
// Encode_SRS_ResourceConfigCLI_r16 只读不分配；Decode_SRS_ResourceConfigCLI_r16 可能 malloc（失败时内部已释放并清零）；Free_SRS_ResourceConfigCLI_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SRS_ResourceConfigCLI_r16(Encoder& enc, const SRS_ResourceConfigCLI_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_refServCellIndex_r16);
    Encode_SRS_Resource(enc, value.srs_Resource_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_SCS_r16), 0, 7);
    if (value.has_refServCellIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refServCellIndex_r16), 0, 31);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.refBWP_r16), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceConfigCLI_r16(Decoder& dec, SRS_ResourceConfigCLI_r16& value)
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
        if (Decode_SRS_Resource(dec, value.srs_Resource_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.srs_SCS_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.refServCellIndex_r16 = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.refBWP_r16 = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceConfigCLI_r16(SRS_ResourceConfigCLI_r16& value)
{
    Free_SRS_Resource(value.srs_Resource_r16);
    if (value.has_refServCellIndex_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RSSI_PeriodicityAndOffset_r16：ASN.1 RSSI-PeriodicityAndOffset-r16；源文件第 7646 行；CHOICE。
// Encode_RSSI_PeriodicityAndOffset_r16 只读不分配；Decode_RSSI_PeriodicityAndOffset_r16 可能 malloc（失败时内部已释放并清零）；Free_RSSI_PeriodicityAndOffset_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RSSI_PeriodicityAndOffset_r16(Encoder& enc, const RSSI_PeriodicityAndOffset_r16& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 7) {
        if (choice_index >= 7) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 7));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 6);
    switch (value.tag) {
    case RSSI_PeriodicityAndOffset_r16_Tag_sl10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10), 0, 9);
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20), 0, 19);
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40), 0, 39);
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl80), 0, 79);
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl160), 0, 159);
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl320), 0, 319);
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_s1640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.s1640), 0, 639);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_RSSI_PeriodicityAndOffset_r16(Decoder& dec, RSSI_PeriodicityAndOffset_r16& value)
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
        value.tag = (RSSI_PeriodicityAndOffset_r16_Tag)(7 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 6, root_index)) {
        goto fail;
    }
    value.tag = (RSSI_PeriodicityAndOffset_r16_Tag)root_index;
    switch (value.tag) {
    case RSSI_PeriodicityAndOffset_r16_Tag_sl10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sl10 = (int64_t)tmp_value;
        break;
    }
    case RSSI_PeriodicityAndOffset_r16_Tag_sl20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sl20 = (int64_t)tmp_value;
        break;
    }
    case RSSI_PeriodicityAndOffset_r16_Tag_sl40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sl40 = (int64_t)tmp_value;
        break;
    }
    case RSSI_PeriodicityAndOffset_r16_Tag_sl80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sl80 = (int64_t)tmp_value;
        break;
    }
    case RSSI_PeriodicityAndOffset_r16_Tag_sl160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sl160 = (int64_t)tmp_value;
        break;
    }
    case RSSI_PeriodicityAndOffset_r16_Tag_sl320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sl320 = (int64_t)tmp_value;
        break;
    }
    case RSSI_PeriodicityAndOffset_r16_Tag_s1640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.s1640 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RSSI_PeriodicityAndOffset_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RSSI_PeriodicityAndOffset_r16(RSSI_PeriodicityAndOffset_r16& value)
{
    switch (value.tag) {
    case RSSI_PeriodicityAndOffset_r16_Tag_sl10:
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl20:
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl40:
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl80:
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl160:
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_sl320:
        break;
    case RSSI_PeriodicityAndOffset_r16_Tag_s1640:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RSSI_ResourceConfigCLI_r16：ASN.1 RSSI-ResourceConfigCLI-r16；源文件第 7632 行；SEQUENCE。
// Encode_RSSI_ResourceConfigCLI_r16 只读不分配；Decode_RSSI_ResourceConfigCLI_r16 可能 malloc（失败时内部已释放并清零）；Free_RSSI_ResourceConfigCLI_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RSSI_ResourceConfigCLI_r16(Encoder& enc, const RSSI_ResourceConfigCLI_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_refServCellIndex_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.rssi_ResourceId_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.rssi_SCS_r16), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.startPRB_r16), 0, 2169);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs_r16), 4, 276);
    enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols_r16), 1, 14);
    Encode_RSSI_PeriodicityAndOffset_r16(enc, value.rssi_PeriodicityAndOffset_r16);
    if (value.has_refServCellIndex_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refServCellIndex_r16), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_RSSI_ResourceConfigCLI_r16(Decoder& dec, RSSI_ResourceConfigCLI_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.rssi_ResourceId_r16 = (RSSI_ResourceId_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.rssi_SCS_r16 = (SubcarrierSpacing)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2169, tmp_value)) { goto fail; }
        value.startPRB_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(4, 276, tmp_value)) { goto fail; }
        value.nrofPRBs_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 14, tmp_value)) { goto fail; }
        value.nrofSymbols_r16 = (int64_t)tmp_value;
    }
    {
        if (Decode_RSSI_PeriodicityAndOffset_r16(dec, value.rssi_PeriodicityAndOffset_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.refServCellIndex_r16 = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RSSI_ResourceConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RSSI_ResourceConfigCLI_r16(RSSI_ResourceConfigCLI_r16& value)
{
    Free_RSSI_PeriodicityAndOffset_r16(value.rssi_PeriodicityAndOffset_r16);
    if (value.has_refServCellIndex_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectEUTRA_ExtGroup1：ASN.1 MeasObjectEUTRA_ExtGroup1；源文件第 7671 行；扩展添加组 [[ ]]。
// Encode_MeasObjectEUTRA_ExtGroup1 只读不分配；Decode_MeasObjectEUTRA_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectEUTRA_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectEUTRA_ExtGroup1(Encoder& enc, const MeasObjectEUTRA_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_associatedMeasGap_r17);
    if (value.has_associatedMeasGap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedMeasGap_r17), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectEUTRA_ExtGroup1(Decoder& dec, MeasObjectEUTRA_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.associatedMeasGap_r17 = (MeasGapId_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectEUTRA_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectEUTRA_ExtGroup1(MeasObjectEUTRA_ExtGroup1& value)
{
    if (value.has_associatedMeasGap_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectEUTRA_ExtGroup2：ASN.1 MeasObjectEUTRA_ExtGroup2；源文件第 7674 行；扩展添加组 [[ ]]。
// Encode_MeasObjectEUTRA_ExtGroup2 只读不分配；Decode_MeasObjectEUTRA_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectEUTRA_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectEUTRA_ExtGroup2(Encoder& enc, const MeasObjectEUTRA_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_measSequence_r18);
    if (value.has_measSequence_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measSequence_r18), 1, 64);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectEUTRA_ExtGroup2(Decoder& dec, MeasObjectEUTRA_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.measSequence_r18 = (MeasSequence_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectEUTRA_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectEUTRA_ExtGroup2(MeasObjectEUTRA_ExtGroup2& value)
{
    if (value.has_measSequence_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_CellIndexList：ASN.1 EUTRA-CellIndexList；源文件第 7679 行；SEQUENCE OF。
// Encode_EUTRA_CellIndexList 只读不分配；Decode_EUTRA_CellIndexList 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_CellIndexList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_CellIndexList(Encoder& enc, const EUTRA_CellIndexList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_CellIndexList(Decoder& dec, EUTRA_CellIndexList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (EUTRA_CellIndex*)std::malloc((std::size_t)value.count * sizeof(EUTRA_CellIndex));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(EUTRA_CellIndex));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.items[i] = (EUTRA_CellIndex)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_CellIndexList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_CellIndexList(EUTRA_CellIndexList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectEUTRA：ASN.1 MeasObjectEUTRA；源文件第 7660 行；SEQUENCE。
// Encode_MeasObjectEUTRA 只读不分配；Decode_MeasObjectEUTRA 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectEUTRA(Encoder& enc, const MeasObjectEUTRA& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cellsToRemoveListEUTRAN);
    enc.WriteBit(value.has_cellsToAddModListEUTRAN);
    enc.WriteBit(value.has_excludedCellsToRemoveListEUTRAN);
    enc.WriteBit(value.has_excludedCellsToAddModListEUTRAN);
    enc.WriteBit(value.has_eutra_Q_OffsetRange);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 262143);
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedMeasBandwidth), 0, 5);
    if (value.has_cellsToRemoveListEUTRAN) {
        Encode_EUTRA_CellIndexList(enc, value.cellsToRemoveListEUTRAN);
    }
    if (value.has_cellsToAddModListEUTRAN) {
enc.WriteConstrainedLength(value.cellsToAddModListEUTRAN_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.cellsToAddModListEUTRAN_count; ++i) {
    Encode_EUTRA_Cell(enc, value.cellsToAddModListEUTRAN_items[i]);
}
    }
    if (value.has_excludedCellsToRemoveListEUTRAN) {
        Encode_EUTRA_CellIndexList(enc, value.excludedCellsToRemoveListEUTRAN);
    }
    if (value.has_excludedCellsToAddModListEUTRAN) {
enc.WriteConstrainedLength(value.excludedCellsToAddModListEUTRAN_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.excludedCellsToAddModListEUTRAN_count; ++i) {
    Encode_EUTRA_ExcludedCell(enc, value.excludedCellsToAddModListEUTRAN_items[i]);
}
    }
    enc.WriteBool(value.eutra_PresenceAntennaPort1);
    if (value.has_eutra_Q_OffsetRange) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eutra_Q_OffsetRange), 0, 30);
    }
    enc.WriteBool(value.widebandRSRQ_Meas);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasObjectEUTRA_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasObjectEUTRA_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectEUTRA(Decoder& dec, MeasObjectEUTRA& value)
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
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreq = (ARFCN_ValueEUTRA)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.allowedMeasBandwidth = (EUTRA_AllowedMeasBandwidth)tmp_value;
    }
    if (present_0) {
        if (Decode_EUTRA_CellIndexList(dec, value.cellsToRemoveListEUTRAN) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.cellsToAddModListEUTRAN_count)) { goto fail; }
if (value.cellsToAddModListEUTRAN_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.cellsToAddModListEUTRAN_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.cellsToAddModListEUTRAN_count > 0u) {
    value.cellsToAddModListEUTRAN_items = (EUTRA_Cell*)std::malloc((std::size_t)value.cellsToAddModListEUTRAN_count * sizeof(EUTRA_Cell));
    if (value.cellsToAddModListEUTRAN_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.cellsToAddModListEUTRAN_items, 0, (std::size_t)value.cellsToAddModListEUTRAN_count * sizeof(EUTRA_Cell));
}
for (std::uint32_t i = 0; i < value.cellsToAddModListEUTRAN_count; ++i) {
    if (Decode_EUTRA_Cell(dec, value.cellsToAddModListEUTRAN_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_EUTRA_CellIndexList(dec, value.excludedCellsToRemoveListEUTRAN) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.excludedCellsToAddModListEUTRAN_count)) { goto fail; }
if (value.excludedCellsToAddModListEUTRAN_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.excludedCellsToAddModListEUTRAN_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.excludedCellsToAddModListEUTRAN_count > 0u) {
    value.excludedCellsToAddModListEUTRAN_items = (EUTRA_ExcludedCell*)std::malloc((std::size_t)value.excludedCellsToAddModListEUTRAN_count * sizeof(EUTRA_ExcludedCell));
    if (value.excludedCellsToAddModListEUTRAN_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.excludedCellsToAddModListEUTRAN_items, 0, (std::size_t)value.excludedCellsToAddModListEUTRAN_count * sizeof(EUTRA_ExcludedCell));
}
for (std::uint32_t i = 0; i < value.excludedCellsToAddModListEUTRAN_count; ++i) {
    if (Decode_EUTRA_ExcludedCell(dec, value.excludedCellsToAddModListEUTRAN_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.eutra_PresenceAntennaPort1 = tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.eutra_Q_OffsetRange = (EUTRA_Q_OffsetRange)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.widebandRSRQ_Meas = tmp_value;
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
    if (Decode_MeasObjectEUTRA_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MeasObjectEUTRA_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_MeasObjectEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectEUTRA(MeasObjectEUTRA& value)
{
    if (value.has_cellsToRemoveListEUTRAN) {
        Free_EUTRA_CellIndexList(value.cellsToRemoveListEUTRAN);
    }
    if (value.has_cellsToAddModListEUTRAN) {
        if (value.cellsToAddModListEUTRAN_items != nullptr) {
            for (std::uint32_t i = 0; i < value.cellsToAddModListEUTRAN_count; ++i) {
                Free_EUTRA_Cell(value.cellsToAddModListEUTRAN_items[i]);
            }
            std::free(value.cellsToAddModListEUTRAN_items);
            value.cellsToAddModListEUTRAN_items = nullptr;
        }
        value.cellsToAddModListEUTRAN_count = 0;
    }
    if (value.has_excludedCellsToRemoveListEUTRAN) {
        Free_EUTRA_CellIndexList(value.excludedCellsToRemoveListEUTRAN);
    }
    if (value.has_excludedCellsToAddModListEUTRAN) {
        if (value.excludedCellsToAddModListEUTRAN_items != nullptr) {
            for (std::uint32_t i = 0; i < value.excludedCellsToAddModListEUTRAN_count; ++i) {
                Free_EUTRA_ExcludedCell(value.excludedCellsToAddModListEUTRAN_items[i]);
            }
            std::free(value.excludedCellsToAddModListEUTRAN_items);
            value.excludedCellsToAddModListEUTRAN_items = nullptr;
        }
        value.excludedCellsToAddModListEUTRAN_count = 0;
    }
    if (value.has_eutra_Q_OffsetRange) {
    }
    if (value.has_extGroup1) {
        Free_MeasObjectEUTRA_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasObjectEUTRA_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_Cell：ASN.1 EUTRA-Cell；源文件第 7684 行；SEQUENCE。
// Encode_EUTRA_Cell 只读不分配；Decode_EUTRA_Cell 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_Cell 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_Cell(Encoder& enc, const EUTRA_Cell& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.cellIndexEUTRA), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 503);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellIndividualOffset), 0, 30);
    return enc.Error();
}

ErrorCode Decode_EUTRA_Cell(Decoder& dec, EUTRA_Cell& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.cellIndexEUTRA = (EUTRA_CellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.physCellId = (EUTRA_PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.cellIndividualOffset = (EUTRA_Q_OffsetRange)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_Cell(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_Cell(EUTRA_Cell& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_PhysCellIdRange：ASN.1 EUTRA-PhysCellIdRange；源文件第 21471 行；SEQUENCE。
// Encode_EUTRA_PhysCellIdRange 只读不分配；Decode_EUTRA_PhysCellIdRange 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_PhysCellIdRange 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_PhysCellIdRange(Encoder& enc, const EUTRA_PhysCellIdRange& value)
{
    (void)value;
    enc.WriteBit(value.has_range);
    enc.WriteConstrainedInteger((std::int64_t)(value.start), 0, 503);
    if (value.has_range) {
        enc.WriteConstrainedInteger((std::int64_t)(value.range), 0, 15);
    }
    return enc.Error();
}

ErrorCode Decode_EUTRA_PhysCellIdRange(Decoder& dec, EUTRA_PhysCellIdRange& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.start = (EUTRA_PhysCellId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.range = (EUTRA_PhysCellIdRange_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_PhysCellIdRange(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_PhysCellIdRange(EUTRA_PhysCellIdRange& value)
{
    if (value.has_range) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// EUTRA_ExcludedCell：ASN.1 EUTRA-ExcludedCell；源文件第 7691 行；SEQUENCE。
// Encode_EUTRA_ExcludedCell 只读不分配；Decode_EUTRA_ExcludedCell 可能 malloc（失败时内部已释放并清零）；Free_EUTRA_ExcludedCell 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_EUTRA_ExcludedCell(Encoder& enc, const EUTRA_ExcludedCell& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.cellIndexEUTRA), 1, 32);
    Encode_EUTRA_PhysCellIdRange(enc, value.physCellIdRange);
    return enc.Error();
}

ErrorCode Decode_EUTRA_ExcludedCell(Decoder& dec, EUTRA_ExcludedCell& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.cellIndexEUTRA = (EUTRA_CellIndex)tmp_value;
    }
    {
        if (Decode_EUTRA_PhysCellIdRange(dec, value.physCellIdRange) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_ExcludedCell(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_ExcludedCell(EUTRA_ExcludedCell& value)
{
    Free_EUTRA_PhysCellIdRange(value.physCellIdRange);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModListExt_v1800：ASN.1 CellsToAddModListExt-v1800；源文件第 7806 行；SEQUENCE OF。
// Encode_CellsToAddModListExt_v1800 只读不分配；Decode_CellsToAddModListExt_v1800 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModListExt_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModListExt_v1800(Encoder& enc, const CellsToAddModListExt_v1800& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CellsToAddModExt_v1800(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellsToAddModListExt_v1800(Decoder& dec, CellsToAddModListExt_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CellsToAddModExt_v1800*)std::malloc((std::size_t)value.count * sizeof(CellsToAddModExt_v1800));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddModExt_v1800));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CellsToAddModExt_v1800(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModListExt_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModListExt_v1800(CellsToAddModListExt_v1800& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CellsToAddModExt_v1800(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_ExtGroup5：ASN.1 MeasObjectNR_ExtGroup5；源文件第 7745 行；扩展添加组 [[ ]]。
// Encode_MeasObjectNR_ExtGroup5 只读不分配；Decode_MeasObjectNR_ExtGroup5 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_ExtGroup5 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_ExtGroup5(Encoder& enc, const MeasObjectNR_ExtGroup5& value)
{
    (void)value;
    enc.WriteBit(value.has_measSequence_r18);
    enc.WriteBit(value.has_cellsToAddModListExt_v1800);
    if (value.has_measSequence_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measSequence_r18), 1, 64);
    }
    if (value.has_cellsToAddModListExt_v1800) {
        Encode_CellsToAddModListExt_v1800(enc, value.cellsToAddModListExt_v1800);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_ExtGroup5(Decoder& dec, MeasObjectNR_ExtGroup5& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.measSequence_r18 = (MeasSequence_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_CellsToAddModListExt_v1800(dec, value.cellsToAddModListExt_v1800) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_ExtGroup5(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_ExtGroup5(MeasObjectNR_ExtGroup5& value)
{
    if (value.has_measSequence_r18) {
    }
    if (value.has_cellsToAddModListExt_v1800) {
        Free_CellsToAddModListExt_v1800(value.cellsToAddModListExt_v1800);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_ExtGroup1：ASN.1 MeasObjectNR_ExtGroup1；源文件第 7724 行；扩展添加组 [[ ]]。
// Encode_MeasObjectNR_ExtGroup1 只读不分配；Decode_MeasObjectNR_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_ExtGroup1(Encoder& enc, const MeasObjectNR_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_freqBandIndicatorNR);
    enc.WriteBit(value.has_measCycleSCell);
    if (value.has_freqBandIndicatorNR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.freqBandIndicatorNR), 1, 1024);
    }
    if (value.has_measCycleSCell) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measCycleSCell), 0, 6);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_ExtGroup1(Decoder& dec, MeasObjectNR_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.freqBandIndicatorNR = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.measCycleSCell = (MeasObjectNR_ExtGroup1_MeasCycleSCell)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_ExtGroup1(MeasObjectNR_ExtGroup1& value)
{
    if (value.has_freqBandIndicatorNR) {
    }
    if (value.has_measCycleSCell) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC3List_r16：ASN.1 SSB-MTC3List-r16；源文件第 7751 行；SEQUENCE OF。
// Encode_SSB_MTC3List_r16 只读不分配；Decode_SSB_MTC3List_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC3List_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC3List_r16(Encoder& enc, const SSB_MTC3List_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 4u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SSB_MTC3_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_MTC3List_r16(Decoder& dec, SSB_MTC3List_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 4u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 4u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SSB_MTC3_r16*)std::malloc((std::size_t)value.count * sizeof(SSB_MTC3_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_MTC3_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SSB_MTC3_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC3List_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC3List_r16(SSB_MTC3List_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SSB_MTC3_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17：ASN.1 tci-StateInfo-r17；源文件第 7833 行；SEQUENCE。
// Encode_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17 只读不分配；Decode_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17 可能 malloc（失败时内部已释放并清零）；Free_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(Encoder& enc, const RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_ref_ServCellId_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.tci_StateId_r17), 0, 127);
    if (value.has_ref_ServCellId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ref_ServCellId_r17), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(Decoder& dec, RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.tci_StateId_r17 = (TCI_StateId)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.ref_ServCellId_r17 = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17& value)
{
    if (value.has_ref_ServCellId_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RMTC_Config_r16_ExtGroup1：ASN.1 RMTC_Config_r16_ExtGroup1；源文件第 7829 行；扩展添加组 [[ ]]。
// Encode_RMTC_Config_r16_ExtGroup1 只读不分配；Decode_RMTC_Config_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_RMTC_Config_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RMTC_Config_r16_ExtGroup1(Encoder& enc, const RMTC_Config_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_rmtc_Bandwidth_r17);
    enc.WriteBit(value.has_measDurationSymbols_v1700);
    enc.WriteBit(value.has_ref_SCS_CP_v1700);
    enc.WriteBit(value.has_tci_StateInfo_r17);
    if (value.has_rmtc_Bandwidth_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rmtc_Bandwidth_r17), 0, 4);
    }
    if (value.has_measDurationSymbols_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measDurationSymbols_v1700), 0, 2);
    }
    if (value.has_ref_SCS_CP_v1700) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ref_SCS_CP_v1700), 0, 2);
    }
    if (value.has_tci_StateInfo_r17) {
        Encode_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(enc, value.tci_StateInfo_r17);
    }
    return enc.Error();
}

ErrorCode Decode_RMTC_Config_r16_ExtGroup1(Decoder& dec, RMTC_Config_r16_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.rmtc_Bandwidth_r17 = (RMTC_Config_r16_ExtGroup1_Rmtc_Bandwidth_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.measDurationSymbols_v1700 = (RMTC_Config_r16_ExtGroup1_MeasDurationSymbols_v1700)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ref_SCS_CP_v1700 = (RMTC_Config_r16_ExtGroup1_Ref_SCS_CP_v1700)tmp_value;
    }
    if (present_3) {
        if (Decode_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(dec, value.tci_StateInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_RMTC_Config_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RMTC_Config_r16_ExtGroup1(RMTC_Config_r16_ExtGroup1& value)
{
    if (value.has_rmtc_Bandwidth_r17) {
    }
    if (value.has_measDurationSymbols_v1700) {
    }
    if (value.has_ref_SCS_CP_v1700) {
    }
    if (value.has_tci_StateInfo_r17) {
        Free_RMTC_Config_r16_ExtGroup1_Tci_StateInfo_r17(value.tci_StateInfo_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RMTC_Config_r16_ExtGroup2：ASN.1 RMTC_Config_r16_ExtGroup2；源文件第 7838 行；扩展添加组 [[ ]]。
// Encode_RMTC_Config_r16_ExtGroup2 只读不分配；Decode_RMTC_Config_r16_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_RMTC_Config_r16_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RMTC_Config_r16_ExtGroup2(Encoder& enc, const RMTC_Config_r16_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_ref_BWPId_r17);
    if (value.has_ref_BWPId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ref_BWPId_r17), 0, 4);
    }
    return enc.Error();
}

ErrorCode Decode_RMTC_Config_r16_ExtGroup2(Decoder& dec, RMTC_Config_r16_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.ref_BWPId_r17 = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_RMTC_Config_r16_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RMTC_Config_r16_ExtGroup2(RMTC_Config_r16_ExtGroup2& value)
{
    if (value.has_ref_BWPId_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// RMTC_Config_r16：ASN.1 RMTC-Config-r16；源文件第 7822 行；SEQUENCE。
// Encode_RMTC_Config_r16 只读不分配；Decode_RMTC_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_RMTC_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_RMTC_Config_r16(Encoder& enc, const RMTC_Config_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_rmtc_SubframeOffset_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.rmtc_Periodicity_r16), 0, 4);
    if (value.has_rmtc_SubframeOffset_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rmtc_SubframeOffset_r16), 0, 639);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.measDurationSymbols_r16), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.rmtc_Frequency_r16), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.ref_SCS_CP_r16), 0, 3);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_RMTC_Config_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_RMTC_Config_r16_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_RMTC_Config_r16(Decoder& dec, RMTC_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.rmtc_Periodicity_r16 = (RMTC_Config_r16_Rmtc_Periodicity_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.rmtc_SubframeOffset_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.measDurationSymbols_r16 = (RMTC_Config_r16_MeasDurationSymbols_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.rmtc_Frequency_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ref_SCS_CP_r16 = (RMTC_Config_r16_Ref_SCS_CP_r16)tmp_value;
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
    if (Decode_RMTC_Config_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_RMTC_Config_r16_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_RMTC_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RMTC_Config_r16(RMTC_Config_r16& value)
{
    if (value.has_rmtc_SubframeOffset_r16) {
    }
    if (value.has_extGroup1) {
        Free_RMTC_Config_r16_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_RMTC_Config_r16_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_RMTC_Config_r16：ASN.1 SetupRelease<RMTC-Config-r16>；源文件第 7730 行；CHOICE。
// Encode_SetupRelease_RMTC_Config_r16 只读不分配；Decode_SetupRelease_RMTC_Config_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_RMTC_Config_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_RMTC_Config_r16(Encoder& enc, const SetupRelease_RMTC_Config_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RMTC_Config_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_RMTC_Config_r16_Tag_setup:
        Encode_RMTC_Config_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RMTC_Config_r16(Decoder& dec, SetupRelease_RMTC_Config_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RMTC_Config_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RMTC_Config_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RMTC_Config_r16_Tag_setup: {
        if (Decode_RMTC_Config_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RMTC_Config_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RMTC_Config_r16(SetupRelease_RMTC_Config_r16& value)
{
    switch (value.tag) {
    case SetupRelease_RMTC_Config_r16_Tag_release:
        break;
    case SetupRelease_RMTC_Config_r16_Tag_setup:
        Free_RMTC_Config_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_T312_r16：ASN.1 SetupRelease<T312-r16>；源文件第 7731 行；CHOICE。
// Encode_SetupRelease_T312_r16 只读不分配；Decode_SetupRelease_T312_r16 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_T312_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_T312_r16(Encoder& enc, const SetupRelease_T312_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_T312_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_T312_r16_Tag_setup:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.setup), 0, 7);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_T312_r16(Decoder& dec, SetupRelease_T312_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_T312_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_T312_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_T312_r16_Tag_setup: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.setup = (T312_r16)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_T312_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_T312_r16(SetupRelease_T312_r16& value)
{
    switch (value.tag) {
    case SetupRelease_T312_r16_Tag_release:
        break;
    case SetupRelease_T312_r16_Tag_setup:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_ExtGroup2：ASN.1 MeasObjectNR_ExtGroup2；源文件第 7728 行；扩展添加组 [[ ]]。
// Encode_MeasObjectNR_ExtGroup2 只读不分配；Decode_MeasObjectNR_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_ExtGroup2(Encoder& enc, const MeasObjectNR_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_smtc3list_r16);
    enc.WriteBit(value.has_rmtc_Config_r16);
    enc.WriteBit(value.has_t312_r16);
    if (value.has_smtc3list_r16) {
        Encode_SSB_MTC3List_r16(enc, value.smtc3list_r16);
    }
    if (value.has_rmtc_Config_r16) {
        Encode_SetupRelease_RMTC_Config_r16(enc, value.rmtc_Config_r16);
    }
    if (value.has_t312_r16) {
        Encode_SetupRelease_T312_r16(enc, value.t312_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_ExtGroup2(Decoder& dec, MeasObjectNR_ExtGroup2& value)
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
        if (Decode_SSB_MTC3List_r16(dec, value.smtc3list_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_RMTC_Config_r16(dec, value.rmtc_Config_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SetupRelease_T312_r16(dec, value.t312_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_ExtGroup2(MeasObjectNR_ExtGroup2& value)
{
    if (value.has_smtc3list_r16) {
        Free_SSB_MTC3List_r16(value.smtc3list_r16);
    }
    if (value.has_rmtc_Config_r16) {
        Free_SetupRelease_RMTC_Config_r16(value.rmtc_Config_r16);
    }
    if (value.has_t312_r16) {
        Free_SetupRelease_T312_r16(value.t312_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_ExtGroup4：ASN.1 MeasObjectNR_ExtGroup4；源文件第 7741 行；扩展添加组 [[ ]]。
// Encode_MeasObjectNR_ExtGroup4 只读不分配；Decode_MeasObjectNR_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_ExtGroup4(Encoder& enc, const MeasObjectNR_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_associatedMeasGapSSB2_v1720);
    enc.WriteBit(value.has_associatedMeasGapCSIRS2_v1720);
    if (value.has_associatedMeasGapSSB2_v1720) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedMeasGapSSB2_v1720), 1, 8);
    }
    if (value.has_associatedMeasGapCSIRS2_v1720) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedMeasGapCSIRS2_v1720), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_ExtGroup4(Decoder& dec, MeasObjectNR_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.associatedMeasGapSSB2_v1720 = (MeasGapId_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.associatedMeasGapCSIRS2_v1720 = (MeasGapId_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_ExtGroup4(MeasObjectNR_ExtGroup4& value)
{
    if (value.has_associatedMeasGapSSB2_v1720) {
    }
    if (value.has_associatedMeasGapCSIRS2_v1720) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModListExt_v1710：ASN.1 CellsToAddModListExt-v1710；源文件第 7804 行；SEQUENCE OF。
// Encode_CellsToAddModListExt_v1710 只读不分配；Decode_CellsToAddModListExt_v1710 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModListExt_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModListExt_v1710(Encoder& enc, const CellsToAddModListExt_v1710& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CellsToAddModExt_v1710(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellsToAddModListExt_v1710(Decoder& dec, CellsToAddModListExt_v1710& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CellsToAddModExt_v1710*)std::malloc((std::size_t)value.count * sizeof(CellsToAddModExt_v1710));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddModExt_v1710));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CellsToAddModExt_v1710(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModListExt_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModListExt_v1710(CellsToAddModListExt_v1710& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CellsToAddModExt_v1710(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_ExtGroup3：ASN.1 MeasObjectNR_ExtGroup3；源文件第 7733 行；扩展添加组 [[ ]]。
// Encode_MeasObjectNR_ExtGroup3 只读不分配；Decode_MeasObjectNR_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_ExtGroup3(Encoder& enc, const MeasObjectNR_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_associatedMeasGapSSB_r17);
    enc.WriteBit(value.has_associatedMeasGapCSIRS_r17);
    enc.WriteBit(value.has_smtc4list_r17);
    enc.WriteBit(value.has_measCyclePSCell_r17);
    enc.WriteBit(value.has_cellsToAddModListExt_v1710);
    if (value.has_associatedMeasGapSSB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedMeasGapSSB_r17), 1, 8);
    }
    if (value.has_associatedMeasGapCSIRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.associatedMeasGapCSIRS_r17), 1, 8);
    }
    if (value.has_smtc4list_r17) {
        Encode_SSB_MTC4List_r17(enc, value.smtc4list_r17);
    }
    if (value.has_measCyclePSCell_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.measCyclePSCell_r17), 0, 7);
    }
    if (value.has_cellsToAddModListExt_v1710) {
        Encode_CellsToAddModListExt_v1710(enc, value.cellsToAddModListExt_v1710);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_ExtGroup3(Decoder& dec, MeasObjectNR_ExtGroup3& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.associatedMeasGapSSB_r17 = (MeasGapId_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.associatedMeasGapCSIRS_r17 = (MeasGapId_r17)tmp_value;
    }
    if (present_2) {
        if (Decode_SSB_MTC4List_r17(dec, value.smtc4list_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.measCyclePSCell_r17 = (MeasObjectNR_ExtGroup3_MeasCyclePSCell_r17)tmp_value;
    }
    if (present_4) {
        if (Decode_CellsToAddModListExt_v1710(dec, value.cellsToAddModListExt_v1710) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_ExtGroup3(MeasObjectNR_ExtGroup3& value)
{
    if (value.has_associatedMeasGapSSB_r17) {
    }
    if (value.has_associatedMeasGapCSIRS_r17) {
    }
    if (value.has_smtc4list_r17) {
        Free_SSB_MTC4List_r17(value.smtc4list_r17);
    }
    if (value.has_measCyclePSCell_r17) {
    }
    if (value.has_cellsToAddModListExt_v1710) {
        Free_CellsToAddModListExt_v1710(value.cellsToAddModListExt_v1710);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_PositionQCL_CellsToAddModList_r16：ASN.1 SSB-PositionQCL-CellsToAddModList-r16；源文件第 7843 行；SEQUENCE OF。
// Encode_SSB_PositionQCL_CellsToAddModList_r16 只读不分配；Decode_SSB_PositionQCL_CellsToAddModList_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_PositionQCL_CellsToAddModList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_PositionQCL_CellsToAddModList_r16(Encoder& enc, const SSB_PositionQCL_CellsToAddModList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SSB_PositionQCL_CellsToAddMod_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_PositionQCL_CellsToAddModList_r16(Decoder& dec, SSB_PositionQCL_CellsToAddModList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SSB_PositionQCL_CellsToAddMod_r16*)std::malloc((std::size_t)value.count * sizeof(SSB_PositionQCL_CellsToAddMod_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_PositionQCL_CellsToAddMod_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SSB_PositionQCL_CellsToAddMod_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SSB_PositionQCL_CellsToAddModList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_PositionQCL_CellsToAddModList_r16(SSB_PositionQCL_CellsToAddModList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SSB_PositionQCL_CellsToAddMod_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCI_List：ASN.1 PCI-List；源文件第 9112 行；SEQUENCE OF。
// Encode_PCI_List 只读不分配；Decode_PCI_List 可能 malloc（失败时内部已释放并清零）；Free_PCI_List 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCI_List(Encoder& enc, const PCI_List& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 1007);
    }
    return enc.Error();
}

ErrorCode Decode_PCI_List(Decoder& dec, PCI_List& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PhysCellId*)std::malloc((std::size_t)value.count * sizeof(PhysCellId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PhysCellId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
    value.items[i] = (PhysCellId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCI_List(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCI_List(PCI_List& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ConfigMobility_ExtGroup1：ASN.1 SSB_ConfigMobility_ExtGroup1；源文件第 7767 行；扩展添加组 [[ ]]。
// Encode_SSB_ConfigMobility_ExtGroup1 只读不分配；Decode_SSB_ConfigMobility_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_SSB_ConfigMobility_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ConfigMobility_ExtGroup1(Encoder& enc, const SSB_ConfigMobility_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_PositionQCL_Common_r16);
    enc.WriteBit(value.has_ssb_PositionQCL_CellsToAddModList_r16);
    enc.WriteBit(value.has_ssb_PositionQCL_CellsToRemoveList_r16);
    if (value.has_ssb_PositionQCL_Common_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_Common_r16), 0, 3);
    }
    if (value.has_ssb_PositionQCL_CellsToAddModList_r16) {
        Encode_SSB_PositionQCL_CellsToAddModList_r16(enc, value.ssb_PositionQCL_CellsToAddModList_r16);
    }
    if (value.has_ssb_PositionQCL_CellsToRemoveList_r16) {
        Encode_PCI_List(enc, value.ssb_PositionQCL_CellsToRemoveList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ConfigMobility_ExtGroup1(Decoder& dec, SSB_ConfigMobility_ExtGroup1& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_Common_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_SSB_PositionQCL_CellsToAddModList_r16(dec, value.ssb_PositionQCL_CellsToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PCI_List(dec, value.ssb_PositionQCL_CellsToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ConfigMobility_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ConfigMobility_ExtGroup1(SSB_ConfigMobility_ExtGroup1& value)
{
    if (value.has_ssb_PositionQCL_Common_r16) {
    }
    if (value.has_ssb_PositionQCL_CellsToAddModList_r16) {
        Free_SSB_PositionQCL_CellsToAddModList_r16(value.ssb_PositionQCL_CellsToAddModList_r16);
    }
    if (value.has_ssb_PositionQCL_CellsToRemoveList_r16) {
        Free_PCI_List(value.ssb_PositionQCL_CellsToRemoveList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_PositionQCL_CellList_r17：ASN.1 SSB-PositionQCL-CellList-r17；源文件第 7850 行；SEQUENCE OF。
// Encode_SSB_PositionQCL_CellList_r17 只读不分配；Decode_SSB_PositionQCL_CellList_r17 可能 malloc（失败时内部已释放并清零）；Free_SSB_PositionQCL_CellList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_PositionQCL_CellList_r17(Encoder& enc, const SSB_PositionQCL_CellList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SSB_PositionQCL_Cell_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_PositionQCL_CellList_r17(Decoder& dec, SSB_PositionQCL_CellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SSB_PositionQCL_Cell_r17*)std::malloc((std::size_t)value.count * sizeof(SSB_PositionQCL_Cell_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_PositionQCL_Cell_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SSB_PositionQCL_Cell_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SSB_PositionQCL_CellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_PositionQCL_CellList_r17(SSB_PositionQCL_CellList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SSB_PositionQCL_Cell_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SSB_PositionQCL_CellList_r17：ASN.1 SetupRelease<SSB-PositionQCL-CellList-r17>；源文件第 7775 行；CHOICE。
// Encode_SetupRelease_SSB_PositionQCL_CellList_r17 只读不分配；Decode_SetupRelease_SSB_PositionQCL_CellList_r17 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SSB_PositionQCL_CellList_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SSB_PositionQCL_CellList_r17(Encoder& enc, const SetupRelease_SSB_PositionQCL_CellList_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SSB_PositionQCL_CellList_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SSB_PositionQCL_CellList_r17_Tag_setup:
        Encode_SSB_PositionQCL_CellList_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SSB_PositionQCL_CellList_r17(Decoder& dec, SetupRelease_SSB_PositionQCL_CellList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SSB_PositionQCL_CellList_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SSB_PositionQCL_CellList_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SSB_PositionQCL_CellList_r17_Tag_setup: {
        if (Decode_SSB_PositionQCL_CellList_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SSB_PositionQCL_CellList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SSB_PositionQCL_CellList_r17(SetupRelease_SSB_PositionQCL_CellList_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SSB_PositionQCL_CellList_r17_Tag_release:
        break;
    case SetupRelease_SSB_PositionQCL_CellList_r17_Tag_setup:
        Free_SSB_PositionQCL_CellList_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ConfigMobility_ExtGroup2：ASN.1 SSB_ConfigMobility_ExtGroup2；源文件第 7772 行；扩展添加组 [[ ]]。
// Encode_SSB_ConfigMobility_ExtGroup2 只读不分配；Decode_SSB_ConfigMobility_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_SSB_ConfigMobility_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ConfigMobility_ExtGroup2(Encoder& enc, const SSB_ConfigMobility_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_deriveSSB_IndexFromCellInter_r17);
    enc.WriteBit(value.has_ssb_PositionQCL_Common_r17);
    enc.WriteBit(value.has_ssb_PositionQCL_Cells_r17);
    if (value.has_deriveSSB_IndexFromCellInter_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deriveSSB_IndexFromCellInter_r17), 0, 31);
    }
    if (value.has_ssb_PositionQCL_Common_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_Common_r17), 0, 1);
    }
    if (value.has_ssb_PositionQCL_Cells_r17) {
        Encode_SetupRelease_SSB_PositionQCL_CellList_r17(enc, value.ssb_PositionQCL_Cells_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ConfigMobility_ExtGroup2(Decoder& dec, SSB_ConfigMobility_ExtGroup2& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.deriveSSB_IndexFromCellInter_r17 = (ServCellIndex)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_Common_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    if (present_2) {
        if (Decode_SetupRelease_SSB_PositionQCL_CellList_r17(dec, value.ssb_PositionQCL_Cells_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ConfigMobility_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ConfigMobility_ExtGroup2(SSB_ConfigMobility_ExtGroup2& value)
{
    if (value.has_deriveSSB_IndexFromCellInter_r17) {
    }
    if (value.has_ssb_PositionQCL_Common_r17) {
    }
    if (value.has_ssb_PositionQCL_Cells_r17) {
        Free_SetupRelease_SSB_PositionQCL_CellList_r17(value.ssb_PositionQCL_Cells_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ConfigMobility_ExtGroup3：ASN.1 SSB_ConfigMobility_ExtGroup3；源文件第 7777 行；扩展添加组 [[ ]]。
// Encode_SSB_ConfigMobility_ExtGroup3 只读不分配；Decode_SSB_ConfigMobility_ExtGroup3 可能 malloc（失败时内部已释放并清零）；Free_SSB_ConfigMobility_ExtGroup3 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ConfigMobility_ExtGroup3(Encoder& enc, const SSB_ConfigMobility_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_cca_CellsToAddModList_r17);
    enc.WriteBit(value.has_cca_CellsToRemoveList_r17);
    if (value.has_cca_CellsToAddModList_r17) {
        Encode_PCI_List(enc, value.cca_CellsToAddModList_r17);
    }
    if (value.has_cca_CellsToRemoveList_r17) {
        Encode_PCI_List(enc, value.cca_CellsToRemoveList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ConfigMobility_ExtGroup3(Decoder& dec, SSB_ConfigMobility_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_PCI_List(dec, value.cca_CellsToAddModList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_PCI_List(dec, value.cca_CellsToRemoveList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ConfigMobility_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ConfigMobility_ExtGroup3(SSB_ConfigMobility_ExtGroup3& value)
{
    if (value.has_cca_CellsToAddModList_r17) {
        Free_PCI_List(value.cca_CellsToAddModList_r17);
    }
    if (value.has_cca_CellsToRemoveList_r17) {
        Free_PCI_List(value.cca_CellsToRemoveList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ToMeasureAltitudeBasedList_r18：ASN.1 SSB-ToMeasureAltitudeBasedList-r18；源文件第 7857 行；SEQUENCE OF。
// Encode_SSB_ToMeasureAltitudeBasedList_r18 只读不分配；Decode_SSB_ToMeasureAltitudeBasedList_r18 可能 malloc（失败时内部已释放并清零）；Free_SSB_ToMeasureAltitudeBasedList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ToMeasureAltitudeBasedList_r18(Encoder& enc, const SSB_ToMeasureAltitudeBasedList_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SSB_ToMeasureAltitudeBased_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ToMeasureAltitudeBasedList_r18(Decoder& dec, SSB_ToMeasureAltitudeBasedList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SSB_ToMeasureAltitudeBased_r18*)std::malloc((std::size_t)value.count * sizeof(SSB_ToMeasureAltitudeBased_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SSB_ToMeasureAltitudeBased_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SSB_ToMeasureAltitudeBased_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ToMeasureAltitudeBasedList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ToMeasureAltitudeBasedList_r18(SSB_ToMeasureAltitudeBasedList_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SSB_ToMeasureAltitudeBased_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SSB_ToMeasureAltitudeBasedList_r18：ASN.1 SetupRelease<SSB-ToMeasureAltitudeBasedList-r18>；源文件第 7782 行；CHOICE。
// Encode_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18 只读不分配；Decode_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(Encoder& enc, const SetupRelease_SSB_ToMeasureAltitudeBasedList_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_release:
        (void)0;
        break;
    case SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_setup:
        Encode_SSB_ToMeasureAltitudeBasedList_r18(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(Decoder& dec, SetupRelease_SSB_ToMeasureAltitudeBasedList_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_setup: {
        if (Decode_SSB_ToMeasureAltitudeBasedList_r18(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(SetupRelease_SSB_ToMeasureAltitudeBasedList_r18& value)
{
    switch (value.tag) {
    case SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_release:
        break;
    case SetupRelease_SSB_ToMeasureAltitudeBasedList_r18_Tag_setup:
        Free_SSB_ToMeasureAltitudeBasedList_r18(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ConfigMobility_ExtGroup4：ASN.1 SSB_ConfigMobility_ExtGroup4；源文件第 7781 行；扩展添加组 [[ ]]。
// Encode_SSB_ConfigMobility_ExtGroup4 只读不分配；Decode_SSB_ConfigMobility_ExtGroup4 可能 malloc（失败时内部已释放并清零）；Free_SSB_ConfigMobility_ExtGroup4 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ConfigMobility_ExtGroup4(Encoder& enc, const SSB_ConfigMobility_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_ToMeasureAltitudeBasedList_r18);
    if (value.has_ssb_ToMeasureAltitudeBasedList_r18) {
        Encode_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(enc, value.ssb_ToMeasureAltitudeBasedList_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ConfigMobility_ExtGroup4(Decoder& dec, SSB_ConfigMobility_ExtGroup4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(dec, value.ssb_ToMeasureAltitudeBasedList_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ConfigMobility_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ConfigMobility_ExtGroup4(SSB_ConfigMobility_ExtGroup4& value)
{
    if (value.has_ssb_ToMeasureAltitudeBasedList_r18) {
        Free_SetupRelease_SSB_ToMeasureAltitudeBasedList_r18(value.ssb_ToMeasureAltitudeBasedList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_SSB_ToMeasure：ASN.1 SetupRelease<SSB-ToMeasure>；源文件第 7763 行；CHOICE。
// Encode_SetupRelease_SSB_ToMeasure 只读不分配；Decode_SetupRelease_SSB_ToMeasure 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_SSB_ToMeasure 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_SSB_ToMeasure(Encoder& enc, const SetupRelease_SSB_ToMeasure& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SSB_ToMeasure_Tag_release:
        (void)0;
        break;
    case SetupRelease_SSB_ToMeasure_Tag_setup:
        Encode_SSB_ToMeasure(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SSB_ToMeasure(Decoder& dec, SetupRelease_SSB_ToMeasure& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SSB_ToMeasure_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SSB_ToMeasure_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SSB_ToMeasure_Tag_setup: {
        if (Decode_SSB_ToMeasure(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SSB_ToMeasure(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SSB_ToMeasure(SetupRelease_SSB_ToMeasure& value)
{
    switch (value.tag) {
    case SetupRelease_SSB_ToMeasure_Tag_release:
        break;
    case SetupRelease_SSB_ToMeasure_Tag_setup:
        Free_SSB_ToMeasure(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ConfigMobility：ASN.1 SSB-ConfigMobility；源文件第 7762 行；SEQUENCE。
// Encode_SSB_ConfigMobility 只读不分配；Decode_SSB_ConfigMobility 可能 malloc（失败时内部已释放并清零）；Free_SSB_ConfigMobility 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ConfigMobility(Encoder& enc, const SSB_ConfigMobility& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssb_ToMeasure);
    enc.WriteBit(value.has_ss_RSSI_Measurement);
    if (value.has_ssb_ToMeasure) {
        Encode_SetupRelease_SSB_ToMeasure(enc, value.ssb_ToMeasure);
    }
    enc.WriteBool(value.deriveSSB_IndexFromCell);
    if (value.has_ss_RSSI_Measurement) {
        Encode_SS_RSSI_Measurement(enc, value.ss_RSSI_Measurement);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(4u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        enc.WriteBit(value.has_extGroup3);
        enc.WriteBit(value.has_extGroup4);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_SSB_ConfigMobility_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_SSB_ConfigMobility_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_SSB_ConfigMobility_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_SSB_ConfigMobility_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ConfigMobility(Decoder& dec, SSB_ConfigMobility& value)
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
        if (Decode_SetupRelease_SSB_ToMeasure(dec, value.ssb_ToMeasure) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.deriveSSB_IndexFromCell = tmp_value;
    }
    if (present_1) {
        if (Decode_SS_RSSI_Measurement(dec, value.ss_RSSI_Measurement) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_SSB_ConfigMobility_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_SSB_ConfigMobility_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_SSB_ConfigMobility_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_SSB_ConfigMobility_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    Free_SSB_ConfigMobility(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ConfigMobility(SSB_ConfigMobility& value)
{
    if (value.has_ssb_ToMeasure) {
        Free_SetupRelease_SSB_ToMeasure(value.ssb_ToMeasure);
    }
    if (value.has_ss_RSSI_Measurement) {
        Free_SS_RSSI_Measurement(value.ss_RSSI_Measurement);
    }
    if (value.has_extGroup1) {
        Free_SSB_ConfigMobility_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_SSB_ConfigMobility_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_SSB_ConfigMobility_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_SSB_ConfigMobility_ExtGroup4(value.extGroup4);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SetupRelease_CSI_RS_ResourceConfigMobility：ASN.1 SetupRelease<CSI-RS-ResourceConfigMobility>；源文件第 7759 行；CHOICE。
// Encode_SetupRelease_CSI_RS_ResourceConfigMobility 只读不分配；Decode_SetupRelease_CSI_RS_ResourceConfigMobility 可能 malloc（失败时内部已释放并清零）；Free_SetupRelease_CSI_RS_ResourceConfigMobility 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SetupRelease_CSI_RS_ResourceConfigMobility(Encoder& enc, const SetupRelease_CSI_RS_ResourceConfigMobility& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_CSI_RS_ResourceConfigMobility_Tag_release:
        (void)0;
        break;
    case SetupRelease_CSI_RS_ResourceConfigMobility_Tag_setup:
        Encode_CSI_RS_ResourceConfigMobility(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_CSI_RS_ResourceConfigMobility(Decoder& dec, SetupRelease_CSI_RS_ResourceConfigMobility& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_CSI_RS_ResourceConfigMobility_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_CSI_RS_ResourceConfigMobility_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_CSI_RS_ResourceConfigMobility_Tag_setup: {
        if (Decode_CSI_RS_ResourceConfigMobility(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_CSI_RS_ResourceConfigMobility(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_CSI_RS_ResourceConfigMobility(SetupRelease_CSI_RS_ResourceConfigMobility& value)
{
    switch (value.tag) {
    case SetupRelease_CSI_RS_ResourceConfigMobility_Tag_release:
        break;
    case SetupRelease_CSI_RS_ResourceConfigMobility_Tag_setup:
        Free_CSI_RS_ResourceConfigMobility(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ReferenceSignalConfig：ASN.1 ReferenceSignalConfig；源文件第 7757 行；SEQUENCE。
// Encode_ReferenceSignalConfig 只读不分配；Decode_ReferenceSignalConfig 可能 malloc（失败时内部已释放并清零）；Free_ReferenceSignalConfig 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ReferenceSignalConfig(Encoder& enc, const ReferenceSignalConfig& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_ConfigMobility);
    enc.WriteBit(value.has_csi_rs_ResourceConfigMobility);
    if (value.has_ssb_ConfigMobility) {
        Encode_SSB_ConfigMobility(enc, value.ssb_ConfigMobility);
    }
    if (value.has_csi_rs_ResourceConfigMobility) {
        Encode_SetupRelease_CSI_RS_ResourceConfigMobility(enc, value.csi_rs_ResourceConfigMobility);
    }
    return enc.Error();
}

ErrorCode Decode_ReferenceSignalConfig(Decoder& dec, ReferenceSignalConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SSB_ConfigMobility(dec, value.ssb_ConfigMobility) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_CSI_RS_ResourceConfigMobility(dec, value.csi_rs_ResourceConfigMobility) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ReferenceSignalConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ReferenceSignalConfig(ReferenceSignalConfig& value)
{
    if (value.has_ssb_ConfigMobility) {
        Free_SSB_ConfigMobility(value.ssb_ConfigMobility);
    }
    if (value.has_csi_rs_ResourceConfigMobility) {
        Free_SetupRelease_CSI_RS_ResourceConfigMobility(value.csi_rs_ResourceConfigMobility);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Q_OffsetRangeList：ASN.1 Q-OffsetRangeList；源文件第 7786 行；SEQUENCE。
// Encode_Q_OffsetRangeList 只读不分配；Decode_Q_OffsetRangeList 可能 malloc（失败时内部已释放并清零）；Free_Q_OffsetRangeList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Q_OffsetRangeList(Encoder& enc, const Q_OffsetRangeList& value)
{
    (void)value;
    enc.WriteBit(value.rsrpOffsetSSB != Q_OffsetRange_dB0);
    enc.WriteBit(value.rsrqOffsetSSB != Q_OffsetRange_dB0);
    enc.WriteBit(value.sinrOffsetSSB != Q_OffsetRange_dB0);
    enc.WriteBit(value.rsrpOffsetCSI_RS != Q_OffsetRange_dB0);
    enc.WriteBit(value.rsrqOffsetCSI_RS != Q_OffsetRange_dB0);
    enc.WriteBit(value.sinrOffsetCSI_RS != Q_OffsetRange_dB0);
    if (value.rsrpOffsetSSB != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrpOffsetSSB), 0, 30);
    }
    if (value.rsrqOffsetSSB != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrqOffsetSSB), 0, 30);
    }
    if (value.sinrOffsetSSB != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sinrOffsetSSB), 0, 30);
    }
    if (value.rsrpOffsetCSI_RS != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrpOffsetCSI_RS), 0, 30);
    }
    if (value.rsrqOffsetCSI_RS != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrqOffsetCSI_RS), 0, 30);
    }
    if (value.sinrOffsetCSI_RS != Q_OffsetRange_dB0) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sinrOffsetCSI_RS), 0, 30);
    }
    return enc.Error();
}

ErrorCode Decode_Q_OffsetRangeList(Decoder& dec, Q_OffsetRangeList& value)
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
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.rsrpOffsetSSB = (Q_OffsetRange)tmp_value;
    } else {
        value.rsrpOffsetSSB = Q_OffsetRange_dB0;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.rsrqOffsetSSB = (Q_OffsetRange)tmp_value;
    } else {
        value.rsrqOffsetSSB = Q_OffsetRange_dB0;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sinrOffsetSSB = (Q_OffsetRange)tmp_value;
    } else {
        value.sinrOffsetSSB = Q_OffsetRange_dB0;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.rsrpOffsetCSI_RS = (Q_OffsetRange)tmp_value;
    } else {
        value.rsrpOffsetCSI_RS = Q_OffsetRange_dB0;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.rsrqOffsetCSI_RS = (Q_OffsetRange)tmp_value;
    } else {
        value.rsrqOffsetCSI_RS = Q_OffsetRange_dB0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.sinrOffsetCSI_RS = (Q_OffsetRange)tmp_value;
    } else {
        value.sinrOffsetCSI_RS = Q_OffsetRange_dB0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_Q_OffsetRangeList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Q_OffsetRangeList(Q_OffsetRangeList& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModList：ASN.1 CellsToAddModList；源文件第 7802 行；SEQUENCE OF。
// Encode_CellsToAddModList 只读不分配；Decode_CellsToAddModList 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModList(Encoder& enc, const CellsToAddModList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CellsToAddMod(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellsToAddModList(Decoder& dec, CellsToAddModList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CellsToAddMod*)std::malloc((std::size_t)value.count * sizeof(CellsToAddMod));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddMod));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CellsToAddMod(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModList(CellsToAddModList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CellsToAddMod(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// PCI_RangeIndexList：ASN.1 PCI-RangeIndexList；源文件第 9139 行；SEQUENCE OF。
// Encode_PCI_RangeIndexList 只读不分配；Decode_PCI_RangeIndexList 可能 malloc（失败时内部已释放并清零）；Free_PCI_RangeIndexList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_PCI_RangeIndexList(Encoder& enc, const PCI_RangeIndexList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 8);
    }
    return enc.Error();
}

ErrorCode Decode_PCI_RangeIndexList(Decoder& dec, PCI_RangeIndexList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (PCI_RangeIndex*)std::malloc((std::size_t)value.count * sizeof(PCI_RangeIndex));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(PCI_RangeIndex));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.items[i] = (PCI_RangeIndex)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_PCI_RangeIndexList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PCI_RangeIndexList(PCI_RangeIndexList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_MTC2：ASN.1 SSB-MTC2；源文件第 13549 行；SEQUENCE。
// Encode_SSB_MTC2 只读不分配；Decode_SSB_MTC2 可能 malloc（失败时内部已释放并清零）；Free_SSB_MTC2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_MTC2(Encoder& enc, const SSB_MTC2& value)
{
    (void)value;
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

ErrorCode Decode_SSB_MTC2(Decoder& dec, SSB_MTC2& value)
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
        value.periodicity = (SSB_MTC2_Periodicity)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_MTC2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_MTC2(SSB_MTC2& value)
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
// MeasObjectNR：ASN.1 MeasObjectNR；源文件第 7704 行；SEQUENCE。
// Encode_MeasObjectNR 只读不分配；Decode_MeasObjectNR 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR(Encoder& enc, const MeasObjectNR& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2 || value.has_extGroup3 || value.has_extGroup4 || value.has_extGroup5;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssbFrequency);
    enc.WriteBit(value.has_ssbSubcarrierSpacing);
    enc.WriteBit(value.has_smtc1);
    enc.WriteBit(value.has_smtc2);
    enc.WriteBit(value.has_refFreqCSI_RS);
    enc.WriteBit(value.has_absThreshSS_BlocksConsolidation);
    enc.WriteBit(value.has_absThreshCSI_RS_Consolidation);
    enc.WriteBit(value.has_nrofSS_BlocksToAverage);
    enc.WriteBit(value.has_nrofCSI_RS_ResourcesToAverage);
    enc.WriteBit(value.has_cellsToRemoveList);
    enc.WriteBit(value.has_cellsToAddModList);
    enc.WriteBit(value.has_excludedCellsToRemoveList);
    enc.WriteBit(value.has_excludedCellsToAddModList);
    enc.WriteBit(value.has_allowedCellsToRemoveList);
    enc.WriteBit(value.has_allowedCellsToAddModList);
    if (value.has_ssbFrequency) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbFrequency), 0, 3279165);
    }
    if (value.has_ssbSubcarrierSpacing) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing), 0, 7);
    }
    if (value.has_smtc1) {
        Encode_SSB_MTC(enc, value.smtc1);
    }
    if (value.has_smtc2) {
        Encode_SSB_MTC2(enc, value.smtc2);
    }
    if (value.has_refFreqCSI_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFreqCSI_RS), 0, 3279165);
    }
    Encode_ReferenceSignalConfig(enc, value.referenceSignalConfig);
    if (value.has_absThreshSS_BlocksConsolidation) {
        Encode_ThresholdNR(enc, value.absThreshSS_BlocksConsolidation);
    }
    if (value.has_absThreshCSI_RS_Consolidation) {
        Encode_ThresholdNR(enc, value.absThreshCSI_RS_Consolidation);
    }
    if (value.has_nrofSS_BlocksToAverage) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSS_BlocksToAverage), 2, 16);
    }
    if (value.has_nrofCSI_RS_ResourcesToAverage) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofCSI_RS_ResourcesToAverage), 2, 16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.quantityConfigIndex), 1, 2);
    Encode_Q_OffsetRangeList(enc, value.offsetMO);
    if (value.has_cellsToRemoveList) {
        Encode_PCI_List(enc, value.cellsToRemoveList);
    }
    if (value.has_cellsToAddModList) {
        Encode_CellsToAddModList(enc, value.cellsToAddModList);
    }
    if (value.has_excludedCellsToRemoveList) {
        Encode_PCI_RangeIndexList(enc, value.excludedCellsToRemoveList);
    }
    if (value.has_excludedCellsToAddModList) {
enc.WriteConstrainedLength(value.excludedCellsToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.excludedCellsToAddModList_count; ++i) {
    Encode_PCI_RangeElement(enc, value.excludedCellsToAddModList_items[i]);
}
    }
    if (value.has_allowedCellsToRemoveList) {
        Encode_PCI_RangeIndexList(enc, value.allowedCellsToRemoveList);
    }
    if (value.has_allowedCellsToAddModList) {
enc.WriteConstrainedLength(value.allowedCellsToAddModList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.allowedCellsToAddModList_count; ++i) {
    Encode_PCI_RangeElement(enc, value.allowedCellsToAddModList_items[i]);
}
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
    Encode_MeasObjectNR_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasObjectNR_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup3) {
    Encoder sub;
    Encode_MeasObjectNR_ExtGroup3(sub, value.extGroup3);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup4) {
    Encoder sub;
    Encode_MeasObjectNR_ExtGroup4(sub, value.extGroup4);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup5) {
    Encoder sub;
    Encode_MeasObjectNR_ExtGroup5(sub, value.extGroup5);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR(Decoder& dec, MeasObjectNR& value)
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
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssbFrequency = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    if (present_2) {
        if (Decode_SSB_MTC(dec, value.smtc1) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SSB_MTC2(dec, value.smtc2) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.refFreqCSI_RS = (ARFCN_ValueNR)tmp_value;
    }
    {
        if (Decode_ReferenceSignalConfig(dec, value.referenceSignalConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        if (Decode_ThresholdNR(dec, value.absThreshSS_BlocksConsolidation) != ErrorCode_Ok) { goto fail; }
    }
    if (present_6) {
        if (Decode_ThresholdNR(dec, value.absThreshCSI_RS_Consolidation) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.nrofSS_BlocksToAverage = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.nrofCSI_RS_ResourcesToAverage = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 2, tmp_value)) { goto fail; }
        value.quantityConfigIndex = (int64_t)tmp_value;
    }
    {
        if (Decode_Q_OffsetRangeList(dec, value.offsetMO) != ErrorCode_Ok) { goto fail; }
    }
    if (present_9) {
        if (Decode_PCI_List(dec, value.cellsToRemoveList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_10) {
        if (Decode_CellsToAddModList(dec, value.cellsToAddModList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_11) {
        if (Decode_PCI_RangeIndexList(dec, value.excludedCellsToRemoveList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_12) {
if (!dec.ReadConstrainedLength(0u, 0u, value.excludedCellsToAddModList_count)) { goto fail; }
if (value.excludedCellsToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.excludedCellsToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.excludedCellsToAddModList_count > 0u) {
    value.excludedCellsToAddModList_items = (PCI_RangeElement*)std::malloc((std::size_t)value.excludedCellsToAddModList_count * sizeof(PCI_RangeElement));
    if (value.excludedCellsToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.excludedCellsToAddModList_items, 0, (std::size_t)value.excludedCellsToAddModList_count * sizeof(PCI_RangeElement));
}
for (std::uint32_t i = 0; i < value.excludedCellsToAddModList_count; ++i) {
    if (Decode_PCI_RangeElement(dec, value.excludedCellsToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_13) {
        if (Decode_PCI_RangeIndexList(dec, value.allowedCellsToRemoveList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_14) {
if (!dec.ReadConstrainedLength(0u, 0u, value.allowedCellsToAddModList_count)) { goto fail; }
if (value.allowedCellsToAddModList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.allowedCellsToAddModList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.allowedCellsToAddModList_count > 0u) {
    value.allowedCellsToAddModList_items = (PCI_RangeElement*)std::malloc((std::size_t)value.allowedCellsToAddModList_count * sizeof(PCI_RangeElement));
    if (value.allowedCellsToAddModList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.allowedCellsToAddModList_items, 0, (std::size_t)value.allowedCellsToAddModList_count * sizeof(PCI_RangeElement));
}
for (std::uint32_t i = 0; i < value.allowedCellsToAddModList_count; ++i) {
    if (Decode_PCI_RangeElement(dec, value.allowedCellsToAddModList_items[i]) != ErrorCode_Ok) { goto fail; }
}
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
    if (Decode_MeasObjectNR_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MeasObjectNR_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    if (Decode_MeasObjectNR_ExtGroup3(sub, value.extGroup3) != ErrorCode_Ok) {
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
    if (Decode_MeasObjectNR_ExtGroup4(sub, value.extGroup4) != ErrorCode_Ok) {
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
    if (Decode_MeasObjectNR_ExtGroup5(sub, value.extGroup5) != ErrorCode_Ok) {
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
    Free_MeasObjectNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR(MeasObjectNR& value)
{
    if (value.has_ssbFrequency) {
    }
    if (value.has_ssbSubcarrierSpacing) {
    }
    if (value.has_smtc1) {
        Free_SSB_MTC(value.smtc1);
    }
    if (value.has_smtc2) {
        Free_SSB_MTC2(value.smtc2);
    }
    if (value.has_refFreqCSI_RS) {
    }
    Free_ReferenceSignalConfig(value.referenceSignalConfig);
    if (value.has_absThreshSS_BlocksConsolidation) {
        Free_ThresholdNR(value.absThreshSS_BlocksConsolidation);
    }
    if (value.has_absThreshCSI_RS_Consolidation) {
        Free_ThresholdNR(value.absThreshCSI_RS_Consolidation);
    }
    if (value.has_nrofSS_BlocksToAverage) {
    }
    if (value.has_nrofCSI_RS_ResourcesToAverage) {
    }
    Free_Q_OffsetRangeList(value.offsetMO);
    if (value.has_cellsToRemoveList) {
        Free_PCI_List(value.cellsToRemoveList);
    }
    if (value.has_cellsToAddModList) {
        Free_CellsToAddModList(value.cellsToAddModList);
    }
    if (value.has_excludedCellsToRemoveList) {
        Free_PCI_RangeIndexList(value.excludedCellsToRemoveList);
    }
    if (value.has_excludedCellsToAddModList) {
        if (value.excludedCellsToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.excludedCellsToAddModList_count; ++i) {
                Free_PCI_RangeElement(value.excludedCellsToAddModList_items[i]);
            }
            std::free(value.excludedCellsToAddModList_items);
            value.excludedCellsToAddModList_items = nullptr;
        }
        value.excludedCellsToAddModList_count = 0;
    }
    if (value.has_allowedCellsToRemoveList) {
        Free_PCI_RangeIndexList(value.allowedCellsToRemoveList);
    }
    if (value.has_allowedCellsToAddModList) {
        if (value.allowedCellsToAddModList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.allowedCellsToAddModList_count; ++i) {
                Free_PCI_RangeElement(value.allowedCellsToAddModList_items[i]);
            }
            std::free(value.allowedCellsToAddModList_items);
            value.allowedCellsToAddModList_items = nullptr;
        }
        value.allowedCellsToAddModList_count = 0;
    }
    if (value.has_extGroup1) {
        Free_MeasObjectNR_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasObjectNR_ExtGroup2(value.extGroup2);
    }
    if (value.has_extGroup3) {
        Free_MeasObjectNR_ExtGroup3(value.extGroup3);
    }
    if (value.has_extGroup4) {
        Free_MeasObjectNR_ExtGroup4(value.extGroup4);
    }
    if (value.has_extGroup5) {
        Free_MeasObjectNR_ExtGroup5(value.extGroup5);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddMod：ASN.1 CellsToAddMod；源文件第 7808 行；SEQUENCE。
// Encode_CellsToAddMod 只读不分配；Decode_CellsToAddMod 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddMod 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddMod(Encoder& enc, const CellsToAddMod& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    Encode_Q_OffsetRangeList(enc, value.cellIndividualOffset);
    return enc.Error();
}

ErrorCode Decode_CellsToAddMod(Decoder& dec, CellsToAddMod& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    {
        if (Decode_Q_OffsetRangeList(dec, value.cellIndividualOffset) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddMod(CellsToAddMod& value)
{
    Free_Q_OffsetRangeList(value.cellIndividualOffset);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModExt_v1710：ASN.1 CellsToAddModExt-v1710；源文件第 7813 行；SEQUENCE。
// Encode_CellsToAddModExt_v1710 只读不分配；Decode_CellsToAddModExt_v1710 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModExt_v1710 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModExt_v1710(Encoder& enc, const CellsToAddModExt_v1710& value)
{
    (void)value;
    enc.WriteBit(value.has_ntn_PolarizationDL_r17);
    enc.WriteBit(value.has_ntn_PolarizationUL_r17);
    if (value.has_ntn_PolarizationDL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_PolarizationDL_r17), 0, 2);
    }
    if (value.has_ntn_PolarizationUL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ntn_PolarizationUL_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_CellsToAddModExt_v1710(Decoder& dec, CellsToAddModExt_v1710& value)
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
        value.ntn_PolarizationDL_r17 = (CellsToAddModExt_v1710_Ntn_PolarizationDL_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.ntn_PolarizationUL_r17 = (CellsToAddModExt_v1710_Ntn_PolarizationUL_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModExt_v1710(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModExt_v1710(CellsToAddModExt_v1710& value)
{
    if (value.has_ntn_PolarizationDL_r17) {
    }
    if (value.has_ntn_PolarizationUL_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NTN_NeighbourCellInfo_r18：ASN.1 NTN-NeighbourCellInfo-r18；源文件第 7868 行；SEQUENCE。
// Encode_NTN_NeighbourCellInfo_r18 只读不分配；Decode_NTN_NeighbourCellInfo_r18 可能 malloc（失败时内部已释放并清零）；Free_NTN_NeighbourCellInfo_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NTN_NeighbourCellInfo_r18(Encoder& enc, const NTN_NeighbourCellInfo_r18& value)
{
    (void)value;
    Encode_EpochTime_r17(enc, value.epochTime_r18);
    Encode_EphemerisInfo_r17(enc, value.ephemerisInfo_r18);
    return enc.Error();
}

ErrorCode Decode_NTN_NeighbourCellInfo_r18(Decoder& dec, NTN_NeighbourCellInfo_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_EpochTime_r17(dec, value.epochTime_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_EphemerisInfo_r17(dec, value.ephemerisInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NTN_NeighbourCellInfo_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NTN_NeighbourCellInfo_r18(NTN_NeighbourCellInfo_r18& value)
{
    Free_EpochTime_r17(value.epochTime_r18);
    Free_EphemerisInfo_r17(value.ephemerisInfo_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModExt_v1800：ASN.1 CellsToAddModExt-v1800；源文件第 7818 行；SEQUENCE。
// Encode_CellsToAddModExt_v1800 只读不分配；Decode_CellsToAddModExt_v1800 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModExt_v1800 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModExt_v1800(Encoder& enc, const CellsToAddModExt_v1800& value)
{
    (void)value;
    enc.WriteBit(value.has_ntn_NeighbourCellInfo_r18);
    if (value.has_ntn_NeighbourCellInfo_r18) {
        Encode_NTN_NeighbourCellInfo_r18(enc, value.ntn_NeighbourCellInfo_r18);
    }
    return enc.Error();
}

ErrorCode Decode_CellsToAddModExt_v1800(Decoder& dec, CellsToAddModExt_v1800& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_NTN_NeighbourCellInfo_r18(dec, value.ntn_NeighbourCellInfo_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModExt_v1800(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModExt_v1800(CellsToAddModExt_v1800& value)
{
    if (value.has_ntn_NeighbourCellInfo_r18) {
        Free_NTN_NeighbourCellInfo_r18(value.ntn_NeighbourCellInfo_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_PositionQCL_CellsToAddMod_r16：ASN.1 SSB-PositionQCL-CellsToAddMod-r16；源文件第 7845 行；SEQUENCE。
// Encode_SSB_PositionQCL_CellsToAddMod_r16 只读不分配；Decode_SSB_PositionQCL_CellsToAddMod_r16 可能 malloc（失败时内部已释放并清零）；Free_SSB_PositionQCL_CellsToAddMod_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_PositionQCL_CellsToAddMod_r16(Encoder& enc, const SSB_PositionQCL_CellsToAddMod_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r16), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SSB_PositionQCL_CellsToAddMod_r16(Decoder& dec, SSB_PositionQCL_CellsToAddMod_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r16 = (SSB_PositionQCL_Relation_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_PositionQCL_CellsToAddMod_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_PositionQCL_CellsToAddMod_r16(SSB_PositionQCL_CellsToAddMod_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_PositionQCL_Cell_r17：ASN.1 SSB-PositionQCL-Cell-r17；源文件第 7852 行；SEQUENCE。
// Encode_SSB_PositionQCL_Cell_r17 只读不分配；Decode_SSB_PositionQCL_Cell_r17 可能 malloc（失败时内部已释放并清零）；Free_SSB_PositionQCL_Cell_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_PositionQCL_Cell_r17(Encoder& enc, const SSB_PositionQCL_Cell_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r17), 0, 1007);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PositionQCL_r17), 0, 1);
    return enc.Error();
}

ErrorCode Decode_SSB_PositionQCL_Cell_r17(Decoder& dec, SSB_PositionQCL_Cell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r17 = (PhysCellId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.ssb_PositionQCL_r17 = (SSB_PositionQCL_Relation_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_PositionQCL_Cell_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_PositionQCL_Cell_r17(SSB_PositionQCL_Cell_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18：ASN.1 altitudeRange-r18；源文件第 7860 行；SEQUENCE。
// Encode_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18 只读不分配；Decode_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18 可能 malloc（失败时内部已释放并清零）；Free_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(Encoder& enc, const SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_altitudeMin_r18);
    enc.WriteBit(value.has_altitudeMax_r18);
    enc.WriteBit(value.has_altitudeHyst_r18);
    if (value.has_altitudeMin_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.altitudeMin_r18), -420, 10000);
    }
    if (value.has_altitudeMax_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.altitudeMax_r18), -420, 10000);
    }
    if (value.has_altitudeHyst_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.altitudeHyst_r18), 0, 64);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(Decoder& dec, SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18& value)
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
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.altitudeMin_r18 = (Altitude_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-420, 10000, tmp_value)) { goto fail; }
        value.altitudeMax_r18 = (Altitude_r18)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 64, tmp_value)) { goto fail; }
        value.altitudeHyst_r18 = (HysteresisAltitude_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18& value)
{
    if (value.has_altitudeMin_r18) {
    }
    if (value.has_altitudeMax_r18) {
    }
    if (value.has_altitudeHyst_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SSB_ToMeasureAltitudeBased_r18：ASN.1 SSB-ToMeasureAltitudeBased-r18；源文件第 7859 行；SEQUENCE。
// Encode_SSB_ToMeasureAltitudeBased_r18 只读不分配；Decode_SSB_ToMeasureAltitudeBased_r18 可能 malloc（失败时内部已释放并清零）；Free_SSB_ToMeasureAltitudeBased_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SSB_ToMeasureAltitudeBased_r18(Encoder& enc, const SSB_ToMeasureAltitudeBased_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_ToMeasure_r18);
    Encode_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(enc, value.altitudeRange_r18);
    if (value.has_ssb_ToMeasure_r18) {
        Encode_SSB_ToMeasure(enc, value.ssb_ToMeasure_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SSB_ToMeasureAltitudeBased_r18(Decoder& dec, SSB_ToMeasureAltitudeBased_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(dec, value.altitudeRange_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SSB_ToMeasure(dec, value.ssb_ToMeasure_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SSB_ToMeasureAltitudeBased_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SSB_ToMeasureAltitudeBased_r18(SSB_ToMeasureAltitudeBased_r18& value)
{
    Free_SSB_ToMeasureAltitudeBased_r18_AltitudeRange_r18(value.altitudeRange_r18);
    if (value.has_ssb_ToMeasure_r18) {
        Free_SSB_ToMeasure(value.ssb_ToMeasure_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// Tx_PoolMeasList_r16：ASN.1 Tx-PoolMeasList-r16；源文件第 7887 行；SEQUENCE OF。
// Encode_Tx_PoolMeasList_r16 只读不分配；Decode_Tx_PoolMeasList_r16 可能 malloc（失败时内部已释放并清零）；Free_Tx_PoolMeasList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_Tx_PoolMeasList_r16(Encoder& enc, const Tx_PoolMeasList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_Tx_PoolMeasList_r16(Decoder& dec, Tx_PoolMeasList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SL_ResourcePoolID_r16*)std::malloc((std::size_t)value.count * sizeof(SL_ResourcePoolID_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SL_ResourcePoolID_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
    value.items[i] = (SL_ResourcePoolID_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_Tx_PoolMeasList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_Tx_PoolMeasList_r16(Tx_PoolMeasList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_SL_r16：ASN.1 MeasObjectNR-SL-r16；源文件第 7876 行；SEQUENCE。
// Encode_MeasObjectNR_SL_r16 只读不分配；Decode_MeasObjectNR_SL_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_SL_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_SL_r16(Encoder& enc, const MeasObjectNR_SL_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_tx_PoolMeasToRemoveList_r16);
    enc.WriteBit(value.has_tx_PoolMeasToAddModList_r16);
    if (value.has_tx_PoolMeasToRemoveList_r16) {
        Encode_Tx_PoolMeasList_r16(enc, value.tx_PoolMeasToRemoveList_r16);
    }
    if (value.has_tx_PoolMeasToAddModList_r16) {
        Encode_Tx_PoolMeasList_r16(enc, value.tx_PoolMeasToAddModList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_SL_r16(Decoder& dec, MeasObjectNR_SL_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_Tx_PoolMeasList_r16(dec, value.tx_PoolMeasToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_Tx_PoolMeasList_r16(dec, value.tx_PoolMeasToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_SL_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_SL_r16(MeasObjectNR_SL_r16& value)
{
    if (value.has_tx_PoolMeasToRemoveList_r16) {
        Free_Tx_PoolMeasList_r16(value.tx_PoolMeasToRemoveList_r16);
    }
    if (value.has_tx_PoolMeasToAddModList_r16) {
        Free_Tx_PoolMeasList_r16(value.tx_PoolMeasToAddModList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectNR_SL_r18：ASN.1 MeasObjectNR-SL-r18；源文件第 7881 行；SEQUENCE。
// Encode_MeasObjectNR_SL_r18 只读不分配；Decode_MeasObjectNR_SL_r18 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectNR_SL_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectNR_SL_r18(Encoder& enc, const MeasObjectNR_SL_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_tx_PoolMeasToRemoveList_r18);
    enc.WriteBit(value.has_tx_PoolMeasToAddModList_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_Frequency_r18), 1, 8);
    if (value.has_tx_PoolMeasToRemoveList_r18) {
        Encode_Tx_PoolMeasList_r16(enc, value.tx_PoolMeasToRemoveList_r18);
    }
    if (value.has_tx_PoolMeasToAddModList_r18) {
        Encode_Tx_PoolMeasList_r16(enc, value.tx_PoolMeasToAddModList_r18);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectNR_SL_r18(Decoder& dec, MeasObjectNR_SL_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.sl_Frequency_r18 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_Tx_PoolMeasList_r16(dec, value.tx_PoolMeasToRemoveList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_Tx_PoolMeasList_r16(dec, value.tx_PoolMeasToAddModList_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectNR_SL_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectNR_SL_r18(MeasObjectNR_SL_r18& value)
{
    if (value.has_tx_PoolMeasToRemoveList_r18) {
        Free_Tx_PoolMeasList_r16(value.tx_PoolMeasToRemoveList_r18);
    }
    if (value.has_tx_PoolMeasToAddModList_r18) {
        Free_Tx_PoolMeasList_r16(value.tx_PoolMeasToAddModList_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectRxTxDiff_r17_Dl_Ref_r17：ASN.1 dl-Ref-r17；源文件第 7894 行；CHOICE。
// Encode_MeasObjectRxTxDiff_r17_Dl_Ref_r17 只读不分配；Decode_MeasObjectRxTxDiff_r17_Dl_Ref_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectRxTxDiff_r17_Dl_Ref_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectRxTxDiff_r17_Dl_Ref_r17(Encoder& enc, const MeasObjectRxTxDiff_r17_Dl_Ref_r17& value)
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
    case MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_prs_Ref_r17:
        (void)0;
        break;
    case MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_csi_RS_Ref_r17:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectRxTxDiff_r17_Dl_Ref_r17(Decoder& dec, MeasObjectRxTxDiff_r17_Dl_Ref_r17& value)
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
        value.tag = (MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag)(2 + extension_index);
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
    value.tag = (MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag)root_index;
    switch (value.tag) {
    case MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_prs_Ref_r17: {
        (void)0;
        break;
    }
    case MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_csi_RS_Ref_r17: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectRxTxDiff_r17_Dl_Ref_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectRxTxDiff_r17_Dl_Ref_r17(MeasObjectRxTxDiff_r17_Dl_Ref_r17& value)
{
    switch (value.tag) {
    case MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_prs_Ref_r17:
        break;
    case MeasObjectRxTxDiff_r17_Dl_Ref_r17_Tag_csi_RS_Ref_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectRxTxDiff_r17：ASN.1 MeasObjectRxTxDiff-r17；源文件第 7893 行；SEQUENCE。
// Encode_MeasObjectRxTxDiff_r17 只读不分配；Decode_MeasObjectRxTxDiff_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectRxTxDiff_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectRxTxDiff_r17(Encoder& enc, const MeasObjectRxTxDiff_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_dl_Ref_r17);
    if (value.has_dl_Ref_r17) {
        Encode_MeasObjectRxTxDiff_r17_Dl_Ref_r17(enc, value.dl_Ref_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectRxTxDiff_r17(Decoder& dec, MeasObjectRxTxDiff_r17& value)
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
        if (Decode_MeasObjectRxTxDiff_r17_Dl_Ref_r17(dec, value.dl_Ref_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectRxTxDiff_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectRxTxDiff_r17(MeasObjectRxTxDiff_r17& value)
{
    if (value.has_dl_Ref_r17) {
        Free_MeasObjectRxTxDiff_r17_Dl_Ref_r17(value.dl_Ref_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModListUTRA_FDD_r16：ASN.1 CellsToAddModListUTRA-FDD-r16；源文件第 7933 行；SEQUENCE OF。
// Encode_CellsToAddModListUTRA_FDD_r16 只读不分配；Decode_CellsToAddModListUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModListUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModListUTRA_FDD_r16(Encoder& enc, const CellsToAddModListUTRA_FDD_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_CellsToAddModUTRA_FDD_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellsToAddModListUTRA_FDD_r16(Decoder& dec, CellsToAddModListUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CellsToAddModUTRA_FDD_r16*)std::malloc((std::size_t)value.count * sizeof(CellsToAddModUTRA_FDD_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CellsToAddModUTRA_FDD_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_CellsToAddModUTRA_FDD_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModListUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModListUTRA_FDD_r16(CellsToAddModListUTRA_FDD_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_CellsToAddModUTRA_FDD_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UTRA_FDD_CellIndexList_r16：ASN.1 UTRA-FDD-CellIndexList-r16；源文件第 7940 行；SEQUENCE OF。
// Encode_UTRA_FDD_CellIndexList_r16 只读不分配；Decode_UTRA_FDD_CellIndexList_r16 可能 malloc（失败时内部已释放并清零）；Free_UTRA_FDD_CellIndexList_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UTRA_FDD_CellIndexList_r16(Encoder& enc, const UTRA_FDD_CellIndexList_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 1, 32);
    }
    return enc.Error();
}

ErrorCode Decode_UTRA_FDD_CellIndexList_r16(Decoder& dec, UTRA_FDD_CellIndexList_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (UTRA_FDD_CellIndex_r16*)std::malloc((std::size_t)value.count * sizeof(UTRA_FDD_CellIndex_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(UTRA_FDD_CellIndex_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
    value.items[i] = (UTRA_FDD_CellIndex_r16)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_UTRA_FDD_CellIndexList_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UTRA_FDD_CellIndexList_r16(UTRA_FDD_CellIndexList_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectUTRA_FDD_r16：ASN.1 MeasObjectUTRA-FDD-r16；源文件第 7925 行；SEQUENCE。
// Encode_MeasObjectUTRA_FDD_r16 只读不分配；Decode_MeasObjectUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectUTRA_FDD_r16(Encoder& enc, const MeasObjectUTRA_FDD_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_utra_FDD_Q_OffsetRange_r16);
    enc.WriteBit(value.has_cellsToRemoveList_r16);
    enc.WriteBit(value.has_cellsToAddModList_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 16383);
    if (value.has_utra_FDD_Q_OffsetRange_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.utra_FDD_Q_OffsetRange_r16), 0, 30);
    }
    if (value.has_cellsToRemoveList_r16) {
        Encode_UTRA_FDD_CellIndexList_r16(enc, value.cellsToRemoveList_r16);
    }
    if (value.has_cellsToAddModList_r16) {
        Encode_CellsToAddModListUTRA_FDD_r16(enc, value.cellsToAddModList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectUTRA_FDD_r16(Decoder& dec, MeasObjectUTRA_FDD_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 16383, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueUTRA_FDD_r16)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 30, tmp_value)) { goto fail; }
        value.utra_FDD_Q_OffsetRange_r16 = (UTRA_FDD_Q_OffsetRange_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_UTRA_FDD_CellIndexList_r16(dec, value.cellsToRemoveList_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_CellsToAddModListUTRA_FDD_r16(dec, value.cellsToAddModList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectUTRA_FDD_r16(MeasObjectUTRA_FDD_r16& value)
{
    if (value.has_utra_FDD_Q_OffsetRange_r16) {
    }
    if (value.has_cellsToRemoveList_r16) {
        Free_UTRA_FDD_CellIndexList_r16(value.cellsToRemoveList_r16);
    }
    if (value.has_cellsToAddModList_r16) {
        Free_CellsToAddModListUTRA_FDD_r16(value.cellsToAddModList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_MeasObject_r16：ASN.1 SL-MeasObject-r16；源文件第 22648 行；SEQUENCE。
// Encode_SL_MeasObject_r16 只读不分配；Decode_SL_MeasObject_r16 可能 malloc（失败时内部已释放并清零）；Free_SL_MeasObject_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_MeasObject_r16(Encoder& enc, const SL_MeasObject_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.frequencyInfoSL_r16), 0, 3279165);
    return enc.Error();
}

ErrorCode Decode_SL_MeasObject_r16(Decoder& dec, SL_MeasObject_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.frequencyInfoSL_r16 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_MeasObject_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_MeasObject_r16(SL_MeasObject_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectToAddMod_MeasObject：ASN.1 measObject；源文件第 7909 行；CHOICE。
// Encode_MeasObjectToAddMod_MeasObject 只读不分配；Decode_MeasObjectToAddMod_MeasObject 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectToAddMod_MeasObject 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectToAddMod_MeasObject(Encoder& enc, const MeasObjectToAddMod_MeasObject& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 1) {
        if (choice_index >= 8) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 1));
        Encoder sub;
        switch (value.tag) {
        case MeasObjectToAddMod_MeasObject_Tag_measObjectEUTRA:
            Encode_MeasObjectEUTRA(sub, value.u.measObjectEUTRA);
            break;
        case MeasObjectToAddMod_MeasObject_Tag_measObjectUTRA_FDD_r16:
            Encode_MeasObjectUTRA_FDD_r16(sub, value.u.measObjectUTRA_FDD_r16);
            break;
        case MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r16:
            Encode_MeasObjectNR_SL_r16(sub, value.u.measObjectNR_SL_r16);
            break;
        case MeasObjectToAddMod_MeasObject_Tag_measObjectCLI_r16:
            Encode_MeasObjectCLI_r16(sub, value.u.measObjectCLI_r16);
            break;
        case MeasObjectToAddMod_MeasObject_Tag_measObjectRxTxDiff_r17:
            Encode_MeasObjectRxTxDiff_r17(sub, value.u.measObjectRxTxDiff_r17);
            break;
        case MeasObjectToAddMod_MeasObject_Tag_measObjectRelay_r17:
            Encode_SL_MeasObject_r16(sub, value.u.measObjectRelay_r17);
            break;
        case MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r18:
            Encode_MeasObjectNR_SL_r18(sub, value.u.measObjectNR_SL_r18);
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
    case MeasObjectToAddMod_MeasObject_Tag_measObjectNR:
        Encode_MeasObjectNR(enc, value.u.measObjectNR);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasObjectToAddMod_MeasObject(Decoder& dec, MeasObjectToAddMod_MeasObject& value)
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
        if (extension_index >= 7u) {
            dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
        }
        value.tag = (MeasObjectToAddMod_MeasObject_Tag)(1 + extension_index);
        std::vector<std::uint8_t> open_bytes;
        if (!dec.ReadOpenType(open_bytes)) { goto fail; }
        Decoder sub(open_bytes.data(), open_bytes.size());
        switch (value.tag) {
        case MeasObjectToAddMod_MeasObject_Tag_measObjectEUTRA: {
            if (Decode_MeasObjectEUTRA(sub, value.u.measObjectEUTRA) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasObjectToAddMod_MeasObject_Tag_measObjectUTRA_FDD_r16: {
            if (Decode_MeasObjectUTRA_FDD_r16(sub, value.u.measObjectUTRA_FDD_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r16: {
            if (Decode_MeasObjectNR_SL_r16(sub, value.u.measObjectNR_SL_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasObjectToAddMod_MeasObject_Tag_measObjectCLI_r16: {
            if (Decode_MeasObjectCLI_r16(sub, value.u.measObjectCLI_r16) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasObjectToAddMod_MeasObject_Tag_measObjectRxTxDiff_r17: {
            if (Decode_MeasObjectRxTxDiff_r17(sub, value.u.measObjectRxTxDiff_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasObjectToAddMod_MeasObject_Tag_measObjectRelay_r17: {
            if (Decode_SL_MeasObject_r16(sub, value.u.measObjectRelay_r17) != ErrorCode_Ok) { goto fail; }
            break;
        }
        case MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r18: {
            if (Decode_MeasObjectNR_SL_r18(sub, value.u.measObjectNR_SL_r18) != ErrorCode_Ok) { goto fail; }
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
    value.tag = (MeasObjectToAddMod_MeasObject_Tag)0;
    switch (value.tag) {
    case MeasObjectToAddMod_MeasObject_Tag_measObjectNR: {
        if (Decode_MeasObjectNR(dec, value.u.measObjectNR) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectToAddMod_MeasObject(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectToAddMod_MeasObject(MeasObjectToAddMod_MeasObject& value)
{
    switch (value.tag) {
    case MeasObjectToAddMod_MeasObject_Tag_measObjectNR:
        Free_MeasObjectNR(value.u.measObjectNR);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectEUTRA:
        Free_MeasObjectEUTRA(value.u.measObjectEUTRA);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectUTRA_FDD_r16:
        Free_MeasObjectUTRA_FDD_r16(value.u.measObjectUTRA_FDD_r16);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r16:
        Free_MeasObjectNR_SL_r16(value.u.measObjectNR_SL_r16);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectCLI_r16:
        Free_MeasObjectCLI_r16(value.u.measObjectCLI_r16);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectRxTxDiff_r17:
        Free_MeasObjectRxTxDiff_r17(value.u.measObjectRxTxDiff_r17);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectRelay_r17:
        Free_SL_MeasObject_r16(value.u.measObjectRelay_r17);
        break;
    case MeasObjectToAddMod_MeasObject_Tag_measObjectNR_SL_r18:
        Free_MeasObjectNR_SL_r18(value.u.measObjectNR_SL_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasObjectToAddMod：ASN.1 MeasObjectToAddMod；源文件第 7907 行；SEQUENCE。
// Encode_MeasObjectToAddMod 只读不分配；Decode_MeasObjectToAddMod 可能 malloc（失败时内部已释放并清零）；Free_MeasObjectToAddMod 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasObjectToAddMod(Encoder& enc, const MeasObjectToAddMod& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.measObjectId), 1, 64);
    Encode_MeasObjectToAddMod_MeasObject(enc, value.measObject);
    return enc.Error();
}

ErrorCode Decode_MeasObjectToAddMod(Decoder& dec, MeasObjectToAddMod& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.measObjectId = (MeasObjectId)tmp_value;
    }
    {
        if (Decode_MeasObjectToAddMod_MeasObject(dec, value.measObject) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectToAddMod(MeasObjectToAddMod& value)
{
    Free_MeasObjectToAddMod_MeasObject(value.measObject);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// CellsToAddModUTRA_FDD_r16：ASN.1 CellsToAddModUTRA-FDD-r16；源文件第 7935 行；SEQUENCE。
// Encode_CellsToAddModUTRA_FDD_r16 只读不分配；Decode_CellsToAddModUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_CellsToAddModUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_CellsToAddModUTRA_FDD_r16(Encoder& enc, const CellsToAddModUTRA_FDD_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.cellIndexUTRA_FDD_r16), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 511);
    return enc.Error();
}

ErrorCode Decode_CellsToAddModUTRA_FDD_r16(Decoder& dec, CellsToAddModUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.cellIndexUTRA_FDD_r16 = (UTRA_FDD_CellIndex_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.physCellId_r16 = (PhysCellIdUTRA_FDD_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CellsToAddModUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellsToAddModUTRA_FDD_r16(CellsToAddModUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultCellListSFTD_EUTRA：ASN.1 MeasResultCellListSFTD-EUTRA；源文件第 7959 行；SEQUENCE OF。
// Encode_MeasResultCellListSFTD_EUTRA 只读不分配；Decode_MeasResultCellListSFTD_EUTRA 可能 malloc（失败时内部已释放并清零）；Free_MeasResultCellListSFTD_EUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultCellListSFTD_EUTRA(Encoder& enc, const MeasResultCellListSFTD_EUTRA& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 3u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_MeasResultSFTD_EUTRA(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultCellListSFTD_EUTRA(Decoder& dec, MeasResultCellListSFTD_EUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 3u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 3u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (MeasResultSFTD_EUTRA*)std::malloc((std::size_t)value.count * sizeof(MeasResultSFTD_EUTRA));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(MeasResultSFTD_EUTRA));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_MeasResultSFTD_EUTRA(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultCellListSFTD_EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultCellListSFTD_EUTRA(MeasResultCellListSFTD_EUTRA& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_MeasResultSFTD_EUTRA(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR_ExtGroup1：ASN.1 MeasResultNR_ExtGroup1；源文件第 8034 行；扩展添加组 [[ ]]。
// Encode_MeasResultNR_ExtGroup1 只读不分配；Decode_MeasResultNR_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR_ExtGroup1(Encoder& enc, const MeasResultNR_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_cgi_Info);
    if (value.has_cgi_Info) {
        Encode_CGI_InfoNR(enc, value.cgi_Info);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_ExtGroup1(Decoder& dec, MeasResultNR_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CGI_InfoNR(dec, value.cgi_Info) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_ExtGroup1(MeasResultNR_ExtGroup1& value)
{
    if (value.has_cgi_Info) {
        Free_CGI_InfoNR(value.cgi_Info);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR_ExtGroup2_TriggeredEvent_r17：ASN.1 triggeredEvent-r17；源文件第 8040 行；SEQUENCE。
// Encode_MeasResultNR_ExtGroup2_TriggeredEvent_r17 只读不分配；Decode_MeasResultNR_ExtGroup2_TriggeredEvent_r17 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR_ExtGroup2_TriggeredEvent_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR_ExtGroup2_TriggeredEvent_r17(Encoder& enc, const MeasResultNR_ExtGroup2_TriggeredEvent_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_timeBetweenEvents_r17);
    enc.WriteBit(value.has_firstTriggeredEvent_r17);
    if (value.has_timeBetweenEvents_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.timeBetweenEvents_r17), 0, 1023);
    }
    if (value.has_firstTriggeredEvent_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.firstTriggeredEvent_r17), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_ExtGroup2_TriggeredEvent_r17(Decoder& dec, MeasResultNR_ExtGroup2_TriggeredEvent_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.timeBetweenEvents_r17 = (TimeBetweenEvent_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.firstTriggeredEvent_r17 = (MeasResultNR_ExtGroup2_TriggeredEvent_r17_FirstTriggeredEvent_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_ExtGroup2_TriggeredEvent_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_ExtGroup2_TriggeredEvent_r17(MeasResultNR_ExtGroup2_TriggeredEvent_r17& value)
{
    if (value.has_timeBetweenEvents_r17) {
    }
    if (value.has_firstTriggeredEvent_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR_ExtGroup2：ASN.1 MeasResultNR_ExtGroup2；源文件第 8037 行；扩展添加组 [[ ]]。
// Encode_MeasResultNR_ExtGroup2 只读不分配；Decode_MeasResultNR_ExtGroup2 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR_ExtGroup2 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR_ExtGroup2(Encoder& enc, const MeasResultNR_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_choCandidate_r17);
    enc.WriteBit(value.has_choConfig_r17);
    enc.WriteBit(value.has_triggeredEvent_r17);
    if (value.has_choCandidate_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.choCandidate_r17), 0, 0);
    }
    if (value.has_choConfig_r17) {
enc.WriteConstrainedLength(value.choConfig_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.choConfig_r17_count; ++i) {
    Encode_CondTriggerConfig_r16(enc, value.choConfig_r17_items[i]);
}
    }
    if (value.has_triggeredEvent_r17) {
        Encode_MeasResultNR_ExtGroup2_TriggeredEvent_r17(enc, value.triggeredEvent_r17);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_ExtGroup2(Decoder& dec, MeasResultNR_ExtGroup2& value)
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
        value.choCandidate_r17 = (MeasResultNR_ExtGroup2_ChoCandidate_r17)0;
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.choConfig_r17_count)) { goto fail; }
if (value.choConfig_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.choConfig_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.choConfig_r17_count > 0u) {
    value.choConfig_r17_items = (CondTriggerConfig_r16*)std::malloc((std::size_t)value.choConfig_r17_count * sizeof(CondTriggerConfig_r16));
    if (value.choConfig_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.choConfig_r17_items, 0, (std::size_t)value.choConfig_r17_count * sizeof(CondTriggerConfig_r16));
}
for (std::uint32_t i = 0; i < value.choConfig_r17_count; ++i) {
    if (Decode_CondTriggerConfig_r16(dec, value.choConfig_r17_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_2) {
        if (Decode_MeasResultNR_ExtGroup2_TriggeredEvent_r17(dec, value.triggeredEvent_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_ExtGroup2(MeasResultNR_ExtGroup2& value)
{
    if (value.has_choCandidate_r17) {
    }
    if (value.has_choConfig_r17) {
        if (value.choConfig_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.choConfig_r17_count; ++i) {
                Free_CondTriggerConfig_r16(value.choConfig_r17_items[i]);
            }
            std::free(value.choConfig_r17_items);
            value.choConfig_r17_items = nullptr;
        }
        value.choConfig_r17_count = 0;
    }
    if (value.has_triggeredEvent_r17) {
        Free_MeasResultNR_ExtGroup2_TriggeredEvent_r17(value.triggeredEvent_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR_MeasResult_CellResults：ASN.1 measResult/cellResults；源文件第 8024 行；SEQUENCE。
// Encode_MeasResultNR_MeasResult_CellResults 只读不分配；Decode_MeasResultNR_MeasResult_CellResults 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR_MeasResult_CellResults 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR_MeasResult_CellResults(Encoder& enc, const MeasResultNR_MeasResult_CellResults& value)
{
    (void)value;
    enc.WriteBit(value.has_resultsSSB_Cell);
    enc.WriteBit(value.has_resultsCSI_RS_Cell);
    if (value.has_resultsSSB_Cell) {
        Encode_MeasQuantityResults(enc, value.resultsSSB_Cell);
    }
    if (value.has_resultsCSI_RS_Cell) {
        Encode_MeasQuantityResults(enc, value.resultsCSI_RS_Cell);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_MeasResult_CellResults(Decoder& dec, MeasResultNR_MeasResult_CellResults& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_MeasQuantityResults(dec, value.resultsSSB_Cell) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasQuantityResults(dec, value.resultsCSI_RS_Cell) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_MeasResult_CellResults(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_MeasResult_CellResults(MeasResultNR_MeasResult_CellResults& value)
{
    if (value.has_resultsSSB_Cell) {
        Free_MeasQuantityResults(value.resultsSSB_Cell);
    }
    if (value.has_resultsCSI_RS_Cell) {
        Free_MeasQuantityResults(value.resultsCSI_RS_Cell);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR_MeasResult_RsIndexResults：ASN.1 measResult/rsIndexResults；源文件第 8028 行；SEQUENCE。
// Encode_MeasResultNR_MeasResult_RsIndexResults 只读不分配；Decode_MeasResultNR_MeasResult_RsIndexResults 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR_MeasResult_RsIndexResults 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR_MeasResult_RsIndexResults(Encoder& enc, const MeasResultNR_MeasResult_RsIndexResults& value)
{
    (void)value;
    enc.WriteBit(value.has_resultsSSB_Indexes);
    enc.WriteBit(value.has_resultsCSI_RS_Indexes);
    if (value.has_resultsSSB_Indexes) {
        Encode_ResultsPerSSB_IndexList(enc, value.resultsSSB_Indexes);
    }
    if (value.has_resultsCSI_RS_Indexes) {
        Encode_ResultsPerCSI_RS_IndexList(enc, value.resultsCSI_RS_Indexes);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_MeasResult_RsIndexResults(Decoder& dec, MeasResultNR_MeasResult_RsIndexResults& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_ResultsPerSSB_IndexList(dec, value.resultsSSB_Indexes) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_ResultsPerCSI_RS_IndexList(dec, value.resultsCSI_RS_Indexes) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_MeasResult_RsIndexResults(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_MeasResult_RsIndexResults(MeasResultNR_MeasResult_RsIndexResults& value)
{
    if (value.has_resultsSSB_Indexes) {
        Free_ResultsPerSSB_IndexList(value.resultsSSB_Indexes);
    }
    if (value.has_resultsCSI_RS_Indexes) {
        Free_ResultsPerCSI_RS_IndexList(value.resultsCSI_RS_Indexes);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR_MeasResult：ASN.1 measResult；源文件第 8023 行；SEQUENCE。
// Encode_MeasResultNR_MeasResult 只读不分配；Decode_MeasResultNR_MeasResult 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR_MeasResult 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR_MeasResult(Encoder& enc, const MeasResultNR_MeasResult& value)
{
    (void)value;
    enc.WriteBit(value.has_rsIndexResults);
    Encode_MeasResultNR_MeasResult_CellResults(enc, value.cellResults);
    if (value.has_rsIndexResults) {
        Encode_MeasResultNR_MeasResult_RsIndexResults(enc, value.rsIndexResults);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR_MeasResult(Decoder& dec, MeasResultNR_MeasResult& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_MeasResultNR_MeasResult_CellResults(dec, value.cellResults) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultNR_MeasResult_RsIndexResults(dec, value.rsIndexResults) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultNR_MeasResult(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR_MeasResult(MeasResultNR_MeasResult& value)
{
    Free_MeasResultNR_MeasResult_CellResults(value.cellResults);
    if (value.has_rsIndexResults) {
        Free_MeasResultNR_MeasResult_RsIndexResults(value.rsIndexResults);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultNR：ASN.1 MeasResultNR；源文件第 8021 行；SEQUENCE。
// Encode_MeasResultNR 只读不分配；Decode_MeasResultNR 可能 malloc（失败时内部已释放并清零）；Free_MeasResultNR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultNR(Encoder& enc, const MeasResultNR& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_physCellId);
    if (value.has_physCellId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.physCellId), 0, 1007);
    }
    Encode_MeasResultNR_MeasResult(enc, value.measResult);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasResultNR_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_MeasResultNR_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultNR(Decoder& dec, MeasResultNR& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId = (PhysCellId)tmp_value;
    }
    {
        if (Decode_MeasResultNR_MeasResult(dec, value.measResult) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasResultNR_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_MeasResultNR_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_MeasResultNR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultNR(MeasResultNR& value)
{
    if (value.has_physCellId) {
    }
    Free_MeasResultNR_MeasResult(value.measResult);
    if (value.has_extGroup1) {
        Free_MeasResultNR_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_MeasResultNR_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultServMO：ASN.1 MeasResultServMO；源文件第 8012 行；SEQUENCE。
// Encode_MeasResultServMO 只读不分配；Decode_MeasResultServMO 可能 malloc（失败时内部已释放并清零）；Free_MeasResultServMO 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultServMO(Encoder& enc, const MeasResultServMO& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultBestNeighCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.servCellId), 0, 31);
    Encode_MeasResultNR(enc, value.measResultServingCell);
    if (value.has_measResultBestNeighCell) {
        Encode_MeasResultNR(enc, value.measResultBestNeighCell);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultServMO(Decoder& dec, MeasResultServMO& value)
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
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servCellId = (ServCellIndex)tmp_value;
    }
    {
        if (Decode_MeasResultNR(dec, value.measResultServingCell) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_MeasResultNR(dec, value.measResultBestNeighCell) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultServMO(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultServMO(MeasResultServMO& value)
{
    Free_MeasResultNR(value.measResultServingCell);
    if (value.has_measResultBestNeighCell) {
        Free_MeasResultNR(value.measResultBestNeighCell);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultEUTRA：ASN.1 MeasResultEUTRA；源文件第 8049 行；SEQUENCE。
// Encode_MeasResultEUTRA 只读不分配；Decode_MeasResultEUTRA 可能 malloc（失败时内部已释放并清零）；Free_MeasResultEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultEUTRA(Encoder& enc, const MeasResultEUTRA& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_cgi_Info);
    enc.WriteConstrainedInteger((std::int64_t)(value.eutra_PhysCellId), 0, 1007);
    Encode_MeasQuantityResultsEUTRA(enc, value.measResult);
    if (value.has_cgi_Info) {
        Encode_CGI_InfoEUTRA(enc, value.cgi_Info);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultEUTRA(Decoder& dec, MeasResultEUTRA& value)
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
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.eutra_PhysCellId = (PhysCellId)tmp_value;
    }
    {
        if (Decode_MeasQuantityResultsEUTRA(dec, value.measResult) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CGI_InfoEUTRA(dec, value.cgi_Info) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultEUTRA(MeasResultEUTRA& value)
{
    Free_MeasQuantityResultsEUTRA(value.measResult);
    if (value.has_cgi_Info) {
        Free_CGI_InfoEUTRA(value.cgi_Info);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ResultsPerSSB_Index：ASN.1 ResultsPerSSB-Index；源文件第 8073 行；SEQUENCE。
// Encode_ResultsPerSSB_Index 只读不分配；Decode_ResultsPerSSB_Index 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerSSB_Index 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerSSB_Index(Encoder& enc, const ResultsPerSSB_Index& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_Results);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Index), 0, 63);
    if (value.has_ssb_Results) {
        Encode_MeasQuantityResults(enc, value.ssb_Results);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerSSB_Index(Decoder& dec, ResultsPerSSB_Index& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_Index = (SSB_Index)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasQuantityResults(dec, value.ssb_Results) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerSSB_Index(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerSSB_Index(ResultsPerSSB_Index& value)
{
    if (value.has_ssb_Results) {
        Free_MeasQuantityResults(value.ssb_Results);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ResultsPerCSI_RS_Index：ASN.1 ResultsPerCSI-RS-Index；源文件第 8080 行；SEQUENCE。
// Encode_ResultsPerCSI_RS_Index 只读不分配；Decode_ResultsPerCSI_RS_Index 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerCSI_RS_Index 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerCSI_RS_Index(Encoder& enc, const ResultsPerCSI_RS_Index& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_RS_Results);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_Index), 0, 95);
    if (value.has_csi_RS_Results) {
        Encode_MeasQuantityResults(enc, value.csi_RS_Results);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerCSI_RS_Index(Decoder& dec, ResultsPerCSI_RS_Index& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 95, tmp_value)) { goto fail; }
        value.csi_RS_Index = (CSI_RS_Index)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasQuantityResults(dec, value.csi_RS_Results) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerCSI_RS_Index(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerCSI_RS_Index(ResultsPerCSI_RS_Index& value)
{
    if (value.has_csi_RS_Results) {
        Free_MeasQuantityResults(value.csi_RS_Results);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultUTRA_FDD_r16_MeasResult_r16：ASN.1 measResult-r16；源文件第 8092 行；SEQUENCE。
// Encode_MeasResultUTRA_FDD_r16_MeasResult_r16 只读不分配；Decode_MeasResultUTRA_FDD_r16_MeasResult_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultUTRA_FDD_r16_MeasResult_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultUTRA_FDD_r16_MeasResult_r16(Encoder& enc, const MeasResultUTRA_FDD_r16_MeasResult_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_utra_FDD_RSCP_r16);
    enc.WriteBit(value.has_utra_FDD_EcN0_r16);
    if (value.has_utra_FDD_RSCP_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.utra_FDD_RSCP_r16), -5, 91);
    }
    if (value.has_utra_FDD_EcN0_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.utra_FDD_EcN0_r16), 0, 49);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultUTRA_FDD_r16_MeasResult_r16(Decoder& dec, MeasResultUTRA_FDD_r16_MeasResult_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-5, 91, tmp_value)) { goto fail; }
        value.utra_FDD_RSCP_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 49, tmp_value)) { goto fail; }
        value.utra_FDD_EcN0_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultUTRA_FDD_r16_MeasResult_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultUTRA_FDD_r16_MeasResult_r16(MeasResultUTRA_FDD_r16_MeasResult_r16& value)
{
    if (value.has_utra_FDD_RSCP_r16) {
    }
    if (value.has_utra_FDD_EcN0_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultUTRA_FDD_r16：ASN.1 MeasResultUTRA-FDD-r16；源文件第 8090 行；SEQUENCE。
// Encode_MeasResultUTRA_FDD_r16 只读不分配；Decode_MeasResultUTRA_FDD_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultUTRA_FDD_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultUTRA_FDD_r16(Encoder& enc, const MeasResultUTRA_FDD_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 511);
    Encode_MeasResultUTRA_FDD_r16_MeasResult_r16(enc, value.measResult_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultUTRA_FDD_r16(Decoder& dec, MeasResultUTRA_FDD_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.physCellId_r16 = (PhysCellIdUTRA_FDD_r16)tmp_value;
    }
    {
        if (Decode_MeasResultUTRA_FDD_r16_MeasResult_r16(dec, value.measResult_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultUTRA_FDD_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultUTRA_FDD_r16(MeasResultUTRA_FDD_r16& value)
{
    Free_MeasResultUTRA_FDD_r16_MeasResult_r16(value.measResult_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSRS_RSRP_r16：ASN.1 MeasResultSRS-RSRP-r16；源文件第 8110 行；SEQUENCE。
// Encode_MeasResultSRS_RSRP_r16 只读不分配；Decode_MeasResultSRS_RSRP_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSRS_RSRP_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSRS_RSRP_r16(Encoder& enc, const MeasResultSRS_RSRP_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_ResourceId_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.srs_RSRP_Result_r16), 0, 98);
    return enc.Error();
}

ErrorCode Decode_MeasResultSRS_RSRP_r16(Decoder& dec, MeasResultSRS_RSRP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.srs_ResourceId_r16 = (SRS_ResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 98, tmp_value)) { goto fail; }
        value.srs_RSRP_Result_r16 = (SRS_RSRP_Range_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSRS_RSRP_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSRS_RSRP_r16(MeasResultSRS_RSRP_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultCLI_RSSI_r16：ASN.1 MeasResultCLI-RSSI-r16；源文件第 8117 行；SEQUENCE。
// Encode_MeasResultCLI_RSSI_r16 只读不分配；Decode_MeasResultCLI_RSSI_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultCLI_RSSI_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultCLI_RSSI_r16(Encoder& enc, const MeasResultCLI_RSSI_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.rssi_ResourceId_r16), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.cli_RSSI_Result_r16), 0, 76);
    return enc.Error();
}

ErrorCode Decode_MeasResultCLI_RSSI_r16(Decoder& dec, MeasResultCLI_RSSI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.rssi_ResourceId_r16 = (RSSI_ResourceId_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 76, tmp_value)) { goto fail; }
        value.cli_RSSI_Result_r16 = (CLI_RSSI_Range_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultCLI_RSSI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultCLI_RSSI_r16(MeasResultCLI_RSSI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_PDCP_DelayValueResult_r16：ASN.1 UL-PDCP-DelayValueResult-r16；源文件第 8124 行；SEQUENCE。
// Encode_UL_PDCP_DelayValueResult_r16 只读不分配；Decode_UL_PDCP_DelayValueResult_r16 可能 malloc（失败时内部已释放并清零）；Free_UL_PDCP_DelayValueResult_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_PDCP_DelayValueResult_r16(Encoder& enc, const UL_PDCP_DelayValueResult_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.drb_Id_r16), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.averageDelay_r16), 0, 10000);
    return enc.Error();
}

ErrorCode Decode_UL_PDCP_DelayValueResult_r16(Decoder& dec, UL_PDCP_DelayValueResult_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.drb_Id_r16 = (DRB_Identity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10000, tmp_value)) { goto fail; }
        value.averageDelay_r16 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_PDCP_DelayValueResult_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_PDCP_DelayValueResult_r16(UL_PDCP_DelayValueResult_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// UL_PDCP_ExcessDelayResult_r17：ASN.1 UL-PDCP-ExcessDelayResult-r17；源文件第 8132 行；SEQUENCE。
// Encode_UL_PDCP_ExcessDelayResult_r17 只读不分配；Decode_UL_PDCP_ExcessDelayResult_r17 可能 malloc（失败时内部已释放并清零）；Free_UL_PDCP_ExcessDelayResult_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_UL_PDCP_ExcessDelayResult_r17(Encoder& enc, const UL_PDCP_ExcessDelayResult_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.drb_Id_r17), 1, 32);
    enc.WriteConstrainedInteger((std::int64_t)(value.excessDelay_r17), 0, 31);
    return enc.Error();
}

ErrorCode Decode_UL_PDCP_ExcessDelayResult_r17(Decoder& dec, UL_PDCP_ExcessDelayResult_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.drb_Id_r17 = (DRB_Identity)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.excessDelay_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_UL_PDCP_ExcessDelayResult_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_UL_PDCP_ExcessDelayResult_r17(UL_PDCP_ExcessDelayResult_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResult2EUTRA：ASN.1 MeasResult2EUTRA；源文件第 8143 行；SEQUENCE。
// Encode_MeasResult2EUTRA 只读不分配；Decode_MeasResult2EUTRA 可能 malloc（失败时内部已释放并清零）；Free_MeasResult2EUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResult2EUTRA(Encoder& enc, const MeasResult2EUTRA& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measResultServingCell);
    enc.WriteBit(value.has_measResultBestNeighCell);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 262143);
    if (value.has_measResultServingCell) {
        Encode_MeasResultEUTRA(enc, value.measResultServingCell);
    }
    if (value.has_measResultBestNeighCell) {
        Encode_MeasResultEUTRA(enc, value.measResultBestNeighCell);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResult2EUTRA(Decoder& dec, MeasResult2EUTRA& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreq = (ARFCN_ValueEUTRA)tmp_value;
    }
    if (present_0) {
        if (Decode_MeasResultEUTRA(dec, value.measResultServingCell) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_MeasResultEUTRA(dec, value.measResultBestNeighCell) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResult2EUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResult2EUTRA(MeasResult2EUTRA& value)
{
    if (value.has_measResultServingCell) {
        Free_MeasResultEUTRA(value.measResultServingCell);
    }
    if (value.has_measResultBestNeighCell) {
        Free_MeasResultEUTRA(value.measResultBestNeighCell);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResult2NR：ASN.1 MeasResult2NR；源文件第 8153 行；SEQUENCE。
// Encode_MeasResult2NR 只读不分配；Decode_MeasResult2NR 可能 malloc（失败时内部已释放并清零）；Free_MeasResult2NR 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResult2NR(Encoder& enc, const MeasResult2NR& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssbFrequency);
    enc.WriteBit(value.has_refFreqCSI_RS);
    enc.WriteBit(value.has_measResultServingCell);
    enc.WriteBit(value.has_measResultNeighCellListNR);
    if (value.has_ssbFrequency) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssbFrequency), 0, 3279165);
    }
    if (value.has_refFreqCSI_RS) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFreqCSI_RS), 0, 3279165);
    }
    if (value.has_measResultServingCell) {
        Encode_MeasResultNR(enc, value.measResultServingCell);
    }
    if (value.has_measResultNeighCellListNR) {
        Encode_MeasResultListNR(enc, value.measResultNeighCellListNR);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResult2NR(Decoder& dec, MeasResult2NR& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssbFrequency = (ARFCN_ValueNR)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.refFreqCSI_RS = (ARFCN_ValueNR)tmp_value;
    }
    if (present_2) {
        if (Decode_MeasResultNR(dec, value.measResultServingCell) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MeasResultListNR(dec, value.measResultNeighCellListNR) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResult2NR(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResult2NR(MeasResult2NR& value)
{
    if (value.has_ssbFrequency) {
    }
    if (value.has_refFreqCSI_RS) {
    }
    if (value.has_measResultServingCell) {
        Free_MeasResultNR(value.measResultServingCell);
    }
    if (value.has_measResultNeighCellListNR) {
        Free_MeasResultListNR(value.measResultNeighCellListNR);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCarrierIdleEUTRA_r16：ASN.1 MeasResultsPerCarrierIdleEUTRA-r16；源文件第 8169 行；SEQUENCE。
// Encode_MeasResultsPerCarrierIdleEUTRA_r16 只读不分配；Decode_MeasResultsPerCarrierIdleEUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCarrierIdleEUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCarrierIdleEUTRA_r16(Encoder& enc, const MeasResultsPerCarrierIdleEUTRA_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreqEUTRA_r16), 0, 262143);
enc.WriteConstrainedLength(value.measResultsPerCellListIdleEUTRA_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measResultsPerCellListIdleEUTRA_r16_count; ++i) {
    Encode_MeasResultsPerCellIdleEUTRA_r16(enc, value.measResultsPerCellListIdleEUTRA_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCarrierIdleEUTRA_r16(Decoder& dec, MeasResultsPerCarrierIdleEUTRA_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 262143, tmp_value)) { goto fail; }
        value.carrierFreqEUTRA_r16 = (ARFCN_ValueEUTRA)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.measResultsPerCellListIdleEUTRA_r16_count)) { goto fail; }
if (value.measResultsPerCellListIdleEUTRA_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measResultsPerCellListIdleEUTRA_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measResultsPerCellListIdleEUTRA_r16_count > 0u) {
    value.measResultsPerCellListIdleEUTRA_r16_items = (MeasResultsPerCellIdleEUTRA_r16*)std::malloc((std::size_t)value.measResultsPerCellListIdleEUTRA_r16_count * sizeof(MeasResultsPerCellIdleEUTRA_r16));
    if (value.measResultsPerCellListIdleEUTRA_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measResultsPerCellListIdleEUTRA_r16_items, 0, (std::size_t)value.measResultsPerCellListIdleEUTRA_r16_count * sizeof(MeasResultsPerCellIdleEUTRA_r16));
}
for (std::uint32_t i = 0; i < value.measResultsPerCellListIdleEUTRA_r16_count; ++i) {
    if (Decode_MeasResultsPerCellIdleEUTRA_r16(dec, value.measResultsPerCellListIdleEUTRA_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsPerCarrierIdleEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCarrierIdleEUTRA_r16(MeasResultsPerCarrierIdleEUTRA_r16& value)
{
    if (value.measResultsPerCellListIdleEUTRA_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.measResultsPerCellListIdleEUTRA_r16_count; ++i) {
            Free_MeasResultsPerCellIdleEUTRA_r16(value.measResultsPerCellListIdleEUTRA_r16_items[i]);
        }
        std::free(value.measResultsPerCellListIdleEUTRA_r16_items);
        value.measResultsPerCellListIdleEUTRA_r16_items = nullptr;
    }
    value.measResultsPerCellListIdleEUTRA_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16：ASN.1 measIdleResultEUTRA-r16；源文件第 8177 行；SEQUENCE。
// Encode_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16 只读不分配；Decode_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(Encoder& enc, const MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp_ResultEUTRA_r16);
    enc.WriteBit(value.has_rsrq_ResultEUTRA_r16);
    if (value.has_rsrp_ResultEUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ResultEUTRA_r16), 0, 97);
    }
    if (value.has_rsrq_ResultEUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrq_ResultEUTRA_r16), -30, 46);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(Decoder& dec, MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 97, tmp_value)) { goto fail; }
        value.rsrp_ResultEUTRA_r16 = (RSRP_RangeEUTRA)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 46, tmp_value)) { goto fail; }
        value.rsrq_ResultEUTRA_r16 = (RSRQ_RangeEUTRA_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16& value)
{
    if (value.has_rsrp_ResultEUTRA_r16) {
    }
    if (value.has_rsrq_ResultEUTRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCellIdleEUTRA_r16：ASN.1 MeasResultsPerCellIdleEUTRA-r16；源文件第 8175 行；SEQUENCE。
// Encode_MeasResultsPerCellIdleEUTRA_r16 只读不分配；Decode_MeasResultsPerCellIdleEUTRA_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCellIdleEUTRA_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCellIdleEUTRA_r16(Encoder& enc, const MeasResultsPerCellIdleEUTRA_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.eutra_PhysCellId_r16), 0, 503);
    Encode_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(enc, value.measIdleResultEUTRA_r16);
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCellIdleEUTRA_r16(Decoder& dec, MeasResultsPerCellIdleEUTRA_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.eutra_PhysCellId_r16 = (EUTRA_PhysCellId)tmp_value;
    }
    {
        if (Decode_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(dec, value.measIdleResultEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsPerCellIdleEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCellIdleEUTRA_r16(MeasResultsPerCellIdleEUTRA_r16& value)
{
    Free_MeasResultsPerCellIdleEUTRA_r16_MeasIdleResultEUTRA_r16(value.measIdleResultEUTRA_r16);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCarrierIdleNR_r16：ASN.1 MeasResultsPerCarrierIdleNR-r16；源文件第 8197 行；SEQUENCE。
// Encode_MeasResultsPerCarrierIdleNR_r16 只读不分配；Decode_MeasResultsPerCarrierIdleNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCarrierIdleNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCarrierIdleNR_r16(Encoder& enc, const MeasResultsPerCarrierIdleNR_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 3279165);
enc.WriteConstrainedLength(value.measResultsPerCellListIdleNR_r16_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.measResultsPerCellListIdleNR_r16_count; ++i) {
    Encode_MeasResultsPerCellIdleNR_r16(enc, value.measResultsPerCellListIdleNR_r16_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCarrierIdleNR_r16(Decoder& dec, MeasResultsPerCarrierIdleNR_r16& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.measResultsPerCellListIdleNR_r16_count)) { goto fail; }
if (value.measResultsPerCellListIdleNR_r16_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.measResultsPerCellListIdleNR_r16_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.measResultsPerCellListIdleNR_r16_count > 0u) {
    value.measResultsPerCellListIdleNR_r16_items = (MeasResultsPerCellIdleNR_r16*)std::malloc((std::size_t)value.measResultsPerCellListIdleNR_r16_count * sizeof(MeasResultsPerCellIdleNR_r16));
    if (value.measResultsPerCellListIdleNR_r16_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.measResultsPerCellListIdleNR_r16_items, 0, (std::size_t)value.measResultsPerCellListIdleNR_r16_count * sizeof(MeasResultsPerCellIdleNR_r16));
}
for (std::uint32_t i = 0; i < value.measResultsPerCellListIdleNR_r16_count; ++i) {
    if (Decode_MeasResultsPerCellIdleNR_r16(dec, value.measResultsPerCellListIdleNR_r16_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsPerCarrierIdleNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCarrierIdleNR_r16(MeasResultsPerCarrierIdleNR_r16& value)
{
    if (value.measResultsPerCellListIdleNR_r16_items != nullptr) {
        for (std::uint32_t i = 0; i < value.measResultsPerCellListIdleNR_r16_count; ++i) {
            Free_MeasResultsPerCellIdleNR_r16(value.measResultsPerCellListIdleNR_r16_items[i]);
        }
        std::free(value.measResultsPerCellListIdleNR_r16_items);
        value.measResultsPerCellListIdleNR_r16_items = nullptr;
    }
    value.measResultsPerCellListIdleNR_r16_count = 0;
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCellIdleNR_r16_ExtGroup1：ASN.1 MeasResultsPerCellIdleNR_r16_ExtGroup1；源文件第 8211 行；扩展添加组 [[ ]]。
// Encode_MeasResultsPerCellIdleNR_r16_ExtGroup1 只读不分配；Decode_MeasResultsPerCellIdleNR_r16_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCellIdleNR_r16_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCellIdleNR_r16_ExtGroup1(Encoder& enc, const MeasResultsPerCellIdleNR_r16_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_validityStatus_r18);
    if (value.has_validityStatus_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.validityStatus_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCellIdleNR_r16_ExtGroup1(Decoder& dec, MeasResultsPerCellIdleNR_r16_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.validityStatus_r18 = (MeasResultsPerCellIdleNR_r16_ExtGroup1_ValidityStatus_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsPerCellIdleNR_r16_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCellIdleNR_r16_ExtGroup1(MeasResultsPerCellIdleNR_r16_ExtGroup1& value)
{
    if (value.has_validityStatus_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16：ASN.1 measIdleResultNR-r16；源文件第 8205 行；SEQUENCE。
// Encode_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16 只读不分配；Decode_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(Encoder& enc, const MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_rsrp_Result_r16);
    enc.WriteBit(value.has_rsrq_Result_r16);
    enc.WriteBit(value.has_resultsSSB_Indexes_r16);
    if (value.has_rsrp_Result_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_Result_r16), 0, 127);
    }
    if (value.has_rsrq_Result_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrq_Result_r16), 0, 127);
    }
    if (value.has_resultsSSB_Indexes_r16) {
        Encode_ResultsPerSSB_IndexList_r16(enc, value.resultsSSB_Indexes_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(Decoder& dec, MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16& value)
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
        value.rsrp_Result_r16 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrq_Result_r16 = (RSRQ_Range)tmp_value;
    }
    if (present_2) {
        if (Decode_ResultsPerSSB_IndexList_r16(dec, value.resultsSSB_Indexes_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16& value)
{
    if (value.has_rsrp_Result_r16) {
    }
    if (value.has_rsrq_Result_r16) {
    }
    if (value.has_resultsSSB_Indexes_r16) {
        Free_ResultsPerSSB_IndexList_r16(value.resultsSSB_Indexes_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultsPerCellIdleNR_r16：ASN.1 MeasResultsPerCellIdleNR-r16；源文件第 8203 行；SEQUENCE。
// Encode_MeasResultsPerCellIdleNR_r16 只读不分配；Decode_MeasResultsPerCellIdleNR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultsPerCellIdleNR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultsPerCellIdleNR_r16(Encoder& enc, const MeasResultsPerCellIdleNR_r16& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.physCellId_r16), 0, 1007);
    Encode_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(enc, value.measIdleResultNR_r16);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasResultsPerCellIdleNR_r16_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultsPerCellIdleNR_r16(Decoder& dec, MeasResultsPerCellIdleNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.physCellId_r16 = (PhysCellId)tmp_value;
    }
    {
        if (Decode_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(dec, value.measIdleResultNR_r16) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasResultsPerCellIdleNR_r16_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MeasResultsPerCellIdleNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultsPerCellIdleNR_r16(MeasResultsPerCellIdleNR_r16& value)
{
    Free_MeasResultsPerCellIdleNR_r16_MeasIdleResultNR_r16(value.measIdleResultNR_r16);
    if (value.has_extGroup1) {
        Free_MeasResultsPerCellIdleNR_r16_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16：ASN.1 ssb-Results-r16；源文件第 8221 行；SEQUENCE。
// Encode_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16 只读不分配；Decode_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(Encoder& enc, const ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_RSRP_Result_r16);
    enc.WriteBit(value.has_ssb_RSRQ_Result_r16);
    if (value.has_ssb_RSRP_Result_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RSRP_Result_r16), 0, 127);
    }
    if (value.has_ssb_RSRQ_Result_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_RSRQ_Result_r16), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(Decoder& dec, ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16& value)
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
        value.ssb_RSRP_Result_r16 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.ssb_RSRQ_Result_r16 = (RSRQ_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16& value)
{
    if (value.has_ssb_RSRP_Result_r16) {
    }
    if (value.has_ssb_RSRQ_Result_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// ResultsPerSSB_IndexIdle_r16：ASN.1 ResultsPerSSB-IndexIdle-r16；源文件第 8219 行；SEQUENCE。
// Encode_ResultsPerSSB_IndexIdle_r16 只读不分配；Decode_ResultsPerSSB_IndexIdle_r16 可能 malloc（失败时内部已释放并清零）；Free_ResultsPerSSB_IndexIdle_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_ResultsPerSSB_IndexIdle_r16(Encoder& enc, const ResultsPerSSB_IndexIdle_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_ssb_Results_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Index_r16), 0, 63);
    if (value.has_ssb_Results_r16) {
        Encode_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(enc, value.ssb_Results_r16);
    }
    return enc.Error();
}

ErrorCode Decode_ResultsPerSSB_IndexIdle_r16(Decoder& dec, ResultsPerSSB_IndexIdle_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_Index_r16 = (SSB_Index)tmp_value;
    }
    if (present_0) {
        if (Decode_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(dec, value.ssb_Results_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ResultsPerSSB_IndexIdle_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ResultsPerSSB_IndexIdle_r16(ResultsPerSSB_IndexIdle_r16& value)
{
    if (value.has_ssb_Results_r16) {
        Free_ResultsPerSSB_IndexIdle_r16_Ssb_Results_r16(value.ssb_Results_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSCG_Failure_ExtGroup1：ASN.1 MeasResultSCG_Failure_ExtGroup1；源文件第 8241 行；扩展添加组 [[ ]]。
// Encode_MeasResultSCG_Failure_ExtGroup1 只读不分配；Decode_MeasResultSCG_Failure_ExtGroup1 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSCG_Failure_ExtGroup1 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSCG_Failure_ExtGroup1(Encoder& enc, const MeasResultSCG_Failure_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_locationInfo_r16);
    if (value.has_locationInfo_r16) {
        Encode_LocationInfo_r16(enc, value.locationInfo_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultSCG_Failure_ExtGroup1(Decoder& dec, MeasResultSCG_Failure_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_LocationInfo_r16(dec, value.locationInfo_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultSCG_Failure_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSCG_Failure_ExtGroup1(MeasResultSCG_Failure_ExtGroup1& value)
{
    if (value.has_locationInfo_r16) {
        Free_LocationInfo_r16(value.locationInfo_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultSCG_Failure：ASN.1 MeasResultSCG-Failure；源文件第 8238 行；SEQUENCE。
// Encode_MeasResultSCG_Failure 只读不分配；Decode_MeasResultSCG_Failure 可能 malloc（失败时内部已释放并清零）；Free_MeasResultSCG_Failure 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultSCG_Failure(Encoder& enc, const MeasResultSCG_Failure& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    Encode_MeasResultList2NR(enc, value.measResultPerMOList);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_MeasResultSCG_Failure_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_MeasResultSCG_Failure(Decoder& dec, MeasResultSCG_Failure& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        if (Decode_MeasResultList2NR(dec, value.measResultPerMOList) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_MeasResultSCG_Failure_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_MeasResultSCG_Failure(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultSCG_Failure(MeasResultSCG_Failure& value)
{
    Free_MeasResultList2NR(value.measResultPerMOList);
    if (value.has_extGroup1) {
        Free_MeasResultSCG_Failure_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasResultCBR_NR_r16：ASN.1 MeasResultCBR-NR-r16；源文件第 8264 行；SEQUENCE。
// Encode_MeasResultCBR_NR_r16 只读不分配；Decode_MeasResultCBR_NR_r16 可能 malloc（失败时内部已释放并清零）；Free_MeasResultCBR_NR_r16 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasResultCBR_NR_r16(Encoder& enc, const MeasResultCBR_NR_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_poolReportIdentity_r16), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.sl_CBR_ResultsNR_r16), 0, 100);
    return enc.Error();
}

ErrorCode Decode_MeasResultCBR_NR_r16(Decoder& dec, MeasResultCBR_NR_r16& value)
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
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.sl_poolReportIdentity_r16 = (SL_ResourcePoolID_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 100, tmp_value)) { goto fail; }
        value.sl_CBR_ResultsNR_r16 = (SL_CBR_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasResultCBR_NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasResultCBR_NR_r16(MeasResultCBR_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MeasTriggerQuantityEUTRA：ASN.1 MeasTriggerQuantityEUTRA；源文件第 8278 行；CHOICE。
// Encode_MeasTriggerQuantityEUTRA 只读不分配；Decode_MeasTriggerQuantityEUTRA 可能 malloc（失败时内部已释放并清零）；Free_MeasTriggerQuantityEUTRA 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MeasTriggerQuantityEUTRA(Encoder& enc, const MeasTriggerQuantityEUTRA& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case MeasTriggerQuantityEUTRA_Tag_rsrp:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rsrp), 0, 97);
        break;
    case MeasTriggerQuantityEUTRA_Tag_rsrq:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.rsrq), 0, 34);
        break;
    case MeasTriggerQuantityEUTRA_Tag_sinr:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sinr), 0, 127);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MeasTriggerQuantityEUTRA(Decoder& dec, MeasTriggerQuantityEUTRA& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (MeasTriggerQuantityEUTRA_Tag)root_index;
    switch (value.tag) {
    case MeasTriggerQuantityEUTRA_Tag_rsrp: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 97, tmp_value)) { goto fail; }
        value.u.rsrp = (RSRP_RangeEUTRA)tmp_value;
        break;
    }
    case MeasTriggerQuantityEUTRA_Tag_rsrq: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 34, tmp_value)) { goto fail; }
        value.u.rsrq = (RSRQ_RangeEUTRA)tmp_value;
        break;
    }
    case MeasTriggerQuantityEUTRA_Tag_sinr: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.sinr = (SINR_RangeEUTRA)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasTriggerQuantityEUTRA(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasTriggerQuantityEUTRA(MeasTriggerQuantityEUTRA& value)
{
    switch (value.tag) {
    case MeasTriggerQuantityEUTRA_Tag_rsrp:
        break;
    case MeasTriggerQuantityEUTRA_Tag_rsrq:
        break;
    case MeasTriggerQuantityEUTRA_Tag_sinr:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_NS_PmaxList：ASN.1 NR-NS-PmaxList；源文件第 8950 行；SEQUENCE OF。
// Encode_NR_NS_PmaxList 只读不分配；Decode_NR_NS_PmaxList 可能 malloc（失败时内部已释放并清零）；Free_NR_NS_PmaxList 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_NS_PmaxList(Encoder& enc, const NR_NS_PmaxList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_NS_PmaxValue(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NR_NS_PmaxList(Decoder& dec, NR_NS_PmaxList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_NS_PmaxValue*)std::malloc((std::size_t)value.count * sizeof(NR_NS_PmaxValue));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_NS_PmaxValue));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_NS_PmaxValue(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NR_NS_PmaxList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_NS_PmaxList(NR_NS_PmaxList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_NS_PmaxValue(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_MultiBandInfo：ASN.1 NR-MultiBandInfo；源文件第 8382 行；SEQUENCE。
// Encode_NR_MultiBandInfo 只读不分配；Decode_NR_MultiBandInfo 可能 malloc（失败时内部已释放并清零）；Free_NR_MultiBandInfo 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_MultiBandInfo(Encoder& enc, const NR_MultiBandInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_freqBandIndicatorNR);
    enc.WriteBit(value.has_nr_NS_PmaxList);
    if (value.has_freqBandIndicatorNR) {
        enc.WriteConstrainedInteger((std::int64_t)(value.freqBandIndicatorNR), 1, 1024);
    }
    if (value.has_nr_NS_PmaxList) {
        Encode_NR_NS_PmaxList(enc, value.nr_NS_PmaxList);
    }
    return enc.Error();
}

ErrorCode Decode_NR_MultiBandInfo(Decoder& dec, NR_MultiBandInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.freqBandIndicatorNR = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_1) {
        if (Decode_NR_NS_PmaxList(dec, value.nr_NS_PmaxList) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_MultiBandInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_MultiBandInfo(NR_MultiBandInfo& value)
{
    if (value.has_freqBandIndicatorNR) {
    }
    if (value.has_nr_NS_PmaxList) {
        Free_NR_NS_PmaxList(value.nr_NS_PmaxList);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_NS_PmaxList_v1760：ASN.1 NR-NS-PmaxList-v1760；源文件第 8957 行；SEQUENCE OF。
// Encode_NR_NS_PmaxList_v1760 只读不分配；Decode_NR_NS_PmaxList_v1760 可能 malloc（失败时内部已释放并清零）；Free_NR_NS_PmaxList_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_NS_PmaxList_v1760(Encoder& enc, const NR_NS_PmaxList_v1760& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_NS_PmaxValue_v1760(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NR_NS_PmaxList_v1760(Decoder& dec, NR_NS_PmaxList_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_NS_PmaxValue_v1760*)std::malloc((std::size_t)value.count * sizeof(NR_NS_PmaxValue_v1760));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_NS_PmaxValue_v1760));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_NS_PmaxValue_v1760(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NR_NS_PmaxList_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_NS_PmaxList_v1760(NR_NS_PmaxList_v1760& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_NS_PmaxValue_v1760(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_MultiBandInfo_v1760：ASN.1 NR-MultiBandInfo-v1760；源文件第 8389 行；SEQUENCE。
// Encode_NR_MultiBandInfo_v1760 只读不分配；Decode_NR_MultiBandInfo_v1760 可能 malloc（失败时内部已释放并清零）；Free_NR_MultiBandInfo_v1760 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_MultiBandInfo_v1760(Encoder& enc, const NR_MultiBandInfo_v1760& value)
{
    (void)value;
    enc.WriteBit(value.has_nr_NS_PmaxList_v1760);
    if (value.has_nr_NS_PmaxList_v1760) {
        Encode_NR_NS_PmaxList_v1760(enc, value.nr_NS_PmaxList_v1760);
    }
    return enc.Error();
}

ErrorCode Decode_NR_MultiBandInfo_v1760(Decoder& dec, NR_MultiBandInfo_v1760& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_NR_NS_PmaxList_v1760(dec, value.nr_NS_PmaxList_v1760) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_MultiBandInfo_v1760(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_MultiBandInfo_v1760(NR_MultiBandInfo_v1760& value)
{
    if (value.has_nr_NS_PmaxList_v1760) {
        Free_NR_NS_PmaxList_v1760(value.nr_NS_PmaxList_v1760);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_NS_PmaxListAerial_r18：ASN.1 NR-NS-PmaxListAerial-r18；源文件第 8963 行；SEQUENCE OF。
// Encode_NR_NS_PmaxListAerial_r18 只读不分配；Decode_NR_NS_PmaxListAerial_r18 可能 malloc（失败时内部已释放并清零）；Free_NR_NS_PmaxListAerial_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_NS_PmaxListAerial_r18(Encoder& enc, const NR_NS_PmaxListAerial_r18& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_NR_NS_PmaxValueAerial_r18(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_NR_NS_PmaxListAerial_r18(Decoder& dec, NR_NS_PmaxListAerial_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (NR_NS_PmaxValueAerial_r18*)std::malloc((std::size_t)value.count * sizeof(NR_NS_PmaxValueAerial_r18));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(NR_NS_PmaxValueAerial_r18));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_NR_NS_PmaxValueAerial_r18(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_NR_NS_PmaxListAerial_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_NS_PmaxListAerial_r18(NR_NS_PmaxListAerial_r18& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_NR_NS_PmaxValueAerial_r18(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NR_MultiBandInfoAerial_r18：ASN.1 NR-MultiBandInfoAerial-r18；源文件第 8395 行；SEQUENCE。
// Encode_NR_MultiBandInfoAerial_r18 只读不分配；Decode_NR_MultiBandInfoAerial_r18 可能 malloc（失败时内部已释放并清零）；Free_NR_MultiBandInfoAerial_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NR_MultiBandInfoAerial_r18(Encoder& enc, const NR_MultiBandInfoAerial_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_freqBandIndicatorNR_Aerial_r18);
    enc.WriteBit(value.has_nr_NS_PmaxListAerial_r18);
    if (value.has_freqBandIndicatorNR_Aerial_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.freqBandIndicatorNR_Aerial_r18), 1, 1024);
    }
    if (value.has_nr_NS_PmaxListAerial_r18) {
        Encode_NR_NS_PmaxListAerial_r18(enc, value.nr_NS_PmaxListAerial_r18);
    }
    return enc.Error();
}

ErrorCode Decode_NR_MultiBandInfoAerial_r18(Decoder& dec, NR_MultiBandInfoAerial_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 1024, tmp_value)) { goto fail; }
        value.freqBandIndicatorNR_Aerial_r18 = (FreqBandIndicatorNR)tmp_value;
    }
    if (present_1) {
        if (Decode_NR_NS_PmaxListAerial_r18(dec, value.nr_NS_PmaxListAerial_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_MultiBandInfoAerial_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_MultiBandInfoAerial_r18(NR_MultiBandInfoAerial_r18& value)
{
    if (value.has_freqBandIndicatorNR_Aerial_r18) {
    }
    if (value.has_nr_NS_PmaxListAerial_r18) {
        Free_NR_NS_PmaxListAerial_r18(value.nr_NS_PmaxListAerial_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// MUSIM_Gap_r17：ASN.1 MUSIM-Gap-r17；源文件第 8414 行；SEQUENCE。
// Encode_MUSIM_Gap_r17 只读不分配；Decode_MUSIM_Gap_r17 可能 malloc（失败时内部已释放并清零）；Free_MUSIM_Gap_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_MUSIM_Gap_r17(Encoder& enc, const MUSIM_Gap_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.musim_GapId_r17), 0, 2);
    Encode_MUSIM_GapInfo_r17(enc, value.musim_GapInfo_r17);
    return enc.Error();
}

ErrorCode Decode_MUSIM_Gap_r17(Decoder& dec, MUSIM_Gap_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.musim_GapId_r17 = (MUSIM_GapId_r17)tmp_value;
    }
    {
        if (Decode_MUSIM_GapInfo_r17(dec, value.musim_GapInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MUSIM_Gap_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MUSIM_Gap_r17(MUSIM_Gap_r17& value)
{
    Free_MUSIM_GapInfo_r17(value.musim_GapInfo_r17);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// SL_RemoteUE_RB_Identity_r17：ASN.1 SL-RemoteUE-RB-Identity-r17；源文件第 23329 行；CHOICE。
// Encode_SL_RemoteUE_RB_Identity_r17 只读不分配；Decode_SL_RemoteUE_RB_Identity_r17 可能 malloc（失败时内部已释放并清零）；Free_SL_RemoteUE_RB_Identity_r17 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_SL_RemoteUE_RB_Identity_r17(Encoder& enc, const SL_RemoteUE_RB_Identity_r17& value)
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
    case SL_RemoteUE_RB_Identity_r17_Tag_srb_Identity_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srb_Identity_r17), 0, 3);
        break;
    case SL_RemoteUE_RB_Identity_r17_Tag_drb_Identity_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.drb_Identity_r17), 1, 32);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SL_RemoteUE_RB_Identity_r17(Decoder& dec, SL_RemoteUE_RB_Identity_r17& value)
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
        value.tag = (SL_RemoteUE_RB_Identity_r17_Tag)(2 + extension_index);
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
    value.tag = (SL_RemoteUE_RB_Identity_r17_Tag)root_index;
    switch (value.tag) {
    case SL_RemoteUE_RB_Identity_r17_Tag_srb_Identity_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.srb_Identity_r17 = (int64_t)tmp_value;
        break;
    }
    case SL_RemoteUE_RB_Identity_r17_Tag_drb_Identity_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.u.drb_Identity_r17 = (DRB_Identity)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SL_RemoteUE_RB_Identity_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SL_RemoteUE_RB_Identity_r17(SL_RemoteUE_RB_Identity_r17& value)
{
    switch (value.tag) {
    case SL_RemoteUE_RB_Identity_r17_Tag_srb_Identity_r17:
        break;
    case SL_RemoteUE_RB_Identity_r17_Tag_drb_Identity_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// N3C_MappingConfig_r18：ASN.1 N3C-MappingConfig-r18；源文件第 8458 行；SEQUENCE。
// Encode_N3C_MappingConfig_r18 只读不分配；Decode_N3C_MappingConfig_r18 可能 malloc（失败时内部已释放并清零）；Free_N3C_MappingConfig_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_N3C_MappingConfig_r18(Encoder& enc, const N3C_MappingConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SL_RemoteUE_RB_Identity_r17(enc, value.n3c_RemoteUE_RB_Identity_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.n3c_RLC_ChannelUu_r18), 1, 32);
    return enc.Error();
}

ErrorCode Decode_N3C_MappingConfig_r18(Decoder& dec, N3C_MappingConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SL_RemoteUE_RB_Identity_r17(dec, value.n3c_RemoteUE_RB_Identity_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.n3c_RLC_ChannelUu_r18 = (Uu_RelayRLC_ChannelID_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_N3C_MappingConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_N3C_MappingConfig_r18(N3C_MappingConfig_r18& value)
{
    Free_SL_RemoteUE_RB_Identity_r17(value.n3c_RemoteUE_RB_Identity_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_AperiodicFwdTimeResource_r18：ASN.1 NCR-AperiodicFwdTimeResource-r18；源文件第 8497 行；SEQUENCE。
// Encode_NCR_AperiodicFwdTimeResource_r18 只读不分配；Decode_NCR_AperiodicFwdTimeResource_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_AperiodicFwdTimeResource_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_AperiodicFwdTimeResource_r18(Encoder& enc, const NCR_AperiodicFwdTimeResource_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.aperiodicFwdTimeRsrcId_r18), 0, 111);
    enc.WriteConstrainedInteger((std::int64_t)(value.slotOffsetAperiodic_r18), 0, 14);
    enc.WriteConstrainedInteger((std::int64_t)(value.symbolOffset_r18), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.durationInSymbols_r18), 1, 28);
    return enc.Error();
}

ErrorCode Decode_NCR_AperiodicFwdTimeResource_r18(Decoder& dec, NCR_AperiodicFwdTimeResource_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
        value.aperiodicFwdTimeRsrcId_r18 = (NCR_AperiodicFwdTimeResourceId_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 14, tmp_value)) { goto fail; }
        value.slotOffsetAperiodic_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.symbolOffset_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 28, tmp_value)) { goto fail; }
        value.durationInSymbols_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_AperiodicFwdTimeResource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_AperiodicFwdTimeResource_r18(NCR_AperiodicFwdTimeResource_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_SlotPeriodicityAndSlotOffset_r18：ASN.1 NCR-SlotPeriodicityAndSlotOffset-r18；源文件第 8531 行；CHOICE。
// Encode_NCR_SlotPeriodicityAndSlotOffset_r18 只读不分配；Decode_NCR_SlotPeriodicityAndSlotOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_SlotPeriodicityAndSlotOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_SlotPeriodicityAndSlotOffset_r18(Encoder& enc, const NCR_SlotPeriodicityAndSlotOffset_r18& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 23) {
        if (choice_index >= 23) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 23));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 22);
    switch (value.tag) {
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1:
        (void)0;
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2), 0, 1);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl4), 0, 3);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5), 0, 4);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl8), 0, 7);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10), 0, 9);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl16), 0, 15);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl20), 0, 19);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl32), 0, 31);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl40), 0, 39);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl64), 0, 63);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl80), 0, 79);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl128), 0, 127);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl160), 0, 159);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl256), 0, 255);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl320), 0, 319);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl512), 0, 511);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl640), 0, 639);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl1024), 0, 1023);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl1280), 0, 1279);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl2560), 0, 2559);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl5120), 0, 5119);
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.sl10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_SlotPeriodicityAndSlotOffset_r18(Decoder& dec, NCR_SlotPeriodicityAndSlotOffset_r18& value)
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
        value.tag = (NCR_SlotPeriodicityAndSlotOffset_r18_Tag)(23 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 22, root_index)) {
        goto fail;
    }
    value.tag = (NCR_SlotPeriodicityAndSlotOffset_r18_Tag)root_index;
    switch (value.tag) {
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1: {
        (void)0;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.sl2 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.sl4 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.sl5 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.sl8 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.sl10 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.sl16 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.sl20 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.sl32 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.sl40 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.sl64 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.sl80 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.sl128 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.sl160 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.sl256 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.sl320 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.sl512 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.sl640 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.sl1024 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.sl1280 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.sl2560 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.sl5120 = (int64_t)tmp_value;
        break;
    }
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.sl10240 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_SlotPeriodicityAndSlotOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_SlotPeriodicityAndSlotOffset_r18(NCR_SlotPeriodicityAndSlotOffset_r18& value)
{
    switch (value.tag) {
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl4:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl8:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl16:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl20:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl32:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl40:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl64:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl80:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl128:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl160:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl256:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl320:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl512:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl640:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1024:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl1280:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl2560:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl5120:
        break;
    case NCR_SlotPeriodicityAndSlotOffset_r18_Tag_sl10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_MsPeriodicityAndSlotOffset_r18：ASN.1 NCR-MsPeriodicityAndSlotOffset-r18；源文件第 8558 行；CHOICE。
// Encode_NCR_MsPeriodicityAndSlotOffset_r18 只读不分配；Decode_NCR_MsPeriodicityAndSlotOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_MsPeriodicityAndSlotOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_MsPeriodicityAndSlotOffset_r18(Encoder& enc, const NCR_MsPeriodicityAndSlotOffset_r18& value)
{
    const std::int64_t choice_index = (std::int64_t)(value.tag);
    if (choice_index < 0) {
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    if (choice_index >= 23) {
        if (choice_index >= 23) {
            return enc.Fail(ErrorCode_InvalidChoiceTag);
        }
        enc.WriteBit(true);
        enc.WriteNormallySmallNonNegative((std::uint32_t)(choice_index - 23));
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
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 22);
    switch (value.tag) {
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1), 0, 15);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2), 0, 31);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms4), 0, 63);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5), 0, 79);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms8), 0, 127);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 159);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms16), 0, 255);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 319);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 511);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 639);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 1023);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80), 0, 1279);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 2047);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160), 0, 2559);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 4095);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320), 0, 5119);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms512), 0, 8191);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640), 0, 10239);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1024), 0, 16383);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280), 0, 20479);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560), 0, 40959);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120), 0, 81919);
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10240), 0, 163839);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_MsPeriodicityAndSlotOffset_r18(Decoder& dec, NCR_MsPeriodicityAndSlotOffset_r18& value)
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
        value.tag = (NCR_MsPeriodicityAndSlotOffset_r18_Tag)(23 + extension_index);
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
    if (!dec.ReadConstrainedInteger(0, 22, root_index)) {
        goto fail;
    }
    value.tag = (NCR_MsPeriodicityAndSlotOffset_r18_Tag)root_index;
    switch (value.tag) {
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.ms1 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms2 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms4 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms5 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms8 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms16 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms80 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2047, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms160 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4095, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms320 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8191, tmp_value)) { goto fail; }
        value.u.ms512 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.ms640 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16383, tmp_value)) { goto fail; }
        value.u.ms1024 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.ms1280 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.u.ms2560 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 81919, tmp_value)) { goto fail; }
        value.u.ms5120 = (int64_t)tmp_value;
        break;
    }
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 163839, tmp_value)) { goto fail; }
        value.u.ms10240 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_MsPeriodicityAndSlotOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_MsPeriodicityAndSlotOffset_r18(NCR_MsPeriodicityAndSlotOffset_r18& value)
{
    switch (value.tag) {
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms4:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms8:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms16:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms20:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms32:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms40:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms64:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms80:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms128:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms160:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms256:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms320:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms512:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms640:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1024:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms1280:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms2560:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms5120:
        break;
    case NCR_MsPeriodicityAndSlotOffset_r18_Tag_ms10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_PeriodicityAndOffset_r18：ASN.1 NCR-PeriodicityAndOffset-r18；源文件第 8526 行；CHOICE。
// Encode_NCR_PeriodicityAndOffset_r18 只读不分配；Decode_NCR_PeriodicityAndOffset_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_PeriodicityAndOffset_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_PeriodicityAndOffset_r18(Encoder& enc, const NCR_PeriodicityAndOffset_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case NCR_PeriodicityAndOffset_r18_Tag_slot:
        Encode_NCR_SlotPeriodicityAndSlotOffset_r18(enc, value.u.slot);
        break;
    case NCR_PeriodicityAndOffset_r18_Tag_ms:
        Encode_NCR_MsPeriodicityAndSlotOffset_r18(enc, value.u.ms);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_PeriodicityAndOffset_r18(Decoder& dec, NCR_PeriodicityAndOffset_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (NCR_PeriodicityAndOffset_r18_Tag)root_index;
    switch (value.tag) {
    case NCR_PeriodicityAndOffset_r18_Tag_slot: {
        if (Decode_NCR_SlotPeriodicityAndSlotOffset_r18(dec, value.u.slot) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case NCR_PeriodicityAndOffset_r18_Tag_ms: {
        if (Decode_NCR_MsPeriodicityAndSlotOffset_r18(dec, value.u.ms) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_PeriodicityAndOffset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_PeriodicityAndOffset_r18(NCR_PeriodicityAndOffset_r18& value)
{
    switch (value.tag) {
    case NCR_PeriodicityAndOffset_r18_Tag_slot:
        Free_NCR_SlotPeriodicityAndSlotOffset_r18(value.u.slot);
        break;
    case NCR_PeriodicityAndOffset_r18_Tag_ms:
        Free_NCR_MsPeriodicityAndSlotOffset_r18(value.u.ms);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_PeriodicFwdResourceSet_r18：ASN.1 NCR-PeriodicFwdResourceSet-r18；源文件第 8588 行；SEQUENCE。
// Encode_NCR_PeriodicFwdResourceSet_r18 只读不分配；Decode_NCR_PeriodicFwdResourceSet_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_PeriodicFwdResourceSet_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_PeriodicFwdResourceSet_r18(Encoder& enc, const NCR_PeriodicFwdResourceSet_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_periodicFwdRsrcToAddModList_r18);
    enc.WriteBit(value.has_periodicFwdRsrcToReleaseList_r18);
    enc.WriteBit(value.has_referenceSCS_r18);
    enc.WriteBit(value.has_priorityFlag_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicFwdRsrcSetId_r18), 0, 31);
    if (value.has_periodicFwdRsrcToAddModList_r18) {
enc.WriteConstrainedLength(value.periodicFwdRsrcToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.periodicFwdRsrcToAddModList_r18_count; ++i) {
    Encode_NCR_PeriodicFwdResource_r18(enc, value.periodicFwdRsrcToAddModList_r18_items[i]);
}
    }
    if (value.has_periodicFwdRsrcToReleaseList_r18) {
enc.WriteConstrainedLength(value.periodicFwdRsrcToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.periodicFwdRsrcToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicFwdRsrcToReleaseList_r18_items[i]), 0, 1023);
}
    }
    if (value.has_referenceSCS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceSCS_r18), 0, 7);
    }
    if (value.has_priorityFlag_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityFlag_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_PeriodicFwdResourceSet_r18(Decoder& dec, NCR_PeriodicFwdResourceSet_r18& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.periodicFwdRsrcSetId_r18 = (NCR_PeriodicFwdResourceSetId_r18)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.periodicFwdRsrcToAddModList_r18_count)) { goto fail; }
if (value.periodicFwdRsrcToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.periodicFwdRsrcToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.periodicFwdRsrcToAddModList_r18_count > 0u) {
    value.periodicFwdRsrcToAddModList_r18_items = (NCR_PeriodicFwdResource_r18*)std::malloc((std::size_t)value.periodicFwdRsrcToAddModList_r18_count * sizeof(NCR_PeriodicFwdResource_r18));
    if (value.periodicFwdRsrcToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.periodicFwdRsrcToAddModList_r18_items, 0, (std::size_t)value.periodicFwdRsrcToAddModList_r18_count * sizeof(NCR_PeriodicFwdResource_r18));
}
for (std::uint32_t i = 0; i < value.periodicFwdRsrcToAddModList_r18_count; ++i) {
    if (Decode_NCR_PeriodicFwdResource_r18(dec, value.periodicFwdRsrcToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.periodicFwdRsrcToReleaseList_r18_count)) { goto fail; }
if (value.periodicFwdRsrcToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.periodicFwdRsrcToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.periodicFwdRsrcToReleaseList_r18_count > 0u) {
    value.periodicFwdRsrcToReleaseList_r18_items = (NCR_PeriodicFwdResourceId_r18*)std::malloc((std::size_t)value.periodicFwdRsrcToReleaseList_r18_count * sizeof(NCR_PeriodicFwdResourceId_r18));
    if (value.periodicFwdRsrcToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.periodicFwdRsrcToReleaseList_r18_items, 0, (std::size_t)value.periodicFwdRsrcToReleaseList_r18_count * sizeof(NCR_PeriodicFwdResourceId_r18));
}
for (std::uint32_t i = 0; i < value.periodicFwdRsrcToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
    value.periodicFwdRsrcToReleaseList_r18_items[i] = (NCR_PeriodicFwdResourceId_r18)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.referenceSCS_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_3) {
        value.priorityFlag_r18 = (NCR_PeriodicFwdResourceSet_r18_PriorityFlag_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_PeriodicFwdResourceSet_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_PeriodicFwdResourceSet_r18(NCR_PeriodicFwdResourceSet_r18& value)
{
    if (value.has_periodicFwdRsrcToAddModList_r18) {
        if (value.periodicFwdRsrcToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.periodicFwdRsrcToAddModList_r18_count; ++i) {
                Free_NCR_PeriodicFwdResource_r18(value.periodicFwdRsrcToAddModList_r18_items[i]);
            }
            std::free(value.periodicFwdRsrcToAddModList_r18_items);
            value.periodicFwdRsrcToAddModList_r18_items = nullptr;
        }
        value.periodicFwdRsrcToAddModList_r18_count = 0;
    }
    if (value.has_periodicFwdRsrcToReleaseList_r18) {
        if (value.periodicFwdRsrcToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.periodicFwdRsrcToReleaseList_r18_count; ++i) {
            }
            std::free(value.periodicFwdRsrcToReleaseList_r18_items);
            value.periodicFwdRsrcToReleaseList_r18_items = nullptr;
        }
        value.periodicFwdRsrcToReleaseList_r18_count = 0;
    }
    if (value.has_referenceSCS_r18) {
    }
    if (value.has_priorityFlag_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18：ASN.1 periodicTimeRsrc-r18；源文件第 8602 行；SEQUENCE。
// Encode_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18 只读不分配；Decode_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(Encoder& enc, const NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18& value)
{
    (void)value;
    Encode_NCR_PeriodicityAndOffset_r18(enc, value.periodicityAndOffset_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.symbolOffset_r18), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.durationInSymbols_r18), 1, 112);
    return enc.Error();
}

ErrorCode Decode_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(Decoder& dec, NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_NCR_PeriodicityAndOffset_r18(dec, value.periodicityAndOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.symbolOffset_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 112, tmp_value)) { goto fail; }
        value.durationInSymbols_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18& value)
{
    Free_NCR_PeriodicityAndOffset_r18(value.periodicityAndOffset_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_PeriodicFwdResource_r18：ASN.1 NCR-PeriodicFwdResource-r18；源文件第 8599 行；SEQUENCE。
// Encode_NCR_PeriodicFwdResource_r18 只读不分配；Decode_NCR_PeriodicFwdResource_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_PeriodicFwdResource_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_PeriodicFwdResource_r18(Encoder& enc, const NCR_PeriodicFwdResource_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.periodicFwdRsrcId_r18), 0, 1023);
    enc.WriteConstrainedInteger((std::int64_t)(value.beamIndex_r18), 0, 63);
    Encode_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(enc, value.periodicTimeRsrc_r18);
    return enc.Error();
}

ErrorCode Decode_NCR_PeriodicFwdResource_r18(Decoder& dec, NCR_PeriodicFwdResource_r18& value)
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
        value.periodicFwdRsrcId_r18 = (NCR_PeriodicFwdResourceId_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.beamIndex_r18 = (int64_t)tmp_value;
    }
    {
        if (Decode_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(dec, value.periodicTimeRsrc_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_PeriodicFwdResource_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_PeriodicFwdResource_r18(NCR_PeriodicFwdResource_r18& value)
{
    Free_NCR_PeriodicFwdResource_r18_PeriodicTimeRsrc_r18(value.periodicTimeRsrc_r18);
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_SemiPersistentFwdResourceSet_r18：ASN.1 NCR-SemiPersistentFwdResourceSet-r18；源文件第 8620 行；SEQUENCE。
// Encode_NCR_SemiPersistentFwdResourceSet_r18 只读不分配；Decode_NCR_SemiPersistentFwdResourceSet_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_SemiPersistentFwdResourceSet_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_SemiPersistentFwdResourceSet_r18(Encoder& enc, const NCR_SemiPersistentFwdResourceSet_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_semiPersistentFwdRsrcToAddModList_r18);
    enc.WriteBit(value.has_semiPersistentFwdRsrcToReleaseList_r18);
    enc.WriteBit(value.has_referenceSCS_r18);
    enc.WriteBit(value.has_priorityFlag_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.semiPersistentFwdRsrcSetId_r18), 0, 31);
    if (value.has_semiPersistentFwdRsrcToAddModList_r18) {
enc.WriteConstrainedLength(value.semiPersistentFwdRsrcToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcToAddModList_r18_count; ++i) {
    Encode_NCR_SemiPersistentFwdResource_r18(enc, value.semiPersistentFwdRsrcToAddModList_r18_items[i]);
}
    }
    if (value.has_semiPersistentFwdRsrcToReleaseList_r18) {
enc.WriteConstrainedLength(value.semiPersistentFwdRsrcToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.semiPersistentFwdRsrcToReleaseList_r18_items[i]), 0, 127);
}
    }
    if (value.has_referenceSCS_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.referenceSCS_r18), 0, 7);
    }
    if (value.has_priorityFlag_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priorityFlag_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_NCR_SemiPersistentFwdResourceSet_r18(Decoder& dec, NCR_SemiPersistentFwdResourceSet_r18& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.semiPersistentFwdRsrcSetId_r18 = (NCR_SemiPersistentFwdResourceSetId_r18)tmp_value;
    }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.semiPersistentFwdRsrcToAddModList_r18_count)) { goto fail; }
if (value.semiPersistentFwdRsrcToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.semiPersistentFwdRsrcToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.semiPersistentFwdRsrcToAddModList_r18_count > 0u) {
    value.semiPersistentFwdRsrcToAddModList_r18_items = (NCR_SemiPersistentFwdResource_r18*)std::malloc((std::size_t)value.semiPersistentFwdRsrcToAddModList_r18_count * sizeof(NCR_SemiPersistentFwdResource_r18));
    if (value.semiPersistentFwdRsrcToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.semiPersistentFwdRsrcToAddModList_r18_items, 0, (std::size_t)value.semiPersistentFwdRsrcToAddModList_r18_count * sizeof(NCR_SemiPersistentFwdResource_r18));
}
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcToAddModList_r18_count; ++i) {
    if (Decode_NCR_SemiPersistentFwdResource_r18(dec, value.semiPersistentFwdRsrcToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.semiPersistentFwdRsrcToReleaseList_r18_count)) { goto fail; }
if (value.semiPersistentFwdRsrcToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.semiPersistentFwdRsrcToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.semiPersistentFwdRsrcToReleaseList_r18_count > 0u) {
    value.semiPersistentFwdRsrcToReleaseList_r18_items = (NCR_SemiPersistentFwdResourceId_r18*)std::malloc((std::size_t)value.semiPersistentFwdRsrcToReleaseList_r18_count * sizeof(NCR_SemiPersistentFwdResourceId_r18));
    if (value.semiPersistentFwdRsrcToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.semiPersistentFwdRsrcToReleaseList_r18_items, 0, (std::size_t)value.semiPersistentFwdRsrcToReleaseList_r18_count * sizeof(NCR_SemiPersistentFwdResourceId_r18));
}
for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.semiPersistentFwdRsrcToReleaseList_r18_items[i] = (NCR_SemiPersistentFwdResourceId_r18)tmp_value;
}
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.referenceSCS_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_3) {
        value.priorityFlag_r18 = (NCR_SemiPersistentFwdResourceSet_r18_PriorityFlag_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_SemiPersistentFwdResourceSet_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_SemiPersistentFwdResourceSet_r18(NCR_SemiPersistentFwdResourceSet_r18& value)
{
    if (value.has_semiPersistentFwdRsrcToAddModList_r18) {
        if (value.semiPersistentFwdRsrcToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcToAddModList_r18_count; ++i) {
                Free_NCR_SemiPersistentFwdResource_r18(value.semiPersistentFwdRsrcToAddModList_r18_items[i]);
            }
            std::free(value.semiPersistentFwdRsrcToAddModList_r18_items);
            value.semiPersistentFwdRsrcToAddModList_r18_items = nullptr;
        }
        value.semiPersistentFwdRsrcToAddModList_r18_count = 0;
    }
    if (value.has_semiPersistentFwdRsrcToReleaseList_r18) {
        if (value.semiPersistentFwdRsrcToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.semiPersistentFwdRsrcToReleaseList_r18_count; ++i) {
            }
            std::free(value.semiPersistentFwdRsrcToReleaseList_r18_items);
            value.semiPersistentFwdRsrcToReleaseList_r18_items = nullptr;
        }
        value.semiPersistentFwdRsrcToReleaseList_r18_count = 0;
    }
    if (value.has_referenceSCS_r18) {
    }
    if (value.has_priorityFlag_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

// --------------------------------------------------------------------------
// NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18：ASN.1 semiPersistentTimeRsrc-r18；源文件第 8634 行；SEQUENCE。
// Encode_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18 只读不分配；Decode_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18 可能 malloc（失败时内部已释放并清零）；Free_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18 递归释放并清零。
// --------------------------------------------------------------------------
ErrorCode Encode_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(Encoder& enc, const NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18& value)
{
    (void)value;
    Encode_NCR_PeriodicityAndOffset_r18(enc, value.periodicityAndOffset_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.symbolOffset_r18), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.durationInSymbols_r18), 1, 112);
    return enc.Error();
}

ErrorCode Decode_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(Decoder& dec, NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_NCR_PeriodicityAndOffset_r18(dec, value.periodicityAndOffset_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.symbolOffset_r18 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 112, tmp_value)) { goto fail; }
        value.durationInSymbols_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18(NCR_SemiPersistentFwdResource_r18_SemiPersistentTimeRsrc_r18& value)
{
    Free_NCR_PeriodicityAndOffset_r18(value.periodicityAndOffset_r18);
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
