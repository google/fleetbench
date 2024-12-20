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

#include "absl/flags/parse.h"
#include "absl/log/log.h"
#include "benchmark/benchmark.h"
#include "fleetbench/dynamic_registrar.h"
#include "tcmalloc/malloc_extension.h"

int main(int argc, char* argv[]) {
  benchmark::Initialize(&argc, argv);
  absl::ParseCommandLine(argc, argv);
  static auto* background ABSL_ATTRIBUTE_UNUSED =
    tcmalloc::MallocExtension::NeedsProcessBackgroundActions() ?
    new std::thread([]() {
      tcmalloc::MallocExtension::ProcessBackgroundActions();
    }) : nullptr;
  if (benchmark::GetBenchmarkFilter().empty() ||
      benchmark::GetBenchmarkFilter() == "default") {
    // --benchmark_filter flag not set
    benchmark::SetBenchmarkFilter(
        fleetbench::DynamicRegistrar::Get()->GetDefaultFilter());
  }
  fleetbench::DynamicRegistrar::Get()->Run();

  benchmark::RunSpecifiedBenchmarks();
  return 0;
}
