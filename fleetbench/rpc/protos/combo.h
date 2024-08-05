

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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_COMBO_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_COMBO_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0RequestMessage.h"
#include "fleetbench/rpc/protos/P0ResponseMessage.h"
#include "fleetbench/rpc/protos/P1RequestMessage.h"
#include "fleetbench/rpc/protos/P1ResponseMessage.h"
#include "fleetbench/rpc/protos/P2RequestMessage.h"
#include "fleetbench/rpc/protos/P2ResponseMessage.h"
#include "fleetbench/rpc/protos/P3RequestMessage.h"
#include "fleetbench/rpc/protos/P3ResponseMessage.h"
#include "fleetbench/rpc/protos/P4RequestMessage.h"
#include "fleetbench/rpc/protos/P4ResponseMessage.h"
#include "fleetbench/rpc/protos/P5RequestMessage.h"
#include "fleetbench/rpc/protos/P5ResponseMessage.h"
#include "fleetbench/rpc/protos/P6RequestMessage.h"
#include "fleetbench/rpc/protos/P6ResponseMessage.h"
#include "fleetbench/rpc/protos/P7RequestMessage.h"
#include "fleetbench/rpc/protos/P7ResponseMessage.h"
#include "fleetbench/rpc/protos/P8RequestMessage.h"
#include "fleetbench/rpc/protos/P8ResponseMessage.h"
#include "fleetbench/rpc/protos/P9RequestMessage.h"
#include "fleetbench/rpc/protos/P9ResponseMessage.h"
#include "fleetbench/rpc/protos/RequestMessage.pb.h"
#include "fleetbench/rpc/protos/ResponseMessage.pb.h"

namespace fleetbench::rpc {

const int kMaxSettersPerMessage = 4;
const int kMaxMessagesPerProgram = 3;

const int kRequestMessageMaxPrograms = 10;

inline void RequestMessage_Set(const int prog_idx, const int msg_idx,
                               const int var_idx,
                               fleetbench::rpc::RequestMessage* message,
                               std::string* s) {
  CHECK_LT(prog_idx, kRequestMessageMaxPrograms) << "Invalid prog_idx";
  switch (prog_idx) {
    case 0:
      fleetbench::rpc::P0RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p0(), s);
      break;

    case 1:
      fleetbench::rpc::P1RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p1(), s);
      break;

    case 2:
      fleetbench::rpc::P2RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p2(), s);
      break;

    case 3:
      fleetbench::rpc::P3RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p3(), s);
      break;

    case 4:
      fleetbench::rpc::P4RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p4(), s);
      break;

    case 5:
      fleetbench::rpc::P5RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p5(), s);
      break;

    case 6:
      fleetbench::rpc::P6RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p6(), s);
      break;

    case 7:
      fleetbench::rpc::P7RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p7(), s);
      break;

    case 8:
      fleetbench::rpc::P8RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p8(), s);
      break;

    case 9:
      fleetbench::rpc::P9RequestMessage_Set(msg_idx, var_idx,
                                            message->mutable_p9(), s);
      break;

    default:
      break;
  }
}

const int kResponseMessageMaxPrograms = 10;

inline void ResponseMessage_Set(const int prog_idx, const int msg_idx,
                                const int var_idx,
                                fleetbench::rpc::ResponseMessage* message,
                                std::string* s) {
  CHECK_LT(prog_idx, kResponseMessageMaxPrograms) << "Invalid prog_idx";
  switch (prog_idx) {
    case 0:
      fleetbench::rpc::P0ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p0(), s);
      break;

    case 1:
      fleetbench::rpc::P1ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p1(), s);
      break;

    case 2:
      fleetbench::rpc::P2ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p2(), s);
      break;

    case 3:
      fleetbench::rpc::P3ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p3(), s);
      break;

    case 4:
      fleetbench::rpc::P4ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p4(), s);
      break;

    case 5:
      fleetbench::rpc::P5ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p5(), s);
      break;

    case 6:
      fleetbench::rpc::P6ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p6(), s);
      break;

    case 7:
      fleetbench::rpc::P7ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p7(), s);
      break;

    case 8:
      fleetbench::rpc::P8ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p8(), s);
      break;

    case 9:
      fleetbench::rpc::P9ResponseMessage_Set(msg_idx, var_idx,
                                             message->mutable_p9(), s);
      break;

    default:
      break;
  }
}

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_COMBO_H_
