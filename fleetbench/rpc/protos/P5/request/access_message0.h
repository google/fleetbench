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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message0.pb.h"

namespace fleetbench::rpc::P5::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_22(false);
  message->set_f_24(0x353b35dd);
  Message0::M5* v0 = message->mutable_f_57();
  v0->set_f_0(0x278f29ff28fe981f);
  Message0::M2* v1 = message->mutable_f_52();
  v1->set_f_2(0x89765f1);
  v1->set_f_4(0x27);
  v1->add_f_3(Message0::M2::E5_CONST_3);
  Message0::M6* v2_0 = message->add_f_58();
  v2_0->set_f_2(true);
  v2_0->set_f_4(0x5);
  v2_0->set_f_0(false);
  v2_0->set_f_1(0x1fdc48);
  v2_0->set_f_3(0x50);
  Message0::M1* v3_0 = message->add_f_51();
  v3_0->set_f_0(s->substr(0, 23));
  Message0::M1::M18* v4_0 = v3_0->add_f_3();
  Message0::M1::M18::M35* v5 = v4_0->mutable_f_3();
  Message0::M1::M18::M35::M65* v6 = v5->mutable_f_8();
  v6->set_f_0(true);
  v5->set_f_0(0x49b19b2);
  Message0::M1::M18::M35::M53* v7 = v5->mutable_f_7();
  v7->set_f_3(s->substr(0, 4));
  v7->set_f_4(0x57ee59529c1f4c17);
  v7->set_f_0(s->substr(0, 1));
  v7->set_f_5(0x7254afb32e9e40);
  v4_0->set_f_0(0x4cea369e3);
  Message0::M1::M18::M28* v8_0 = v4_0->add_f_2();
  v8_0->set_f_1(s->substr(0, 110));
  v8_0->set_f_2(s->substr(0, 422));
  v8_0->set_f_4(0.981499);
  Message0::M1::M18::M28::M56* v9_0 = v8_0->add_f_11();
  Message0::M1::M18::M28::M56::E23 array_1[12] = {
      Message0::M1::M18::M28::M56::E23_CONST_3,
      Message0::M1::M18::M28::M56::E23_CONST_5,
      Message0::M1::M18::M28::M56::E23_CONST_4,
      Message0::M1::M18::M28::M56::E23_CONST_2,
      Message0::M1::M18::M28::M56::E23_CONST_2,
      Message0::M1::M18::M28::M56::E23_CONST_5,
      Message0::M1::M18::M28::M56::E23_CONST_2,
      Message0::M1::M18::M28::M56::E23_CONST_5,
      Message0::M1::M18::M28::M56::E23_CONST_3,
      Message0::M1::M18::M28::M56::E23_CONST_1,
      Message0::M1::M18::M28::M56::E23_CONST_2,
      Message0::M1::M18::M28::M56::E23_CONST_5,
  };
  for (auto v : array_1) {
    v9_0->add_f_0(v);
  }
  v9_0->set_f_2(0.970667);
  v9_0->set_f_1(0x26a);
  Message0::M1::M18::M28::M68* v10_0 = v8_0->add_f_13();
  Message0::M1::M18::M28::M68::M74* v11 = v10_0->mutable_f_2();
  v11->set_f_3(0x681891a3f2930a43);
  v11->set_f_4(Message0::M1::M18::M28::M68::M74::E26_CONST_1);
  v11->set_f_0(0x3);
  v11->set_f_2(s->substr(0, 5));
  v10_0->set_f_0(0xcd6fc85222e200b);
  message->set_f_9(0x47ce17b77a050f34);
  message->set_f_23(0x876a573);
  message->set_f_18(true);
  Message0::M9* v12 = message->mutable_f_63();
  v12->set_f_3(s->substr(0, 6));
  v12->set_f_1(s->substr(0, 20));
  Message0::M9::M26* v13 = v12->mutable_f_14();
  Message0::M9::M26::M43* v14_0 = v13->add_f_10();
  v14_0->set_f_0(0xb8a2b6a255f479e);
  Message0::M9::M26::M38* v15 = v13->mutable_f_9();
  v15->set_f_0(s->substr(0, 1));
  v13->set_f_0(0x38);
  Message0::M9::M26::M32* v16_0 = v13->add_f_3();
  v16_0->set_f_0(0.128058);
  v16_0->set_f_9(0x3f);
  v16_0->set_f_8(0x79548af059a8c705);
  v16_0->add_f_5(Message0::M9::M26::M32::E14_CONST_2);
  v16_0->set_f_12(s->substr(0, 4));
  v16_0->set_f_11(0x1a6d1f3a9b906f24);
  v16_0->set_f_2(0x6bb479b256583bc6);
  v16_0->set_f_14(0x3ceed7879801fe66);
  v16_0->set_f_3(0x2884841);
  Message0::M9::M26::M32::E13 array_2[15] = {
      Message0::M9::M26::M32::E13_CONST_2, Message0::M9::M26::M32::E13_CONST_2,
      Message0::M9::M26::M32::E13_CONST_4, Message0::M9::M26::M32::E13_CONST_3,
      Message0::M9::M26::M32::E13_CONST_1, Message0::M9::M26::M32::E13_CONST_4,
      Message0::M9::M26::M32::E13_CONST_4, Message0::M9::M26::M32::E13_CONST_1,
      Message0::M9::M26::M32::E13_CONST_1, Message0::M9::M26::M32::E13_CONST_4,
      Message0::M9::M26::M32::E13_CONST_4, Message0::M9::M26::M32::E13_CONST_5,
      Message0::M9::M26::M32::E13_CONST_5, Message0::M9::M26::M32::E13_CONST_2,
      Message0::M9::M26::M32::E13_CONST_3,
  };
  for (auto v : array_2) {
    v16_0->add_f_1(v);
  }
  Message0::M4* v17_0 = message->add_f_55();
  v17_0->set_f_0(0x17dd);
  message->set_f_6(0xff008df);
  message->set_f_1(0xbb93178);
  message->set_f_14(0x7a2c39e5);
  message->set_f_4(0x2a48);
  message->set_f_2(0x44f074d98b906164);
  message->set_f_17(0x3c);
  message->set_f_20(0x62450e41f9ab2f5);
  message->add_f_11(Message0::E2_CONST_4);
  message->set_f_10(0x2);
  message->add_f_28(Message0::E4_CONST_2);
  message->set_f_21(s->substr(0, 8));
  message->set_f_25(0.429793);
  Message0::M12* v18 = message->mutable_f_69();
  v18->set_f_0(Message0::M12::E7_CONST_3);
  Message0::M12::M23* v19_0 = v18->add_f_6();
  v19_0->set_f_0(0xe4d4f2a);
  Message0::M12::M25* v20 = v18->mutable_f_9();
  v20->set_f_18(0x4d83831e);
  v20->set_f_20(0xbf6bcea54e9464);
  v20->set_f_13(0xc0a7752c0d3a349);
  v20->set_f_6(0x919f95e3d637dc1);
  v20->set_f_9(0xb0cec21);
  v20->set_f_26(Message0::M12::M25::E11_CONST_2);
  v20->set_f_30(0xbf38ef1);
  v20->set_f_15(0x2a);
  v20->set_f_3(0x41);
  v20->set_f_17(0x51f50e0c134c321e);
  v20->set_f_7(0.023611);
  v20->set_f_27(0x4565ab838c46a166);
  v20->set_f_1(0xb09613b);
  v20->set_f_10(0x2f861c70);
  v20->set_f_19(0x5a39c6a8);
  v20->set_f_4(0x7a00eecdaa6876ee);
  v20->set_f_12(0x7baaa331);
  v20->set_f_2(false);
  v20->set_f_25(s->substr(0, 108));
  v20->set_f_21(0x3f9642f94a0ed685);
  Message0::M12::M21* v21 = v18->mutable_f_5();
  v21->set_f_3(0x477945a);
  v21->set_f_2(0x352ea9a2bc4);
  Message0::M12::M21::M41* v22_0 = v21->add_f_10();
  (void)v22_0;  // Suppresses clang-tidy.
  Message0::M12::M21::M51* v23 = v21->mutable_f_14();
  v23->set_f_0(s->substr(0, 18));
  v23->set_f_1(true);
  v23->set_f_3(s->substr(0, 9));
  v23->set_f_2(Message0::M12::M21::M51::E20_CONST_3);
  v23->set_f_4(s->substr(0, 3));
  message->set_f_8(0x119e79);
  message->add_f_12(Message0::E3_CONST_1);
  message->set_f_29(0x21a1d940c4aeee7b);
  message->set_f_26(0xf66bc886cb0514e);
  Message0::M11* v24 = message->mutable_f_67();
  v24->set_f_1(s->substr(0, 2));
  Message0::M11::M22* v25 = v24->mutable_f_15();
  Message0::M11::M22::M47* v26 = v25->mutable_f_4();
  (void)v26;  // Suppresses clang-tidy.
  v25->set_f_0(0.926456);
  Message0::M11::M22::M42* v27 = v25->mutable_f_2();
  Message0::M11::M22::M42::M54* v28 = v27->mutable_f_3();
  v28->set_f_0(0x7583a29071a92c3c);
  v27->set_f_0(0x34);
  v24->set_f_0(0x175e89f2a);
  v24->set_f_4(0x41);
  v24->set_f_5(0x6da39f420cbd3cc2);
  v24->set_f_3(0x7844cdba1a293886);
  v24->set_f_2(0x780a9ad60bf98d5e);
  Message0::E1 array_3[17] = {
      Message0::E1_CONST_2, Message0::E1_CONST_3, Message0::E1_CONST_4,
      Message0::E1_CONST_1, Message0::E1_CONST_5, Message0::E1_CONST_2,
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_5, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_4,
  };
  for (auto v : array_3) {
    message->add_f_7(v);
  }
  message->set_f_5(0x493e6a0e748efcc5);
  Message0::M10* v29 = message->mutable_f_64();
  Message0::M10::M15* v30 = v29->mutable_f_3();
  v30->set_f_3(s->substr(0, 27));
  v30->set_f_1(0x8054b0459855a64);
  v30->set_f_2(0x19339bdeb61cce5e);
  v29->set_f_0(0x586e990e);
  message->set_f_16(0x3358d84);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_29(0x2bff693d6cc547e3);
  message->set_f_5(0x3bad9ec8abf1cdda);
  message->set_f_2(0x1d3e96766925f429);
  message->set_f_19(false);
  message->set_f_4(0x7);
  message->set_f_13(0x253f98f55);
  message->set_f_10(0x6d);
  message->set_f_17(0x938040e);
  Message0::M10* v0 = message->mutable_f_64();
  Message0::M10::M15* v1 = v0->mutable_f_3();
  v1->set_f_1(0x1358e4d9444e531e);
  Message0::M10::M15::E8 array_0[21] = {
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_1,
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_4,
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_2,
      Message0::M10::M15::E8_CONST_5, Message0::M10::M15::E8_CONST_2,
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_1,
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_2,
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_1,
      Message0::M10::M15::E8_CONST_5, Message0::M10::M15::E8_CONST_2,
      Message0::M10::M15::E8_CONST_4, Message0::M10::M15::E8_CONST_3,
      Message0::M10::M15::E8_CONST_2, Message0::M10::M15::E8_CONST_2,
      Message0::M10::M15::E8_CONST_4,
  };
  for (auto v : array_0) {
    v1->add_f_0(v);
  }
  v0->set_f_0(0x5d936436);
  message->set_f_18(true);
  Message0::M1* v2_0 = message->add_f_51();
  v2_0->set_f_0(s->substr(0, 145));
  Message0::M5* v3 = message->mutable_f_57();
  v3->set_f_0(0x698a12e0214f2f3a);
  message->set_f_8(0x49);
  message->set_f_1(0x1bb4);
  Message0::M6* v4_0 = message->add_f_58();
  v4_0->set_f_2(false);
  v4_0->set_f_3(0x298e8fb);
  v4_0->set_f_4(0x20);
  v4_0->set_f_0(false);
  message->set_f_27(0x79962178bbb16969);
  Message0::M3* v5 = message->mutable_f_53();
  Message0::M3::M13* v6 = v5->mutable_f_3();
  Message0::M3::M13::M48* v7_0 = v6->add_f_6();
  v7_0->set_f_0(0x6fe4142008d1dd29);
  v6->set_f_2(0x3334);
  Message0::M3::M13::M33* v8_0 = v6->add_f_5();
  Message0::M3::M13::M33::E16 array_1[22] = {
      Message0::M3::M13::M33::E16_CONST_4, Message0::M3::M13::M33::E16_CONST_5,
      Message0::M3::M13::M33::E16_CONST_1, Message0::M3::M13::M33::E16_CONST_4,
      Message0::M3::M13::M33::E16_CONST_4, Message0::M3::M13::M33::E16_CONST_4,
      Message0::M3::M13::M33::E16_CONST_4, Message0::M3::M13::M33::E16_CONST_1,
      Message0::M3::M13::M33::E16_CONST_5, Message0::M3::M13::M33::E16_CONST_2,
      Message0::M3::M13::M33::E16_CONST_2, Message0::M3::M13::M33::E16_CONST_3,
      Message0::M3::M13::M33::E16_CONST_4, Message0::M3::M13::M33::E16_CONST_5,
      Message0::M3::M13::M33::E16_CONST_1, Message0::M3::M13::M33::E16_CONST_4,
      Message0::M3::M13::M33::E16_CONST_3, Message0::M3::M13::M33::E16_CONST_5,
      Message0::M3::M13::M33::E16_CONST_5, Message0::M3::M13::M33::E16_CONST_1,
      Message0::M3::M13::M33::E16_CONST_4, Message0::M3::M13::M33::E16_CONST_4,
  };
  for (auto v : array_1) {
    v8_0->add_f_0(v);
  }
  v5->set_f_1(false);
  Message0::M3::M17* v9 = v5->mutable_f_4();
  Message0::M3::M17::M36* v10 = v9->mutable_f_3();
  v10->set_f_2(s->substr(0, 21));
  v10->set_f_5(0.299791);
  v10->set_f_4(Message0::M3::M17::M36::E17_CONST_4);
  Message0::M3::M17::M36::M62* v11 = v10->mutable_f_10();
  v11->set_f_0(true);
  v10->set_f_0(s->substr(0, 24));
  Message0::M3::M17::M34* v12_0 = v9->add_f_2();
  Message0::M3::M17::M34::M59* v13 = v12_0->mutable_f_4();
  v13->set_f_1(s->substr(0, 3));
  v13->set_f_2(0x4e);
  v12_0->set_f_0(s->substr(0, 22));
  v9->set_f_0(0x1a);
  Message0::M3::E6 array_2[15] = {
      Message0::M3::E6_CONST_4, Message0::M3::E6_CONST_4,
      Message0::M3::E6_CONST_4, Message0::M3::E6_CONST_3,
      Message0::M3::E6_CONST_1, Message0::M3::E6_CONST_5,
      Message0::M3::E6_CONST_1, Message0::M3::E6_CONST_4,
      Message0::M3::E6_CONST_1, Message0::M3::E6_CONST_1,
      Message0::M3::E6_CONST_1, Message0::M3::E6_CONST_5,
      Message0::M3::E6_CONST_4, Message0::M3::E6_CONST_4,
      Message0::M3::E6_CONST_3,
  };
  for (auto v : array_2) {
    v5->add_f_0(v);
  }
  message->set_f_9(0xe825ecd4919b08c);
  message->set_f_20(0x37c11fc71c74b355);
  Message0::M8* v14_0 = message->add_f_60();
  Message0::M8::M24* v15 = v14_0->mutable_f_4();
  Message0::M8::M24::M44* v16 = v15->mutable_f_4();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_0(0x71f7e1ab);
  Message0::M4* v17_0 = message->add_f_55();
  v17_0->set_f_0(0x6b);
  Message0::E4 array_3[14] = {
      Message0::E4_CONST_2, Message0::E4_CONST_5, Message0::E4_CONST_3,
      Message0::E4_CONST_3, Message0::E4_CONST_5, Message0::E4_CONST_3,
      Message0::E4_CONST_3, Message0::E4_CONST_4, Message0::E4_CONST_3,
      Message0::E4_CONST_4, Message0::E4_CONST_1, Message0::E4_CONST_1,
      Message0::E4_CONST_2, Message0::E4_CONST_5,
  };
  for (auto v : array_3) {
    message->add_f_28(v);
  }
  Message0::M9* v18 = message->mutable_f_63();
  v18->set_f_4(0xabf);
  v18->set_f_2(0x4fbbe58);
  message->set_f_26(0x18af91ea9abee970);
  message->set_f_23(0xbaee286);
  message->add_f_12(Message0::E3_CONST_2);
  message->add_f_7(Message0::E1_CONST_4);
  message->set_f_15(0x3d6ca92);
  message->set_f_22(true);
  Message0::M7* v19_0 = message->add_f_59();
  v19_0->set_f_0(s->substr(0, 1));
  Message0::M7::M14* v20_0 = v19_0->add_f_4();
  Message0::M7::M14::M49* v21 = v20_0->mutable_f_3();
  Message0::M7::M14::M49::M58* v22 = v21->mutable_f_5();
  Message0::M7::M14::M49::M58::M70* v23 = v22->mutable_f_6();
  v23->add_f_1(Message0::M7::M14::M49::M58::M70::E25_CONST_4);
  v23->set_f_3(0xc3d2520);
  v23->set_f_0(s->substr(0, 1));
  v22->set_f_1(true);
  v21->set_f_0(0.901423);
  v21->set_f_1(0x785783fd6e1dd7e6);
  Message0::M7::M16* v24 = v19_0->mutable_f_6();
  v24->set_f_0(0x5348925);
  Message0::M7::M16::M52* v25 = v24->mutable_f_4();
  v25->set_f_5(0xb);
  v25->set_f_1(0x5d);
  Message0::M7::M16::M52::M64* v26 = v25->mutable_f_14();
  (void)v26;  // Suppresses clang-tidy.
  Message0::M7::M16::M40* v27_0 = v24->add_f_3();
  v27_0->set_f_1(0.494499);
  v27_0->set_f_0(0x1999db6028ab0c7);
  v27_0->set_f_2(true);
  Message0::M7::M27* v28 = v19_0->mutable_f_8();
  Message0::M7::M27::M31* v29 = v28->mutable_f_2();
  v29->set_f_1(Message0::M7::M27::M31::E12_CONST_3);
  v29->set_f_0(true);
  v29->set_f_3(0x1e1f31f6bfc72dba);
  Message0::M7::M27::M31::M57* v30 = v29->mutable_f_10();
  v30->set_f_0(0x7);
  v29->set_f_4(s->substr(0, 28));
  v28->set_f_0(s->substr(0, 332));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M5* v0 = message->mutable_f_57();
  v0->set_f_0(0x7ca80a721a8d40d);
  Message0::M11* v1 = message->mutable_f_67();
  v1->set_f_4(0x2c);
  Message0::M11::M22* v2 = v1->mutable_f_15();
  Message0::M11::M22::M42* v3 = v2->mutable_f_2();
  v3->set_f_0(0x45);
  Message0::M11::M22::M42::M54* v4 = v3->mutable_f_3();
  v4->set_f_0(0xea737fb7662040d);
  v2->set_f_0(0.432760);
  v1->set_f_2(0x4d8cbd7fd4db1128);
  v1->set_f_0(0x1f7286c9b);
  message->set_f_19(false);
  message->set_f_8(0x1);
  message->set_f_20(0x244e774f09e23831);
  message->set_f_26(0x6d9854c72fb9987e);
  message->set_f_2(0x3c74bc4bebc1931);
  message->set_f_3(s->substr(0, 7));
  Message0::M9* v5 = message->mutable_f_63();
  v5->set_f_1(s->substr(0, 118));
  v5->set_f_0(0x12b918);
  v5->set_f_5(0x7e);
  message->set_f_9(0x623ea322876f4635);
  Message0::E2 array_0[8] = {
      Message0::E2_CONST_2, Message0::E2_CONST_4, Message0::E2_CONST_1,
      Message0::E2_CONST_2, Message0::E2_CONST_1, Message0::E2_CONST_4,
      Message0::E2_CONST_2, Message0::E2_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_11(v);
  }
  message->set_f_18(true);
  message->set_f_14(0x666be392);
  message->set_f_23(0xf37b84a);
  message->set_f_10(0xcdd);
  message->set_f_25(0.888003);
  message->add_f_12(Message0::E3_CONST_4);
  message->set_f_16(0x9748a);
  Message0::M6* v6_0 = message->add_f_58();
  v6_0->set_f_1(0x7e);
  v6_0->set_f_2(false);
  v6_0->set_f_3(0x27);
  Message0::M2* v7 = message->mutable_f_52();
  v7->set_f_2(0x23);
  v7->add_f_3(Message0::M2::E5_CONST_5);
  v7->set_f_1(0x84bda11);
  v7->set_f_4(0x2b);
  message->set_f_24(0x18fac0eb);
  message->add_f_7(Message0::E1_CONST_2);
  message->set_f_13(0x31f2211d2);
  message->set_f_0(s->substr(0, 18));
  Message0::M7* v8_0 = message->add_f_59();
  Message0::M7::M27* v9 = v8_0->mutable_f_8();
  Message0::M7::M27::M31* v10 = v9->mutable_f_2();
  v10->set_f_2(0x32);
  v10->set_f_3(0x4573851c017f50cf);
  v10->set_f_0(false);
  v10->set_f_4(s->substr(0, 30));
  Message0::M7::M27::M31::M57* v11 = v10->mutable_f_10();
  v11->set_f_0(0x7bc38);
  Message0::M7::M27::M31::M57::M73* v12_0 = v11->add_f_6();
  v12_0->set_f_0(0x192c103);
  v10->set_f_1(Message0::M7::M27::M31::E12_CONST_5);
  v9->set_f_0(s->substr(0, 26));
  v8_0->set_f_0(s->substr(0, 27));
  Message0::M7::M16* v13 = v8_0->mutable_f_6();
  v13->set_f_0(0xa2522cc);
  Message0::M7::M16::M52* v14 = v13->mutable_f_4();
  v14->set_f_1(0x65c2d7a);
  v14->set_f_5(0x338d);
  Message0::M7::M16::M52::M64* v15 = v14->mutable_f_14();
  v15->set_f_1(0x6c19c277d0b8f321);
  v15->set_f_0(0x639437cceadfedb9);
  v14->set_f_6(s->substr(0, 25));
  Message0::M7::M16::M52::E21 array_1[11] = {
      Message0::M7::M16::M52::E21_CONST_4, Message0::M7::M16::M52::E21_CONST_4,
      Message0::M7::M16::M52::E21_CONST_5, Message0::M7::M16::M52::E21_CONST_4,
      Message0::M7::M16::M52::E21_CONST_2, Message0::M7::M16::M52::E21_CONST_4,
      Message0::M7::M16::M52::E21_CONST_3, Message0::M7::M16::M52::E21_CONST_2,
      Message0::M7::M16::M52::E21_CONST_2, Message0::M7::M16::M52::E21_CONST_4,
      Message0::M7::M16::M52::E21_CONST_2,
  };
  for (auto v : array_1) {
    v14->add_f_3(v);
  }
  v14->set_f_2(s->substr(0, 8));
  v14->set_f_4(0x52);
  Message0::M7::M16::M40* v16_0 = v13->add_f_3();
  v16_0->set_f_0(0x12bade64f48211e);
  v16_0->set_f_2(false);
  v16_0->set_f_1(0.060426);
  message->set_f_17(0xc04aa0a);
  message->set_f_4(0x24d2);
  Message0::M4* v17_0 = message->add_f_55();
  (void)v17_0;  // Suppresses clang-tidy.
  message->set_f_6(0x19f64c);
  message->set_f_1(0x222b);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M10* v0 = message->mutable_f_64();
  Message0::M10::M15* v1 = v0->mutable_f_3();
  v1->set_f_1(0x6ca5cfad8c74ae58);
  v1->set_f_2(0x28342a3288395954);
  v1->set_f_3(s->substr(0, 20));
  message->set_f_17(0xb7bea93);
  message->set_f_27(0x42423d60af474754);
  message->set_f_5(0x7c9ead389dfabc65);
  message->set_f_14(0xf38bd70);
  message->set_f_16(0x56b655f);
  message->set_f_22(true);
  Message0::M6* v2_0 = message->add_f_58();
  v2_0->set_f_1(0x45);
  v2_0->set_f_4(0x64);
  v2_0->set_f_2(true);
  message->add_f_11(Message0::E2_CONST_4);
  Message0::E3 array_0[21] = {
      Message0::E3_CONST_1, Message0::E3_CONST_3, Message0::E3_CONST_1,
      Message0::E3_CONST_5, Message0::E3_CONST_5, Message0::E3_CONST_4,
      Message0::E3_CONST_3, Message0::E3_CONST_2, Message0::E3_CONST_3,
      Message0::E3_CONST_4, Message0::E3_CONST_3, Message0::E3_CONST_4,
      Message0::E3_CONST_2, Message0::E3_CONST_4, Message0::E3_CONST_3,
      Message0::E3_CONST_5, Message0::E3_CONST_3, Message0::E3_CONST_2,
      Message0::E3_CONST_1, Message0::E3_CONST_2, Message0::E3_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_12(v);
  }
  Message0::M11* v3 = message->mutable_f_67();
  v3->set_f_5(0xc8184ed2b417465);
  v3->set_f_4(0x49);
  Message0::M11::M22* v4 = v3->mutable_f_15();
  Message0::M11::M22::M42* v5 = v4->mutable_f_2();
  v5->set_f_0(0x17);
  Message0::M11::M22::M47* v6 = v4->mutable_f_4();
  Message0::M11::M22::M47::M67* v7_0 = v6->add_f_2();
  v7_0->set_f_0(0xc125df1123c975d);
  v3->set_f_3(0x2e8461b48af7cde8);
  v3->set_f_0(0x48fc2bb6a);
  message->set_f_25(0.123289);
  message->set_f_0(s->substr(0, 14));
  message->set_f_9(0x1f6da09ceb525543);
  message->set_f_21(s->substr(0, 11));
  message->set_f_2(0x6ce8f3560f61d984);
  Message0::M3* v8 = message->mutable_f_53();
  Message0::M3::M17* v9 = v8->mutable_f_4();
  Message0::M3::M17::M50* v10 = v9->mutable_f_5();
  (void)v10;  // Suppresses clang-tidy.
  Message0::M3::M17::M36* v11 = v9->mutable_f_3();
  v11->set_f_1(0x3c);
  v11->set_f_3(false);
  v11->set_f_4(Message0::M3::M17::M36::E17_CONST_1);
  v11->set_f_5(0.380288);
  v11->set_f_2(s->substr(0, 175));
  Message0::M3::M17::M34* v12_0 = v9->add_f_2();
  Message0::M3::M17::M34::M59* v13 = v12_0->mutable_f_4();
  v13->set_f_3(0x7e0508d7);
  v13->set_f_0(true);
  v13->set_f_1(s->substr(0, 7));
  v9->set_f_0(0x64989e);
  Message0::M3::M13* v14 = v8->mutable_f_3();
  Message0::M3::M13::M48* v15_0 = v14->add_f_6();
  (void)v15_0;  // Suppresses clang-tidy.
  v14->set_f_1(0xe20);
  Message0::M3::M13::M33* v16_0 = v14->add_f_5();
  v16_0->add_f_0(Message0::M3::M13::M33::E16_CONST_2);
  v14->set_f_0(0x7c195373e20f3c2b);
  v8->add_f_0(Message0::M3::E6_CONST_4);
  message->set_f_13(0x49843563d);
  message->set_f_20(0x38e233311570e47f);
  Message0::M7* v17_0 = message->add_f_59();
  v17_0->set_f_0(s->substr(0, 32));
  Message0::M7::M27* v18 = v17_0->mutable_f_8();
  v18->set_f_0(s->substr(0, 389));
  Message0::M7::M16* v19 = v17_0->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  message->set_f_3(s->substr(0, 4));
  message->set_f_6(0x543aa);
  Message0::M9* v20 = message->mutable_f_63();
  Message0::M9::M26* v21 = v20->mutable_f_14();
  Message0::M9::M26::M32* v22_0 = v21->add_f_3();
  v22_0->set_f_14(0x166d73525dafb6ec);
  v22_0->add_f_1(Message0::M9::M26::M32::E13_CONST_3);
  v22_0->set_f_4(0x7ec5dd197275856d);
  v22_0->add_f_5(Message0::M9::M26::M32::E14_CONST_5);
  v22_0->add_f_5(Message0::M9::M26::M32::E14_CONST_3);
  v22_0->add_f_5(Message0::M9::M26::M32::E14_CONST_3);
  v22_0->add_f_5(Message0::M9::M26::M32::E14_CONST_3);
  v22_0->set_f_9(0x6530ba9);
  v22_0->set_f_0(0.281926);
  v22_0->set_f_3(0x69);
  v22_0->set_f_11(0x5ae3b81bb32ca457);
  v22_0->set_f_2(0x291e87236120bb7a);
  Message0::M9::M26::M38* v23 = v21->mutable_f_9();
  v23->set_f_0(s->substr(0, 17));
  v23->set_f_1(0x23c0103994d636f3);
  Message0::M9::M26::M30* v24_0 = v21->add_f_2();
  v24_0->set_f_0(0x313a154f61dcf235);
  Message0::M9::M26::M37* v25 = v21->mutable_f_7();
  v25->set_f_0(0x76e67d8778dde104);
  v25->set_f_1(s->substr(0, 6));
  Message0::M9::M26::M43* v26_0 = v21->add_f_10();
  v26_0->set_f_0(0x559482fcb7f92e39);
  v20->set_f_2(0x7e);
  v20->set_f_4(0xe6278b0);
  v20->set_f_3(s->substr(0, 17));
  Message0::M8* v27_0 = message->add_f_60();
  Message0::M8::M20* v28 = v27_0->mutable_f_3();
  v28->set_f_2(0x4d4c55fc2a0b3329);
  v28->set_f_1(s->substr(0, 20));
  v28->set_f_0(0x39);
  v28->set_f_5(0x61a95751dd3507de);
  v28->set_f_3(0x612488d3);
  Message0::M8::M24* v29 = v27_0->mutable_f_4();
  Message0::M8::M24::M44* v30 = v29->mutable_f_4();
  v30->set_f_0(0x35acf829c4af7341);
  v29->set_f_0(0x2263c7f9);
  v27_0->set_f_0(0x5f74783);
  Message0::M1* v31_0 = message->add_f_51();
  (void)v31_0;  // Suppresses clang-tidy.
  message->set_f_19(false);
  message->set_f_29(0x1d13681618085d23);
  Message0::M12* v32 = message->mutable_f_69();
  Message0::M12::M23* v33_0 = v32->add_f_6();
  (void)v33_0;  // Suppresses clang-tidy.
  Message0::M12::M21* v34 = v32->mutable_f_5();
  Message0::M12::M21::M45* v35_0 = v34->add_f_12();
  v35_0->set_f_0(0x63cb92041889a099);
  Message0::M12::M21::M41* v36_0 = v34->add_f_10();
  v36_0->set_f_0(0x7b4cc620ae00a5b8);
  v34->set_f_2(0xf);
  Message0::M12::M21::M29* v37 = v34->mutable_f_8();
  v37->set_f_0(0x23114a988);
  Message0::M12::M21::M29::M61* v38 = v37->mutable_f_4();
  v38->set_f_0(0x344aedf444f8c454);
  v37->set_f_1(0x757d278ed);
  v34->set_f_0(0.697716);
  v34->set_f_3(0x18);
  Message0::M12::M25* v39 = v32->mutable_f_9();
  v39->set_f_5(0x27);
  v39->set_f_2(false);
  v39->set_f_7(0.169133);
  v39->set_f_13(0x76012e524bef4e6b);
  v39->set_f_24(0x29e43c3a6875c968);
  Message0::M12::M25::E10 array_1[21] = {
      Message0::M12::M25::E10_CONST_1, Message0::M12::M25::E10_CONST_1,
      Message0::M12::M25::E10_CONST_1, Message0::M12::M25::E10_CONST_2,
      Message0::M12::M25::E10_CONST_5, Message0::M12::M25::E10_CONST_4,
      Message0::M12::M25::E10_CONST_4, Message0::M12::M25::E10_CONST_2,
      Message0::M12::M25::E10_CONST_1, Message0::M12::M25::E10_CONST_4,
      Message0::M12::M25::E10_CONST_4, Message0::M12::M25::E10_CONST_4,
      Message0::M12::M25::E10_CONST_4, Message0::M12::M25::E10_CONST_5,
      Message0::M12::M25::E10_CONST_3, Message0::M12::M25::E10_CONST_3,
      Message0::M12::M25::E10_CONST_5, Message0::M12::M25::E10_CONST_2,
      Message0::M12::M25::E10_CONST_5, Message0::M12::M25::E10_CONST_5,
      Message0::M12::M25::E10_CONST_5,
  };
  for (auto v : array_1) {
    v39->add_f_22(v);
  }
  v39->set_f_25(s->substr(0, 6));
  v39->set_f_15(0x9);
  v39->set_f_9(0x144236);
  v39->set_f_18(0x7c55862f);
  v39->set_f_16(0x3e);
  v39->set_f_4(0x34b2d64aa2cd5e05);
  v39->set_f_20(0x9e5a2af2ed14d6);
  v39->set_f_14(0x3c00b57ac);
  v39->set_f_10(0x4bca4728);
  v39->set_f_17(0x4a2504f248930a54);
  v39->set_f_6(0x240d7c7f81faff77);
  v39->set_f_26(Message0::M12::M25::E11_CONST_2);
  v39->set_f_29(false);
  v39->set_f_27(0xcf3473cd0706b27);
  v39->set_f_23(s->substr(0, 467));
  v39->set_f_3(0x3c7c);
  v39->set_f_30(0x5236568);
  v39->add_f_0(Message0::M12::M25::E9_CONST_1);
  v39->set_f_12(0x644dee21);
  message->set_f_18(true);
}
const int kMessage0MaxProtoSetters = 4;
inline void Message0_Set(const int i, Message0* message, std::string* s) {
  CHECK(i < kMessage0MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message0_Set_1(message, s);
      break;
    case 1:
      Message0_Set_2(message, s);
      break;
    case 2:
      Message0_Set_3(message, s);
      break;
    case 3:
      Message0_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P5::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_
