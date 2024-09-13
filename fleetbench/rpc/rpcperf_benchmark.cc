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

#include <memory>
#include <string>
#include <utility>

#include "absl/log/check.h"
#include "absl/strings/str_cat.h"
#include "absl/synchronization/mutex.h"
#include "benchmark/benchmark.h"
#include "fleetbench/dynamic_registrar.h"
#include "fleetbench/rpc/grpc_client.h"
#include "fleetbench/rpc/grpc_server.h"
#include "fleetbench/rpc/protos/combo.h"
#include "fleetbench/rpc/rpcperf.h"

namespace fleetbench::rpc {

void BM_Rpc(benchmark::State &state, int program_idx) {
  CHECK_LT(program_idx, fleetbench::rpc::kRequestMessageMaxPrograms)
      << "Invalid program_idx provided to benchmark";
  CHECK_LT(program_idx, fleetbench::rpc::kResponseMessageMaxPrograms)
      << "Invalid program_idx provided to benchmark";

  std::unique_ptr<fleetbench::rpc::GRPCServer> server =
      fleetbench::rpc::CreateAndStartServer(
          /*ports=*/{"10000"}, /*workers=*/1, /*compress=*/false,
          /*checksum=*/false, /*logstats_output_path=*/"",
          /*resp_delay_us_dist=*/"", /*program_idx=*/program_idx);

  absl::Mutex keep_running_mtx;
  std::unique_ptr<fleetbench::rpc::GRPCClient> client =
      fleetbench::rpc::CreateAndStartClient(
          /*max_outstanding_rpcs=*/1, /*compress=*/false,
          /*checksum=*/false, /*skip_loopback=*/false,
          /*peers=*/{"localhost:10000"}, /*max_peers=*/-1,
          /*connections_per_peer=*/1, /*logstats_output_path=*/"",
          /*req_delay_us_dist=*/"", /*program_idx=*/program_idx,
          /*keep_running=*/[&state, &keep_running_mtx]() {
            absl::MutexLock l(&keep_running_mtx);
            return state.KeepRunning();
          });

  fleetbench::rpc::Wait(std::move(server), std::move(client));
}

void RegisterBenchmarks() {
  for (int program_idx = 0; program_idx < 10; program_idx++) {
    std::string benchmark_name = absl::StrCat("BM_RPC_", program_idx);
    benchmark::RegisterBenchmark(benchmark_name.c_str(), BM_Rpc, program_idx)
        ->MeasureProcessCPUTime();
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
  }
};

BenchmarkRegisterer br;

}  // namespace fleetbench::rpc
