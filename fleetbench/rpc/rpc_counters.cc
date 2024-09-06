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

#include "fleetbench/rpc/rpc_counters.h"

#include <ios>
#include <string>

#include "absl/log/log.h"
#include "absl/strings/str_join.h"
#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"

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

}  // namespace fleetbench::rpc
