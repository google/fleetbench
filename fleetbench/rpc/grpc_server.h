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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_GRPC_SERVER_H_
#define THIRD_PARTY_FLEETBENCH_RPC_GRPC_SERVER_H_

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "absl/strings/string_view.h"
#include "fleetbench/rpc/fleetbenchservice.grpc.pb.h"
#include "fleetbench/rpc/generator_process.h"
#include "fleetbench/rpc/protos/ResponseMessage.pb.h"
#include "fleetbench/rpc/rpc_counters.h"
#include "include/grpcpp/server_builder.h"

namespace fleetbench::rpc {

struct GRPCServerOptions {
  // Generic options:
  int32_t response_size = 0;
  bool compress = false;
  bool checksum = false;

  // Options applied only to AsyncCallback:
  int32_t workers = 0;  // default value overridden
  bool tx_zerocopy = false;
  int32_t tx_zerocopy_threshold_bytes = 0;
};

// Wrapper around a grpc::Server async. callback server. It spawns a server with
// `opts` options that sends`P<program_idx>ResponseMessage` type protos at a
// `delay_dist` rate. It manages the lifetime of the object as well as
// optionally logging RPC completion statistics.
class GRPCServer {
 public:
  explicit GRPCServer(const GRPCServerOptions& opts, DelayProcess delay_type,
                      std::unique_ptr<RandomDistribution> delay_dist,
                      absl::string_view program);
  GRPCServer(const GRPCServer&) = delete;
  GRPCServer& operator=(const GRPCServer&) = delete;

  // Start the server
  void Start(absl::string_view filepath, grpc::ServerBuilder* builder);

  // Return a random ResponseMessage response proto
  const fleetbench::rpc::ResponseMessage& Buffer(const void* ctx) const;

  // Delay based on `delay_dist`
  void Delay();

  // Return a reference to logging statistics object
  std::shared_ptr<RPCCounters> GetStatsCounters();

  // Wait until grpc::Server object completes. Blocks until `Shutdown()` is
  // called.
  void Wait();

  // Shutdown grpc::Server object
  void Shutdown();

 private:
  // Start async. callback server
  void StartCallback(grpc::ServerBuilder* builder);

  GRPCServerOptions opts_;

  // Different `ResponseMessage`s (and string to fill them) that are sent
  std::vector<fleetbench::rpc::ResponseMessage> message_buffers_;
  std::string s_;

  // Delay distribution used configure `Delay()`
  const DelayProcess delay_type_;
  std::unique_ptr<RandomDistribution> delay_dist_;

  // Used to index into submessage `P<index>ResponseMessage` of
  // `ResponseMessage` proto, based on the program to index mapping in combo.h.
  absl::string_view program_;

  // Callback service object used to build grpc::Server
  std::unique_ptr<fleetbench::rpc::FleetBenchPerf::CallbackService>
      callback_service_;

  // Logging statistics
  std::shared_ptr<RPCCounters> stats_counters_;

  // Inner grpc::Server object
  std::unique_ptr<grpc::Server> server_;
};

std::unique_ptr<GRPCServer> StartGRPCServer(
    const GRPCServerOptions& opts, absl::string_view filepath,
    const DistributionArgs& resp_delay_us_dist_args,
    grpc::ServerBuilder* builder, absl::string_view program);

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_GRPC_SERVER_H_
