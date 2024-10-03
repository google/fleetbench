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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message2.pb.h"

namespace fleetbench::rpc::P2::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_13(0x1cc111);
  Message2::M3* v0 = message->mutable_f_52();
  v0->set_f_3(0x1710ea943e2a58ca);
  v0->set_f_1(0x49);
  v0->set_f_0(Message2::M3::E3_CONST_1);
  Message2::M3::M13* v1_0 = v0->add_f_6();
  v1_0->set_f_6(0x2c);
  Message2::M3::M13::M24* v2 = v1_0->mutable_f_17();
  v2->set_f_0(0x9a8d3a1);
  Message2::M3::M13::M24::M34* v3 = v2->mutable_f_6();
  v3->set_f_0(s->substr(0, 32));
  v3->set_f_1(0x190fe15e3e767c0d);
  Message2::M3::M13::M24::M30* v4_0 = v2->add_f_4();
  v4_0->set_f_0(s->substr(0, 7));
  v1_0->set_f_2(s->substr(0, 4));
  v1_0->set_f_0(0x5929c7edd2825a11);
  v1_0->set_f_3(s->substr(0, 1));
  v1_0->set_f_1(0x17b2c86098c8eb2c);
  v1_0->set_f_7(0x783);
  Message2::E1 array_1[20] = {
      Message2::E1_CONST_4, Message2::E1_CONST_2, Message2::E1_CONST_2,
      Message2::E1_CONST_5, Message2::E1_CONST_3, Message2::E1_CONST_5,
      Message2::E1_CONST_3, Message2::E1_CONST_3, Message2::E1_CONST_4,
      Message2::E1_CONST_4, Message2::E1_CONST_1, Message2::E1_CONST_4,
      Message2::E1_CONST_3, Message2::E1_CONST_2, Message2::E1_CONST_2,
      Message2::E1_CONST_1, Message2::E1_CONST_4, Message2::E1_CONST_5,
      Message2::E1_CONST_1, Message2::E1_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_19(v);
  }
  message->set_f_4(0x313ac9a);
  message->set_f_6(0x3a24d03ccfdab099);
  message->set_f_14(0x39b1);
  message->set_f_15(s->substr(0, 219));
  message->set_f_17(0x1d0b2761);
  message->set_f_23(0x37);
  Message2::M6* v5 = message->mutable_f_56();
  Message2::M6::M11* v6_0 = v5->add_f_3();
  v6_0->set_f_0(0x6967357e);
  v5->set_f_0(s->substr(0, 17));
  Message2::M8* v7 = message->mutable_f_59();
  v7->set_f_0(0x3c3cd91);
  Message2::M8::M10* v8 = v7->mutable_f_2();
  v8->set_f_3(s->substr(0, 165));
  v8->set_f_5(Message2::M8::M10::E5_CONST_1);
  v8->set_f_2(0x19cef74f3daa8502);
  v8->set_f_1(0x5ef57a91d2e9ed9f);
  message->set_f_3(0x263);
  message->set_f_22(Message2::E2_CONST_5);
  message->set_f_11(0x594ddca9718898b2);
  Message2::M9* v9_0 = message->add_f_60();
  v9_0->set_f_3(0xa8b4c18);
  v9_0->set_f_30(0x3c4c0015cb0589bf);
  v9_0->set_f_20(0x3574b5f);
  v9_0->set_f_25(s->substr(0, 4));
  v9_0->set_f_18(false);
  v9_0->set_f_16(0x5f);
  v9_0->set_f_5(s->substr(0, 78));
  v9_0->set_f_8(0.688280);
  v9_0->set_f_28(s->substr(0, 19));
  v9_0->set_f_2(false);
  v9_0->set_f_29(0x3156ce897a73547c);
  v9_0->set_f_13(0x56edb73);
  v9_0->set_f_22(true);
  v9_0->set_f_26(s->substr(0, 116));
  v9_0->set_f_14(0x830aa91);
  v9_0->set_f_11(0x21);
  v9_0->set_f_7(0x51);
  v9_0->set_f_1(s->substr(0, 4));
  v9_0->set_f_17(0.237839);
  v9_0->set_f_24(0x2);
  message->set_f_2(0x17);
  message->set_f_5(0x7e);
  message->set_f_0(s->substr(0, 90));
  message->set_f_7(0x3383041401005c4e);
  message->set_f_10(0x26f6);
  Message2::M5* v10_0 = message->add_f_54();
  v10_0->set_f_3(0xa0e58e8);
  Message2::M5::M16* v11 = v10_0->mutable_f_7();
  Message2::M5::M16::M25* v12_0 = v11->add_f_5();
  v12_0->set_f_1(0x55);
  v12_0->set_f_2(0x559967d63e9ae3ec);
  v12_0->set_f_0(0x76);
  Message2::M5::M16::M25::M37* v13 = v12_0->mutable_f_7();
  v13->set_f_1(0x37);
  v13->set_f_0(s->substr(0, 2));
  Message2::M5::M18* v14 = v10_0->mutable_f_8();
  v14->set_f_5(0x5791af4982272668);
  v14->set_f_3(0x40);
  v14->set_f_4(0x2ed53e22f8a0fd39);
  v10_0->set_f_2(0x6f10159);
  v10_0->set_f_0(0xf8c0709);
  message->set_f_21(0.125285);
  message->set_f_8(0xe);
  message->set_f_18(0x28);
  message->set_f_26(0xad671e7);
  message->set_f_12(0.604003);
  Message2::M2* v15 = message->mutable_f_51();
  v15->set_f_2(0x184cc39cd585fa35);
  v15->set_f_5(s->substr(0, 271));
  v15->set_f_1(true);
  v15->set_f_3(0x667028d0);
  v15->set_f_0(0x78809607);
  Message2::M1* v16 = message->mutable_f_50();
  Message2::M1::M15* v17_0 = v16->add_f_5();
  v17_0->set_f_1(0x70e1e7b9ebf8c81e);
  v17_0->set_f_0(0x489836c7d1ff9e0d);
  Message2::M1::M20* v18_0 = v16->add_f_7();
  v18_0->set_f_32(0x792ee);
  v18_0->set_f_31(0x7654beb3);
  v18_0->set_f_6(s->substr(0, 6));
  v18_0->set_f_19(s->substr(0, 5));
  v18_0->set_f_2(s->substr(0, 1));
  v18_0->set_f_17(0x3fe246f2e49695a2);
  v18_0->set_f_29(s->substr(0, 32));
  v18_0->set_f_25(s->substr(0, 17));
  v18_0->set_f_10(0.417661);
  Message2::M1::M20::M23* v19 = v18_0->mutable_f_58();
  v19->set_f_26(0x26b1e56);
  v19->set_f_0(false);
  v19->set_f_6(s->substr(0, 5));
  v19->set_f_24(s->substr(0, 25));
  v19->set_f_2(0xee129);
  v19->set_f_11(s->substr(0, 4));
  v19->set_f_18(Message2::M1::M20::M23::E11_CONST_1);
  v19->set_f_23(0x75);
  v19->set_f_15(0x5755c648a97c872e);
  v19->set_f_9(0x6d);
  v19->set_f_16(false);
  v19->set_f_19(0x3ebca8d38da97276);
  v19->set_f_28(0x4eafa94);
  v19->add_f_4(Message2::M1::M20::M23::E9_CONST_2);
  v19->set_f_25(s->substr(0, 19));
  v19->set_f_12(0x27dd66f3fe54bd87);
  v19->set_f_29(s->substr(0, 256));
  v19->set_f_7(s->substr(0, 58));
  v19->set_f_17(0x1bda9dc);
  v19->set_f_22(0x58be986b6e74e285);
  v19->set_f_31(true);
  v19->set_f_5(0x7138d3ea1ea97b31);
  v19->set_f_21(s->substr(0, 6));
  v19->set_f_30(s->substr(0, 32));
  v19->set_f_10(0x60f0c64);
  v18_0->set_f_9(0x17f302d1);
  v18_0->set_f_14(0x49b1bbc);
  v18_0->set_f_27(s->substr(0, 3));
  v18_0->set_f_4(0x24d7d8d379ae74a6);
  v18_0->set_f_15(s->substr(0, 2294));
  v18_0->set_f_11(s->substr(0, 24));
  v18_0->set_f_7(0x3a0dd0ada6eecbfc);
  v18_0->set_f_8(0x306c79c8d44cdfb0);
  Message2::M1::M20::M21* v20 = v18_0->mutable_f_57();
  Message2::M1::M20::M21::M28* v21 = v20->mutable_f_6();
  v21->set_f_3(0x6);
  v21->set_f_2(0x50d8515);
  Message2::M1::M20::M21::M32* v22 = v20->mutable_f_7();
  (void)v22;  // Suppresses clang-tidy.
  v18_0->set_f_18(0x9b683ba94a9e3dc);
  v18_0->set_f_0(false);
  v18_0->set_f_16(0x5ea8be7f);
  v18_0->set_f_22(0x160daae5);
  v18_0->set_f_30(0x15a984d1859cfde1);
  Message2::M1::M12* v23 = v16->mutable_f_2();
  v23->set_f_0(0x454a296dadaf9083);
  v16->set_f_0(false);
  message->set_f_9(false);
  Message2::M7* v24 = message->mutable_f_58();
  Message2::M7::M14* v25_0 = v24->add_f_4();
  v25_0->set_f_0(0x91f0b97);
  message->set_f_24(0x7);
  message->set_f_28(s->substr(0, 21));
  message->set_f_16(0x7b4f5d6779b9052c);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_14(0x7b);
  message->set_f_29(s->substr(0, 1842));
  message->set_f_28(s->substr(0, 7));
  message->set_f_17(0x101490d1);
  Message2::M8* v0 = message->mutable_f_59();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_9(false);
  message->set_f_10(0x74);
  message->set_f_11(0x6dc805c8279fa9e5);
  message->set_f_3(0x79e061c);
  message->set_f_7(0x4ebd79a4517e269);
  message->set_f_18(0x7a);
  message->set_f_8(0x44);
  message->set_f_22(Message2::E2_CONST_1);
  Message2::M7* v1 = message->mutable_f_58();
  Message2::M7::M14* v2_0 = v1->add_f_4();
  v2_0->set_f_0(0x69);
  Message2::M7::M17* v3 = v1->mutable_f_5();
  (void)v3;  // Suppresses clang-tidy.
  Message2::M7::M19* v4_0 = v1->add_f_6();
  v4_0->set_f_5(0x56);
  v4_0->set_f_0(s->substr(0, 76));
  Message2::M7::M19::M22* v5 = v4_0->mutable_f_19();
  v5->set_f_24(0x8320697e670b54e);
  v5->set_f_14(0xb1183c);
  v5->set_f_21(0x17);
  v5->set_f_2(true);
  v5->set_f_0(s->substr(0, 7));
  Message2::M7::M19::M22::M31* v6 = v5->mutable_f_53();
  v6->set_f_0(0.936107);
  v5->set_f_13(0xbd8f7b9818f6e57);
  v5->set_f_26(0x730ca0796a071e0d);
  v5->set_f_17(0x4d);
  v5->set_f_10(s->substr(0, 20482));
  v5->set_f_22(0x662a0fbb04637101);
  v5->set_f_1(0x64f6a6a);
  v5->set_f_18(s->substr(0, 5));
  v5->set_f_16(0x7d19653609e6c85);
  v5->set_f_30(0xc9853);
  v5->set_f_8(0x1a);
  v5->set_f_20(s->substr(0, 30));
  v5->set_f_5(0xeddc66a);
  v5->set_f_25(s->substr(0, 13));
  v5->set_f_4(s->substr(0, 8));
  v5->set_f_11(true);
  v4_0->set_f_4(0.609059);
  v4_0->add_f_2(Message2::M7::M19::E6_CONST_5);
  Message2::M7::M19::M27* v7 = v4_0->mutable_f_21();
  v7->set_f_0(0.065946);
  Message2::M7::M19::M27::M38* v8_0 = v7->add_f_7();
  (void)v8_0;  // Suppresses clang-tidy.
  Message2::M7::M19::M27::M29* v9 = v7->mutable_f_3();
  (void)v9;  // Suppresses clang-tidy.
  v4_0->set_f_3(0xd4bda21);
  v4_0->set_f_6(0.676927);
  v1->set_f_0(0x105b932490df6731);
  Message2::M1* v10 = message->mutable_f_50();
  v10->set_f_0(false);
  Message2::M1::M15* v11_0 = v10->add_f_5();
  v11_0->set_f_1(0xcc483970401d6ca);
  message->set_f_20(false);
  message->set_f_5(0x547abbbb1);
  Message2::M4* v12 = message->mutable_f_53();
  v12->set_f_0(0.812002);
  v12->set_f_1(0x3f48ffc0);
  message->set_f_24(0x7a);
  Message2::M9* v13_0 = message->add_f_60();
  v13_0->set_f_23(s->substr(0, 444));
  v13_0->set_f_16(0xccd);
  v13_0->set_f_18(true);
  v13_0->set_f_19(0x72ed2b0d4ea9370f);
  v13_0->set_f_13(0x782);
  v13_0->set_f_15(0x18ede1032d07f35a);
  Message2::M9::E4 array_0[21] = {
      Message2::M9::E4_CONST_2, Message2::M9::E4_CONST_3,
      Message2::M9::E4_CONST_2, Message2::M9::E4_CONST_3,
      Message2::M9::E4_CONST_3, Message2::M9::E4_CONST_5,
      Message2::M9::E4_CONST_5, Message2::M9::E4_CONST_5,
      Message2::M9::E4_CONST_5, Message2::M9::E4_CONST_2,
      Message2::M9::E4_CONST_3, Message2::M9::E4_CONST_5,
      Message2::M9::E4_CONST_1, Message2::M9::E4_CONST_5,
      Message2::M9::E4_CONST_3, Message2::M9::E4_CONST_5,
      Message2::M9::E4_CONST_1, Message2::M9::E4_CONST_2,
      Message2::M9::E4_CONST_5, Message2::M9::E4_CONST_5,
      Message2::M9::E4_CONST_1,
  };
  for (auto v : array_0) {
    v13_0->add_f_21(v);
  }
  v13_0->set_f_4(0xe);
  v13_0->set_f_3(0x56);
  v13_0->set_f_0(0x4bfc108a33bd108b);
  v13_0->set_f_14(0x7110d44a);
  v13_0->set_f_10(0x2);
  v13_0->set_f_17(0.815940);
  v13_0->set_f_24(0x30e0a80);
  v13_0->set_f_30(0x5e5f24c6c7357c2a);
  v13_0->set_f_25(s->substr(0, 3));
  v13_0->set_f_27(0xb4c);
  v13_0->set_f_7(0x44);
  v13_0->set_f_28(s->substr(0, 5));
  v13_0->set_f_26(s->substr(0, 2));
  v13_0->set_f_5(s->substr(0, 1631));
  message->set_f_16(0x2145f3b4b243e6f2);
  message->set_f_21(0.224706);
  Message2::M6* v14 = message->mutable_f_56();
  Message2::M6::M11* v15_0 = v14->add_f_3();
  (void)v15_0;  // Suppresses clang-tidy.
  v14->set_f_0(s->substr(0, 28));
  message->set_f_12(0.777003);
  Message2::M3* v16 = message->mutable_f_52();
  v16->set_f_1(0x2488);
  v16->set_f_2(s->substr(0, 5));
  Message2::M3::M13* v17_0 = v16->add_f_6();
  v17_0->set_f_3(s->substr(0, 2));
  v17_0->set_f_5(0.283560);
  v17_0->set_f_1(0x437e9d8a306f88e8);
  v17_0->set_f_4(0x71aa02c6);
  v17_0->set_f_7(0xbc8e203);
  v17_0->set_f_6(0x2c);
  v17_0->set_f_0(0x1cd84fd1cdd5e47f);
  Message2::M3::M13::M24* v18 = v17_0->mutable_f_17();
  (void)v18;  // Suppresses clang-tidy.
  v17_0->set_f_2(s->substr(0, 345));
  message->set_f_13(0xbfc);
  message->set_f_0(s->substr(0, 5));
  message->set_f_4(0x2caa415);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_29(s->substr(0, 31));
  message->set_f_3(0x57);
  Message2::M2* v0 = message->mutable_f_51();
  v0->set_f_5(s->substr(0, 39));
  v0->set_f_3(0x6ff0e37e);
  v0->set_f_0(0x40d3eee8);
  v0->set_f_4(s->substr(0, 21));
  v0->set_f_1(true);
  v0->set_f_2(0x90f6b2c8c33b7b5);
  message->set_f_4(0x30b14e3);
  message->set_f_0(s->substr(0, 21));
  message->set_f_2(0x1473d0);
  Message2::E1 array_0[20] = {
      Message2::E1_CONST_3, Message2::E1_CONST_4, Message2::E1_CONST_3,
      Message2::E1_CONST_3, Message2::E1_CONST_5, Message2::E1_CONST_4,
      Message2::E1_CONST_3, Message2::E1_CONST_1, Message2::E1_CONST_1,
      Message2::E1_CONST_4, Message2::E1_CONST_5, Message2::E1_CONST_2,
      Message2::E1_CONST_3, Message2::E1_CONST_4, Message2::E1_CONST_5,
      Message2::E1_CONST_3, Message2::E1_CONST_4, Message2::E1_CONST_5,
      Message2::E1_CONST_3, Message2::E1_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_19(v);
  }
  Message2::M8* v1 = message->mutable_f_59();
  v1->set_f_0(0xd711943);
  Message2::M8::M10* v2 = v1->mutable_f_2();
  v2->set_f_5(Message2::M8::M10::E5_CONST_3);
  v2->set_f_3(s->substr(0, 1));
  v2->set_f_0(true);
  Message2::M4* v3 = message->mutable_f_53();
  v3->set_f_1(0xd68ec81);
  message->set_f_26(0x758f0);
  Message2::M6* v4 = message->mutable_f_56();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_27(s->substr(0, 4));
  message->set_f_17(0x6fe2f992);
  message->set_f_9(true);
  message->set_f_23(0xd44debd);
  message->set_f_8(0x36);
  message->set_f_12(0.419236);
  message->set_f_16(0x1512f9bf30f75383);
  Message2::M1* v5 = message->mutable_f_50();
  Message2::M1::M12* v6 = v5->mutable_f_2();
  Message2::M1::M12::M26* v7 = v6->mutable_f_3();
  v7->set_f_0(0x4274ce9);
  v5->set_f_0(false);
  Message2::M1::M15* v8_0 = v5->add_f_5();
  v8_0->set_f_1(0x4bc27d513ba137e3);
  message->set_f_1(0x289889b170c43dcc);
  message->set_f_15(s->substr(0, 355));
  message->set_f_18(0x27);
  message->set_f_14(0x39);
  message->set_f_25(0x2992);
  message->set_f_21(0.618200);
  message->set_f_28(s->substr(0, 1));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_10(0x92bca9b);
  message->set_f_26(0xa6ae5fc);
  Message2::M2* v0 = message->mutable_f_51();
  v0->set_f_3(0x7fd5a68d);
  v0->set_f_4(s->substr(0, 21));
  v0->set_f_1(true);
  message->set_f_7(0x1116a16df5632a9a);
  message->set_f_4(0x3e);
  message->set_f_18(0x302);
  message->set_f_13(0x27);
  message->add_f_19(Message2::E1_CONST_3);
  message->set_f_2(0x9);
  Message2::M9* v1_0 = message->add_f_60();
  v1_0->set_f_9(s->substr(0, 1));
  v1_0->set_f_17(0.619401);
  v1_0->set_f_12(s->substr(0, 32));
  v1_0->set_f_2(false);
  v1_0->set_f_5(s->substr(0, 22));
  v1_0->set_f_24(0x15);
  v1_0->set_f_27(0xc49ff0b);
  v1_0->set_f_8(0.240294);
  v1_0->set_f_20(0x1e46c9);
  v1_0->set_f_7(0x6e);
  v1_0->set_f_31(0x1c86758f39c65497);
  v1_0->set_f_13(0x5234b83);
  v1_0->set_f_28(s->substr(0, 188));
  v1_0->set_f_26(s->substr(0, 39));
  v1_0->set_f_22(true);
  v1_0->add_f_21(Message2::M9::E4_CONST_4);
  v1_0->set_f_6(0x74);
  v1_0->set_f_4(0xf941dc4);
  v1_0->set_f_1(s->substr(0, 436));
  v1_0->set_f_18(true);
  v1_0->set_f_29(0x356e98ad820200bd);
  v1_0->set_f_3(0x6);
  message->set_f_9(true);
  message->set_f_5(0x3a57ce7df);
  Message2::M3* v2 = message->mutable_f_52();
  v2->set_f_3(0x5f501cbc4247c646);
  v2->set_f_2(s->substr(0, 122));
  v2->set_f_0(Message2::M3::E3_CONST_4);
  message->set_f_27(s->substr(0, 29));
  Message2::M5* v3_0 = message->add_f_54();
  v3_0->set_f_0(0xe3d3706);
  Message2::M5::M16* v4 = v3_0->mutable_f_7();
  Message2::M5::M16::M25* v5_0 = v4->add_f_5();
  v5_0->set_f_2(0x50e84a5d0c5c7e77);
  Message2::M5::M16::M25::M39* v6 = v5_0->mutable_f_8();
  v6->set_f_5(s->substr(0, 2));
  v6->set_f_4(s->substr(0, 3));
  v6->set_f_3(0x83eb3);
  v6->set_f_0(0x21);
  v6->set_f_1(0x4f6a99407f4258ac);
  v6->set_f_2(0xc63);
  Message2::M5::M16::M25::M37* v7 = v5_0->mutable_f_7();
  v7->set_f_1(0xd1eea59);
  v5_0->set_f_3(0x51);
  v5_0->set_f_4(0x521eecbe);
  v3_0->set_f_2(0x10);
  v3_0->set_f_4(0x71);
  message->set_f_0(s->substr(0, 6));
  message->set_f_23(0x60);
  Message2::M8* v8 = message->mutable_f_59();
  v8->set_f_0(0xc872f96);
  Message2::M8::M10* v9 = v8->mutable_f_2();
  v9->set_f_0(false);
  v9->set_f_1(0x6357ec9fa5dc1da5);
  v9->set_f_4(0x63);
  v9->set_f_2(0x4b6751a7d3770db);
  message->set_f_16(0x913b057a05af823);
  Message2::M4* v10 = message->mutable_f_53();
  v10->set_f_1(0x10d3cfad);
  message->set_f_21(0.894124);
  message->set_f_25(0xe3b6e88);
  message->set_f_29(s->substr(0, 1797));
  Message2::M1* v11 = message->mutable_f_50();
  Message2::M1::M15* v12_0 = v11->add_f_5();
  (void)v12_0;  // Suppresses clang-tidy.
  Message2::M1::M12* v13 = v11->mutable_f_2();
  v13->set_f_0(0x55834160ee715511);
  Message2::M1::M12::M26* v14 = v13->mutable_f_3();
  v14->set_f_0(0xd27ff7b);
  Message2::M1::M20* v15_0 = v11->add_f_7();
  Message2::M1::M20::M21* v16 = v15_0->mutable_f_57();
  Message2::M1::M20::M21::M28* v17 = v16->mutable_f_6();
  Message2::M1::M20::M21::M28::E12 array_0[21] = {
      Message2::M1::M20::M21::M28::E12_CONST_3,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_1,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_3,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_2,
      Message2::M1::M20::M21::M28::E12_CONST_2,
      Message2::M1::M20::M21::M28::E12_CONST_1,
      Message2::M1::M20::M21::M28::E12_CONST_2,
      Message2::M1::M20::M21::M28::E12_CONST_2,
      Message2::M1::M20::M21::M28::E12_CONST_5,
      Message2::M1::M20::M21::M28::E12_CONST_1,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_5,
      Message2::M1::M20::M21::M28::E12_CONST_2,
      Message2::M1::M20::M21::M28::E12_CONST_5,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_4,
      Message2::M1::M20::M21::M28::E12_CONST_2,
  };
  for (auto v : array_0) {
    v17->add_f_1(v);
  }
  v17->set_f_0(s->substr(0, 52));
  Message2::M1::M20::M21::M32* v18 = v16->mutable_f_7();
  (void)v18;  // Suppresses clang-tidy.
  v15_0->set_f_21(0x69);
  v15_0->set_f_6(s->substr(0, 51));
  v15_0->set_f_26(s->substr(0, 15));
  Message2::M1::M20::M23* v19 = v15_0->mutable_f_58();
  v19->set_f_15(0x76368cd7b19bb772);
  Message2::M1::M20::M23::M33* v20 = v19->mutable_f_58();
  v20->set_f_5(0x52f886f865ce687d);
  v20->set_f_12(s->substr(0, 21));
  v20->set_f_11(0.042566);
  v20->add_f_9(Message2::M1::M20::M23::M33::E13_CONST_4);
  v20->set_f_8(0x20c2f7da);
  v20->set_f_3(s->substr(0, 21));
  v20->set_f_6(0x53966535ccadd308);
  v20->set_f_10(s->substr(0, 33));
  v20->set_f_0(0x66238124974ab382);
  v20->set_f_7(0x1ba5b93f21ed0f34);
  v20->set_f_1(0x2405e7b8553a8300);
  v19->set_f_20(0x34ea17caaa4d6a33);
  v19->set_f_22(0x612469c01b9ddb7);
  v19->set_f_27(0x2918a07c0e70260a);
  v19->set_f_24(s->substr(0, 3));
  v19->set_f_3(0xce64ec1a1e4c925);
  v19->set_f_30(s->substr(0, 4));
  v19->set_f_11(s->substr(0, 3));
  v19->set_f_21(s->substr(0, 10));
  v19->set_f_19(0x1e5a7b4031c619be);
  v19->set_f_23(0x2c1e);
  v19->set_f_6(s->substr(0, 8));
  v19->set_f_17(0x16015f);
  v19->set_f_10(0xce91bc2);
  v19->set_f_7(s->substr(0, 24));
  v19->set_f_28(0x5a);
  v19->set_f_25(s->substr(0, 272));
  v19->set_f_9(0x46b);
  v19->set_f_31(false);
  v15_0->set_f_29(s->substr(0, 25));
  Message2::M1::M20::E7 array_1[20] = {
      Message2::M1::M20::E7_CONST_2, Message2::M1::M20::E7_CONST_4,
      Message2::M1::M20::E7_CONST_5, Message2::M1::M20::E7_CONST_5,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_4,
      Message2::M1::M20::E7_CONST_5, Message2::M1::M20::E7_CONST_4,
      Message2::M1::M20::E7_CONST_5, Message2::M1::M20::E7_CONST_5,
      Message2::M1::M20::E7_CONST_5, Message2::M1::M20::E7_CONST_1,
      Message2::M1::M20::E7_CONST_1, Message2::M1::M20::E7_CONST_5,
      Message2::M1::M20::E7_CONST_4, Message2::M1::M20::E7_CONST_2,
      Message2::M1::M20::E7_CONST_5, Message2::M1::M20::E7_CONST_3,
      Message2::M1::M20::E7_CONST_2, Message2::M1::M20::E7_CONST_1,
  };
  for (auto v : array_1) {
    v15_0->add_f_13(v);
  }
  v15_0->set_f_23(0x45);
  v15_0->set_f_22(0x72ecac2b);
  v15_0->set_f_9(0x4df1a82f);
  v15_0->set_f_18(0x761acd57b0c79a2e);
  v15_0->set_f_25(s->substr(0, 12));
  v15_0->set_f_20(s->substr(0, 35));
  v15_0->set_f_28(false);
  v15_0->set_f_11(s->substr(0, 30));
  v15_0->set_f_12(0x14);
  v15_0->set_f_19(s->substr(0, 482));
  v15_0->set_f_16(0x13726f40);
  v15_0->set_f_8(0x3280ca74b809aaa7);
  v15_0->set_f_7(0x72cab7f9b5a8028f);
  v15_0->set_f_14(0x5c);
  v15_0->set_f_4(0x253077000e5e7f61);
  v15_0->set_f_17(0x7f2c1f93ee8bd510);
  v15_0->set_f_31(0x51e57e57);
  v15_0->set_f_1(s->substr(0, 313));
  v15_0->set_f_24(0.323554);
  v15_0->set_f_3(0x58);
  v15_0->set_f_2(s->substr(0, 127));
  v15_0->set_f_27(s->substr(0, 28));
  v15_0->set_f_32(0x9a7847b);
  v15_0->set_f_0(true);
  v11->set_f_0(true);
  message->set_f_22(Message2::E2_CONST_4);
  Message2::M7* v21 = message->mutable_f_58();
  Message2::M7::M17* v22 = v21->mutable_f_5();
  v22->set_f_0(s->substr(0, 4));
  v21->set_f_0(0x291981931e2ddc5b);
  message->set_f_20(false);
  message->set_f_12(0.532921);
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
}  // namespace fleetbench::rpc::P2::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_
