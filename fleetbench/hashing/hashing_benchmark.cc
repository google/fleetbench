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
#include <filesystem>  // NOLINT
#include <iterator>
#include <numeric>
#include <random>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "absl/container/btree_map.h"
#include "absl/crc/crc32c.h"
#include "absl/hash/hash.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/dynamic_registrar.h"

namespace fleetbench {
namespace hashing {

using CacheInfo = benchmark::CPUInfo::CacheInfo;

struct BM_Hashing_Parameters {
  std::vector<int> str_lengths;
  absl::string_view sv;
  bool hot;
};

void ExtendCrc32cFunction(benchmark::State &state,
                          BM_Hashing_Parameters &parameters) {
  size_t batch_size = std::accumulate(parameters.str_lengths.begin(),
                                      parameters.str_lengths.end(), 0);
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
                           BM_Hashing_Parameters &parameters) {
  size_t batch_size = std::accumulate(parameters.str_lengths.begin(),
                                      parameters.str_lengths.end(), 0);
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
                               BM_Hashing_Parameters &parameters) {
  size_t batch_size = std::accumulate(parameters.str_lengths.begin(),
                                      parameters.str_lengths.end(), 0);
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
  return GetMatchingFiles(GetFleetbenchRuntimePath("hashing/distributions"),
                          prefix);
}

static std::vector<int> SampleStringLengths(
    const absl::btree_map<int, double> &hashing_size_distribution,
    size_t n_samples) {
  // Convert prod size distribution to a discrete distribution.
  std::vector<int> sizes;
  std::vector<double> percentages;
  for (auto const &[size, percentage] : hashing_size_distribution) {
    sizes.push_back(size);
    percentages.push_back(percentage);
  }
  std::discrete_distribution<> sampler(percentages.begin(), percentages.end());

  std::vector<int> samples(n_samples);
  for (int &sample : samples) {
    // sizes are sampled from the collected prod distribution.
    sample = sizes[sampler(GetRNG())];
  }

  return samples;
}

static void BM_Hashing(
    benchmark::State &state,
    const absl::btree_map<int, double> &hashing_size_distribution,
    void (*hashing_call)(benchmark::State &, BM_Hashing_Parameters &), bool hot,
    const std::string &distribution_name) {
  const size_t batch_size = 1000;
  std::vector<int> str_lengths =
      SampleStringLengths(hashing_size_distribution, batch_size);

  int str_size =
      *std::max_element(std::begin(str_lengths), std::end(str_lengths));
  if (!hot) {
    // For the 'cold' case, we create a string that doesn't fit in the L3 cache.
    str_size = std::max(2 * GetCacheSize(3), str_size);
  }

  // We expect that the execution time of the hashing function only depends on
  // the input size, but not on the input value. Thus, it is sufficient to pick
  // one arbitrary string of the right size as the input.
  std::string full_str(str_size, 'x');
  absl::string_view full_sv{full_str};

  BM_Hashing_Parameters parameters{str_lengths, full_sv, hot};
  hashing_call(state, parameters);

  // Make each benchmark repetition reproducible, if using a fixed seed.
  Random::instance().Reset();

  // Each iteration processes one byte of data.
  const size_t total_bytes = state.iterations();
  state.SetBytesProcessed(total_bytes);
  state.counters["bytes_per_cycle"] = benchmark::Counter(
      total_bytes / benchmark::CPUInfo::Get().cycles_per_second,
      benchmark::Counter::kIsRate);
  if (!distribution_name.empty()) state.SetLabel(distribution_name);
}

void RegisterBenchmarks() {
  using operation_entry =
      std::tuple<std::string, std::string,
                 void (*)(benchmark::State &, BM_Hashing_Parameters &)>;
  auto hash_operations = {
      operation_entry("ExtendCrc32c", "Extendcrc32cinternal",
                      &ExtendCrc32cFunction),
      operation_entry("ComputeCrc32c", "Computecrc32c", &ComputeCrc32cFunction),
      operation_entry("combine_contiguous", "Combine_contiguous",
                      &CombineContiguousFunction),
  };
  auto cache_resident_info = {
      std::make_pair("hot", true),
      std::make_pair("cold", false),
  };

  for (const auto &[function_name, distribution_file_prefix, hash_function] :
       hash_operations) {
    std::string suffix_name = "";
    const auto files = GetDistributionFiles(distribution_file_prefix);
    for (const auto &file : files) {
      auto application = file.filename().string();
      application.erase(application.find(".csv"));

      const absl::btree_map<int, double> hashing_size_distribution =
          ReadDistributionFile(file);

      for (const auto &[hot_str, hot] : cache_resident_info) {
        std::string benchmark_name =
            absl::StrCat("BM_HASHING_", application, "_", hot_str);
        benchmark::RegisterBenchmark(benchmark_name.c_str(), BM_Hashing,
                                     hashing_size_distribution, hash_function,
                                     hot, suffix_name);
      }
    }
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);

    // We use the fleet-wide distributions as the defaults.
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_HASHING_Extendcrc32cinternal_Fleet_hot");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_HASHING_Computecrc32c_Fleet_hot");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_HASHING_Combine_contiguous_Fleet_hot");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_HASHING_Extendcrc32cinternal_Fleet_cold");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_HASHING_Computecrc32c_Fleet_cold");
    DynamicRegistrar::Get()->AddDefaultFilter(
        "BM_HASHING_Combine_contiguous_Fleet_cold");
  }
};

BenchmarkRegisterer br;

}  // namespace hashing
}  // namespace fleetbench
