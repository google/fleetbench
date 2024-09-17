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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/response/Message0.pb.h"

namespace fleetbench::rpc::P6::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_0(0x28);
  message->set_f_20(0.973781);
  message->set_f_2(0.373680);
  Message0::M2* v0 = message->mutable_f_30();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_21(0x44);
  message->set_f_16(0.963519);
  message->set_f_19(0x44);
  message->add_f_4(Message0::E2_CONST_1);
  message->set_f_3(0.317024);
  Message0::M4* v1 = message->mutable_f_32();
  v1->set_f_3(0x3);
  v1->set_f_1(0.014109);
  message->set_f_6(Message0::E3_CONST_5);
  message->set_f_5(0.050866);
  message->set_f_17(0.722959);
  message->set_f_1(Message0::E1_CONST_1);
  message->set_f_23(0.096546);
  message->set_f_7(0.581421);
  Message0::M3* v2 = message->mutable_f_31();
  v2->set_f_10(0x1bc13f7efb1c422d);
  Message0::M3::M12* v3 = v2->mutable_f_16();
  v3->set_f_1(0.191624);
  v3->set_f_0(0x1e);
  v3->set_f_4(0x33);
  v2->set_f_6(0.642103);
  v2->set_f_3(0.319024);
  v2->set_f_8(0x63ebab50c1c746df);
  v2->set_f_0(0x1ccc);
  v2->set_f_5(0x27);
  v2->set_f_11(0.396959);
  v2->set_f_2(0x4af11609cc546a72);
  v2->set_f_1(0.766503);
  v2->set_f_12(0x1c);
  message->set_f_8(0.321967);
  message->set_f_24(0.882846);
  message->set_f_10(0.192708);
  message->set_f_12(0.287691);
  Message0::M7* v4 = message->mutable_f_35();
  v4->set_f_2(0x3acee0a5eb042ecc);
  v4->set_f_1(0.976349);
  Message0::M7::M11* v5 = v4->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  Message0::M6* v6 = message->mutable_f_34();
  Message0::M6::E9 array_1[5] = {
      Message0::M6::E9_CONST_3, Message0::M6::E9_CONST_4,
      Message0::M6::E9_CONST_2, Message0::M6::E9_CONST_3,
      Message0::M6::E9_CONST_4,
  };
  for (auto v : array_1) {
    v6->add_f_0(v);
  }
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_1(Message0::E1_CONST_2);
  message->set_f_21(0x1994);
  Message0::M3* v0 = message->mutable_f_31();
  v0->set_f_6(0.905752);
  v0->set_f_12(0x2c);
  v0->set_f_0(0x6);
  v0->set_f_5(0x59);
  v0->set_f_1(0.156863);
  v0->set_f_11(0.948418);
  v0->set_f_2(0x5ae88687eacc6cc);
  v0->set_f_8(0x159b8809f624bbcd);
  Message0::M3::M12* v1 = v0->mutable_f_16();
  v1->set_f_4(0x35);
  v1->set_f_1(0.113650);
  v1->set_f_0(0x2a6c);
  v1->set_f_3(0.351843);
  v0->set_f_4(0x10a3e2b9ef047c23);
  v0->set_f_9(0x34c);
  message->add_f_18(Message0::E6_CONST_4);
  message->add_f_18(Message0::E6_CONST_2);
  message->add_f_18(Message0::E6_CONST_3);
  message->add_f_18(Message0::E6_CONST_3);
  message->set_f_6(Message0::E3_CONST_2);
  message->set_f_13(Message0::E4_CONST_4);
  message->set_f_11(0.202907);
  Message0::M7* v2 = message->mutable_f_35();
  v2->set_f_1(0.681386);
  v2->set_f_2(0x45fef113ddb1d457);
  Message0::M7::M13* v3 = v2->mutable_f_5();
  v3->set_f_3(0.685649);
  v3->set_f_2(0.932463);
  Message0::M7::M13::M15* v4 = v3->mutable_f_10();
  v4->set_f_2(Message0::M7::M13::M15::E12_CONST_5);
  v4->set_f_0(0.010039);
  v3->set_f_6(0.120667);
  v3->set_f_7(0.296445);
  Message0::M7::M11* v5 = v2->mutable_f_4();
  v5->set_f_0(0.402299);
  Message0::M4* v6 = message->mutable_f_32();
  v6->set_f_2(Message0::M4::E8_CONST_1);
  v6->set_f_3(0x45);
  v6->set_f_0(Message0::M4::E7_CONST_2);
  v6->set_f_1(0.667077);
  message->set_f_10(0.485284);
  message->set_f_2(0.084053);
  message->add_f_4(Message0::E2_CONST_3);
  message->set_f_12(0.408659);
  message->set_f_8(0.000273);
  message->set_f_22(0.339733);
  message->set_f_20(0.064246);
  message->set_f_0(0x45);
  message->set_f_7(0.546208);
  message->set_f_24(0.356250);
  message->set_f_5(0.687269);
  message->set_f_14(0xe);
  message->set_f_3(0.199963);
  message->set_f_17(0.123785);
  Message0::M1* v7 = message->mutable_f_29();
  v7->set_f_1(0.452382);
  Message0::M1::M10* v8 = v7->mutable_f_5();
  v8->set_f_1(0x46);
  v8->set_f_0(0x5125609424d48d3e);
  Message0::M1::M10::M14* v9 = v8->mutable_f_4();
  v9->set_f_0(0x25);
  Message0::M1::M10::M14::M16* v10 = v9->mutable_f_2();
  v10->add_f_1(Message0::M1::M10::M14::M16::E14_CONST_3);
  v10->add_f_1(Message0::M1::M10::M14::M16::E14_CONST_5);
  v10->add_f_1(Message0::M1::M10::M14::M16::E14_CONST_3);
  v10->add_f_1(Message0::M1::M10::M14::M16::E14_CONST_2);
  v10->set_f_2(0.474964);
  Message0::M1::M9* v11 = v7->mutable_f_4();
  v11->set_f_0(0x6d);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_22(0.560664);
  Message0::M2* v0 = message->mutable_f_30();
  v0->set_f_0(0.034716);
  Message0::M3* v1 = message->mutable_f_31();
  Message0::M3::M12* v2 = v1->mutable_f_16();
  v2->set_f_2(0x64);
  v2->set_f_4(0x1c29);
  v2->set_f_3(0.986549);
  v2->set_f_0(0xa);
  v1->set_f_3(0.665042);
  v1->set_f_11(0.611550);
  v1->set_f_0(0x148b);
  v1->set_f_2(0x5d06b097b4cdf12f);
  v1->set_f_5(0x1c);
  v1->set_f_6(0.827929);
  v1->set_f_1(0.667299);
  v1->set_f_9(0x40);
  message->set_f_14(0x41d);
  message->set_f_11(0.327844);
  Message0::M4* v3 = message->mutable_f_32();
  v3->set_f_0(Message0::M4::E7_CONST_4);
  v3->set_f_2(Message0::M4::E8_CONST_1);
  v3->set_f_1(0.393197);
  message->set_f_10(0.694969);
  message->set_f_1(Message0::E1_CONST_4);
  message->set_f_24(0.252044);
  message->set_f_12(0.679139);
  message->set_f_8(0.763089);
  message->set_f_19(0x64);
  message->add_f_18(Message0::E6_CONST_3);
  message->set_f_15(Message0::E5_CONST_4);
  message->set_f_21(0x3c34);
  Message0::M6* v4 = message->mutable_f_34();
  v4->set_f_1(0.756457);
  Message0::M6::E9 array_0[6] = {
      Message0::M6::E9_CONST_1, Message0::M6::E9_CONST_2,
      Message0::M6::E9_CONST_3, Message0::M6::E9_CONST_3,
      Message0::M6::E9_CONST_1, Message0::M6::E9_CONST_2,
  };
  for (auto v : array_0) {
    v4->add_f_0(v);
  }
  message->set_f_9(0.900441);
  message->set_f_16(0.009370);
  Message0::M5* v5 = message->mutable_f_33();
  (void)v5;  // Suppresses clang-tidy.
  Message0::M1* v6 = message->mutable_f_29();
  Message0::M1::M9* v7 = v6->mutable_f_4();
  v7->set_f_0(0x37);
  v6->set_f_0(0.409212);
  message->set_f_7(0.659872);
  message->set_f_0(0x71);
  message->add_f_4(Message0::E2_CONST_4);
  message->set_f_3(0.532892);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M6* v0 = message->mutable_f_34();
  v0->add_f_0(Message0::M6::E9_CONST_4);
  v0->set_f_1(0.518293);
  message->add_f_4(Message0::E2_CONST_4);
  message->set_f_17(0.585752);
  Message0::M4* v1 = message->mutable_f_32();
  v1->set_f_2(Message0::M4::E8_CONST_5);
  v1->set_f_0(Message0::M4::E7_CONST_1);
  message->set_f_12(0.327073);
  message->set_f_1(Message0::E1_CONST_1);
  message->set_f_15(Message0::E5_CONST_1);
  message->set_f_10(0.543096);
  message->set_f_11(0.107642);
  message->set_f_7(0.954783);
  message->set_f_0(0x4e);
  Message0::M2* v2 = message->mutable_f_30();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_5(0.994598);
  Message0::M1* v3 = message->mutable_f_29();
  v3->set_f_1(0.465091);
  Message0::M1::M9* v4 = v3->mutable_f_4();
  v4->set_f_0(0x33f4);
  v3->set_f_0(0.771476);
  message->add_f_18(Message0::E6_CONST_5);
  message->add_f_18(Message0::E6_CONST_5);
  message->set_f_23(0.787979);
  message->set_f_3(0.358300);
  message->set_f_13(Message0::E4_CONST_2);
  Message0::M3* v5 = message->mutable_f_31();
  v5->set_f_5(0x2f);
  v5->set_f_9(0x66);
  v5->set_f_4(0x39c30460b099ee19);
  v5->set_f_0(0x43);
  v5->set_f_10(0x31acc85075150cc9);
  v5->set_f_2(0x3b510274e50c722a);
  v5->set_f_1(0.410020);
  Message0::M3::M8* v6 = v5->mutable_f_15();
  v6->add_f_0(Message0::M3::M8::E10_CONST_1);
  v5->set_f_7(0x1c01874302a4e1e8);
  v5->set_f_8(0x62b553985621489d);
  message->set_f_8(0.014122);
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
}  // namespace fleetbench::rpc::P6::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_RESPONSE_ACCESS_MESSAGE0_H_
