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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/response/Message2.pb.h"

namespace fleetbench::rpc::P3::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M2* v0_0 = message->add_f_4();
  v0_0->set_f_0(0x19);
  v0_0->set_f_1(0x1857551c1887c);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_5();
  v0->set_f_2(Message2::M3::E2_CONST_1);
  Message2::M2* v1_0 = message->add_f_4();
  (void)v1_0;  // Suppresses clang-tidy.
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_0(s->substr(0, 3));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_5();
  v0->set_f_3(0.373651);
  v0->set_f_1(s->substr(0, 6));
  v0->set_f_4(Message2::M3::E3_CONST_2);
  v0->set_f_2(Message2::M3::E2_CONST_3);
  Message2::M1* v1 = message->mutable_f_3();
  v1->set_f_0(0x33d9);
  message->set_f_0(s->substr(0, 1));
}
const int kMessage2MaxProtoSetters = 4;
inline void Message2_Set(const int i, Message2* message, std::string* s) {
  CHECK(i < kMessage2MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message2_Set_1(message, s);
      break;
    case 1:
      Message2_Set_2(message, s);
      break;
    case 2:
      Message2_Set_3(message, s);
      break;
    case 3:
      Message2_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P3::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE2_H_
