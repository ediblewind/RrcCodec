/* ============================================================================
 * limits.hpp — 内部编译期安全上限（默认值，可由 CMake 覆盖）
 *
 * 公共头 rrc_codec.h 中以 RRC_CODEC_MAX_* 宏公开同名默认值；CMake 通过
 * target_compile_definitions 覆盖后，库与调用方看到的上限保持一致。
 * 本文件仅供库内部（PER 运行时与生成代码）使用，不安装。
 * ========================================================================== */
#ifndef RRC_CODEC_CORE_LIMITS_HPP
#define RRC_CODEC_CORE_LIMITS_HPP

#include <cstddef>
#include <cstdint>

#ifndef RRC_CODEC_MAX_INPUT_BYTES
#define RRC_CODEC_MAX_INPUT_BYTES (16u * 1024u * 1024u)
#endif

#ifndef RRC_CODEC_MAX_OPEN_TYPE_BYTES
#define RRC_CODEC_MAX_OPEN_TYPE_BYTES (8u * 1024u * 1024u)
#endif

#ifndef RRC_CODEC_MAX_SEQUENCE_OF_COUNT
#define RRC_CODEC_MAX_SEQUENCE_OF_COUNT 65536u
#endif

#ifndef RRC_CODEC_MAX_BITSTRING_BITS
#define RRC_CODEC_MAX_BITSTRING_BITS 65536u
#endif

#ifndef RRC_CODEC_MAX_CONTAINING_DEPTH
#define RRC_CODEC_MAX_CONTAINING_DEPTH 16
#endif

namespace rrc {
namespace v1810 {

/** 长度确定量/位串内容的分片单位（X.691 §11.9.3.8：16K）。 */
constexpr std::uint32_t kPerFragmentUnit = 16384u;

/** 单个分片头可表示的最大分片数（6 bit）。 */
constexpr std::uint32_t kPerMaxFragmentBlocks = 63u;

}  // namespace v1810
}  // namespace rrc

#endif /* RRC_CODEC_CORE_LIMITS_HPP */
