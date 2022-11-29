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

#include "fleetbench/libc/memory_size_distributions.h"

namespace fleetbench {
namespace libc {
absl::Span<const SizeDistribution> GetMemcpySizeDistributions() {
  static constexpr SizeDistribution kDistributions[] = {
      {"memcpy Google A", MemcpyGoogleA}, {"memcpy Google B", MemcpyGoogleB},
      {"memcpy Google D", MemcpyGoogleD}, {"memcpy Google L", MemcpyGoogleL},
      {"memcpy Google M", MemcpyGoogleM}, {"memcpy Google Q", MemcpyGoogleQ},
      {"memcpy Google S", MemcpyGoogleS}, {"memcpy Google U", MemcpyGoogleU},
      {"memcpy Google W", MemcpyGoogleW},
  };
  return kDistributions;
}

}  // namespace libc
}  // namespace fleetbench
