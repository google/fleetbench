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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_GRPC_H_
#define THIRD_PARTY_FLEETBENCH_RPC_GRPC_H_

#include <cstdint>
#include <fstream>
#include <memory>
#include <string>
#include <vector>

#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"
#include "absl/time/time.h"
#include "fleetbench/rpc/fleetbenchservice.grpc.pb.h"
#include "fleetbench/rpc/fleetbenchservice.pb.h"
#include "fleetbench/rpc/generator_process.h"
#include "include/grpcpp/client_context.h"
#include "include/grpcpp/server_builder.h"
#include "include/grpcpp/support/async_unary_call.h"
#include "include/grpcpp/support/status.h"

namespace fleetbench::rpc {

// Log RPC statistics to a file. This class is thread-safe.
class RPCCounters {
 public:
  explicit RPCCounters(absl::string_view filepath);
  ~RPCCounters();

  // Mark a client RPC as complete, logging it's completion latency and status
  void ClientRPCComplete(double latency, bool is_ok);
  // Mark a server RPC as complete
  void ServerRPCComplete();

 private:
  std::vector<double> client_latency_;
  uint64_t client_queries_;
  uint64_t client_errors_;
  uint64_t server_queries_;
  std::ofstream outfile_;
  absl::Mutex mtx_;
};

struct GRPCServerOptions {
  // Generic options:
  int32_t response_size = 0;
  bool compress = false;
  bool checksum = false;

  // Options applied only to AsyncCallback:
  int32_t workers = 0;  // default value overridden
};

// Wrapper around a grpc::Server async. callback server. It spawns a server with
// `opts` options that sends`P<program_idx>ResponseMessage` type protos at a
// `delay_dist` rate. It manages the lifetime of the object as well as
// optionally logging RPC completion statistics.
class GRPCServer {
 public:
  explicit GRPCServer(const GRPCServerOptions& opts, DelayProcess delay_type,
                      std::unique_ptr<RandomDistribution> delay_dist,
                      uint64_t program_idx);
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

  // Index into submessage `P<program_idx_>ResponseMessage` of `ResponseMessage`
  // proto
  uint64_t program_idx_;

  // Callback service object used to build grpc::Server
  std::unique_ptr<fleetbench::rpc::FleetBenchPerf::CallbackService>
      callback_service_;

  // Logging statistics
  std::shared_ptr<RPCCounters> stats_counters_;

  // Inner grpc::Server object
  std::unique_ptr<grpc::Server> server_;
};

struct GRPCClientOptions {
  // Generic options:
  std::vector<std::string> peers;
  int32_t connections_per_peer = 1;
  int32_t max_outstanding_rpcs = 100;
  bool compress = false;
  bool checksum = false;
  bool skip_loopback = true;
};

struct GRPCClientStubBuffer {
  std::unique_ptr<fleetbench::rpc::FleetBenchPerf::Stub> stub;
  fleetbench::rpc::RequestMessage buf;
};

struct GRPCClientRPC {
  GRPCClientStubBuffer* stub_buf;
  ::grpc::ClientContext ctx;
  fleetbench::rpc::RequestMessage request;
  fleetbench::rpc::ResponseMessage response;
  std::unique_ptr<
      ::grpc::ClientAsyncResponseReader<fleetbench::rpc::ResponseMessage>>
      rpc;
  ::grpc::Status status;
  absl::Time start;
};

// A GRPCClient for an async. callback grpc::Server. It spawns a client with
// `opts` options that sends`P<program_idx>RequestMessage` type protos at a
// `delay_dist` rate. It manages the lifetime of the object as well as
// optionally logging RPC completion statistics.
class GRPCClient {
 public:
  explicit GRPCClient(const GRPCClientOptions& opts, absl::string_view filepath,
                      DelayProcess delay_type,
                      std::unique_ptr<RandomDistribution> delay_dist,
                      uint64_t program_idx);
  GRPCClient(const GRPCClient&) = delete;
  GRPCClient& operator=(const GRPCClient&) = delete;

  // Stop any future outbound RPCs. Doesn't cancel in-flight RPCs.
  void Shutdown();

  // Wait until no more outbound RPCs are in-flight. Blocks until `Shutdown()`
  // is called.
  void Wait();

 private:
  // Delay based on `delay_dist`
  void Delay();

  // Mark that a stream of RPCs is not inflight anymore
  void MarkRPCStreamDone();

  // Send one RPC. Can recursively send another RPC after completion if client
  // is not running (i.e. `Shutdown()` hasn't been called yet).
  void SendOneRPC(GRPCClientStubBuffer* sb);

  // Check if client is running.
  bool IsRunning();

  GRPCClientOptions opts_;

  // Logging statistics
  std::unique_ptr<RPCCounters> stats_counters_;

  std::vector<GRPCClientStubBuffer> stub_bufs_;

  // Delay distribution used configure `Delay()`
  const DelayProcess delay_type_;
  std::unique_ptr<RandomDistribution> delay_dist_;

  // Index into submessage `P<program_idx_>RequestMessage` of `RequestMessage`
  // proto
  uint64_t program_idx_;

  // Different `RequestMessage`s (and string to fill them) that are sent
  std::vector<fleetbench::rpc::RequestMessage> message_buffers_;
  std::string s_;

  // Variables showing if client is still able to send RPCs
  bool running_;
  absl::Mutex running_mtx_;

  // Variables to count how many RPC streams have stopped sending RPCs
  uint64_t inflight_rpcs_count_;
  absl::Mutex inflight_rpcs_mtx_;
};

std::unique_ptr<GRPCClient> StartGRPCClient(
    const GRPCClientOptions& opts, absl::string_view filepath,
    const DistributionArgs& req_delay_us_dist_args, uint64_t program_idx);

std::unique_ptr<GRPCServer> StartGRPCServer(
    const GRPCServerOptions& opts, absl::string_view filepath,
    const DistributionArgs& resp_delay_us_dist_args,
    grpc::ServerBuilder* builder, uint64_t program_idx);

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_GRPC_H_
