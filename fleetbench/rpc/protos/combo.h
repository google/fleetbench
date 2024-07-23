

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
#include "fleetbench/rpc/protos/P0/request/access_message0.h"
#include "fleetbench/rpc/protos/P0/request/access_message1.h"
#include "fleetbench/rpc/protos/P0/request/access_message2.h"
#include "fleetbench/rpc/protos/P0/response/access_message0.h"
#include "fleetbench/rpc/protos/P0/response/access_message1.h"
#include "fleetbench/rpc/protos/P0/response/access_message2.h"
#include "fleetbench/rpc/protos/P1/request/access_message0.h"
#include "fleetbench/rpc/protos/P1/request/access_message1.h"
#include "fleetbench/rpc/protos/P1/request/access_message2.h"
#include "fleetbench/rpc/protos/P1/response/access_message0.h"
#include "fleetbench/rpc/protos/P1/response/access_message1.h"
#include "fleetbench/rpc/protos/P1/response/access_message2.h"
#include "fleetbench/rpc/protos/P2/request/access_message0.h"
#include "fleetbench/rpc/protos/P2/request/access_message1.h"
#include "fleetbench/rpc/protos/P2/request/access_message2.h"
#include "fleetbench/rpc/protos/P2/response/access_message0.h"
#include "fleetbench/rpc/protos/P2/response/access_message1.h"
#include "fleetbench/rpc/protos/P2/response/access_message2.h"
#include "fleetbench/rpc/protos/P3/request/access_message0.h"
#include "fleetbench/rpc/protos/P3/request/access_message1.h"
#include "fleetbench/rpc/protos/P3/request/access_message2.h"
#include "fleetbench/rpc/protos/P3/response/access_message0.h"
#include "fleetbench/rpc/protos/P3/response/access_message1.h"
#include "fleetbench/rpc/protos/P3/response/access_message2.h"
#include "fleetbench/rpc/protos/P4/request/access_message0.h"
#include "fleetbench/rpc/protos/P4/request/access_message1.h"
#include "fleetbench/rpc/protos/P4/request/access_message2.h"
#include "fleetbench/rpc/protos/P4/response/access_message0.h"
#include "fleetbench/rpc/protos/P4/response/access_message1.h"
#include "fleetbench/rpc/protos/P4/response/access_message2.h"
#include "fleetbench/rpc/protos/P5/request/access_message0.h"
#include "fleetbench/rpc/protos/P5/request/access_message1.h"
#include "fleetbench/rpc/protos/P5/request/access_message2.h"
#include "fleetbench/rpc/protos/P5/response/access_message0.h"
#include "fleetbench/rpc/protos/P5/response/access_message1.h"
#include "fleetbench/rpc/protos/P5/response/access_message2.h"
#include "fleetbench/rpc/protos/P6/request/access_message0.h"
#include "fleetbench/rpc/protos/P6/request/access_message1.h"
#include "fleetbench/rpc/protos/P6/request/access_message2.h"
#include "fleetbench/rpc/protos/P6/response/access_message0.h"
#include "fleetbench/rpc/protos/P6/response/access_message1.h"
#include "fleetbench/rpc/protos/P6/response/access_message2.h"
#include "fleetbench/rpc/protos/P7/request/access_message0.h"
#include "fleetbench/rpc/protos/P7/request/access_message1.h"
#include "fleetbench/rpc/protos/P7/request/access_message2.h"
#include "fleetbench/rpc/protos/P7/response/access_message0.h"
#include "fleetbench/rpc/protos/P7/response/access_message1.h"
#include "fleetbench/rpc/protos/P7/response/access_message2.h"
#include "fleetbench/rpc/protos/P8/request/access_message0.h"
#include "fleetbench/rpc/protos/P8/request/access_message1.h"
#include "fleetbench/rpc/protos/P8/request/access_message2.h"
#include "fleetbench/rpc/protos/P8/response/access_message0.h"
#include "fleetbench/rpc/protos/P8/response/access_message1.h"
#include "fleetbench/rpc/protos/P8/response/access_message2.h"
#include "fleetbench/rpc/protos/P9/request/access_message0.h"
#include "fleetbench/rpc/protos/P9/request/access_message1.h"
#include "fleetbench/rpc/protos/P9/request/access_message2.h"
#include "fleetbench/rpc/protos/P9/response/access_message0.h"
#include "fleetbench/rpc/protos/P9/response/access_message1.h"
#include "fleetbench/rpc/protos/P9/response/access_message2.h"
#include "fleetbench/rpc/protos/combo.pb.h"

namespace fleetbench::rpc {

const int kMaxPrograms = 10;
const int kMaxMessagesPerProgram = 3;
const int kMaxSettersPerMessage = 4;

inline void RequestMessage_Set(const int prog_idx, const int msg_idx,
                               const int var_idx, RequestMessage* message,
                               std::string* s) {
  CHECK_LT(prog_idx, kMaxPrograms) << "Invalid prog_idx";
  CHECK_LT(msg_idx, kMaxMessagesPerProgram) << "Invalid msg_idx";
  switch (prog_idx) {
    case 0:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P0::request::Message0::Message0_Set(
              var_idx, message->mutable_p0()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P0::request::Message1::Message1_Set(
              var_idx, message->mutable_p0()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P0::request::Message2::Message2_Set(
              var_idx, message->mutable_p0()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 1:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P1::request::Message0::Message0_Set(
              var_idx, message->mutable_p1()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P1::request::Message1::Message1_Set(
              var_idx, message->mutable_p1()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P1::request::Message2::Message2_Set(
              var_idx, message->mutable_p1()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 2:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P2::request::Message0::Message0_Set(
              var_idx, message->mutable_p2()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P2::request::Message1::Message1_Set(
              var_idx, message->mutable_p2()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P2::request::Message2::Message2_Set(
              var_idx, message->mutable_p2()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 3:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P3::request::Message0::Message0_Set(
              var_idx, message->mutable_p3()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P3::request::Message1::Message1_Set(
              var_idx, message->mutable_p3()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P3::request::Message2::Message2_Set(
              var_idx, message->mutable_p3()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 4:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P4::request::Message0::Message0_Set(
              var_idx, message->mutable_p4()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P4::request::Message1::Message1_Set(
              var_idx, message->mutable_p4()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P4::request::Message2::Message2_Set(
              var_idx, message->mutable_p4()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 5:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P5::request::Message0::Message0_Set(
              var_idx, message->mutable_p5()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P5::request::Message1::Message1_Set(
              var_idx, message->mutable_p5()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P5::request::Message2::Message2_Set(
              var_idx, message->mutable_p5()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 6:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P6::request::Message0::Message0_Set(
              var_idx, message->mutable_p6()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P6::request::Message1::Message1_Set(
              var_idx, message->mutable_p6()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P6::request::Message2::Message2_Set(
              var_idx, message->mutable_p6()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 7:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P7::request::Message0::Message0_Set(
              var_idx, message->mutable_p7()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P7::request::Message1::Message1_Set(
              var_idx, message->mutable_p7()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P7::request::Message2::Message2_Set(
              var_idx, message->mutable_p7()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 8:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P8::request::Message0::Message0_Set(
              var_idx, message->mutable_p8()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P8::request::Message1::Message1_Set(
              var_idx, message->mutable_p8()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P8::request::Message2::Message2_Set(
              var_idx, message->mutable_p8()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 9:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P9::request::Message0::Message0_Set(
              var_idx, message->mutable_p9()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P9::request::Message1::Message1_Set(
              var_idx, message->mutable_p9()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P9::request::Message2::Message2_Set(
              var_idx, message->mutable_p9()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    default:
      break;
  }
}

inline void ResponseMessage_Set(const int prog_idx, const int msg_idx,
                                const int var_idx, ResponseMessage* message,
                                std::string* s) {
  CHECK_LT(prog_idx, kMaxPrograms) << "Invalid prog_idx";
  CHECK_LT(msg_idx, kMaxMessagesPerProgram) << "Invalid msg_idx";
  switch (prog_idx) {
    case 0:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P0::response::Message0::Message0_Set(
              var_idx, message->mutable_p0()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P0::response::Message1::Message1_Set(
              var_idx, message->mutable_p0()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P0::response::Message2::Message2_Set(
              var_idx, message->mutable_p0()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 1:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P1::response::Message0::Message0_Set(
              var_idx, message->mutable_p1()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P1::response::Message1::Message1_Set(
              var_idx, message->mutable_p1()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P1::response::Message2::Message2_Set(
              var_idx, message->mutable_p1()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 2:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P2::response::Message0::Message0_Set(
              var_idx, message->mutable_p2()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P2::response::Message1::Message1_Set(
              var_idx, message->mutable_p2()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P2::response::Message2::Message2_Set(
              var_idx, message->mutable_p2()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 3:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P3::response::Message0::Message0_Set(
              var_idx, message->mutable_p3()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P3::response::Message1::Message1_Set(
              var_idx, message->mutable_p3()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P3::response::Message2::Message2_Set(
              var_idx, message->mutable_p3()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 4:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P4::response::Message0::Message0_Set(
              var_idx, message->mutable_p4()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P4::response::Message1::Message1_Set(
              var_idx, message->mutable_p4()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P4::response::Message2::Message2_Set(
              var_idx, message->mutable_p4()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 5:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P5::response::Message0::Message0_Set(
              var_idx, message->mutable_p5()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P5::response::Message1::Message1_Set(
              var_idx, message->mutable_p5()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P5::response::Message2::Message2_Set(
              var_idx, message->mutable_p5()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 6:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P6::response::Message0::Message0_Set(
              var_idx, message->mutable_p6()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P6::response::Message1::Message1_Set(
              var_idx, message->mutable_p6()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P6::response::Message2::Message2_Set(
              var_idx, message->mutable_p6()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 7:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P7::response::Message0::Message0_Set(
              var_idx, message->mutable_p7()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P7::response::Message1::Message1_Set(
              var_idx, message->mutable_p7()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P7::response::Message2::Message2_Set(
              var_idx, message->mutable_p7()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 8:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P8::response::Message0::Message0_Set(
              var_idx, message->mutable_p8()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P8::response::Message1::Message1_Set(
              var_idx, message->mutable_p8()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P8::response::Message2::Message2_Set(
              var_idx, message->mutable_p8()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    case 9:
      switch (msg_idx) {
        case 0:
          fleetbench::rpc::P9::response::Message0::Message0_Set(
              var_idx, message->mutable_p9()->mutable_m_0(), s);
          break;

        case 1:
          fleetbench::rpc::P9::response::Message1::Message1_Set(
              var_idx, message->mutable_p9()->mutable_m_1(), s);
          break;

        case 2:
          fleetbench::rpc::P9::response::Message2::Message2_Set(
              var_idx, message->mutable_p9()->mutable_m_2(), s);
          break;

        default:
          break;
      }
      break;

    default:
      break;
  }
}

}  // namespace fleetbench::rpc
#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_COMBO_H_
