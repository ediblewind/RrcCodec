/* ============================================================================
 * PerPrimitiveTests.cpp — UPER 原语单元测试
 *
 * 覆盖：
 *   - 约束整数（单值/负下界/range>64K 固定位宽/INT64 全范围/越界错误码）；
 *   - 约束长度；
 *   - BIT STRING 定长/约束/半约束/16K 分片；
 *   - OCTET STRING 定长/约束/半约束/16K 分片；
 *   - 开放类型长度与内容、CheckOpenTypeEnd；
 *   - CONTAINING 深度边界；
 *   - 半约束/无约束整数（引擎完整性，38.331 不使用）；
 *   - 原始字节/位读取。
 * ========================================================================== */
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <vector>

#include "TestFramework.hpp"
#include "bitstream.hpp"

namespace {

using rrc::v1810::Decoder;
using rrc::v1810::Encoder;

using Bytes = std::vector<std::uint8_t>;

/** 生成伪随机字节模式（确定性，便于比较）。 */
Bytes MakePattern(std::size_t count, std::uint8_t seed) {
  Bytes bytes(count);
  for (std::size_t i = 0; i < count; ++i) {
    bytes[i] = static_cast<std::uint8_t>((i * 37u + seed) & 0xFFu);
  }
  return bytes;
}

/** 把字节缓冲尾部不足一个字节的位清零（模拟解码输出补零）。 */
Bytes MaskTail(const Bytes& source, std::uint32_t bit_length) {
  Bytes masked = source;
  const std::uint32_t used = bit_length % 8u;
  if (used != 0u) {
    masked[bit_length / 8u] &=
        static_cast<std::uint8_t>(0xFFu << (8u - used));
  }
  return masked;
}

}  // namespace

/* ---------------------------------------------------------------------------
 * 约束整数
 * ------------------------------------------------------------------------- */

RRC_TEST(constrained_integer_single_value) {
  Encoder encoder;
  encoder.WriteConstrainedInteger(5, 5, 5);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(0));
  CHECK(encoder.Finish().empty());

  Decoder decoder(nullptr, 0);
  std::int64_t value = 0;
  CHECK(decoder.ReadConstrainedInteger(5, 5, value));
  CHECK_EQ(value, std::int64_t(5));
  CHECK_EQ(decoder.BitOffset(), std::size_t(0));
  CHECK_EQ(decoder.Error(), ErrorCode_Ok);
}

RRC_TEST(constrained_integer_negative_lower) {
  // lb=-10, ub=10 → range=21 → 5 bit，写 (value-lb)。
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(-10, -10, 10);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(5));
    CHECK_BYTES(encoder.Finish(), {0x00});  // 00000
  }
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(0, -10, 10);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(5));
    CHECK_BYTES(encoder.Finish(), {0x50});  // 01010
  }
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(10, -10, 10);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(5));
    CHECK_BYTES(encoder.Finish(), {0xA0});  // 10100
  }

  const Bytes bytes = Bytes{0xA0};
  Decoder decoder(bytes.data(), bytes.size());
  std::int64_t value = 0;
  CHECK(decoder.ReadConstrainedInteger(-10, 10, value));
  CHECK_EQ(value, std::int64_t(10));
  CHECK_EQ(decoder.BitOffset(), std::size_t(5));
}

RRC_TEST(constrained_integer_wide_range_has_no_length_prefix) {
  // range>64K 仍按固定位宽：1e5+1 个取值 → 17 bit，无长度前导。
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(65535, 0, 100000);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(17));
    const Bytes bytes = encoder.Finish();
    CHECK_BYTES(bytes, {0x7F, 0xFF, 0x80});

    Decoder decoder(bytes.data(), bytes.size());
    std::int64_t value = 0;
    CHECK(decoder.ReadConstrainedInteger(0, 100000, value));
    CHECK_EQ(value, std::int64_t(65535));
    CHECK_EQ(decoder.BitOffset(), std::size_t(17));
  }
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(100000, 0, 100000);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(17));
    const Bytes bytes = encoder.Finish();
    CHECK_BYTES(bytes, {0xC3, 0x50, 0x00});

    Decoder decoder(bytes.data(), bytes.size());
    std::int64_t value = 0;
    CHECK(decoder.ReadConstrainedInteger(0, 100000, value));
    CHECK_EQ(value, std::int64_t(100000));
  }
}

RRC_TEST(constrained_integer_full_int64_range) {
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(INT64_MIN, INT64_MIN, INT64_MAX);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(64));
    const Bytes bytes = encoder.Finish();
    CHECK_BYTES(bytes, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00});

    Decoder decoder(bytes.data(), bytes.size());
    std::int64_t value = 0;
    CHECK(decoder.ReadConstrainedInteger(INT64_MIN, INT64_MAX, value));
    CHECK_EQ(value, INT64_MIN);
  }
  {
    Encoder encoder;
    encoder.WriteConstrainedInteger(INT64_MAX, INT64_MIN, INT64_MAX);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(64));
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(8));
    for (const std::uint8_t byte : bytes) {
      CHECK_EQ(static_cast<int>(byte), 0xFF);
    }

    Decoder decoder(bytes.data(), bytes.size());
    std::int64_t value = 0;
    CHECK(decoder.ReadConstrainedInteger(INT64_MIN, INT64_MAX, value));
    CHECK_EQ(value, INT64_MAX);
  }
}

RRC_TEST(constrained_integer_encode_out_of_range) {
  Encoder encoder;
  encoder.WriteConstrainedInteger(11, -10, 10);
  CHECK_EQ(encoder.Error(), ErrorCode_ValueOutOfRange);
  CHECK_EQ(encoder.BitLength(), std::size_t(0));
  // 错误粘滞：后续写入不生效。
  encoder.WriteBit(true);
  CHECK_EQ(encoder.BitLength(), std::size_t(0));
  CHECK(encoder.Finish().empty());
}

RRC_TEST(constrained_integer_decode_out_of_range) {
  // lb=0, ub=2 → 2 bit；码流 11 = 3 超出范围。
  const Bytes bytes = Bytes{0xC0};
  Decoder decoder(bytes.data(), bytes.size());
  std::int64_t value = 0;
  CHECK(!decoder.ReadConstrainedInteger(0, 2, value));
  CHECK_EQ(decoder.Error(), ErrorCode_IntegerOutOfRange);
}

/* ---------------------------------------------------------------------------
 * BIT STRING
 * ------------------------------------------------------------------------- */

RRC_TEST(fixed_bit_string) {
  const Bytes content = Bytes{0xAA, 0xC0};  // 前 10 bit = 10101010 11
  Encoder encoder;
  encoder.WriteFixedBitString(content.data(), 10, 10, 10);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(10));
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0xAA, 0xC0});

  Decoder decoder(bytes.data(), bytes.size());
  std::uint8_t* out = nullptr;
  CHECK(decoder.ReadFixedBitString(out, 10));
  CHECK(out != nullptr);
  CHECK_EQ(static_cast<int>(out[0]), 0xAA);
  CHECK_EQ(static_cast<int>(out[1]), 0xC0);
  CHECK_EQ(decoder.BitOffset(), std::size_t(10));
  std::free(out);

  // 0 bit：不分配，返回 NULL。
  Encoder empty_encoder;
  empty_encoder.WriteFixedBitString(nullptr, 0, 0, 0);
  CHECK(empty_encoder.Ok());
  CHECK_EQ(empty_encoder.BitLength(), std::size_t(0));
  CHECK(empty_encoder.Finish().empty());
  Decoder empty_decoder(nullptr, 0);
  std::uint8_t* empty_out = reinterpret_cast<std::uint8_t*>(static_cast<std::uintptr_t>(1));
  CHECK(empty_decoder.ReadFixedBitString(empty_out, 0));
  CHECK(empty_out == nullptr);

  // 长度与约束不符 / 指针为空。
  Encoder mismatch;
  mismatch.WriteFixedBitString(content.data(), 10, 8, 10);
  CHECK_EQ(mismatch.Error(), ErrorCode_InvalidBitString);
  Encoder null_bytes;
  null_bytes.WriteFixedBitString(nullptr, 8, 8, 8);
  CHECK_EQ(null_bytes.Error(), ErrorCode_InvalidBitString);

  // 截断。
  const Bytes truncated_bytes = Bytes{0xFF};
  Decoder truncated(truncated_bytes.data(), truncated_bytes.size());
  std::uint8_t* truncated_out = nullptr;
  CHECK(!truncated.ReadFixedBitString(truncated_out, 9));
  CHECK_EQ(truncated.Error(), ErrorCode_TruncatedInput);
  CHECK(truncated_out == nullptr);
}

RRC_TEST(constrained_bit_string) {
  const Bytes content = Bytes{0xB0};  // 前 5 bit = 10110
  Encoder encoder;
  encoder.WriteConstrainedBitString(content.data(), 5, 2, 8);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(8));  // 3 bit 长度 + 5 bit 内容
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0x76});  // 011 10110

  Decoder decoder(bytes.data(), bytes.size());
  std::uint8_t* out = nullptr;
  std::uint32_t bit_length = 0;
  CHECK(decoder.ReadConstrainedBitString(out, bit_length, 2, 8));
  CHECK_EQ(bit_length, std::uint32_t(5));
  CHECK(out != nullptr);
  CHECK_EQ(static_cast<int>(out[0]), 0xB0);
  std::free(out);

  // 编码长度越界。
  Encoder short_encoder;
  short_encoder.WriteConstrainedBitString(content.data(), 1, 2, 8);
  CHECK_EQ(short_encoder.Error(), ErrorCode_InvalidBitString);

  // 解码截断：3 bit 长度=6 → n=8，但只剩 5 bit。
  const Bytes cut_bits = Bytes{0xDF};
  Decoder cut(cut_bits.data(), cut_bits.size());
  std::uint8_t* cut_out = nullptr;
  std::uint32_t cut_length = 0;
  CHECK(!cut.ReadConstrainedBitString(cut_out, cut_length, 2, 8));
  CHECK_EQ(cut.Error(), ErrorCode_TruncatedInput);
  CHECK(cut_out == nullptr);

  // 解码长度超上界（range 非 2 的幂）。
  const Bytes too_long = Bytes{0xE0};
  Decoder too_long_decoder(too_long.data(), too_long.size());
  std::uint8_t* too_long_out = nullptr;
  std::uint32_t too_long_length = 0;
  CHECK(!too_long_decoder.ReadConstrainedBitString(too_long_out, too_long_length,
                                                    2, 8));
  CHECK_EQ(too_long_decoder.Error(), ErrorCode_LengthOutOfRange);
}

RRC_TEST(semi_constrained_bit_string_small) {
  const Bytes content = Bytes{0xAB, 0xC0};  // 前 12 bit = 10101011 1100
  Encoder encoder;
  encoder.WriteSemiConstrainedBitString(content.data(), 12, 0, UINT32_MAX);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(20));  // 8 bit 长度 + 12 bit
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0x0C, 0xAB, 0xC0});

  Decoder decoder(bytes.data(), bytes.size());
  std::uint8_t* out = nullptr;
  std::uint32_t bit_length = 0;
  CHECK(decoder.ReadSemiConstrainedBitString(out, bit_length, 0, UINT32_MAX));
  CHECK_EQ(bit_length, std::uint32_t(12));
  CHECK(out != nullptr);
  CHECK_EQ(static_cast<int>(out[0]), 0xAB);
  CHECK_EQ(static_cast<int>(out[1]), 0xC0);
  std::free(out);

  // 下界校验。
  Encoder lower_encoder;
  lower_encoder.WriteSemiConstrainedBitString(content.data(), 4, 5, UINT32_MAX);
  CHECK_EQ(lower_encoder.Error(), ErrorCode_InvalidBitString);

  // 解码：总长小于下界。
  Encoder four_bits;
  four_bits.WriteLengthDeterminant(4);
  four_bits.WriteBits(0xFu, 4);
  CHECK(four_bits.Ok());
  const Bytes four_bit_bytes = four_bits.Finish();
  Decoder lower_decoder(four_bit_bytes.data(), four_bit_bytes.size());
  std::uint8_t* lower_out = nullptr;
  std::uint32_t lower_length = 0;
  CHECK(!lower_decoder.ReadSemiConstrainedBitString(lower_out, lower_length, 5,
                                                    UINT32_MAX));
  CHECK_EQ(lower_decoder.Error(), ErrorCode_LengthOutOfRange);
  std::free(lower_out);

  // 解码：总长大于上界。
  Encoder five_bits;
  five_bits.WriteLengthDeterminant(5);
  five_bits.WriteBits(0x1Fu, 5);
  CHECK(five_bits.Ok());
  const Bytes five_bit_bytes = five_bits.Finish();
  Decoder upper_decoder(five_bit_bytes.data(), five_bit_bytes.size());
  std::uint8_t* upper_out = nullptr;
  std::uint32_t upper_length = 0;
  CHECK(!upper_decoder.ReadSemiConstrainedBitString(upper_out, upper_length, 0,
                                                    4));
  CHECK_EQ(upper_decoder.Error(), ErrorCode_LengthOutOfRange);
  std::free(upper_out);

  // 超出 RRC_CODEC_MAX_BITSTRING_BITS 的编码输入被拒绝。
  Encoder over_cap;
  over_cap.WriteSemiConstrainedBitString(nullptr, 65537, 0, UINT32_MAX);
  CHECK_EQ(over_cap.Error(), ErrorCode_InvalidBitString);
}

RRC_TEST(semi_constrained_bit_string_fragmented) {
  // 16384 bit：1 个 16K 分片 + 结尾长度确定量 0。
  const Bytes data = MakePattern(2048, 0x5Au);
  {
    Encoder encoder;
    encoder.WriteSemiConstrainedBitString(data.data(), 16384, 0, UINT32_MAX);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(16400));
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(2050));
    CHECK_EQ(static_cast<int>(bytes[0]), 0xC1);
    CHECK_EQ(static_cast<int>(bytes[2049]), 0x00);

    Decoder decoder(bytes.data(), bytes.size());
    std::uint8_t* out = nullptr;
    std::uint32_t bit_length = 0;
    CHECK(decoder.ReadSemiConstrainedBitString(out, bit_length, 0, UINT32_MAX));
    CHECK_EQ(bit_length, std::uint32_t(16384));
    CHECK(out != nullptr);
    CHECK(std::memcmp(out, data.data(), data.size()) == 0);
    CHECK(decoder.CheckOpenTypeEnd());
    std::free(out);
  }

  // 16385 bit：分片 + 1 bit 尾段。
  {
    Bytes data_ex = MakePattern(2049, 0x5Au);
    data_ex[2048] = static_cast<std::uint8_t>(data_ex[2048] | 0x80u);
    const Bytes expected = MaskTail(data_ex, 16385);

    Encoder encoder;
    encoder.WriteSemiConstrainedBitString(data_ex.data(), 16385, 0, UINT32_MAX);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(16401));
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(2051));
    CHECK_EQ(static_cast<int>(bytes[0]), 0xC1);
    CHECK_EQ(static_cast<int>(bytes[2049]), 0x01);
    CHECK_EQ(static_cast<int>(bytes[2050]), static_cast<int>(expected[2048]));

    Decoder decoder(bytes.data(), bytes.size());
    std::uint8_t* out = nullptr;
    std::uint32_t bit_length = 0;
    CHECK(decoder.ReadSemiConstrainedBitString(out, bit_length, 0, UINT32_MAX));
    CHECK_EQ(bit_length, std::uint32_t(16385));
    CHECK(out != nullptr);
    CHECK_EQ(out[2048], expected[2048]);
    CHECK(std::memcmp(out, expected.data(), 2048) == 0);
    std::free(out);
  }

  // 32768 bit：2 个 16K 分片。
  {
    const Bytes data32 = MakePattern(4096, 0x33u);
    Encoder encoder;
    encoder.WriteSemiConstrainedBitString(data32.data(), 32768, 0, UINT32_MAX);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(32784));
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(4098));
    CHECK_EQ(static_cast<int>(bytes[0]), 0xC2);
    CHECK_EQ(static_cast<int>(bytes[4097]), 0x00);

    Decoder decoder(bytes.data(), bytes.size());
    std::uint8_t* out = nullptr;
    std::uint32_t bit_length = 0;
    CHECK(decoder.ReadSemiConstrainedBitString(out, bit_length, 0, UINT32_MAX));
    CHECK_EQ(bit_length, std::uint32_t(32768));
    CHECK(out != nullptr);
    CHECK(std::memcmp(out, data32.data(), data32.size()) == 0);
    std::free(out);
  }
}

/* ---------------------------------------------------------------------------
 * OCTET STRING
 * ------------------------------------------------------------------------- */

RRC_TEST(fixed_octet_string) {
  const Bytes content = Bytes{0x01, 0x02, 0x03};
  Encoder encoder;
  encoder.WriteFixedOctetString(content.data(), 3, 3, 3);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(24));
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0x01, 0x02, 0x03});

  Decoder decoder(bytes.data(), bytes.size());
  std::uint8_t* out = nullptr;
  CHECK(decoder.ReadFixedOctetString(out, 3));
  CHECK(out != nullptr);
  CHECK(std::memcmp(out, content.data(), content.size()) == 0);
  std::free(out);

  Encoder empty_encoder;
  empty_encoder.WriteFixedOctetString(nullptr, 0, 0, 0);
  CHECK(empty_encoder.Ok());
  CHECK(empty_encoder.Finish().empty());
  Decoder empty_decoder(nullptr, 0);
  std::uint8_t* empty_out = nullptr;
  CHECK(empty_decoder.ReadFixedOctetString(empty_out, 0));
  CHECK(empty_out == nullptr);

  Encoder mismatch;
  mismatch.WriteFixedOctetString(content.data(), 2, 3, 3);
  CHECK_EQ(mismatch.Error(), ErrorCode_InvalidOctetString);
}

RRC_TEST(constrained_octet_string) {
  const Bytes content = Bytes{0xDE, 0xAD, 0xBE};
  Encoder encoder;
  encoder.WriteConstrainedOctetString(content.data(), 3, 1, 4);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(26));  // 2 bit 长度 + 24 bit
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0xB7, 0xAB, 0x6F, 0x80});

  Decoder decoder(bytes.data(), bytes.size());
  std::uint8_t* out = nullptr;
  std::uint32_t length = 0;
  CHECK(decoder.ReadConstrainedOctetString(out, length, 1, 4));
  CHECK_EQ(length, std::uint32_t(3));
  CHECK(out != nullptr);
  CHECK(std::memcmp(out, content.data(), content.size()) == 0);
  std::free(out);

  Encoder too_short;
  too_short.WriteConstrainedOctetString(content.data(), 0, 1, 4);
  CHECK_EQ(too_short.Error(), ErrorCode_InvalidOctetString);

  // 解码长度超上界（range=3 → 2 bit 可表示越界值 3）。
  const Bytes bad_length = Bytes{0xC0};
  Decoder bad_decoder(bad_length.data(), bad_length.size());
  std::uint8_t* bad_out = nullptr;
  std::uint32_t bad_length_value = 0;
  CHECK(!bad_decoder.ReadConstrainedOctetString(bad_out, bad_length_value, 1,
                                                3));
  CHECK_EQ(bad_decoder.Error(), ErrorCode_LengthOutOfRange);
}

RRC_TEST(semi_constrained_octet_string_small) {
  const Bytes content = Bytes{0x01, 0x02, 0x03};
  Encoder encoder;
  encoder.WriteSemiConstrainedOctetString(content.data(), 3, 0, UINT32_MAX);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(32));
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0x03, 0x01, 0x02, 0x03});

  Decoder decoder(bytes.data(), bytes.size());
  std::uint8_t* out = nullptr;
  std::uint32_t length = 0;
  CHECK(decoder.ReadSemiConstrainedOctetString(out, length, 0, UINT32_MAX));
  CHECK_EQ(length, std::uint32_t(3));
  CHECK(out != nullptr);
  CHECK(std::memcmp(out, content.data(), content.size()) == 0);
  std::free(out);

  Encoder lower_encoder;
  lower_encoder.WriteSemiConstrainedOctetString(content.data(), 3, 5,
                                                UINT32_MAX);
  CHECK_EQ(lower_encoder.Error(), ErrorCode_InvalidOctetString);

  // 解码：声明 5 字节但只剩 1 字节。
  const Bytes truncated_bytes = Bytes{0x05, 0x01};
  Decoder truncated(truncated_bytes.data(), truncated_bytes.size());
  std::uint8_t* truncated_out = nullptr;
  std::uint32_t truncated_length = 0;
  CHECK(!truncated.ReadSemiConstrainedOctetString(truncated_out,
                                                  truncated_length, 0,
                                                  UINT32_MAX));
  CHECK_EQ(truncated.Error(), ErrorCode_TruncatedInput);
  CHECK(truncated_out == nullptr);

  // 解码：总长小于下界。
  Decoder lower_decoder(bytes.data(), bytes.size());
  std::uint8_t* lower_out = nullptr;
  std::uint32_t lower_length = 0;
  CHECK(!lower_decoder.ReadSemiConstrainedOctetString(lower_out, lower_length,
                                                      5, UINT32_MAX));
  CHECK_EQ(lower_decoder.Error(), ErrorCode_LengthOutOfRange);

  // 解码：总长大于上界。
  Decoder upper_decoder(bytes.data(), bytes.size());
  std::uint8_t* upper_out = nullptr;
  std::uint32_t upper_length = 0;
  CHECK(!upper_decoder.ReadSemiConstrainedOctetString(upper_out, upper_length,
                                                      0, 2));
  CHECK_EQ(upper_decoder.Error(), ErrorCode_LengthOutOfRange);
}

RRC_TEST(semi_constrained_octet_string_fragmented) {
  // 16384 字节：头 0xC1 + 16384 字节 + 结尾 0x00。
  {
    const Bytes data = MakePattern(16384, 0x11u);
    Encoder encoder;
    encoder.WriteSemiConstrainedOctetString(data.data(), 16384, 0,
                                            UINT32_MAX);
    CHECK(encoder.Ok());
    CHECK_EQ(encoder.BitLength(), std::size_t(8 + 16384 * 8 + 8));
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(16386));
    CHECK_EQ(static_cast<int>(bytes[0]), 0xC1);
    CHECK_EQ(static_cast<int>(bytes[16385]), 0x00);
    CHECK(std::memcmp(bytes.data() + 1, data.data(), data.size()) == 0);

    Decoder decoder(bytes.data(), bytes.size());
    std::uint8_t* out = nullptr;
    std::uint32_t length = 0;
    CHECK(decoder.ReadSemiConstrainedOctetString(out, length, 0, UINT32_MAX));
    CHECK_EQ(length, std::uint32_t(16384));
    CHECK(out != nullptr);
    CHECK(std::memcmp(out, data.data(), data.size()) == 0);
    std::free(out);
  }

  // 16385 字节：分片 + 1 字节尾段。
  {
    const Bytes data = MakePattern(16385, 0x22u);
    Encoder encoder;
    encoder.WriteSemiConstrainedOctetString(data.data(), 16385, 0,
                                            UINT32_MAX);
    CHECK(encoder.Ok());
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(16387));
    CHECK_EQ(static_cast<int>(bytes[0]), 0xC1);
    CHECK_EQ(static_cast<int>(bytes[16385]), 0x01);
    CHECK_EQ(static_cast<int>(bytes[16386]), static_cast<int>(data[16384]));

    Decoder decoder(bytes.data(), bytes.size());
    std::uint8_t* out = nullptr;
    std::uint32_t length = 0;
    CHECK(decoder.ReadSemiConstrainedOctetString(out, length, 0, UINT32_MAX));
    CHECK_EQ(length, std::uint32_t(16385));
    CHECK(out != nullptr);
    CHECK(std::memcmp(out, data.data(), data.size()) == 0);
    std::free(out);
  }

  // 32768 字节：2 个 16K 分片。
  {
    const Bytes data = MakePattern(32768, 0x44u);
    Encoder encoder;
    encoder.WriteSemiConstrainedOctetString(data.data(), 32768, 0,
                                            UINT32_MAX);
    CHECK(encoder.Ok());
    const Bytes bytes = encoder.Finish();
    CHECK_EQ(bytes.size(), std::size_t(32770));
    CHECK_EQ(static_cast<int>(bytes[0]), 0xC2);
    CHECK_EQ(static_cast<int>(bytes[32769]), 0x00);

    Decoder decoder(bytes.data(), bytes.size());
    std::uint8_t* out = nullptr;
    std::uint32_t length = 0;
    CHECK(decoder.ReadSemiConstrainedOctetString(out, length, 0, UINT32_MAX));
    CHECK_EQ(length, std::uint32_t(32768));
    CHECK(out != nullptr);
    CHECK(std::memcmp(out, data.data(), data.size()) == 0);
    std::free(out);
  }
}

/* ---------------------------------------------------------------------------
 * 开放类型
 * ------------------------------------------------------------------------- */

RRC_TEST(open_type_basic) {
  const Bytes inner = Bytes{0xAA, 0xBB};
  Encoder encoder;
  encoder.WriteOpenType(inner);
  CHECK(encoder.Ok());
  CHECK_EQ(encoder.BitLength(), std::size_t(24));  // 8 bit 长度 + 2 字节
  const Bytes bytes = encoder.Finish();
  CHECK_BYTES(bytes, {0x02, 0xAA, 0xBB});

  Decoder decoder(bytes.data(), bytes.size());
  Bytes decoded;
  CHECK(decoder.ReadOpenType(decoded));
  CHECK_EQ(decoded.size(), inner.size());
  CHECK(decoded == inner);
  CHECK(decoder.CheckOpenTypeEnd());
  CHECK_EQ(decoder.Error(), ErrorCode_Ok);

  // 空开放类型：长度 0。
  Encoder empty_encoder;
  empty_encoder.WriteOpenType(Bytes{});
  CHECK(empty_encoder.Ok());
  const Bytes empty_bytes = empty_encoder.Finish();
  CHECK_BYTES(empty_bytes, {0x00});
  Decoder empty_decoder(empty_bytes.data(), empty_bytes.size());
  Bytes empty_decoded;
  CHECK(empty_decoder.ReadOpenType(empty_decoded));
  CHECK(empty_decoded.empty());
  CHECK(empty_decoder.CheckOpenTypeEnd());
}

RRC_TEST(open_type_truncated) {
  // 声明 2 字节，仅剩 1 字节。
  const Bytes bytes = Bytes{0x02, 0xAA};
  Decoder decoder(bytes.data(), bytes.size());
  Bytes decoded;
  CHECK(!decoder.ReadOpenType(decoded));
  CHECK_EQ(decoder.Error(), ErrorCode_OpenTypeOverrun);
  CHECK(decoded.empty());

  // 分片头声明 1 个 16K 块，但没有任何内容。
  const Bytes fragmented_only = Bytes{0xC1};
  Decoder fragmented_decoder(fragmented_only.data(), fragmented_only.size());
  Bytes fragmented_out;
  CHECK(!fragmented_decoder.ReadOpenType(fragmented_out));
  CHECK_EQ(fragmented_decoder.Error(), ErrorCode_OpenTypeOverrun);
}

RRC_TEST(open_type_fragmented) {
  const Bytes inner = MakePattern(16384, 0x77u);
  Encoder encoder;
  encoder.WriteOpenType(inner);
  CHECK(encoder.Ok());
  const Bytes bytes = encoder.Finish();
  CHECK_EQ(bytes.size(), std::size_t(16386));  // 0xC1 + 16K 内容 + 0x00
  CHECK_EQ(static_cast<int>(bytes[0]), 0xC1);
  CHECK_EQ(static_cast<int>(bytes[16385]), 0x00);

  Decoder decoder(bytes.data(), bytes.size());
  Bytes decoded;
  CHECK(decoder.ReadOpenType(decoded));
  CHECK_EQ(decoded.size(), inner.size());
  CHECK(decoded == inner);
  CHECK(decoder.CheckOpenTypeEnd());
}

RRC_TEST(check_open_type_end) {
  // 剩余 >= 8 bit：越界。
  {
    const Bytes bytes = Bytes{0xAB};
    Decoder decoder(bytes.data(), bytes.size());
    CHECK(!decoder.CheckOpenTypeEnd());
    CHECK_EQ(decoder.Error(), ErrorCode_OpenTypeOverrun);
  }
  // 剩余 <8 bit 且全 0：通过。
  {
    const Bytes bytes = Bytes{0xF0};
    Decoder decoder(bytes.data(), bytes.size());
    std::uint64_t value = 0;
    CHECK(decoder.ReadBits(4, value));
    CHECK_EQ(value, static_cast<std::uint64_t>(0x0F));
    CHECK(decoder.CheckOpenTypeEnd());
    CHECK_EQ(decoder.Error(), ErrorCode_Ok);
  }
  // 剩余 <8 bit 但含 1：OpenTypeOverrun。
  {
    const Bytes bytes = Bytes{0xFF};
    Decoder decoder(bytes.data(), bytes.size());
    std::uint64_t value = 0;
    CHECK(decoder.ReadBits(4, value));
    CHECK(!decoder.CheckOpenTypeEnd());
    CHECK_EQ(decoder.Error(), ErrorCode_OpenTypeOverrun);
  }
  // 正好耗尽：通过。
  {
    const Bytes bytes = Bytes{0xAB};
    Decoder decoder(bytes.data(), bytes.size());
    std::uint64_t value = 0;
    CHECK(decoder.ReadBits(8, value));
    CHECK(decoder.CheckOpenTypeEnd());
  }
}

/* ---------------------------------------------------------------------------
 * CONTAINING 深度
 * ------------------------------------------------------------------------- */

RRC_TEST(containing_depth_limits) {
  Encoder encoder;
  for (int i = 0; i < RRC_CODEC_MAX_CONTAINING_DEPTH; ++i) {
    CHECK(encoder.PushContaining());
  }
  CHECK_EQ(encoder.ContainingDepth(), RRC_CODEC_MAX_CONTAINING_DEPTH);
  CHECK(!encoder.PushContaining());
  CHECK_EQ(encoder.Error(), ErrorCode_ContainingDepthExceeded);
  CHECK_EQ(encoder.ContainingDepth(), RRC_CODEC_MAX_CONTAINING_DEPTH);
  encoder.PopContaining();
  CHECK_EQ(encoder.ContainingDepth(), RRC_CODEC_MAX_CONTAINING_DEPTH - 1);
  // 错误粘滞后不允许继续压栈。
  CHECK(!encoder.PushContaining());

  Encoder fresh;
  CHECK(fresh.PushContaining());
  CHECK_EQ(fresh.ContainingDepth(), 1);
  fresh.PopContaining();
  CHECK_EQ(fresh.ContainingDepth(), 0);
  CHECK(fresh.Ok());
  fresh.PopContaining();  // 下溢空操作
  CHECK_EQ(fresh.ContainingDepth(), 0);

  Decoder decoder(nullptr, 0);
  for (int i = 0; i < RRC_CODEC_MAX_CONTAINING_DEPTH; ++i) {
    CHECK(decoder.PushContaining());
  }
  CHECK(!decoder.PushContaining());
  CHECK_EQ(decoder.Error(), ErrorCode_ContainingDepthExceeded);
  decoder.PopContaining();
  CHECK_EQ(decoder.ContainingDepth(), RRC_CODEC_MAX_CONTAINING_DEPTH - 1);
}

/* ---------------------------------------------------------------------------
 * 半约束/无约束整数（38.331 不使用，保留给引擎完整性）
 * ------------------------------------------------------------------------- */

RRC_TEST(semi_constrained_integer_roundtrip) {
  struct Case {
    std::uint64_t value;
    Bytes bytes;
  };
  const Case cases[] = {
      {0u, Bytes{0x00}},
      {1u, Bytes{0x01, 0x01}},
      {255u, Bytes{0x01, 0xFF}},
      {256u, Bytes{0x02, 0x01, 0x00}},
      {0xFFFFFFFFFFFFFFFFull,
       Bytes{0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}},
  };
  for (const Case& test_case : cases) {
    Encoder encoder;
    encoder.WriteSemiConstrainedInteger(test_case.value);
    CHECK(encoder.Ok());
    const Bytes bytes = encoder.Finish();
    CHECK(bytes == test_case.bytes);

    Decoder decoder(bytes.data(), bytes.size());
    std::uint64_t offset = 0;
    CHECK(decoder.ReadSemiConstrainedInteger(offset));
    CHECK_EQ(offset, test_case.value);
    CHECK_EQ(decoder.Error(), ErrorCode_Ok);
  }
}

RRC_TEST(unconstrained_integer_roundtrip) {
  struct Case {
    std::int64_t value;
    Bytes bytes;
  };
  const Case cases[] = {
      {0, Bytes{0x01, 0x00}},
      {127, Bytes{0x01, 0x7F}},
      {128, Bytes{0x02, 0x00, 0x80}},
      {-1, Bytes{0x01, 0xFF}},
      {-128, Bytes{0x01, 0x80}},
      {-129, Bytes{0x02, 0xFF, 0x7F}},
      {INT64_MIN,
       Bytes{0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
  };
  for (const Case& test_case : cases) {
    Encoder encoder;
    encoder.WriteUnconstrainedInteger(test_case.value);
    CHECK(encoder.Ok());
    const Bytes bytes = encoder.Finish();
    CHECK(bytes == test_case.bytes);

    Decoder decoder(bytes.data(), bytes.size());
    std::int64_t value = 0;
    CHECK(decoder.ReadUnconstrainedInteger(value));
    CHECK_EQ(value, test_case.value);
  }
}

/* ---------------------------------------------------------------------------
 * 原始字节/位读取
 * ------------------------------------------------------------------------- */

RRC_TEST(raw_octets_and_bits) {
  const Bytes data = Bytes{0xAB, 0xCD};

  // 编码：不做长度前缀。
  Encoder encoder;
  encoder.WriteRawOctets(data.data(), 2);
  CHECK(encoder.Ok());
  CHECK_BYTES(encoder.Finish(), {0xAB, 0xCD});

  Decoder decoder(data.data(), data.size());
  std::uint8_t octets[2] = {0, 0};
  CHECK(decoder.ReadRawOctets(octets, 2));
  CHECK_EQ(static_cast<int>(octets[0]), 0xAB);
  CHECK_EQ(static_cast<int>(octets[1]), 0xCD);
  CHECK_EQ(decoder.BitOffset(), std::size_t(16));

  // 12 bit 原始位：1010 1011 1100 → AB C0。
  Decoder bit_decoder(data.data(), data.size());
  std::uint8_t bits[2] = {0, 0};
  CHECK(bit_decoder.ReadRawBits(bits, 12));
  CHECK_EQ(static_cast<int>(bits[0]), 0xAB);
  CHECK_EQ(static_cast<int>(bits[1]), 0xC0);
  CHECK_EQ(bit_decoder.BitOffset(), std::size_t(12));

  // ReadBool 是 ReadBit 的别名。
  const Bytes one_byte = Bytes{0x80};
  Decoder bool_decoder(one_byte.data(), one_byte.size());
  bool flag = false;
  CHECK(bool_decoder.ReadBool(flag));
  CHECK(flag);

  // 截断。
  Decoder short_decoder(data.data(), 1);
  CHECK(!short_decoder.ReadRawOctets(octets, 2));
  CHECK_EQ(short_decoder.Error(), ErrorCode_TruncatedInput);
  Decoder empty_decoder(nullptr, 0);
  CHECK(!empty_decoder.ReadRawBits(bits, 1));
  CHECK_EQ(empty_decoder.Error(), ErrorCode_TruncatedInput);
}
