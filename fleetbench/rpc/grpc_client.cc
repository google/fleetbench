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

#include "fleetbench/rpc/grpc_client.h"

#include <cstddef>
#include <cstdint>
#include <functional>
#include <memory>
#include <utility>

#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/match.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"
#include "absl/time/clock.h"
#include "absl/time/time.h"
#include "fleetbench/rpc/fleetbenchservice.grpc.pb.h"
#include "fleetbench/rpc/generator_process.h"
#include "fleetbench/rpc/protos/combo.h"
#include "fleetbench/rpc/rpc_counters.h"
#include "include/grpc/grpc.h"
#include "include/grpcpp/client_context.h"
#include "include/grpcpp/create_channel.h"
#include "include/grpcpp/support/channel_arguments.h"
#include "include/grpcpp/support/status.h"

namespace fleetbench::rpc {

namespace {

// NOTE: similar to fleetbench/proto/lifecycle.h
const int kMaxValueStringSize = 1 << 20;
}  // namespace

void GRPCClient::SendOneRPC(GRPCClientStubBuffer* sb) {
  auto* client_rpc = new GRPCClientRPC();
  client_rpc->stub_buf = sb;
  client_rpc->request = sb->buf;
  client_rpc->start = absl::Now();

  sb->stub->async()->Message(
      &client_rpc->ctx, &client_rpc->request, &client_rpc->response,
      [this, client_rpc](grpc::Status s) {
        double latency = absl::FDivDuration((absl::Now() - client_rpc->start),
                                            absl::Microseconds(1));

        if (stats_counters_) {
          stats_counters_->ClientRPCComplete(latency,
                                             /*is_ok=*/s.ok());
        }
        GRPCClientStubBuffer* stub_buf = client_rpc->stub_buf;
        // Ensure client context is deleted before marking that we are done.
        // Otherwise we could race with the main thread shutting down and
        // destroying the stub.
        delete client_rpc;

        // Wait before the next send if configured.
        Delay();
        if (keep_running_()) {
          SendOneRPC(stub_buf);
        } else {
          MarkRPCStreamDone();
        }
      });
}

GRPCClient::GRPCClient(const GRPCClientOptions& opts,
                       absl::string_view filepath, DelayProcess delay_type,
                       std::unique_ptr<RandomDistribution> delay_dist,
                       absl::string_view program,
                       std::function<bool()> keep_running)
    : opts_(opts),
      delay_type_(delay_type),
      delay_dist_(std::move(delay_dist)),
      program_(program),
      keep_running_(keep_running),
      message_buffers_(fleetbench::rpc::kMaxMessagesPerProgram *
                       fleetbench::rpc::kMaxSettersPerMessage),
      s_(kMaxValueStringSize, 'a'),
      inflight_rpcs_count_(0) {
  for (size_t i = 0; i < message_buffers_.size(); ++i) {
    fleetbench::rpc::RequestMessage_Set(
        program_, i % fleetbench::rpc::kMaxMessagesPerProgram,
        i % fleetbench::rpc::kMaxSettersPerMessage, &message_buffers_[i], &s_);
  }

  stub_bufs_.reserve(opts_.peers.size() * opts_.connections_per_peer);

  ::grpc::ChannelArguments channel_args;

  // Enable TCP Tx Zerocopy if requested for client.
  if (opts.tx_zerocopy) {
    channel_args.SetInt(GRPC_ARG_TCP_TX_ZEROCOPY_ENABLED, 1);
    const int tx_zerocopy_threshold = opts.tx_zerocopy_threshold_bytes;
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
      stub_bufs_.push_back(
          {.stub = fleetbench::rpc::FleetBenchPerf::NewStub(channel),
           .buf = message_buffers_[i % message_buffers_.size()]});
      LOG(INFO) << "Connected to " << peer << " connection #" << i;
    }
  }

  if (!filepath.empty()) {
    stats_counters_ =
        std::make_unique<RPCCounters>(absl::StrCat(filepath, "/client.txt"));
  }

  for (int j = 0; j < opts_.max_outstanding_rpcs; ++j) {
    for (auto& sb : stub_bufs_) {
      if (keep_running_()) {
        absl::MutexLock l(&inflight_rpcs_mtx_);
        SendOneRPC(&sb);
        inflight_rpcs_count_++;
      }
    }
  }
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

void GRPCClient::Delay() {
  if (delay_type_ == DelayProcess::RANDOM_DELAY) {
    int usec = delay_dist_->sample();
    usec = usec < 0 ? 0 : usec;
    absl::SleepFor(absl::Microseconds(usec));
  }
}

std::unique_ptr<GRPCClient> StartGRPCClient(
    const GRPCClientOptions& opts, absl::string_view filepath,
    const DistributionArgs& req_delay_us_dist_args, absl::string_view program,
    std::function<bool()> keep_running) {
  auto req_delay_dist =
      GetDistribution(req_delay_us_dist_args, "req_delay_usec");
  bool no_delay = req_delay_dist->clamp_value() == 0;
  if (no_delay) {
    return std::make_unique<GRPCClient>(opts, filepath, DelayProcess::NO_DELAY,
                                        nullptr, program,
                                        std::move(keep_running));
  } else {
    return std::make_unique<GRPCClient>(
        opts, filepath, DelayProcess::RANDOM_DELAY, std::move(req_delay_dist),
        program, keep_running);
  }
}
}  // namespace fleetbench::rpc
