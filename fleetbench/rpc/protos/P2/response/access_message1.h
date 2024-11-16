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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_RESPONSE_ACCESS_MESSAGE1_H_

#include <cstddef>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/response/Message1.pb.h"

namespace fleetbench::rpc::P2::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_3();
  v0_0->set_f_0(true);
  v0_0->set_f_1(s->substr(0, 2));
  Message1::M2* v1_0 = message->add_f_4();
  v1_0->set_f_1(s->substr(0, 11));
  v1_0->set_f_22(0x1e);
  v1_0->add_f_10(Message1::M2::E1_CONST_4);
  v1_0->add_f_10(Message1::M2::E1_CONST_1);
  v1_0->set_f_16(Message1::M2::E4_CONST_2);
  v1_0->set_f_18(0x5ff41ed5b653);
  v1_0->set_f_25(0xa7c4937);
  v1_0->set_f_21(0x4f);
  v1_0->set_f_15(s->substr(0, 138));
  v1_0->set_f_14(0x41);
  v1_0->set_f_2(s->substr(0, 11));
  v1_0->set_f_3(0xac5fd);
  v1_0->set_f_13(Message1::M2::E3_CONST_4);
  v1_0->set_f_11(Message1::M2::E2_CONST_1);
  v1_0->set_f_9(0x22);
  v1_0->set_f_0(0x74);
  v1_0->set_f_7(s->substr(0, 32));
  v1_0->set_f_5(false);
  v1_0->set_f_4(s->substr(0, 5));
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_0(0x29d);
  Message1::M2* v0_0 = message->add_f_4();
  v0_0->set_f_18(0x37);
  v0_0->set_f_6(0x4e);
  v0_0->set_f_2(s->substr(0, 2));
  v0_0->set_f_8(0.683642);
  v0_0->set_f_25(0x6b2a47507);
  v0_0->add_f_17(s->substr(0, 16));
  v0_0->set_f_21(0x18);
  v0_0->set_f_19(Message1::M2::E5_CONST_2);
  v0_0->set_f_16(Message1::M2::E4_CONST_1);
  v0_0->set_f_1(s->substr(0, 18));
  v0_0->set_f_3(0x68);
  v0_0->set_f_20(0.355772);
  v0_0->set_f_13(Message1::M2::E3_CONST_3);
  Message1::M2* v0_1 = message->add_f_4();
  v0_1->set_f_13(Message1::M2::E3_CONST_1);
  v0_1->add_f_10(Message1::M2::E1_CONST_1);
  v0_1->add_f_10(Message1::M2::E1_CONST_3);
  v0_1->set_f_3(0x55);
  v0_1->set_f_7(s->substr(0, 26));
  v0_1->set_f_23(0x26);
  v0_1->set_f_8(0.547967);
  v0_1->set_f_15(s->substr(0, 6));
  v0_1->set_f_24(s->substr(0, 2));
  v0_1->set_f_20(0.488748);
  v0_1->set_f_0(0x5f);
  v0_1->set_f_25(0x2bfdd10a6);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_3();
  v0_0->set_f_1(s->substr(0, 75));
  Message1::M1::M3* v1_0 = v0_0->add_f_4();
  Message1::M1::M3::M4* v2 = v1_0->mutable_f_25();
  v2->set_f_1(s->substr(0, 29));
  Message1::M1::M3::M4::M6* v3_0 = v2->add_f_7();
  v3_0->set_f_0(0x86fe473);
  v1_0->set_f_5(Message1::M1::M3::E6_CONST_1);
  v1_0->set_f_3(0x4f8);
  v1_0->set_f_0(s->substr(0, 303));
  Message1::M1::M3::M5* v4 = v1_0->mutable_f_28();
  v4->set_f_0(s->substr(0, 87));
  v1_0->set_f_12(s->substr(0, 5));
  v1_0->set_f_11(true);
  v0_0->set_f_0(true);
  Message1::M1* v0_1 = message->add_f_3();
  v0_1->set_f_0(false);
  message->set_f_0(0x1a);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_3();
  v0_0->set_f_1(s->substr(0, 1));
  Message1::M1::M3* v1_0 = v0_0->add_f_4();
  v1_0->set_f_10(0x3e3a);
  v1_0->set_f_6(s->substr(0, 10));
  Message1::M1::M3::M4* v2 = v1_0->mutable_f_25();
  v2->set_f_2(0x4c);
  Message1::M1::M3::M4::M7* v3 = v2->mutable_f_9();
  v3->set_f_0(0x66);
  v3->set_f_2(s->substr(0, 25));
  v3->set_f_1(0x6b3521eec);
  int array_0[5] = {
      306, 500, 56, 32, 28,
  };
  for (size_t i = 0; i < 5; ++i) {
    v2->add_f_0(s->substr(0, array_0[i]));
  }
  v2->set_f_3(Message1::M1::M3::M4::E7_CONST_1);
  v1_0->set_f_12(s->substr(0, 2));
  v1_0->set_f_0(s->substr(0, 4));
  v1_0->set_f_4(0x42);
  int array_1[6] = {
      27, 19, 121, 18, 181562, 53,
  };
  for (size_t i = 0; i < 6; ++i) {
    v1_0->add_f_8(s->substr(0, array_1[i]));
  }
  v1_0->set_f_11(false);
  v1_0->set_f_2(s->substr(0, 3));
  v1_0->set_f_5(Message1::M1::M3::E6_CONST_2);
  Message1::M2* v4_0 = message->add_f_4();
  v4_0->add_f_10(Message1::M2::E1_CONST_4);
  v4_0->add_f_10(Message1::M2::E1_CONST_3);
  v4_0->set_f_2(s->substr(0, 5));
  v4_0->set_f_15(s->substr(0, 122));
  v4_0->set_f_5(false);
  v4_0->set_f_25(0xa06378125562ae);
  v4_0->set_f_18(0x5b);
  v4_0->set_f_3(0x78);
  v4_0->add_f_12(s->substr(0, 9));
  v4_0->set_f_9(0x4e);
  v4_0->set_f_8(0.290113);
  v4_0->add_f_17(s->substr(0, 19));
  v4_0->set_f_19(Message1::M2::E5_CONST_1);
  v4_0->set_f_4(s->substr(0, 18));
  v4_0->set_f_24(s->substr(0, 29));
  message->set_f_0(0x30f8b661e9ad88);
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
}  // namespace fleetbench::rpc::P2::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_RESPONSE_ACCESS_MESSAGE1_H_
