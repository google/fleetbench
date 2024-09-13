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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_GRPC_CLIENT_H_
#define THIRD_PARTY_FLEETBENCH_RPC_GRPC_CLIENT_H_

#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"
#include "absl/time/time.h"
#include "fleetbench/rpc/fleetbenchservice.grpc.pb.h"
#include "fleetbench/rpc/generator_process.h"
#include "fleetbench/rpc/rpc_counters.h"
#include "include/grpcpp/client_context.h"
#include "include/grpcpp/support/async_unary_call.h"
#include "include/grpcpp/support/status.h"

namespace fleetbench::rpc {

struct GRPCClientOptions {
  // Generic options:
  std::vector<std::string> peers;
  int32_t connections_per_peer = 1;
  int32_t max_outstanding_rpcs = 100;
  bool compress = false;
  bool checksum = false;
  bool skip_loopback = true;
  bool tx_zerocopy = false;
  int32_t tx_zerocopy_threshold_bytes = 0;
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
                      uint64_t program_idx, std::function<bool()> keep_running);
  GRPCClient(const GRPCClient&) = delete;
  GRPCClient& operator=(const GRPCClient&) = delete;

  // Wait until no more outbound RPCs are in-flight.
  void Wait();

 private:
  // Delay based on `delay_dist`
  void Delay();

  // Mark that a stream of RPCs is not inflight anymore
  void MarkRPCStreamDone();

  // Send one RPC. Sends recursively another RPC after completion if
  // keep_running_() returns true.
  void SendOneRPC(GRPCClientStubBuffer* sb);

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

  // Check if client should send another RPC.
  std::function<bool()> keep_running_;

  // Different `RequestMessage`s (and string to fill them) that are sent
  std::vector<fleetbench::rpc::RequestMessage> message_buffers_;
  std::string s_;

  // Variables to count how many RPC streams have stopped sending RPCs
  uint64_t inflight_rpcs_count_;
  absl::Mutex inflight_rpcs_mtx_;
};

std::unique_ptr<GRPCClient> StartGRPCClient(
    const GRPCClientOptions& opts, absl::string_view filepath,
    const DistributionArgs& req_delay_us_dist_args, uint64_t program_idx,
    std::function<bool()> keep_running);

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_GRPC_CLIENT_H_
