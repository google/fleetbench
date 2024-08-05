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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message2.pb.h"

namespace fleetbench::rpc::P8::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_7(0x33ed77b);
  message->set_f_13(0x233be8d3bd4145de);
  message->set_f_8(0x6a129fe);
  message->set_f_6(s->substr(0, 22));
  message->set_f_15(s->substr(0, 7));
  message->set_f_27(0x57);
  message->set_f_9(s->substr(0, 8));
  Message2::M9* v0 = message->mutable_f_63();
  v0->set_f_0(0x136fcb909df9644c);
  Message2::M9::M32* v1 = v0->mutable_f_7();
  v1->set_f_2(s->substr(0, 7));
  v1->set_f_1(s->substr(0, 32));
  v1->set_f_0(s->substr(0, 83));
  v1->set_f_4(0x1368c471);
  v0->set_f_2(0x3c);
  v0->set_f_1(0x33c2918598e992fb);
  message->set_f_22(0xaa6ffa4);
  message->set_f_16(s->substr(0, 2));
  message->set_f_4(0.180518);
  message->set_f_19(0x877b8);
  message->set_f_2(0xc6c557e);
  message->set_f_29(0x58);
  message->set_f_11(0x1d1514);
  message->set_f_3(0x5f511c8);
  Message2::M4* v2 = message->mutable_f_53();
  Message2::M4::M31* v3 = v2->mutable_f_4();
  v3->set_f_0(0x324abe35b92eeb13);
  v2->set_f_0(0x175b557a93099f75);
  message->set_f_18(0x8b32ad9b4a237e2);
  Message2::M7* v4_0 = message->add_f_61();
  v4_0->set_f_0(0x1664b6);
  v4_0->set_f_6(0x45b22666);
  v4_0->set_f_2(0x1725e302b5f51cda);
  message->set_f_1(0.078888);
  Message2::M11* v5_0 = message->add_f_67();
  v5_0->set_f_0(0.660237);
  Message2::M11::M19* v6_0 = v5_0->add_f_3();
  v6_0->set_f_1(0x453);
  v6_0->set_f_4(s->substr(0, 54));
  v6_0->set_f_0(0x130010fa);
  v6_0->set_f_2(0x8d6154e1fb50290);
  v6_0->set_f_3(true);
  Message2::M11::M25* v7 = v5_0->mutable_f_5();
  v7->set_f_0(0xae35095f1756b56);
  message->set_f_25(0x3eac091fa3134b77);
  Message2::M2* v8 = message->mutable_f_50();
  v8->set_f_3(s->substr(0, 119));
  Message2::M2::M24* v9 = v8->mutable_f_16();
  v9->set_f_0(s->substr(0, 6));
  v8->set_f_0(0x3f50);
  Message2::M2::M18* v10_0 = v8->add_f_15();
  v10_0->set_f_2(0x4f);
  v10_0->set_f_0(true);
  v10_0->set_f_1(0.128438);
  v8->set_f_4(s->substr(0, 1));
  v8->set_f_1(0.822917);
  v8->set_f_6(0x5389792b);
  v8->set_f_5(0x270e6bfcb9e85e94);
  v8->set_f_2(0xb2ec461);
  Message2::M12* v11 = message->mutable_f_68();
  v11->set_f_1(s->substr(0, 1));
  Message2::M12::M13* v12_0 = v11->add_f_3();
  v12_0->set_f_1(false);
  v12_0->set_f_2(s->substr(0, 376));
  v12_0->set_f_0(0xd996f1f8ecc516e);
  v12_0->set_f_3(0x5d4e3c28ac4c9ad3);
  Message2::M12::M22* v13 = v11->mutable_f_4();
  Message2::M12::M22::M34* v14 = v13->mutable_f_6();
  Message2::M12::M22::M34::M46* v15_0 = v14->add_f_6();
  v15_0->set_f_0(0x1c54f8ae475a0a);
  Message2::M12::M22::E4 array_1[5] = {
      Message2::M12::M22::E4_CONST_3, Message2::M12::M22::E4_CONST_3,
      Message2::M12::M22::E4_CONST_5, Message2::M12::M22::E4_CONST_4,
      Message2::M12::M22::E4_CONST_5,
  };
  for (auto v : array_1) {
    v13->add_f_0(v);
  }
  v13->set_f_1(0x199178);
  message->set_f_24(0x68975de2beec51e4);
  Message2::M1* v16_0 = message->add_f_46();
  v16_0->add_f_0(Message2::M1::E1_CONST_2);
  Message2::M1::M14* v17_0 = v16_0->add_f_2();
  v17_0->set_f_2(0x23f96d46a98b26b1);
  v17_0->set_f_6(0x5a);
  v17_0->set_f_3(0x935d631);
  v17_0->set_f_0(0.681277);
  v17_0->set_f_1(0x74190932c194f196);
  message->set_f_14(0x98b78ce);
  Message2::M8* v18 = message->mutable_f_62();
  (void)v18;  // Suppresses clang-tidy.
  Message2::M3* v19 = message->mutable_f_51();
  Message2::M3::M15* v20_0 = v19->add_f_3();
  v20_0->set_f_22(false);
  v20_0->set_f_25(0x774085144883837c);
  v20_0->set_f_4(0x13a4132);
  v20_0->set_f_2(false);
  v20_0->set_f_15(0x34);
  v20_0->set_f_17(0xf5c38fefe05ca80);
  v20_0->set_f_9(0x2b);
  v20_0->set_f_12(s->substr(0, 607));
  v20_0->set_f_13(0x72);
  v20_0->set_f_1(0xe);
  v20_0->set_f_26(0x35e7);
  v20_0->set_f_23(0xf7334fbf44a9563);
  v20_0->set_f_7(0x75);
  v20_0->set_f_5(0x722245d49a467904);
  v20_0->set_f_3(0x6095078fed512a36);
  v20_0->set_f_10(0x3f1d5a20ff92ba75);
  v20_0->set_f_6(s->substr(0, 5));
  v20_0->add_f_29(Message2::M3::M15::E2_CONST_5);
  v20_0->set_f_24(0x27d6);
  v20_0->set_f_28(0x3355101f202615d2);
  v20_0->set_f_19(0xe358899);
  v20_0->set_f_11(0x59d2f0be);
  message->set_f_26(0x2915d3a3259e02b1);
  message->set_f_0(s->substr(0, 2));
  Message2::M10* v21 = message->mutable_f_64();
  v21->set_f_0(true);
  v21->set_f_3(0.445717);
  v21->set_f_1(0.186823);
  message->set_f_5(s->substr(0, 1));
  message->set_f_12(0x71e2c64a);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M10* v0 = message->mutable_f_64();
  v0->set_f_3(0.572572);
  v0->set_f_2(0x2e7d);
  v0->set_f_0(false);
  v0->set_f_1(0.609053);
  message->set_f_26(0x554d7b9635beda01);
  message->set_f_12(0x4f783d52);
  message->set_f_11(0xe47d301);
  message->set_f_29(0x76);
  Message2::M5* v1 = message->mutable_f_54();
  v1->set_f_0(0x5f6df47f181b675d);
  Message2::M5::M28* v2_0 = v1->add_f_6();
  Message2::M5::M28::M36* v3_0 = v2_0->add_f_3();
  v3_0->set_f_1(0x141a6dd2aa40bc1a);
  v3_0->set_f_29(s->substr(0, 8));
  v3_0->set_f_13(0x298f78c67b79b4e6);
  v3_0->add_f_7(Message2::M5::M28::M36::E5_CONST_4);
  Message2::M5::M28::M36::M41* v4_0 = v3_0->add_f_50();
  v4_0->set_f_0(false);
  v3_0->set_f_3(0x628f014054bd1b90);
  v3_0->set_f_4(0x31bc8248);
  v3_0->set_f_2(0x34b258c9cf640665);
  v3_0->set_f_18(0x2bf09dc9d4dd049);
  v3_0->set_f_27(0x15a6);
  v3_0->set_f_26(0x18a37840876ca6b8);
  v3_0->set_f_20(0x12377eb414eb822e);
  v3_0->set_f_5(0.517123);
  v3_0->set_f_10(s->substr(0, 5));
  v3_0->add_f_16(Message2::M5::M28::M36::E6_CONST_2);
  v3_0->set_f_24(0xe266bfd193a71f3);
  v3_0->set_f_25(s->substr(0, 30));
  v3_0->set_f_19(s->substr(0, 1));
  v3_0->set_f_6(s->substr(0, 8));
  v3_0->set_f_21(s->substr(0, 28));
  v3_0->set_f_23(0x629a6df0);
  v3_0->set_f_17(0xec53764dec0c6db);
  v3_0->set_f_22(0x2c120c27);
  v3_0->set_f_28(0x5509eb6fd09ab78f);
  v3_0->set_f_14(s->substr(0, 20));
  Message2::M5::M28::M36::M42* v5_0 = v3_0->add_f_52();
  v5_0->set_f_0(0x5e073fa4e630634a);
  v3_0->set_f_15(s->substr(0, 42));
  v3_0->set_f_9(0x1b25634);
  v2_0->set_f_0(0xc6a0b68cab95a8);
  Message2::M5::M20* v6 = v1->mutable_f_5();
  v6->set_f_1(0x7f5947599e9b0ac8);
  v6->set_f_0(0x1a76b9);
  v1->set_f_1(true);
  Message2::M12* v7 = message->mutable_f_68();
  v7->set_f_1(s->substr(0, 10));
  Message2::M12::M13* v8_0 = v7->add_f_3();
  v8_0->set_f_1(false);
  v8_0->set_f_3(0x506fe50d7f348e43);
  v8_0->set_f_2(s->substr(0, 2));
  Message2::M8* v9 = message->mutable_f_62();
  v9->set_f_0(0x7578b17f);
  message->set_f_27(0x71);
  Message2::M9* v10 = message->mutable_f_63();
  v10->set_f_1(0x75308dbe61b60bbc);
  v10->set_f_0(0x53636dce12c85ef2);
  v10->set_f_2(0x17);
  Message2::M9::M32* v11 = v10->mutable_f_7();
  v11->set_f_4(0x366b28ce);
  v11->set_f_3(s->substr(0, 2));
  v11->set_f_2(s->substr(0, 18));
  v11->set_f_0(s->substr(0, 15));
  v11->set_f_1(s->substr(0, 85));
  message->set_f_10(0x73ad1f3b);
  message->set_f_20(0x8a4637b);
  message->set_f_15(s->substr(0, 58));
  Message2::M6* v12 = message->mutable_f_57();
  Message2::M6::M27* v13_0 = v12->add_f_10();
  v13_0->set_f_0(0x49f531a740b4073f);
  Message2::M6::M30* v14 = v12->mutable_f_13();
  v14->set_f_1(0x79);
  v14->set_f_0(0x4d);
  v12->set_f_2(false);
  Message2::M6::M26* v15 = v12->mutable_f_8();
  v15->set_f_0(false);
  Message2::M6::M17* v16_0 = v12->add_f_7();
  v16_0->set_f_0(false);
  Message2::M6::M16* v17_0 = v12->add_f_6();
  Message2::M6::M16::M33* v18_0 = v17_0->add_f_3();
  Message2::M6::M16::M33::M44* v19 = v18_0->mutable_f_5();
  v19->set_f_0(s->substr(0, 31));
  Message2::M6::M16::M33::M48* v20 = v18_0->mutable_f_9();
  v20->set_f_2(s->substr(0, 14));
  v20->set_f_1(true);
  Message2::M6::M16::M33::M45* v21 = v18_0->mutable_f_7();
  v21->set_f_0(0xd3c18ab62ee4478);
  Message2::M6::M16::M33::M47* v22 = v18_0->mutable_f_8();
  v22->set_f_3(false);
  Message2::M6::M16::M33::M47::M50* v23 = v22->mutable_f_11();
  v23->set_f_0(0xb54df23);
  Message2::M6::M16::M33::M47::M52* v24 = v22->mutable_f_12();
  v24->add_f_0(Message2::M6::M16::M33::M47::M52::E7_CONST_4);
  v24->add_f_0(Message2::M6::M16::M33::M47::M52::E7_CONST_1);
  v24->add_f_0(Message2::M6::M16::M33::M47::M52::E7_CONST_2);
  v24->add_f_0(Message2::M6::M16::M33::M47::M52::E7_CONST_4);
  v22->set_f_1(0x2c72c56);
  v22->set_f_0(s->substr(0, 155));
  Message2::M6::M16::M33::M38* v25 = v18_0->mutable_f_4();
  (void)v25;  // Suppresses clang-tidy.
  v18_0->set_f_1(s->substr(0, 11));
  v17_0->set_f_0(0x200004022aa9ecba);
  message->set_f_4(0.399159);
  Message2::M4* v26 = message->mutable_f_53();
  v26->set_f_0(0x257d78b13d127c2b);
  Message2::M3* v27 = message->mutable_f_51();
  v27->set_f_0(0x3860479e9cfa9c11);
  message->set_f_14(0xfb84f07);
  message->set_f_3(0x104161b);
  message->set_f_22(0x134767);
  message->set_f_19(0x25ee);
  message->set_f_1(0.534818);
  Message2::M2* v28 = message->mutable_f_50();
  Message2::M2::M24* v29 = v28->mutable_f_16();
  v29->set_f_0(s->substr(0, 6));
  v28->set_f_5(0x1e5673d1507560eb);
  v28->set_f_1(0.139424);
  v28->set_f_2(0xb9fc2);
  v28->set_f_6(0x37d0c140);
  v28->set_f_0(0x60a98ce);
  Message2::M2::M18* v30_0 = v28->add_f_15();
  v30_0->set_f_2(0x54a9308);
  v30_0->set_f_0(true);
  v28->set_f_3(s->substr(0, 1));
  v28->set_f_4(s->substr(0, 45));
  Message2::M7* v31_0 = message->add_f_61();
  v31_0->set_f_2(0xfd4879a1f4a4fb0);
  v31_0->set_f_4(s->substr(0, 15));
  v31_0->set_f_5(0x326);
  v31_0->set_f_1(s->substr(0, 5));
  v31_0->set_f_0(0x7a);
  message->set_f_8(0x812ab77);
  message->set_f_17(0xcc8);
  message->set_f_2(0x52);
  message->set_f_25(0x4870660709a159fc);
  message->set_f_5(s->substr(0, 5));
  message->set_f_18(0xffe0f81c0d401b9);
  Message2::M11* v32_0 = message->add_f_67();
  Message2::M11::M25* v33 = v32_0->mutable_f_5();
  v33->set_f_0(0x5e873c583bf519cb);
  v32_0->set_f_0(0.168066);
  Message2::M11::M19* v34_0 = v32_0->add_f_3();
  v34_0->set_f_0(0x69926fd8);
  v34_0->set_f_1(0x6beee82);
  v34_0->set_f_2(0x3c8ef0adc099ad55);
  message->set_f_13(0x54f652d69e7cbc97);
  message->set_f_6(s->substr(0, 18));
  Message2::M1* v35_0 = message->add_f_46();
  Message2::M1::M23* v36_0 = v35_0->add_f_3();
  v36_0->set_f_0(s->substr(0, 19));
  v36_0->set_f_1(s->substr(0, 477));
  Message2::M1::M14* v37_0 = v35_0->add_f_2();
  v37_0->set_f_4(0xbcba55);
  v37_0->set_f_6(0x76);
  v37_0->set_f_2(0x5e0045f2d7fbba0a);
  v37_0->set_f_5(0.406725);
  v37_0->set_f_0(0.679709);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M11* v0_0 = message->add_f_67();
  Message2::M11::M25* v1 = v0_0->mutable_f_5();
  v1->set_f_0(0x6288b98ac059bebd);
  Message2::M11::M19* v2_0 = v0_0->add_f_3();
  v2_0->set_f_1(0xd99ab84);
  v2_0->set_f_3(true);
  v2_0->set_f_2(0x4bec791380f43981);
  v2_0->set_f_4(s->substr(0, 2));
  v0_0->set_f_0(0.043456);
  Message2::M11::M21* v3 = v0_0->mutable_f_4();
  Message2::M11::M21::E3 array_0[13] = {
      Message2::M11::M21::E3_CONST_3, Message2::M11::M21::E3_CONST_3,
      Message2::M11::M21::E3_CONST_4, Message2::M11::M21::E3_CONST_1,
      Message2::M11::M21::E3_CONST_5, Message2::M11::M21::E3_CONST_4,
      Message2::M11::M21::E3_CONST_5, Message2::M11::M21::E3_CONST_3,
      Message2::M11::M21::E3_CONST_1, Message2::M11::M21::E3_CONST_5,
      Message2::M11::M21::E3_CONST_3, Message2::M11::M21::E3_CONST_3,
      Message2::M11::M21::E3_CONST_2,
  };
  for (auto v : array_0) {
    v3->add_f_0(v);
  }
  message->set_f_4(0.282916);
  message->set_f_17(0x7e);
  Message2::M10* v4 = message->mutable_f_64();
  v4->set_f_3(0.360471);
  v4->set_f_2(0x4c);
  v4->set_f_1(0.209255);
  Message2::M12* v5 = message->mutable_f_68();
  v5->set_f_0(0xf242a67);
  Message2::M12::M13* v6_0 = v5->add_f_3();
  v6_0->set_f_1(false);
  v6_0->set_f_0(0x1a98bdb813ef9fb6);
  v6_0->set_f_3(0x24a377fec0aefa18);
  v6_0->set_f_2(s->substr(0, 2));
  Message2::M12::M22* v7 = v5->mutable_f_4();
  Message2::M12::M22::M34* v8 = v7->mutable_f_6();
  v8->set_f_0(s->substr(0, 1));
  Message2::M12::M22::M34::M39* v9_0 = v8->add_f_4();
  v9_0->set_f_0(false);
  Message2::M12::M22::M34::M46* v10_0 = v8->add_f_6();
  (void)v10_0;  // Suppresses clang-tidy.
  v7->set_f_2(0x5346dd16c5776b0b);
  v7->set_f_1(0x8f56a);
  message->set_f_8(0xb);
  Message2::M4* v11 = message->mutable_f_53();
  Message2::M4::M31* v12 = v11->mutable_f_4();
  v12->set_f_0(0x49eb8986e7643e4c);
  v11->set_f_0(0x43df4f97c53f1a02);
  message->set_f_3(0x74a64);
  message->set_f_6(s->substr(0, 5));
  message->set_f_5(s->substr(0, 2));
  message->set_f_18(0x1a86d157b79abf74);
  message->set_f_25(0x21bafeb14b859ae0);
  Message2::M1* v13_0 = message->add_f_46();
  v13_0->add_f_0(Message2::M1::E1_CONST_5);
  Message2::M1::M23* v14_0 = v13_0->add_f_3();
  v14_0->set_f_2(0.023549);
  v14_0->set_f_0(s->substr(0, 19));
  message->set_f_19(0x52);
  message->set_f_15(s->substr(0, 9));
  message->set_f_1(0.737024);
  message->set_f_26(0x609da77a04787ba4);
  Message2::M8* v15 = message->mutable_f_62();
  v15->set_f_0(0x6692b8f2);
  message->set_f_29(0x39);
  message->set_f_12(0x1f60018e);
  message->set_f_24(0x40a1575d52909b73);
  message->set_f_21(0x13b457e6ad73ce3e);
  message->set_f_0(s->substr(0, 32));
  Message2::M6* v16 = message->mutable_f_57();
  Message2::M6::M16* v17_0 = v16->add_f_6();
  Message2::M6::M16::M33* v18_0 = v17_0->add_f_3();
  Message2::M6::M16::M33::M47* v19 = v18_0->mutable_f_8();
  v19->set_f_0(s->substr(0, 3));
  v19->set_f_3(false);
  Message2::M6::M16::M33::M47::M52* v20 = v19->mutable_f_12();
  (void)v20;  // Suppresses clang-tidy.
  v19->set_f_2(false);
  Message2::M6::M16::M33::M45* v21 = v18_0->mutable_f_7();
  v21->set_f_0(0x4f3936585311c861);
  v18_0->set_f_1(s->substr(0, 9));
  v18_0->set_f_0(0x1312731c);
  Message2::M6::M16::M33::M44* v22 = v18_0->mutable_f_5();
  v22->set_f_0(s->substr(0, 3));
  Message2::M6::M16::M33::M48* v23 = v18_0->mutable_f_9();
  v23->set_f_2(s->substr(0, 2));
  v23->set_f_0(0x92bed54a88cca1d);
  v23->set_f_1(false);
  v17_0->set_f_0(0x6dd3029b56bc9f47);
  Message2::M6::M30* v24 = v16->mutable_f_13();
  v24->set_f_1(0x3a5f);
  v16->set_f_1(0x5c);
  Message2::M6::M26* v25 = v16->mutable_f_8();
  (void)v25;  // Suppresses clang-tidy.
  v16->set_f_2(false);
  Message2::M6::M17* v26_0 = v16->add_f_7();
  v26_0->set_f_0(true);
  Message2::M6::M27* v27_0 = v16->add_f_10();
  (void)v27_0;  // Suppresses clang-tidy.
  message->set_f_16(s->substr(0, 404));
  message->set_f_20(0x6f);
  message->set_f_23(s->substr(0, 9));
  message->set_f_14(0x53);
  Message2::M9* v28 = message->mutable_f_63();
  v28->set_f_1(0x44179c9d34a36d43);
  v28->set_f_0(0x7c3bb1b51ab9dfbb);
  message->set_f_28(0x65fef8508328d27e);
  message->set_f_27(0x83c3694);
  message->set_f_7(0x50);
  Message2::M5* v29 = message->mutable_f_54();
  Message2::M5::M20* v30 = v29->mutable_f_5();
  v30->set_f_0(0x23748);
  v30->set_f_1(0x7d92dd2ccc450587);
  v29->set_f_1(false);
  Message2::M5::M28* v31_0 = v29->add_f_6();
  Message2::M5::M28::M36* v32_0 = v31_0->add_f_3();
  v32_0->set_f_22(0x59909762);
  v32_0->set_f_29(s->substr(0, 124));
  v32_0->set_f_14(s->substr(0, 6));
  v32_0->set_f_11(0x78110f41);
  v32_0->set_f_4(0x939a617);
  v32_0->set_f_25(s->substr(0, 5));
  v32_0->set_f_8(0x1baa87);
  v32_0->set_f_0(0x71);
  v32_0->set_f_18(0x53603ca74f34f291);
  v32_0->set_f_24(0x68fe9689a5ce1c60);
  v32_0->set_f_13(0x40888747ff8834);
  v32_0->set_f_17(0x2c0901303e281b50);
  Message2::M5::M28::M36::M42* v33_0 = v32_0->add_f_52();
  v33_0->set_f_0(0x74a91c48e4f81990);
  v32_0->set_f_3(0x592cf2bc3f9a4582);
  v32_0->set_f_15(s->substr(0, 4));
  v32_0->add_f_7(Message2::M5::M28::M36::E5_CONST_4);
  Message2::M5::M28::M36::M41* v34_0 = v32_0->add_f_50();
  v34_0->set_f_0(true);
  v32_0->set_f_9(0x1);
  v32_0->set_f_21(s->substr(0, 18));
  v32_0->set_f_20(0x427e26d57bcc6dc5);
  v32_0->set_f_26(0x47090f5075c8427a);
  v32_0->set_f_12(0x4c65927b9e8f241b);
  v32_0->set_f_19(s->substr(0, 30));
  v32_0->set_f_27(0x3359);
  v32_0->set_f_2(0x2724aaaf7b29079c);
  v32_0->set_f_28(0x18623b1788c49764);
  Message2::M5::M28::M36::M43* v35 = v32_0->mutable_f_53();
  Message2::M5::M28::M36::M43::M49* v36 = v35->mutable_f_3();
  v36->set_f_0(0x76);
  v32_0->set_f_5(0.228965);
  v31_0->set_f_0(0x142fd36076bbd947);
  v29->set_f_0(0x10c17f7c41431c7c);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_51();
  Message2::M3::M29* v1 = v0->mutable_f_4();
  v1->set_f_0(false);
  Message2::M3::M29::M35* v2_0 = v1->add_f_2();
  v2_0->set_f_1(s->substr(0, 20));
  Message2::M3::M29::M35::M40* v3_0 = v2_0->add_f_5();
  v3_0->set_f_1(0x5664925d3d152157);
  v3_0->set_f_2(0x7aa7541);
  v3_0->set_f_0(0x71fd867805b5ad15);
  v2_0->set_f_3(0x34);
  v2_0->set_f_2(s->substr(0, 8));
  Message2::M3::M15* v4_0 = v0->add_f_3();
  v4_0->set_f_22(true);
  v4_0->set_f_24(0x6f50d9);
  v4_0->set_f_28(0x3118fda53552b888);
  v4_0->set_f_2(true);
  v4_0->set_f_27(0x5874e97dd70f96ac);
  v4_0->set_f_14(0xc282400);
  v4_0->set_f_12(s->substr(0, 10));
  v4_0->set_f_3(0x587568682dc7faa9);
  v4_0->set_f_10(0x4e6702f1639affbf);
  v4_0->set_f_18(0x64f0abcd85a1824f);
  v4_0->set_f_23(0x2e67c19fafcf8e82);
  v4_0->set_f_1(0xac44be9);
  v4_0->set_f_17(0x4c5e79e52b09add5);
  v4_0->set_f_19(0x9a23583);
  v4_0->set_f_30(0x3b38f94b8c6d1db4);
  v4_0->set_f_21(false);
  v4_0->set_f_9(0x397592e);
  v4_0->set_f_26(0xf38964e);
  v4_0->set_f_8(0x549073a4c492234a);
  v4_0->set_f_16(s->substr(0, 29));
  v4_0->set_f_0(0x3b6f4d35277289f4);
  v4_0->set_f_6(s->substr(0, 8));
  v4_0->set_f_13(0x1de1);
  Message2::M3::M15::E2 array_0[19] = {
      Message2::M3::M15::E2_CONST_2, Message2::M3::M15::E2_CONST_3,
      Message2::M3::M15::E2_CONST_3, Message2::M3::M15::E2_CONST_3,
      Message2::M3::M15::E2_CONST_2, Message2::M3::M15::E2_CONST_1,
      Message2::M3::M15::E2_CONST_1, Message2::M3::M15::E2_CONST_3,
      Message2::M3::M15::E2_CONST_5, Message2::M3::M15::E2_CONST_5,
      Message2::M3::M15::E2_CONST_5, Message2::M3::M15::E2_CONST_2,
      Message2::M3::M15::E2_CONST_5, Message2::M3::M15::E2_CONST_1,
      Message2::M3::M15::E2_CONST_1, Message2::M3::M15::E2_CONST_5,
      Message2::M3::M15::E2_CONST_4, Message2::M3::M15::E2_CONST_2,
      Message2::M3::M15::E2_CONST_3,
  };
  for (auto v : array_0) {
    v4_0->add_f_29(v);
  }
  v4_0->set_f_11(0x40716046);
  message->set_f_19(0xf8f5e90);
  message->set_f_1(0.010250);
  message->set_f_14(0xfb2aa53);
  message->set_f_2(0x6b);
  message->set_f_4(0.949562);
  Message2::M8* v5 = message->mutable_f_62();
  v5->set_f_0(0x18e18f63);
  Message2::M10* v6 = message->mutable_f_64();
  v6->set_f_2(0x3c15bfa);
  v6->set_f_1(0.895972);
  v6->set_f_3(0.385326);
  v6->set_f_0(true);
  message->set_f_10(0x5c684d8e);
  message->set_f_17(0x37);
  message->set_f_15(s->substr(0, 29));
  message->set_f_0(s->substr(0, 5));
  Message2::M9* v7 = message->mutable_f_63();
  v7->set_f_2(0x998876d);
  v7->set_f_0(0x233af6317ffabaf6);
  v7->set_f_1(0x3bb6b16e43db850a);
  Message2::M9::M32* v8 = v7->mutable_f_7();
  v8->set_f_1(s->substr(0, 16));
  v8->set_f_2(s->substr(0, 8));
  message->set_f_9(s->substr(0, 8));
  message->set_f_28(0x2c5416b16dad8196);
  message->set_f_29(0x1d);
  message->set_f_27(0x2ccb);
  Message2::M2* v9 = message->mutable_f_50();
  v9->set_f_6(0x1edb7bf9);
  v9->set_f_1(0.781932);
  v9->set_f_2(0x26);
  v9->set_f_4(s->substr(0, 5));
  v9->set_f_3(s->substr(0, 76));
  Message2::M2::M18* v10_0 = v9->add_f_15();
  v10_0->set_f_2(0x3667b3e);
  v10_0->set_f_0(false);
  v10_0->set_f_1(0.484861);
  Message2::M11* v11_0 = message->add_f_67();
  Message2::M11::M19* v12_0 = v11_0->add_f_3();
  v12_0->set_f_0(0x56341efc);
  v12_0->set_f_4(s->substr(0, 20));
  v12_0->set_f_2(0x6de532776585a643);
  v12_0->set_f_3(true);
  Message2::M11::M25* v13 = v11_0->mutable_f_5();
  v13->set_f_0(0x3b2c3f6a4b1ea399);
  Message2::M11::M21* v14 = v11_0->mutable_f_4();
  v14->add_f_0(Message2::M11::M21::E3_CONST_4);
  v11_0->set_f_0(0.300994);
  Message2::M6* v15 = message->mutable_f_57();
  Message2::M6::M27* v16_0 = v15->add_f_10();
  v16_0->set_f_0(0x71f19471fe6c4e72);
  Message2::M6::M26* v17 = v15->mutable_f_8();
  (void)v17;  // Suppresses clang-tidy.
  Message2::M6::M16* v18_0 = v15->add_f_6();
  Message2::M6::M16::M33* v19_0 = v18_0->add_f_3();
  v19_0->set_f_1(s->substr(0, 2074));
  Message2::M6::M16::M33::M44* v20 = v19_0->mutable_f_5();
  v20->set_f_0(s->substr(0, 6));
  Message2::M6::M16::M33::M47* v21 = v19_0->mutable_f_8();
  Message2::M6::M16::M33::M47::M50* v22 = v21->mutable_f_11();
  (void)v22;  // Suppresses clang-tidy.
  v21->set_f_3(true);
  Message2::M6::M16::M33::M47::M52* v23 = v21->mutable_f_12();
  (void)v23;  // Suppresses clang-tidy.
  v21->set_f_2(false);
  Message2::M6::M16::M33::M38* v24 = v19_0->mutable_f_4();
  (void)v24;  // Suppresses clang-tidy.
  Message2::M6::M16::M33::M48* v25 = v19_0->mutable_f_9();
  v25->set_f_1(false);
  v25->set_f_2(s->substr(0, 74));
  v25->set_f_0(0x414e05228cedaef0);
  v18_0->set_f_0(0x527612544bcc12b8);
  v15->set_f_1(0x6a);
  v15->set_f_2(false);
  v15->set_f_0(0x6e);
  Message2::M6::M30* v26 = v15->mutable_f_13();
  v26->set_f_1(0x7f78ecb);
  message->set_f_20(0x6);
  message->set_f_13(0x3a4841f61f91f833);
  message->set_f_3(0x3112);
  message->set_f_5(s->substr(0, 2));
  message->set_f_23(s->substr(0, 366));
  message->set_f_18(0x5d3ce195c3836120);
  message->set_f_24(0x23e1029d5337b020);
  message->set_f_21(0x1f09d2e2743d0c67);
  message->set_f_7(0xfa52ab9);
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
}  // namespace fleetbench::rpc::P8::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_
