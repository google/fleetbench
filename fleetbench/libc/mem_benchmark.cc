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
#include <filesystem>  // NOLINT
#include <random>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "absl/log/check.h"
#include "absl/random/distributions.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/dynamic_registrar.h"
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

// Reserved space for the benchmarking framework to operate (otherwise it will
// evict our buffers from current cache).
static constexpr int64_t kReservedBenchmarkBytes = 1 * kKiB;

// Reserved space for precomputed parameters for memory operation.
static constexpr int64_t kPrecomputeParametersBytes = 4 * kKiB;

// Helper function to create non cache resident benchmark.
// By keeping incrementing the offset, we explore all the memory of a given
// buffer, which increases the cache miss chance of the previous cache level.
inline void UpdateOffset(const BM_Mem_Parameters &parameters,
                         const size_t buffer_size,
                         LinearFeedbackShiftRegister &lfsr, size_t &offset) {
  uint16_t rand = lfsr.Next();
  offset += (rand & 0xFFF);
  if (offset + parameters.size_bytes >= buffer_size) offset = (rand & 0xFFF);
}

void MemcpyFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = parameters.size();
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  char *src = buffers.src(0);
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memcpy function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(p, buffer_size, lfsr, offset);
      auto res = memcpy(dst + offset, src, p.size_bytes);
      benchmark::DoNotOptimize(res);
    }
  }
}

void MemmoveFunction(benchmark::State &state,
                     std::vector<BM_Mem_Parameters> &parameters,
                     const size_t buffer_size,
                     const uint16_t lfsr_start_state) {
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
  size_t batch_size = parameters.size();
  MemoryBuffers buffers(buffer_size * 3);
  char *dst = buffers.dst(buffers.size() / 3);
  char *src = buffers.dst();
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memmove function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(p, buffer_size, lfsr, offset);
      auto res = memmove(dst, src + offset, p.size_bytes);
      benchmark::DoNotOptimize(res);
    }
  }
}

void MemcmpFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = parameters.size();
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  char *src = buffers.src(0);
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memcmp function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(p, buffer_size, lfsr, offset);
      buffers.mark_dst(offset, p.offset);
      auto res = memcmp(dst + offset, src, p.size_bytes);
      benchmark::DoNotOptimize(res);
      buffers.reset_dst(offset, p.offset);
    }
  }
}

void BcmpFunction(benchmark::State &state,
                  std::vector<BM_Mem_Parameters> &parameters,
                  const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = parameters.size();
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  char *src = buffers.src(0);
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call bcmp function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(p, buffer_size, lfsr, offset);
      buffers.mark_dst(offset, p.offset);
      auto res = bcmp(dst + offset, src, p.size_bytes);
      benchmark::DoNotOptimize(res);
      buffers.reset_dst(offset, p.offset);
    }
  }
}

void MemsetFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = parameters.size();
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memset function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(p, buffer_size, lfsr, offset);
      auto res = memset(dst + offset, p.offset % 0xFF, p.size_bytes);
      benchmark::DoNotOptimize(res);
    }
  }
}

// Returns a sorted list of the files for the distributions whose filenames
// start with 'prefix'.
static std::vector<std::filesystem::path> GetDistributionFiles(
    absl::string_view prefix) {
  return GetMatchingFiles(GetFleetbenchRuntimePath("libc/distributions"),
                          prefix);
}

static void BM_Memory(benchmark::State &state,
                      const std::vector<double> &memory_size_distribution,
                      size_t buffer_count,
                      void (*memory_call)(benchmark::State &,
                                          std::vector<BM_Mem_Parameters> &,
                                          const size_t, const uint16_t),
                      const IsCompare &is_compare, const size_t cache_size,
                      const std::string &distribution_name) {
  // Remaining available memory size in current cache for needed parameters to
  // run benchmark.
  const size_t available_bytes =
      cache_size - kPrecomputeParametersBytes - kReservedBenchmarkBytes;

  const size_t batch_size = 1000;

  // Pre-calculates parameter values.
  std::vector<BM_Mem_Parameters> parameters(batch_size);

  // Convert prod size distribution to a discrete distribution.
  std::discrete_distribution<uint16_t> size_bytes_sampler(
      memory_size_distribution.begin(), memory_size_distribution.end());

  // Max buffer size can be stored in current cache.
  const size_t buffer_size = available_bytes / buffer_count;

  // Initial state of the linear-feedback shift register. Must be nonzero.
  uint16_t lfsr_start_state = GetRNG()();
  lfsr_start_state = std::max((uint16_t)1, lfsr_start_state);

  // For reproducibility, we compute all size_bytes fields before the offsets,
  // as the call to absl::Uniform may perform a different number of calls to the
  // random number generator, depending on the value of offset_upper_bound,
  // which depends on the cache size.
  for (auto &p : parameters) {
    // Size_bytes is sampled from collected prod distribution.
    p.size_bytes = size_bytes_sampler(GetRNG());
  }

  for (auto &p : parameters) {
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
    }
  }

  memory_call(state, parameters, buffer_size, lfsr_start_state);

  // Make each benchmark repetition reproducible, if using a fixed seed.
  Random::instance().Reset();

  // Computes the total_types throughput.
  size_t batch_bytes = 0;
  for (auto &P : parameters) {
    batch_bytes += P.size_bytes;
  }

  const size_t total_bytes = (state.iterations() * batch_bytes) / batch_size;

  state.SetBytesProcessed(total_bytes);
  state.counters["bytes_per_cycle"] = benchmark::Counter(
      total_bytes / benchmark::CPUInfo::Get().cycles_per_second,
      benchmark::Counter::kIsRate);
  state.counters["bytes"] =
      benchmark::Counter(total_bytes, benchmark::Counter::kDefaults);
  if (!distribution_name.empty()) state.SetLabel(distribution_name);
}

void RegisterBenchmarks() {
  using operation_entry =
      std::tuple<std::string, size_t,
                 void (*)(benchmark::State &, std::vector<BM_Mem_Parameters> &,
                          const size_t, const uint16_t),
                 IsCompare>;
  auto memory_operations = {
      operation_entry("Memcpy", kMemcpyBufferCount, &MemcpyFunction,
                      IsCompare::NO),
      operation_entry("Memmove", kMemmoveBufferCount, &MemmoveFunction,
                      IsCompare::NO),
      operation_entry("Memcmp", kMemcmpBufferCount, &MemcmpFunction,
                      IsCompare::YES),
      operation_entry("Bcmp", kBcmpBufferCount, &BcmpFunction, IsCompare::YES),
      operation_entry("Memset", kMemsetBufferCount, &MemsetFunction,
                      IsCompare::NO),
  };
  auto cache_resident_info = {
      std::make_pair("L1", GetCacheSize(1, "Data")),
      std::make_pair("L2", GetCacheSize(2)),
      std::make_pair("LLC", GetCacheSize(3)),
      std::make_pair("Cold", 2 * GetCacheSize(3)),
  };
  auto memory_benchmark = fleetbench::libc::BM_Memory;
  for (const auto &[distribution_file_prefix, buffer_counter, memory_function,
                    is_compare] : memory_operations) {
    const auto &files = GetDistributionFiles(distribution_file_prefix);
    std::string suffix_name = "";
    for (const auto &file : files) {
      auto distribution_name = file.filename().string();
      distribution_name.erase(distribution_name.find(".csv"));

      const std::vector<double> memory_size_distribution =
          ReadDistributionFile(file);
      for (const auto &[cache_name, cache_size] : cache_resident_info) {
        std::string benchmark_name =
            absl::StrCat("BM_", distribution_name, "_", cache_name);
        benchmark::RegisterBenchmark(benchmark_name.c_str(), memory_benchmark,
                                     memory_size_distribution, buffer_counter,
                                     memory_function, is_compare, cache_size,
                                     suffix_name);
      }
    }
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Bcmp_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Memcmp_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Memcpy_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Memmove_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Memset_Fleet_L1");
  }
};

BenchmarkRegisterer br;

}  // namespace libc
}  // namespace fleetbench
