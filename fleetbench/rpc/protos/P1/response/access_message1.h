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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/response/Message1.pb.h"

namespace fleetbench::rpc::P1::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_2();
  v0_0->set_f_3(0.938668);
  v0_0->set_f_6(0x893d160d5e90);
  v0_0->set_f_0(s->substr(0, 24));
  v0_0->set_f_14(0x44);
  v0_0->set_f_8(Message1::M1::E1_CONST_3);
  v0_0->set_f_4(0x1f);
  v0_0->set_f_10(0x28);
  v0_0->set_f_2(s->substr(0, 28));
  v0_0->set_f_12(0x39);
  v0_0->set_f_9(s->substr(0, 27));
  message->set_f_0(0x34);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_2();
  v0_0->set_f_11(0x229c);
  Message1::M1::M2* v1 = v0_0->mutable_f_23();
  v1->set_f_8(false);
  Message1::M1::M2::M5* v2 = v1->mutable_f_22();
  v2->set_f_0(0x66);
  v2->set_f_12(0x32be19735e5);
  v2->set_f_15(0x6);
  v2->set_f_14(Message1::M1::M2::M5::E4_CONST_2);
  v2->set_f_11(0x66);
  v2->set_f_9(0x1156bf26);
  v2->set_f_1(0x59);
  v2->set_f_2(s->substr(0, 17711));
  v1->set_f_1(s->substr(0, 12));
  v1->set_f_2(0x253bb9b24);
  v0_0->set_f_13(false);
  v0_0->set_f_9(s->substr(0, 8));
  v0_0->set_f_14(0x149cd580337);
  v0_0->add_f_5(s->substr(0, 24));
  v0_0->add_f_5(s->substr(0, 43));
  v0_0->set_f_15(s->substr(0, 15));
  v0_0->set_f_1(s->substr(0, 30));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_0(0x2dc8);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P1::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_RESPONSE_ACCESS_MESSAGE1_H_
