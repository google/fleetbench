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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message1.pb.h"

namespace fleetbench::rpc::P1::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_7(0x79eddec);
  message->set_f_26(0x625fab1f6db1257);
  message->set_f_8(s->substr(0, 3));
  message->set_f_2(0x628c720b7a9000e);
  message->set_f_20(0x1907);
  message->set_f_12(0x1d);
  message->set_f_14(s->substr(0, 23));
  message->set_f_19(Message1::E1_CONST_3);
  message->set_f_4(0x38);
  message->set_f_21(0x25b6834);
  message->set_f_11(s->substr(0, 3));
  message->set_f_18(s->substr(0, 25));
  message->set_f_6(s->substr(0, 454));
  message->set_f_5(0x6069d4d);
  message->set_f_1(true);
  message->set_f_15(s->substr(0, 2));
  message->set_f_27(0xcf04f00);
  message->set_f_29(0x3979a38e3806b7a5);
  Message1::E2 array_1[18] = {
      Message1::E2_CONST_1, Message1::E2_CONST_1, Message1::E2_CONST_3,
      Message1::E2_CONST_2, Message1::E2_CONST_4, Message1::E2_CONST_3,
      Message1::E2_CONST_4, Message1::E2_CONST_3, Message1::E2_CONST_3,
      Message1::E2_CONST_4, Message1::E2_CONST_3, Message1::E2_CONST_1,
      Message1::E2_CONST_2, Message1::E2_CONST_5, Message1::E2_CONST_3,
      Message1::E2_CONST_4, Message1::E2_CONST_3, Message1::E2_CONST_5,
  };
  for (auto v : array_1) {
    message->add_f_25(v);
  }
  message->set_f_24(0x448e6f3259bc4d05);
  message->set_f_9(0x3bdb3a2);
  Message1::M1* v0 = message->mutable_f_46();
  v0->set_f_31(0x2c6b);
  Message1::M1::M3* v1 = v0->mutable_f_53();
  Message1::M1::M3::M29* v2 = v1->mutable_f_2();
  v2->set_f_3(true);
  v2->set_f_0(0xfec871c);
  v2->set_f_2(s->substr(0, 22));
  Message1::M1::M3::M29::E7 array_2[11] = {
      Message1::M1::M3::M29::E7_CONST_3, Message1::M1::M3::M29::E7_CONST_2,
      Message1::M1::M3::M29::E7_CONST_2, Message1::M1::M3::M29::E7_CONST_3,
      Message1::M1::M3::M29::E7_CONST_4, Message1::M1::M3::M29::E7_CONST_3,
      Message1::M1::M3::M29::E7_CONST_3, Message1::M1::M3::M29::E7_CONST_4,
      Message1::M1::M3::M29::E7_CONST_2, Message1::M1::M3::M29::E7_CONST_3,
      Message1::M1::M3::M29::E7_CONST_3,
  };
  for (auto v : array_2) {
    v2->add_f_1(v);
  }
  v2->set_f_4(0x6cafdb9);
  Message1::M1::M3::M29::M47* v3 = v2->mutable_f_8();
  v3->set_f_6(0x2575a4a);
  v3->set_f_4(0x271f77b8);
  v3->set_f_0(0xd529711);
  v3->set_f_2(0x1fe5bc5e);
  v3->set_f_5(false);
  v3->set_f_1(false);
  v1->set_f_0(0x6e961410);
  v0->set_f_12(0xd77e15b);
  v0->set_f_16(s->substr(0, 11));
  v0->set_f_3(0x521849b16ae2fc63);
  v0->set_f_4(0x2e12c034a700e2f8);
  v0->set_f_5(0x1191b6ad54c4cb93);
  Message1::M1::M16* v4 = v0->mutable_f_67();
  v4->set_f_0(s->substr(0, 3));
  Message1::M1::M7* v5 = v0->mutable_f_57();
  v5->set_f_0(0x16e98);
  Message1::M1::M7::M33* v6 = v5->mutable_f_3();
  v6->set_f_0(s->substr(0, 10));
  Message1::M1::M7::M33::M46* v7 = v6->mutable_f_3();
  v7->set_f_3(s->substr(0, 451));
  v7->set_f_1(0x207fcc29e41c0c24);
  Message1::M1::M7::M33::M46::E12 array_3[21] = {
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_2,
      Message1::M1::M7::M33::M46::E12_CONST_4,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_4,
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_4,
      Message1::M1::M7::M33::M46::E12_CONST_4,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_5,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_1,
      Message1::M1::M7::M33::M46::E12_CONST_3,
      Message1::M1::M7::M33::M46::E12_CONST_1,
  };
  for (auto v : array_3) {
    v7->add_f_5(v);
  }
  v7->set_f_4(s->substr(0, 165));
  Message1::M1::M7::M33::M46::E11 array_4[22] = {
      Message1::M1::M7::M33::M46::E11_CONST_5,
      Message1::M1::M7::M33::M46::E11_CONST_1,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_1,
      Message1::M1::M7::M33::M46::E11_CONST_3,
      Message1::M1::M7::M33::M46::E11_CONST_2,
      Message1::M1::M7::M33::M46::E11_CONST_1,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_3,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_1,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_1,
      Message1::M1::M7::M33::M46::E11_CONST_2,
      Message1::M1::M7::M33::M46::E11_CONST_5,
      Message1::M1::M7::M33::M46::E11_CONST_3,
      Message1::M1::M7::M33::M46::E11_CONST_4,
      Message1::M1::M7::M33::M46::E11_CONST_5,
      Message1::M1::M7::M33::M46::E11_CONST_1,
      Message1::M1::M7::M33::M46::E11_CONST_5,
  };
  for (auto v : array_4) {
    v7->add_f_0(v);
  }
  v0->set_f_17(Message1::M1::E3_CONST_4);
  v0->set_f_2(0x99313d0);
  Message1::M1::M12* v8 = v0->mutable_f_63();
  v8->set_f_0(0x37db9be78674b7ca);
  Message1::M1::M20* v9 = v0->mutable_f_73();
  v9->set_f_2(s->substr(0, 59));
  v9->set_f_3(0x2166462ef510fee7);
  v0->set_f_11(s->substr(0, 2));
  v0->set_f_21(0x6a988ca7);
  Message1::M1::M2* v10 = v0->mutable_f_52();
  v10->set_f_0(0x5628f1aa77d90b67);
  Message1::M1::M2::M31* v11 = v10->mutable_f_2();
  Message1::M1::M2::M31::M39* v12 = v11->mutable_f_2();
  (void)v12;  // Suppresses clang-tidy.
  v11->set_f_0(Message1::M1::M2::M31::E8_CONST_1);
  Message1::M1::M2::M36* v13 = v10->mutable_f_4();
  Message1::M1::M2::M36::M45* v14 = v13->mutable_f_2();
  v14->add_f_0(Message1::M1::M2::M36::M45::E10_CONST_1);
  Message1::M1::M5* v15 = v0->mutable_f_55();
  v15->set_f_15(0x7bb159f);
  v15->set_f_9(0x2aea9a26a1895c98);
  v15->set_f_1(0x79);
  v15->set_f_2(0x6e25f33d80d8317d);
  v15->set_f_5(0x337276744d800067);
  v15->set_f_0(s->substr(0, 1));
  v15->set_f_7(0x71);
  v15->set_f_8(0x2a22);
  v15->set_f_12(s->substr(0, 1));
  v15->set_f_14(0x38);
  v15->set_f_13(s->substr(0, 17));
  v15->set_f_4(0x28f575410e06f505);
  v0->set_f_7(false);
  Message1::M1::M10* v16 = v0->mutable_f_60();
  v16->set_f_3(0x73f2a7c9);
  v16->set_f_2(false);
  v0->set_f_13(0xeb10df2);
  v0->set_f_14(0x70241d62cb0dad9f);
  Message1::M1::M9* v17 = v0->mutable_f_59();
  (void)v17;  // Suppresses clang-tidy.
  v0->set_f_10(0x1a6d1f3a9b906f24);
  v0->set_f_26(0xfff12e1);
  v0->set_f_28(0x8a4efb87ea4a1b3);
  v0->set_f_24(0x6613f57d38eb74a7);
  Message1::M1::M17* v18 = v0->mutable_f_69();
  v18->set_f_1(0.736744);
  v18->set_f_6(0x6693df3bfc1f0048);
  v18->set_f_2(false);
  v18->set_f_0(0.080134);
  v0->set_f_19(false);
  v0->set_f_20(0x5a8fb105d9888aa2);
  v0->set_f_22(0xaad8f7a99ca0d53);
  Message1::M1::M8* v19 = v0->mutable_f_58();
  v19->set_f_0(0x781e74b);
  v19->set_f_2(true);
  v19->set_f_3(false);
  Message1::M1::M8::M23* v20 = v19->mutable_f_9();
  v20->set_f_0(s->substr(0, 2));
  Message1::M1::M22* v21 = v0->mutable_f_76();
  Message1::M1::M22::M26* v22 = v21->mutable_f_3();
  v22->set_f_0(0x3d0);
  v22->set_f_1(0x61);
  Message1::M1::M22::M26::M43* v23 = v22->mutable_f_6();
  v23->set_f_0(0x5c);
  Message1::M1::M22::M26::M43::M48* v24 = v23->mutable_f_3();
  v24->set_f_7(s->substr(0, 122));
  v24->set_f_10(s->substr(0, 3));
  v24->set_f_9(0x1c12);
  v24->set_f_5(0x6080d43c4490969d);
  v24->set_f_2(s->substr(0, 1));
  Message1::M1::M22::M26::M43::M48::E13 array_5[19] = {
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_3,
      Message1::M1::M22::M26::M43::M48::E13_CONST_5,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_5,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_3,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
  };
  for (auto v : array_5) {
    v24->add_f_1(v);
  }
  v24->add_f_6(Message1::M1::M22::M26::M43::M48::E14_CONST_5);
  v24->set_f_3(s->substr(0, 18));
  v24->set_f_11(0x62677bcb55456aea);
  v24->set_f_4(0x5f5b2defcab7790c);
  v21->set_f_1(s->substr(0, 16));
  v21->set_f_0(0x7b84c42239f71d2b);
  Message1::M1::M22::M30* v25 = v21->mutable_f_4();
  (void)v25;  // Suppresses clang-tidy.
  Message1::M1::M13* v26 = v0->mutable_f_64();
  v26->set_f_0(false);
  Message1::M1::M21* v27 = v0->mutable_f_74();
  v27->set_f_1(s->substr(0, 3));
  Message1::M1::M21::M32* v28 = v27->mutable_f_5();
  v28->set_f_1(0x5b380d082fdb4737);
  v28->set_f_0(0x19b608);
  Message1::M1::M21::M32::M41* v29 = v28->mutable_f_7();
  (void)v29;  // Suppresses clang-tidy.
  v28->set_f_2(0x11d12caeff85fa64);
  v27->set_f_0(0x80a423);
  Message1::M1::M11* v30 = v0->mutable_f_62();
  v30->set_f_0(s->substr(0, 15));
  v0->set_f_0(s->substr(0, 10));
  v0->set_f_9(s->substr(0, 3));
  Message1::M1::M18* v31 = v0->mutable_f_71();
  v31->set_f_1(0x37ed);
  v31->set_f_3(0x4d89a327ef5cbec7);
  v31->set_f_2(0x6a31b6b2de759703);
  v31->set_f_0(Message1::M1::M18::E5_CONST_4);
  v0->set_f_25(0x5f154744fae2d61);
  Message1::M1::M19* v32 = v0->mutable_f_72();
  v32->set_f_0(s->substr(0, 3));
  v0->set_f_8(0x623bc22e);
  v0->set_f_27(0x6b321980);
  Message1::M1::M6* v33 = v0->mutable_f_56();
  Message1::M1::M6::M24* v34 = v33->mutable_f_2();
  v34->set_f_1(0.848881);
  message->set_f_16(s->substr(0, 7));
  message->set_f_10(0.922251);
  message->set_f_28(s->substr(0, 7));
  message->set_f_17(true);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_14(s->substr(0, 6));
  message->set_f_26(0x4752a45a8d19229b);
  message->set_f_0(0x219a9ead67bc5ce2);
  message->set_f_6(s->substr(0, 479));
  message->set_f_27(0x195891);
  message->set_f_29(0x6841974f30f517c8);
  message->set_f_2(0xfcd28013a9f0152);
  message->set_f_10(0.475966);
  Message1::M1* v0 = message->mutable_f_46();
  v0->set_f_23(0x3c8cee9d);
  v0->set_f_20(0x76879a6fb6db0dd2);
  v0->set_f_0(s->substr(0, 7));
  v0->set_f_4(0xbb65fe13f65f334);
  v0->set_f_5(0x71926bd111ec1e72);
  v0->set_f_3(0x6eb183ae84e8ed6);
  v0->set_f_25(0x6ecb498eaeac358b);
  v0->set_f_30(0x6a);
  Message1::M1::M18* v1 = v0->mutable_f_71();
  v1->set_f_1(0x1329ede);
  v1->set_f_3(0x6d8550c649a40aee);
  v1->set_f_0(Message1::M1::M18::E5_CONST_1);
  v1->set_f_2(0xa78c887deadf406);
  v0->set_f_21(0x2aa9b7c8);
  Message1::M1::M22* v2 = v0->mutable_f_76();
  v2->set_f_1(s->substr(0, 4));
  Message1::M1::M22::M30* v3 = v2->mutable_f_4();
  v3->set_f_0(0x2e05);
  Message1::M1::M22::M26* v4 = v2->mutable_f_3();
  v4->set_f_1(0x9357e2a);
  Message1::M1::M22::M26::M43* v5 = v4->mutable_f_6();
  v5->set_f_0(0x73);
  Message1::M1::M22::M26::M43::M48* v6 = v5->mutable_f_3();
  v6->set_f_4(0x7298f6d9e736837d);
  v6->add_f_6(Message1::M1::M22::M26::M43::M48::E14_CONST_1);
  v6->set_f_5(0x45bb814b2e4c5332);
  v6->set_f_3(s->substr(0, 6));
  Message1::M1::M22::M26::M43::M48::E13 array_0[14] = {
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
      Message1::M1::M22::M26::M43::M48::E13_CONST_5,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_3,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_2,
      Message1::M1::M22::M26::M43::M48::E13_CONST_4,
      Message1::M1::M22::M26::M43::M48::E13_CONST_3,
      Message1::M1::M22::M26::M43::M48::E13_CONST_3,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
      Message1::M1::M22::M26::M43::M48::E13_CONST_1,
  };
  for (auto v : array_0) {
    v6->add_f_1(v);
  }
  v6->set_f_11(0x68a7197acc06208d);
  v6->set_f_7(s->substr(0, 2));
  v6->set_f_0(false);
  v6->set_f_8(0x3401b270);
  v6->set_f_2(s->substr(0, 116));
  v6->set_f_10(s->substr(0, 122));
  v4->set_f_0(0xe49065b);
  v4->set_f_2(0x5047f5a682e0f1a2);
  Message1::M1::M14* v7 = v0->mutable_f_65();
  Message1::M1::M14::M34* v8 = v7->mutable_f_5();
  Message1::M1::M14::M34::M38* v9 = v8->mutable_f_4();
  v9->set_f_0(0x13ef262c35479428);
  v8->set_f_0(0xa8d61d7b0f5f9da);
  Message1::M1::M20* v10 = v0->mutable_f_73();
  v10->set_f_3(0x2ab82d0f1cd2dfea);
  v10->set_f_2(s->substr(0, 21));
  v10->add_f_0(Message1::M1::M20::E6_CONST_3);
  v10->set_f_1(s->substr(0, 11));
  Message1::M1::M7* v11 = v0->mutable_f_57();
  v11->set_f_0(0x2e);
  Message1::M1::M7::M33* v12 = v11->mutable_f_3();
  v12->set_f_0(s->substr(0, 8));
  v0->set_f_15(s->substr(0, 78));
  v0->set_f_17(Message1::M1::E3_CONST_1);
  v0->set_f_27(0x49959fe7);
  Message1::M1::M2* v13 = v0->mutable_f_52();
  Message1::M1::M2::M31* v14 = v13->mutable_f_2();
  v14->set_f_0(Message1::M1::M2::M31::E8_CONST_3);
  Message1::M1::M2::M31::M39* v15 = v14->mutable_f_2();
  v15->set_f_0(0x2ea7681889fc62d6);
  Message1::M1::M2::M36* v16 = v13->mutable_f_4();
  Message1::M1::M2::M36::M45* v17 = v16->mutable_f_2();
  Message1::M1::M2::M36::M45::E10 array_1[11] = {
      Message1::M1::M2::M36::M45::E10_CONST_1,
      Message1::M1::M2::M36::M45::E10_CONST_2,
      Message1::M1::M2::M36::M45::E10_CONST_2,
      Message1::M1::M2::M36::M45::E10_CONST_3,
      Message1::M1::M2::M36::M45::E10_CONST_4,
      Message1::M1::M2::M36::M45::E10_CONST_5,
      Message1::M1::M2::M36::M45::E10_CONST_2,
      Message1::M1::M2::M36::M45::E10_CONST_1,
      Message1::M1::M2::M36::M45::E10_CONST_2,
      Message1::M1::M2::M36::M45::E10_CONST_5,
      Message1::M1::M2::M36::M45::E10_CONST_5,
  };
  for (auto v : array_1) {
    v17->add_f_0(v);
  }
  v16->set_f_0(0.895344);
  v0->set_f_22(0x4308bf0d00a37024);
  v0->set_f_16(s->substr(0, 14));
  Message1::M1::M21* v18 = v0->mutable_f_74();
  Message1::M1::M21::M32* v19 = v18->mutable_f_5();
  Message1::M1::M21::M32::M41* v20 = v19->mutable_f_7();
  v20->set_f_0(0xae);
  v19->set_f_2(0x8e2e8f4198cfde6);
  v19->set_f_1(0x46994c3a60af0171);
  v18->set_f_1(s->substr(0, 5));
  v18->set_f_0(0x4a43b89);
  v0->set_f_13(0x5c7427a3);
  Message1::M1::M11* v21 = v0->mutable_f_62();
  v21->set_f_0(s->substr(0, 8));
  v0->set_f_31(0x68);
  v0->set_f_7(false);
  Message1::M1::M8* v22 = v0->mutable_f_58();
  Message1::M1::M8::M23* v23 = v22->mutable_f_9();
  v23->set_f_0(s->substr(0, 3));
  v22->set_f_3(true);
  v22->set_f_1(0xe1e);
  Message1::M1::M16* v24 = v0->mutable_f_67();
  v24->set_f_0(s->substr(0, 5));
  Message1::M1::M15* v25 = v0->mutable_f_66();
  v25->set_f_0(false);
  v0->set_f_1(0.824120);
  Message1::M1::M13* v26 = v0->mutable_f_64();
  (void)v26;  // Suppresses clang-tidy.
  Message1::M1::M5* v27 = v0->mutable_f_55();
  v27->set_f_4(0x614fa7fc7d0fad3);
  v27->set_f_0(s->substr(0, 29));
  v27->set_f_5(0xe925e4a694728e);
  v27->set_f_14(0x33ebe0f);
  v27->set_f_6(0x98e29);
  v27->set_f_10(s->substr(0, 8));
  v27->set_f_1(0x78);
  v27->set_f_3(s->substr(0, 2));
  v27->set_f_12(s->substr(0, 366));
  v27->set_f_11(0.921300);
  v27->set_f_13(s->substr(0, 10));
  v27->set_f_15(0x1d65f0);
  v27->set_f_17(0x6a31588c);
  v27->set_f_16(false);
  v27->set_f_7(0xb);
  v27->set_f_9(0x461587b1b15a594b);
  v0->set_f_9(s->substr(0, 14));
  v0->set_f_8(0x31b5019d);
  Message1::M1::M10* v28 = v0->mutable_f_60();
  v28->set_f_2(true);
  v28->set_f_1(s->substr(0, 8));
  v28->set_f_0(s->substr(0, 111));
  Message1::M1::M10::M25* v29 = v28->mutable_f_7();
  Message1::M1::M10::M25::M44* v30 = v29->mutable_f_7();
  v30->set_f_0(0.960826);
  Message1::M1::M10::M25::M37* v31 = v29->mutable_f_4();
  v31->add_f_0(Message1::M1::M10::M25::M37::E9_CONST_4);
  Message1::M1::M10::M25::M42* v32 = v29->mutable_f_5();
  v32->set_f_0(0x25d616ecec80c274);
  v29->set_f_0(0xa9f6c8f);
  v0->set_f_14(0x1aa0ab04e092e128);
  v0->set_f_10(0x6ebf3e7fd76f0317);
  Message1::M1::M17* v33 = v0->mutable_f_69();
  v33->set_f_1(0.932452);
  v33->set_f_4(0x4138191946840cd2);
  v33->set_f_3(true);
  v33->set_f_2(true);
  v0->set_f_28(0x18762fb2243cb0fe);
  v0->set_f_6(0x13269a4);
  Message1::M1::M9* v34 = v0->mutable_f_59();
  v34->set_f_0(0x5b9a04b20a84910);
  Message1::M1::M19* v35 = v0->mutable_f_72();
  Message1::M1::M19::M28* v36 = v35->mutable_f_4();
  v36->set_f_0(0x762bacd0f9a0a4bc);
  v36->set_f_1(0.549104);
  v35->set_f_0(s->substr(0, 17));
  Message1::M1::M19::M27* v37 = v35->mutable_f_2();
  v37->set_f_0(0x4f);
  Message1::M1::M19::M27::M40* v38 = v37->mutable_f_4();
  v38->set_f_0(0xd9b285);
  v37->set_f_1(s->substr(0, 15));
  Message1::M1::M12* v39 = v0->mutable_f_63();
  (void)v39;  // Suppresses clang-tidy.
  v0->set_f_11(s->substr(0, 14));
  message->set_f_13(0x7a862fe7b9abb738);
  message->set_f_22(false);
  message->set_f_4(0x72);
  message->set_f_24(0x300fb3785e9b1de);
  message->set_f_20(0x3c56c6b);
  message->set_f_5(0x43);
  message->set_f_23(0x945e08);
  message->set_f_9(0x90ab2c6);
  message->set_f_19(Message1::E1_CONST_5);
  message->set_f_16(s->substr(0, 9));
  message->set_f_3(s->substr(0, 381));
  message->set_f_15(s->substr(0, 2));
  message->set_f_8(s->substr(0, 32));
  message->set_f_11(s->substr(0, 2));
  message->set_f_17(true);
  message->set_f_12(0x7c);
  message->set_f_1(false);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_18(s->substr(0, 2));
  message->set_f_24(0x258a276cc2a31cbe);
  message->set_f_15(s->substr(0, 113));
  message->set_f_12(0x68);
  message->set_f_1(false);
  message->set_f_0(0x7a797d2fd8b3c854);
  message->set_f_26(0x74cbec1cda117733);
  message->set_f_16(s->substr(0, 8));
  message->set_f_17(false);
  message->set_f_8(s->substr(0, 13));
  message->set_f_2(0xcfca66c644129e8);
  message->set_f_29(0x3120b7d4e5d313ef);
  message->set_f_7(0x192212);
  message->set_f_22(false);
  message->set_f_20(0x2);
  Message1::E2 array_0[21] = {
      Message1::E2_CONST_1, Message1::E2_CONST_1, Message1::E2_CONST_2,
      Message1::E2_CONST_4, Message1::E2_CONST_3, Message1::E2_CONST_3,
      Message1::E2_CONST_5, Message1::E2_CONST_5, Message1::E2_CONST_2,
      Message1::E2_CONST_1, Message1::E2_CONST_4, Message1::E2_CONST_3,
      Message1::E2_CONST_1, Message1::E2_CONST_5, Message1::E2_CONST_3,
      Message1::E2_CONST_2, Message1::E2_CONST_4, Message1::E2_CONST_2,
      Message1::E2_CONST_2, Message1::E2_CONST_2, Message1::E2_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_25(v);
  }
  message->set_f_13(0x3154333142550b4c);
  message->set_f_21(0xfac7c5f);
  message->set_f_9(0x6fb);
  message->set_f_23(0x44472c3);
  message->set_f_10(0.757093);
  message->set_f_6(s->substr(0, 18));
  message->set_f_27(0xbe81b01);
  message->set_f_14(s->substr(0, 8));
  message->set_f_3(s->substr(0, 58));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_17(true);
  message->set_f_7(0x5a);
  message->add_f_25(Message1::E2_CONST_4);
  message->set_f_21(0x9e273b1);
  message->set_f_0(0x60b0689b084313df);
  message->set_f_12(0x62b4312);
  message->set_f_3(s->substr(0, 6));
  message->set_f_29(0x6fb91ee42d3b07e0);
  message->set_f_26(0x680ca755f25c45d3);
  message->set_f_8(s->substr(0, 8));
  message->set_f_11(s->substr(0, 16));
  message->set_f_19(Message1::E1_CONST_3);
  message->set_f_27(0x8397977);
  message->set_f_5(0x89436);
  message->set_f_16(s->substr(0, 6));
  message->set_f_22(true);
  message->set_f_13(0x1c332286554efad9);
  message->set_f_24(0x508ad38a10387499);
  Message1::M1* v0 = message->mutable_f_46();
  v0->set_f_23(0x5555b0de);
  Message1::M1::M18* v1 = v0->mutable_f_71();
  v1->set_f_3(0x5d8201c23df46173);
  v1->set_f_2(0x294fadd643d4dce);
  v1->set_f_0(Message1::M1::M18::E5_CONST_4);
  Message1::M1::M14* v2 = v0->mutable_f_65();
  v2->set_f_0(0x5e0e58bb29bd0251);
  Message1::M1::M14::M34* v3 = v2->mutable_f_5();
  Message1::M1::M14::M34::M38* v4 = v3->mutable_f_4();
  v4->set_f_0(0x7cd4bba93a295ffa);
  v3->set_f_0(0x1f71b0965987401d);
  v0->set_f_31(0xa0bed6a);
  Message1::M1::M3* v5 = v0->mutable_f_53();
  v5->set_f_0(0x7d6942e3);
  Message1::M1::M7* v6 = v0->mutable_f_57();
  v6->set_f_0(0x1fb0);
  v0->set_f_7(true);
  v0->set_f_22(0x43df90df3cc5c14b);
  Message1::M1::M15* v7 = v0->mutable_f_66();
  v7->set_f_0(true);
  Message1::M1::M4* v8 = v0->mutable_f_54();
  Message1::M1::M4::E4 array_0[6] = {
      Message1::M1::M4::E4_CONST_3, Message1::M1::M4::E4_CONST_4,
      Message1::M1::M4::E4_CONST_5, Message1::M1::M4::E4_CONST_2,
      Message1::M1::M4::E4_CONST_4, Message1::M1::M4::E4_CONST_1,
  };
  for (auto v : array_0) {
    v8->add_f_0(v);
  }
  v0->set_f_2(0x21);
  Message1::M1::M5* v9 = v0->mutable_f_55();
  v9->set_f_16(true);
  v9->set_f_2(0x4651065655235797);
  v9->set_f_14(0xe11);
  v9->set_f_12(s->substr(0, 31));
  v9->set_f_8(0x489f577);
  v9->set_f_3(s->substr(0, 14));
  v9->set_f_9(0x34cfd1106ca06fbe);
  v9->set_f_1(0x70);
  v9->set_f_10(s->substr(0, 434));
  v9->set_f_6(0x761d4f9);
  v9->set_f_5(0x73c59237654de220);
  v9->set_f_11(0.774173);
  v9->set_f_15(0x24);
  v9->set_f_17(0x5f0c7a19);
  v0->set_f_21(0x3049b901);
  Message1::M1::M11* v10 = v0->mutable_f_62();
  v10->set_f_0(s->substr(0, 22));
  v0->set_f_9(s->substr(0, 26));
  Message1::M1::M12* v11 = v0->mutable_f_63();
  v11->set_f_0(0x429879743a4b5aad);
  Message1::M1::M19* v12 = v0->mutable_f_72();
  Message1::M1::M19::M27* v13 = v12->mutable_f_2();
  v13->set_f_0(0x1327);
  v13->set_f_1(s->substr(0, 17));
  Message1::M1::M10* v14 = v0->mutable_f_60();
  v14->set_f_3(0x23f518bc);
  v14->set_f_0(s->substr(0, 617));
  v14->set_f_2(true);
  v0->set_f_30(0x57);
  v0->set_f_20(0x6fda1532d144b7d1);
  v0->set_f_1(0.363415);
  Message1::M1::M13* v15 = v0->mutable_f_64();
  Message1::M1::M13::M35* v16 = v15->mutable_f_5();
  v16->set_f_0(0x191bd5);
  v15->set_f_0(false);
  Message1::M1::M21* v17 = v0->mutable_f_74();
  Message1::M1::M21::M32* v18 = v17->mutable_f_5();
  v18->set_f_0(0x228d);
  Message1::M1::M21::M32::M41* v19 = v18->mutable_f_7();
  v19->set_f_0(0x76);
  v17->set_f_0(0x1f);
  v17->set_f_1(s->substr(0, 6));
  v0->set_f_12(0x590902d);
  Message1::M1::M8* v20 = v0->mutable_f_58();
  v20->set_f_1(0x2ce6);
  v20->set_f_2(false);
  v20->set_f_0(0x71c5556);
  Message1::M1::M8::M23* v21 = v20->mutable_f_9();
  v21->set_f_0(s->substr(0, 3));
  v20->set_f_3(true);
  Message1::M1::M6* v22 = v0->mutable_f_56();
  Message1::M1::M6::M24* v23 = v22->mutable_f_2();
  v23->set_f_1(0.298989);
  v23->set_f_0(0x12b800c1d3ffe7d6);
  v22->set_f_0(0x6a7eccf27d4e33be);
  v0->set_f_10(0x5be332e46ab4dab);
  Message1::M1::M16* v24 = v0->mutable_f_67();
  v24->set_f_0(s->substr(0, 29));
  v0->set_f_6(0x57651478);
  v0->set_f_3(0x4180113ad30ba1ce);
  Message1::M1::M9* v25 = v0->mutable_f_59();
  (void)v25;  // Suppresses clang-tidy.
  Message1::M1::M2* v26 = v0->mutable_f_52();
  Message1::M1::M2::M31* v27 = v26->mutable_f_2();
  Message1::M1::M2::M31::M39* v28 = v27->mutable_f_2();
  v28->set_f_0(0x3532dcb40ca7cd4c);
  Message1::M1::M2::M36* v29 = v26->mutable_f_4();
  v29->set_f_0(0.871590);
  Message1::M1::M17* v30 = v0->mutable_f_69();
  v30->set_f_1(0.728067);
  v30->set_f_3(false);
  v30->set_f_6(0x1b074389131eb7ed);
  v30->set_f_5(0x75);
  v0->set_f_8(0x480ddb7c);
  v0->set_f_5(0x2e34ed8af4b17ccc);
  v0->set_f_29(s->substr(0, 24));
  Message1::M1::M22* v31 = v0->mutable_f_76();
  Message1::M1::M22::M26* v32 = v31->mutable_f_3();
  v32->set_f_2(0x1890c04b2ab5d44e);
  v32->set_f_0(0x36e93b7);
  Message1::M1::M22::M26::M43* v33 = v32->mutable_f_6();
  Message1::M1::M22::M26::M43::M48* v34 = v33->mutable_f_3();
  v34->add_f_1(Message1::M1::M22::M26::M43::M48::E13_CONST_2);
  v34->set_f_10(s->substr(0, 2));
  v34->set_f_4(0x578508cc58dde6bd);
  v34->set_f_2(s->substr(0, 6));
  v34->set_f_3(s->substr(0, 22));
  v34->set_f_8(0xcf390ea);
  Message1::M1::M22::M26::M43::M48::E14 array_1[15] = {
      Message1::M1::M22::M26::M43::M48::E14_CONST_3,
      Message1::M1::M22::M26::M43::M48::E14_CONST_2,
      Message1::M1::M22::M26::M43::M48::E14_CONST_4,
      Message1::M1::M22::M26::M43::M48::E14_CONST_1,
      Message1::M1::M22::M26::M43::M48::E14_CONST_1,
      Message1::M1::M22::M26::M43::M48::E14_CONST_5,
      Message1::M1::M22::M26::M43::M48::E14_CONST_4,
      Message1::M1::M22::M26::M43::M48::E14_CONST_1,
      Message1::M1::M22::M26::M43::M48::E14_CONST_3,
      Message1::M1::M22::M26::M43::M48::E14_CONST_4,
      Message1::M1::M22::M26::M43::M48::E14_CONST_5,
      Message1::M1::M22::M26::M43::M48::E14_CONST_5,
      Message1::M1::M22::M26::M43::M48::E14_CONST_5,
      Message1::M1::M22::M26::M43::M48::E14_CONST_5,
      Message1::M1::M22::M26::M43::M48::E14_CONST_1,
  };
  for (auto v : array_1) {
    v34->add_f_6(v);
  }
  v34->set_f_7(s->substr(0, 9));
  v34->set_f_11(0x4cc51e2cdd3a46c);
  v34->set_f_9(0x48f1202);
  v33->set_f_0(0x56cc2b9);
  v32->set_f_1(0x2d64);
  v31->set_f_1(s->substr(0, 71));
  Message1::M1::M22::M30* v35 = v31->mutable_f_4();
  v35->set_f_0(0x170876);
  v31->set_f_0(0x70e7d29fa4f1bba3);
  Message1::M1::M20* v36 = v0->mutable_f_73();
  v36->set_f_2(s->substr(0, 5));
  v36->set_f_3(0x7fe1e6becb27a919);
  v36->set_f_1(s->substr(0, 414));
  v0->set_f_26(0x4f);
  message->set_f_20(0x63);
  message->set_f_1(false);
  message->set_f_14(s->substr(0, 3521));
  message->set_f_18(s->substr(0, 6));
  message->set_f_4(0x6c);
  message->set_f_9(0x2f81);
  message->set_f_10(0.473302);
  message->set_f_23(0x5a);
  message->set_f_15(s->substr(0, 3318));
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE1_H_
