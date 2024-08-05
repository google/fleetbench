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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_H_

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "fleetbench/rpc/grpc.h"

namespace fleetbench::rpc {

std::unique_ptr<GRPCServer> CreateAndStartServer(
    std::vector<std::string> ports, int32_t workers, bool compress,
    bool checksum, std::string logstats_output_path,
    std::string resp_delay_us_dist, uint64_t program_idx);

std::unique_ptr<GRPCClient> CreateAndStartClient(
    int32_t max_outstanding_rpcs, bool compress, bool checksum,
    bool skip_loopback, std::vector<std::string> peers, int32_t max_peers,
    int32_t connections_per_peer, std::string logstats_output_path,
    std::string req_delay_us_dist, uint64_t program_idx);

void Wait(std::shared_ptr<GRPCServer> server,
          std::shared_ptr<GRPCClient> client, int32_t seconds_to_run);

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_H_
