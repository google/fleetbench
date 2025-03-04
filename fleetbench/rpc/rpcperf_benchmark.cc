// Copyright 2024 The Fleetbench Authors
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
#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/dynamic_registrar.h"
#include "fleetbench/rpc/grpc_client.h"
#include "fleetbench/rpc/grpc_server.h"
#include "fleetbench/rpc/protos/combo.h"
#include "fleetbench/rpc/rpcperf.h"

namespace fleetbench::rpc {

void BM_Rpc(benchmark::State &state, absl::string_view program) {
  // Make each benchmark repetition reproducible, if using a fixed seed.
  Random::instance().Reset();

  CHECK(fleetbench::rpc::kPrograms->count(program))
      << "Invalid program name \"" << program << "\" provided to benchmark";

  std::unique_ptr<fleetbench::rpc::GRPCServer> server =
      fleetbench::rpc::CreateAndStartServer(
          /*ports=*/{"10000"}, /*workers=*/1, /*compress=*/false,
          /*checksum=*/false, /*logstats_output_path=*/"",
          /*resp_delay_us_dist=*/"", /*program=*/program);

  absl::Mutex keep_running_mtx;
  std::unique_ptr<fleetbench::rpc::GRPCClient> client =
      fleetbench::rpc::CreateAndStartClient(
          /*max_outstanding_rpcs=*/1, /*compress=*/false,
          /*checksum=*/false, /*skip_loopback=*/false,
          /*peers=*/{"localhost:10000"}, /*max_peers=*/-1,
          /*connections_per_peer=*/1, /*logstats_output_path=*/"",
          /*req_delay_us_dist=*/"", /*program=*/program,
          /*keep_running=*/[&state, &keep_running_mtx]() {
            absl::MutexLock l(&keep_running_mtx);
            return state.KeepRunning();
          });

  fleetbench::rpc::Wait(std::move(server), std::move(client));
}

void RegisterBenchmarks() {
  for (const auto &[program, _] : *fleetbench::rpc::kPrograms) {
    std::string benchmark_name = absl::StrCat("BM_RPC_", program);
    benchmark::RegisterBenchmark(benchmark_name, BM_Rpc, program)
        ->MeasureProcessCPUTime();
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
    DynamicRegistrar::Get()->AddDefaultFilter("BM_RPC_Fleet");
  }
};

BenchmarkRegisterer br;

}  // namespace fleetbench::rpc
