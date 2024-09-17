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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message0.pb.h"

namespace fleetbench::rpc::P2::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_14(0x3ec1b7fc0acf738b);
  message->set_f_21(0xa5ac4e07be0519f);
  message->set_f_6(s->substr(0, 2));
  message->set_f_13(s->substr(0, 8));
  message->set_f_24(0x9ad3a3a);
  message->set_f_19(s->substr(0, 26));
  message->set_f_27(false);
  Message0::M2* v0 = message->mutable_f_52();
  Message0::M2::M10* v1 = v0->mutable_f_3();
  v1->set_f_0(0x7d);
  Message0::M2::M15* v2 = v0->mutable_f_6();
  v2->set_f_1(0x3542ca1);
  Message0::M2::M15::M43* v3 = v2->mutable_f_9();
  v3->set_f_3(0xf299b17);
  v3->set_f_4(0x48);
  v3->set_f_2(s->substr(0, 386));
  v3->set_f_1(s->substr(0, 225));
  v3->set_f_5(s->substr(0, 3));
  v2->set_f_3(s->substr(0, 211));
  v2->set_f_4(0x2e);
  message->set_f_8(true);
  message->set_f_0(0x4c0cae75);
  message->set_f_7(0x72);
  message->set_f_17(s->substr(0, 4));
  Message0::M7* v4 = message->mutable_f_57();
  Message0::M7::M16* v5_0 = v4->add_f_7();
  Message0::M7::M16::M39* v6 = v5_0->mutable_f_5();
  v6->set_f_1(s->substr(0, 7));
  Message0::M7::M16::M39::M61* v7 = v6->mutable_f_7();
  v7->add_f_0(Message0::M7::M16::M39::M61::E11_CONST_2);
  Message0::M7::M16::M39::M61::M70* v8_0 = v7->add_f_8();
  v8_0->set_f_1(0x59a7d745a29c3dd9);
  v8_0->set_f_2(s->substr(0, 15));
  v7->set_f_4(0x7eac2d0fe4f74a5c);
  v7->set_f_3(s->substr(0, 6));
  v7->set_f_1(0x2e29bf45);
  v7->set_f_2(0x7d);
  Message0::M7::M16::M39::M61::M71* v9 = v7->mutable_f_9();
  v9->set_f_1(s->substr(0, 17));
  v6->set_f_0(Message0::M7::M16::M39::E3_CONST_4);
  v6->set_f_2(true);
  v6->set_f_3(0x39ecdf7);
  v5_0->set_f_2(s->substr(0, 63));
  v5_0->set_f_0(true);
  Message0::M7::M11* v10_0 = v4->add_f_2();
  v10_0->set_f_0(0xffb6fdd8ab63a70);
  Message0::M7::M11::M41* v11_0 = v10_0->add_f_5();
  v11_0->set_f_0(s->substr(0, 4));
  Message0::M7::M11::M41::M57* v12 = v11_0->mutable_f_5();
  Message0::M7::M11::M41::M57::M69* v13 = v12->mutable_f_2();
  v13->set_f_2(0x22);
  v13->set_f_1(0x1b48aeb);
  v13->set_f_0(0x24cc061c78177a98);
  v12->set_f_0(0.981176);
  v10_0->set_f_1(false);
  Message0::M7::M14* v14_0 = v4->add_f_6();
  v14_0->set_f_0(0xa);
  Message0::M7::M25* v15 = v4->mutable_f_9();
  v15->set_f_0(0x5265722);
  Message0::M7::M25::M47* v16 = v15->mutable_f_4();
  v16->set_f_1(s->substr(0, 263));
  v16->set_f_0(true);
  v16->set_f_2(false);
  Message0::M7::M12* v17_0 = v4->add_f_5();
  v17_0->add_f_1(0x22);
  Message0::M7::M12::M50* v18 = v17_0->mutable_f_7();
  v18->add_f_17(Message0::M7::M12::M50::E7_CONST_1);
  v18->set_f_0(true);
  v18->set_f_2(0x2049426a4734a93e);
  v18->add_f_11(Message0::M7::M12::M50::E6_CONST_5);
  v18->set_f_26(s->substr(0, 5));
  v18->set_f_1(s->substr(0, 6));
  v18->set_f_14(0xc8edcec);
  v18->set_f_3(s->substr(0, 3450));
  v18->set_f_25(0x363211b85a70dabe);
  v18->set_f_28(0x38e8629f8abb094b);
  v18->set_f_12(0x942ee);
  v18->set_f_9(s->substr(0, 1));
  v18->set_f_22(0x70ad761313ea345c);
  v18->set_f_19(0x306a360);
  v18->add_f_7(Message0::M7::M12::M50::E5_CONST_3);
  v18->set_f_20(0x540ab1ee477324e);
  v18->set_f_13(0x170c71a87662e34a);
  v18->set_f_8(s->substr(0, 29));
  v18->set_f_18(0x1d925c5a0f475e0e);
  v17_0->set_f_3(s->substr(0, 22));
  v17_0->set_f_2(0x6b483844);
  v17_0->set_f_0(0x73bb8f5);
  message->set_f_5(0x17ca64);
  message->set_f_4(0x7aad1fc0);
  Message0::M8* v19 = message->mutable_f_58();
  v19->set_f_0(s->substr(0, 103));
  v19->set_f_9(s->substr(0, 78));
  v19->set_f_8(s->substr(0, 1));
  v19->set_f_1(0x7c);
  Message0::M8::M23* v20 = v19->mutable_f_30();
  v20->set_f_0(0x4e62442b7582afba);
  v19->set_f_10(false);
  v19->set_f_2(0x1a53);
  Message0::M8::M22* v21_0 = v19->add_f_28();
  v21_0->set_f_19(0x2237);
  v21_0->set_f_1(false);
  v21_0->set_f_21(s->substr(0, 1));
  v21_0->set_f_12(0x480971e);
  v21_0->set_f_20(s->substr(0, 19));
  v21_0->set_f_17(s->substr(0, 28));
  v21_0->set_f_8(0x78a1cde);
  v21_0->set_f_29(0x22fda12c57bc2c44);
  v21_0->set_f_24(0x1d5955);
  v21_0->set_f_4(true);
  v21_0->set_f_14(0x5f185c0c6e5e203c);
  v21_0->set_f_13(0x8);
  v21_0->set_f_27(0x4d28d455f9c4fced);
  v21_0->set_f_15(s->substr(0, 6));
  v21_0->set_f_10(0x3af9f14a60e8fe4e);
  v21_0->set_f_9(0x6c0290e22);
  v21_0->set_f_2(true);
  v21_0->set_f_25(true);
  v21_0->set_f_11(s->substr(0, 489));
  v21_0->set_f_16(s->substr(0, 1));
  v21_0->set_f_6(0x18);
  v21_0->set_f_0(0x39);
  v21_0->set_f_18(0x4a763d1dc38a676f);
  v21_0->set_f_30(0x4a5abda2a12def20);
  v19->set_f_3(0x5ba87ea60677f98e);
  v19->set_f_7(0x18ab9a68b8bb92f7);
  v19->set_f_11(false);
  v19->set_f_6(false);
  v19->set_f_5(0x42a593e);
  v19->set_f_4(0x2);
  Message0::M8::M13* v22 = v19->mutable_f_26();
  v22->set_f_1(0x3e);
  Message0::M8::M13::M49* v23 = v22->mutable_f_6();
  v23->set_f_0(s->substr(0, 17));
  v23->set_f_1(0x1b);
  Message0::M8::M13::M49::M58* v24 = v23->mutable_f_5();
  v24->set_f_1(0x26);
  v24->set_f_2(false);
  v24->set_f_3(s->substr(0, 6));
  v22->set_f_0(0x73);
  v22->set_f_2(0x7b023595b6c3c405);
  message->add_f_28(0x64);
  message->set_f_10(0x302c93dd3bd82907);
  message->set_f_1(0x1b3d421c24246c87);
  message->set_f_25(0x1f98);
  message->set_f_16(0x307817c259841bef);
  message->set_f_23(0x2a8fd716175db21d);
  message->set_f_18(0.379585);
  message->set_f_12(s->substr(0, 112));
  message->set_f_20(0xc3ff8fb);
  Message0::M1* v25 = message->mutable_f_50();
  Message0::M1::M26* v26 = v25->mutable_f_5();
  Message0::M1::M26::M31* v27_0 = v26->add_f_2();
  v27_0->set_f_0(0x320c4a6);
  v26->set_f_0(0x162ed12d832c1b55);
  Message0::M1::M20* v28 = v25->mutable_f_3();
  Message0::M1::M20::M51* v29 = v28->mutable_f_7();
  (void)v29;  // Suppresses clang-tidy.
  v28->set_f_1(0x182c161f617006a5);
  message->set_f_22(0x5debff62);
  Message0::M4* v30 = message->mutable_f_54();
  v30->set_f_0(0x6f);
  Message0::M4::M21* v31_0 = v30->add_f_7();
  Message0::M4::M21::M40* v32 = v31_0->mutable_f_6();
  (void)v32;  // Suppresses clang-tidy.
  v31_0->set_f_2(0xd824b4);
  v31_0->set_f_1(s->substr(0, 7));
  v31_0->set_f_0(true);
  Message0::M4::M17* v33 = v30->mutable_f_2();
  v33->set_f_1(false);
  v33->set_f_0(0x48c7dfcbe124f1a9);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_14(0x7c751476e74c48ca);
  Message0::M8* v0 = message->mutable_f_58();
  v0->set_f_7(0xbf5d18b725150cc);
  v0->set_f_4(0x4f);
  v0->set_f_0(s->substr(0, 210));
  Message0::M8::M23* v1 = v0->mutable_f_30();
  v1->set_f_0(0x5e57596eced53631);
  v0->set_f_2(0x55);
  Message0::M8::M22* v2_0 = v0->add_f_28();
  v2_0->set_f_25(false);
  v2_0->set_f_16(s->substr(0, 20));
  v2_0->set_f_6(0x1bf9);
  v2_0->set_f_17(s->substr(0, 3));
  v2_0->set_f_19(0x59);
  v2_0->set_f_13(0xacd30ed);
  v2_0->set_f_26(0.870012);
  v2_0->set_f_15(s->substr(0, 120));
  v2_0->set_f_23(0x73);
  v2_0->set_f_7(0x77fb8285af4030c2);
  v2_0->set_f_14(0x3b65dd594ed47e1c);
  v2_0->set_f_8(0x592);
  v2_0->set_f_1(true);
  v2_0->set_f_11(s->substr(0, 121));
  v2_0->set_f_21(s->substr(0, 10));
  v2_0->set_f_0(0x2185);
  v2_0->set_f_2(true);
  v2_0->set_f_27(0x63e2ab1f32af88fb);
  v2_0->set_f_28(0xe44a346);
  v2_0->set_f_4(true);
  v2_0->set_f_20(s->substr(0, 25));
  v0->set_f_3(0x3d52c2ca1e4e7592);
  v0->set_f_6(false);
  Message0::M8::M13* v3 = v0->mutable_f_26();
  (void)v3;  // Suppresses clang-tidy.
  v0->set_f_9(s->substr(0, 61));
  v0->set_f_12(0xbfb685f);
  v0->set_f_10(true);
  v0->set_f_8(s->substr(0, 122));
  Message0::M2* v4 = message->mutable_f_52();
  Message0::M2::M19* v5_0 = v4->add_f_7();
  v5_0->set_f_0(s->substr(0, 29));
  Message0::M2::M10* v6 = v4->mutable_f_3();
  v6->set_f_0(0xd33502b);
  v4->set_f_0(s->substr(0, 7));
  Message0::M2::M15* v7 = v4->mutable_f_6();
  v7->set_f_1(0x25);
  v7->set_f_4(0x78);
  v7->set_f_0(0x36bc);
  v7->set_f_3(s->substr(0, 6));
  v7->set_f_2(0x1b7d42166e14515e);
  message->set_f_3(s->substr(0, 28));
  message->set_f_20(0x3618);
  message->set_f_18(0.237306);
  Message0::M1* v8 = message->mutable_f_50();
  Message0::M1::M26* v9 = v8->mutable_f_5();
  Message0::M1::M26::M31* v10_0 = v9->add_f_2();
  v10_0->set_f_0(0x1bf0);
  v9->set_f_0(0x1cbdf60dee8c3bb7);
  Message0::M1::M26::M44* v11_0 = v9->add_f_4();
  Message0::M1::M26::M44::M64* v12 = v11_0->mutable_f_6();
  v12->set_f_0(true);
  v11_0->set_f_1(0x448068a);
  v11_0->set_f_0(0.771305);
  v8->set_f_0(s->substr(0, 32));
  Message0::M1::M20* v13 = v8->mutable_f_3();
  v13->set_f_2(s->substr(0, 26));
  v13->set_f_1(0x7d9b1fba37bfa2be);
  Message0::M1::M29* v14 = v8->mutable_f_6();
  Message0::M1::M29::M34* v15 = v14->mutable_f_4();
  v15->set_f_2(s->substr(0, 1));
  v15->set_f_3(0x3fa11882);
  v15->add_f_1(Message0::M1::M29::M34::E2_CONST_4);
  Message0::M1::M29::M32* v16_0 = v14->add_f_2();
  v16_0->set_f_1(0x6428d480a52bb3d8);
  v16_0->set_f_2(s->substr(0, 2));
  v16_0->set_f_0(s->substr(0, 55));
  message->set_f_26(0x18b9a0523e567b39);
  message->set_f_6(s->substr(0, 24));
  message->set_f_1(0x1aee28f983a11bfd);
  message->set_f_27(false);
  message->set_f_11(0x755e20b4b);
  message->set_f_10(0x579837c9eca0c1ef);
  message->set_f_17(s->substr(0, 1));
  message->add_f_28(0x52);
  message->set_f_24(0x110419);
  message->set_f_25(0x67);
  message->set_f_22(0x17dfb980);
  message->set_f_7(0x6a);
  message->set_f_8(false);
  message->set_f_21(0xebcc7e9cbbc38e9);
  message->set_f_9(0x71ad968b7af7b3f2);
  Message0::M4* v17 = message->mutable_f_54();
  Message0::M4::M21* v18_0 = v17->add_f_7();
  v18_0->set_f_0(false);
  Message0::M4::M21::M40* v19 = v18_0->mutable_f_6();
  v19->set_f_0(false);
  Message0::M4::M17* v20 = v17->mutable_f_2();
  v20->set_f_1(false);
  Message0::M4::M18* v21 = v17->mutable_f_4();
  v21->set_f_1(true);
  v17->set_f_0(0x1b97e2);
  message->set_f_4(0x36003f90);
  message->set_f_29(s->substr(0, 19));
  message->set_f_12(s->substr(0, 19));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_27(true);
  message->set_f_6(s->substr(0, 115));
  message->set_f_5(0x1e);
  message->set_f_26(0x5b233beec0e2ac9);
  message->set_f_3(s->substr(0, 27));
  message->set_f_4(0x6ae3bec5);
  message->set_f_11(0x68e14f8a);
  Message0::M3* v0 = message->mutable_f_53();
  v0->set_f_1(0x3bb7834bd70bc624);
  v0->set_f_3(false);
  v0->set_f_2(0xefe7425);
  v0->set_f_9(0x79a2eae5);
  v0->set_f_5(s->substr(0, 31));
  v0->set_f_10(s->substr(0, 6));
  v0->set_f_7(s->substr(0, 13));
  Message0::M4* v1 = message->mutable_f_54();
  Message0::M4::M21* v2_0 = v1->add_f_7();
  v2_0->set_f_1(s->substr(0, 400));
  v2_0->set_f_0(true);
  v2_0->set_f_2(0x22);
  Message0::M4::M21::M40* v3 = v2_0->mutable_f_6();
  v3->set_f_0(true);
  v1->set_f_0(0xaf35744);
  Message0::M4::M17* v4 = v1->mutable_f_2();
  v4->set_f_0(0x3ed37be6e58f49b8);
  v4->set_f_1(true);
  Message0::M4::M18* v5 = v1->mutable_f_4();
  v5->set_f_1(false);
  v5->set_f_0(0x369fa8f05611f8c0);
  message->add_f_28(0x13);
  Message0::M7* v6 = message->mutable_f_57();
  Message0::M7::M28* v7_0 = v6->add_f_10();
  Message0::M7::M28::M37* v8 = v7_0->mutable_f_4();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M7::M28::M33* v9_0 = v7_0->add_f_3();
  Message0::M7::M28::M33::M62* v10_0 = v9_0->add_f_11();
  v10_0->set_f_0(0x47a8c8057f615f4);
  v9_0->set_f_3(s->substr(0, 21));
  v9_0->set_f_1(0x20a7);
  v9_0->set_f_0(s->substr(0, 24));
  Message0::M7::M11* v11_0 = v6->add_f_2();
  v11_0->set_f_0(0x329f317792d7b8d2);
  Message0::M7::M11::M41* v12_0 = v11_0->add_f_5();
  Message0::M7::M11::M41::M57* v13 = v12_0->mutable_f_5();
  (void)v13;  // Suppresses clang-tidy.
  Message0::M7::M14* v14_0 = v6->add_f_6();
  Message0::M7::M14::M38* v15 = v14_0->mutable_f_4();
  v15->set_f_0(s->substr(0, 7));
  Message0::M7::M14::M42* v16 = v14_0->mutable_f_5();
  v16->set_f_2(0x2963);
  v16->set_f_1(0x5c5118604438fb7d);
  v16->add_f_0(Message0::M7::M14::M42::E4_CONST_3);
  v14_0->set_f_0(0x2f);
  Message0::M7::M25* v17 = v6->mutable_f_9();
  Message0::M7::M25::M47* v18 = v17->mutable_f_4();
  v18->set_f_1(s->substr(0, 14));
  v18->set_f_2(true);
  v18->set_f_0(true);
  v17->set_f_0(0x5e19eac);
  Message0::M7::M12* v19_0 = v6->add_f_5();
  v19_0->add_f_1(0x39);
  v19_0->set_f_2(0x58415986);
  v19_0->set_f_0(0x40);
  Message0::M7::M16* v20_0 = v6->add_f_7();
  v20_0->set_f_2(s->substr(0, 31));
  v6->set_f_0(s->substr(0, 4));
  message->set_f_12(s->substr(0, 3));
  message->set_f_17(s->substr(0, 3));
  Message0::M5* v21_0 = message->add_f_55();
  v21_0->set_f_0(s->substr(0, 127));
  message->set_f_0(0x1a6607e3);
  message->set_f_18(0.386282);
  message->set_f_7(0x40842d9a6);
  message->set_f_1(0x3501bb5889f04e09);
  message->set_f_16(0x37f3d74a8df62455);
  message->set_f_8(false);
  Message0::M6* v22 = message->mutable_f_56();
  v22->set_f_1(0x6a);
  v22->set_f_2(0x7ba07616ba214aeb);
  message->set_f_25(0x63);
  message->set_f_24(0x2);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_12(s->substr(0, 4));
  message->set_f_18(0.314733);
  message->set_f_11(0x5d);
  message->set_f_7(0x19e4188528f54);
  message->set_f_10(0x409372e20e0e0062);
  message->set_f_6(s->substr(0, 16));
  message->set_f_17(s->substr(0, 30));
  Message0::M7* v0 = message->mutable_f_57();
  Message0::M7::M25* v1 = v0->mutable_f_9();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M7::M12* v2_0 = v0->add_f_5();
  v2_0->add_f_1(0x2c);
  v2_0->set_f_2(0x6f828c71);
  Message0::M7::M12::M50* v3 = v2_0->mutable_f_7();
  v3->set_f_16(0x2f13eaa27b2);
  v3->set_f_26(s->substr(0, 7));
  v3->add_f_7(Message0::M7::M12::M50::E5_CONST_2);
  v3->set_f_23(0x1f4a96be369);
  v3->add_f_11(Message0::M7::M12::M50::E6_CONST_5);
  v3->set_f_9(s->substr(0, 27));
  v3->set_f_24(false);
  v3->set_f_8(s->substr(0, 31));
  Message0::M7::M12::M50::E7 array_0[10] = {
      Message0::M7::M12::M50::E7_CONST_3, Message0::M7::M12::M50::E7_CONST_1,
      Message0::M7::M12::M50::E7_CONST_4, Message0::M7::M12::M50::E7_CONST_2,
      Message0::M7::M12::M50::E7_CONST_3, Message0::M7::M12::M50::E7_CONST_2,
      Message0::M7::M12::M50::E7_CONST_1, Message0::M7::M12::M50::E7_CONST_4,
      Message0::M7::M12::M50::E7_CONST_5, Message0::M7::M12::M50::E7_CONST_4,
  };
  for (auto v : array_0) {
    v3->add_f_17(v);
  }
  v3->set_f_1(s->substr(0, 6));
  v3->set_f_10(0xf3c3f462a68ec9f);
  v3->set_f_3(s->substr(0, 437));
  v3->set_f_4(s->substr(0, 30));
  v3->set_f_14(0x4a9);
  v3->set_f_22(0x5cafbc426bbdd17d);
  v3->set_f_0(true);
  v3->set_f_28(0x525fa8361570f358);
  v3->set_f_5(0x63d8168);
  v3->set_f_20(0x6cb5e5b7c39cca76);
  v3->set_f_25(0x7b2a79cd21a8a422);
  v3->set_f_21(0x7e1bc92b3cfce95);
  v3->set_f_2(0x3eed1c1e3959d13f);
  v3->set_f_12(0x340c610c7);
  v3->set_f_27(s->substr(0, 4));
  v2_0->set_f_0(0x1762dc7);
  Message0::M7::M11* v4_0 = v0->add_f_2();
  v4_0->set_f_0(0x68344d635f3602e);
  Message0::M7::M11::M41* v5_0 = v4_0->add_f_5();
  v5_0->set_f_0(s->substr(0, 1389));
  v4_0->set_f_2(0x755982548885dc64);
  v4_0->set_f_1(false);
  Message0::M7::M14* v6_0 = v0->add_f_6();
  v6_0->set_f_0(0x59ec317);
  Message0::M7::M14::M42* v7 = v6_0->mutable_f_5();
  v7->add_f_0(Message0::M7::M14::M42::E4_CONST_5);
  v7->set_f_2(0x4a);
  Message0::M7::M14::M38* v8 = v6_0->mutable_f_4();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M7::M28* v9_0 = v0->add_f_10();
  Message0::M7::M28::M37* v10 = v9_0->mutable_f_4();
  v10->set_f_0(0x2a);
  Message0::M7::M28::M33* v11_0 = v9_0->add_f_3();
  v11_0->set_f_1(0x41);
  Message0::M7::M28::M33::M62* v12_0 = v11_0->add_f_11();
  v12_0->set_f_0(0x12b2e78ad0264d19);
  v11_0->set_f_3(s->substr(0, 12));
  Message0::M7::M28::M33::M52* v13 = v11_0->mutable_f_9();
  v13->set_f_0(false);
  Message0::M7::M28::M33::M52::M66* v14 = v13->mutable_f_5();
  v14->set_f_0(0.617505);
  Message0::M7::M28::M33::M65* v15 = v11_0->mutable_f_12();
  v15->set_f_0(0x12f097);
  v0->set_f_0(s->substr(0, 29));
  Message0::M1* v16 = message->mutable_f_50();
  Message0::M1::M29* v17 = v16->mutable_f_6();
  Message0::M1::M29::M34* v18 = v17->mutable_f_4();
  Message0::M1::M29::M34::M53* v19 = v18->mutable_f_7();
  v19->set_f_0(false);
  v19->set_f_1(0x1d);
  Message0::M1::M29::M34::E2 array_1[14] = {
      Message0::M1::M29::M34::E2_CONST_4, Message0::M1::M29::M34::E2_CONST_4,
      Message0::M1::M29::M34::E2_CONST_1, Message0::M1::M29::M34::E2_CONST_2,
      Message0::M1::M29::M34::E2_CONST_3, Message0::M1::M29::M34::E2_CONST_1,
      Message0::M1::M29::M34::E2_CONST_5, Message0::M1::M29::M34::E2_CONST_1,
      Message0::M1::M29::M34::E2_CONST_2, Message0::M1::M29::M34::E2_CONST_5,
      Message0::M1::M29::M34::E2_CONST_4, Message0::M1::M29::M34::E2_CONST_2,
      Message0::M1::M29::M34::E2_CONST_1, Message0::M1::M29::M34::E2_CONST_4,
  };
  for (auto v : array_1) {
    v18->add_f_1(v);
  }
  Message0::M1::M29::M34::M54* v20_0 = v18->add_f_8();
  v20_0->set_f_0(0x2d);
  v18->set_f_0(s->substr(0, 10));
  v17->set_f_0(0x3290);
  Message0::M1::M29::M32* v21_0 = v17->add_f_2();
  v21_0->set_f_2(s->substr(0, 20));
  v21_0->set_f_0(s->substr(0, 19));
  Message0::M1::M9* v22 = v16->mutable_f_2();
  v22->set_f_0(0x5a845d8fe1ae4e18);
  v22->set_f_5(0x28081e928866a17a);
  v22->set_f_1(0x33daa3f79fad4ecb);
  Message0::M1::M9::M46* v23 = v22->mutable_f_20();
  v23->set_f_0(s->substr(0, 430));
  v22->set_f_3(s->substr(0, 1));
  v22->set_f_6(s->substr(0, 3948));
  Message0::M1::M9::M45* v24_0 = v22->add_f_17();
  (void)v24_0;  // Suppresses clang-tidy.
  v16->set_f_0(s->substr(0, 31));
  Message0::M1::M26* v25 = v16->mutable_f_5();
  Message0::M1::M26::M44* v26_0 = v25->add_f_4();
  v26_0->set_f_0(0.269780);
  Message0::M5* v27_0 = message->add_f_55();
  v27_0->set_f_0(s->substr(0, 15));
  Message0::M5::M30* v28_0 = v27_0->add_f_5();
  v28_0->set_f_3(0x70);
  v28_0->set_f_1(0x6c33c8c13a777002);
  v28_0->set_f_2(true);
  v28_0->set_f_0(0x50d13616dac5fd5c);
  message->set_f_2(0x61ce86154189ef4d);
  message->set_f_14(0x5bc885df644f5952);
  message->set_f_23(0x1494708772045334);
  Message0::M3* v29 = message->mutable_f_53();
  v29->set_f_4(0x8a5853e);
  v29->set_f_0(0x1);
  v29->set_f_10(s->substr(0, 6));
  v29->set_f_7(s->substr(0, 14));
  v29->set_f_1(0x68334d1b6900e4a5);
  v29->set_f_3(false);
  Message0::M8* v30 = message->mutable_f_58();
  v30->set_f_10(true);
  v30->set_f_12(0x35);
  Message0::M8::M13* v31 = v30->mutable_f_26();
  v31->set_f_1(0x3f81);
  v31->set_f_0(0xd42);
  v30->set_f_9(s->substr(0, 144));
  v30->set_f_1(0x1af00a);
  Message0::M8::M22* v32_0 = v30->add_f_28();
  v32_0->set_f_22(0.256695);
  v32_0->set_f_7(0x11871b1209c498bf);
  v32_0->set_f_24(0x4d);
  v32_0->set_f_14(0x153c896505d772ef);
  v32_0->set_f_10(0x36b9513f01554006);
  v32_0->set_f_25(true);
  v32_0->set_f_20(s->substr(0, 5));
  v32_0->set_f_26(0.135005);
  v32_0->set_f_4(true);
  v32_0->set_f_0(0x16);
  v32_0->set_f_1(false);
  v32_0->set_f_8(0x64);
  v32_0->set_f_30(0x2542125f9ee25fae);
  v32_0->set_f_3(0x109a0b5a129795e9);
  v32_0->set_f_15(s->substr(0, 2));
  v32_0->set_f_2(true);
  v32_0->set_f_11(s->substr(0, 28));
  v32_0->set_f_29(0xc60cda9a0fdcc3a);
  v32_0->set_f_28(0x51);
  v32_0->set_f_23(0x14);
  Message0::M8::M23* v33 = v30->mutable_f_30();
  v33->set_f_0(0x3145b5f703c37d2e);
  v30->set_f_11(false);
  v30->set_f_6(true);
  Message0::M8::M27* v34_0 = v30->add_f_32();
  v34_0->set_f_9(0x3ebaf55c6b1875d3);
  v34_0->set_f_8(0x8595896);
  v34_0->set_f_10(s->substr(0, 17));
  v34_0->set_f_4(0x3e);
  v34_0->set_f_0(0x7ec29e7);
  v34_0->set_f_11(s->substr(0, 1));
  v34_0->set_f_5(0x7a8bdaf9e8e9418c);
  v34_0->set_f_6(0x17d020a9ebdd8d8e);
  v34_0->set_f_3(s->substr(0, 106));
  v30->set_f_2(0xfabab53);
  v30->set_f_3(0x384a9fc8a465e1a5);
  v30->set_f_0(s->substr(0, 28));
  v30->set_f_8(s->substr(0, 20));
  v30->set_f_4(0x9dd);
  Message0::M4* v35 = message->mutable_f_54();
  Message0::M4::M17* v36 = v35->mutable_f_2();
  v36->set_f_0(0x7f581c92aea0e567);
  v36->set_f_1(true);
  Message0::M4::M18* v37 = v35->mutable_f_4();
  v37->set_f_0(0x645bbe0b0392a02);
  v37->set_f_1(false);
  v35->set_f_0(0x44);
  Message0::M4::M21* v38_0 = v35->add_f_7();
  v38_0->set_f_2(0x41ccf41);
  v38_0->set_f_0(true);
  v38_0->set_f_1(s->substr(0, 385));
  Message0::M4::M21::M40* v39 = v38_0->mutable_f_6();
  v39->set_f_0(false);
  Message0::M6* v40 = message->mutable_f_56();
  v40->set_f_4(0x3dcddb52a2f90711);
  v40->set_f_0(0x30980c18165a2aa3);
  v40->set_f_1(0x1f83e7);
  message->set_f_27(true);
  message->set_f_29(s->substr(0, 30));
  message->set_f_4(0x2d0e63ef);
  message->set_f_22(0x2968f83b);
  message->set_f_21(0x6167224dd6559095);
  message->set_f_5(0x2f);
  message->set_f_0(0x132ae04d);
  message->set_f_24(0x3e);
  message->set_f_3(s->substr(0, 6));
  message->set_f_19(s->substr(0, 20));
  message->set_f_26(0x681a320f868e823f);
  message->set_f_8(true);
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
}  // namespace fleetbench::rpc::P2::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE0_H_
