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
#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <random>
#include <string>
#include <vector>

#include "absl/crc/crc32c.h"
#include "absl/strings/match.h"
#include "absl/strings/numbers.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"

namespace fleetbench {
namespace hashing {

// KibiByte. 1kKiB = 1024 bytes
static constexpr int64_t kKiB = 1024;

// Reserved space for precomputed parameters for hashing operations.
static constexpr int64_t kPrecomputeParametersBytes = 4 * kKiB;

void ExtendCrc32cFunction(benchmark::State &state,
                          std::vector<absl::string_view> &parameters) {
  size_t batch_size = parameters.size();
  absl::crc32c_t v0{0};
  // Run benchmark and call ExtendCrc32c
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      benchmark::DoNotOptimize(v0);
      // The callregz data we use is actually for ExtendCrc32cInternal.
      // However, as this function is in an 'internal' namespace, we benchmark
      // ExtendCrc32c instead. ExtendCrc32c passes inputs with size > 64 to
      // ExtendCrc32cInternal. ExtendCrc32c is also currently the only function
      // in the codebase that calls ExtendCrc32cInternal; thus, the callregz
      // data for ExtendCrc32cInternal does not contain inputs with size <= 64.
      auto res = absl::ExtendCrc32c(v0, p);
      benchmark::DoNotOptimize(res);
    }
  }
}

void ComputeCrc32cFunction(benchmark::State &state,
                           std::vector<absl::string_view> &parameters) {
  size_t batch_size = parameters.size();
  // Run benchmark and call ComputeCrc32c
  while (state.KeepRunningBatch(batch_size)) {
    for (auto &p : parameters) {
      auto res = absl::ComputeCrc32c(p);
      benchmark::DoNotOptimize(res);
    }
  }
}

// Returns a sorted list of the files in directory 'dir' whose filenames start
// with 'prefix'.
static std::vector<std::filesystem::path> GetMatchingFiles(
    std::filesystem::path &dir, absl::string_view prefix) {
  std::vector<std::filesystem::path> files;
  for (const auto &entry : std::filesystem::directory_iterator(dir)) {
    if (absl::StartsWith(entry.path().filename().string(), prefix)) {
      files.push_back(entry.path());
    }
  }
  std::sort(files.begin(), files.end());
  return files;
}

// Returns a sorted list of the files for the distributions whose filenames
// start with 'prefix'.
static std::vector<std::filesystem::path> GetDistributionFiles(
    absl::string_view prefix) {
  auto p = std::filesystem::path(__FILE__).replace_filename("distributions");
  return GetMatchingFiles(p, prefix);
}

// Reads a CSV file that contains a distribution. Such a file has a single line;
// the columns represent the relative frequency with which the corresponding
// input occurs. The function returns a vector whose entries correspond to the
// columns in the CSV file.
static std::vector<double> ReadDistributionFile(std::filesystem::path file) {
  std::vector<double> distribution;
  std::string column;
  std::fstream f(file, std::ios_base::in);
  while (std::getline(f, column, ',')) {
    double d = 0.0;
    if (!absl::SimpleAtod(column, &d)) {
      std::cerr << "Invalid column: " << column << "\n";
    }
    distribution.push_back(d);
  }
  return distribution;
}

static void BM_Hashing(benchmark::State &state,
                       absl::string_view distribution_file_prefix,
                       void (*hashing_call)(benchmark::State &,
                                            std::vector<absl::string_view> &)) {
  // Number of parameters that allows all can be resident in L1.
  const size_t batch_size =
      kPrecomputeParametersBytes / sizeof(absl::string_view);

  // Pre-calculates parameter values.
  std::vector<absl::string_view> parameters(batch_size);

  // Gets prod hashing size distribution and the name.
  const auto &files = GetDistributionFiles(distribution_file_prefix);
  const auto &file = files[state.range(0)];
  const auto &distribution_name = file.filename().string();
  const std::vector<double> hashing_size_distribution =
      ReadDistributionFile(file);

  // Convert prod size distribution to a discrete distribution.
  std::discrete_distribution<> size_bytes_sampler(
      hashing_size_distribution.begin(), hashing_size_distribution.end());

  // We expect that the execution time of the hashing function only depends on
  // the input size, but not on the input value. Thus, it is sufficient to pick
  // one arbitrary string of the right size as the input.
  std::string full_str(hashing_size_distribution.size() - 1, 'x');
  absl::string_view full_sv{full_str};

  for (auto &p : parameters) {
    // Size_bytes is sampled from the collected prod distribution.
    p = full_sv.substr(0, size_bytes_sampler(GetRNG()));
  }

  hashing_call(state, parameters);

  // Computes the total_bytes throughput.
  size_t batch_bytes = 0;
  for (auto &p : parameters) {
    batch_bytes += p.length();
  }

  const size_t total_bytes = (state.iterations() * batch_bytes) / batch_size;
  state.SetLabel(distribution_name);

  state.SetBytesProcessed(total_bytes);
  state.counters["bytes_per_cycle"] = benchmark::Counter(
      total_bytes / benchmark::CPUInfo::Get().cycles_per_second,
      benchmark::Counter::kIsRate);
}

BENCHMARK_CAPTURE(BM_Hashing, ExtendCrc32c, "Extendcrc32cinternal",
                  &ExtendCrc32cFunction)
    ->DenseRange(0, GetDistributionFiles("Extendcrc32cinternal").size() - 1, 1);

BENCHMARK_CAPTURE(BM_Hashing, ComputeCrc32c, "Computecrc32c",
                  &ComputeCrc32cFunction)
    ->DenseRange(0, GetDistributionFiles("Computecrc32c").size() - 1, 1);

}  // namespace hashing
}  // namespace fleetbench
