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
#include <random>
#include <vector>

#include "absl/log/check.h"
#include "absl/random/distributions.h"
#include "absl/strings/str_cat.h"
#include "absl/types/span.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/libc/memory_size_distributions.h"
#include "fleetbench/libc/utils.h"

namespace fleetbench {
namespace libc {
// Number of needed buffer of memory operators.
static constexpr size_t kMemcpyBufferCount = 2;
static constexpr size_t kMemmoveBufferCount = 3;
static constexpr size_t kMemsetBufferCount = 1;
static constexpr size_t kMemcmpBufferCount = 2;
static constexpr size_t kBcmpBufferCount = 2;

// The chance that two memory buffers are exactly same -- memcmp/bcmp only.
static constexpr float kComparisonEqual = 0.4;

// Whether a memory function is to be considered as "comparing bytes"
// (memcmp/bcmp only). This is useful when generating buffers so we can test
// effect of buffers comparing equal or different.
enum class IsCompare : bool { YES = true, NO = false };

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

void MemcpyFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size) {
  MemoryBuffers buffers(buffer_size);
  size_t batch_size = parameters.size();
  // Run benchmark and call memcpy function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      auto res =
          memcpy(buffers.dst(p.offset), buffers.src(p.offset), p.size_bytes);
      benchmark::DoNotOptimize(res);
    }
  }
}

void MemmoveFunction(benchmark::State &state,
                     std::vector<BM_Mem_Parameters> &parameters,
                     const size_t buffer_size) {
  // |----------|----------|----------|
  // |<--src1-->|<--src2-->|<--src3-->|
  //            ↑
  //           dst
  // The memmove function allows the src and dst buffers to overlap. To
  // reproduce this behavior we will use only one of the two buffers allocated
  // by MemoryBuffers below. Both src and dst pointers will be selected from the
  // dst() member.
  // We want to exercise three configurations :
  //    1. src and dst overlap, src is before dst
  //    2. src and dst overlap, src is after dst
  //    3. src and dst do not overlap
  // To do so, we allocate a memory region of size '3 * buffer_size' and we pin
  // the dst pointer to a third of the buffer. Then we allow src to be anywhere
  // in the buffer as long as it doesn't read past allocated memory. This way
  // src will fall into one of the three regions: src1 corresponds to case 1
  // above, src2 to case 2, src3 to case 3. The number of bytes to be moved is
  // always smaller than buffer_size.
  MemoryBuffers buffers(buffer_size * 3);
  size_t batch_size = parameters.size();
  // Run benchmark and call memmove function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      auto res = memmove(buffers.dst(buffers.size() / 3), buffers.dst(p.offset),
                         p.size_bytes);
      benchmark::DoNotOptimize(res);
    }
  }
}

void MemcmpFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size) {
  MemoryBuffers buffers(buffer_size);
  size_t batch_size = parameters.size();
  // Run benchmark and call memcmp function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      buffers.mark_dst(p.offset);
      auto res = memcmp(buffers.dst(0), buffers.src(0), p.size_bytes);
      benchmark::DoNotOptimize(res);
      buffers.reset_dst(p.offset);
    }
  }
}

void BcmpFunction(benchmark::State &state,
                  std::vector<BM_Mem_Parameters> &parameters,
                  const size_t buffer_size) {
  MemoryBuffers buffers(buffer_size);
  size_t batch_size = parameters.size();
  // Run benchmark and call bcmp function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      buffers.mark_dst(p.offset);
      auto res = bcmp(buffers.dst(0), buffers.src(0), p.size_bytes);
      benchmark::DoNotOptimize(res);
      buffers.reset_dst(p.offset);
    }
  }
}

void MemsetFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size) {
  MemoryBuffers buffers(buffer_size);
  size_t batch_size = parameters.size();
  // Run benchmark and call memset function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      auto res = memset(buffers.dst(p.offset), p.offset % 0xFF, p.size_bytes);
      benchmark::DoNotOptimize(res);
    }
  }
}

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

template <class... Args>
static void BM_Memory(benchmark::State &state, Args &&...args) {
  // TODO(liyuying): extract this function from benchmark iterations.
  CHECK(isValidL1Cache()) << "Not enough L1 cache memory";

  auto args_tuple = std::make_tuple(std::move(args)...);

  auto distributions = std::get<0>(args_tuple);
  auto buffer_count = std::get<1>(args_tuple);
  auto memory_call = std::get<2>(args_tuple);
  auto is_compare = std::get<3>(args_tuple);

  // Remaining available memory size in L1 for needed parameters to run
  // benchmark.
  const size_t available_bytes =
      kL1MemorySizeBytes - kPrecomputeParametersBytes - kReservedBenchmarkBytes;

  // Number of parameters that allows all can resident in L1.
  const size_t batch_size =
      kPrecomputeParametersBytes / sizeof(BM_Mem_Parameters);

  // Pre-calculates parameter values.
  std::vector<BM_Mem_Parameters> parameters(batch_size);

  // Gets prod memory distribution and the name.
  const auto &[distribution_name, memory_size_distribution] =
      distributions[state.range(0)];

  // Convert prod size distribution to a discrete distribution.
  std::discrete_distribution<uint16_t> size_bytes_sampler(
      memory_size_distribution.begin(), memory_size_distribution.end());

  // Max buffer size can be stored in L1 cache.
  const size_t buffer_size = available_bytes / buffer_count;

  for (auto &p : parameters) {
    // Size_bytes is sampled from collected prod distribution.
    p.size_bytes = size_bytes_sampler(GetRNG());

    // Once we have size_bytes, we can sample the offsets from a discrete
    // uniform distribution in interval [0, offset_upper_bound), where
    // 'offset_upper_bound' is calculated by subtracting size_bytes from
    // maximum buffer size to avoid accessing past the end of the buffer.
    const size_t offset_upper_bound = buffer_size - p.size_bytes;

    if (is_compare == IsCompare::YES) {
      // For memcmp/bcmp, the offset indicates the position of the first
      // mismatch char between the two buffers. The value of offset indicates:
      //  0 : Buffers always compare equal,
      // >0 : Buffers compare different at 'byte = offset - 1'.
      const bool is_identical = absl::Bernoulli(GetRNG(), kComparisonEqual);
      if (is_identical) {
        p.offset = 0;
      } else {
        // +1 is to make up the missing '0' used earlier to indicate equal
        // buffers. That is, if p.offset = 1, the mismatch is at index 0.
        p.offset = absl::Uniform<uint16_t>(GetRNG(), 0, p.size_bytes);
        p.offset += 1;
        CHECK_LT(p.offset, buffer_size) << "May result in buffer overflow";
      }
    } else {
      // For non-comparison operation, offset is used to calculate the starting
      // position of the memory block.
      p.offset = absl::Uniform<uint16_t>(GetRNG(), 0, offset_upper_bound);

      // Check offset is valid.
      CHECK_LT(p.offset + p.size_bytes, buffer_size)
          << "May result in src buffer overflow";
    }
  }

  memory_call(state, parameters, buffer_size);

  // Make each benchmark repetition reproducible, if using a fixed seed.
  Random::instance().Reset();

  // Computes the total_types throughput.
  size_t batch_bytes = 0;
  for (auto &P : parameters) {
    batch_bytes += P.size_bytes;
  }

  const size_t total_bytes = (state.iterations() * batch_bytes) / batch_size;
  state.SetLabel(absl::StrCat(distribution_name));

  state.SetBytesProcessed(total_bytes);
  state.counters["bytes_per_cycle"] = benchmark::Counter(
      total_bytes / benchmark::CPUInfo::Get().cycles_per_second,
      benchmark::Counter::kIsRate);
  state.counters["bytes"] =
      benchmark::Counter(total_bytes, benchmark::Counter::kDefaults);
}

BENCHMARK_CAPTURE(BM_Memory, memcpy, GetMemcpySizeDistributions(),
                  kMemcpyBufferCount, &MemcpyFunction, IsCompare::NO)
    ->DenseRange(0, GetMemcpySizeDistributions().size() - 1, 1);

BENCHMARK_CAPTURE(BM_Memory, memmove, GetMemmoveSizeDistributions(),
                  kMemmoveBufferCount, &MemmoveFunction, IsCompare::NO)
    ->DenseRange(0, GetMemmoveSizeDistributions().size() - 1, 1);

BENCHMARK_CAPTURE(BM_Memory, memcmp, GetMemcmpSizeDistributions(),
                  kMemcmpBufferCount, &MemcmpFunction, IsCompare::YES)
    ->DenseRange(0, GetMemcmpSizeDistributions().size() - 1, 1);

BENCHMARK_CAPTURE(BM_Memory, bcmp, GetBcmpSizeDistributions(), kBcmpBufferCount,
                  &BcmpFunction, IsCompare::YES)
    ->DenseRange(0, GetBcmpSizeDistributions().size() - 1, 1);

BENCHMARK_CAPTURE(BM_Memory, memset, GetMemsetSizeDistributions(),
                  kMemsetBufferCount, &MemsetFunction, IsCompare::NO)
    ->DenseRange(0, GetMemsetSizeDistributions().size() - 1, 1);

}  // namespace libc
}  // namespace fleetbench
