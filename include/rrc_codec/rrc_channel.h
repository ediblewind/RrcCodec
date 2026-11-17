/* ============================================================================
 * rrc_channel.h — RRC 消息信道
 *
 * 3GPP TS 38.331 v18.10.0 的 10 个 Uu 口消息入口。
 *
 * 本方案不生成信道容器结构体；该枚举只用于：
 *   1. 解码时校验“期望消息”与信道是否一致；
 *   2. 错误信息与文档。
 * 消息类型与信道的固定映射见 MessageKind 与 ChannelOfMessageKind
 * （messages/rrc_messages.h，数据由生成器产出）。
 *
 * 数值稳定：1–10；新增信道只追加数值。
 * ========================================================================== */
#ifndef RRC_CODEC_CHANNEL_H
#define RRC_CODEC_CHANNEL_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief RRC 消息信道（38.331 的 10 个 Uu 口消息入口）。
 *
 * @note 0 不对应任何信道，用于“未涉及信道”的错误信息。
 */
typedef enum ChannelType {
    ChannelType_BCCH_BCH = 1,          /**< BCCH-BCH（MIB） */
    ChannelType_BCCH_DL_SCH = 2,       /**< BCCH-DL-SCH（SystemInformation/SIB1） */
    ChannelType_DL_CCCH = 3,           /**< DL-CCCH（RRCReject/RRCSetup） */
    ChannelType_DL_DCCH = 4,           /**< DL-DCCH（13 个消息） */
    ChannelType_MCCH_r17 = 5,          /**< MCCH-r17（MBS 广播） */
    ChannelType_MulticastMCCH_r18 = 6, /**< MulticastMCCH-r18（MBS 多播） */
    ChannelType_PCCH = 7,              /**< PCCH（Paging） */
    ChannelType_UL_CCCH = 8,           /**< UL-CCCH（4 个消息） */
    ChannelType_UL_CCCH1 = 9,          /**< UL-CCCH1（RRCResumeRequest1） */
    ChannelType_UL_DCCH = 10           /**< UL-DCCH（27 个消息） */
} ChannelType;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* RRC_CODEC_CHANNEL_H */
