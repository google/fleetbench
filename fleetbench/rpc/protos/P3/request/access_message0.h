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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message0.pb.h"

namespace fleetbench::rpc::P3::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_13(0x67);
  message->set_f_18(0x1a4b0d);
  message->set_f_21(0x68e6c);
  message->set_f_14(true);
  message->set_f_7(s->substr(0, 8));
  Message0::M4* v0 = message->mutable_f_50();
  v0->set_f_2(s->substr(0, 86));
  v0->set_f_3(0x78);
  Message0::M4::M26* v1 = v0->mutable_f_7();
  v1->set_f_1(s->substr(0, 3));
  v1->set_f_0(0x8b4bf7b);
  v1->set_f_2(Message0::M4::M26::E4_CONST_1);
  v1->set_f_5(0x85b18fd);
  Message0::M15* v2_0 = message->add_f_67();
  Message0::M15::M19* v3 = v2_0->mutable_f_7();
  (void)v3;  // Suppresses clang-tidy.
  v2_0->set_f_0(s->substr(0, 4));
  message->set_f_6(0x13efa152af70563b);
  message->set_f_8(0x617fd3986884a67b);
  message->set_f_5(0x77c472d740cd94ec);
  Message0::M11* v4 = message->mutable_f_59();
  Message0::M11::M29* v5 = v4->mutable_f_5();
  v5->set_f_1(0x17f7642ad6e7d5a8);
  v5->add_f_0(Message0::M11::M29::E5_CONST_2);
  Message0::M11::M45* v6 = v4->mutable_f_8();
  v6->set_f_0(s->substr(0, 31));
  Message0::M11::M45::M100* v7 = v6->mutable_f_6();
  (void)v7;  // Suppresses clang-tidy.
  Message0::M11::M45::M59* v8 = v6->mutable_f_4();
  Message0::M11::M45::M59::M118* v9 = v8->mutable_f_2();
  v9->set_f_0(s->substr(0, 36));
  Message0::M11::M45::M59::M118::M128* v10 = v9->mutable_f_6();
  Message0::M11::M45::M59::M118::M128::M138* v11 = v10->mutable_f_3();
  (void)v11;  // Suppresses clang-tidy.
  Message0::M11::M27* v12 = v4->mutable_f_4();
  v12->set_f_4(0x5803114b1175d15d);
  Message0::M11::M27::M72* v13 = v12->mutable_f_7();
  v13->set_f_1(0x76eeec11);
  v12->set_f_0(0x2cec7);
  Message0::M3* v14_0 = message->add_f_48();
  v14_0->set_f_4(0x6837371);
  Message0::M3::M49* v15_0 = v14_0->add_f_11();
  (void)v15_0;  // Suppresses clang-tidy.
  v14_0->set_f_3(0x595);
  Message0::M1* v16_0 = message->add_f_46();
  Message0::M1::M48* v17_0 = v16_0->add_f_2();
  Message0::M1::M48::M68* v18 = v17_0->mutable_f_4();
  v18->set_f_0(0x2443038f);
  message->set_f_3(0x4b4ff0eab633dafd);
  Message0::M7* v19 = message->mutable_f_53();
  Message0::M7::M21* v20 = v19->mutable_f_3();
  Message0::M7::M21::M60* v21 = v20->mutable_f_4();
  v21->set_f_0(false);
  Message0::M6* v22_0 = message->add_f_52();
  Message0::M6::M18* v23 = v22_0->mutable_f_4();
  (void)v23;  // Suppresses clang-tidy.
  Message0::M6::M23* v24 = v22_0->mutable_f_6();
  v24->set_f_1(0x6207487a39d2981d);
  v24->set_f_6(s->substr(0, 21));
  v24->set_f_2(0x26f235e539c82346);
  v24->set_f_4(0x45c125f32b45aae8);
  v24->set_f_3(false);
  Message0::M6::M40* v25 = v22_0->mutable_f_8();
  v25->set_f_2(0x258f);
  v25->set_f_4(s->substr(0, 23));
  v25->set_f_3(0x78faa643c81d720d);
  v25->set_f_0(0x495e8d1);
  message->set_f_31(s->substr(0, 18));
  message->set_f_16(0x40);
  message->add_f_15(Message0::E1_CONST_4);
  message->add_f_15(Message0::E1_CONST_3);
  message->set_f_20(0x75ce3b19e7fa20d5);
  message->set_f_1(s->substr(0, 19));
  message->set_f_11(0x7f3878d);
  Message0::M13* v26_0 = message->add_f_63();
  v26_0->set_f_4(0x2698f814e5d51153);
  v26_0->set_f_0(0x280fd2c);
  Message0::M13::M25* v27_0 = v26_0->add_f_8();
  Message0::M13::M25::M70* v28 = v27_0->mutable_f_8();
  v28->set_f_3(0x2b1e700f779dd4e1);
  v28->set_f_4(0x39);
  v28->set_f_0(s->substr(0, 97));
  v27_0->set_f_4(s->substr(0, 1));
  v27_0->set_f_0(s->substr(0, 22));
  Message0::M10* v29_0 = message->add_f_58();
  v29_0->set_f_0(s->substr(0, 1767));
  Message0::M10::M31* v30 = v29_0->mutable_f_4();
  v30->set_f_16(s->substr(0, 21));
  v30->set_f_14(s->substr(0, 96));
  v30->set_f_0(0xf7d1b9b);
  v30->set_f_11(0xd3626dd01014018);
  Message0::M10::M31::M83* v31 = v30->mutable_f_30();
  Message0::M10::M31::M83::M119* v32 = v31->mutable_f_4();
  v32->set_f_0(s->substr(0, 2));
  Message0::M10::M31::M83::M119::M130* v33 = v32->mutable_f_2();
  v33->set_f_1(0x7ece034e02ab48ec);
  v33->set_f_0(0x2522);
  Message0::M10::M31::M83::M111* v34 = v31->mutable_f_3();
  v34->set_f_0(0xd17f226);
  Message0::M10::M31::M83::M107* v35 = v31->mutable_f_2();
  Message0::M10::M31::M83::M107::M133* v36 = v35->mutable_f_2();
  v36->set_f_0(Message0::M10::M31::M83::M107::M133::E14_CONST_3);
  v30->set_f_19(0x6f4dcfc9);
  v30->set_f_7(s->substr(0, 9));
  v30->set_f_12(0x50647bdbbacaf068);
  v30->set_f_5(0x70);
  v30->set_f_15(false);
  v30->set_f_1(0x1dcaf3);
  v30->set_f_2(0x597134b6fd3d1019);
  v30->set_f_10(0x780bc5ddef728e51);
  message->set_f_25(s->substr(0, 9));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->add_f_15(Message0::E1_CONST_5);
  message->set_f_7(s->substr(0, 6));
  message->set_f_19(0x54ae002a25f6d0fe);
  message->set_f_27(s->substr(0, 364));
  message->set_f_22(0x1e4);
  message->set_f_4(0x6cebb057adfb5555);
  message->set_f_29(Message0::E3_CONST_1);
  Message0::M6* v0_0 = message->add_f_52();
  Message0::M6::M47* v1_0 = v0_0->add_f_10();
  v1_0->set_f_2(s->substr(0, 21));
  v1_0->set_f_0(s->substr(0, 2802));
  v1_0->set_f_4(true);
  Message0::M6::M23* v2 = v0_0->mutable_f_6();
  v2->set_f_2(0x614e545e5d1611d4);
  v2->set_f_0(s->substr(0, 2));
  v2->set_f_4(0x4eb7f33bf5f59641);
  Message0::M6::M32* v3 = v0_0->mutable_f_7();
  v3->set_f_0(0x1f);
  Message0::M6::M32::M62* v4 = v3->mutable_f_2();
  v4->set_f_4(s->substr(0, 20));
  v4->set_f_5(0x3cac3fa);
  v0_0->set_f_0(0x8d62943);
  Message0::M16* v5 = message->mutable_f_68();
  v5->set_f_16(0x472762e9);
  v5->set_f_12(s->substr(0, 158));
  v5->set_f_3(0x19);
  v5->set_f_0(s->substr(0, 99));
  Message0::M16::M37* v6 = v5->mutable_f_24();
  v6->set_f_0(0x7e4fb646a70c37fc);
  Message0::M16::M37::M99* v7 = v6->mutable_f_7();
  v7->set_f_0(s->substr(0, 4));
  v5->set_f_11(0x61c45528b70ecd9d);
  v5->set_f_1(0x50);
  v5->add_f_4(0x75);
  v5->set_f_6(0xe1f);
  v5->set_f_15(0x39ef448b);
  v5->set_f_7(0x3a416ad4f39dee1b);
  v5->set_f_9(0x56);
  v5->set_f_2(0x1c81);
  v5->set_f_17(0x175c);
  v5->set_f_19(0x6b);
  message->set_f_30(s->substr(0, 17));
  message->set_f_9(0x1f96);
  message->set_f_24(0x17);
  message->set_f_14(true);
  message->set_f_12(0x776);
  message->set_f_5(0x821f41c4e2a3535);
  Message0::M15* v8_0 = message->add_f_67();
  v8_0->set_f_0(s->substr(0, 4));
  message->set_f_26(s->substr(0, 5));
  Message0::M4* v9 = message->mutable_f_50();
  Message0::M4::M26* v10 = v9->mutable_f_7();
  v10->set_f_3(0x43862dc57761ecb3);
  v10->set_f_5(0x1c3f8d);
  v10->set_f_0(0x1b1200);
  v9->set_f_1(s->substr(0, 68));
  v9->set_f_0(s->substr(0, 26));
  message->set_f_13(0x41);
  Message0::M14* v11 = message->mutable_f_64();
  Message0::M14::M41* v12 = v11->mutable_f_5();
  v12->set_f_2(0x4547b2e71d35fbca);
  v12->set_f_13(s->substr(0, 6));
  v12->set_f_4(0xc438a23c89d10de);
  v12->set_f_21(0x35);
  v12->set_f_24(false);
  v12->set_f_8(0xb64);
  v12->set_f_14(s->substr(0, 46));
  v12->set_f_20(0x7363ad87c68038c3);
  v12->set_f_9(s->substr(0, 21));
  v12->set_f_0(0x594a92b);
  v12->set_f_3(s->substr(0, 85));
  Message0::M14::M41::M87* v13 = v12->mutable_f_45();
  v13->set_f_0(s->substr(0, 23));
  v12->set_f_10(0x6a8bf22fdbabe182);
  v12->set_f_28(0x126b8aa30bfd8528);
  v12->set_f_7(0x3d12a6c);
  v11->set_f_0(0xf2b0ca);
  Message0::M14::M53* v14_0 = v11->add_f_7();
  v14_0->set_f_0(0x16);
  Message0::M14::M53::M75* v15 = v14_0->mutable_f_7();
  Message0::M14::M53::M75::M103* v16 = v15->mutable_f_2();
  Message0::M14::M53::M75::M103::M134* v17 = v16->mutable_f_2();
  v17->set_f_2(s->substr(0, 9));
  v17->set_f_3(s->substr(0, 13));
  v15->set_f_0(0x188122938cfdac01);
  v14_0->set_f_2(0x3c);
  v14_0->set_f_3(0x210bfe49);
  Message0::M14::M35* v18_0 = v11->add_f_2();
  v18_0->set_f_2(0x2c81fe93);
  v18_0->set_f_0(0x5610368);
  message->set_f_23(0x1c);
  Message0::M1* v19_0 = message->add_f_46();
  (void)v19_0;  // Suppresses clang-tidy.
  message->set_f_18(0x7319938);
  Message0::M13* v20_0 = message->add_f_63();
  v20_0->set_f_3(0.551762);
  v20_0->set_f_2(0x59);
  Message0::M13::M44* v21_0 = v20_0->add_f_9();
  v21_0->set_f_3(0x3510);
  v21_0->set_f_1(true);
  Message0::M13::M44::M61* v22 = v21_0->mutable_f_5();
  (void)v22;  // Suppresses clang-tidy.
  v21_0->set_f_0(s->substr(0, 32));
  v20_0->set_f_4(0x70f9da3182b33fbb);
  v20_0->set_f_0(0x40);
  v20_0->set_f_1(0x5e);
  message->set_f_10(s->substr(0, 19));
  Message0::M12* v23 = message->mutable_f_60();
  Message0::M12::M30* v24 = v23->mutable_f_2();
  Message0::M12::M30::M69* v25 = v24->mutable_f_2();
  v25->set_f_0(0xec7d458);
  Message0::M12::M50* v26 = v23->mutable_f_3();
  v26->set_f_0(false);
  v23->set_f_0(0x15c4);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M3* v0_0 = message->add_f_48();
  v0_0->set_f_3(0x3e);
  v0_0->set_f_0(s->substr(0, 29));
  v0_0->set_f_1(0x5b3e9750de7e8379);
  Message0::M3::M49* v1_0 = v0_0->add_f_11();
  v1_0->set_f_0(true);
  Message0::M3::M49::M88* v2 = v1_0->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M3::M20* v3 = v0_0->mutable_f_8();
  v3->set_f_1(0x53f97);
  Message0::M3::M20::M63* v4 = v3->mutable_f_6();
  v4->set_f_0(0x577fb3fbf510ede0);
  v3->set_f_2(s->substr(0, 2));
  v0_0->set_f_2(s->substr(0, 18));
  message->set_f_20(0x68b3a99ec440dbe7);
  message->set_f_19(0x8284fe4d5ddfc92);
  Message0::M4* v5 = message->mutable_f_50();
  v5->set_f_3(0x39);
  v5->set_f_2(s->substr(0, 1));
  v5->set_f_0(s->substr(0, 4));
  Message0::M4::M26* v6 = v5->mutable_f_7();
  v6->set_f_2(Message0::M4::M26::E4_CONST_3);
  v6->set_f_1(s->substr(0, 3));
  v5->set_f_1(s->substr(0, 6));
  message->set_f_7(s->substr(0, 23));
  message->set_f_1(s->substr(0, 12));
  message->set_f_11(0x394207d9);
  message->set_f_27(s->substr(0, 406));
  message->set_f_24(0x66);
  message->set_f_3(0x6e78093b87997a55);
  Message0::M16* v7 = message->mutable_f_68();
  v7->set_f_15(0x7c6a3fbd);
  v7->set_f_2(0x43bfdda);
  v7->set_f_9(0xdb39088);
  v7->set_f_0(s->substr(0, 25));
  v7->set_f_14(s->substr(0, 5));
  v7->set_f_1(0x5a3f8);
  v7->set_f_11(0x1115210b8b7419e2);
  v7->set_f_8(0x5d7955c354d5f77f);
  v7->set_f_7(0xe01b7a7dcee9759);
  v7->set_f_5(0x14);
  v7->set_f_10(s->substr(0, 7));
  Message0::M16::M37* v8 = v7->mutable_f_24();
  Message0::M16::M37::M81* v9 = v8->mutable_f_5();
  v9->set_f_1(0x856b4901359d012);
  v9->set_f_3(0x368922868c811f93);
  Message0::M16::M37::M96* v10 = v8->mutable_f_6();
  (void)v10;  // Suppresses clang-tidy.
  v8->set_f_0(0x73f2756a9c3ea700);
  message->set_f_10(s->substr(0, 23));
  message->add_f_15(Message0::E1_CONST_3);
  Message0::M9* v11 = message->mutable_f_57();
  (void)v11;  // Suppresses clang-tidy.
  message->set_f_26(s->substr(0, 8));
  message->set_f_30(s->substr(0, 2));
  message->set_f_18(0x6253c);
  message->set_f_22(0x42);
  Message0::M7* v12 = message->mutable_f_53();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_23(0x28);
  message->set_f_21(0xccd73ca);
  message->set_f_29(Message0::E3_CONST_5);
  message->set_f_16(0x14);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_9(0x37);
  Message0::E1 array_0[21] = {
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_3,
      Message0::E1_CONST_5, Message0::E1_CONST_1, Message0::E1_CONST_4,
      Message0::E1_CONST_3, Message0::E1_CONST_5, Message0::E1_CONST_4,
      Message0::E1_CONST_4, Message0::E1_CONST_2, Message0::E1_CONST_4,
      Message0::E1_CONST_2, Message0::E1_CONST_4, Message0::E1_CONST_5,
      Message0::E1_CONST_5, Message0::E1_CONST_4, Message0::E1_CONST_1,
      Message0::E1_CONST_2, Message0::E1_CONST_2, Message0::E1_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_15(v);
  }
  message->set_f_29(Message0::E3_CONST_3);
  message->set_f_20(0x2d595952bf01fbd);
  message->set_f_26(s->substr(0, 3));
  Message0::M15* v0_0 = message->add_f_67();
  Message0::M15::M17* v1 = v0_0->mutable_f_5();
  Message0::M15::M17::M66* v2 = v1->mutable_f_2();
  v2->set_f_2(0x6b);
  Message0::M15::M17::M76* v3 = v1->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
  v0_0->set_f_0(s->substr(0, 15));
  Message0::M15::M46* v4 = v0_0->mutable_f_8();
  v4->set_f_4(s->substr(0, 22));
  Message0::M15::M46::M74* v5_0 = v4->add_f_9();
  Message0::M15::M46::M74::M123* v6_0 = v5_0->add_f_2();
  (void)v6_0;  // Suppresses clang-tidy.
  v4->set_f_3(0x6f6df5186e6c67fc);
  Message0::M15::M46::M55* v7_0 = v4->add_f_7();
  Message0::M15::M46::M55::M122* v8 = v7_0->mutable_f_4();
  v8->set_f_0(0x56);
  message->set_f_18(0x4d);
  Message0::M8* v9 = message->mutable_f_56();
  Message0::M8::M33* v10 = v9->mutable_f_6();
  Message0::M8::M33::M84* v11 = v10->mutable_f_2();
  v11->set_f_0(0x6c3335e0c6866171);
  v9->set_f_2(0x7462be2a37e80219);
  Message0::M8::M38* v12 = v9->mutable_f_9();
  v12->set_f_0(0x2f371c9ddd77e239);
  message->set_f_8(0x42e4041aa8d82bc9);
  message->set_f_12(0xb775dd8);
  message->set_f_3(0x2274ecc3f6cbfbd0);
  message->set_f_21(0x7e);
  message->set_f_27(s->substr(0, 8));
  Message0::M2* v13_0 = message->add_f_47();
  (void)v13_0;  // Suppresses clang-tidy.
  message->set_f_7(s->substr(0, 7));
  message->set_f_13(0x6d25a9d);
  message->add_f_28(Message0::E2_CONST_2);
  message->set_f_4(0x782ef128a79947b1);
  Message0::M13* v14_0 = message->add_f_63();
  Message0::M13::M25* v15_0 = v14_0->add_f_8();
  Message0::M13::M25::M70* v16 = v15_0->mutable_f_8();
  Message0::M13::M25::M70::M125* v17 = v16->mutable_f_8();
  v17->set_f_0(s->substr(0, 5));
  v16->set_f_1(0xd2ee8ba);
  v15_0->set_f_0(s->substr(0, 2282));
  v15_0->set_f_2(0x6e);
  Message0::M13::M25::M86* v18 = v15_0->mutable_f_9();
  v18->set_f_0(0x39);
  v15_0->set_f_3(0x52c88159ec1afdc8);
  v15_0->set_f_1(0xad09e40);
  v14_0->set_f_1(0x7e);
  v14_0->set_f_0(0xe725073);
  v14_0->set_f_2(0xd20792b);
  v14_0->set_f_4(0x60194e15e381db1c);
  v14_0->set_f_3(0.277441);
  message->set_f_2(0x397b56e0a42fa3fc);
  message->set_f_10(s->substr(0, 14));
  Message0::M3* v19_0 = message->add_f_48();
  v19_0->set_f_4(0x41);
  v19_0->set_f_1(0x495beb32ceb59545);
  Message0::M3::M20* v20 = v19_0->mutable_f_8();
  v20->set_f_2(s->substr(0, 5));
  v20->set_f_1(0x59);
  v20->set_f_0(s->substr(0, 2470));
  v19_0->set_f_0(s->substr(0, 26));
  Message0::M3::M49* v21_0 = v19_0->add_f_11();
  v21_0->set_f_0(false);
  Message0::M3::M49::M88* v22 = v21_0->mutable_f_4();
  (void)v22;  // Suppresses clang-tidy.
  message->set_f_14(false);
  message->set_f_25(s->substr(0, 345));
  message->set_f_16(0x5c);
  message->set_f_1(s->substr(0, 25));
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
}  // namespace fleetbench::rpc::P3::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
