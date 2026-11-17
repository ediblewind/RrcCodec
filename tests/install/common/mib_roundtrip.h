/* ============================================================================
 * tests/install/common/mib_roundtrip.h — 安装消费测试共用的 MIB 编解码自检
 *
 * 由各个 consumer（find_package / pkg-config / add_subdirectory）包含；
 * 只使用公共 C ABI 头，纯 C99 可编译（C++ 下同样可用）。
 *
 * rrc_install_check_mib_roundtrip() 返回 0 表示全部断言通过，非 0 为失败编号。
 * ========================================================================== */
#ifndef RRC_CODEC_INSTALL_COMMON_MIB_ROUNDTRIP_H
#define RRC_CODEC_INSTALL_COMMON_MIB_ROUNDTRIP_H

#include <rrc_codec/rrc_codec.h>

#include <stdint.h>
#include <stdio.h>
#include <string.h>

/**
 * @brief 编码 → 解码 → 再编码 MIB，并校验错误路径与版本接口。
 * @return 0 成功；非 0 为具体失败点编号（见函数内注释）。
 */
static int rrc_install_check_mib_roundtrip(void)
{
    static uint8_t sfn = 0x2A; /* systemFrameNumber: 6 bit = 101010 */
    static uint8_t spare = 0x00;
    MIB mib;
    MIB decoded;
    EncodedMessage encoded;
    EncodedMessage reencoded;
    ErrorInfo info;
    ErrorCode rc;
    const char *version;

    /* 0) 版本接口：静态字符串非空。 */
    version = GetVersionString();
    if (version == NULL || version[0] == '\0') {
        return 1;
    }
    version = GetAsn1VersionString();
    if (version == NULL || version[0] == '\0') {
        return 2;
    }

    /* 1) 构造 MIB（无信道容器层）。 */
    memset(&mib, 0, sizeof mib);
    mib.systemFrameNumber.bytes = &sfn;
    mib.systemFrameNumber.bitLength = 6;
    mib.subCarrierSpacingCommon = MIB_SubCarrierSpacingCommon_scs15or60;
    mib.ssb_SubcarrierOffset = 0;
    mib.dmrs_TypeA_Position = MIB_Dmrs_TypeA_Position_pos2;
    mib.pdcch_ConfigSIB1.controlResourceSetZero = 0;
    mib.pdcch_ConfigSIB1.searchSpaceZero = 0;
    mib.cellBarred = MIB_CellBarred_notBarred;
    mib.intraFreqReselection = MIB_IntraFreqReselection_allowed;
    mib.spare.bytes = &spare;
    mib.spare.bitLength = 1;

    /* 2) 参数校验：空 message 必须被拒绝。 */
    memset(&encoded, 0xAA, sizeof encoded); /* 干扰值，验证失败时被清零 */
    rc = EncodeMessage(MessageKind_MIB, NULL, &encoded);
    if (rc != ErrorCode_InvalidArgument) {
        return 3;
    }
    if (encoded.data != NULL || encoded.size != 0 || encoded.bitLength != 0) {
        return 4;
    }

    /* 3) 正常编码。 */
    memset(&encoded, 0, sizeof encoded);
    rc = EncodeMessage(MessageKind_MIB, &mib, &encoded);
    if (rc != ErrorCode_Ok) {
        return 5;
    }
    if (encoded.data == NULL || encoded.size == 0 || encoded.bitLength == 0) {
        return 6;
    }
    if (encoded.bitLength > encoded.size * 8u) {
        return 7;
    }

    /* 4) 正常解码（channel + kind 一致）。 */
    memset(&decoded, 0, sizeof decoded);
    rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, encoded.data,
                       encoded.size, &decoded);
    if (rc != ErrorCode_Ok) {
        FreeEncodedMessage(&encoded);
        return 8;
    }
    if (decoded.systemFrameNumber.bitLength != 6) {
        FreeMessage(MessageKind_MIB, &decoded);
        FreeEncodedMessage(&encoded);
        return 9;
    }
    if (decoded.systemFrameNumber.bytes == NULL ||
        (decoded.systemFrameNumber.bytes[0] & 0xFCu) != (0x2Au & 0xFCu)) {
        FreeMessage(MessageKind_MIB, &decoded);
        FreeEncodedMessage(&encoded);
        return 10;
    }

    /* 5) 再编码应与首次编码比特一致（round-trip）。 */
    memset(&reencoded, 0, sizeof reencoded);
    rc = EncodeMessage(MessageKind_MIB, &decoded, &reencoded);
    if (rc != ErrorCode_Ok) {
        FreeMessage(MessageKind_MIB, &decoded);
        FreeEncodedMessage(&encoded);
        return 11;
    }
    if (reencoded.bitLength != encoded.bitLength ||
        reencoded.size != encoded.size ||
        memcmp(reencoded.data, encoded.data, encoded.size) != 0) {
        FreeEncodedMessage(&reencoded);
        FreeMessage(MessageKind_MIB, &decoded);
        FreeEncodedMessage(&encoded);
        return 12;
    }
    FreeEncodedMessage(&reencoded);
    FreeMessage(MessageKind_MIB, &decoded);

    /* 6) 信道不匹配：ChannelMismatch，且被记录到线程局部 last error。 */
    memset(&decoded, 0, sizeof decoded);
    memset(&info, 0, sizeof info);
    rc = DecodeMessage(ChannelType_UL_DCCH, MessageKind_MIB, encoded.data,
                       encoded.size, &decoded);
    if (rc != ErrorCode_ChannelMismatch) {
        FreeEncodedMessage(&encoded);
        return 13;
    }
    if (GetLastErrorInfo(&info) != ErrorCode_ChannelMismatch) {
        FreeEncodedMessage(&encoded);
        return 14;
    }
    if (info.channel != ChannelType_UL_DCCH) {
        FreeEncodedMessage(&encoded);
        return 15;
    }

    /* 7) 截断输入：必须返回具体错误码而不是崩溃。 */
    if (encoded.size > 1) {
        memset(&decoded, 0, sizeof decoded);
        rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, encoded.data,
                           1, &decoded);
        if (rc == ErrorCode_Ok) {
            FreeMessage(MessageKind_MIB, &decoded);
            FreeEncodedMessage(&encoded);
            return 16;
        }
        FreeMessage(MessageKind_MIB, &decoded); /* 失败后也可安全调用 */
    }

    FreeEncodedMessage(&encoded);
    return 0;
}

/** @brief 打印并返回自检结果（consumer 的 main 直接 return 它）。 */
static int rrc_install_report(void)
{
    const int result = rrc_install_check_mib_roundtrip();
    if (result == 0) {
        printf("rrc_codec install consumer: MIB round-trip OK\n");
    } else {
        fprintf(stderr, "rrc_codec install consumer: FAILED at check %d\n",
                result);
    }
    return result;
}

#endif /* RRC_CODEC_INSTALL_COMMON_MIB_ROUNDTRIP_H */
