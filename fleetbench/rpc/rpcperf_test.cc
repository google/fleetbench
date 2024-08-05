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

#include "fleetbench/rpc/rpcperf.h"

#include <memory>

#include "gtest/gtest.h"
#include "fleetbench/rpc/grpc.h"
#include "fleetbench/rpc/protos/combo.h"

struct RPCBenchmarkTestFixture : public testing::TestWithParam<int> {
 public:
  RPCBenchmarkTestFixture() : program_idx(GetParam()) {}

 protected:
  void SetUp() override {
    EXPECT_TRUE(program_idx < fleetbench::rpc::kRequestMessageMaxPrograms)
        << "Invalid program_idx provided to test";
    EXPECT_TRUE(program_idx < fleetbench::rpc::kResponseMessageMaxPrograms)
        << "Invalid program_idx provided to test";

    server = fleetbench::rpc::CreateAndStartServer(
        {"10000"} /* ports */, 1 /* workers */, false /* compress */,
        false /* checksum */, "" /* logstats_output_path */,
        "" /* resp_delay_us_dist */, program_idx /* program_idx */);

    client = fleetbench::rpc::CreateAndStartClient(
        1 /* max_outstanding_rpcs */, false /* compress */,
        false /* checksum */, false /* skip_loopback */,
        {"localhost:10000"} /* peers */, -1 /* max_peers */,
        1 /* connections_per_peer */, "" /* logstats_output_path */,
        "" /* req_delay_us_dist */, program_idx /* program_idx */);
  }

  std::shared_ptr<fleetbench::rpc::GRPCServer> server;
  std::shared_ptr<fleetbench::rpc::GRPCClient> client;

 private:
  int program_idx;
};

TEST_P(RPCBenchmarkTestFixture, RunLocalhostMinimal) {
  fleetbench::rpc::Wait(server, client, 5);
  EXPECT_TRUE(true);  // Test finished
}

// this Values list must correspond with NUM_PROGRAMS in rpc/protos:BUILD
INSTANTIATE_TEST_SUITE_P(RPCBenchmarkTest, RPCBenchmarkTestFixture,
                         testing::Values(0, 1, 2, 3, 4, 5, 6, 7, 8, 9));
