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
#include <cstdlib>
#include <cstring>
#include <filesystem>  // NOLINT
#include <numeric>
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
static constexpr size_t kMemmoveBufferCount = 1;
static constexpr size_t kMemsetBufferCount = 1;
static constexpr size_t kCmpBufferCount = 1;

// The chance that two memory buffers are exactly same -- memcmp/bcmp only.
static constexpr float kComparisonEqual = 0.4;

// KibiByte. 1kKiB = 1024 bytes
static constexpr int64_t kKiB = 1024;

// Reserved space for the benchmarking framework to operate (otherwise it will
// evict our buffers from current cache).
static constexpr int64_t kReservedBenchmarkBytes = 1 * kKiB;

// Reserved space for precomputed parameters for memory operation.
static constexpr int64_t kPrecomputeParametersBytes = 4 * kKiB;

// Maximum value of size_bytes.
static constexpr size_t kMaxSizeBytes = 4096;

// Helper function to create non cache resident benchmark.
// By keeping incrementing the offset, we explore all the memory of a given
// buffer, which increases the cache miss chance of the previous cache level.
inline void UpdateOffset(const size_t buffer_size, const size_t left_margin,
                         const size_t right_margin,
                         LinearFeedbackShiftRegister &lfsr, size_t &offset) {
  uint16_t rand = lfsr.Next();
  offset += (rand & 0xFFF);
  if (offset + right_margin >= buffer_size || offset < left_margin) {
    offset = left_margin + (rand & 0xFFF);
  }
}

// Overload for the case where left_margin = 0
inline void UpdateOffset(const size_t buffer_size, const size_t right_margin,
                         LinearFeedbackShiftRegister &lfsr, size_t &offset) {
  return UpdateOffset(buffer_size, 0, right_margin, lfsr, offset);
}

// Returns the sum of the size_bytes fields of a BM_Mem_Parameters vector.
int ComputeTotalNumBytes(const std::vector<BM_Mem_Parameters> &parameters) {
  return std::accumulate(
      parameters.begin(), parameters.end(), 0,
      [](int sum, const auto &cur) { return sum + cur.size_bytes; });
}

void MemcpyFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  char *src = buffers.src();
  size_t dst_offset = 0;
  size_t src_offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memcpy function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(buffer_size, p.size_bytes, lfsr, dst_offset);
      UpdateOffset(buffer_size, p.size_bytes, lfsr, src_offset);
      auto res = memcpy(dst + dst_offset, src + src_offset, p.size_bytes);
      benchmark::DoNotOptimize(res);
      dst_offset += p.size_bytes;
      src_offset += p.size_bytes;
    }
  }
}

void MemmoveFunction(benchmark::State &state,
                     std::vector<BM_Mem_Parameters> &parameters,
                     const size_t buffer_size,
                     const uint16_t lfsr_start_state) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *buffer = buffers.src();
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memmove function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(buffer_size, std::abs(std::min(int16_t{0}, p.offset)),
                   std::max(int16_t{0}, p.offset) + p.size_bytes, lfsr, offset);
      char *src = buffer + offset;
      char *dst = buffer + offset + p.offset;
      auto res = memmove(dst, src, p.size_bytes);
      benchmark::DoNotOptimize(res);
      offset += p.size_bytes;
    }
  }
}

template <int (*cmp)(const void *, const void *, size_t)>
void CmpFunction(benchmark::State &state,
                 std::vector<BM_Mem_Parameters> &parameters,
                 const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *buffer = buffers.src();
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call cmp function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      int16_t mismatch_pos = 0;
      size_t src_offset = 0;
      size_t dst_offset = 0;
      bool does_overlap = p.offset & 1;
      if (does_overlap) {
        // For simplicity, and to keep the size of BM_Mem_Parameters small, if
        // src and dst overlap, we only consider the case that the buffers
        // compare equal.
        int16_t overlap_offset = p.offset >> 1;
        UpdateOffset(
            buffer_size, std::abs(std::min(int16_t{0}, overlap_offset)),
            std::max(int16_t{0}, overlap_offset) + p.size_bytes, lfsr, offset);
        src_offset = offset;
        dst_offset = offset + overlap_offset;
      } else {
        mismatch_pos = p.offset >> 1;
        UpdateOffset(buffer_size, p.size_bytes, lfsr, offset);
        src_offset = offset;
        // We set dst to a location after the end of src to make sure they do
        // not overlap.
        offset += p.size_bytes;
        UpdateOffset(buffer_size, p.size_bytes, lfsr, offset);
        dst_offset = offset;
      }
      buffers.mark_dst(dst_offset, mismatch_pos);
      auto res = cmp(buffer + dst_offset, buffer + src_offset, p.size_bytes);
      benchmark::DoNotOptimize(res);
      buffers.reset_dst(dst_offset, mismatch_pos);
      offset += p.size_bytes;
    }
  }
}

void MemsetFunction(benchmark::State &state,
                    std::vector<BM_Mem_Parameters> &parameters,
                    const size_t buffer_size, const uint16_t lfsr_start_state) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  size_t offset = 0;
  LinearFeedbackShiftRegister lfsr(lfsr_start_state);
  // Run benchmark and call memset function
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      UpdateOffset(buffer_size, p.size_bytes, lfsr, offset);
      auto res = memset(dst + offset, p.offset % 0xFF, p.size_bytes);
      benchmark::DoNotOptimize(res);
      offset += p.size_bytes;
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
                      const double overlap_probability, size_t buffer_count,
                      void (*memory_call)(benchmark::State &,
                                          std::vector<BM_Mem_Parameters> &,
                                          const size_t, const uint16_t),
                      const size_t cache_size,
                      const std::string &distribution_name) {
  // Remaining available memory size in current cache for needed parameters to
  // run benchmark.
  const int available_bytes =
      cache_size - kPrecomputeParametersBytes - kReservedBenchmarkBytes;
  CHECK_LT(0, available_bytes) << "Cache too small";

  const size_t batch_size = 1000;

  // Pre-calculates parameter values.
  std::vector<BM_Mem_Parameters> parameters(batch_size);

  CHECK_LE(memory_size_distribution.size(), kMaxSizeBytes)
      << "Maximum of the distribution larger than expected";

  // Max buffer size can be stored in current cache.
  const size_t buffer_size = available_bytes / buffer_count;
  CHECK_LT(memory_size_distribution.size() * 2, buffer_size)
      << "Buffer too small";
  if (memory_call == &MemmoveFunction || memory_call == &CmpFunction<memcmp> ||
      memory_call == &CmpFunction<bcmp>) {
    // Memmove and memcmp/bcmp need larger buffers to allow for differents kinds
    // of overlap between src and dst.
    CHECK_LT(memory_size_distribution.size() * 3, buffer_size)
        << "Buffer too small";
  }

  // Initial state of the linear-feedback shift register. Must be nonzero.
  uint16_t lfsr_start_state = GetRNG()();
  lfsr_start_state = std::max((uint16_t)1, lfsr_start_state);

  // For reproducibility, we compute all size_bytes fields before the offsets,
  // as the call to absl::Uniform may perform a different number of calls to the
  // random number generator, depending on the value of offset_upper_bound,
  // which depends on the cache size.
  double percentage_sum = 0.0;
  int n_parameters = 0;
  for (int i = 0; i < memory_size_distribution.size(); ++i) {
    // percentage_sum stores the relative frequency for an input of size <= i
    percentage_sum += memory_size_distribution[i];
    while (percentage_sum * batch_size - n_parameters > 0.999) {
      parameters[n_parameters++].size_bytes = i;
    }
  }
  CHECK_EQ(n_parameters, parameters.size());
  std::shuffle(parameters.begin(), parameters.end(), GetRNG());

  if (memory_call == &MemmoveFunction || memory_call == &CmpFunction<memcmp> ||
      memory_call == &CmpFunction<bcmp>) {
    for (auto &p : parameters) {
      int16_t mismatch_pos = 0;
      if (memory_call == &CmpFunction<memcmp> ||
          memory_call == &CmpFunction<bcmp>) {
        // For memcmp/bcmp, mismatch_pos indicates the position of the first
        // mismatch char between src and dst. The value of mismatch_pos
        // indicates:
        //  0 : Buffers always compare equal,
        // >0 : Buffers compare different at 'byte = mismatch_pos - 1'.
        const bool is_identical = absl::Bernoulli(GetRNG(), kComparisonEqual);
        if (!is_identical) {
          // +1 is to make up the missing '0' used earlier to indicate equal
          // buffers. That is, if mismatch_pos = 1, the mismatch is at index 0.
          mismatch_pos = absl::Uniform<uint16_t>(GetRNG(), 0, p.size_bytes);
          mismatch_pos += 1;
          CHECK_LT(mismatch_pos, buffer_size)
              << "May result in buffer overflow";
        }
      }

      // The memmove and compare functions allow the src and dst buffers to
      // overlap. To reproduce this behavior, we will use the same buffer for
      // src and dst. We want to exercise three configurations:
      //    1. src and dst overlap, dst < src
      //    2. src and dst overlap, dst >= src
      //    3. src and dst do not overlap
      const bool does_overlap = absl::Bernoulli(GetRNG(), overlap_probability);
      int16_t offset = 0;
      if (does_overlap) {
        // src and dst overlap, i.e., we are in case 1 or 2.
        // We sample an offset from the range (-size_bytes, size_bytes),
        // and set dst = src + offset. Thus, an offset < 0 corresponds to case 1
        // above, and 0 <= offset < size_bytes to case 2.
        offset = absl::Uniform<int16_t>(absl::IntervalOpenOpen, GetRNG(),
                                        -p.size_bytes, p.size_bytes);
      } else if (memory_call == &MemmoveFunction) {
        // For memmove and case 3, we sample an offset from the range
        // [size_bytes, 2 * kMaxSizeBytes).
        // For memcmp/bcmp, we handle case 3 in CmpFunction() instead.
        offset =
            absl::Uniform<int16_t>(GetRNG(), p.size_bytes, 2 * kMaxSizeBytes);
      }

      if (memory_call == &MemmoveFunction) {
        p.offset = offset;
      } else {
        // For simplicity, and to keep the size of BM_Mem_Parameters small, we
        // assume that for memcmp/bcmp, the buffers always compare equal if src
        // and dst overlap. Thus, we can use the p.offset field to store the
        // offset if they overlap, and mismatch_pos if they do not overlap. We
        // use the rightmost bit of p.offset to indicate which of the two values
        // the field contains.
        if (does_overlap) {
          p.offset = (offset << 1) | 1;
          CHECK_EQ(p.offset >> 1, offset);
        } else {
          p.offset = mismatch_pos << 1;
          CHECK_EQ(p.offset >> 1, mismatch_pos);
        }
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

  // Each iteration processes one byte of data.
  const size_t total_bytes = state.iterations();
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
                          const size_t, const uint16_t)>;
  auto memory_operations = {
      operation_entry("Memcpy", kMemcpyBufferCount, &MemcpyFunction),
      operation_entry("Memmove", kMemmoveBufferCount, &MemmoveFunction),
      operation_entry("Memcmp", kCmpBufferCount, &CmpFunction<memcmp>),
      operation_entry("Bcmp", kCmpBufferCount, &CmpFunction<bcmp>),
      operation_entry("Memset", kMemsetBufferCount, &MemsetFunction),
  };
  // For a benchmark whose data should be resident in cache level x, we use a
  // buffer of size CacheSize(x)/2. This is usually significantly larger than
  // CacheSize(x-1), which means that the buffer does not fit in the
  // higher-level caches. Using a value even larger than CacheSize(x)/2 would
  // increase the risk conflict misses in level x, in particular in the
  // lower-level caches, which are often physically indexed. For the L1 cache
  // (which is typically virtually indexed), we use 3/4*CacheSize(1), as for a
  // 32kB L1 cache, CacheSize(1)/2 = 16kB would be too small for the memmove
  // benchmark.
  auto cache_resident_info = {
      std::make_pair("L1", GetCacheSize(1, "Data") * 3 / 4),
      std::make_pair("L2", GetCacheSize(2) / 2),
      std::make_pair("LLC", GetCacheSize(3) / 2),
      std::make_pair("Cold", 2 * GetCacheSize(3)),
  };
  auto memory_benchmark = fleetbench::libc::BM_Memory;
  for (const auto &[distribution_file_prefix, buffer_counter, memory_function] :
       memory_operations) {
    const auto &files = GetDistributionFiles(distribution_file_prefix);
    std::string suffix_name = "";
    for (const auto &file : files) {
      auto distribution_name = file.filename().string();
      distribution_name.erase(distribution_name.find(".csv"));

      const auto [memory_size_distribution, overlap_probability] =
          ReadDistributionFileWithOverlapProbability(file);
      for (const auto &[cache_name, cache_size] : cache_resident_info) {
        std::string benchmark_name =
            absl::StrCat("BM_", distribution_name, "_", cache_name);
        benchmark::RegisterBenchmark(benchmark_name.c_str(), memory_benchmark,
                                     memory_size_distribution,
                                     overlap_probability, buffer_counter,
                                     memory_function, cache_size, suffix_name);
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
