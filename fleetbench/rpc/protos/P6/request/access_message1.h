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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/request/Message1.pb.h"

namespace fleetbench::rpc::P6::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M5* v0_0 = message->add_f_55();
  v0_0->set_f_0(0x6c);
  Message1::M5::M46* v1_0 = v0_0->add_f_5();
  v1_0->set_f_4(Message1::M5::M46::E33_CONST_5);
  v1_0->set_f_3(s->substr(0, 8));
  v1_0->set_f_1(s->substr(0, 6));
  v1_0->set_f_2(0x46244839979c1806);
  v1_0->set_f_0(0x9a45e54a48ab1f6);
  v0_0->add_f_1(Message1::M5::E7_CONST_5);
  message->set_f_29(0x37);
  message->set_f_8(s->substr(0, 260));
  Message1::M4* v2_0 = message->add_f_53();
  Message1::M4::M40* v3_0 = v2_0->add_f_9();
  v3_0->set_f_0(0x6c);
  Message1::M4::M28* v4 = v2_0->mutable_f_4();
  v4->set_f_0(s->substr(0, 11));
  Message1::M4::M36* v5 = v2_0->mutable_f_7();
  Message1::M4::M36::M53* v6 = v5->mutable_f_10();
  v6->set_f_0(Message1::M4::M36::M53::E38_CONST_4);
  v5->set_f_4(Message1::M4::M36::E31_CONST_1);
  v5->set_f_2(s->substr(0, 1));
  v5->set_f_0(0x3a0d1150);
  v5->set_f_5(0x7b);
  v5->set_f_6(0x7345ab18);
  v5->set_f_3(0.779903);
  Message1::M4::M45* v7 = v2_0->mutable_f_10();
  v7->set_f_0(s->substr(0, 15));
  Message1::M4::M33* v8_0 = v2_0->add_f_6();
  v8_0->set_f_3(s->substr(0, 57));
  v8_0->set_f_4(0xfd4742d763ce2);
  v8_0->set_f_5(0x6004a61b6d8c0a05);
  Message1::E3 array_1[17] = {
      Message1::E3_CONST_4, Message1::E3_CONST_3, Message1::E3_CONST_2,
      Message1::E3_CONST_3, Message1::E3_CONST_4, Message1::E3_CONST_4,
      Message1::E3_CONST_5, Message1::E3_CONST_2, Message1::E3_CONST_5,
      Message1::E3_CONST_2, Message1::E3_CONST_1, Message1::E3_CONST_3,
      Message1::E3_CONST_1, Message1::E3_CONST_1, Message1::E3_CONST_1,
      Message1::E3_CONST_2, Message1::E3_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_20(v);
  }
  message->set_f_13(s->substr(0, 20));
  message->add_f_24(Message1::E4_CONST_2);
  Message1::E5 array_2[6] = {
      Message1::E5_CONST_4, Message1::E5_CONST_4, Message1::E5_CONST_5,
      Message1::E5_CONST_4, Message1::E5_CONST_2, Message1::E5_CONST_5,
  };
  for (auto v : array_2) {
    message->add_f_26(v);
  }
  message->set_f_7(s->substr(0, 4));
  message->set_f_22(true);
  message->set_f_28(s->substr(0, 17));
  message->set_f_19(true);
  message->set_f_15(s->substr(0, 16));
  message->set_f_27(0x704d6b6f94b1751d);
  message->set_f_2(s->substr(0, 2776));
  message->set_f_14(0x62ec54746);
  message->set_f_16(0x47);
  message->set_f_23(false);
  message->add_f_3(Message1::E2_CONST_5);
  message->set_f_11(0x358c98c2);
  Message1::M7* v9 = message->mutable_f_60();
  Message1::M7::M9* v10_0 = v9->add_f_48();
  v10_0->set_f_4(Message1::M7::M9::E16_CONST_3);
  v10_0->set_f_5(false);
  v10_0->set_f_1(0x23);
  v10_0->set_f_2(0.251474);
  v10_0->set_f_3(true);
  v9->set_f_23(s->substr(0, 19));
  v9->set_f_14(s->substr(0, 2));
  v9->set_f_30(Message1::M7::E15_CONST_5);
  Message1::M7::M10* v11 = v9->mutable_f_49();
  (void)v11;  // Suppresses clang-tidy.
  v9->set_f_7(false);
  v9->set_f_21(s->substr(0, 17));
  v9->set_f_31(0x37);
  Message1::M7::M38* v12_0 = v9->add_f_59();
  (void)v12_0;  // Suppresses clang-tidy.
  v9->set_f_1(0.587184);
  v9->set_f_9(Message1::M7::E10_CONST_5);
  Message1::M7::M37* v13 = v9->mutable_f_58();
  v13->set_f_1(0x6fae6efc4639eb3f);
  v9->add_f_16(Message1::M7::E12_CONST_2);
  v9->set_f_11(true);
  v9->set_f_8(0x30);
  v9->set_f_20(0x26164d0deb6e0376);
  v9->set_f_19(0x7335d509feafa5ac);
  Message1::M7::M26* v14_0 = v9->add_f_56();
  Message1::M7::M26::M52* v15 = v14_0->mutable_f_2();
  v15->set_f_1(0x199f02320e7c6bab);
  v9->set_f_29(0xb);
  v9->set_f_5(0x26d04b0a1112d167);
  v9->set_f_24(0x6b01d47e9cfb24c7);
  v9->set_f_26(0x75485bdd47bbd93c);
  v9->set_f_0(Message1::M7::E8_CONST_5);
  v9->set_f_18(0x2a);
  Message1::M7::M25* v16_0 = v9->add_f_53();
  v16_0->set_f_0(false);
  v9->set_f_13(0x4de5794);
  v9->set_f_10(0.451687);
  v9->set_f_27(s->substr(0, 23));
  v9->set_f_2(0x21);
  message->set_f_17(s->substr(0, 7));
  message->set_f_21(0.294469);
  Message1::M3* v17 = message->mutable_f_51();
  Message1::M3::M32* v18 = v17->mutable_f_15();
  v18->set_f_0(0x1fbc8aecb56bb882);
  v18->set_f_3(0x250fb789f32d5f1f);
  v18->set_f_1(0x66);
  v18->set_f_2(0x29);
  v17->set_f_0(Message1::M3::E6_CONST_5);
  Message1::M3::M12* v19_0 = v17->add_f_6();
  v19_0->set_f_2(0x1ecb6b216252be50);
  v19_0->set_f_0(Message1::M3::M12::E18_CONST_1);
  v19_0->set_f_3(0x3f);
  Message1::M3::M22* v20 = v17->mutable_f_12();
  v20->set_f_1(Message1::M3::M22::E26_CONST_1);
  v20->set_f_2(false);
  Message1::M3::M17* v21 = v17->mutable_f_8();
  v21->set_f_0(0xc42f3);
  Message1::M3::M20* v22 = v17->mutable_f_9();
  v22->set_f_0(0x9c352103b1f2c55);
  Message1::M3::M20::M49* v23 = v22->mutable_f_2();
  Message1::M3::M20::M49::E35 array_3[21] = {
      Message1::M3::M20::M49::E35_CONST_2, Message1::M3::M20::M49::E35_CONST_2,
      Message1::M3::M20::M49::E35_CONST_3, Message1::M3::M20::M49::E35_CONST_5,
      Message1::M3::M20::M49::E35_CONST_5, Message1::M3::M20::M49::E35_CONST_1,
      Message1::M3::M20::M49::E35_CONST_5, Message1::M3::M20::M49::E35_CONST_1,
      Message1::M3::M20::M49::E35_CONST_3, Message1::M3::M20::M49::E35_CONST_4,
      Message1::M3::M20::M49::E35_CONST_1, Message1::M3::M20::M49::E35_CONST_3,
      Message1::M3::M20::M49::E35_CONST_3, Message1::M3::M20::M49::E35_CONST_4,
      Message1::M3::M20::M49::E35_CONST_2, Message1::M3::M20::M49::E35_CONST_2,
      Message1::M3::M20::M49::E35_CONST_1, Message1::M3::M20::M49::E35_CONST_1,
      Message1::M3::M20::M49::E35_CONST_3, Message1::M3::M20::M49::E35_CONST_4,
      Message1::M3::M20::M49::E35_CONST_3,
  };
  for (auto v : array_3) {
    v23->add_f_2(v);
  }
  v23->set_f_3(0x7e);
  v23->add_f_0(Message1::M3::M20::M49::E34_CONST_1);
  Message1::M3::M31* v24 = v17->mutable_f_14();
  v24->set_f_0(true);
  Message1::M6* v25 = message->mutable_f_58();
  Message1::M6::M19* v26_0 = v25->add_f_3();
  v26_0->set_f_0(Message1::M6::M19::E23_CONST_4);
  Message1::M6::M13* v27 = v25->mutable_f_2();
  v27->add_f_0(Message1::M6::M13::E20_CONST_5);
  v27->set_f_1(Message1::M6::M13::E21_CONST_4);
  Message1::M6::M24* v28 = v25->mutable_f_4();
  v28->set_f_0(0x368308f8cd79bfb3);
  v25->set_f_0(true);
  message->set_f_4(0x7d354bcecc91288a);
  message->set_f_18(0x6ffbf64c1f16a429);
  message->set_f_0(0x77ac2802606f029d);
  message->set_f_1(Message1::E1_CONST_4);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_2(s->substr(0, 21));
  Message1::M1* v0 = message->mutable_f_49();
  Message1::M1::M41* v1 = v0->mutable_f_8();
  Message1::M1::M41::M55* v2 = v1->mutable_f_3();
  v2->set_f_1(0x1341c02);
  v2->set_f_2(s->substr(0, 29));
  Message1::M1::M41::M55::M56* v3_0 = v2->add_f_5();
  v3_0->set_f_4(0x71650323);
  v3_0->set_f_3(s->substr(0, 18));
  v3_0->add_f_0(Message1::M1::M41::M55::M56::E40_CONST_4);
  v1->set_f_0(true);
  Message1::M1::M27* v4_0 = v0->add_f_3();
  v4_0->set_f_0(s->substr(0, 399));
  Message1::M1::M39* v5 = v0->mutable_f_7();
  v5->set_f_0(false);
  Message1::M1::M34* v6_0 = v0->add_f_4();
  v6_0->set_f_0(0x1c);
  Message1::M1::M44* v7 = v0->mutable_f_10();
  v7->set_f_0(Message1::M1::M44::E32_CONST_4);
  Message1::M1::M44::M47* v8_0 = v7->add_f_2();
  v8_0->set_f_0(0x7a2dc28be524d326);
  v0->set_f_0(0x1e5e1d3);
  Message1::M3* v9 = message->mutable_f_51();
  Message1::M3::M32* v10 = v9->mutable_f_15();
  v10->set_f_3(0xd74b2b9b350896a);
  v10->set_f_1(0x73);
  Message1::M3::M20* v11 = v9->mutable_f_9();
  v11->set_f_0(0x3b4edadf98a20f98);
  Message1::M3::M20::M49* v12 = v11->mutable_f_2();
  v12->set_f_3(0x42);
  v12->add_f_0(Message1::M3::M20::M49::E34_CONST_1);
  v12->set_f_1(0x38983a2233098e40);
  Message1::M3::M12* v13_0 = v9->add_f_6();
  v13_0->set_f_4(0.613747);
  v13_0->set_f_0(Message1::M3::M12::E18_CONST_1);
  v13_0->set_f_2(0x7b71c6f2bbee4ee);
  v13_0->set_f_5(0x59fa3e1480c3b718);
  Message1::M3::M31* v14 = v9->mutable_f_14();
  v14->set_f_1(0x47);
  v14->set_f_0(false);
  Message1::M3::M29* v15_0 = v9->add_f_13();
  v15_0->set_f_0(s->substr(0, 27));
  Message1::M3::M42* v16 = v9->mutable_f_17();
  v16->set_f_0(0x58);
  Message1::M3::M17* v17 = v9->mutable_f_8();
  v17->set_f_0(0x3c);
  message->set_f_22(true);
  message->set_f_13(s->substr(0, 1));
  Message1::M6* v18 = message->mutable_f_58();
  Message1::M6::M19* v19_0 = v18->add_f_3();
  (void)v19_0;  // Suppresses clang-tidy.
  Message1::M6::M13* v20 = v18->mutable_f_2();
  v20->add_f_0(Message1::M6::M13::E20_CONST_5);
  v20->set_f_1(Message1::M6::M13::E21_CONST_2);
  Message1::M6::M43* v21 = v18->mutable_f_6();
  v21->set_f_0(0x2bb21c42b8b9564c);
  v21->set_f_1(0x54);
  v18->set_f_0(true);
  Message1::M6::M24* v22 = v18->mutable_f_4();
  v22->set_f_0(0x4ab2af6b0e8529cb);
  message->set_f_10(s->substr(0, 18));
  message->set_f_4(0x606c7ddb0d6b2946);
  message->set_f_12(0x7a);
  Message1::M7* v23 = message->mutable_f_60();
  Message1::M7::M38* v24_0 = v23->add_f_59();
  v24_0->set_f_0(0x167ab1da);
  v23->set_f_25(s->substr(0, 307));
  v23->set_f_12(s->substr(0, 24));
  v23->set_f_18(0x41);
  v23->set_f_14(s->substr(0, 7));
  v23->set_f_21(s->substr(0, 8));
  v23->set_f_20(0x5037aebe28bf1718);
  Message1::M7::M9* v25_0 = v23->add_f_48();
  v25_0->set_f_2(0.195062);
  v25_0->set_f_4(Message1::M7::M9::E16_CONST_1);
  v25_0->set_f_3(true);
  v25_0->set_f_0(s->substr(0, 10));
  Message1::M7::M11* v26 = v23->mutable_f_51();
  v26->set_f_0(Message1::M7::M11::E17_CONST_2);
  v23->set_f_26(0x33639eb0e354ecca);
  v23->add_f_28(Message1::M7::E14_CONST_4);
  Message1::M7::M25* v27_0 = v23->add_f_53();
  (void)v27_0;  // Suppresses clang-tidy.
  v23->set_f_2(0x48);
  v23->set_f_27(s->substr(0, 3182));
  v23->set_f_11(true);
  v23->set_f_24(0x3ecd3d154f8f04d3);
  v23->add_f_15(Message1::M7::E11_CONST_3);
  v23->set_f_6(0.646772);
  v23->set_f_8(0x3806);
  v23->set_f_1(0.085448);
  v23->set_f_5(0x166e3ffe8efaf90e);
  v23->set_f_19(0x76bcc54e06e49b4f);
  v23->set_f_23(s->substr(0, 4064));
  v23->set_f_30(Message1::M7::E15_CONST_2);
  v23->set_f_29(0x31);
  v23->set_f_3(0x7e);
  Message1::M7::M26* v28_0 = v23->add_f_56();
  v28_0->set_f_0(0.966931);
  Message1::M7::M26::M52* v29 = v28_0->mutable_f_2();
  v29->set_f_0(s->substr(0, 8));
  v29->set_f_1(0x3ae03d69ef7c18f8);
  v23->set_f_7(false);
  Message1::M7::M10* v30 = v23->mutable_f_49();
  v30->set_f_0(false);
  v23->set_f_31(0xc608ada);
  message->set_f_17(s->substr(0, 24));
  Message1::M2* v31 = message->mutable_f_50();
  v31->set_f_0(0x51);
  Message1::M2::M14* v32 = v31->mutable_f_2();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M2::M23* v33_0 = v31->add_f_7();
  v33_0->set_f_0(Message1::M2::M23::E27_CONST_4);
  message->set_f_11(0x75c2358d);
  message->set_f_1(Message1::E1_CONST_3);
  message->add_f_20(Message1::E3_CONST_2);
  Message1::M5* v34_0 = message->add_f_55();
  Message1::M5::M30* v35_0 = v34_0->add_f_3();
  v35_0->add_f_1(Message1::M5::M30::E29_CONST_3);
  v35_0->set_f_2(0x5e);
  v35_0->add_f_0(Message1::M5::M30::E28_CONST_5);
  Message1::M5::E7 array_0[21] = {
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_4,
      Message1::M5::E7_CONST_4, Message1::M5::E7_CONST_5,
      Message1::M5::E7_CONST_4, Message1::M5::E7_CONST_1,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_1,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_3,
      Message1::M5::E7_CONST_3, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_3,
      Message1::M5::E7_CONST_1, Message1::M5::E7_CONST_5,
      Message1::M5::E7_CONST_3, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_1,
  };
  for (auto v : array_0) {
    v34_0->add_f_1(v);
  }
  v34_0->set_f_0(0x3cb08a9);
  message->set_f_15(s->substr(0, 17));
  message->set_f_6(false);
  message->set_f_23(true);
  message->set_f_16(0x1146b4);
  message->set_f_5(0x2c7cfd8);
  Message1::M4* v36_0 = message->add_f_53();
  Message1::M4::M16* v37 = v36_0->mutable_f_2();
  v37->set_f_0(0xe4cacd4);
  Message1::M4::M28* v38 = v36_0->mutable_f_4();
  v38->set_f_0(s->substr(0, 22));
  Message1::M4::M45* v39 = v36_0->mutable_f_10();
  (void)v39;  // Suppresses clang-tidy.
  Message1::M4::M33* v40_0 = v36_0->add_f_6();
  v40_0->set_f_4(0xc6283f06);
  Message1::M4::M33::M54* v41_0 = v40_0->add_f_8();
  v41_0->set_f_3(0x6fd1a6ad);
  Message1::M4::M33::M54::E39 array_1[14] = {
      Message1::M4::M33::M54::E39_CONST_3, Message1::M4::M33::M54::E39_CONST_3,
      Message1::M4::M33::M54::E39_CONST_2, Message1::M4::M33::M54::E39_CONST_4,
      Message1::M4::M33::M54::E39_CONST_3, Message1::M4::M33::M54::E39_CONST_1,
      Message1::M4::M33::M54::E39_CONST_5, Message1::M4::M33::M54::E39_CONST_5,
      Message1::M4::M33::M54::E39_CONST_5, Message1::M4::M33::M54::E39_CONST_3,
      Message1::M4::M33::M54::E39_CONST_1, Message1::M4::M33::M54::E39_CONST_2,
      Message1::M4::M33::M54::E39_CONST_4, Message1::M4::M33::M54::E39_CONST_3,
  };
  for (auto v : array_1) {
    v41_0->add_f_1(v);
  }
  v41_0->set_f_2(s->substr(0, 29));
  v41_0->set_f_4(0x24e4cde51);
  v40_0->set_f_1(Message1::M4::M33::E30_CONST_4);
  v40_0->set_f_3(s->substr(0, 6));
  v40_0->set_f_2(s->substr(0, 5));
  Message1::M4::M36* v42 = v36_0->mutable_f_7();
  v42->set_f_3(0.203113);
  v42->set_f_5(0xd6d86);
  v42->set_f_1(false);
  v42->set_f_4(Message1::M4::M36::E31_CONST_1);
  v42->set_f_0(0x6b811d69);
  message->set_f_0(0x561d5e53bf93ee2e);
  message->set_f_29(0xd0d);
  message->set_f_9(0x141fcb);
  message->set_f_18(0x392410fb16625671);
  message->set_f_14(0x29e33624ead);
  message->set_f_25(0x501def1e9a3d2579);
  message->set_f_19(false);
  message->set_f_7(s->substr(0, 103));
  message->set_f_21(0.639358);
  Message1::E4 array_2[15] = {
      Message1::E4_CONST_3, Message1::E4_CONST_3, Message1::E4_CONST_3,
      Message1::E4_CONST_1, Message1::E4_CONST_4, Message1::E4_CONST_3,
      Message1::E4_CONST_2, Message1::E4_CONST_5, Message1::E4_CONST_4,
      Message1::E4_CONST_4, Message1::E4_CONST_1, Message1::E4_CONST_3,
      Message1::E4_CONST_4, Message1::E4_CONST_1, Message1::E4_CONST_4,
  };
  for (auto v : array_2) {
    message->add_f_24(v);
  }
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_21(0.322710);
  message->add_f_26(Message1::E5_CONST_4);
  message->set_f_8(s->substr(0, 28));
  message->set_f_5(0x64f8d4);
  message->set_f_23(true);
  message->set_f_28(s->substr(0, 8));
  message->set_f_13(s->substr(0, 15));
  Message1::M2* v0 = message->mutable_f_50();
  Message1::M2::M14* v1 = v0->mutable_f_2();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M2::M18* v2 = v0->mutable_f_4();
  v2->set_f_0(false);
  Message1::M2::M23* v3_0 = v0->add_f_7();
  v3_0->set_f_0(Message1::M2::M23::E27_CONST_3);
  Message1::M2::M21* v4_0 = v0->add_f_6();
  v4_0->set_f_4(0xffed33);
  v4_0->set_f_0(Message1::M2::M21::E24_CONST_4);
  Message1::M2::M21::E25 array_0[20] = {
      Message1::M2::M21::E25_CONST_3, Message1::M2::M21::E25_CONST_1,
      Message1::M2::M21::E25_CONST_1, Message1::M2::M21::E25_CONST_5,
      Message1::M2::M21::E25_CONST_1, Message1::M2::M21::E25_CONST_5,
      Message1::M2::M21::E25_CONST_4, Message1::M2::M21::E25_CONST_2,
      Message1::M2::M21::E25_CONST_3, Message1::M2::M21::E25_CONST_2,
      Message1::M2::M21::E25_CONST_3, Message1::M2::M21::E25_CONST_5,
      Message1::M2::M21::E25_CONST_5, Message1::M2::M21::E25_CONST_2,
      Message1::M2::M21::E25_CONST_3, Message1::M2::M21::E25_CONST_5,
      Message1::M2::M21::E25_CONST_3, Message1::M2::M21::E25_CONST_1,
      Message1::M2::M21::E25_CONST_2, Message1::M2::M21::E25_CONST_4,
  };
  for (auto v : array_0) {
    v4_0->add_f_2(v);
  }
  v4_0->set_f_1(0x59f7c30);
  v0->set_f_0(0x14);
  message->set_f_2(s->substr(0, 16));
  message->set_f_11(0x12b18730);
  Message1::M7* v5 = message->mutable_f_60();
  v5->set_f_0(Message1::M7::E8_CONST_5);
  v5->set_f_10(0.148542);
  v5->set_f_21(s->substr(0, 1228));
  v5->set_f_19(0xdf8a9a8748b6107);
  v5->set_f_14(s->substr(0, 22));
  v5->set_f_29(0x4d5ae);
  v5->set_f_1(0.631352);
  v5->set_f_2(0xf6ca540);
  v5->set_f_31(0xb);
  Message1::M7::E9 array_1[22] = {
      Message1::M7::E9_CONST_3, Message1::M7::E9_CONST_2,
      Message1::M7::E9_CONST_2, Message1::M7::E9_CONST_3,
      Message1::M7::E9_CONST_4, Message1::M7::E9_CONST_5,
      Message1::M7::E9_CONST_1, Message1::M7::E9_CONST_5,
      Message1::M7::E9_CONST_5, Message1::M7::E9_CONST_2,
      Message1::M7::E9_CONST_4, Message1::M7::E9_CONST_5,
      Message1::M7::E9_CONST_1, Message1::M7::E9_CONST_5,
      Message1::M7::E9_CONST_4, Message1::M7::E9_CONST_1,
      Message1::M7::E9_CONST_1, Message1::M7::E9_CONST_4,
      Message1::M7::E9_CONST_3, Message1::M7::E9_CONST_4,
      Message1::M7::E9_CONST_5, Message1::M7::E9_CONST_5,
  };
  for (auto v : array_1) {
    v5->add_f_4(v);
  }
  Message1::M7::M25* v6_0 = v5->add_f_53();
  v6_0->set_f_0(true);
  v5->set_f_5(0x11352f7172ec169b);
  Message1::M7::E11 array_2[9] = {
      Message1::M7::E11_CONST_3, Message1::M7::E11_CONST_1,
      Message1::M7::E11_CONST_1, Message1::M7::E11_CONST_5,
      Message1::M7::E11_CONST_4, Message1::M7::E11_CONST_4,
      Message1::M7::E11_CONST_1, Message1::M7::E11_CONST_3,
      Message1::M7::E11_CONST_3,
  };
  for (auto v : array_2) {
    v5->add_f_15(v);
  }
  v5->set_f_23(s->substr(0, 47));
  v5->set_f_26(0x66ac79e7a231133f);
  v5->set_f_27(s->substr(0, 20));
  Message1::M7::M9* v7_0 = v5->add_f_48();
  v7_0->set_f_0(s->substr(0, 18));
  v7_0->set_f_3(true);
  v7_0->set_f_1(0x40);
  v7_0->set_f_4(Message1::M7::M9::E16_CONST_5);
  v7_0->set_f_2(0.851313);
  v5->set_f_20(0x6e97f164a032b1ae);
  v5->set_f_22(Message1::M7::E13_CONST_5);
  v5->set_f_25(s->substr(0, 102));
  Message1::M7::M26* v8_0 = v5->add_f_56();
  Message1::M7::M26::M52* v9 = v8_0->mutable_f_2();
  v9->set_f_1(0x73ee0d0617ec9e07);
  v9->set_f_0(s->substr(0, 11));
  Message1::M7::E12 array_3[21] = {
      Message1::M7::E12_CONST_3, Message1::M7::E12_CONST_4,
      Message1::M7::E12_CONST_3, Message1::M7::E12_CONST_5,
      Message1::M7::E12_CONST_3, Message1::M7::E12_CONST_4,
      Message1::M7::E12_CONST_5, Message1::M7::E12_CONST_4,
      Message1::M7::E12_CONST_4, Message1::M7::E12_CONST_3,
      Message1::M7::E12_CONST_1, Message1::M7::E12_CONST_4,
      Message1::M7::E12_CONST_1, Message1::M7::E12_CONST_3,
      Message1::M7::E12_CONST_5, Message1::M7::E12_CONST_3,
      Message1::M7::E12_CONST_3, Message1::M7::E12_CONST_5,
      Message1::M7::E12_CONST_2, Message1::M7::E12_CONST_2,
      Message1::M7::E12_CONST_3,
  };
  for (auto v : array_3) {
    v5->add_f_16(v);
  }
  v5->set_f_24(0x519e5796d0470ed9);
  v5->set_f_30(Message1::M7::E15_CONST_4);
  v5->set_f_3(0x30);
  message->add_f_3(Message1::E2_CONST_2);
  message->set_f_25(0x871e61deec27c35);
  message->set_f_19(true);
  message->set_f_14(0x5ba8ef600);
  message->set_f_15(s->substr(0, 105));
  message->add_f_20(Message1::E3_CONST_2);
  Message1::M6* v10 = message->mutable_f_58();
  Message1::M6::M24* v11 = v10->mutable_f_4();
  v11->set_f_0(0x39738920c6ceaf39);
  Message1::M6::M13* v12 = v10->mutable_f_2();
  v12->add_f_0(Message1::M6::M13::E20_CONST_4);
  Message1::M6::M19* v13_0 = v10->add_f_3();
  v13_0->set_f_0(Message1::M6::M19::E23_CONST_5);
  Message1::M6::M43* v14 = v10->mutable_f_6();
  v14->set_f_1(0x352007e);
  v10->set_f_0(false);
  message->set_f_9(0x4a);
  message->set_f_0(0x2a8d8389bc4fae32);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_7(s->substr(0, 31));
  Message1::M7* v0 = message->mutable_f_60();
  v0->set_f_7(true);
  v0->set_f_19(0x2165d14831709182);
  Message1::M7::M26* v1_0 = v0->add_f_56();
  Message1::M7::M26::M52* v2 = v1_0->mutable_f_2();
  v2->set_f_2(0x5a);
  v2->set_f_1(0x3485a1d39f9cc6eb);
  v2->set_f_0(s->substr(0, 8));
  Message1::M7::M9* v3_0 = v0->add_f_48();
  v3_0->set_f_2(0.029854);
  v3_0->set_f_0(s->substr(0, 31));
  v3_0->set_f_1(0x2c);
  v3_0->set_f_3(true);
  v3_0->set_f_4(Message1::M7::M9::E16_CONST_3);
  v3_0->set_f_5(false);
  v0->set_f_26(0x720b5b1e5a961316);
  v0->set_f_1(0.034262);
  v0->set_f_29(0x73);
  Message1::M7::M38* v4_0 = v0->add_f_59();
  v4_0->set_f_0(0x1a4c285f);
  v0->set_f_20(0x666a520c5f790fba);
  v0->set_f_11(true);
  v0->set_f_14(s->substr(0, 20));
  v0->add_f_16(Message1::M7::E12_CONST_4);
  Message1::M7::M37* v5 = v0->mutable_f_58();
  v5->set_f_0(s->substr(0, 251));
  v0->add_f_15(Message1::M7::E11_CONST_1);
  v0->add_f_15(Message1::M7::E11_CONST_5);
  v0->add_f_15(Message1::M7::E11_CONST_4);
  v0->set_f_23(s->substr(0, 13));
  v0->set_f_5(0x67cbdb34aed7c497);
  v0->set_f_2(0x13);
  v0->set_f_21(s->substr(0, 1));
  Message1::M7::M25* v6_0 = v0->add_f_53();
  (void)v6_0;  // Suppresses clang-tidy.
  v0->add_f_4(Message1::M7::E9_CONST_3);
  v0->set_f_0(Message1::M7::E8_CONST_1);
  Message1::M7::M10* v7 = v0->mutable_f_49();
  v7->set_f_0(false);
  v0->set_f_27(s->substr(0, 4));
  v0->set_f_25(s->substr(0, 131));
  v0->set_f_22(Message1::M7::E13_CONST_4);
  v0->set_f_8(0x77);
  v0->set_f_10(0.780184);
  v0->add_f_28(Message1::M7::E14_CONST_3);
  v0->set_f_18(0x6f905);
  message->set_f_15(s->substr(0, 4));
  message->add_f_26(Message1::E5_CONST_4);
  message->set_f_17(s->substr(0, 3509));
  Message1::M5* v8_0 = message->add_f_55();
  Message1::M5::M46* v9_0 = v8_0->add_f_5();
  v9_0->set_f_2(0x482beda31040a6eb);
  v9_0->set_f_3(s->substr(0, 7));
  v9_0->set_f_0(0x55f57147d996cfe6);
  v9_0->set_f_1(s->substr(0, 4016));
  v9_0->set_f_4(Message1::M5::M46::E33_CONST_3);
  Message1::M5::M30* v10_0 = v8_0->add_f_3();
  v10_0->add_f_1(Message1::M5::M30::E29_CONST_3);
  v10_0->set_f_2(0x10);
  v10_0->add_f_0(Message1::M5::M30::E28_CONST_2);
  Message1::M5::E7 array_0[21] = {
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_3,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_2, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_3,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_1,
      Message1::M5::E7_CONST_2, Message1::M5::E7_CONST_1,
      Message1::M5::E7_CONST_1, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_5, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_3, Message1::M5::E7_CONST_2,
      Message1::M5::E7_CONST_4, Message1::M5::E7_CONST_1,
      Message1::M5::E7_CONST_5,
  };
  for (auto v : array_0) {
    v8_0->add_f_1(v);
  }
  message->set_f_4(0xf4b4dffcdef92f7);
  message->set_f_14(0x4938c3dca);
  message->set_f_2(s->substr(0, 1));
  message->set_f_22(true);
  message->set_f_18(0x3da698b05a4b9e00);
  message->set_f_11(0x45294d28);
  message->add_f_24(Message1::E4_CONST_3);
  message->add_f_24(Message1::E4_CONST_1);
  message->add_f_24(Message1::E4_CONST_1);
  message->add_f_24(Message1::E4_CONST_1);
  message->set_f_5(0x2d9a4b4);
  Message1::M2* v11 = message->mutable_f_50();
  Message1::M2::M21* v12_0 = v11->add_f_6();
  v12_0->set_f_3(s->substr(0, 1));
  v12_0->set_f_1(0x45);
  v12_0->set_f_0(Message1::M2::M21::E24_CONST_2);
  v12_0->set_f_4(0x2751);
  v11->set_f_0(0xca4b88f);
  Message1::M2::M15* v13 = v11->mutable_f_3();
  v13->set_f_0(0x77044faad15a2868);
  v13->set_f_2(0x6c2c3a97f874bc65);
  v13->set_f_3(0x2e89fb92f21d0fef);
  Message1::M2::M14* v14 = v11->mutable_f_2();
  v14->set_f_0(0x4e);
  Message1::M2::M23* v15_0 = v11->add_f_7();
  v15_0->set_f_0(Message1::M2::M23::E27_CONST_2);
  Message1::M4* v16_0 = message->add_f_53();
  Message1::M4::M16* v17 = v16_0->mutable_f_2();
  (void)v17;  // Suppresses clang-tidy.
  Message1::M4::M45* v18 = v16_0->mutable_f_10();
  v18->set_f_0(s->substr(0, 4));
  Message1::M4::M40* v19_0 = v16_0->add_f_9();
  v19_0->set_f_0(0x3763706);
  Message1::M4::M33* v20_0 = v16_0->add_f_6();
  v20_0->set_f_3(s->substr(0, 17));
  v20_0->set_f_5(0x492dc46090329c8b);
  v20_0->set_f_4(0x1e53a7369af);
  v20_0->set_f_1(Message1::M4::M33::E30_CONST_3);
  v20_0->set_f_2(s->substr(0, 479));
  Message1::M4::M33::M54* v21_0 = v20_0->add_f_8();
  v21_0->set_f_3(0x57d993e5);
  v21_0->set_f_0(0x79);
  v21_0->add_f_1(Message1::M4::M33::M54::E39_CONST_2);
  v21_0->set_f_4(0x2592984389c);
  Message1::M4::M28* v22 = v16_0->mutable_f_4();
  v22->set_f_0(s->substr(0, 350));
  message->set_f_25(0x49e2fc5f30dbfc30);
  message->set_f_6(true);
  message->set_f_1(Message1::E1_CONST_5);
  Message1::M1* v23 = message->mutable_f_49();
  Message1::M1::M27* v24_0 = v23->add_f_3();
  (void)v24_0;  // Suppresses clang-tidy.
  Message1::M1::M41* v25 = v23->mutable_f_8();
  v25->set_f_0(true);
  Message1::M1::M39* v26 = v23->mutable_f_7();
  v26->set_f_0(false);
  Message1::M1::M34* v27_0 = v23->add_f_4();
  v27_0->set_f_0(0x88ee5d0);
  Message1::M1::M44* v28 = v23->mutable_f_10();
  v28->set_f_0(Message1::M1::M44::E32_CONST_1);
  Message1::M1::M35* v29 = v23->mutable_f_5();
  Message1::M1::M35::M51* v30 = v29->mutable_f_5();
  v30->set_f_3(0x1a553f49cf0);
  v30->set_f_0(0x7b);
  v30->set_f_1(true);
  v30->set_f_2(Message1::M1::M35::M51::E37_CONST_3);
  Message1::M1::M35::M51::M60* v31_0 = v30->add_f_7();
  v31_0->set_f_2(0x772080e3);
  v31_0->set_f_1(0x23);
  v31_0->set_f_0(true);
  Message1::M1::M35::M50* v32_0 = v29->add_f_4();
  Message1::M1::M35::M50::M57* v33 = v32_0->mutable_f_7();
  v33->set_f_0(0x1c5790e088bb58c4);
  v33->set_f_3(0x13e37a1b3fff60e4);
  v33->set_f_2(0x6e03d35f53153fdd);
  v33->set_f_1(0x68f8a703);
  v32_0->set_f_2(true);
  v32_0->set_f_4(false);
  v32_0->add_f_3(Message1::M1::M35::M50::E36_CONST_3);
  v32_0->set_f_1(0x37b0a086bb181e7e);
  v32_0->set_f_0(0x15);
  v29->set_f_0(s->substr(0, 16));
  v23->set_f_0(0x1f3f48);
  message->set_f_8(s->substr(0, 17));
  message->set_f_10(s->substr(0, 1));
  Message1::M6* v34 = message->mutable_f_58();
  Message1::M6::M19* v35_0 = v34->add_f_3();
  (void)v35_0;  // Suppresses clang-tidy.
  message->set_f_28(s->substr(0, 2));
  message->add_f_20(Message1::E3_CONST_2);
  message->add_f_20(Message1::E3_CONST_2);
  message->add_f_20(Message1::E3_CONST_5);
  message->set_f_12(0x1cb08d);
  message->set_f_16(0x28);
  message->set_f_23(false);
  message->set_f_0(0x2f8107e430eacbbe);
  Message1::M3* v36 = message->mutable_f_51();
  Message1::M3::M17* v37 = v36->mutable_f_8();
  v37->set_f_0(0x43);
  Message1::M3::M12* v38_0 = v36->add_f_6();
  v38_0->set_f_4(0.667753);
  v38_0->set_f_5(0x52fca21be6ca3ac3);
  v38_0->set_f_2(0x7526fb41aa278c4a);
  v38_0->set_f_3(0xea74e62);
  v38_0->set_f_1(Message1::M3::M12::E19_CONST_5);
  Message1::M3::M31* v39 = v36->mutable_f_14();
  v39->set_f_1(0xc290bb8);
  Message1::M3::M20* v40 = v36->mutable_f_9();
  Message1::M3::M20::M49* v41 = v40->mutable_f_2();
  v41->add_f_0(Message1::M3::M20::M49::E34_CONST_2);
  v41->set_f_1(0x2ada7cb12cbad84d);
  v41->add_f_2(Message1::M3::M20::M49::E35_CONST_5);
  v41->set_f_3(0x7cf);
  v40->set_f_0(0x17169b5aefdccacf);
  Message1::M3::M8* v42 = v36->mutable_f_4();
  v42->set_f_0(0.362617);
  Message1::M3::M29* v43_0 = v36->add_f_13();
  v43_0->set_f_0(s->substr(0, 372));
  Message1::M3::M32* v44 = v36->mutable_f_15();
  v44->set_f_3(0x555b15e71f2d8786);
  v44->set_f_2(0x2c);
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
}  // namespace fleetbench::rpc::P6::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_
