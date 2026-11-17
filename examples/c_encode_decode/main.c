/* ============================================================================
 * examples/c_encode_decode/main.c — 纯 C99 示例：编码并解码 MIB（BCCH-BCH）
 *
 * 对应 docs/RRC编解码库简化方案.md §4.7.1：
 *   构造 MIB（无信道容器层）→ EncodeMessage(MessageKind_MIB, ...)
 *   → DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, ...)
 *   → FreeMessage / FreeEncodedMessage。
 *
 * 构建（安装后）：
 *   cc -std=c99 main.c $(pkg-config --cflags --libs rrc_codec) -o c_encode_decode
 * 或在仓库根执行 cmake --build build --target rrc_codec_example_c。
 * ========================================================================== */
#include <rrc_codec/rrc_codec.h>

#include <stdint.h>
#include <stdio.h>
#include <string.h>

/* 打印编码结果（MSB first 字节）。 */
static void print_hex(const EncodedMessage* encoded)
{
    size_t i;
    printf("encoded: %zu bytes, %zu bits\n", encoded->size, encoded->bitLength);
    printf("hex    : ");
    for (i = 0; i < encoded->size; ++i) {
        printf("%02x", (unsigned)encoded->data[i]);
    }
    printf("\n");
}

int main(void)
{
    /* 1) 构造消息：顶层结构体就是 MIB 本身，没有信道容器层。 */
    static uint8_t sfn = 0xA8; /* systemFrameNumber: 前 6 bit = 101010 */
    static uint8_t spare = 0x00;
    MIB mib;
    MIB decoded;
    EncodedMessage encoded;
    ErrorCode rc;

    memset(&mib, 0, sizeof mib);
    mib.systemFrameNumber.bytes = &sfn;
    mib.systemFrameNumber.bitLength = 6;

    mib.subCarrierSpacingCommon = MIB_SubCarrierSpacingCommon_scs15or60;
    mib.ssb_SubcarrierOffset = 7;
    mib.dmrs_TypeA_Position = MIB_Dmrs_TypeA_Position_pos2;
    mib.pdcch_ConfigSIB1.controlResourceSetZero = 3;
    mib.pdcch_ConfigSIB1.searchSpaceZero = 5;
    mib.cellBarred = MIB_CellBarred_notBarred;
    mib.intraFreqReselection = MIB_IntraFreqReselection_allowed;

    mib.spare.bytes = &spare;
    mib.spare.bitLength = 1;

    /* 2) 编码：显式传消息类型，不传信道；输出缓冲由库分配。 */
    memset(&encoded, 0, sizeof encoded);
    rc = EncodeMessage(MessageKind_MIB, &mib, &encoded);
    if (rc != ErrorCode_Ok) {
        ErrorInfo info;
        (void)GetLastErrorInfo(&info);
        fprintf(stderr, "encode failed: %d, bit=%llu\n", (int)info.code,
                (unsigned long long)info.bitOffset);
        FreeEncodedMessage(&encoded); /* 失败时为空操作，安全 */
        return 1;
    }
    print_hex(&encoded);

    /* 3) 解码：传信道 + 消息类型 + 输入缓冲；channel 用于一致性校验。 */
    memset(&decoded, 0, sizeof decoded);
    rc = DecodeMessage(ChannelType_BCCH_BCH, MessageKind_MIB, encoded.data,
                       encoded.size, &decoded);
    if (rc != ErrorCode_Ok) {
        ErrorInfo info;
        (void)GetLastErrorInfo(&info);
        fprintf(stderr, "decode failed: %d, bit=%llu\n", (int)info.code,
                (unsigned long long)info.bitOffset);
        FreeEncodedMessage(&encoded);
        return 1;
    }

    printf("decoded: sfn bitLength = %u, cellBarred = %d\n",
           (unsigned)decoded.systemFrameNumber.bitLength,
           (int)decoded.cellBarred);

    /* 4) 解码得到的消息必须先 FreeMessage，再释放编码缓冲。 */
    FreeMessage(MessageKind_MIB, &decoded);
    FreeEncodedMessage(&encoded);

    if (decoded.systemFrameNumber.bytes != NULL) { /* 释放后应被清零 */
        fprintf(stderr, "FreeMessage did not clear output\n");
        return 1;
    }
    return 0;
}
