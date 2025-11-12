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
#ifndef THIRD_PARTY_FLEETBENCH_COMMON_COMMON_H_
#define THIRD_PARTY_FLEETBENCH_COMMON_COMMON_H_

#include <filesystem>  // NOLINT
#include <memory>
#include <optional>
#include <random>
#include <string>
#include <vector>

#include "absl/container/btree_map.h"
#include "absl/flags/declare.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"

// Exposed for testing only.
ABSL_DECLARE_FLAG(bool, fixed_seed);
ABSL_DECLARE_FLAG(std::optional<int>, seed);

namespace fleetbench {

// Wrapper around a random number generator.
// If --fixed_seed is true (the default), the seed will be set to the provided
// value for better reproducibility. Otherwise, the seed is set to random
// values.
class Random {
 public:
  static Random& instance();
  std::default_random_engine& rng() { return rng_; }
  void Reset();

 private:
  explicit Random(bool fixed_seed, int seed);

  const bool fixed_seed_;
  const int seed_;
  std::default_random_engine rng_;
};

inline std::default_random_engine& GetRNG() { return Random::instance().rng(); }

// Returns a sorted list of the files in directory 'dir' whose filenames start
// with 'prefix'.
std::vector<std::filesystem::path> GetMatchingFiles(absl::string_view dir,
                                                    absl::string_view prefix);

// Reads a CSV file that contains a distribution. Such a file has a single line;
// the columns are of the form "k:v", where v denotes the relative frequency
// with which input k occurs.
absl::btree_map<int, double> ReadDistributionFile(std::filesystem::path file);

struct MemDistributionData {
  // The size and alignment distributions are stored in sorted maps. The keys
  // are the size/the alignment in bytes, and the values are the relative
  // frequencies.
  absl::btree_map<int, double> size_distribution;
  double overlap_probability;
  absl::btree_map<int, double> alignment_distribution;
};

// Similar to ReadDistributionFile(), but for a CSV file that additionally
// contains the overlap probability in a second line, and the alignment
// distribution in a third line.
MemDistributionData ReadMemDistributionFile(std::filesystem::path file);

// Similar to ReadDistributionFile, except this function accepts file that has
// multiple lines. Each line converts to a vector of string, separated by the
// delimiter.
std::vector<std::vector<std::string>> ReadCsv(std::filesystem::path file,
                                              char delimiter = ',');

// Converts a line in the result of ReadCsv (i.e., a vector of strings) to a
// map. Causes a failed CHECK if a string cannot be converted to the
// corresponding numerical type.
absl::btree_map<int, double> ConvertLine(const std::vector<std::string>& line);

// Returns the runtime path of a runfile in the fleetbench directory.
std::string GetFleetbenchRuntimePath(absl::string_view path);

int GetCacheSize(int cache_level, absl::string_view cache_type = "");

// A BenchmarkReporter adapter that removes the iteration count from the
// benchmark name.
// By default, the benchmark framework creates a benchmark name that contains
// `/iterations:x` if the iteration count is specified by calling
// `->Iterations(x)` on the benchmark object, but not if it is determined
// automatically, or specified by the `--benchmark_min_time` flag.
class FleetbenchReporter : public benchmark::BenchmarkReporter {
 public:
  explicit FleetbenchReporter(benchmark::BenchmarkReporter* reporter)
      : reporter_(reporter) {}

  void ReportRuns(
      const std::vector<benchmark::BenchmarkReporter::Run>& runs) override {
    std::vector<benchmark::BenchmarkReporter::Run> runs_copy(runs);
    for (auto& run : runs_copy) {
      run.run_name.iterations = "";
    }
    reporter_->ReportRuns(runs_copy);
  }

  void ReportRunsConfig(double min_time, bool has_explicit_iters,
                        benchmark::IterationCount iters) override {
    reporter_->ReportRunsConfig(min_time, has_explicit_iters, iters);
  }

  bool ReportContext(const benchmark::BenchmarkReporter::Context&) override;

  void Finalize() override { reporter_->Finalize(); }

 private:
  benchmark::BenchmarkReporter* const reporter_;
};

// Returns a file reporter that corresponds to the reporter that
// benchmark::RunSpecifiedBenchmarks creates when the file_reporter parameter
// is not set.
std::unique_ptr<benchmark::BenchmarkReporter> CreateDefaultFileReporter();

// Check if any command line argument starts with `s`.
bool FindInCommandLine(absl::string_view s, bool exact_match = false);

// Returns whether explicit iteration counts can be used when registering
// benchmarks. This is the case if the `--benchmark_min_time` flag and the
// `--benchmark_list_tests` flag are not set. `--benchmark_list_tests` is
// excluded here because it does not use our custom `FleetbenchReporter` (see
// `benchmark_main.cc`), and thus, the printed benchmark names would contain
// `/iterations:x` when explicit iteration counts are used.
bool UseExplicitIterationCounts();

// Adds the effective cache sizes to the benchmark context if the cache sizes
// are specified by the corresponding flags.
void AddEffectiveCacheSizeToContextIfSpecified();

}  // namespace fleetbench
#endif  // THIRD_PARTY_FLEETBENCH_COMMON_COMMON_H_
