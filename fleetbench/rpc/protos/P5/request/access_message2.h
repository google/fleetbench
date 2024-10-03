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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message2.pb.h"

namespace fleetbench::rpc::P5::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_10(0x49cef1c261fe7fe1);
  message->set_f_25(0x100d6272580a9978);
  message->set_f_16(s->substr(0, 2));
  message->set_f_15(0x1e);
  message->set_f_17(s->substr(0, 289));
  message->set_f_5(0x3c313a42);
  message->set_f_14(s->substr(0, 19));
  Message2::M10* v0_0 = message->add_f_62();
  (void)v0_0;  // Suppresses clang-tidy.
  message->set_f_20(0x2fd6179f8113be78);
  message->set_f_3(false);
  Message2::M3* v1 = message->mutable_f_47();
  v1->set_f_0(0x5139eb4bd7f81268);
  message->set_f_26(0x84a66398a1ea73d);
  Message2::M4* v2 = message->mutable_f_49();
  v2->set_f_2(true);
  message->set_f_4(false);
  message->add_f_6(Message2::E2_CONST_5);
  Message2::M2* v3 = message->mutable_f_45();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_21(s->substr(0, 1));
  message->set_f_0(s->substr(0, 28));
  message->set_f_1(0.254266);
  message->set_f_12(s->substr(0, 6));
  message->set_f_11(0xcc3f8751cdab60a);
  message->set_f_23(s->substr(0, 21));
  message->add_f_7(Message2::E3_CONST_5);
  Message2::M6* v4 = message->mutable_f_53();
  v4->set_f_1(0x4d496a75a67ce8d);
  v4->set_f_0(0x581282668c69da9f);
  Message2::M6::M24* v5 = v4->mutable_f_5();
  v5->set_f_0(0x3f0bae6f19cc9c7d);
  Message2::M1* v6 = message->mutable_f_44();
  Message2::M1::M25* v7_0 = v6->add_f_3();
  v7_0->set_f_3(0x1d0af650a5a371d2);
  Message2::M1::M25::M39* v8 = v7_0->mutable_f_6();
  v8->set_f_23(0x224a21);
  v8->set_f_29(0x782e1bfaa0ecfc9e);
  v8->set_f_25(0x3e4fe3ddeb069c6f);
  v8->set_f_8(s->substr(0, 20));
  v8->set_f_2(0x100b93cb2c3c346a);
  v8->set_f_30(0x1a0fea10);
  v8->set_f_22(0x6763f971536e93dd);
  v8->set_f_1(false);
  v8->set_f_0(s->substr(0, 24));
  v8->set_f_17(true);
  v8->set_f_18(0x430b005f9b5e5e55);
  v8->set_f_24(0x664e8ec1e781f8fb);
  v8->set_f_28(s->substr(0, 22));
  v8->set_f_10(0x3c354e57379e5d43);
  Message2::M1::M25::M39::E15 array_1[21] = {
      Message2::M1::M25::M39::E15_CONST_3, Message2::M1::M25::M39::E15_CONST_4,
      Message2::M1::M25::M39::E15_CONST_4, Message2::M1::M25::M39::E15_CONST_1,
      Message2::M1::M25::M39::E15_CONST_1, Message2::M1::M25::M39::E15_CONST_3,
      Message2::M1::M25::M39::E15_CONST_2, Message2::M1::M25::M39::E15_CONST_5,
      Message2::M1::M25::M39::E15_CONST_4, Message2::M1::M25::M39::E15_CONST_1,
      Message2::M1::M25::M39::E15_CONST_3, Message2::M1::M25::M39::E15_CONST_5,
      Message2::M1::M25::M39::E15_CONST_2, Message2::M1::M25::M39::E15_CONST_2,
      Message2::M1::M25::M39::E15_CONST_5, Message2::M1::M25::M39::E15_CONST_1,
      Message2::M1::M25::M39::E15_CONST_3, Message2::M1::M25::M39::E15_CONST_3,
      Message2::M1::M25::M39::E15_CONST_2, Message2::M1::M25::M39::E15_CONST_3,
      Message2::M1::M25::M39::E15_CONST_5,
  };
  for (auto v : array_1) {
    v8->add_f_6(v);
  }
  v8->set_f_4(0x181e);
  v8->set_f_7(0x3e);
  v8->set_f_5(false);
  v8->set_f_20(s->substr(0, 21));
  Message2::M1::M25::E6 array_2[21] = {
      Message2::M1::M25::E6_CONST_5, Message2::M1::M25::E6_CONST_5,
      Message2::M1::M25::E6_CONST_1, Message2::M1::M25::E6_CONST_1,
      Message2::M1::M25::E6_CONST_1, Message2::M1::M25::E6_CONST_3,
      Message2::M1::M25::E6_CONST_3, Message2::M1::M25::E6_CONST_2,
      Message2::M1::M25::E6_CONST_1, Message2::M1::M25::E6_CONST_2,
      Message2::M1::M25::E6_CONST_2, Message2::M1::M25::E6_CONST_4,
      Message2::M1::M25::E6_CONST_5, Message2::M1::M25::E6_CONST_5,
      Message2::M1::M25::E6_CONST_4, Message2::M1::M25::E6_CONST_4,
      Message2::M1::M25::E6_CONST_2, Message2::M1::M25::E6_CONST_5,
      Message2::M1::M25::E6_CONST_5, Message2::M1::M25::E6_CONST_4,
      Message2::M1::M25::E6_CONST_2,
  };
  for (auto v : array_2) {
    v7_0->add_f_0(v);
  }
  Message2::M9* v9_0 = message->add_f_59();
  v9_0->set_f_0(0x6f2672b1ae65b0e1);
  Message2::M9::M17* v10 = v9_0->mutable_f_5();
  v10->set_f_0(s->substr(0, 3));
  v9_0->set_f_2(0x2e4c8cb4f3b0ad1e);
  message->set_f_9(0x1b);
  message->set_f_24(0x30e0f8430ccbe88e);
  Message2::M5* v11_0 = message->add_f_52();
  v11_0->set_f_0(0x108209d12690f33e);
  Message2::M5::M30* v12 = v11_0->mutable_f_4();
  v12->set_f_0(true);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_12(s->substr(0, 4));
  message->set_f_1(0.008430);
  Message2::M11* v0 = message->mutable_f_64();
  Message2::M11::M31* v1 = v0->mutable_f_7();
  Message2::M11::M31::M45* v2 = v1->mutable_f_3();
  v2->set_f_0(0.183659);
  v1->set_f_0(false);
  v0->set_f_0(s->substr(0, 12));
  Message2::M8* v3 = message->mutable_f_55();
  v3->set_f_2(s->substr(0, 8));
  v3->set_f_3(false);
  Message2::M8::M23* v4 = v3->mutable_f_6();
  v4->set_f_1(0x43);
  Message2::M8::M23::M47* v5 = v4->mutable_f_7();
  v5->set_f_1(0x3645e4);
  Message2::M8::M23::M47::M50* v6 = v5->mutable_f_7();
  v6->set_f_1(s->substr(0, 1));
  v6->set_f_0(0x1d9);
  Message2::M8::M23::M47::M57* v7_0 = v5->add_f_8();
  v7_0->set_f_5(0x797f90864089f62d);
  v7_0->set_f_2(0x3b);
  v7_0->add_f_3(Message2::M8::M23::M47::M57::E19_CONST_3);
  v7_0->set_f_1(0xd5d35be);
  Message2::M8::M23::M47::M57::M65* v8 = v7_0->mutable_f_10();
  v8->set_f_2(false);
  v8->set_f_4(s->substr(0, 11));
  v8->add_f_3(Message2::M8::M23::M47::M57::M65::E20_CONST_4);
  v8->set_f_1(s->substr(0, 12));
  v8->set_f_0(s->substr(0, 17));
  v5->set_f_0(s->substr(0, 26));
  Message2::M8::M23::M38* v9_0 = v4->add_f_6();
  v9_0->set_f_1(0x47);
  v9_0->set_f_3(0x25b9f94ed0c1b288);
  v9_0->set_f_0(false);
  v4->set_f_0(s->substr(0, 5));
  v3->set_f_1(0x3b);
  v3->set_f_0(0x5f7e0b546ec6746a);
  message->set_f_22(0x14dd19);
  message->set_f_17(s->substr(0, 5));
  message->set_f_25(0x6562a4b644d1b202);
  message->set_f_5(0x2ec98937);
  Message2::M9* v10_0 = message->add_f_59();
  v10_0->set_f_1(0x7213e99);
  v10_0->set_f_0(0x65b1ae6e2c6104e6);
  Message2::M9::M17* v11 = v10_0->mutable_f_5();
  v11->set_f_0(s->substr(0, 13));
  v10_0->set_f_2(0x5012ed22e2d4aeb1);
  Message2::M7* v12 = message->mutable_f_54();
  Message2::M7::M22* v13 = v12->mutable_f_3();
  v13->set_f_0(0x206e8b4);
  v12->set_f_0(s->substr(0, 19));
  message->set_f_3(true);
  Message2::M3* v14 = message->mutable_f_47();
  v14->set_f_0(0x39ec264b8a57552f);
  Message2::M4* v15 = message->mutable_f_49();
  v15->set_f_2(true);
  v15->set_f_0(0x240f0de);
  v15->set_f_3(s->substr(0, 17));
  message->set_f_8(0x4f);
  Message2::M13* v16 = message->mutable_f_68();
  v16->set_f_0(false);
  Message2::M13::M32* v17 = v16->mutable_f_5();
  v17->set_f_20(Message2::M13::M32::E13_CONST_3);
  v17->set_f_9(0x73);
  v17->set_f_1(0x65397610);
  v17->set_f_27(0x3ef05d8893dfd3e2);
  v17->set_f_15(0x2095a0c2);
  v17->set_f_24(true);
  v17->set_f_26(false);
  v17->set_f_17(0.715153);
  v17->set_f_21(0x2675b12);
  v17->set_f_14(s->substr(0, 17));
  v17->set_f_22(0xf1b0534);
  v17->set_f_5(Message2::M13::M32::E11_CONST_4);
  v17->set_f_30(0x7f6e24b3141b418e);
  v17->set_f_25(true);
  v17->set_f_8(0.379256);
  v17->set_f_6(0x4386c1889);
  v17->set_f_0(0x82be0a0dbed3cb);
  v17->set_f_28(s->substr(0, 21));
  Message2::M1* v18 = message->mutable_f_44();
  Message2::M1::M25* v19_0 = v18->add_f_3();
  v19_0->set_f_3(0x674b230d94d7fc47);
  v19_0->add_f_0(Message2::M1::M25::E6_CONST_2);
  v19_0->set_f_2(Message2::M1::M25::E7_CONST_4);
  v19_0->set_f_1(0x1dae8604642890b8);
  message->set_f_18(0x1a9c);
  message->add_f_27(Message2::E4_CONST_3);
  Message2::M10* v20_0 = message->add_f_62();
  Message2::M10::M29* v21 = v20_0->mutable_f_4();
  Message2::M10::M29::M41* v22 = v21->mutable_f_3();
  v22->set_f_2(0x95acb5167091a25);
  v22->set_f_3(0x7a927863353a41fa);
  v22->set_f_1(s->substr(0, 12));
  Message2::M10::M29::M46* v23 = v21->mutable_f_4();
  v23->set_f_0(0x1a3a0b);
  Message2::M10::M29::M46::M60* v24 = v23->mutable_f_7();
  v24->set_f_6(true);
  v24->set_f_2(false);
  v24->set_f_1(s->substr(0, 75));
  v24->set_f_9(s->substr(0, 23));
  v24->set_f_0(s->substr(0, 26));
  Message2::M10::M29::M46::M60::M63* v25 = v24->mutable_f_18();
  v25->set_f_0(0x66c0ab2db8e999cb);
  v24->set_f_3(0x1a71b65c9dd707b0);
  v24->set_f_7(0x783bc7c);
  v23->set_f_2(0x79);
  v20_0->set_f_0(s->substr(0, 500));
  message->set_f_24(0x23a16b99cc746b2f);
  message->set_f_19(0x68);
  message->set_f_29(0.776064);
  message->set_f_14(s->substr(0, 468));
  message->set_f_26(0x58be986b6e74e285);
  message->set_f_20(0x109f66e06ef38bc2);
  message->add_f_6(Message2::E2_CONST_2);
  message->set_f_21(s->substr(0, 6));
  Message2::M6* v26 = message->mutable_f_53();
  v26->set_f_2(0x6ba2ddf9);
  v26->set_f_0(0x2fd8134d9495fd29);
  Message2::M6::M24* v27 = v26->mutable_f_5();
  (void)v27;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 141));
  message->set_f_11(0x6e7ac0fbc2c560f);
  message->set_f_13(s->substr(0, 18));
  Message2::M2* v28 = message->mutable_f_45();
  (void)v28;  // Suppresses clang-tidy.
  message->set_f_15(0x9607d);
  message->set_f_28(0x15b4dfb2ff31d3f3);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_21(s->substr(0, 31));
  Message2::M10* v0_0 = message->add_f_62();
  (void)v0_0;  // Suppresses clang-tidy.
  Message2::M4* v1 = message->mutable_f_49();
  v1->set_f_0(0x7d69581);
  v1->set_f_3(s->substr(0, 28));
  v1->set_f_2(true);
  Message2::M9* v2_0 = message->add_f_59();
  v2_0->set_f_1(0x4a);
  message->add_f_2(Message2::E1_CONST_2);
  message->set_f_16(s->substr(0, 17));
  Message2::M3* v3 = message->mutable_f_47();
  v3->set_f_0(0x29dfbdb7908f2e58);
  Message2::M2* v4 = message->mutable_f_45();
  v4->set_f_0(0x77);
  message->set_f_9(0x24ae261);
  message->set_f_25(0x2b14ffef731d3c9e);
  message->set_f_20(0x4decaec97126f163);
  message->set_f_5(0x149ef629);
  Message2::M11* v5 = message->mutable_f_64();
  Message2::M11::M19* v6 = v5->mutable_f_6();
  v6->set_f_0(0x23);
  v6->set_f_1(0x71d4b67b4f54dac5);
  v5->set_f_0(s->substr(0, 22));
  Message2::M11::M31* v7 = v5->mutable_f_7();
  v7->set_f_0(true);
  Message2::M11::M31::M45* v8 = v7->mutable_f_3();
  Message2::M11::M31::M45::M52* v9 = v8->mutable_f_4();
  v9->set_f_4(0.910629);
  v9->set_f_1(0x74);
  v9->set_f_2(0x5b1616d);
  Message2::M11::M31::M45::M52::M66* v10_0 = v9->add_f_12();
  v10_0->set_f_1(0x3b9b0123795ff2c8);
  Message2::M11::M31::M45::M52::M66::M70* v11 = v10_0->mutable_f_7();
  v11->set_f_0(0x281a);
  v11->set_f_2(0x2806eb7a3);
  v11->set_f_1(0.760693);
  Message2::M11::M31::M45::M52::M66::E21 array_0[15] = {
      Message2::M11::M31::M45::M52::M66::E21_CONST_3,
      Message2::M11::M31::M45::M52::M66::E21_CONST_1,
      Message2::M11::M31::M45::M52::M66::E21_CONST_1,
      Message2::M11::M31::M45::M52::M66::E21_CONST_1,
      Message2::M11::M31::M45::M52::M66::E21_CONST_5,
      Message2::M11::M31::M45::M52::M66::E21_CONST_3,
      Message2::M11::M31::M45::M52::M66::E21_CONST_4,
      Message2::M11::M31::M45::M52::M66::E21_CONST_5,
      Message2::M11::M31::M45::M52::M66::E21_CONST_3,
      Message2::M11::M31::M45::M52::M66::E21_CONST_1,
      Message2::M11::M31::M45::M52::M66::E21_CONST_2,
      Message2::M11::M31::M45::M52::M66::E21_CONST_3,
      Message2::M11::M31::M45::M52::M66::E21_CONST_4,
      Message2::M11::M31::M45::M52::M66::E21_CONST_2,
      Message2::M11::M31::M45::M52::M66::E21_CONST_4,
  };
  for (auto v : array_0) {
    v10_0->add_f_2(v);
  }
  v10_0->set_f_4(0x29eb148a0e0e51bb);
  v10_0->set_f_3(0.622806);
  v10_0->set_f_0(s->substr(0, 23));
  v9->set_f_3(0x1c174e8d);
  v9->add_f_0(Message2::M11::M31::M45::M52::E18_CONST_4);
  v9->set_f_5(0x3597c79);
  Message2::M11::M31::M45::M52::M64* v12 = v9->mutable_f_11();
  v12->set_f_2(0x59);
  v12->set_f_0(0x7ab6a995529c7484);
  v12->set_f_1(0x5f);
  message->add_f_7(Message2::E3_CONST_3);
  Message2::M7* v13 = message->mutable_f_54();
  v13->set_f_0(s->substr(0, 25));
  Message2::M7::M22* v14 = v13->mutable_f_3();
  Message2::M7::M22::M35* v15 = v14->mutable_f_5();
  v15->set_f_0(false);
  v15->set_f_6(0x7b72bdddcaeff6ca);
  v15->set_f_3(0x4a);
  v15->set_f_2(0x4e200d8089c061a4);
  v15->set_f_1(s->substr(0, 20));
  v15->set_f_4(0x2dbc6331507eec11);
  Message2::M7::M22::M35::E14 array_1[21] = {
      Message2::M7::M22::M35::E14_CONST_3, Message2::M7::M22::M35::E14_CONST_3,
      Message2::M7::M22::M35::E14_CONST_1, Message2::M7::M22::M35::E14_CONST_3,
      Message2::M7::M22::M35::E14_CONST_1, Message2::M7::M22::M35::E14_CONST_1,
      Message2::M7::M22::M35::E14_CONST_5, Message2::M7::M22::M35::E14_CONST_5,
      Message2::M7::M22::M35::E14_CONST_2, Message2::M7::M22::M35::E14_CONST_2,
      Message2::M7::M22::M35::E14_CONST_3, Message2::M7::M22::M35::E14_CONST_1,
      Message2::M7::M22::M35::E14_CONST_3, Message2::M7::M22::M35::E14_CONST_2,
      Message2::M7::M22::M35::E14_CONST_5, Message2::M7::M22::M35::E14_CONST_1,
      Message2::M7::M22::M35::E14_CONST_1, Message2::M7::M22::M35::E14_CONST_4,
      Message2::M7::M22::M35::E14_CONST_2, Message2::M7::M22::M35::E14_CONST_5,
      Message2::M7::M22::M35::E14_CONST_1,
  };
  for (auto v : array_1) {
    v15->add_f_5(v);
  }
  v14->set_f_0(0x283);
  Message2::M7::M21* v16 = v13->mutable_f_2();
  v16->set_f_2(0x466b202e);
  v16->set_f_0(0xbd1b933);
  v16->set_f_1(s->substr(0, 26));
  Message2::M7::M21::M40* v17_0 = v16->add_f_13();
  (void)v17_0;  // Suppresses clang-tidy.
  v16->set_f_3(0x16447df98c35ae52);
  Message2::M6* v18 = message->mutable_f_53();
  Message2::M6::M24* v19 = v18->mutable_f_5();
  (void)v19;  // Suppresses clang-tidy.
  v18->set_f_2(0x46966b34);
  v18->set_f_1(0x5a45d9dcdef8dfa4);
  message->set_f_23(s->substr(0, 340));
  message->set_f_26(0x1329b2b52c5f3005);
  message->set_f_1(0.962694);
  message->add_f_6(Message2::E2_CONST_4);
  message->add_f_6(Message2::E2_CONST_4);
  message->add_f_6(Message2::E2_CONST_4);
  message->add_f_6(Message2::E2_CONST_2);
  message->set_f_11(0x192a7a230689f831);
  message->set_f_17(s->substr(0, 2));
  Message2::M5* v20_0 = message->add_f_52();
  v20_0->set_f_0(0x11502c87a5a61130);
  Message2::E4 array_2[19] = {
      Message2::E4_CONST_2, Message2::E4_CONST_5, Message2::E4_CONST_1,
      Message2::E4_CONST_2, Message2::E4_CONST_4, Message2::E4_CONST_1,
      Message2::E4_CONST_4, Message2::E4_CONST_2, Message2::E4_CONST_1,
      Message2::E4_CONST_4, Message2::E4_CONST_5, Message2::E4_CONST_4,
      Message2::E4_CONST_3, Message2::E4_CONST_1, Message2::E4_CONST_3,
      Message2::E4_CONST_3, Message2::E4_CONST_2, Message2::E4_CONST_3,
      Message2::E4_CONST_5,
  };
  for (auto v : array_2) {
    message->add_f_27(v);
  }
  Message2::M16* v21 = message->mutable_f_76();
  v21->set_f_2(0x7e);
  Message2::M16::M26* v22_0 = v21->add_f_13();
  v22_0->set_f_1(s->substr(0, 18));
  v22_0->set_f_4(s->substr(0, 107));
  v22_0->set_f_3(s->substr(0, 5));
  v22_0->set_f_6(0x18a2df00a997d978);
  v21->set_f_0(s->substr(0, 3));
  v21->set_f_1(true);
  v21->set_f_4(s->substr(0, 28));
  Message2::M14* v23 = message->mutable_f_70();
  v23->set_f_0(0x76);
  Message2::M14::M20* v24_0 = v23->add_f_2();
  Message2::M14::M20::M43* v25 = v24_0->mutable_f_3();
  Message2::M14::M20::M43::M54* v26 = v25->mutable_f_8();
  Message2::M14::M20::M43::M54::M67* v27 = v26->mutable_f_3();
  v27->set_f_4(0x378580a);
  v27->set_f_2(s->substr(0, 82));
  v27->set_f_1(false);
  v27->set_f_3(0.179255);
  v27->set_f_0(0x2bd83a5ec1747768);
  v25->set_f_2(s->substr(0, 94));
  Message2::M14::M20::M43::M59* v28 = v25->mutable_f_9();
  v28->set_f_0(s->substr(0, 74));
  Message2::M15* v29 = message->mutable_f_72();
  v29->set_f_0(Message2::M15::E5_CONST_3);
  Message2::M15::M28* v30 = v29->mutable_f_5();
  v30->set_f_0(0x1270a036);
  Message2::M15::M28::M36* v31 = v30->mutable_f_7();
  v31->set_f_0(0x261f7f1);
  Message2::M15::M28::M36::M49* v32_0 = v31->add_f_6();
  v32_0->set_f_1(true);
  v32_0->set_f_0(s->substr(0, 3395));
  Message2::M15::M28::M42* v33 = v30->mutable_f_11();
  v33->set_f_0(0x12e14d);
  Message2::M15::M28::M42::M51* v34 = v33->mutable_f_4();
  v34->set_f_1(0x2);
  v34->set_f_0(0x3b6c4de78281093a);
  v34->set_f_3(s->substr(0, 7));
  v34->set_f_2(Message2::M15::M28::M42::M51::E17_CONST_1);
  v30->set_f_1(Message2::M15::M28::E10_CONST_1);
  v30->set_f_3(0x4);
  Message2::M15::M28::M37* v35 = v30->mutable_f_10();
  v35->set_f_2(0x2d);
  v35->set_f_4(0x2452);
  v35->set_f_5(s->substr(0, 25));
  v35->set_f_1(0x74);
  message->set_f_28(0xedba4e6c26f4736);
  message->set_f_12(s->substr(0, 1));
  message->set_f_10(0x16d0f19a08eee396);
  message->set_f_19(0x1c);
  Message2::M13* v36 = message->mutable_f_68();
  Message2::M13::M18* v37 = v36->mutable_f_4();
  v37->set_f_3(0x6d);
  v37->set_f_4(0x23b3e079ab168b20);
  v37->set_f_0(0x4c);
  message->set_f_18(0x9839ab);
  message->set_f_15(0x20b9);
  message->set_f_29(0.841802);
  message->set_f_8(0x16cc2d);
  message->set_f_0(s->substr(0, 7));
  Message2::M8* v38 = message->mutable_f_55();
  v38->set_f_3(false);
  v38->set_f_1(0x71);
  v38->set_f_2(s->substr(0, 103));
  v38->set_f_0(0x6ff0e37f0ae086e1);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M9* v0_0 = message->add_f_59();
  Message2::M9::M17* v1 = v0_0->mutable_f_5();
  v1->set_f_0(s->substr(0, 27));
  v0_0->set_f_2(0x24eced0ebdaa9e33);
  v0_0->set_f_0(0x252416145d276cac);
  v0_0->set_f_1(0xd711943);
  Message2::M5* v2_0 = message->add_f_52();
  v2_0->set_f_0(0x130d4b4d398a09cb);
  Message2::M5::M30* v3 = v2_0->mutable_f_4();
  v3->set_f_0(true);
  message->set_f_17(s->substr(0, 17));
  message->set_f_13(s->substr(0, 151));
  message->set_f_0(s->substr(0, 8));
  message->set_f_16(s->substr(0, 8));
  Message2::M12* v4 = message->mutable_f_67();
  v4->set_f_1(s->substr(0, 4));
  v4->set_f_0(s->substr(0, 4));
  v4->set_f_2(s->substr(0, 404));
  v4->set_f_4(0x63);
  Message2::M8* v5 = message->mutable_f_55();
  v5->set_f_0(0x7b0fd2f505ed4b18);
  v5->set_f_2(s->substr(0, 17));
  v5->set_f_3(true);
  v5->set_f_1(0x1d93);
  message->set_f_25(0x10baaf936bba2088);
  Message2::E4 array_0[9] = {
      Message2::E4_CONST_5, Message2::E4_CONST_4, Message2::E4_CONST_5,
      Message2::E4_CONST_4, Message2::E4_CONST_1, Message2::E4_CONST_1,
      Message2::E4_CONST_1, Message2::E4_CONST_4, Message2::E4_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_27(v);
  }
  message->set_f_22(0xf5500a8);
  message->add_f_2(Message2::E1_CONST_3);
  Message2::M10* v6_0 = message->add_f_62();
  (void)v6_0;  // Suppresses clang-tidy.
  message->set_f_28(0x4f0ecc648de20280);
  message->set_f_4(true);
  message->set_f_8(0x11);
  Message2::M14* v7 = message->mutable_f_70();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_19(0x42);
  message->set_f_15(0x63);
  Message2::M7* v8 = message->mutable_f_54();
  Message2::M7::M27* v9_0 = v8->add_f_5();
  v9_0->set_f_4(0x1cab5f038f6184e4);
  v9_0->set_f_3(s->substr(0, 5));
  v9_0->set_f_2(0x42bded6);
  Message2::M7::M22* v10 = v8->mutable_f_3();
  v10->set_f_0(0x4c);
  Message2::M7::M22::M35* v11 = v10->mutable_f_5();
  v11->set_f_3(0x21);
  v11->set_f_4(0x49004c12b92a5fa4);
  v11->set_f_1(s->substr(0, 5));
  Message2::M7::M22::M35::M55* v12_0 = v11->add_f_10();
  v12_0->set_f_0(0xe126e);
  v11->set_f_2(0x17ce6f379b1819e2);
  v11->set_f_0(true);
  v11->set_f_6(0x7af76b2bc559e50f);
  Message2::M7::M22::M35::M58* v13_0 = v11->add_f_11();
  (void)v13_0;  // Suppresses clang-tidy.
  v11->add_f_5(Message2::M7::M22::M35::E14_CONST_4);
  v8->set_f_0(s->substr(0, 27));
  message->set_f_10(0x1c59ef1e3f722b64);
  Message2::M3* v14 = message->mutable_f_47();
  v14->set_f_0(0x473430f1c185505f);
  message->set_f_20(0x37092fffa4c39129);
  message->set_f_24(0x18769a26b35dbfd3);
  Message2::M16* v15 = message->mutable_f_76();
  v15->set_f_2(0x9cc7876);
  v15->set_f_0(s->substr(0, 4));
  Message2::M16::M26* v16_0 = v15->add_f_13();
  v16_0->set_f_2(s->substr(0, 9));
  v16_0->set_f_1(s->substr(0, 1));
  v16_0->set_f_4(s->substr(0, 27));
  v16_0->set_f_6(0x1cf5e61f2a0980c2);
  Message2::M16::M26::E9 array_1[21] = {
      Message2::M16::M26::E9_CONST_1, Message2::M16::M26::E9_CONST_2,
      Message2::M16::M26::E9_CONST_1, Message2::M16::M26::E9_CONST_4,
      Message2::M16::M26::E9_CONST_5, Message2::M16::M26::E9_CONST_2,
      Message2::M16::M26::E9_CONST_1, Message2::M16::M26::E9_CONST_2,
      Message2::M16::M26::E9_CONST_2, Message2::M16::M26::E9_CONST_1,
      Message2::M16::M26::E9_CONST_3, Message2::M16::M26::E9_CONST_3,
      Message2::M16::M26::E9_CONST_2, Message2::M16::M26::E9_CONST_1,
      Message2::M16::M26::E9_CONST_4, Message2::M16::M26::E9_CONST_4,
      Message2::M16::M26::E9_CONST_1, Message2::M16::M26::E9_CONST_4,
      Message2::M16::M26::E9_CONST_2, Message2::M16::M26::E9_CONST_5,
      Message2::M16::M26::E9_CONST_2,
  };
  for (auto v : array_1) {
    v16_0->add_f_5(v);
  }
  v15->set_f_4(s->substr(0, 24));
  v15->set_f_1(false);
  v15->set_f_3(0x4b);
  message->set_f_1(0.315771);
  message->set_f_21(s->substr(0, 188));
  Message2::M13* v17 = message->mutable_f_68();
  Message2::M13::M18* v18 = v17->mutable_f_4();
  v18->set_f_2(true);
  v18->set_f_3(0x7b9f73d);
  v18->set_f_6(0x7ad);
  v18->set_f_1(s->substr(0, 17));
  v18->set_f_5(0x356e98ad820200bd);
  v18->set_f_0(0x6);
  message->set_f_29(0.886803);
  message->add_f_7(Message2::E3_CONST_2);
  message->set_f_12(s->substr(0, 20));
  message->set_f_23(s->substr(0, 18));
  message->set_f_3(false);
  message->set_f_26(0x6b08ff4752e75b48);
  message->set_f_18(0x25);
  message->set_f_11(0x2f32ea1ca5efc13d);
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
}  // namespace fleetbench::rpc::P5::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
