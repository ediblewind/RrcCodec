/* ============================================================================
 * bitstream.hpp — 内部 PER 运行时（位流 + UPER 原语）
 *
 * 本文件是“手写核心”与“生成代码”之间的契约；生成的 codec_partNNN.cpp 只依赖
 * 下列 BitWriter/BitReader/Encoder/Decoder 接口，不直接操作位。
 *
 * 实现要求（X.691 UPER）：
 *   - 位序 MSB first：每字节 bit7 最先写出/读入；
 *   - 不做字节对齐（开放类型内容也不对齐；编码整体结束时才补零到字节边界）；
 *   - 所有读取先检查剩余位数，越界置 ErrorCode_TruncatedInput 并停止；
 *   - 所有可失败原语在失败时把错误记录到 Encoder/Decoder 的“首个错误”，后续
 *     写入/读取调用变为空操作（错误粘滞），生成代码只需在末尾返回 Error()；
 *   - 不抛异常跨 C ABI；std::bad_alloc 由公共 API 兜底为 OutOfMemory。
 *
 * 归属：src/core/bitstream.cpp 实现；不安装、不导出。
 * ========================================================================== */
#ifndef RRC_CODEC_CORE_BITSTREAM_HPP
#define RRC_CODEC_CORE_BITSTREAM_HPP

#include <cstddef>
#include <cstdint>
#include <vector>

#include "limits.hpp"
#include "rrc_codec/rrc_error.h"

namespace rrc {
namespace v1810 {

/* ============================================================================
 * BitWriter：追加写位、按字节扩容、补零对齐
 * ========================================================================== */
class BitWriter {
public:
  BitWriter() = default;

  /** 写 1 bit（MSB first）。 */
  void WriteBit(bool bit);

  /** 写 count 个 bit（count<=64，value 的低 count 位，高位在 bit(count-1)）。 */
  void WriteBits(std::uint64_t value, unsigned count);

  /** 补 0 到字节边界；已对齐时为空操作。 */
  void AlignToByte();

  /** 已写比特数（未补零）。 */
  std::size_t BitLength() const { return bit_length_; }

  /** 当前字节数（含最后一个未满字节，未补零）。 */
  std::size_t ByteLength() const { return (bit_length_ + 7u) / 8u; }

  /** 内部缓冲起始地址（可能为空）。 */
  const std::uint8_t* Data() const { return bytes_.data(); }

  /** 补零到字节边界后返回缓冲（移动语义，调用后缓冲为空）。 */
  std::vector<std::uint8_t> TakeBytes() {
    AlignToByte();
    std::vector<std::uint8_t> result;
    result.swap(bytes_);
    return result;
  }

  /** 清空。 */
  void Reset();

private:
  std::vector<std::uint8_t> bytes_;
  std::size_t bit_length_ = 0;
};

/* ============================================================================
 * BitReader：在 [0, bit_length) 内读位，越界失败
 * ========================================================================== */
class BitReader {
public:
  /** 以 data/size 字节构造；data 可为 NULL 仅当 size==0。 */
  BitReader(const std::uint8_t* data, std::size_t size);

  /** 读取 1 bit；越界返回 false。 */
  bool ReadBit(bool& bit);

  /** 读取 count 个 bit（count<=64），结果在低 count 位；越界返回 false。 */
  bool ReadBits(unsigned count, std::uint64_t& value);

  /** 当前比特偏移。 */
  std::size_t BitOffset() const { return bit_offset_; }

  /** 总比特数。 */
  std::size_t BitLength() const { return bit_length_; }

  /** 剩余比特数。 */
  std::size_t BitsRemaining() const { return bit_length_ - bit_offset_; }

  /** 直接读取 count 个 bit 到调用方缓冲（MSB first，尾部不足 8 bit 补零）。 */
  bool ReadRawBits(std::uint8_t* out, std::uint32_t bit_count);

private:
  const std::uint8_t* data_ = nullptr;
  std::size_t bit_length_ = 0;
  std::size_t bit_offset_ = 0;
};

/* ============================================================================
 * Encoder：UPER 写原语 + 错误/深度状态
 *
 * 错误粘滞：任一原语失败后 Error() 保持首个错误码，后续原语直接返回/空操作；
 * 生成代码在函数末尾 `return enc.Error();` 即可完成错误传播。
 * ========================================================================== */
class Encoder {
public:
  Encoder() = default;

  /** 首个错误码（无错误为 ErrorCode_Ok）。 */
  ErrorCode Error() const { return error_; }

  /** 是否仍可继续写入。 */
  bool Ok() const { return error_ == ErrorCode_Ok; }

  /** 记录首个错误并返回它；已存在错误时不覆盖。 */
  ErrorCode Fail(ErrorCode code);

  /** 已写比特数（未补零）。 */
  std::size_t BitLength() const { return writer_.BitLength(); }

  /** 已写字节数（向上取整）。 */
  std::size_t ByteLength() const { return writer_.ByteLength(); }

  /** 补零到字节边界并返回完整编码字节缓冲。 */
  std::vector<std::uint8_t> Finish() { return writer_.TakeBytes(); }

  // -- 基础 ----------------------------------------------------------------
  void WriteBit(bool bit);
  void WriteBits(std::uint64_t value, unsigned count);
  void WriteBool(bool value) { WriteBit(value); }

  // -- 约束整数/长度（§11.5） ----------------------------------------------
  /**
   * @brief 写约束整数 lb..ub。
   *
   * range=1（lb==ub）→ 0 bit；否则固定 ceil(log2(range)) bit，写 (value-lb)。
   * 方案 6.3：38.331 的 INTEGER 均按固定位宽编码（即使 range>64K 也不加长度前导）。
   * value 超出 [lb,ub] → ValueOutOfRange。
   */
  void WriteConstrainedInteger(std::int64_t value, std::int64_t lower,
                               std::int64_t upper);

  /** 写约束长度（与约束整数同规则，用于 SIZE 上界 <64K 的变长类型）。 */
  void WriteConstrainedLength(std::uint32_t value, std::uint32_t lower,
                              std::uint32_t upper);

  /**
   * @brief 写半约束整数（§11.7）：长度确定量(最小字节数) + 最小字节。
   * 38.331 不使用；保留给引擎完整性。
   */
  void WriteSemiConstrainedInteger(std::uint64_t offset);

  /**
   * @brief 写无约束整数（§13）：长度确定量(2 补码最小字节数) + 字节。
   * 38.331 不使用；保留给引擎完整性。
   */
  void WriteUnconstrainedInteger(std::int64_t value);

  // -- 长度确定量（§11.9） --------------------------------------------------
  /**
   * @brief 写长度确定量（value < 16384）。
   *
   * value<128 → 8 bit；128<=value<16384 → 16 bit（高 2 位 10）。
   * 更大值请使用 WriteFragmentHeader + 内容 + 递归长度确定量。
   */
  void WriteLengthDeterminant(std::uint32_t value);

  /** 写分片头 0xC0|blocks（blocks 1..63，每片 16384 单元）。 */
  void WriteFragmentHeader(std::uint32_t blocks);

  /** usually small length（§11.9.3.4）：n>=1；n<=64 → 0+6bit(n-1)；否则 1+长度确定量。 */
  void WriteNormallySmallLength(std::uint32_t value);

  /** normally small non-negative whole number（§11.6）：<=63 → 0+6bit；否则 1+长度确定量。 */
  void WriteNormallySmallNonNegative(std::uint32_t value);

  // -- 位串/字节串 ------------------------------------------------------------
  /**
   * @brief 定长 BIT STRING：不写长度，只写 bit_length 位。
   * 校验 bit_length==lower==upper、bytes 非空（bit_length>0 时）。
   */
  void WriteFixedBitString(const std::uint8_t* bytes, std::uint32_t bit_length,
                           std::uint32_t lower, std::uint32_t upper);

  /** 变长 BIT STRING（upper<64K）：写约束长度(n-lower) + n 位。 */
  void WriteConstrainedBitString(const std::uint8_t* bytes,
                                 std::uint32_t bit_length, std::uint32_t lower,
                                 std::uint32_t upper);

  /**
   * @brief BIT STRING（upper>=64K 或无上界）：写半约束长度（分片形式）+ 位内容。
   * upper 传 UINT32_MAX 表示无上界；长度上限再受 RRC_CODEC_MAX_BITSTRING_BITS 限制。
   */
  void WriteSemiConstrainedBitString(const std::uint8_t* bytes,
                                     std::uint32_t bit_length,
                                     std::uint32_t lower, std::uint32_t upper);

  /** 定长 OCTET STRING：不写长度，只写 length 字节。 */
  void WriteFixedOctetString(const std::uint8_t* bytes, std::uint32_t length,
                             std::uint32_t lower, std::uint32_t upper);

  /** 变长 OCTET STRING（upper<64K）：写约束长度(n-lower) + n 字节。 */
  void WriteConstrainedOctetString(const std::uint8_t* bytes,
                                   std::uint32_t length, std::uint32_t lower,
                                   std::uint32_t upper);

  /** OCTET STRING（upper>=64K 或无上界）：写半约束长度（分片形式）+ 字节内容。 */
  void WriteSemiConstrainedOctetString(const std::uint8_t* bytes,
                                       std::uint32_t length, std::uint32_t lower,
                                       std::uint32_t upper);

  /** 写原始字节（不做长度）；调用方负责长度前缀。 */
  void WriteRawOctets(const std::uint8_t* bytes, std::uint32_t length);

  /** 写原始位（不做长度，MSB first；尾部不足 8 bit 只写高位）。 */
  void WriteRawBits(const std::uint8_t* bytes, std::uint32_t bit_length);

  /**
   * @brief 写开放类型：长度确定量(字节数) + 内容字节（分片形式）。
   *
   * 内容必须是内层类型已补零到字节边界的完整编码。
   * size > RRC_CODEC_MAX_OPEN_TYPE_BYTES → LengthOutOfRange。
   */
  void WriteOpenType(const std::vector<std::uint8_t>& bytes);

  // -- CONTAINING 深度 --------------------------------------------------------
  int ContainingDepth() const { return containing_depth_; }
  /** 进入一层 CONTAINING；超过 RRC_CODEC_MAX_CONTAINING_DEPTH 返回 false 并置错。 */
  bool PushContaining();
  /** 退出一层 CONTAINING。 */
  void PopContaining();

private:
  void WriteBitStringContent(const std::uint8_t* bytes, std::uint32_t bit_length);
  void WriteFragmentedBits(const std::uint8_t* bytes, std::uint32_t bit_length);
  void WriteFragmentedOctets(const std::uint8_t* bytes, std::uint32_t length);

  BitWriter writer_;
  ErrorCode error_ = ErrorCode_Ok;
  int containing_depth_ = 0;
};

/* ============================================================================
 * Decoder：UPER 读原语 + 错误/深度状态（错误粘滞规则同 Encoder）
 *
 * 变长数据的解码缓冲一律 std::malloc 分配，由生成的 Free_* 函数 std::free。
 * ========================================================================== */
class Decoder {
public:
  /** 以 data/size 字节构造；data 可为 NULL 仅当 size==0。 */
  Decoder(const std::uint8_t* data, std::size_t size);

  /** 首个错误码。 */
  ErrorCode Error() const { return error_; }

  /** 是否仍可继续读取。 */
  bool Ok() const { return error_ == ErrorCode_Ok; }

  /** 记录首个错误并返回它。 */
  ErrorCode Fail(ErrorCode code);

  /** 当前比特偏移（相对于本次解码起点）。 */
  std::size_t BitOffset() const { return reader_.BitOffset(); }

  /** 剩余比特数。 */
  std::size_t BitsRemaining() const { return reader_.BitsRemaining(); }

  // -- 基础 ----------------------------------------------------------------
  bool ReadBit(bool& bit);
  bool ReadBool(bool& value);
  bool ReadBits(unsigned count, std::uint64_t& value);

  // -- 约束整数/长度 ----------------------------------------------------------
  /** 读约束整数 lb..ub；越界 → IntegerOutOfRange。 */
  bool ReadConstrainedInteger(std::int64_t lower, std::int64_t upper,
                              std::int64_t& value);

  /** 读约束长度 lb..ub（upper<64K）；越界 → LengthOutOfRange。 */
  bool ReadConstrainedLength(std::uint32_t lower, std::uint32_t upper,
                             std::uint32_t& value);

  /** 读半约束整数（§11.7）；38.331 不使用，保留。 */
  bool ReadSemiConstrainedInteger(std::uint64_t& offset);
  /** 读无约束整数（§13）；38.331 不使用，保留。 */
  bool ReadUnconstrainedInteger(std::int64_t& value);

  /**
   * @brief 读一个长度确定量。
   *
   * @param[out] value       本次长度值（分片时为分片单元数：blocks*16384）。
   * @param[out] fragmented  true 表示这是一个分片头：调用方必须读取 value 个单元，
   *                         然后再次调用本函数；false 表示这是最后一段长度。
   */
  bool ReadLengthDeterminant(std::uint32_t& value, bool& fragmented);

  /** 读 usually small length（返回值 n>=1）。 */
  bool ReadNormallySmallLength(std::uint32_t& value);

  /** 读 normally small non-negative whole number。 */
  bool ReadNormallySmallNonNegative(std::uint32_t& value);

  // -- 位串/字节串 ------------------------------------------------------------
  /** 定长 BIT STRING：读 bit_length 位并 malloc；0 位时 *out=NULL。 */
  bool ReadFixedBitString(std::uint8_t*& out, std::uint32_t bit_length);

  /** 变长 BIT STRING（upper<64K）：读约束长度 + 位内容并 malloc。 */
  bool ReadConstrainedBitString(std::uint8_t*& out, std::uint32_t& bit_length,
                                std::uint32_t lower, std::uint32_t upper);

  /** BIT STRING（upper>=64K 或无上界）：读分片半约束长度并 malloc。 */
  bool ReadSemiConstrainedBitString(std::uint8_t*& out,
                                    std::uint32_t& bit_length,
                                    std::uint32_t lower, std::uint32_t upper);

  /** 定长 OCTET STRING：读 length 字节并 malloc；0 字节时 *out=NULL。 */
  bool ReadFixedOctetString(std::uint8_t*& out, std::uint32_t length);

  /** 变长 OCTET STRING（upper<64K）：读约束长度 + 字节并 malloc。 */
  bool ReadConstrainedOctetString(std::uint8_t*& out, std::uint32_t& length,
                                  std::uint32_t lower, std::uint32_t upper);

  /** OCTET STRING（upper>=64K 或无上界）：读分片半约束长度并 malloc。 */
  bool ReadSemiConstrainedOctetString(std::uint8_t*& out, std::uint32_t& length,
                                      std::uint32_t lower, std::uint32_t upper);

  /** 读原始字节到调用方缓冲。 */
  bool ReadRawOctets(std::uint8_t* out, std::uint32_t length);

  /** 读原始位到调用方缓冲（尾部补零）。 */
  bool ReadRawBits(std::uint8_t* out, std::uint32_t bit_length);

  /**
   * @brief 读开放类型（长度确定量 + 字节，支持分片）到 out。
   * 长度上限 RRC_CODEC_MAX_OPEN_TYPE_BYTES，且不得超过当前剩余输入。
   */
  bool ReadOpenType(std::vector<std::uint8_t>& out);

  /**
   * @brief 校验子位流正好在开放类型内容末尾：剩余必须 <8 bit 且全为 0。
   * 否则置 ErrorCode_OpenTypeOverrun。
   */
  bool CheckOpenTypeEnd();

  // -- CONTAINING 深度 --------------------------------------------------------
  int ContainingDepth() const { return containing_depth_; }
  bool PushContaining();
  void PopContaining();

private:
  BitReader reader_;
  ErrorCode error_ = ErrorCode_Ok;
  int containing_depth_ = 0;
};

}  // namespace v1810
}  // namespace rrc

#endif /* RRC_CODEC_CORE_BITSTREAM_HPP */
