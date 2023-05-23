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

absl::Span<const SizeDistribution> GetMemmoveSizeDistributions() {
  static constexpr SizeDistribution kDistributions[] = {
      {"memmove Google A", MemmoveGoogleA},
      {"memmove Google B", MemmoveGoogleB},
      {"memmove Google D", MemmoveGoogleD},
      {"memmove Google L", MemmoveGoogleL},
      {"memmove Google M", MemmoveGoogleM},
      {"memmove Google Q", MemmoveGoogleQ},
      {"memmove Google S", MemmoveGoogleS},
      {"memmove Google U", MemmoveGoogleU},
      {"memmove Google W", MemmoveGoogleW},
  };
  return kDistributions;
}

absl::Span<const SizeDistribution> GetMemsetSizeDistributions() {
  static constexpr SizeDistribution kDistributions[] = {
      {"memset Google A", MemsetGoogleA}, {"memset Google B", MemsetGoogleB},
      {"memset Google D", MemsetGoogleD}, {"memset Google L", MemsetGoogleL},
      {"memset Google M", MemsetGoogleM}, {"memset Google Q", MemsetGoogleQ},
      {"memset Google S", MemsetGoogleS}, {"memset Google U", MemsetGoogleU},
      {"memset Google W", MemsetGoogleW},
  };
  return kDistributions;
}

absl::Span<const SizeDistribution> GetMemcmpSizeDistributions() {
  static constexpr SizeDistribution kDistributions[] = {
      {"memcmp Google A", MemcmpGoogleA}, {"memcmp Google B", MemcmpGoogleB},
      {"memcmp Google D", MemcmpGoogleD}, {"memcmp Google L", MemcmpGoogleL},
      {"memcmp Google M", MemcmpGoogleM}, {"memcmp Google Q", MemcmpGoogleQ},
      {"memcmp Google S", MemcmpGoogleS}, {"memcmp Google U", MemcmpGoogleU},
      {"memcmp Google W", MemcmpGoogleW},
  };
  return kDistributions;
}

absl::Span<const SizeDistribution> GetBcmpSizeDistributions() {
  static constexpr SizeDistribution kDistributions[] = {
      {"bcmp Google A", BcmpGoogleA}, {"bcmp Google B", BcmpGoogleB},
      {"bcmp Google D", BcmpGoogleD}, {"bcmp Google L", BcmpGoogleL},
      {"bcmp Google M", BcmpGoogleM}, {"bcmp Google Q", BcmpGoogleQ},
      {"bcmp Google S", BcmpGoogleS}, {"bcmp Google U", BcmpGoogleU},
      {"bcmp Google W", BcmpGoogleW},
  };
  return kDistributions;
}

}  // namespace libc
}  // namespace fleetbench
