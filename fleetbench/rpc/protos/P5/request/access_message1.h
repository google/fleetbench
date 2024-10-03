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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message1.pb.h"

namespace fleetbench::rpc::P5::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_23(s->substr(0, 345));
  Message1::M7* v0_0 = message->add_f_61();
  v0_0->set_f_0(s->substr(0, 6));
  Message1::M7::M20* v1 = v0_0->mutable_f_5();
  v1->set_f_0(0x6de8caec485cc711);
  v1->set_f_3(0x1a);
  v1->set_f_5(0x3b07d6e5886f0a9);
  v1->set_f_4(true);
  v1->set_f_1(s->substr(0, 18));
  message->set_f_27(s->substr(0, 14));
  message->set_f_4(0x222c9ee7270f7d17);
  message->set_f_11(0.161060);
  Message1::M13* v2_0 = message->add_f_69();
  v2_0->set_f_6(0x3b0f9fca56668420);
  v2_0->set_f_28(0x1b3e01a320f);
  Message1::M13::M17* v3 = v2_0->mutable_f_48();
  Message1::M13::M17::M24* v4_0 = v3->add_f_5();
  Message1::M13::M17::M24::M47* v5 = v4_0->mutable_f_4();
  v5->set_f_0(0x8360e579470153e);
  v4_0->set_f_0(0x3c45b6f100c5601e);
  Message1::M13::M17::M36* v6_0 = v3->add_f_10();
  v6_0->set_f_0(s->substr(0, 120));
  v3->set_f_0(0.229211);
  Message1::M13::M17::M29* v7 = v3->mutable_f_7();
  v7->set_f_0(0.183935);
  v2_0->set_f_9(s->substr(0, 1));
  v2_0->set_f_25(0x6a7cd96c2ffaef34);
  v2_0->set_f_26(0x4ddefe2f);
  v2_0->set_f_7(s->substr(0, 23));
  v2_0->set_f_3(0xed680e5);
  v2_0->set_f_15(0x8329f);
  Message1::M13::E3 array_1[21] = {
      Message1::M13::E3_CONST_5, Message1::M13::E3_CONST_5,
      Message1::M13::E3_CONST_4, Message1::M13::E3_CONST_3,
      Message1::M13::E3_CONST_5, Message1::M13::E3_CONST_4,
      Message1::M13::E3_CONST_2, Message1::M13::E3_CONST_2,
      Message1::M13::E3_CONST_2, Message1::M13::E3_CONST_5,
      Message1::M13::E3_CONST_5, Message1::M13::E3_CONST_3,
      Message1::M13::E3_CONST_5, Message1::M13::E3_CONST_5,
      Message1::M13::E3_CONST_1, Message1::M13::E3_CONST_3,
      Message1::M13::E3_CONST_3, Message1::M13::E3_CONST_3,
      Message1::M13::E3_CONST_2, Message1::M13::E3_CONST_3,
      Message1::M13::E3_CONST_2,
  };
  for (auto v : array_1) {
    v2_0->add_f_10(v);
  }
  v2_0->set_f_4(s->substr(0, 15));
  v2_0->set_f_13(0x58e45ada);
  v2_0->set_f_8(0x7bdd9351d2551408);
  v2_0->set_f_2(s->substr(0, 32));
  v2_0->set_f_22(s->substr(0, 946));
  v2_0->set_f_16(0x4a0ca9703f511690);
  v2_0->set_f_20(0x687a34f75054b853);
  v2_0->set_f_32(false);
  v2_0->set_f_11(Message1::M13::E4_CONST_2);
  v2_0->set_f_17(0x62);
  v2_0->set_f_0(s->substr(0, 16));
  v2_0->set_f_12(0x7e);
  v2_0->set_f_31(false);
  message->set_f_16(0x45138779fc29af82);
  Message1::M10* v8 = message->mutable_f_66();
  v8->set_f_0(0x23);
  Message1::M10::M15* v9 = v8->mutable_f_4();
  v9->add_f_3(Message1::M10::M15::E7_CONST_5);
  v9->set_f_1(0x5f7df2c2);
  v9->set_f_0(Message1::M10::M15::E6_CONST_5);
  v9->set_f_4(0x635fd02651ab829);
  message->set_f_1(0x59);
  Message1::M8* v10_0 = message->add_f_63();
  v10_0->set_f_1(true);
  Message1::M8::M23* v11 = v10_0->mutable_f_8();
  v11->set_f_7(0x6f);
  v11->set_f_5(0x73);
  Message1::M8::M23::M39* v12 = v11->mutable_f_42();
  v12->set_f_1(s->substr(0, 14));
  v12->set_f_0(true);
  Message1::M8::M23::M39::M46* v13 = v12->mutable_f_12();
  Message1::M8::M23::M39::M46::M62* v14 = v13->mutable_f_6();
  v14->set_f_19(Message1::M8::M23::M39::M46::M62::E24_CONST_5);
  v14->set_f_17(s->substr(0, 103));
  v14->set_f_9(s->substr(0, 365));
  v14->set_f_5(0x28a498bcf77d8612);
  v14->set_f_0(0x71764e2623f73f5f);
  v14->set_f_7(0x543a501de7dd358);
  v14->set_f_13(true);
  v14->set_f_10(0.077196);
  v14->set_f_6(0x31d2b4a159c0c7a4);
  v14->set_f_4(s->substr(0, 24));
  v14->set_f_1(0x7c811ae4);
  v14->set_f_18(0x7e3053da2353914b);
  v14->set_f_11(s->substr(0, 3));
  v14->set_f_14(0x35);
  v14->set_f_3(0x73);
  v14->set_f_8(0x15c7cb3059a80384);
  Message1::M8::M23::M39::M46::M56* v15 = v13->mutable_f_4();
  v15->set_f_0(0x8c6f2fe);
  v13->set_f_0(0x27);
  v12->set_f_5(0x6b17a18012b17995);
  v12->set_f_2(s->substr(0, 400));
  v11->set_f_24(0x4d6c7f6d9030cc94);
  v11->set_f_17(0x1db9af);
  v11->set_f_6(s->substr(0, 19));
  Message1::M8::M23::M28* v16_0 = v11->add_f_36();
  v16_0->set_f_0(0x1730a59064661297);
  v11->set_f_14(0x31b82c52);
  v11->set_f_0(0x38a4d5a3);
  v11->set_f_1(0x7995f5f);
  v11->set_f_18(0x4c245239d);
  Message1::M8::M23::M33* v17_0 = v11->add_f_38();
  v17_0->set_f_0(0x7a4747f4994c8c0);
  v11->set_f_8(0x6756c39fe61d628d);
  v11->set_f_19(0xda6b48c535e78cf);
  v11->set_f_12(s->substr(0, 2003));
  v11->set_f_21(0x436b373a);
  Message1::M8::M23::M38* v18_0 = v11->add_f_40();
  v18_0->set_f_1(0x6002c5675bd0dc9b);
  v18_0->set_f_0(0x6305ed6c13c7eaf4);
  v18_0->set_f_3(s->substr(0, 13));
  Message1::M8::M23::M38::M43* v19 = v18_0->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  v11->set_f_9(s->substr(0, 27));
  v11->set_f_13(0xe626a);
  v11->set_f_11(0x2088773870bdab83);
  v11->set_f_23(s->substr(0, 4));
  v11->set_f_25(0xcaa0fc460b70415);
  v11->set_f_2(false);
  v11->set_f_15(s->substr(0, 29));
  v10_0->set_f_0(0x5c2628189aee920b);
  v10_0->set_f_2(false);
  v10_0->set_f_3(s->substr(0, 21));
  message->set_f_2(0x704db3a);
  message->set_f_14(true);
  message->add_f_21(Message1::E1_CONST_5);
  message->set_f_12(s->substr(0, 42));
  message->set_f_8(s->substr(0, 186));
  message->set_f_28(0x5b5a63532a2a32b2);
  message->set_f_3(0x36bed1d80c127273);
  Message1::M1* v20 = message->mutable_f_50();
  v20->set_f_4(0x75);
  v20->set_f_3(0x182f3d);
  v20->set_f_2(0x1934c6cec7d13005);
  v20->set_f_6(s->substr(0, 17));
  v20->set_f_5(0x68486353982e1693);
  Message1::M2* v21 = message->mutable_f_51();
  v21->set_f_3(0x22dd7);
  v21->set_f_0(Message1::M2::E2_CONST_1);
  v21->set_f_1(true);
  message->set_f_29(0x6586ee88e8242750);
  Message1::M9* v22_0 = message->add_f_65();
  (void)v22_0;  // Suppresses clang-tidy.
  message->set_f_26(0x2ce5f7c201eb8161);
  message->set_f_5(0x143a283ace41f3d3);
  message->set_f_18(0.365148);
  Message1::M12* v23 = message->mutable_f_68();
  v23->set_f_3(0x795eec2a);
  v23->set_f_0(s->substr(0, 13));
  v23->set_f_5(0x3f0f63c);
  v23->set_f_1(0x10);
  v23->set_f_2(0x61);
  message->set_f_22(s->substr(0, 14));
  message->set_f_0(0x6e7b10d4107a7bbe);
  message->set_f_20(0x35d9a34c53640444);
  Message1::M3* v24 = message->mutable_f_52();
  v24->set_f_0(0x71ba1);
  message->set_f_19(false);
  Message1::M4* v25 = message->mutable_f_54();
  Message1::M4::M19* v26 = v25->mutable_f_3();
  v26->set_f_2(0x8dea3b052f1e72e);
  v26->set_f_3(0x564989b38159220d);
  Message1::M4::M19::M40* v27 = v26->mutable_f_11();
  v27->set_f_1(0x3dcfcdf);
  v27->set_f_0(s->substr(0, 17));
  Message1::M4::M19::M35* v28 = v26->mutable_f_10();
  v28->set_f_29(0x71);
  v28->set_f_7(Message1::M4::M19::M35::E13_CONST_4);
  v28->set_f_26(0x7275cfb8);
  v28->set_f_16(true);
  v28->set_f_6(0x264dc00e61cfd35d);
  v28->set_f_9(true);
  v28->set_f_19(0x35);
  v28->set_f_20(s->substr(0, 3));
  v28->set_f_1(0x252d3c10799a5ab6);
  v28->set_f_5(0x308799a4);
  v28->set_f_8(0x5c06fc6777f7dc23);
  v28->set_f_27(0x34);
  v28->set_f_30(0xd81fe07);
  v28->set_f_24(false);
  v28->set_f_21(true);
  v28->add_f_22(Message1::M4::M19::M35::E14_CONST_3);
  v28->set_f_25(0x1bcdb97451a);
  v28->set_f_18(s->substr(0, 126));
  v26->add_f_1(Message1::M4::M19::E8_CONST_3);
  v26->set_f_4(0.090630);
  Message1::M4::M19::M41* v29 = v26->mutable_f_14();
  v29->set_f_3(0x34c5744bd29d37c);
  v29->set_f_1(0x9ccae5be15b6678);
  v29->set_f_2(0x1c);
  message->set_f_13(0x37add6d);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_6(s->substr(0, 484));
  Message1::M7* v0_0 = message->add_f_61();
  v0_0->set_f_0(s->substr(0, 10));
  Message1::M7::M16* v1 = v0_0->mutable_f_2();
  v1->set_f_0(true);
  Message1::M7::M16::M27* v2 = v1->mutable_f_2();
  v2->set_f_1(s->substr(0, 22));
  v2->set_f_0(Message1::M7::M16::M27::E10_CONST_2);
  Message1::M7::M16::M27::M45* v3 = v2->mutable_f_15();
  Message1::M7::M16::M27::M45::M53* v4_0 = v3->add_f_5();
  Message1::M7::M16::M27::M45::M53::E20 array_0[16] = {
      Message1::M7::M16::M27::M45::M53::E20_CONST_3,
      Message1::M7::M16::M27::M45::M53::E20_CONST_2,
      Message1::M7::M16::M27::M45::M53::E20_CONST_3,
      Message1::M7::M16::M27::M45::M53::E20_CONST_5,
      Message1::M7::M16::M27::M45::M53::E20_CONST_4,
      Message1::M7::M16::M27::M45::M53::E20_CONST_4,
      Message1::M7::M16::M27::M45::M53::E20_CONST_4,
      Message1::M7::M16::M27::M45::M53::E20_CONST_5,
      Message1::M7::M16::M27::M45::M53::E20_CONST_4,
      Message1::M7::M16::M27::M45::M53::E20_CONST_1,
      Message1::M7::M16::M27::M45::M53::E20_CONST_2,
      Message1::M7::M16::M27::M45::M53::E20_CONST_5,
      Message1::M7::M16::M27::M45::M53::E20_CONST_2,
      Message1::M7::M16::M27::M45::M53::E20_CONST_3,
      Message1::M7::M16::M27::M45::M53::E20_CONST_3,
      Message1::M7::M16::M27::M45::M53::E20_CONST_4,
  };
  for (auto v : array_0) {
    v4_0->add_f_2(v);
  }
  v4_0->set_f_1(0.089670);
  v3->set_f_1(s->substr(0, 282));
  v3->set_f_0(0x5260ac2eb690fc71);
  message->set_f_16(0xe19eb5704945396);
  message->set_f_17(0x30cf70ecd87d8557);
  Message1::E1 array_1[21] = {
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_4,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_4,
      Message1::E1_CONST_3, Message1::E1_CONST_4, Message1::E1_CONST_5,
      Message1::E1_CONST_1, Message1::E1_CONST_3, Message1::E1_CONST_5,
      Message1::E1_CONST_2, Message1::E1_CONST_2, Message1::E1_CONST_3,
      Message1::E1_CONST_4, Message1::E1_CONST_5, Message1::E1_CONST_3,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_1,
  };
  for (auto v : array_1) {
    message->add_f_21(v);
  }
  message->set_f_18(0.028881);
  Message1::M13* v5_0 = message->add_f_69();
  v5_0->set_f_17(0xe4280b);
  v5_0->set_f_14(true);
  v5_0->set_f_24(0x187854);
  v5_0->set_f_11(Message1::M13::E4_CONST_4);
  v5_0->set_f_22(s->substr(0, 2));
  v5_0->set_f_2(s->substr(0, 1));
  v5_0->set_f_28(0x2417fd578e8);
  v5_0->set_f_5(0x92984ff35c8832f);
  v5_0->set_f_20(0x3ee93474081169f);
  v5_0->set_f_4(s->substr(0, 19));
  v5_0->set_f_13(0x3f7419b5);
  v5_0->set_f_6(0x43d3a695a7f43518);
  v5_0->set_f_19(0x4e4513a06bd78503);
  v5_0->set_f_21(0x435b9724485a07aa);
  v5_0->set_f_31(true);
  v5_0->add_f_10(Message1::M13::E3_CONST_4);
  v5_0->set_f_3(0x3649);
  v5_0->set_f_27(0x8c120a6);
  Message1::M13::M17* v6 = v5_0->mutable_f_48();
  Message1::M13::M17::M26* v7_0 = v6->add_f_6();
  v7_0->set_f_0(true);
  Message1::M13::M17::M36* v8_0 = v6->add_f_10();
  (void)v8_0;  // Suppresses clang-tidy.
  Message1::M13::M17::M29* v9 = v6->mutable_f_7();
  v9->set_f_0(0.243911);
  v6->set_f_0(0.156431);
  v5_0->set_f_7(s->substr(0, 26));
  v5_0->set_f_16(0x52b4a2f1d6bb616d);
  v5_0->set_f_25(0x2b2859fc7a172c11);
  v5_0->set_f_0(s->substr(0, 19));
  v5_0->set_f_26(0x47fd356c);
  v5_0->set_f_29(0.943953);
  v5_0->set_f_30(0x5776bc92d09cea01);
  Message1::M10* v10 = message->mutable_f_66();
  Message1::M10::M15* v11 = v10->mutable_f_4();
  v11->set_f_0(Message1::M10::M15::E6_CONST_2);
  Message1::M10::M15::M34* v12 = v11->mutable_f_10();
  Message1::M10::M15::M34::M49* v13 = v12->mutable_f_3();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_0(Message1::M10::M15::M34::E12_CONST_1);
  v11->set_f_2(true);
  v11->set_f_1(0x1b8100ee);
  v11->add_f_3(Message1::M10::M15::E7_CONST_5);
  v11->set_f_4(0x154c7cb040f8e91c);
  v10->set_f_0(0x3733af8);
  message->set_f_20(0x666c1d069c36071c);
  Message1::M3* v14 = message->mutable_f_52();
  v14->set_f_0(0x1c912);
  Message1::M3::M18* v15_0 = v14->add_f_3();
  (void)v15_0;  // Suppresses clang-tidy.
  Message1::M11* v16 = message->mutable_f_67();
  v16->set_f_0(s->substr(0, 18));
  message->set_f_11(0.050192);
  message->set_f_4(0x1605fdb66abd590c);
  message->set_f_23(s->substr(0, 25));
  message->set_f_26(0x7a65e1a6e4a11e14);
  message->set_f_24(0x1473bbef336efc);
  message->set_f_22(s->substr(0, 5));
  Message1::M5* v17_0 = message->add_f_57();
  Message1::M5::M22* v18_0 = v17_0->add_f_2();
  v18_0->set_f_0(0x45);
  Message1::M5::M22::M31* v19 = v18_0->mutable_f_5();
  (void)v19;  // Suppresses clang-tidy.
  Message1::M5::M22::M42* v20_0 = v18_0->add_f_7();
  v20_0->set_f_2(0x2833);
  v20_0->set_f_3(false);
  v20_0->set_f_0(true);
  v20_0->set_f_1(s->substr(0, 18));
  Message1::M5::M22::M42::M51* v21 = v20_0->mutable_f_9();
  Message1::M5::M22::M42::M51::M61* v22 = v21->mutable_f_13();
  v22->set_f_0(false);
  v21->set_f_1(0x737771d6bf8ec27c);
  v21->set_f_4(0.236752);
  v21->set_f_2(0x8636e79a4328cd);
  v21->set_f_0(0x8531a84);
  Message1::M5::M22::M42::M51::M52* v23_0 = v21->add_f_11();
  v23_0->set_f_0(0x3d3e956f18dda616);
  Message1::M5::M22::M25* v24 = v18_0->mutable_f_4();
  (void)v24;  // Suppresses clang-tidy.
  message->set_f_7(0xe576ee5);
  Message1::M8* v25_0 = message->add_f_63();
  v25_0->set_f_0(0x3a2b00b07b95a845);
  v25_0->set_f_1(false);
  v25_0->set_f_3(s->substr(0, 31));
  message->set_f_3(0x9032afa546fb549);
  message->set_f_27(s->substr(0, 4));
  message->set_f_29(0x52f00d126d67134a);
  message->set_f_25(s->substr(0, 20));
  message->set_f_0(0x2c2cabdcd3e062f2);
  Message1::M9* v26_0 = message->add_f_65();
  v26_0->set_f_0(false);
  message->set_f_2(0x4d);
  Message1::M6* v27 = message->mutable_f_58();
  v27->set_f_0(0x612e94118c130269);
  Message1::M6::M21* v28 = v27->mutable_f_6();
  v28->set_f_0(0xd);
  Message1::M6::M14* v29 = v27->mutable_f_4();
  v29->set_f_17(true);
  v29->set_f_18(s->substr(0, 7));
  v29->set_f_6(0x14);
  v29->set_f_14(s->substr(0, 424));
  v29->set_f_4(0x576784f);
  v29->set_f_13(0x45b8fe796217789d);
  v29->set_f_2(s->substr(0, 31));
  v29->set_f_16(0x925e0);
  v29->set_f_11(true);
  v29->set_f_22(0x77e9ea3529ca1e61);
  v29->set_f_0(0x1ca86581a82bf1b6);
  v29->set_f_1(s->substr(0, 25));
  v29->set_f_3(s->substr(0, 6));
  v29->add_f_8(Message1::M6::M14::E5_CONST_5);
  v29->set_f_9(0x30e12544eff72a57);
  v29->set_f_24(0.050311);
  v29->set_f_20(0x2838944ab09df2be);
  v29->set_f_21(0x7e4ae893d938a48b);
  v29->set_f_12(0x55710e111);
  v29->set_f_5(0x540af85);
  v29->set_f_15(0x16355b);
  message->set_f_8(s->substr(0, 24));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_29(0x65fdf7e9b5c49743);
  message->set_f_11(0.979862);
  message->add_f_21(Message1::E1_CONST_1);
  message->set_f_4(0x5244d41b254a9552);
  Message1::M1* v0 = message->mutable_f_50();
  v0->set_f_1(false);
  v0->set_f_5(0x6080f0e1187f4427);
  v0->set_f_2(0x51058aaad8b290c3);
  v0->set_f_0(0x40d6c79b361dfef0);
  v0->set_f_6(s->substr(0, 68));
  v0->set_f_3(0x3);
  Message1::M6* v1 = message->mutable_f_58();
  Message1::M6::M14* v2 = v1->mutable_f_4();
  v2->set_f_6(0x36);
  Message1::M6::M14::M30* v3_0 = v2->add_f_47();
  v3_0->set_f_0(0x6);
  v3_0->set_f_2(0x47);
  v3_0->set_f_1(false);
  v2->set_f_7(true);
  v2->set_f_0(0x76c4aa34f745270c);
  v2->set_f_23(0x3b);
  v2->set_f_17(true);
  v2->set_f_14(s->substr(0, 18));
  v2->set_f_1(s->substr(0, 6));
  v2->set_f_15(0x61616);
  v2->add_f_8(Message1::M6::M14::E5_CONST_1);
  v2->set_f_5(0x1dffe9a0);
  v2->set_f_20(0x4820e3910c3c196e);
  v2->set_f_3(s->substr(0, 22));
  v2->set_f_10(0x629e5b229f65f51d);
  v2->set_f_19(false);
  v2->set_f_11(false);
  v2->set_f_12(0x29d8106ab75);
  Message1::M6::M21* v4 = v1->mutable_f_6();
  v4->set_f_0(0x25);
  Message1::M9* v5_0 = message->add_f_65();
  v5_0->set_f_0(true);
  message->set_f_27(s->substr(0, 17));
  message->set_f_12(s->substr(0, 7));
  message->set_f_22(s->substr(0, 3484));
  message->set_f_18(0.657986);
  message->set_f_14(true);
  message->set_f_13(0x66);
  message->set_f_6(s->substr(0, 600));
  Message1::M3* v6 = message->mutable_f_52();
  Message1::M3::M18* v7_0 = v6->add_f_3();
  (void)v7_0;  // Suppresses clang-tidy.
  v6->set_f_0(0x27);
  message->set_f_23(s->substr(0, 439));
  message->set_f_20(0x42e21b4e3be362ed);
  message->set_f_10(true);
  Message1::M12* v8 = message->mutable_f_68();
  v8->set_f_2(0xc3a5e3b);
  v8->set_f_3(0xa4c298c);
  v8->set_f_5(0x44);
  v8->set_f_0(s->substr(0, 65));
  message->set_f_1(0xeb8e438);
  message->set_f_8(s->substr(0, 28));
  message->set_f_16(0x40599e201142c41b);
  message->set_f_15(0x4c97e6c5662d89cd);
  Message1::M2* v9 = message->mutable_f_51();
  v9->set_f_2(s->substr(0, 13));
  v9->set_f_0(Message1::M2::E2_CONST_5);
  message->set_f_2(0x9af43);
  Message1::M5* v10_0 = message->add_f_57();
  v10_0->set_f_0(0.059491);
  Message1::M4* v11 = message->mutable_f_54();
  Message1::M4::M19* v12 = v11->mutable_f_3();
  v12->set_f_3(0x6d4f35e3c3a831bb);
  v12->add_f_1(Message1::M4::M19::E8_CONST_5);
  Message1::M4::M19::M40* v13 = v12->mutable_f_11();
  v13->set_f_1(0xab3ca);
  v11->set_f_0(false);
  message->set_f_17(0x718515451627eb16);
  message->set_f_5(0x3ed3254b251115d8);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_29(0x668726276d19019);
  message->set_f_26(0x7ce42270d21da725);
  Message1::M5* v0_0 = message->add_f_57();
  v0_0->set_f_0(0.864068);
  Message1::M5::M22* v1_0 = v0_0->add_f_2();
  Message1::M5::M22::M31* v2 = v1_0->mutable_f_5();
  v2->set_f_0(0x7b1384d48f503ce4);
  v1_0->set_f_0(0x60);
  message->set_f_9(s->substr(0, 20));
  Message1::E1 array_0[18] = {
      Message1::E1_CONST_5, Message1::E1_CONST_2, Message1::E1_CONST_2,
      Message1::E1_CONST_1, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_2, Message1::E1_CONST_1, Message1::E1_CONST_2,
      Message1::E1_CONST_4, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_3, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_5, Message1::E1_CONST_1, Message1::E1_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_21(v);
  }
  message->set_f_14(false);
  message->set_f_3(0x6a6858a96aa42c56);
  message->set_f_18(0.517069);
  message->set_f_12(s->substr(0, 12));
  message->set_f_4(0x24e96c706991b7fc);
  message->set_f_10(false);
  message->set_f_7(0xec8344c);
  message->set_f_11(0.086271);
  message->set_f_6(s->substr(0, 21));
  Message1::M8* v3_0 = message->add_f_63();
  v3_0->set_f_1(true);
  v3_0->set_f_3(s->substr(0, 70));
  v3_0->set_f_0(0x63f49bc4b91b9a3c);
  Message1::M9* v4_0 = message->add_f_65();
  v4_0->set_f_0(false);
  Message1::M2* v5 = message->mutable_f_51();
  v5->set_f_2(s->substr(0, 18));
  v5->set_f_1(true);
  message->set_f_5(0x1236a2738e0bf7cb);
  message->set_f_20(0x1f322627949534e6);
  message->set_f_8(s->substr(0, 116));
  message->set_f_2(0x76);
  Message1::M6* v6 = message->mutable_f_58();
  Message1::M6::M14* v7 = v6->mutable_f_4();
  v7->set_f_21(0x5c888fd7da47c80a);
  v7->set_f_15(0xeaf4f22);
  v7->set_f_1(s->substr(0, 207));
  v7->set_f_14(s->substr(0, 182));
  v7->set_f_3(s->substr(0, 1));
  v7->set_f_17(true);
  v7->set_f_24(0.643333);
  v7->set_f_16(0x4f);
  v7->set_f_4(0x3e);
  v7->set_f_22(0x4456f87e70a5f2db);
  v7->set_f_23(0x187480807e4);
  v7->set_f_5(0x68940930);
  v7->set_f_18(s->substr(0, 14));
  v7->set_f_13(0x23ecfcff4f13322d);
  v7->set_f_10(0x196b3fb18290ab63);
  v7->add_f_8(Message1::M6::M14::E5_CONST_3);
  Message1::M6::M14::M30* v8_0 = v7->add_f_47();
  Message1::M6::M14::M30::M48* v9_0 = v8_0->add_f_5();
  v9_0->set_f_2(0x59);
  v9_0->add_f_6(Message1::M6::M14::M30::M48::E17_CONST_1);
  v9_0->set_f_17(s->substr(0, 29));
  v9_0->set_f_8(s->substr(0, 21));
  v9_0->set_f_13(0x75cb9aa58a50b6c1);
  v9_0->set_f_12(0x5d73ad49b0064ab9);
  v9_0->set_f_16(0x4270550);
  v9_0->set_f_4(true);
  v9_0->set_f_5(0x1aebe5);
  v9_0->set_f_0(0.380023);
  v9_0->set_f_9(s->substr(0, 18));
  v9_0->set_f_7(0x3acfb735b4bf078b);
  Message1::M6::M14::M30::M48::M59* v10 = v9_0->mutable_f_30();
  (void)v10;  // Suppresses clang-tidy.
  v8_0->set_f_2(0x6b);
  v8_0->set_f_1(true);
  v8_0->set_f_0(0x25);
  v7->set_f_19(true);
  v7->set_f_11(false);
  v7->set_f_20(0x3c7687f6a95e8b5);
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
}  // namespace fleetbench::rpc::P5::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
