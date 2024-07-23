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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message1.pb.h"

namespace fleetbench::rpc::P1::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_28(s->substr(0, 1));
  message->set_f_3(false);
  message->set_f_25(0xa51d2a3);
  message->set_f_24(0xb72d4f90096d8bca);
  message->set_f_0(0x552320a);
  Message1::M2* v0 = message->mutable_f_43();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_4(0x22c41463de1d5b26);
  message->set_f_17(s->substr(0, 15));
  Message1::M6* v1_0 = message->add_f_47();
  v1_0->set_f_1(s->substr(0, 8));
  v1_0->add_f_0(Message1::M6::E2_CONST_3);
  v1_0->add_f_0(Message1::M6::E2_CONST_1);
  message->set_f_23(0xb19cb8c);
  Message1::M10* v2 = message->mutable_f_54();
  v2->set_f_4(0x5e13d3e2230230ab);
  v2->set_f_5(s->substr(0, 2));
  v2->set_f_1(s->substr(0, 2));
  v2->set_f_0(s->substr(0, 19));
  v2->set_f_3(0x50);
  Message1::M5* v3 = message->mutable_f_46();
  Message1::M5::M11* v4_0 = v3->add_f_8();
  v4_0->set_f_0(0.878799);
  Message1::M5::M11::M24* v5 = v4_0->mutable_f_9();
  v5->set_f_0(0x5eb532277db0f902);
  Message1::M5::M11::M21* v6_0 = v4_0->add_f_7();
  (void)v6_0;  // Suppresses clang-tidy.
  v3->set_f_2(0x3c8a);
  v3->set_f_1(0x2404);
  v3->set_f_0(0.163513);
  message->set_f_29(0x1dfdb0ed01da20b0);
  message->set_f_19(0x57);
  Message1::M1* v7_0 = message->add_f_42();
  Message1::M1::M16* v8 = v7_0->mutable_f_2();
  v8->set_f_17(Message1::M1::M16::E6_CONST_5);
  v8->set_f_28(0x62c4c20b);
  v8->set_f_8(s->substr(0, 14));
  v8->set_f_25(s->substr(0, 1));
  v8->set_f_22(0xe5e565c);
  v8->set_f_3(0x3053fd8);
  v8->set_f_19(0x57f82e7a7477b7ec);
  v8->set_f_12(0.538299);
  v8->set_f_21(0.538333);
  v8->set_f_9(s->substr(0, 74));
  v8->set_f_14(0xfeca1bc);
  v8->set_f_24(s->substr(0, 11));
  v8->set_f_13(0x27317bd);
  Message1::M1::M16::M30* v9_0 = v8->add_f_44();
  v9_0->set_f_14(0x76d3d891);
  v9_0->set_f_25(0x52);
  v9_0->set_f_9(false);
  v9_0->set_f_7(0x9166ad7d771ce39d);
  v9_0->add_f_0(Message1::M1::M16::M30::E9_CONST_1);
  v9_0->set_f_28(0xaa84c93249c51b90);
  v9_0->set_f_24(0x9e9fe830fa412a2);
  v9_0->set_f_4(s->substr(0, 7));
  v9_0->set_f_16(false);
  v9_0->set_f_18(0x7eb804);
  v9_0->set_f_22(0x184bbda5);
  v9_0->set_f_27(0x7869931180f2bbdb);
  v9_0->set_f_10(false);
  v9_0->add_f_12(Message1::M1::M16::M30::E11_CONST_3);
  v9_0->add_f_12(Message1::M1::M16::M30::E11_CONST_4);
  v9_0->add_f_17(Message1::M1::M16::M30::E12_CONST_4);
  v9_0->set_f_13(0x71091f1);
  v9_0->add_f_19(s->substr(0, 3));
  v9_0->set_f_20(0xe79fa);
  v9_0->set_f_2(0x26efa);
  v9_0->set_f_31(0xe);
  v9_0->set_f_5(0xcd61ce5);
  v9_0->set_f_15(0xea0a330);
  v9_0->set_f_23(0x69);
  v9_0->set_f_11(0x386b64faa1019a37);
  v9_0->set_f_30(0x6b);
  v9_0->set_f_6(0xbc1ef5219aea4188);
  v9_0->set_f_26(0x900a9fc99a8a4146);
  v8->set_f_6(0x2dbf530aca658100);
  v8->set_f_29(s->substr(0, 2));
  v8->set_f_18(s->substr(0, 16));
  v8->set_f_2(0x2ba9271aa83fbe02);
  v8->add_f_5(Message1::M1::M16::E4_CONST_4);
  v8->add_f_5(Message1::M1::M16::E4_CONST_5);
  v8->add_f_5(Message1::M1::M16::E4_CONST_1);
  v8->add_f_5(Message1::M1::M16::E4_CONST_5);
  v8->set_f_15(s->substr(0, 60));
  v8->set_f_4(false);
  v8->set_f_27(s->substr(0, 17));
  v8->set_f_26(0x777dd62be86ab6e9);
  v8->set_f_20(0xe7e012f6713d93de);
  v8->set_f_23(0xa9471d45140701dc);
  v8->set_f_1(s->substr(0, 7));
  v8->set_f_10(0x9d9093d);
  Message1::M1::M16::M26* v10 = v8->mutable_f_43();
  v10->set_f_0(true);
  v10->set_f_2(0x34ec34e0aba0b0eb);
  v8->set_f_0(s->substr(0, 35));
  v7_0->set_f_0(0x8264f5876908991a);
  message->set_f_27(0x854925a5657265cc);
  message->set_f_11(0xeb9f1f3);
  message->set_f_6(0xdceec731c5caa80f);
  message->set_f_14(s->substr(0, 11));
  message->set_f_21(0x7b69aa46);
  message->set_f_13(0x459467aa);
  message->set_f_22(0xdc24a422758f147a);
  message->set_f_9(0x95e798b6b768e516);
  message->set_f_18(0xd21ab539108766c5);
  message->add_f_16(Message1::E1_CONST_2);
  message->set_f_7(0xc9bd0379e4707879);
  message->set_f_2(0x5734aca74781c71e);
  message->set_f_8(s->substr(0, 8));
  Message1::M8* v11 = message->mutable_f_49();
  v11->set_f_0(0x4b);
  Message1::M7* v12_0 = message->add_f_48();
  Message1::M7::M14* v13 = v12_0->mutable_f_5();
  Message1::M7::M14::M25* v14 = v13->mutable_f_4();
  v14->set_f_0(0x14b8d59ce49c3500);
  Message1::M7::M14::M28* v15 = v13->mutable_f_5();
  v15->set_f_0(s->substr(0, 7));
  Message1::M7::M14::M29* v16 = v13->mutable_f_7();
  v16->set_f_0(0x23beffb2470c75a1);
  v13->set_f_0(s->substr(0, 6));
  Message1::M7::M14::M18* v17 = v13->mutable_f_2();
  v17->set_f_0(0x64cccebcf0b22d03);
  Message1::M7::M14::M18::M31* v18 = v17->mutable_f_3();
  v18->set_f_0(0x3f);
  Message1::M7::M14::M18::M31::M35* v19_0 = v18->add_f_12();
  (void)v19_0;  // Suppresses clang-tidy.
  Message1::M7::M14::M18::M31::M34* v20_0 = v18->add_f_9();
  (void)v20_0;  // Suppresses clang-tidy.
  v18->set_f_4(0x172397cb);
  v18->set_f_1(0x50c0c8fb);
  v18->set_f_2(false);
  Message1::M7::M14::M18::M31::M36* v21 = v18->mutable_f_13();
  (void)v21;  // Suppresses clang-tidy.
  v18->set_f_3(0xa21c1543e8a2f236);
  message->set_f_12(false);
  Message1::M3* v22 = message->mutable_f_44();
  Message1::M3::M12* v23_0 = v22->add_f_4();
  v23_0->set_f_0(0x6aae81a2);
  v22->set_f_1(false);
  v22->set_f_0(0x939e13e46711b3c3);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_23(0x12c034);
  message->set_f_21(0x17221fcb);
  Message1::M8* v0 = message->mutable_f_49();
  Message1::M8::M13* v1_0 = v0->add_f_4();
  v1_0->set_f_14(true);
  v1_0->set_f_21(0x57ddea8e);
  v1_0->set_f_11(0xf5bf15d81be551ff);
  Message1::M8::M13::M17* v2 = v1_0->mutable_f_50();
  v2->set_f_0(0x37);
  Message1::M8::M13::M17::M32* v3_0 = v2->add_f_2();
  v3_0->set_f_20(0x82d31ee);
  v3_0->set_f_23(0.146284);
  v3_0->set_f_1(0x33);
  v3_0->set_f_14(s->substr(0, 6));
  v3_0->set_f_31(s->substr(0, 16));
  v3_0->set_f_25(s->substr(0, 1));
  v3_0->set_f_24(s->substr(0, 377));
  v3_0->set_f_9(0x2263d6541244431c);
  Message1::M8::M13::M17::M32::E13 array_0[21] = {
      Message1::M8::M13::M17::M32::E13_CONST_3,
      Message1::M8::M13::M17::M32::E13_CONST_1,
      Message1::M8::M13::M17::M32::E13_CONST_3,
      Message1::M8::M13::M17::M32::E13_CONST_2,
      Message1::M8::M13::M17::M32::E13_CONST_2,
      Message1::M8::M13::M17::M32::E13_CONST_1,
      Message1::M8::M13::M17::M32::E13_CONST_5,
      Message1::M8::M13::M17::M32::E13_CONST_3,
      Message1::M8::M13::M17::M32::E13_CONST_2,
      Message1::M8::M13::M17::M32::E13_CONST_5,
      Message1::M8::M13::M17::M32::E13_CONST_5,
      Message1::M8::M13::M17::M32::E13_CONST_4,
      Message1::M8::M13::M17::M32::E13_CONST_1,
      Message1::M8::M13::M17::M32::E13_CONST_1,
      Message1::M8::M13::M17::M32::E13_CONST_1,
      Message1::M8::M13::M17::M32::E13_CONST_4,
      Message1::M8::M13::M17::M32::E13_CONST_3,
      Message1::M8::M13::M17::M32::E13_CONST_2,
      Message1::M8::M13::M17::M32::E13_CONST_3,
      Message1::M8::M13::M17::M32::E13_CONST_5,
      Message1::M8::M13::M17::M32::E13_CONST_1,
  };
  for (auto v : array_0) {
    v3_0->add_f_26(v);
  }
  v3_0->set_f_22(0x5246d1c);
  v3_0->set_f_0(s->substr(0, 116));
  v3_0->set_f_19(0x64ad416b);
  v3_0->set_f_13(false);
  v3_0->set_f_10(0x756f15d7dfaaeec2);
  v3_0->set_f_11(s->substr(0, 1007));
  v3_0->set_f_27(s->substr(0, 94));
  v3_0->set_f_21(0x49392e72e4d0bea);
  v3_0->set_f_8(0x5eaa09d);
  v3_0->set_f_15(0x3fa4e142c4193ec5);
  Message1::M8::M13::M17::M32::M33* v4_0 = v3_0->add_f_44();
  Message1::M8::M13::M17::M32::M33::E14 array_1[20] = {
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_2,
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_4,
      Message1::M8::M13::M17::M32::M33::E14_CONST_1,
      Message1::M8::M13::M17::M32::M33::E14_CONST_4,
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_1,
      Message1::M8::M13::M17::M32::M33::E14_CONST_3,
      Message1::M8::M13::M17::M32::M33::E14_CONST_4,
      Message1::M8::M13::M17::M32::M33::E14_CONST_4,
      Message1::M8::M13::M17::M32::M33::E14_CONST_1,
      Message1::M8::M13::M17::M32::M33::E14_CONST_2,
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_3,
      Message1::M8::M13::M17::M32::M33::E14_CONST_5,
      Message1::M8::M13::M17::M32::M33::E14_CONST_1,
      Message1::M8::M13::M17::M32::M33::E14_CONST_1,
  };
  for (auto v : array_1) {
    v4_0->add_f_3(v);
  }
  v4_0->set_f_1(true);
  v4_0->set_f_2(s->substr(0, 6));
  v3_0->set_f_6(0x463ea862);
  v3_0->set_f_7(0xb642534e5e46cb9b);
  v3_0->set_f_28(true);
  v3_0->set_f_18(0xc468e7dbd4bcc716);
  v3_0->set_f_17(s->substr(0, 4));
  v3_0->set_f_2(0x1c21195372b48adc);
  v3_0->set_f_29(0.871457);
  Message1::M8::M13::M22* v5_0 = v1_0->add_f_53();
  v5_0->set_f_1(0x8f4458612d9e25c1);
  v5_0->set_f_2(0xd75b2f44963e4da8);
  v5_0->set_f_0(false);
  v1_0->set_f_9(0x6b5f5ecc89df113c);
  v1_0->set_f_12(s->substr(0, 3));
  v1_0->set_f_27(0xaaaaee1d9233dfd9);
  v1_0->set_f_13(0x5a5d82b76673e22d);
  v1_0->set_f_3(0x3f1b0568);
  v1_0->set_f_28(0x74319001160eed93);
  v1_0->set_f_26(s->substr(0, 118));
  v1_0->set_f_25(false);
  v1_0->set_f_29(s->substr(0, 11));
  v1_0->set_f_8(0x58);
  v1_0->set_f_20(false);
  v1_0->set_f_22(0x29);
  v1_0->set_f_6(0xef696f57117ba1a3);
  v1_0->set_f_10(s->substr(0, 7));
  v1_0->set_f_30(0x18f413ff);
  v1_0->set_f_23(s->substr(0, 57));
  v1_0->set_f_2(true);
  v1_0->set_f_5(s->substr(0, 1));
  v1_0->set_f_18(0.299544);
  v1_0->set_f_4(0.982871);
  v1_0->set_f_19(0x37f8d43e);
  v1_0->set_f_1(s->substr(0, 59));
  v1_0->set_f_7(0.363899);
  v1_0->set_f_15(0x48);
  message->set_f_20(0x4e);
  Message1::M1* v6_0 = message->add_f_42();
  Message1::M1::M16* v7 = v6_0->mutable_f_2();
  v7->set_f_28(0x4b06752b8);
  v7->set_f_8(s->substr(0, 10));
  v7->set_f_14(0x5b);
  v7->add_f_16(Message1::M1::M16::E5_CONST_1);
  Message1::M1::M16::M23* v8_0 = v7->add_f_42();
  v8_0->set_f_0(0x888001e);
  v7->set_f_21(0.490109);
  v7->set_f_17(Message1::M1::M16::E6_CONST_1);
  v7->set_f_15(s->substr(0, 1));
  Message1::M1::M16::M26* v9 = v7->mutable_f_43();
  v9->set_f_0(false);
  v9->set_f_1(s->substr(0, 6));
  v9->set_f_2(0x6e8725305aca3980);
  v7->set_f_29(s->substr(0, 57));
  v7->set_f_26(0x8c0551345e3c7244);
  v7->set_f_25(s->substr(0, 63));
  v7->set_f_27(s->substr(0, 2));
  v7->set_f_6(0xe7bd2b257bea9310);
  v7->set_f_30(0xca652b1a7e242503);
  v7->set_f_20(0x3790d0f7d39245e4);
  v7->set_f_23(0xfdac76251c9817fc);
  v7->set_f_19(0x283cf8f90a163687);
  v7->set_f_18(s->substr(0, 107));
  v7->set_f_3(0x36f4b2f);
  v7->set_f_2(0xfe7c759b353ec3af);
  v7->set_f_13(0x5fb6632);
  v7->set_f_12(0.361272);
  v7->set_f_7(0x35);
  v7->set_f_22(0x39930b9d);
  v7->set_f_4(false);
  Message1::M1::M16::E4 array_2[21] = {
      Message1::M1::M16::E4_CONST_4, Message1::M1::M16::E4_CONST_3,
      Message1::M1::M16::E4_CONST_5, Message1::M1::M16::E4_CONST_1,
      Message1::M1::M16::E4_CONST_3, Message1::M1::M16::E4_CONST_1,
      Message1::M1::M16::E4_CONST_2, Message1::M1::M16::E4_CONST_1,
      Message1::M1::M16::E4_CONST_4, Message1::M1::M16::E4_CONST_1,
      Message1::M1::M16::E4_CONST_3, Message1::M1::M16::E4_CONST_1,
      Message1::M1::M16::E4_CONST_3, Message1::M1::M16::E4_CONST_1,
      Message1::M1::M16::E4_CONST_2, Message1::M1::M16::E4_CONST_4,
      Message1::M1::M16::E4_CONST_4, Message1::M1::M16::E4_CONST_3,
      Message1::M1::M16::E4_CONST_3, Message1::M1::M16::E4_CONST_3,
      Message1::M1::M16::E4_CONST_1,
  };
  for (auto v : array_2) {
    v7->add_f_5(v);
  }
  Message1::M1::M16::M30* v10_0 = v7->add_f_44();
  v10_0->set_f_23(0x2c);
  v10_0->set_f_27(0x1d1166667fd92e0c);
  v10_0->add_f_12(Message1::M1::M16::M30::E11_CONST_4);
  v10_0->set_f_2(0x7bc06fb);
  v10_0->add_f_17(Message1::M1::M16::M30::E12_CONST_4);
  v10_0->set_f_15(0x63);
  v10_0->set_f_8(0x710d4a289373f38e);
  v10_0->set_f_10(true);
  v10_0->set_f_25(0x91efea1);
  v10_0->add_f_1(Message1::M1::M16::M30::E10_CONST_3);
  v10_0->set_f_3(0x5c62c2a);
  v10_0->set_f_9(false);
  v10_0->set_f_13(0x26bd);
  v10_0->set_f_28(0x826266919256baa2);
  v10_0->set_f_21(s->substr(0, 469));
  v10_0->set_f_18(0x42);
  v10_0->set_f_24(0xbcd06c2034df1fa7);
  v10_0->set_f_7(0x32e725cd361f916d);
  v10_0->set_f_30(0x544b956);
  v10_0->set_f_22(0x1e3083c0);
  v10_0->set_f_5(0x3b);
  v10_0->add_f_0(Message1::M1::M16::M30::E9_CONST_3);
  v10_0->set_f_4(s->substr(0, 4));
  v10_0->set_f_29(0x5909e13);
  v10_0->set_f_14(0x700244db);
  v10_0->set_f_31(0x92ef8);
  v10_0->set_f_26(0xc698b921b12db0fe);
  v10_0->set_f_11(0x35c5ad1afe76edb0);
  v7->set_f_10(0x56a0449d);
  message->set_f_7(0xdab7871d7e4d09f2);
  message->set_f_1(true);
  message->set_f_26(0.297345);
  message->set_f_3(false);
  message->set_f_11(0x31);
  message->set_f_15(s->substr(0, 6));
  message->set_f_17(s->substr(0, 5));
  message->set_f_18(0x85b432a6875edcdc);
  message->set_f_8(s->substr(0, 19));
  Message1::M9* v11_0 = message->add_f_51();
  v11_0->set_f_0(0x3d6990d);
  Message1::M4* v12_0 = message->add_f_45();
  Message1::M4::M15* v13 = v12_0->mutable_f_5();
  v13->set_f_0(s->substr(0, 11));
  v12_0->set_f_0(0.558202);
  v12_0->set_f_1(s->substr(0, 251));
  message->set_f_13(0x216fbcf3);
  message->set_f_24(0xf2ba4acb7f3b6b94);
  message->set_f_27(0x15ab437355a81435);
  message->set_f_6(0xb2de449d1800dedf);
  message->set_f_2(0x3a0f047771dbd5e2);
  message->set_f_25(0x1918e8b);
  message->add_f_16(Message1::E1_CONST_2);
  message->set_f_5(s->substr(0, 19));
  Message1::M3* v14 = message->mutable_f_44();
  v14->set_f_0(0x5c678f212412bf77);
  Message1::M3::M12* v15_0 = v14->add_f_4();
  Message1::M3::M12::M27* v16 = v15_0->mutable_f_3();
  v16->set_f_1(s->substr(0, 24));
  v16->set_f_2(0x93e60252042170e9);
  v16->set_f_0(0xb602dc9822f1b5b1);
  v15_0->set_f_0(0x6f2ac4f5);
  v14->set_f_1(false);
  message->set_f_29(0x3db35326f8b193b0);
  message->set_f_22(0x9a5a3d30e742dbf0);
  Message1::M7* v17_0 = message->add_f_48();
  v17_0->set_f_0(0x211d897b16ae9a2c);
  Message1::M6* v18_0 = message->add_f_47();
  v18_0->set_f_1(s->substr(0, 71));
  v18_0->add_f_0(Message1::M6::E2_CONST_2);
  message->set_f_9(0x35ebe4ac84998a88);
  Message1::M10* v19 = message->mutable_f_54();
  v19->set_f_4(0x7b41d16aae57be3b);
  v19->set_f_0(s->substr(0, 18));
  v19->set_f_5(s->substr(0, 13));
  v19->set_f_2(s->substr(0, 6));
  v19->set_f_3(0x3e74);
  v19->set_f_1(s->substr(0, 5));
  message->set_f_0(0x6720e0c);
  Message1::M2* v20 = message->mutable_f_43();
  v20->set_f_0(0xed31f73d1f749528);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_11(0x3315);
  message->set_f_26(0.026858);
  Message1::M9* v0_0 = message->add_f_51();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_21(0x17dcadb1);
  message->set_f_0(0x2fe15ea);
  message->set_f_17(s->substr(0, 13));
  message->set_f_6(0xe2b4cd7800de5cc9);
  message->set_f_19(0xa2b1a2e);
  message->set_f_4(0x5f88ccaf56568a2);
  message->set_f_15(s->substr(0, 2));
  Message1::M5* v1 = message->mutable_f_46();
  v1->set_f_0(0.206118);
  Message1::M5::M11* v2_0 = v1->add_f_8();
  Message1::M5::M11::M24* v3 = v2_0->mutable_f_9();
  v3->set_f_0(0xcb262515dcba2757);
  v2_0->set_f_2(s->substr(0, 4));
  Message1::M5::M11::E3 array_0[15] = {
      Message1::M5::M11::E3_CONST_3, Message1::M5::M11::E3_CONST_4,
      Message1::M5::M11::E3_CONST_1, Message1::M5::M11::E3_CONST_2,
      Message1::M5::M11::E3_CONST_2, Message1::M5::M11::E3_CONST_5,
      Message1::M5::M11::E3_CONST_4, Message1::M5::M11::E3_CONST_3,
      Message1::M5::M11::E3_CONST_5, Message1::M5::M11::E3_CONST_5,
      Message1::M5::M11::E3_CONST_1, Message1::M5::M11::E3_CONST_4,
      Message1::M5::M11::E3_CONST_5, Message1::M5::M11::E3_CONST_3,
      Message1::M5::M11::E3_CONST_1,
  };
  for (auto v : array_0) {
    v2_0->add_f_1(v);
  }
  Message1::M5::M11::M21* v4_0 = v2_0->add_f_7();
  v4_0->add_f_1(Message1::M5::M11::M21::E8_CONST_2);
  v4_0->add_f_1(Message1::M5::M11::M21::E8_CONST_3);
  v4_0->set_f_0(0.355080);
  v2_0->set_f_0(0.052535);
  v1->set_f_2(0xfc0a5);
  message->set_f_10(0x75a87a5822439eac);
  message->set_f_7(0x9da0cbdb9c65963);
  message->set_f_28(s->substr(0, 326));
  Message1::M10* v5 = message->mutable_f_54();
  v5->set_f_0(s->substr(0, 1));
  v5->set_f_4(0xaf379bc03a35db09);
  v5->set_f_2(s->substr(0, 7));
  v5->set_f_5(s->substr(0, 3));
  v5->set_f_3(0x5435a46);
  message->set_f_12(true);
  message->set_f_5(s->substr(0, 21));
  message->set_f_8(s->substr(0, 17));
  message->set_f_25(0x82133a4);
  message->set_f_9(0xe09b5760a49f4c8d);
  Message1::E1 array_1[21] = {
      Message1::E1_CONST_1, Message1::E1_CONST_3, Message1::E1_CONST_3,
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_5,
      Message1::E1_CONST_3, Message1::E1_CONST_1, Message1::E1_CONST_4,
      Message1::E1_CONST_3, Message1::E1_CONST_5, Message1::E1_CONST_2,
      Message1::E1_CONST_1, Message1::E1_CONST_4, Message1::E1_CONST_4,
      Message1::E1_CONST_4, Message1::E1_CONST_1, Message1::E1_CONST_2,
      Message1::E1_CONST_2, Message1::E1_CONST_3, Message1::E1_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_16(v);
  }
  Message1::M3* v6 = message->mutable_f_44();
  v6->set_f_1(true);
  v6->set_f_0(0x95a0a77df857f776);
  Message1::M3::M12* v7_0 = v6->add_f_4();
  Message1::M3::M12::M27* v8 = v7_0->mutable_f_3();
  v8->set_f_2(0x752f0fa0bfe6f0cc);
  v8->set_f_0(0xfb935e13b98c94c7);
  v8->set_f_1(s->substr(0, 368));
  v7_0->set_f_0(0x4b2f4419);
  Message1::M4* v9_0 = message->add_f_45();
  v9_0->set_f_0(0.573089);
  message->set_f_13(0x4a68d037);
  message->set_f_24(0x800da8abfaba4e70);
  message->set_f_29(0x316d85296861c038);
  Message1::M7* v10_0 = message->add_f_48();
  Message1::M7::M14* v11 = v10_0->mutable_f_5();
  v11->set_f_0(s->substr(0, 1));
  Message1::M7::M14::M29* v12 = v11->mutable_f_7();
  v12->set_f_1(0xcd3d51c32cab30e0);
  Message1::M7::M14::M28* v13 = v11->mutable_f_5();
  v13->set_f_0(s->substr(0, 21));
  Message1::M7::M14::M25* v14 = v11->mutable_f_4();
  v14->set_f_0(0x659e2e1f3368c9c);
  v14->set_f_1(false);
  Message1::M7::M14::M19* v15 = v11->mutable_f_3();
  v15->set_f_0(0.709460);
  v15->add_f_3(Message1::M7::M14::M19::E7_CONST_3);
  v15->set_f_1(s->substr(0, 7));
  v10_0->set_f_0(0x1a7c26271011d365);
  Message1::M2* v16 = message->mutable_f_43();
  v16->set_f_0(0xaeb6618d920f261a);
  Message1::M8* v17 = message->mutable_f_49();
  v17->set_f_0(0x76);
  Message1::M8::M13* v18_0 = v17->add_f_4();
  v18_0->set_f_21(0x2f339087);
  v18_0->set_f_20(true);
  v18_0->set_f_16(0x540da20f8b73e21b);
  v18_0->set_f_25(true);
  v18_0->set_f_14(false);
  v18_0->set_f_12(s->substr(0, 3));
  v18_0->set_f_22(0x43);
  v18_0->set_f_19(0x78ed151a);
  v18_0->set_f_2(false);
  v18_0->set_f_13(0x34c8044872181350);
  v18_0->set_f_29(s->substr(0, 7));
  v18_0->set_f_28(0x64d8cfa652ddb0bf);
  v18_0->set_f_23(s->substr(0, 21));
  v18_0->set_f_26(s->substr(0, 22));
  v18_0->set_f_0(0xb593f8e);
  v18_0->set_f_17(s->substr(0, 14));
  v18_0->set_f_3(0x691564dc);
  v18_0->set_f_8(0xc8712ba);
  v18_0->set_f_30(0x5b9b3452);
  v18_0->set_f_9(0xa3a7107b6071efc7);
  Message1::M8::M13::M20* v19 = v18_0->mutable_f_52();
  v19->set_f_2(0x91b53d6);
  v19->set_f_0(0xdaa88cfe956e083a);
  v19->set_f_1(s->substr(0, 26));
  v18_0->set_f_6(0x550226a8541ac12);
  v18_0->set_f_18(0.129945);
  Message1::M8::M13::M22* v20_0 = v18_0->add_f_53();
  v20_0->set_f_0(false);
  v20_0->set_f_2(0x7098598eb3685c86);
  v20_0->set_f_1(0xf07bbde8005e330a);
  v18_0->set_f_11(0x304830a238cedc5e);
  v18_0->set_f_7(0.105378);
  v18_0->set_f_27(0x717e996a25edbc01);
  v18_0->set_f_1(s->substr(0, 281));
  message->set_f_1(false);
  message->set_f_3(false);
  message->set_f_14(s->substr(0, 16));
  message->set_f_20(0x408511d);
  message->set_f_18(0x19f48f455aaf0286);
  Message1::M6* v21_0 = message->add_f_47();
  v21_0->add_f_0(Message1::M6::E2_CONST_3);
  v21_0->set_f_1(s->substr(0, 37));
  Message1::M1* v22_0 = message->add_f_42();
  v22_0->set_f_0(0x4179a0fbe10d71f3);
  Message1::M1::M16* v23 = v22_0->mutable_f_2();
  v23->set_f_15(s->substr(0, 15));
  v23->set_f_27(s->substr(0, 52));
  v23->set_f_12(0.868991);
  v23->set_f_29(s->substr(0, 104));
  v23->set_f_1(s->substr(0, 16));
  Message1::M1::M16::M26* v24 = v23->mutable_f_43();
  v24->set_f_0(true);
  v24->set_f_2(0xe28d09ad203cc8bc);
  v24->set_f_1(s->substr(0, 1));
  v23->set_f_7(0x396b);
  v23->set_f_0(s->substr(0, 9));
  v23->set_f_19(0xb52b9e2848e5d3dd);
  v23->set_f_30(0x2b4f213bfb065891);
  v23->set_f_4(false);
  Message1::M1::M16::M30* v25_0 = v23->add_f_44();
  v25_0->set_f_10(false);
  v25_0->set_f_20(0x55);
  v25_0->set_f_31(0xd209f23);
  v25_0->set_f_16(false);
  v25_0->set_f_29(0x2c7cf86);
  v25_0->set_f_8(0x8e73f4a7d4837988);
  v25_0->set_f_11(0xf89a7895c148d805);
  v25_0->set_f_4(s->substr(0, 7));
  v25_0->add_f_19(s->substr(0, 6));
  v25_0->set_f_2(0xfdc4d67);
  Message1::M1::M16::M30::E10 array_2[19] = {
      Message1::M1::M16::M30::E10_CONST_5, Message1::M1::M16::M30::E10_CONST_4,
      Message1::M1::M16::M30::E10_CONST_3, Message1::M1::M16::M30::E10_CONST_2,
      Message1::M1::M16::M30::E10_CONST_3, Message1::M1::M16::M30::E10_CONST_5,
      Message1::M1::M16::M30::E10_CONST_4, Message1::M1::M16::M30::E10_CONST_4,
      Message1::M1::M16::M30::E10_CONST_5, Message1::M1::M16::M30::E10_CONST_2,
      Message1::M1::M16::M30::E10_CONST_1, Message1::M1::M16::M30::E10_CONST_1,
      Message1::M1::M16::M30::E10_CONST_4, Message1::M1::M16::M30::E10_CONST_5,
      Message1::M1::M16::M30::E10_CONST_3, Message1::M1::M16::M30::E10_CONST_2,
      Message1::M1::M16::M30::E10_CONST_2, Message1::M1::M16::M30::E10_CONST_2,
      Message1::M1::M16::M30::E10_CONST_4,
  };
  for (auto v : array_2) {
    v25_0->add_f_1(v);
  }
  v25_0->add_f_0(Message1::M1::M16::M30::E9_CONST_5);
  v25_0->add_f_12(Message1::M1::M16::M30::E11_CONST_3);
  v25_0->set_f_23(0xba5e2a5);
  v25_0->set_f_13(0xa1e);
  v25_0->set_f_3(0x594248a);
  v25_0->set_f_5(0xa8e9017);
  v25_0->set_f_27(0xa0bf7a9897b11422);
  v25_0->set_f_18(0x6d);
  v25_0->set_f_24(0x133fe121a76dc175);
  v25_0->set_f_6(0x841788f4335c563b);
  v25_0->set_f_26(0xda738dee38d9ad27);
  v25_0->set_f_25(0x36);
  v25_0->set_f_15(0x1c4520a);
  v25_0->set_f_9(true);
  v25_0->set_f_7(0x901202b3747b1b45);
  v25_0->set_f_21(s->substr(0, 20));
  v25_0->set_f_28(0xbdc6ebde482d173e);
  v25_0->set_f_30(0x36c2);
  v25_0->set_f_14(0x11283663);
  v23->set_f_22(0x22bac86);
  v23->set_f_2(0xaac8303f1d9a8b38);
  v23->set_f_9(s->substr(0, 11));
  v23->set_f_8(s->substr(0, 3));
  v23->set_f_20(0x4da690154aa38313);
  v23->set_f_10(0x4438b998);
  v23->set_f_17(Message1::M1::M16::E6_CONST_1);
  v23->set_f_28(0x12d9c946);
  v23->set_f_13(0x30bf4);
  v23->set_f_24(s->substr(0, 9));
  v23->add_f_5(Message1::M1::M16::E4_CONST_2);
  v23->set_f_25(s->substr(0, 14));
  v23->set_f_23(0xb0377b92fd411738);
  Message1::M1::M16::M23* v26_0 = v23->add_f_42();
  (void)v26_0;  // Suppresses clang-tidy.
  v23->set_f_6(0xabf1e74d85cea832);
  v23->set_f_18(s->substr(0, 12));
  v23->set_f_14(0x2caae78);
  message->set_f_2(0xc5c95cc7596f8785);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_26(0.256407);
  message->set_f_8(s->substr(0, 315));
  Message1::M7* v0_0 = message->add_f_48();
  Message1::M7::M14* v1 = v0_0->mutable_f_5();
  v1->set_f_0(s->substr(0, 2));
  Message1::M7::M14::M18* v2 = v1->mutable_f_2();
  Message1::M7::M14::M18::M31* v3 = v2->mutable_f_3();
  v3->set_f_0(0x29d237c38fb);
  Message1::M7::M14::M18::M31::M34* v4_0 = v3->add_f_9();
  v4_0->set_f_0(s->substr(0, 8));
  Message1::M7::M14::M18::M31::M35* v5_0 = v3->add_f_12();
  v5_0->set_f_0(0x37);
  Message1::M7::M14::M18::M31::M36* v6 = v3->mutable_f_13();
  v6->set_f_0(0x6df5887ece88440d);
  v6->set_f_1(0xac049b690ba0523a);
  v3->set_f_4(0x18df9dd0);
  v2->set_f_0(0xb7cbdd914ef20c41);
  Message1::M7::M14::M25* v7 = v1->mutable_f_4();
  v7->set_f_1(false);
  Message1::M7::M14::M29* v8 = v1->mutable_f_7();
  v8->set_f_0(0x64c6d3b2c090d571);
  v8->set_f_1(0xd5e5636c72580a88);
  Message1::M7::M14::M28* v9 = v1->mutable_f_5();
  v9->set_f_0(s->substr(0, 200));
  Message1::M7::M14::M19* v10 = v1->mutable_f_3();
  v10->set_f_2(s->substr(0, 50));
  v10->set_f_1(s->substr(0, 8));
  v10->set_f_0(0.152539);
  v10->add_f_3(Message1::M7::M14::M19::E7_CONST_3);
  v0_0->set_f_0(0x7aeb9e58e619431e);
  message->set_f_20(0xe1a264);
  message->add_f_16(Message1::E1_CONST_1);
  message->set_f_22(0xdf0a0eb602f6d259);
  message->set_f_24(0xed70c1a34957c4ac);
  message->set_f_14(s->substr(0, 2846));
  message->set_f_15(s->substr(0, 5));
  message->set_f_1(false);
  message->set_f_0(0x60);
  message->set_f_12(false);
  message->set_f_25(0xa0b604f);
  Message1::M5* v11 = message->mutable_f_46();
  v11->set_f_1(0x1a842b5);
  v11->set_f_0(0.483266);
  v11->set_f_2(0x1f33cc);
  message->set_f_10(0x3644d8997efd400c);
  message->set_f_23(0x21);
  message->set_f_27(0x9a9cad8f1773a10e);
  message->set_f_7(0xd2c3ee0b877393f7);
  message->set_f_4(0x47e1ca9f1a6135f4);
  message->set_f_2(0x8fe14fa711a50db3);
  message->set_f_17(s->substr(0, 4));
  message->set_f_9(0xed9450e7d5d49b3e);
  message->set_f_21(0x26b6acfc);
  Message1::M9* v12_0 = message->add_f_51();
  v12_0->set_f_0(0x3262cc1);
  Message1::M1* v13_0 = message->add_f_42();
  v13_0->set_f_0(0xdb7418bac1066060);
  Message1::M1::M16* v14 = v13_0->mutable_f_2();
  v14->set_f_13(0x33);
  v14->set_f_0(s->substr(0, 2));
  v14->set_f_30(0xd796b91897e8afdf);
  v14->add_f_5(Message1::M1::M16::E4_CONST_5);
  v14->set_f_14(0xd441cfc);
  v14->set_f_28(0x3635ea87b);
  v14->set_f_23(0xc230a40236d03b03);
  v14->set_f_6(0xb8decc9cd2cbc0);
  Message1::M1::M16::M23* v15_0 = v14->add_f_42();
  v15_0->set_f_0(0x66c817f);
  v14->set_f_20(0xc08d56cf60dee017);
  v14->add_f_16(Message1::M1::M16::E5_CONST_1);
  v14->set_f_29(s->substr(0, 5));
  v14->set_f_8(s->substr(0, 456));
  v14->set_f_9(s->substr(0, 21));
  v14->set_f_1(s->substr(0, 8));
  v14->set_f_24(s->substr(0, 1));
  v14->set_f_7(0x25db10);
  v14->set_f_22(0xf4e0b7c);
  v14->set_f_18(s->substr(0, 121));
  v14->set_f_3(0x66);
  v14->set_f_26(0xbb0b1dcb33e826e0);
  v14->set_f_4(true);
  v14->set_f_27(s->substr(0, 15));
  v14->set_f_25(s->substr(0, 1));
  v14->set_f_2(0xec2950d4dc16ef1e);
  v14->set_f_21(0.180438);
  v14->set_f_12(0.194425);
  v14->set_f_10(0x262e511b);
  message->set_f_29(0x8881e633bbfbed16);
  message->set_f_11(0x1a9e);
  message->set_f_18(0xfb41532f51ea4ad8);
  Message1::M4* v16_0 = message->add_f_45();
  v16_0->set_f_1(s->substr(0, 20));
  v16_0->set_f_0(0.777866);
  Message1::M4::M15* v17 = v16_0->mutable_f_5();
  v17->set_f_0(s->substr(0, 32));
  Message1::M8* v18 = message->mutable_f_49();
  Message1::M8::M13* v19_0 = v18->add_f_4();
  v19_0->set_f_19(0x48974499);
  v19_0->set_f_10(s->substr(0, 8));
  v19_0->set_f_24(s->substr(0, 14));
  v19_0->set_f_17(s->substr(0, 30));
  v19_0->set_f_20(true);
  v19_0->set_f_2(false);
  v19_0->set_f_0(0xec03baf);
  v19_0->set_f_12(s->substr(0, 3));
  v19_0->set_f_8(0x11);
  v19_0->set_f_1(s->substr(0, 19));
  v19_0->set_f_14(false);
  v19_0->set_f_4(0.399349);
  Message1::M8::M13::M20* v20 = v19_0->mutable_f_52();
  v20->set_f_2(0x1);
  v20->set_f_0(0xcf55dc52a61ca4e4);
  v20->set_f_1(s->substr(0, 6));
  v19_0->set_f_25(true);
  v19_0->set_f_26(s->substr(0, 21));
  v19_0->set_f_23(s->substr(0, 52));
  v19_0->set_f_5(s->substr(0, 17));
  v19_0->set_f_30(0x2a02852e);
  v19_0->set_f_16(0x2a79dff9912dc1ea);
  v19_0->set_f_9(0x3ba7e3573275b1b4);
  v19_0->set_f_27(0xb523fe2a301e0284);
  Message1::M8::M13::M17* v21 = v19_0->mutable_f_50();
  (void)v21;  // Suppresses clang-tidy.
  v19_0->set_f_22(0x71);
  v19_0->set_f_3(0x51437ae);
  v19_0->set_f_15(0x15d20c);
  v19_0->set_f_28(0x7f0388ab6269c26f);
  v19_0->set_f_7(0.970624);
  message->set_f_5(s->substr(0, 27));
  Message1::M3* v22 = message->mutable_f_44();
  v22->set_f_1(true);
  Message1::M3::M12* v23_0 = v22->add_f_4();
  (void)v23_0;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P1::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
