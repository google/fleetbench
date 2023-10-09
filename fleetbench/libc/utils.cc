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
#include <cstdlib>
#include <numeric>

namespace fleetbench {
namespace libc {

MemoryBuffers::MemoryBuffers(const size_t size, const size_t alignment)
    : size_(size),
      src_(reinterpret_cast<char*>(
          aligned_alloc(alignment, std::lcm(size_, alignment)))),
      dst_(reinterpret_cast<char*>(
          aligned_alloc(alignment, std::lcm(size_, alignment)))) {
  memset(src_, 0xFF, size);
  memset(dst_, 0xFF, size);
}

MemoryBuffers::~MemoryBuffers() {
  free(src_);
  free(dst_);
}

}  // namespace libc
}  // namespace fleetbench
