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

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <optional>
#include <random>
#include <vector>

#include "absl/log/check.h"
#include "absl/random/distributions.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "absl/types/span.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/libc/memory_size_distributions.h"
#include "fleetbench/libc/utils.h"

namespace fleetbench {
namespace libc {
// Number of needed buffer of memcpy().
static constexpr size_t kMemcpyBufferCount = 2;

// KibiByte. 1kKiB = 1024 bytes
static constexpr int64_t kKiB = 1024;

// L1 cache memory size
static constexpr int64_t kL1MemorySizeBytes = 32 * kKiB;

// Reserved space for the benchmarking framework to operate (otherwise it will
// evict our buffers from L1).
static constexpr int64_t kReservedBenchmarkBytes = 1 * kKiB;

// Reserved space for precomputed parameters for memory operation.
static constexpr int64_t kPrecomputeParametersBytes = 4 * kKiB;

using CacheInfo = benchmark::CPUInfo::CacheInfo;

// Parameters to store memcpy operations data and it consumes 4B.
// NOTE: Ideally we would store 2 offsets, one for src, and one dst. However, it
// will require at least 6B, which is not great as unaligned loads may become
// expensive on some plateforms. Therefore, we encode the memory operation
// arguments into 32 bits here.

struct BM_Memcpy_Parameters {
  unsigned offset : 16;      // max: 16 KiB - 1
  unsigned size_bytes : 16;  // max: 16 KiB - 1
} __attribute__((__packed__));
static_assert(sizeof(BM_Memcpy_Parameters) == sizeof(uint32_t));


// Checks if the platform that runs this benchmark has enough L1 cache memory.
bool isValidL1Cache() {
  const std::vector<CacheInfo> &CacheInfos = benchmark::CPUInfo::Get().caches;

  for (const CacheInfo &ci : CacheInfos) {
    // Find L1 cache, and check if it has enough memory.
    if (ci.type == "Data" && ci.level == 1)
      return ci.size >= kL1MemorySizeBytes;
  }
  return false;
}

static void BM_Memcpy(benchmark::State &state) {
  // TODO(liyuying): extract this function from benchmark iterations.
  CHECK(isValidL1Cache()) << "Not enough L1 cache memory";

  // Remaining available memory size in L1 for needed parameters to run
  // benchmark.
  const size_t available_bytes =
      kL1MemorySizeBytes - kPrecomputeParametersBytes - kReservedBenchmarkBytes;

  // Gets prod memcpy distribution and the name.
  const auto &[distribution_name, memory_size_distribution] =
      GetMemcpySizeDistributions()[state.range(0)];

  // Convert prod size distribution to a discrete distribution.
  std::discrete_distribution<unsigned> size_bytes_sampler(
      memory_size_distribution.begin(), memory_size_distribution.end());

  // Max buffer size can be stored in L1 cache.
  const size_t buffer_size = available_bytes / kMemcpyBufferCount;

  // Number of parameters that allows all can resident in L1.
  const size_t batch_size =
      kPrecomputeParametersBytes / sizeof(BM_Memcpy_Parameters);

  // Pre-calculates parameter values.
  std::vector<BM_Memcpy_Parameters> parameters(batch_size);

  for (auto &p : parameters) {
    // Size_bytes is sampled from collected prod distribution.
    p.size_bytes = size_bytes_sampler(GetRNG());

    // Once we have size_bytes, we can sample the offsets from a discrete
    // uniform distribution in interval [0,offset_upper_bound), where
    // 'offset_upper_bound' is calculated by subtracting size_bytes from
    // maximum buffer size to avoid accessing past the end of the buffer.
    size_t offset_upper_bound = buffer_size - p.size_bytes;

    // Sample offset.
    p.offset = absl::Uniform<unsigned>(GetRNG(), 0, offset_upper_bound);

    // Check offset is valid.
    CHECK(p.offset + p.size_bytes < buffer_size)
        << "May result in src buffer overflow";
  }

  MemoryBuffers buffers(buffer_size);

  // Run benchmark and call memcpy function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      benchmark::DoNotOptimize(
          memcpy(buffers.dst(p.offset), buffers.src(p.offset), p.size_bytes));
    }
  }

  state.SetLabel(absl::StrCat(distribution_name));
  // TODO(liyuying): add counters
  // TODO(liyuying): add reset if necessary
}

BENCHMARK(BM_Memcpy)->DenseRange(0, GetMemcpySizeDistributions().size() - 1, 1);
}  // namespace libc
}  // namespace fleetbench
