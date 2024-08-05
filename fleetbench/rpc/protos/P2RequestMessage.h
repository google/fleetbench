

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

// WARNING: DO NOT EDIT! This file is auto-generated.

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2REQUESTMESSAGE_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2REQUESTMESSAGE_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/access_message0.h"
#include "fleetbench/rpc/protos/P2/request/access_message1.h"
#include "fleetbench/rpc/protos/P2/request/access_message2.h"
#include "fleetbench/rpc/protos/P2RequestMessage.pb.h"

namespace fleetbench::rpc {

const int kP2RequestMessageMaxMessages = 3;

inline void P2RequestMessage_Set(const int msg_idx, const int var_idx,
                                 P2RequestMessage* message, std::string* s) {
  CHECK_LT(msg_idx, kP2RequestMessageMaxMessages) << "Invalid msg_idx";

  switch (msg_idx) {
    case 0:
      fleetbench::rpc::P2::request::Message0::Message0_Set(
          var_idx, message->mutable_m_0(), s);
      break;

    case 1:
      fleetbench::rpc::P2::request::Message1::Message1_Set(
          var_idx, message->mutable_m_1(), s);
      break;

    case 2:
      fleetbench::rpc::P2::request::Message2::Message2_Set(
          var_idx, message->mutable_m_2(), s);
      break;

    default:
      break;
  }
}

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2REQUESTMESSAGE_H_
