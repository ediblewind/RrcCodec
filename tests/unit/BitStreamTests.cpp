/* ============================================================================
 * BitStreamTests.cpp — BitWriter/BitReader 与 PER 长度原语单元测试
 *
 * 覆盖：
 *   - 位序 MSB first、字节边界补零、WriteBits 跨字节；
 *   - BitReader 越界、ReadRawBits 尾部补零；
 *   - 长度确定量 0/1/127/128/255/16383/16384、16K 分片头；
 *   - normally small length（63/64/65）与 normally small non-negative；
 *   - 截断/非法长度行列式的错误码。
 * ========================================================================== */
#include <cstdint>
#include <vector>

#include "TestFramework.hpp"
#include "bitstream.hpp"

namespace {

using rrc::v1810::BitReader;
using rrc::v1810::BitWriter;
using rrc::v1810::Decoder;
using rrc::v1810::Encoder;

using Bytes = std::vector<std::uint8_t>;

/** 编码 length determinant 并返回字节 + 错误码。 */
Bytes EncodeLengthDeterminant(std::uint32_t value, ErrorCode& error) {
  Encoder encoder;
  encoder.WriteLengthDeterminant(value);
  error = encoder.Error();
  return encoder.Finish();
}

/** 从给定字节解码 length determinant。 */
bool DecodeLengthDeterminant(const Bytes& bytes, std::uint32_t& value,
                             bool& fragmented, ErrorCode& error,
                             std::size_t& bit_offset) {
  Decoder decoder(bytes.empty() ? nullptr : bytes.data(), bytes.size());
  const bool ok = decoder.ReadLengthDeterminant(value, fragmented);
  error = decoder.Error();
  bit_offset = decoder.BitOffset();
  return ok;
}

}  // namespace

/* ---------------------------------------------------------------------------
 * BitWriter
 * ------------------------------------------------------------------------- */

RRC_TEST(bitwriter_msb_first_and_padding) {
  Encoder encoder;
  encoder.WriteBit(true);
  encoder.WriteBit(false);
  encoder.WriteBit(true);
  encoder.WriteBit(true);
  CHECK_EQ(encoder.BitLength(), std::size_t(4));
  CHECK_EQ(encoder.ByteLength(), std::size_t(1));
  CHECK(encoder.Ok());
  const Bytes bytes = encoder.Finish();
  CHECK_EQ(bytes.size(), std::size_t(1));
  CHECK_EQ(static_cast<int>(bytes[0]), 0xB0);  // 1011 0000
  // Finish 已补零到字节边界。
  CHECK_EQ(encoder.BitLength(), std::size_t(8));
}

RRC_TEST(bitwriter_unaligned_writebits) {
  // 5 bit：101 + 11 = 10111 → 1011 1000 = 0xB8。
  BitWriter writer;
  writer.WriteBits(0b101u, 3);
  writer.WriteBits(0b11u, 2);
  CHECK_EQ(writer.BitLength(), std::size_t(5));
  const Bytes bytes = writer.TakeBytes();
  CHECK_BYTES(bytes, {0xB8});

  // 两字节：0xAB 0xCD。
  BitWriter writer2;
  writer2.WriteBits(0xABu, 8);
  writer2.WriteBits(0xCDu, 8);
  CHECK_EQ(writer2.BitLength(), std::size_t(16));
  const Bytes bytes2 = writer2.TakeBytes();
  CHECK_BYTES(bytes2, {0xAB, 0xCD});

  // 64 bit 一次写入（全 1）。
  BitWriter writer3;
  writer3.WriteBits(0xFFFFFFFFFFFFFFFFull, 64);
  const Bytes bytes3 = writer3.TakeBytes();
  CHECK_BYTES(bytes3, {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF});
}

RRC_TEST(bitwriter_align_and_reset) {
  BitWriter writer;
  writer.WriteBit(true);
  writer.WriteBit(false);
  writer.WriteBit(true);
  writer.AlignToByte();
  CHECK_EQ(writer.BitLength(), std::size_t(8));
  CHECK_BYTES(writer.TakeBytes(), {0xA0});

  BitWriter writer2;
  writer2.WriteBits(0xABu, 8);
  writer2.Reset();
  CHECK_EQ(writer2.BitLength(), std::size_t(0));
  CHECK_EQ(writer2.ByteLength(), std::size_t(0));
  CHECK(writer2.TakeBytes().empty());
}

RRC_TEST(bitwriter_bitreader_roundtrip) {
  BitWriter writer;
  std::vector<bool> expected;
  std::uint32_t state = 0x12345678u;
  for (int i = 0; i < 257; ++i) {
    state = state * 1664525u + 1013904223u;
    const bool bit = (state >> 31) != 0;
    expected.push_back(bit);
    writer.WriteBit(bit);
  }
  const std::size_t bit_length = writer.BitLength();
  const Bytes bytes = writer.TakeBytes();
  CHECK_EQ(bit_length, std::size_t(257));
  CHECK_EQ(bytes.size(), std::size_t(33));  // ceil(257/8)

  BitReader reader(bytes.data(), bytes.size());
  CHECK_EQ(reader.BitLength(), std::size_t(264));
  for (std::size_t i = 0; i < expected.size(); ++i) {
    bool bit = false;
    CHECK(reader.ReadBit(bit));
    CHECK_EQ(bit, expected[i]);
  }
  CHECK_EQ(reader.BitOffset(), bit_length);
  // 缓冲末尾剩余 7 个补零位：依次可读且为 0，再之后越界。
  for (int i = 0; i < 7; ++i) {
    bool padding = true;
    CHECK(reader.ReadBit(padding));
    CHECK(!padding);
  }
  CHECK_EQ(reader.BitOffset(), std::size_t(264));
  bool extra = true;
  CHECK(!reader.ReadBit(extra));
}

/* ---------------------------------------------------------------------------
 * BitReader
 * ------------------------------------------------------------------------- */

RRC_TEST(bitreader_read_and_truncation) {
  const std::uint8_t data[2] = {0xAB, 0xCD};
  BitReader reader(data, 2);
  CHECK_EQ(reader.BitLength(), std::size_t(16));
  CHECK_EQ(reader.BitsRemaining(), std::size_t(16));

  bool bit = false;
  CHECK(reader.ReadBit(bit));
  CHECK(bit);
  CHECK(reader.ReadBit(bit));
  CHECK(!bit);

  std::uint64_t value = 0;
  CHECK(reader.ReadBits(8, value));
  CHECK_EQ(value, static_cast<std::uint64_t>(0xAF));  // 10101111
  CHECK(reader.ReadBits(6, value));
  CHECK_EQ(value, static_cast<std::uint64_t>(0x0D));  // 001101
  CHECK_EQ(reader.BitOffset(), std::size_t(16));

  // 越界读取失败且不推进偏移。
  CHECK(!reader.ReadBit(bit));
  CHECK_EQ(reader.BitOffset(), std::size_t(16));
  CHECK(!reader.ReadBits(1, value));
  CHECK_EQ(reader.BitOffset(), std::size_t(16));
}

RRC_TEST(bitreader_readrawbits) {
  const std::uint8_t data[2] = {0xB3, 0x40};
  BitReader reader(data, 2);

  std::uint8_t first[1] = {0};
  CHECK(reader.ReadRawBits(first, 3));
  CHECK_EQ(static_cast<int>(first[0]), 0xA0);  // 101 补零

  std::uint8_t rest[2] = {0};
  CHECK(reader.ReadRawBits(rest, 13));
  CHECK_EQ(static_cast<int>(rest[0]), 0x9A);
  CHECK_EQ(static_cast<int>(rest[1]), 0x00);
  CHECK_EQ(reader.BitOffset(), std::size_t(16));

  // 越界：不消耗、返回 false。
  BitReader short_reader(data, 1);
  std::uint8_t too_many[2] = {0};
  CHECK(!short_reader.ReadRawBits(too_many, 9));
  CHECK_EQ(short_reader.BitOffset(), std::size_t(0));

  BitReader empty(nullptr, 0);
  CHECK_EQ(empty.BitLength(), std::size_t(0));
  bool bit = true;
  CHECK(!empty.ReadBit(bit));
}

/* ---------------------------------------------------------------------------
 * 长度确定量
 * ------------------------------------------------------------------------- */

RRC_TEST(length_determinant_encoding) {
  ErrorCode error = ErrorCode_Ok;

  const Bytes zero = EncodeLengthDeterminant(0u, error);
  CHECK_EQ(error, ErrorCode_Ok);
  CHECK_BYTES(zero, {0x00});

  const Bytes one = EncodeLengthDeterminant(1u, error);
  CHECK_EQ(error, ErrorCode_Ok);
  CHECK_BYTES(one, {0x01});

  const Bytes max_short = EncodeLengthDeterminant(127u, error);
  CHECK_EQ(error, ErrorCode_Ok);
  CHECK_BYTES(max_short, {0x7F});

  // 128 起用 16 bit 形式（高 2 位 10）。
  const Bytes lower_long = EncodeLengthDeterminant(128u, error);
  CHECK_EQ(error, ErrorCode_Ok);
  CHECK_BYTES(lower_long, {0x80, 0x80});

  const Bytes max_long = EncodeLengthDeterminant(16383u, error);
  CHECK_EQ(error, ErrorCode_Ok);
  CHECK_BYTES(max_long, {0xBF, 0xFF});

  // 16384 必须走分片形式，单次 length determinant 拒绝。
  const Bytes too_large = EncodeLengthDeterminant(16384u, error);
  CHECK_EQ(error, ErrorCode_LengthOutOfRange);
  CHECK(too_large.empty());
}

RRC_TEST(length_determinant_decoding) {
  std::uint32_t value = 0;
  bool fragmented = false;
  ErrorCode error = ErrorCode_Ok;
  std::size_t offset = 0;

  CHECK(DecodeLengthDeterminant(Bytes{0x00}, value, fragmented, error, offset));
  CHECK_EQ(error, ErrorCode_Ok);
  CHECK_EQ(value, std::uint32_t(0));
  CHECK(!fragmented);
  CHECK_EQ(offset, std::size_t(8));

  CHECK(DecodeLengthDeterminant(Bytes{0x7F}, value, fragmented, error, offset));
  CHECK_EQ(value, std::uint32_t(127));
  CHECK(!fragmented);

  CHECK(DecodeLengthDeterminant(Bytes{0x80, 0x80}, value, fragmented, error,
                                offset));
  CHECK_EQ(value, std::uint32_t(128));
  CHECK(!fragmented);
  CHECK_EQ(offset, std::size_t(16));

  CHECK(DecodeLengthDeterminant(Bytes{0xBF, 0xFF}, value, fragmented, error,
                                offset));
  CHECK_EQ(value, std::uint32_t(16383));
  CHECK(!fragmented);

  // 分片头：1 个 16K 块。
  CHECK(DecodeLengthDeterminant(Bytes{0xC1}, value, fragmented, error, offset));
  CHECK(fragmented);
  CHECK_EQ(value, std::uint32_t(16384));

  // 分片头：63 个 16K 块（最大值）。
  CHECK(DecodeLengthDeterminant(Bytes{0xFF}, value, fragmented, error, offset));
  CHECK(fragmented);
  CHECK_EQ(value, std::uint32_t(63u * 16384u));

  // blocks=0 非法。
  std::uint32_t bad_value = 0;
  bool bad_fragmented = false;
  CHECK(!DecodeLengthDeterminant(Bytes{0xC0}, bad_value, bad_fragmented, error,
                                 offset));
  CHECK_EQ(error, ErrorCode_InvalidLength);

  // 16 bit 形式被截断。
  error = ErrorCode_Ok;
  CHECK(!DecodeLengthDeterminant(Bytes{0x80}, bad_value, bad_fragmented, error,
                                 offset));
  CHECK_EQ(error, ErrorCode_TruncatedInput);

  // 空输入。
  error = ErrorCode_Ok;
  CHECK(!DecodeLengthDeterminant(Bytes{}, bad_value, bad_fragmented, error,
                                 offset));
  CHECK_EQ(error, ErrorCode_TruncatedInput);
}

RRC_TEST(fragment_header_encoding) {
  Encoder encoder;
  encoder.WriteFragmentHeader(1u);
  CHECK(encoder.Ok());
  CHECK_BYTES(encoder.Finish(), {0xC1});

  Encoder encoder2;
  encoder2.WriteFragmentHeader(63u);
  CHECK(encoder2.Ok());
  CHECK_BYTES(encoder2.Finish(), {0xFF});

  Encoder encoder3;
  encoder3.WriteFragmentHeader(0u);
  CHECK_EQ(encoder3.Error(), ErrorCode_LengthOutOfRange);
  CHECK_BYTES(encoder3.Finish(), {});

  Encoder encoder4;
  encoder4.WriteFragmentHeader(64u);
  CHECK_EQ(encoder4.Error(), ErrorCode_LengthOutOfRange);
}

/* ---------------------------------------------------------------------------
 * normally small length / non-negative
 * ------------------------------------------------------------------------- */

RRC_TEST(normally_small_length_encoding) {
  // n=1..64：0 + 6 bit(n-1)；n=65：1 + 长度确定量。
  {
    Encoder encoder;
    encoder.WriteNormallySmallLength(1u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(7));
    CHECK_BYTES(encoder.Finish(), {0x00});
  }
  {
    Encoder encoder;
    encoder.WriteNormallySmallLength(63u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(7));
    CHECK_BYTES(encoder.Finish(), {0x7C});  // 0 111110
  }
  {
    Encoder encoder;
    encoder.WriteNormallySmallLength(64u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(7));
    CHECK_BYTES(encoder.Finish(), {0x7E});  // 0 111111
  }
  {
    Encoder encoder;
    encoder.WriteNormallySmallLength(65u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(9));
    CHECK_BYTES(encoder.Finish(), {0xA0, 0x80});  // 1 01000001
  }
  {
    Encoder encoder;
    encoder.WriteNormallySmallLength(0u);
    CHECK_EQ(encoder.Error(), ErrorCode_LengthOutOfRange);
    CHECK_EQ(encoder.BitLength(), std::size_t(0));
  }
}

RRC_TEST(normally_small_length_decoding) {
  for (std::uint32_t expected = 1; expected <= 70; ++expected) {
    Encoder encoder;
    encoder.WriteNormallySmallLength(expected);
    CHECK(encoder.Ok());
    const std::size_t expected_bits = encoder.BitLength();
    const Bytes bytes = encoder.Finish();

    Decoder decoder(bytes.empty() ? nullptr : bytes.data(), bytes.size());
    std::uint32_t decoded = 0;
    CHECK(decoder.ReadNormallySmallLength(decoded));
    CHECK_EQ(decoded, expected);
    CHECK_EQ(decoder.BitOffset(), expected_bits);
    CHECK_EQ(decoder.Error(), ErrorCode_Ok);
  }

  // 长形式截断。
  Decoder truncated(nullptr, 0);
  std::uint32_t value = 0;
  CHECK(!truncated.ReadNormallySmallLength(value));
  CHECK_EQ(truncated.Error(), ErrorCode_TruncatedInput);
}

RRC_TEST(normally_small_length_boundary_16383_16384) {
  // 16383 是单次长度确定量能表示的最大值，通过长形式往返。
  Encoder encoder;
  encoder.WriteNormallySmallLength(16383u);
  CHECK(encoder.Ok());
  const std::size_t expected_bits = encoder.BitLength();
  const Bytes bytes = encoder.Finish();
  CHECK_EQ(expected_bits, std::size_t(17));  // 1 bit + 16 bit 长度

  Decoder decoder(bytes.data(), bytes.size());
  std::uint32_t decoded = 0;
  CHECK(decoder.ReadNormallySmallLength(decoded));
  CHECK_EQ(decoded, std::uint32_t(16383));
  CHECK_EQ(decoder.BitOffset(), expected_bits);

  // 16384 超出单次长度确定量上限（需分片语义，本接口不支持）。
  Encoder too_large;
  too_large.WriteNormallySmallLength(16384u);
  CHECK_EQ(too_large.Error(), ErrorCode_LengthOutOfRange);

  // normally small non-negative 同一边界。
  Encoder non_negative;
  non_negative.WriteNormallySmallNonNegative(16383u);
  CHECK(non_negative.Ok());
  const Bytes non_negative_bytes = non_negative.Finish();
  Decoder non_negative_decoder(non_negative_bytes.data(),
                               non_negative_bytes.size());
  std::uint32_t non_negative_value = 0;
  CHECK(non_negative_decoder.ReadNormallySmallNonNegative(non_negative_value));
  CHECK_EQ(non_negative_value, std::uint32_t(16383));
}

RRC_TEST(normally_small_non_negative) {
  // 0..63：0 + 6 bit；64 起：1 + 长度确定量。
  {
    Encoder encoder;
    encoder.WriteNormallySmallNonNegative(0u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(7));
    CHECK_BYTES(encoder.Finish(), {0x00});
  }
  {
    Encoder encoder;
    encoder.WriteNormallySmallNonNegative(63u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(7));
    CHECK_BYTES(encoder.Finish(), {0x7E});  // 0 111111
  }
  {
    Encoder encoder;
    encoder.WriteNormallySmallNonNegative(64u);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(9));
    CHECK_BYTES(encoder.Finish(), {0xA0, 0x00});  // 1 01000000
  }

  for (std::uint32_t expected = 0; expected <= 70; ++expected) {
    Encoder encoder;
    encoder.WriteNormallySmallNonNegative(expected);
    CHECK(encoder.Ok());
    const std::size_t expected_bits = encoder.BitLength();
    const Bytes bytes = encoder.Finish();

    Decoder decoder(bytes.empty() ? nullptr : bytes.data(), bytes.size());
    std::uint32_t decoded = 0;
    CHECK(decoder.ReadNormallySmallNonNegative(decoded));
    CHECK_EQ(decoded, expected);
    CHECK_EQ(decoder.BitOffset(), expected_bits);
  }
}

/* ---------------------------------------------------------------------------
 * 错误粘滞
 * ------------------------------------------------------------------------- */

RRC_TEST(encoder_error_is_sticky) {
  Encoder encoder;
  encoder.WriteLengthDeterminant(99999u);
  CHECK_EQ(encoder.Error(), ErrorCode_LengthOutOfRange);
  CHECK(!encoder.Ok());
  // 后续写入为空操作。
  encoder.WriteBit(true);
  encoder.WriteBits(0xFFu, 8);
  encoder.WriteNormallySmallNonNegative(3u);
  CHECK_EQ(encoder.BitLength(), std::size_t(0));
  // Fail 不覆盖首个错误。
  CHECK_EQ(encoder.Fail(ErrorCode_InvalidArgument),
           ErrorCode_LengthOutOfRange);
  CHECK_EQ(encoder.Error(), ErrorCode_LengthOutOfRange);
}

RRC_TEST(decoder_error_is_sticky) {
  const std::uint8_t data[1] = {0xAB};
  Decoder decoder(data, 1);
  bool bit = false;
  CHECK(decoder.ReadBit(bit));
  CHECK(bit);
  std::uint64_t value = 0;
  CHECK(!decoder.ReadBits(8, value));
  CHECK_EQ(decoder.Error(), ErrorCode_TruncatedInput);
  // 后续读取直接失败且不再改变偏移。
  CHECK(!decoder.ReadBit(bit));
  CHECK(!decoder.ReadBits(4, value));
  CHECK_EQ(decoder.BitOffset(), std::size_t(1));
  CHECK_EQ(decoder.Fail(ErrorCode_InvalidLength),
           ErrorCode_TruncatedInput);
  CHECK_EQ(decoder.Error(), ErrorCode_TruncatedInput);
}

/* ---------------------------------------------------------------------------
 * 32 bit 范围约束长度（不跨 16K 时的固定位宽）
 * ------------------------------------------------------------------------- */

RRC_TEST(constrained_length_within_16k) {
  Encoder encoder;
  encoder.WriteConstrainedLength(1000u, 1000u, 1000u);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(0));
  CHECK(encoder.Finish().empty());

  Encoder encoder2;
  encoder2.WriteConstrainedLength(3u, 0u, 7u);
  CHECK(encoder2.Ok());
  CHECK_EQ(encoder2.BitLength(), std::size_t(3));
  const Bytes bytes = encoder2.Finish();
  CHECK_BYTES(bytes, {0x60});  // 011

  Decoder decoder(bytes.data(), bytes.size());
  std::uint32_t value = 0;
  CHECK(decoder.ReadConstrainedLength(0u, 7u, value));
  CHECK_EQ(value, std::uint32_t(3));
  CHECK_EQ(decoder.BitOffset(), std::size_t(3));
}
