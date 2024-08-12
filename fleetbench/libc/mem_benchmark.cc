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
#include <deque>
#include <filesystem>  // NOLINT
#include <iterator>
#include <numeric>
#include <random>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "absl/algorithm/container.h"
#include "absl/container/btree_map.h"
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
static constexpr float kComparisonEqualProbability = 0.4;

// 64 bytes is a common size for cache lines.
static constexpr size_t kCacheLineSize = 64;

// Returns the sum of the size_bytes elements.
size_t ComputeTotalNumBytes(const BM_Mem_Parameters &parameters) {
  return std::accumulate(parameters.size_bytes.begin(),
                         parameters.size_bytes.end(), size_t{0});
}

void MemcpyFunction(benchmark::State &state,
                    const BM_Mem_Parameters &parameters,
                    const size_t buffer_size) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  char *src = buffers.src();
  // Run benchmark and call memcpy function
  while (state.KeepRunningBatch(batch_size)) {
    // The libc memory benchmarks have some sensitivity to the alignment of the
    // branch instructions in the benchmarking loop. In particular, on some
    // machines, there can be a slowdown if branch instructions cross a 32-Byte
    // boundary (potentially related to the JCC erratum). We reduce this
    // sensitivity by partially unrolling the loop, which reduces the number of
    // branch instructions and moves the remaining ones to different offsets in
    // different iterations.
#pragma unroll 8
    for (int i = 0; i < parameters.size_bytes.size(); i++) {
      auto res =
          memcpy(dst + parameters.dst_offset[i], src + parameters.src_offset[i],
                 parameters.size_bytes[i]);
      benchmark::DoNotOptimize(res);
    }
  }
}

void MemmoveFunction(benchmark::State &state,
                     const BM_Mem_Parameters &parameters,
                     const size_t buffer_size) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *buffer = buffers.src();
  // Run benchmark and call memmove function
  while (state.KeepRunningBatch(batch_size)) {
#pragma unroll 8
    for (int i = 0; i < parameters.size_bytes.size(); i++) {
      auto res =
          memmove(buffer + parameters.dst_offset[i],
                  buffer + parameters.src_offset[i], parameters.size_bytes[i]);
      benchmark::DoNotOptimize(res);
    }
  }
}

template <int (*cmp)(const void *, const void *, size_t)>
void CmpFunction(benchmark::State &state, const BM_Mem_Parameters &parameters,
                 const size_t buffer_size) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *buffer = buffers.src();
  // Run benchmark and call cmp function
  while (state.KeepRunningBatch(batch_size)) {
#pragma unroll 8
    for (int i = 0; i < parameters.size_bytes.size(); i++) {
      MemoryBuffers::mark(buffer, parameters.dst_offset[i],
                          parameters.mismatch_pos[i]);
      auto res =
          cmp(buffer + parameters.dst_offset[i],
              buffer + parameters.src_offset[i], parameters.size_bytes[i]);
      benchmark::DoNotOptimize(res);
      MemoryBuffers::reset(buffer, parameters.dst_offset[i],
                           parameters.mismatch_pos[i]);
    }
  }
}

void MemsetFunction(benchmark::State &state,
                    const BM_Mem_Parameters &parameters,
                    const size_t buffer_size) {
  size_t batch_size = ComputeTotalNumBytes(parameters);
  MemoryBuffers buffers(buffer_size);
  char *dst = buffers.dst();
  // Run benchmark and call memset function
  while (state.KeepRunningBatch(batch_size)) {
#pragma unroll 8
    for (int i = 0; i < parameters.size_bytes.size(); i++) {
      auto res = memset(dst + parameters.dst_offset[i],
                        parameters.memset_value[i], parameters.size_bytes[i]);
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

std::vector<int32_t> SampleSizeBytes(
    const absl::btree_map<int, double> &memory_size_distribution,
    const size_t max_size, const size_t n_samples) {
  // Expected number of bytes for the specified number of samples.
  double expected_bytes_tmp = 0.0;
  // Sum of the percentages in the distribution; this might not be exactly 1.0
  // due to rounding in the input files.
  double percentage_sum = 0.0;
  for (auto const [size, percentage] : memory_size_distribution) {
    expected_bytes_tmp += n_samples * size * percentage;
    percentage_sum += percentage;
  }
  int64_t expected_bytes = static_cast<int64_t>(expected_bytes_tmp);

  std::vector<int32_t> size_bytes(n_samples);
  double cur_percentage_sum = 0.0;
  int n_parameters = 0;
  for (auto const &[size, percentage] : memory_size_distribution) {
    // cur_percentage_sum stores the relative frequency for an input <= size
    cur_percentage_sum += percentage;
    while (n_samples * cur_percentage_sum / percentage_sum - n_parameters >
           0.999) {
      size_bytes[n_parameters++] =
          std::min(size, static_cast<int32_t>(max_size));
    }
  }
  CHECK_EQ(n_parameters, size_bytes.size());

  // The probabilities for larger sizes are typically very small. However, these
  // sizes can have a significant impact on the average size. Therefore, for
  // smaller values of n_samples or max_size, the average size of the samples at
  // this point can differ significantly from the average value of the
  // distribution. There is a trade-off between matching the probabilities and
  // matching the average accurately. We consider the average to be more
  // important here, so that the L1/L2/L3/Cold benchmark touch the same number
  // of bytes, and that a different value for n_samples does not affect the
  // average of the samples significantly. We therefore adjust the samples a bit
  // to make sure that the average size matches the the expected value.
  int64_t actual_bytes =
      std::accumulate(size_bytes.begin(), size_bytes.end(), int64_t{0});
  for (auto it = size_bytes.rbegin(); it != size_bytes.rend(); ++it) {
    int32_t old_bytes = *it;
    int32_t new_bytes = 0;
    if (actual_bytes > expected_bytes) {
      new_bytes = std::max(
          0, static_cast<int32_t>(old_bytes - (actual_bytes - expected_bytes)));
    } else if (actual_bytes < expected_bytes) {
      new_bytes = std::min(
          static_cast<int32_t>(max_size),
          static_cast<int32_t>(old_bytes + (expected_bytes - actual_bytes)));
    } else {
      break;
    }
    *it = new_bytes;
    actual_bytes = actual_bytes - old_bytes + new_bytes;
  }

  CHECK_EQ(actual_bytes, expected_bytes);

  std::shuffle(size_bytes.begin(), size_bytes.end(), GetRNG());
  return size_bytes;
}

// For memcmp/bcmp, mismatch_pos indicates the position of the first mismatch
// char between src and dst. The value of mismatch_pos indicates:
//  0 : Buffers always compare equal,
// >0 : Buffers compare different at 'byte = mismatch_pos - 1'.
// The function returns a mismatch_pos vector with the same size as size_bytes
// that contains a suitable mismatch_pos for each element of size_bytes.
std::vector<int32_t> SampleMismatchPosition(
    const std::vector<int32_t> &size_bytes) {
  std::vector<int32_t> mismatch_positions;
  for (int32_t cur_size : size_bytes) {
    int32_t mismatch_position = 0;
    bool is_identical = absl::Bernoulli(GetRNG(), kComparisonEqualProbability);
    if (!is_identical) {
      // +1 is to make up the missing '0' used earlier to indicate equal
      // buffers. That is, if mismatch_pos = 1, the mismatch is at index
      // 0.
      mismatch_position = absl::Uniform<int32_t>(GetRNG(), 0, cur_size);
      mismatch_position += 1;
    }
    mismatch_positions.push_back(mismatch_position);
  }
  return mismatch_positions;
}

// Finds the least-recently-used block that satisfies the given constraints
// (i.e., that is far enough away from the left and right end of the buffer).
// Moves all blocks that are accessed by a mem operation of the given size to
// the end of the lru list (in random order).
static int32_t GetNextOffset(std::deque<int32_t> &blocks_lru,
                             int32_t size_bytes, int32_t block_offset,
                             int32_t buffer_size, int32_t left_margin = 0,
                             int32_t right_margin = 0) {
  int32_t block;
  for (int32_t cur_block : blocks_lru) {
    if (cur_block >= left_margin &&
        cur_block + block_offset + size_bytes + right_margin <= buffer_size) {
      block = cur_block;
      break;
    }
  }
  if (block == blocks_lru.front()) {
    // Common case, as size_bytes is typically small.
    blocks_lru.pop_front();
    blocks_lru.push_back(block);
  } else {
    // Expensive operation, but occurs relatively rarely.
    std::vector<int32_t> accessed_blocks;
    auto next = std::remove_if(
        blocks_lru.begin(), blocks_lru.end(),
        [block, block_offset, size_bytes, &accessed_blocks](int32_t b) {
          if (b >= block && b < block + block_offset + size_bytes) {
            accessed_blocks.push_back(b);
            return true;
          } else {
            return false;
          }
        });
    std::shuffle(accessed_blocks.begin(), accessed_blocks.end(), GetRNG());
    std::copy(accessed_blocks.begin(), accessed_blocks.end(), next);
  }
  CHECK_LE(block + block_offset + size_bytes, buffer_size);
  return block + block_offset;
}

static bool CheckOverlap(int32_t src_offset, int32_t dst_offset,
                         int32_t size_bytes) {
  return (src_offset + size_bytes > dst_offset &&
          src_offset < dst_offset + size_bytes);
}

std::pair<int32_t, int32_t> GetNextSrcDstOffsetWithOverlap(
    const double overlap_probability, const size_t buffer_size,
    const int32_t cur_size, const int32_t src_block_offset,
    const int32_t dst_block_offset, std::deque<int32_t> &src_blocks_lru,
    std::deque<int32_t> &dst_blocks_lru) {
  // The memmove and compare functions allow the src and dst buffers to
  // overlap. To reproduce this behavior, we will use the same buffer
  // for src and dst. We want to exercise three configurations:
  //    1. src and dst overlap, dst < src
  //    2. src and dst overlap, dst >= src
  //    3. src and dst do not overlap
  const bool does_overlap = absl::Bernoulli(GetRNG(), overlap_probability);
  if (does_overlap) {
    // src and dst overlap, i.e., we are in case 1 or 2.
    // We sample an offset from the range (-size_bytes, size_bytes),
    // and set dst = src + offset. Thus, an offset < 0 corresponds to
    // case 1 above, and 0 <= offset < size_bytes to case 2.
    int32_t offset = absl::Uniform<int32_t>(absl::IntervalOpenOpen, GetRNG(),
                                            -cur_size, cur_size);
    int32_t src_offset =
        GetNextOffset(src_blocks_lru, cur_size, src_block_offset, buffer_size,
                      -std::min(offset, 0), std::max(offset, 0));
    CHECK_GE(src_offset + offset, 0);
    CHECK_LE(src_offset + offset + cur_size, buffer_size);
    return {src_offset, src_offset + offset};
  } else {
    int32_t src_offset =
        GetNextOffset(src_blocks_lru, cur_size, src_block_offset, buffer_size);
    int32_t dst_offset;
    do {
      dst_offset = GetNextOffset(dst_blocks_lru, cur_size, dst_block_offset,
                                 buffer_size);
    } while (CheckOverlap(src_offset, dst_offset, cur_size));
    return {src_offset, dst_offset};
  }
}

static void BM_Memory(
    benchmark::State &state,
    const absl::btree_map<int, double> &memory_size_distribution,
    const double overlap_probability,
    const absl::btree_map<int, double> &alignment_distribution,
    size_t buffer_count,
    void (*memory_call)(benchmark::State &, const BM_Mem_Parameters &,
                        const size_t),
    const size_t cache_size, const std::string &distribution_name) {
  // Max buffer size that can be stored in current cache.
  const size_t buffer_size = cache_size / buffer_count;

  size_t distribution_max_size = memory_size_distribution.rbegin()->first;
  // Limit to sizes that fit in the buffer.
  size_t max_size = std::min(distribution_max_size, buffer_size / 2);
  if (memory_call == &MemmoveFunction || memory_call == &CmpFunction<memcmp> ||
      memory_call == &CmpFunction<bcmp>) {
    // Memmove and memcmp/bcmp need larger buffers to allow for differents kinds
    // of overlap between src and dst. In particular, a maximum size of
    // `(buffer_size / 3) - kCacheLineSize` guarantees that for any valid
    // (src_block, src_block_offset, dst_block_offset) triple, we can find
    // a dst_block such that there is no overlap.
    max_size =
        std::min(distribution_max_size, (buffer_size / 3) - kCacheLineSize);
  }

  // The branching behavior of the mem functions depends on the input sizes, and
  // for memcmp/bcmp, on the mismatch positions. For a pattern that is repeated
  // with a small enough period (e.g., 1,000), the branch predictors on modern
  // CPU can predict almost all branches correctly. On the other hand, larger
  // periods (e.g., 10,000) lead to a high branch miss rate.
  // In the fleet, both scenarios (branch hits and misses) are relevant; cases
  // that can be predicted well are more common than those that cannot. The
  // following is a very rough approximation of the fleet behavior. A better
  // model would require more detailed data on the patterns that occur in the
  // fleet.
  const float kPredictableProbability = 0.8;
  const size_t kPredictablePeriod = 1000;
  const size_t kNonPredictablePeriod = 10000;

  std::vector<int32_t> size_bytes_predictable =
      SampleSizeBytes(memory_size_distribution, max_size, kPredictablePeriod);
  std::vector<int32_t> size_bytes_non_predictable = SampleSizeBytes(
      memory_size_distribution, max_size, kNonPredictablePeriod);
  std::vector<int32_t> mismatch_pos_predictable =
      SampleMismatchPosition(size_bytes_predictable);
  std::vector<int32_t> mismatch_pos_non_predictable =
      SampleMismatchPosition(size_bytes_non_predictable);

  std::vector<int32_t> size_bytes = size_bytes_non_predictable;
  std::vector<int32_t> mismatch_pos = mismatch_pos_non_predictable;

  size_t kPredictableCount =
      kNonPredictablePeriod / (1 - kPredictableProbability) -
      kNonPredictablePeriod;
  for (int i = 0; i < kPredictableCount / kPredictablePeriod; i++) {
    absl::c_copy(size_bytes_predictable, std::back_inserter(size_bytes));
    absl::c_copy(mismatch_pos_predictable, std::back_inserter(mismatch_pos));
  }

  // alignment_probabilities[i] stores the probability for an alignment of 2^i
  std::vector<double> alignment_probabilities;
  int max_alignment = alignment_distribution.rbegin()->first;
  CHECK_LE(max_alignment, kCacheLineSize)
      << "Maximum alignment larger than expected";
  for (int i = 1; i <= max_alignment; i *= 2) {
    auto it = alignment_distribution.find(i);
    alignment_probabilities.push_back(
        (it != alignment_distribution.end() ? it->second : 0.0));
  }
  std::discrete_distribution<int> alignment_sampler(
      alignment_probabilities.begin(), alignment_probabilities.end());

  // A list of the starting addresses of all blocks in the buffer that
  // correspond to a cache line.
  std::deque<int32_t> all_blocks;
  for (int32_t i = 0; i < buffer_size; i += kCacheLineSize) {
    all_blocks.push_back(i);
  }

  // For src and dst, we maintain a list of all blocks in least-recently-used
  // order. The goal is to avoid unwanted cache hits by only accessing a block
  // again after all other blocks have been accessed.
  std::deque<int32_t> src_blocks_lru = all_blocks;
  std::deque<int32_t> dst_blocks_lru = all_blocks;
  std::shuffle(src_blocks_lru.begin(), src_blocks_lru.end(), GetRNG());
  std::shuffle(dst_blocks_lru.begin(), dst_blocks_lru.end(), GetRNG());

  BM_Mem_Parameters parameters;
  for (int i = 0; i < std::max(all_blocks.size(), size_bytes.size()); i++) {
    int32_t cur_size = size_bytes[i % size_bytes.size()];
    parameters.size_bytes.push_back(cur_size);

    int src_alignment = alignment_sampler(GetRNG());
    int dst_alignment = alignment_sampler(GetRNG());
    int32_t src_block_offset =
        (absl::Uniform<int32_t>(GetRNG(), 0, kCacheLineSize - 1) >>
         src_alignment)
        << src_alignment;
    int32_t dst_block_offset =
        (absl::Uniform<int32_t>(GetRNG(), 0, kCacheLineSize - 1) >>
         dst_alignment)
        << dst_alignment;

    if (memory_call == &MemcpyFunction) {
      parameters.src_offset.push_back(GetNextOffset(
          src_blocks_lru, cur_size, src_block_offset, buffer_size));
      parameters.dst_offset.push_back(GetNextOffset(
          dst_blocks_lru, cur_size, dst_block_offset, buffer_size));
    } else if (memory_call == &MemsetFunction) {
      parameters.dst_offset.push_back(GetNextOffset(
          dst_blocks_lru, cur_size, dst_block_offset, buffer_size));
      parameters.memset_value.push_back(
          absl::Uniform<unsigned char>(GetRNG(), 0, 0xFF));
    } else if (memory_call == &MemmoveFunction ||
               memory_call == &CmpFunction<memcmp> ||
               memory_call == &CmpFunction<bcmp>) {
      const auto [src_offset, dst_offset] = GetNextSrcDstOffsetWithOverlap(
          overlap_probability, buffer_size, cur_size, src_block_offset,
          dst_block_offset, src_blocks_lru, dst_blocks_lru);
      parameters.src_offset.push_back(src_offset);
      parameters.dst_offset.push_back(dst_offset);

      if (memory_call == &CmpFunction<memcmp> ||
          memory_call == &CmpFunction<bcmp>) {
        parameters.mismatch_pos.push_back(
            mismatch_pos[i % mismatch_pos.size()]);
      }
    }
  }

  CHECK_EQ(parameters.size_bytes.size(), parameters.dst_offset.size());
  if (memory_call == &MemsetFunction) {
    CHECK_EQ(parameters.size_bytes.size(), parameters.memset_value.size());
  } else {
    CHECK_EQ(parameters.size_bytes.size(), parameters.src_offset.size());
  }
  if (memory_call == &CmpFunction<memcmp> ||
      memory_call == &CmpFunction<bcmp>) {
    CHECK_EQ(parameters.size_bytes.size(), parameters.mismatch_pos.size());
  }

  memory_call(state, parameters, buffer_size);

  // Make each benchmark repetition reproducible, if using a fixed seed.
  Random::instance().Reset();

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
                 void (*)(benchmark::State &, const BM_Mem_Parameters &,
                          const size_t)>;
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

      const auto [memory_size_distribution, overlap_probability,
                  alignment_distribution] = ReadMemDistributionFile(file);
      for (const auto &[cache_name, cache_size] : cache_resident_info) {
        std::string benchmark_name =
            absl::StrCat("BM_LIBC_", distribution_name, "_", cache_name);
        benchmark::RegisterBenchmark(
            benchmark_name.c_str(), memory_benchmark, memory_size_distribution,
            overlap_probability, alignment_distribution, buffer_counter,
            memory_function, cache_size, suffix_name);
      }
    }
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
    DynamicRegistrar::Get()->AddDefaultFilter("BM_LIBC_Bcmp_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_LIBC_Memcmp_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_LIBC_Memcpy_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_LIBC_Memmove_Fleet_L1");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_LIBC_Memset_Fleet_L1");
  }
};

BenchmarkRegisterer br;

}  // namespace libc
}  // namespace fleetbench
