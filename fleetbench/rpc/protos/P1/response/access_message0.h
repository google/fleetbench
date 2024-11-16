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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/response/Message0.pb.h"

namespace fleetbench::rpc::P1::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_0(s->substr(0, 5));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M1* v0_0 = message->add_f_5();
  Message0::M1::M3* v1 = v0_0->mutable_f_3();
  v1->set_f_1(true);
  v1->set_f_4(true);
  v1->set_f_3(0x1a);
  Message0::M1::M3::M4* v2_0 = v1->add_f_11();
  Message0::M1::M3::M4::M6* v3_0 = v2_0->add_f_3();
  v3_0->set_f_0(0x6dda4970);
  v1->set_f_2(false);
  message->set_f_1(0x50);
  message->set_f_0(s->substr(0, 17));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_1(0x6a);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_0(s->substr(0, 340));
  message->set_f_1(0xb);
}
const int kMessage0MaxProtoSetters = 4;
inline void Message0_Set(const int i, Message0* message, std::string* s) {
  CHECK(i < kMessage0MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message0_Set_1(message, s);
      break;
    case 1:
      Message0_Set_2(message, s);
      break;
    case 2:
      Message0_Set_3(message, s);
      break;
    case 3:
      Message0_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P1::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_RESPONSE_ACCESS_MESSAGE0_H_
