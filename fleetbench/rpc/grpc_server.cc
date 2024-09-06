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

#include "fleetbench/rpc/grpc_server.h"

#include <chrono>  // NOLINT
#include <cstddef>
#include <cstdint>
#include <memory>
#include <utility>

#include "absl/hash/hash.h"
#include "absl/log/check.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "absl/time/clock.h"
#include "absl/time/time.h"
#include "fleetbench/rpc/fleetbenchservice.grpc.pb.h"
#include "fleetbench/rpc/generator_process.h"
#include "fleetbench/rpc/protos/combo.h"
#include "fleetbench/rpc/rpc_counters.h"
#include "include/grpc/grpc.h"
#include "include/grpcpp/server_builder.h"
#include "include/grpcpp/server_context.h"
#include "include/grpcpp/support/server_callback.h"
#include "include/grpcpp/support/status.h"

namespace fleetbench::rpc {

namespace {

class PerfCallback final
    : public fleetbench::rpc::FleetBenchPerf::CallbackService {
 public:
  explicit PerfCallback(GRPCServer* server) : server_(server) {}
  ~PerfCallback() override = default;

  ::grpc::ServerUnaryReactor* Message(
      ::grpc::CallbackServerContext* context,
      const fleetbench::rpc::RequestMessage* request,
      fleetbench::rpc::ResponseMessage* response) override {
    *response = server_->Buffer(this);

    // Wait before the response if configured.
    server_->Delay();

    auto* reactor = context->DefaultReactor();
    reactor->Finish(::grpc::Status::OK);
    auto cntr = server_->GetStatsCounters();
    if (cntr) cntr->ServerRPCComplete();
    return reactor;
  }

 private:
  GRPCServer* const server_;
};

// NOTE: similar to fleetbench/proto/lifecycle.h
const int kMaxValueStringSize = 1 << 20;

}  // namespace

GRPCServer::GRPCServer(const GRPCServerOptions& opts, DelayProcess delay_type,
                       std::unique_ptr<RandomDistribution> delay_dist,
                       uint64_t program_idx)
    : opts_(opts),
      message_buffers_(fleetbench::rpc::kMaxMessagesPerProgram *
                       fleetbench::rpc::kMaxSettersPerMessage),
      s_(kMaxValueStringSize, 'a'),
      delay_type_(delay_type),
      delay_dist_(std::move(delay_dist)),
      program_idx_(program_idx),
      callback_service_(new PerfCallback(this)) {
  for (size_t i = 0; i < message_buffers_.size(); ++i) {
    fleetbench::rpc::ResponseMessage_Set(
        program_idx_, i % fleetbench::rpc::kMaxMessagesPerProgram,
        i % fleetbench::rpc::kMaxSettersPerMessage, &message_buffers_[i], &s_);
  }
}

void GRPCServer::StartCallback(grpc::ServerBuilder* builder) {
  builder->RegisterService(callback_service_.get());
  server_ = builder->BuildAndStart();
}

void GRPCServer::Start(absl::string_view filepath,
                       grpc::ServerBuilder* builder) {
  if (!filepath.empty()) {
    stats_counters_ =
        std::make_shared<RPCCounters>(absl::StrCat(filepath, "/server.txt"));
  }
  StartCallback(builder);
}

const fleetbench::rpc::ResponseMessage& GRPCServer::Buffer(
    const void* ctx) const {
  return message_buffers_[absl::Hash<const void*>()(ctx) %
                          message_buffers_.size()];
}

void GRPCServer::Delay() {
  if (delay_type_ == DelayProcess::RANDOM_DELAY) {
    int usec = delay_dist_->sample();
    usec = usec < 0 ? 0 : usec;
    absl::SleepFor(absl::Microseconds(usec));
  }
}

std::shared_ptr<RPCCounters> GRPCServer::GetStatsCounters() {
  return stats_counters_;
}

void GRPCServer::Wait() { server_->Wait(); }

void GRPCServer::Shutdown() {
  server_->Shutdown(
      std::chrono::system_clock::now());  // using absl::Now() fails
}

std::unique_ptr<GRPCServer> StartGRPCServer(
    const GRPCServerOptions& opts, absl::string_view filepath,
    const DistributionArgs& resp_delay_us_dist_args,
    grpc::ServerBuilder* builder, uint64_t program_idx) {
  // Enable TCP Tx Zerocopy if requested for server.
  if (opts.tx_zerocopy) {
    builder->AddChannelArgument(GRPC_ARG_TCP_TX_ZEROCOPY_ENABLED, 1);
    const int tx_zerocopy_threshold = opts.tx_zerocopy_threshold_bytes;
    CHECK_GE(tx_zerocopy_threshold, 0);
    builder->AddChannelArgument(GRPC_ARG_TCP_TX_ZEROCOPY_SEND_BYTES_THRESHOLD,
                                tx_zerocopy_threshold);
  }

  auto resp_delay_dist =
      GetDistribution(resp_delay_us_dist_args, "resp_delay_usec");
  bool no_delay = resp_delay_dist->clamp_value() == 0;
  if (no_delay) {
    auto server = std::make_unique<GRPCServer>(opts, DelayProcess::NO_DELAY,
                                               nullptr, program_idx);
    server->Start(filepath, builder);
    return server;
  } else {
    auto server =
        std::make_unique<GRPCServer>(opts, DelayProcess::RANDOM_DELAY,
                                     std::move(resp_delay_dist), program_idx);
    server->Start(filepath, builder);
    return server;
  }
}

}  // namespace fleetbench::rpc
