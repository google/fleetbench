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
  Message2::M3* v0 = message->mutable_f_48();
  v0->set_f_0(0x6e52d56);
  Message2::M19* v1_0 = message->add_f_70();
  Message2::M19::M26* v2_0 = v1_0->add_f_2();
  v2_0->set_f_0(0x6d645e8d4e7a9a9f);
  Message2::M19::M26::M44* v3 = v2_0->mutable_f_2();
  Message2::M19::M26::M44::M47* v4 = v3->mutable_f_5();
  v4->set_f_1(Message2::M19::M26::M44::M47::E12_CONST_2);
  Message2::M19::M26::M44::M50* v5 = v3->mutable_f_9();
  v5->set_f_2(0x3454e4af5ab2b3b5);
  Message2::M19::M26::M44::M50::M55* v6 = v5->mutable_f_4();
  v6->set_f_0(s->substr(0, 1));
  v5->set_f_0(s->substr(0, 26));
  v5->set_f_1(0x11ab);
  Message2::M19::M26::M44::M49* v7 = v3->mutable_f_7();
  v7->set_f_0(Message2::M19::M26::M44::M49::E13_CONST_5);
  v3->set_f_0(0x1c7f11f4a2acdd42);
  v1_0->set_f_0(0x46);
  Message2::M20* v8_0 = message->add_f_72();
  v8_0->set_f_1(0x456be4dc0);
  Message2::M20::M29* v9 = v8_0->mutable_f_6();
  v9->set_f_1(0x9ec222e);
  Message2::M20::M28* v10 = v8_0->mutable_f_5();
  v10->set_f_0(0x55);
  v8_0->set_f_0(0x663eeeaf28f7e7b2);
  Message2::M13* v11_0 = message->add_f_61();
  v11_0->set_f_0(s->substr(0, 10));
  Message2::M13::M30* v12_0 = v11_0->add_f_2();
  v12_0->set_f_0(s->substr(0, 11));
  Message2::M13::M30::M40* v13 = v12_0->mutable_f_9();
  v13->set_f_1(0xf5d92);
  v13->set_f_2(s->substr(0, 3));
  v13->set_f_0(0.979775);
  v12_0->set_f_1(s->substr(0, 22));
  message->set_f_16(s->substr(0, 26));
  message->set_f_13(0x38ff);
  message->set_f_9(0x9eb57015f0e9ae0);
  message->set_f_2(0x74122149774ef1e5);
  Message2::M8* v14 = message->mutable_f_55();
  v14->set_f_1(s->substr(0, 24));
  message->set_f_14(false);
  message->set_f_22(0.579251);
  message->set_f_0(0x11ca24);
  Message2::M18* v15 = message->mutable_f_69();
  v15->set_f_2(0x46510655);
  v15->set_f_0(s->substr(0, 5));
  v15->set_f_1(s->substr(0, 120));
  v15->set_f_3(0x42423d60af474754);
  v15->set_f_4(0x483f011cb6c5b7e5);
  message->set_f_28(true);
  Message2::M15* v16 = message->mutable_f_64();
  v16->set_f_0(0x56b8b0c194448fd9);
  Message2::M14* v17_0 = message->add_f_63();
  Message2::M14::M34* v18 = v17_0->mutable_f_2();
  v18->set_f_4(0x3f5e671b3b61ae3);
  v18->set_f_0(0x6f110ca63f3d4c79);
  v18->set_f_3(0x50a0bf3);
  v18->set_f_6(0x166d1120c3a4682c);
  v18->set_f_1(0x69352f8);
  v18->set_f_2(0x234ff38c112fff55);
  message->set_f_5(0x3b56f83a4337e36b);
  Message2::M9* v19 = message->mutable_f_57();
  v19->add_f_0(Message2::M9::E3_CONST_3);
  Message2::M5* v20 = message->mutable_f_51();
  v20->set_f_0(0x212409d);
  Message2::M1* v21 = message->mutable_f_46();
  Message2::M1::M35* v22_0 = v21->add_f_3();
  v22_0->set_f_0(true);
  v22_0->set_f_2(0x6a0f16b0a67be1e6);
  v22_0->set_f_3(s->substr(0, 10));
  Message2::M1::M36* v23 = v21->mutable_f_4();
  (void)v23;  // Suppresses clang-tidy.
  Message2::M12* v24 = message->mutable_f_60();
  (void)v24;  // Suppresses clang-tidy.
  message->set_f_20(0x50);
  Message2::M11* v25 = message->mutable_f_59();
  v25->set_f_0(0x4d799088f81b018b);
  message->set_f_12(0x4e1ae9b);
  message->set_f_15(0x66b97a);
  message->set_f_8(0x38);
  message->set_f_27(true);
  Message2::M2* v26_0 = message->add_f_47();
  v26_0->set_f_1(s->substr(0, 1));
  message->set_f_4(s->substr(0, 19));
  Message2::M21* v27 = message->mutable_f_75();
  (void)v27;  // Suppresses clang-tidy.
  Message2::M4* v28 = message->mutable_f_49();
  v28->set_f_0(s->substr(0, 6));
  message->set_f_11(true);
  Message2::M17* v29 = message->mutable_f_67();
  Message2::M17::M32* v30_0 = v29->add_f_3();
  v30_0->set_f_0(0x34ca89e98f8bfe56);
  Message2::M17::M37* v31_0 = v29->add_f_4();
  v31_0->set_f_3(s->substr(0, 8));
  v31_0->set_f_0(0x60c58d23);
  v31_0->set_f_1(0x4a9458f7a25686e0);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_26(0.897430);
  message->set_f_4(s->substr(0, 6));
  message->set_f_23(0x9fc8c7739b45151);
  message->set_f_14(true);
  message->set_f_9(0x15d68603a94204b9);
  message->set_f_12(0xe);
  Message2::M3* v0 = message->mutable_f_48();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_27(true);
  message->set_f_28(true);
  message->set_f_7(0x4ed1f7d);
  Message2::M2* v1_0 = message->add_f_47();
  v1_0->set_f_0(s->substr(0, 5));
  Message2::M2::M25* v2 = v1_0->mutable_f_4();
  Message2::M2::M25::M41* v3_0 = v2->add_f_2();
  v3_0->set_f_0(0x483);
  v3_0->set_f_1(0x3cff174870f21c90);
  v3_0->set_f_2(s->substr(0, 8));
  Message2::M2::M25::M42* v4_0 = v2->add_f_4();
  v4_0->set_f_0(0x7153cad1c5818a9f);
  v4_0->set_f_1(s->substr(0, 248));
  v4_0->set_f_2(s->substr(0, 20));
  v2->set_f_0(0x6d);
  message->set_f_15(0xafabfd6);
  Message2::M18* v5 = message->mutable_f_69();
  v5->set_f_4(0xcf390ead359a354);
  v5->set_f_2(0x6132979d);
  v5->set_f_1(s->substr(0, 23));
  Message2::M9* v6 = message->mutable_f_57();
  v6->add_f_0(Message2::M9::E3_CONST_2);
  message->set_f_2(0x7c0e194838f523cf);
  message->set_f_1(0.228040);
  Message2::M11* v7 = message->mutable_f_59();
  v7->add_f_1(Message2::M11::E4_CONST_5);
  Message2::M14* v8_0 = message->add_f_63();
  v8_0->set_f_0(s->substr(0, 21));
  Message2::M14::M34* v9 = v8_0->mutable_f_2();
  v9->set_f_3(0x17f5f3);
  Message2::M20* v10_0 = message->add_f_72();
  v10_0->set_f_1(0x21a7b42e478);
  v10_0->set_f_0(0x4ef9e11342cb8666);
  Message2::M20::M28* v11 = v10_0->mutable_f_5();
  (void)v11;  // Suppresses clang-tidy.
  Message2::M8* v12 = message->mutable_f_55();
  v12->set_f_2(s->substr(0, 16));
  v12->set_f_1(s->substr(0, 14));
  message->set_f_11(true);
  message->set_f_21(0x69);
  Message2::M21* v13 = message->mutable_f_75();
  (void)v13;  // Suppresses clang-tidy.
  Message2::M12* v14 = message->mutable_f_60();
  v14->set_f_0(0x5104680920f5642f);
  message->set_f_0(0x118f);
  message->set_f_8(0x1a);
  Message2::M7* v15 = message->mutable_f_53();
  v15->set_f_0(0x141a0f0528e842cd);
  message->set_f_13(0x23d6986);
  message->set_f_25(s->substr(0, 1));
  Message2::M16* v16 = message->mutable_f_65();
  Message2::M16::M31* v17_0 = v16->add_f_4();
  v17_0->set_f_1(0.084308);
  v17_0->set_f_2(0x5a55863945849a3f);
  v17_0->set_f_3(s->substr(0, 2));
  v17_0->set_f_0(0.601710);
  v16->set_f_0(s->substr(0, 123));
  Message2::M16::M27* v18_0 = v16->add_f_3();
  (void)v18_0;  // Suppresses clang-tidy.
  message->set_f_16(s->substr(0, 2));
  message->set_f_29(s->substr(0, 14));
  Message2::M17* v19 = message->mutable_f_67();
  v19->set_f_0(s->substr(0, 5));
  Message2::M17::M37* v20_0 = v19->add_f_4();
  v20_0->set_f_1(0x34ca8df95fb2ab91);
  v20_0->set_f_2(s->substr(0, 19));
  v20_0->set_f_0(0x10eef7ae);
  v20_0->set_f_3(s->substr(0, 21));
  Message2::M17::M32* v21_0 = v19->add_f_3();
  v21_0->set_f_0(0x11d66b8478efa00f);
  Message2::M13* v22_0 = message->add_f_61();
  v22_0->set_f_0(s->substr(0, 14));
  Message2::M13::M30* v23_0 = v22_0->add_f_2();
  v23_0->set_f_1(s->substr(0, 5));
  v23_0->set_f_0(s->substr(0, 10));
  v23_0->set_f_2(0x3b01c62b0578656d);
  Message2::M13::M30::M40* v24 = v23_0->mutable_f_9();
  v24->set_f_1(0x9569d99);
  Message2::M13::M30::M40::M52* v25 = v24->mutable_f_6();
  Message2::M13::M30::M40::M52::M56* v26 = v25->mutable_f_2();
  v26->set_f_5(s->substr(0, 484));
  v26->set_f_3(s->substr(0, 4));
  v26->set_f_6(s->substr(0, 3));
  v26->set_f_2(0x4b);
  v26->set_f_4(0x27354c779e0beb75);
  v26->set_f_0(true);
  v25->set_f_0(0x6c9bac17e3e34179);
  v24->set_f_2(s->substr(0, 22));
  v24->set_f_0(0.119065);
  message->set_f_20(0x16ef56);
  message->set_f_24(0x4eaa0ead7606b381);
  Message2::M4* v27 = message->mutable_f_49();
  v27->set_f_0(s->substr(0, 69));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M13* v0_0 = message->add_f_61();
  Message2::M13::M30* v1_0 = v0_0->add_f_2();
  v1_0->set_f_2(0x4b969a9dbb9fef3b);
  Message2::M13::M30::M40* v2 = v1_0->mutable_f_9();
  v2->set_f_1(0x69558c2);
  v2->set_f_0(0.861683);
  Message2::M13::M30::M40::M52* v3 = v2->mutable_f_6();
  v3->set_f_0(0x6bea8c5d0b10d2aa);
  Message2::M13::M30::M40::M52::M56* v4 = v3->mutable_f_2();
  v4->set_f_0(true);
  v4->set_f_2(0x1d7363);
  v4->set_f_5(s->substr(0, 13));
  v4->set_f_1(0x77b90e497d4cab92);
  v4->set_f_6(s->substr(0, 22));
  v4->set_f_4(0x707a203d3b069c7d);
  v2->set_f_2(s->substr(0, 6));
  Message2::M9* v5 = message->mutable_f_57();
  (void)v5;  // Suppresses clang-tidy.
  message->set_f_12(0x61);
  message->set_f_18(0x32df5fab4c32d688);
  Message2::M5* v6 = message->mutable_f_51();
  v6->set_f_0(0x2dcb11bb);
  Message2::M2* v7_0 = message->add_f_47();
  Message2::M2::M25* v8 = v7_0->mutable_f_4();
  Message2::M2::M25::M41* v9_0 = v8->add_f_2();
  v9_0->set_f_2(s->substr(0, 4));
  v9_0->set_f_3(s->substr(0, 8));
  v9_0->set_f_1(0x7f18b12d28d93b8c);
  Message2::M2::M25::M42* v10_0 = v8->add_f_4();
  v10_0->set_f_2(s->substr(0, 15));
  v10_0->set_f_1(s->substr(0, 1));
  v8->set_f_0(0x31990e);
  v7_0->set_f_1(s->substr(0, 1));
  message->set_f_16(s->substr(0, 11));
  Message2::M21* v11 = message->mutable_f_75();
  v11->set_f_0(0x6a9b5931e7432beb);
  message->set_f_23(0x1bf91cb27537735f);
  message->set_f_27(false);
  Message2::M1* v12 = message->mutable_f_46();
  Message2::M1::M35* v13_0 = v12->add_f_3();
  v13_0->set_f_0(true);
  v13_0->set_f_2(0x3e5861f4af523e9b);
  v13_0->set_f_1(true);
  v12->add_f_0(Message2::M1::E2_CONST_5);
  v12->add_f_0(Message2::M1::E2_CONST_3);
  v12->add_f_0(Message2::M1::E2_CONST_1);
  Message2::M1::M36* v14 = v12->mutable_f_4();
  v14->set_f_0(s->substr(0, 17));
  Message2::M10* v15_0 = message->add_f_58();
  Message2::M10::M23* v16_0 = v15_0->add_f_5();
  v16_0->set_f_16(s->substr(0, 3127));
  v16_0->set_f_10(0.041366);
  v16_0->set_f_5(0x7f708eddfa06fc3c);
  v16_0->set_f_12(false);
  v16_0->set_f_6(0x63eccf8d2463653);
  v16_0->set_f_11(0x21e9a45d3b0e24f7);
  v16_0->set_f_7(true);
  v16_0->set_f_15(0x4dae577827a595bc);
  v16_0->set_f_8(s->substr(0, 7));
  v16_0->set_f_14(s->substr(0, 4));
  v16_0->set_f_0(0x70ecd3f);
  v16_0->set_f_13(Message2::M10::M23::E5_CONST_1);
  v16_0->set_f_3(0x7eb0d);
  v16_0->set_f_2(0x735ee94503b13d30);
  v15_0->set_f_0(true);
  Message2::M17* v17 = message->mutable_f_67();
  Message2::M17::M32* v18_0 = v17->add_f_3();
  v18_0->set_f_0(0x21ebcd0c75101c11);
  v17->set_f_0(s->substr(0, 9));
  Message2::M17::M37* v19_0 = v17->add_f_4();
  v19_0->set_f_0(0x72ea4a0e);
  v19_0->set_f_2(s->substr(0, 8));
  v19_0->set_f_3(s->substr(0, 15));
  v19_0->set_f_1(0x4083b634215eca21);
  Message2::M11* v20 = message->mutable_f_59();
  Message2::M11::E4 array_0[12] = {
      Message2::M11::E4_CONST_1, Message2::M11::E4_CONST_3,
      Message2::M11::E4_CONST_4, Message2::M11::E4_CONST_3,
      Message2::M11::E4_CONST_4, Message2::M11::E4_CONST_1,
      Message2::M11::E4_CONST_4, Message2::M11::E4_CONST_1,
      Message2::M11::E4_CONST_5, Message2::M11::E4_CONST_5,
      Message2::M11::E4_CONST_2, Message2::M11::E4_CONST_3,
  };
  for (auto v : array_0) {
    v20->add_f_1(v);
  }
  v20->set_f_0(0x72b1fe56f7615f0a);
  message->set_f_21(0x59);
  message->set_f_3(Message2::E1_CONST_2);
  Message2::M8* v21 = message->mutable_f_55();
  v21->set_f_2(s->substr(0, 8));
  v21->set_f_0(s->substr(0, 290));
  v21->set_f_1(s->substr(0, 79));
  message->set_f_15(0x5c);
  Message2::M7* v22 = message->mutable_f_53();
  v22->set_f_0(0x3ad0115749976a6e);
  message->set_f_13(0x5c);
  message->set_f_4(s->substr(0, 9));
  message->set_f_28(true);
  message->set_f_0(0x9);
  message->set_f_24(0x4d728f3430776224);
  message->set_f_11(false);
  Message2::M14* v23_0 = message->add_f_63();
  Message2::M14::M34* v24 = v23_0->mutable_f_2();
  v24->set_f_6(0x685bf6b966433d8d);
  v24->set_f_4(0x2977b8c558fe8159);
  v24->set_f_1(0x6a52bd5e);
  v24->set_f_3(0x1f61b2);
  v24->set_f_5(0x42f7f429);
  v24->set_f_2(0x6e32f80acf9a289b);
  message->set_f_29(s->substr(0, 7));
  Message2::M3* v25 = message->mutable_f_48();
  (void)v25;  // Suppresses clang-tidy.
  Message2::M18* v26 = message->mutable_f_69();
  v26->set_f_2(0x1e14d0d1);
  Message2::M18::M33* v27 = v26->mutable_f_13();
  v27->set_f_0(0x17d7ef3181bfcf54);
  v26->set_f_4(0x11d0a176b2f310a3);
  v26->set_f_1(s->substr(0, 20));
  v26->set_f_3(0x31da829bd4d58ec5);
  v26->set_f_0(s->substr(0, 89));
  message->set_f_25(s->substr(0, 12));
  message->set_f_20(0x11a368);
  message->set_f_26(0.521203);
  message->set_f_5(0x771573bf1f11750);
  message->set_f_2(0x1a266276c28d62f3);
  message->set_f_10(0x74c209dccb9f816e);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_15(0x1bd19b);
  Message2::M15* v0 = message->mutable_f_64();
  v0->set_f_0(0x181eb44975ae31d2);
  Message2::M12* v1 = message->mutable_f_60();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_19(0x73fcc358a3ab5018);
  message->set_f_21(0x60);
  message->set_f_1(0.592754);
  Message2::M14* v2_0 = message->add_f_63();
  Message2::M14::M34* v3 = v2_0->mutable_f_2();
  v3->set_f_1(0x61b478ff);
  v3->set_f_5(0x5a688e5c);
  v3->set_f_6(0x3f6710ffd2d761e5);
  v3->set_f_3(0x26adfe1);
  v3->set_f_4(0x4d9ebf96bc9f1c28);
  v3->set_f_2(0x6cf4d981b80ab8ee);
  v3->set_f_0(0x5679328aac587f87);
  v2_0->set_f_0(s->substr(0, 8));
  message->set_f_7(0xb0adc08);
  message->set_f_11(false);
  message->set_f_2(0x788c15c1059be78d);
  message->set_f_25(s->substr(0, 2));
  Message2::M10* v4_0 = message->add_f_58();
  Message2::M10::M24* v5_0 = v4_0->add_f_6();
  v5_0->set_f_5(s->substr(0, 7));
  v5_0->add_f_1(Message2::M10::M24::E6_CONST_5);
  v5_0->set_f_3(0x60b92c45debaa01c);
  Message2::M10::M24::M43* v6 = v5_0->mutable_f_13();
  Message2::M10::M24::M43::M48* v7 = v6->mutable_f_2();
  v7->set_f_2(true);
  v7->set_f_0(0x25b5a);
  v7->set_f_1(s->substr(0, 1));
  v5_0->set_f_0(0x2027320d4edd90fd);
  v4_0->set_f_0(false);
  Message2::M10::M22* v8 = v4_0->mutable_f_4();
  v8->set_f_0(0xb6c9364);
  message->set_f_10(0x3f5bce8bd1c92cea);
  message->set_f_8(0x5);
  Message2::M18* v9 = message->mutable_f_69();
  v9->set_f_4(0x7c2234329e5b537);
  Message2::M18::M33* v10 = v9->mutable_f_13();
  v10->set_f_0(0x19996bd164e0aa4c);
  v9->set_f_2(0x5dc075b5);
  v9->set_f_1(s->substr(0, 14));
  v9->set_f_0(s->substr(0, 7));
  Message2::M8* v11 = message->mutable_f_55();
  v11->set_f_1(s->substr(0, 124));
  v11->set_f_0(s->substr(0, 4));
  v11->set_f_2(s->substr(0, 10));
  Message2::M21* v12 = message->mutable_f_75();
  v12->set_f_0(0x789e5d7edf277cce);
  message->set_f_24(0x69848a5266fee309);
  message->set_f_17(0x60ee65e2edc1f47c);
  message->set_f_9(0x1ea130037d687ee8);
  message->set_f_23(0x3bbda548206cfe17);
  Message2::M5* v13 = message->mutable_f_51();
  v13->set_f_0(0x2efc9a20);
  Message2::M2* v14_0 = message->add_f_47();
  Message2::M2::M25* v15 = v14_0->mutable_f_4();
  Message2::M2::M25::M42* v16_0 = v15->add_f_4();
  v16_0->set_f_0(0x1ba5d1df9c1a9962);
  v16_0->set_f_1(s->substr(0, 3));
  v15->set_f_0(0x3b6fbc8);
  Message2::M2::M25::M41* v17_0 = v15->add_f_2();
  v17_0->set_f_0(0x20db1);
  v17_0->set_f_3(s->substr(0, 31));
  v17_0->set_f_2(s->substr(0, 7));
  v14_0->set_f_1(s->substr(0, 8));
  v14_0->set_f_0(s->substr(0, 5));
  Message2::M7* v18 = message->mutable_f_53();
  v18->set_f_0(0x780137778952b55e);
  Message2::M1* v19 = message->mutable_f_46();
  Message2::M1::M35* v20_0 = v19->add_f_3();
  v20_0->set_f_1(false);
  v20_0->set_f_0(true);
  v20_0->set_f_2(0xbffb4007dc30901);
  v19->add_f_0(Message2::M1::E2_CONST_4);
  message->set_f_6(s->substr(0, 1));
  Message2::M17* v21 = message->mutable_f_67();
  Message2::M17::M32* v22_0 = v21->add_f_3();
  (void)v22_0;  // Suppresses clang-tidy.
  Message2::M17::M37* v23_0 = v21->add_f_4();
  v23_0->set_f_2(s->substr(0, 61));
  v21->set_f_0(s->substr(0, 7));
  message->set_f_22(0.411016);
  Message2::M20* v24_0 = message->add_f_72();
  Message2::M20::M29* v25 = v24_0->mutable_f_6();
  v25->set_f_0(0.207521);
  v25->set_f_1(0x6e);
  v24_0->set_f_0(0x4fdf1bb5cade3adb);
  Message2::M19* v26_0 = message->add_f_70();
  v26_0->set_f_0(0x1c);
  Message2::M19::M26* v27_0 = v26_0->add_f_2();
  Message2::M19::M26::M44* v28 = v27_0->mutable_f_2();
  Message2::M19::M26::M44::M47* v29 = v28->mutable_f_5();
  v29->set_f_0(s->substr(0, 58));
  Message2::M19::M26::M44::M49* v30 = v28->mutable_f_7();
  (void)v30;  // Suppresses clang-tidy.
  Message2::M19::M26::M44::M50* v31 = v28->mutable_f_9();
  v31->set_f_2(0x35336fff68213995);
  v31->set_f_0(s->substr(0, 5));
  v28->set_f_0(0x7b6b7b1353444ff7);
  message->set_f_3(Message2::E1_CONST_5);
  Message2::M16* v32 = message->mutable_f_65();
  Message2::M16::M31* v33_0 = v32->add_f_4();
  v33_0->set_f_0(0.619792);
  Message2::M16::M31::M46* v34_0 = v33_0->add_f_6();
  v34_0->set_f_20(Message2::M16::M31::M46::E10_CONST_5);
  v34_0->set_f_5(0x540583ec4ae07a4d);
  v34_0->set_f_11(0x4cebc0e8);
  Message2::M16::M31::M46::E11 array_0[19] = {
      Message2::M16::M31::M46::E11_CONST_4,
      Message2::M16::M31::M46::E11_CONST_3,
      Message2::M16::M31::M46::E11_CONST_4,
      Message2::M16::M31::M46::E11_CONST_5,
      Message2::M16::M31::M46::E11_CONST_2,
      Message2::M16::M31::M46::E11_CONST_2,
      Message2::M16::M31::M46::E11_CONST_5,
      Message2::M16::M31::M46::E11_CONST_3,
      Message2::M16::M31::M46::E11_CONST_3,
      Message2::M16::M31::M46::E11_CONST_2,
      Message2::M16::M31::M46::E11_CONST_5,
      Message2::M16::M31::M46::E11_CONST_2,
      Message2::M16::M31::M46::E11_CONST_5,
      Message2::M16::M31::M46::E11_CONST_1,
      Message2::M16::M31::M46::E11_CONST_4,
      Message2::M16::M31::M46::E11_CONST_5,
      Message2::M16::M31::M46::E11_CONST_4,
      Message2::M16::M31::M46::E11_CONST_2,
      Message2::M16::M31::M46::E11_CONST_2,
  };
  for (auto v : array_0) {
    v34_0->add_f_27(v);
  }
  v34_0->set_f_18(0x47);
  v34_0->set_f_17(s->substr(0, 50));
  v34_0->set_f_28(s->substr(0, 3));
  v34_0->set_f_16(s->substr(0, 4));
  v34_0->set_f_19(0x940cc84);
  v34_0->set_f_30(s->substr(0, 4));
  v34_0->set_f_23(0x6d);
  v34_0->set_f_3(s->substr(0, 17));
  v34_0->set_f_15(0x6293d51a6849d6e4);
  v34_0->set_f_26(s->substr(0, 10));
  v34_0->set_f_25(0.747084);
  v34_0->set_f_14(0x288e321);
  v34_0->set_f_12(0x12baf21d15a92b38);
  v34_0->set_f_29(0x15);
  v34_0->set_f_31(false);
  Message2::M16::M31::M46::E9 array_1[20] = {
      Message2::M16::M31::M46::E9_CONST_3, Message2::M16::M31::M46::E9_CONST_2,
      Message2::M16::M31::M46::E9_CONST_5, Message2::M16::M31::M46::E9_CONST_2,
      Message2::M16::M31::M46::E9_CONST_4, Message2::M16::M31::M46::E9_CONST_5,
      Message2::M16::M31::M46::E9_CONST_3, Message2::M16::M31::M46::E9_CONST_3,
      Message2::M16::M31::M46::E9_CONST_1, Message2::M16::M31::M46::E9_CONST_5,
      Message2::M16::M31::M46::E9_CONST_3, Message2::M16::M31::M46::E9_CONST_2,
      Message2::M16::M31::M46::E9_CONST_2, Message2::M16::M31::M46::E9_CONST_1,
      Message2::M16::M31::M46::E9_CONST_2, Message2::M16::M31::M46::E9_CONST_3,
      Message2::M16::M31::M46::E9_CONST_4, Message2::M16::M31::M46::E9_CONST_3,
      Message2::M16::M31::M46::E9_CONST_2, Message2::M16::M31::M46::E9_CONST_4,
  };
  for (auto v : array_1) {
    v34_0->add_f_8(v);
  }
  v34_0->set_f_4(s->substr(0, 14));
  v33_0->set_f_1(0.489293);
  v33_0->set_f_3(s->substr(0, 20));
  v33_0->set_f_2(0x56678a81b142f544);
  v32->set_f_0(s->substr(0, 3));
  Message2::M16::M27* v35_0 = v32->add_f_3();
  (void)v35_0;  // Suppresses clang-tidy.
  Message2::M11* v36 = message->mutable_f_59();
  v36->set_f_0(0x77b9fce4fdba810);
  v36->add_f_1(Message2::M11::E4_CONST_1);
  message->set_f_0(0x414dd95);
  message->set_f_16(s->substr(0, 61));
  message->set_f_26(0.608881);
  message->set_f_18(0x36bff481a8e2477f);
  message->set_f_5(0x3492074e0587a74);
  Message2::M3* v37 = message->mutable_f_48();
  v37->set_f_0(0x740d79e0);
  Message2::M13* v38_0 = message->add_f_61();
  v38_0->set_f_0(s->substr(0, 6));
  Message2::M13::M30* v39_0 = v38_0->add_f_2();
  Message2::M13::M30::M40* v40 = v39_0->mutable_f_9();
  v40->set_f_2(s->substr(0, 20));
  Message2::M13::M30::M40::M52* v41 = v40->mutable_f_6();
  Message2::M13::M30::M40::M52::M56* v42 = v41->mutable_f_2();
  v42->set_f_6(s->substr(0, 16));
  v42->set_f_1(0x615849c32a5cb41f);
  v42->set_f_3(s->substr(0, 31));
  v42->set_f_5(s->substr(0, 6));
  v42->set_f_4(0x739f54eabf3eacb2);
  v40->set_f_1(0x2da9);
  v40->set_f_0(0.448260);
  v39_0->set_f_0(s->substr(0, 14));
  v39_0->set_f_2(0x103ec16dce807282);
  v39_0->set_f_1(s->substr(0, 22));
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
