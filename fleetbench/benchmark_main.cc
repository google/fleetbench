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

#include <stdlib.h>

#include <cstdint>
#include <filesystem>
#include <fstream>
#include <memory>
#include <string>
#include <thread>
#include <vector>

#include "absl/base/log_severity.h"
#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "absl/log/check.h"
#include "absl/log/globals.h"
#include "absl/log/initialize.h"
#include "absl/log/log.h"
#include "absl/strings/match.h"
#include "absl/strings/str_split.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/dynamic_registrar.h"
#include "numa.h"
#include "tcmalloc/malloc_extension.h"

ABSL_FLAG(bool, prevent_numa_migrations, true,
          "Prevent migrations to other NUMA nodes to reduce variance. Sets the "
          "CPU affinity to the intersection of the affinity at the start of the"
          " benchmark and the CPUs in the current NUMA node at the start of the"
          " benchmark, and limits memory allocations to this NUMA node.");

void CheckMemoryLimit() {
  // Try to detect memory limit via cgroup and warn if the limit is too low.
  // This may provide a clue to the user about a potential OOM death.
  const std::filesystem::path cgroup_path = "/proc/self/cgroup";
  std::ifstream cgroup_file(cgroup_path);
  std::filesystem::path memory_cgroup;
  for (std::string line; std::getline(cgroup_file, line);) {
    if (!absl::StrContains(line, "memory")) {
      continue;
    }
    std::vector<absl::string_view> fields = absl::StrSplit(line, ':');
    if (fields.size() > 1) {
      memory_cgroup = fields.back();
      LOG(INFO) << "mem cgroup is " << memory_cgroup;
    }
  }
  cgroup_file.close();
  if (memory_cgroup.empty()) {
    LOG(INFO) << "Did not find memory cgroup";
    return;
  }
  std::filesystem::path cgroup_root("/sys/fs/cgroup");
  std::filesystem::path memory_limit_path = cgroup_root;
  memory_limit_path += memory_cgroup / "memory.limit_in_bytes";
  std::ifstream memory_limit_file(memory_limit_path);
  if (memory_limit_file.good()) {
    uint64_t memory_limit = 0;
    memory_limit_file >> memory_limit;
    if (memory_limit < 2'000'000'000) {
      LOG(WARNING) << "cgroup memory limit is low: "
                   << memory_limit / 1024 / 1024 << "MiB.";
    }
  } else {
    LOG(INFO) << "Couldn't read memory limit " << memory_limit_path;
  }
}

int main(int argc, char* argv[]) {
  benchmark::Initialize(&argc, argv);
  absl::ParseCommandLine(argc, argv);
  absl::InitializeLog();
  static auto* background ABSL_ATTRIBUTE_UNUSED =
    tcmalloc::MallocExtension::NeedsProcessBackgroundActions() ?
    new std::thread([]() {
      tcmalloc::MallocExtension::ProcessBackgroundActions();
    }) : nullptr;

  // Print warnings to stderr.
  absl::SetStderrThreshold(absl::LogSeverityAtLeast::kWarning);

  if (absl::GetFlag(FLAGS_prevent_numa_migrations) && numa_available() != -1) {
    // Set the CPU affinity to the intersection of the current affinity and the
    // CPUs in the current NUMA node.
    struct bitmask* current_affinity = numa_allocate_cpumask();
    PCHECK(numa_sched_getaffinity(0, current_affinity) != -1)
        << "Failed to get CPU affinity";

    int current_numa_node = numa_node_of_cpu(sched_getcpu());
    PCHECK(current_numa_node != -1) << "Failed to get NUMA node";
    struct bitmask* cpus_in_current_numa_node = numa_allocate_cpumask();
    numa_node_to_cpus(current_numa_node, cpus_in_current_numa_node);

    struct bitmask* new_affinity = numa_allocate_cpumask();
    for (int i = 0; i < new_affinity->size; i++) {
      if (numa_bitmask_isbitset(current_affinity, i) &&
          numa_bitmask_isbitset(cpus_in_current_numa_node, i)) {
        numa_bitmask_setbit(new_affinity, i);
      }
    }
    PCHECK(numa_sched_setaffinity(0, new_affinity) != -1)
        << "Failed to set CPU affinity";

    numa_free_cpumask(current_affinity);
    numa_free_cpumask(cpus_in_current_numa_node);
    numa_free_cpumask(new_affinity);

    // Only allocate memory from the current NUMA node.
    struct bitmask* node_mask = numa_allocate_nodemask();
    numa_bitmask_setbit(node_mask, current_numa_node);
    numa_set_membind(node_mask);
    numa_free_nodemask(node_mask);
  }

  CheckMemoryLimit();

  const std::string benchmark_filter = benchmark::GetBenchmarkFilter();
  if (benchmark_filter.empty() || benchmark_filter == "default" ||
      benchmark_filter == "single") {
    // --benchmark_filter flag not set, set to default or "single"
    benchmark::SetBenchmarkFilter(
        fleetbench::DynamicRegistrar::Get()->GetDefaultFilter(
            fleetbench::ThreadingMode::kSingleThreaded));
  } else if (benchmark_filter == "multi") {
    benchmark::SetBenchmarkFilter(
        fleetbench::DynamicRegistrar::Get()->GetDefaultFilter(
            fleetbench::ThreadingMode::kMultiThreaded));
  }
  fleetbench::DynamicRegistrar::Get()->Run();

  fleetbench::AddEffectiveCacheSizeToContextIfSpecified();
  fleetbench::FleetbenchReporter display_reporter(
      benchmark::CreateDefaultDisplayReporter());
  if (!fleetbench::FindInCommandLine("--benchmark_out=")) {
    benchmark::RunSpecifiedBenchmarks(&display_reporter);
  } else {
    std::unique_ptr<benchmark::BenchmarkReporter> default_file_reporter =
        fleetbench::CreateDefaultFileReporter();
    fleetbench::FleetbenchReporter file_reporter(default_file_reporter.get());
    benchmark::RunSpecifiedBenchmarks(&display_reporter, &file_reporter);
  }
  return 0;
}
