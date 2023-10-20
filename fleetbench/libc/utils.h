// Copyright 2022 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef THIRD_PARTY_FLEETBENCH_MEM_UTILS_H_
#define THIRD_PARTY_FLEETBENCH_MEM_UTILS_H_

#include <cstddef>
#include <cstdint>

#include "absl/log/check.h"

namespace fleetbench {
namespace libc {

// Parameters to store memory operations data and it consumes 4B.
// NOTE: offset is only used for memcmp/bcmp and memmove.
struct BM_Mem_Parameters {
  int16_t offset;
  uint16_t size_bytes;
} __attribute__((__packed__));
static_assert(sizeof(BM_Mem_Parameters) == sizeof(uint32_t));

class MemoryBuffers {
 public:
  // Sanitizer can't handle Alignment > 512.
  explicit MemoryBuffers(const size_t size, const size_t alignment = 512);
  ~MemoryBuffers();

  // A pointer in the source buffer at the specified offset.
  char *src();
  char *src(size_t offset);
  const char *src(size_t offset) const;

  // A pointer in the destination buffer at the specified offset.
  char *dst();
  char *dst(size_t offset);
  const char *dst(size_t offset) const;

  // Below helpers are for `memcmp/bcmp` only, where we may want to compare
  // buffers that have different values starting at `mismatch_pos - 1`. We
  // modify the byte at that position to invoke early termination check. Note
  // that `mismatch_pos` should be a non-negative, less than buffer size value.
  // If it is zero, two buffers are equal. After comparison, we reset the buffer
  // to make it ready for the next iteration.
  void mark_dst(size_t offset, size_t mismatch_pos);
  void reset_dst(size_t offset, size_t mismatch_pos);

  // The size of the source and destination buffers.
  size_t size() const { return size_; }

 private:
  const size_t size_;
  char *src_ = nullptr;
  char *dst_ = nullptr;
};

inline char *MemoryBuffers::src() { return src_; }

inline char *MemoryBuffers::src(size_t offset) {
  DCHECK_LT(offset, size_);
  return src_ + offset;
}

inline const char *MemoryBuffers::src(size_t offset) const {
  DCHECK_LT(offset, size_);
  return src_ + offset;
}

inline char *MemoryBuffers::dst() { return dst_; }

inline char *MemoryBuffers::dst(size_t offset) {
  DCHECK_LT(offset, size_);
  return dst_ + offset;
}

inline const char *MemoryBuffers::dst(size_t offset) const {
  DCHECK_LT(offset, size_);
  return dst_ + offset;
}

inline void MemoryBuffers::mark_dst(size_t offset, size_t mismatch_pos) {
  if (mismatch_pos > 0) dst_[offset + mismatch_pos - 1] = 0x00;
}

inline void MemoryBuffers::reset_dst(size_t offset, size_t mismatch_pos) {
  if (mismatch_pos > 0) dst_[offset + mismatch_pos - 1] = 0xFF;
}

// To generate pseudo-random numbers efficiently, we use a 16-bit Xorshift
// linear-feedback shift register
// (https://en.wikipedia.org/wiki/Linear-feedback_shift_register#Xorshift_LFSRs).
class LinearFeedbackShiftRegister {
 public:
  // The default constructor assumes a starting seed of 1.
  LinearFeedbackShiftRegister() { Reset(1); }

  // Constructor that specifies the starting seed. The seed must be non-zero.
  explicit LinearFeedbackShiftRegister(uint32_t seed) { Reset(seed); }

  // Reset starting from a specific seed. The seed must be non-zero.
  void Reset(uint16_t seed) { reg_ = seed; }

  // Advance to the next value.
  inline uint16_t Next() {
    DCHECK_NE(reg_, 0);
    reg_ ^= reg_ >> 7;
    reg_ ^= reg_ << 9;
    reg_ ^= reg_ >> 13;
    return reg_;
  }

 private:
  uint16_t reg_;
};

}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_UTILS_H_
