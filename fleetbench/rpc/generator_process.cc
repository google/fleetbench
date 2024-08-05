// Copyright 2023 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an " AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "fleetbench/rpc/generator_process.h"

#include <cstdint>
#include <memory>

#include "absl/log/log.h"
#include "absl/strings/string_view.h"
#include "fleetbench/rpc/distributionargs.pb.h"

namespace fleetbench::rpc {

namespace {

std::unique_ptr<RandomDistribution> DoGetDistribution(
    const DistributionArgs& args) {
  if (args.distribution() == Constant::kName) {
    return Constant::Get(args);
  } else if (args.distribution() == Uniform::kName) {
    return Uniform::Get(args);
  } else if (args.distribution() == Empirical::kName) {
    return Empirical::Get(args);
  } else if (args.distribution() == Poisson::kName) {
    return Poisson::Get(args);
  } else if (args.distribution() == Exponential::kName) {
    return Exponential::Get(args);
  } else if (args.distribution() == Gaussian::kName) {
    return Gaussian::Get(args);
  } else {
    LOG(FATAL) << "Unsupported distribution type " << args.distribution();
    return nullptr;
  }
}

}  // namespace

std::unique_ptr<RandomDistribution> GetDistribution(
    const DistributionArgs& args, absl::string_view tag) {
  std::unique_ptr<RandomDistribution> dist = DoGetDistribution(args);
  uint64_t acc = 0;
  static constexpr int kNumSamplesForAvg = 100;
  for (int idx = 0; idx < kNumSamplesForAvg; ++idx) {
    acc += dist->sample();
  }
  LOG(INFO) << tag << "_avg=" << (static_cast<double>(acc) / kNumSamplesForAvg);
  LOG(INFO) << tag << "_description=" << dist->Description();
  return dist;
}

}  // namespace fleetbench::rpc
