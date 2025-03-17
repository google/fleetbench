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

  if (benchmark::GetBenchmarkFilter().empty() ||
      benchmark::GetBenchmarkFilter() == "default") {
    // --benchmark_filter flag not set
    benchmark::SetBenchmarkFilter(
        fleetbench::DynamicRegistrar::Get()->GetDefaultFilter());
  }
  fleetbench::DynamicRegistrar::Get()->Run();

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
