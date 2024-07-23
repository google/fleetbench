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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message1.pb.h"

namespace fleetbench::rpc::P9::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_9(false);
  message->set_f_22(s->substr(0, 1));
  message->set_f_24(0x1b);
  Message1::M2* v0 = message->mutable_f_63();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_20(false);
  Message1::M9* v1 = message->mutable_f_72();
  Message1::M9::M42* v2_0 = v1->add_f_4();
  v2_0->set_f_0(0x1263ba5fa14b4fed);
  v1->set_f_0(0xf432e50);
  message->set_f_8(s->substr(0, 11));
  message->set_f_11(0x67b820265fbeb277);
  message->set_f_17(0x9898543);
  Message1::M1* v3 = message->mutable_f_62();
  v3->set_f_5(0x15);
  v3->set_f_0(0x3b);
  v3->set_f_2(0x37);
  Message1::M1::M46* v4 = v3->mutable_f_17();
  Message1::M1::M46::M78* v5 = v4->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M1::M72* v6 = v3->mutable_f_19();
  v6->set_f_3(s->substr(0, 40));
  v6->set_f_2(0x363a3d59290c8e65);
  v6->set_f_4(0x63);
  v3->set_f_4(s->substr(0, 28));
  message->set_f_28(0x164427);
  Message1::M6* v7 = message->mutable_f_69();
  Message1::M6::M17* v8 = v7->mutable_f_4();
  v8->set_f_0(0x3b);
  Message1::M6::M55* v9 = v7->mutable_f_13();
  Message1::M6::M55::M94* v10_0 = v9->add_f_2();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->set_f_0(0xceb3393d05d01488);
  Message1::M6::M49* v11 = v7->mutable_f_11();
  v11->set_f_1(0.857668);
  v11->set_f_4(0x1f);
  v11->set_f_2(0x5fb892c);
  v11->set_f_0(true);
  v11->set_f_3(0xd36d806a4bbcddbf);
  Message1::M6::M24* v12_0 = v7->add_f_9();
  Message1::M6::M24::M84* v13 = v12_0->mutable_f_2();
  (void)v13;  // Suppresses clang-tidy.
  Message1::M6::M14* v14 = v7->mutable_f_2();
  (void)v14;  // Suppresses clang-tidy.
  Message1::M6::M52* v15 = v7->mutable_f_12();
  v15->set_f_0(0xd0bd7262fcb25e12);
  message->set_f_15(true);
  Message1::M12* v16 = message->mutable_f_75();
  v16->set_f_2(s->substr(0, 2));
  Message1::M12::M21* v17 = v16->mutable_f_9();
  v17->set_f_0(0xedb9a9006d2047d8);
  Message1::M12::M45* v18 = v16->mutable_f_13();
  v18->set_f_0(true);
  int32_t array_1[6] = {
      0x5f, 0x6b, 0x154a4c, 0x77, 0xe, 0x4,
  };
  for (auto v : array_1) {
    v16->add_f_1(v);
  }
  Message1::M12::M29* v19 = v16->mutable_f_10();
  v19->add_f_4(Message1::M12::M29::E3_CONST_3);
  Message1::M12::M29::M109* v20 = v19->mutable_f_8();
  v20->set_f_1(s->substr(0, 62));
  v20->set_f_3(0x2df0b51370128f81);
  v19->set_f_1(0x30);
  v16->set_f_3(0x39);
  Message1::M12::M41* v21 = v16->mutable_f_12();
  v21->set_f_0(0xa4082d65a16d6e74);
  Message1::M12::M59* v22 = v16->mutable_f_15();
  v22->set_f_0(s->substr(0, 511));
  message->set_f_16(0x6cd12001);
  message->set_f_1(false);
  message->set_f_30(s->substr(0, 458));
  message->set_f_23(0x5d28a09920de9690);
  message->set_f_21(0x57a2384211a51019);
  message->set_f_12(0x34f78a0);
  message->set_f_14(0x2fab07c423ad2d4a);
  Message1::M8* v23 = message->mutable_f_71();
  Message1::M8::M69* v24_0 = v23->add_f_3();
  v24_0->set_f_0(true);
  v24_0->set_f_1(0x317);
  Message1::M8::M26* v25_0 = v23->add_f_2();
  (void)v25_0;  // Suppresses clang-tidy.
  message->set_f_4(0xb23);
  message->set_f_10(0x137dbe94284d67c8);
  message->set_f_32(s->substr(0, 18));
  Message1::M13* v26_0 = message->add_f_76();
  v26_0->set_f_1(s->substr(0, 30));
  Message1::M13::M50* v27 = v26_0->mutable_f_14();
  (void)v27;  // Suppresses clang-tidy.
  v26_0->set_f_2(0x5a);
  Message1::M13::M20* v28 = v26_0->mutable_f_12();
  (void)v28;  // Suppresses clang-tidy.
  v26_0->set_f_5(0x964d740);
  v26_0->set_f_3(0x17);
  Message1::M13::M31* v29_0 = v26_0->add_f_13();
  v29_0->set_f_0(Message1::M13::M31::E4_CONST_4);
  message->set_f_7(0x5675db4cdc60a886);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_63();
  v0->set_f_2(s->substr(0, 10));
  Message1::M2::M37* v1 = v0->mutable_f_5();
  v1->set_f_4(0xd32992849769351c);
  Message1::M2::M37::M104* v2_0 = v1->add_f_8();
  v2_0->set_f_1(0x1150);
  v2_0->set_f_3(false);
  v2_0->set_f_2(s->substr(0, 2));
  Message1::M2::M37::M97* v3 = v1->mutable_f_7();
  (void)v3;  // Suppresses clang-tidy.
  v1->set_f_1(s->substr(0, 188));
  v0->set_f_1(0xbb896c8f763ccda6);
  v0->set_f_0(0x75);
  message->set_f_19(s->substr(0, 12));
  message->add_f_27(s->substr(0, 3));
  Message1::M13* v4_0 = message->add_f_76();
  Message1::M13::M50* v5 = v4_0->mutable_f_14();
  v5->set_f_0(0x18);
  v5->set_f_1(0x36);
  v4_0->set_f_6(true);
  Message1::M13::M16* v6_0 = v4_0->add_f_11();
  v6_0->set_f_0(0x792c59f);
  v6_0->set_f_2(false);
  v4_0->set_f_2(0x6c);
  v4_0->set_f_4(0.564714);
  v4_0->set_f_5(0x5);
  message->set_f_11(0x691aef3522804042);
  Message1::M11* v7 = message->mutable_f_74();
  Message1::M11::M39* v8 = v7->mutable_f_6();
  v8->set_f_8(0x18);
  v8->set_f_2(0x3713e990f5225d71);
  v8->set_f_5(0x2482);
  v8->set_f_14(true);
  v8->set_f_1(0xc18b102);
  v8->set_f_17(0x8d8aac709aecd764);
  v8->set_f_15(false);
  v8->set_f_4(s->substr(0, 4));
  v8->set_f_6(0x3e);
  v8->set_f_7(0x10);
  v8->set_f_19(0x9db2c82ee2683a8c);
  v8->set_f_25(0x1af2e9);
  v8->set_f_26(false);
  v8->set_f_22(false);
  v8->set_f_0(false);
  v8->set_f_12(0x36);
  v8->set_f_27(0x72);
  Message1::M11::M65* v9_0 = v7->add_f_10();
  v9_0->set_f_0(s->substr(0, 27));
  message->set_f_17(0xf5fc023);
  message->set_f_32(s->substr(0, 6));
  message->set_f_29(0x65);
  message->set_f_28(0x4a);
  message->set_f_0(0x5c);
  message->set_f_30(s->substr(0, 88));
  message->set_f_24(0x66);
  message->set_f_23(0x946ee8220e2e8fc4);
  message->set_f_13(0x10233244);
  message->set_f_12(0x1c);
  message->set_f_16(0x1572e428);
  message->set_f_14(0x18bc5b72d1c0313c);
  message->set_f_31(s->substr(0, 5));
  message->set_f_26(0xd8f9e);
  Message1::M12* v10 = message->mutable_f_75();
  v10->set_f_2(s->substr(0, 6));
  Message1::M12::M29* v11 = v10->mutable_f_10();
  Message1::M12::M29::M109* v12 = v11->mutable_f_8();
  v12->set_f_2(0x1a76);
  v12->set_f_1(s->substr(0, 74));
  v11->add_f_4(Message1::M12::M29::E3_CONST_3);
  v11->set_f_3(0x87c4e81);
  v10->set_f_3(0x78);
  v10->set_f_4(true);
  v10->set_f_0(0x7d);
  message->set_f_9(true);
  message->set_f_21(0x6c5237244cc03425);
  Message1::M9* v13 = message->mutable_f_72();
  Message1::M9::M42* v14_0 = v13->add_f_4();
  v14_0->set_f_0(0x8f5ddb44603cd140);
  v13->set_f_0(0xfee6580);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M10* v0 = message->mutable_f_73();
  v0->add_f_0(s->substr(0, 6));
  Message1::M10::M28* v1_0 = v0->add_f_4();
  Message1::M10::M28::M100* v2 = v1_0->mutable_f_2();
  v2->set_f_1(0x3cd7);
  Message1::M10::M28::M100::M112* v3_0 = v2->add_f_5();
  Message1::M10::M28::M100::M112::M130* v4 = v3_0->mutable_f_3();
  v4->set_f_0(0x5686abade5946110);
  message->set_f_4(0x3c1e);
  message->set_f_18(0x3f);
  Message1::M5* v5 = message->mutable_f_68();
  Message1::M5::M53* v6_0 = v5->add_f_19();
  v6_0->set_f_2(s->substr(0, 15));
  v6_0->set_f_0(0xd0836bc);
  v6_0->set_f_1(false);
  v5->set_f_3(0x9c89c4d);
  Message1::M5::M57* v7 = v5->mutable_f_20();
  v7->set_f_5(0xcc8feb0);
  v7->set_f_2(s->substr(0, 12));
  v7->set_f_0(0xbfcfc946f1b99cf0);
  v7->set_f_6(0x64);
  v5->set_f_4(true);
  v5->set_f_1(true);
  Message1::M5::M58* v8 = v5->mutable_f_22();
  v8->set_f_0(s->substr(0, 262));
  Message1::M5::M58::M91* v9 = v8->mutable_f_2();
  Message1::M5::M58::M91::M125* v10 = v9->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message1::M5::M30* v11_0 = v5->add_f_13();
  Message1::M5::M30::M73* v12 = v11_0->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  v5->set_f_5(s->substr(0, 7));
  v5->set_f_6(0x1f693694);
  Message1::M13* v13_0 = message->add_f_76();
  v13_0->set_f_4(0.754682);
  v13_0->set_f_0(0x1fc9);
  Message1::M13::M31* v14_0 = v13_0->add_f_13();
  Message1::M13::M31::M82* v15 = v14_0->mutable_f_3();
  v15->set_f_1(0x62);
  v14_0->set_f_0(Message1::M13::M31::E4_CONST_1);
  v13_0->set_f_6(false);
  v13_0->set_f_1(s->substr(0, 8));
  v13_0->set_f_3(0x380d4);
  Message1::M13::M50* v16 = v13_0->mutable_f_14();
  v16->set_f_0(0x51);
  Message1::M13::M20* v17 = v13_0->mutable_f_12();
  v17->add_f_0(Message1::M13::M20::E2_CONST_3);
  message->set_f_15(true);
  Message1::M8* v18 = message->mutable_f_71();
  v18->set_f_0(0x47);
  message->set_f_5(0x7d316e4eaf905cd);
  message->set_f_26(0x85c2ce0);
  message->set_f_6(0xa813c2f8562e2d25);
  Message1::M2* v19 = message->mutable_f_63();
  v19->set_f_2(s->substr(0, 6));
  v19->set_f_1(0x3e2deada977657b9);
  Message1::M2::M37* v20 = v19->mutable_f_5();
  Message1::M2::M37::M97* v21 = v20->mutable_f_7();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M2::M37::M104* v22_0 = v20->add_f_8();
  v22_0->set_f_2(s->substr(0, 30));
  v22_0->set_f_1(0x61);
  v22_0->set_f_3(false);
  v20->add_f_2(Message1::M2::M37::E5_CONST_1);
  v20->set_f_4(0xd9966871bb845e17);
  Message1::M2::M32* v23_0 = v19->add_f_4();
  (void)v23_0;  // Suppresses clang-tidy.
  message->set_f_29(0x576cd94);
  message->set_f_24(0x2477d451b2e);
  message->set_f_7(0xb4ad733b83c634a);
  message->set_f_12(0x73);
  message->set_f_1(false);
  message->set_f_22(s->substr(0, 3));
  message->set_f_30(s->substr(0, 22));
  message->set_f_32(s->substr(0, 17));
  message->set_f_21(0x6e2f3f26904d18f6);
  Message1::M12* v24 = message->mutable_f_75();
  v24->set_f_4(true);
  Message1::M12::M29* v25 = v24->mutable_f_10();
  Message1::M12::M29::M109* v26 = v25->mutable_f_8();
  v26->set_f_1(s->substr(0, 3));
  v26->set_f_2(0xb);
  v26->set_f_0(0xa28b7d455b4773f9);
  v25->set_f_1(0x9487afc);
  v25->set_f_3(0x63);
  v24->set_f_0(0x4);
  Message1::M12::M71* v27 = v24->mutable_f_16();
  v27->set_f_0(0xce6);
  message->set_f_9(false);
  Message1::M9* v28 = message->mutable_f_72();
  Message1::M9::M42* v29_0 = v28->add_f_4();
  (void)v29_0;  // Suppresses clang-tidy.
  Message1::M1* v30 = message->mutable_f_62();
  v30->set_f_5(0xd999fd5);
  v30->set_f_3(s->substr(0, 5));
  Message1::M1::M15* v31 = v30->mutable_f_13();
  (void)v31;  // Suppresses clang-tidy.
  Message1::M1::M34* v32 = v30->mutable_f_15();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M1::M72* v33 = v30->mutable_f_19();
  v33->set_f_4(0x7);
  v33->set_f_0(0x19e1);
  v33->set_f_2(0xa8b3810d3d3499d9);
  v33->set_f_1(0x4e);
  Message1::M1::M46* v34 = v30->mutable_f_17();
  Message1::M1::M46::M78* v35 = v34->mutable_f_4();
  v35->set_f_0(0x2e);
  v34->set_f_0(s->substr(0, 30));
  Message1::M1::M67* v36 = v30->mutable_f_18();
  v36->set_f_0(0xdffb07ca9809ce08);
  v30->set_f_2(0xd25d5dc);
  message->set_f_23(0xc189d8edf0bfc26a);
  Message1::M7* v37 = message->mutable_f_70();
  v37->set_f_2(false);
  v37->set_f_0(0x42a6d8d50440a617);
  Message1::M7::M44* v38_0 = v37->add_f_8();
  (void)v38_0;  // Suppresses clang-tidy.
  Message1::M7::M19* v39_0 = v37->add_f_6();
  v39_0->set_f_0(s->substr(0, 8));
  v37->set_f_1(s->substr(0, 9));
  message->set_f_28(0x23);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_31(s->substr(0, 10));
  message->set_f_15(false);
  message->set_f_20(true);
  message->set_f_26(0x6b);
  Message1::M9* v0 = message->mutable_f_72();
  v0->set_f_0(0x1);
  Message1::M9::M42* v1_0 = v0->add_f_4();
  v1_0->set_f_0(0x2d1523f71e1a6b2b);
  Message1::M5* v2 = message->mutable_f_68();
  v2->set_f_5(s->substr(0, 2));
  Message1::M5::M18* v3 = v2->mutable_f_12();
  v3->set_f_1(0xf25b0);
  v3->set_f_3(true);
  v3->set_f_0(0xdba620f5089df43);
  Message1::M5::M36* v4 = v2->mutable_f_14();
  v4->set_f_0(s->substr(0, 2));
  v4->set_f_1(0x5afcc62f0676f729);
  v4->set_f_2(s->substr(0, 5));
  Message1::M5::M57* v5 = v2->mutable_f_20();
  v5->set_f_5(0x884a25c);
  v5->set_f_1(s->substr(0, 3));
  v5->set_f_0(0x423d08d96dcc98d1);
  Message1::M5::M63* v6 = v2->mutable_f_26();
  (void)v6;  // Suppresses clang-tidy.
  v2->set_f_3(0x359604a);
  Message1::M5::M58* v7 = v2->mutable_f_22();
  v7->set_f_0(s->substr(0, 83));
  Message1::M5::M58::M99* v8_0 = v7->add_f_4();
  (void)v8_0;  // Suppresses clang-tidy.
  Message1::M5::M58::M91* v9 = v7->mutable_f_2();
  (void)v9;  // Suppresses clang-tidy.
  v2->set_f_4(true);
  v2->set_f_6(0x58fc02a);
  Message1::M5::M40* v10 = v2->mutable_f_18();
  Message1::M5::M40::M77* v11 = v10->mutable_f_2();
  Message1::M5::M40::M77::M116* v12_0 = v11->add_f_3();
  v12_0->set_f_0(0x27c4f42d);
  v2->set_f_1(true);
  Message1::M5::M60* v13_0 = v2->add_f_24();
  v13_0->set_f_1(true);
  v13_0->set_f_2(s->substr(0, 4));
  v13_0->set_f_3(0x182e4e);
  message->set_f_32(s->substr(0, 5));
  message->set_f_8(s->substr(0, 36));
  message->set_f_9(false);
  message->set_f_17(0x299f);
  message->set_f_30(s->substr(0, 12));
  Message1::M1* v14 = message->mutable_f_62();
  Message1::M1::M46* v15 = v14->mutable_f_17();
  Message1::M1::M46::M78* v16 = v15->mutable_f_4();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_0(s->substr(0, 23));
  Message1::M1::M67* v17 = v14->mutable_f_18();
  (void)v17;  // Suppresses clang-tidy.
  v14->set_f_5(0x51);
  Message1::M1::M72* v18 = v14->mutable_f_19();
  v18->set_f_4(0xccb);
  v18->set_f_2(0xe0e7a54f03d3ab9b);
  v18->set_f_0(0x49);
  v18->set_f_1(0x60482f);
  v14->set_f_0(0x66);
  message->add_f_27(s->substr(0, 2));
  message->add_f_27(s->substr(0, 8));
  message->add_f_27(s->substr(0, 3));
  message->set_f_7(0x7f2cc2332d21cc90);
  message->set_f_10(0xfeb996d8353aff56);
  Message1::M6* v19 = message->mutable_f_69();
  Message1::M6::M17* v20 = v19->mutable_f_4();
  (void)v20;  // Suppresses clang-tidy.
  Message1::M6::M22* v21 = v19->mutable_f_6();
  Message1::M6::M22::M107* v22_0 = v21->add_f_2();
  v22_0->set_f_1(0x29);
  Message1::M6::M22::M107::M115* v23 = v22_0->mutable_f_6();
  v23->set_f_0(0xe5cc11e);
  v22_0->set_f_0(s->substr(0, 29));
  Message1::M6::M24* v24_0 = v19->add_f_9();
  (void)v24_0;  // Suppresses clang-tidy.
  Message1::M6::M52* v25 = v19->mutable_f_12();
  v25->set_f_0(0xc1e6250202b1ebcc);
  message->set_f_13(0x2646c800);
  message->set_f_12(0x79);
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
}  // namespace fleetbench::rpc::P9::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_
