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

#include <cstdint>
#include <optional>

#include "absl/log/check.h"
#include "absl/random/random.h"

namespace fleetbench {
namespace libc {

// Parameters to store memory operations data and it consumes 4B.
// NOTE: Ideally we would store 2 offsets, one for src, and one dst. However, it
// will require at least 6B, which is not great as unaligned loads may become
// expensive on some platforms. Therefore, we encode the memory operation
// arguments into 32 bits here.
struct BM_Mem_Parameters {
  unsigned offset : 16;      // max: 16 KiB - 1
  unsigned size_bytes : 16;  // max: 16 KiB - 1
} __attribute__((__packed__));
static_assert(sizeof(BM_Mem_Parameters) == sizeof(uint32_t));

class MemoryBuffers {
 public:
  // Sanitizer can't handle Alignment > 512.
  explicit MemoryBuffers(const size_t size, const size_t alignment = 512);
  ~MemoryBuffers();

  size_t get_offset() const;
  void set_offset(size_t offset);

  // A pointer in the source buffer at the specified offset. If there is no
  // input 'offset' argument, we use member variable `offset_` to calculate the
  // pointer.
  char *src();
  char *src(size_t offset);
  const char *src(size_t offset) const;

  // A pointer in the destination buffer at the specified offset.  If there is
  // no input 'offset' argument, we use member variable `offset_` to calculate
  // the pointer.
  char *dst();
  char *dst(size_t offset);
  const char *dst(size_t offset) const;

  // Below helpers are for `memcmp/bcmp` only, where we may want to compare
  // buffers that have different values starting at `mismatch_pos - 1`. We
  // modify the byte at that position to invoke early termination check. Note
  // that `mismatch_pos` should be a non-negative, less than buffer size value.
  // If it is zero, two buffers are equal. After comparison, we reset the buffer
  // to make it ready for the next iteration.
  void mark_dst(size_t mismatch_pos);
  void reset_dst(size_t mismatch_pos);

  // The size of the source and destination buffers.
  size_t size() const { return size_; }

 private:
  const size_t size_;
  size_t offset_ = 0;
  char *src_ = nullptr;
  char *dst_ = nullptr;
};

inline char *MemoryBuffers::src() {
  DCHECK_LT(offset_, size_);
  return src_ + offset_;
}

inline char *MemoryBuffers::src(size_t offset) {
  DCHECK_LT(offset, size_);
  return src_ + offset;
}

inline const char *MemoryBuffers::src(size_t offset) const {
  DCHECK_LT(offset, size_);
  return src_ + offset;
}

inline char *MemoryBuffers::dst() {
  DCHECK_LT(offset_, size_);
  return dst_ + offset_;
}

inline char *MemoryBuffers::dst(size_t offset) {
  DCHECK_LT(offset, size_);
  return dst_ + offset;
}

inline const char *MemoryBuffers::dst(size_t offset) const {
  DCHECK_LT(offset, size_);
  return dst_ + offset;
}

inline void MemoryBuffers::mark_dst(size_t mismatch_pos) {
  if (mismatch_pos > 0) dst_[offset_ + mismatch_pos - 1] = 0x00;
}

inline void MemoryBuffers::reset_dst(size_t mismatch_pos) {
  if (mismatch_pos > 0) dst_[offset_ + mismatch_pos - 1] = 0xFF;
}

inline size_t MemoryBuffers::get_offset() const { return offset_; }
inline void MemoryBuffers::set_offset(size_t offset) { offset_ = offset; }

}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_UTILS_H_
