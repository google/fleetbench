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
// This file defines the skeleton of generated benchmark files. It contains
// the includes, gunit benchmark code, and main entrypoint.

#include "benchmark/benchmark.h"

#include "fleetbench/dynamic_registrar.h"
#include "fleetbench/proto/lifecycle.h"

namespace fleetbench {

void BM_Protogen_Arena(benchmark::State& state) {
  const int32_t kIterations = 10;
  // Create one lifecycle across all benchmark iterations, to keep environment
  // setup and destructor runs out of the benchmark runtime measurements.
  ProtoLifecycle lifecycle(kIterations);
  for (auto _ : state) {
    // Scope arena to a benchmark iteration.
    google::protobuf::Arena arena;
    lifecycle.Init(&arena);
    lifecycle.Run();
  }
}
BENCHMARK(BM_Protogen_Arena);

void BM_Protogen_NoArena(benchmark::State& state) {
  const int32_t kIterations = 10;
  // Create one lifecycle across all benchmark iterations, to keep environment
  // setup and destructor runs out of the benchmark runtime measurements.
  ProtoLifecycle lifecycle(kIterations);
  for (auto _ : state) {
    lifecycle.Init(nullptr);
    lifecycle.Run();
  }
}
BENCHMARK(BM_Protogen_NoArena);

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddDefaultFilter("BM_Protogen_Arena");
  }
};

BenchmarkRegisterer br;

}  // namespace fleetbench
