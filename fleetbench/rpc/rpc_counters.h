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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPC_COUNTERS_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPC_COUNTERS_H_

#include <cstdint>
#include <fstream>
#include <vector>

#include "absl/strings/string_view.h"
#include "absl/synchronization/mutex.h"

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

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPC_COUNTERS_H_
