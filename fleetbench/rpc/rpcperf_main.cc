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

#include <limits.h>
#include <unistd.h>

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "absl/flags/parse.h"
#include "absl/flags/flag.h"
#include "absl/log/log.h"
#include "absl/strings/string_view.h"
#include "fleetbench/rpc/grpc.h"
#include "fleetbench/rpc/rpcperf.h"

ABSL_FLAG(std::vector<std::string>, ports, {"20000"},
          "comma-separated list of ports");
ABSL_FLAG(int32_t, workers, -1, "number of worker threads");
ABSL_FLAG(int32_t, max_outstanding_rpcs, 100, "max outstanding RPCs");
ABSL_FLAG(bool, compress, false, "whether to compress");
ABSL_FLAG(bool, checksum, false, "whether to have RPC checksums");
ABSL_FLAG(bool, skip_loopback, true, "whether to skip loop back connections");
ABSL_FLAG(std::vector<std::string>, peers, {}, "peers");
ABSL_FLAG(int32_t, max_peers, -1,
          "maximum number of peers to connect to (randomly selected). "
          "if -1, we connect to all peers.");
ABSL_FLAG(int32_t, connections_per_peer, 1, "connection per peer");
ABSL_FLAG(bool, logstats, true, "Whether to log stats.");
ABSL_FLAG(std::string, logstats_output_path, "",
          "Log stats output directory to which to store stats files to. Must "
          "exist before running.");
const char* distribution_help =
    "Inline string or local file with protobuf dist-spec. "
    "If not set, we fallback to a constant distribution specified by "
    "0 for delay distribution. "
    "Valid distribution types: [constant, uniform, empirical, "
    "exponential, gaussian, poisson]. "
    "Params: [distribution, constant_value, uniform_min, uniform_max, "
    "exponential_lambda, gaussian_mean, gaussian_stdev,"
    "poisson_mean]. "
    "'distribution' is a required string. "
    "'empirical' is an optional list of doubles. "
    "All other keys are optional doubles."
    "See also: fleetbench/rpc/distributionargs.proto::DistributionArgs";
ABSL_FLAG(std::string, req_delay_us_dist, "", distribution_help);
ABSL_FLAG(std::string, resp_delay_us_dist, "", distribution_help);
ABSL_FLAG(int32_t, seconds_to_run, 0,
          "Total runtime in seconds (<= 0 to run forever).");
ABSL_FLAG(uint64_t, program_idx, 0,
          "Program index to test with. This corresponds to the set of protos "
          "in fleetbench/rpc/protos/P* path.");

int main(int argc, char** argv) {
  absl::ParseCommandLine(argc, argv);

  LOG(INFO) << "Starting RPCPerf main ...";

  bool logstats = absl::GetFlag(FLAGS_logstats);
  std::string logstats_output_path = absl::GetFlag(FLAGS_logstats_output_path);
  if (logstats_output_path.empty() && logstats) {
    LOG(FATAL) << "--logstats_output_path needed if --logstats=true";
  }
  if (!logstats) {
    logstats_output_path = "";
  }

  char hostname_c[HOST_NAME_MAX];
  const auto result = gethostname(hostname_c, HOST_NAME_MAX);
  const std::string hostname(result ? "unknown" : hostname_c);
  LOG(INFO) << "machine=" << hostname;

  std::shared_ptr<fleetbench::rpc::GRPCServer> server =
      fleetbench::rpc::CreateAndStartServer(
          absl::GetFlag(FLAGS_ports), absl::GetFlag(FLAGS_workers),
          absl::GetFlag(FLAGS_compress), absl::GetFlag(FLAGS_checksum),
          logstats_output_path, absl::GetFlag(FLAGS_resp_delay_us_dist),
          absl::GetFlag(FLAGS_program_idx));

  std::shared_ptr<fleetbench::rpc::GRPCClient> client =
      fleetbench::rpc::CreateAndStartClient(
          absl::GetFlag(FLAGS_max_outstanding_rpcs),
          absl::GetFlag(FLAGS_compress), absl::GetFlag(FLAGS_checksum),
          absl::GetFlag(FLAGS_skip_loopback), absl::GetFlag(FLAGS_peers),
          absl::GetFlag(FLAGS_max_peers),
          absl::GetFlag(FLAGS_connections_per_peer), logstats_output_path,
          absl::GetFlag(FLAGS_req_delay_us_dist),
          absl::GetFlag(FLAGS_program_idx));

  LOG(INFO) << "Waiting for termination ...";

  fleetbench::rpc::Wait(server, client, absl::GetFlag(FLAGS_seconds_to_run));

  LOG(INFO) << "Complete";
  return 0;
}
