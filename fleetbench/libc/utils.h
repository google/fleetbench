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

#include "absl/random/random.h"

namespace fleetbench {
namespace libc {

// TODO(liyuying): change the class implementation to fit more memory
// operations.
// -- memcmp and bcmp require 2 read only buffers
// -- memset requires 1 dst buffer.
class MemoryBuffers {
 public:
  explicit MemoryBuffers(const size_t size, const size_t alignment = 1024);
  ~MemoryBuffers();

  // A pointer in the source buffer at the specified offset.
  const char *src(size_t offset) const;

  // A pointer in the destination buffer at the specified offset.
  char *dst(size_t offset);
  const char *dst(size_t offset) const;

  // The size of the source and destination buffers.
  size_t size() const { return size_; }

 private:
  const size_t size_;
  char *src_ = nullptr;
  char *dst_ = nullptr;
};

}  // namespace libc
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_MEM_UTILS_H_
