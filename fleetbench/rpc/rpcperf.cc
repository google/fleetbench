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

#include <algorithm>
#include <cstdint>
#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "absl/flags/flag.h"
#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/random/random.h"
#include "absl/status/status.h"
#include "absl/strings/ascii.h"
#include "absl/strings/match.h"
#include "absl/strings/numbers.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "fleetbench/rpc/generator_process.h"
#include "fleetbench/rpc/grpc_client.h"
#include "fleetbench/rpc/grpc_server.h"
#include "fleetbench/rpc/util.h"
#include "include/grpcpp/security/server_credentials.h"
#include "include/grpcpp/server_builder.h"
#include "google/protobuf/text_format.h"

ABSL_FLAG(bool, grpc_tx_zerocopy, false,
          "Whether to enable gRPC TCP Tx Zerocopy");
ABSL_FLAG(int32_t, grpc_tx_zerocopy_threshold_bytes, 16 * 1024,
          "Only use gRPC TCP Tx Zerocopy for payloads > this size in bytes.");

namespace fleetbench::rpc {

namespace {

fleetbench::rpc::DistributionArgs ConstantDistribution(int32_t value) {
  fleetbench::rpc::DistributionArgs default_args;
  default_args.set_distribution(fleetbench::rpc::Constant::kName);
  default_args.set_constant_value(value);
  return default_args;
}

fleetbench::rpc::DistributionArgs DoParseDistributionArgs(
    absl::string_view dist_arg_spec, absl::string_view why,
    int32_t default_const_val) {
  fleetbench::rpc::DistributionArgs parsed;
  if (!fleetbench::rpc::ParseProto(&parsed, dist_arg_spec, why).ok()) {
    // Fallback to a constant distribution.
    // This means 0-byte sends/receives without delay.
    LOG(INFO) << "Using default constant distribution(" << default_const_val
              << ") for " << why;
    return ConstantDistribution(default_const_val);
  }
  return parsed;
}

fleetbench::rpc::DistributionArgs ParseDistributionArgs(
    absl::string_view dist_arg_spec, absl::string_view why,
    int32_t default_const_val) {
  fleetbench::rpc::DistributionArgs parsed =
      DoParseDistributionArgs(dist_arg_spec, why, default_const_val);
  std::string parsed_as_string;
  google::protobuf::TextFormat::PrintToString(parsed, &parsed_as_string);
  LOG(INFO) << "Parsed " << parsed_as_string << " for " << why;
  return parsed;
}

// Hosts that look like IPv6 address need to be wrapped in square brackets.
inline bool NeedsBrackets(absl::string_view host) {
  return !host.empty() && host[0] != '[' && absl::StrContains(host, ':');
}

std::string HostPortString(absl::string_view host, uint16_t port) {
  if (NeedsBrackets(host)) {
    return absl::StrCat("[", host, "]:", port);
  }
  return absl::StrCat(host, ":", port);
}

}  // namespace

std::unique_ptr<GRPCServer> CreateAndStartServer(
    std::vector<std::string> ports, int32_t workers, bool compress,
    bool checksum, std::string logstats_output_path,
    std::string resp_delay_us_dist, absl::string_view program,
    std::vector<int>* selected_ports) {
  CHECK(selected_ports == nullptr || selected_ports->size() == ports.size())
      << "selected_ports must be nullptr, or have the same size as ports";

  // First parse the distributions.
  fleetbench::rpc::DistributionArgs resp_delay_us_dist_args =
      ParseDistributionArgs(resp_delay_us_dist, "<Response delay distribution>",
                            0);

  grpc::ServerBuilder builder;

  for (int i = 0; i < ports.size(); ++i) {
    std::string& port_str = ports[i];
    if (port_str.empty()) {
      continue;
    }
    int port;
    if (!absl::SimpleAtoi(absl::StripAsciiWhitespace(port_str), &port)) {
      LOG(ERROR) << "Cannot parse port " << port_str;
      continue;
    }

    int* selected_port = selected_ports ? &(*selected_ports)[i] : nullptr;
    builder.AddListeningPort(HostPortString("::", port),
                             grpc::InsecureServerCredentials(), selected_port);
  }

  fleetbench::rpc::GRPCServerOptions opts;
  opts.compress = compress;
  opts.checksum = checksum;
  opts.workers = workers;
  opts.tx_zerocopy = absl::GetFlag(FLAGS_grpc_tx_zerocopy);
  opts.tx_zerocopy_threshold_bytes =
      absl::GetFlag(FLAGS_grpc_tx_zerocopy_threshold_bytes);
  return StartGRPCServer(opts, logstats_output_path, resp_delay_us_dist_args,
                         &builder, program);
}

std::unique_ptr<GRPCClient> CreateAndStartClient(
    int32_t max_outstanding_rpcs, bool compress, bool checksum,
    bool skip_loopback, std::vector<std::string> peers, int32_t max_peers,
    int32_t connections_per_peer, std::string logstats_output_path,
    std::string req_delay_us_dist, absl::string_view program,
    std::function<bool()> keep_running) {
  // First parse the distributions.
  fleetbench::rpc::DistributionArgs req_delay_us_dist_args =
      ParseDistributionArgs(req_delay_us_dist,
                            "<Request/Inter-RPC delay distribution>", 0);

  std::shuffle(peers.begin(), peers.end(), absl::BitGen());
  if (max_peers > 0 && max_peers < peers.size()) {
    peers.resize(max_peers);
  }

  fleetbench::rpc::GRPCClientOptions client_opts;
  client_opts.max_outstanding_rpcs = max_outstanding_rpcs;
  client_opts.compress = compress;
  client_opts.checksum = checksum;
  client_opts.peers = peers;
  client_opts.connections_per_peer = connections_per_peer;
  client_opts.skip_loopback = skip_loopback;
  client_opts.tx_zerocopy = absl::GetFlag(FLAGS_grpc_tx_zerocopy);
  client_opts.tx_zerocopy_threshold_bytes =
      absl::GetFlag(FLAGS_grpc_tx_zerocopy_threshold_bytes);

  return fleetbench::rpc::StartGRPCClient(client_opts, logstats_output_path,
                                          req_delay_us_dist_args, program,
                                          keep_running);
}

void Wait(std::unique_ptr<GRPCServer> server,
          std::unique_ptr<GRPCClient> client) {
  client->Wait();  // wait for all RPCs to be stopped sending
  server->Shutdown();
  server->Wait();  // wait for server completion
}

}  // namespace fleetbench::rpc
