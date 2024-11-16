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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message0.pb.h"

namespace fleetbench::rpc::P8::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M9* v0 = message->mutable_f_25();
  v0->set_f_0(0x1f);
  Message0::M12* v1_0 = message->add_f_29();
  v1_0->set_f_0(s->substr(0, 1));
  Message0::M3* v2_0 = message->add_f_16();
  Message0::M3::M22* v3_0 = v2_0->add_f_2();
  (void)v3_0;  // Suppresses clang-tidy.
  v2_0->set_f_0(0x321490231);
  Message0::M3* v2_1 = message->add_f_16();
  v2_1->set_f_0(0x3375b5b14);
  message->set_f_9(0xad8e0);
  Message0::M19* v4 = message->mutable_f_37();
  v4->set_f_0(s->substr(0, 12));
  message->set_f_4(s->substr(0, 16));
  Message0::M6* v5 = message->mutable_f_21();
  Message0::M6::M21* v6 = v5->mutable_f_4();
  v6->set_f_26(0x78);
  v6->set_f_19(s->substr(0, 51));
  v6->set_f_11(0x42);
  v6->set_f_17(s->substr(0, 5));
  Message0::M6::M21::M28* v7 = v6->mutable_f_41();
  int32_t array_1[15] = {
      0x7685623,  0x161a13fd, 0x1e6238fd, 0x7d5d3c11, 0x4807b32d,
      0x7bf7ad2b, 0x613b73d2, 0x153c9f19, 0x78750c5,  0x6d6e3cbf,
      0x7b9e7fad, 0x53af6cb0, 0x5cda0c19, 0x17d2edc1, 0x1e6d9bf9,
  };
  for (auto v : array_1) {
    v7->add_f_0(v);
  }
  Message0::M6::M21::M28::M32* v8 = v7->mutable_f_3();
  v8->set_f_3(s->substr(0, 18));
  v8->set_f_2(0xd34d145);
  v8->set_f_1(0x100ee567c0309);
  v8->set_f_0(0xac7c29cd);
  v6->set_f_1(s->substr(0, 5));
  v6->set_f_23(Message0::M6::M21::E5_CONST_2);
  v6->set_f_4(0x544e75d);
  v6->set_f_14(s->substr(0, 32));
  v6->set_f_6(s->substr(0, 7));
  v6->set_f_10(0x427934118);
  v6->set_f_2(0x1cdc0bee8);
  v6->set_f_8(s->substr(0, 26));
  v6->set_f_29(s->substr(0, 8));
  v6->set_f_28(0xd704c8654c);
  v6->set_f_15(s->substr(0, 10));
  v6->set_f_16(s->substr(0, 6));
  v6->set_f_3(s->substr(0, 10));
  v6->set_f_20(0x65);
  v6->set_f_21(s->substr(0, 5));
  Message0::M6::M21::M26* v9_0 = v6->add_f_40();
  v9_0->set_f_0(s->substr(0, 18));
  Message0::M6::M21::M30* v10 = v6->mutable_f_43();
  (void)v10;  // Suppresses clang-tidy.
  v6->set_f_18(0x1977e55a);
  v6->set_f_12(s->substr(0, 4));
  message->set_f_6(0x412d25589);
  Message0::M20* v11 = message->mutable_f_39();
  v11->set_f_0(s->substr(0, 8));
  v11->set_f_1(s->substr(0, 2));
  Message0::M7* v12 = message->mutable_f_22();
  v12->set_f_0(0xb);
  Message0::M18* v13 = message->mutable_f_36();
  v13->set_f_0(s->substr(0, 5));
  Message0::M8* v14 = message->mutable_f_24();
  v14->set_f_0(0x83c32a8);
  message->set_f_2(0x73);
  Message0::M5* v15_0 = message->add_f_19();
  v15_0->set_f_0(0x4a83d0496);
  message->set_f_8(s->substr(0, 1));
  Message0::M16* v16 = message->mutable_f_34();
  (void)v16;  // Suppresses clang-tidy.
  message->set_f_7(0x13);
  Message0::M13* v17 = message->mutable_f_30();
  v17->set_f_0(0x2c);
  Message0::M14* v18 = message->mutable_f_31();
  v18->set_f_0(0x547b7e8);
  Message0::M1* v19_0 = message->add_f_13();
  v19_0->set_f_3(Message0::M1::E2_CONST_1);
  v19_0->set_f_8(s->substr(0, 23));
  v19_0->set_f_5(s->substr(0, 22));
  v19_0->set_f_7(s->substr(0, 48));
  v19_0->set_f_0(s->substr(0, 2));
  v19_0->set_f_2(s->substr(0, 31));
  v19_0->set_f_4(s->substr(0, 1));
  v19_0->set_f_1(s->substr(0, 8));
  Message0::M2* v20_0 = message->add_f_15();
  v20_0->set_f_0(s->substr(0, 7));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_7(0x3a);
  message->set_f_8(s->substr(0, 10));
  Message0::M1* v0_0 = message->add_f_13();
  v0_0->set_f_2(s->substr(0, 68));
  v0_0->set_f_5(s->substr(0, 9));
  v0_0->set_f_7(s->substr(0, 16));
  v0_0->set_f_3(Message0::M1::E2_CONST_5);
  v0_0->set_f_8(s->substr(0, 43));
  v0_0->set_f_0(s->substr(0, 210));
  v0_0->set_f_4(s->substr(0, 4));
  v0_0->set_f_1(s->substr(0, 14));
  Message0::M1* v0_1 = message->add_f_13();
  v0_1->set_f_8(s->substr(0, 31));
  v0_1->set_f_2(s->substr(0, 7));
  v0_1->set_f_5(s->substr(0, 5));
  v0_1->set_f_1(s->substr(0, 2));
  v0_1->set_f_0(s->substr(0, 29));
  v0_1->set_f_3(Message0::M1::E2_CONST_1);
  message->set_f_3(s->substr(0, 17));
  Message0::M17* v1 = message->mutable_f_35();
  Message0::M17::M23* v2 = v1->mutable_f_3();
  v2->set_f_0(s->substr(0, 30));
  Message0::M17::M23::M31* v3 = v2->mutable_f_4();
  v3->set_f_13(0xb7a8108);
  v3->set_f_9(s->substr(0, 59));
  v3->set_f_25(s->substr(0, 5));
  v3->set_f_1(0x71bcd5bf);
  v3->set_f_28(Message0::M17::M23::M31::E12_CONST_1);
  v3->set_f_16(true);
  v3->set_f_5(s->substr(0, 29));
  v3->set_f_19(0x50);
  v3->set_f_23(0x68a240f7);
  int32_t array_0[20] = {
      0x15c1bf87, 0x157ce5e6, 0x668f60ce, 0x11e8820e, 0x65d93333,
      0x12bf3f71, 0x562e309a, 0x29e9c0c1, 0x6fd8b0f7, 0x28a07c8c,
      0x4bb5b1e0, 0x310d8c5,  0xa60aa59,  0x5bd18d87, 0x23053738,
      0x26b57f5a, 0x53a07ca6, 0x73949171, 0x652b4e9a, 0x7e18d577,
  };
  for (auto v : array_0) {
    v3->add_f_18(v);
  }
  v3->set_f_20(s->substr(0, 7));
  v3->set_f_3(0x4c);
  v3->set_f_12(0x57);
  v3->set_f_8(s->substr(0, 7));
  v3->set_f_27(s->substr(0, 11));
  Message0::M17::M23::M25* v4 = v2->mutable_f_2();
  v4->set_f_1(s->substr(0, 413));
  v4->set_f_9(Message0::M17::M23::M25::E7_CONST_4);
  v4->set_f_6(0x84fb738);
  v4->add_f_4(s->substr(0, 53));
  v4->set_f_5(0x95215);
  Message0::M15* v5 = message->mutable_f_32();
  Message0::M15::M24* v6 = v5->mutable_f_9();
  v6->set_f_2(s->substr(0, 24));
  v6->set_f_0(s->substr(0, 38));
  v6->set_f_4(false);
  v5->set_f_0(0x17445a);
  v5->set_f_3(s->substr(0, 65));
  message->set_f_5(0x63);
  message->set_f_9(0x178743cc9b7);
  Message0::M6* v7 = message->mutable_f_21();
  Message0::M6::M21* v8 = v7->mutable_f_4();
  v8->set_f_12(s->substr(0, 51));
  Message0::M6::M21::M28* v9 = v8->mutable_f_41();
  int32_t array_1[16] = {
      0x1bcbe637, 0x6b71e55b, 0x4c3b2c73, 0x4d120e94, 0x3a679184, 0x59d0bd0,
      0x51aa82bf, 0x10a20a66, 0x6fafdc6e, 0x7b3aab67, 0x345305b4, 0x6a5283f9,
      0x5e7970c,  0x15ab0198, 0x29dae944, 0x7564c8da,
  };
  for (auto v : array_1) {
    v9->add_f_0(v);
  }
  v8->set_f_4(0x177361dab6070);
  v8->set_f_19(s->substr(0, 115));
  v8->set_f_21(s->substr(0, 22));
  v8->set_f_23(Message0::M6::M21::E5_CONST_3);
  v8->set_f_29(s->substr(0, 4));
  v8->set_f_24(0xff7116);
  v8->set_f_15(s->substr(0, 25));
  Message0::M6::M21::M30* v10 = v8->mutable_f_43();
  v10->set_f_0(Message0::M6::M21::M30::E8_CONST_3);
  v8->set_f_16(s->substr(0, 15));
  v8->set_f_0(Message0::M6::M21::E4_CONST_2);
  v8->set_f_27(s->substr(0, 14));
  v8->set_f_9(s->substr(0, 8));
  v8->set_f_13(s->substr(0, 4));
  Message0::M6::M21::M26* v11_0 = v8->add_f_40();
  v11_0->set_f_0(s->substr(0, 105));
  v8->set_f_28(0x35fd9b715);
  v8->set_f_10(0x62af4636b);
  v8->set_f_6(s->substr(0, 44));
  v8->set_f_17(s->substr(0, 18));
  v8->set_f_22(s->substr(0, 31));
  Message0::M7* v12 = message->mutable_f_22();
  v12->set_f_0(0x54);
  message->set_f_4(s->substr(0, 119));
  Message0::M12* v13_0 = message->add_f_29();
  v13_0->set_f_0(s->substr(0, 10));
  message->set_f_2(0x7);
  message->set_f_6(0xc6a2098);
  message->set_f_1(Message0::E1_CONST_1);
  Message0::M2* v14_0 = message->add_f_15();
  v14_0->set_f_1(s->substr(0, 3));
  v14_0->set_f_2(0x25);
  v14_0->set_f_0(s->substr(0, 7));
  Message0::M5* v15_0 = message->add_f_19();
  (void)v15_0;  // Suppresses clang-tidy.
  Message0::M5* v15_1 = message->add_f_19();
  (void)v15_1;  // Suppresses clang-tidy.
  Message0::M3* v16_0 = message->add_f_16();
  Message0::M3::M22* v17_0 = v16_0->add_f_2();
  v17_0->set_f_0(s->substr(0, 177));
  Message0::M3::M22::M29* v18 = v17_0->mutable_f_3();
  (void)v18;  // Suppresses clang-tidy.
  Message0::M3* v16_1 = message->add_f_16();
  (void)v16_1;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 6));
  Message0::M13* v19 = message->mutable_f_30();
  v19->set_f_0(0x17);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M19* v0 = message->mutable_f_37();
  (void)v0;  // Suppresses clang-tidy.
  Message0::M13* v1 = message->mutable_f_30();
  v1->set_f_0(0x67);
  message->set_f_0(s->substr(0, 17));
  message->set_f_2(0x35);
  Message0::M10* v2 = message->mutable_f_27();
  v2->set_f_0(s->substr(0, 116));
  message->set_f_3(s->substr(0, 13));
  Message0::M5* v3_0 = message->add_f_19();
  v3_0->set_f_0(0x15fd337);
  Message0::M8* v4 = message->mutable_f_24();
  v4->set_f_0(0x1963064d14200);
  Message0::M14* v5 = message->mutable_f_31();
  v5->set_f_0(0x1a0c);
  message->set_f_5(0x1fd1);
  Message0::M4* v6_0 = message->add_f_17();
  (void)v6_0;  // Suppresses clang-tidy.
  Message0::M17* v7 = message->mutable_f_35();
  v7->set_f_0(0x29);
  message->set_f_1(Message0::E1_CONST_3);
  Message0::M16* v8 = message->mutable_f_34();
  v8->set_f_0(0x1daccf05733b7);
  message->set_f_8(s->substr(0, 7));
  message->set_f_9(0x4034db3e4);
  Message0::M9* v9 = message->mutable_f_25();
  v9->set_f_0(0x6a082d3f8);
  message->set_f_7(0x31);
  message->set_f_4(s->substr(0, 22));
  message->set_f_6(0x1045e52884f);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M1* v0_0 = message->add_f_13();
  v0_0->set_f_2(s->substr(0, 6));
  v0_0->set_f_5(s->substr(0, 10));
  v0_0->set_f_0(s->substr(0, 10));
  v0_0->set_f_6(false);
  v0_0->set_f_3(Message0::M1::E2_CONST_4);
  v0_0->set_f_1(s->substr(0, 18));
  v0_0->set_f_8(s->substr(0, 37));
  Message0::M7* v1 = message->mutable_f_22();
  v1->set_f_0(0x10);
  Message0::M6* v2 = message->mutable_f_21();
  v2->set_f_0(0x21);
  Message0::M9* v3 = message->mutable_f_25();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_7(0x2);
  Message0::M4* v4_0 = message->add_f_17();
  v4_0->set_f_1(s->substr(0, 3));
  v4_0->set_f_0(0x975cc1dca95);
  Message0::M5* v5_0 = message->add_f_19();
  v5_0->set_f_0(0x1cf28c51bd98b);
  Message0::M10* v6 = message->mutable_f_27();
  v6->set_f_0(s->substr(0, 78));
  message->set_f_9(0x3109cdcdbfc);
  Message0::M18* v7 = message->mutable_f_36();
  (void)v7;  // Suppresses clang-tidy.
  Message0::M16* v8 = message->mutable_f_34();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_3(s->substr(0, 15));
  Message0::M13* v9 = message->mutable_f_30();
  v9->set_f_0(0x3b);
  Message0::M19* v10 = message->mutable_f_37();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_1(Message0::E1_CONST_5);
  message->set_f_5(0x41);
  message->set_f_2(0x2d);
  Message0::M14* v11 = message->mutable_f_31();
  (void)v11;  // Suppresses clang-tidy.
  message->set_f_8(s->substr(0, 2));
  Message0::M3* v12_0 = message->add_f_16();
  (void)v12_0;  // Suppresses clang-tidy.
  Message0::M20* v13 = message->mutable_f_39();
  v13->set_f_1(s->substr(0, 1));
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
}  // namespace fleetbench::rpc::P8::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
