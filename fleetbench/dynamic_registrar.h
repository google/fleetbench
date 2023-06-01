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

#ifndef THIRD_PARTY_FLEETBENCH_DYNAMIC_REGISTRAR_H_
#define THIRD_PARTY_FLEETBENCH_DYNAMIC_REGISTRAR_H_

#include <functional>
#include <vector>

namespace fleetbench {

// DynamicRegistrar is a singleton to allow fleetbench benchmarks to
// hook into the benchmark discovery process. They can register a callback
// that will run during main().
// This class is not thread safe- it's expected that all AddCallback() calls
// will happen before main().
class DynamicRegistrar {
 public:
  // Get a pointer to the singleton instance.
  static DynamicRegistrar* Get();

  // Add a callback that will run after the benchmark framework is initialized,
  // but before executing benchmarks. The intent is that the callback will
  // dynamically register benchmarks.
  void AddCallback(std::function<void()> callback);

  // Called by fleetbench main() to execute all registered callbacks.
  void Run();

 private:
  std::vector<std::function<void()>> callbacks_;
};
}  // namespace fleetbench

#endif  // THIRD_PARTY_FLEETBENCH_DYNAMIC_REGISTRAR_H_
