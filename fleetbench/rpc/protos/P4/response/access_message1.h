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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/response/Message1.pb.h"

namespace fleetbench::rpc::P4::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_2(s->substr(0, 117));
  message->set_f_3(s->substr(0, 401));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_1(0xad5d1890132ac);
  message->set_f_3(s->substr(0, 127));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_0(0xf90afad388dbe83);
  message->set_f_1(0x2647ccbe2d30);
  message->set_f_2(s->substr(0, 225));
  message->set_f_3(s->substr(0, 52));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_3(s->substr(0, 32));
  message->set_f_0(0x56b6cd8fe99bec57);
  message->set_f_2(s->substr(0, 71));
  message->set_f_1(0x134b3b10a20d5);
}
const int kMessage1MaxProtoSetters = 4;
inline void Message1_Set(const int i, Message1* message, std::string* s) {
  CHECK(i < kMessage1MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message1_Set_1(message, s);
      break;
    case 1:
      Message1_Set_2(message, s);
      break;
    case 2:
      Message1_Set_3(message, s);
      break;
    case 3:
      Message1_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P4::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE1_H_
