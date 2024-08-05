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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message1.pb.h"

namespace fleetbench::rpc::P8::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_18(s->substr(0, 4));
  message->set_f_27(0x3cd2de04824d921d);
  message->set_f_8(0x1d400a9);
  message->set_f_5(0x3f);
  message->set_f_19(0.778024);
  message->add_f_16(Message1::E3_CONST_4);
  message->set_f_21(0xb7ad726);
  Message1::M8* v0 = message->mutable_f_62();
  Message1::M8::M36* v1_0 = v0->add_f_7();
  v1_0->set_f_2(0x3e38dd5dde5eb42d);
  v1_0->set_f_0(0x3ba6c7637e44e2e5);
  v1_0->set_f_1(0x475055ae935833ad);
  v1_0->set_f_3(0xc5d025a);
  v0->set_f_0(0x3a4d73831520fcf6);
  Message1::M8::M22* v2 = v0->mutable_f_5();
  Message1::M8::M22::M50* v3 = v2->mutable_f_4();
  v3->set_f_2(0x2fe5d61942639598);
  v3->set_f_3(s->substr(0, 7));
  Message1::M8::M22::M50::M58* v4 = v3->mutable_f_11();
  (void)v4;  // Suppresses clang-tidy.
  v3->set_f_0(0x2e);
  Message1::M8::M22::M51* v5 = v2->mutable_f_5();
  (void)v5;  // Suppresses clang-tidy.
  v2->set_f_0(s->substr(0, 27));
  message->set_f_23(0x71edc64);
  Message1::M7* v6 = message->mutable_f_61();
  Message1::M7::M27* v7 = v6->mutable_f_6();
  v7->set_f_0(s->substr(0, 7));
  message->set_f_15(0x506ffd3bc51762cd);
  message->set_f_24(s->substr(0, 14));
  message->add_f_10(Message1::E2_CONST_2);
  message->set_f_7(0x7);
  message->set_f_0(0xc350952);
  Message1::M11* v8 = message->mutable_f_68();
  v8->set_f_0(0x633e06b4cc4d45ab);
  v8->set_f_2(0x334c70b3c8e200ce);
  Message1::M11::M32* v9_0 = v8->add_f_7();
  v9_0->set_f_0(0x3e);
  Message1::M11::M32::M46* v10_0 = v9_0->add_f_3();
  v10_0->set_f_1(s->substr(0, 92));
  v10_0->set_f_0(0x7236aff6b37a1b84);
  message->set_f_2(0x30bd1c977617bc94);
  Message1::M10* v11 = message->mutable_f_66();
  (void)v11;  // Suppresses clang-tidy.
  message->set_f_6(0xb6b0f);
  message->set_f_1(0x94d31ee);
  message->set_f_11(s->substr(0, 19));
  Message1::M13* v12 = message->mutable_f_71();
  Message1::M13::M26* v13 = v12->mutable_f_7();
  v13->set_f_1(0x11646cfcf3346758);
  v13->set_f_0(s->substr(0, 4));
  Message1::M13::M26::M48* v14 = v13->mutable_f_3();
  v14->set_f_0(0x24);
  Message1::M13::M26::M48::M53* v15 = v14->mutable_f_2();
  Message1::M13::M26::M48::M53::M63* v16 = v15->mutable_f_2();
  v16->set_f_0(0x72);
  v15->set_f_0(0x118bd2ef972e2bf);
  v12->set_f_3(s->substr(0, 289));
  Message1::M13::M40* v17 = v12->mutable_f_8();
  v17->set_f_1(0x507e7863f94d19f3);
  v17->set_f_0(s->substr(0, 26));
  Message1::M13::M40::M49* v18_0 = v17->add_f_6();
  v18_0->set_f_0(0x425b357897f2c9c);
  v18_0->set_f_1(Message1::M13::M40::M49::E5_CONST_2);
  v18_0->set_f_3(0x4a);
  v18_0->set_f_2(0x5945ae5);
  Message1::M13::M40::M49::M55* v19 = v18_0->mutable_f_7();
  v19->set_f_0(s->substr(0, 13));
  v18_0->set_f_4(s->substr(0, 7));
  v17->set_f_2(0x1d01e0d954749ffd);
  v17->set_f_3(0x676971c9f6aac70e);
  v12->set_f_2(s->substr(0, 15));
  message->set_f_20(0x1a67b826);
  Message1::M12* v20 = message->mutable_f_70();
  v20->set_f_1(0x131d5c);
  v20->set_f_0(0x7);
  v20->set_f_2(s->substr(0, 8));
  message->set_f_26(0x1936ad0d);
  Message1::M9* v21 = message->mutable_f_65();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M3* v22 = message->mutable_f_54();
  v22->set_f_2(s->substr(0, 3));
  v22->set_f_0(0x62591f41);
  message->set_f_17(0x52);
  message->set_f_12(s->substr(0, 7));
  message->set_f_28(0x1e5fd14960b1c8c);
  message->set_f_13(0x4c480409ec2ddcb2);
  message->set_f_3(0xf5c57217e517664);
  Message1::M14* v23 = message->mutable_f_74();
  v23->set_f_0(0x264b1e6);
  Message1::M14::M35* v24 = v23->mutable_f_10();
  (void)v24;  // Suppresses clang-tidy.
  Message1::M14::M38* v25_0 = v23->add_f_11();
  v25_0->set_f_1(0x2cf0b9a);
  v25_0->set_f_4(0x6ebb3954e028c422);
  v25_0->set_f_3(true);
  Message1::M14::M29* v26_0 = v23->add_f_8();
  v26_0->set_f_5(s->substr(0, 38));
  v26_0->set_f_6(0x56);
  v26_0->set_f_4(0x33e44a2ac0863580);
  v26_0->set_f_1(0x2e0c4e9);
  v26_0->set_f_0(0xfe05dcc);
  v26_0->set_f_2(0x2c);
  Message1::M14::M34* v27 = v23->mutable_f_9();
  v27->set_f_3(0x486198b);
  v27->set_f_4(s->substr(0, 5));
  v27->set_f_1(0x6d90f8e4465dfa83);
  v27->set_f_2(0x7585238974b0368e);
  Message1::M14::M20* v28_0 = v23->add_f_5();
  v28_0->add_f_0(Message1::M14::M20::E4_CONST_3);
  Message1::M14::M41* v29 = v23->mutable_f_12();
  v29->set_f_0(false);
  v29->set_f_3(s->substr(0, 15));
  v29->set_f_1(s->substr(0, 13));
  v29->set_f_5(0xd72a536);
  v29->set_f_2(0x55a0e73);
  v23->set_f_1(0x5a6e62d16005ddc1);
  message->set_f_25(0x54013dc);
  Message1::M5* v30_0 = message->add_f_58();
  Message1::M5::M21* v31_0 = v30_0->add_f_6();
  v31_0->set_f_0(0x60ff7dd);
  Message1::M5::M19* v32 = v30_0->mutable_f_5();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M5::M16* v33_0 = v30_0->add_f_3();
  (void)v33_0;  // Suppresses clang-tidy.
  Message1::M5::M37* v34 = v30_0->mutable_f_7();
  v34->set_f_0(0x6837eaca18776590);
  Message1::M6* v35 = message->mutable_f_59();
  v35->set_f_6(0x19bd56635b706e8c);
  v35->set_f_2(0x4f04d474044d80f9);
  v35->set_f_5(0x400fe6e);
  v35->set_f_3(s->substr(0, 426));
  v35->set_f_1(0.822481);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_6(0x815644);
  message->set_f_1(0x29448c6);
  message->set_f_29(0x4684d89e2f26d7b1);
  message->add_f_16(Message1::E3_CONST_3);
  message->set_f_26(0x1865a0c2);
  message->set_f_28(0x11c4d32319a243f8);
  message->set_f_27(0x9490d599f2d11bc);
  message->set_f_4(s->substr(0, 17));
  message->set_f_3(0x68cb1dbc7a466c8);
  message->set_f_11(s->substr(0, 61));
  message->set_f_0(0x35);
  message->set_f_21(0x750eb81);
  Message1::M4* v0 = message->mutable_f_57();
  Message1::M4::M33* v1 = v0->mutable_f_3();
  v1->set_f_1(0x226d0b7c9ca3cbd6);
  v1->set_f_0(0x421f4e8);
  Message1::M1* v2 = message->mutable_f_50();
  v2->set_f_0(s->substr(0, 25));
  Message1::M1::M30* v3 = v2->mutable_f_3();
  v3->set_f_0(s->substr(0, 23));
  Message1::M1::M17* v4_0 = v2->add_f_2();
  v4_0->set_f_1(s->substr(0, 356));
  v4_0->set_f_0(s->substr(0, 1));
  Message1::M8* v5 = message->mutable_f_62();
  Message1::M8::M36* v6_0 = v5->add_f_7();
  v6_0->set_f_2(0x7c84d09ab009b25f);
  v6_0->set_f_0(0x8c3a3d00c8b0abd);
  v6_0->set_f_1(0x44d5dd54eb1df6fd);
  v5->set_f_1(0.839418);
  v5->set_f_0(0x433b1d5ba20cf10e);
  message->set_f_12(s->substr(0, 3));
  Message1::M6* v7 = message->mutable_f_59();
  v7->set_f_5(0xebbd5);
  v7->set_f_3(s->substr(0, 16));
  v7->set_f_4(true);
  v7->set_f_2(0x45bad38cddc9a44b);
  v7->set_f_6(0x63ed01745d30101d);
  message->set_f_14(0.761232);
  Message1::M3* v8 = message->mutable_f_54();
  v8->set_f_2(s->substr(0, 12));
  v8->set_f_1(true);
  v8->set_f_0(0x79f7b5a1);
  message->set_f_15(0x1f7b5e06337cd096);
  message->set_f_13(0x11f2f07c9a0eb3f9);
  Message1::M2* v9 = message->mutable_f_53();
  Message1::M2::M28* v10 = v9->mutable_f_3();
  v10->set_f_0(s->substr(0, 4));
  Message1::M2::M28::M45* v11 = v10->mutable_f_5();
  (void)v11;  // Suppresses clang-tidy.
  v10->set_f_2(0x1d1148);
  v10->set_f_1(0x3b);
  v9->set_f_0(0x209c37);
  Message1::M12* v12 = message->mutable_f_70();
  v12->set_f_0(0x8c632a1);
  message->set_f_19(0.121839);
  Message1::M10* v13 = message->mutable_f_66();
  Message1::M10::M24* v14 = v13->mutable_f_3();
  v14->set_f_2(s->substr(0, 7));
  v14->set_f_0(0x633e72fad4da3091);
  v13->set_f_0(s->substr(0, 8));
  Message1::M10::M31* v15 = v13->mutable_f_4();
  (void)v15;  // Suppresses clang-tidy.
  message->set_f_25(0x7c0375c);
  message->set_f_24(s->substr(0, 3));
  message->set_f_18(s->substr(0, 8));
  Message1::M9* v16 = message->mutable_f_65();
  v16->set_f_0(0x39da74a0);
  message->add_f_9(Message1::E1_CONST_2);
  message->add_f_9(Message1::E1_CONST_1);
  message->add_f_9(Message1::E1_CONST_4);
  message->set_f_5(0x6d);
  Message1::M5* v17_0 = message->add_f_58();
  v17_0->set_f_0(s->substr(0, 1426));
  Message1::M5::M37* v18 = v17_0->mutable_f_7();
  v18->set_f_0(0x511325f0ba01e8bb);
  Message1::M5::M21* v19_0 = v17_0->add_f_6();
  v19_0->set_f_0(0x15dc4a);
  Message1::M5::M19* v20 = v17_0->mutable_f_5();
  Message1::M5::M19::M42* v21_0 = v20->add_f_2();
  (void)v21_0;  // Suppresses clang-tidy.
  v20->set_f_0(0xb7fb148);
  message->set_f_2(0x10cb88559d529f76);
  message->add_f_10(Message1::E2_CONST_3);
  message->set_f_17(0x3e74485);
  Message1::M11* v22 = message->mutable_f_68();
  v22->set_f_2(0x60a9a0281cb6be8c);
  Message1::M11::M23* v23 = v22->mutable_f_5();
  v23->set_f_1(s->substr(0, 3));
  Message1::M7* v24 = message->mutable_f_61();
  v24->set_f_0(0x4f3dfcf);
  Message1::M7::M25* v25_0 = v24->add_f_5();
  v25_0->set_f_7(0x3388f0c8459015a5);
  v25_0->set_f_1(0x54);
  v25_0->set_f_6(s->substr(0, 3));
  v25_0->set_f_10(0x63f513ad);
  v25_0->set_f_2(0x45);
  Message1::M7::M25::M44* v26_0 = v25_0->add_f_14();
  v26_0->set_f_3(0x73184e478d8a46c0);
  v26_0->set_f_0(s->substr(0, 76));
  v26_0->set_f_9(0x2c80cf2785e2101c);
  v26_0->set_f_5(0x7b5979245ec0a44a);
  v26_0->set_f_1(0.087993);
  v26_0->set_f_2(0xc07ead1);
  v25_0->set_f_5(0x2a2d590e3d2f7f26);
  message->set_f_20(0x6a1820df);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M5* v0_0 = message->add_f_58();
  Message1::M5::M21* v1_0 = v0_0->add_f_6();
  v1_0->set_f_0(0x16aabf);
  Message1::M5::M16* v2_0 = v0_0->add_f_3();
  v2_0->set_f_0(0x75);
  v0_0->set_f_0(s->substr(0, 8));
  Message1::M5::M37* v3 = v0_0->mutable_f_7();
  Message1::M5::M37::M43* v4 = v3->mutable_f_3();
  Message1::M5::M37::M43::M59* v5 = v4->mutable_f_4();
  v5->set_f_0(0x3b);
  v4->set_f_0(false);
  Message1::M5::M37::M43::M54* v6_0 = v4->add_f_3();
  v6_0->set_f_4(true);
  v6_0->set_f_2(0.307645);
  v6_0->set_f_0(0x1e0);
  v6_0->set_f_1(0x2b885e9);
  Message1::M5::M37::M43::M60* v7 = v4->mutable_f_5();
  v7->set_f_14(0x59);
  v7->set_f_13(0x3);
  v7->set_f_12(s->substr(0, 12));
  v7->set_f_24(0x2160930f3d5);
  v7->set_f_21(0xa0139f3c33bbfdf);
  v7->set_f_4(0x63a06a8);
  v7->set_f_20(0.366129);
  v7->set_f_11(0x392df5b8);
  v7->set_f_9(0x21e3a66);
  v7->set_f_22(0x30);
  v7->set_f_1(s->substr(0, 6));
  v7->set_f_18(0x73);
  v7->set_f_6(0x7b3df60);
  v7->set_f_17(0x588ca57ae238b3f9);
  v7->set_f_3(0x43);
  v7->set_f_8(s->substr(0, 5));
  v7->set_f_15(s->substr(0, 4));
  Message1::M5::M37::M43::M60::M61* v8 = v7->mutable_f_44();
  v8->set_f_0(0x401a3d93085f7185);
  v7->set_f_19(0xcc);
  v7->set_f_7(0x2dd0bf4);
  v3->set_f_0(0x431761e33e26c15c);
  message->set_f_26(0x5581afc5);
  Message1::M11* v9 = message->mutable_f_68();
  v9->set_f_1(s->substr(0, 7));
  Message1::M11::M32* v10_0 = v9->add_f_7();
  Message1::M11::M32::M46* v11_0 = v10_0->add_f_3();
  v11_0->set_f_0(0x71a933180163af2a);
  v11_0->set_f_2(0x5d11af1);
  v11_0->set_f_1(s->substr(0, 4));
  v10_0->set_f_0(0x6c);
  v9->set_f_0(0x569acdd23ffcc8fb);
  v9->set_f_2(0x5b9b6536d4e86715);
  Message1::M11::M23* v12 = v9->mutable_f_5();
  v12->set_f_1(s->substr(0, 8));
  v12->set_f_0(s->substr(0, 102));
  message->set_f_4(s->substr(0, 2));
  message->add_f_9(Message1::E1_CONST_1);
  message->set_f_8(0x23);
  Message1::E2 array_0[15] = {
      Message1::E2_CONST_1, Message1::E2_CONST_5, Message1::E2_CONST_4,
      Message1::E2_CONST_3, Message1::E2_CONST_3, Message1::E2_CONST_3,
      Message1::E2_CONST_2, Message1::E2_CONST_2, Message1::E2_CONST_5,
      Message1::E2_CONST_5, Message1::E2_CONST_2, Message1::E2_CONST_3,
      Message1::E2_CONST_4, Message1::E2_CONST_5, Message1::E2_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_10(v);
  }
  Message1::M10* v13 = message->mutable_f_66();
  Message1::M10::M24* v14 = v13->mutable_f_3();
  v14->set_f_1(0x21c1bb11937ad6cf);
  v14->set_f_0(0x7abc83c4eb16b3bd);
  v13->set_f_0(s->substr(0, 3));
  message->set_f_21(0xaf23ccb);
  message->set_f_29(0x2cbd85f7faabda67);
  Message1::M4* v15 = message->mutable_f_57();
  Message1::M4::M33* v16 = v15->mutable_f_3();
  v16->set_f_0(0x29);
  message->set_f_15(0x2176a9afe3f34396);
  Message1::M6* v17 = message->mutable_f_59();
  v17->set_f_0(0x6c02ead2);
  v17->set_f_2(0x358e990177aeec66);
  v17->set_f_4(true);
  v17->set_f_3(s->substr(0, 10));
  v17->set_f_6(0x5191c033c995413c);
  message->set_f_25(0x82514a0);
  message->set_f_1(0xc59e6c6);
  message->set_f_5(0xef0cfda);
  message->set_f_27(0x37bccc1ec3174dc4);
  message->set_f_19(0.855294);
  message->set_f_12(s->substr(0, 6));
  message->set_f_6(0x3e11fdf);
  message->set_f_22(s->substr(0, 85));
  message->set_f_28(0x1c3ad9ebb670eaeb);
  message->set_f_3(0x2a836679d434d3e6);
  Message1::M14* v18 = message->mutable_f_74();
  Message1::M14::M29* v19_0 = v18->add_f_8();
  v19_0->set_f_6(0x3a51);
  v19_0->set_f_2(0x37);
  v19_0->set_f_0(0x60);
  v19_0->set_f_5(s->substr(0, 1));
  v19_0->set_f_4(0x4bf06d63d3b50bf0);
  Message1::M14::M29::M52* v20 = v19_0->mutable_f_12();
  v20->set_f_3(s->substr(0, 76));
  Message1::M14::M29::M52::M56* v21_0 = v20->add_f_8();
  (void)v21_0;  // Suppresses clang-tidy.
  Message1::M14::M29::M52::M57* v22 = v20->mutable_f_10();
  v22->set_f_2(0x2a43fec43a009570);
  v22->set_f_1(0x2158625b);
  v22->set_f_0(s->substr(0, 1));
  v20->set_f_4(0x9ac8fc2);
  v20->set_f_0(0x6504fdb6);
  v20->set_f_1(0x4c88227f070c7e50);
  Message1::M14::M20* v23_0 = v18->add_f_5();
  (void)v23_0;  // Suppresses clang-tidy.
  Message1::M14::M35* v24 = v18->mutable_f_10();
  v24->set_f_0(0x4e);
  v18->set_f_1(0x2d896051bfa9eed5);
  Message1::M14::M41* v25 = v18->mutable_f_12();
  v25->set_f_5(0x3f);
  v25->set_f_3(s->substr(0, 7));
  v18->set_f_0(0x56);
  Message1::M14::M34* v26 = v18->mutable_f_9();
  v26->set_f_0(0x392d085d1c44a826);
  v26->set_f_4(s->substr(0, 2));
  v26->set_f_1(0x377ae95e6968c539);
  Message1::M1* v27 = message->mutable_f_50();
  Message1::M1::M30* v28 = v27->mutable_f_3();
  v28->set_f_0(s->substr(0, 19));
  v27->set_f_0(s->substr(0, 6));
  message->set_f_13(0xe538b3f435a6612);
  Message1::M9* v29 = message->mutable_f_65();
  v29->set_f_0(0x832d38b);
  Message1::M13* v30 = message->mutable_f_71();
  v30->set_f_3(s->substr(0, 6));
  v30->set_f_0(0x5b);
  Message1::M13::M26* v31 = v30->mutable_f_7();
  v31->set_f_0(s->substr(0, 21));
  Message1::M13::M26::M48* v32 = v31->mutable_f_3();
  v32->set_f_0(0x7);
  Message1::M13::M26::M48::M53* v33 = v32->mutable_f_2();
  v33->set_f_0(0x2b9a9d09dbe85e47);
  Message1::M13::M26::M48::M53::M63* v34 = v33->mutable_f_2();
  v34->set_f_0(0xb458c17);
  Message1::M13::M40* v35 = v30->mutable_f_8();
  v35->set_f_2(0x5d6c8e82b71369c0);
  Message1::M13::M40::M49* v36_0 = v35->add_f_6();
  v36_0->set_f_0(0x18c565b6f241f03);
  Message1::M13::M40::M49::M55* v37 = v36_0->mutable_f_7();
  (void)v37;  // Suppresses clang-tidy.
  v36_0->set_f_1(Message1::M13::M40::M49::E5_CONST_3);
  v36_0->set_f_2(0x6807bc6);
  v35->set_f_3(0x72de91f8e2b8adc7);
  v35->set_f_1(0x3e2e22e3d779bab);
  v30->set_f_1(0xc5ff5d4cf750717);
  message->set_f_2(0x3f3459881d3e86ee);
  message->set_f_7(0x31);
  Message1::M15* v38 = message->mutable_f_77();
  Message1::M15::M18* v39_0 = v38->add_f_9();
  v39_0->set_f_0(s->substr(0, 17));
  v38->set_f_0(false);
  v38->set_f_5(false);
  v38->set_f_4(0xa9a7acca9418cb6);
  v38->set_f_2(0x5e3f69e8dff50690);
  v38->set_f_1(0x66);
  message->set_f_14(0.984377);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_53();
  Message1::M2::M28* v1 = v0->mutable_f_3();
  v1->set_f_1(0x17);
  message->set_f_29(0x7d1621043219bf1e);
  Message1::M4* v2 = message->mutable_f_57();
  Message1::M4::M39* v3 = v2->mutable_f_4();
  v3->set_f_3(0x633194ba);
  v3->set_f_2(0x5cbe8e3901c25dc8);
  v3->set_f_0(s->substr(0, 23));
  v3->set_f_1(s->substr(0, 45));
  v2->set_f_0(0x178e0d);
  Message1::M4::M33* v4 = v2->mutable_f_3();
  v4->set_f_1(0x45d556e7a67cd6ce);
  Message1::M7* v5 = message->mutable_f_61();
  v5->set_f_0(0x97f8c61);
  Message1::M7::M27* v6 = v5->mutable_f_6();
  v6->set_f_0(s->substr(0, 4));
  Message1::M7::M25* v7_0 = v5->add_f_5();
  v7_0->set_f_10(0x69b29d4c);
  v7_0->set_f_7(0x667f26132a308cc);
  v7_0->set_f_1(0x42);
  v7_0->set_f_9(0x3ddc);
  v7_0->set_f_5(0x37e6281821dcd974);
  v7_0->set_f_0(0x5f725d84);
  v7_0->set_f_8(0x15dfb7);
  v7_0->set_f_6(s->substr(0, 20));
  v7_0->set_f_4(s->substr(0, 16));
  Message1::M7::M25::M44* v8_0 = v7_0->add_f_14();
  v8_0->set_f_3(0x7920053571bca3de);
  v8_0->set_f_8(0x160c76);
  v8_0->set_f_1(0.361669);
  v8_0->set_f_0(s->substr(0, 13));
  v8_0->set_f_5(0x5f677c35ce585a6a);
  v8_0->set_f_7(0x14801b71866aa80c);
  v8_0->set_f_6(0xd609db91f5617b3);
  v8_0->set_f_9(0x216925a4c3aef18f);
  v8_0->set_f_2(0x67);
  v8_0->set_f_4(0xfb2b522);
  message->set_f_25(0x16dab9);
  message->set_f_26(0x64eecd6);
  message->set_f_2(0x38f8a6e29e32a7e0);
  message->set_f_13(0x5b4400f3ee4b0f04);
  message->set_f_20(0x63c082f6);
  message->set_f_14(0.513243);
  Message1::M15* v9 = message->mutable_f_77();
  v9->set_f_3(0x26);
  v9->set_f_2(0x76fa7936bc85e36a);
  v9->set_f_4(0x4c6405bddddd5778);
  v9->set_f_1(0xa397070);
  v9->set_f_0(false);
  v9->set_f_5(false);
  message->set_f_28(0x6106d10727c1ffc0);
  message->set_f_8(0x165e9d);
  message->set_f_19(0.153517);
  Message1::M8* v10 = message->mutable_f_62();
  Message1::M8::M36* v11_0 = v10->add_f_7();
  v11_0->set_f_3(0xd7d699d);
  v11_0->set_f_0(0x467ec75c319ab836);
  v11_0->set_f_2(0x6dbbbb4a171f9a3d);
  v10->set_f_1(0.183952);
  Message1::M8::M22* v12 = v10->mutable_f_5();
  v12->set_f_1(s->substr(0, 21));
  Message1::M8::M22::M51* v13 = v12->mutable_f_5();
  v13->set_f_0(0.186426);
  Message1::M8::M22::M50* v14 = v12->mutable_f_4();
  Message1::M8::M22::M50::M58* v15 = v14->mutable_f_11();
  Message1::M8::M22::M50::M58::M62* v16_0 = v15->add_f_3();
  v16_0->set_f_2(0.408475);
  v15->set_f_0(0x1b5cd121d7a21c7a);
  v14->set_f_2(0x2a6a60dcf1a2251c);
  v14->set_f_3(s->substr(0, 6));
  message->set_f_18(s->substr(0, 4));
  message->set_f_6(0x15);
  Message1::M12* v17 = message->mutable_f_70();
  v17->set_f_1(0xf51ff81);
  message->set_f_21(0x3d);
  message->set_f_1(0xc050e08);
  message->add_f_10(Message1::E2_CONST_4);
  message->set_f_17(0x418b50);
  message->set_f_15(0x2f2569599ebe9d57);
  message->set_f_24(s->substr(0, 24));
  Message1::M13* v18 = message->mutable_f_71();
  v18->set_f_3(s->substr(0, 14));
  v18->set_f_1(0x747b19e34569a6ea);
  v18->set_f_2(s->substr(0, 31));
  Message1::M13::M40* v19 = v18->mutable_f_8();
  v19->set_f_0(s->substr(0, 6));
  Message1::M13::M40::M49* v20_0 = v19->add_f_6();
  v20_0->set_f_0(0x2f286a08cbacc264);
  v20_0->set_f_4(s->substr(0, 6));
  Message1::M13::M40::M49::M55* v21 = v20_0->mutable_f_7();
  (void)v21;  // Suppresses clang-tidy.
  v20_0->set_f_2(0x1367);
  v20_0->set_f_1(Message1::M13::M40::M49::E5_CONST_4);
  v19->set_f_1(0x2033e5fde11e1a8e);
  v19->set_f_3(0x349cde0424b017a4);
  v19->set_f_2(0x3329bf72399d42e2);
  v18->set_f_0(0x65);
  Message1::M13::M26* v22 = v18->mutable_f_7();
  v22->set_f_1(0x303451786d7144f5);
  v22->set_f_0(s->substr(0, 18));
  Message1::M13::M26::M48* v23 = v22->mutable_f_3();
  v23->set_f_0(0x71);
  Message1::M13::M26::M48::M53* v24 = v23->mutable_f_2();
  Message1::M13::M26::M48::M53::M63* v25 = v24->mutable_f_2();
  v25->set_f_0(0x85358);
  Message1::M6* v26 = message->mutable_f_59();
  v26->set_f_5(0x77);
  v26->set_f_4(true);
  v26->set_f_2(0x2fefbf1000d7a0d4);
  v26->set_f_1(0.526035);
  v26->set_f_3(s->substr(0, 6));
  v26->set_f_0(0xadc80b3);
  message->set_f_12(s->substr(0, 3));
  message->set_f_23(0x2e);
  message->set_f_11(s->substr(0, 53));
  message->set_f_22(s->substr(0, 81));
  message->set_f_27(0x77be61fac426390c);
  Message1::M1* v27 = message->mutable_f_50();
  Message1::M1::M30* v28 = v27->mutable_f_3();
  v28->set_f_0(s->substr(0, 2));
  Message1::M5* v29_0 = message->add_f_58();
  Message1::M5::M19* v30 = v29_0->mutable_f_5();
  Message1::M5::M19::M42* v31_0 = v30->add_f_2();
  v31_0->set_f_0(0x54);
  v30->set_f_0(0x2f);
  Message1::M5::M37* v32 = v29_0->mutable_f_7();
  (void)v32;  // Suppresses clang-tidy.
  v29_0->set_f_0(s->substr(0, 114));
  Message1::M5::M21* v33_0 = v29_0->add_f_6();
  v33_0->set_f_0(0x58e6756);
  Message1::M5::M16* v34_0 = v29_0->add_f_3();
  v34_0->set_f_0(0x55dc355);
  message->set_f_3(0x5c22ee16cea0514);
  message->set_f_5(0x1cb94bd);
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
}  // namespace fleetbench::rpc::P8::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_
