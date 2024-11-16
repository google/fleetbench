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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/response/Message0.pb.h"

namespace fleetbench::rpc::P7::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_4();
  v0->set_f_1(s->substr(0, 34));
  v0->set_f_5(0x4c);
  v0->set_f_3(s->substr(0, 64));
  v0->set_f_0(0xb67bf722491f22);
  message->set_f_0(0xf5d7148);
  Message0::M3* v1_0 = message->add_f_7();
  (void)v1_0;  // Suppresses clang-tidy.
  Message0::M2* v2 = message->mutable_f_6();
  v2->set_f_0(0x17f9309e3);
  Message0::M4* v3 = message->mutable_f_8();
  v3->set_f_1(s->substr(0, 53));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_8();
  v0->add_f_0(0x383dbb7eeb73e8);
  v0->add_f_0(0x1123756abb41a);
  v0->set_f_1(s->substr(0, 8));
  Message0::M5* v1 = message->mutable_f_9();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M3* v2_0 = message->add_f_7();
  v2_0->set_f_0(s->substr(0, 52));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_8();
  v0->set_f_1(s->substr(0, 53));
  Message0::M1* v1 = message->mutable_f_4();
  v1->set_f_5(0x44);
  v1->set_f_1(s->substr(0, 21));
  v1->set_f_3(s->substr(0, 24));
  v1->set_f_0(0xebfc73f);
  Message0::M1::M7* v2 = v1->mutable_f_9();
  v2->set_f_2(0.469147);
  v2->set_f_12(s->substr(0, 45));
  Message0::M1::M7::M9* v3_0 = v2->add_f_15();
  Message0::M1::M7::M9::M10* v4 = v3_0->mutable_f_7();
  (void)v4;  // Suppresses clang-tidy.
  Message0::M1::M7::M9* v3_1 = v2->add_f_15();
  v3_1->set_f_1(s->substr(0, 21));
  v3_1->set_f_2(Message0::M1::M7::M9::E3_CONST_1);
  v3_1->add_f_0(0xf514c);
  v2->set_f_1(false);
  v2->set_f_9(Message0::M1::M7::E2_CONST_4);
  Message0::M1::M7::M8* v5_0 = v2->add_f_14();
  (void)v5_0;  // Suppresses clang-tidy.
  v2->set_f_11(s->substr(0, 64));
  v2->set_f_6(0.323342);
  v2->set_f_4(0x1d7983);
  v1->add_f_2(s->substr(0, 40));
  v1->add_f_2(s->substr(0, 62));
  Message0::M5* v6 = message->mutable_f_9();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_0(0x7f1e26109);
  message->add_f_1(s->substr(0, 2694));
  Message0::M2* v7 = message->mutable_f_6();
  v7->set_f_0(0x39);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_8();
  v0->set_f_1(s->substr(0, 2));
  Message0::M5* v1 = message->mutable_f_9();
  v1->set_f_0(s->substr(0, 27));
  Message0::M1* v2 = message->mutable_f_4();
  v2->add_f_2(s->substr(0, 26));
  v2->set_f_1(s->substr(0, 25));
  message->add_f_1(s->substr(0, 27));
  Message0::M6* v3_0 = message->add_f_11();
  v3_0->set_f_3(s->substr(0, 12));
  v3_0->add_f_1(0x10ba28512a0a4);
  v3_0->set_f_9(0.902993);
  v3_0->set_f_11(0.510019);
  v3_0->add_f_8(0x17b32b);
  v3_0->add_f_8(0x814c68098ae28e);
  v3_0->add_f_8(0x1d5);
  v3_0->add_f_10(s->substr(0, 15));
  message->set_f_0(0x624ad8be);
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
}  // namespace fleetbench::rpc::P7::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE0_H_
