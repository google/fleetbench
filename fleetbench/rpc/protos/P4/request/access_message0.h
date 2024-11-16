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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message0.pb.h"

namespace fleetbench::rpc::P4::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M2* v0_0 = message->add_f_52();
  (void)v0_0;  // Suppresses clang-tidy.
  Message0::M2* v0_1 = message->add_f_52();
  v0_1->set_f_0(true);
  Message0::M11* v1 = message->mutable_f_82();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M13* v2 = message->mutable_f_86();
  Message0::M13::M16* v3 = v2->mutable_f_5();
  Message0::M13::M16::M23* v4 = v3->mutable_f_9();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_7(0x8e244230c892);
  message->set_f_11(s->substr(0, 7));
  Message0::M15* v5_0 = message->add_f_93();
  v5_0->set_f_4(0x69);
  v5_0->set_f_3(0x22);
  v5_0->set_f_6(0x4d3);
  v5_0->set_f_2(s->substr(0, 11));
  Message0::M15* v5_1 = message->add_f_93();
  v5_1->set_f_1(s->substr(0, 13));
  v5_1->set_f_2(s->substr(0, 13));
  v5_1->set_f_4(0x78);
  v5_1->set_f_5(0x36);
  message->set_f_2(0x61);
  Message0::M12* v6 = message->mutable_f_84();
  v6->set_f_3(0x61);
  v6->set_f_1(s->substr(0, 23));
  v6->set_f_5(0x2807);
  v6->add_f_2(Message0::M12::E1_CONST_3);
  Message0::M3* v7 = message->mutable_f_55();
  v7->set_f_0(s->substr(0, 25));
  message->set_f_12(0x3352a7d7964b63);
  Message0::M14* v8_0 = message->add_f_89();
  v8_0->set_f_0(s->substr(0, 10));
  Message0::M14* v8_1 = message->add_f_89();
  v8_1->set_f_0(s->substr(0, 20));
  message->set_f_6(s->substr(0, 1));
  message->set_f_1(0x33);
  Message0::M4* v9_0 = message->add_f_59();
  v9_0->set_f_0(s->substr(0, 20));
  Message0::M4* v9_1 = message->add_f_59();
  v9_1->set_f_0(s->substr(0, 32));
  message->set_f_3(0x3c446efc70ff8d);
  message->set_f_9(0x3d);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M11* v0 = message->mutable_f_82();
  v0->set_f_0(s->substr(0, 19));
  message->set_f_6(s->substr(0, 19));
  Message0::M1* v1 = message->mutable_f_48();
  v1->set_f_0(s->substr(0, 23));
  Message0::M1::M19* v2 = v1->mutable_f_5();
  v2->set_f_1(0x26);
  v2->set_f_5(s->substr(0, 9));
  v2->set_f_0(true);
  Message0::M5* v3 = message->mutable_f_64();
  v3->set_f_0(s->substr(0, 5));
  Message0::M5::M20* v4_0 = v3->add_f_6();
  v4_0->set_f_0(0x29);
  Message0::M5::M20* v4_1 = v3->add_f_6();
  (void)v4_1;  // Suppresses clang-tidy.
  message->set_f_3(0x7f2e79d9b4cdfb);
  Message0::M3* v5 = message->mutable_f_55();
  v5->set_f_0(s->substr(0, 25));
  Message0::M9* v6 = message->mutable_f_79();
  Message0::M9::M22* v7_0 = v6->add_f_7();
  v7_0->set_f_5(s->substr(0, 4));
  v7_0->set_f_4(0x1272e3548d6be);
  v7_0->set_f_3(s->substr(0, 26));
  v7_0->set_f_6(s->substr(0, 18));
  Message0::M9::M22::M24* v8 = v7_0->mutable_f_42();
  Message0::M9::M22::M24::M29* v9_0 = v8->add_f_9();
  Message0::M9::M22::M24::M29::M31* v10 = v9_0->mutable_f_12();
  (void)v10;  // Suppresses clang-tidy.
  v9_0->set_f_0(false);
  Message0::M9::M22::M24::M29* v9_1 = v8->add_f_9();
  Message0::M9::M22::M24::M29::M31* v11 = v9_1->mutable_f_12();
  (void)v11;  // Suppresses clang-tidy.
  v8->set_f_0(s->substr(0, 17));
  Message0::M9::M22::M25* v12_0 = v7_0->add_f_46();
  v12_0->set_f_0(s->substr(0, 17));
  Message0::M9::M22::M25* v12_1 = v7_0->add_f_46();
  (void)v12_1;  // Suppresses clang-tidy.
  v7_0->set_f_1(s->substr(0, 14));
  Message0::M9::M22::M28* v13 = v7_0->mutable_f_54();
  (void)v13;  // Suppresses clang-tidy.
  Message0::M9::M22* v7_1 = v6->add_f_7();
  v7_1->set_f_6(s->substr(0, 20));
  v7_1->set_f_2(s->substr(0, 4));
  v7_1->set_f_0(0x6a);
  Message0::M9::M22::M25* v14_0 = v7_1->add_f_46();
  v14_0->set_f_0(s->substr(0, 13));
  Message0::M9::M22::M25* v14_1 = v7_1->add_f_46();
  (void)v14_1;  // Suppresses clang-tidy.
  v7_1->set_f_5(s->substr(0, 2));
  v7_1->set_f_4(0x4a);
  v6->set_f_0(false);
  message->set_f_2(0x64);
  message->set_f_7(0x79f3fef966b20d);
  message->set_f_11(s->substr(0, 3));
  Message0::M15* v15_0 = message->add_f_93();
  v15_0->set_f_3(0x2f);
  v15_0->set_f_2(s->substr(0, 23));
  v15_0->set_f_0(0x46);
  v15_0->set_f_5(0x4d);
  Message0::M15* v15_1 = message->add_f_93();
  v15_1->set_f_6(0x64);
  v15_1->set_f_0(0x16);
  v15_1->set_f_5(0x326a);
  v15_1->set_f_4(0x37);
  v15_1->set_f_1(s->substr(0, 2));
  Message0::M6* v16 = message->mutable_f_68();
  v16->set_f_5(0x53b8d2bfd7ad58);
  v16->set_f_0(s->substr(0, 31));
  message->set_f_9(0x2b);
  message->set_f_0(s->substr(0, 31));
  Message0::M10* v17 = message->mutable_f_80();
  v17->set_f_0(0x4);
  Message0::M10::M17* v18_0 = v17->add_f_3();
  v18_0->set_f_0(0x61);
  Message0::M10::M17* v18_1 = v17->add_f_3();
  Message0::M10::M17::M26* v19_0 = v18_1->add_f_7();
  v19_0->set_f_1(0xfea1b1d786c30d);
  Message0::M10::M17::M26* v19_1 = v18_1->add_f_7();
  v19_1->set_f_1(0x10a6d6841edcd);
  message->set_f_12(0x472384afa3e0);
  message->set_f_10(0xe);
  Message0::M7* v20_0 = message->add_f_69();
  (void)v20_0;  // Suppresses clang-tidy.
  Message0::M7* v20_1 = message->add_f_69();
  v20_1->set_f_0(s->substr(0, 2));
  Message0::M8* v21_0 = message->add_f_73();
  v21_0->set_f_0(s->substr(0, 5));
  Message0::M8* v21_1 = message->add_f_73();
  v21_1->set_f_0(s->substr(0, 4));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_6(s->substr(0, 6));
  Message0::M5* v0 = message->mutable_f_64();
  v0->set_f_0(s->substr(0, 11));
  Message0::M5::M20* v1_0 = v0->add_f_6();
  (void)v1_0;  // Suppresses clang-tidy.
  Message0::M5::M20* v1_1 = v0->add_f_6();
  (void)v1_1;  // Suppresses clang-tidy.
  message->set_f_8(s->substr(0, 13));
  Message0::M7* v2_0 = message->add_f_69();
  v2_0->set_f_0(s->substr(0, 10));
  Message0::M7* v2_1 = message->add_f_69();
  v2_1->set_f_0(s->substr(0, 20));
  Message0::M11* v3 = message->mutable_f_82();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M4* v4_0 = message->add_f_59();
  v4_0->set_f_0(s->substr(0, 10));
  Message0::M4* v4_1 = message->add_f_59();
  v4_1->set_f_0(s->substr(0, 17));
  message->set_f_1(0x30);
  message->set_f_12(0xee96a17ef657ea);
  Message0::M3* v5 = message->mutable_f_55();
  v5->set_f_0(s->substr(0, 30));
  Message0::M12* v6 = message->mutable_f_84();
  v6->set_f_3(0x6a);
  v6->set_f_0(s->substr(0, 29));
  v6->set_f_1(s->substr(0, 18));
  v6->add_f_2(Message0::M12::E1_CONST_4);
  v6->set_f_5(0x4b);
  v6->set_f_4(s->substr(0, 4));
  Message0::M12::M21* v7 = v6->mutable_f_23();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_3(0xf56bdf9c1ff5);
  Message0::M2* v8_0 = message->add_f_52();
  (void)v8_0;  // Suppresses clang-tidy.
  Message0::M2* v8_1 = message->add_f_52();
  (void)v8_1;  // Suppresses clang-tidy.
  Message0::M1* v9 = message->mutable_f_48();
  Message0::M1::M19* v10 = v9->mutable_f_5();
  v10->set_f_1(0x63);
  v10->set_f_3(0xd487143a18d0e5);
  v10->set_f_6(0x73);
  v9->set_f_0(s->substr(0, 6));
  message->set_f_4(s->substr(0, 7));
  Message0::M9* v11 = message->mutable_f_79();
  v11->set_f_0(false);
  Message0::M15* v12_0 = message->add_f_93();
  v12_0->set_f_1(s->substr(0, 16));
  v12_0->set_f_4(0x5e);
  Message0::M15* v12_1 = message->add_f_93();
  v12_1->set_f_5(0x3);
  v12_1->set_f_3(0x7b);
  v12_1->set_f_6(0x6c);
  v12_1->set_f_1(s->substr(0, 22));
  v12_1->set_f_0(0x73);
  v12_1->set_f_4(0x24);
  message->set_f_5(0x45);
  message->set_f_11(s->substr(0, 20));
  Message0::M8* v13_0 = message->add_f_73();
  (void)v13_0;  // Suppresses clang-tidy.
  Message0::M8* v13_1 = message->add_f_73();
  (void)v13_1;  // Suppresses clang-tidy.
  message->set_f_9(0x58);
  message->set_f_0(s->substr(0, 27));
  Message0::M10* v14 = message->mutable_f_80();
  Message0::M10::M17* v15_0 = v14->add_f_3();
  v15_0->set_f_0(0x3a09);
  Message0::M10::M17* v15_1 = v14->add_f_3();
  Message0::M10::M17::M26* v16_0 = v15_1->add_f_7();
  v16_0->set_f_0(s->substr(0, 12));
  Message0::M10::M17::M26* v16_1 = v15_1->add_f_7();
  v16_1->set_f_1(0x91f7a4dd27bef7);
  v14->set_f_0(0x1b);
  Message0::M6* v17 = message->mutable_f_68();
  v17->set_f_1(0x74);
  v17->set_f_4(s->substr(0, 11));
  v17->set_f_2(0x6d);
  Message0::M14* v18_0 = message->add_f_89();
  (void)v18_0;  // Suppresses clang-tidy.
  Message0::M14* v18_1 = message->add_f_89();
  v18_1->set_f_0(s->substr(0, 21));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_6(s->substr(0, 15));
  Message0::M13* v0 = message->mutable_f_86();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_5(0x4f);
  message->set_f_3(0x162dd5ad6a609);
  message->set_f_9(0xa);
  Message0::M10* v1 = message->mutable_f_80();
  Message0::M10::M17* v2_0 = v1->add_f_3();
  Message0::M10::M17::M26* v3_0 = v2_0->add_f_7();
  v3_0->set_f_1(0x183e7895284ba);
  Message0::M10::M17::M26* v3_1 = v2_0->add_f_7();
  v3_1->set_f_1(0xf83bd88447b5ab);
  v2_0->set_f_0(0x72);
  Message0::M10::M17* v2_1 = v1->add_f_3();
  Message0::M10::M17::M26* v4_0 = v2_1->add_f_7();
  v4_0->set_f_1(0x6015bb1228b18a);
  Message0::M10::M17::M26* v4_1 = v2_1->add_f_7();
  v4_1->set_f_0(s->substr(0, 21));
  v2_1->set_f_0(0xa);
  v1->set_f_0(0xa);
  Message0::M6* v5 = message->mutable_f_68();
  v5->set_f_0(s->substr(0, 20));
  v5->set_f_1(0x1dde);
  v5->set_f_2(0x7a);
  v5->set_f_5(0x1adb9d1146c9);
  Message0::M6::M18* v6_0 = v5->add_f_29();
  v6_0->set_f_2(s->substr(0, 3));
  v6_0->set_f_1(0x13);
  v6_0->set_f_0(s->substr(0, 21));
  Message0::M6::M18::M27* v7_0 = v6_0->add_f_16();
  v7_0->set_f_0(s->substr(0, 29));
  Message0::M6::M18::M27::M30* v8_0 = v7_0->add_f_10();
  v8_0->set_f_2(s->substr(0, 24));
  v8_0->set_f_1(s->substr(0, 58));
  v8_0->set_f_5(true);
  v8_0->set_f_3(s->substr(0, 17));
  v8_0->set_f_0(0x1a);
  Message0::M6::M18::M27::M30* v8_1 = v7_0->add_f_10();
  v8_1->set_f_3(s->substr(0, 3));
  v8_1->set_f_1(s->substr(0, 22));
  v8_1->set_f_4(s->substr(0, 10));
  v8_1->set_f_5(false);
  Message0::M6::M18::M27* v7_1 = v6_0->add_f_16();
  v7_1->set_f_0(s->substr(0, 31));
  Message0::M6::M18::M27::M30* v9_0 = v7_1->add_f_10();
  v9_0->set_f_2(s->substr(0, 10));
  v9_0->set_f_1(s->substr(0, 12));
  v9_0->set_f_3(s->substr(0, 17));
  Message0::M6::M18::M27::M30* v9_1 = v7_1->add_f_10();
  v9_1->set_f_5(true);
  v9_1->set_f_1(s->substr(0, 8));
  v9_1->set_f_0(0xb98);
  Message0::M6::M18* v6_1 = v5->add_f_29();
  v6_1->set_f_0(s->substr(0, 20));
  v6_1->set_f_2(s->substr(0, 2));
  Message0::M6::M18::M27* v10_0 = v6_1->add_f_16();
  v10_0->set_f_0(s->substr(0, 2));
  Message0::M6::M18::M27* v10_1 = v6_1->add_f_16();
  v10_1->set_f_0(s->substr(0, 19));
  Message0::M6::M18::M27::M30* v11_0 = v10_1->add_f_10();
  v11_0->set_f_3(s->substr(0, 12));
  v11_0->set_f_0(0x15);
  Message0::M6::M18::M27::M30* v11_1 = v10_1->add_f_10();
  v11_1->set_f_1(s->substr(0, 22));
  v11_1->set_f_0(0x19);
  v11_1->set_f_4(s->substr(0, 21));
  v11_1->set_f_3(s->substr(0, 20));
  v11_1->set_f_2(s->substr(0, 5));
  v11_1->set_f_5(false);
  v6_1->set_f_1(0x55);
  message->set_f_2(0x9d4);
  message->set_f_8(s->substr(0, 35));
  message->set_f_12(0x27224650d6c1d1);
  Message0::M2* v12_0 = message->add_f_52();
  v12_0->set_f_0(true);
  Message0::M2* v12_1 = message->add_f_52();
  (void)v12_1;  // Suppresses clang-tidy.
  Message0::M3* v13 = message->mutable_f_55();
  v13->set_f_0(s->substr(0, 18));
  message->set_f_7(0x364d705f9758ce);
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
}  // namespace fleetbench::rpc::P4::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_
