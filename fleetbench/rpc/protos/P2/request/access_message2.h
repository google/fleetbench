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
  Message2::M3* v0 = message->mutable_f_97();
  Message2::M3::M18* v1 = v0->mutable_f_10();
  v1->set_f_0(0x33);
  Message2::M3::M13* v2 = v0->mutable_f_5();
  v2->set_f_0(0xf56dd2849ff26);
  message->set_f_6(0x881449997534);
  message->set_f_19(s->substr(0, 101));
  Message2::M1* v3 = message->mutable_f_88();
  v3->set_f_4(s->substr(0, 15));
  Message2::M1::M12* v4_0 = v3->add_f_25();
  v4_0->set_f_0(s->substr(0, 1));
  v4_0->set_f_2(s->substr(0, 5));
  v4_0->set_f_1(0x11);
  Message2::M1::M12* v4_1 = v3->add_f_25();
  Message2::M1::M12::M20* v5_0 = v4_1->add_f_14();
  v5_0->add_f_1(s->substr(0, 11));
  v5_0->set_f_5(s->substr(0, 28));
  v5_0->set_f_3(0x15);
  v5_0->set_f_0(0xcde2cdfbd94410);
  Message2::M1::M12::M20* v5_1 = v4_1->add_f_14();
  v5_1->set_f_3(0x1b);
  v5_1->set_f_4(s->substr(0, 2));
  v5_1->set_f_5(s->substr(0, 27));
  v5_1->set_f_0(0x308e185ce);
  v4_1->set_f_2(s->substr(0, 8));
  v4_1->set_f_1(0xcf);
  v4_1->set_f_0(s->substr(0, 32));
  Message2::M1::M16* v6_0 = v3->add_f_30();
  v6_0->set_f_0(true);
  v3->set_f_5(true);
  v3->set_f_2(Message2::M1::E2_CONST_2);
  v3->set_f_6(s->substr(0, 60));
  v3->set_f_3(0x2eef1ea9);
  v3->set_f_1(0x156d0);
  Message2::M2* v7_0 = message->add_f_92();
  Message2::M2::M15* v8 = v7_0->mutable_f_7();
  v8->add_f_1(s->substr(0, 14));
  v8->set_f_0(0xdf0c2931972b);
  Message2::M2* v7_1 = message->add_f_92();
  Message2::M2::M15* v9 = v7_1->mutable_f_7();
  v9->add_f_1(s->substr(0, 4));
  v7_1->add_f_0(0x140aff);
  message->set_f_1(0xd27abb3aa14d29);
  message->set_f_14(s->substr(0, 10));
  message->set_f_8(s->substr(0, 40));
  message->set_f_21(0x37f073da2287);
  message->set_f_18(0x2768);
  message->add_f_10(0x8896);
  message->set_f_15(0x3d);
  message->set_f_20(s->substr(0, 17));
  message->set_f_7(0x198ec51540995e62);
  message->set_f_22(0xc02cf4665e6694);
  Message2::M5* v10 = message->mutable_f_100();
  v10->set_f_0(0x1d);
  Message2::M5::M10* v11_0 = v10->add_f_10();
  v11_0->set_f_0(s->substr(0, 8));
  message->set_f_3(s->substr(0, 8));
  Message2::M8* v12_0 = message->add_f_110();
  v12_0->set_f_0(0x13c47c938);
  Message2::M9* v13_0 = message->add_f_115();
  Message2::M9::M19* v14_0 = v13_0->add_f_13();
  v14_0->set_f_12(0x481b101a8d0b);
  v14_0->set_f_6(0x33);
  v14_0->set_f_0(s->substr(0, 2));
  v14_0->set_f_7(s->substr(0, 1));
  v14_0->set_f_11(Message2::M9::M19::E5_CONST_1);
  v14_0->set_f_1(0x54);
  Message2::M9::M19::M21* v15 = v14_0->mutable_f_60();
  Message2::M9::M19::M21::M22* v16 = v15->mutable_f_7();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_0(true);
  v14_0->set_f_4(0x4f838ff8f197);
  v14_0->set_f_8(0x19384eb69b1ba);
  v14_0->set_f_2(s->substr(0, 20));
  v14_0->set_f_13(true);
  Message2::M9::M19* v14_1 = v13_0->add_f_13();
  v14_1->set_f_9(0x28e9);
  v14_1->set_f_1(0x23);
  v14_1->set_f_2(s->substr(0, 27));
  v14_1->set_f_5(0x20);
  v14_1->set_f_0(s->substr(0, 26));
  v14_1->set_f_3(s->substr(0, 59));
  v14_1->set_f_11(Message2::M9::M19::E5_CONST_4);
  v14_1->set_f_8(0xb89a4ed079155e);
  v13_0->set_f_1(0x19);
  message->set_f_17(0x24d331743d84e0f5);
  message->set_f_2(Message2::E1_CONST_1);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M4* v0_0 = message->add_f_98();
  v0_0->set_f_11(0xee1eb30bc5c667);
  Message2::M4::M11* v1_0 = v0_0->add_f_59();
  v1_0->set_f_0(0x40bf01185d8cc0);
  v0_0->set_f_1(0x9120d1);
  v0_0->set_f_2(0x5f);
  v0_0->set_f_3(0xd2e92c7e2f8bfb);
  v0_0->set_f_12(0xe853d98);
  v0_0->set_f_0(0x5d);
  v0_0->set_f_14(0xcdab67b);
  v0_0->add_f_6(s->substr(0, 10));
  v0_0->set_f_9(s->substr(0, 1));
  v0_0->set_f_15(s->substr(0, 328));
  v0_0->set_f_7(0x17e2f029);
  v0_0->set_f_8(s->substr(0, 30));
  v0_0->set_f_13(0x28);
  v0_0->set_f_10(s->substr(0, 31));
  Message2::M7* v2 = message->mutable_f_107();
  v2->set_f_0(0x2b);
  Message2::M9* v3_0 = message->add_f_115();
  v3_0->set_f_0(0x45f99c9e8e042d);
  v3_0->set_f_1(0x15);
  Message2::M9::M19* v4_0 = v3_0->add_f_13();
  v4_0->set_f_7(s->substr(0, 3));
  Message2::M9::M19::M21* v5 = v4_0->mutable_f_60();
  Message2::M9::M19::M21::M23* v6 = v5->mutable_f_11();
  v6->add_f_8(s->substr(0, 15));
  v6->set_f_0(0x7de5464d526f9b);
  v6->set_f_4(0x19eab79);
  Message2::M9::M19::M21::M23::M25* v7 = v6->mutable_f_43();
  (void)v7;  // Suppresses clang-tidy.
  Message2::M9::M19::M21::M23::M24* v8 = v6->mutable_f_37();
  v8->set_f_0(true);
  v6->set_f_2(s->substr(0, 3));
  v6->set_f_1(s->substr(0, 41));
  v6->set_f_6(s->substr(0, 3));
  v6->set_f_5(0x2a);
  v6->set_f_3(0xacaa8ac05a729d);
  v6->set_f_9(0x7ac2e27cb7ff98);
  Message2::M9::M19::M21::M22* v9 = v5->mutable_f_7();
  v9->set_f_0(s->substr(0, 21));
  v5->set_f_0(true);
  v4_0->set_f_0(s->substr(0, 70));
  v4_0->set_f_1(0x42);
  v4_0->set_f_13(false);
  v4_0->set_f_9(0x65);
  v4_0->set_f_3(s->substr(0, 11));
  v4_0->set_f_11(Message2::M9::M19::E5_CONST_2);
  v4_0->set_f_2(s->substr(0, 24));
  v4_0->set_f_12(0x58);
  v4_0->set_f_6(0x4eb4dd8);
  Message2::M9* v3_1 = message->add_f_115();
  v3_1->set_f_1(0x39e2);
  Message2::M9::M19* v10_0 = v3_1->add_f_13();
  Message2::M9::M19::M21* v11 = v10_0->mutable_f_60();
  v11->set_f_0(true);
  Message2::M9::M19::M21::M22* v12 = v11->mutable_f_7();
  v12->set_f_0(s->substr(0, 413));
  Message2::M9::M19::M21::M23* v13 = v11->mutable_f_11();
  Message2::M9::M19::M21::M23::M24* v14 = v13->mutable_f_37();
  v14->set_f_0(false);
  v13->set_f_5(0x4fd7698f086479);
  v13->set_f_7(s->substr(0, 47));
  v13->add_f_8(s->substr(0, 9));
  v13->set_f_9(0xc7ee71b6562f32);
  v13->set_f_2(s->substr(0, 120));
  v13->set_f_6(s->substr(0, 32));
  v13->set_f_0(0x3c);
  v13->set_f_4(0x67074326);
  Message2::M9::M19::M21::M23::M25* v15 = v13->mutable_f_43();
  v15->set_f_0(0x21);
  Message2::M9::M19::M21::M23::M26* v16_0 = v13->add_f_47();
  v16_0->set_f_6(s->substr(0, 24));
  v16_0->set_f_5(0x22886937ff9a);
  v16_0->set_f_7(0x27b1270c9);
  v16_0->set_f_8(s->substr(0, 55));
  v16_0->set_f_1(0x1d13);
  v16_0->set_f_0(s->substr(0, 8));
  v16_0->add_f_2(0xa637b);
  v16_0->set_f_14(s->substr(0, 8));
  v16_0->set_f_12(true);
  v16_0->set_f_13(0x66);
  v16_0->add_f_11(0xbe97759);
  v10_0->set_f_0(s->substr(0, 12));
  v10_0->set_f_3(s->substr(0, 42));
  v10_0->set_f_12(0x147d49c238ebc);
  v10_0->set_f_2(s->substr(0, 17));
  v10_0->set_f_6(0x49);
  v10_0->set_f_1(0x2bbc);
  v10_0->set_f_13(false);
  v10_0->set_f_11(Message2::M9::M19::E5_CONST_3);
  v10_0->set_f_5(0x7e);
  message->set_f_5(0x34ffc37ff7ca220f);
  message->set_f_14(s->substr(0, 14));
  message->set_f_16(s->substr(0, 11));
  message->set_f_17(0x65e4e8c3e17e19c);
  message->set_f_2(Message2::E1_CONST_5);
  message->set_f_22(0x4783aeb6b);
  message->set_f_20(s->substr(0, 95));
  message->set_f_7(0x39be273735ee0314);
  message->set_f_11(s->substr(0, 106));
  message->set_f_6(0x64d50aea9bb935);
  Message2::M5* v17 = message->mutable_f_100();
  v17->set_f_0(0x69);
  message->set_f_8(s->substr(0, 97));
  message->set_f_1(0x71);
  Message2::M1* v18 = message->mutable_f_88();
  Message2::M1::M16* v19_0 = v18->add_f_30();
  (void)v19_0;  // Suppresses clang-tidy.
  v18->set_f_1(0x26);
  Message2::M1::M17* v20 = v18->mutable_f_32();
  v20->set_f_0(0xe73a696);
  Message2::M1::M12* v21_0 = v18->add_f_25();
  v21_0->set_f_2(s->substr(0, 361));
  v21_0->set_f_0(s->substr(0, 18));
  v18->set_f_0(0x51);
  v18->set_f_6(s->substr(0, 325));
  v18->set_f_2(Message2::M1::E2_CONST_1);
  Message2::M1::M14* v22 = v18->mutable_f_28();
  v22->set_f_0(0x2b);
  v18->set_f_5(false);
  message->set_f_19(s->substr(0, 42));
  message->set_f_21(0xe56d0cba);
  Message2::M2* v23_0 = message->add_f_92();
  v23_0->add_f_0(0xee86208);
  Message2::M2::M15* v24 = v23_0->mutable_f_7();
  v24->add_f_1(s->substr(0, 20));
  v24->set_f_0(0x9c5f1518d988);
  message->set_f_4(s->substr(0, 18));
  message->set_f_9(0x2351748b5f806e6c);
  message->add_f_13(0x90fc836);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_1(0x13);
  message->set_f_7(0x38d8280ff0666a58);
  message->set_f_2(Message2::E1_CONST_5);
  message->set_f_4(s->substr(0, 3));
  message->add_f_13(0x11a88a);
  message->set_f_12(s->substr(0, 49));
  message->set_f_0(0x51f9781a9cb81919);
  Message2::M6* v0_0 = message->add_f_103();
  v0_0->set_f_5(0x6f);
  v0_0->add_f_15(s->substr(0, 7));
  v0_0->set_f_11(0x1cdbe9154e51e0a6);
  v0_0->set_f_6(0x36);
  v0_0->add_f_7(s->substr(0, 13));
  v0_0->set_f_8(0x4ac2ffbab00aa1c4);
  v0_0->set_f_1(0x1a3d13bf76a96);
  v0_0->set_f_3(Message2::M6::E4_CONST_5);
  v0_0->add_f_4(s->substr(0, 8));
  v0_0->set_f_16(s->substr(0, 64));
  Message2::M6* v0_1 = message->add_f_103();
  v0_1->set_f_1(0x67);
  v0_1->set_f_11(0xe22cfbb42badb3a);
  v0_1->add_f_15(s->substr(0, 7));
  v0_1->add_f_4(s->substr(0, 8));
  v0_1->add_f_0(0x22bde);
  v0_1->add_f_7(s->substr(0, 15));
  v0_1->set_f_14(0x1a97d3c1514f8);
  v0_1->set_f_2(0x83dc2c9abd4df6);
  v0_1->set_f_10(s->substr(0, 54));
  v0_1->set_f_5(0x60);
  v0_1->set_f_12(0x77b6b1f59);
  v0_1->set_f_16(s->substr(0, 371));
  v0_1->set_f_8(0x105ab61c7154aafa);
  message->set_f_20(s->substr(0, 3));
  message->set_f_3(s->substr(0, 32));
  Message2::M3* v1 = message->mutable_f_97();
  Message2::M3::M13* v2 = v1->mutable_f_5();
  v2->set_f_0(0x1e70a6555d7d8);
  Message2::M3::M18* v3 = v1->mutable_f_10();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_5(0x459ba17313a77a55);
  message->set_f_22(0x2024);
  message->set_f_17(0xd3306d10843b8b3);
  Message2::M8* v4_0 = message->add_f_110();
  v4_0->set_f_0(0x6a);
  message->set_f_19(s->substr(0, 46));
  Message2::M5* v5 = message->mutable_f_100();
  Message2::M5::M10* v6_0 = v5->add_f_10();
  (void)v6_0;  // Suppresses clang-tidy.
  Message2::M5::M10* v6_1 = v5->add_f_10();
  v6_1->set_f_0(s->substr(0, 48));
  Message2::M4* v7_0 = message->add_f_98();
  v7_0->set_f_1(0x1c49);
  v7_0->set_f_14(0x65fe3d90);
  v7_0->set_f_0(0x3f);
  v7_0->set_f_15(s->substr(0, 19));
  v7_0->set_f_9(s->substr(0, 82));
  v7_0->set_f_13(0x3548);
  v7_0->set_f_10(s->substr(0, 30));
  v7_0->set_f_4(Message2::M4::E3_CONST_2);
  v7_0->add_f_6(s->substr(0, 12));
  v7_0->add_f_6(s->substr(0, 13));
  v7_0->set_f_11(0xca44534fb02ca3);
  v7_0->set_f_3(0x6eefffa6ccd1a4);
  v7_0->set_f_2(0xb);
  Message2::M4* v7_1 = message->add_f_98();
  v7_1->set_f_9(s->substr(0, 14));
  v7_1->set_f_5(s->substr(0, 1));
  Message2::M4::M11* v8_0 = v7_1->add_f_59();
  (void)v8_0;  // Suppresses clang-tidy.
  Message2::M4::M11* v8_1 = v7_1->add_f_59();
  v8_1->set_f_0(0x66);
  v7_1->set_f_4(Message2::M4::E3_CONST_5);
  v7_1->set_f_13(0x14);
  v7_1->set_f_10(s->substr(0, 24));
  v7_1->set_f_3(0xe2e8d76d0a3889);
  v7_1->set_f_7(0x12f4db50);
  v7_1->set_f_2(0x64f);
  v7_1->add_f_6(s->substr(0, 2));
  v7_1->set_f_12(0xba84b2c01eced7);
  v7_1->set_f_14(0xdef0ec5);
  v7_1->set_f_1(0xe92);
  v7_1->set_f_11(0x2e304362bc96f2);
  message->set_f_8(s->substr(0, 64));
  message->set_f_9(0x69340c119db70016);
  message->set_f_15(0x7b);
  message->set_f_11(s->substr(0, 20));
  Message2::M2* v9_0 = message->add_f_92();
  Message2::M2::M15* v10 = v9_0->mutable_f_7();
  v10->set_f_0(0x6ac280232);
  v9_0->add_f_0(0x178db4);
  message->set_f_18(0x28);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M7* v0 = message->mutable_f_107();
  v0->set_f_0(0x1);
  message->set_f_3(s->substr(0, 12));
  message->set_f_4(s->substr(0, 5));
  Message2::M9* v1_0 = message->add_f_115();
  Message2::M9::M19* v2_0 = v1_0->add_f_13();
  Message2::M9::M19::M21* v3 = v2_0->mutable_f_60();
  Message2::M9::M19::M21::M23* v4 = v3->mutable_f_11();
  v4->set_f_1(s->substr(0, 107));
  v4->set_f_3(0x35);
  v4->set_f_4(0x3929a028);
  v4->set_f_0(0x35);
  v4->set_f_2(s->substr(0, 21));
  v4->set_f_7(s->substr(0, 11));
  v4->set_f_5(0xf27a1aec9e1da2);
  v4->add_f_8(s->substr(0, 16));
  v4->set_f_6(s->substr(0, 6));
  Message2::M9::M19::M21::M23::M24* v5 = v4->mutable_f_37();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M9::M19::M21::M23::M25* v6 = v4->mutable_f_43();
  v6->set_f_0(0x310e);
  Message2::M9::M19::M21::M22* v7 = v3->mutable_f_7();
  v7->set_f_0(s->substr(0, 59));
  v3->set_f_0(false);
  v2_0->set_f_11(Message2::M9::M19::E5_CONST_5);
  v2_0->set_f_0(s->substr(0, 21));
  v2_0->set_f_10(s->substr(0, 60));
  v2_0->set_f_6(0x1e7f);
  v2_0->set_f_12(0x11df20a63b56a);
  v2_0->set_f_9(0x2f9e);
  v2_0->set_f_8(0x546fe0f2f689b8);
  v2_0->set_f_13(true);
  v2_0->set_f_5(0x60);
  v2_0->set_f_2(s->substr(0, 327));
  Message2::M9::M19* v2_1 = v1_0->add_f_13();
  v2_1->set_f_7(s->substr(0, 6));
  v2_1->set_f_8(0x1d);
  v2_1->set_f_0(s->substr(0, 31));
  v2_1->set_f_2(s->substr(0, 62));
  v2_1->set_f_11(Message2::M9::M19::E5_CONST_4);
  v2_1->set_f_12(0x47f299c27116ca);
  v2_1->set_f_4(0x99bf6abe596ee3);
  v2_1->set_f_6(0x1f);
  v2_1->set_f_10(s->substr(0, 99));
  v2_1->set_f_13(false);
  v2_1->set_f_9(0x29d7);
  v2_1->set_f_5(0x87c30b307a5825);
  v1_0->set_f_1(0x29bc);
  v1_0->set_f_0(0x2a331973a);
  message->set_f_15(0x3e);
  Message2::M2* v8_0 = message->add_f_92();
  v8_0->add_f_0(0x14a49c);
  Message2::M2::M15* v9 = v8_0->mutable_f_7();
  v9->add_f_1(s->substr(0, 16));
  message->set_f_11(s->substr(0, 32));
  message->set_f_20(s->substr(0, 5));
  message->set_f_16(s->substr(0, 19));
  Message2::M4* v10_0 = message->add_f_98();
  v10_0->set_f_15(s->substr(0, 311));
  v10_0->set_f_1(0x41);
  v10_0->set_f_2(0x121b);
  v10_0->set_f_8(s->substr(0, 26));
  v10_0->set_f_5(s->substr(0, 7));
  v10_0->add_f_6(s->substr(0, 13));
  Message2::M4::M11* v11_0 = v10_0->add_f_59();
  v11_0->set_f_0(0xc3400c28defd74);
  Message2::M4::M11* v11_1 = v10_0->add_f_59();
  v11_1->set_f_0(0x8ab94a01407a31);
  v10_0->set_f_12(0x19a3361dc01f2);
  v10_0->set_f_0(0x148514);
  v10_0->set_f_10(s->substr(0, 2));
  v10_0->set_f_11(0x456b259a404aff);
  v10_0->set_f_9(s->substr(0, 22));
  Message2::M4* v10_1 = message->add_f_98();
  v10_1->set_f_4(Message2::M4::E3_CONST_4);
  v10_1->set_f_14(0x3af737f2);
  v10_1->set_f_9(s->substr(0, 5));
  v10_1->set_f_7(0x4803159);
  v10_1->set_f_3(0x21aa728);
  v10_1->set_f_2(0x26ce);
  v10_1->set_f_11(0x7);
  v10_1->set_f_5(s->substr(0, 4));
  v10_1->set_f_1(0x87eab6e30fb2c5);
  v10_1->set_f_0(0x1c);
  v10_1->set_f_10(s->substr(0, 31));
  message->set_f_8(s->substr(0, 22));
  message->set_f_19(s->substr(0, 31));
  message->set_f_18(0x64c5d74);
  message->set_f_14(s->substr(0, 407));
  Message2::M6* v12_0 = message->add_f_103();
  v12_0->add_f_7(s->substr(0, 5));
  v12_0->set_f_1(0x52);
  v12_0->set_f_12(0xb27c327c);
  v12_0->set_f_8(0x30111f74171b9d9c);
  v12_0->set_f_10(s->substr(0, 6));
  v12_0->set_f_14(0x1066f8f61b9b4);
  v12_0->add_f_4(s->substr(0, 1));
  v12_0->set_f_16(s->substr(0, 502));
  v12_0->add_f_0(0xb897123);
  v12_0->add_f_9(s->substr(0, 8));
  v12_0->set_f_11(0x5290c7a0cf8d6509);
  message->set_f_5(0x753c214e069dda44);
  message->add_f_10(0xf4c2e0f);
  message->set_f_6(0x3287fd0ce);
  message->set_f_21(0xd498b9140594);
  Message2::M5* v13 = message->mutable_f_100();
  Message2::M5::M10* v14_0 = v13->add_f_10();
  v14_0->set_f_0(s->substr(0, 352));
  message->set_f_1(0x3a);
  Message2::M8* v15_0 = message->add_f_110();
  v15_0->set_f_0(0x7b0a838c8d8b68);
  message->set_f_0(0x6868952191d3b216);
  message->set_f_7(0x583f40b26ebcfef);
  Message2::M3* v16 = message->mutable_f_97();
  Message2::M3::M18* v17 = v16->mutable_f_10();
  v17->set_f_0(0x2c);
  Message2::M3::M13* v18 = v16->mutable_f_5();
  v18->set_f_0(0xa323819b2791);
  message->set_f_12(s->substr(0, 168));
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
