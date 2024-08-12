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

#include <string>
#include <vector>

#include "absl/strings/cord.h"
#include "benchmark/benchmark.h"
#include "fleetbench/dynamic_registrar.h"
#include "fleetbench/stl/generated_cord_benchmarks.h"

namespace fleetbench::stl {

static void BM_Cord(benchmark::State &state,
                    void (*benchmark_code)(std::vector<absl::Cord> &),
                    std::vector<absl::Cord> (*benchmark_setup)(),
                    const std::string &label) {
  auto cords = benchmark_setup();
  for (auto _ : state) {
    benchmark_code(cords);
  }
  if (!label.empty()) state.SetLabel(label);
}

void RegisterBenchmarks() {
  for (const auto &benchmark : GetBenchmarks()) {
    benchmark::RegisterBenchmark(benchmark.name, BM_Cord,
                                 benchmark.benchmark_code,
                                 benchmark.benchmark_setup, benchmark.label);
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);

    // We use the fleet-wide distribution as the defaults.
    DynamicRegistrar::Get()->AddDefaultFilter("BM_CORD_Fleet");
  }
};

BenchmarkRegisterer br;

}  // namespace fleetbench::stl
