/* ============================================================================
 * src/generated/codec_part018.cpp — 生成的编解码函数
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

ErrorCode Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(Encoder& enc, const CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters& value)
{
    (void)value;
    enc.WriteBit(value.has_codebookSubConfig_r18);
    enc.WriteBit(value.has_portSubsetIndicator_r18);
    enc.WriteBit(value.has_non_PMI_PortIndication_r18);
    if (value.has_codebookSubConfig_r18) {
        Encode_CodebookConfig(enc, value.codebookSubConfig_r18);
    }
    if (value.has_portSubsetIndicator_r18) {
        Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(enc, value.portSubsetIndicator_r18);
    }
    if (value.has_non_PMI_PortIndication_r18) {
        Encode_PortIndexFor8Ranks(enc, value.non_PMI_PortIndication_r18);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(Decoder& dec, CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters& value)
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
        if (Decode_CodebookConfig(dec, value.codebookSubConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(dec, value.portSubsetIndicator_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_PortIndexFor8Ranks(dec, value.non_PMI_PortIndication_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters& value)
{
    if (value.has_codebookSubConfig_r18) {
        Free_CodebookConfig(value.codebookSubConfig_r18);
    }
    if (value.has_portSubsetIndicator_r18) {
        Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters_PortSubsetIndicator_r18(value.portSubsetIndicator_r18);
    }
    if (value.has_non_PMI_PortIndication_r18) {
        Free_PortIndexFor8Ranks(value.non_PMI_PortIndication_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(Encoder& enc, const CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters& value)
{
    (void)value;
enc.WriteConstrainedLength(value.nzp_CSI_RS_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceList_r18_items[i]), 0, 63);
}
    return enc.Error();
}

ErrorCode Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(Decoder& dec, CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_ResourceList_r18_count)) { goto fail; }
if (value.nzp_CSI_RS_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_ResourceList_r18_count > 0u) {
    value.nzp_CSI_RS_ResourceList_r18_items = (NZP_CSI_RS_ResourceIndex_r18*)std::malloc((std::size_t)value.nzp_CSI_RS_ResourceList_r18_count * sizeof(NZP_CSI_RS_ResourceIndex_r18));
    if (value.nzp_CSI_RS_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_ResourceList_r18_items, 0, (std::size_t)value.nzp_CSI_RS_ResourceList_r18_count * sizeof(NZP_CSI_RS_ResourceIndex_r18));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.nzp_CSI_RS_ResourceList_r18_items[i] = (NZP_CSI_RS_ResourceIndex_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters& value)
{
    if (value.nzp_CSI_RS_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceList_r18_count; ++i) {
        }
        std::free(value.nzp_CSI_RS_ResourceList_r18_items);
        value.nzp_CSI_RS_ResourceList_r18_items = nullptr;
    }
    value.nzp_CSI_RS_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams(Encoder& enc, const CSI_ReportSubConfig_r18_ReportSubConfigParams& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a1_parameters:
        Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(enc, value.u.a1_parameters);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a2_parameters:
        Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(enc, value.u.a2_parameters);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams(Decoder& dec, CSI_ReportSubConfig_r18_ReportSubConfigParams& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag)root_index;
    switch (value.tag) {
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a1_parameters: {
        if (Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(dec, value.u.a1_parameters) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a2_parameters: {
        if (Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(dec, value.u.a2_parameters) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportSubConfig_r18_ReportSubConfigParams(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportSubConfig_r18_ReportSubConfigParams(CSI_ReportSubConfig_r18_ReportSubConfigParams& value)
{
    switch (value.tag) {
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a1_parameters:
        Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A1_parameters(value.u.a1_parameters);
        break;
    case CSI_ReportSubConfig_r18_ReportSubConfigParams_Tag_a2_parameters:
        Free_CSI_ReportSubConfig_r18_ReportSubConfigParams_A2_parameters(value.u.a2_parameters);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ReportSubConfig_r18(Encoder& enc, const CSI_ReportSubConfig_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_reportSubConfigParams);
    enc.WriteBit(value.has_powerOffset_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSubConfigId_r18), 0, 7);
    if (value.has_reportSubConfigParams) {
        Encode_CSI_ReportSubConfig_r18_ReportSubConfigParams(enc, value.reportSubConfigParams);
    }
    if (value.has_powerOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.powerOffset_r18), 0, 23);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ReportSubConfig_r18(Decoder& dec, CSI_ReportSubConfig_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.reportSubConfigId_r18 = (CSI_ReportSubConfigId_r18)tmp_value;
    }
    if (present_0) {
        if (Decode_CSI_ReportSubConfig_r18_ReportSubConfigParams(dec, value.reportSubConfigParams) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 23, tmp_value)) { goto fail; }
        value.powerOffset_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ReportSubConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ReportSubConfig_r18(CSI_ReportSubConfig_r18& value)
{
    if (value.has_reportSubConfigParams) {
        Free_CSI_ReportSubConfig_r18_ReportSubConfigParams(value.reportSubConfigParams);
    }
    if (value.has_powerOffset_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ResourceConfig_ExtGroup1(Encoder& enc, const CSI_ResourceConfig_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_SSB_ResourceSetListExt_r17);
    if (value.has_csi_SSB_ResourceSetListExt_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.csi_SSB_ResourceSetListExt_r17), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ResourceConfig_ExtGroup1(Decoder& dec, CSI_ResourceConfig_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.csi_SSB_ResourceSetListExt_r17 = (CSI_SSB_ResourceSetId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ResourceConfig_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ResourceConfig_ExtGroup1(CSI_ResourceConfig_ExtGroup1& value)
{
    if (value.has_csi_SSB_ResourceSetListExt_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(Encoder& enc, const CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB& value)
{
    (void)value;
    enc.WriteBit(value.has_nzp_CSI_RS_ResourceSetList);
    enc.WriteBit(value.has_csi_SSB_ResourceSetList);
    if (value.has_nzp_CSI_RS_ResourceSetList) {
enc.WriteConstrainedLength(value.nzp_CSI_RS_ResourceSetList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.nzp_CSI_RS_ResourceSetList_items[i]), 0, 63);
}
    }
    if (value.has_csi_SSB_ResourceSetList) {
enc.WriteConstrainedLength(value.csi_SSB_ResourceSetList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_SSB_ResourceSetList_items[i]), 0, 63);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(Decoder& dec, CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.nzp_CSI_RS_ResourceSetList_count)) { goto fail; }
if (value.nzp_CSI_RS_ResourceSetList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.nzp_CSI_RS_ResourceSetList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.nzp_CSI_RS_ResourceSetList_count > 0u) {
    value.nzp_CSI_RS_ResourceSetList_items = (NZP_CSI_RS_ResourceSetId*)std::malloc((std::size_t)value.nzp_CSI_RS_ResourceSetList_count * sizeof(NZP_CSI_RS_ResourceSetId));
    if (value.nzp_CSI_RS_ResourceSetList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.nzp_CSI_RS_ResourceSetList_items, 0, (std::size_t)value.nzp_CSI_RS_ResourceSetList_count * sizeof(NZP_CSI_RS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.nzp_CSI_RS_ResourceSetList_items[i] = (NZP_CSI_RS_ResourceSetId)tmp_value;
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_SSB_ResourceSetList_count)) { goto fail; }
if (value.csi_SSB_ResourceSetList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_SSB_ResourceSetList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_SSB_ResourceSetList_count > 0u) {
    value.csi_SSB_ResourceSetList_items = (CSI_SSB_ResourceSetId*)std::malloc((std::size_t)value.csi_SSB_ResourceSetList_count * sizeof(CSI_SSB_ResourceSetId));
    if (value.csi_SSB_ResourceSetList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_SSB_ResourceSetList_items, 0, (std::size_t)value.csi_SSB_ResourceSetList_count * sizeof(CSI_SSB_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.csi_SSB_ResourceSetList_items[i] = (CSI_SSB_ResourceSetId)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB& value)
{
    if (value.has_nzp_CSI_RS_ResourceSetList) {
        if (value.nzp_CSI_RS_ResourceSetList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.nzp_CSI_RS_ResourceSetList_count; ++i) {
            }
            std::free(value.nzp_CSI_RS_ResourceSetList_items);
            value.nzp_CSI_RS_ResourceSetList_items = nullptr;
        }
        value.nzp_CSI_RS_ResourceSetList_count = 0;
    }
    if (value.has_csi_SSB_ResourceSetList) {
        if (value.csi_SSB_ResourceSetList_items != nullptr) {
            for (std::uint32_t i = 0; i < value.csi_SSB_ResourceSetList_count; ++i) {
            }
            std::free(value.csi_SSB_ResourceSetList_items);
            value.csi_SSB_ResourceSetList_items = nullptr;
        }
        value.csi_SSB_ResourceSetList_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(Encoder& enc, const CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        enc.WriteConstrainedInteger((std::int64_t)(value.items[i]), 0, 63);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(Decoder& dec, CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 16u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 16u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (CSI_IM_ResourceSetId*)std::malloc((std::size_t)value.count * sizeof(CSI_IM_ResourceSetId));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(CSI_IM_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.items[i] = (CSI_IM_ResourceSetId)tmp_value;
}
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ResourceConfig_Csi_RS_ResourceSetList(Encoder& enc, const CSI_ResourceConfig_Csi_RS_ResourceSetList& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_nzp_CSI_RS_SSB:
        Encode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(enc, value.u.nzp_CSI_RS_SSB);
        break;
    case CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_csi_IM_ResourceSetList:
        Encode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(enc, value.u.csi_IM_ResourceSetList);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ResourceConfig_Csi_RS_ResourceSetList(Decoder& dec, CSI_ResourceConfig_Csi_RS_ResourceSetList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag)root_index;
    switch (value.tag) {
    case CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_nzp_CSI_RS_SSB: {
        if (Decode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(dec, value.u.nzp_CSI_RS_SSB) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_csi_IM_ResourceSetList: {
        if (Decode_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(dec, value.u.csi_IM_ResourceSetList) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_ResourceConfig_Csi_RS_ResourceSetList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ResourceConfig_Csi_RS_ResourceSetList(CSI_ResourceConfig_Csi_RS_ResourceSetList& value)
{
    switch (value.tag) {
    case CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_nzp_CSI_RS_SSB:
        Free_CSI_ResourceConfig_Csi_RS_ResourceSetList_Nzp_CSI_RS_SSB(value.u.nzp_CSI_RS_SSB);
        break;
    case CSI_ResourceConfig_Csi_RS_ResourceSetList_Tag_csi_IM_ResourceSetList:
        Free_CSI_ResourceConfig_Csi_RS_ResourceSetList_Csi_IM_ResourceSetList(value.u.csi_IM_ResourceSetList);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_ResourceConfig(Encoder& enc, const CSI_ResourceConfig& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_ResourceConfigId), 0, 111);
    Encode_CSI_ResourceConfig_Csi_RS_ResourceSetList(enc, value.csi_RS_ResourceSetList);
    enc.WriteConstrainedInteger((std::int64_t)(value.bwp_Id), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceType), 0, 2);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_ResourceConfig_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_ResourceConfig(Decoder& dec, CSI_ResourceConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
        value.csi_ResourceConfigId = (CSI_ResourceConfigId)tmp_value;
    }
    {
        if (Decode_CSI_ResourceConfig_Csi_RS_ResourceSetList(dec, value.csi_RS_ResourceSetList) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.bwp_Id = (BWP_Id)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.resourceType = (CSI_ResourceConfig_ResourceType)tmp_value;
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
    if (Decode_CSI_ResourceConfig_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CSI_ResourceConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_ResourceConfig(CSI_ResourceConfig& value)
{
    Free_CSI_ResourceConfig_Csi_RS_ResourceSetList(value.csi_RS_ResourceSetList);
    if (value.has_extGroup1) {
        Free_CSI_ResourceConfig_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ResourceConfigMobility_ExtGroup1(Encoder& enc, const CSI_RS_ResourceConfigMobility_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_refServCellIndex);
    if (value.has_refServCellIndex) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refServCellIndex), 0, 31);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ResourceConfigMobility_ExtGroup1(Decoder& dec, CSI_RS_ResourceConfigMobility_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.refServCellIndex = (ServCellIndex)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_ResourceConfigMobility_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ResourceConfigMobility_ExtGroup1(CSI_RS_ResourceConfigMobility_ExtGroup1& value)
{
    if (value.has_refServCellIndex) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ResourceConfigMobility(Encoder& enc, const CSI_RS_ResourceConfigMobility& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing), 0, 7);
enc.WriteConstrainedLength(value.csi_RS_CellList_Mobility_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_RS_CellList_Mobility_count; ++i) {
    Encode_CSI_RS_CellMobility(enc, value.csi_RS_CellList_Mobility_items[i]);
}
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_RS_ResourceConfigMobility_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ResourceConfigMobility(Decoder& dec, CSI_RS_ResourceConfigMobility& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing = (SubcarrierSpacing)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_RS_CellList_Mobility_count)) { goto fail; }
if (value.csi_RS_CellList_Mobility_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_RS_CellList_Mobility_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_RS_CellList_Mobility_count > 0u) {
    value.csi_RS_CellList_Mobility_items = (CSI_RS_CellMobility*)std::malloc((std::size_t)value.csi_RS_CellList_Mobility_count * sizeof(CSI_RS_CellMobility));
    if (value.csi_RS_CellList_Mobility_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_RS_CellList_Mobility_items, 0, (std::size_t)value.csi_RS_CellList_Mobility_count * sizeof(CSI_RS_CellMobility));
}
for (std::uint32_t i = 0; i < value.csi_RS_CellList_Mobility_count; ++i) {
    if (Decode_CSI_RS_CellMobility(dec, value.csi_RS_CellList_Mobility_items[i]) != ErrorCode_Ok) { goto fail; }
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
    if (Decode_CSI_RS_ResourceConfigMobility_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CSI_RS_ResourceConfigMobility(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ResourceConfigMobility(CSI_RS_ResourceConfigMobility& value)
{
    if (value.csi_RS_CellList_Mobility_items != nullptr) {
        for (std::uint32_t i = 0; i < value.csi_RS_CellList_Mobility_count; ++i) {
            Free_CSI_RS_CellMobility(value.csi_RS_CellList_Mobility_items[i]);
        }
        std::free(value.csi_RS_CellList_Mobility_items);
        value.csi_RS_CellList_Mobility_items = nullptr;
    }
    value.csi_RS_CellList_Mobility_count = 0;
    if (value.has_extGroup1) {
        Free_CSI_RS_ResourceConfigMobility_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_CellMobility_Csi_rs_MeasurementBW(Encoder& enc, const CSI_RS_CellMobility_Csi_rs_MeasurementBW& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPRBs), 0, 4);
    enc.WriteConstrainedInteger((std::int64_t)(value.startPRB), 0, 2169);
    return enc.Error();
}

ErrorCode Decode_CSI_RS_CellMobility_Csi_rs_MeasurementBW(Decoder& dec, CSI_RS_CellMobility_Csi_rs_MeasurementBW& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.nrofPRBs = (CSI_RS_CellMobility_Csi_rs_MeasurementBW_NrofPRBs)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2169, tmp_value)) { goto fail; }
        value.startPRB = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_CellMobility_Csi_rs_MeasurementBW(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_CellMobility_Csi_rs_MeasurementBW(CSI_RS_CellMobility_Csi_rs_MeasurementBW& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_CellMobility(Encoder& enc, const CSI_RS_CellMobility& value)
{
    (void)value;
    enc.WriteBit(value.has_density);
    enc.WriteConstrainedInteger((std::int64_t)(value.cellId), 0, 1007);
    Encode_CSI_RS_CellMobility_Csi_rs_MeasurementBW(enc, value.csi_rs_MeasurementBW);
    if (value.has_density) {
        enc.WriteConstrainedInteger((std::int64_t)(value.density), 0, 1);
    }
enc.WriteConstrainedLength(value.csi_rs_ResourceList_Mobility_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_rs_ResourceList_Mobility_count; ++i) {
    Encode_CSI_RS_Resource_Mobility(enc, value.csi_rs_ResourceList_Mobility_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_CSI_RS_CellMobility(Decoder& dec, CSI_RS_CellMobility& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.cellId = (PhysCellId)tmp_value;
    }
    {
        if (Decode_CSI_RS_CellMobility_Csi_rs_MeasurementBW(dec, value.csi_rs_MeasurementBW) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.density = (CSI_RS_CellMobility_Density)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_rs_ResourceList_Mobility_count)) { goto fail; }
if (value.csi_rs_ResourceList_Mobility_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_rs_ResourceList_Mobility_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_rs_ResourceList_Mobility_count > 0u) {
    value.csi_rs_ResourceList_Mobility_items = (CSI_RS_Resource_Mobility*)std::malloc((std::size_t)value.csi_rs_ResourceList_Mobility_count * sizeof(CSI_RS_Resource_Mobility));
    if (value.csi_rs_ResourceList_Mobility_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_rs_ResourceList_Mobility_items, 0, (std::size_t)value.csi_rs_ResourceList_Mobility_count * sizeof(CSI_RS_Resource_Mobility));
}
for (std::uint32_t i = 0; i < value.csi_rs_ResourceList_Mobility_count; ++i) {
    if (Decode_CSI_RS_Resource_Mobility(dec, value.csi_rs_ResourceList_Mobility_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_CellMobility(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_CellMobility(CSI_RS_CellMobility& value)
{
    Free_CSI_RS_CellMobility_Csi_rs_MeasurementBW(value.csi_rs_MeasurementBW);
    if (value.has_density) {
    }
    if (value.csi_rs_ResourceList_Mobility_items != nullptr) {
        for (std::uint32_t i = 0; i < value.csi_rs_ResourceList_Mobility_count; ++i) {
            Free_CSI_RS_Resource_Mobility(value.csi_rs_ResourceList_Mobility_items[i]);
        }
        std::free(value.csi_rs_ResourceList_Mobility_items);
        value.csi_rs_ResourceList_Mobility_items = nullptr;
    }
    value.csi_rs_ResourceList_Mobility_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(Encoder& enc, const CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 4);
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms4), 0, 255);
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5), 0, 319);
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 639);
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 1279);
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 2559);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(Decoder& dec, CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 4, root_index)) {
        goto fail;
    }
    value.tag = (CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag)root_index;
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms4 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms5 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17& value)
{
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms4:
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms5:
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms10:
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms20:
        break;
    case CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17_Tag_ms40:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_Resource_Mobility_ExtGroup1(Encoder& enc, const CSI_RS_Resource_Mobility_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_slotConfig_r17);
    if (value.has_slotConfig_r17) {
        Encode_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(enc, value.slotConfig_r17);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_Resource_Mobility_ExtGroup1(Decoder& dec, CSI_RS_Resource_Mobility_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(dec, value.slotConfig_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_Resource_Mobility_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_Resource_Mobility_ExtGroup1(CSI_RS_Resource_Mobility_ExtGroup1& value)
{
    if (value.has_slotConfig_r17) {
        Free_CSI_RS_Resource_Mobility_ExtGroup1_SlotConfig_r17(value.slotConfig_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_Resource_Mobility_SlotConfig(Encoder& enc, const CSI_RS_Resource_Mobility_SlotConfig& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 4);
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms4), 0, 31);
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5), 0, 39);
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 79);
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 159);
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 319);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_Resource_Mobility_SlotConfig(Decoder& dec, CSI_RS_Resource_Mobility_SlotConfig& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 4, root_index)) {
        goto fail;
    }
    value.tag = (CSI_RS_Resource_Mobility_SlotConfig_Tag)root_index;
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms4 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms5 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_Resource_Mobility_SlotConfig(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_Resource_Mobility_SlotConfig(CSI_RS_Resource_Mobility_SlotConfig& value)
{
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms4:
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms5:
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms10:
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms20:
        break;
    case CSI_RS_Resource_Mobility_SlotConfig_Tag_ms40:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_Resource_Mobility_AssociatedSSB(Encoder& enc, const CSI_RS_Resource_Mobility_AssociatedSSB& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Index), 0, 63);
    enc.WriteBool(value.isQuasiColocated);
    return enc.Error();
}

ErrorCode Decode_CSI_RS_Resource_Mobility_AssociatedSSB(Decoder& dec, CSI_RS_Resource_Mobility_AssociatedSSB& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.ssb_Index = (SSB_Index)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.isQuasiColocated = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_Resource_Mobility_AssociatedSSB(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_Resource_Mobility_AssociatedSSB(CSI_RS_Resource_Mobility_AssociatedSSB& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(Encoder& enc, const CSI_RS_Resource_Mobility_FrequencyDomainAllocation& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row1:
        enc.WriteFixedBitString(value.u.row1.bytes, value.u.row1.bitLength, 4, 4);
        break;
    case CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row2:
        enc.WriteFixedBitString(value.u.row2.bytes, value.u.row2.bitLength, 12, 12);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(Decoder& dec, CSI_RS_Resource_Mobility_FrequencyDomainAllocation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag)root_index;
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row1: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.row1.bytes = string_bytes;
        value.u.row1.bitLength = string_length;
        break;
    }
    case CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.row2.bytes = string_bytes;
        value.u.row2.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(CSI_RS_Resource_Mobility_FrequencyDomainAllocation& value)
{
    switch (value.tag) {
    case CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row1:
        std::free(value.u.row1.bytes);
        break;
    case CSI_RS_Resource_Mobility_FrequencyDomainAllocation_Tag_row2:
        std::free(value.u.row2.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_Resource_Mobility(Encoder& enc, const CSI_RS_Resource_Mobility& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_associatedSSB);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_RS_Index), 0, 95);
    Encode_CSI_RS_Resource_Mobility_SlotConfig(enc, value.slotConfig);
    if (value.has_associatedSSB) {
        Encode_CSI_RS_Resource_Mobility_AssociatedSSB(enc, value.associatedSSB);
    }
    Encode_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(enc, value.frequencyDomainAllocation);
    enc.WriteConstrainedInteger((std::int64_t)(value.firstOFDMSymbolInTimeDomain), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.sequenceGenerationConfig), 0, 1023);
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_RS_Resource_Mobility_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_Resource_Mobility(Decoder& dec, CSI_RS_Resource_Mobility& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    bool present_0 = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 95, tmp_value)) { goto fail; }
        value.csi_RS_Index = (CSI_RS_Index)tmp_value;
    }
    {
        if (Decode_CSI_RS_Resource_Mobility_SlotConfig(dec, value.slotConfig) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_CSI_RS_Resource_Mobility_AssociatedSSB(dec, value.associatedSSB) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(dec, value.frequencyDomainAllocation) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.firstOFDMSymbolInTimeDomain = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.sequenceGenerationConfig = (int64_t)tmp_value;
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
    if (Decode_CSI_RS_Resource_Mobility_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CSI_RS_Resource_Mobility(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_Resource_Mobility(CSI_RS_Resource_Mobility& value)
{
    Free_CSI_RS_Resource_Mobility_SlotConfig(value.slotConfig);
    if (value.has_associatedSSB) {
        Free_CSI_RS_Resource_Mobility_AssociatedSSB(value.associatedSSB);
    }
    Free_CSI_RS_Resource_Mobility_FrequencyDomainAllocation(value.frequencyDomainAllocation);
    if (value.has_extGroup1) {
        Free_CSI_RS_Resource_Mobility_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ResourceMapping_FrequencyDomainAllocation(Encoder& enc, const CSI_RS_ResourceMapping_FrequencyDomainAllocation& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row1:
        enc.WriteFixedBitString(value.u.row1.bytes, value.u.row1.bitLength, 4, 4);
        break;
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row2:
        enc.WriteFixedBitString(value.u.row2.bytes, value.u.row2.bitLength, 12, 12);
        break;
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row4:
        enc.WriteFixedBitString(value.u.row4.bytes, value.u.row4.bitLength, 3, 3);
        break;
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_other:
        enc.WriteFixedBitString(value.u.other.bytes, value.u.other.bitLength, 6, 6);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ResourceMapping_FrequencyDomainAllocation(Decoder& dec, CSI_RS_ResourceMapping_FrequencyDomainAllocation& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag)root_index;
    switch (value.tag) {
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row1: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.row1.bytes = string_bytes;
        value.u.row1.bitLength = string_length;
        break;
    }
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.row2.bytes = string_bytes;
        value.u.row2.bitLength = string_length;
        break;
    }
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 3)) { goto fail; }
        string_length = 3;
        value.u.row4.bytes = string_bytes;
        value.u.row4.bitLength = string_length;
        break;
    }
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_other: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.u.other.bytes = string_bytes;
        value.u.other.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_ResourceMapping_FrequencyDomainAllocation(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ResourceMapping_FrequencyDomainAllocation(CSI_RS_ResourceMapping_FrequencyDomainAllocation& value)
{
    switch (value.tag) {
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row1:
        std::free(value.u.row1.bytes);
        break;
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row2:
        std::free(value.u.row2.bytes);
        break;
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_row4:
        std::free(value.u.row4.bytes);
        break;
    case CSI_RS_ResourceMapping_FrequencyDomainAllocation_Tag_other:
        std::free(value.u.other.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ResourceMapping_Density(Encoder& enc, const CSI_RS_ResourceMapping_Density& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 3);
    switch (value.tag) {
    case CSI_RS_ResourceMapping_Density_Tag_dot5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.dot5), 0, 1);
        break;
    case CSI_RS_ResourceMapping_Density_Tag_one:
        (void)0;
        break;
    case CSI_RS_ResourceMapping_Density_Tag_three:
        (void)0;
        break;
    case CSI_RS_ResourceMapping_Density_Tag_spare:
        (void)0;
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ResourceMapping_Density(Decoder& dec, CSI_RS_ResourceMapping_Density& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 3, root_index)) {
        goto fail;
    }
    value.tag = (CSI_RS_ResourceMapping_Density_Tag)root_index;
    switch (value.tag) {
    case CSI_RS_ResourceMapping_Density_Tag_dot5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.dot5 = (CSI_RS_ResourceMapping_Density_Dot5)tmp_value;
        break;
    }
    case CSI_RS_ResourceMapping_Density_Tag_one: {
        (void)0;
        break;
    }
    case CSI_RS_ResourceMapping_Density_Tag_three: {
        (void)0;
        break;
    }
    case CSI_RS_ResourceMapping_Density_Tag_spare: {
        (void)0;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_ResourceMapping_Density(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ResourceMapping_Density(CSI_RS_ResourceMapping_Density& value)
{
    switch (value.tag) {
    case CSI_RS_ResourceMapping_Density_Tag_dot5:
        break;
    case CSI_RS_ResourceMapping_Density_Tag_one:
        break;
    case CSI_RS_ResourceMapping_Density_Tag_three:
        break;
    case CSI_RS_ResourceMapping_Density_Tag_spare:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_RS_ResourceMapping(Encoder& enc, const CSI_RS_ResourceMapping& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_firstOFDMSymbolInTimeDomain2);
    Encode_CSI_RS_ResourceMapping_FrequencyDomainAllocation(enc, value.frequencyDomainAllocation);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofPorts), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.firstOFDMSymbolInTimeDomain), 0, 13);
    if (value.has_firstOFDMSymbolInTimeDomain2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.firstOFDMSymbolInTimeDomain2), 2, 12);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.cdm_Type), 0, 3);
    Encode_CSI_RS_ResourceMapping_Density(enc, value.density);
    Encode_CSI_FrequencyOccupation(enc, value.freqBand);
    return enc.Error();
}

ErrorCode Decode_CSI_RS_ResourceMapping(Decoder& dec, CSI_RS_ResourceMapping& value)
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
        if (Decode_CSI_RS_ResourceMapping_FrequencyDomainAllocation(dec, value.frequencyDomainAllocation) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nrofPorts = (CSI_RS_ResourceMapping_NrofPorts)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.firstOFDMSymbolInTimeDomain = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(2, 12, tmp_value)) { goto fail; }
        value.firstOFDMSymbolInTimeDomain2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.cdm_Type = (CSI_RS_ResourceMapping_Cdm_Type)tmp_value;
    }
    {
        if (Decode_CSI_RS_ResourceMapping_Density(dec, value.density) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_CSI_FrequencyOccupation(dec, value.freqBand) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_RS_ResourceMapping(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_RS_ResourceMapping(CSI_RS_ResourceMapping& value)
{
    Free_CSI_RS_ResourceMapping_FrequencyDomainAllocation(value.frequencyDomainAllocation);
    if (value.has_firstOFDMSymbolInTimeDomain2) {
    }
    Free_CSI_RS_ResourceMapping_Density(value.density);
    Free_CSI_FrequencyOccupation(value.freqBand);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(Encoder& enc, const CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_sp_CSI_MultiplexingMode_r17);
    if (value.has_sp_CSI_MultiplexingMode_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.sp_CSI_MultiplexingMode_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(Decoder& dec, CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        value.sp_CSI_MultiplexingMode_r17 = (CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1_Sp_CSI_MultiplexingMode_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1& value)
{
    if (value.has_sp_CSI_MultiplexingMode_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(Encoder& enc, const CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_csi_ReportSubConfigTriggerList_r18);
    enc.WriteBit(value.has_ltm_AssociatedReportConfigInfo_r18);
    if (value.has_csi_ReportSubConfigTriggerList_r18) {
        Encode_CSI_ReportSubConfigTriggerList_r18(enc, value.csi_ReportSubConfigTriggerList_r18);
    }
    if (value.has_ltm_AssociatedReportConfigInfo_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_AssociatedReportConfigInfo_r18), 0, 47);
    }
    return enc.Error();
}

ErrorCode Decode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(Decoder& dec, CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_CSI_ReportSubConfigTriggerList_r18(dec, value.csi_ReportSubConfigTriggerList_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
        value.ltm_AssociatedReportConfigInfo_r18 = (LTM_CSI_ReportConfigId_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2& value)
{
    if (value.has_csi_ReportSubConfigTriggerList_r18) {
        Free_CSI_ReportSubConfigTriggerList_r18(value.csi_ReportSubConfigTriggerList_r18);
    }
    if (value.has_ltm_AssociatedReportConfigInfo_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_SemiPersistentOnPUSCH_TriggerState(Encoder& enc, const CSI_SemiPersistentOnPUSCH_TriggerState& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1 || value.has_extGroup2;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.associatedReportConfigInfo), 0, 47);
    if (any_extension) {
        enc.WriteNormallySmallLength(2u);
        enc.WriteBit(value.has_extGroup1);
        enc.WriteBit(value.has_extGroup2);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
        if (value.has_extGroup2) {
    Encoder sub;
    Encode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(sub, value.extGroup2);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_SemiPersistentOnPUSCH_TriggerState(Decoder& dec, CSI_SemiPersistentOnPUSCH_TriggerState& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
        value.associatedReportConfigInfo = (CSI_ReportConfigId)tmp_value;
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
    if (Decode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    if (Decode_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(sub, value.extGroup2) != ErrorCode_Ok) {
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
    Free_CSI_SemiPersistentOnPUSCH_TriggerState(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_SemiPersistentOnPUSCH_TriggerState(CSI_SemiPersistentOnPUSCH_TriggerState& value)
{
    if (value.has_extGroup1) {
        Free_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup1(value.extGroup1);
    }
    if (value.has_extGroup2) {
        Free_CSI_SemiPersistentOnPUSCH_TriggerState_ExtGroup2(value.extGroup2);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_SSB_ResourceSet_ExtGroup1(Encoder& enc, const CSI_SSB_ResourceSet_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_servingAdditionalPCIList_r17);
    if (value.has_servingAdditionalPCIList_r17) {
enc.WriteConstrainedLength(value.servingAdditionalPCIList_r17_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.servingAdditionalPCIList_r17_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.servingAdditionalPCIList_r17_items[i]), 0, 7);
}
    }
    return enc.Error();
}

ErrorCode Decode_CSI_SSB_ResourceSet_ExtGroup1(Decoder& dec, CSI_SSB_ResourceSet_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.servingAdditionalPCIList_r17_count)) { goto fail; }
if (value.servingAdditionalPCIList_r17_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.servingAdditionalPCIList_r17_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.servingAdditionalPCIList_r17_count > 0u) {
    value.servingAdditionalPCIList_r17_items = (ServingAdditionalPCIIndex_r17*)std::malloc((std::size_t)value.servingAdditionalPCIList_r17_count * sizeof(ServingAdditionalPCIIndex_r17));
    if (value.servingAdditionalPCIList_r17_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.servingAdditionalPCIList_r17_items, 0, (std::size_t)value.servingAdditionalPCIList_r17_count * sizeof(ServingAdditionalPCIIndex_r17));
}
for (std::uint32_t i = 0; i < value.servingAdditionalPCIList_r17_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
    value.servingAdditionalPCIList_r17_items[i] = (ServingAdditionalPCIIndex_r17)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_CSI_SSB_ResourceSet_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_SSB_ResourceSet_ExtGroup1(CSI_SSB_ResourceSet_ExtGroup1& value)
{
    if (value.has_servingAdditionalPCIList_r17) {
        if (value.servingAdditionalPCIList_r17_items != nullptr) {
            for (std::uint32_t i = 0; i < value.servingAdditionalPCIList_r17_count; ++i) {
            }
            std::free(value.servingAdditionalPCIList_r17_items);
            value.servingAdditionalPCIList_r17_items = nullptr;
        }
        value.servingAdditionalPCIList_r17_count = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CSI_SSB_ResourceSet(Encoder& enc, const CSI_SSB_ResourceSet& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_SSB_ResourceSetId), 0, 63);
enc.WriteConstrainedLength(value.csi_SSB_ResourceList_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceList_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.csi_SSB_ResourceList_items[i]), 0, 63);
}
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_CSI_SSB_ResourceSet_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_CSI_SSB_ResourceSet(Decoder& dec, CSI_SSB_ResourceSet& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.csi_SSB_ResourceSetId = (CSI_SSB_ResourceSetId)tmp_value;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.csi_SSB_ResourceList_count)) { goto fail; }
if (value.csi_SSB_ResourceList_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.csi_SSB_ResourceList_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.csi_SSB_ResourceList_count > 0u) {
    value.csi_SSB_ResourceList_items = (SSB_Index*)std::malloc((std::size_t)value.csi_SSB_ResourceList_count * sizeof(SSB_Index));
    if (value.csi_SSB_ResourceList_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.csi_SSB_ResourceList_items, 0, (std::size_t)value.csi_SSB_ResourceList_count * sizeof(SSB_Index));
}
for (std::uint32_t i = 0; i < value.csi_SSB_ResourceList_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.csi_SSB_ResourceList_items[i] = (SSB_Index)tmp_value;
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
    if (Decode_CSI_SSB_ResourceSet_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_CSI_SSB_ResourceSet(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CSI_SSB_ResourceSet(CSI_SSB_ResourceSet& value)
{
    if (value.csi_SSB_ResourceList_items != nullptr) {
        for (std::uint32_t i = 0; i < value.csi_SSB_ResourceList_count; ++i) {
        }
        std::free(value.csi_SSB_ResourceList_items);
        value.csi_SSB_ResourceList_items = nullptr;
    }
    value.csi_SSB_ResourceList_count = 0;
    if (value.has_extGroup1) {
        Free_CSI_SSB_ResourceSet_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(Encoder& enc, const DL_PPW_PeriodicityAndStartSlot_r17_Scs15& value)
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
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n4:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n4), 0, 3);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5), 0, 4);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n8), 0, 7);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10), 0, 9);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n16), 0, 15);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20), 0, 19);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32), 0, 31);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40), 0, 39);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64), 0, 63);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80), 0, 79);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160), 0, 159);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320), 0, 319);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640), 0, 639);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280), 0, 1279);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560), 0, 2559);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120), 0, 5119);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(Decoder& dec, DL_PPW_PeriodicityAndStartSlot_r17_Scs15& value)
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
        value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag)(17 + extension_index);
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
    value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag)root_index;
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n4: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.n4 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.u.n5 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.n8 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.n10 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.n16 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.n20 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(DL_PPW_PeriodicityAndStartSlot_r17_Scs15& value)
{
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n4:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n8:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n16:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n20:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n32:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n40:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n64:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n80:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n160:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n320:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n640:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n1280:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n2560:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n5120:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs15_Tag_n10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(Encoder& enc, const DL_PPW_PeriodicityAndStartSlot_r17_Scs30& value)
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
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n8:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n8), 0, 7);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10), 0, 9);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n16), 0, 15);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20), 0, 19);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32), 0, 31);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40), 0, 39);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64), 0, 63);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80), 0, 79);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n128), 0, 127);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160), 0, 159);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320), 0, 319);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640), 0, 639);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280), 0, 1279);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560), 0, 2559);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120), 0, 5119);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240), 0, 10239);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20480:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20480), 0, 20479);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(Decoder& dec, DL_PPW_PeriodicityAndStartSlot_r17_Scs30& value)
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
        value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag)(17 + extension_index);
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
    value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag)root_index;
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n8: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.u.n8 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.n10 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.n16 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.n20 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.n128 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20480: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.n20480 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(DL_PPW_PeriodicityAndStartSlot_r17_Scs30& value)
{
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n8:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n16:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n32:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n40:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n64:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n80:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n128:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n160:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n320:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n640:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n1280:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n2560:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n5120:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n10240:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs30_Tag_n20480:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(Encoder& enc, const DL_PPW_PeriodicityAndStartSlot_r17_Scs60& value)
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
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n16), 0, 15);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20), 0, 19);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32), 0, 31);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40), 0, 39);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64), 0, 63);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80), 0, 79);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n128), 0, 127);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160), 0, 159);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n256), 0, 255);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320), 0, 319);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640), 0, 639);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280), 0, 1279);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560), 0, 2559);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120), 0, 5119);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240), 0, 10239);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20480:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20480), 0, 20479);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40960:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40960), 0, 40959);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(Decoder& dec, DL_PPW_PeriodicityAndStartSlot_r17_Scs60& value)
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
        value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag)(17 + extension_index);
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
    value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag)root_index;
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.u.n16 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.n20 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.n128 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.n256 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20480: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.n20480 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40960: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.u.n40960 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(DL_PPW_PeriodicityAndStartSlot_r17_Scs60& value)
{
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n16:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n32:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n64:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n80:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n128:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n160:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n256:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n320:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n640:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n1280:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n2560:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n5120:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n10240:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n20480:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs60_Tag_n40960:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(Encoder& enc, const DL_PPW_PeriodicityAndStartSlot_r17_Scs120& value)
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
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n32), 0, 31);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40), 0, 39);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n64), 0, 63);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n80), 0, 79);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n128), 0, 127);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n160), 0, 159);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n256), 0, 255);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n320), 0, 319);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n512), 0, 511);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n640), 0, 639);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n1280), 0, 1279);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n2560), 0, 2559);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n5120), 0, 5119);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n10240), 0, 10239);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n20480:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n20480), 0, 20479);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40960:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n40960), 0, 40959);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n81920:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.n81920), 0, 81919);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(Decoder& dec, DL_PPW_PeriodicityAndStartSlot_r17_Scs120& value)
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
        value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag)(17 + extension_index);
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
    value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag)root_index;
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.n32 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.n40 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.n64 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.n80 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.n128 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.n160 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.n256 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.n320 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.n512 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.n640 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.n1280 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.n2560 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.n5120 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.n10240 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n20480: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 20479, tmp_value)) { goto fail; }
        value.u.n20480 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40960: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 40959, tmp_value)) { goto fail; }
        value.u.n40960 = (int64_t)tmp_value;
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n81920: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 81919, tmp_value)) { goto fail; }
        value.u.n81920 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(DL_PPW_PeriodicityAndStartSlot_r17_Scs120& value)
{
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n32:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n64:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n80:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n128:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n160:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n256:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n320:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n512:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n640:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n1280:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n2560:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n5120:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n10240:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n20480:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n40960:
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Scs120_Tag_n81920:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PPW_PeriodicityAndStartSlot_r17(Encoder& enc, const DL_PPW_PeriodicityAndStartSlot_r17& value)
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
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs15:
        Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(enc, value.u.scs15);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs30:
        Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(enc, value.u.scs30);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs60:
        Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(enc, value.u.scs60);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs120:
        Encode_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(enc, value.u.scs120);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PeriodicityAndStartSlot_r17(Decoder& dec, DL_PPW_PeriodicityAndStartSlot_r17& value)
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
        value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Tag)(4 + extension_index);
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
    value.tag = (DL_PPW_PeriodicityAndStartSlot_r17_Tag)root_index;
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs15: {
        if (Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(dec, value.u.scs15) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs30: {
        if (Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(dec, value.u.scs30) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs60: {
        if (Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(dec, value.u.scs60) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs120: {
        if (Decode_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(dec, value.u.scs120) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PeriodicityAndStartSlot_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PeriodicityAndStartSlot_r17(DL_PPW_PeriodicityAndStartSlot_r17& value)
{
    switch (value.tag) {
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs15:
        Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs15(value.u.scs15);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs30:
        Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs30(value.u.scs30);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs60:
        Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs60(value.u.scs60);
        break;
    case DL_PPW_PeriodicityAndStartSlot_r17_Tag_scs120:
        Free_DL_PPW_PeriodicityAndStartSlot_r17_Scs120(value.u.scs120);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DL_PPW_PreConfig_r17(Encoder& enc, const DL_PPW_PreConfig_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_type_r17);
    enc.WriteBit(value.has_priority_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PPW_ID_r17), 0, 15);
    Encode_DL_PPW_PeriodicityAndStartSlot_r17(enc, value.dl_PPW_PeriodicityAndStartSlot_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.length_r17), 1, 160);
    if (value.has_type_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.type_r17), 0, 2);
    }
    if (value.has_priority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.priority_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_DL_PPW_PreConfig_r17(Decoder& dec, DL_PPW_PreConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.dl_PPW_ID_r17 = (DL_PPW_ID_r17)tmp_value;
    }
    {
        if (Decode_DL_PPW_PeriodicityAndStartSlot_r17(dec, value.dl_PPW_PeriodicityAndStartSlot_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 160, tmp_value)) { goto fail; }
        value.length_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.type_r17 = (DL_PPW_PreConfig_r17_Type_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.priority_r17 = (DL_PPW_PreConfig_r17_Priority_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DL_PPW_PreConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DL_PPW_PreConfig_r17(DL_PPW_PreConfig_r17& value)
{
    Free_DL_PPW_PeriodicityAndStartSlot_r17(value.dl_PPW_PeriodicityAndStartSlot_r17);
    if (value.has_type_r17) {
    }
    if (value.has_priority_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_INT_ConfigurationPerServingCell(Encoder& enc, const INT_ConfigurationPerServingCell& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    enc.WriteConstrainedInteger((std::int64_t)(value.positionInDCI), 0, 125);
    return enc.Error();
}

ErrorCode Decode_INT_ConfigurationPerServingCell(Decoder& dec, INT_ConfigurationPerServingCell& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 125, tmp_value)) { goto fail; }
        value.positionInDCI = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_INT_ConfigurationPerServingCell(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_INT_ConfigurationPerServingCell(INT_ConfigurationPerServingCell& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(Encoder& enc, const EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l839:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l839), 0, 837);
        break;
    case EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l139:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.l139), 0, 137);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(Decoder& dec, EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag)root_index;
    switch (value.tag) {
    case EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l839: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 837, tmp_value)) { goto fail; }
        value.u.l839 = (int64_t)tmp_value;
        break;
    }
    case EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l139: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 137, tmp_value)) { goto fail; }
        value.u.l139 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18& value)
{
    switch (value.tag) {
    case EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l839:
        break;
    case EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18_Tag_l139:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EarlyUL_SyncConfig_r18(Encoder& enc, const EarlyUL_SyncConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssb_PerRACH_Occasion_r18);
    enc.WriteBit(value.has_prach_RootSequenceIndex_r18);
    enc.WriteBit(value.has_ltm_PRACH_SubcarrierSpacing_r18);
    enc.WriteBit(value.has_n_TimingAdvanceOffset_r18);
    Encode_FrequencyInfoUL(enc, value.frequencyInfoUL_r18);
    Encode_RACH_ConfigGeneric(enc, value.rach_ConfigGeneric_r18);
    Encode_BWP(enc, value.bwp_GenericParameters_r18);
    if (value.has_ssb_PerRACH_Occasion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_PerRACH_Occasion_r18), 0, 7);
    }
    if (value.has_prach_RootSequenceIndex_r18) {
        Encode_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(enc, value.prach_RootSequenceIndex_r18);
    }
    if (value.has_ltm_PRACH_SubcarrierSpacing_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_PRACH_SubcarrierSpacing_r18), 0, 7);
    }
    if (value.has_n_TimingAdvanceOffset_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.n_TimingAdvanceOffset_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_EarlyUL_SyncConfig_r18(Decoder& dec, EarlyUL_SyncConfig_r18& value)
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
        if (Decode_FrequencyInfoUL(dec, value.frequencyInfoUL_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_RACH_ConfigGeneric(dec, value.rach_ConfigGeneric_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_BWP(dec, value.bwp_GenericParameters_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_PerRACH_Occasion_r18 = (EarlyUL_SyncConfig_r18_Ssb_PerRACH_Occasion_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(dec, value.prach_RootSequenceIndex_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ltm_PRACH_SubcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.n_TimingAdvanceOffset_r18 = (EarlyUL_SyncConfig_r18_N_TimingAdvanceOffset_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EarlyUL_SyncConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EarlyUL_SyncConfig_r18(EarlyUL_SyncConfig_r18& value)
{
    Free_FrequencyInfoUL(value.frequencyInfoUL_r18);
    Free_RACH_ConfigGeneric(value.rach_ConfigGeneric_r18);
    Free_BWP(value.bwp_GenericParameters_r18);
    if (value.has_ssb_PerRACH_Occasion_r18) {
    }
    if (value.has_prach_RootSequenceIndex_r18) {
        Free_EarlyUL_SyncConfig_r18_Prach_RootSequenceIndex_r18(value.prach_RootSequenceIndex_r18);
    }
    if (value.has_ltm_PRACH_SubcarrierSpacing_r18) {
    }
    if (value.has_n_TimingAdvanceOffset_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureCombination_r17(Encoder& enc, const FeatureCombination_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_redCap_r17);
    enc.WriteBit(value.has_smallData_r17);
    enc.WriteBit(value.has_nsag_r17);
    enc.WriteBit(value.has_msg3_Repetitions_r17);
    enc.WriteBit(value.has_msg1_Repetitions_r18);
    enc.WriteBit(value.has_eRedCap_r18);
    enc.WriteBit(value.has_spare2);
    enc.WriteBit(value.has_spare1);
    if (value.has_redCap_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.redCap_r17), 0, 0);
    }
    if (value.has_smallData_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.smallData_r17), 0, 0);
    }
    if (value.has_nsag_r17) {
        Encode_NSAG_List_r17(enc, value.nsag_r17);
    }
    if (value.has_msg3_Repetitions_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg3_Repetitions_r17), 0, 0);
    }
    if (value.has_msg1_Repetitions_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_Repetitions_r18), 0, 0);
    }
    if (value.has_eRedCap_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.eRedCap_r18), 0, 0);
    }
    if (value.has_spare2) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spare2), 0, 0);
    }
    if (value.has_spare1) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spare1), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureCombination_r17(Decoder& dec, FeatureCombination_r17& value)
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
        value.redCap_r17 = (FeatureCombination_r17_RedCap_r17)0;
    }
    if (present_1) {
        value.smallData_r17 = (FeatureCombination_r17_SmallData_r17)0;
    }
    if (present_2) {
        if (Decode_NSAG_List_r17(dec, value.nsag_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        value.msg3_Repetitions_r17 = (FeatureCombination_r17_Msg3_Repetitions_r17)0;
    }
    if (present_4) {
        value.msg1_Repetitions_r18 = (FeatureCombination_r17_Msg1_Repetitions_r18)0;
    }
    if (present_5) {
        value.eRedCap_r18 = (FeatureCombination_r17_ERedCap_r18)0;
    }
    if (present_6) {
        value.spare2 = (FeatureCombination_r17_Spare2)0;
    }
    if (present_7) {
        value.spare1 = (FeatureCombination_r17_Spare1)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureCombination_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureCombination_r17(FeatureCombination_r17& value)
{
    if (value.has_redCap_r17) {
    }
    if (value.has_smallData_r17) {
    }
    if (value.has_nsag_r17) {
        Free_NSAG_List_r17(value.nsag_r17);
    }
    if (value.has_msg3_Repetitions_r17) {
    }
    if (value.has_msg1_Repetitions_r18) {
    }
    if (value.has_eRedCap_r18) {
    }
    if (value.has_spare2) {
    }
    if (value.has_spare1) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureCombinationPreambles_r17_ExtGroup1(Encoder& enc, const FeatureCombinationPreambles_r17_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_msg1_RepetitionNum_r18);
    enc.WriteBit(value.has_msg1_RepetitionTimeOffsetROGroup_r18);
    if (value.has_msg1_RepetitionNum_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_RepetitionNum_r18), 0, 3);
    }
    if (value.has_msg1_RepetitionTimeOffsetROGroup_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msg1_RepetitionTimeOffsetROGroup_r18), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_FeatureCombinationPreambles_r17_ExtGroup1(Decoder& dec, FeatureCombinationPreambles_r17_ExtGroup1& value)
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
        value.msg1_RepetitionNum_r18 = (FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionNum_r18)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.msg1_RepetitionTimeOffsetROGroup_r18 = (FeatureCombinationPreambles_r17_ExtGroup1_Msg1_RepetitionTimeOffsetROGroup_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureCombinationPreambles_r17_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureCombinationPreambles_r17_ExtGroup1(FeatureCombinationPreambles_r17_ExtGroup1& value)
{
    if (value.has_msg1_RepetitionNum_r18) {
    }
    if (value.has_msg1_RepetitionTimeOffsetROGroup_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureCombinationPreambles_r17_GroupBconfigured_r17(Encoder& enc, const FeatureCombinationPreambles_r17_GroupBconfigured_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.ra_SizeGroupA_r17), 0, 15);
    enc.WriteConstrainedInteger((std::int64_t)(value.messagePowerOffsetGroupB_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfRA_PreamblesGroupA_r17), 1, 64);
    return enc.Error();
}

ErrorCode Decode_FeatureCombinationPreambles_r17_GroupBconfigured_r17(Decoder& dec, FeatureCombinationPreambles_r17_GroupBconfigured_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.ra_SizeGroupA_r17 = (FeatureCombinationPreambles_r17_GroupBconfigured_r17_Ra_SizeGroupA_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.messagePowerOffsetGroupB_r17 = (FeatureCombinationPreambles_r17_GroupBconfigured_r17_MessagePowerOffsetGroupB_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfRA_PreamblesGroupA_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_FeatureCombinationPreambles_r17_GroupBconfigured_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureCombinationPreambles_r17_GroupBconfigured_r17(FeatureCombinationPreambles_r17_GroupBconfigured_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FeatureCombinationPreambles_r17(Encoder& enc, const FeatureCombinationPreambles_r17& value)
{
    (void)value;
    const bool any_extension = value.has_extGroup1;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssb_SharedRO_MaskIndex_r17);
    enc.WriteBit(value.has_groupBconfigured_r17);
    enc.WriteBit(value.has_separateMsgA_PUSCH_Config_r17);
    enc.WriteBit(value.has_msgA_RSRP_Threshold_r17);
    enc.WriteBit(value.has_rsrp_ThresholdSSB_r17);
    enc.WriteBit(value.has_deltaPreamble_r17);
    Encode_FeatureCombination_r17(enc, value.featureCombination_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.startPreambleForThisPartition_r17), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.numberOfPreamblesPerSSB_ForThisPartition_r17), 1, 64);
    if (value.has_ssb_SharedRO_MaskIndex_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_SharedRO_MaskIndex_r17), 1, 15);
    }
    if (value.has_groupBconfigured_r17) {
        Encode_FeatureCombinationPreambles_r17_GroupBconfigured_r17(enc, value.groupBconfigured_r17);
    }
    if (value.has_separateMsgA_PUSCH_Config_r17) {
        Encode_MsgA_PUSCH_Config_r16(enc, value.separateMsgA_PUSCH_Config_r17);
    }
    if (value.has_msgA_RSRP_Threshold_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.msgA_RSRP_Threshold_r17), 0, 127);
    }
    if (value.has_rsrp_ThresholdSSB_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.rsrp_ThresholdSSB_r17), 0, 127);
    }
    if (value.has_deltaPreamble_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.deltaPreamble_r17), -1, 6);
    }
    if (any_extension) {
        enc.WriteNormallySmallLength(1u);
        enc.WriteBit(value.has_extGroup1);
        if (value.has_extGroup1) {
    Encoder sub;
    Encode_FeatureCombinationPreambles_r17_ExtGroup1(sub, value.extGroup1);
    if (sub.Error() != ErrorCode_Ok) { return enc.Fail(sub.Error()); }
    enc.WriteOpenType(sub.Finish());
        }
    }
    return enc.Error();
}

ErrorCode Decode_FeatureCombinationPreambles_r17(Decoder& dec, FeatureCombinationPreambles_r17& value)
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
    {
        if (Decode_FeatureCombination_r17(dec, value.featureCombination_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.startPreambleForThisPartition_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.numberOfPreamblesPerSSB_ForThisPartition_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 15, tmp_value)) { goto fail; }
        value.ssb_SharedRO_MaskIndex_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_FeatureCombinationPreambles_r17_GroupBconfigured_r17(dec, value.groupBconfigured_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_MsgA_PUSCH_Config_r16(dec, value.separateMsgA_PUSCH_Config_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.msgA_RSRP_Threshold_r17 = (RSRP_Range)tmp_value;
    }
    if (present_4) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.rsrp_ThresholdSSB_r17 = (RSRP_Range)tmp_value;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-1, 6, tmp_value)) { goto fail; }
        value.deltaPreamble_r17 = (int64_t)tmp_value;
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
    if (Decode_FeatureCombinationPreambles_r17_ExtGroup1(sub, value.extGroup1) != ErrorCode_Ok) {
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
    Free_FeatureCombinationPreambles_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FeatureCombinationPreambles_r17(FeatureCombinationPreambles_r17& value)
{
    Free_FeatureCombination_r17(value.featureCombination_r17);
    if (value.has_ssb_SharedRO_MaskIndex_r17) {
    }
    if (value.has_groupBconfigured_r17) {
        Free_FeatureCombinationPreambles_r17_GroupBconfigured_r17(value.groupBconfigured_r17);
    }
    if (value.has_separateMsgA_PUSCH_Config_r17) {
        Free_MsgA_PUSCH_Config_r16(value.separateMsgA_PUSCH_Config_r17);
    }
    if (value.has_msgA_RSRP_Threshold_r17) {
    }
    if (value.has_rsrp_ThresholdSSB_r17) {
    }
    if (value.has_deltaPreamble_r17) {
    }
    if (value.has_extGroup1) {
        Free_FeatureCombinationPreambles_r17_ExtGroup1(value.extGroup1);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SliceInfoListDedicated_r17(Encoder& enc, const SliceInfoListDedicated_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SliceInfoDedicated_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SliceInfoListDedicated_r17(Decoder& dec, SliceInfoListDedicated_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SliceInfoDedicated_r17*)std::malloc((std::size_t)value.count * sizeof(SliceInfoDedicated_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SliceInfoDedicated_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SliceInfoDedicated_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SliceInfoListDedicated_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SliceInfoListDedicated_r17(SliceInfoListDedicated_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SliceInfoDedicated_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FreqPriorityDedicatedSlicing_r17(Encoder& enc, const FreqPriorityDedicatedSlicing_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sliceInfoListDedicated_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_ExplicitCarrierFreq_r17), 0, 3279165);
    if (value.has_sliceInfoListDedicated_r17) {
        Encode_SliceInfoListDedicated_r17(enc, value.sliceInfoListDedicated_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPriorityDedicatedSlicing_r17(Decoder& dec, FreqPriorityDedicatedSlicing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.dl_ExplicitCarrierFreq_r17 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
        if (Decode_SliceInfoListDedicated_r17(dec, value.sliceInfoListDedicated_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqPriorityDedicatedSlicing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPriorityDedicatedSlicing_r17(FreqPriorityDedicatedSlicing_r17& value)
{
    if (value.has_sliceInfoListDedicated_r17) {
        Free_SliceInfoListDedicated_r17(value.sliceInfoListDedicated_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NSAG_IdentityInfo_r17(Encoder& enc, const NSAG_IdentityInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_trackingAreaCode_r17);
    enc.WriteFixedBitString(value.nsag_ID_r17.bytes, value.nsag_ID_r17.bitLength, 8, 8);
    if (value.has_trackingAreaCode_r17) {
        enc.WriteFixedBitString(value.trackingAreaCode_r17.bytes, value.trackingAreaCode_r17.bitLength, 24, 24);
    }
    return enc.Error();
}

ErrorCode Decode_NSAG_IdentityInfo_r17(Decoder& dec, NSAG_IdentityInfo_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.nsag_ID_r17.bytes = string_bytes;
        value.nsag_ID_r17.bitLength = string_length;
    }
    if (present_0) {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 24)) { goto fail; }
        string_length = 24;
        value.trackingAreaCode_r17.bytes = string_bytes;
        value.trackingAreaCode_r17.bitLength = string_length;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NSAG_IdentityInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NSAG_IdentityInfo_r17(NSAG_IdentityInfo_r17& value)
{
    std::free(value.nsag_ID_r17.bytes);
    value.nsag_ID_r17.bytes = nullptr;
    value.nsag_ID_r17.bitLength = 0;
    if (value.has_trackingAreaCode_r17) {
        std::free(value.trackingAreaCode_r17.bytes);
        value.trackingAreaCode_r17.bytes = nullptr;
        value.trackingAreaCode_r17.bitLength = 0;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SliceInfoDedicated_r17(Encoder& enc, const SliceInfoDedicated_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_nsag_CellReselectionPriority_r17);
    enc.WriteBit(value.has_nsag_CellReselectionSubPriority_r17);
    Encode_NSAG_IdentityInfo_r17(enc, value.nsag_IdentityInfo_r17);
    if (value.has_nsag_CellReselectionPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nsag_CellReselectionPriority_r17), 0, 7);
    }
    if (value.has_nsag_CellReselectionSubPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nsag_CellReselectionSubPriority_r17), 0, 3);
    }
    return enc.Error();
}

ErrorCode Decode_SliceInfoDedicated_r17(Decoder& dec, SliceInfoDedicated_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_NSAG_IdentityInfo_r17(dec, value.nsag_IdentityInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nsag_CellReselectionPriority_r17 = (CellReselectionPriority)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nsag_CellReselectionSubPriority_r17 = (CellReselectionSubPriority)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SliceInfoDedicated_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SliceInfoDedicated_r17(SliceInfoDedicated_r17& value)
{
    Free_NSAG_IdentityInfo_r17(value.nsag_IdentityInfo_r17);
    if (value.has_nsag_CellReselectionPriority_r17) {
    }
    if (value.has_nsag_CellReselectionSubPriority_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SliceInfoList_r17(Encoder& enc, const SliceInfoList_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SliceInfo_r17(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SliceInfoList_r17(Decoder& dec, SliceInfoList_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SliceInfo_r17*)std::malloc((std::size_t)value.count * sizeof(SliceInfo_r17));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SliceInfo_r17));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SliceInfo_r17(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SliceInfoList_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SliceInfoList_r17(SliceInfoList_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SliceInfo_r17(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_FreqPrioritySlicing_r17(Encoder& enc, const FreqPrioritySlicing_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_sliceInfoList_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_ImplicitCarrierFreq_r17), 0, 8);
    if (value.has_sliceInfoList_r17) {
        Encode_SliceInfoList_r17(enc, value.sliceInfoList_r17);
    }
    return enc.Error();
}

ErrorCode Decode_FreqPrioritySlicing_r17(Decoder& dec, FreqPrioritySlicing_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 8, tmp_value)) { goto fail; }
        value.dl_ImplicitCarrierFreq_r17 = (int64_t)tmp_value;
    }
    if (present_0) {
        if (Decode_SliceInfoList_r17(dec, value.sliceInfoList_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_FreqPrioritySlicing_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_FreqPrioritySlicing_r17(FreqPrioritySlicing_r17& value)
{
    if (value.has_sliceInfoList_r17) {
        Free_SliceInfoList_r17(value.sliceInfoList_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SliceCellListNR_r17(Encoder& enc, const SliceCellListNR_r17& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 16u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SliceCellListNR_r17(Decoder& dec, SliceCellListNR_r17& value)
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
    Free_SliceCellListNR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SliceCellListNR_r17(SliceCellListNR_r17& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SliceInfo_r17_SliceCellListNR_r17(Encoder& enc, const SliceInfo_r17_SliceCellListNR_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SliceInfo_r17_SliceCellListNR_r17_Tag_sliceAllowedCellListNR_r17:
        Encode_SliceCellListNR_r17(enc, value.u.sliceAllowedCellListNR_r17);
        break;
    case SliceInfo_r17_SliceCellListNR_r17_Tag_sliceExcludedCellListNR_r17:
        Encode_SliceCellListNR_r17(enc, value.u.sliceExcludedCellListNR_r17);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SliceInfo_r17_SliceCellListNR_r17(Decoder& dec, SliceInfo_r17_SliceCellListNR_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SliceInfo_r17_SliceCellListNR_r17_Tag)root_index;
    switch (value.tag) {
    case SliceInfo_r17_SliceCellListNR_r17_Tag_sliceAllowedCellListNR_r17: {
        if (Decode_SliceCellListNR_r17(dec, value.u.sliceAllowedCellListNR_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SliceInfo_r17_SliceCellListNR_r17_Tag_sliceExcludedCellListNR_r17: {
        if (Decode_SliceCellListNR_r17(dec, value.u.sliceExcludedCellListNR_r17) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SliceInfo_r17_SliceCellListNR_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SliceInfo_r17_SliceCellListNR_r17(SliceInfo_r17_SliceCellListNR_r17& value)
{
    switch (value.tag) {
    case SliceInfo_r17_SliceCellListNR_r17_Tag_sliceAllowedCellListNR_r17:
        Free_SliceCellListNR_r17(value.u.sliceAllowedCellListNR_r17);
        break;
    case SliceInfo_r17_SliceCellListNR_r17_Tag_sliceExcludedCellListNR_r17:
        Free_SliceCellListNR_r17(value.u.sliceExcludedCellListNR_r17);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SliceInfo_r17(Encoder& enc, const SliceInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_nsag_CellReselectionPriority_r17);
    enc.WriteBit(value.has_nsag_CellReselectionSubPriority_r17);
    enc.WriteBit(value.has_sliceCellListNR_r17);
    Encode_NSAG_IdentityInfo_r17(enc, value.nsag_IdentityInfo_r17);
    if (value.has_nsag_CellReselectionPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nsag_CellReselectionPriority_r17), 0, 7);
    }
    if (value.has_nsag_CellReselectionSubPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nsag_CellReselectionSubPriority_r17), 0, 3);
    }
    if (value.has_sliceCellListNR_r17) {
        Encode_SliceInfo_r17_SliceCellListNR_r17(enc, value.sliceCellListNR_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SliceInfo_r17(Decoder& dec, SliceInfo_r17& value)
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
        if (Decode_NSAG_IdentityInfo_r17(dec, value.nsag_IdentityInfo_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nsag_CellReselectionPriority_r17 = (CellReselectionPriority)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nsag_CellReselectionSubPriority_r17 = (CellReselectionSubPriority)tmp_value;
    }
    if (present_2) {
        if (Decode_SliceInfo_r17_SliceCellListNR_r17(dec, value.sliceCellListNR_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SliceInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SliceInfo_r17(SliceInfo_r17& value)
{
    Free_NSAG_IdentityInfo_r17(value.nsag_IdentityInfo_r17);
    if (value.has_nsag_CellReselectionPriority_r17) {
    }
    if (value.has_nsag_CellReselectionSubPriority_r17) {
    }
    if (value.has_sliceCellListNR_r17) {
        Free_SliceInfo_r17_SliceCellListNR_r17(value.sliceCellListNR_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_EUTRA_RSTD_Info(Encoder& enc, const EUTRA_RSTD_Info& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq), 0, 262143);
    enc.WriteConstrainedInteger((std::int64_t)(value.measPRS_Offset), 0, 39);
    return enc.Error();
}

ErrorCode Decode_EUTRA_RSTD_Info(Decoder& dec, EUTRA_RSTD_Info& value)
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
        value.carrierFreq = (ARFCN_ValueEUTRA)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.measPRS_Offset = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_EUTRA_RSTD_Info(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_EUTRA_RSTD_Info(EUTRA_RSTD_Info& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(Encoder& enc, const NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16& value)
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
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms20_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20_r16), 0, 19);
        break;
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms40_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40_r16), 0, 39);
        break;
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms80_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80_r16), 0, 79);
        break;
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms160_r16:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160_r16), 0, 159);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(Decoder& dec, NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16& value)
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
        value.tag = (NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag)(4 + extension_index);
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
    value.tag = (NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag)root_index;
    switch (value.tag) {
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms20_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20_r16 = (int64_t)tmp_value;
        break;
    }
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms40_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40_r16 = (int64_t)tmp_value;
        break;
    }
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms80_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80_r16 = (int64_t)tmp_value;
        break;
    }
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms160_r16: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160_r16 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16& value)
{
    switch (value.tag) {
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms20_r16:
        break;
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms40_r16:
        break;
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms80_r16:
        break;
    case NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16_Tag_ms160_r16:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_NR_PRS_MeasurementInfo_r16(Encoder& enc, const NR_PRS_MeasurementInfo_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.dl_PRS_PointA_r16), 0, 3279165);
    Encode_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(enc, value.nr_MeasPRS_RepetitionAndOffset_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.nr_MeasPRS_length_r16), 0, 7);
    return enc.Error();
}

ErrorCode Decode_NR_PRS_MeasurementInfo_r16(Decoder& dec, NR_PRS_MeasurementInfo_r16& value)
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
        value.dl_PRS_PointA_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        if (Decode_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(dec, value.nr_MeasPRS_RepetitionAndOffset_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.nr_MeasPRS_length_r16 = (NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_length_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_NR_PRS_MeasurementInfo_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_NR_PRS_MeasurementInfo_r16(NR_PRS_MeasurementInfo_r16& value)
{
    Free_NR_PRS_MeasurementInfo_r16_Nr_MeasPRS_RepetitionAndOffset_r16(value.nr_MeasPRS_RepetitionAndOffset_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTE_NeighCellsCRS_AssistInfo_r17(Encoder& enc, const LTE_NeighCellsCRS_AssistInfo_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_neighCarrierBandwidthDL_r17);
    enc.WriteBit(value.has_neighCarrierFreqDL_r17);
    enc.WriteBit(value.has_neighCellId_r17);
    enc.WriteBit(value.has_neighCRS_muting_r17);
    enc.WriteBit(value.has_neighMBSFN_SubframeConfigList_r17);
    enc.WriteBit(value.has_neighNrofCRS_Ports_r17);
    enc.WriteBit(value.has_neighV_Shift_r17);
    if (value.has_neighCarrierBandwidthDL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.neighCarrierBandwidthDL_r17), 0, 7);
    }
    if (value.has_neighCarrierFreqDL_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.neighCarrierFreqDL_r17), 0, 16383);
    }
    if (value.has_neighCellId_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.neighCellId_r17), 0, 503);
    }
    if (value.has_neighCRS_muting_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.neighCRS_muting_r17), 0, 0);
    }
    if (value.has_neighMBSFN_SubframeConfigList_r17) {
        Encode_EUTRA_MBSFN_SubframeConfigList(enc, value.neighMBSFN_SubframeConfigList_r17);
    }
    if (value.has_neighNrofCRS_Ports_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.neighNrofCRS_Ports_r17), 0, 2);
    }
    if (value.has_neighV_Shift_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.neighV_Shift_r17), 0, 5);
    }
    return enc.Error();
}

ErrorCode Decode_LTE_NeighCellsCRS_AssistInfo_r17(Decoder& dec, LTE_NeighCellsCRS_AssistInfo_r17& value)
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
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.neighCarrierBandwidthDL_r17 = (LTE_NeighCellsCRS_AssistInfo_r17_NeighCarrierBandwidthDL_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 16383, tmp_value)) { goto fail; }
        value.neighCarrierFreqDL_r17 = (int64_t)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 503, tmp_value)) { goto fail; }
        value.neighCellId_r17 = (EUTRA_PhysCellId)tmp_value;
    }
    if (present_3) {
        value.neighCRS_muting_r17 = (LTE_NeighCellsCRS_AssistInfo_r17_NeighCRS_muting_r17)0;
    }
    if (present_4) {
        if (Decode_EUTRA_MBSFN_SubframeConfigList(dec, value.neighMBSFN_SubframeConfigList_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.neighNrofCRS_Ports_r17 = (LTE_NeighCellsCRS_AssistInfo_r17_NeighNrofCRS_Ports_r17)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.neighV_Shift_r17 = (LTE_NeighCellsCRS_AssistInfo_r17_NeighV_Shift_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTE_NeighCellsCRS_AssistInfo_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTE_NeighCellsCRS_AssistInfo_r17(LTE_NeighCellsCRS_AssistInfo_r17& value)
{
    if (value.has_neighCarrierBandwidthDL_r17) {
    }
    if (value.has_neighCarrierFreqDL_r17) {
    }
    if (value.has_neighCellId_r17) {
    }
    if (value.has_neighCRS_muting_r17) {
    }
    if (value.has_neighMBSFN_SubframeConfigList_r17) {
        Free_EUTRA_MBSFN_SubframeConfigList(value.neighMBSFN_SubframeConfigList_r17);
    }
    if (value.has_neighNrofCRS_Ports_r17) {
    }
    if (value.has_neighV_Shift_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(Encoder& enc, const LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_shortBitmap:
        enc.WriteFixedBitString(value.u.shortBitmap.bytes, value.u.shortBitmap.bitLength, 4, 4);
        break;
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_mediumBitmap:
        enc.WriteFixedBitString(value.u.mediumBitmap.bytes, value.u.mediumBitmap.bitLength, 8, 8);
        break;
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_longBitmap:
        enc.WriteFixedBitString(value.u.longBitmap.bytes, value.u.longBitmap.bitLength, 64, 64);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(Decoder& dec, LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag)root_index;
    switch (value.tag) {
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_shortBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.shortBitmap.bytes = string_bytes;
        value.u.shortBitmap.bitLength = string_length;
        break;
    }
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_mediumBitmap: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.mediumBitmap.bytes = string_bytes;
        value.u.mediumBitmap.bitLength = string_length;
        break;
    }
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_longBitmap: {
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
    Free_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18& value)
{
    switch (value.tag) {
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_shortBitmap:
        std::free(value.u.shortBitmap.bytes);
        break;
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_mediumBitmap:
        std::free(value.u.mediumBitmap.bytes);
        break;
    case LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18_Tag_longBitmap:
        std::free(value.u.longBitmap.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_SSB_Config_r18(Encoder& enc, const LTM_SSB_Config_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ssb_Periodicity_r18);
    enc.WriteBit(value.has_ssb_PositionsInBurst_r18);
    enc.WriteBit(value.has_ss_PBCH_BlockPower_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Frequency_r18), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.subcarrierSpacing_r18), 0, 7);
    if (value.has_ssb_Periodicity_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ssb_Periodicity_r18), 0, 7);
    }
    if (value.has_ssb_PositionsInBurst_r18) {
        Encode_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(enc, value.ssb_PositionsInBurst_r18);
    }
    if (value.has_ss_PBCH_BlockPower_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ss_PBCH_BlockPower_r18), -60, 50);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_SSB_Config_r18(Decoder& dec, LTM_SSB_Config_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.ssb_Frequency_r18 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.subcarrierSpacing_r18 = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssb_Periodicity_r18 = (LTM_SSB_Config_r18_Ssb_Periodicity_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(dec, value.ssb_PositionsInBurst_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-60, 50, tmp_value)) { goto fail; }
        value.ss_PBCH_BlockPower_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_SSB_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_SSB_Config_r18(LTM_SSB_Config_r18& value)
{
    if (value.has_ssb_Periodicity_r18) {
    }
    if (value.has_ssb_PositionsInBurst_r18) {
        Free_LTM_SSB_Config_r18_Ssb_PositionsInBurst_r18(value.ssb_PositionsInBurst_r18);
    }
    if (value.has_ss_PBCH_BlockPower_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_TCI_Info_r18(Encoder& enc, const LTM_TCI_Info_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ltm_DL_OrJointTCI_StateToAddModList_r18);
    enc.WriteBit(value.has_ltm_DL_OrJointTCI_StateToReleaseList_r18);
    enc.WriteBit(value.has_ltm_UL_TCI_StateToAddModList_r18);
    enc.WriteBit(value.has_ltm_UL_TCI_StateToReleaseList_r18);
    enc.WriteBit(value.has_ltm_NZP_CSI_RS_ResourceToAddModList_r18);
    enc.WriteBit(value.has_ltm_NZP_CSI_RS_ResourceToReleaseList_r18);
    enc.WriteBit(value.has_ltm_NZP_CSI_RS_ResourceSetToAddModList_r18);
    enc.WriteBit(value.has_ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18);
    enc.WriteBit(value.has_pathlossReferenceRS_ToAddModList_r18);
    enc.WriteBit(value.has_pathlossReferenceRS_ToReleaseList_r18);
    enc.WriteBit(value.has_unifiedTCI_StateType_r18);
    if (value.has_ltm_DL_OrJointTCI_StateToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_DL_OrJointTCI_StateToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_DL_OrJointTCI_StateToAddModList_r18_count; ++i) {
    Encode_CandidateTCI_State_r18(enc, value.ltm_DL_OrJointTCI_StateToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_DL_OrJointTCI_StateToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items[i]), 0, 127);
}
    }
    if (value.has_ltm_UL_TCI_StateToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_UL_TCI_StateToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_UL_TCI_StateToAddModList_r18_count; ++i) {
    Encode_CandidateTCI_UL_State_r18(enc, value.ltm_UL_TCI_StateToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_UL_TCI_StateToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_UL_TCI_StateToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_UL_TCI_StateToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_UL_TCI_StateToReleaseList_r18_items[i]), 0, 63);
}
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count; ++i) {
    Encode_NZP_CSI_RS_Resource(enc, value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items[i]), 0, 191);
}
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceSetToAddModList_r18) {
enc.WriteConstrainedLength(value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count; ++i) {
    Encode_NZP_CSI_RS_ResourceSet(enc, value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items[i]);
}
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18) {
enc.WriteConstrainedLength(value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items[i]), 0, 63);
}
    }
    if (value.has_pathlossReferenceRS_ToAddModList_r18) {
enc.WriteConstrainedLength(value.pathlossReferenceRS_ToAddModList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRS_ToAddModList_r18_count; ++i) {
    Encode_PathlossReferenceRS_r17(enc, value.pathlossReferenceRS_ToAddModList_r18_items[i]);
}
    }
    if (value.has_pathlossReferenceRS_ToReleaseList_r18) {
enc.WriteConstrainedLength(value.pathlossReferenceRS_ToReleaseList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pathlossReferenceRS_ToReleaseList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.pathlossReferenceRS_ToReleaseList_r18_items[i]), 0, 63);
}
    }
    if (value.has_unifiedTCI_StateType_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.unifiedTCI_StateType_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_TCI_Info_r18(Decoder& dec, LTM_TCI_Info_r18& value)
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
    if (present_0) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_DL_OrJointTCI_StateToAddModList_r18_count)) { goto fail; }
if (value.ltm_DL_OrJointTCI_StateToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_DL_OrJointTCI_StateToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_DL_OrJointTCI_StateToAddModList_r18_count > 0u) {
    value.ltm_DL_OrJointTCI_StateToAddModList_r18_items = (CandidateTCI_State_r18*)std::malloc((std::size_t)value.ltm_DL_OrJointTCI_StateToAddModList_r18_count * sizeof(CandidateTCI_State_r18));
    if (value.ltm_DL_OrJointTCI_StateToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_DL_OrJointTCI_StateToAddModList_r18_items, 0, (std::size_t)value.ltm_DL_OrJointTCI_StateToAddModList_r18_count * sizeof(CandidateTCI_State_r18));
}
for (std::uint32_t i = 0; i < value.ltm_DL_OrJointTCI_StateToAddModList_r18_count; ++i) {
    if (Decode_CandidateTCI_State_r18(dec, value.ltm_DL_OrJointTCI_StateToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_1) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count)) { goto fail; }
if (value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count > 0u) {
    value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items = (TCI_StateId*)std::malloc((std::size_t)value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count * sizeof(TCI_StateId));
    if (value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items, 0, (std::size_t)value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count * sizeof(TCI_StateId));
}
for (std::uint32_t i = 0; i < value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
    value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items[i] = (TCI_StateId)tmp_value;
}
    }
    if (present_2) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_UL_TCI_StateToAddModList_r18_count)) { goto fail; }
if (value.ltm_UL_TCI_StateToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_UL_TCI_StateToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_UL_TCI_StateToAddModList_r18_count > 0u) {
    value.ltm_UL_TCI_StateToAddModList_r18_items = (CandidateTCI_UL_State_r18*)std::malloc((std::size_t)value.ltm_UL_TCI_StateToAddModList_r18_count * sizeof(CandidateTCI_UL_State_r18));
    if (value.ltm_UL_TCI_StateToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_UL_TCI_StateToAddModList_r18_items, 0, (std::size_t)value.ltm_UL_TCI_StateToAddModList_r18_count * sizeof(CandidateTCI_UL_State_r18));
}
for (std::uint32_t i = 0; i < value.ltm_UL_TCI_StateToAddModList_r18_count; ++i) {
    if (Decode_CandidateTCI_UL_State_r18(dec, value.ltm_UL_TCI_StateToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_3) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_UL_TCI_StateToReleaseList_r18_count)) { goto fail; }
if (value.ltm_UL_TCI_StateToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_UL_TCI_StateToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_UL_TCI_StateToReleaseList_r18_count > 0u) {
    value.ltm_UL_TCI_StateToReleaseList_r18_items = (TCI_UL_StateId_r17*)std::malloc((std::size_t)value.ltm_UL_TCI_StateToReleaseList_r18_count * sizeof(TCI_UL_StateId_r17));
    if (value.ltm_UL_TCI_StateToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_UL_TCI_StateToReleaseList_r18_items, 0, (std::size_t)value.ltm_UL_TCI_StateToReleaseList_r18_count * sizeof(TCI_UL_StateId_r17));
}
for (std::uint32_t i = 0; i < value.ltm_UL_TCI_StateToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.ltm_UL_TCI_StateToReleaseList_r18_items[i] = (TCI_UL_StateId_r17)tmp_value;
}
    }
    if (present_4) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count)) { goto fail; }
if (value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count > 0u) {
    value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items = (NZP_CSI_RS_Resource*)std::malloc((std::size_t)value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count * sizeof(NZP_CSI_RS_Resource));
    if (value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items, 0, (std::size_t)value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count * sizeof(NZP_CSI_RS_Resource));
}
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count; ++i) {
    if (Decode_NZP_CSI_RS_Resource(dec, value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_5) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count)) { goto fail; }
if (value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count > 0u) {
    value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items = (NZP_CSI_RS_ResourceId*)std::malloc((std::size_t)value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count * sizeof(NZP_CSI_RS_ResourceId));
    if (value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items, 0, (std::size_t)value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count * sizeof(NZP_CSI_RS_ResourceId));
}
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
    value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items[i] = (NZP_CSI_RS_ResourceId)tmp_value;
}
    }
    if (present_6) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count)) { goto fail; }
if (value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count > 0u) {
    value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items = (NZP_CSI_RS_ResourceSet*)std::malloc((std::size_t)value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count * sizeof(NZP_CSI_RS_ResourceSet));
    if (value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items, 0, (std::size_t)value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count * sizeof(NZP_CSI_RS_ResourceSet));
}
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count; ++i) {
    if (Decode_NZP_CSI_RS_ResourceSet(dec, value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_7) {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count)) { goto fail; }
if (value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count > 0u) {
    value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items = (NZP_CSI_RS_ResourceSetId*)std::malloc((std::size_t)value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count * sizeof(NZP_CSI_RS_ResourceSetId));
    if (value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items, 0, (std::size_t)value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count * sizeof(NZP_CSI_RS_ResourceSetId));
}
for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items[i] = (NZP_CSI_RS_ResourceSetId)tmp_value;
}
    }
    if (present_8) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRS_ToAddModList_r18_count)) { goto fail; }
if (value.pathlossReferenceRS_ToAddModList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRS_ToAddModList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRS_ToAddModList_r18_count > 0u) {
    value.pathlossReferenceRS_ToAddModList_r18_items = (PathlossReferenceRS_r17*)std::malloc((std::size_t)value.pathlossReferenceRS_ToAddModList_r18_count * sizeof(PathlossReferenceRS_r17));
    if (value.pathlossReferenceRS_ToAddModList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRS_ToAddModList_r18_items, 0, (std::size_t)value.pathlossReferenceRS_ToAddModList_r18_count * sizeof(PathlossReferenceRS_r17));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRS_ToAddModList_r18_count; ++i) {
    if (Decode_PathlossReferenceRS_r17(dec, value.pathlossReferenceRS_ToAddModList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    if (present_9) {
if (!dec.ReadConstrainedLength(0u, 0u, value.pathlossReferenceRS_ToReleaseList_r18_count)) { goto fail; }
if (value.pathlossReferenceRS_ToReleaseList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pathlossReferenceRS_ToReleaseList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pathlossReferenceRS_ToReleaseList_r18_count > 0u) {
    value.pathlossReferenceRS_ToReleaseList_r18_items = (PathlossReferenceRS_Id_r17*)std::malloc((std::size_t)value.pathlossReferenceRS_ToReleaseList_r18_count * sizeof(PathlossReferenceRS_Id_r17));
    if (value.pathlossReferenceRS_ToReleaseList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pathlossReferenceRS_ToReleaseList_r18_items, 0, (std::size_t)value.pathlossReferenceRS_ToReleaseList_r18_count * sizeof(PathlossReferenceRS_Id_r17));
}
for (std::uint32_t i = 0; i < value.pathlossReferenceRS_ToReleaseList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.pathlossReferenceRS_ToReleaseList_r18_items[i] = (PathlossReferenceRS_Id_r17)tmp_value;
}
    }
    if (present_10) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.unifiedTCI_StateType_r18 = (LTM_TCI_Info_r18_UnifiedTCI_StateType_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_TCI_Info_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_TCI_Info_r18(LTM_TCI_Info_r18& value)
{
    if (value.has_ltm_DL_OrJointTCI_StateToAddModList_r18) {
        if (value.ltm_DL_OrJointTCI_StateToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_DL_OrJointTCI_StateToAddModList_r18_count; ++i) {
                Free_CandidateTCI_State_r18(value.ltm_DL_OrJointTCI_StateToAddModList_r18_items[i]);
            }
            std::free(value.ltm_DL_OrJointTCI_StateToAddModList_r18_items);
            value.ltm_DL_OrJointTCI_StateToAddModList_r18_items = nullptr;
        }
        value.ltm_DL_OrJointTCI_StateToAddModList_r18_count = 0;
    }
    if (value.has_ltm_DL_OrJointTCI_StateToReleaseList_r18) {
        if (value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items);
            value.ltm_DL_OrJointTCI_StateToReleaseList_r18_items = nullptr;
        }
        value.ltm_DL_OrJointTCI_StateToReleaseList_r18_count = 0;
    }
    if (value.has_ltm_UL_TCI_StateToAddModList_r18) {
        if (value.ltm_UL_TCI_StateToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_UL_TCI_StateToAddModList_r18_count; ++i) {
                Free_CandidateTCI_UL_State_r18(value.ltm_UL_TCI_StateToAddModList_r18_items[i]);
            }
            std::free(value.ltm_UL_TCI_StateToAddModList_r18_items);
            value.ltm_UL_TCI_StateToAddModList_r18_items = nullptr;
        }
        value.ltm_UL_TCI_StateToAddModList_r18_count = 0;
    }
    if (value.has_ltm_UL_TCI_StateToReleaseList_r18) {
        if (value.ltm_UL_TCI_StateToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_UL_TCI_StateToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_UL_TCI_StateToReleaseList_r18_items);
            value.ltm_UL_TCI_StateToReleaseList_r18_items = nullptr;
        }
        value.ltm_UL_TCI_StateToReleaseList_r18_count = 0;
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceToAddModList_r18) {
        if (value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count; ++i) {
                Free_NZP_CSI_RS_Resource(value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items[i]);
            }
            std::free(value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items);
            value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_items = nullptr;
        }
        value.ltm_NZP_CSI_RS_ResourceToAddModList_r18_count = 0;
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceToReleaseList_r18) {
        if (value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items);
            value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_items = nullptr;
        }
        value.ltm_NZP_CSI_RS_ResourceToReleaseList_r18_count = 0;
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceSetToAddModList_r18) {
        if (value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count; ++i) {
                Free_NZP_CSI_RS_ResourceSet(value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items[i]);
            }
            std::free(value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items);
            value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_items = nullptr;
        }
        value.ltm_NZP_CSI_RS_ResourceSetToAddModList_r18_count = 0;
    }
    if (value.has_ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18) {
        if (value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count; ++i) {
            }
            std::free(value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items);
            value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_items = nullptr;
        }
        value.ltm_NZP_CSI_RS_ResourceSetToReleaseList_r18_count = 0;
    }
    if (value.has_pathlossReferenceRS_ToAddModList_r18) {
        if (value.pathlossReferenceRS_ToAddModList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRS_ToAddModList_r18_count; ++i) {
                Free_PathlossReferenceRS_r17(value.pathlossReferenceRS_ToAddModList_r18_items[i]);
            }
            std::free(value.pathlossReferenceRS_ToAddModList_r18_items);
            value.pathlossReferenceRS_ToAddModList_r18_items = nullptr;
        }
        value.pathlossReferenceRS_ToAddModList_r18_count = 0;
    }
    if (value.has_pathlossReferenceRS_ToReleaseList_r18) {
        if (value.pathlossReferenceRS_ToReleaseList_r18_items != nullptr) {
            for (std::uint32_t i = 0; i < value.pathlossReferenceRS_ToReleaseList_r18_count; ++i) {
            }
            std::free(value.pathlossReferenceRS_ToReleaseList_r18_items);
            value.pathlossReferenceRS_ToReleaseList_r18_items = nullptr;
        }
        value.pathlossReferenceRS_ToReleaseList_r18_count = 0;
    }
    if (value.has_unifiedTCI_StateType_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_Candidate_r18(Encoder& enc, const LTM_Candidate_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_ltm_CandidatePCI_r18);
    enc.WriteBit(value.has_ltm_SSB_Config_r18);
    enc.WriteBit(value.ltm_CandidateConfig_r18 != nullptr);
    enc.WriteBit(value.has_ltm_ConfigComplete_r18);
    enc.WriteBit(value.ltm_EarlyUL_SyncConfig_r18 != nullptr);
    enc.WriteBit(value.ltm_EarlyUL_SyncConfigSUL_r18 != nullptr);
    enc.WriteBit(value.has_ltm_TCI_Info_r18);
    enc.WriteBit(value.has_ltm_NoResetID_r18);
    enc.WriteBit(value.has_ltm_UE_MeasuredTA_ID_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CandidateId_r18), 1, 8);
    if (value.has_ltm_CandidatePCI_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CandidatePCI_r18), 0, 1007);
    }
    if (value.has_ltm_SSB_Config_r18) {
        Encode_LTM_SSB_Config_r18(enc, value.ltm_SSB_Config_r18);
    }
    if (value.ltm_CandidateConfig_r18 != nullptr) {
        if (value.ltm_CandidateConfig_r18 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_RRCReconfiguration(enc, *value.ltm_CandidateConfig_r18);
        }
    }
    if (value.has_ltm_ConfigComplete_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_ConfigComplete_r18), 0, 0);
    }
    if (value.ltm_EarlyUL_SyncConfig_r18 != nullptr) {
        if (value.ltm_EarlyUL_SyncConfig_r18 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_EarlyUL_SyncConfig_r18(enc, *value.ltm_EarlyUL_SyncConfig_r18);
        }
    }
    if (value.ltm_EarlyUL_SyncConfigSUL_r18 != nullptr) {
        if (value.ltm_EarlyUL_SyncConfigSUL_r18 == nullptr) {
            enc.Fail(ErrorCode_MissingMandatoryField);
        } else {
            EncodeContained_EarlyUL_SyncConfig_r18(enc, *value.ltm_EarlyUL_SyncConfigSUL_r18);
        }
    }
    if (value.has_ltm_TCI_Info_r18) {
        Encode_LTM_TCI_Info_r18(enc, value.ltm_TCI_Info_r18);
    }
    if (value.has_ltm_NoResetID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_NoResetID_r18), 1, 9);
    }
    if (value.has_ltm_UE_MeasuredTA_ID_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ltm_UE_MeasuredTA_ID_r18), 1, 9);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_Candidate_r18(Decoder& dec, LTM_Candidate_r18& value)
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
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.ltm_CandidateId_r18 = (LTM_CandidateId_r18)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1007, tmp_value)) { goto fail; }
        value.ltm_CandidatePCI_r18 = (PhysCellId)tmp_value;
    }
    if (present_1) {
        if (Decode_LTM_SSB_Config_r18(dec, value.ltm_SSB_Config_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
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
        value.ltm_CandidateConfig_r18 = containing_value;
    }
    if (present_3) {
        value.ltm_ConfigComplete_r18 = (LTM_Candidate_r18_Ltm_ConfigComplete_r18)0;
    }
    if (present_4) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        EarlyUL_SyncConfig_r18* containing_value = (EarlyUL_SyncConfig_r18*)std::malloc(sizeof(EarlyUL_SyncConfig_r18));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_EarlyUL_SyncConfig_r18(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_EarlyUL_SyncConfig_r18(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_EarlyUL_SyncConfig_r18(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.ltm_EarlyUL_SyncConfig_r18 = containing_value;
    }
    if (present_5) {
        if (dec.ContainingDepth() >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    dec.Fail(ErrorCode_ContainingDepthExceeded); goto fail;
        }
        std::vector<std::uint8_t> containing_bytes;
        if (!dec.ReadOpenType(containing_bytes)) { goto fail; }
        Decoder containing_sub(containing_bytes.data(), containing_bytes.size());
        containing_sub.SetContainingDepth(dec.ContainingDepth() + 1);
        EarlyUL_SyncConfig_r18* containing_value = (EarlyUL_SyncConfig_r18*)std::malloc(sizeof(EarlyUL_SyncConfig_r18));
        if (containing_value == nullptr) {
    dec.Fail(ErrorCode_OutOfMemory); goto fail;
        }
        std::memset(containing_value, 0, sizeof(*containing_value));
        if (Decode_EarlyUL_SyncConfig_r18(containing_sub, *containing_value) != ErrorCode_Ok) {
    Free_EarlyUL_SyncConfig_r18(*containing_value);
    std::free(containing_value);
    dec.Fail(containing_sub.Error()); goto fail;
        }
        if (!containing_sub.CheckOpenTypeEnd()) {
    Free_EarlyUL_SyncConfig_r18(*containing_value);
    std::free(containing_value);
    dec.Fail(ErrorCode_OpenTypeOverrun); goto fail;
        }
        value.ltm_EarlyUL_SyncConfigSUL_r18 = containing_value;
    }
    if (present_6) {
        if (Decode_LTM_TCI_Info_r18(dec, value.ltm_TCI_Info_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_7) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.ltm_NoResetID_r18 = (int64_t)tmp_value;
    }
    if (present_8) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 9, tmp_value)) { goto fail; }
        value.ltm_UE_MeasuredTA_ID_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_Candidate_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_Candidate_r18(LTM_Candidate_r18& value)
{
    if (value.has_ltm_CandidatePCI_r18) {
    }
    if (value.has_ltm_SSB_Config_r18) {
        Free_LTM_SSB_Config_r18(value.ltm_SSB_Config_r18);
    }
    if (value.ltm_CandidateConfig_r18 != nullptr) {
        if (value.ltm_CandidateConfig_r18 != nullptr) {
            Free_RRCReconfiguration(*value.ltm_CandidateConfig_r18);
            std::free(value.ltm_CandidateConfig_r18);
            value.ltm_CandidateConfig_r18 = nullptr;
        }
    }
    if (value.has_ltm_ConfigComplete_r18) {
    }
    if (value.ltm_EarlyUL_SyncConfig_r18 != nullptr) {
        if (value.ltm_EarlyUL_SyncConfig_r18 != nullptr) {
            Free_EarlyUL_SyncConfig_r18(*value.ltm_EarlyUL_SyncConfig_r18);
            std::free(value.ltm_EarlyUL_SyncConfig_r18);
            value.ltm_EarlyUL_SyncConfig_r18 = nullptr;
        }
    }
    if (value.ltm_EarlyUL_SyncConfigSUL_r18 != nullptr) {
        if (value.ltm_EarlyUL_SyncConfigSUL_r18 != nullptr) {
            Free_EarlyUL_SyncConfig_r18(*value.ltm_EarlyUL_SyncConfigSUL_r18);
            std::free(value.ltm_EarlyUL_SyncConfigSUL_r18);
            value.ltm_EarlyUL_SyncConfigSUL_r18 = nullptr;
        }
    }
    if (value.has_ltm_TCI_Info_r18) {
        Free_LTM_TCI_Info_r18(value.ltm_TCI_Info_r18);
    }
    if (value.has_ltm_NoResetID_r18) {
    }
    if (value.has_ltm_UE_MeasuredTA_ID_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_ReportContent_r18(Encoder& enc, const LTM_ReportContent_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_spCellInclusion_r18);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrOfReportedCells_r18), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrOfReportedRS_PerCell_r18), 0, 3);
    if (value.has_spCellInclusion_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.spCellInclusion_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_ReportContent_r18(Decoder& dec, LTM_ReportContent_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrOfReportedCells_r18 = (LTM_ReportContent_r18_NrOfReportedCells_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.nrOfReportedRS_PerCell_r18 = (LTM_ReportContent_r18_NrOfReportedRS_PerCell_r18)tmp_value;
    }
    if (present_0) {
        value.spCellInclusion_r18 = (LTM_ReportContent_r18_SpCellInclusion_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_ReportContent_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_ReportContent_r18(LTM_ReportContent_r18& value)
{
    if (value.has_spCellInclusion_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(Encoder& enc, const LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18& value)
{
    (void)value;
    Encode_CSI_ReportPeriodicityAndOffset(enc, value.reportSlotConfig_r18);
enc.WriteConstrainedLength(value.pucch_CSI_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_r18_count; ++i) {
    Encode_PUCCH_CSI_Resource(enc, value.pucch_CSI_ResourceList_r18_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(Decoder& dec, LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CSI_ReportPeriodicityAndOffset(dec, value.reportSlotConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pucch_CSI_ResourceList_r18_count)) { goto fail; }
if (value.pucch_CSI_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pucch_CSI_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pucch_CSI_ResourceList_r18_count > 0u) {
    value.pucch_CSI_ResourceList_r18_items = (PUCCH_CSI_Resource*)std::malloc((std::size_t)value.pucch_CSI_ResourceList_r18_count * sizeof(PUCCH_CSI_Resource));
    if (value.pucch_CSI_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pucch_CSI_ResourceList_r18_items, 0, (std::size_t)value.pucch_CSI_ResourceList_r18_count * sizeof(PUCCH_CSI_Resource));
}
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_r18_count; ++i) {
    if (Decode_PUCCH_CSI_Resource(dec, value.pucch_CSI_ResourceList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18& value)
{
    Free_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig_r18);
    if (value.pucch_CSI_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_r18_count; ++i) {
            Free_PUCCH_CSI_Resource(value.pucch_CSI_ResourceList_r18_items[i]);
        }
        std::free(value.pucch_CSI_ResourceList_r18_items);
        value.pucch_CSI_ResourceList_r18_items = nullptr;
    }
    value.pucch_CSI_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(Encoder& enc, const LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18& value)
{
    (void)value;
    Encode_CSI_ReportPeriodicityAndOffset(enc, value.reportSlotConfig_r18);
enc.WriteConstrainedLength(value.pucch_CSI_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_r18_count; ++i) {
    Encode_PUCCH_CSI_Resource(enc, value.pucch_CSI_ResourceList_r18_items[i]);
}
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(Decoder& dec, LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CSI_ReportPeriodicityAndOffset(dec, value.reportSlotConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.pucch_CSI_ResourceList_r18_count)) { goto fail; }
if (value.pucch_CSI_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.pucch_CSI_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.pucch_CSI_ResourceList_r18_count > 0u) {
    value.pucch_CSI_ResourceList_r18_items = (PUCCH_CSI_Resource*)std::malloc((std::size_t)value.pucch_CSI_ResourceList_r18_count * sizeof(PUCCH_CSI_Resource));
    if (value.pucch_CSI_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.pucch_CSI_ResourceList_r18_items, 0, (std::size_t)value.pucch_CSI_ResourceList_r18_count * sizeof(PUCCH_CSI_Resource));
}
for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_r18_count; ++i) {
    if (Decode_PUCCH_CSI_Resource(dec, value.pucch_CSI_ResourceList_r18_items[i]) != ErrorCode_Ok) { goto fail; }
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18& value)
{
    Free_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig_r18);
    if (value.pucch_CSI_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.pucch_CSI_ResourceList_r18_count; ++i) {
            Free_PUCCH_CSI_Resource(value.pucch_CSI_ResourceList_r18_items[i]);
        }
        std::free(value.pucch_CSI_ResourceList_r18_items);
        value.pucch_CSI_ResourceList_r18_items = nullptr;
    }
    value.pucch_CSI_ResourceList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(Encoder& enc, const LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18& value)
{
    (void)value;
    Encode_CSI_ReportPeriodicityAndOffset(enc, value.reportSlotConfig_r18);
enc.WriteConstrainedLength(value.reportSlotOffsetList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetList_r18_items[i]), 0, 128);
}
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_2_r18_items[i]), 0, 128);
}
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_1_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_1_r18_items[i]), 0, 128);
}
    enc.WriteConstrainedInteger((std::int64_t)(value.p0alpha), 0, 29);
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(Decoder& dec, LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_CSI_ReportPeriodicityAndOffset(dec, value.reportSlotConfig_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetList_r18_count)) { goto fail; }
if (value.reportSlotOffsetList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetList_r18_count > 0u) {
    value.reportSlotOffsetList_r18_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetList_r18_count * sizeof(int64_t));
    if (value.reportSlotOffsetList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetList_r18_items, 0, (std::size_t)value.reportSlotOffsetList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_2_r18_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_2_r18_count > 0u) {
    value.reportSlotOffsetListDCI_0_2_r18_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_2_r18_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_2_r18_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_2_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_1_r18_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_1_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_1_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_1_r18_count > 0u) {
    value.reportSlotOffsetListDCI_0_1_r18_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_1_r18_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_1_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_1_r18_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_1_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_1_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 29, tmp_value)) { goto fail; }
        value.p0alpha = (P0_PUSCH_AlphaSetId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18& value)
{
    Free_CSI_ReportPeriodicityAndOffset(value.reportSlotConfig_r18);
    if (value.reportSlotOffsetList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r18_count; ++i) {
        }
        std::free(value.reportSlotOffsetList_r18_items);
        value.reportSlotOffsetList_r18_items = nullptr;
    }
    value.reportSlotOffsetList_r18_count = 0;
    if (value.reportSlotOffsetListDCI_0_2_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r18_count; ++i) {
        }
        std::free(value.reportSlotOffsetListDCI_0_2_r18_items);
        value.reportSlotOffsetListDCI_0_2_r18_items = nullptr;
    }
    value.reportSlotOffsetListDCI_0_2_r18_count = 0;
    if (value.reportSlotOffsetListDCI_0_1_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r18_count; ++i) {
        }
        std::free(value.reportSlotOffsetListDCI_0_1_r18_items);
        value.reportSlotOffsetListDCI_0_1_r18_items = nullptr;
    }
    value.reportSlotOffsetListDCI_0_1_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(Encoder& enc, const LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18& value)
{
    (void)value;
enc.WriteConstrainedLength(value.reportSlotOffsetList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetList_r18_items[i]), 0, 128);
}
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_2_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_2_r18_items[i]), 0, 128);
}
enc.WriteConstrainedLength(value.reportSlotOffsetListDCI_0_1_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.reportSlotOffsetListDCI_0_1_r18_items[i]), 0, 128);
}
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(Decoder& dec, LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetList_r18_count)) { goto fail; }
if (value.reportSlotOffsetList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetList_r18_count > 0u) {
    value.reportSlotOffsetList_r18_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetList_r18_count * sizeof(int64_t));
    if (value.reportSlotOffsetList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetList_r18_items, 0, (std::size_t)value.reportSlotOffsetList_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetList_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_2_r18_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_2_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_2_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_2_r18_count > 0u) {
    value.reportSlotOffsetListDCI_0_2_r18_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_2_r18_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_2_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_2_r18_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_2_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_2_r18_items[i] = (int64_t)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.reportSlotOffsetListDCI_0_1_r18_count)) { goto fail; }
if (value.reportSlotOffsetListDCI_0_1_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.reportSlotOffsetListDCI_0_1_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.reportSlotOffsetListDCI_0_1_r18_count > 0u) {
    value.reportSlotOffsetListDCI_0_1_r18_items = (int64_t*)std::malloc((std::size_t)value.reportSlotOffsetListDCI_0_1_r18_count * sizeof(int64_t));
    if (value.reportSlotOffsetListDCI_0_1_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.reportSlotOffsetListDCI_0_1_r18_items, 0, (std::size_t)value.reportSlotOffsetListDCI_0_1_r18_count * sizeof(int64_t));
}
for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 128, tmp_value)) { goto fail; }
    value.reportSlotOffsetListDCI_0_1_r18_items[i] = (int64_t)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18& value)
{
    if (value.reportSlotOffsetList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetList_r18_count; ++i) {
        }
        std::free(value.reportSlotOffsetList_r18_items);
        value.reportSlotOffsetList_r18_items = nullptr;
    }
    value.reportSlotOffsetList_r18_count = 0;
    if (value.reportSlotOffsetListDCI_0_2_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_2_r18_count; ++i) {
        }
        std::free(value.reportSlotOffsetListDCI_0_2_r18_items);
        value.reportSlotOffsetListDCI_0_2_r18_items = nullptr;
    }
    value.reportSlotOffsetListDCI_0_2_r18_count = 0;
    if (value.reportSlotOffsetListDCI_0_1_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.reportSlotOffsetListDCI_0_1_r18_count; ++i) {
        }
        std::free(value.reportSlotOffsetListDCI_0_1_r18_items);
        value.reportSlotOffsetListDCI_0_1_r18_items = nullptr;
    }
    value.reportSlotOffsetListDCI_0_1_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(Encoder& enc, const LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18& value)
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
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_periodic_r18:
        Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(enc, value.u.periodic_r18);
        break;
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUCCH_r18:
        Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(enc, value.u.semiPersistentOnPUCCH_r18);
        break;
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUSCH_r18:
        Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(enc, value.u.semiPersistentOnPUSCH_r18);
        break;
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_aperiodic_r18:
        Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(enc, value.u.aperiodic_r18);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(Decoder& dec, LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18& value)
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
        value.tag = (LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag)(4 + extension_index);
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
    value.tag = (LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag)root_index;
    switch (value.tag) {
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_periodic_r18: {
        if (Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(dec, value.u.periodic_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUCCH_r18: {
        if (Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(dec, value.u.semiPersistentOnPUCCH_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUSCH_r18: {
        if (Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(dec, value.u.semiPersistentOnPUSCH_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_aperiodic_r18: {
        if (Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(dec, value.u.aperiodic_r18) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18& value)
{
    switch (value.tag) {
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_periodic_r18:
        Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Periodic_r18(value.u.periodic_r18);
        break;
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUCCH_r18:
        Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUCCH_r18(value.u.semiPersistentOnPUCCH_r18);
        break;
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_semiPersistentOnPUSCH_r18:
        Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_SemiPersistentOnPUSCH_r18(value.u.semiPersistentOnPUSCH_r18);
        break;
    case LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Tag_aperiodic_r18:
        Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18_Aperiodic_r18(value.u.aperiodic_r18);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ReportConfig_r18(Encoder& enc, const LTM_CSI_ReportConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CSI_ReportConfigId_r18), 0, 47);
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_ResourcesForChannelMeasurement_r18), 0, 111);
    Encode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(enc, value.ltm_ReportConfigType_r18);
    Encode_LTM_ReportContent_r18(enc, value.ltm_ReportContent_r18);
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ReportConfig_r18(Decoder& dec, LTM_CSI_ReportConfig_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 47, tmp_value)) { goto fail; }
        value.ltm_CSI_ReportConfigId_r18 = (LTM_CSI_ReportConfigId_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 111, tmp_value)) { goto fail; }
        value.ltm_ResourcesForChannelMeasurement_r18 = (LTM_CSI_ResourceConfigId_r18)tmp_value;
    }
    {
        if (Decode_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(dec, value.ltm_ReportConfigType_r18) != ErrorCode_Ok) { goto fail; }
    }
    {
        if (Decode_LTM_ReportContent_r18(dec, value.ltm_ReportContent_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ReportConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ReportConfig_r18(LTM_CSI_ReportConfig_r18& value)
{
    Free_LTM_CSI_ReportConfig_r18_Ltm_ReportConfigType_r18(value.ltm_ReportConfigType_r18);
    Free_LTM_ReportContent_r18(value.ltm_ReportContent_r18);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_SSB_ResourceSet_r18(Encoder& enc, const LTM_CSI_SSB_ResourceSet_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
enc.WriteConstrainedLength(value.ltm_CSI_SSB_ResourceList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CSI_SSB_ResourceList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CSI_SSB_ResourceList_r18_items[i]), 0, 63);
}
enc.WriteConstrainedLength(value.ltm_CandidateIdList_r18_count, 0u, 0u);
for (std::uint32_t i = 0; i < value.ltm_CandidateIdList_r18_count; ++i) {
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CandidateIdList_r18_items[i]), 1, 8);
}
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_SSB_ResourceSet_r18(Decoder& dec, LTM_CSI_SSB_ResourceSet_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CSI_SSB_ResourceList_r18_count)) { goto fail; }
if (value.ltm_CSI_SSB_ResourceList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CSI_SSB_ResourceList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CSI_SSB_ResourceList_r18_count > 0u) {
    value.ltm_CSI_SSB_ResourceList_r18_items = (SSB_Index*)std::malloc((std::size_t)value.ltm_CSI_SSB_ResourceList_r18_count * sizeof(SSB_Index));
    if (value.ltm_CSI_SSB_ResourceList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CSI_SSB_ResourceList_r18_items, 0, (std::size_t)value.ltm_CSI_SSB_ResourceList_r18_count * sizeof(SSB_Index));
}
for (std::uint32_t i = 0; i < value.ltm_CSI_SSB_ResourceList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
    value.ltm_CSI_SSB_ResourceList_r18_items[i] = (SSB_Index)tmp_value;
}
    }
    {
if (!dec.ReadConstrainedLength(0u, 0u, value.ltm_CandidateIdList_r18_count)) { goto fail; }
if (value.ltm_CandidateIdList_r18_count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.ltm_CandidateIdList_r18_count > 0u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.ltm_CandidateIdList_r18_count > 0u) {
    value.ltm_CandidateIdList_r18_items = (LTM_CandidateId_r18*)std::malloc((std::size_t)value.ltm_CandidateIdList_r18_count * sizeof(LTM_CandidateId_r18));
    if (value.ltm_CandidateIdList_r18_items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.ltm_CandidateIdList_r18_items, 0, (std::size_t)value.ltm_CandidateIdList_r18_count * sizeof(LTM_CandidateId_r18));
}
for (std::uint32_t i = 0; i < value.ltm_CandidateIdList_r18_count; ++i) {
    std::int64_t tmp_value = 0;
    if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
    value.ltm_CandidateIdList_r18_items[i] = (LTM_CandidateId_r18)tmp_value;
}
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_SSB_ResourceSet_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_SSB_ResourceSet_r18(LTM_CSI_SSB_ResourceSet_r18& value)
{
    if (value.ltm_CSI_SSB_ResourceList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ltm_CSI_SSB_ResourceList_r18_count; ++i) {
        }
        std::free(value.ltm_CSI_SSB_ResourceList_r18_items);
        value.ltm_CSI_SSB_ResourceList_r18_items = nullptr;
    }
    value.ltm_CSI_SSB_ResourceList_r18_count = 0;
    if (value.ltm_CandidateIdList_r18_items != nullptr) {
        for (std::uint32_t i = 0; i < value.ltm_CandidateIdList_r18_count; ++i) {
        }
        std::free(value.ltm_CandidateIdList_r18_items);
        value.ltm_CandidateIdList_r18_items = nullptr;
    }
    value.ltm_CandidateIdList_r18_count = 0;
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LTM_CSI_ResourceConfig_r18(Encoder& enc, const LTM_CSI_ResourceConfig_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.ltm_CSI_ResourceConfigId_r18), 0, 111);
    Encode_LTM_CSI_SSB_ResourceSet_r18(enc, value.ltm_CSI_SSB_ResourceSet_r18);
    return enc.Error();
}

ErrorCode Decode_LTM_CSI_ResourceConfig_r18(Decoder& dec, LTM_CSI_ResourceConfig_r18& value)
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
        value.ltm_CSI_ResourceConfigId_r18 = (LTM_CSI_ResourceConfigId_r18)tmp_value;
    }
    {
        if (Decode_LTM_CSI_SSB_ResourceSet_r18(dec, value.ltm_CSI_SSB_ResourceSet_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_LTM_CSI_ResourceConfig_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LTM_CSI_ResourceConfig_r18(LTM_CSI_ResourceConfig_r18& value)
{
    Free_LTM_CSI_SSB_ResourceSet_r18(value.ltm_CSI_SSB_ResourceSet_r18);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(Encoder& enc, const MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_RNTI:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.g_RNTI), 0, 65535);
        break;
    case MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_CS_RNTI:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.g_CS_RNTI), 0, 65535);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(Decoder& dec, MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag)root_index;
    switch (value.tag) {
    case MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_RNTI: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.u.g_RNTI = (RNTI_Value)tmp_value;
        break;
    }
    case MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_CS_RNTI: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 65535, tmp_value)) { goto fail; }
        value.u.g_CS_RNTI = (RNTI_Value)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17& value)
{
    switch (value.tag) {
    case MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_RNTI:
        break;
    case MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17_Tag_g_CS_RNTI:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(Encoder& enc, const DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_subMilliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.subMilliSeconds), 1, 31);
        break;
    case DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_milliSeconds:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.milliSeconds), 0, 31);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(Decoder& dec, DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag)root_index;
    switch (value.tag) {
    case DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_subMilliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 31, tmp_value)) { goto fail; }
        value.u.subMilliSeconds = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_milliSeconds: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.milliSeconds = (DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_MilliSeconds)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17& value)
{
    switch (value.tag) {
    case DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_subMilliSeconds:
        break;
    case DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17_Tag_milliSeconds:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(Encoder& enc, const DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 19);
    switch (value.tag) {
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10), 0, 9);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms20:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms20), 0, 19);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms32:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms32), 0, 31);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms40:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms40), 0, 39);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms60:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms60), 0, 59);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms64:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms64), 0, 63);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms70:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms70), 0, 69);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms80:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms80), 0, 79);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms128:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms128), 0, 127);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms160:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms160), 0, 159);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms256:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms256), 0, 255);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms320:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms320), 0, 319);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms512:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms512), 0, 511);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms640:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms640), 0, 639);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1024:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1024), 0, 1023);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1280:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms1280), 0, 1279);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2048:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2048), 0, 2047);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2560:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms2560), 0, 2559);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms5120:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms5120), 0, 5119);
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10240:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ms10240), 0, 10239);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(Decoder& dec, DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 19, root_index)) {
        goto fail;
    }
    value.tag = (DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag)root_index;
    switch (value.tag) {
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.u.ms10 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms20: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 19, tmp_value)) { goto fail; }
        value.u.ms20 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms32: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.u.ms32 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms40: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 39, tmp_value)) { goto fail; }
        value.u.ms40 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms60: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 59, tmp_value)) { goto fail; }
        value.u.ms60 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms64: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ms64 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms70: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 69, tmp_value)) { goto fail; }
        value.u.ms70 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms80: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 79, tmp_value)) { goto fail; }
        value.u.ms80 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms128: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.ms128 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms160: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.u.ms160 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms256: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 255, tmp_value)) { goto fail; }
        value.u.ms256 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms320: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 319, tmp_value)) { goto fail; }
        value.u.ms320 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms512: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 511, tmp_value)) { goto fail; }
        value.u.ms512 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms640: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 639, tmp_value)) { goto fail; }
        value.u.ms640 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1024: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.u.ms1024 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1280: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1279, tmp_value)) { goto fail; }
        value.u.ms1280 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2048: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2047, tmp_value)) { goto fail; }
        value.u.ms2048 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2560: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2559, tmp_value)) { goto fail; }
        value.u.ms2560 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms5120: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5119, tmp_value)) { goto fail; }
        value.u.ms5120 = (int64_t)tmp_value;
        break;
    }
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10240: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10239, tmp_value)) { goto fail; }
        value.u.ms10240 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17& value)
{
    switch (value.tag) {
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms20:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms32:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms40:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms60:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms64:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms70:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms80:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms128:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms160:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms256:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms320:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms512:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms640:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1024:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms1280:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2048:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms2560:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms5120:
        break;
    case DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17_Tag_ms10240:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_DRX_ConfigPTM_r17(Encoder& enc, const DRX_ConfigPTM_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_drx_HARQ_RTT_TimerDL_PTM_r17);
    enc.WriteBit(value.has_drx_RetransmissionTimerDL_PTM_r17);
    Encode_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(enc, value.drx_onDurationTimerPTM_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_InactivityTimerPTM_r17), 0, 31);
    if (value.has_drx_HARQ_RTT_TimerDL_PTM_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_HARQ_RTT_TimerDL_PTM_r17), 0, 56);
    }
    if (value.has_drx_RetransmissionTimerDL_PTM_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.drx_RetransmissionTimerDL_PTM_r17), 0, 31);
    }
    Encode_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(enc, value.drx_LongCycleStartOffsetPTM_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.drx_SlotOffsetPTM_r17), 0, 31);
    return enc.Error();
}

ErrorCode Decode_DRX_ConfigPTM_r17(Decoder& dec, DRX_ConfigPTM_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    {
        if (Decode_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(dec, value.drx_onDurationTimerPTM_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_InactivityTimerPTM_r17 = (DRX_ConfigPTM_r17_Drx_InactivityTimerPTM_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 56, tmp_value)) { goto fail; }
        value.drx_HARQ_RTT_TimerDL_PTM_r17 = (int64_t)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_RetransmissionTimerDL_PTM_r17 = (DRX_ConfigPTM_r17_Drx_RetransmissionTimerDL_PTM_r17)tmp_value;
    }
    {
        if (Decode_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(dec, value.drx_LongCycleStartOffsetPTM_r17) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.drx_SlotOffsetPTM_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_DRX_ConfigPTM_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_DRX_ConfigPTM_r17(DRX_ConfigPTM_r17& value)
{
    Free_DRX_ConfigPTM_r17_Drx_onDurationTimerPTM_r17(value.drx_onDurationTimerPTM_r17);
    if (value.has_drx_HARQ_RTT_TimerDL_PTM_r17) {
    }
    if (value.has_drx_RetransmissionTimerDL_PTM_r17) {
    }
    Free_DRX_ConfigPTM_r17_Drx_LongCycleStartOffsetPTM_r17(value.drx_LongCycleStartOffsetPTM_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_DRX_ConfigPTM_r17(Encoder& enc, const SetupRelease_DRX_ConfigPTM_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_DRX_ConfigPTM_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_DRX_ConfigPTM_r17_Tag_setup:
        Encode_DRX_ConfigPTM_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_DRX_ConfigPTM_r17(Decoder& dec, SetupRelease_DRX_ConfigPTM_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_DRX_ConfigPTM_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_DRX_ConfigPTM_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_DRX_ConfigPTM_r17_Tag_setup: {
        if (Decode_DRX_ConfigPTM_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_DRX_ConfigPTM_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_DRX_ConfigPTM_r17(SetupRelease_DRX_ConfigPTM_r17& value)
{
    switch (value.tag) {
    case SetupRelease_DRX_ConfigPTM_r17_Tag_release:
        break;
    case SetupRelease_DRX_ConfigPTM_r17_Tag_setup:
        Free_DRX_ConfigPTM_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MBS_RNTI_SpecificConfig_r17(Encoder& enc, const MBS_RNTI_SpecificConfig_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_drx_ConfigPTM_r17);
    enc.WriteBit(value.has_harq_FeedbackEnablerMulticast_r17);
    enc.WriteBit(value.has_harq_FeedbackOptionMulticast_r17);
    enc.WriteBit(value.has_pdsch_AggregationFactor_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.mbs_RNTI_SpecificConfigId_r17), 0, 15);
    Encode_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(enc, value.groupCommon_RNTI_r17);
    if (value.has_drx_ConfigPTM_r17) {
        Encode_SetupRelease_DRX_ConfigPTM_r17(enc, value.drx_ConfigPTM_r17);
    }
    if (value.has_harq_FeedbackEnablerMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_FeedbackEnablerMulticast_r17), 0, 1);
    }
    if (value.has_harq_FeedbackOptionMulticast_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.harq_FeedbackOptionMulticast_r17), 0, 1);
    }
    if (value.has_pdsch_AggregationFactor_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.pdsch_AggregationFactor_r17), 0, 2);
    }
    return enc.Error();
}

ErrorCode Decode_MBS_RNTI_SpecificConfig_r17(Decoder& dec, MBS_RNTI_SpecificConfig_r17& value)
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
        if (!dec.ReadConstrainedInteger(0, 15, tmp_value)) { goto fail; }
        value.mbs_RNTI_SpecificConfigId_r17 = (MBS_RNTI_SpecificConfigId_r17)tmp_value;
    }
    {
        if (Decode_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(dec, value.groupCommon_RNTI_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        if (Decode_SetupRelease_DRX_ConfigPTM_r17(dec, value.drx_ConfigPTM_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_FeedbackEnablerMulticast_r17 = (MBS_RNTI_SpecificConfig_r17_Harq_FeedbackEnablerMulticast_r17)tmp_value;
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.harq_FeedbackOptionMulticast_r17 = (MBS_RNTI_SpecificConfig_r17_Harq_FeedbackOptionMulticast_r17)tmp_value;
    }
    if (present_3) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.pdsch_AggregationFactor_r17 = (MBS_RNTI_SpecificConfig_r17_Pdsch_AggregationFactor_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MBS_RNTI_SpecificConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MBS_RNTI_SpecificConfig_r17(MBS_RNTI_SpecificConfig_r17& value)
{
    Free_MBS_RNTI_SpecificConfig_r17_GroupCommon_RNTI_r17(value.groupCommon_RNTI_r17);
    if (value.has_drx_ConfigPTM_r17) {
        Free_SetupRelease_DRX_ConfigPTM_r17(value.drx_ConfigPTM_r17);
    }
    if (value.has_harq_FeedbackEnablerMulticast_r17) {
    }
    if (value.has_harq_FeedbackOptionMulticast_r17) {
    }
    if (value.has_pdsch_AggregationFactor_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_LCG_DSR_Config_r18(Encoder& enc, const LCG_DSR_Config_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.lcg_Id_r18), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.remainingTimeThreshold_r18), 1, 64);
    return enc.Error();
}

ErrorCode Decode_LCG_DSR_Config_r18(Decoder& dec, LCG_DSR_Config_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.lcg_Id_r18 = (LCG_Id_r18)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.remainingTimeThreshold_r18 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_LCG_DSR_Config_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_LCG_DSR_Config_r18(LCG_DSR_Config_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_GapConfig_r17(Encoder& enc, const GapConfig_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_refServCellIndicator_r17);
    enc.WriteBit(value.has_refFR2_ServCellAsyncCA_r17);
    enc.WriteBit(value.has_preConfigInd_r17);
    enc.WriteBit(value.has_ncsgInd_r17);
    enc.WriteBit(value.has_gapAssociationPRS_r17);
    enc.WriteBit(value.has_gapSharing_r17);
    enc.WriteBit(value.has_gapPriority_r17);
    enc.WriteConstrainedInteger((std::int64_t)(value.measGapId_r17), 1, 8);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapType_r17), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapOffset_r17), 0, 159);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgl_r17), 0, 10);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgrp_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgta_r17), 0, 3);
    if (value.has_refServCellIndicator_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refServCellIndicator_r17), 0, 2);
    }
    if (value.has_refFR2_ServCellAsyncCA_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.refFR2_ServCellAsyncCA_r17), 0, 31);
    }
    if (value.has_preConfigInd_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.preConfigInd_r17), 0, 0);
    }
    if (value.has_ncsgInd_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.ncsgInd_r17), 0, 0);
    }
    if (value.has_gapAssociationPRS_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gapAssociationPRS_r17), 0, 0);
    }
    if (value.has_gapSharing_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gapSharing_r17), 0, 3);
    }
    if (value.has_gapPriority_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.gapPriority_r17), 1, 16);
    }
    return enc.Error();
}

ErrorCode Decode_GapConfig_r17(Decoder& dec, GapConfig_r17& value)
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
        if (!dec.ReadConstrainedInteger(1, 8, tmp_value)) { goto fail; }
        value.measGapId_r17 = (MeasGapId_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.gapType_r17 = (GapConfig_r17_GapType_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.gapOffset_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 10, tmp_value)) { goto fail; }
        value.mgl_r17 = (GapConfig_r17_Mgl_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mgrp_r17 = (GapConfig_r17_Mgrp_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mgta_r17 = (GapConfig_r17_Mgta_r17)tmp_value;
    }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.refServCellIndicator_r17 = (GapConfig_r17_RefServCellIndicator_r17)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.refFR2_ServCellAsyncCA_r17 = (ServCellIndex)tmp_value;
    }
    if (present_2) {
        value.preConfigInd_r17 = (GapConfig_r17_PreConfigInd_r17)0;
    }
    if (present_3) {
        value.ncsgInd_r17 = (GapConfig_r17_NcsgInd_r17)0;
    }
    if (present_4) {
        value.gapAssociationPRS_r17 = (GapConfig_r17_GapAssociationPRS_r17)0;
    }
    if (present_5) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.gapSharing_r17 = (MeasGapSharingScheme)tmp_value;
    }
    if (present_6) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 16, tmp_value)) { goto fail; }
        value.gapPriority_r17 = (GapPriority_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_GapConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_GapConfig_r17(GapConfig_r17& value)
{
    if (value.has_refServCellIndicator_r17) {
    }
    if (value.has_refFR2_ServCellAsyncCA_r17) {
    }
    if (value.has_preConfigInd_r17) {
    }
    if (value.has_ncsgInd_r17) {
    }
    if (value.has_gapAssociationPRS_r17) {
    }
    if (value.has_gapSharing_r17) {
    }
    if (value.has_gapPriority_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_PosGapConfig_r17(Encoder& enc, const PosGapConfig_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.measPosPreConfigGapId_r17), 1, 16);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapOffset_r17), 0, 159);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgl_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgrp_r17), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.mgta_r17), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.gapType_r17), 0, 2);
    return enc.Error();
}

ErrorCode Decode_PosGapConfig_r17(Decoder& dec, PosGapConfig_r17& value)
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
        value.measPosPreConfigGapId_r17 = (MeasPosPreConfigGapId_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 159, tmp_value)) { goto fail; }
        value.gapOffset_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.mgl_r17 = (PosGapConfig_r17_Mgl_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.mgrp_r17 = (PosGapConfig_r17_Mgrp_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.mgta_r17 = (PosGapConfig_r17_Mgta_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.gapType_r17 = (PosGapConfig_r17_GapType_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_PosGapConfig_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_PosGapConfig_r17(PosGapConfig_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ValidityCellList(Encoder& enc, const ValidityCellList& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_ValidityCellList(Decoder& dec, ValidityCellList& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
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
    Free_ValidityCellList(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ValidityCellList(ValidityCellList& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_ValidityArea_r16(Encoder& enc, const ValidityArea_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_validityCellList_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 3279165);
    if (value.has_validityCellList_r16) {
        Encode_ValidityCellList(enc, value.validityCellList_r16);
    }
    return enc.Error();
}

ErrorCode Decode_ValidityArea_r16(Decoder& dec, ValidityArea_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    if (present_0) {
        if (Decode_ValidityCellList(dec, value.validityCellList_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_ValidityArea_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_ValidityArea_r16(ValidityArea_r16& value)
{
    if (value.has_validityCellList_r16) {
        Free_ValidityCellList(value.validityCellList_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CellListNR_r16(Encoder& enc, const CellListNR_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_PCI_Range(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellListNR_r16(Decoder& dec, CellListNR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 8u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 8u) {
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
    Free_CellListNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellListNR_r16(CellListNR_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_PCI_Range(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_BeamMeasConfigIdle_NR_r16(Encoder& enc, const BeamMeasConfigIdle_NR_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.reportQuantityRS_Indexes_r16), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.maxNrofRS_IndexesToReport_r16), 1, 32);
    enc.WriteBool(value.includeBeamMeasurements_r16);
    return enc.Error();
}

ErrorCode Decode_BeamMeasConfigIdle_NR_r16(Decoder& dec, BeamMeasConfigIdle_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reportQuantityRS_Indexes_r16 = (BeamMeasConfigIdle_NR_r16_ReportQuantityRS_Indexes_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 32, tmp_value)) { goto fail; }
        value.maxNrofRS_IndexesToReport_r16 = (int64_t)tmp_value;
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.includeBeamMeasurements_r16 = tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_BeamMeasConfigIdle_NR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_BeamMeasConfigIdle_NR_r16(BeamMeasConfigIdle_NR_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasIdleCarrierNR_r16_QualityThreshold_r16(Encoder& enc, const MeasIdleCarrierNR_r16_QualityThreshold_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_idleRSRP_Threshold_NR_r16);
    enc.WriteBit(value.has_idleRSRQ_Threshold_NR_r16);
    if (value.has_idleRSRP_Threshold_NR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleRSRP_Threshold_NR_r16), 0, 127);
    }
    if (value.has_idleRSRQ_Threshold_NR_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleRSRQ_Threshold_NR_r16), 0, 127);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleCarrierNR_r16_QualityThreshold_r16(Decoder& dec, MeasIdleCarrierNR_r16_QualityThreshold_r16& value)
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
        value.idleRSRP_Threshold_NR_r16 = (RSRP_Range)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.idleRSRQ_Threshold_NR_r16 = (RSRQ_Range)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdleCarrierNR_r16_QualityThreshold_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleCarrierNR_r16_QualityThreshold_r16(MeasIdleCarrierNR_r16_QualityThreshold_r16& value)
{
    if (value.has_idleRSRP_Threshold_NR_r16) {
    }
    if (value.has_idleRSRQ_Threshold_NR_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(Encoder& enc, const MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofSS_BlocksToAverage_r16);
    enc.WriteBit(value.has_absThreshSS_BlocksConsolidation_r16);
    enc.WriteBit(value.has_smtc_r16);
    enc.WriteBit(value.has_ssb_ToMeasure_r16);
    enc.WriteBit(value.has_ss_RSSI_Measurement_r16);
    if (value.has_nrofSS_BlocksToAverage_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSS_BlocksToAverage_r16), 2, 16);
    }
    if (value.has_absThreshSS_BlocksConsolidation_r16) {
        Encode_ThresholdNR(enc, value.absThreshSS_BlocksConsolidation_r16);
    }
    if (value.has_smtc_r16) {
        Encode_SSB_MTC(enc, value.smtc_r16);
    }
    if (value.has_ssb_ToMeasure_r16) {
        Encode_SSB_ToMeasure(enc, value.ssb_ToMeasure_r16);
    }
    enc.WriteBool(value.deriveSSB_IndexFromCell_r16);
    if (value.has_ss_RSSI_Measurement_r16) {
        Encode_SS_RSSI_Measurement(enc, value.ss_RSSI_Measurement_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(Decoder& dec, MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16& value)
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
        if (!dec.ReadConstrainedInteger(2, 16, tmp_value)) { goto fail; }
        value.nrofSS_BlocksToAverage_r16 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_ThresholdNR(dec, value.absThreshSS_BlocksConsolidation_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SSB_MTC(dec, value.smtc_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SSB_ToMeasure(dec, value.ssb_ToMeasure_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        bool tmp_value = false;
        if (!dec.ReadBool(tmp_value)) { goto fail; }
        value.deriveSSB_IndexFromCell_r16 = tmp_value;
    }
    if (present_4) {
        if (Decode_SS_RSSI_Measurement(dec, value.ss_RSSI_Measurement_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16& value)
{
    if (value.has_nrofSS_BlocksToAverage_r16) {
    }
    if (value.has_absThreshSS_BlocksConsolidation_r16) {
        Free_ThresholdNR(value.absThreshSS_BlocksConsolidation_r16);
    }
    if (value.has_smtc_r16) {
        Free_SSB_MTC(value.smtc_r16);
    }
    if (value.has_ssb_ToMeasure_r16) {
        Free_SSB_ToMeasure(value.ssb_ToMeasure_r16);
    }
    if (value.has_ss_RSSI_Measurement_r16) {
        Free_SS_RSSI_Measurement(value.ss_RSSI_Measurement_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasIdleCarrierNR_r16(Encoder& enc, const MeasIdleCarrierNR_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_frequencyBandList);
    enc.WriteBit(value.has_measCellListNR_r16);
    enc.WriteBit(value.has_qualityThreshold_r16);
    enc.WriteBit(value.has_ssb_MeasConfig_r16);
    enc.WriteBit(value.has_beamMeasConfigIdle_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r16), 0, 3279165);
    enc.WriteConstrainedInteger((std::int64_t)(value.ssbSubcarrierSpacing_r16), 0, 7);
    if (value.has_frequencyBandList) {
        Encode_MultiFrequencyBandListNR(enc, value.frequencyBandList);
    }
    if (value.has_measCellListNR_r16) {
        Encode_CellListNR_r16(enc, value.measCellListNR_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.reportQuantities_r16), 0, 2);
    if (value.has_qualityThreshold_r16) {
        Encode_MeasIdleCarrierNR_r16_QualityThreshold_r16(enc, value.qualityThreshold_r16);
    }
    if (value.has_ssb_MeasConfig_r16) {
        Encode_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(enc, value.ssb_MeasConfig_r16);
    }
    if (value.has_beamMeasConfigIdle_r16) {
        Encode_BeamMeasConfigIdle_NR_r16(enc, value.beamMeasConfigIdle_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleCarrierNR_r16(Decoder& dec, MeasIdleCarrierNR_r16& value)
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
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (!dec.ReadBit(present_2)) { goto fail; }
    if (!dec.ReadBit(present_3)) { goto fail; }
    if (!dec.ReadBit(present_4)) { goto fail; }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3279165, tmp_value)) { goto fail; }
        value.carrierFreq_r16 = (ARFCN_ValueNR)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.ssbSubcarrierSpacing_r16 = (SubcarrierSpacing)tmp_value;
    }
    if (present_0) {
        if (Decode_MultiFrequencyBandListNR(dec, value.frequencyBandList) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_CellListNR_r16(dec, value.measCellListNR_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reportQuantities_r16 = (MeasIdleCarrierNR_r16_ReportQuantities_r16)tmp_value;
    }
    if (present_2) {
        if (Decode_MeasIdleCarrierNR_r16_QualityThreshold_r16(dec, value.qualityThreshold_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(dec, value.ssb_MeasConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_BeamMeasConfigIdle_NR_r16(dec, value.beamMeasConfigIdle_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdleCarrierNR_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleCarrierNR_r16(MeasIdleCarrierNR_r16& value)
{
    if (value.has_frequencyBandList) {
        Free_MultiFrequencyBandListNR(value.frequencyBandList);
    }
    if (value.has_measCellListNR_r16) {
        Free_CellListNR_r16(value.measCellListNR_r16);
    }
    if (value.has_qualityThreshold_r16) {
        Free_MeasIdleCarrierNR_r16_QualityThreshold_r16(value.qualityThreshold_r16);
    }
    if (value.has_ssb_MeasConfig_r16) {
        Free_MeasIdleCarrierNR_r16_Ssb_MeasConfig_r16(value.ssb_MeasConfig_r16);
    }
    if (value.has_beamMeasConfigIdle_r16) {
        Free_BeamMeasConfigIdle_NR_r16(value.beamMeasConfigIdle_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CellListEUTRA_r16(Encoder& enc, const CellListEUTRA_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 8u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_EUTRA_PhysCellIdRange(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_CellListEUTRA_r16(Decoder& dec, CellListEUTRA_r16& value)
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
    Free_CellListEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CellListEUTRA_r16(CellListEUTRA_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_EUTRA_PhysCellIdRange(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(Encoder& enc, const MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_idleRSRP_Threshold_EUTRA_r16);
    enc.WriteBit(value.has_idleRSRQ_Threshold_EUTRA_r16);
    if (value.has_idleRSRP_Threshold_EUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleRSRP_Threshold_EUTRA_r16), 0, 97);
    }
    if (value.has_idleRSRQ_Threshold_EUTRA_r16) {
        enc.WriteConstrainedInteger((std::int64_t)(value.idleRSRQ_Threshold_EUTRA_r16), -30, 46);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(Decoder& dec, MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16& value)
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
        value.idleRSRP_Threshold_EUTRA_r16 = (RSRP_RangeEUTRA)tmp_value;
    }
    if (present_1) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(-30, 46, tmp_value)) { goto fail; }
        value.idleRSRQ_Threshold_EUTRA_r16 = (RSRQ_RangeEUTRA_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16& value)
{
    if (value.has_idleRSRP_Threshold_EUTRA_r16) {
    }
    if (value.has_idleRSRQ_Threshold_EUTRA_r16) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasIdleCarrierEUTRA_r16(Encoder& enc, const MeasIdleCarrierEUTRA_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteBit(value.has_measCellListEUTRA_r16);
    enc.WriteBit(value.has_qualityThresholdEUTRA_r16);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreqEUTRA_r16), 0, 262143);
    enc.WriteConstrainedInteger((std::int64_t)(value.allowedMeasBandwidth_r16), 0, 5);
    if (value.has_measCellListEUTRA_r16) {
        Encode_CellListEUTRA_r16(enc, value.measCellListEUTRA_r16);
    }
    enc.WriteConstrainedInteger((std::int64_t)(value.reportQuantitiesEUTRA_r16), 0, 2);
    if (value.has_qualityThresholdEUTRA_r16) {
        Encode_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(enc, value.qualityThresholdEUTRA_r16);
    }
    return enc.Error();
}

ErrorCode Decode_MeasIdleCarrierEUTRA_r16(Decoder& dec, MeasIdleCarrierEUTRA_r16& value)
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
        value.carrierFreqEUTRA_r16 = (ARFCN_ValueEUTRA)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.allowedMeasBandwidth_r16 = (EUTRA_AllowedMeasBandwidth)tmp_value;
    }
    if (present_0) {
        if (Decode_CellListEUTRA_r16(dec, value.measCellListEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.reportQuantitiesEUTRA_r16 = (MeasIdleCarrierEUTRA_r16_ReportQuantitiesEUTRA_r16)tmp_value;
    }
    if (present_1) {
        if (Decode_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(dec, value.qualityThresholdEUTRA_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdleCarrierEUTRA_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdleCarrierEUTRA_r16(MeasIdleCarrierEUTRA_r16& value)
{
    if (value.has_measCellListEUTRA_r16) {
        Free_CellListEUTRA_r16(value.measCellListEUTRA_r16);
    }
    if (value.has_qualityThresholdEUTRA_r16) {
        Free_MeasIdleCarrierEUTRA_r16_QualityThresholdEUTRA_r16(value.qualityThresholdEUTRA_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasReselectionCarrierNR_r18(Encoder& enc, const MeasReselectionCarrierNR_r18& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    enc.WriteConstrainedInteger((std::int64_t)(value.carrierFreq_r18), 0, 3279165);
    return enc.Error();
}

ErrorCode Decode_MeasReselectionCarrierNR_r18(Decoder& dec, MeasReselectionCarrierNR_r18& value)
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
        value.carrierFreq_r18 = (ARFCN_ValueNR)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasReselectionCarrierNR_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasReselectionCarrierNR_r18(MeasReselectionCarrierNR_r18& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasIdToAddMod(Encoder& enc, const MeasIdToAddMod& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.measId), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.measObjectId), 1, 64);
    enc.WriteConstrainedInteger((std::int64_t)(value.reportConfigId), 1, 64);
    return enc.Error();
}

ErrorCode Decode_MeasIdToAddMod(Decoder& dec, MeasIdToAddMod& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.measId = (MeasId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.measObjectId = (MeasObjectId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(1, 64, tmp_value)) { goto fail; }
        value.reportConfigId = (ReportConfigId)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasIdToAddMod(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasIdToAddMod(MeasIdToAddMod& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_ResourceListConfigCLI_r16(Encoder& enc, const SRS_ResourceListConfigCLI_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 32u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_SRS_ResourceConfigCLI_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceListConfigCLI_r16(Decoder& dec, SRS_ResourceListConfigCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 32u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 32u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (SRS_ResourceConfigCLI_r16*)std::malloc((std::size_t)value.count * sizeof(SRS_ResourceConfigCLI_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(SRS_ResourceConfigCLI_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_SRS_ResourceConfigCLI_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceListConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceListConfigCLI_r16(SRS_ResourceListConfigCLI_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_SRS_ResourceConfigCLI_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_SRS_ResourceListConfigCLI_r16(Encoder& enc, const SetupRelease_SRS_ResourceListConfigCLI_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_setup:
        Encode_SRS_ResourceListConfigCLI_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SRS_ResourceListConfigCLI_r16(Decoder& dec, SetupRelease_SRS_ResourceListConfigCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SRS_ResourceListConfigCLI_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_setup: {
        if (Decode_SRS_ResourceListConfigCLI_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SRS_ResourceListConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SRS_ResourceListConfigCLI_r16(SetupRelease_SRS_ResourceListConfigCLI_r16& value)
{
    switch (value.tag) {
    case SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_release:
        break;
    case SetupRelease_SRS_ResourceListConfigCLI_r16_Tag_setup:
        Free_SRS_ResourceListConfigCLI_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_RSSI_ResourceListConfigCLI_r16(Encoder& enc, const RSSI_ResourceListConfigCLI_r16& value)
{
    (void)value;
    enc.WriteConstrainedLength(value.count, 1u, 64u);
    for (std::uint32_t i = 0; i < value.count; ++i) {
        Encode_RSSI_ResourceConfigCLI_r16(enc, value.items[i]);
    }
    return enc.Error();
}

ErrorCode Decode_RSSI_ResourceListConfigCLI_r16(Decoder& dec, RSSI_ResourceListConfigCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
if (!dec.ReadConstrainedLength(1u, 64u, value.count)) { goto fail; }
if (value.count > RRC_CODEC_MAX_SEQUENCE_OF_COUNT || value.count > 64u) {
    dec.Fail(ErrorCode_LengthOutOfRange); goto fail;
}
if (value.count > 0u) {
    value.items = (RSSI_ResourceConfigCLI_r16*)std::malloc((std::size_t)value.count * sizeof(RSSI_ResourceConfigCLI_r16));
    if (value.items == nullptr) { dec.Fail(ErrorCode_OutOfMemory); goto fail; }
    std::memset(value.items, 0, (std::size_t)value.count * sizeof(RSSI_ResourceConfigCLI_r16));
}
for (std::uint32_t i = 0; i < value.count; ++i) {
    if (Decode_RSSI_ResourceConfigCLI_r16(dec, value.items[i]) != ErrorCode_Ok) { goto fail; }
}
    return dec.Error();
    } while (false);
fail:
    Free_RSSI_ResourceListConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_RSSI_ResourceListConfigCLI_r16(RSSI_ResourceListConfigCLI_r16& value)
{
    if (value.items != nullptr) {
        for (std::uint32_t i = 0; i < value.count; ++i) {
            Free_RSSI_ResourceConfigCLI_r16(value.items[i]);
        }
        std::free(value.items);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_RSSI_ResourceListConfigCLI_r16(Encoder& enc, const SetupRelease_RSSI_ResourceListConfigCLI_r16& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_release:
        (void)0;
        break;
    case SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_setup:
        Encode_RSSI_ResourceListConfigCLI_r16(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_RSSI_ResourceListConfigCLI_r16(Decoder& dec, SetupRelease_RSSI_ResourceListConfigCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_setup: {
        if (Decode_RSSI_ResourceListConfigCLI_r16(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_RSSI_ResourceListConfigCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_RSSI_ResourceListConfigCLI_r16(SetupRelease_RSSI_ResourceListConfigCLI_r16& value)
{
    switch (value.tag) {
    case SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_release:
        break;
    case SetupRelease_RSSI_ResourceListConfigCLI_r16_Tag_setup:
        Free_RSSI_ResourceListConfigCLI_r16(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_CLI_ResourceConfig_r16(Encoder& enc, const CLI_ResourceConfig_r16& value)
{
    (void)value;
    enc.WriteBit(value.has_srs_ResourceConfig_r16);
    enc.WriteBit(value.has_rssi_ResourceConfig_r16);
    if (value.has_srs_ResourceConfig_r16) {
        Encode_SetupRelease_SRS_ResourceListConfigCLI_r16(enc, value.srs_ResourceConfig_r16);
    }
    if (value.has_rssi_ResourceConfig_r16) {
        Encode_SetupRelease_RSSI_ResourceListConfigCLI_r16(enc, value.rssi_ResourceConfig_r16);
    }
    return enc.Error();
}

ErrorCode Decode_CLI_ResourceConfig_r16(Decoder& dec, CLI_ResourceConfig_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        if (Decode_SetupRelease_SRS_ResourceListConfigCLI_r16(dec, value.srs_ResourceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SetupRelease_RSSI_ResourceListConfigCLI_r16(dec, value.rssi_ResourceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_CLI_ResourceConfig_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_CLI_ResourceConfig_r16(CLI_ResourceConfig_r16& value)
{
    if (value.has_srs_ResourceConfig_r16) {
        Free_SetupRelease_SRS_ResourceListConfigCLI_r16(value.srs_ResourceConfig_r16);
    }
    if (value.has_rssi_ResourceConfig_r16) {
        Free_SetupRelease_RSSI_ResourceListConfigCLI_r16(value.rssi_ResourceConfig_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_MeasObjectCLI_r16(Encoder& enc, const MeasObjectCLI_r16& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_CLI_ResourceConfig_r16(enc, value.cli_ResourceConfig_r16);
    return enc.Error();
}

ErrorCode Decode_MeasObjectCLI_r16(Decoder& dec, MeasObjectCLI_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_CLI_ResourceConfig_r16(dec, value.cli_ResourceConfig_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_MeasObjectCLI_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_MeasObjectCLI_r16(MeasObjectCLI_r16& value)
{
    Free_CLI_ResourceConfig_r16(value.cli_ResourceConfig_r16);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup1_ResourceMapping_r16(Encoder& enc, const SRS_Resource_ExtGroup1_ResourceMapping_r16& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r16), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols_r16), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.repetitionFactor_r16), 0, 2);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup1_ResourceMapping_r16(Decoder& dec, SRS_Resource_ExtGroup1_ResourceMapping_r16& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r16 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrofSymbols_r16 = (SRS_Resource_ExtGroup1_ResourceMapping_r16_NrofSymbols_r16)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.repetitionFactor_r16 = (SRS_Resource_ExtGroup1_ResourceMapping_r16_RepetitionFactor_r16)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup1_ResourceMapping_r16(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup1_ResourceMapping_r16(SRS_Resource_ExtGroup1_ResourceMapping_r16& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup1(Encoder& enc, const SRS_Resource_ExtGroup1& value)
{
    (void)value;
    enc.WriteBit(value.has_resourceMapping_r16);
    if (value.has_resourceMapping_r16) {
        Encode_SRS_Resource_ExtGroup1_ResourceMapping_r16(enc, value.resourceMapping_r16);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup1(Decoder& dec, SRS_Resource_ExtGroup1& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        if (Decode_SRS_Resource_ExtGroup1_ResourceMapping_r16(dec, value.resourceMapping_r16) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup1(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup1(SRS_Resource_ExtGroup1& value)
{
    if (value.has_resourceMapping_r16) {
        Free_SRS_Resource_ExtGroup1_ResourceMapping_r16(value.resourceMapping_r16);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(Encoder& enc, const SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceId), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkBWP), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(Decoder& dec, SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.resourceId = (SRS_ResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.uplinkBWP = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SpatialRelationInfo_PDC_r17_ReferenceSignal(Encoder& enc, const SpatialRelationInfo_PDC_r17_ReferenceSignal& value)
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
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_dl_PRS_PDC:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.dl_PRS_PDC), 0, 63);
        break;
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_srs:
        Encode_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(enc, value.u.srs);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SpatialRelationInfo_PDC_r17_ReferenceSignal(Decoder& dec, SpatialRelationInfo_PDC_r17_ReferenceSignal& value)
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
        value.tag = (SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag)(4 + extension_index);
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
    value.tag = (SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag)root_index;
    switch (value.tag) {
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_dl_PRS_PDC: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.dl_PRS_PDC = (NR_DL_PRS_ResourceID_r17)tmp_value;
        break;
    }
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_srs: {
        if (Decode_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(dec, value.u.srs) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpatialRelationInfo_PDC_r17_ReferenceSignal(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpatialRelationInfo_PDC_r17_ReferenceSignal(SpatialRelationInfo_PDC_r17_ReferenceSignal& value)
{
    switch (value.tag) {
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_ssb_Index:
        break;
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_csi_RS_Index:
        break;
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_dl_PRS_PDC:
        break;
    case SpatialRelationInfo_PDC_r17_ReferenceSignal_Tag_srs:
        Free_SpatialRelationInfo_PDC_r17_ReferenceSignal_Srs(value.u.srs);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SpatialRelationInfo_PDC_r17(Encoder& enc, const SpatialRelationInfo_PDC_r17& value)
{
    (void)value;
    const bool any_extension = false;
    enc.WriteBit(any_extension);
    Encode_SpatialRelationInfo_PDC_r17_ReferenceSignal(enc, value.referenceSignal);
    return enc.Error();
}

ErrorCode Decode_SpatialRelationInfo_PDC_r17(Decoder& dec, SpatialRelationInfo_PDC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool extension = false;
    if (!dec.ReadBit(extension)) { goto fail; }
    if (extension) {
        dec.Fail(ErrorCode_UnsupportedExtension); goto fail;
    }
    {
        if (Decode_SpatialRelationInfo_PDC_r17_ReferenceSignal(dec, value.referenceSignal) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SpatialRelationInfo_PDC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SpatialRelationInfo_PDC_r17(SpatialRelationInfo_PDC_r17& value)
{
    Free_SpatialRelationInfo_PDC_r17_ReferenceSignal(value.referenceSignal);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SetupRelease_SpatialRelationInfo_PDC_r17(Encoder& enc, const SetupRelease_SpatialRelationInfo_PDC_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SetupRelease_SpatialRelationInfo_PDC_r17_Tag_release:
        (void)0;
        break;
    case SetupRelease_SpatialRelationInfo_PDC_r17_Tag_setup:
        Encode_SpatialRelationInfo_PDC_r17(enc, value.u.setup);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SetupRelease_SpatialRelationInfo_PDC_r17(Decoder& dec, SetupRelease_SpatialRelationInfo_PDC_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SetupRelease_SpatialRelationInfo_PDC_r17_Tag)root_index;
    switch (value.tag) {
    case SetupRelease_SpatialRelationInfo_PDC_r17_Tag_release: {
        (void)0;
        break;
    }
    case SetupRelease_SpatialRelationInfo_PDC_r17_Tag_setup: {
        if (Decode_SpatialRelationInfo_PDC_r17(dec, value.u.setup) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SetupRelease_SpatialRelationInfo_PDC_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SetupRelease_SpatialRelationInfo_PDC_r17(SetupRelease_SpatialRelationInfo_PDC_r17& value)
{
    switch (value.tag) {
    case SetupRelease_SpatialRelationInfo_PDC_r17_Tag_release:
        break;
    case SetupRelease_SpatialRelationInfo_PDC_r17_Tag_setup:
        Free_SpatialRelationInfo_PDC_r17(value.u.setup);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup2_ResourceMapping_r17(Encoder& enc, const SRS_Resource_ExtGroup2_ResourceMapping_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.startPosition_r17), 0, 13);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols_r17), 0, 6);
    enc.WriteConstrainedInteger((std::int64_t)(value.repetitionFactor_r17), 0, 9);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup2_ResourceMapping_r17(Decoder& dec, SRS_Resource_ExtGroup2_ResourceMapping_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 13, tmp_value)) { goto fail; }
        value.startPosition_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 6, tmp_value)) { goto fail; }
        value.nrofSymbols_r17 = (SRS_Resource_ExtGroup2_ResourceMapping_r17_NrofSymbols_r17)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 9, tmp_value)) { goto fail; }
        value.repetitionFactor_r17 = (SRS_Resource_ExtGroup2_ResourceMapping_r17_RepetitionFactor_r17)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup2_ResourceMapping_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup2_ResourceMapping_r17(SRS_Resource_ExtGroup2_ResourceMapping_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(Encoder& enc, const SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor2_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.startRBIndexAndFreqScalingFactor2_r17), 0, 1);
        break;
    case SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor4_r17:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.startRBIndexAndFreqScalingFactor4_r17), 0, 3);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(Decoder& dec, SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag)root_index;
    switch (value.tag) {
    case SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor2_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.u.startRBIndexAndFreqScalingFactor2_r17 = (int64_t)tmp_value;
        break;
    }
    case SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor4_r17: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.u.startRBIndexAndFreqScalingFactor4_r17 = (int64_t)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17& value)
{
    switch (value.tag) {
    case SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor2_r17:
        break;
    case SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17_Tag_startRBIndexAndFreqScalingFactor4_r17:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(Encoder& enc, const SRS_Resource_ExtGroup2_PartialFreqSounding_r17& value)
{
    (void)value;
    enc.WriteBit(value.has_enableStartRBHopping_r17);
    Encode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(enc, value.startRBIndexFScaling_r17);
    if (value.has_enableStartRBHopping_r17) {
        enc.WriteConstrainedInteger((std::int64_t)(value.enableStartRBHopping_r17), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(Decoder& dec, SRS_Resource_ExtGroup2_PartialFreqSounding_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    {
        if (Decode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(dec, value.startRBIndexFScaling_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_0) {
        value.enableStartRBHopping_r17 = (SRS_Resource_ExtGroup2_PartialFreqSounding_r17_EnableStartRBHopping_r17)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(SRS_Resource_ExtGroup2_PartialFreqSounding_r17& value)
{
    Free_SRS_Resource_ExtGroup2_PartialFreqSounding_r17_StartRBIndexFScaling_r17(value.startRBIndexFScaling_r17);
    if (value.has_enableStartRBHopping_r17) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(Encoder& enc, const SRS_Resource_ExtGroup2_TransmissionComb_n8_r17& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.combOffset_n8_r17), 0, 7);
    enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShift_n8_r17), 0, 5);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(Decoder& dec, SRS_Resource_ExtGroup2_TransmissionComb_n8_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.combOffset_n8_r17 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.cyclicShift_n8_r17 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(SRS_Resource_ExtGroup2_TransmissionComb_n8_r17& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(Encoder& enc, const SRS_Resource_ExtGroup2_Srs_TCI_State_r17& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_UL_TCI_State:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srs_UL_TCI_State), 0, 63);
        break;
    case SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_DLorJointTCI_State:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.srs_DLorJointTCI_State), 0, 127);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(Decoder& dec, SRS_Resource_ExtGroup2_Srs_TCI_State_r17& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag)root_index;
    switch (value.tag) {
    case SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_UL_TCI_State: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.srs_UL_TCI_State = (TCI_UL_StateId_r17)tmp_value;
        break;
    }
    case SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_DLorJointTCI_State: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 127, tmp_value)) { goto fail; }
        value.u.srs_DLorJointTCI_State = (TCI_StateId)tmp_value;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(SRS_Resource_ExtGroup2_Srs_TCI_State_r17& value)
{
    switch (value.tag) {
    case SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_UL_TCI_State:
        break;
    case SRS_Resource_ExtGroup2_Srs_TCI_State_r17_Tag_srs_DLorJointTCI_State:
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup2(Encoder& enc, const SRS_Resource_ExtGroup2& value)
{
    (void)value;
    enc.WriteBit(value.has_spatialRelationInfo_PDC_r17);
    enc.WriteBit(value.has_resourceMapping_r17);
    enc.WriteBit(value.has_partialFreqSounding_r17);
    enc.WriteBit(value.has_transmissionComb_n8_r17);
    enc.WriteBit(value.has_srs_TCI_State_r17);
    if (value.has_spatialRelationInfo_PDC_r17) {
        Encode_SetupRelease_SpatialRelationInfo_PDC_r17(enc, value.spatialRelationInfo_PDC_r17);
    }
    if (value.has_resourceMapping_r17) {
        Encode_SRS_Resource_ExtGroup2_ResourceMapping_r17(enc, value.resourceMapping_r17);
    }
    if (value.has_partialFreqSounding_r17) {
        Encode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(enc, value.partialFreqSounding_r17);
    }
    if (value.has_transmissionComb_n8_r17) {
        Encode_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(enc, value.transmissionComb_n8_r17);
    }
    if (value.has_srs_TCI_State_r17) {
        Encode_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(enc, value.srs_TCI_State_r17);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup2(Decoder& dec, SRS_Resource_ExtGroup2& value)
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
        if (Decode_SetupRelease_SpatialRelationInfo_PDC_r17(dec, value.spatialRelationInfo_PDC_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_1) {
        if (Decode_SRS_Resource_ExtGroup2_ResourceMapping_r17(dec, value.resourceMapping_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(dec, value.partialFreqSounding_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_3) {
        if (Decode_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(dec, value.transmissionComb_n8_r17) != ErrorCode_Ok) { goto fail; }
    }
    if (present_4) {
        if (Decode_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(dec, value.srs_TCI_State_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup2(SRS_Resource_ExtGroup2& value)
{
    if (value.has_spatialRelationInfo_PDC_r17) {
        Free_SetupRelease_SpatialRelationInfo_PDC_r17(value.spatialRelationInfo_PDC_r17);
    }
    if (value.has_resourceMapping_r17) {
        Free_SRS_Resource_ExtGroup2_ResourceMapping_r17(value.resourceMapping_r17);
    }
    if (value.has_partialFreqSounding_r17) {
        Free_SRS_Resource_ExtGroup2_PartialFreqSounding_r17(value.partialFreqSounding_r17);
    }
    if (value.has_transmissionComb_n8_r17) {
        Free_SRS_Resource_ExtGroup2_TransmissionComb_n8_r17(value.transmissionComb_n8_r17);
    }
    if (value.has_srs_TCI_State_r17) {
        Free_SRS_Resource_ExtGroup2_Srs_TCI_State_r17(value.srs_TCI_State_r17);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(Encoder& enc, const SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730& value)
{
    (void)value;
    Encode_ServingCellAndBWP_Id_r17(enc, value.cellAndBWP_r17);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(Decoder& dec, SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        if (Decode_ServingCellAndBWP_Id_r17(dec, value.cellAndBWP_r17) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730& value)
{
    Free_ServingCellAndBWP_Id_r17(value.cellAndBWP_r17);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup3(Encoder& enc, const SRS_Resource_ExtGroup3& value)
{
    (void)value;
    enc.WriteBit(value.has_repetitionFactor_v1730);
    enc.WriteBit(value.has_srs_DLorJointTCI_State_v1730);
    if (value.has_repetitionFactor_v1730) {
        enc.WriteConstrainedInteger((std::int64_t)(value.repetitionFactor_v1730), 0, 0);
    }
    if (value.has_srs_DLorJointTCI_State_v1730) {
        Encode_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(enc, value.srs_DLorJointTCI_State_v1730);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup3(Decoder& dec, SRS_Resource_ExtGroup3& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    bool present_1 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (!dec.ReadBit(present_1)) { goto fail; }
    if (present_0) {
        value.repetitionFactor_v1730 = (SRS_Resource_ExtGroup3_RepetitionFactor_v1730)0;
    }
    if (present_1) {
        if (Decode_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(dec, value.srs_DLorJointTCI_State_v1730) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup3(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup3(SRS_Resource_ExtGroup3& value)
{
    if (value.has_repetitionFactor_v1730) {
    }
    if (value.has_srs_DLorJointTCI_State_v1730) {
        Free_SRS_Resource_ExtGroup3_Srs_DLorJointTCI_State_v1730(value.srs_DLorJointTCI_State_v1730);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(Encoder& enc, const SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4:
        enc.WriteFixedBitString(value.u.transmissionComb_n4.bytes, value.u.transmissionComb_n4.bitLength, 4, 4);
        break;
    case SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8:
        enc.WriteFixedBitString(value.u.transmissionComb_n8.bytes, value.u.transmissionComb_n8.bitLength, 8, 8);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(Decoder& dec, SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag)root_index;
    switch (value.tag) {
    case SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 4)) { goto fail; }
        string_length = 4;
        value.u.transmissionComb_n4.bytes = string_bytes;
        value.u.transmissionComb_n4.bitLength = string_length;
        break;
    }
    case SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.transmissionComb_n8.bytes = string_bytes;
        value.u.transmissionComb_n8.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18& value)
{
    switch (value.tag) {
    case SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4:
        std::free(value.u.transmissionComb_n4.bytes);
        break;
    case SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8:
        std::free(value.u.transmissionComb_n8.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(Encoder& enc, const SRS_Resource_ExtGroup4_CombOffsetHopping_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_hoppingId_r18);
    enc.WriteBit(value.has_hoppingSubset_r18);
    enc.WriteBit(value.has_hoppingWithRepetition_r18);
    if (value.has_hoppingId_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hoppingId_r18), 0, 1023);
    }
    if (value.has_hoppingSubset_r18) {
        Encode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(enc, value.hoppingSubset_r18);
    }
    if (value.has_hoppingWithRepetition_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hoppingWithRepetition_r18), 0, 1);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(Decoder& dec, SRS_Resource_ExtGroup4_CombOffsetHopping_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.hoppingId_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(dec, value.hoppingSubset_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.hoppingWithRepetition_r18 = (SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingWithRepetition_r18)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(SRS_Resource_ExtGroup4_CombOffsetHopping_r18& value)
{
    if (value.has_hoppingId_r18) {
    }
    if (value.has_hoppingSubset_r18) {
        Free_SRS_Resource_ExtGroup4_CombOffsetHopping_r18_HoppingSubset_r18(value.hoppingSubset_r18);
    }
    if (value.has_hoppingWithRepetition_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(Encoder& enc, const SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n2:
        enc.WriteFixedBitString(value.u.transmissionComb_n2.bytes, value.u.transmissionComb_n2.bitLength, 8, 8);
        break;
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4:
        enc.WriteFixedBitString(value.u.transmissionComb_n4.bytes, value.u.transmissionComb_n4.bitLength, 12, 12);
        break;
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8:
        enc.WriteFixedBitString(value.u.transmissionComb_n8.bytes, value.u.transmissionComb_n8.bitLength, 6, 6);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(Decoder& dec, SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag)root_index;
    switch (value.tag) {
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n2: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 8)) { goto fail; }
        string_length = 8;
        value.u.transmissionComb_n2.bytes = string_bytes;
        value.u.transmissionComb_n2.bitLength = string_length;
        break;
    }
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 12)) { goto fail; }
        string_length = 12;
        value.u.transmissionComb_n4.bytes = string_bytes;
        value.u.transmissionComb_n4.bitLength = string_length;
        break;
    }
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8: {
        std::uint8_t* string_bytes = nullptr;
        std::uint32_t string_length = 0;
        if (!dec.ReadFixedBitString(string_bytes, 6)) { goto fail; }
        string_length = 6;
        value.u.transmissionComb_n8.bytes = string_bytes;
        value.u.transmissionComb_n8.bitLength = string_length;
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18& value)
{
    switch (value.tag) {
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n2:
        std::free(value.u.transmissionComb_n2.bytes);
        break;
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n4:
        std::free(value.u.transmissionComb_n4.bytes);
        break;
    case SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18_Tag_transmissionComb_n8:
        std::free(value.u.transmissionComb_n8.bytes);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(Encoder& enc, const SRS_Resource_ExtGroup4_CyclicShiftHopping_r18& value)
{
    (void)value;
    enc.WriteBit(value.has_hoppingId_r18);
    enc.WriteBit(value.has_hoppingSubset_r18);
    enc.WriteBit(value.has_hoppingFinerGranularity_r18);
    if (value.has_hoppingId_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hoppingId_r18), 0, 1023);
    }
    if (value.has_hoppingSubset_r18) {
        Encode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(enc, value.hoppingSubset_r18);
    }
    if (value.has_hoppingFinerGranularity_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.hoppingFinerGranularity_r18), 0, 0);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(Decoder& dec, SRS_Resource_ExtGroup4_CyclicShiftHopping_r18& value)
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
        if (!dec.ReadConstrainedInteger(0, 1023, tmp_value)) { goto fail; }
        value.hoppingId_r18 = (int64_t)tmp_value;
    }
    if (present_1) {
        if (Decode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(dec, value.hoppingSubset_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        value.hoppingFinerGranularity_r18 = (SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingFinerGranularity_r18)0;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(SRS_Resource_ExtGroup4_CyclicShiftHopping_r18& value)
{
    if (value.has_hoppingId_r18) {
    }
    if (value.has_hoppingSubset_r18) {
        Free_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18_HoppingSubset_r18(value.hoppingSubset_r18);
    }
    if (value.has_hoppingFinerGranularity_r18) {
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_ExtGroup4(Encoder& enc, const SRS_Resource_ExtGroup4& value)
{
    (void)value;
    enc.WriteBit(value.has_nrofSRS_Ports_n8_r18);
    enc.WriteBit(value.has_combOffsetHopping_r18);
    enc.WriteBit(value.has_cyclicShiftHopping_r18);
    if (value.has_nrofSRS_Ports_n8_r18) {
        enc.WriteConstrainedInteger((std::int64_t)(value.nrofSRS_Ports_n8_r18), 0, 1);
    }
    if (value.has_combOffsetHopping_r18) {
        Encode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(enc, value.combOffsetHopping_r18);
    }
    if (value.has_cyclicShiftHopping_r18) {
        Encode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(enc, value.cyclicShiftHopping_r18);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_ExtGroup4(Decoder& dec, SRS_Resource_ExtGroup4& value)
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
        value.nrofSRS_Ports_n8_r18 = (SRS_Resource_ExtGroup4_NrofSRS_Ports_n8_r18)tmp_value;
    }
    if (present_1) {
        if (Decode_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(dec, value.combOffsetHopping_r18) != ErrorCode_Ok) { goto fail; }
    }
    if (present_2) {
        if (Decode_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(dec, value.cyclicShiftHopping_r18) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_ExtGroup4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_ExtGroup4(SRS_Resource_ExtGroup4& value)
{
    if (value.has_nrofSRS_Ports_n8_r18) {
    }
    if (value.has_combOffsetHopping_r18) {
        Free_SRS_Resource_ExtGroup4_CombOffsetHopping_r18(value.combOffsetHopping_r18);
    }
    if (value.has_cyclicShiftHopping_r18) {
        Free_SRS_Resource_ExtGroup4_CyclicShiftHopping_r18(value.cyclicShiftHopping_r18);
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_SpatialRelationInfo_ReferenceSignal_Srs(Encoder& enc, const SRS_SpatialRelationInfo_ReferenceSignal_Srs& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.resourceId), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.uplinkBWP), 0, 4);
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfo_ReferenceSignal_Srs(Decoder& dec, SRS_SpatialRelationInfo_ReferenceSignal_Srs& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.resourceId = (SRS_ResourceId)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 4, tmp_value)) { goto fail; }
        value.uplinkBWP = (BWP_Id)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfo_ReferenceSignal_Srs(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfo_ReferenceSignal_Srs(SRS_SpatialRelationInfo_ReferenceSignal_Srs& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_SpatialRelationInfo_ReferenceSignal(Encoder& enc, const SRS_SpatialRelationInfo_ReferenceSignal& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 2);
    switch (value.tag) {
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.ssb_Index), 0, 63);
        break;
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index:
        enc.WriteConstrainedInteger((std::int64_t)(value.u.csi_RS_Index), 0, 191);
        break;
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_srs:
        Encode_SRS_SpatialRelationInfo_ReferenceSignal_Srs(enc, value.u.srs);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfo_ReferenceSignal(Decoder& dec, SRS_SpatialRelationInfo_ReferenceSignal& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 2, root_index)) {
        goto fail;
    }
    value.tag = (SRS_SpatialRelationInfo_ReferenceSignal_Tag)root_index;
    switch (value.tag) {
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.u.ssb_Index = (SSB_Index)tmp_value;
        break;
    }
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index: {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 191, tmp_value)) { goto fail; }
        value.u.csi_RS_Index = (NZP_CSI_RS_ResourceId)tmp_value;
        break;
    }
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_srs: {
        if (Decode_SRS_SpatialRelationInfo_ReferenceSignal_Srs(dec, value.u.srs) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfo_ReferenceSignal(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfo_ReferenceSignal(SRS_SpatialRelationInfo_ReferenceSignal& value)
{
    switch (value.tag) {
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_ssb_Index:
        break;
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_csi_RS_Index:
        break;
    case SRS_SpatialRelationInfo_ReferenceSignal_Tag_srs:
        Free_SRS_SpatialRelationInfo_ReferenceSignal_Srs(value.u.srs);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_SpatialRelationInfo(Encoder& enc, const SRS_SpatialRelationInfo& value)
{
    (void)value;
    enc.WriteBit(value.has_servingCellId);
    if (value.has_servingCellId) {
        enc.WriteConstrainedInteger((std::int64_t)(value.servingCellId), 0, 31);
    }
    Encode_SRS_SpatialRelationInfo_ReferenceSignal(enc, value.referenceSignal);
    return enc.Error();
}

ErrorCode Decode_SRS_SpatialRelationInfo(Decoder& dec, SRS_SpatialRelationInfo& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    bool present_0 = false;
    if (!dec.ReadBit(present_0)) { goto fail; }
    if (present_0) {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 31, tmp_value)) { goto fail; }
        value.servingCellId = (ServCellIndex)tmp_value;
    }
    {
        if (Decode_SRS_SpatialRelationInfo_ReferenceSignal(dec, value.referenceSignal) != ErrorCode_Ok) { goto fail; }
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_SpatialRelationInfo(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_SpatialRelationInfo(SRS_SpatialRelationInfo& value)
{
    if (value.has_servingCellId) {
    }
    Free_SRS_SpatialRelationInfo_ReferenceSignal(value.referenceSignal);
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_TransmissionComb_N2(Encoder& enc, const SRS_Resource_TransmissionComb_N2& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.combOffset_n2), 0, 1);
    enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShift_n2), 0, 7);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_TransmissionComb_N2(Decoder& dec, SRS_Resource_TransmissionComb_N2& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 1, tmp_value)) { goto fail; }
        value.combOffset_n2 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 7, tmp_value)) { goto fail; }
        value.cyclicShift_n2 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_TransmissionComb_N2(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_TransmissionComb_N2(SRS_Resource_TransmissionComb_N2& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_TransmissionComb_N4(Encoder& enc, const SRS_Resource_TransmissionComb_N4& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.combOffset_n4), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.cyclicShift_n4), 0, 11);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_TransmissionComb_N4(Decoder& dec, SRS_Resource_TransmissionComb_N4& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.combOffset_n4 = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 11, tmp_value)) { goto fail; }
        value.cyclicShift_n4 = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_TransmissionComb_N4(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_TransmissionComb_N4(SRS_Resource_TransmissionComb_N4& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_TransmissionComb(Encoder& enc, const SRS_Resource_TransmissionComb& value)
{
    enc.WriteConstrainedInteger((std::int64_t)(value.tag), 0, 1);
    switch (value.tag) {
    case SRS_Resource_TransmissionComb_Tag_n2:
        Encode_SRS_Resource_TransmissionComb_N2(enc, value.u.n2);
        break;
    case SRS_Resource_TransmissionComb_Tag_n4:
        Encode_SRS_Resource_TransmissionComb_N4(enc, value.u.n4);
        break;
    default:
        return enc.Fail(ErrorCode_InvalidChoiceTag);
    }
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_TransmissionComb(Decoder& dec, SRS_Resource_TransmissionComb& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    std::int64_t root_index = 0;
    if (!dec.ReadConstrainedInteger(0, 1, root_index)) {
        goto fail;
    }
    value.tag = (SRS_Resource_TransmissionComb_Tag)root_index;
    switch (value.tag) {
    case SRS_Resource_TransmissionComb_Tag_n2: {
        if (Decode_SRS_Resource_TransmissionComb_N2(dec, value.u.n2) != ErrorCode_Ok) { goto fail; }
        break;
    }
    case SRS_Resource_TransmissionComb_Tag_n4: {
        if (Decode_SRS_Resource_TransmissionComb_N4(dec, value.u.n4) != ErrorCode_Ok) { goto fail; }
        break;
    }
    default:
        dec.Fail(ErrorCode_InvalidChoiceIndex); goto fail;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_TransmissionComb(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_TransmissionComb(SRS_Resource_TransmissionComb& value)
{
    switch (value.tag) {
    case SRS_Resource_TransmissionComb_Tag_n2:
        Free_SRS_Resource_TransmissionComb_N2(value.u.n2);
        break;
    case SRS_Resource_TransmissionComb_Tag_n4:
        Free_SRS_Resource_TransmissionComb_N4(value.u.n4);
        break;
    default:
        break;
    }
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_ResourceMapping(Encoder& enc, const SRS_ResourceMapping& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.startPosition), 0, 5);
    enc.WriteConstrainedInteger((std::int64_t)(value.nrofSymbols), 0, 2);
    enc.WriteConstrainedInteger((std::int64_t)(value.repetitionFactor), 0, 2);
    return enc.Error();
}

ErrorCode Decode_SRS_ResourceMapping(Decoder& dec, SRS_ResourceMapping& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 5, tmp_value)) { goto fail; }
        value.startPosition = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.nrofSymbols = (SRS_ResourceMapping_NrofSymbols)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 2, tmp_value)) { goto fail; }
        value.repetitionFactor = (SRS_ResourceMapping_RepetitionFactor)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_ResourceMapping(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_ResourceMapping(SRS_ResourceMapping& value)
{
    std::memset(&value, 0, sizeof(value));
}

ErrorCode Encode_SRS_Resource_FreqHopping(Encoder& enc, const SRS_Resource_FreqHopping& value)
{
    (void)value;
    enc.WriteConstrainedInteger((std::int64_t)(value.c_SRS), 0, 63);
    enc.WriteConstrainedInteger((std::int64_t)(value.b_SRS), 0, 3);
    enc.WriteConstrainedInteger((std::int64_t)(value.b_hop), 0, 3);
    return enc.Error();
}

ErrorCode Decode_SRS_Resource_FreqHopping(Decoder& dec, SRS_Resource_FreqHopping& value)
{
    std::memset(&value, 0, sizeof(value));
    do {
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 63, tmp_value)) { goto fail; }
        value.c_SRS = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.b_SRS = (int64_t)tmp_value;
    }
    {
        std::int64_t tmp_value = 0;
        if (!dec.ReadConstrainedInteger(0, 3, tmp_value)) { goto fail; }
        value.b_hop = (int64_t)tmp_value;
    }
    return dec.Error();
    } while (false);
fail:
    Free_SRS_Resource_FreqHopping(value);
    std::memset(&value, 0, sizeof(value));
    return dec.Error();
}

void Free_SRS_Resource_FreqHopping(SRS_Resource_FreqHopping& value)
{
    std::memset(&value, 0, sizeof(value));
}

}  // namespace v1810
}  // namespace rrc
