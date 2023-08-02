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

#include "fleetbench/libc/utils.h"

#include <cstddef>

#include "absl/log/check.h"

namespace fleetbench {
namespace libc {

MemoryBuffers::MemoryBuffers(const size_t size, const size_t alignment)
    : size_(size),
      src_(reinterpret_cast<char*>(aligned_alloc(alignment, size_))),
      dst_(reinterpret_cast<char*>(aligned_alloc(alignment, size_))) {
  memset(src_, 0xFF, size);
  memset(dst_, 0xFF, size);
}

char* MemoryBuffers::src() {
  DCHECK_LT(offset_, size_);
  return src_ + offset_;
}

char* MemoryBuffers::src(size_t offset) {
  DCHECK_LT(offset, size_);
  return src_ + offset;
}

const char* MemoryBuffers::src(size_t offset) const {
  DCHECK_LT(offset, size_);
  return src_ + offset;
}

char* MemoryBuffers::dst() {
  DCHECK_LT(offset_, size_);
  return dst_ + offset_;
}

char* MemoryBuffers::dst(size_t offset) {
  DCHECK_LT(offset, size_);
  return dst_ + offset;
}

const char* MemoryBuffers::dst(size_t offset) const {
  DCHECK_LT(offset, size_);
  return dst_ + offset;
}

void MemoryBuffers::mark_dst(size_t mismatch_pos) {
  if (mismatch_pos > 0) dst_[offset_ + mismatch_pos - 1] = 0x00;
}

void MemoryBuffers::reset_dst(size_t mismatch_pos) {
  if (mismatch_pos > 0) dst_[offset_ + mismatch_pos - 1] = 0xFF;
}

size_t MemoryBuffers::get_offset() const { return offset_; }
void MemoryBuffers::set_offset(size_t offset) { offset_ = offset; }

MemoryBuffers::~MemoryBuffers() {
  free(src_);
  free(dst_);
}

}  // namespace libc
}  // namespace fleetbench
