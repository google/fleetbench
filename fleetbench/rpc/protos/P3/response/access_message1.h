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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/response/Message1.pb.h"

namespace fleetbench::rpc::P3::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M4* v0 = message->mutable_f_7();
  v0->set_f_22(0x3405);
  Message1::M4::M9* v1 = v0->mutable_f_39();
  (void)v1;  // Suppresses clang-tidy.
  v0->set_f_15(0x14);
  v0->set_f_19(Message1::M4::E5_CONST_5);
  v0->set_f_21(0x3e);
  v0->set_f_16(0x9cb4236);
  Message1::M4::M11* v2_0 = v0->add_f_40();
  Message1::M4::M11::M13* v3 = v2_0->mutable_f_4();
  (void)v3;  // Suppresses clang-tidy.
  v0->set_f_24(0.359255);
  v0->set_f_6(Message1::M4::E1_CONST_3);
  Message1::M1* v4 = message->mutable_f_2();
  (void)v4;  // Suppresses clang-tidy.
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_5();
  (void)v0;  // Suppresses clang-tidy.
  Message1::M4* v1 = message->mutable_f_7();
  v1->set_f_21(0xc67);
  v1->set_f_6(Message1::M4::E1_CONST_1);
  v1->set_f_17(Message1::M4::E4_CONST_1);
  v1->set_f_16(0x73);
  v1->set_f_0(0x2f);
  Message1::M4::M11* v2_0 = v1->add_f_40();
  (void)v2_0;  // Suppresses clang-tidy.
  Message1::M4::M11* v2_1 = v1->add_f_40();
  v2_1->set_f_0(0x24);
  v1->set_f_14(Message1::M4::E3_CONST_1);
  Message1::M1* v3 = message->mutable_f_2();
  Message1::M1::M5* v4_0 = v3->add_f_2();
  Message1::M1::M5::M21* v5 = v4_0->mutable_f_5();
  (void)v5;  // Suppresses clang-tidy.
  v4_0->set_f_0(0x67);
  Message1::M3* v6 = message->mutable_f_6();
  v6->set_f_0(0xe1f1df59c8797b);
  Message1::M3::M7* v7 = v6->mutable_f_3();
  (void)v7;  // Suppresses clang-tidy.
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M3* v0 = message->mutable_f_6();
  Message1::M3::M7* v1 = v0->mutable_f_3();
  v1->set_f_0(0x2b32);
  Message1::M3::M8* v2 = v0->mutable_f_4();
  v2->set_f_4(0x55c007b);
  Message1::M3::M8::M16* v3 = v2->mutable_f_11();
  v3->set_f_0(0x40b9b43);
  Message1::M4* v4 = message->mutable_f_7();
  v4->set_f_20(0.822059);
  v4->set_f_5(0.025043);
  v4->set_f_8(0x15);
  v4->set_f_15(0x3dc7);
  float array_0[31] = {
      0.646674, 0.612457, 0.296024, 0.156571, 0.511175, 0.826809, 0.525984,
      0.321360, 0.558080, 0.824908, 0.467064, 0.040565, 0.115688, 0.453496,
      0.098646, 0.000773, 0.556625, 0.009354, 0.029820, 0.924385, 0.850534,
      0.239019, 0.068723, 0.334143, 0.245067, 0.550665, 0.128126, 0.467502,
      0.619360, 0.040337, 0.595892,
  };
  for (auto v : array_0) {
    v4->add_f_7(v);
  }
  v4->set_f_19(Message1::M4::E5_CONST_5);
  Message1::M4::M11* v5_0 = v4->add_f_40();
  (void)v5_0;  // Suppresses clang-tidy.
  Message1::M1* v6 = message->mutable_f_2();
  (void)v6;  // Suppresses clang-tidy.
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_5();
  Message1::M2::M10* v1_0 = v0->add_f_7();
  Message1::M2::M10::M23* v2 = v1_0->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M2::M6* v3 = v0->mutable_f_6();
  v3->set_f_0(Message1::M2::M6::E7_CONST_2);
  Message1::M2::M6::M14* v4_0 = v3->add_f_4();
  v4_0->set_f_0(0.484703);
  Message1::M2::M6::M14* v4_1 = v3->add_f_4();
  (void)v4_1;  // Suppresses clang-tidy.
  Message1::M4* v5 = message->mutable_f_7();
  Message1::M4::M11* v6_0 = v5->add_f_40();
  v6_0->set_f_0(0x18a8);
  Message1::M4::M11::M13* v7 = v6_0->mutable_f_4();
  v7->set_f_0(0x538623f);
  v5->set_f_6(Message1::M4::E1_CONST_2);
  v5->set_f_26(0.749796);
  v5->set_f_21(0x2a6c9ef9af6f3f);
  v5->set_f_17(Message1::M4::E4_CONST_5);
  v5->set_f_3(0.501128);
  v5->set_f_12(Message1::M4::E2_CONST_5);
  v5->set_f_20(0.823573);
  v5->set_f_8(0x8);
  v5->set_f_1(0x8d5);
  v5->set_f_15(0xb2c98);
  Message1::M3* v8 = message->mutable_f_6();
  Message1::M3::M7* v9 = v8->mutable_f_3();
  (void)v9;  // Suppresses clang-tidy.
  v8->set_f_0(0x74aee22);
  Message1::M3::M8* v10 = v8->mutable_f_4();
  v10->set_f_5(0x1a498d);
  v10->set_f_2(0x4);
  Message1::M3::M8::M16* v11 = v10->mutable_f_11();
  v11->set_f_0(0x45);
  v10->add_f_0(Message1::M3::M8::E8_CONST_3);
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
}  // namespace fleetbench::rpc::P3::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_RESPONSE_ACCESS_MESSAGE1_H_
