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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message1.pb.h"

namespace fleetbench::rpc::P4::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M15* v0 = message->mutable_f_75();
  Message1::M15::M51* v1 = v0->mutable_f_4();
  v1->set_f_2(s->substr(0, 12));
  v1->set_f_0(s->substr(0, 454));
  Message1::M15::M51::M76* v2 = v1->mutable_f_8();
  (void)v2;  // Suppresses clang-tidy.
  v1->set_f_1(0x64);
  v0->set_f_0(0x5394c04ebd6a7525);
  message->set_f_14(s->substr(0, 202));
  Message1::M8* v3_0 = message->add_f_63();
  Message1::M8::M23* v4 = v3_0->mutable_f_4();
  v4->set_f_0(0x2d2f155);
  Message1::M8::M55* v5 = v3_0->mutable_f_8();
  v5->set_f_0(0x7ff);
  v3_0->set_f_1(Message1::M8::E7_CONST_2);
  v3_0->set_f_0(0.406187);
  Message1::M18* v6_0 = message->add_f_82();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M20* v7 = message->mutable_f_86();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_22(s->substr(0, 3571));
  message->set_f_7(Message1::E1_CONST_1);
  message->set_f_4(s->substr(0, 64));
  Message1::M13* v8 = message->mutable_f_73();
  v8->set_f_3(0x13116a67c8a3fa1b);
  v8->set_f_2(0.857129);
  v8->set_f_1(0x74832b6d73b3c753);
  v8->set_f_0(true);
  message->set_f_32(0x199342b7);
  message->set_f_27(false);
  Message1::M17* v9 = message->mutable_f_78();
  v9->set_f_0(0x53ddbf34de1e5365);
  Message1::M17::M28* v10 = v9->mutable_f_2();
  v10->set_f_0(true);
  Message1::M17::M59* v11 = v9->mutable_f_4();
  v11->set_f_0(0x2547e8c);
  message->set_f_8(s->substr(0, 28));
  Message1::M14* v12_0 = message->add_f_74();
  Message1::M14::M56* v13 = v12_0->mutable_f_6();
  v13->set_f_4(0x7d);
  Message1::M14::M56::M66* v14_0 = v13->add_f_8();
  v14_0->set_f_0(0x79);
  Message1::M14::M56::M79* v15 = v13->mutable_f_9();
  (void)v15;  // Suppresses clang-tidy.
  v13->add_f_0(Message1::M14::M56::E20_CONST_2);
  Message1::M14::M37* v16 = v12_0->mutable_f_5();
  v16->set_f_0(Message1::M14::M37::E15_CONST_3);
  v12_0->set_f_0(0x6f);
  message->set_f_6(0x4f05752a6bf66550);
  Message1::M6* v17_0 = message->add_f_61();
  v17_0->set_f_0(0x36);
  Message1::M6::M31* v18 = v17_0->mutable_f_4();
  v18->set_f_0(0x244da939f18);
  message->set_f_26(s->substr(0, 52));
  message->set_f_29(0x20f94ee4);
  message->set_f_0(0.330143);
  message->add_f_21(Message1::E3_CONST_2);
  Message1::M19* v19 = message->mutable_f_83();
  Message1::M19::M57* v20 = v19->mutable_f_10();
  v20->set_f_1(0x65d03a866efa405e);
  v20->set_f_5(0x4e5b22a2);
  v20->set_f_3(Message1::M19::M57::E22_CONST_1);
  Message1::M19::M33* v21 = v19->mutable_f_5();
  v21->set_f_1(0x72);
  v21->set_f_0(0x7c004a0f58893509);
  v21->set_f_3(s->substr(0, 20));
  v19->set_f_0(s->substr(0, 19));
  Message1::M19::M38* v22 = v19->mutable_f_9();
  Message1::M19::M38::M81* v23_0 = v22->add_f_4();
  v23_0->set_f_2(Message1::M19::M38::M81::E30_CONST_4);
  v23_0->set_f_0(false);
  Message1::M19::M38::M71* v24 = v22->mutable_f_3();
  Message1::M19::M38::M71::M102* v25_0 = v24->add_f_3();
  v25_0->set_f_0(0x16f4dfa6c014537e);
  Message1::M7* v26 = message->mutable_f_62();
  Message1::M7::M35* v27_0 = v26->add_f_5();
  Message1::M7::M35::M69* v28 = v27_0->mutable_f_8();
  v28->set_f_0(s->substr(0, 59));
  v27_0->set_f_3(0x7a793b5e283e6ecb);
  Message1::M7::M35::M73* v29_0 = v27_0->add_f_9();
  v29_0->set_f_0(0x63bf36a6e741fa4e);
  message->set_f_1(0x522269c1d897874b);
  message->set_f_13(0x454b156a9a);
  message->set_f_18(0x7fdd5ae7fd363d7e);
  message->add_f_28(Message1::E6_CONST_3);
  message->add_f_28(Message1::E6_CONST_3);
  message->set_f_25(0x46);
  Message1::E2 array_1[10] = {
      Message1::E2_CONST_1, Message1::E2_CONST_1, Message1::E2_CONST_5,
      Message1::E2_CONST_1, Message1::E2_CONST_5, Message1::E2_CONST_1,
      Message1::E2_CONST_4, Message1::E2_CONST_1, Message1::E2_CONST_2,
      Message1::E2_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_20(v);
  }
  Message1::M3* v30_0 = message->add_f_58();
  v30_0->set_f_0(true);
  Message1::M3::M53* v31_0 = v30_0->add_f_2();
  Message1::M3::M53::M82* v32 = v31_0->mutable_f_3();
  v32->set_f_0(Message1::M3::M53::M82::E31_CONST_3);
  v31_0->set_f_0(0x6eacfe20bb42c93f);
  v31_0->set_f_1(s->substr(0, 5));
  Message1::M5* v33 = message->mutable_f_60();
  Message1::M5::M52* v34 = v33->mutable_f_7();
  v34->set_f_0(0x7bc1df1396f7385d);
  v33->set_f_0(0x2b);
  Message1::M5::M39* v35 = v33->mutable_f_5();
  v35->set_f_0(0x494d0);
  v35->set_f_1(true);
  Message1::M5::M60* v36 = v33->mutable_f_8();
  v36->set_f_0(0x3e6a6928e18de680);
  Message1::M5::M60::M87* v37 = v36->mutable_f_2();
  v37->set_f_0(s->substr(0, 510));
  Message1::M5::M40* v38 = v33->mutable_f_6();
  (void)v38;  // Suppresses clang-tidy.
  Message1::M5::M36* v39 = v33->mutable_f_3();
  Message1::M5::M36::E14 array_2[21] = {
      Message1::M5::M36::E14_CONST_2, Message1::M5::M36::E14_CONST_3,
      Message1::M5::M36::E14_CONST_3, Message1::M5::M36::E14_CONST_3,
      Message1::M5::M36::E14_CONST_4, Message1::M5::M36::E14_CONST_2,
      Message1::M5::M36::E14_CONST_4, Message1::M5::M36::E14_CONST_5,
      Message1::M5::M36::E14_CONST_1, Message1::M5::M36::E14_CONST_2,
      Message1::M5::M36::E14_CONST_1, Message1::M5::M36::E14_CONST_5,
      Message1::M5::M36::E14_CONST_3, Message1::M5::M36::E14_CONST_5,
      Message1::M5::M36::E14_CONST_5, Message1::M5::M36::E14_CONST_3,
      Message1::M5::M36::E14_CONST_4, Message1::M5::M36::E14_CONST_5,
      Message1::M5::M36::E14_CONST_4, Message1::M5::M36::E14_CONST_4,
      Message1::M5::M36::E14_CONST_3,
  };
  for (auto v : array_2) {
    v39->add_f_0(v);
  }
  Message1::M5::M36::M85* v40_0 = v39->add_f_2();
  (void)v40_0;  // Suppresses clang-tidy.
  message->set_f_16(0x34);
  message->set_f_17(true);
  Message1::M9* v41_0 = message->add_f_65();
  Message1::M9::M43* v42 = v41_0->mutable_f_3();
  v42->set_f_0(s->substr(0, 73));
  Message1::M9::M43::M75* v43 = v42->mutable_f_4();
  v43->set_f_0(0x4b0d2adf);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_14(s->substr(0, 112));
  message->set_f_24(Message1::E5_CONST_3);
  message->set_f_17(true);
  Message1::M17* v0 = message->mutable_f_78();
  v0->set_f_0(0x46f390bbc1c64194);
  Message1::M17::M28* v1 = v0->mutable_f_2();
  v1->set_f_0(true);
  Message1::M17::M28::M83* v2 = v1->mutable_f_3();
  v2->set_f_0(0x54fc6e3a4a17d7fd);
  Message1::M17::M59* v3 = v0->mutable_f_4();
  v3->set_f_0(0x1f);
  Message1::M11* v4 = message->mutable_f_70();
  Message1::M11::M41* v5 = v4->mutable_f_2();
  Message1::M11::M41::M84* v6 = v5->mutable_f_13();
  v6->set_f_1(0xd934e3);
  Message1::M11::M41::M84::M110* v7_0 = v6->add_f_7();
  v7_0->set_f_1(s->substr(0, 412));
  v6->set_f_0(0x15378f1263a6aa42);
  v5->set_f_3(0.212681);
  v5->set_f_5(0x1b315caf2a06db41);
  v5->set_f_1(true);
  v5->set_f_0(0.782178);
  Message1::M4* v8 = message->mutable_f_59();
  Message1::M4::M45* v9 = v8->mutable_f_2();
  v9->add_f_1(Message1::M4::M45::E17_CONST_1);
  v8->set_f_0(false);
  Message1::M6* v10_0 = message->add_f_61();
  Message1::M6::M31* v11 = v10_0->mutable_f_4();
  (void)v11;  // Suppresses clang-tidy.
  Message1::M18* v12_0 = message->add_f_82();
  v12_0->set_f_0(0xf2d4d);
  Message1::M18::M46* v13 = v12_0->mutable_f_2();
  v13->set_f_1(0x3b);
  Message1::M16* v14 = message->mutable_f_76();
  Message1::M16::M44* v15 = v14->mutable_f_7();
  v15->set_f_0(0x47f9e60ecb8ad880);
  v14->set_f_0(0x10ab92ed06fe194);
  Message1::M16::M25* v16 = v14->mutable_f_4();
  v16->set_f_0(0x46011a63);
  Message1::M1* v17_0 = message->add_f_54();
  v17_0->set_f_0(0x748a28d8725cfb30);
  message->set_f_30(0x4b96c923);
  Message1::M3* v18_0 = message->add_f_58();
  v18_0->set_f_0(true);
  Message1::M3::M53* v19_0 = v18_0->add_f_2();
  v19_0->set_f_1(s->substr(0, 33));
  v19_0->set_f_0(0x5d7bca1a104e3c0);
  Message1::M3::M53::M82* v20 = v19_0->mutable_f_3();
  v20->set_f_0(Message1::M3::M53::M82::E31_CONST_3);
  message->set_f_12(0x76e26d4);
  message->set_f_16(0x37);
  Message1::M12* v21 = message->mutable_f_72();
  v21->set_f_0(0x3da3fc41f71e005b);
  v21->set_f_2(0x66);
  v21->set_f_3(0x1b80ce0fb5);
  v21->set_f_1(0x14e989aef3c64674);
  v21->add_f_4(Message1::M12::E8_CONST_1);
  Message1::M5* v22 = message->mutable_f_60();
  Message1::M5::M52* v23 = v22->mutable_f_7();
  v23->set_f_0(0x3c1a779fdd9716e9);
  Message1::M5::M60* v24 = v22->mutable_f_8();
  Message1::M5::M60::M87* v25 = v24->mutable_f_2();
  (void)v25;  // Suppresses clang-tidy.
  v22->set_f_0(0x306ef4b);
  Message1::M5::M36* v26 = v22->mutable_f_3();
  v26->add_f_0(Message1::M5::M36::E14_CONST_3);
  Message1::M5::M36::M85* v27_0 = v26->add_f_2();
  v27_0->set_f_0(0x6be5a53b8cf1c0e3);
  Message1::M5::M39* v28 = v22->mutable_f_5();
  v28->set_f_3(0x5a3294b370ca8c24);
  v28->set_f_1(true);
  v28->set_f_4(s->substr(0, 10));
  message->set_f_2(0.492809);
  message->set_f_7(Message1::E1_CONST_2);
  message->set_f_10(false);
  Message1::M14* v29_0 = message->add_f_74();
  v29_0->set_f_0(0xa136375);
  Message1::M14::M37* v30 = v29_0->mutable_f_5();
  Message1::M14::M37::M78* v31 = v30->mutable_f_4();
  v31->set_f_2(0x2bdb91e68b4977d8);
  v31->set_f_11(true);
  v31->set_f_7(s->substr(0, 530));
  v31->set_f_0(s->substr(0, 32));
  v31->set_f_6(0x28b5);
  Message1::M14::M34* v32 = v29_0->mutable_f_4();
  v32->set_f_1(0x4222d09);
  Message1::M14::M34::M91* v33_0 = v32->add_f_6();
  v33_0->add_f_0(s->substr(0, 1));
  v33_0->set_f_4(0x3fd732345a8b12ab);
  v33_0->set_f_5(false);
  v33_0->set_f_2(0x21);
  v33_0->set_f_3(0x3bef1b60272d358f);
  v33_0->set_f_1(0xd04c156);
  v32->set_f_2(0x5d50ef0);
  Message1::M14::M56* v34 = v29_0->mutable_f_6();
  v34->set_f_2(s->substr(0, 63));
  v34->set_f_4(0x1d);
  Message1::M14::M56::M79* v35 = v34->mutable_f_9();
  v35->set_f_0(false);
  Message1::M14::M56::E20 array_0[5] = {
      Message1::M14::M56::E20_CONST_1, Message1::M14::M56::E20_CONST_5,
      Message1::M14::M56::E20_CONST_4, Message1::M14::M56::E20_CONST_1,
      Message1::M14::M56::E20_CONST_2,
  };
  for (auto v : array_0) {
    v34->add_f_0(v);
  }
  message->set_f_1(0x27acb6685bb45c0b);
  message->set_f_13(0x167986719ab5d);
  message->set_f_11(0x75);
  Message1::M2* v36 = message->mutable_f_56();
  Message1::M2::M61* v37_0 = v36->add_f_8();
  v37_0->set_f_3(true);
  v37_0->set_f_6(0xc40dde9);
  v37_0->set_f_7(s->substr(0, 9269));
  Message1::M2::M61::E24 array_1[21] = {
      Message1::M2::M61::E24_CONST_1, Message1::M2::M61::E24_CONST_2,
      Message1::M2::M61::E24_CONST_5, Message1::M2::M61::E24_CONST_1,
      Message1::M2::M61::E24_CONST_4, Message1::M2::M61::E24_CONST_2,
      Message1::M2::M61::E24_CONST_1, Message1::M2::M61::E24_CONST_2,
      Message1::M2::M61::E24_CONST_3, Message1::M2::M61::E24_CONST_4,
      Message1::M2::M61::E24_CONST_1, Message1::M2::M61::E24_CONST_5,
      Message1::M2::M61::E24_CONST_1, Message1::M2::M61::E24_CONST_1,
      Message1::M2::M61::E24_CONST_2, Message1::M2::M61::E24_CONST_4,
      Message1::M2::M61::E24_CONST_2, Message1::M2::M61::E24_CONST_2,
      Message1::M2::M61::E24_CONST_2, Message1::M2::M61::E24_CONST_5,
      Message1::M2::M61::E24_CONST_4,
  };
  for (auto v : array_1) {
    v37_0->add_f_4(v);
  }
  v37_0->set_f_10(true);
  v37_0->add_f_8(Message1::M2::M61::E25_CONST_3);
  v37_0->set_f_2(false);
  v37_0->set_f_5(0x37a4f746);
  v36->set_f_1(s->substr(0, 8));
  v36->set_f_0(0x9a2766f9558e135);
  Message1::E2 array_2[21] = {
      Message1::E2_CONST_4, Message1::E2_CONST_2, Message1::E2_CONST_3,
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_2,
      Message1::E2_CONST_2, Message1::E2_CONST_2, Message1::E2_CONST_2,
      Message1::E2_CONST_1, Message1::E2_CONST_4, Message1::E2_CONST_2,
      Message1::E2_CONST_3, Message1::E2_CONST_4, Message1::E2_CONST_2,
      Message1::E2_CONST_2, Message1::E2_CONST_4, Message1::E2_CONST_1,
      Message1::E2_CONST_3, Message1::E2_CONST_2, Message1::E2_CONST_3,
  };
  for (auto v : array_2) {
    message->add_f_20(v);
  }
  Message1::M10* v38 = message->mutable_f_68();
  v38->set_f_0(0x32af676320fb9749);
  Message1::M10::M47* v39_0 = v38->add_f_4();
  v39_0->set_f_2(0x2);
  v39_0->set_f_5(0x94c0c5d);
  v39_0->set_f_3(s->substr(0, 24));
  v39_0->set_f_4(false);
  v39_0->set_f_0(0x3fc852a07bde3a1c);
  message->set_f_18(0x78fa95e394878d79);
  Message1::M22* v40 = message->mutable_f_90();
  Message1::M22::E10 array_3[21] = {
      Message1::M22::E10_CONST_1, Message1::M22::E10_CONST_3,
      Message1::M22::E10_CONST_4, Message1::M22::E10_CONST_4,
      Message1::M22::E10_CONST_4, Message1::M22::E10_CONST_5,
      Message1::M22::E10_CONST_1, Message1::M22::E10_CONST_1,
      Message1::M22::E10_CONST_2, Message1::M22::E10_CONST_1,
      Message1::M22::E10_CONST_5, Message1::M22::E10_CONST_2,
      Message1::M22::E10_CONST_5, Message1::M22::E10_CONST_5,
      Message1::M22::E10_CONST_4, Message1::M22::E10_CONST_3,
      Message1::M22::E10_CONST_4, Message1::M22::E10_CONST_2,
      Message1::M22::E10_CONST_3, Message1::M22::E10_CONST_3,
      Message1::M22::E10_CONST_2,
  };
  for (auto v : array_3) {
    v40->add_f_0(v);
  }
  v40->set_f_1(Message1::M22::E11_CONST_2);
  Message1::M22::M54* v41 = v40->mutable_f_3();
  v41->set_f_0(0x3ca70d5ad9bed36);
  Message1::M22::M54::M77* v42 = v41->mutable_f_2();
  v42->set_f_1(0x4cb2c0e6590b2c0a);
  message->set_f_27(true);
  message->set_f_5(s->substr(0, 6));
  message->add_f_3(0x51);
  message->set_f_6(0x43ab7ea7e581b85c);
  message->add_f_23(Message1::E4_CONST_1);
  message->set_f_4(s->substr(0, 13));
  Message1::M9* v43_0 = message->add_f_65();
  Message1::M9::M43* v44 = v43_0->mutable_f_3();
  Message1::M9::M43::M75* v45 = v44->mutable_f_4();
  v45->set_f_0(0x7a1db863);
  Message1::M9::M32* v46 = v43_0->mutable_f_2();
  v46->set_f_1(0x17);
  v46->set_f_2(0xd405f547ce);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_2(0.190809);
  Message1::M8* v0_0 = message->add_f_63();
  Message1::M8::M50* v1 = v0_0->mutable_f_6();
  Message1::M8::M50::M64* v2_0 = v1->add_f_4();
  v2_0->set_f_0(0x176442b);
  Message1::M8::M50::M64::M99* v3_0 = v2_0->add_f_4();
  v3_0->set_f_0(0x636fc8ff);
  Message1::M8::M50::M64::M99::M111* v4 = v3_0->mutable_f_7();
  v4->set_f_29(Message1::M8::M50::M64::M99::M111::E45_CONST_3);
  v4->add_f_14(Message1::M8::M50::M64::M99::M111::E43_CONST_1);
  v4->set_f_10(Message1::M8::M50::M64::M99::M111::E42_CONST_4);
  v4->set_f_18(0x95b9ce2);
  v4->set_f_15(false);
  v4->set_f_5(0x7e8dbd8e);
  v4->set_f_20(s->substr(0, 15));
  v4->set_f_7(0xde7a258);
  v4->set_f_9(0x760181cd055fc728);
  v4->set_f_25(0x17);
  v4->set_f_13(false);
  v4->set_f_26(0x80c36);
  v4->set_f_21(0x1c);
  v4->set_f_6(0x19);
  v4->set_f_23(true);
  v4->set_f_28(0x9);
  v4->set_f_1(s->substr(0, 4));
  Message1::M8::M50::M74* v5_0 = v1->add_f_8();
  Message1::M8::M50::M74::M100* v6 = v5_0->mutable_f_5();
  (void)v6;  // Suppresses clang-tidy.
  v5_0->set_f_0(false);
  Message1::M8::M50::M74::M94* v7 = v5_0->mutable_f_3();
  (void)v7;  // Suppresses clang-tidy.
  Message1::M8::M50::M74::M103* v8_0 = v5_0->add_f_7();
  v8_0->set_f_1(Message1::M8::M50::M74::M103::E39_CONST_4);
  Message1::M8::M50::M65* v9 = v1->mutable_f_5();
  v9->set_f_0(Message1::M8::M50::M65::E27_CONST_2);
  Message1::M8::M50::M65::M105* v10 = v9->mutable_f_2();
  v10->set_f_0(0x54eca77d9b49fde5);
  Message1::M8::M23* v11 = v0_0->mutable_f_4();
  v11->set_f_0(0x33);
  v0_0->set_f_0(0.271605);
  v0_0->set_f_1(Message1::M8::E7_CONST_2);
  message->set_f_15(0x5e0e0e170c154e5f);
  Message1::M10* v12 = message->mutable_f_68();
  v12->set_f_0(0x413f5fad9cb8253f);
  Message1::E2 array_0[22] = {
      Message1::E2_CONST_3, Message1::E2_CONST_1, Message1::E2_CONST_1,
      Message1::E2_CONST_5, Message1::E2_CONST_1, Message1::E2_CONST_1,
      Message1::E2_CONST_3, Message1::E2_CONST_2, Message1::E2_CONST_4,
      Message1::E2_CONST_1, Message1::E2_CONST_3, Message1::E2_CONST_4,
      Message1::E2_CONST_1, Message1::E2_CONST_3, Message1::E2_CONST_1,
      Message1::E2_CONST_2, Message1::E2_CONST_2, Message1::E2_CONST_5,
      Message1::E2_CONST_1, Message1::E2_CONST_2, Message1::E2_CONST_2,
      Message1::E2_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_20(v);
  }
  message->set_f_14(s->substr(0, 19));
  message->set_f_10(true);
  message->set_f_0(0.339667);
  Message1::M12* v13 = message->mutable_f_72();
  v13->set_f_5(0x197197ebd2d63f85);
  Message1::M12::M30* v14_0 = v13->add_f_13();
  v14_0->set_f_1(0x738c908d8906a190);
  v14_0->set_f_0(0x156a412);
  v13->set_f_3(0x28);
  v13->set_f_0(0x500d1ee932663a9b);
  v13->add_f_4(Message1::M12::E8_CONST_1);
  Message1::M2* v15 = message->mutable_f_56();
  (void)v15;  // Suppresses clang-tidy.
  Message1::M4* v16 = message->mutable_f_59();
  Message1::M4::M45* v17 = v16->mutable_f_2();
  v17->set_f_0(s->substr(0, 27));
  v17->add_f_1(Message1::M4::M45::E17_CONST_5);
  v16->set_f_0(true);
  message->set_f_1(0x5fce5258d44c3d9e);
  message->set_f_25(0xabe);
  Message1::M16* v18 = message->mutable_f_76();
  v18->set_f_0(0x6dd0e00d96747e91);
  Message1::M16::M42* v19_0 = v18->add_f_5();
  Message1::M16::M42::M70* v20 = v19_0->mutable_f_2();
  v20->set_f_0(s->substr(0, 25));
  v20->set_f_1(0x30d97d5c991288c8);
  message->set_f_24(Message1::E5_CONST_2);
  message->set_f_12(0x71a2175);
  Message1::M22* v21 = message->mutable_f_90();
  v21->set_f_1(Message1::M22::E11_CONST_5);
  v21->add_f_0(Message1::M22::E10_CONST_1);
  v21->add_f_0(Message1::M22::E10_CONST_5);
  Message1::M22::M54* v22 = v21->mutable_f_3();
  Message1::M22::M54::M88* v23 = v22->mutable_f_6();
  Message1::M22::M54::M88::M98* v24 = v23->mutable_f_2();
  v24->set_f_1(0x6fb83);
  v24->set_f_3(0x48062391);
  v24->set_f_0(0x77);
  v23->set_f_0(0.428412);
  v22->set_f_0(0x3bee12c5fad0ef76);
  Message1::M22::M54::M77* v25 = v22->mutable_f_2();
  v25->set_f_1(0x39728d1cb1f8f845);
  message->set_f_9(s->substr(0, 362));
  Message1::M1* v26_0 = message->add_f_54();
  Message1::M1::M49* v27 = v26_0->mutable_f_4();
  v27->set_f_3(false);
  v27->set_f_1(0x68c59a86a02d91d1);
  Message1::M1::M62* v28_0 = v26_0->add_f_7();
  v28_0->set_f_1(0x2b5389944a0f436e);
  v28_0->set_f_0(0x44dcf1c3fbac3f1c);
  message->set_f_18(0x490acb30da442dca);
  Message1::M3* v29_0 = message->add_f_58();
  v29_0->set_f_0(true);
  Message1::M3::M53* v30_0 = v29_0->add_f_2();
  v30_0->set_f_0(0x752fbb4ce39ef9bf);
  v30_0->set_f_1(s->substr(0, 30));
  Message1::M3::M53::M82* v31 = v30_0->mutable_f_3();
  v31->set_f_0(Message1::M3::M53::M82::E31_CONST_5);
  message->set_f_27(false);
  Message1::M19* v32 = message->mutable_f_83();
  Message1::M19::M57* v33 = v32->mutable_f_10();
  v33->set_f_5(0x4cb2bc38);
  v33->set_f_1(0x4ffb166461d34b6b);
  v33->set_f_0(0.175161);
  Message1::M19::M33* v34 = v32->mutable_f_5();
  v34->set_f_3(s->substr(0, 29));
  v34->set_f_0(0xa36e349783d0ee4);
  v34->set_f_4(0x6809e54f7bb70a8a);
  v34->add_f_2(Message1::M19::M33::E13_CONST_5);
  v32->set_f_0(s->substr(0, 321));
  Message1::M18* v35_0 = message->add_f_82();
  Message1::M18::M46* v36 = v35_0->mutable_f_2();
  v36->add_f_0(Message1::M18::M46::E18_CONST_5);
  v36->add_f_0(Message1::M18::M46::E18_CONST_1);
  v36->add_f_0(Message1::M18::M46::E18_CONST_3);
  Message1::M18::M46::M67* v37 = v36->mutable_f_3();
  (void)v37;  // Suppresses clang-tidy.
  message->set_f_31(0.136663);
  Message1::M15* v38 = message->mutable_f_75();
  v38->set_f_0(0x74e77f5231ed0e55);
  Message1::M15::M51* v39 = v38->mutable_f_4();
  Message1::M15::M51::M76* v40 = v39->mutable_f_8();
  v40->set_f_0(true);
  Message1::M15::M51::M93* v41_0 = v39->add_f_9();
  v41_0->set_f_8(0x33e5a1d8e8b8a339);
  v41_0->set_f_0(s->substr(0, 7));
  Message1::M15::M51::M93::M96* v42 = v41_0->mutable_f_22();
  v42->set_f_3(0x6ce02ee2cd1e1c49);
  v42->set_f_2(0x61);
  v42->set_f_1(s->substr(0, 2));
  v42->set_f_0(0.574703);
  v41_0->set_f_11(false);
  v41_0->set_f_1(0x5e58558febb62a19);
  v41_0->set_f_2(0x67d6d7c156c3d047);
  v41_0->set_f_9(0x507336fe56e521d);
  v39->set_f_1(0x8);
  v39->set_f_2(s->substr(0, 62));
  v39->set_f_0(s->substr(0, 1148));
  message->set_f_8(s->substr(0, 32));
  message->set_f_17(true);
  message->set_f_6(0x19665da9d9359a0a);
  message->set_f_4(s->substr(0, 36));
  Message1::M14* v43_0 = message->add_f_74();
  Message1::M14::M37* v44 = v43_0->mutable_f_5();
  (void)v44;  // Suppresses clang-tidy.
  Message1::M14::M56* v45 = v43_0->mutable_f_6();
  v45->set_f_1(0x5ed4a994);
  Message1::M14::M56::M66* v46_0 = v45->add_f_8();
  v46_0->set_f_0(0xc902a26);
  v45->set_f_3(Message1::M14::M56::E21_CONST_5);
  Message1::M14::M34* v47 = v43_0->mutable_f_4();
  v47->set_f_1(0x168abe);
  v47->set_f_0(s->substr(0, 18280));
  Message1::M5* v48 = message->mutable_f_60();
  Message1::M5::M60* v49 = v48->mutable_f_8();
  v49->set_f_0(0x338004063a4a9ab5);
  Message1::M5::M60::M87* v50 = v49->mutable_f_2();
  (void)v50;  // Suppresses clang-tidy.
  v48->set_f_0(0x25);
  Message1::M5::M29* v51 = v48->mutable_f_2();
  (void)v51;  // Suppresses clang-tidy.
  Message1::M5::M52* v52 = v48->mutable_f_7();
  (void)v52;  // Suppresses clang-tidy.
  Message1::M5::M40* v53 = v48->mutable_f_6();
  v53->set_f_0(0x3871816b34eb21b1);
  Message1::M5::M36* v54 = v48->mutable_f_3();
  v54->add_f_0(Message1::M5::M36::E14_CONST_3);
  Message1::M5::M36::M85* v55_0 = v54->add_f_2();
  v55_0->set_f_0(0x32bc0bed48478a8f);
  message->set_f_7(Message1::E1_CONST_3);
  message->set_f_19(0xd865ad31e73ed6b);
  Message1::E6 array_1[10] = {
      Message1::E6_CONST_5, Message1::E6_CONST_2, Message1::E6_CONST_4,
      Message1::E6_CONST_2, Message1::E6_CONST_1, Message1::E6_CONST_4,
      Message1::E6_CONST_5, Message1::E6_CONST_4, Message1::E6_CONST_3,
      Message1::E6_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_28(v);
  }
  message->set_f_11(0x74);
  Message1::M7* v56 = message->mutable_f_62();
  v56->set_f_0(s->substr(0, 144));
  Message1::M7::M27* v57 = v56->mutable_f_4();
  (void)v57;  // Suppresses clang-tidy.
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M10* v0 = message->mutable_f_68();
  Message1::M10::M47* v1_0 = v0->add_f_4();
  v1_0->set_f_5(0x6cad1484);
  v1_0->set_f_4(true);
  v1_0->set_f_2(0x1954cd6);
  v1_0->set_f_3(s->substr(0, 19));
  v0->set_f_0(0x41f04e2dd4898c2e);
  message->set_f_0(0.045995);
  message->set_f_7(Message1::E1_CONST_3);
  message->set_f_6(0x76686ce1278cb6fb);
  message->set_f_26(s->substr(0, 104));
  message->set_f_18(0x1847a00079cc8779);
  message->set_f_24(Message1::E5_CONST_2);
  Message1::M7* v2 = message->mutable_f_62();
  Message1::M7::M35* v3_0 = v2->add_f_5();
  Message1::M7::M35::M69* v4 = v3_0->mutable_f_8();
  v4->set_f_0(s->substr(0, 391));
  v3_0->set_f_3(0x2f4e19e11411d2e);
  v3_0->set_f_2(0x7dada124dac680cf);
  Message1::M7::M35::M73* v5_0 = v3_0->add_f_9();
  v5_0->set_f_1(false);
  v5_0->set_f_3(0x7457e4d1ef8132c0);
  v5_0->set_f_0(0x79b2565ffbe5c1a4);
  v3_0->set_f_0(0x52089eeb);
  Message1::M7::M27* v6 = v2->mutable_f_4();
  v6->add_f_0(Message1::M7::M27::E12_CONST_2);
  message->set_f_5(s->substr(0, 8));
  message->set_f_9(s->substr(0, 6));
  message->set_f_29(0x327d22a8);
  Message1::M21* v7 = message->mutable_f_87();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_8(s->substr(0, 21));
  Message1::M6* v8_0 = message->add_f_61();
  (void)v8_0;  // Suppresses clang-tidy.
  Message1::M3* v9_0 = message->add_f_58();
  Message1::M3::M53* v10_0 = v9_0->add_f_2();
  Message1::M3::M53::M82* v11 = v10_0->mutable_f_3();
  v11->set_f_0(Message1::M3::M53::M82::E31_CONST_1);
  v10_0->set_f_1(s->substr(0, 28));
  message->add_f_20(Message1::E2_CONST_3);
  Message1::M14* v12_0 = message->add_f_74();
  Message1::M14::M34* v13 = v12_0->mutable_f_4();
  v13->set_f_2(0x23);
  v13->set_f_0(s->substr(0, 25));
  message->add_f_28(Message1::E6_CONST_3);
  message->set_f_13(0x3bae5166903);
  message->set_f_15(0x7a1d1657310ed6bc);
  Message1::M1* v14_0 = message->add_f_54();
  Message1::M1::M58* v15_0 = v14_0->add_f_6();
  v15_0->set_f_0(0x9df8e96);
  v15_0->set_f_1(0x52b6ca9);
  v14_0->set_f_0(0x6718657d28bfca3a);
  Message1::M1::M62* v16_0 = v14_0->add_f_7();
  v16_0->set_f_0(0x49092a392892d358);
  Message1::M1::M49* v17 = v14_0->mutable_f_4();
  v17->set_f_4(s->substr(0, 15));
  v17->set_f_3(true);
  v17->set_f_0(0x2afacede20d9e0b0);
  v17->set_f_5(0.819022);
  v17->set_f_2(s->substr(0, 11));
  v17->set_f_1(0x78bceb146b33cbba);
  message->set_f_19(0x1f68bc5282af38d3);
  Message1::M17* v18 = message->mutable_f_78();
  Message1::M17::M28* v19 = v18->mutable_f_2();
  Message1::M17::M28::M83* v20 = v19->mutable_f_3();
  (void)v20;  // Suppresses clang-tidy.
  message->set_f_1(0x65cdab32e968dc27);
  message->set_f_16(0x636e5);
  message->set_f_32(0x7823b655);
  message->set_f_11(0x3b21);
  Message1::M2* v21 = message->mutable_f_56();
  Message1::M2::M61* v22_0 = v21->add_f_8();
  Message1::M2::M61::M72* v23 = v22_0->mutable_f_16();
  v23->set_f_1(s->substr(0, 16));
  v22_0->add_f_8(Message1::M2::M61::E25_CONST_1);
  v22_0->set_f_0(0x3884c4260b4ac0d4);
  v22_0->set_f_5(0xa3e36bb);
  v22_0->set_f_6(0x891e0);
  v22_0->set_f_3(false);
  v22_0->add_f_4(Message1::M2::M61::E24_CONST_4);
  v22_0->set_f_7(s->substr(0, 296));
  v21->set_f_1(s->substr(0, 6));
  message->set_f_4(s->substr(0, 89));
  message->set_f_30(0x2b554b6a);
  message->set_f_27(false);
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
}  // namespace fleetbench::rpc::P4::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
