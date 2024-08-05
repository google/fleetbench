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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message2.pb.h"

namespace fleetbench::rpc::P4::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_10(0x10efccbf);
  message->set_f_17(0x27);
  Message2::M5* v0 = message->mutable_f_56();
  v0->set_f_0(false);
  Message2::M5::M27* v1 = v0->mutable_f_3();
  v1->set_f_4(0x7034b2cb);
  v1->set_f_3(0x429db547a21ed4fa);
  Message2::M5::M27::M56* v2 = v1->mutable_f_10();
  v2->set_f_0(false);
  v1->set_f_1(s->substr(0, 894));
  v1->add_f_5(Message2::M5::M27::E12_CONST_3);
  Message2::M5::M27::M57* v3 = v1->mutable_f_12();
  Message2::M5::M27::M57::M65* v4 = v3->mutable_f_12();
  Message2::M5::M27::M57::M65::M75* v5 = v4->mutable_f_3();
  (void)v5;  // Suppresses clang-tidy.
  v4->set_f_0(0x45d7e6339001eded);
  v3->set_f_2(0x41e0e0d382bfded9);
  v3->set_f_5(false);
  v3->set_f_3(0.996417);
  v3->set_f_0(s->substr(0, 22));
  v3->set_f_6(0.421867);
  Message2::M5::M27::M57::M72* v6_0 = v3->add_f_15();
  v6_0->set_f_1(Message2::M5::M27::M57::M72::E21_CONST_1);
  v6_0->set_f_2(s->substr(0, 21));
  v6_0->set_f_0(0x60081fa);
  v3->set_f_1(0x7ad7b7b3c99173b6);
  Message2::M5::M47* v7 = v0->mutable_f_5();
  v7->set_f_0(0x211db8021ea7de58);
  message->set_f_32(0x266851dd92b555ce);
  Message2::M7* v8_0 = message->add_f_59();
  v8_0->set_f_0(0x24);
  message->set_f_25(0x20dc);
  Message2::M15* v9 = message->mutable_f_68();
  v9->set_f_5(s->substr(0, 1168));
  v9->set_f_2(0x880);
  v9->set_f_3(0x7af26e2);
  v9->set_f_4(0x68c1b685);
  v9->set_f_1(0.494449);
  Message2::M15::M17* v10 = v9->mutable_f_16();
  (void)v10;  // Suppresses clang-tidy.
  v9->set_f_11(s->substr(0, 766));
  v9->set_f_6(s->substr(0, 10));
  v9->set_f_9(0x36d2592f24df7da6);
  Message2::M15::M42* v11_0 = v9->add_f_22();
  v11_0->set_f_0(0xe7f9d6d);
  Message2::M15::M37* v12 = v9->mutable_f_19();
  v12->set_f_0(0x45);
  Message2::M15::M28* v13 = v9->mutable_f_17();
  v13->set_f_0(true);
  v9->add_f_7(Message2::M15::E6_CONST_1);
  message->set_f_0(true);
  message->set_f_20(0x32b05451c364119a);
  message->set_f_2(s->substr(0, 2));
  message->set_f_18(0.019193);
  Message2::M12* v14 = message->mutable_f_65();
  v14->set_f_2(0x4);
  Message2::M12::M19* v15 = v14->mutable_f_8();
  v15->set_f_0(true);
  v14->set_f_1(0x5026667);
  Message2::M11* v16_0 = message->add_f_64();
  (void)v16_0;  // Suppresses clang-tidy.
  message->set_f_4(true);
  message->set_f_31(s->substr(0, 2669));
  Message2::M4* v17 = message->mutable_f_55();
  v17->set_f_0(false);
  message->set_f_9(0x167430);
  message->set_f_5(0x77dd55c7760cab59);
  Message2::M6* v18 = message->mutable_f_57();
  v18->set_f_0(0x128b96);
  Message2::M6::M22* v19 = v18->mutable_f_4();
  v19->set_f_0(0x5);
  Message2::M6::M22::M54* v20_0 = v19->add_f_2();
  v20_0->set_f_0(true);
  Message2::M6::M22::M54::M64* v21 = v20_0->mutable_f_3();
  Message2::M6::M22::M54::M64::M76* v22_0 = v21->add_f_2();
  v22_0->set_f_0(s->substr(0, 25));
  v18->set_f_1(0x6c);
  message->set_f_13(false);
  Message2::M2* v23 = message->mutable_f_51();
  Message2::M2::M43* v24 = v23->mutable_f_9();
  v24->set_f_0(0x34509032e3895b78);
  v23->set_f_0(0x73c9cdad44c2f17);
  Message2::M2::M40* v25 = v23->mutable_f_8();
  v25->set_f_0(s->substr(0, 6));
  Message2::M2::M25* v26 = v23->mutable_f_5();
  (void)v26;  // Suppresses clang-tidy.
  message->set_f_1(0x7b);
  message->set_f_3(0x732fec5e4fe95156);
  message->set_f_12(s->substr(0, 13));
  Message2::M1* v27 = message->mutable_f_49();
  v27->set_f_1(false);
  Message2::M1::M33* v28_0 = v27->add_f_3();
  v28_0->set_f_1(0x71);
  v28_0->set_f_0(0xec903c3ce19ba43);
  v28_0->set_f_3(0.969059);
  Message2::M13* v29 = message->mutable_f_66();
  Message2::M13::M48* v30 = v29->mutable_f_5();
  v30->set_f_2(0x5b84ec5d);
  v30->set_f_4(0x1498d572);
  v30->set_f_0(false);
  v30->set_f_3(true);
  Message2::M13::M45* v31 = v29->mutable_f_4();
  v31->set_f_2(true);
  v31->set_f_1(0x2e7b6a29);
  message->set_f_23(false);
  message->set_f_22(0.775140);
  message->set_f_28(Message2::E3_CONST_5);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_11(s->substr(0, 6));
  message->set_f_27(Message2::E2_CONST_4);
  message->set_f_7(s->substr(0, 37));
  Message2::M1* v0 = message->mutable_f_49();
  v0->set_f_0(0x7e);
  Message2::M1::M33* v1_0 = v0->add_f_3();
  v1_0->set_f_1(0x43);
  v1_0->set_f_0(0x1e4c2158f8477b3a);
  v1_0->set_f_2(0x6faead02c211c732);
  v1_0->set_f_4(false);
  Message2::M10* v2 = message->mutable_f_63();
  v2->set_f_1(0x2b5ab00bfb5d4e0e);
  Message2::M10::M38* v3 = v2->mutable_f_4();
  (void)v3;  // Suppresses clang-tidy.
  v2->add_f_2(Message2::M10::E4_CONST_1);
  message->set_f_5(0x2ee1b5d0a4d588f);
  message->set_f_15(0xa6b3cde);
  message->set_f_9(0x2492);
  Message2::M9* v4 = message->mutable_f_62();
  Message2::M9::M16* v5_0 = v4->add_f_2();
  Message2::M9::M16::M53* v6 = v5_0->mutable_f_8();
  v6->set_f_1(0xfe26fe2);
  Message2::M9::M16::M53::M69* v7_0 = v6->add_f_7();
  v7_0->set_f_0(0.114409);
  v5_0->set_f_1(0x4b9158e0f1ba52ba);
  Message2::M9::M16::M50* v8_0 = v5_0->add_f_7();
  Message2::M9::M16::M50::M70* v9 = v8_0->mutable_f_3();
  v9->set_f_3(false);
  v9->set_f_2(false);
  v9->add_f_1(Message2::M9::M16::M50::M70::E20_CONST_4);
  v8_0->set_f_0(0x3726e5a);
  v5_0->set_f_3(false);
  v4->set_f_0(true);
  message->set_f_20(0x5ecaedc0dc082dbb);
  Message2::M11* v10_0 = message->add_f_64();
  v10_0->set_f_0(s->substr(0, 8));
  Message2::M13* v11 = message->mutable_f_66();
  v11->set_f_0(0.823972);
  message->set_f_14(s->substr(0, 27));
  message->set_f_31(s->substr(0, 25207));
  message->set_f_2(s->substr(0, 20));
  message->set_f_16(0x53d9bd516a7d5879);
  message->set_f_22(0.068601);
  Message2::M7* v12_0 = message->add_f_59();
  v12_0->set_f_0(0x2d);
  Message2::M7::M24* v13 = v12_0->mutable_f_4();
  (void)v13;  // Suppresses clang-tidy.
  Message2::M7::M26* v14 = v12_0->mutable_f_6();
  v14->set_f_0(0x3e);
  Message2::M7::M44* v15 = v12_0->mutable_f_7();
  v15->set_f_1(0x4);
  v15->set_f_2(false);
  Message2::M7::M44::M55* v16 = v15->mutable_f_5();
  Message2::M7::M44::M55::M63* v17_0 = v16->add_f_2();
  (void)v17_0;  // Suppresses clang-tidy.
  v15->set_f_0(s->substr(0, 28));
  Message2::M7::M23* v18_0 = v12_0->add_f_2();
  v18_0->set_f_1(false);
  v18_0->set_f_0(s->substr(0, 30));
  message->set_f_4(false);
  Message2::M12* v19 = message->mutable_f_65();
  v19->set_f_4(0xafdb138);
  v19->set_f_3(0x664694c8);
  v19->set_f_2(0x36);
  Message2::M12::M19* v20 = v19->mutable_f_8();
  v20->set_f_0(true);
  message->add_f_8(Message2::E1_CONST_4);
  message->set_f_1(0x25);
  Message2::M2* v21 = message->mutable_f_51();
  v21->set_f_0(0x3eb64f023d63c431);
  Message2::M2::M34* v22 = v21->mutable_f_7();
  Message2::M2::M34::M58* v23 = v22->mutable_f_3();
  Message2::M2::M34::M58::M59* v24 = v23->mutable_f_3();
  v24->set_f_3(false);
  v24->set_f_1(0x1);
  v23->set_f_0(0xf495a71);
  Message2::M2::M34::M58::M66* v25_0 = v23->add_f_4();
  v25_0->set_f_0(0.862575);
  v25_0->set_f_1(0.838461);
  v22->set_f_0(false);
  message->set_f_30(s->substr(0, 29));
  Message2::M15* v26 = message->mutable_f_68();
  v26->set_f_5(s->substr(0, 19));
  v26->set_f_1(0.576076);
  v26->set_f_11(s->substr(0, 2347));
  v26->set_f_8(0x2);
  v26->set_f_9(0x203bfa6f44245918);
  v26->set_f_2(0x74);
  Message2::M15::M28* v27 = v26->mutable_f_17();
  (void)v27;  // Suppresses clang-tidy.
  Message2::M15::M37* v28 = v26->mutable_f_19();
  v28->set_f_0(0x26);
  Message2::M15::M42* v29_0 = v26->add_f_22();
  (void)v29_0;  // Suppresses clang-tidy.
  v26->add_f_7(Message2::M15::E6_CONST_3);
  Message2::M15::M29* v30_0 = v26->add_f_18();
  v30_0->add_f_1(Message2::M15::M29::E13_CONST_4);
  v30_0->set_f_0(false);
  v30_0->set_f_3(0x26);
  v30_0->set_f_2(0x4ce0bed188b194c3);
  v26->set_f_6(s->substr(0, 19));
  v26->add_f_10(Message2::M15::E7_CONST_3);
  message->set_f_32(0x2b3971774591e0b4);
  message->set_f_29(false);
  message->set_f_10(0xf2ab46);
  message->set_f_13(false);
  Message2::M6* v31 = message->mutable_f_57();
  v31->set_f_1(0x75e7f);
  Message2::M6::M22* v32 = v31->mutable_f_4();
  v32->set_f_0(0x5d);
  Message2::M6::M22::M54* v33_0 = v32->add_f_2();
  Message2::M6::M22::M54::M64* v34 = v33_0->mutable_f_3();
  Message2::M6::M22::M54::M64::M76* v35_0 = v34->add_f_2();
  v35_0->set_f_0(s->substr(0, 15));
  v34->set_f_0(0x583b17d92de8cec);
  message->set_f_28(Message2::E3_CONST_5);
  message->set_f_23(false);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_27(Message2::E2_CONST_4);
  Message2::M9* v0 = message->mutable_f_62();
  v0->set_f_0(false);
  Message2::M9::M46* v1 = v0->mutable_f_3();
  v1->add_f_0(Message2::M9::M46::E15_CONST_4);
  message->set_f_15(0x5c);
  message->set_f_31(s->substr(0, 27));
  message->set_f_9(0x4c);
  Message2::M14* v2 = message->mutable_f_67();
  v2->set_f_2(0x4);
  v2->set_f_1(0x73);
  v2->set_f_0(s->substr(0, 17));
  message->set_f_1(0x1a35000);
  message->set_f_32(0x7fc55930521fee8f);
  message->set_f_22(0.603799);
  message->set_f_11(s->substr(0, 60));
  message->set_f_12(s->substr(0, 63));
  Message2::M4* v3 = message->mutable_f_55();
  v3->set_f_0(false);
  Message2::M4::M35* v4 = v3->mutable_f_4();
  v4->set_f_0(0x450b633);
  Message2::M5* v5 = message->mutable_f_56();
  v5->set_f_0(true);
  Message2::M5::M47* v6 = v5->mutable_f_5();
  v6->set_f_0(0x6649808f376458a6);
  Message2::M5::M39* v7_0 = v5->add_f_4();
  (void)v7_0;  // Suppresses clang-tidy.
  Message2::M11* v8_0 = message->add_f_64();
  v8_0->set_f_0(s->substr(0, 9));
  Message2::M2* v9 = message->mutable_f_51();
  Message2::M2::M25* v10 = v9->mutable_f_5();
  v10->set_f_1(true);
  v10->set_f_0(0xb);
  v9->set_f_0(0x580427d92af09a84);
  Message2::M2::M40* v11 = v9->mutable_f_8();
  v11->set_f_0(s->substr(0, 17));
  Message2::M1* v12 = message->mutable_f_49();
  v12->set_f_0(0x191cf2);
  v12->set_f_1(true);
  Message2::M1::M33* v13_0 = v12->add_f_3();
  v13_0->set_f_2(0x3dee7d1a3db1842a);
  message->set_f_13(true);
  message->set_f_33(0x54983d128aac26fc);
  Message2::M13* v14 = message->mutable_f_66();
  Message2::M13::M48* v15 = v14->mutable_f_5();
  v15->set_f_4(0x211560a3b);
  v15->set_f_1(0x3f5aea3b03c8a433);
  v15->set_f_2(0x15a9334f);
  message->set_f_28(Message2::E3_CONST_5);
  message->set_f_24(s->substr(0, 5));
  Message2::M7* v16_0 = message->add_f_59();
  v16_0->set_f_0(0x63);
  Message2::M7::M26* v17 = v16_0->mutable_f_6();
  (void)v17;  // Suppresses clang-tidy.
  Message2::M7::M24* v18 = v16_0->mutable_f_4();
  v18->set_f_0(0.820389);
  Message2::M7::M44* v19 = v16_0->mutable_f_7();
  v19->set_f_3(0x798aa80a3e643cb);
  Message2::M7::M44::M55* v20 = v19->mutable_f_5();
  (void)v20;  // Suppresses clang-tidy.
  v19->set_f_2(true);
  message->set_f_0(true);
  message->set_f_18(0.571441);
  message->set_f_3(0x145596291617883e);
  message->set_f_17(0x670e7f8);
  message->set_f_23(false);
  Message2::M6* v21 = message->mutable_f_57();
  v21->set_f_1(0x8a97633);
  v21->set_f_0(0x40);
  Message2::M6::M22* v22 = v21->mutable_f_4();
  Message2::M6::M22::M54* v23_0 = v22->add_f_2();
  v23_0->set_f_0(true);
  Message2::M6::M22::M54::M64* v24 = v23_0->mutable_f_3();
  v24->set_f_0(0x5f40143486abc15a);
  Message2::M6::M22::M54::M64::M76* v25_0 = v24->add_f_2();
  (void)v25_0;  // Suppresses clang-tidy.
  message->set_f_16(0x36e84f3a83c59048);
  message->set_f_19(0x80693f9);
  message->add_f_8(Message2::E1_CONST_2);
  Message2::M3* v26 = message->mutable_f_52();
  Message2::M3::M32* v27 = v26->mutable_f_6();
  v27->set_f_5(0x5bc23ab41a8d72bb);
  v27->set_f_1(0x6e3f49f);
  v27->set_f_7(0x43);
  v27->set_f_0(0.485993);
  v27->set_f_3(0x1558039);
  v27->set_f_2(s->substr(0, 25018));
  Message2::M3::M31* v28_0 = v26->add_f_5();
  v28_0->set_f_0(0xc712eeb);
  v28_0->set_f_2(0x2e6355492018e2d1);
  Message2::M3::M30* v29_0 = v26->add_f_4();
  v29_0->set_f_0(s->substr(0, 20030));
  message->set_f_5(0x13735cefa371e207);
  message->set_f_20(0x5b6a838413cacdcb);
  Message2::M15* v30 = message->mutable_f_68();
  v30->set_f_11(s->substr(0, 2207));
  Message2::M15::M42* v31_0 = v30->add_f_22();
  v31_0->set_f_0(0x3d);
  v30->add_f_7(Message2::M15::E6_CONST_5);
  v30->set_f_8(0x42);
  Message2::M15::M28* v32 = v30->mutable_f_17();
  (void)v32;  // Suppresses clang-tidy.
  v30->set_f_9(0x20359fbeec35f155);
  v30->set_f_3(0x8d5f6c);
  Message2::M15::M17* v33 = v30->mutable_f_16();
  v33->set_f_0(Message2::M15::M17::E8_CONST_2);
  v30->add_f_10(Message2::M15::E7_CONST_1);
  v30->set_f_5(s->substr(0, 474));
  v30->set_f_0(Message2::M15::E5_CONST_5);
  v30->set_f_1(0.117502);
  message->set_f_21(0x269fde5995233db3);
  message->set_f_4(false);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_20(0x2ce8dc6204eb0840);
  message->set_f_28(Message2::E3_CONST_4);
  Message2::M12* v0 = message->mutable_f_65();
  Message2::M12::M19* v1 = v0->mutable_f_8();
  v1->set_f_0(false);
  v0->set_f_4(0x18);
  v0->set_f_1(0x3a);
  v0->set_f_2(0xe679c15);
  v0->set_f_3(0x6d38dc03);
  message->set_f_24(s->substr(0, 27));
  message->set_f_13(true);
  message->set_f_33(0x40d38294e5369f3c);
  message->set_f_11(s->substr(0, 30));
  Message2::M5* v2 = message->mutable_f_56();
  Message2::M5::M47* v3 = v2->mutable_f_5();
  (void)v3;  // Suppresses clang-tidy.
  Message2::M5::M27* v4 = v2->mutable_f_3();
  v4->set_f_3(0x6d8e6d5441eb9cc2);
  v4->set_f_4(0x34764dc1);
  Message2::M5::M27::M57* v5 = v4->mutable_f_12();
  Message2::M5::M27::M57::M72* v6_0 = v5->add_f_15();
  v6_0->set_f_1(Message2::M5::M27::M57::M72::E21_CONST_2);
  Message2::M5::M27::M57::M61* v7 = v5->mutable_f_11();
  v7->set_f_0(s->substr(0, 29));
  Message2::M5::M27::M57::M61::M78* v8 = v7->mutable_f_5();
  (void)v8;  // Suppresses clang-tidy.
  v5->set_f_6(0.830272);
  v5->set_f_3(0.467968);
  v5->set_f_2(0x383461f9dc53eba4);
  v4->set_f_2(0x12);
  v2->set_f_0(true);
  Message2::M2* v9 = message->mutable_f_51();
  Message2::M2::M43* v10 = v9->mutable_f_9();
  (void)v10;  // Suppresses clang-tidy.
  Message2::M2::M40* v11 = v9->mutable_f_8();
  v11->set_f_0(s->substr(0, 3));
  Message2::M2::M25* v12 = v9->mutable_f_5();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_32(0x7f63f7489e4ba6e5);
  message->set_f_3(0x12a03d61e3503a4f);
  message->set_f_7(s->substr(0, 19));
  Message2::M6* v13 = message->mutable_f_57();
  v13->set_f_1(0x3cdc);
  v13->set_f_0(0x9956539);
  Message2::M6::M22* v14 = v13->mutable_f_4();
  Message2::M6::M22::M54* v15_0 = v14->add_f_2();
  v15_0->set_f_0(true);
  Message2::M6::M22::M54::M64* v16 = v15_0->mutable_f_3();
  v16->set_f_0(0xf39eb7550ee735d);
  Message2::M6::M22::M54::M62* v17 = v15_0->mutable_f_2();
  v17->set_f_1(0x1f04);
  v17->set_f_2(0x460c2);
  v14->set_f_0(0x42);
  Message2::M8* v18 = message->mutable_f_61();
  Message2::M8::M36* v19 = v18->mutable_f_16();
  (void)v19;  // Suppresses clang-tidy.
  v18->set_f_7(0x41);
  v18->set_f_6(s->substr(0, 22));
  v18->set_f_4(0.091406);
  v18->set_f_0(0x219d);
  Message2::M14* v20 = message->mutable_f_67();
  Message2::M14::M18* v21 = v20->mutable_f_5();
  v21->set_f_22(s->substr(0, 247));
  v21->set_f_11(0x7227c7d);
  v21->set_f_13(0x16a63848fd1e5eb1);
  v21->set_f_12(false);
  v21->set_f_24(0x7a);
  v21->set_f_21(false);
  v21->set_f_19(false);
  v21->set_f_14(0x1c);
  v21->add_f_0(Message2::M14::M18::E9_CONST_5);
  v21->set_f_23(false);
  v21->set_f_6(Message2::M14::M18::E10_CONST_2);
  v21->set_f_3(0x70d042325ec48abd);
  v21->set_f_5(s->substr(0, 33));
  v21->set_f_15(0x469c23db19a8288a);
  v21->set_f_4(0x783c02b37d1feb8a);
  Message2::M14::M18::M52* v22 = v21->mutable_f_42();
  v22->set_f_19(true);
  v22->set_f_6(0x25);
  v22->set_f_16(0x5c438fd71dda7d4b);
  v22->set_f_17(0.887234);
  v22->set_f_0(0x1f11da04c867fcb1);
  v22->set_f_7(s->substr(0, 15));
  v22->add_f_18(Message2::M14::M18::M52::E17_CONST_5);
  v22->set_f_4(s->substr(0, 32));
  v22->set_f_1(s->substr(0, 163));
  v22->set_f_20(s->substr(0, 32));
  v22->set_f_15(0xd8c51);
  Message2::M14::M18::M52::M73* v23_0 = v22->add_f_31();
  v23_0->set_f_21(false);
  v23_0->set_f_2(s->substr(0, 22));
  v23_0->set_f_10(0x19);
  v23_0->set_f_26(s->substr(0, 15));
  v23_0->set_f_30(0x1f16637bfb6);
  v23_0->set_f_16(0x6f);
  v23_0->set_f_0(0.317737);
  v23_0->set_f_9(0x7e);
  v23_0->set_f_14(0x12d9636cc529659f);
  v23_0->set_f_7(0x28c69da68f9d6cb0);
  v23_0->set_f_3(0.729571);
  v23_0->set_f_18(0xa8d8fe8f1a48ac0);
  v23_0->set_f_29(s->substr(0, 28));
  v23_0->set_f_1(s->substr(0, 2));
  v23_0->set_f_19(0xf);
  v23_0->set_f_12(0xa7bb262cad7ce26);
  v23_0->set_f_6(false);
  v23_0->set_f_11(0x6db90abc9cf4bcfa);
  v23_0->set_f_22(s->substr(0, 21));
  v23_0->set_f_20(0x61);
  v23_0->set_f_24(0x60276265cdcbd28a);
  v23_0->set_f_25(true);
  v23_0->set_f_17(s->substr(0, 20));
  v22->set_f_9(0x1a);
  v22->set_f_3(0x3f599c8);
  v22->set_f_13(true);
  v22->set_f_10(Message2::M14::M18::M52::E16_CONST_5);
  v22->set_f_2(0x58747370db57a0b8);
  v22->set_f_8(0x1e);
  v21->set_f_7(0x5f410b58);
  v21->set_f_17(0.456984);
  v21->set_f_16(0x674b4139f29af9b7);
  v20->set_f_2(0x2f16);
  v20->set_f_0(s->substr(0, 37));
  Message2::M15* v24 = message->mutable_f_68();
  v24->set_f_0(Message2::M15::E5_CONST_4);
  Message2::M15::M28* v25 = v24->mutable_f_17();
  v25->set_f_0(false);
  v24->set_f_11(s->substr(0, 3040));
  v24->set_f_4(0x7ff932e2);
  Message2::M15::M42* v26_0 = v24->add_f_22();
  v26_0->set_f_0(0x8);
  v24->set_f_1(0.056160);
  v24->set_f_9(0x1e9d1f37ce55c77c);
  v24->set_f_3(0x6a);
  v24->set_f_2(0x7b5c4);
  message->set_f_9(0x12d5b8c);
  message->set_f_4(false);
  message->set_f_27(Message2::E2_CONST_4);
  message->set_f_17(0x6b);
  message->set_f_16(0x34ccb8d447a1a98e);
  Message2::M7* v27_0 = message->add_f_59();
  Message2::M7::M44* v28 = v27_0->mutable_f_7();
  Message2::M7::M44::M55* v29 = v28->mutable_f_5();
  v29->set_f_0(s->substr(0, 15));
  v28->set_f_0(s->substr(0, 123));
  v28->set_f_3(0x713a9a0980f696e);
  v28->set_f_1(0x4);
  v28->set_f_2(false);
  v27_0->set_f_0(0x21);
  message->set_f_26(s->substr(0, 7));
  message->set_f_1(0xa93c4e2);
  message->set_f_10(0x54f98bab);
  message->set_f_6(0x2b);
  message->set_f_22(0.166312);
  message->set_f_15(0xa);
  Message2::M1* v30 = message->mutable_f_49();
  v30->set_f_1(true);
  v30->set_f_0(0x3938555);
  message->set_f_0(false);
  Message2::M11* v31_0 = message->add_f_64();
  v31_0->set_f_0(s->substr(0, 19));
  message->set_f_29(false);
  message->set_f_19(0x6);
  message->set_f_2(s->substr(0, 12));
  Message2::M9* v32 = message->mutable_f_62();
  Message2::M9::M16* v33_0 = v32->add_f_2();
  v33_0->set_f_3(true);
  v33_0->set_f_2(0x7f27f7ccf9c4c851);
  Message2::M9::M16::M53* v34 = v33_0->mutable_f_8();
  (void)v34;  // Suppresses clang-tidy.
  v33_0->set_f_1(0x5805b2c6ebf29add);
  Message2::M4* v35 = message->mutable_f_55();
  Message2::M4::M20* v36_0 = v35->add_f_3();
  v36_0->set_f_11(s->substr(0, 24));
  v36_0->set_f_6(false);
  v36_0->set_f_1(0x7056fab0ddda5628);
  v36_0->set_f_4(0x6d);
  v36_0->set_f_0(0x6a);
  v36_0->set_f_9(s->substr(0, 33));
  v36_0->set_f_5(true);
  v36_0->set_f_8(true);
  v36_0->set_f_7(true);
  Message2::M4::M35* v37 = v35->mutable_f_4();
  v37->set_f_0(0xc9398);
  message->set_f_18(0.970901);
  message->set_f_5(0x475489b2615038ab);
  Message2::M10* v38 = message->mutable_f_63();
  Message2::M10::E4 array_0[21] = {
      Message2::M10::E4_CONST_3, Message2::M10::E4_CONST_4,
      Message2::M10::E4_CONST_3, Message2::M10::E4_CONST_3,
      Message2::M10::E4_CONST_5, Message2::M10::E4_CONST_5,
      Message2::M10::E4_CONST_3, Message2::M10::E4_CONST_3,
      Message2::M10::E4_CONST_2, Message2::M10::E4_CONST_3,
      Message2::M10::E4_CONST_5, Message2::M10::E4_CONST_5,
      Message2::M10::E4_CONST_1, Message2::M10::E4_CONST_3,
      Message2::M10::E4_CONST_1, Message2::M10::E4_CONST_4,
      Message2::M10::E4_CONST_3, Message2::M10::E4_CONST_4,
      Message2::M10::E4_CONST_3, Message2::M10::E4_CONST_5,
      Message2::M10::E4_CONST_5,
  };
  for (auto v : array_0) {
    v38->add_f_2(v);
  }
  v38->set_f_1(0x7dd87cdc5ad12209);
  message->add_f_8(Message2::E1_CONST_2);
  message->set_f_23(false);
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
}  // namespace fleetbench::rpc::P4::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
