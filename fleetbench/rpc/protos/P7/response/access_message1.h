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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/response/Message1.pb.h"

namespace fleetbench::rpc::P7::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_4();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_0(0x3226);
  Message1::M2* v1 = message->mutable_f_6();
  v1->add_f_1(0xa3b8a);
  Message1::M2::M3* v2 = v1->mutable_f_4();
  v2->set_f_3(s->substr(0, 27));
  v2->set_f_10(s->substr(0, 194));
  v2->set_f_5(s->substr(0, 124));
  v2->set_f_16(0x52);
  v2->add_f_7(0x6c59601);
  v2->add_f_7(0xb2763);
  v2->set_f_14(true);
  v2->set_f_6(s->substr(0, 34));
  v2->set_f_13(s->substr(0, 28));
  v2->set_f_1(0x6bed44454);
  v2->set_f_9(s->substr(0, 26));
  v1->set_f_0(0x2a);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_4();
  v0->set_f_1(Message1::M1::E1_CONST_3);
  message->set_f_0(0x5842472);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_0(0x1d5f);
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
}  // namespace fleetbench::rpc::P7::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE1_H_
