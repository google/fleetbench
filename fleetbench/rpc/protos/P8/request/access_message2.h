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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message2.pb.h"

namespace fleetbench::rpc::P8::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_16();
  v0->set_f_7(0x4c);
  v0->set_f_5(s->substr(0, 10));
  v0->set_f_4(0x6129b5fc4);
  v0->set_f_3(s->substr(0, 6));
  message->set_f_0(s->substr(0, 64));
  Message2::M7* v1_0 = message->add_f_21();
  Message2::M7::M14* v2 = v1_0->mutable_f_2();
  v2->set_f_0(s->substr(0, 8));
  v2->set_f_1(s->substr(0, 14));
  Message2::M7::M15* v3 = v1_0->mutable_f_3();
  v3->set_f_2(s->substr(0, 5));
  Message2::M7::M15::M19* v4_0 = v3->add_f_9();
  v4_0->set_f_5(Message2::M7::M15::M19::E10_CONST_2);
  v4_0->set_f_7(0xbc55fa4808);
  v4_0->set_f_13(s->substr(0, 16));
  v4_0->set_f_6(s->substr(0, 25));
  v4_0->set_f_9(0x853db79);
  v4_0->set_f_0(0x30);
  v4_0->set_f_10(0x7e);
  v4_0->set_f_12(s->substr(0, 11));
  v4_0->set_f_1(Message2::M7::M15::M19::E9_CONST_5);
  v3->set_f_4(0x74);
  v3->set_f_6(s->substr(0, 7));
  v3->set_f_5(s->substr(0, 28));
  v1_0->set_f_0(s->substr(0, 5));
  Message2::M4* v5_0 = message->add_f_17();
  v5_0->set_f_4(s->substr(0, 8));
  v5_0->set_f_0(0x3409c08518f);
  v5_0->set_f_1(s->substr(0, 18));
  v5_0->set_f_2(s->substr(0, 140));
  v5_0->set_f_6(0x56);
  v5_0->set_f_7(s->substr(0, 1));
  Message2::M5* v6 = message->mutable_f_18();
  v6->set_f_2(0x14b7);
  v6->set_f_1(0x2ab91f57d56);
  v6->set_f_3(s->substr(0, 43));
  v6->set_f_4(s->substr(0, 11));
  Message2::M1* v7 = message->mutable_f_14();
  v7->set_f_0(s->substr(0, 7));
  v7->set_f_1(s->substr(0, 8));
  message->set_f_6(s->substr(0, 33));
  message->set_f_1(true);
  Message2::M10* v8 = message->mutable_f_24();
  (void)v8;  // Suppresses clang-tidy.
  Message2::M12* v9_0 = message->add_f_27();
  (void)v9_0;  // Suppresses clang-tidy.
  message->set_f_7(s->substr(0, 13));
  Message2::M2* v10_0 = message->add_f_15();
  v10_0->set_f_0(s->substr(0, 7));
  v10_0->set_f_1(s->substr(0, 32));
  Message2::M9* v11_0 = message->add_f_23();
  v11_0->set_f_0(Message2::M9::E3_CONST_1);
  v11_0->set_f_1(0x1bd8be4);
  Message2::M8* v12 = message->mutable_f_22();
  v12->set_f_1(true);
  Message2::M8::M17* v13 = v12->mutable_f_15();
  v13->set_f_2(s->substr(0, 12));
  v13->set_f_24(0x6);
  v13->set_f_22(0x615fa95);
  v13->set_f_4(0x39ae00753dd);
  v13->set_f_8(0x6c);
  v13->set_f_1(s->substr(0, 98));
  v13->set_f_16(0xb99a6b8);
  v13->set_f_23(s->substr(0, 2));
  v13->set_f_7(s->substr(0, 131));
  v13->set_f_6(true);
  v13->set_f_17(s->substr(0, 151));
  v13->set_f_20(0x3374e62);
  v13->set_f_15(0xeb6ed85);
  v13->set_f_21(false);
  v13->set_f_12(false);
  v13->set_f_18(0x6651f95);
  v13->set_f_9(s->substr(0, 23));
  v13->set_f_5(0x689def672f661b74);
  v12->set_f_9(true);
  v12->set_f_6(0x73);
  v12->set_f_0(0x96f3599);
  v12->set_f_5(s->substr(0, 4));
  v12->set_f_4(Message2::M8::E2_CONST_3);
  message->set_f_2(false);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_2(false);
  Message2::M9* v0_0 = message->add_f_23();
  v0_0->set_f_1(0x277af68874a);
  v0_0->set_f_0(Message2::M9::E3_CONST_3);
  message->set_f_8(s->substr(0, 7));
  message->set_f_1(false);
  Message2::M10* v1 = message->mutable_f_24();
  v1->set_f_0(s->substr(0, 8));
  Message2::M12* v2_0 = message->add_f_27();
  v2_0->set_f_1(0x30);
  v2_0->set_f_0(s->substr(0, 4));
  Message2::M5* v3 = message->mutable_f_18();
  v3->set_f_3(s->substr(0, 18));
  v3->set_f_0(0x71f12d7ed);
  Message2::M7* v4_0 = message->add_f_21();
  Message2::M7::M14* v5 = v4_0->mutable_f_2();
  v5->set_f_1(s->substr(0, 25));
  v5->set_f_0(s->substr(0, 7));
  Message2::M7::M15* v6 = v4_0->mutable_f_3();
  v6->set_f_3(s->substr(0, 5));
  v6->set_f_6(s->substr(0, 58));
  v6->set_f_1(s->substr(0, 2));
  Message2::M7::M15::M19* v7_0 = v6->add_f_9();
  v7_0->set_f_10(0x12927b497816a);
  v7_0->set_f_4(0x3d102676397);
  Message2::M7::M15::M19::M21* v8 = v7_0->mutable_f_19();
  v8->set_f_0(0xb11609b);
  v7_0->set_f_13(s->substr(0, 13));
  v7_0->set_f_8(s->substr(0, 4));
  v7_0->set_f_5(Message2::M7::M15::M19::E10_CONST_3);
  v7_0->set_f_7(0x1cfcfd303);
  v7_0->set_f_12(s->substr(0, 14));
  v6->set_f_5(s->substr(0, 7));
  v6->set_f_2(s->substr(0, 10));
  Message2::M2* v9_0 = message->add_f_15();
  v9_0->set_f_0(s->substr(0, 3));
  v9_0->set_f_1(s->substr(0, 17));
  Message2::M4* v10_0 = message->add_f_17();
  v10_0->set_f_2(s->substr(0, 31));
  v10_0->set_f_3(0x4e);
  message->set_f_6(s->substr(0, 43));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M9* v0_0 = message->add_f_23();
  v0_0->set_f_0(Message2::M9::E3_CONST_5);
  v0_0->set_f_1(0xc506b3d);
  message->set_f_2(false);
  Message2::M3* v1 = message->mutable_f_16();
  v1->set_f_3(s->substr(0, 8));
  v1->set_f_5(s->substr(0, 9));
  v1->set_f_6(0x468517b);
  v1->set_f_7(0x5f);
  v1->set_f_2(0x67);
  v1->set_f_4(0xf);
  message->set_f_8(s->substr(0, 1));
  Message2::M11* v2 = message->mutable_f_25();
  Message2::M11::M16* v3 = v2->mutable_f_4();
  Message2::M11::M16::M18* v4 = v3->mutable_f_13();
  Message2::M11::M16::M18::M20* v5_0 = v4->add_f_12();
  v5_0->set_f_0(true);
  v4->set_f_8(s->substr(0, 26));
  v4->set_f_2(0x7202846d);
  Message2::M11::M16::M18::M22* v6_0 = v4->add_f_13();
  v6_0->set_f_2(0x64);
  v6_0->set_f_1(Message2::M11::M16::M18::M22::E11_CONST_5);
  Message2::M11::M16::M18::M22* v6_1 = v4->add_f_13();
  v6_1->set_f_1(Message2::M11::M16::M18::M22::E11_CONST_4);
  v6_1->set_f_0(s->substr(0, 2));
  v6_1->set_f_2(0xb);
  v4->set_f_5(s->substr(0, 31));
  v4->set_f_0(s->substr(0, 6));
  v3->set_f_6(true);
  v3->set_f_8(0x2681d92ed);
  v3->set_f_0(0x3d6f662870b);
  v3->set_f_1(s->substr(0, 10));
  v3->set_f_2(s->substr(0, 5));
  v3->set_f_7(Message2::M11::M16::E5_CONST_1);
  v2->set_f_0(s->substr(0, 1031));
  message->set_f_1(false);
  Message2::M7* v7_0 = message->add_f_21();
  v7_0->set_f_0(s->substr(0, 2));
  Message2::M7::M15* v8 = v7_0->mutable_f_3();
  Message2::M7::M15::M19* v9_0 = v8->add_f_9();
  Message2::M7::M15::M19::M21* v10 = v9_0->mutable_f_19();
  v10->set_f_0(0x25f7355c54b);
  v9_0->set_f_10(0x70);
  v9_0->set_f_2(0x7e);
  v9_0->set_f_5(Message2::M7::M15::M19::E10_CONST_5);
  v9_0->set_f_6(s->substr(0, 4));
  v9_0->set_f_3(s->substr(0, 1424));
  v9_0->set_f_9(0xd300f921e1f6);
  v9_0->set_f_7(0x4af93cdd2);
  v9_0->set_f_0(0x690);
  v9_0->set_f_8(s->substr(0, 1));
  v9_0->set_f_12(s->substr(0, 23));
  v9_0->set_f_11(0x7bcd909);
  v9_0->set_f_13(s->substr(0, 1));
  Message2::M7::M15::M19* v9_1 = v8->add_f_9();
  v9_1->set_f_9(0x27);
  v9_1->set_f_8(s->substr(0, 8));
  v9_1->set_f_1(Message2::M7::M15::M19::E9_CONST_1);
  v9_1->set_f_4(0x2c49557237c);
  v9_1->set_f_12(s->substr(0, 75));
  v9_1->set_f_7(0x29e4c64dc98);
  Message2::M7::M15::M19::M21* v11 = v9_1->mutable_f_19();
  (void)v11;  // Suppresses clang-tidy.
  v9_1->set_f_13(s->substr(0, 7));
  v8->set_f_3(s->substr(0, 18));
  v8->set_f_5(s->substr(0, 15));
  v8->set_f_1(s->substr(0, 30));
  v8->set_f_6(s->substr(0, 18));
  v8->set_f_2(s->substr(0, 6));
  Message2::M7::M14* v12 = v7_0->mutable_f_2();
  v12->set_f_1(s->substr(0, 23));
  Message2::M7* v7_1 = message->add_f_21();
  Message2::M7::M15* v13 = v7_1->mutable_f_3();
  v13->set_f_3(s->substr(0, 6));
  v13->set_f_1(s->substr(0, 32));
  Message2::M7::M15::M19* v14_0 = v13->add_f_9();
  v14_0->set_f_4(0x37f11f086);
  v14_0->set_f_2(0x4c);
  v14_0->set_f_5(Message2::M7::M15::M19::E10_CONST_2);
  v14_0->set_f_0(0x2e);
  v14_0->set_f_12(s->substr(0, 62));
  v14_0->set_f_9(0x74b2786f4);
  v14_0->set_f_7(0x7d22869fa);
  Message2::M7::M15::M19::M21* v15 = v14_0->mutable_f_19();
  v15->set_f_0(0x174a3c);
  v14_0->set_f_11(0xcedcc883);
  v14_0->set_f_6(s->substr(0, 6));
  v14_0->set_f_3(s->substr(0, 1));
  v14_0->set_f_13(s->substr(0, 7));
  v13->set_f_5(s->substr(0, 2));
  v7_1->set_f_0(s->substr(0, 14));
  Message2::M12* v16_0 = message->add_f_27();
  v16_0->set_f_0(s->substr(0, 19));
  Message2::M12* v16_1 = message->add_f_27();
  v16_1->set_f_1(0x4e);
  message->set_f_5(s->substr(0, 35));
  message->set_f_4(s->substr(0, 4));
  Message2::M4* v17_0 = message->add_f_17();
  v17_0->set_f_4(s->substr(0, 23));
  v17_0->set_f_8(s->substr(0, 25));
  v17_0->set_f_2(s->substr(0, 30));
  v17_0->set_f_3(0x1ecb);
  v17_0->set_f_7(s->substr(0, 22));
  Message2::M2* v18_0 = message->add_f_15();
  v18_0->set_f_0(s->substr(0, 13));
  Message2::M8* v19 = message->mutable_f_22();
  v19->set_f_6(0x19);
  v19->set_f_0(0x2f80e042d98);
  Message2::M8::M17* v20 = v19->mutable_f_15();
  v20->set_f_15(0x2e3879eab28);
  v20->set_f_6(false);
  v20->set_f_10(0x1df463d75a378);
  v20->set_f_18(0x1f0a40);
  v20->set_f_21(true);
  v20->set_f_7(s->substr(0, 29));
  v20->set_f_2(s->substr(0, 34));
  v20->set_f_0(0x2c);
  v20->set_f_19(0xc52cc10);
  v20->set_f_17(s->substr(0, 1));
  v20->set_f_8(0x5b);
  v20->set_f_13(0x1ef5089b12c);
  v20->set_f_9(s->substr(0, 3));
  v20->set_f_4(0x18bd13362bf);
  v20->set_f_24(0x3a);
  v20->set_f_20(0x36d3d5b36e);
  v20->set_f_14(Message2::M8::M17::E6_CONST_4);
  v20->set_f_1(s->substr(0, 2));
  v19->set_f_5(s->substr(0, 7));
  v19->set_f_7(s->substr(0, 49));
  v19->set_f_4(Message2::M8::E2_CONST_1);
  v19->set_f_2(Message2::M8::E1_CONST_1);
  message->set_f_0(s->substr(0, 14));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M11* v0 = message->mutable_f_25();
  v0->set_f_0(s->substr(0, 5));
  Message2::M11::M16* v1 = v0->mutable_f_4();
  v1->set_f_4(0x2bd8e2c3d9);
  v1->set_f_6(true);
  v1->set_f_3(s->substr(0, 1));
  v1->set_f_7(Message2::M11::M16::E5_CONST_2);
  v1->set_f_0(0xeb7f0fac6904);
  v1->set_f_5(s->substr(0, 5));
  Message2::M5* v2 = message->mutable_f_18();
  v2->set_f_1(0x292132c);
  v2->set_f_2(0x9ddea67);
  Message2::M8* v3 = message->mutable_f_22();
  v3->set_f_9(true);
  v3->set_f_7(s->substr(0, 15));
  v3->set_f_8(0x1f074d5b1ac72);
  v3->set_f_3(0x3f088bfabb7b53c7);
  v3->set_f_5(s->substr(0, 3));
  v3->set_f_2(Message2::M8::E1_CONST_5);
  v3->set_f_6(0x2c);
  v3->set_f_1(false);
  Message2::M6* v4 = message->mutable_f_19();
  v4->set_f_2(0x6);
  v4->set_f_0(0x50);
  message->set_f_4(s->substr(0, 3));
  Message2::M1* v5 = message->mutable_f_14();
  v5->set_f_1(s->substr(0, 30));
  v5->set_f_0(s->substr(0, 44));
  message->set_f_3(s->substr(0, 4));
  message->set_f_1(true);
  message->set_f_7(s->substr(0, 18));
  message->set_f_6(s->substr(0, 264));
  Message2::M4* v6_0 = message->add_f_17();
  v6_0->set_f_6(0x53);
  v6_0->set_f_1(s->substr(0, 1));
  v6_0->set_f_2(s->substr(0, 3));
  v6_0->set_f_3(0x26);
  v6_0->set_f_4(s->substr(0, 2));
  v6_0->set_f_8(s->substr(0, 39));
  v6_0->set_f_0(0x2d356b4);
  v6_0->set_f_5(0x217119f9363);
  message->set_f_0(s->substr(0, 14));
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
}  // namespace fleetbench::rpc::P8::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_
