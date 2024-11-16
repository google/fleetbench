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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message1.pb.h"

namespace fleetbench::rpc::P7::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_0(s->substr(0, 10));
  message->set_f_1(0x18bc24);
  message->set_f_2(Message1::E1_CONST_4);
  message->set_f_3(s->substr(0, 23));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_2(Message1::E1_CONST_1);
  message->set_f_1(0x439d51d);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_3(s->substr(0, 25));
  message->set_f_1(0xb0ea89);
  message->set_f_0(s->substr(0, 6));
  message->set_f_4(s->substr(0, 3));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_1(0x1764b5c);
  message->set_f_5(s->substr(0, 6));
  message->set_f_3(s->substr(0, 24));
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
}  // namespace fleetbench::rpc::P7::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
