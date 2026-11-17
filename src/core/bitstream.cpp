/* ============================================================================
 * bitstream.cpp — 内部 PER 运行时（位流 + X.691 UPER 原语）
 *
 * 与 bitstream.hpp 的契约一致：
 *   - 位序 MSB first，不做字节对齐（仅编码结束时补零）；
 *   - 读取先检查剩余位数，越界置 TruncatedInput；
 *   - 错误粘滞：首个错误码保留，后续原语成为空操作/直接返回；
 *   - 变长解码缓冲用 std::malloc 分配（0 长度返回 NULL），分配前校验上限；
 *   - 分片规则：长度确定量 8/16 bit；16K 分片头 0xC0|blocks（blocks 1..63）。
 * ========================================================================== */
#include "bitstream.hpp"

#include <cstdlib>
#include <cstring>
#include <vector>

namespace rrc {
namespace v1810 {
namespace {

/** 表示 span 个不同取值所需的最小比特数。span==0 表示 2^64（int64 全范围）。 */
unsigned BitsForSpan(std::uint64_t span) {
  if (span == 0) {
    return 64;
  }
  if (span == 1) {
    return 0;
  }
  unsigned bits = 0;
  std::uint64_t power = 1;
  while (power < span) {
    if (bits == 63) {
      return 64;
    }
    power <<= 1;
    ++bits;
  }
  return bits;
}

/** 统计无符号值的最少字节数（0 值返回 0，用于半约束整数的偏移）。 */
unsigned MinimalOctets(std::uint64_t value) {
  unsigned octets = 0;
  while (value != 0) {
    ++octets;
    value >>= 8;
  }
  return octets;
}

// ---------------------------------------------------------------------------
// 解码辅助：分片字节串 / 分片位串（使用 Decoder 公共接口实现）
// ---------------------------------------------------------------------------

/**
 * @brief 循环读取分片长度确定量并把字节内容拼接到 out。
 *
 * @param cap            累计字节数上限。
 * @param cap_error      超上限时记录的错误码。
 * @param truncation_error 声明长度超过剩余输入时记录的错误码。
 */
bool ReadFragmentedOctets(Decoder& dec, std::vector<std::uint8_t>& out,
                          std::uint32_t cap, ErrorCode cap_error,
                          ErrorCode truncation_error) {
  out.clear();
  std::uint64_t total = 0;
  for (;;) {
    std::uint32_t value = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(value, fragmented)) {
      return false;
    }
    if (total + value > cap) {
      dec.Fail(cap_error);
      return false;
    }
    if (static_cast<std::uint64_t>(value) >
        static_cast<std::uint64_t>(dec.BitsRemaining() / 8u)) {
      dec.Fail(truncation_error);
      return false;
    }
    if (value > 0) {
      std::vector<std::uint8_t> chunk(value);
      if (!dec.ReadRawOctets(chunk.data(), value)) {
        return false;
      }
      out.insert(out.end(), chunk.begin(), chunk.end());
    }
    total += value;
    if (!fragmented) {
      break;
    }
  }
  return true;
}

/** 循环读取分片长度确定量并把位内容拼接成字节缓冲（尾部补零）。 */
bool ReadFragmentedBits(Decoder& dec, std::vector<std::uint8_t>& out,
                        std::uint32_t& bit_length, std::uint32_t lower,
                        std::uint32_t upper) {
  BitWriter accumulator;
  std::uint64_t total = 0;
  for (;;) {
    std::uint32_t value = 0;
    bool fragmented = false;
    if (!dec.ReadLengthDeterminant(value, fragmented)) {
      return false;
    }
    if (total + value > RRC_CODEC_MAX_BITSTRING_BITS) {
      dec.Fail(ErrorCode_LengthOutOfRange);
      return false;
    }
    if (value > 0) {
      const std::size_t chunk_bytes =
          (static_cast<std::size_t>(value) + 7u) / 8u;
      std::vector<std::uint8_t> chunk(chunk_bytes);
      if (!dec.ReadRawBits(chunk.data(), value)) {
        return false;
      }
      for (std::uint32_t i = 0; i < value; ++i) {
        accumulator.WriteBit(((chunk[i >> 3] >> (7u - (i & 7u))) & 1u) != 0);
      }
    }
    total += value;
    if (!fragmented) {
      break;
    }
  }
  if (total < lower ||
      (upper != UINT32_MAX && total > static_cast<std::uint64_t>(upper))) {
    dec.Fail(ErrorCode_LengthOutOfRange);
    return false;
  }
  out = accumulator.TakeBytes();
  bit_length = static_cast<std::uint32_t>(total);
  return true;
}

}  // namespace

/* ============================================================================
 * BitWriter
 * ========================================================================== */

void BitWriter::WriteBit(bool bit) {
  if ((bit_length_ & 7u) == 0u) {
    bytes_.push_back(0);
  }
  if (bit) {
    bytes_.back() |= static_cast<std::uint8_t>(0x80u >> (bit_length_ & 7u));
  }
  ++bit_length_;
}

void BitWriter::WriteBits(std::uint64_t value, unsigned count) {
  if (count > 64u) {
    count = 64u;
  }
  while (count > 0) {
    const std::size_t used = bit_length_ & 7u;
    if (used == 0u) {
      bytes_.push_back(0);
    }
    const unsigned space = static_cast<unsigned>(8u - used);
    const unsigned take = count < space ? count : space;
    const unsigned shift = count - take;
    const std::uint64_t mask = (std::uint64_t{1} << take) - 1u;
    const auto chunk =
        static_cast<std::uint8_t>((value >> shift) & mask);
    bytes_.back() |= static_cast<std::uint8_t>(chunk << (space - take));
    bit_length_ += take;
    count -= take;
  }
}

void BitWriter::AlignToByte() {
  const std::size_t used = bit_length_ & 7u;
  if (used != 0u) {
    bit_length_ += 8u - used;
  }
}

void BitWriter::Reset() {
  bytes_.clear();
  bit_length_ = 0;
}

/* ============================================================================
 * BitReader
 * ========================================================================== */

BitReader::BitReader(const std::uint8_t* data, std::size_t size)
    : data_(data), bit_length_(size * 8u), bit_offset_(0) {
  if (data_ == nullptr) {
    bit_length_ = 0;
  }
}

bool BitReader::ReadBit(bool& bit) {
  if (bit_offset_ >= bit_length_) {
    return false;
  }
  bit = ((data_[bit_offset_ >> 3] >> (7u - (bit_offset_ & 7u))) & 1u) != 0;
  ++bit_offset_;
  return true;
}

bool BitReader::ReadBits(unsigned count, std::uint64_t& value) {
  if (count > 64u || count > BitsRemaining()) {
    return false;
  }
  std::uint64_t result = 0;
  for (unsigned i = 0; i < count; ++i) {
    const std::size_t offset = bit_offset_ + i;
    result = (result << 1) |
             ((data_[offset >> 3] >> (7u - (offset & 7u))) & 1u);
  }
  bit_offset_ += count;
  value = result;
  return true;
}

bool BitReader::ReadRawBits(std::uint8_t* out, std::uint32_t bit_count) {
  if (bit_count > BitsRemaining()) {
    return false;
  }
  if (bit_count == 0) {
    return true;
  }
  if (out == nullptr) {
    return false;
  }
  const std::size_t byte_count =
      (static_cast<std::size_t>(bit_count) + 7u) / 8u;
  std::memset(out, 0, byte_count);
  for (std::uint32_t i = 0; i < bit_count; ++i) {
    const std::size_t offset = bit_offset_ + i;
    if (((data_[offset >> 3] >> (7u - (offset & 7u))) & 1u) != 0) {
      out[i >> 3] |= static_cast<std::uint8_t>(0x80u >> (i & 7u));
    }
  }
  bit_offset_ += bit_count;
  return true;
}

/* ============================================================================
 * Encoder — 错误状态
 * ========================================================================== */

ErrorCode Encoder::Fail(ErrorCode code) {
  if (error_ == ErrorCode_Ok && code != ErrorCode_Ok) {
    error_ = code;
  }
  return error_;
}

/* ============================================================================
 * Encoder — 基础
 * ========================================================================== */

void Encoder::WriteBit(bool bit) {
  if (!Ok()) {
    return;
  }
  writer_.WriteBit(bit);
}

void Encoder::WriteBits(std::uint64_t value, unsigned count) {
  if (!Ok()) {
    return;
  }
  if (count > 64u) {
    Fail(ErrorCode_InvalidArgument);
    return;
  }
  writer_.WriteBits(value, count);
}

/* ============================================================================
 * Encoder — 约束整数/长度
 * ========================================================================== */

void Encoder::WriteConstrainedInteger(std::int64_t value, std::int64_t lower,
                                      std::int64_t upper) {
  if (!Ok()) {
    return;
  }
  if (lower > upper || value < lower || value > upper) {
    Fail(ErrorCode_ValueOutOfRange);
    return;
  }
  // 跨度按无符号回绕计算：lower=INT64_MIN、upper=INT64_MAX 时得到 0（即 2^64）。
  const std::uint64_t span = static_cast<std::uint64_t>(upper) -
                             static_cast<std::uint64_t>(lower) + 1u;
  const unsigned count = BitsForSpan(span);
  if (count == 0u) {
    return;  // range=1：0 bit
  }
  const std::uint64_t offset = static_cast<std::uint64_t>(value) -
                               static_cast<std::uint64_t>(lower);
  writer_.WriteBits(offset, count);
}

void Encoder::WriteConstrainedLength(std::uint32_t value, std::uint32_t lower,
                                     std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if (lower > upper || value < lower || value > upper) {
    Fail(ErrorCode_LengthOutOfRange);
    return;
  }
  const std::uint64_t span = static_cast<std::uint64_t>(upper) -
                             static_cast<std::uint64_t>(lower) + 1u;
  const unsigned count = BitsForSpan(span);
  if (count == 0u) {
    return;
  }
  const std::uint64_t offset = static_cast<std::uint64_t>(value) -
                               static_cast<std::uint64_t>(lower);
  writer_.WriteBits(offset, count);
}

void Encoder::WriteSemiConstrainedInteger(std::uint64_t offset) {
  if (!Ok()) {
    return;
  }
  // §11.7：偏移量的最少字节数（前导零字节不出现；0 值写长度为 0）。
  const unsigned octets = MinimalOctets(offset);
  WriteLengthDeterminant(octets);
  for (unsigned i = 0; i < octets; ++i) {
    const unsigned shift = (octets - 1u - i) * 8u;
    writer_.WriteBits((offset >> shift) & 0xFFu, 8);
  }
}

void Encoder::WriteUnconstrainedInteger(std::int64_t value) {
  if (!Ok()) {
    return;
  }
  // §13：2 补码最少字节数（1..8），再写长度确定量与字节。
  unsigned octets = 1;
  while (octets < 8u) {
    const std::uint64_t sign = std::uint64_t{1} << (8u * octets - 1u);
    const std::int64_t min = -static_cast<std::int64_t>(sign);
    const std::int64_t max = static_cast<std::int64_t>(sign - 1u);
    if (value >= min && value <= max) {
      break;
    }
    ++octets;
  }
  WriteLengthDeterminant(octets);
  const std::uint64_t bits = static_cast<std::uint64_t>(value);
  for (unsigned i = 0; i < octets; ++i) {
    const unsigned shift = (octets - 1u - i) * 8u;
    writer_.WriteBits((bits >> shift) & 0xFFu, 8);
  }
}

/* ============================================================================
 * Encoder — 长度确定量
 * ========================================================================== */

void Encoder::WriteLengthDeterminant(std::uint32_t value) {
  if (!Ok()) {
    return;
  }
  if (value < 128u) {
    writer_.WriteBits(value, 8);
    return;
  }
  if (value < kPerFragmentUnit) {
    writer_.WriteBits(0x8000u | value, 16);
    return;
  }
  // 更大长度必须用分片形式；见 WriteFragmentHeader / Write*SemiConstrained*。
  Fail(ErrorCode_LengthOutOfRange);
}

void Encoder::WriteFragmentHeader(std::uint32_t blocks) {
  if (!Ok()) {
    return;
  }
  if (blocks < 1u || blocks > kPerMaxFragmentBlocks) {
    Fail(ErrorCode_LengthOutOfRange);
    return;
  }
  writer_.WriteBits(0xC0u | blocks, 8);
}

void Encoder::WriteNormallySmallLength(std::uint32_t value) {
  if (!Ok()) {
    return;
  }
  if (value < 1u) {
    Fail(ErrorCode_LengthOutOfRange);
    return;
  }
  if (value <= 64u) {
    writer_.WriteBit(false);
    writer_.WriteBits(value - 1u, 6);
    return;
  }
  writer_.WriteBit(true);
  WriteLengthDeterminant(value);
}

void Encoder::WriteNormallySmallNonNegative(std::uint32_t value) {
  if (!Ok()) {
    return;
  }
  if (value <= 63u) {
    writer_.WriteBit(false);
    writer_.WriteBits(value, 6);
    return;
  }
  writer_.WriteBit(true);
  WriteLengthDeterminant(value);
}

/* ============================================================================
 * Encoder — 位串/字节串
 * ========================================================================== */

void Encoder::WriteRawBits(const std::uint8_t* bytes, std::uint32_t bit_length) {
  if (!Ok()) {
    return;
  }
  if (bit_length == 0u) {
    return;
  }
  if (bytes == nullptr) {
    Fail(ErrorCode_InvalidBitString);
    return;
  }
  // 按 64 bit 分块拼装后交给 BitWriter（源可能未按字节对齐）。
  std::uint32_t done = 0;
  while (done < bit_length) {
    std::uint32_t take = bit_length - done;
    if (take > 64u) {
      take = 64u;
    }
    std::uint64_t packed = 0;
    for (std::uint32_t i = 0; i < take; ++i) {
      const std::size_t offset = static_cast<std::size_t>(done) + i;
      packed = (packed << 1) |
               ((bytes[offset >> 3] >> (7u - (offset & 7u))) & 1u);
    }
    writer_.WriteBits(packed, take);
    done += take;
  }
}

void Encoder::WriteRawOctets(const std::uint8_t* bytes, std::uint32_t length) {
  if (!Ok()) {
    return;
  }
  if (length == 0u) {
    return;
  }
  if (bytes == nullptr) {
    Fail(ErrorCode_InvalidOctetString);
    return;
  }
  for (std::uint32_t i = 0; i < length; ++i) {
    writer_.WriteBits(bytes[i], 8);
  }
}

void Encoder::WriteBitStringContent(const std::uint8_t* bytes,
                                    std::uint32_t bit_length) {
  if (bit_length == 0u) {
    return;
  }
  WriteRawBits(bytes, bit_length);
}

void Encoder::WriteFixedBitString(const std::uint8_t* bytes,
                                  std::uint32_t bit_length,
                                  std::uint32_t lower, std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if (lower != upper || bit_length < lower || bit_length > upper ||
      (bit_length > 0u && bytes == nullptr)) {
    Fail(ErrorCode_InvalidBitString);
    return;
  }
  WriteBitStringContent(bytes, bit_length);
}

void Encoder::WriteConstrainedBitString(const std::uint8_t* bytes,
                                        std::uint32_t bit_length,
                                        std::uint32_t lower,
                                        std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if (lower > upper || bit_length < lower || bit_length > upper ||
      (bit_length > 0u && bytes == nullptr)) {
    Fail(ErrorCode_InvalidBitString);
    return;
  }
  WriteConstrainedLength(bit_length, lower, upper);
  if (!Ok()) {
    return;
  }
  WriteBitStringContent(bytes, bit_length);
}

void Encoder::WriteSemiConstrainedBitString(const std::uint8_t* bytes,
                                            std::uint32_t bit_length,
                                            std::uint32_t lower,
                                            std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if ((upper != UINT32_MAX && (lower > upper || bit_length > upper)) ||
      bit_length < lower || bit_length > RRC_CODEC_MAX_BITSTRING_BITS ||
      (bit_length > 0u && bytes == nullptr)) {
    Fail(ErrorCode_InvalidBitString);
    return;
  }
  WriteFragmentedBits(bytes, bit_length);
}

void Encoder::WriteFragmentedBits(const std::uint8_t* bytes,
                                  std::uint32_t bit_length) {
  if (!Ok()) {
    return;
  }
  std::uint32_t remaining = bit_length;
  const std::uint8_t* cursor = bytes;
  while (remaining > kPerFragmentUnit - 1u) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) {
      blocks = kPerMaxFragmentBlocks;
    }
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    WriteFragmentHeader(blocks);
    if (!Ok()) {
      return;
    }
    WriteRawBits(cursor, chunk);
    if (!Ok()) {
      return;
    }
    cursor += chunk / 8u;
    remaining -= chunk;
  }
  WriteLengthDeterminant(remaining);
  if (!Ok()) {
    return;
  }
  WriteRawBits(cursor, remaining);
}

void Encoder::WriteFixedOctetString(const std::uint8_t* bytes,
                                    std::uint32_t length,
                                    std::uint32_t lower, std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if (lower != upper || length < lower || length > upper ||
      (length > 0u && bytes == nullptr)) {
    Fail(ErrorCode_InvalidOctetString);
    return;
  }
  WriteRawOctets(bytes, length);
}

void Encoder::WriteConstrainedOctetString(const std::uint8_t* bytes,
                                          std::uint32_t length,
                                          std::uint32_t lower,
                                          std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if (lower > upper || length < lower || length > upper ||
      (length > 0u && bytes == nullptr)) {
    Fail(ErrorCode_InvalidOctetString);
    return;
  }
  WriteConstrainedLength(length, lower, upper);
  if (!Ok()) {
    return;
  }
  WriteRawOctets(bytes, length);
}

void Encoder::WriteSemiConstrainedOctetString(const std::uint8_t* bytes,
                                              std::uint32_t length,
                                              std::uint32_t lower,
                                              std::uint32_t upper) {
  if (!Ok()) {
    return;
  }
  if ((upper != UINT32_MAX && (lower > upper || length > upper)) ||
      length < lower || length > RRC_CODEC_MAX_INPUT_BYTES ||
      (length > 0u && bytes == nullptr)) {
    Fail(ErrorCode_InvalidOctetString);
    return;
  }
  WriteFragmentedOctets(bytes, length);
}

void Encoder::WriteFragmentedOctets(const std::uint8_t* bytes,
                                    std::uint32_t length) {
  if (!Ok()) {
    return;
  }
  std::uint32_t remaining = length;
  const std::uint8_t* cursor = bytes;
  while (remaining > kPerFragmentUnit - 1u) {
    std::uint32_t blocks = remaining / kPerFragmentUnit;
    if (blocks > kPerMaxFragmentBlocks) {
      blocks = kPerMaxFragmentBlocks;
    }
    const std::uint32_t chunk = blocks * kPerFragmentUnit;
    WriteFragmentHeader(blocks);
    if (!Ok()) {
      return;
    }
    WriteRawOctets(cursor, chunk);
    if (!Ok()) {
      return;
    }
    cursor += chunk;
    remaining -= chunk;
  }
  WriteLengthDeterminant(remaining);
  if (!Ok()) {
    return;
  }
  WriteRawOctets(cursor, remaining);
}

void Encoder::WriteOpenType(const std::vector<std::uint8_t>& bytes) {
  if (!Ok()) {
    return;
  }
  if (bytes.size() > static_cast<std::size_t>(RRC_CODEC_MAX_OPEN_TYPE_BYTES)) {
    Fail(ErrorCode_LengthOutOfRange);
    return;
  }
  WriteFragmentedOctets(bytes.empty() ? nullptr : bytes.data(),
                        static_cast<std::uint32_t>(bytes.size()));
}

/* ============================================================================
 * Encoder — CONTAINING 深度
 * ========================================================================== */

bool Encoder::PushContaining() {
  if (!Ok()) {
    return false;
  }
  if (containing_depth_ >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    Fail(ErrorCode_ContainingDepthExceeded);
    return false;
  }
  ++containing_depth_;
  return true;
}

void Encoder::PopContaining() {
  if (containing_depth_ > 0) {
    --containing_depth_;
  }
}

/* ============================================================================
 * Decoder — 错误状态 / 基础
 * ========================================================================== */

Decoder::Decoder(const std::uint8_t* data, std::size_t size)
    : reader_(data, size) {}

ErrorCode Decoder::Fail(ErrorCode code) {
  if (error_ == ErrorCode_Ok && code != ErrorCode_Ok) {
    error_ = code;
  }
  return error_;
}

bool Decoder::ReadBit(bool& bit) {
  if (!Ok()) {
    return false;
  }
  if (!reader_.ReadBit(bit)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  return true;
}

bool Decoder::ReadBool(bool& value) { return ReadBit(value); }

bool Decoder::ReadBits(unsigned count, std::uint64_t& value) {
  if (!Ok()) {
    return false;
  }
  if (count > 64u) {
    Fail(ErrorCode_InvalidArgument);
    return false;
  }
  if (!reader_.ReadBits(count, value)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  return true;
}

/* ============================================================================
 * Decoder — 约束整数/长度
 * ========================================================================== */

bool Decoder::ReadConstrainedInteger(std::int64_t lower, std::int64_t upper,
                                     std::int64_t& value) {
  value = 0;
  if (!Ok()) {
    return false;
  }
  if (lower > upper) {
    Fail(ErrorCode_IntegerOutOfRange);
    return false;
  }
  const std::uint64_t span = static_cast<std::uint64_t>(upper) -
                             static_cast<std::uint64_t>(lower) + 1u;
  const unsigned count = BitsForSpan(span);
  if (count == 0u) {
    value = lower;
    return true;
  }
  std::uint64_t raw = 0;
  if (!reader_.ReadBits(count, raw)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  if (span != 0u && raw > span - 1u) {
    Fail(ErrorCode_IntegerOutOfRange);
    return false;
  }
  value = static_cast<std::int64_t>(static_cast<std::uint64_t>(lower) + raw);
  return true;
}

bool Decoder::ReadConstrainedLength(std::uint32_t lower, std::uint32_t upper,
                                    std::uint32_t& value) {
  value = 0;
  if (!Ok()) {
    return false;
  }
  if (lower > upper) {
    Fail(ErrorCode_LengthOutOfRange);
    return false;
  }
  const std::uint64_t span = static_cast<std::uint64_t>(upper) -
                             static_cast<std::uint64_t>(lower) + 1u;
  const unsigned count = BitsForSpan(span);
  if (count == 0u) {
    value = lower;
    return true;
  }
  std::uint64_t raw = 0;
  if (!reader_.ReadBits(count, raw)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  if (raw > span - 1u) {
    Fail(ErrorCode_LengthOutOfRange);
    return false;
  }
  value = static_cast<std::uint32_t>(static_cast<std::uint64_t>(lower) + raw);
  return true;
}

bool Decoder::ReadSemiConstrainedInteger(std::uint64_t& offset) {
  offset = 0;
  if (!Ok()) {
    return false;
  }
  std::uint32_t octets = 0;
  bool fragmented = false;
  if (!ReadLengthDeterminant(octets, fragmented)) {
    return false;
  }
  if (fragmented || octets > 8u) {
    Fail(ErrorCode_InvalidLength);
    return false;
  }
  std::uint64_t result = 0;
  for (std::uint32_t i = 0; i < octets; ++i) {
    std::uint64_t byte = 0;
    if (!ReadBits(8, byte)) {
      return false;
    }
    result = (result << 8) | byte;
  }
  offset = result;
  return true;
}

bool Decoder::ReadUnconstrainedInteger(std::int64_t& value) {
  value = 0;
  if (!Ok()) {
    return false;
  }
  std::uint32_t octets = 0;
  bool fragmented = false;
  if (!ReadLengthDeterminant(octets, fragmented)) {
    return false;
  }
  if (fragmented || octets == 0u || octets > 8u) {
    Fail(ErrorCode_InvalidLength);
    return false;
  }
  std::uint64_t raw = 0;
  for (std::uint32_t i = 0; i < octets; ++i) {
    std::uint64_t byte = 0;
    if (!ReadBits(8, byte)) {
      return false;
    }
    raw = (raw << 8) | byte;
  }
  if (octets < 8u) {
    const unsigned used_bits = octets * 8u;
    const std::uint64_t sign_bit = std::uint64_t{1} << (used_bits - 1u);
    if ((raw & sign_bit) != 0u) {
      raw |= ~((std::uint64_t{1} << used_bits) - 1u);
    }
  }
  value = static_cast<std::int64_t>(raw);
  return true;
}

/* ============================================================================
 * Decoder — 长度确定量
 * ========================================================================== */

bool Decoder::ReadLengthDeterminant(std::uint32_t& value, bool& fragmented) {
  value = 0;
  fragmented = false;
  if (!Ok()) {
    return false;
  }
  std::uint64_t first_bits = 0;
  if (!ReadBits(8, first_bits)) {
    return false;
  }
  const auto first = static_cast<std::uint32_t>(first_bits);
  if ((first & 0x80u) == 0u) {
    value = first;
    return true;
  }
  if ((first & 0xC0u) == 0x80u) {
    std::uint64_t second_bits = 0;
    if (!ReadBits(8, second_bits)) {
      return false;
    }
    value = ((first & 0x3Fu) << 8) |
            static_cast<std::uint32_t>(second_bits);
    return true;
  }
  const std::uint32_t blocks = first & 0x3Fu;
  if (blocks == 0u) {
    Fail(ErrorCode_InvalidLength);
    return false;
  }
  value = blocks * kPerFragmentUnit;
  fragmented = true;
  return true;
}

bool Decoder::ReadNormallySmallLength(std::uint32_t& value) {
  value = 0;
  if (!Ok()) {
    return false;
  }
  bool long_form = false;
  if (!ReadBit(long_form)) {
    return false;
  }
  if (!long_form) {
    std::uint64_t six = 0;
    if (!ReadBits(6, six)) {
      return false;
    }
    value = static_cast<std::uint32_t>(six) + 1u;
    return true;
  }
  std::uint32_t length = 0;
  bool fragmented = false;
  if (!ReadLengthDeterminant(length, fragmented)) {
    return false;
  }
  if (fragmented || length == 0u) {
    Fail(ErrorCode_InvalidLength);
    return false;
  }
  value = length;
  return true;
}

bool Decoder::ReadNormallySmallNonNegative(std::uint32_t& value) {
  value = 0;
  if (!Ok()) {
    return false;
  }
  bool long_form = false;
  if (!ReadBit(long_form)) {
    return false;
  }
  if (!long_form) {
    std::uint64_t six = 0;
    if (!ReadBits(6, six)) {
      return false;
    }
    value = static_cast<std::uint32_t>(six);
    return true;
  }
  std::uint32_t length = 0;
  bool fragmented = false;
  if (!ReadLengthDeterminant(length, fragmented)) {
    return false;
  }
  if (fragmented) {
    Fail(ErrorCode_InvalidLength);
    return false;
  }
  value = length;
  return true;
}

/* ============================================================================
 * Decoder — 位串/字节串
 * ========================================================================== */

bool Decoder::ReadFixedBitString(std::uint8_t*& out,
                                 std::uint32_t bit_length) {
  out = nullptr;
  if (!Ok()) {
    return false;
  }
  if (bit_length > RRC_CODEC_MAX_BITSTRING_BITS) {
    Fail(ErrorCode_LengthOutOfRange);
    return false;
  }
  if (bit_length == 0u) {
    return true;
  }
  if (bit_length > reader_.BitsRemaining()) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  const std::size_t byte_count =
      (static_cast<std::size_t>(bit_length) + 7u) / 8u;
  auto* buffer = static_cast<std::uint8_t*>(std::malloc(byte_count));
  if (buffer == nullptr) {
    Fail(ErrorCode_OutOfMemory);
    return false;
  }
  if (!reader_.ReadRawBits(buffer, bit_length)) {
    std::free(buffer);
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  out = buffer;
  return true;
}

bool Decoder::ReadConstrainedBitString(std::uint8_t*& out,
                                       std::uint32_t& bit_length,
                                       std::uint32_t lower,
                                       std::uint32_t upper) {
  out = nullptr;
  bit_length = 0;
  if (!Ok()) {
    return false;
  }
  std::uint32_t length = 0;
  if (!ReadConstrainedLength(lower, upper, length)) {
    return false;
  }
  if (!ReadFixedBitString(out, length)) {
    return false;
  }
  bit_length = length;
  return true;
}

bool Decoder::ReadSemiConstrainedBitString(std::uint8_t*& out,
                                           std::uint32_t& bit_length,
                                           std::uint32_t lower,
                                           std::uint32_t upper) {
  out = nullptr;
  bit_length = 0;
  if (!Ok()) {
    return false;
  }
  std::vector<std::uint8_t> bytes;
  std::uint32_t total = 0;
  if (!ReadFragmentedBits(*this, bytes, total, lower, upper)) {
    return false;
  }
  if (bytes.empty()) {
    return true;  // 0 bit：out 保持 NULL
  }
  auto* buffer = static_cast<std::uint8_t*>(std::malloc(bytes.size()));
  if (buffer == nullptr) {
    Fail(ErrorCode_OutOfMemory);
    return false;
  }
  std::memcpy(buffer, bytes.data(), bytes.size());
  out = buffer;
  bit_length = total;
  return true;
}

bool Decoder::ReadFixedOctetString(std::uint8_t*& out, std::uint32_t length) {
  out = nullptr;
  if (!Ok()) {
    return false;
  }
  if (length > RRC_CODEC_MAX_INPUT_BYTES) {
    Fail(ErrorCode_LengthOutOfRange);
    return false;
  }
  if (length == 0u) {
    return true;
  }
  if (static_cast<std::uint64_t>(length) >
      static_cast<std::uint64_t>(reader_.BitsRemaining() / 8u)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  auto* buffer = static_cast<std::uint8_t*>(std::malloc(length));
  if (buffer == nullptr) {
    Fail(ErrorCode_OutOfMemory);
    return false;
  }
  if (!reader_.ReadRawBits(buffer, length * 8u)) {
    std::free(buffer);
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  out = buffer;
  return true;
}

bool Decoder::ReadConstrainedOctetString(std::uint8_t*& out,
                                         std::uint32_t& length,
                                         std::uint32_t lower,
                                         std::uint32_t upper) {
  out = nullptr;
  length = 0;
  if (!Ok()) {
    return false;
  }
  std::uint32_t decoded = 0;
  if (!ReadConstrainedLength(lower, upper, decoded)) {
    return false;
  }
  if (!ReadFixedOctetString(out, decoded)) {
    return false;
  }
  length = decoded;
  return true;
}

bool Decoder::ReadSemiConstrainedOctetString(std::uint8_t*& out,
                                             std::uint32_t& length,
                                             std::uint32_t lower,
                                             std::uint32_t upper) {
  out = nullptr;
  length = 0;
  if (!Ok()) {
    return false;
  }
  std::vector<std::uint8_t> bytes;
  if (!ReadFragmentedOctets(*this, bytes, RRC_CODEC_MAX_INPUT_BYTES,
                            ErrorCode_LengthOutOfRange,
                            ErrorCode_TruncatedInput)) {
    return false;
  }
  const std::uint64_t total = static_cast<std::uint64_t>(bytes.size());
  if (total < lower ||
      (upper != UINT32_MAX && total > static_cast<std::uint64_t>(upper))) {
    Fail(ErrorCode_LengthOutOfRange);
    return false;
  }
  if (bytes.empty()) {
    return true;
  }
  auto* buffer = static_cast<std::uint8_t*>(std::malloc(bytes.size()));
  if (buffer == nullptr) {
    Fail(ErrorCode_OutOfMemory);
    return false;
  }
  std::memcpy(buffer, bytes.data(), bytes.size());
  out = buffer;
  length = static_cast<std::uint32_t>(bytes.size());
  return true;
}

bool Decoder::ReadRawOctets(std::uint8_t* out, std::uint32_t length) {
  if (length == 0u) {
    return true;
  }
  if (!Ok()) {
    return false;
  }
  if (out == nullptr) {
    Fail(ErrorCode_InvalidArgument);
    return false;
  }
  if (static_cast<std::uint64_t>(length) >
      static_cast<std::uint64_t>(reader_.BitsRemaining() / 8u)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  if (!reader_.ReadRawBits(out, length * 8u)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  return true;
}

bool Decoder::ReadRawBits(std::uint8_t* out, std::uint32_t bit_length) {
  if (bit_length == 0u) {
    return true;
  }
  if (!Ok()) {
    return false;
  }
  if (out == nullptr) {
    Fail(ErrorCode_InvalidArgument);
    return false;
  }
  if (bit_length > reader_.BitsRemaining()) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  if (!reader_.ReadRawBits(out, bit_length)) {
    Fail(ErrorCode_TruncatedInput);
    return false;
  }
  return true;
}

bool Decoder::ReadOpenType(std::vector<std::uint8_t>& out) {
  out.clear();
  if (!Ok()) {
    return false;
  }
  std::vector<std::uint8_t> bytes;
  if (!ReadFragmentedOctets(*this, bytes, RRC_CODEC_MAX_OPEN_TYPE_BYTES,
                            ErrorCode_LengthOutOfRange,
                            ErrorCode_OpenTypeOverrun)) {
    out.clear();
    return false;
  }
  out.swap(bytes);
  return true;
}

bool Decoder::CheckOpenTypeEnd() {
  if (!Ok()) {
    return false;
  }
  if (reader_.BitsRemaining() >= 8u) {
    Fail(ErrorCode_OpenTypeOverrun);
    return false;
  }
  while (reader_.BitsRemaining() > 0u) {
    bool bit = false;
    if (!ReadBit(bit)) {
      return false;
    }
    if (bit) {
      Fail(ErrorCode_OpenTypeOverrun);
      return false;
    }
  }
  return true;
}

/* ============================================================================
 * Decoder — CONTAINING 深度
 * ========================================================================== */

bool Decoder::PushContaining() {
  if (!Ok()) {
    return false;
  }
  if (containing_depth_ >= RRC_CODEC_MAX_CONTAINING_DEPTH) {
    Fail(ErrorCode_ContainingDepthExceeded);
    return false;
  }
  ++containing_depth_;
  return true;
}

void Decoder::PopContaining() {
  if (containing_depth_ > 0) {
    --containing_depth_;
  }
}

}  // namespace v1810
}  // namespace rrc
