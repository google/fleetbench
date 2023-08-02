// Copyright 2023 The Fleetbench Authors
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
#include <cstring>
#include <filesystem>
#include <iterator>
#include <random>
#include <string>
#include <vector>

#include "absl/crc/crc32c.h"
#include "absl/hash/hash.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/dynamic_registrar.h"

namespace fleetbench {
namespace hashing {

using CacheInfo = benchmark::CPUInfo::CacheInfo;

struct BM_Crc_Parameters {
  std::vector<int> str_lengths;
  absl::string_view sv;
  bool hot;
};

void ExtendCrc32cFunction(benchmark::State &state,
                          BM_Crc_Parameters &parameters) {
  size_t batch_size = parameters.str_lengths.size();
  absl::crc32c_t v0{0};
  size_t start = 0;
  // Run benchmark and call ExtendCrc32c
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &l : parameters.str_lengths) {
      benchmark::DoNotOptimize(v0);
      if (!parameters.hot) {
        if (start + l >= parameters.sv.length()) {
          start = 0;
        }
      }
      absl::string_view buf = parameters.sv.substr(start, l);
      if (!parameters.hot) {
        // +4096 to put the next element in a different cache block, and to
        // prevent prefetching
        start += l + 4096;
      }
      // The callregz data we use is actually for ExtendCrc32cInternal.
      // However, as this function is in an 'internal' namespace, we benchmark
      // ExtendCrc32c instead. ExtendCrc32c passes inputs with size > 64 to
      // ExtendCrc32cInternal. ExtendCrc32c is also currently the only function
      // in the codebase that calls ExtendCrc32cInternal; thus, the callregz
      // data for ExtendCrc32cInternal does not contain inputs with size <= 64.
      auto res = absl::ExtendCrc32c(v0, buf);
      benchmark::DoNotOptimize(res);
    }
  }
}

void ComputeCrc32cFunction(benchmark::State &state,
                           BM_Crc_Parameters &parameters) {
  size_t batch_size = parameters.str_lengths.size();
  size_t start = 0;
  // Run benchmark and call ComputeCrc32c
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &l : parameters.str_lengths) {
      if (!parameters.hot) {
        if (start + l >= parameters.sv.length()) {
          start = 0;
        }
      }
      absl::string_view buf = parameters.sv.substr(start, l);
      if (!parameters.hot) {
        // +4096 to put the next element in a different cache block, and to
        // prevent prefetching
        start += l + 4096;
      }
      auto res = absl::ComputeCrc32c(buf);
      benchmark::DoNotOptimize(res);
    }
  }
}

void CombineContiguousFunction(benchmark::State &state,
                               BM_Crc_Parameters &parameters) {
  size_t batch_size = parameters.str_lengths.size();
  size_t start = 0;
  // Run benchmark and call combine_contiguous
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &l : parameters.str_lengths) {
      if (!parameters.hot) {
        if (start + l >= parameters.sv.length()) {
          start = 0;
        }
      }
      absl::string_view buf = parameters.sv.substr(start, l);
      if (!parameters.hot) {
        // +4096 to put the next element in a different cache block, and to
        // prevent prefetching
        start += l + 4096;
      }
      // The callregz data we use is for combine_contiguous(). However, as this
      // function is in an 'internal' namespace, we benchmark
      // Hash<absl::string_view>() instead. Note that Hash<absl::string_view>()
      // actually calls combine_contiguous() twice, the first time to hash the
      // string content itself, and the second time to hash the length of the
      // string, i.e., an element of size 8 (=sizeof(size(t))). However, this
      // second call does not lead to an overrepresentation of calls to
      // combine_contiguous() with size 8 here, as the corresponding calls
      // appear to be missing from the callregz data (potentially because of
      // inlining). So including these calls here should actually make the
      // distribution of call sizes to combine_contiguous() more similar to that
      // of the fleet, where a significant percentage of absl::Hash cycles is
      // spent on hashing strings.
      auto res = absl::Hash<absl::string_view>{}(buf);
      benchmark::DoNotOptimize(res);
    }
  }
}

// Returns a sorted list of the files for the distributions whose filenames
// start with 'prefix'.
static std::vector<std::filesystem::path> GetDistributionFiles(
    absl::string_view prefix) {
  auto p = std::filesystem::path(__FILE__).replace_filename("distributions");
  return GetMatchingFiles(p, prefix);
}

static int GetL3CacheSize() {
  for (const CacheInfo &ci : benchmark::CPUInfo::Get().caches) {
    if (ci.level == 3) {
      return ci.size;
    }
  }
  return -1;
}

static void BM_Hashing(
    benchmark::State &state, absl::string_view distribution_file_prefix,
    void (*hashing_call)(benchmark::State &, BM_Crc_Parameters &), bool hot) {
  const size_t batch_size = 1000;

  // Gets prod hashing size distribution and the name.
  const auto &files = GetDistributionFiles(distribution_file_prefix);
  const auto &file = files[state.range(0)];
  const auto &distribution_name = file.filename().string();
  const std::vector<double> hashing_size_distribution =
      ReadDistributionFile(file);

  // Convert prod size distribution to a discrete distribution.
  std::discrete_distribution<> size_bytes_sampler(
      hashing_size_distribution.begin(), hashing_size_distribution.end());

  // Pre-calculates parameter values.
  std::vector<int> str_lengths(batch_size);
  for (auto &l : str_lengths) {
    // Size_bytes is sampled from the collected prod distribution.
    l = size_bytes_sampler(GetRNG());
  }

  int str_size =
      *std::max_element(std::begin(str_lengths), std::end(str_lengths));
  if (!hot) {
    // For the 'cold' case, we create a string that doesn't fit in the L3 cache.
    str_size = std::max(2 * GetL3CacheSize(), str_size);
  }

  // We expect that the execution time of the hashing function only depends on
  // the input size, but not on the input value. Thus, it is sufficient to pick
  // one arbitrary string of the right size as the input.
  std::string full_str(str_size, 'x');
  absl::string_view full_sv{full_str};

  BM_Crc_Parameters parameters{str_lengths, full_sv, hot};
  hashing_call(state, parameters);

  // Computes the total_bytes throughput.
  size_t batch_bytes = 0;
  for (auto &p : str_lengths) {
    batch_bytes += p;
  }

  const size_t total_bytes = (state.iterations() * batch_bytes) / batch_size;
  state.SetLabel(distribution_name);

  state.SetBytesProcessed(total_bytes);
  state.counters["bytes_per_cycle"] = benchmark::Counter(
      total_bytes / benchmark::CPUInfo::Get().cycles_per_second,
      benchmark::Counter::kIsRate);
}

BENCHMARK_CAPTURE(BM_Hashing, ExtendCrc32c_hot, "Extendcrc32cinternal",
                  &ExtendCrc32cFunction, true)
    ->DenseRange(0, GetDistributionFiles("Extendcrc32cinternal").size() - 1, 1);

BENCHMARK_CAPTURE(BM_Hashing, ComputeCrc32c_hot, "Computecrc32c",
                  &ComputeCrc32cFunction, true)
    ->DenseRange(0, GetDistributionFiles("Computecrc32c").size() - 1, 1);

BENCHMARK_CAPTURE(BM_Hashing, combine_contiguous_hot, "Combine_contiguous",
                  &CombineContiguousFunction, true)
    ->DenseRange(0, GetDistributionFiles("Combine_contiguous").size() - 1, 1);

BENCHMARK_CAPTURE(BM_Hashing, ExtendCrc32c_cold, "Extendcrc32cinternal",
                  &ExtendCrc32cFunction, false)
    ->DenseRange(0, GetDistributionFiles("Extendcrc32cinternal").size() - 1, 1);

BENCHMARK_CAPTURE(BM_Hashing, ComputeCrc32c_cold, "Computecrc32c",
                  &ComputeCrc32cFunction, false)
    ->DenseRange(0, GetDistributionFiles("Computecrc32c").size() - 1, 1);

BENCHMARK_CAPTURE(BM_Hashing, combine_contiguous_cold, "Combine_contiguous",
                  &CombineContiguousFunction, false)
    ->DenseRange(0, GetDistributionFiles("Combine_contiguous").size() - 1, 1);

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    // We use the fleet-wide distributions as the defaults.
    // TODO(aabel): register benchmarks dynamically so that we can have "Fleet"
    // in the name and use ".*Fleet.*" as the filter here instead of hard-coded
    // numbers
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Hashing/ExtendCrc32c_hot/4");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Hashing/ComputeCrc32c_hot/4");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_Hashing/combine_contiguous_hot/2");
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Hashing/ExtendCrc32c_cold/4");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_Hashing/ComputeCrc32c_cold/4");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_Hashing/combine_contiguous_cold/2");
  }
};

BenchmarkRegisterer br;

}  // namespace hashing
}  // namespace fleetbench
