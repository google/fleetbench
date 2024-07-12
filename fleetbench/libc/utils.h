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
#include <vector>

#include "absl/log/check.h"

namespace fleetbench {
namespace libc {

// Parameters for memory operations.
struct BM_Mem_Parameters {
  std::vector<int32_t> size_bytes;
  std::vector<int32_t> src_offset;
  std::vector<int32_t> dst_offset;
  std::vector<int16_t> mismatch_pos;        // Only used by memcmp/bcmp.
  std::vector<unsigned char> memset_value;  // Only used for memset.
};

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
  static void mark(char *buf, size_t offset, size_t mismatch_pos);
  static void reset(char *buf, size_t offset, size_t mismatch_pos);

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

inline void MemoryBuffers::mark(char *buf, size_t offset, size_t mismatch_pos) {
  if (mismatch_pos > 0) buf[offset + mismatch_pos - 1] = 0x00;
}

inline void MemoryBuffers::reset(char *buf, size_t offset,
                                 size_t mismatch_pos) {
  if (mismatch_pos > 0) buf[offset + mismatch_pos - 1] = 0xFF;
}

}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_UTILS_H_
