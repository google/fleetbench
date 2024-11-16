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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message1.pb.h"

namespace fleetbench::rpc::P1::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M4* v0 = message->mutable_f_9();
  v0->set_f_0(0xbb7c03a070);
  v0->set_f_1(Message1::M4::E2_CONST_4);
  v0->set_f_2(0x11f5d08e);
  message->set_f_2(true);
  Message1::M1* v1_0 = message->add_f_5();
  Message1::M1::M5* v2 = v1_0->mutable_f_2();
  v2->set_f_2(0xb303d);
  Message1::M1::M5::M6* v3 = v2->mutable_f_7();
  v3->set_f_1(false);
  Message1::M2* v4 = message->mutable_f_7();
  v4->set_f_0(false);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_7();
  v0->set_f_0(false);
  message->set_f_2(true);
  Message1::M3* v1_0 = message->add_f_8();
  v1_0->set_f_0(0x65e9e9c1);
  Message1::M4* v2 = message->mutable_f_9();
  v2->set_f_3(false);
  v2->set_f_2(0x54018882);
  v2->set_f_1(Message1::M4::E2_CONST_2);
  v2->set_f_0(0x772dcc40cf2e);
  message->set_f_0(true);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M3* v0_0 = message->add_f_8();
  (void)v0_0;  // Suppresses clang-tidy.
  Message1::M4* v1 = message->mutable_f_9();
  v1->set_f_2(0x67ff8600);
  v1->set_f_3(true);
  v1->set_f_1(Message1::M4::E2_CONST_1);
  v1->set_f_0(0x2d16d);
  Message1::M2* v2 = message->mutable_f_7();
  v2->set_f_0(true);
  Message1::M1* v3_0 = message->add_f_5();
  Message1::M1::M5* v4 = v3_0->mutable_f_2();
  v4->set_f_0(0x58);
  Message1::M1::M5::M6* v5 = v4->mutable_f_7();
  v5->set_f_0(s->substr(0, 17));
  v5->set_f_1(true);
  v4->set_f_3(0x23e7);
  v4->set_f_1(0x5f316b4);
  message->set_f_0(true);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_7();
  v0->set_f_0(false);
  message->set_f_0(false);
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
}  // namespace fleetbench::rpc::P1::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
