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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_RESPONSE_ACCESS_MESSAGE0_H_

#include <cstddef>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/response/Message0.pb.h"

namespace fleetbench::rpc::P2::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_1(s->substr(0, 4));
  Message0::M3* v0_0 = message->add_f_7();
  v0_0->set_f_0(s->substr(0, 3));
  Message0::M3::M9* v1 = v0_0->mutable_f_11();
  v1->set_f_0(s->substr(0, 59));
  Message0::M3::M8* v2 = v0_0->mutable_f_9();
  (void)v2;  // Suppresses clang-tidy.
  v0_0->set_f_2(0x30);
  v0_0->set_f_1(true);
  message->set_f_0(0x1b);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_8();
  Message0::M4::M13* v1 = v0->mutable_f_41();
  Message0::M4::M13::M18* v2 = v1->mutable_f_5();
  v2->set_f_0(s->substr(0, 7));
  v0->add_f_10(s->substr(0, 66));
  v0->set_f_13(Message0::M4::E5_CONST_1);
  v0->set_f_23(s->substr(0, 441));
  v0->set_f_1(s->substr(0, 106));
  v0->set_f_6(Message0::M4::E3_CONST_5);
  v0->set_f_5(0xb16);
  v0->set_f_12(s->substr(0, 20));
  v0->set_f_14(0xc2ce1be091);
  v0->set_f_9(s->substr(0, 114));
  v0->set_f_18(0x17);
  v0->set_f_20(0x35a0bb1ab);
  v0->set_f_4(0x1e);
  v0->set_f_15(Message0::M4::E6_CONST_4);
  v0->set_f_17(0x72);
  v0->set_f_11(Message0::M4::E4_CONST_2);
  v0->set_f_8(s->substr(0, 5));
  v0->set_f_22(0.869593);
  message->set_f_0(0x56);
  Message0::M1* v3 = message->mutable_f_4();
  v3->set_f_0(Message0::M1::E1_CONST_4);
  v3->set_f_1(0x21);
  Message0::M1::M10* v4 = v3->mutable_f_6();
  Message0::M1::M10::M19* v5 = v4->mutable_f_5();
  v5->set_f_22(0x6f);
  v5->set_f_16(s->substr(0, 93));
  v5->set_f_23(Message0::M1::M10::M19::E11_CONST_5);
  v5->set_f_2(s->substr(0, 75));
  v5->set_f_7(s->substr(0, 8));
  v5->set_f_11(true);
  v5->set_f_15(0x1c);
  v5->set_f_3(0x3d);
  v5->set_f_19(0.270508);
  v5->set_f_10(0x79);
  v5->set_f_17(false);
  v5->set_f_6(0x2a706a098);
  v5->set_f_9(0x75);
  v5->set_f_13(true);
  v5->set_f_8(s->substr(0, 39));
  v5->set_f_1(0x5d050c30d4a5);
  v5->set_f_20(Message0::M1::M10::M19::E10_CONST_4);
  v5->set_f_5(0x22);
  Message0::M3* v6_0 = message->add_f_7();
  Message0::M3::M8* v7 = v6_0->mutable_f_9();
  Message0::M3::M8::M17* v8 = v7->mutable_f_4();
  v8->set_f_0(0xc);
  v7->set_f_0(false);
  Message0::M3::M9* v9 = v6_0->mutable_f_11();
  (void)v9;  // Suppresses clang-tidy.
  v6_0->set_f_3(Message0::M3::E2_CONST_2);
  v6_0->set_f_2(0x1c);
  Message0::M3::M11* v10 = v6_0->mutable_f_12();
  v10->add_f_2(s->substr(0, 32));
  v10->set_f_1(s->substr(0, 387));
  v6_0->set_f_0(s->substr(0, 11));
  Message0::M3* v6_1 = message->add_f_7();
  v6_1->set_f_3(Message0::M3::E2_CONST_4);
  v6_1->set_f_2(0x1e);
  Message0::M3::M8* v11 = v6_1->mutable_f_9();
  v11->set_f_0(true);
  v6_1->set_f_0(s->substr(0, 10));
  Message0::M3::M11* v12 = v6_1->mutable_f_12();
  v12->set_f_1(s->substr(0, 3));
  int array_0[8] = {
      51, 31, 50, 32, 10, 17, 39, 23,
  };
  for (size_t i = 0; i < 8; ++i) {
    v12->add_f_2(s->substr(0, array_0[i]));
  }
  v12->set_f_0(0x65);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_8();
  v0->set_f_2(0.849571);
  v0->set_f_21(Message0::M4::E7_CONST_5);
  v0->set_f_16(0.105692);
  v0->set_f_9(s->substr(0, 25));
  v0->set_f_11(Message0::M4::E4_CONST_4);
  v0->set_f_17(0x38d9);
  v0->add_f_10(s->substr(0, 35));
  v0->set_f_23(s->substr(0, 119));
  v0->set_f_18(0x67);
  v0->set_f_8(s->substr(0, 7));
  v0->set_f_7(0x79);
  Message0::M4::M13* v1 = v0->mutable_f_41();
  v1->set_f_0(s->substr(0, 31));
  Message0::M4::M13::M18* v2 = v1->mutable_f_5();
  v2->set_f_0(s->substr(0, 16));
  v0->set_f_13(Message0::M4::E5_CONST_3);
  Message0::M2* v3 = message->mutable_f_6();
  Message0::M2::M7* v4 = v3->mutable_f_4();
  Message0::M2::M7::M15* v5 = v4->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  message->set_f_0(0x29a5db754b6);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_1(s->substr(0, 11));
  Message0::M2* v0 = message->mutable_f_6();
  Message0::M2::M12* v1 = v0->mutable_f_6();
  v1->set_f_0(Message0::M2::M12::E8_CONST_3);
  Message0::M2::M7* v2 = v0->mutable_f_4();
  Message0::M2::M7::M15* v3 = v2->mutable_f_4();
  v3->set_f_1(0xdb31084c2bcf);
  v3->set_f_0(s->substr(0, 50));
  v0->set_f_0(0x449356f);
  Message0::M3* v4_0 = message->add_f_7();
  v4_0->set_f_3(Message0::M3::E2_CONST_3);
  v4_0->set_f_2(0x3e);
  Message0::M3::M8* v5 = v4_0->mutable_f_9();
  Message0::M3::M8::M17* v6 = v5->mutable_f_4();
  v6->set_f_0(0x1ed993);
  v4_0->set_f_1(true);
  Message0::M3* v4_1 = message->add_f_7();
  v4_1->set_f_2(0x18);
  v4_1->set_f_0(s->substr(0, 15));
  Message0::M3::M9* v7 = v4_1->mutable_f_11();
  (void)v7;  // Suppresses clang-tidy.
  Message0::M3::M11* v8 = v4_1->mutable_f_12();
  v8->set_f_1(s->substr(0, 39));
  v4_1->set_f_3(Message0::M3::E2_CONST_4);
  message->set_f_0(0x1f4a70c00f768);
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
}  // namespace fleetbench::rpc::P2::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_RESPONSE_ACCESS_MESSAGE0_H_
