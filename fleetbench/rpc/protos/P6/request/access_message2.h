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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/request/Message2.pb.h"

namespace fleetbench::rpc::P6::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_14(s->substr(0, 14));
  message->set_f_3(0x4dc24e1013ac8286);
  Message2::M1* v0 = message->mutable_f_46();
  v0->set_f_2(0x8);
  v0->set_f_1(Message2::M1::E5_CONST_4);
  Message2::M1::M20* v1 = v0->mutable_f_9();
  v1->set_f_0(0x4cefc52b);
  v0->set_f_3(0x72409ff94bf6b45a);
  Message2::M1::M15* v2 = v0->mutable_f_8();
  v2->set_f_1(0x539e0a2c4c9f027);
  v2->set_f_0(s->substr(0, 1));
  message->set_f_21(false);
  message->set_f_24(0x6e444dc0d07da176);
  message->set_f_18(true);
  message->set_f_4(0x3c173f27d78d2065);
  message->set_f_13(false);
  message->set_f_19(0x33eb183e);
  Message2::M5* v3_0 = message->add_f_52();
  v3_0->set_f_1(0xd79f79f);
  v3_0->set_f_0(0x6d);
  message->set_f_2(s->substr(0, 3));
  Message2::M7* v4 = message->mutable_f_54();
  v4->set_f_3(true);
  v4->set_f_0(0x5b13a8c60bc514ba);
  v4->set_f_2(false);
  v4->set_f_1(Message2::M7::E12_CONST_1);
  message->set_f_15(0x157975);
  message->set_f_23(s->substr(0, 63));
  message->add_f_27(Message2::E4_CONST_2);
  message->set_f_12(Message2::E3_CONST_3);
  message->add_f_9(Message2::E2_CONST_5);
  Message2::M8* v5 = message->mutable_f_57();
  v5->add_f_0(Message2::M8::E13_CONST_1);
  Message2::M8::M13* v6 = v5->mutable_f_3();
  v6->set_f_3(true);
  Message2::M8::M13::M28* v7 = v6->mutable_f_6();
  v7->set_f_25(0x6e1b7fa5354288a2);
  v7->set_f_28(0x71);
  v7->set_f_31(s->substr(0, 17));
  Message2::M8::M13::M28::M30* v8 = v7->mutable_f_54();
  v8->set_f_5(0xbac5cf4);
  v8->set_f_6(0x7d);
  v8->set_f_1(0x2180354251a3bb26);
  v8->set_f_4(true);
  v8->set_f_0(0.022209);
  v8->set_f_3(Message2::M8::M13::M28::M30::E38_CONST_1);
  v7->set_f_0(true);
  v7->set_f_27(0x4389b45);
  v7->set_f_15(0x32eabd2);
  v7->set_f_20(Message2::M8::M13::M28::E35_CONST_3);
  v7->set_f_1(s->substr(0, 464));
  v7->set_f_23(0x682b1a6);
  v7->set_f_2(Message2::M8::M13::M28::E30_CONST_4);
  v7->set_f_17(0x1888e07a1d86a05);
  v7->set_f_11(0x4c);
  v7->set_f_21(s->substr(0, 127));
  v7->set_f_14(0x1bac7113f11de95d);
  v7->add_f_10(Message2::M8::M13::M28::E34_CONST_3);
  v7->add_f_7(Message2::M8::M13::M28::E32_CONST_4);
  Message2::M8::M13::M28::M33* v9_0 = v7->add_f_56();
  v9_0->set_f_2(0x784391d59e697761);
  v9_0->set_f_1(0x5e11a515fd0b3935);
  v9_0->set_f_0(0x6d630453);
  v7->set_f_4(0x255c4467b3db5518);
  v7->set_f_29(Message2::M8::M13::M28::E37_CONST_5);
  v7->set_f_12(0xef90813);
  v7->set_f_26(0x17b0b0a);
  v7->set_f_19(true);
  v7->set_f_8(Message2::M8::M13::M28::E33_CONST_4);
  v7->set_f_18(s->substr(0, 8));
  v7->add_f_24(Message2::M8::M13::M28::E36_CONST_4);
  v7->set_f_13(0x29419004);
  v7->set_f_22(0xbb9ccdf);
  v7->set_f_30(s->substr(0, 7));
  Message2::M8::M13::M28::M29* v10 = v7->mutable_f_51();
  v10->set_f_1(0x9756e);
  v7->set_f_3(0x658c9cca8);
  v6->set_f_2(0x1f7786);
  v6->set_f_0(0xaeec680);
  v6->set_f_1(Message2::M8::M13::E21_CONST_4);
  Message2::M8::M18* v11_0 = v5->add_f_4();
  (void)v11_0;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 355));
  Message2::M6* v12_0 = message->add_f_53();
  v12_0->set_f_3(0x7d184951);
  Message2::M6::M24* v13 = v12_0->mutable_f_13();
  v13->set_f_27(Message2::M6::M24::E29_CONST_5);
  v13->set_f_23(0x12cacb50889b81f4);
  v13->set_f_2(0x7c);
  v13->set_f_5(0xa);
  v13->set_f_20(0x1732b78);
  v13->set_f_9(s->substr(0, 28));
  v13->set_f_7(Message2::M6::M24::E26_CONST_5);
  v13->set_f_26(s->substr(0, 15));
  v13->set_f_15(s->substr(0, 4));
  v13->set_f_24(false);
  v13->set_f_19(0x7a168e582955a83);
  v13->set_f_4(0x779089460ff1d7ec);
  v13->set_f_25(Message2::M6::M24::E28_CONST_1);
  v13->set_f_6(0x5272344a);
  v13->set_f_28(s->substr(0, 23));
  v13->set_f_21(0x4692af3347d4bca7);
  v13->set_f_22(0x3c33fad4ca08149d);
  v13->set_f_8(0x13d36114);
  v13->set_f_11(s->substr(0, 119));
  v13->set_f_17(s->substr(0, 17));
  v12_0->set_f_0(true);
  Message2::M6::M26* v14 = v12_0->mutable_f_15();
  v14->set_f_1(0x7b);
  v14->set_f_0(0x30d748accf25797a);
  message->set_f_6(0x5c87ef849aca9486);
  message->set_f_26(0x30938ab6df8672ea);
  Message2::M3* v15 = message->mutable_f_50();
  Message2::M3::M11* v16_0 = v15->add_f_11();
  v16_0->set_f_2(true);
  v16_0->set_f_3(0x13);
  v16_0->set_f_5(0x8c6d8c191a861e);
  v16_0->set_f_1(Message2::M3::M11::E18_CONST_4);
  v16_0->set_f_0(0x55a1c186d1a24753);
  Message2::M3::M14* v17 = v15->mutable_f_13();
  v17->set_f_3(0x8);
  v17->set_f_1(0x5f11828ada312106);
  v17->set_f_2(0.097282);
  v15->set_f_0(Message2::M3::E7_CONST_5);
  v15->set_f_1(s->substr(0, 21));
  Message2::M3::E10 array_1[21] = {
      Message2::M3::E10_CONST_5, Message2::M3::E10_CONST_5,
      Message2::M3::E10_CONST_2, Message2::M3::E10_CONST_1,
      Message2::M3::E10_CONST_1, Message2::M3::E10_CONST_1,
      Message2::M3::E10_CONST_2, Message2::M3::E10_CONST_5,
      Message2::M3::E10_CONST_5, Message2::M3::E10_CONST_2,
      Message2::M3::E10_CONST_5, Message2::M3::E10_CONST_5,
      Message2::M3::E10_CONST_4, Message2::M3::E10_CONST_2,
      Message2::M3::E10_CONST_1, Message2::M3::E10_CONST_5,
      Message2::M3::E10_CONST_4, Message2::M3::E10_CONST_5,
      Message2::M3::E10_CONST_5, Message2::M3::E10_CONST_2,
      Message2::M3::E10_CONST_4,
  };
  for (auto v : array_1) {
    v15->add_f_4(v);
  }
  v15->set_f_3(Message2::M3::E9_CONST_2);
  v15->set_f_2(Message2::M3::E8_CONST_2);
  message->set_f_29(s->substr(0, 28));
  message->set_f_17(0x29ad2d36);
  Message2::M2* v18_0 = message->add_f_48();
  Message2::M2::M25* v19 = v18_0->mutable_f_12();
  (void)v19;  // Suppresses clang-tidy.
  Message2::M2::M16* v20 = v18_0->mutable_f_8();
  v20->set_f_0(0xfdb1305);
  v18_0->set_f_1(true);
  Message2::M9* v21 = message->mutable_f_59();
  v21->set_f_1(Message2::M9::E15_CONST_4);
  v21->set_f_5(0x31fc0929e7311b78);
  Message2::M9::M12* v22 = v21->mutable_f_9();
  v22->set_f_1(s->substr(0, 221));
  v22->set_f_5(0x60445edcb407feac);
  v22->set_f_0(0x470dfde154cd729d);
  v22->add_f_4(Message2::M9::M12::E20_CONST_3);
  v22->set_f_6(0x7b);
  v22->set_f_2(0x3);
  v22->set_f_3(0x3af8bc656c1fbe1c);
  v21->set_f_2(s->substr(0, 2));
  v21->set_f_3(s->substr(0, 8));
  v21->set_f_0(Message2::M9::E14_CONST_1);
  message->set_f_16(0x424315fc7499fd4f);
  message->set_f_28(0x3e);
  message->set_f_7(0x6eb3f6f23f78e175);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_24(0x3e8b0682fa9d1567);
  message->set_f_1(s->substr(0, 9));
  message->set_f_25(0x52);
  message->set_f_21(true);
  message->set_f_0(s->substr(0, 17));
  Message2::M5* v0_0 = message->add_f_52();
  v0_0->set_f_1(0x5c);
  Message2::E4 array_0[12] = {
      Message2::E4_CONST_2, Message2::E4_CONST_4, Message2::E4_CONST_1,
      Message2::E4_CONST_4, Message2::E4_CONST_1, Message2::E4_CONST_1,
      Message2::E4_CONST_1, Message2::E4_CONST_3, Message2::E4_CONST_1,
      Message2::E4_CONST_1, Message2::E4_CONST_5, Message2::E4_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_27(v);
  }
  message->set_f_18(true);
  message->set_f_7(0x58e812cdea4cda45);
  Message2::M8* v1 = message->mutable_f_57();
  v1->add_f_0(Message2::M8::E13_CONST_1);
  Message2::M8::M18* v2_0 = v1->add_f_4();
  (void)v2_0;  // Suppresses clang-tidy.
  Message2::M8::M13* v3 = v1->mutable_f_3();
  v3->set_f_2(0x66);
  v3->set_f_3(true);
  v3->set_f_0(0x2fc5dbed);
  v3->set_f_1(Message2::M8::M13::E21_CONST_2);
  message->set_f_14(s->substr(0, 15));
  message->set_f_4(0xf61131b8600884);
  message->set_f_5(0x3503f);
  message->set_f_11(0x5119633);
  message->set_f_16(0x6952fa82388049f1);
  message->set_f_29(s->substr(0, 30));
  Message2::M2* v4_0 = message->add_f_48();
  Message2::M2::M21* v5 = v4_0->mutable_f_10();
  v5->set_f_3(s->substr(0, 2));
  v5->set_f_0(true);
  v5->set_f_2(s->substr(0, 20));
  v4_0->set_f_2(0xe3c9a35);
  v4_0->set_f_0(Message2::M2::E6_CONST_4);
  message->set_f_19(0x2ef7568);
  Message2::M3* v6 = message->mutable_f_50();
  Message2::M3::M10* v7_0 = v6->add_f_10();
  v7_0->add_f_0(Message2::M3::M10::E17_CONST_3);
  v7_0->add_f_0(Message2::M3::M10::E17_CONST_1);
  v7_0->set_f_1(0x1213b51f55919616);
  v7_0->set_f_3(s->substr(0, 9));
  v7_0->set_f_4(false);
  v7_0->set_f_5(true);
  v6->add_f_4(Message2::M3::E10_CONST_5);
  v6->set_f_0(Message2::M3::E7_CONST_2);
  v6->set_f_1(s->substr(0, 5));
  v6->set_f_2(Message2::M3::E8_CONST_4);
  Message2::M3::M14* v8 = v6->mutable_f_13();
  v8->set_f_1(0x57d20607488b08fe);
  v8->set_f_4(0x11bdf4eb);
  v8->set_f_2(0.273779);
  v6->set_f_3(Message2::M3::E9_CONST_4);
  Message2::M3::M11* v9_0 = v6->add_f_11();
  v9_0->set_f_0(0x2494b8e5a8ac427f);
  v9_0->set_f_3(0x6547ae7);
  v9_0->set_f_5(0x1fa556f8ec6efcdb);
  v9_0->set_f_6(0x35e4d);
  v9_0->set_f_1(Message2::M3::M11::E18_CONST_2);
  v9_0->set_f_2(true);
  Message2::M3::M11::E19 array_1[18] = {
      Message2::M3::M11::E19_CONST_4, Message2::M3::M11::E19_CONST_5,
      Message2::M3::M11::E19_CONST_4, Message2::M3::M11::E19_CONST_4,
      Message2::M3::M11::E19_CONST_1, Message2::M3::M11::E19_CONST_4,
      Message2::M3::M11::E19_CONST_5, Message2::M3::M11::E19_CONST_3,
      Message2::M3::M11::E19_CONST_2, Message2::M3::M11::E19_CONST_5,
      Message2::M3::M11::E19_CONST_5, Message2::M3::M11::E19_CONST_4,
      Message2::M3::M11::E19_CONST_5, Message2::M3::M11::E19_CONST_4,
      Message2::M3::M11::E19_CONST_1, Message2::M3::M11::E19_CONST_4,
      Message2::M3::M11::E19_CONST_1, Message2::M3::M11::E19_CONST_3,
  };
  for (auto v : array_1) {
    v9_0->add_f_4(v);
  }
  message->set_f_13(true);
  Message2::M6* v10_0 = message->add_f_53();
  Message2::M6::M19* v11 = v10_0->mutable_f_12();
  v11->set_f_0(false);
  v11->set_f_2(Message2::M6::M19::E24_CONST_2);
  v10_0->set_f_2(Message2::M6::E11_CONST_4);
  v10_0->set_f_1(s->substr(0, 3));
  v10_0->set_f_3(0x867b512);
  Message2::M6::M26* v12 = v10_0->mutable_f_15();
  v12->set_f_1(0x3359);
  Message2::M6::M24* v13 = v10_0->mutable_f_13();
  v13->set_f_23(0x5830bfafdc348ddd);
  v13->set_f_17(s->substr(0, 16));
  v13->set_f_8(0x35ecfa59);
  v13->set_f_10(0xbd400f923e02709);
  v13->set_f_20(0x2a);
  v13->set_f_15(s->substr(0, 498));
  v13->set_f_26(s->substr(0, 8));
  v13->set_f_25(Message2::M6::M24::E28_CONST_4);
  v13->set_f_11(s->substr(0, 7));
  v13->set_f_9(s->substr(0, 4));
  v13->set_f_19(0x434410d002f4f18b);
  v13->set_f_0(0.574180);
  v13->set_f_3(0x3a8e10ec1a6bd0d0);
  v13->set_f_27(Message2::M6::M24::E29_CONST_5);
  v13->set_f_18(true);
  v13->set_f_28(s->substr(0, 45));
  v13->set_f_5(0x1d);
  v13->set_f_1(s->substr(0, 31));
  message->set_f_12(Message2::E3_CONST_1);
  message->set_f_15(0x2);
  message->set_f_26(0x180a457d3f7ec512);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_6(0x438ded8b40aebb1);
  Message2::M7* v0 = message->mutable_f_54();
  v0->set_f_0(0x52193fed6477ca23);
  v0->set_f_2(false);
  v0->set_f_1(Message2::M7::E12_CONST_4);
  v0->set_f_3(true);
  message->set_f_15(0x287a76c);
  message->set_f_8(Message2::E1_CONST_3);
  message->set_f_24(0x633291b905939ce4);
  Message2::M2* v1_0 = message->add_f_48();
  v1_0->set_f_2(0x15359ca);
  v1_0->set_f_1(false);
  v1_0->set_f_0(Message2::M2::E6_CONST_2);
  Message2::M2::M25* v2 = v1_0->mutable_f_12();
  v2->set_f_0(true);
  Message2::M5* v3_0 = message->add_f_52();
  v3_0->set_f_0(0x9769f3d);
  message->set_f_1(s->substr(0, 3));
  Message2::M1* v4 = message->mutable_f_46();
  v4->set_f_0(0x3d7e96ee63b1d23a);
  v4->set_f_3(0x2685d72ef5616afc);
  v4->set_f_2(0x7);
  v4->set_f_1(Message2::M1::E5_CONST_1);
  Message2::M1::M15* v5 = v4->mutable_f_8();
  v5->set_f_1(0x5aeb63bd3b640bd2);
  v5->set_f_2(s->substr(0, 30));
  Message2::M1::M20* v6 = v4->mutable_f_9();
  (void)v6;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 12));
  message->set_f_19(0x1df45180);
  Message2::M6* v7_0 = message->add_f_53();
  v7_0->set_f_1(s->substr(0, 13));
  v7_0->set_f_2(Message2::M6::E11_CONST_4);
  Message2::M6::M19* v8 = v7_0->mutable_f_12();
  Message2::M6::M19::E23 array_0[21] = {
      Message2::M6::M19::E23_CONST_4, Message2::M6::M19::E23_CONST_3,
      Message2::M6::M19::E23_CONST_5, Message2::M6::M19::E23_CONST_5,
      Message2::M6::M19::E23_CONST_2, Message2::M6::M19::E23_CONST_3,
      Message2::M6::M19::E23_CONST_2, Message2::M6::M19::E23_CONST_4,
      Message2::M6::M19::E23_CONST_3, Message2::M6::M19::E23_CONST_1,
      Message2::M6::M19::E23_CONST_2, Message2::M6::M19::E23_CONST_3,
      Message2::M6::M19::E23_CONST_4, Message2::M6::M19::E23_CONST_1,
      Message2::M6::M19::E23_CONST_2, Message2::M6::M19::E23_CONST_2,
      Message2::M6::M19::E23_CONST_2, Message2::M6::M19::E23_CONST_1,
      Message2::M6::M19::E23_CONST_2, Message2::M6::M19::E23_CONST_1,
      Message2::M6::M19::E23_CONST_3,
  };
  for (auto v : array_0) {
    v8->add_f_1(v);
  }
  v8->set_f_2(Message2::M6::M19::E24_CONST_3);
  v8->set_f_0(false);
  v7_0->set_f_3(0x73f0ac04);
  message->set_f_25(0xa);
  message->set_f_13(true);
  Message2::M8* v9 = message->mutable_f_57();
  v9->add_f_0(Message2::M8::E13_CONST_2);
  Message2::M8::M18* v10_0 = v9->add_f_4();
  v10_0->set_f_0(0.259856);
  Message2::M8::M13* v11 = v9->mutable_f_3();
  v11->set_f_1(Message2::M8::M13::E21_CONST_1);
  Message2::M8::M13::M28* v12 = v11->mutable_f_6();
  v12->set_f_9(0x680be9004fd0f735);
  v12->set_f_6(0x39d33);
  v12->set_f_30(s->substr(0, 2));
  v12->set_f_3(0x2da59b16920);
  v12->set_f_21(s->substr(0, 7));
  Message2::M8::M13::M28::M30* v13 = v12->mutable_f_54();
  v13->set_f_6(0x4528645dc);
  v13->set_f_3(Message2::M8::M13::M28::M30::E38_CONST_3);
  v13->set_f_0(0.943705);
  v13->set_f_5(0xab8b22a);
  v13->set_f_1(0x2dad5665a146a28a);
  v13->set_f_2(0x3c3f53479618dc55);
  v13->set_f_4(false);
  v12->set_f_16(0x1e);
  v12->set_f_11(0x18b502b);
  v12->set_f_23(0x4726aeb);
  v12->set_f_4(0x60bf93b29a401624);
  v12->set_f_8(Message2::M8::M13::M28::E33_CONST_4);
  v12->set_f_1(s->substr(0, 21));
  v12->set_f_13(0x8eb97f);
  v12->set_f_0(true);
  v12->add_f_7(Message2::M8::M13::M28::E32_CONST_2);
  v12->set_f_12(0x69);
  Message2::M8::M13::M28::M29* v14 = v12->mutable_f_51();
  v14->set_f_0(s->substr(0, 31));
  v14->set_f_1(0x4faa875);
  v12->set_f_27(0x30);
  v12->set_f_26(0x11);
  v12->add_f_10(Message2::M8::M13::M28::E34_CONST_3);
  v12->set_f_20(Message2::M8::M13::M28::E35_CONST_2);
  v12->set_f_31(s->substr(0, 294));
  v12->set_f_18(s->substr(0, 30));
  v12->add_f_5(Message2::M8::M13::M28::E31_CONST_1);
  Message2::M8::M13::M28::M32* v15_0 = v12->add_f_55();
  (void)v15_0;  // Suppresses clang-tidy.
  v12->set_f_29(Message2::M8::M13::M28::E37_CONST_3);
  v11->set_f_3(true);
  message->set_f_4(0x4630107b857026ed);
  message->add_f_27(Message2::E4_CONST_2);
  message->set_f_12(Message2::E3_CONST_5);
  message->set_f_22(false);
  message->set_f_11(0x9d9130d);
  message->set_f_23(s->substr(0, 5));
  message->set_f_7(0x4f1c1b5a0fe9ec70);
  message->set_f_20(0x47e7f8bee9dc1a2f);
  message->set_f_18(true);
  message->set_f_28(0xd312334);
  message->set_f_29(s->substr(0, 19));
  message->set_f_21(true);
  message->set_f_5(0x1db77c);
  Message2::M9* v16 = message->mutable_f_59();
  v16->set_f_5(0x6e4d600afd5cbc1d);
  v16->set_f_2(s->substr(0, 119));
  Message2::M9::M12* v17 = v16->mutable_f_9();
  v17->set_f_0(0x16762abd1d6b825a);
  Message2::M9::M12::E20 array_1[6] = {
      Message2::M9::M12::E20_CONST_1, Message2::M9::M12::E20_CONST_2,
      Message2::M9::M12::E20_CONST_4, Message2::M9::M12::E20_CONST_3,
      Message2::M9::M12::E20_CONST_1, Message2::M9::M12::E20_CONST_2,
  };
  for (auto v : array_1) {
    v17->add_f_4(v);
  }
  v17->set_f_3(0x3685f2da61cdd5b3);
  v17->set_f_6(0x6a32503);
  v17->set_f_5(0x5a603abaf45c1e46);
  v16->set_f_1(Message2::M9::E15_CONST_4);
  v16->set_f_0(Message2::M9::E14_CONST_2);
  v16->set_f_3(s->substr(0, 48));
  v16->set_f_4(Message2::M9::E16_CONST_5);
  message->set_f_17(0x35483b24);
  message->set_f_14(s->substr(0, 105));
  Message2::M4* v18 = message->mutable_f_51();
  Message2::M4::M22* v19_0 = v18->add_f_11();
  v19_0->set_f_0(s->substr(0, 6));
  Message2::M4::M17* v20 = v18->mutable_f_10();
  v20->set_f_1(0xbf8c2);
  v18->set_f_0(0x7814ca1d02a137b5);
  v18->set_f_1(0x11021304c6760990);
  v18->set_f_3(false);
  Message2::M4::M23* v21_0 = v18->add_f_13();
  Message2::M4::M23::M27* v22_0 = v21_0->add_f_2();
  v22_0->set_f_1(0x72154142);
  Message2::M4::M23::M27::M34* v23 = v22_0->mutable_f_5();
  v23->add_f_1(Message2::M4::M23::M27::M34::E41_CONST_5);
  Message2::M4::M23::M27::M34::M36* v24_0 = v23->add_f_6();
  v24_0->set_f_12(0x5e2baea8b3b3955);
  v24_0->set_f_21(false);
  v24_0->set_f_11(0x1878dc8c);
  v24_0->set_f_27(true);
  v24_0->set_f_25(0x13);
  v24_0->set_f_29(Message2::M4::M23::M27::M34::M36::E46_CONST_3);
  v24_0->set_f_22(0x278d4f65407ea20e);
  v24_0->set_f_13(0x10c8d147);
  v24_0->set_f_17(s->substr(0, 2));
  v24_0->set_f_2(s->substr(0, 8));
  v24_0->set_f_26(s->substr(0, 4));
  v24_0->set_f_15(0x2616b5e8);
  v24_0->set_f_6(0x215d5648029301b3);
  v24_0->set_f_3(false);
  v24_0->set_f_7(0x172aea46);
  v24_0->set_f_10(0x4a5e88c83040fa7d);
  v24_0->set_f_8(s->substr(0, 3635));
  v24_0->set_f_16(0x756eb11f877deda2);
  Message2::M4::M23::M27::M34::M36::E45 array_2[12] = {
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_3,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_3,
      Message2::M4::M23::M27::M34::M36::E45_CONST_2,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
  };
  for (auto v : array_2) {
    v24_0->add_f_28(v);
  }
  v24_0->set_f_20(s->substr(0, 16));
  v24_0->set_f_14(s->substr(0, 5));
  v24_0->set_f_0(s->substr(0, 3));
  v24_0->set_f_30(0x435d8e93c5683947);
  v24_0->set_f_23(Message2::M4::M23::M27::M34::M36::E44_CONST_4);
  v24_0->set_f_9(0x4a);
  v24_0->set_f_19(0x732b7);
  v24_0->set_f_1(Message2::M4::M23::M27::M34::M36::E42_CONST_5);
  v23->set_f_2(0x17ea55);
  v23->set_f_0(false);
  Message2::M4::M23::M27::M35* v25_0 = v22_0->add_f_7();
  v25_0->set_f_0(0x4b);
  v22_0->set_f_0(0x3c);
  v18->set_f_2(0x73);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M2* v0_0 = message->add_f_48();
  v0_0->set_f_1(false);
  Message2::M2::M16* v1 = v0_0->mutable_f_8();
  v1->set_f_0(0x48);
  Message2::M2::M25* v2 = v0_0->mutable_f_12();
  v2->set_f_0(true);
  v0_0->set_f_0(Message2::M2::E6_CONST_4);
  message->set_f_15(0x69c04);
  message->set_f_19(0x37e5fc90);
  message->set_f_26(0x36dfb5ff88e17e26);
  message->set_f_24(0x7e2e945282f8db32);
  Message2::M8* v3 = message->mutable_f_57();
  Message2::M8::E13 array_0[11] = {
      Message2::M8::E13_CONST_3, Message2::M8::E13_CONST_5,
      Message2::M8::E13_CONST_4, Message2::M8::E13_CONST_5,
      Message2::M8::E13_CONST_1, Message2::M8::E13_CONST_1,
      Message2::M8::E13_CONST_3, Message2::M8::E13_CONST_2,
      Message2::M8::E13_CONST_1, Message2::M8::E13_CONST_1,
      Message2::M8::E13_CONST_4,
  };
  for (auto v : array_0) {
    v3->add_f_0(v);
  }
  Message2::M8::M13* v4 = v3->mutable_f_3();
  v4->set_f_0(0x2334e2f);
  v4->set_f_3(false);
  v4->set_f_2(0x42);
  message->set_f_6(0x42a3cca9a056de97);
  message->set_f_1(s->substr(0, 124));
  message->set_f_13(false);
  message->set_f_7(0x3bc9688087970735);
  Message2::M9* v5 = message->mutable_f_59();
  v5->set_f_4(Message2::M9::E16_CONST_5);
  Message2::M9::M12* v6 = v5->mutable_f_9();
  v6->set_f_2(0x1f97c3b);
  v6->set_f_1(s->substr(0, 350));
  v6->add_f_4(Message2::M9::M12::E20_CONST_2);
  v6->set_f_3(0xb688d7f5e674a5);
  v6->set_f_6(0x27);
  v6->set_f_5(0x73e2eeb802518280);
  v5->set_f_3(s->substr(0, 7));
  v5->set_f_5(0x6404477f562df147);
  v5->set_f_2(s->substr(0, 331));
  v5->set_f_0(Message2::M9::E14_CONST_2);
  v5->set_f_1(Message2::M9::E15_CONST_4);
  message->set_f_4(0x60068726dc5eb8ed);
  message->set_f_5(0x48);
  message->set_f_23(s->substr(0, 3106));
  message->add_f_27(Message2::E4_CONST_2);
  message->set_f_16(0x2b1a6845b8562359);
  Message2::M5* v7_0 = message->add_f_52();
  v7_0->set_f_1(0x6a);
  v7_0->set_f_0(0x46);
  message->set_f_12(Message2::E3_CONST_3);
  Message2::M6* v8_0 = message->add_f_53();
  v8_0->set_f_0(true);
  Message2::M6::M26* v9 = v8_0->mutable_f_15();
  v9->set_f_1(0x47);
  v9->set_f_0(0x6fb94d2931da2180);
  Message2::M6::M24* v10 = v8_0->mutable_f_13();
  v10->set_f_22(0x76ff87d23bc24e4c);
  v10->set_f_17(s->substr(0, 1205));
  v10->set_f_24(false);
  v10->set_f_13(Message2::M6::M24::E27_CONST_2);
  v10->set_f_8(0x465b5a46);
  v10->set_f_11(s->substr(0, 28));
  v10->set_f_6(0x74c4af8c);
  v10->set_f_14(s->substr(0, 202));
  v10->set_f_21(0x570e5e53eb76b401);
  v10->set_f_10(0x1daf98cf2031b25e);
  v10->set_f_12(0x1f5c2e62);
  v10->set_f_20(0x21);
  v10->set_f_5(0xddea95e);
  v10->set_f_18(false);
  v10->set_f_25(Message2::M6::M24::E28_CONST_2);
  v10->set_f_4(0x3efd10e2f9ddd95a);
  v10->set_f_27(Message2::M6::M24::E29_CONST_3);
  v10->set_f_15(s->substr(0, 18));
  v10->set_f_2(0x13);
  v10->set_f_0(0.879694);
  v10->set_f_26(s->substr(0, 5));
  v8_0->set_f_2(Message2::M6::E11_CONST_3);
  Message2::M6::M19* v11 = v8_0->mutable_f_12();
  v11->set_f_2(Message2::M6::M19::E24_CONST_4);
  message->set_f_21(true);
  message->set_f_2(s->substr(0, 34));
  message->set_f_10(0x7597416f5);
  message->set_f_29(s->substr(0, 494));
  Message2::M7* v12 = message->mutable_f_54();
  v12->set_f_1(Message2::M7::E12_CONST_3);
  v12->set_f_2(false);
  Message2::M4* v13 = message->mutable_f_51();
  v13->set_f_3(false);
  Message2::M4::M22* v14_0 = v13->add_f_11();
  (void)v14_0;  // Suppresses clang-tidy.
  v13->set_f_2(0x1e);
  v13->set_f_1(0x5bdf7922d6a6f19);
  v13->set_f_0(0x4c1efbceb29cf187);
  Message2::M4::M23* v15_0 = v13->add_f_13();
  Message2::M4::M23::M27* v16_0 = v15_0->add_f_2();
  Message2::M4::M23::M27::M35* v17_0 = v16_0->add_f_7();
  (void)v17_0;  // Suppresses clang-tidy.
  v16_0->set_f_1(0x60d6723b);
  Message2::M4::M23::M27::M34* v18 = v16_0->mutable_f_5();
  Message2::M4::M23::M27::M34::M36* v19_0 = v18->add_f_6();
  v19_0->set_f_7(0x475a75c8);
  v19_0->set_f_8(s->substr(0, 398));
  v19_0->set_f_27(false);
  v19_0->set_f_22(0x76664cfcf0d147fa);
  Message2::M4::M23::M27::M34::M36::E45 array_1[21] = {
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_2,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_3,
      Message2::M4::M23::M27::M34::M36::E45_CONST_2,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_5,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
      Message2::M4::M23::M27::M34::M36::E45_CONST_1,
      Message2::M4::M23::M27::M34::M36::E45_CONST_2,
      Message2::M4::M23::M27::M34::M36::E45_CONST_4,
  };
  for (auto v : array_1) {
    v19_0->add_f_28(v);
  }
  v19_0->set_f_30(0x395961cb6347f567);
  v19_0->set_f_19(0x32);
  v19_0->set_f_3(false);
  v19_0->set_f_1(Message2::M4::M23::M27::M34::M36::E42_CONST_4);
  v19_0->set_f_26(s->substr(0, 2661));
  v19_0->set_f_0(s->substr(0, 7));
  v19_0->set_f_20(s->substr(0, 364));
  v19_0->set_f_17(s->substr(0, 35));
  v19_0->set_f_11(0x699ac754);
  v19_0->set_f_29(Message2::M4::M23::M27::M34::M36::E46_CONST_1);
  v19_0->set_f_9(0x30);
  v19_0->set_f_16(0x6067edacae835be2);
  v19_0->set_f_10(0x463e5fba95aec2ea);
  Message2::M4::M23::M27::M34::E41 array_2[20] = {
      Message2::M4::M23::M27::M34::E41_CONST_3,
      Message2::M4::M23::M27::M34::E41_CONST_1,
      Message2::M4::M23::M27::M34::E41_CONST_5,
      Message2::M4::M23::M27::M34::E41_CONST_4,
      Message2::M4::M23::M27::M34::E41_CONST_3,
      Message2::M4::M23::M27::M34::E41_CONST_2,
      Message2::M4::M23::M27::M34::E41_CONST_2,
      Message2::M4::M23::M27::M34::E41_CONST_3,
      Message2::M4::M23::M27::M34::E41_CONST_4,
      Message2::M4::M23::M27::M34::E41_CONST_5,
      Message2::M4::M23::M27::M34::E41_CONST_1,
      Message2::M4::M23::M27::M34::E41_CONST_1,
      Message2::M4::M23::M27::M34::E41_CONST_4,
      Message2::M4::M23::M27::M34::E41_CONST_4,
      Message2::M4::M23::M27::M34::E41_CONST_5,
      Message2::M4::M23::M27::M34::E41_CONST_1,
      Message2::M4::M23::M27::M34::E41_CONST_4,
      Message2::M4::M23::M27::M34::E41_CONST_3,
      Message2::M4::M23::M27::M34::E41_CONST_4,
      Message2::M4::M23::M27::M34::E41_CONST_5,
  };
  for (auto v : array_2) {
    v18->add_f_1(v);
  }
  v16_0->set_f_0(0x11b8bb);
  v15_0->set_f_0(0x1bec60);
  message->set_f_25(0x4c);
  message->set_f_17(0x6e4bb83b);
  message->set_f_0(s->substr(0, 7));
  Message2::M1* v20 = message->mutable_f_46();
  v20->set_f_0(0x259fa3151359c4a7);
  Message2::M1::M20* v21 = v20->mutable_f_9();
  (void)v21;  // Suppresses clang-tidy.
  v20->set_f_1(Message2::M1::E5_CONST_4);
  v20->set_f_2(0x61);
  message->set_f_8(Message2::E1_CONST_4);
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
}  // namespace fleetbench::rpc::P6::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE2_H_
