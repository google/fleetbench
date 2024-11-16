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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/response/Message2.pb.h"

namespace fleetbench::rpc::P7::response::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->add_f_0(0xb750274757b9);
  Message2::M3* v0 = message->mutable_f_6();
  v0->add_f_7(s->substr(0, 36));
  v0->set_f_6(s->substr(0, 124));
  v0->add_f_9(0xeefe068b4a5a);
  v0->add_f_10(s->substr(0, 1829));
  v0->add_f_4(0x1dc7b7833f6c6);
  v0->add_f_4(0x15d516);
  v0->add_f_4(0x1a0dd567dc65b);
  Message2::M3::M4* v1 = v0->mutable_f_22();
  v1->set_f_1(Message2::M3::M4::E4_CONST_5);
  v1->add_f_2(0x1b28b2);
  v1->add_f_2(0x10b9c5c87bdd1);
  v1->add_f_2(0x23bed33);
  v1->set_f_0(s->substr(0, 24));
  v0->set_f_8(Message2::M3::E2_CONST_3);
  v0->set_f_1(s->substr(0, 20));
  v0->set_f_5(false);
  v0->add_f_3(0x1198725f32bf6);
  v0->add_f_3(0x10d502);
  Message2::M1* v2 = message->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_6();
  Message2::M3::M4* v1 = v0->mutable_f_22();
  v1->set_f_0(s->substr(0, 11));
  v1->add_f_2(0xe70cd6bbeac5f0);
  v0->add_f_4(0x10);
  v0->add_f_9(0x195598);
  v0->add_f_9(0x11e4cade4ee44);
  v0->add_f_9(0x317cbc5ff8b828);
  v0->set_f_8(Message2::M3::E2_CONST_1);
  v0->set_f_1(s->substr(0, 49));
  v0->add_f_7(s->substr(0, 38));
  Message2::M1* v2 = message->mutable_f_2();
  v2->set_f_0(0x14a631dc8d8b6d);
  message->add_f_0(0x3603);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->add_f_0(0xc3e8b9faa10cf0);
  Message2::M3* v0 = message->mutable_f_6();
  v0->set_f_1(s->substr(0, 39));
  v0->set_f_2(Message2::M3::E1_CONST_2);
  v0->set_f_0(s->substr(0, 29));
  v0->add_f_9(0x7d753f18b);
  v0->add_f_4(0x6641272);
  v0->add_f_4(0xe2b32da0ec9589);
  v0->set_f_13(Message2::M3::E3_CONST_4);
  v0->add_f_3(0x231f);
  v0->set_f_14(s->substr(0, 64));
  v0->set_f_15(s->substr(0, 20));
  v0->set_f_12(s->substr(0, 26));
  v0->add_f_11(0x1fc246eb4398);
  Message2::M3::M4* v1 = v0->mutable_f_22();
  v1->add_f_2(0x7a7a08e5e);
  v1->set_f_1(Message2::M3::M4::E4_CONST_1);
  Message2::M2* v2_0 = message->add_f_4();
  (void)v2_0;  // Suppresses clang-tidy.
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->add_f_0(0x2cfc);
  Message2::M1* v0 = message->mutable_f_2();
  Message2::M1::M6* v1 = v0->mutable_f_2();
  v1->set_f_3(s->substr(0, 25));
  v1->set_f_1(false);
  v1->set_f_4(s->substr(0, 6));
  v1->set_f_2(Message2::M1::M6::E5_CONST_3);
  Message2::M3* v2 = message->mutable_f_6();
  v2->set_f_8(Message2::M3::E2_CONST_1);
  v2->set_f_16(s->substr(0, 26));
  v2->add_f_4(0x150484);
  v2->set_f_0(s->substr(0, 18));
  v2->set_f_5(false);
  v2->set_f_1(s->substr(0, 2));
  v2->set_f_6(s->substr(0, 26));
  v2->set_f_14(s->substr(0, 7));
  v2->set_f_12(s->substr(0, 40));
  v2->set_f_2(Message2::M3::E1_CONST_2);
  Message2::M3::M4* v3 = v2->mutable_f_22();
  (void)v3;  // Suppresses clang-tidy.
  v2->add_f_3(0x1a9eb7c9e519a);
  v2->add_f_3(0xed244cb1a9037f);
  v2->add_f_3(0xd767856b95c813);
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
}  // namespace fleetbench::rpc::P7::response::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_RESPONSE_ACCESS_MESSAGE2_H_
