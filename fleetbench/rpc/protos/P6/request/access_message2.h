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
  Message2::M5* v0 = message->mutable_f_54();
  (void)v0;  // Suppresses clang-tidy.
  Message2::M4* v1 = message->mutable_f_53();
  v1->set_f_0(0x3ce5769);
  Message2::M1* v2 = message->mutable_f_46();
  v2->set_f_1(0x77);
  v2->set_f_0(0.888013);
  v2->set_f_2(0x53);
  Message2::M1::M20* v3 = v2->mutable_f_7();
  v3->set_f_0(false);
  Message2::M1::M20::M32* v4 = v3->mutable_f_4();
  v4->set_f_3(0x4fe1f07fe6c40f22);
  v4->set_f_5(Message2::M1::M20::M32::E33_CONST_5);
  v4->set_f_2(0x755811dc);
  message->set_f_10(0x1c4497c9685);
  Message2::M9* v5 = message->mutable_f_61();
  Message2::M9::M14* v6 = v5->mutable_f_5();
  v6->set_f_2(0x588b72fd);
  v6->set_f_0(Message2::M9::M14::E18_CONST_3);
  Message2::M9::M14::M25* v7 = v6->mutable_f_6();
  v7->set_f_0(s->substr(0, 3));
  Message2::M9::M14::M25::M49* v8 = v7->mutable_f_4();
  v8->set_f_2(false);
  message->set_f_25(0x3e956d3);
  message->set_f_22(0x46ebe6eb11da11b1);
  Message2::M8* v9 = message->mutable_f_60();
  Message2::M8::M21* v10_0 = v9->add_f_5();
  Message2::M8::M21::M43* v11 = v10_0->mutable_f_8();
  v11->set_f_4(0x1626ae476500a9a2);
  v11->add_f_0(Message2::M8::M21::M43::E44_CONST_3);
  v11->set_f_2(s->substr(0, 24));
  Message2::M8::M21::M43::M52* v12 = v11->mutable_f_23();
  Message2::M8::M21::M43::M52::M57* v13_0 = v12->add_f_9();
  v13_0->set_f_3(s->substr(0, 364));
  v13_0->set_f_0(0x1fecb14c78381a75);
  v13_0->set_f_2(0x31b218865c3b7c85);
  v13_0->set_f_1(0x417680d825f2d706);
  v12->set_f_2(true);
  v10_0->set_f_0(0x2fd6179f8113be78);
  Message2::M8::M21::M41* v14 = v10_0->mutable_f_7();
  Message2::M8::M21::M41::M47* v15 = v14->mutable_f_6();
  v15->set_f_1(s->substr(0, 1611));
  v15->set_f_2(0x1);
  v15->set_f_4(s->substr(0, 17));
  Message2::M8::M21::M28* v16 = v10_0->mutable_f_4();
  (void)v16;  // Suppresses clang-tidy.
  Message2::M8::M21::M40* v17 = v10_0->mutable_f_6();
  (void)v17;  // Suppresses clang-tidy.
  Message2::M8::M22* v18_0 = v9->add_f_6();
  v18_0->add_f_7(Message2::M8::M22::E19_CONST_4);
  v18_0->set_f_19(0x100fa3);
  v18_0->set_f_8(0x51);
  v18_0->set_f_5(0x269b);
  v18_0->set_f_25(Message2::M8::M22::E24_CONST_4);
  v18_0->set_f_12(0x4013cab1ae65cc51);
  v18_0->set_f_0(0x1cc3ef64bdd);
  v18_0->set_f_15(0x1a68f2a5b7d691f7);
  v18_0->set_f_4(true);
  v18_0->add_f_9(Message2::M8::M22::E20_CONST_4);
  v18_0->set_f_2(0x2d55d6fbe7c423ef);
  v18_0->set_f_6(0x2e);
  v18_0->set_f_17(s->substr(0, 6));
  Message2::M8::M22::M39* v19 = v18_0->mutable_f_48();
  v19->set_f_2(0x216a31502397d5d9);
  v19->set_f_0(false);
  v19->set_f_1(s->substr(0, 448));
  v18_0->set_f_1(s->substr(0, 20));
  v18_0->set_f_3(false);
  Message2::M8::M22::E22 array_1[22] = {
      Message2::M8::M22::E22_CONST_2, Message2::M8::M22::E22_CONST_2,
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_4,
      Message2::M8::M22::E22_CONST_4, Message2::M8::M22::E22_CONST_3,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_3,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_1,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_5,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_2,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_1,
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_3,
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_3,
      Message2::M8::M22::E22_CONST_1, Message2::M8::M22::E22_CONST_3,
  };
  for (auto v : array_1) {
    v18_0->add_f_21(v);
  }
  v18_0->set_f_18(0x46709c76f70fcbe4);
  v18_0->set_f_24(0xbf36b97959e6ea0);
  v18_0->set_f_11(true);
  v18_0->set_f_10(s->substr(0, 22));
  v18_0->set_f_29(0x21);
  v18_0->set_f_22(0xb413ee6);
  v18_0->set_f_26(false);
  Message2::M8::M17* v20 = v9->mutable_f_4();
  v20->set_f_3(0x52a9545b);
  v20->set_f_2(s->substr(0, 20));
  v20->set_f_1(0xa6f0099);
  message->set_f_3(0x39b58c969d8f96f3);
  Message2::M11* v21 = message->mutable_f_64();
  v21->set_f_0(0x43689);
  Message2::M11::M13* v22 = v21->mutable_f_3();
  v22->set_f_28(s->substr(0, 1));
  v22->set_f_22(0x48c6175);
  Message2::M11::M13::M38* v23 = v22->mutable_f_48();
  v23->set_f_0(0x73bc21c);
  v22->set_f_29(0x76);
  v22->set_f_20(0xa2eec35);
  v22->set_f_2(0x7fcb4986);
  v22->set_f_14(true);
  v22->set_f_23(0x262318be);
  v22->set_f_24(s->substr(0, 3));
  v22->set_f_3(0xae78d28cbee694e);
  v22->add_f_30(Message2::M11::M13::E16_CONST_5);
  v22->set_f_13(Message2::M11::M13::E14_CONST_4);
  v22->set_f_0(0x57);
  v22->set_f_4(false);
  v22->set_f_12(0x2f);
  v22->set_f_26(false);
  v22->set_f_17(0x59);
  v22->set_f_21(s->substr(0, 29));
  v22->set_f_15(Message2::M11::M13::E15_CONST_2);
  v22->set_f_16(0x28134406e);
  v22->set_f_7(0x19cef74f3daa8502);
  v22->set_f_9(s->substr(0, 82));
  v22->set_f_18(false);
  message->set_f_23(Message2::E4_CONST_1);
  message->set_f_17(s->substr(0, 9));
  message->add_f_14(Message2::E2_CONST_1);
  message->set_f_6(0x4ed6ef27d47d57bd);
  message->set_f_26(0x45b0f72c);
  message->set_f_16(Message2::E3_CONST_2);
  message->set_f_13(0.910882);
  message->set_f_4(s->substr(0, 3));
  Message2::M2* v24_0 = message->add_f_48();
  v24_0->set_f_1(true);
  v24_0->set_f_2(s->substr(0, 1));
  v24_0->set_f_0(0x3e);
  message->set_f_15(true);
  Message2::M6* v25 = message->mutable_f_57();
  v25->set_f_3(0xc966c23);
  v25->add_f_0(Message2::M6::E7_CONST_1);
  v25->set_f_1(true);
  v25->set_f_2(false);
  message->set_f_12(0x18606d);
  Message2::M3* v26_0 = message->add_f_51();
  v26_0->set_f_1(0x512f4cd51f3819eb);
  message->set_f_18(0.862924);
  message->add_f_11(Message2::E1_CONST_2);
  message->add_f_11(Message2::E1_CONST_1);
  message->set_f_0(0x676bb704c7b9abec);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_17(s->substr(0, 9));
  message->add_f_11(Message2::E1_CONST_4);
  message->set_f_24(Message2::E5_CONST_4);
  Message2::M11* v0 = message->mutable_f_64();
  Message2::M11::M13* v1 = v0->mutable_f_3();
  v1->add_f_30(Message2::M11::M13::E16_CONST_3);
  v1->set_f_7(0x6f02c47aaf962589);
  v1->set_f_4(false);
  v1->set_f_3(0x3b06281370d74758);
  v1->set_f_28(s->substr(0, 3422));
  v1->set_f_21(s->substr(0, 1185));
  v1->set_f_12(0x16);
  v1->set_f_11(0x62);
  v1->set_f_9(s->substr(0, 29));
  v1->set_f_13(Message2::M11::M13::E14_CONST_2);
  v1->set_f_18(true);
  v1->add_f_31(Message2::M11::M13::E17_CONST_4);
  v1->set_f_14(false);
  v1->set_f_27(0x20ac);
  Message2::M11::M13::M38* v2 = v1->mutable_f_48();
  v2->set_f_0(0x60);
  v1->set_f_20(0x65);
  v1->set_f_22(0x23);
  v1->set_f_6(0x3f790ee3e81f6625);
  v1->set_f_0(0x21);
  v1->set_f_10(s->substr(0, 238));
  v1->set_f_24(s->substr(0, 295));
  v1->set_f_26(false);
  v1->set_f_17(0x32aa8c6);
  message->set_f_13(0.204612);
  Message2::M3* v3_0 = message->add_f_51();
  v3_0->set_f_0(0x4e9b6c89d79d8a18);
  v3_0->set_f_1(0x7f41d7870f2ee7ae);
  message->add_f_14(Message2::E2_CONST_2);
  message->set_f_26(0x7eb81bfa);
  Message2::M6* v4 = message->mutable_f_57();
  v4->set_f_2(true);
  v4->add_f_0(Message2::M6::E7_CONST_3);
  Message2::M1* v5 = message->mutable_f_46();
  v5->set_f_3(Message2::M1::E6_CONST_3);
  v5->set_f_2(0x1dd7fc0);
  Message2::M1::M20* v6 = v5->mutable_f_7();
  Message2::M1::M20::M32* v7 = v6->mutable_f_4();
  v7->set_f_0(s->substr(0, 5));
  v7->set_f_5(Message2::M1::M20::M32::E33_CONST_1);
  v7->set_f_6(s->substr(0, 101));
  v7->set_f_1(true);
  v7->set_f_2(0x3085efba);
  v7->set_f_4(s->substr(0, 179));
  v7->set_f_3(0x4b15ec743d98e250);
  v6->set_f_0(false);
  message->set_f_8(0x44a7ed74db1514b2);
  Message2::M10* v8_0 = message->add_f_63();
  Message2::M10::M18* v9_0 = v8_0->add_f_3();
  v9_0->set_f_2(s->substr(0, 3));
  v9_0->set_f_0(false);
  Message2::M10::M18::M27* v10 = v9_0->mutable_f_6();
  v10->set_f_0(0x5f3a9e02aca9b1b3);
  Message2::M10::M18::M33* v11_0 = v9_0->add_f_8();
  Message2::M10::M18::M33::M51* v12_0 = v11_0->add_f_6();
  v12_0->set_f_0(0xa98512d);
  v11_0->set_f_0(true);
  Message2::M10::M18::M29* v13_0 = v9_0->add_f_7();
  v13_0->set_f_0(0.853731);
  message->set_f_9(0xee129);
  message->set_f_27(0x5a);
  Message2::M4* v14 = message->mutable_f_53();
  Message2::M4::M15* v15 = v14->mutable_f_5();
  v15->set_f_0(0x5755c648a97c872e);
  v14->set_f_0(0x6d);
  message->set_f_18(0.802755);
  message->set_f_28(false);
  message->set_f_22(0x7166ef9cf26b564a);
  message->set_f_3(0x561ace55621735d1);
  message->set_f_6(0x58bf2fd59049526d);
  message->set_f_1(0x146c677e36a);
  Message2::M8* v16 = message->mutable_f_60();
  v16->set_f_0(0x3b1f91bb976c6ac1);
  Message2::M8::M22* v17_0 = v16->add_f_6();
  v17_0->add_f_9(Message2::M8::M22::E20_CONST_5);
  v17_0->add_f_9(Message2::M8::M22::E20_CONST_2);
  v17_0->set_f_24(0x2fe950f86bb79de3);
  v17_0->set_f_1(s->substr(0, 12));
  v17_0->set_f_18(0x518209e2b40d9bd);
  v17_0->set_f_22(0x6024ce2);
  v17_0->set_f_17(s->substr(0, 8));
  v17_0->set_f_14(s->substr(0, 20));
  v17_0->set_f_25(Message2::M8::M22::E24_CONST_3);
  Message2::M8::M22::E22 array_0[22] = {
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_5,
      Message2::M8::M22::E22_CONST_4, Message2::M8::M22::E22_CONST_5,
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_5,
      Message2::M8::M22::E22_CONST_1, Message2::M8::M22::E22_CONST_4,
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_3,
      Message2::M8::M22::E22_CONST_3, Message2::M8::M22::E22_CONST_5,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_1,
      Message2::M8::M22::E22_CONST_5, Message2::M8::M22::E22_CONST_3,
      Message2::M8::M22::E22_CONST_2, Message2::M8::M22::E22_CONST_5,
      Message2::M8::M22::E22_CONST_4, Message2::M8::M22::E22_CONST_2,
      Message2::M8::M22::E22_CONST_4, Message2::M8::M22::E22_CONST_5,
  };
  for (auto v : array_0) {
    v17_0->add_f_21(v);
  }
  v17_0->set_f_28(0x36c4629d);
  v17_0->set_f_12(0x969f8bbbaf8dcac);
  v17_0->set_f_0(0x3cf97d8f863);
  v17_0->set_f_10(s->substr(0, 1));
  v17_0->set_f_2(0x7cd394f272cf5362);
  v17_0->add_f_27(Message2::M8::M22::E25_CONST_2);
  v17_0->set_f_15(0x5236bd180c96eb16);
  v17_0->add_f_23(Message2::M8::M22::E23_CONST_1);
  Message2::M8::M22::M39* v18 = v17_0->mutable_f_48();
  v18->set_f_1(s->substr(0, 232));
  Message2::M8::M22::M39::M44* v19 = v18->mutable_f_6();
  v19->set_f_1(0x4b4d5f23);
  v19->set_f_0(0x65dbdae1f15614d9);
  v19->set_f_3(0x519b7a2ed0c6562e);
  v18->set_f_0(false);
  v17_0->set_f_19(0x8);
  v17_0->set_f_26(true);
  v17_0->set_f_29(0x823308b);
  Message2::M8::M21* v20_0 = v16->add_f_5();
  v20_0->set_f_0(0x149ac57a5b4a0f1a);
  Message2::M8::M21::M41* v21 = v20_0->mutable_f_7();
  Message2::M8::M21::M41::M47* v22 = v21->mutable_f_6();
  v22->set_f_1(s->substr(0, 503));
  v22->set_f_3(0x39308ce9);
  v22->set_f_0(0x15112f2a6f0958c9);
  v22->set_f_2(0x27);
  v22->set_f_4(s->substr(0, 7));
  Message2::M8::M21::M43* v23 = v20_0->mutable_f_8();
  Message2::M8::M21::M43::E44 array_1[21] = {
      Message2::M8::M21::M43::E44_CONST_2, Message2::M8::M21::M43::E44_CONST_3,
      Message2::M8::M21::M43::E44_CONST_1, Message2::M8::M21::M43::E44_CONST_1,
      Message2::M8::M21::M43::E44_CONST_5, Message2::M8::M21::M43::E44_CONST_2,
      Message2::M8::M21::M43::E44_CONST_5, Message2::M8::M21::M43::E44_CONST_5,
      Message2::M8::M21::M43::E44_CONST_5, Message2::M8::M21::M43::E44_CONST_2,
      Message2::M8::M21::M43::E44_CONST_3, Message2::M8::M21::M43::E44_CONST_1,
      Message2::M8::M21::M43::E44_CONST_5, Message2::M8::M21::M43::E44_CONST_5,
      Message2::M8::M21::M43::E44_CONST_2, Message2::M8::M21::M43::E44_CONST_1,
      Message2::M8::M21::M43::E44_CONST_5, Message2::M8::M21::M43::E44_CONST_5,
      Message2::M8::M21::M43::E44_CONST_2, Message2::M8::M21::M43::E44_CONST_4,
      Message2::M8::M21::M43::E44_CONST_4,
  };
  for (auto v : array_1) {
    v23->add_f_0(v);
  }
  v23->set_f_2(s->substr(0, 135));
  Message2::M8::M21::M43::M45* v24 = v23->mutable_f_22();
  (void)v24;  // Suppresses clang-tidy.
  v23->set_f_1(0x3b1b79b1);
  v23->set_f_5(0x288a5a130bb5274a);
  v23->set_f_4(0x5b14981a572b2882);
  Message2::M8::M21::M43::M52* v25 = v23->mutable_f_23();
  Message2::M8::M21::M43::M52::M53* v26 = v25->mutable_f_6();
  Message2::M8::M21::M43::M52::M53::E45 array_2[21] = {
      Message2::M8::M21::M43::M52::M53::E45_CONST_2,
      Message2::M8::M21::M43::M52::M53::E45_CONST_1,
      Message2::M8::M21::M43::M52::M53::E45_CONST_2,
      Message2::M8::M21::M43::M52::M53::E45_CONST_4,
      Message2::M8::M21::M43::M52::M53::E45_CONST_3,
      Message2::M8::M21::M43::M52::M53::E45_CONST_3,
      Message2::M8::M21::M43::M52::M53::E45_CONST_1,
      Message2::M8::M21::M43::M52::M53::E45_CONST_4,
      Message2::M8::M21::M43::M52::M53::E45_CONST_4,
      Message2::M8::M21::M43::M52::M53::E45_CONST_2,
      Message2::M8::M21::M43::M52::M53::E45_CONST_2,
      Message2::M8::M21::M43::M52::M53::E45_CONST_5,
      Message2::M8::M21::M43::M52::M53::E45_CONST_3,
      Message2::M8::M21::M43::M52::M53::E45_CONST_1,
      Message2::M8::M21::M43::M52::M53::E45_CONST_2,
      Message2::M8::M21::M43::M52::M53::E45_CONST_3,
      Message2::M8::M21::M43::M52::M53::E45_CONST_3,
      Message2::M8::M21::M43::M52::M53::E45_CONST_5,
      Message2::M8::M21::M43::M52::M53::E45_CONST_4,
      Message2::M8::M21::M43::M52::M53::E45_CONST_2,
      Message2::M8::M21::M43::M52::M53::E45_CONST_5,
  };
  for (auto v : array_2) {
    v26->add_f_0(v);
  }
  v25->set_f_1(s->substr(0, 20));
  v25->set_f_2(true);
  Message2::M8::M21::M28* v27 = v20_0->mutable_f_4();
  Message2::M8::M21::M28::E30 array_3[12] = {
      Message2::M8::M21::M28::E30_CONST_1, Message2::M8::M21::M28::E30_CONST_4,
      Message2::M8::M21::M28::E30_CONST_1, Message2::M8::M21::M28::E30_CONST_4,
      Message2::M8::M21::M28::E30_CONST_2, Message2::M8::M21::M28::E30_CONST_3,
      Message2::M8::M21::M28::E30_CONST_2, Message2::M8::M21::M28::E30_CONST_4,
      Message2::M8::M21::M28::E30_CONST_5, Message2::M8::M21::M28::E30_CONST_4,
      Message2::M8::M21::M28::E30_CONST_5, Message2::M8::M21::M28::E30_CONST_2,
  };
  for (auto v : array_3) {
    v27->add_f_0(v);
  }
  Message2::M8::M21::M40* v28 = v20_0->mutable_f_6();
  v28->set_f_0(0x5b1d7042);
  Message2::M8::M17* v29 = v16->mutable_f_4();
  Message2::M8::M17::M26* v30 = v29->mutable_f_6();
  v30->set_f_0(0x4e595daff8);
  v29->set_f_1(0x6b);
  v29->set_f_2(s->substr(0, 29));
  Message2::M8::M17::M35* v31 = v29->mutable_f_8();
  v31->set_f_0(0x3ae0dc0);
  v31->add_f_3(Message2::M8::M17::M35::E38_CONST_2);
  v31->add_f_1(Message2::M8::M17::M35::E36_CONST_3);
  v31->add_f_1(Message2::M8::M17::M35::E36_CONST_2);
  v31->add_f_2(Message2::M8::M17::M35::E37_CONST_4);
  v29->set_f_0(0xbdc09);
  Message2::M12* v32 = message->mutable_f_66();
  v32->set_f_0(0x60b8db367);
  v32->set_f_1(0x18);
  Message2::M12::M19* v33 = v32->mutable_f_9();
  v33->set_f_1(0x2b7d9853826a1fa6);
  v33->set_f_2(0x4488ddd);
  Message2::M12::M19::M30* v34 = v33->mutable_f_6();
  Message2::M12::M19::M30::M50* v35 = v34->mutable_f_2();
  Message2::M12::M19::M30::M50::M54* v36_0 = v35->add_f_5();
  v36_0->set_f_3(0x161561);
  v36_0->set_f_2(0x46);
  v36_0->set_f_1(s->substr(0, 18));
  v36_0->set_f_0(true);
  v36_0->set_f_5(0x418122a);
  v35->set_f_0(s->substr(0, 17));
  v34->set_f_0(0x164b8b0d8);
  v33->set_f_0(false);
  message->set_f_20(0x26a984c7d258be76);
  Message2::M9* v37 = message->mutable_f_61();
  Message2::M9::M14* v38 = v37->mutable_f_5();
  Message2::M9::M14::M25* v39 = v38->mutable_f_6();
  v39->set_f_0(s->substr(0, 21));
  Message2::M9::M14::M25::M49* v40 = v39->mutable_f_4();
  v40->set_f_5(0x2ab3838a76);
  v40->set_f_0(0x49bc917c3f1b484c);
  v40->set_f_6(0xf2df807);
  v40->set_f_1(true);
  v40->set_f_2(true);
  v40->set_f_4(0x3c907faa);
  v40->set_f_3(0x42);
  v38->set_f_1(0x78f0db8b43e32a40);
  v38->set_f_0(Message2::M9::M14::E18_CONST_1);
  Message2::M9::M14::M31* v41_0 = v38->add_f_7();
  v41_0->set_f_2(0x18a2df00a997d978);
  Message2::M9::M14::M23* v42 = v38->mutable_f_5();
  v42->set_f_8(0x4c85a7c);
  v42->set_f_18(0x20c4cdb);
  v42->set_f_1(Message2::M9::M14::M23::E26_CONST_5);
  v42->add_f_17(Message2::M9::M14::M23::E29_CONST_5);
  Message2::M9::M14::M23::E28 array_4[21] = {
      Message2::M9::M14::M23::E28_CONST_2, Message2::M9::M14::M23::E28_CONST_4,
      Message2::M9::M14::M23::E28_CONST_5, Message2::M9::M14::M23::E28_CONST_5,
      Message2::M9::M14::M23::E28_CONST_5, Message2::M9::M14::M23::E28_CONST_4,
      Message2::M9::M14::M23::E28_CONST_2, Message2::M9::M14::M23::E28_CONST_3,
      Message2::M9::M14::M23::E28_CONST_3, Message2::M9::M14::M23::E28_CONST_3,
      Message2::M9::M14::M23::E28_CONST_2, Message2::M9::M14::M23::E28_CONST_4,
      Message2::M9::M14::M23::E28_CONST_2, Message2::M9::M14::M23::E28_CONST_4,
      Message2::M9::M14::M23::E28_CONST_2, Message2::M9::M14::M23::E28_CONST_2,
      Message2::M9::M14::M23::E28_CONST_5, Message2::M9::M14::M23::E28_CONST_5,
      Message2::M9::M14::M23::E28_CONST_1, Message2::M9::M14::M23::E28_CONST_3,
      Message2::M9::M14::M23::E28_CONST_2,
  };
  for (auto v : array_4) {
    v42->add_f_13(v);
  }
  v42->set_f_0(s->substr(0, 315));
  v42->set_f_20(0x7a88871);
  v42->set_f_14(s->substr(0, 3));
  v42->set_f_2(false);
  v42->set_f_3(true);
  v42->set_f_19(0.037196);
  v42->set_f_16(0x7);
  v42->set_f_12(false);
  v42->set_f_15(0x5ff1a48a4b324683);
  v42->set_f_5(false);
  v42->set_f_6(0x297611fec4c);
  v42->set_f_10(0x1f379a4a99822327);
  v37->set_f_1(0x2a81b41bc3bd1912);
  v37->set_f_0(false);
  message->set_f_23(Message2::E4_CONST_1);
  message->set_f_7(s->substr(0, 460));
  message->set_f_2(0x60e39af84);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->add_f_14(Message2::E2_CONST_2);
  Message2::M5* v0 = message->mutable_f_54();
  v0->set_f_0(0x4c);
  message->set_f_8(0x7a39b97920090fb5);
  message->set_f_3(0x1b0ee481a506e0fb);
  message->set_f_24(Message2::E5_CONST_4);
  Message2::M2* v1_0 = message->add_f_48();
  v1_0->set_f_0(0x1c);
  v1_0->set_f_1(false);
  message->set_f_17(s->substr(0, 7));
  message->add_f_11(Message2::E1_CONST_2);
  message->set_f_20(0x41738b5fef7a0b29);
  message->set_f_2(0xb212d7fb88);
  message->set_f_9(0x77);
  message->set_f_19(true);
  Message2::M7* v2 = message->mutable_f_58();
  v2->set_f_1(0.190362);
  v2->set_f_4(Message2::M7::E10_CONST_3);
  v2->set_f_2(0x74);
  Message2::M9* v3 = message->mutable_f_61();
  v3->set_f_1(0x763e3a106fb50123);
  v3->set_f_2(Message2::M9::E11_CONST_4);
  message->set_f_6(0x573abae6071f36b9);
  Message2::M8* v4 = message->mutable_f_60();
  v4->set_f_0(0x428666f135b0f3df);
  Message2::M8::M21* v5_0 = v4->add_f_5();
  Message2::M8::M21::M40* v6 = v5_0->mutable_f_6();
  v6->set_f_0(0x46580ba0);
  Message2::M8::M21::M28* v7 = v5_0->mutable_f_4();
  v7->add_f_0(Message2::M8::M21::M28::E30_CONST_2);
  Message2::M8::M21::M41* v8 = v5_0->mutable_f_7();
  Message2::M8::M21::M41::M47* v9 = v8->mutable_f_6();
  v9->set_f_1(s->substr(0, 452));
  v9->set_f_2(0x4f);
  v9->set_f_4(s->substr(0, 466));
  v9->set_f_3(0x6823927b);
  v9->set_f_0(0x55f8d7c9f976f97);
  v8->set_f_0(s->substr(0, 383));
  v8->set_f_1(Message2::M8::M21::M41::E41_CONST_4);
  message->set_f_22(0x1042f207ab202ef4);
  message->set_f_26(0x1e595490);
  message->set_f_12(0x1f19);
  message->set_f_18(0.303680);
  message->set_f_28(true);
  Message2::M10* v10_0 = message->add_f_63();
  (void)v10_0;  // Suppresses clang-tidy.
  message->set_f_7(s->substr(0, 21));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_20(0x207b5e087af484fa);
  message->set_f_27(0x64);
  message->set_f_5(true);
  message->set_f_21(false);
  message->set_f_28(false);
  Message2::M1* v0 = message->mutable_f_46();
  v0->set_f_1(0x27);
  message->add_f_11(Message2::E1_CONST_3);
  Message2::M8* v1 = message->mutable_f_60();
  v1->set_f_0(0x4f212c9fa4782d7c);
  Message2::M8::M21* v2_0 = v1->add_f_5();
  Message2::M8::M21::M24* v3 = v2_0->mutable_f_2();
  v3->set_f_0(false);
  Message2::M8::M21::M40* v4 = v2_0->mutable_f_6();
  (void)v4;  // Suppresses clang-tidy.
  Message2::M8::M21::M41* v5 = v2_0->mutable_f_7();
  v5->set_f_0(s->substr(0, 16));
  Message2::M8::M17* v6 = v1->mutable_f_4();
  Message2::M8::M17::M35* v7 = v6->mutable_f_8();
  Message2::M8::M17::M35::E38 array_0[11] = {
      Message2::M8::M17::M35::E38_CONST_2, Message2::M8::M17::M35::E38_CONST_3,
      Message2::M8::M17::M35::E38_CONST_2, Message2::M8::M17::M35::E38_CONST_5,
      Message2::M8::M17::M35::E38_CONST_5, Message2::M8::M17::M35::E38_CONST_2,
      Message2::M8::M17::M35::E38_CONST_4, Message2::M8::M17::M35::E38_CONST_3,
      Message2::M8::M17::M35::E38_CONST_2, Message2::M8::M17::M35::E38_CONST_2,
      Message2::M8::M17::M35::E38_CONST_4,
  };
  for (auto v : array_0) {
    v7->add_f_3(v);
  }
  Message2::M8::M17::M35::E36 array_1[8] = {
      Message2::M8::M17::M35::E36_CONST_3, Message2::M8::M17::M35::E36_CONST_1,
      Message2::M8::M17::M35::E36_CONST_3, Message2::M8::M17::M35::E36_CONST_4,
      Message2::M8::M17::M35::E36_CONST_4, Message2::M8::M17::M35::E36_CONST_1,
      Message2::M8::M17::M35::E36_CONST_5, Message2::M8::M17::M35::E36_CONST_2,
  };
  for (auto v : array_1) {
    v7->add_f_1(v);
  }
  v7->set_f_0(0xf87c554);
  v7->add_f_2(Message2::M8::M17::M35::E37_CONST_1);
  v6->set_f_2(s->substr(0, 11));
  Message2::M8::M17::M26* v8 = v6->mutable_f_6();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_8(0x6b696f71dc399d5e);
  message->set_f_16(Message2::E3_CONST_3);
  message->set_f_24(Message2::E5_CONST_5);
  message->set_f_13(0.191119);
  Message2::M12* v9 = message->mutable_f_66();
  v9->set_f_2(0.812197);
  v9->set_f_0(0x11821db8109);
  Message2::M12::M19* v10 = v9->mutable_f_9();
  Message2::M12::M19::M30* v11 = v10->mutable_f_6();
  v11->set_f_0(0x51b4079de);
  Message2::M12::M19::M30::M50* v12 = v11->mutable_f_2();
  v12->set_f_0(s->substr(0, 1));
  Message2::M12::M19::M30::M50::M54* v13_0 = v12->add_f_5();
  v13_0->set_f_0(false);
  v13_0->set_f_5(0x37bbb7a4383);
  v13_0->set_f_2(0x12);
  Message2::M12::M19::M42* v14 = v10->mutable_f_7();
  v14->set_f_1(s->substr(0, 24));
  v14->set_f_0(Message2::M12::M19::M42::E42_CONST_2);
  v14->set_f_2(0x2170d4712d119f42);
  v10->set_f_0(true);
  v10->set_f_2(0x45);
  v9->set_f_1(0xbe7567e);
  Message2::M12::E12 array_2[17] = {
      Message2::M12::E12_CONST_2, Message2::M12::E12_CONST_4,
      Message2::M12::E12_CONST_5, Message2::M12::E12_CONST_2,
      Message2::M12::E12_CONST_1, Message2::M12::E12_CONST_1,
      Message2::M12::E12_CONST_3, Message2::M12::E12_CONST_4,
      Message2::M12::E12_CONST_4, Message2::M12::E12_CONST_2,
      Message2::M12::E12_CONST_1, Message2::M12::E12_CONST_1,
      Message2::M12::E12_CONST_2, Message2::M12::E12_CONST_2,
      Message2::M12::E12_CONST_3, Message2::M12::E12_CONST_5,
      Message2::M12::E12_CONST_3,
  };
  for (auto v : array_2) {
    v9->add_f_3(v);
  }
  message->set_f_6(0x1881d87638df888a);
  message->set_f_2(0x1b01ddbe137);
  message->set_f_0(0x1bbe5e7a69b02a16);
  message->set_f_10(0x300ec77974);
  message->set_f_1(0x6d0fa7802);
  message->set_f_25(0xa1601);
  message->set_f_23(Message2::E4_CONST_3);
  message->set_f_4(s->substr(0, 18));
  message->set_f_7(s->substr(0, 16));
  Message2::M7* v15 = message->mutable_f_58();
  v15->add_f_3(Message2::M7::E9_CONST_1);
  v15->set_f_4(Message2::M7::E10_CONST_4);
  v15->set_f_2(0x3cb445d7d);
  v15->add_f_0(Message2::M7::E8_CONST_1);
  Message2::M5* v16 = message->mutable_f_54();
  v16->set_f_0(0x28);
  Message2::M4* v17 = message->mutable_f_53();
  v17->set_f_0(0x2b30f);
  Message2::M9* v18 = message->mutable_f_61();
  v18->set_f_0(true);
  Message2::M9::M14* v19 = v18->mutable_f_5();
  Message2::M9::M14::M23* v20 = v19->mutable_f_5();
  v20->set_f_14(s->substr(0, 115));
  v20->set_f_4(s->substr(0, 21));
  v20->set_f_6(0x321d66d64);
  v20->set_f_7(0x17e9bc34);
  v20->set_f_20(0x18c520e8);
  v20->set_f_18(0xddf6c);
  v20->set_f_19(0.949953);
  v20->set_f_8(0x85bf5b4);
  v20->set_f_0(s->substr(0, 30));
  v20->set_f_15(0x7c28be530011f6b1);
  v20->set_f_10(0x1a868910610e1f1a);
  Message2::M9::M14::M23::E27 array_3[16] = {
      Message2::M9::M14::M23::E27_CONST_4, Message2::M9::M14::M23::E27_CONST_4,
      Message2::M9::M14::M23::E27_CONST_1, Message2::M9::M14::M23::E27_CONST_1,
      Message2::M9::M14::M23::E27_CONST_2, Message2::M9::M14::M23::E27_CONST_4,
      Message2::M9::M14::M23::E27_CONST_4, Message2::M9::M14::M23::E27_CONST_4,
      Message2::M9::M14::M23::E27_CONST_5, Message2::M9::M14::M23::E27_CONST_1,
      Message2::M9::M14::M23::E27_CONST_5, Message2::M9::M14::M23::E27_CONST_1,
      Message2::M9::M14::M23::E27_CONST_2, Message2::M9::M14::M23::E27_CONST_5,
      Message2::M9::M14::M23::E27_CONST_5, Message2::M9::M14::M23::E27_CONST_1,
  };
  for (auto v : array_3) {
    v20->add_f_11(v);
  }
  v19->set_f_1(0x3c5aaa70bf156351);
  Message2::M9::M14::M25* v21 = v19->mutable_f_6();
  Message2::M9::M14::M25::M49* v22 = v21->mutable_f_4();
  v22->set_f_5(0x198bf2c6923);
  v22->set_f_4(0xa5af0af);
  v22->set_f_6(0xb862f);
  v21->set_f_0(s->substr(0, 1));
  message->set_f_9(0x4f498);
  message->set_f_22(0x4f51f834d71e27d2);
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
