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

#include "fleetbench/rpc/grpc.h"

#include <chrono>
#include <cstddef>
#include <cstdint>
#include <ios>
#include <memory>
#include <string>
#include <utility>

#include "absl/flags/flag.h"
#include "absl/hash/hash.h"
#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/match.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/str_join.h"
#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"
#include "absl/time/clock.h"
#include "absl/time/time.h"
#include "fleetbench/rpc/distributionargs.pb.h"
#include "fleetbench/rpc/fleetbenchservice.grpc.pb.h"
#include "fleetbench/rpc/fleetbenchservice.pb.h"
#include "fleetbench/rpc/generator_process.h"
#include "fleetbench/rpc/grpc.h"
#include "fleetbench/rpc/protos/combo.h"
#include "include/grpc/grpc.h"
#include "include/grpcpp/channel.h"
#include "include/grpcpp/completion_queue.h"
#include "include/grpcpp/create_channel.h"
#include "include/grpcpp/security/credentials.h"
#include "include/grpcpp/server_context.h"
#include "include/grpcpp/support/channel_arguments.h"
#include "include/grpcpp/support/server_callback.h"
#include "include/grpcpp/support/status.h"

ABSL_FLAG(bool, grpc_tx_zerocopy, false,
          "Whether to enable gRPC TCP Tx Zerocopy");
ABSL_FLAG(int32_t, grpc_tx_zerocopy_threshold_bytes, 16 * 1024,
          "Only use gRPC TCP Tx Zerocopy for payloads > this size in bytes.");

namespace fleetbench::rpc {

RPCCounters::RPCCounters(absl::string_view filepath)
    : client_queries_(0), client_errors_(0), server_queries_(0) {
  if (filepath.empty()) {
    LOG(FATAL) << "No filepath provided";
  }
  outfile_.open(std::string(filepath), std::ios::out);
  if (!outfile_.is_open()) {
    LOG(FATAL) << "Unable to open " << filepath << " for writing";
  }
}

RPCCounters::~RPCCounters() {
  outfile_ << "TotalClientRPCs: " << client_queries_ << "\n";
  outfile_ << "TotalClientErrors: " << client_errors_ << "\n";
  outfile_ << "SampleClientLatencies: " << absl::StrJoin(client_latency_, ",")
           << "\n";
  outfile_ << "TotalServerQueries: " << server_queries_ << "\n";
  outfile_.flush();
  outfile_.close();
}

void RPCCounters::ClientRPCComplete(double latency, bool is_ok) {
  absl::MutexLock l(&mtx_);
  ++client_queries_;
  if (!is_ok) ++client_errors_;
  client_latency_.push_back(latency);
}

void RPCCounters::ServerRPCComplete() {
  absl::MutexLock l(&mtx_);
  ++server_queries_;
}

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

}  // namespace

// NOTE: similar to fleetbench/proto/lifecycle.h
const int kMaxValueStringSize = 1 << 20;

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
  if (absl::GetFlag(FLAGS_grpc_tx_zerocopy)) {
    builder->AddChannelArgument(GRPC_ARG_TCP_TX_ZEROCOPY_ENABLED, 1);
    const int tx_zerocopy_threshold =
        absl::GetFlag(FLAGS_grpc_tx_zerocopy_threshold_bytes);
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

void GRPCClient::SendOneRPC(GRPCClientStubBuffer* sb) {
  // TODO: potentially use a std::shared_ptr here
  auto client_rpc = new GRPCClientRPC();
  client_rpc->stub_buf = sb;
  client_rpc->request = sb->buf;
  client_rpc->start = absl::Now();

  sb->stub->async()->Message(
      &client_rpc->ctx, &client_rpc->request, &client_rpc->response,
      [this, client_rpc](grpc::Status s) {
        double latency = absl::FDivDuration((absl::Now() - client_rpc->start),
                                            absl::Microseconds(1));

        if (stats_counters_)
          stats_counters_->ClientRPCComplete(latency,
                                             /*is_ok=*/s.ok());

        // Wait before the next send if configured.
        Delay();
        if (IsRunning()) {
          SendOneRPC(client_rpc->stub_buf);
        } else {
          MarkRPCStreamDone();
        }

        delete client_rpc;
      });
}

GRPCClient::GRPCClient(const GRPCClientOptions& opts,
                       absl::string_view filepath, DelayProcess delay_type,
                       std::unique_ptr<RandomDistribution> delay_dist,
                       uint64_t program_idx)
    : opts_(opts),
      delay_type_(delay_type),
      delay_dist_(std::move(delay_dist)),
      program_idx_(program_idx),
      message_buffers_(fleetbench::rpc::kMaxMessagesPerProgram *
                       fleetbench::rpc::kMaxSettersPerMessage),
      s_(kMaxValueStringSize, 'a'),
      running_(true),
      inflight_rpcs_count_(0) {
  for (size_t i = 0; i < message_buffers_.size(); ++i) {
    fleetbench::rpc::RequestMessage_Set(
        program_idx_, i % fleetbench::rpc::kMaxMessagesPerProgram,
        i % fleetbench::rpc::kMaxSettersPerMessage, &message_buffers_[i], &s_);
  }

  stub_bufs_.reserve(opts_.peers.size() * opts_.connections_per_peer);

  ::grpc::ChannelArguments channel_args;

  // Enable TCP Tx Zerocopy if requested for client.
  if (absl::GetFlag(FLAGS_grpc_tx_zerocopy)) {
    channel_args.SetInt(GRPC_ARG_TCP_TX_ZEROCOPY_ENABLED, 1);
    const int tx_zerocopy_threshold =
        absl::GetFlag(FLAGS_grpc_tx_zerocopy_threshold_bytes);
    CHECK_GE(tx_zerocopy_threshold, 0);
    channel_args.SetInt(GRPC_ARG_TCP_TX_ZEROCOPY_SEND_BYTES_THRESHOLD,
                        tx_zerocopy_threshold);
  }

  for (const auto& peer : opts_.peers) {
    // TODO: more robust localhost matching
    if (peer.empty() ||
        (opts_.skip_loopback && absl::StrContains(peer, "localhost"))) {
      continue;
    }
    for (int32_t i = 0; i < opts_.connections_per_peer; ++i) {
      std::shared_ptr<::grpc::Channel> channel = ::grpc::CreateCustomChannel(
          peer, ::grpc::InsecureChannelCredentials(), channel_args);
      stub_bufs_.push_back({fleetbench::rpc::FleetBenchPerf::NewStub(channel),
                            message_buffers_[i % message_buffers_.size()]});
      LOG(INFO) << "Connected to " << peer << " connection #" << i;
    }
  }

  if (!filepath.empty()) {
    stats_counters_ =
        std::make_unique<RPCCounters>(absl::StrCat(filepath, "/client.txt"));
  }

  for (int j = 0; j < opts_.max_outstanding_rpcs; ++j) {
    for (auto& sb : stub_bufs_) {
      SendOneRPC(&sb);
      inflight_rpcs_count_++;
    }
  }
}

void GRPCClient::Shutdown() {
  absl::MutexLock l(&running_mtx_);
  running_ = false;
}

void GRPCClient::Wait() {
  inflight_rpcs_mtx_.LockWhen(absl::Condition(
      +[](uint64_t* count) { return *count == 0; }, &inflight_rpcs_count_));
  inflight_rpcs_mtx_.Unlock();
}

void GRPCClient::MarkRPCStreamDone() {
  absl::MutexLock l(&inflight_rpcs_mtx_);
  --inflight_rpcs_count_;
}

bool GRPCClient::IsRunning() {
  bool copy_running;
  {
    absl::MutexLock l(&running_mtx_);
    copy_running = running_;
  }
  return copy_running;
}

void GRPCClient::Delay() {
  if (delay_type_ == DelayProcess::RANDOM_DELAY) {
    int usec = delay_dist_->sample();
    usec = usec < 0 ? 0 : usec;
    absl::SleepFor(absl::Microseconds(usec));
  }
}

std::unique_ptr<GRPCClient> StartGRPCClient(
    const GRPCClientOptions& opts, absl::string_view filepath,
    const DistributionArgs& req_delay_us_dist_args, uint64_t program_idx) {
  auto req_delay_dist =
      GetDistribution(req_delay_us_dist_args, "req_delay_usec");
  bool no_delay = req_delay_dist->clamp_value() == 0;
  if (no_delay) {
    return std::make_unique<GRPCClient>(opts, filepath, DelayProcess::NO_DELAY,
                                        nullptr, program_idx);
  } else {
    return std::make_unique<GRPCClient>(opts, filepath,
                                        DelayProcess::RANDOM_DELAY,
                                        std::move(req_delay_dist), program_idx);
  }
}

}  // namespace fleetbench::rpc
