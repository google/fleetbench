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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message1.pb.h"

namespace fleetbench::rpc::P3::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_10(s->substr(0, 337));
  message->set_f_13(0x59);
  message->set_f_16(0x5d);
  message->set_f_30(false);
  Message1::M3* v0 = message->mutable_f_51();
  Message1::M3::M19* v1_0 = v0->add_f_6();
  v1_0->set_f_5(0x7c6ce6b);
  v1_0->set_f_3(true);
  v1_0->set_f_2(s->substr(0, 316));
  v0->set_f_2(true);
  message->set_f_2(0x4c);
  message->set_f_12(s->substr(0, 4));
  Message1::M6* v2_0 = message->add_f_57();
  v2_0->set_f_0(0x66);
  Message1::M6::M34* v3 = v2_0->mutable_f_4();
  v3->set_f_0(0x60);
  Message1::M6::M34::M74* v4_0 = v3->add_f_2();
  v4_0->set_f_0(0x3cff);
  Message1::M7* v5_0 = message->add_f_58();
  Message1::M7::M49* v6 = v5_0->mutable_f_6();
  Message1::M7::M49::M84* v7 = v6->mutable_f_6();
  v7->set_f_0(0x3b);
  Message1::M7::M49::M57* v8 = v6->mutable_f_5();
  v8->add_f_0(Message1::M7::M49::M57::E13_CONST_4);
  Message1::M7::M36* v9 = v5_0->mutable_f_5();
  v9->set_f_0(s->substr(0, 491));
  Message1::M7::M51* v10 = v5_0->mutable_f_7();
  v10->set_f_1(true);
  message->set_f_27(0x7bb);
  message->set_f_1(s->substr(0, 27));
  message->add_f_4(Message1::E1_CONST_5);
  message->add_f_4(Message1::E1_CONST_4);
  message->add_f_4(Message1::E1_CONST_5);
  message->set_f_24(s->substr(0, 19));
  Message1::M1* v11 = message->mutable_f_49();
  Message1::M1::M18* v12 = v11->mutable_f_4();
  v12->set_f_12(s->substr(0, 27));
  v12->set_f_13(0xdb0a4febbdba184);
  v12->set_f_2(0x22);
  v12->set_f_15(0xc805f3e);
  v12->set_f_25(0x2b817327);
  v12->set_f_9(0xbf0b2ec0ad7297bd);
  v12->set_f_27(0xdebf780c2f771329);
  v12->set_f_8(0x3e6daa5);
  v12->set_f_26(0x50);
  v12->set_f_21(0x82074a6bc1bf3e1f);
  v12->set_f_6(s->substr(0, 74));
  v12->set_f_7(0x1f);
  v12->set_f_19(false);
  v12->set_f_0(0x5deb7799);
  v12->set_f_17(0xc16a8fabd02b9e47);
  v12->set_f_3(0x1fe802f341a0da03);
  Message1::M1::M29* v13 = v11->mutable_f_5();
  (void)v13;  // Suppresses clang-tidy.
  Message1::M1::M33* v14 = v11->mutable_f_6();
  v14->set_f_1(0xdd59c96cdb8af9e1);
  v14->set_f_4(0x2f);
  v14->set_f_6(s->substr(0, 1206));
  Message1::M1::M33::M102* v15_0 = v14->add_f_11();
  v15_0->set_f_0(s->substr(0, 3));
  v14->set_f_3(0x35);
  v14->set_f_2(0x316ac9182b165b7);
  Message1::M12* v16_0 = message->add_f_66();
  (void)v16_0;  // Suppresses clang-tidy.
  message->set_f_31(true);
  message->set_f_22(0x12);
  message->set_f_19(s->substr(0, 5));
  message->set_f_21(0x5c);
  message->set_f_28(0x70606b5caac20a9e);
  message->set_f_25(s->substr(0, 15));
  message->set_f_23(0x95b927b8d3cbc771);
  Message1::M5* v17 = message->mutable_f_55();
  Message1::M5::M26* v18 = v17->mutable_f_2();
  Message1::M5::M26::M65* v19 = v18->mutable_f_2();
  v19->set_f_0(0.300192);
  v18->set_f_0(0x1a16de04f5be7414);
  v17->set_f_0(0x17);
  message->set_f_8(0xa4b70462a55c2fa8);
  message->set_f_9(false);
  message->set_f_29(s->substr(0, 214));
  message->set_f_3(0x35);
  message->set_f_18(0x6ec1f2b2);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M6* v0_0 = message->add_f_57();
  Message1::M6::M34* v1 = v0_0->mutable_f_4();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M6::M40* v2 = v0_0->mutable_f_6();
  (void)v2;  // Suppresses clang-tidy.
  v0_0->set_f_0(0x67);
  message->set_f_13(0x1eb218);
  message->set_f_22(0x15);
  message->set_f_12(s->substr(0, 63));
  Message1::M11* v3 = message->mutable_f_62();
  Message1::M11::M55* v4_0 = v3->add_f_3();
  Message1::M11::M55::M108* v5 = v4_0->mutable_f_6();
  v5->set_f_3(s->substr(0, 5));
  v5->set_f_28(Message1::M11::M55::M108::E16_CONST_5);
  v5->set_f_19(0x59dd12e9aa22ba9);
  v5->set_f_29(0xc68f215bbabf31be);
  v5->set_f_2(s->substr(0, 2));
  v5->set_f_11(0x35);
  v5->set_f_20(0x99692a17501a77ef);
  v5->set_f_27(0x40);
  v5->set_f_17(0xd3f587c802c7e35e);
  v5->set_f_10(0x40b7b2ff172f577d);
  v5->set_f_18(Message1::M11::M55::M108::E15_CONST_1);
  v5->set_f_15(0x7a);
  v5->set_f_24(0x65);
  v5->set_f_23(0xd716f);
  Message1::M13* v6 = message->mutable_f_67();
  v6->set_f_1(0x1);
  v6->set_f_27(s->substr(0, 67));
  v6->set_f_4(0x199d7353d340d28c);
  Message1::M13::M41* v7 = v6->mutable_f_44();
  Message1::M13::M41::M97* v8 = v7->mutable_f_39();
  v8->set_f_0(0x1a7836);
  v7->set_f_7(false);
  v7->set_f_16(0x41);
  v7->set_f_1(0x8cde31781be34d49);
  v7->set_f_2(0x30);
  Message1::M13::M41::E8 array_0[21] = {
      Message1::M13::M41::E8_CONST_1, Message1::M13::M41::E8_CONST_5,
      Message1::M13::M41::E8_CONST_1, Message1::M13::M41::E8_CONST_2,
      Message1::M13::M41::E8_CONST_3, Message1::M13::M41::E8_CONST_3,
      Message1::M13::M41::E8_CONST_2, Message1::M13::M41::E8_CONST_2,
      Message1::M13::M41::E8_CONST_2, Message1::M13::M41::E8_CONST_5,
      Message1::M13::M41::E8_CONST_1, Message1::M13::M41::E8_CONST_2,
      Message1::M13::M41::E8_CONST_3, Message1::M13::M41::E8_CONST_3,
      Message1::M13::M41::E8_CONST_1, Message1::M13::M41::E8_CONST_4,
      Message1::M13::M41::E8_CONST_2, Message1::M13::M41::E8_CONST_4,
      Message1::M13::M41::E8_CONST_3, Message1::M13::M41::E8_CONST_2,
      Message1::M13::M41::E8_CONST_2,
  };
  for (auto v : array_0) {
    v7->add_f_0(v);
  }
  v7->set_f_12(0x1e);
  v7->set_f_6(s->substr(0, 5));
  v7->set_f_20(0x8019529);
  v7->set_f_15(0x5c);
  v7->set_f_8(0xac1a24d858f9ed18);
  Message1::M13::M54* v9_0 = v6->add_f_47();
  (void)v9_0;  // Suppresses clang-tidy.
  v6->set_f_20(0x5411c4a46a9b489e);
  v6->set_f_6(s->substr(0, 71));
  v6->set_f_30(0x9);
  v6->set_f_11(0xea4394993e209902);
  v6->set_f_5(0x1f);
  v6->set_f_13(0x35480);
  v6->set_f_16(s->substr(0, 28));
  Message1::M13::M15* v10 = v6->mutable_f_41();
  v10->set_f_0(0x4e);
  Message1::M13::M15::M61* v11 = v10->mutable_f_2();
  v11->set_f_0(0x778c6ae685583ae4);
  v6->set_f_29(s->substr(0, 26));
  v6->set_f_14(0xa566ab74096774bb);
  v6->set_f_12(0x2);
  Message1::M13::M42* v12_0 = v6->add_f_45();
  v12_0->set_f_0(0xb);
  v6->set_f_17(0xfe5f1f83a82c47cb);
  v6->set_f_25(s->substr(0, 26));
  Message1::M13::M56* v13_0 = v6->add_f_50();
  v13_0->set_f_1(0x75142a7a9e050366);
  v6->set_f_8(0x5bd);
  v6->set_f_24(0x448f4b8);
  message->set_f_20(s->substr(0, 511));
  message->set_f_30(false);
  message->set_f_14(0x2b36a05972683383);
  message->set_f_11(s->substr(0, 17));
  message->set_f_9(true);
  message->set_f_25(s->substr(0, 25));
  message->set_f_21(0x4747e65);
  Message1::M8* v14 = message->mutable_f_59();
  Message1::M8::M31* v15_0 = v14->add_f_12();
  v15_0->add_f_0(s->substr(0, 8));
  v14->add_f_1(Message1::M8::E3_CONST_3);
  message->set_f_6(0x137e5ccc);
  message->set_f_29(s->substr(0, 2));
  message->set_f_16(0x4e);
  message->set_f_15(0x38);
  message->set_f_0(s->substr(0, 83));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M11* v0 = message->mutable_f_62();
  v0->set_f_0(s->substr(0, 8));
  Message1::M11::M55* v1_0 = v0->add_f_3();
  Message1::M11::M55::M105* v2 = v1_0->mutable_f_5();
  v2->set_f_0(0xb75651c4b211905a);
  Message1::M11::M55::M108* v3 = v1_0->mutable_f_6();
  v3->set_f_10(0xb45bd640eac1a890);
  v3->set_f_11(0x73);
  v3->set_f_7(0x6683f2643c);
  v3->set_f_17(0x2dfc2cc93a619674);
  v3->set_f_14(false);
  v3->set_f_1(s->substr(0, 57));
  v3->set_f_27(0x7d);
  v3->set_f_0(0x48b81274b85a31b6);
  v3->set_f_21(0x7bc01d8);
  v3->set_f_16(true);
  v3->set_f_19(0x6e5ef3711106669f);
  v3->set_f_6(s->substr(0, 5));
  v3->set_f_13(true);
  v3->set_f_15(0x3ddb);
  message->set_f_2(0x2);
  message->set_f_29(s->substr(0, 4));
  message->set_f_16(0x16);
  message->set_f_1(s->substr(0, 20));
  message->set_f_27(0x4bca9);
  message->set_f_15(0x68);
  message->set_f_11(s->substr(0, 28));
  message->add_f_4(Message1::E1_CONST_2);
  message->set_f_0(s->substr(0, 5));
  message->set_f_30(false);
  Message1::M2* v4 = message->mutable_f_50();
  Message1::M2::M16* v5 = v4->mutable_f_2();
  Message1::M2::M16::M72* v6_0 = v5->add_f_7();
  v6_0->set_f_0(true);
  Message1::M2::M16::M62* v7 = v5->mutable_f_6();
  v7->set_f_0(0xc78fdadec9cb6d3f);
  v5->set_f_1(s->substr(0, 17));
  message->set_f_21(0x2f58494);
  message->set_f_23(0x5045e93322be77f5);
  Message1::M12* v8_0 = message->add_f_66();
  Message1::M12::M23* v9_0 = v8_0->add_f_6();
  Message1::M12::M23::M70* v10 = v9_0->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message1::M12::M23::M106* v11 = v9_0->mutable_f_6();
  v11->set_f_0(s->substr(0, 18));
  v8_0->set_f_0(s->substr(0, 24));
  message->set_f_6(0x6ca0d7bb);
  message->set_f_13(0x98401f);
  message->set_f_8(0xed57828456fa3ca3);
  Message1::M5* v12 = message->mutable_f_55();
  v12->set_f_0(0x22);
  Message1::M3* v13 = message->mutable_f_51();
  v13->set_f_0(0x7dad70a6ab70945);
  Message1::M3::M19* v14_0 = v13->add_f_6();
  v14_0->set_f_0(0xe874c42f6a9affd5);
  v14_0->set_f_6(0x15306d5);
  v14_0->set_f_2(s->substr(0, 3));
  Message1::M10* v15 = message->mutable_f_61();
  Message1::M10::M20* v16 = v15->mutable_f_4();
  Message1::M10::M20::M63* v17_0 = v16->add_f_2();
  v17_0->set_f_0(0x4eb16cb1);
  v16->set_f_0(s->substr(0, 29));
  Message1::M10::M39* v18_0 = v15->add_f_8();
  Message1::M10::M39::M91* v19 = v18_0->mutable_f_2();
  v19->set_f_5(s->substr(0, 8));
  v19->set_f_3(0x7701cc39);
  v19->set_f_1(s->substr(0, 21));
  v18_0->set_f_0(s->substr(0, 5));
  Message1::M10::M47* v20 = v15->mutable_f_10();
  v20->set_f_0(0xcca2ade65adedb47);
  v20->set_f_2(s->substr(0, 4));
  Message1::M13* v21 = message->mutable_f_67();
  v21->set_f_18(0x17be30a6);
  v21->set_f_2(0x7814e32);
  v21->set_f_1(0x34ffe21);
  v21->set_f_10(s->substr(0, 1));
  v21->set_f_19(0xd05);
  v21->set_f_23(s->substr(0, 19));
  v21->set_f_15(0x330c9e3d);
  v21->set_f_14(0xdc724dbc8d8aa228);
  v21->set_f_21(0x7a);
  Message1::M13::M41* v22 = v21->mutable_f_44();
  v22->set_f_5(s->substr(0, 11));
  v22->set_f_14(0x2f46fa0a);
  v22->add_f_18(Message1::M13::M41::E10_CONST_2);
  v22->set_f_17(s->substr(0, 19));
  v22->set_f_2(0x2);
  v22->set_f_4(0.511827);
  v22->set_f_3(0xf1f093191443ae64);
  Message1::M13::M41::M82* v23 = v22->mutable_f_38();
  v23->set_f_2(0xbdb016eb7978ba6a);
  v23->set_f_0(0x40);
  v22->set_f_21(0xcc7a4e5);
  Message1::M13::M41::M76* v24 = v22->mutable_f_36();
  v24->set_f_0(0x605deba2df60734a);
  v22->add_f_0(Message1::M13::M41::E8_CONST_1);
  v22->add_f_9(Message1::M13::M41::E9_CONST_5);
  v21->set_f_25(s->substr(0, 3));
  v21->set_f_6(s->substr(0, 139));
  v21->set_f_16(s->substr(0, 7));
  v21->set_f_12(0x1fa8fd);
  v21->set_f_8(0xebc0ce8);
  v21->set_f_5(0x3e);
  Message1::M13::M22* v25_0 = v21->add_f_42();
  v25_0->set_f_0(0x7e);
  v21->set_f_24(0x2f);
  v21->set_f_3(0xd813d6e027abfd93);
  v21->set_f_26(0xa1f062fb003185f5);
  message->set_f_31(false);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M10* v0 = message->mutable_f_61();
  Message1::M10::M43* v1_0 = v0->add_f_9();
  Message1::M10::M43::M88* v2_0 = v1_0->add_f_2();
  v2_0->set_f_2(0.313869);
  Message1::M10::M43::M88::M113* v3 = v2_0->mutable_f_8();
  Message1::M10::M43::M88::M113::M128* v4_0 = v3->add_f_6();
  v4_0->set_f_0(s->substr(0, 30));
  Message1::M10::M43::M88::M113::M126* v5 = v3->mutable_f_3();
  (void)v5;  // Suppresses clang-tidy.
  v2_0->set_f_3(0x42);
  Message1::M10::M39* v6_0 = v0->add_f_8();
  Message1::M10::M39::M91* v7 = v6_0->mutable_f_2();
  v7->set_f_5(s->substr(0, 28));
  v7->set_f_2(s->substr(0, 35));
  v7->set_f_4(0xc52ea4c);
  v7->set_f_3(0x2843bb79);
  Message1::M10::M20* v8 = v0->mutable_f_4();
  Message1::M10::M20::M63* v9_0 = v8->add_f_2();
  v9_0->set_f_1(0xbe19313);
  v0->set_f_0(s->substr(0, 111));
  Message1::M10::M47* v10 = v0->mutable_f_10();
  v10->set_f_3(s->substr(0, 7));
  v10->set_f_0(0x2883ee5b2ee8d010);
  v10->set_f_4(0x31e9);
  v10->set_f_2(s->substr(0, 8));
  message->set_f_26(0xb32b7fff3d128fd7);
  message->set_f_23(0x63b4c1bad61f1502);
  message->set_f_9(true);
  message->set_f_0(s->substr(0, 7));
  message->set_f_6(0x7913b69d);
  message->set_f_8(0x6309b4fc95f149a7);
  message->set_f_13(0x342d42f);
  message->set_f_16(0x3e);
  message->set_f_29(s->substr(0, 1));
  Message1::M9* v11 = message->mutable_f_60();
  Message1::M9::M50* v12 = v11->mutable_f_8();
  Message1::M9::M50::M103* v13 = v12->mutable_f_3();
  v13->set_f_4(0x36cce7c);
  v13->set_f_5(0x70f80ab);
  v13->set_f_3(0x72);
  v13->set_f_2(0x7b);
  v11->set_f_0(s->substr(0, 18));
  Message1::M9::M46* v14 = v11->mutable_f_7();
  (void)v14;  // Suppresses clang-tidy.
  Message1::M9::M45* v15 = v11->mutable_f_6();
  (void)v15;  // Suppresses clang-tidy.
  message->set_f_18(0x2156626);
  message->add_f_4(Message1::E1_CONST_5);
  message->set_f_1(s->substr(0, 27));
  Message1::M4* v16_0 = message->add_f_53();
  Message1::M4::M52* v17_0 = v16_0->add_f_10();
  Message1::M4::M52::M78* v18 = v17_0->mutable_f_3();
  v18->set_f_4(0x16);
  v18->set_f_0(false);
  Message1::M4::M52::M78::M110* v19 = v18->mutable_f_10();
  v19->set_f_0(0x28c37f35);
  Message1::M4::M52::M100* v20 = v17_0->mutable_f_5();
  v20->set_f_0(s->substr(0, 12));
  v17_0->set_f_0(true);
  message->set_f_2(0x1b);
  Message1::M7* v21_0 = message->add_f_58();
  Message1::M7::M49* v22 = v21_0->mutable_f_6();
  Message1::M7::M49::M84* v23 = v22->mutable_f_6();
  v23->set_f_0(0xe7b);
  Message1::M7::M49::M57* v24 = v22->mutable_f_5();
  v24->add_f_0(Message1::M7::M49::M57::E13_CONST_4);
  Message1::M7::M51* v25 = v21_0->mutable_f_7();
  Message1::M7::M51::M73* v26_0 = v25->add_f_6();
  (void)v26_0;  // Suppresses clang-tidy.
  v25->set_f_1(false);
  Message1::M7::M53* v27 = v21_0->mutable_f_9();
  (void)v27;  // Suppresses clang-tidy.
  Message1::M7::M36* v28 = v21_0->mutable_f_5();
  v28->set_f_0(s->substr(0, 7));
  message->set_f_5(0x71);
  message->set_f_24(s->substr(0, 17));
  message->set_f_17(s->substr(0, 23));
  Message1::M13* v29 = message->mutable_f_67();
  v29->set_f_5(0x3e);
  Message1::M13::M56* v30_0 = v29->add_f_50();
  Message1::M13::M56::M85* v31 = v30_0->mutable_f_5();
  v31->set_f_0(s->substr(0, 38));
  v30_0->set_f_1(0x65f05dac54016b95);
  v29->set_f_30(0x20);
  v29->set_f_7(true);
  v29->set_f_16(s->substr(0, 7));
  v29->set_f_25(s->substr(0, 1));
  Message1::M13::M54* v32_0 = v29->add_f_47();
  (void)v32_0;  // Suppresses clang-tidy.
  Message1::M13::M22* v33_0 = v29->add_f_42();
  v33_0->set_f_0(0x71);
  Message1::M13::M42* v34_0 = v29->add_f_45();
  Message1::M13::M42::M83* v35 = v34_0->mutable_f_2();
  (void)v35;  // Suppresses clang-tidy.
  v34_0->set_f_0(0xa379f59);
  v29->set_f_23(s->substr(0, 51));
  v29->set_f_6(s->substr(0, 8));
  v29->add_f_0(Message1::M13::E4_CONST_2);
  v29->set_f_29(s->substr(0, 3));
  v29->set_f_15(0x74f3a26);
  Message1::M13::M41* v36 = v29->mutable_f_44();
  v36->set_f_6(s->substr(0, 63));
  v36->set_f_11(0x47);
  v36->set_f_14(0x46e33cb5);
  v36->add_f_0(Message1::M13::M41::E8_CONST_3);
  v36->set_f_2(0x22);
  v36->set_f_21(0xe0e9af0);
  v36->set_f_7(false);
  v36->set_f_17(s->substr(0, 34));
  v36->set_f_12(0x68e8edb);
  v36->set_f_19(s->substr(0, 12));
  Message1::M13::M41::M76* v37 = v36->mutable_f_36();
  (void)v37;  // Suppresses clang-tidy.
  Message1::M13::M41::M82* v38 = v36->mutable_f_38();
  v38->set_f_2(0x32721a747c751dca);
  v38->set_f_4(0x7ddb97e);
  v38->set_f_0(0x138247);
  v36->set_f_10(s->substr(0, 123));
  v36->set_f_8(0x8c787cbefa4b14b7);
  v36->set_f_20(0x5f0);
  Message1::M13::M15* v39 = v29->mutable_f_41();
  Message1::M13::M15::M89* v40 = v39->mutable_f_4();
  v40->set_f_0(s->substr(0, 21));
  Message1::M13::M15::M61* v41 = v39->mutable_f_2();
  v41->set_f_0(0x75c07550026ebd39);
  v41->set_f_2(0x542c0d02);
  v29->set_f_11(0x431991aecb055a1e);
  v29->set_f_17(0xa532888e5930b36d);
  v29->set_f_18(0x28be29eb);
  v29->set_f_13(0x33);
  v29->set_f_28(s->substr(0, 1));
  v29->set_f_27(s->substr(0, 24));
  v29->set_f_19(0x2896b);
  v29->set_f_3(0xaed1c29c9809995b);
  v29->set_f_20(0xea6e7bf69ea897f4);
  message->set_f_7(s->substr(0, 86));
  message->set_f_30(true);
  Message1::M11* v42 = message->mutable_f_62();
  (void)v42;  // Suppresses clang-tidy.
  message->set_f_31(true);
  message->set_f_27(0x65559d7);
  message->set_f_28(0x4b57c4f3cb3c2ed5);
  Message1::M8* v43 = message->mutable_f_59();
  v43->set_f_3(0x4aedfb9207d5e645);
  Message1::M8::M30* v44 = v43->mutable_f_10();
  v44->set_f_0(0x272ec);
  Message1::M8::M30::M101* v45 = v44->mutable_f_2();
  (void)v45;  // Suppresses clang-tidy.
  Message1::M8::E3 array_0[22] = {
      Message1::M8::E3_CONST_1, Message1::M8::E3_CONST_1,
      Message1::M8::E3_CONST_4, Message1::M8::E3_CONST_3,
      Message1::M8::E3_CONST_2, Message1::M8::E3_CONST_5,
      Message1::M8::E3_CONST_4, Message1::M8::E3_CONST_2,
      Message1::M8::E3_CONST_2, Message1::M8::E3_CONST_1,
      Message1::M8::E3_CONST_5, Message1::M8::E3_CONST_2,
      Message1::M8::E3_CONST_1, Message1::M8::E3_CONST_1,
      Message1::M8::E3_CONST_1, Message1::M8::E3_CONST_5,
      Message1::M8::E3_CONST_3, Message1::M8::E3_CONST_3,
      Message1::M8::E3_CONST_5, Message1::M8::E3_CONST_5,
      Message1::M8::E3_CONST_2, Message1::M8::E3_CONST_1,
  };
  for (auto v : array_0) {
    v43->add_f_1(v);
  }
  Message1::M2* v46 = message->mutable_f_50();
  Message1::M2::M48* v47 = v46->mutable_f_4();
  (void)v47;  // Suppresses clang-tidy.
  message->set_f_10(s->substr(0, 403));
  message->set_f_14(0x3a6b112bc2cf5f1f);
  message->set_f_11(s->substr(0, 120));
  message->set_f_20(s->substr(0, 26));
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
}  // namespace fleetbench::rpc::P3::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
