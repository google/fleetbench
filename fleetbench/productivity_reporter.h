// Copyright 2024 The Fleetbench Authors
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
#ifndef THIRD_PARTY_FLEETBENCH_PRODUCTIVITY_REPORTER_H_
#define THIRD_PARTY_FLEETBENCH_PRODUCTIVITY_REPORTER_H_

#include "benchmark/benchmark.h"

namespace fleetbench {

// ProductivityReporter is meant to give progress updates more often
// than the benchmark framework itself.
class ProductivityReporter {
 public:
  static ProductivityReporter* Get();
  virtual ~ProductivityReporter() = default;
  virtual void Update(benchmark::State& state) = 0;
};

}  // namespace fleetbench
#endif  // THIRD_PARTY_FLEETBENCH_PRODUCTIVITY_REPORTER_H_
