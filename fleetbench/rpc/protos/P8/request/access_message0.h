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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message0.pb.h"

namespace fleetbench::rpc::P8::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_14(s->substr(0, 17));
  message->set_f_2(Message0::E1_CONST_4);
  Message0::M7* v0 = message->mutable_f_55();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_29(0x70cfedc5e903492c);
  message->set_f_17(s->substr(0, 17));
  message->set_f_18(s->substr(0, 10));
  message->set_f_6(0x716b6e12fe3d7e7e);
  message->set_f_1(0.332442);
  message->set_f_26(0x3e);
  message->set_f_12(0x3d1387bd63f0f518);
  message->set_f_19(0xea866e77b06f226);
  message->set_f_27(0x71dc42e228379166);
  message->set_f_20(0x8364154);
  message->set_f_21(0x3e9e);
  Message0::M4* v1 = message->mutable_f_52();
  Message0::M4::M27* v2 = v1->mutable_f_6();
  v2->set_f_1(0x4eacdb26aa1e4e32);
  v2->set_f_4(0x13a5eeb43b4962f2);
  Message0::M4::M27::M42* v3 = v2->mutable_f_12();
  v3->set_f_5(0x44d6ee75df0f17a1);
  v3->set_f_0(s->substr(0, 17));
  v3->set_f_4(true);
  Message0::M4::M27::M42::M49* v4_0 = v3->add_f_9();
  v4_0->set_f_11(Message0::M4::M27::M42::M49::E12_CONST_2);
  v4_0->set_f_6(s->substr(0, 27));
  v4_0->set_f_3(0x5d124b73ac91b19f);
  v4_0->set_f_13(s->substr(0, 1));
  v4_0->set_f_7(s->substr(0, 102));
  v4_0->set_f_0(0x7766945a);
  Message0::M4::M27::M42::M49::E14 array_1[9] = {
      Message0::M4::M27::M42::M49::E14_CONST_2,
      Message0::M4::M27::M42::M49::E14_CONST_2,
      Message0::M4::M27::M42::M49::E14_CONST_4,
      Message0::M4::M27::M42::M49::E14_CONST_3,
      Message0::M4::M27::M42::M49::E14_CONST_4,
      Message0::M4::M27::M42::M49::E14_CONST_2,
      Message0::M4::M27::M42::M49::E14_CONST_5,
      Message0::M4::M27::M42::M49::E14_CONST_1,
      Message0::M4::M27::M42::M49::E14_CONST_1,
  };
  for (auto v : array_1) {
    v4_0->add_f_20(v);
  }
  v4_0->set_f_4(0x5e5d49d5894cf085);
  v4_0->add_f_15(Message0::M4::M27::M42::M49::E13_CONST_1);
  v4_0->set_f_8(0x26c10335e774a774);
  v4_0->set_f_2(0x250ec890);
  v4_0->set_f_12(s->substr(0, 4));
  v4_0->set_f_18(0x5555b0e8);
  v4_0->set_f_5(s->substr(0, 56));
  v4_0->set_f_1(0x253bc9b5d7fd1180);
  v4_0->set_f_19(s->substr(0, 11));
  v3->set_f_2(Message0::M4::M27::M42::E10_CONST_1);
  v3->set_f_1(s->substr(0, 314));
  v3->set_f_3(0x27);
  v2->set_f_0(s->substr(0, 28));
  v2->set_f_2(0xa7cd86b1681f838);
  Message0::M4::M23* v5_0 = v1->add_f_4();
  v5_0->set_f_0(0x66964984f7bcedcc);
  Message0::M5* v6_0 = message->add_f_53();
  v6_0->set_f_1(s->substr(0, 111));
  message->set_f_7(0.395941);
  Message0::M3* v7_0 = message->add_f_51();
  Message0::M3::M17* v8_0 = v7_0->add_f_4();
  v8_0->set_f_5(0x4d29d6b9);
  v8_0->set_f_2(0x1d9fc71ac6c837af);
  v8_0->set_f_1(0x358c3b3e78517548);
  v8_0->set_f_0(false);
  v8_0->set_f_3(0x9f46a30b150625);
  Message0::M3::M26* v9 = v7_0->mutable_f_8();
  (void)v9;  // Suppresses clang-tidy.
  v7_0->set_f_0(0x124d35);
  message->set_f_10(0xe6e722b);
  message->set_f_22(0x5f3802abed827b42);
  message->set_f_24(s->substr(0, 396));
  message->set_f_16(Message0::E3_CONST_2);
  Message0::E2 array_2[19] = {
      Message0::E2_CONST_1, Message0::E2_CONST_4, Message0::E2_CONST_2,
      Message0::E2_CONST_3, Message0::E2_CONST_5, Message0::E2_CONST_4,
      Message0::E2_CONST_4, Message0::E2_CONST_2, Message0::E2_CONST_3,
      Message0::E2_CONST_4, Message0::E2_CONST_5, Message0::E2_CONST_3,
      Message0::E2_CONST_1, Message0::E2_CONST_4, Message0::E2_CONST_4,
      Message0::E2_CONST_4, Message0::E2_CONST_2, Message0::E2_CONST_5,
      Message0::E2_CONST_3,
  };
  for (auto v : array_2) {
    message->add_f_11(v);
  }
  Message0::M2* v10_0 = message->add_f_49();
  Message0::M2::M15* v11_0 = v10_0->add_f_2();
  v11_0->set_f_3(0x583d130);
  v11_0->set_f_0(s->substr(0, 87));
  v11_0->set_f_1(s->substr(0, 87));
  v11_0->set_f_4(s->substr(0, 7));
  Message0::M2::M15::M40* v12 = v11_0->mutable_f_7();
  (void)v12;  // Suppresses clang-tidy.
  v11_0->set_f_5(0x65e793e8c021118c);
  v11_0->set_f_2(s->substr(0, 1));
  Message0::M8* v13 = message->mutable_f_56();
  Message0::M8::M12* v14 = v13->mutable_f_2();
  v14->set_f_0(s->substr(0, 5));
  v13->set_f_0(0x5364679);
  message->set_f_9(0x6aefe61);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->add_f_11(Message0::E2_CONST_2);
  message->set_f_14(s->substr(0, 113));
  message->set_f_9(0xcfc7c46);
  message->set_f_28(0x44c03072);
  message->set_f_22(0xa0c7e69e80e921b);
  message->set_f_15(0x3e);
  Message0::M10* v0 = message->mutable_f_59();
  v0->set_f_8(0x6b9002d7);
  v0->set_f_23(0.108596);
  Message0::M10::M19* v1 = v0->mutable_f_47();
  v1->set_f_0(0x616a33496dfb3e76);
  v1->set_f_4(s->substr(0, 16));
  v1->set_f_2(0x2cea);
  v1->set_f_1(0x68);
  v0->set_f_29(0x4dbb374e);
  v0->set_f_24(s->substr(0, 36));
  v0->set_f_10(s->substr(0, 14));
  v0->set_f_27(0x6f89d87316e4f4fd);
  Message0::M10::M24* v2 = v0->mutable_f_48();
  v2->set_f_0(0x43);
  v0->set_f_4(0x19157e6eaa53cf65);
  v0->set_f_20(s->substr(0, 2));
  v0->set_f_19(s->substr(0, 4));
  v0->set_f_13(s->substr(0, 15));
  v0->set_f_15(0x3ebd27b893620076);
  v0->set_f_2(0x4ef68f7);
  v0->set_f_1(0x9c40c6a);
  v0->set_f_3(s->substr(0, 15));
  v0->set_f_26(0x6725cb02588dd81f);
  v0->set_f_0(0x19f1ba);
  v0->set_f_16(s->substr(0, 15));
  v0->set_f_25(0x6b739f86);
  v0->set_f_6(0x36e04afc8ab41b5c);
  Message0::M10::M33* v3 = v0->mutable_f_50();
  v3->set_f_0(0xb933c);
  v3->set_f_3(0x3e32dcea);
  v3->set_f_6(s->substr(0, 43));
  v3->set_f_5(true);
  Message0::M10::M13* v4 = v0->mutable_f_46();
  v4->set_f_0(0x9dffc2789dd760d);
  v0->set_f_14(s->substr(0, 7));
  v0->set_f_5(0xb2770ac);
  v0->set_f_12(0x14410e);
  v0->set_f_9(0x33913fc8);
  Message0::M10::M28* v5 = v0->mutable_f_49();
  (void)v5;  // Suppresses clang-tidy.
  v0->set_f_17(0x237e);
  message->set_f_10(0x4bb32a2);
  Message0::M2* v6_0 = message->add_f_49();
  Message0::M2::M15* v7_0 = v6_0->add_f_2();
  v7_0->set_f_5(0x5fd222cb9f8430d8);
  v7_0->set_f_2(s->substr(0, 18));
  v7_0->set_f_1(s->substr(0, 19));
  v7_0->set_f_4(s->substr(0, 5));
  Message0::M2::M15::M40* v8 = v7_0->mutable_f_7();
  v8->set_f_0(true);
  v6_0->set_f_0(s->substr(0, 17));
  message->set_f_5(0x6660ca2f4357d1ec);
  message->set_f_17(s->substr(0, 24));
  message->set_f_27(0x2ae47e2b39f31b63);
  message->set_f_29(0x4db1d8239a85fae9);
  Message0::M8* v9 = message->mutable_f_56();
  Message0::M8::M30* v10 = v9->mutable_f_3();
  v10->set_f_0(s->substr(0, 18));
  Message0::M8::M12* v11 = v9->mutable_f_2();
  (void)v11;  // Suppresses clang-tidy.
  v9->set_f_0(0x69);
  message->set_f_7(0.415112);
  message->set_f_16(Message0::E3_CONST_1);
  message->set_f_6(0x1ec6f274004c4f66);
  message->set_f_18(s->substr(0, 4));
  Message0::M7* v12 = message->mutable_f_55();
  (void)v12;  // Suppresses clang-tidy.
  Message0::M5* v13_0 = message->add_f_53();
  v13_0->set_f_1(s->substr(0, 4));
  Message0::M6* v14 = message->mutable_f_54();
  v14->set_f_3(0xa8ffdf943b2156);
  Message0::M6::M21* v15_0 = v14->add_f_10();
  v15_0->set_f_1(0x5);
  Message0::M6::M21::E6 array_0[20] = {
      Message0::M6::M21::E6_CONST_4, Message0::M6::M21::E6_CONST_3,
      Message0::M6::M21::E6_CONST_5, Message0::M6::M21::E6_CONST_5,
      Message0::M6::M21::E6_CONST_2, Message0::M6::M21::E6_CONST_1,
      Message0::M6::M21::E6_CONST_3, Message0::M6::M21::E6_CONST_5,
      Message0::M6::M21::E6_CONST_3, Message0::M6::M21::E6_CONST_2,
      Message0::M6::M21::E6_CONST_5, Message0::M6::M21::E6_CONST_4,
      Message0::M6::M21::E6_CONST_3, Message0::M6::M21::E6_CONST_2,
      Message0::M6::M21::E6_CONST_4, Message0::M6::M21::E6_CONST_5,
      Message0::M6::M21::E6_CONST_3, Message0::M6::M21::E6_CONST_2,
      Message0::M6::M21::E6_CONST_3, Message0::M6::M21::E6_CONST_4,
  };
  for (auto v : array_0) {
    v15_0->add_f_0(v);
  }
  v14->set_f_0(0x71cc9ecb);
  Message0::M6::M18* v16 = v14->mutable_f_8();
  v16->set_f_0(0x10afc757cee894b6);
  v16->set_f_1(0x742068446270dd);
  Message0::M6::M32* v17_0 = v14->add_f_16();
  Message0::M6::M32::M43* v18 = v17_0->mutable_f_3();
  v18->set_f_1(0x7100ee8d);
  v18->set_f_2(true);
  v18->set_f_0(0x3173f239);
  v17_0->set_f_0(s->substr(0, 4));
  Message0::M6::M31* v19 = v14->mutable_f_15();
  v19->set_f_4(0x268a3c7a075656ff);
  v19->set_f_1(Message0::M6::M31::E8_CONST_4);
  v19->set_f_2(0x5993ccbef59c4b51);
  v19->set_f_0(true);
  v14->set_f_2(s->substr(0, 84));
  Message0::M6::M25* v20_0 = v14->add_f_12();
  Message0::M6::M25::M35* v21 = v20_0->mutable_f_2();
  (void)v21;  // Suppresses clang-tidy.
  Message0::M6::M25::M39* v22_0 = v20_0->add_f_3();
  v22_0->set_f_0(s->substr(0, 26));
  message->set_f_0(true);
  message->set_f_12(0x270060a6083b4630);
  message->set_f_20(0x46);
  Message0::M4* v23 = message->mutable_f_52();
  v23->set_f_0(0x2f);
  Message0::M4::M27* v24 = v23->mutable_f_6();
  v24->set_f_0(s->substr(0, 10));
  Message0::M4::M27::M42* v25 = v24->mutable_f_12();
  v25->set_f_0(s->substr(0, 7));
  v25->set_f_1(s->substr(0, 10));
  v25->set_f_5(0x10dc1886fb0f52b7);
  v25->set_f_3(0x288b1);
  v25->set_f_2(Message0::M4::M27::M42::E10_CONST_1);
  message->set_f_21(0x17);
  Message0::M1* v26_0 = message->add_f_48();
  (void)v26_0;  // Suppresses clang-tidy.
  message->set_f_26(0x362d3);
  message->set_f_19(0x1b80ec6d6a9df053);
  message->set_f_25(0x540602e59dc902a5);
  Message0::M9* v27 = message->mutable_f_57();
  v27->set_f_0(0.013467);
  Message0::M9::M14* v28 = v27->mutable_f_2();
  v28->set_f_0(0x8aba1);
  Message0::M9::M14::M34* v29 = v28->mutable_f_3();
  v29->set_f_2(0x2b8341ae);
  v29->set_f_0(0x4710bbe67e4a7353);
  v29->set_f_1(s->substr(0, 7));
  message->set_f_23(0x569c182f);
  message->set_f_24(s->substr(0, 4));
  message->set_f_13(0x13f606a7093871fb);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_26(0x4b);
  message->set_f_0(true);
  message->set_f_22(0x2b47ec1b272ffb78);
  Message0::M8* v0 = message->mutable_f_56();
  Message0::M8::M30* v1 = v0->mutable_f_3();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M2* v2_0 = message->add_f_49();
  v2_0->set_f_0(s->substr(0, 8));
  Message0::M6* v3 = message->mutable_f_54();
  v3->set_f_2(s->substr(0, 117));
  v3->set_f_1(0x3ce0);
  Message0::M6::M21* v4_0 = v3->add_f_10();
  v4_0->set_f_1(0xa5a22bb);
  v3->set_f_3(0x53f088587a8e17af);
  Message0::M6::M31* v5 = v3->mutable_f_15();
  v5->set_f_0(false);
  v5->set_f_3(0x1c);
  v5->set_f_2(0x5877bad55da8372b);
  v5->set_f_1(Message0::M6::M31::E8_CONST_3);
  v5->set_f_4(0x1da53b4c4c0e4679);
  Message0::M6::M18* v6 = v3->mutable_f_8();
  v6->set_f_1(0x44a6958b2f9f3ab6);
  v6->set_f_0(0x63bbb57bf5e7e7);
  Message0::M6::M20* v7 = v3->mutable_f_9();
  v7->set_f_0(0x44);
  v7->set_f_4(false);
  v7->set_f_1(0x19ea4c6fe2229d37);
  v7->set_f_5(0x61b8370d193ba073);
  v7->set_f_2(false);
  Message0::M6::M20::M41* v8 = v7->mutable_f_8();
  v8->set_f_1(0x7fd5fc89f9614d1a);
  v8->set_f_0(0x26);
  v8->set_f_2(0x50);
  v8->set_f_3(0x673e475818b1da17);
  Message0::M6::M32* v9_0 = v3->add_f_16();
  Message0::M6::M32::M43* v10 = v9_0->mutable_f_3();
  v10->set_f_2(false);
  v10->set_f_0(0xbf77f93);
  v10->set_f_1(0x5b2bb869);
  v3->set_f_0(0x2f529cf1);
  message->set_f_13(0x394afcbbca25c917);
  message->set_f_5(0x6643278e41f41538);
  Message0::M7* v11 = message->mutable_f_55();
  v11->set_f_0(0x6f);
  message->set_f_28(0x3f069ca7);
  message->set_f_18(s->substr(0, 4));
  message->set_f_20(0x5a28d42);
  message->set_f_24(s->substr(0, 4));
  message->set_f_21(0xb9752);
  message->set_f_16(Message0::E3_CONST_1);
  message->set_f_9(0xa10ce8e);
  Message0::M4* v12 = message->mutable_f_52();
  Message0::M4::M27* v13 = v12->mutable_f_6();
  Message0::M4::M27::M42* v14 = v13->mutable_f_12();
  v14->set_f_3(0x11df41);
  Message0::M4::M27::M42::M49* v15_0 = v14->add_f_9();
  v15_0->set_f_17(0xc60f5192a00009d);
  v15_0->add_f_20(Message0::M4::M27::M42::M49::E14_CONST_1);
  v15_0->set_f_8(0x3a7972eabc8ed2dd);
  v15_0->set_f_10(0x52ed851);
  v15_0->set_f_9(0.363454);
  v15_0->set_f_19(s->substr(0, 3));
  v15_0->set_f_4(0x25cf1dd72a8a3d0a);
  v15_0->set_f_6(s->substr(0, 6));
  v15_0->set_f_14(0x6e);
  Message0::M4::M27::M42::M49::M51* v16 = v15_0->mutable_f_29();
  v16->set_f_8(true);
  v16->set_f_7(0x3bd3820a1cb30d1c);
  v16->set_f_0(0x7e240b85e694b5f3);
  v16->set_f_5(0x4b6189f7a69ef9cc);
  v16->set_f_4(true);
  v16->set_f_9(true);
  v16->set_f_11(0x56962d50);
  v16->set_f_1(0x136295e74eb82ea0);
  v15_0->set_f_1(0x2c162b46a5889e49);
  v15_0->set_f_5(s->substr(0, 17));
  v15_0->set_f_7(s->substr(0, 126));
  v15_0->set_f_12(s->substr(0, 1));
  v15_0->set_f_0(0x3d8f6199);
  v15_0->set_f_11(Message0::M4::M27::M42::M49::E12_CONST_4);
  v14->set_f_5(0xeacc8c9a3b3c465);
  v14->set_f_2(Message0::M4::M27::M42::E10_CONST_4);
  v14->set_f_0(s->substr(0, 5));
  v13->set_f_0(s->substr(0, 39));
  v13->set_f_3(s->substr(0, 8));
  v13->set_f_1(0x5a7f8de37a2f992b);
  Message0::M4::M23* v17_0 = v12->add_f_4();
  (void)v17_0;  // Suppresses clang-tidy.
  v12->set_f_0(0xb);
  message->set_f_10(0x9ab116b);
  message->set_f_25(0x5209b3b2f8cf1007);
  Message0::M5* v18_0 = message->add_f_53();
  v18_0->set_f_0(0x6b);
  v18_0->set_f_1(s->substr(0, 2));
  message->set_f_15(0x673a1);
  message->set_f_2(Message0::E1_CONST_3);
  message->set_f_7(0.934919);
  message->set_f_8(0x57f7b2b);
  message->set_f_3(s->substr(0, 11));
  Message0::M9* v19 = message->mutable_f_57();
  Message0::M9::M14* v20 = v19->mutable_f_2();
  v20->set_f_0(0xd96ac);
  message->set_f_4(0x340066d91a4aa206);
  message->set_f_23(0x5b431a19);
  message->set_f_12(0x6c5663bb691bdadc);
  Message0::M1* v21_0 = message->add_f_48();
  Message0::M1::M16* v22 = v21_0->mutable_f_2();
  v22->set_f_0(0x57);
  v21_0->add_f_0(Message0::M1::E4_CONST_2);
  Message0::M1::M29* v23_0 = v21_0->add_f_3();
  (void)v23_0;  // Suppresses clang-tidy.
  message->set_f_29(0x544ecfda826ba833);
  Message0::M10* v24 = message->mutable_f_59();
  Message0::M10::M28* v25 = v24->mutable_f_49();
  v25->set_f_0(s->substr(0, 2));
  v25->set_f_1(0x51868ee51e30d2bd);
  Message0::M10::M28::M45* v26_0 = v25->add_f_6();
  (void)v26_0;  // Suppresses clang-tidy.
  v24->set_f_27(0x195ba3bd4f3402ca);
  v24->set_f_28(s->substr(0, 7));
  v24->set_f_5(0x98063ff);
  v24->set_f_6(0x2fe4753d156a9a3);
  v24->set_f_9(0x15cfdaa9);
  v24->set_f_8(0x4ade1346);
  v24->set_f_24(s->substr(0, 6));
  v24->set_f_11(0x48564a435fc83e38);
  v24->set_f_4(0x5c0eba0123324b48);
  v24->set_f_0(0x68031c6);
  v24->set_f_17(0x571311c);
  Message0::M10::M33* v27 = v24->mutable_f_50();
  v27->set_f_1(false);
  v27->set_f_6(s->substr(0, 29));
  v27->set_f_4(false);
  v27->set_f_3(0x816a12f);
  v27->set_f_5(true);
  v24->set_f_14(s->substr(0, 3));
  Message0::M10::M19* v28 = v24->mutable_f_47();
  v28->set_f_1(0x67);
  v28->set_f_3(0x4a);
  v28->set_f_2(0x48);
  v28->set_f_0(0x7b8fac68ae0976f3);
  v28->set_f_4(s->substr(0, 19));
  v24->set_f_10(s->substr(0, 6));
  v24->set_f_20(s->substr(0, 9));
  v24->set_f_12(0x37);
  v24->set_f_26(0x2a2c8e51aad49afc);
  v24->set_f_19(s->substr(0, 40));
  v24->set_f_25(0x1fda9abd);
  v24->set_f_21(0x15);
  v24->set_f_16(s->substr(0, 7));
  v24->set_f_2(0xb);
  v24->set_f_7(0x3c01fa1);
  v24->set_f_1(0xab072d8);
  v24->set_f_18(0x6ada91bd9b2bffcc);
  message->set_f_19(0x19aa5b9c5834d41a);
  message->set_f_27(0x6ba9b2339521bf4b);
  message->set_f_6(0x5941902e546fd29f);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M5* v0_0 = message->add_f_53();
  v0_0->set_f_0(0x22);
  v0_0->set_f_1(s->substr(0, 111));
  message->set_f_5(0x54e3f6b87a9c9614);
  message->set_f_23(0x5a442bec);
  message->set_f_28(0x7f2f5ec5);
  message->set_f_13(0xb14d81d923faec6);
  Message0::M1* v1_0 = message->add_f_48();
  Message0::M1::M16* v2 = v1_0->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M1::M29* v3_0 = v1_0->add_f_3();
  v3_0->set_f_0(0x2351747c9e7856aa);
  v1_0->add_f_0(Message0::M1::E4_CONST_4);
  message->set_f_20(0x4e);
  message->set_f_16(Message0::E3_CONST_5);
  message->set_f_1(0.462811);
  message->set_f_12(0x1cd9f17bd4914c1c);
  message->set_f_7(0.593759);
  message->set_f_17(s->substr(0, 2169));
  message->set_f_29(0x151dea3883486ca1);
  message->add_f_11(Message0::E2_CONST_4);
  message->set_f_21(0x8c196f6);
  Message0::M8* v4 = message->mutable_f_56();
  Message0::M8::M30* v5 = v4->mutable_f_3();
  (void)v5;  // Suppresses clang-tidy.
  v4->set_f_0(0x2);
  message->set_f_24(s->substr(0, 22));
  message->set_f_15(0x4e);
  message->set_f_3(s->substr(0, 16));
  Message0::M10* v6 = message->mutable_f_59();
  v6->set_f_17(0x6e);
  v6->set_f_25(0x210546a8);
  v6->set_f_0(0x3395);
  v6->set_f_21(0x78);
  v6->set_f_16(s->substr(0, 6));
  v6->set_f_10(s->substr(0, 2));
  v6->set_f_18(0x20f1d834bc7fceeb);
  v6->set_f_19(s->substr(0, 35));
  v6->set_f_28(s->substr(0, 50));
  v6->set_f_22(0x5fd80db57d520917);
  v6->set_f_5(0x45);
  v6->set_f_12(0x134028);
  Message0::M10::M19* v7 = v6->mutable_f_47();
  v7->set_f_1(0x467b0);
  v7->set_f_0(0x73ef0a85fe5eedf8);
  v7->set_f_4(s->substr(0, 13));
  v7->set_f_3(0x6c0e18d);
  v7->set_f_2(0xf74bd);
  Message0::M10::M13* v8 = v6->mutable_f_46();
  (void)v8;  // Suppresses clang-tidy.
  v6->set_f_8(0x357647f);
  v6->set_f_4(0x4161894fc02345b1);
  v6->set_f_3(s->substr(0, 8));
  Message0::M10::M28* v9 = v6->mutable_f_49();
  v9->set_f_0(s->substr(0, 17));
  v9->set_f_1(0x43aaf6d731398285);
  v6->set_f_29(0x6486cd41);
  v6->set_f_14(s->substr(0, 12));
  v6->set_f_11(0x1093adcc5df8e658);
  v6->set_f_27(0x44d902abb449adeb);
  v6->set_f_1(0x2044);
  v6->set_f_13(s->substr(0, 15));
  v6->set_f_2(0x191c0d);
  v6->set_f_24(s->substr(0, 66));
  message->set_f_22(0x457a9ee8567d7999);
  Message0::M4* v10 = message->mutable_f_52();
  Message0::M4::M23* v11_0 = v10->add_f_4();
  (void)v11_0;  // Suppresses clang-tidy.
  Message0::M4::M27* v12 = v10->mutable_f_6();
  v12->set_f_3(s->substr(0, 6));
  Message0::M4::M27::M42* v13 = v12->mutable_f_12();
  v13->set_f_3(0x12515e);
  v13->set_f_2(Message0::M4::M27::M42::E10_CONST_3);
  v13->set_f_0(s->substr(0, 6));
  v13->set_f_4(true);
  v12->set_f_2(0x6e1c1289ba064ab);
  v12->set_f_4(0x5f004e6dc0a3cbce);
  message->set_f_19(0x11ff402308a8566c);
  Message0::M9* v14 = message->mutable_f_57();
  v14->set_f_0(0.918020);
  Message0::M9::M14* v15 = v14->mutable_f_2();
  Message0::M9::M14::M34* v16 = v15->mutable_f_3();
  v16->set_f_1(s->substr(0, 5));
  v16->set_f_2(0x2f941297);
  v16->set_f_0(0x6890c5f4211f0b14);
  v15->set_f_0(0x79);
  Message0::M3* v17_0 = message->add_f_51();
  Message0::M3::M11* v18_0 = v17_0->add_f_3();
  v18_0->set_f_1(0x7efa6ed3);
  v18_0->set_f_0(0x7c1803b3b0ad0a02);
  v18_0->set_f_2(s->substr(0, 15));
  Message0::M3::M22* v19 = v17_0->mutable_f_7();
  (void)v19;  // Suppresses clang-tidy.
  Message0::M3::M26* v20 = v17_0->mutable_f_8();
  Message0::M3::M26::M37* v21 = v20->mutable_f_3();
  Message0::M3::M26::M37::M48* v22_0 = v21->add_f_7();
  v22_0->set_f_0(0x510fdf93114fde12);
  Message0::M3::M26::M37::M48::M50* v23 = v22_0->mutable_f_2();
  v23->set_f_0(s->substr(0, 404));
  v21->set_f_2(s->substr(0, 10));
  Message0::M3::M26::M46* v24 = v20->mutable_f_4();
  v24->set_f_3(0x20f2de235b02c85a);
  v24->set_f_4(0.514847);
  v24->set_f_0(0x65bc1bcc8524816e);
  message->set_f_6(0xad422c44d6280ca);
  message->set_f_4(0x240a39353ce668ba);
  message->set_f_8(0x22);
  Message0::M2* v25_0 = message->add_f_49();
  v25_0->set_f_0(s->substr(0, 21));
  Message0::M2::M15* v26_0 = v25_0->add_f_2();
  v26_0->set_f_2(s->substr(0, 16));
  Message0::M2::M15::M40* v27 = v26_0->mutable_f_7();
  v27->set_f_0(false);
  v26_0->set_f_5(0x5e7045ae1bb2dce6);
  Message0::M7* v28 = message->mutable_f_55();
  v28->set_f_0(0x9c66bb8);
  message->set_f_0(false);
  message->set_f_9(0x7c);
  message->set_f_18(s->substr(0, 11));
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
}  // namespace fleetbench::rpc::P8::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
