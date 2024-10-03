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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message1.pb.h"

namespace fleetbench::rpc::P7::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->add_f_14(Message1::E4_CONST_3);
  Message1::M1* v0_0 = message->add_f_60();
  v0_0->set_f_0(0x6f8ea8b907330489);
  Message1::M1::M30* v1 = v0_0->mutable_f_13();
  v1->set_f_4(0x459cc43babde91a4);
  v1->set_f_5(s->substr(0, 26));
  v1->add_f_3(Message1::M1::M30::E16_CONST_3);
  Message1::M1::M22* v2_0 = v0_0->add_f_10();
  v2_0->set_f_6(0x3fae6541dff13d6a);
  Message1::M1::M22::M46* v3 = v2_0->mutable_f_16();
  v3->set_f_0(0x54);
  v2_0->set_f_0(0x4da8686);
  Message1::M1::M25* v4 = v0_0->mutable_f_11();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_9(0x64);
  Message1::M8* v5 = message->mutable_f_72();
  v5->add_f_3(Message1::M8::E9_CONST_5);
  v5->set_f_0(s->substr(0, 56));
  Message1::M8::M18* v6 = v5->mutable_f_7();
  v6->set_f_0(0.973592);
  Message1::M8::M18::M43* v7 = v6->mutable_f_4();
  v7->set_f_3(s->substr(0, 4));
  v7->set_f_0(0x7ba171162a7aa2a6);
  v7->set_f_5(0x65);
  v7->set_f_1(0x3546);
  Message1::M8::M24* v8 = v5->mutable_f_8();
  Message1::M8::M24::M51* v9 = v8->mutable_f_14();
  Message1::M8::M24::M51::M56* v10_0 = v9->add_f_5();
  v10_0->set_f_2(0x5a);
  Message1::M8::M24::M51::M56::M64* v11 = v10_0->mutable_f_10();
  v11->set_f_19(0x12a54252);
  v11->set_f_17(0x77);
  v11->set_f_7(true);
  v11->set_f_26(s->substr(0, 617));
  v11->set_f_15(0x267b);
  v11->set_f_4(s->substr(0, 4));
  v11->set_f_14(0.363415);
  v11->set_f_9(0x115cd30046234b27);
  Message1::M8::M24::M51::M56::M64::E26 array_1[14] = {
      Message1::M8::M24::M51::M56::M64::E26_CONST_5,
      Message1::M8::M24::M51::M56::M64::E26_CONST_3,
      Message1::M8::M24::M51::M56::M64::E26_CONST_5,
      Message1::M8::M24::M51::M56::M64::E26_CONST_2,
      Message1::M8::M24::M51::M56::M64::E26_CONST_3,
      Message1::M8::M24::M51::M56::M64::E26_CONST_3,
      Message1::M8::M24::M51::M56::M64::E26_CONST_5,
      Message1::M8::M24::M51::M56::M64::E26_CONST_5,
      Message1::M8::M24::M51::M56::M64::E26_CONST_4,
      Message1::M8::M24::M51::M56::M64::E26_CONST_3,
      Message1::M8::M24::M51::M56::M64::E26_CONST_2,
      Message1::M8::M24::M51::M56::M64::E26_CONST_2,
      Message1::M8::M24::M51::M56::M64::E26_CONST_5,
      Message1::M8::M24::M51::M56::M64::E26_CONST_3,
  };
  for (auto v : array_1) {
    v11->add_f_21(v);
  }
  v11->set_f_24(0x364730ea6cbb452c);
  v11->set_f_6(0x66);
  v11->set_f_20(s->substr(0, 7));
  v11->set_f_29(0x3c2a7a8c);
  v11->set_f_2(0x68);
  v11->set_f_8(0x24);
  v11->set_f_22(s->substr(0, 14));
  v11->set_f_10(0x42c38b43);
  v11->set_f_11(0x20f64e70c14c18b1);
  v8->set_f_1(0x3f6cc21);
  v8->set_f_6(s->substr(0, 58));
  v8->set_f_0(0x6a5c3b103);
  v8->set_f_2(0x6a7eccf27d4e33be);
  v5->set_f_2(s->substr(0, 4));
  message->set_f_7(s->substr(0, 3));
  message->set_f_8(0xe20);
  message->add_f_11(Message1::E2_CONST_2);
  message->set_f_17(0xf842418);
  message->set_f_18(0.030267);
  message->set_f_20(s->substr(0, 31));
  message->set_f_27(s->substr(0, 18));
  message->set_f_4(0x1035bc38a87dd866);
  Message1::M7* v12 = message->mutable_f_71();
  Message1::M7::M23* v13 = v12->mutable_f_6();
  Message1::M7::M23::M41* v14 = v13->mutable_f_9();
  (void)v14;  // Suppresses clang-tidy.
  v13->set_f_0(0x1716f62a06a9e8cb);
  Message1::M4* v15_0 = message->add_f_66();
  v15_0->set_f_2(0x43);
  v15_0->set_f_4(s->substr(0, 16));
  v15_0->set_f_1(0x2c4abd1a53fdaeaf);
  v15_0->set_f_3(0x1e79aa);
  message->set_f_5(0x4e77601b253a2660);
  message->set_f_13(s->substr(0, 5));
  Message1::M3* v16 = message->mutable_f_65();
  Message1::M3::M29* v17 = v16->mutable_f_15();
  Message1::M3::M29::M37* v18 = v17->mutable_f_4();
  Message1::M3::M29::M37::M61* v19 = v18->mutable_f_7();
  Message1::M3::M29::M37::M61::E23 array_2[9] = {
      Message1::M3::M29::M37::M61::E23_CONST_3,
      Message1::M3::M29::M37::M61::E23_CONST_2,
      Message1::M3::M29::M37::M61::E23_CONST_4,
      Message1::M3::M29::M37::M61::E23_CONST_1,
      Message1::M3::M29::M37::M61::E23_CONST_1,
      Message1::M3::M29::M37::M61::E23_CONST_5,
      Message1::M3::M29::M37::M61::E23_CONST_4,
      Message1::M3::M29::M37::M61::E23_CONST_1,
      Message1::M3::M29::M37::M61::E23_CONST_3,
  };
  for (auto v : array_2) {
    v19->add_f_0(v);
  }
  v19->set_f_3(0x336a3);
  v19->set_f_2(0x291e8723);
  v19->set_f_1(Message1::M3::M29::M37::M61::E24_CONST_5);
  v16->set_f_2(0x4cc51e2cdd3a46c);
  Message1::M3::M26* v20 = v16->mutable_f_13();
  v20->set_f_1(0x1d);
  v16->add_f_1(Message1::M3::E8_CONST_5);
  v16->set_f_3(0x76e67d8778dde104);
  message->set_f_23(0x18);
  Message1::M2* v21 = message->mutable_f_61();
  Message1::M2::M28* v22 = v21->mutable_f_25();
  (void)v22;  // Suppresses clang-tidy.
  Message1::M2::M20* v23_0 = v21->add_f_23();
  v23_0->set_f_1(0x3c20259a);
  Message1::M2::M20::E13 array_3[6] = {
      Message1::M2::M20::E13_CONST_3, Message1::M2::M20::E13_CONST_2,
      Message1::M2::M20::E13_CONST_1, Message1::M2::M20::E13_CONST_4,
      Message1::M2::M20::E13_CONST_2, Message1::M2::M20::E13_CONST_2,
  };
  for (auto v : array_3) {
    v23_0->add_f_0(v);
  }
  v23_0->set_f_2(s->substr(0, 20));
  Message1::M2::M20::M34* v24_0 = v23_0->add_f_8();
  v24_0->set_f_2(true);
  v24_0->set_f_3(0x4);
  v24_0->set_f_0(false);
  v24_0->set_f_5(0.632947);
  Message1::M2::M20::M45* v25 = v23_0->mutable_f_9();
  v25->set_f_2(0x1a);
  Message1::M2::M20::M45::M59* v26 = v25->mutable_f_15();
  v26->set_f_2(0x43bcfd1a5c15d4ca);
  v25->set_f_0(s->substr(0, 8));
  v25->set_f_1(s->substr(0, 30));
  v21->set_f_8(false);
  v21->set_f_6(Message1::M2::E6_CONST_3);
  v21->set_f_4(0x4c);
  v21->set_f_5(0x73271c765bd69322);
  Message1::M2::M14* v27_0 = v21->add_f_18();
  v27_0->set_f_0(0x61ee616);
  Message1::M2::M14::M44* v28 = v27_0->mutable_f_4();
  Message1::M2::M14::M44::M58* v29 = v28->mutable_f_2();
  (void)v29;  // Suppresses clang-tidy.
  v21->set_f_1(false);
  Message1::M2::M13* v30 = v21->mutable_f_17();
  Message1::M2::M13::M38* v31_0 = v30->add_f_6();
  v31_0->set_f_0(0x155c8f50);
  Message1::M2::M13::M31* v32 = v30->mutable_f_5();
  v32->set_f_0(s->substr(0, 60));
  v30->set_f_0(false);
  v30->set_f_1(s->substr(0, 29));
  message->set_f_25(0.854800);
  message->set_f_2(s->substr(0, 8));
  message->set_f_10(s->substr(0, 30));
  message->set_f_21(0x12);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_5(0x7b3540f33fae213);
  message->set_f_27(s->substr(0, 19));
  message->set_f_8(0x6d);
  message->set_f_21(0x3b1141d);
  message->set_f_26(0x12dadf);
  message->set_f_15(s->substr(0, 47));
  message->set_f_20(s->substr(0, 8));
  message->add_f_14(Message1::E4_CONST_5);
  message->set_f_9(0x186081);
  message->set_f_4(0x2d9906e25b5e7754);
  message->set_f_10(s->substr(0, 15));
  Message1::M3* v0 = message->mutable_f_65();
  v0->set_f_4(s->substr(0, 17));
  v0->set_f_0(0xc35e93e);
  Message1::M3::M17* v1_0 = v0->add_f_12();
  (void)v1_0;  // Suppresses clang-tidy.
  v0->set_f_3(0x6127bc75ef8c753);
  Message1::M3::M29* v2 = v0->mutable_f_15();
  Message1::M3::M29::M37* v3 = v2->mutable_f_4();
  v3->set_f_0(0xfe52d99b5381326);
  v3->set_f_1(0x4b969a9dbb9fef3b);
  v2->set_f_0(0x75c7f531);
  message->set_f_19(s->substr(0, 23));
  Message1::M1* v4_0 = message->add_f_60();
  Message1::M1::M25* v5 = v4_0->mutable_f_11();
  Message1::M1::M25::M42* v6_0 = v5->add_f_4();
  (void)v6_0;  // Suppresses clang-tidy.
  v5->set_f_0(0x990694ee88e4);
  v4_0->set_f_0(0x6801f46ca4e7a338);
  Message1::M1::M22* v7_0 = v4_0->add_f_10();
  v7_0->set_f_5(0x1bd163);
  v7_0->set_f_3(0x48);
  v7_0->set_f_6(0x5d890b31c484ed37);
  v7_0->set_f_1(0x79);
  v7_0->set_f_4(0x5d);
  Message1::M1::M22::E14 array_0[21] = {
      Message1::M1::M22::E14_CONST_3, Message1::M1::M22::E14_CONST_1,
      Message1::M1::M22::E14_CONST_3, Message1::M1::M22::E14_CONST_3,
      Message1::M1::M22::E14_CONST_2, Message1::M1::M22::E14_CONST_1,
      Message1::M1::M22::E14_CONST_1, Message1::M1::M22::E14_CONST_4,
      Message1::M1::M22::E14_CONST_1, Message1::M1::M22::E14_CONST_2,
      Message1::M1::M22::E14_CONST_3, Message1::M1::M22::E14_CONST_5,
      Message1::M1::M22::E14_CONST_1, Message1::M1::M22::E14_CONST_2,
      Message1::M1::M22::E14_CONST_1, Message1::M1::M22::E14_CONST_2,
      Message1::M1::M22::E14_CONST_1, Message1::M1::M22::E14_CONST_5,
      Message1::M1::M22::E14_CONST_4, Message1::M1::M22::E14_CONST_3,
      Message1::M1::M22::E14_CONST_5,
  };
  for (auto v : array_0) {
    v7_0->add_f_7(v);
  }
  message->set_f_22(0x6ba073a38fc81f01);
  message->set_f_13(s->substr(0, 5));
  Message1::M7* v8 = message->mutable_f_71();
  Message1::M7::M23* v9 = v8->mutable_f_6();
  v9->set_f_1(0x3b0f9fc9);
  v9->set_f_3(s->substr(0, 19));
  v9->set_f_4(s->substr(0, 351));
  v9->set_f_0(0x195f65f0a10f3eca);
  v8->set_f_0(0x2a116a5adea1a10f);
  message->add_f_0(Message1::E1_CONST_4);
  message->set_f_23(0xca86f05);
  message->set_f_2(s->substr(0, 1));
  message->set_f_24(0x5df5e8bc594baead);
  Message1::M5* v10 = message->mutable_f_67();
  v10->set_f_0(0x7313eb53);
  v10->set_f_2(true);
  Message1::M5::M11* v11_0 = v10->add_f_11();
  (void)v11_0;  // Suppresses clang-tidy.
  v10->set_f_3(true);
  Message1::M4* v12_0 = message->add_f_66();
  v12_0->set_f_6(0x777952b7);
  v12_0->set_f_2(0xfe036ce);
  v12_0->set_f_0(s->substr(0, 26));
  v12_0->set_f_3(0x1f);
  v12_0->set_f_4(s->substr(0, 8));
  v12_0->set_f_1(0x21e9a45d3b0e24f7);
  message->set_f_16(0x3e5520f);
  message->set_f_3(s->substr(0, 2));
  message->set_f_7(s->substr(0, 13));
  message->set_f_6(0x1b0a8ade938b3d9b);
  message->set_f_28(Message1::E5_CONST_2);
  Message1::E2 array_1[6] = {
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_2,
      Message1::E2_CONST_4, Message1::E2_CONST_4, Message1::E2_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_11(v);
  }
  Message1::M6* v13 = message->mutable_f_68();
  Message1::M6::M27* v14 = v13->mutable_f_6();
  Message1::M6::M27::M33* v15 = v14->mutable_f_3();
  v15->set_f_1(0x28f2218f8199b7fd);
  v15->set_f_3(0.262165);
  v15->set_f_0(0x281de2f3498ff4c2);
  Message1::M6::M27::M48* v16 = v14->mutable_f_4();
  v16->set_f_0(0x24a4ee38202c94a);
  v16->set_f_3(Message1::M6::M27::M48::E20_CONST_3);
  v16->set_f_2(0x4d);
  v16->set_f_1(0.274751);
  Message1::M6::M27::M48::M54* v17 = v16->mutable_f_8();
  v17->set_f_2(0x4a);
  v17->set_f_0(true);
  v17->set_f_1(s->substr(0, 7));
  Message1::M8* v18 = message->mutable_f_72();
  Message1::M8::M24* v19 = v18->mutable_f_8();
  v19->set_f_2(0x4e3a95d677db9b1e);
  Message1::M8::M24::M51* v20 = v19->mutable_f_14();
  Message1::M8::M24::M51::M56* v21_0 = v20->add_f_5();
  Message1::M8::M24::M51::M56::M64* v22 = v21_0->mutable_f_10();
  v22->set_f_15(0x7a);
  v22->set_f_17(0xc6d34aee7abab2);
  v22->set_f_1(0x5718f956489ae51);
  v22->set_f_7(false);
  v22->set_f_3(s->substr(0, 19));
  v22->set_f_12(0x21);
  v22->set_f_13(0x9ed6a0e9);
  v22->set_f_28(0x32f392b);
  v22->set_f_14(0.343567);
  v22->set_f_22(s->substr(0, 3));
  v22->set_f_20(s->substr(0, 10));
  v22->set_f_31(0x1a47bf);
  v22->set_f_19(0x36d7e58e);
  v22->set_f_0(s->substr(0, 43));
  v22->set_f_11(0x35a9b636335ba19);
  v22->set_f_24(0x1c8a64bebf7cc606);
  v22->set_f_10(0x26ae388e);
  v22->set_f_18(0x1fe387500f137c9c);
  v22->add_f_21(Message1::M8::M24::M51::M56::M64::E26_CONST_3);
  v22->set_f_27(s->substr(0, 23));
  v22->set_f_6(0x66);
  v21_0->set_f_1(0x3fec);
  v21_0->set_f_2(0x10c4e91);
  v20->set_f_0(0x1a266276c28d62f3);
  v19->set_f_5(0x74c209db);
  v19->set_f_3(0x7ca564d8);
  v19->set_f_4(true);
  v19->set_f_0(0x8f7b3c16af5176);
  v19->set_f_1(0x5f);
  v19->set_f_6(s->substr(0, 5));
  v18->set_f_2(s->substr(0, 46));
  v18->add_f_3(Message1::M8::E9_CONST_1);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_24(0x39f9e1009886d66);
  message->set_f_6(0x53032dc0883a8902);
  Message1::M4* v0_0 = message->add_f_66();
  v0_0->set_f_1(0x2a301f589c35107c);
  v0_0->set_f_0(s->substr(0, 6));
  v0_0->set_f_6(0x3bb204c1);
  v0_0->set_f_3(0x30);
  v0_0->set_f_4(s->substr(0, 18));
  v0_0->set_f_5(s->substr(0, 30));
  Message1::M7* v1 = message->mutable_f_71();
  v1->set_f_0(0x1aa80e89069dd6e6);
  Message1::M7::M21* v2_0 = v1->add_f_4();
  Message1::M7::M21::M35* v3 = v2_0->mutable_f_2();
  Message1::M7::M21::M35::M53* v4 = v3->mutable_f_12();
  v4->set_f_1(0xf);
  v4->set_f_2(s->substr(0, 43));
  v4->set_f_0(true);
  v3->set_f_4(0xead3b6a99754441);
  v3->add_f_2(Message1::M7::M21::M35::E17_CONST_2);
  v3->set_f_0(0x3a473b05c961177a);
  v3->set_f_1(s->substr(0, 25));
  v2_0->set_f_0(0x27ff987ae2fd65b2);
  Message1::M7::M21::M52* v5 = v2_0->mutable_f_6();
  v5->set_f_30(s->substr(0, 26));
  v5->set_f_27(s->substr(0, 24));
  v5->set_f_7(0x6a730785a5140891);
  v5->set_f_23(0x72ba7433efd4bdb6);
  v5->set_f_4(s->substr(0, 23));
  v5->set_f_12(0x7c6eb7b);
  v5->set_f_0(0x68653d6d4e05ea7d);
  v5->set_f_17(false);
  v5->set_f_20(0x5dc075b654acb0dc);
  v5->set_f_10(0x1b90);
  v5->set_f_28(s->substr(0, 4));
  v5->set_f_8(s->substr(0, 3));
  v5->set_f_25(0x447e139);
  v5->set_f_5(s->substr(0, 21));
  v5->set_f_29(0x57a6bc4f2e5fb7c);
  v5->set_f_24(0.714317);
  v5->set_f_6(true);
  v5->set_f_9(0xb55375bd148395a);
  v5->set_f_1(true);
  v5->set_f_18(Message1::M7::M21::M52::E21_CONST_5);
  v5->set_f_15(0x72c0de06a55cfc94);
  v5->set_f_26(0x2b461950);
  v5->set_f_22(0x6e7b10d4107a7bbe);
  v5->set_f_13(0x35d9a34c53640444);
  v5->set_f_11(0x57878b80f5759de9);
  v5->set_f_19(false);
  Message1::M7::M23* v6 = v1->mutable_f_6();
  v6->set_f_4(s->substr(0, 19));
  v6->set_f_1(0x38ef4850);
  Message1::M7::M23::M41* v7 = v6->mutable_f_9();
  (void)v7;  // Suppresses clang-tidy.
  v6->set_f_3(s->substr(0, 5));
  v6->set_f_2(0x77aa1e4e6d895abe);
  message->set_f_20(s->substr(0, 29));
  Message1::M8* v8 = message->mutable_f_72();
  v8->set_f_1(0x5f11a0847faf89b3);
  v8->set_f_0(s->substr(0, 2));
  message->set_f_15(s->substr(0, 22));
  message->set_f_28(Message1::E5_CONST_2);
  message->set_f_26(0x71);
  message->set_f_5(0x62fbb532fedace69);
  Message1::E2 array_0[22] = {
      Message1::E2_CONST_2, Message1::E2_CONST_1, Message1::E2_CONST_1,
      Message1::E2_CONST_5, Message1::E2_CONST_1, Message1::E2_CONST_3,
      Message1::E2_CONST_5, Message1::E2_CONST_3, Message1::E2_CONST_2,
      Message1::E2_CONST_5, Message1::E2_CONST_4, Message1::E2_CONST_3,
      Message1::E2_CONST_2, Message1::E2_CONST_4, Message1::E2_CONST_3,
      Message1::E2_CONST_3, Message1::E2_CONST_1, Message1::E2_CONST_3,
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_5,
      Message1::E2_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_11(v);
  }
  message->set_f_25(0.290443);
  Message1::M3* v9 = message->mutable_f_65();
  v9->set_f_4(s->substr(0, 6));
  v9->set_f_5(s->substr(0, 20));
  Message1::M3::M29* v10 = v9->mutable_f_15();
  Message1::M3::M29::M37* v11 = v10->mutable_f_4();
  Message1::M3::M29::M37::M61* v12 = v11->mutable_f_7();
  v12->set_f_2(0x36aa27f4);
  v12->set_f_3(0x25);
  v12->add_f_0(Message1::M3::M29::M37::M61::E23_CONST_4);
  v12->add_f_0(Message1::M3::M29::M37::M61::E23_CONST_2);
  v12->add_f_0(Message1::M3::M29::M37::M61::E23_CONST_4);
  v12->add_f_0(Message1::M3::M29::M37::M61::E23_CONST_3);
  v11->set_f_1(0x2e61a0fc2fd04efb);
  v11->set_f_0(0x5090a5e3d7217337);
  v9->add_f_1(Message1::M3::E8_CONST_5);
  v9->set_f_2(0x4e9beb640bd6a66c);
  v9->set_f_0(0x1f7e5b);
  message->set_f_4(0x227fc0d86835e440);
  message->set_f_21(0xb6d1e85);
  message->set_f_18(0.267348);
  message->set_f_3(s->substr(0, 8));
  message->add_f_14(Message1::E4_CONST_2);
  message->add_f_14(Message1::E4_CONST_5);
  message->set_f_17(0x198a51);
  message->set_f_8(0x67);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M3* v0 = message->mutable_f_65();
  v0->set_f_4(s->substr(0, 32));
  v0->set_f_2(0x17ae3d931b862633);
  v0->set_f_0(0x17);
  v0->set_f_3(0x25c2ac96f44f56c3);
  v0->add_f_1(Message1::M3::E8_CONST_2);
  v0->add_f_1(Message1::M3::E8_CONST_4);
  v0->add_f_1(Message1::M3::E8_CONST_3);
  Message1::M3::M17* v1_0 = v0->add_f_12();
  v1_0->set_f_0(0x6a);
  message->set_f_13(s->substr(0, 7));
  message->set_f_3(s->substr(0, 31));
  message->set_f_24(0x4f7e5db2a98dcab4);
  message->set_f_2(s->substr(0, 20));
  message->set_f_1(0x6208faf5);
  message->set_f_20(s->substr(0, 1));
  message->set_f_9(0xfa1);
  Message1::M6* v2 = message->mutable_f_68();
  v2->set_f_0(0x2fd269efef841f19);
  Message1::M6::M27* v3 = v2->mutable_f_6();
  v3->set_f_0(Message1::M6::M27::E15_CONST_5);
  Message1::M6::M27::M48* v4 = v3->mutable_f_4();
  Message1::M6::M27::M48::M54* v5 = v4->mutable_f_8();
  v5->set_f_2(0x9c6f3d2);
  v5->set_f_0(true);
  v4->set_f_3(Message1::M6::M27::M48::E20_CONST_1);
  v4->set_f_1(0.673810);
  v4->set_f_0(0x503628bd5166961f);
  v4->set_f_2(0x20);
  Message1::M6::M27::M33* v6 = v3->mutable_f_3();
  v6->set_f_1(0x4957ec6bea00ef72);
  v6->set_f_0(0x3da01c35d3a68e75);
  v6->set_f_2(0x3dd6f86eaf6);
  message->set_f_17(0x49);
  message->set_f_15(s->substr(0, 17));
  message->set_f_8(0x55);
  message->set_f_5(0x4410e36b2e5be32c);
  message->add_f_0(Message1::E1_CONST_3);
  message->set_f_12(Message1::E3_CONST_5);
  Message1::M7* v7 = message->mutable_f_71();
  Message1::M7::M23* v8 = v7->mutable_f_6();
  v8->set_f_4(s->substr(0, 28));
  v8->set_f_0(0x4f864871462b8dbc);
  v8->set_f_1(0x7c7f7962);
  Message1::M7::M23::M41* v9 = v8->mutable_f_9();
  v9->set_f_0(s->substr(0, 18));
  v8->set_f_3(s->substr(0, 23));
  Message1::M7::M21* v10_0 = v7->add_f_4();
  Message1::M7::M21::M52* v11 = v10_0->mutable_f_6();
  v11->set_f_29(0x103ec16dce807282);
  v11->set_f_9(0x5324dc3edcf5feeb);
  v11->set_f_6(true);
  v11->set_f_13(0x118d23a893ff6b51);
  v11->set_f_1(false);
  v11->set_f_16(0.619062);
  v11->set_f_19(false);
  v11->set_f_22(0x5c2f7f0a0925e9ef);
  v11->set_f_20(0x318dade5d4df2f1f);
  v11->set_f_28(s->substr(0, 23));
  v11->set_f_3(s->substr(0, 18));
  v11->set_f_8(s->substr(0, 8));
  v11->set_f_7(0x666c1d069c36071c);
  v11->set_f_15(0x6d64524d9824afd7);
  v11->set_f_30(s->substr(0, 1331));
  v11->set_f_11(0x7dbdfe2d86fa622c);
  v11->set_f_2(s->substr(0, 32));
  v10_0->set_f_0(0x1605fdb66abd590c);
  Message1::E4 array_0[5] = {
      Message1::E4_CONST_2, Message1::E4_CONST_5, Message1::E4_CONST_5,
      Message1::E4_CONST_2, Message1::E4_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_14(v);
  }
  message->set_f_28(Message1::E5_CONST_2);
  Message1::M4* v12_0 = message->add_f_66();
  v12_0->set_f_0(s->substr(0, 21));
  v12_0->set_f_3(0x30f72);
  v12_0->set_f_2(0x19);
  v12_0->set_f_5(s->substr(0, 31));
  v12_0->set_f_1(0x6ac841c659df4806);
  Message1::M5* v13 = message->mutable_f_67();
  v13->set_f_3(false);
  Message1::M5::M10* v14_0 = v13->add_f_10();
  v14_0->set_f_0(0x1f2b76bbaaf1a6a6);
  v13->set_f_1(0x762bee45f8ffdb5f);
  v13->set_f_0(0x3c65c805);
  Message1::E2 array_1[21] = {
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_5,
      Message1::E2_CONST_4, Message1::E2_CONST_4, Message1::E2_CONST_5,
      Message1::E2_CONST_4, Message1::E2_CONST_3, Message1::E2_CONST_2,
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_1,
      Message1::E2_CONST_2, Message1::E2_CONST_3, Message1::E2_CONST_4,
      Message1::E2_CONST_4, Message1::E2_CONST_3, Message1::E2_CONST_3,
      Message1::E2_CONST_2, Message1::E2_CONST_4, Message1::E2_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_11(v);
  }
  Message1::M8* v15 = message->mutable_f_72();
  v15->set_f_1(0x73ad099b47eac4bb);
  Message1::M8::E9 array_2[21] = {
      Message1::M8::E9_CONST_2, Message1::M8::E9_CONST_2,
      Message1::M8::E9_CONST_1, Message1::M8::E9_CONST_5,
      Message1::M8::E9_CONST_1, Message1::M8::E9_CONST_3,
      Message1::M8::E9_CONST_2, Message1::M8::E9_CONST_4,
      Message1::M8::E9_CONST_5, Message1::M8::E9_CONST_4,
      Message1::M8::E9_CONST_4, Message1::M8::E9_CONST_4,
      Message1::M8::E9_CONST_3, Message1::M8::E9_CONST_2,
      Message1::M8::E9_CONST_2, Message1::M8::E9_CONST_3,
      Message1::M8::E9_CONST_1, Message1::M8::E9_CONST_1,
      Message1::M8::E9_CONST_2, Message1::M8::E9_CONST_2,
      Message1::M8::E9_CONST_3,
  };
  for (auto v : array_2) {
    v15->add_f_3(v);
  }
  Message1::M8::M24* v16 = v15->mutable_f_8();
  v16->set_f_2(0x1ed3a961655f734f);
  v15->set_f_2(s->substr(0, 9));
  message->set_f_6(0x4ac811adec97bc68);
  message->set_f_16(0x4e);
  message->set_f_22(0x2636b450444c7936);
  message->set_f_18(0.481291);
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
}  // namespace fleetbench::rpc::P7::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
