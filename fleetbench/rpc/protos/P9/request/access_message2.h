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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message2.pb.h"

namespace fleetbench::rpc::P9::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_16(0xe55e667b9155bf3);
  message->set_f_20(s->substr(0, 7));
  message->set_f_7(0x43758537ac3f182);
  message->set_f_11(s->substr(0, 16));
  message->set_f_31(0x1c);
  Message2::M13* v0 = message->mutable_f_62();
  v0->set_f_0(0x15ed188e5ec2341c);
  v0->set_f_2(0xd7e60);
  v0->set_f_3(s->substr(0, 16));
  Message2::M13::M25* v1 = v0->mutable_f_7();
  v1->set_f_1(0x785d20f4c3c4159f);
  v1->set_f_7(0x7682d0586140619b);
  v1->set_f_5(true);
  v1->set_f_12(0xb1d);
  v1->set_f_2(0x73);
  v1->set_f_11(0.966771);
  v0->set_f_1(0x437e9f180fa9e910);
  message->set_f_28(0x3);
  message->set_f_23(0x7e5ff2353a76dece);
  Message2::M12* v2 = message->mutable_f_61();
  v2->set_f_0(0x2f26131a70e14f);
  Message2::M12::M78* v3 = v2->mutable_f_7();
  v3->set_f_3(0x63536c9a);
  Message2::M12::M78::M85* v4 = v3->mutable_f_8();
  v4->set_f_0(Message2::M12::M78::M85::E17_CONST_3);
  v3->set_f_0(0x386537b4);
  v3->set_f_1(0x10462f);
  message->set_f_4(s->substr(0, 293));
  Message2::M18* v5 = message->mutable_f_70();
  Message2::M18::M65* v6 = v5->mutable_f_3();
  Message2::M18::M65::M101* v7 = v6->mutable_f_8();
  v7->set_f_0(0x5b64bccbb76ef5ca);
  v6->set_f_0(Message2::M18::M65::E13_CONST_1);
  Message2::M18::M48* v8 = v5->mutable_f_2();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_13(Message2::E1_CONST_1);
  message->set_f_27(0x723d41487ae81891);
  Message2::M17* v9 = message->mutable_f_67();
  v9->set_f_0(0x15ef0fca86d4a213);
  message->set_f_1(0x5b158f21836d8e93);
  message->set_f_8(0x31ee);
  message->set_f_12(true);
  Message2::M2* v10 = message->mutable_f_46();
  Message2::M2::M45* v11 = v10->mutable_f_4();
  v11->set_f_0(0x397759b);
  message->set_f_21(false);
  message->set_f_18(s->substr(0, 236));
  message->set_f_6(0x4d0ea661);
  Message2::M22* v12 = message->mutable_f_77();
  Message2::M22::M72* v13_0 = v12->add_f_6();
  v13_0->set_f_0(0x16f3f7);
  Message2::M22::M51* v14 = v12->mutable_f_5();
  Message2::M22::M51::M80* v15 = v14->mutable_f_2();
  v15->set_f_1(0x34);
  v15->set_f_0(0x4f72fc01);
  v14->set_f_0(0x1108ac);
  Message2::M22::M49* v16_0 = v12->add_f_4();
  v16_0->set_f_0(true);
  message->set_f_32(0x45);
  Message2::M20* v17 = message->mutable_f_73();
  Message2::M20::M58* v18 = v17->mutable_f_2();
  v18->set_f_0(s->substr(0, 3));
  v17->set_f_0(false);
  message->set_f_19(0x555eee1);
  Message2::M6* v19_0 = message->add_f_51();
  Message2::M6::M63* v20 = v19_0->mutable_f_2();
  v20->set_f_0(s->substr(0, 12));
  v19_0->set_f_0(false);
  Message2::M8* v21 = message->mutable_f_55();
  v21->set_f_2(0x408cea4d64aaad69);
  Message2::M8::M69* v22_0 = v21->add_f_11();
  (void)v22_0;  // Suppresses clang-tidy.
  v21->set_f_0(0x2dcea79fd9f2dab5);
  v21->set_f_1(s->substr(0, 15));
  message->set_f_14(0xe65c63d);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_18(s->substr(0, 8));
  message->set_f_1(0x3017263e2c644947);
  message->set_f_27(0x51d22fcc06525ae0);
  message->set_f_30(0x58a59e48b0c6d74e);
  message->set_f_9(0x2b);
  message->set_f_5(0xe91c6c6);
  message->set_f_12(false);
  Message2::M12* v0 = message->mutable_f_61();
  Message2::M12::M78* v1 = v0->mutable_f_7();
  v1->set_f_0(0x258bc7d7);
  v1->set_f_1(0x44);
  v1->set_f_3(0x468b14a);
  v0->set_f_0(0x3ec14825de63185f);
  Message2::M12::M38* v2 = v0->mutable_f_3();
  v2->set_f_0(false);
  Message2::M12::M62* v3 = v0->mutable_f_6();
  v3->set_f_0(Message2::M12::M62::E12_CONST_3);
  Message2::M12::M62::M100* v4 = v3->mutable_f_2();
  v4->set_f_0(0x5287e47139c615ed);
  message->set_f_32(0x1ffbb3);
  Message2::M3* v5_0 = message->add_f_47();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_20(s->substr(0, 19));
  Message2::M16* v6 = message->mutable_f_65();
  Message2::M16::M32* v7 = v6->mutable_f_2();
  v7->set_f_2(0x978dc7);
  v7->set_f_8(0x16c1a9);
  v7->set_f_10(0x3fd2386);
  v7->set_f_7(s->substr(0, 89));
  v7->set_f_15(0x7a);
  v7->set_f_3(0x123934);
  v7->set_f_16(0x2fc2);
  v7->set_f_4(Message2::M16::M32::E6_CONST_5);
  v7->set_f_11(0x6);
  Message2::M16::M66* v8_0 = v6->add_f_5();
  v8_0->set_f_12(s->substr(0, 18));
  v8_0->set_f_9(0xb99);
  v8_0->set_f_15(0x3);
  v8_0->set_f_10(0x6d0470cf);
  v8_0->set_f_6(0x3bda2e72d82fef1b);
  v8_0->set_f_25(true);
  v8_0->set_f_4(true);
  v8_0->set_f_0(0xfdd42);
  v8_0->set_f_13(s->substr(0, 9));
  v8_0->set_f_19(0x7632c79ae043e984);
  v8_0->set_f_24(0x8ca7d3876822683);
  v8_0->set_f_1(0x159c);
  v8_0->set_f_16(0x5972e57e7d07baf8);
  v8_0->set_f_20(0x1f);
  v8_0->set_f_3(s->substr(0, 3));
  v8_0->set_f_7(0xa5c8f3f366078c);
  v8_0->set_f_14(true);
  v8_0->set_f_17(0x2a50);
  v8_0->set_f_2(Message2::M16::M66::E14_CONST_5);
  Message2::M16::M53* v9_0 = v6->add_f_4();
  (void)v9_0;  // Suppresses clang-tidy.
  v6->set_f_0(0x74b4ba0);
  message->set_f_23(0x7da0b13a3d160e07);
  Message2::M10* v10 = message->mutable_f_58();
  Message2::M10::M29* v11 = v10->mutable_f_3();
  v11->set_f_1(0xacc039b);
  v11->set_f_4(0x4d);
  v11->set_f_5(0.594501);
  v11->set_f_2(0x4d);
  Message2::M10::M23* v12 = v10->mutable_f_2();
  v12->set_f_0(Message2::M10::M23::E4_CONST_4);
  message->set_f_25(false);
  message->set_f_16(0x26567f125d7a74f2);
  Message2::M6* v13_0 = message->add_f_51();
  Message2::M6::M63* v14 = v13_0->mutable_f_2();
  v14->set_f_0(s->substr(0, 4));
  Message2::M14* v15 = message->mutable_f_63();
  Message2::M14::M52* v16_0 = v15->add_f_6();
  v16_0->set_f_3(0x39bf8c2156d);
  Message2::M14::M52::M89* v17 = v16_0->mutable_f_8();
  Message2::M14::M52::M89::M116* v18 = v17->mutable_f_4();
  (void)v18;  // Suppresses clang-tidy.
  v17->set_f_0(0x4a4403e676cfb626);
  v17->set_f_2(0x57eb0331a8f83eaf);
  v16_0->set_f_2(0x31f1);
  v16_0->add_f_0(Message2::M14::M52::E10_CONST_1);
  v16_0->set_f_1(0xa2de6d0);
  v15->set_f_0(0x31);
  Message2::M14::M67* v19 = v15->mutable_f_10();
  v19->set_f_4(s->substr(0, 12));
  v19->set_f_1(0x51f729807279a48a);
  v19->set_f_3(0x1cfc36d1f3b10a4d);
  message->set_f_0(0x108e);
  Message2::M21* v20_0 = message->add_f_75();
  Message2::M21::M57* v21 = v20_0->mutable_f_6();
  v21->set_f_2(0x604fe0a9951a8e7e);
  v21->set_f_0(0xde1802c);
  Message2::M21::M57::M99* v22_0 = v21->add_f_7();
  Message2::M21::M57::M99::M113* v23 = v22_0->mutable_f_3();
  v23->set_f_0(0x72e0e412caca0019);
  Message2::M21::M57::M99::M113::M123* v24_0 = v23->add_f_3();
  v24_0->set_f_0(0x77);
  Message2::M21::M26* v25 = v20_0->mutable_f_2();
  v25->set_f_0(0x55);
  message->set_f_8(0x1);
  message->set_f_2(0x3ec7);
  Message2::M18* v26 = message->mutable_f_70();
  v26->set_f_0(s->substr(0, 6));
  Message2::M17* v27 = message->mutable_f_67();
  v27->set_f_0(0x1590c2c90784d8e8);
  Message2::M13* v28 = message->mutable_f_62();
  v28->set_f_1(0x5fb8521be682f853);
  v28->set_f_3(s->substr(0, 13));
  message->set_f_26(0x1810e);
  Message2::M8* v29 = message->mutable_f_55();
  v29->set_f_2(0x58f4b2934f6942ea);
  Message2::M8::M47* v30 = v29->mutable_f_9();
  v30->set_f_0(s->substr(0, 6));
  Message2::M8::M73* v31_0 = v29->add_f_12();
  v31_0->set_f_0(s->substr(0, 14));
  v31_0->set_f_3(s->substr(0, 40));
  v31_0->set_f_2(Message2::M8::M73::E16_CONST_5);
  v29->set_f_0(0x75d1e719d4f8b0d1);
  message->set_f_4(s->substr(0, 9));
  Message2::M5* v32 = message->mutable_f_50();
  Message2::M5::M71* v33_0 = v32->add_f_5();
  v33_0->set_f_0(s->substr(0, 8));
  v33_0->add_f_2(Message2::M5::M71::E15_CONST_5);
  v33_0->add_f_2(Message2::M5::M71::E15_CONST_4);
  v33_0->add_f_2(Message2::M5::M71::E15_CONST_2);
  v33_0->add_f_2(Message2::M5::M71::E15_CONST_2);
  v33_0->set_f_4(true);
  v33_0->set_f_1(0x58c27821bfc6e582);
  v33_0->set_f_3(0x1d799fb10fb628cb);
  v32->set_f_0(s->substr(0, 7));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_0(0x1f);
  Message2::M3* v0_0 = message->add_f_47();
  Message2::M3::M36* v1 = v0_0->mutable_f_3();
  v1->set_f_0(0x2f);
  v0_0->set_f_0(false);
  message->set_f_28(0x186647);
  message->set_f_20(s->substr(0, 2));
  Message2::M12* v2 = message->mutable_f_61();
  Message2::M12::M42* v3 = v2->mutable_f_4();
  v3->set_f_0(s->substr(0, 29));
  Message2::M12::M78* v4 = v2->mutable_f_7();
  v4->set_f_2(0x28f93b71a1b52ab2);
  v4->set_f_0(0x17a30f98);
  v4->set_f_3(0x31d2163a);
  Message2::M12::M38* v5 = v2->mutable_f_3();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M12::M62* v6 = v2->mutable_f_6();
  (void)v6;  // Suppresses clang-tidy.
  Message2::M16* v7 = message->mutable_f_65();
  v7->set_f_0(0xc3ca749);
  Message2::M16::M66* v8_0 = v7->add_f_5();
  v8_0->set_f_9(0x913);
  v8_0->set_f_12(s->substr(0, 32));
  v8_0->set_f_6(0x299f4a69df053c1b);
  v8_0->set_f_23(s->substr(0, 31));
  v8_0->set_f_22(s->substr(0, 51));
  v8_0->set_f_1(0x31);
  v8_0->set_f_21(0x1cd3b4);
  v8_0->set_f_0(0x5d);
  v8_0->set_f_20(0x40);
  v8_0->set_f_15(0xae7732d);
  v8_0->set_f_17(0x3);
  v8_0->add_f_8(s->substr(0, 7));
  v8_0->add_f_8(s->substr(0, 6));
  v8_0->set_f_3(s->substr(0, 159));
  v8_0->set_f_19(0x5d8e3369549f474d);
  v8_0->set_f_24(0x699cf84792364c78);
  Message2::M16::M44* v9 = v7->mutable_f_3();
  v9->set_f_0(0x2d92457a68329b8e);
  Message2::M16::M44::M90* v10_0 = v9->add_f_3();
  (void)v10_0;  // Suppresses clang-tidy.
  message->set_f_7(0x235bb74b3c04f729);
  Message2::M18* v11 = message->mutable_f_70();
  Message2::M18::M68* v12 = v11->mutable_f_4();
  Message2::M18::M68::M82* v13 = v12->mutable_f_2();
  v13->set_f_0(s->substr(0, 19));
  Message2::M18::M68::M82::M115* v14 = v13->mutable_f_4();
  v14->set_f_1(0x43);
  v14->set_f_3(true);
  v14->set_f_0(0x2a801b089a214b52);
  v11->set_f_0(s->substr(0, 3));
  Message2::M18::M65* v15 = v11->mutable_f_3();
  Message2::M18::M65::M101* v16 = v15->mutable_f_8();
  v16->set_f_0(0xeeb433f2747d43f);
  v15->set_f_0(Message2::M18::M65::E13_CONST_2);
  v15->set_f_1(0x32bbb2f631fc403b);
  message->add_f_15(s->substr(0, 8));
  message->add_f_15(s->substr(0, 1));
  Message2::M8* v17 = message->mutable_f_55();
  v17->set_f_2(0x2aff38aa1c360876);
  v17->set_f_0(0x5334695de3991aad);
  Message2::M8::M47* v18 = v17->mutable_f_9();
  (void)v18;  // Suppresses clang-tidy.
  Message2::M8::M73* v19_0 = v17->add_f_12();
  v19_0->set_f_0(s->substr(0, 13));
  v19_0->set_f_1(false);
  Message2::M13* v20 = message->mutable_f_62();
  v20->set_f_2(0x2b);
  v20->set_f_1(0x373a4e44da6e27c);
  v20->set_f_0(0x5cbbd078498432fe);
  message->set_f_1(0x5e70b6ac65d93264);
  Message2::M17* v21 = message->mutable_f_67();
  v21->set_f_0(0xd00204c4c532aad);
  message->set_f_4(s->substr(0, 111));
  Message2::M4* v22 = message->mutable_f_49();
  v22->set_f_1(Message2::M4::E3_CONST_2);
  v22->set_f_2(0x73);
  v22->set_f_0(s->substr(0, 28));
  Message2::M4::M56* v23_0 = v22->add_f_9();
  v23_0->set_f_2(false);
  v23_0->set_f_5(0x9407d93);
  v23_0->set_f_0(0x41);
  v23_0->set_f_4(0x43);
  Message2::M4::M55* v24 = v22->mutable_f_6();
  v24->set_f_1(s->substr(0, 10));
  v24->set_f_2(0x66583a41bbd4eb77);
  Message2::M4::M55::M81* v25_0 = v24->add_f_8();
  Message2::M4::M55::M81::M114* v26 = v25_0->mutable_f_3();
  (void)v26;  // Suppresses clang-tidy.
  v25_0->set_f_0(0x67);
  v24->set_f_0(s->substr(0, 1836));
  v24->set_f_4(s->substr(0, 7));
  Message2::M4::M76* v27_0 = v22->add_f_10();
  v27_0->set_f_0(s->substr(0, 3));
  message->set_f_3(0.403954);
  Message2::M5* v28 = message->mutable_f_50();
  v28->set_f_0(s->substr(0, 15));
  message->set_f_25(false);
  message->set_f_11(s->substr(0, 1869));
  message->set_f_31(0xb);
  message->set_f_13(Message2::E1_CONST_4);
  message->set_f_24(0x170e942f0684ec2a);
  message->set_f_8(0x75);
  Message2::M2* v29 = message->mutable_f_46();
  v29->set_f_0(0x3cb9);
  Message2::M2::M45* v30 = v29->mutable_f_4();
  v30->set_f_0(0x3d78);
  Message2::M22* v31 = message->mutable_f_77();
  v31->set_f_0(0xba6c68d19d40251);
  Message2::M22::M72* v32_0 = v31->add_f_6();
  (void)v32_0;  // Suppresses clang-tidy.
  Message2::M1* v33_0 = message->add_f_44();
  Message2::M1::M28* v34 = v33_0->mutable_f_2();
  (void)v34;  // Suppresses clang-tidy.
  v33_0->set_f_0(0x70);
  Message2::M1::M31* v35_0 = v33_0->add_f_4();
  v35_0->add_f_0(Message2::M1::M31::E5_CONST_4);
  Message2::M1::M31::M86* v36_0 = v35_0->add_f_4();
  v36_0->set_f_2(0x6f);
  v36_0->set_f_4(0x2131);
  v36_0->set_f_1(0x63);
  v36_0->set_f_3(Message2::M1::M31::M86::E18_CONST_2);
  message->set_f_29(true);
  message->set_f_10(0x77f4a1cbf78d9681);
  message->set_f_30(0x5775fa554301bc9b);
  message->set_f_32(0x9b8cf7c);
  message->set_f_16(0x7848167691a3f5bf);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_44();
  Message2::M1::M28* v1 = v0_0->mutable_f_2();
  v1->set_f_0(0x243a);
  message->set_f_11(s->substr(0, 31));
  Message2::M21* v2_0 = message->add_f_75();
  v2_0->set_f_0(true);
  Message2::M21::M33* v3 = v2_0->mutable_f_3();
  v3->set_f_3(0xc9e666f);
  v3->set_f_0(Message2::M21::M33::E7_CONST_5);
  v3->set_f_2(false);
  Message2::M9* v4 = message->mutable_f_56();
  v4->set_f_3(0.319506);
  Message2::M9::M39* v5_0 = v4->add_f_10();
  v5_0->set_f_1(0x3c);
  v5_0->set_f_3(0x38d731152e3836bd);
  v5_0->set_f_2(true);
  Message2::M9::M50* v6 = v4->mutable_f_11();
  v6->set_f_0(0xd);
  v4->set_f_0(0x6e12cb639f606d0b);
  v4->set_f_2(s->substr(0, 34));
  Message2::M9::M60* v7_0 = v4->add_f_14();
  (void)v7_0;  // Suppresses clang-tidy.
  Message2::M18* v8 = message->mutable_f_70();
  Message2::M18::M65* v9 = v8->mutable_f_3();
  Message2::M18::M65::M101* v10 = v9->mutable_f_8();
  (void)v10;  // Suppresses clang-tidy.
  v9->set_f_0(Message2::M18::M65::E13_CONST_1);
  v9->set_f_1(0x3c13594164804139);
  Message2::M18::M68* v11 = v8->mutable_f_4();
  v11->set_f_0(0x2fffde13ee87ef11);
  Message2::M18::M68::M82* v12 = v11->mutable_f_2();
  v12->set_f_0(s->substr(0, 8));
  Message2::M18::M68::M82::M115* v13 = v12->mutable_f_4();
  v13->set_f_1(0x33);
  v8->set_f_0(s->substr(0, 475));
  message->set_f_23(0x400c9e0369bf7429);
  message->set_f_13(Message2::E1_CONST_3);
  message->set_f_4(s->substr(0, 8));
  message->set_f_27(0x6be034cdc9b0e29d);
  Message2::M2* v14 = message->mutable_f_46();
  (void)v14;  // Suppresses clang-tidy.
  Message2::M16* v15 = message->mutable_f_65();
  Message2::M16::M70* v16 = v15->mutable_f_6();
  (void)v16;  // Suppresses clang-tidy.
  Message2::M16::M44* v17 = v15->mutable_f_3();
  Message2::M16::M44::M90* v18_0 = v17->add_f_3();
  v18_0->set_f_0(0x2d79c31);
  v17->set_f_0(0x25e6f68b9cf0c286);
  v15->set_f_0(0x122b1c);
  Message2::M16::M32* v19 = v15->mutable_f_2();
  v19->set_f_1(0x5fcf145c6db74719);
  v19->set_f_10(0x39);
  v19->set_f_8(0x20);
  v19->set_f_13(0xd4887b9);
  v19->set_f_14(true);
  v19->set_f_12(0x41);
  v19->set_f_3(0x6d);
  v19->set_f_16(0x8);
  v19->set_f_5(0x66);
  v19->set_f_4(Message2::M16::M32::E6_CONST_4);
  Message2::M16::M53* v20_0 = v15->add_f_4();
  (void)v20_0;  // Suppresses clang-tidy.
  Message2::M22* v21 = message->mutable_f_77();
  Message2::M22::M49* v22_0 = v21->add_f_4();
  v22_0->set_f_0(false);
  Message2::M22::M51* v23 = v21->mutable_f_5();
  Message2::M22::M51::M80* v24 = v23->mutable_f_2();
  v24->set_f_1(0x13);
  v24->set_f_0(0x42c8ca4f);
  v23->set_f_0(0xeafea95);
  message->set_f_18(s->substr(0, 3));
  message->set_f_12(true);
  message->add_f_15(s->substr(0, 3));
  message->add_f_15(s->substr(0, 6));
  Message2::M20* v25 = message->mutable_f_73();
  (void)v25;  // Suppresses clang-tidy.
  message->set_f_9(0x53);
  message->set_f_28(0x5a);
  message->set_f_26(0x90c);
  Message2::M11* v26 = message->mutable_f_59();
  v26->set_f_0(0.010260);
  Message2::M11::M30* v27_0 = v26->add_f_2();
  v27_0->set_f_0(0x75);
  message->set_f_8(0x38);
  Message2::M17* v28 = message->mutable_f_67();
  (void)v28;  // Suppresses clang-tidy.
  message->set_f_30(0x29ab0b285cbbce04);
  message->set_f_29(false);
  message->set_f_5(0x53);
  message->set_f_3(0.799708);
  message->set_f_20(s->substr(0, 16));
  Message2::M14* v29 = message->mutable_f_63();
  v29->set_f_1(s->substr(0, 92));
  Message2::M14::M67* v30 = v29->mutable_f_10();
  v30->set_f_3(0x2396cd36a48769ca);
  v30->set_f_1(0x4f3d62aabbed2e4);
  v30->set_f_2(s->substr(0, 325));
  v30->set_f_0(s->substr(0, 55));
  v29->set_f_0(0x7ad3d2d);
  Message2::M19* v31 = message->mutable_f_72();
  v31->set_f_0(0x7ae44942b1dc9746);
  message->set_f_22(0x2d0abbb);
  message->set_f_21(false);
  message->set_f_7(0x1e55efb97d12bed8);
  message->set_f_10(0x6e4db427459843e1);
  message->set_f_31(0x5c);
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
}  // namespace fleetbench::rpc::P9::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE2_H_
