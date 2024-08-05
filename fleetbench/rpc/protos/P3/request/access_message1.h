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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message1.pb.h"

namespace fleetbench::rpc::P3::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_26(s->substr(0, 6));
  message->set_f_2(s->substr(0, 3));
  message->set_f_17(0x6129145c5dead689);
  message->set_f_6(true);
  message->set_f_4(0x64);
  message->set_f_22(s->substr(0, 7));
  Message1::M1* v0 = message->mutable_f_55();
  v0->set_f_0(s->substr(0, 2));
  Message1::M1::M15* v1 = v0->mutable_f_8();
  Message1::M1::M15::M88* v2 = v1->mutable_f_2();
  v2->set_f_0(0x4e1cc01001208575);
  Message1::M1::M15::M88::M108* v3 = v2->mutable_f_3();
  Message1::M1::M15::M88::M108::M109* v4_0 = v3->add_f_4();
  v4_0->set_f_0(0x10ba3a45);
  Message1::M1::M15::M88::M108::M118* v5 = v3->mutable_f_7();
  v5->set_f_3(0x3d43303ed9dcc003);
  v5->set_f_0(false);
  v3->set_f_1(s->substr(0, 2));
  Message1::M1::M32* v6 = v0->mutable_f_17();
  v6->set_f_0(0x90a159f);
  v6->set_f_2(0x1b);
  Message1::M1::M17* v7 = v0->mutable_f_9();
  v7->set_f_0(Message1::M1::M17::E3_CONST_2);
  Message1::M1::M25* v8 = v0->mutable_f_14();
  v8->set_f_1(0x2b);
  v8->set_f_3(0x1ad2f0e0585b0307);
  Message1::M1::M25::M73* v9_0 = v8->add_f_6();
  v9_0->set_f_0(s->substr(0, 38));
  v8->set_f_4(0x41e2b7eba1c58db1);
  v8->set_f_0(Message1::M1::M25::E5_CONST_2);
  v8->set_f_2(0x6072f75c);
  Message1::M1::M36* v10 = v0->mutable_f_18();
  Message1::M1::M36::M70* v11 = v10->mutable_f_2();
  v11->set_f_3(0x221fff1241396a80);
  v11->set_f_1(0xa6781);
  v11->set_f_13(0x1340dee7);
  v11->set_f_0(s->substr(0, 55));
  v11->set_f_15(false);
  v11->set_f_9(0x6);
  v11->set_f_4(0x31);
  v11->set_f_5(0x6);
  v11->set_f_14(0x419dd55e535d710f);
  v11->set_f_12(0x73b27ca85c97b392);
  v11->add_f_10(Message1::M1::M36::M70::E8_CONST_1);
  v11->set_f_2(0xa2d3228);
  Message1::M1::M30* v12 = v0->mutable_f_16();
  (void)v12;  // Suppresses clang-tidy.
  Message1::M2* v13_0 = message->add_f_56();
  Message1::M2::M11* v14 = v13_0->mutable_f_5();
  Message1::M2::M11::M56* v15 = v14->mutable_f_2();
  (void)v15;  // Suppresses clang-tidy.
  v14->set_f_0(true);
  Message1::M2::M37* v16 = v13_0->mutable_f_10();
  (void)v16;  // Suppresses clang-tidy.
  Message1::M2::M19* v17_0 = v13_0->add_f_6();
  v17_0->set_f_1(s->substr(0, 3));
  v17_0->set_f_3(0x521f10080ca731ab);
  Message1::M2::M34* v18 = v13_0->mutable_f_9();
  Message1::M2::M34::M97* v19 = v18->mutable_f_4();
  (void)v19;  // Suppresses clang-tidy.
  Message1::M2::M34::M67* v20 = v18->mutable_f_3();
  v20->set_f_1(0x1d);
  v20->set_f_3(0x4170863f93209007);
  v20->set_f_2(false);
  v18->set_f_0(0x3e245ddc0ef70db6);
  message->set_f_23(0x77);
  message->set_f_28(s->substr(0, 1));
  message->set_f_25(0x4ff5ef9765f50e41);
  Message1::M4* v21_0 = message->add_f_58();
  v21_0->set_f_10(s->substr(0, 26));
  Message1::M4::M40* v22 = v21_0->mutable_f_46();
  v22->set_f_18(0x459f6aa91c11a1ae);
  v22->set_f_14(0x1c004);
  v22->set_f_19(s->substr(0, 76));
  v22->set_f_16(0x32991752);
  v22->set_f_9(0x84bd672);
  v22->set_f_25(0x4c);
  v22->set_f_4(0x65c661885eca5969);
  v22->set_f_17(0x75);
  v22->set_f_12(0x5db2bb01931c4708);
  v22->set_f_20(0x5b0f6121a84d7cfe);
  v22->set_f_11(0x3f);
  v22->set_f_6(0x607967ed8730a80f);
  v22->set_f_21(0x69);
  v22->set_f_28(0x51587916);
  v22->set_f_2(0x2035177e9fdbb0a4);
  Message1::M4::M40::M98* v23_0 = v22->add_f_47();
  (void)v23_0;  // Suppresses clang-tidy.
  v22->set_f_0(false);
  v22->set_f_24(0x59);
  v21_0->set_f_29(0x2a58257b);
  Message1::M4::M46* v24 = v21_0->mutable_f_51();
  v24->set_f_1(0x6d);
  Message1::M4::M46::M91* v25 = v24->mutable_f_9();
  v25->set_f_0(0x60300627);
  v24->set_f_2(0x72);
  v24->set_f_0(s->substr(0, 8));
  Message1::M4::M33* v26 = v21_0->mutable_f_45();
  v26->set_f_0(0xca6c264d45776c5);
  v21_0->set_f_21(0x8);
  Message1::M4::M27* v27 = v21_0->mutable_f_42();
  v27->set_f_0(0x4a0ff6a922333180);
  v21_0->set_f_1(0x80c7f69);
  v21_0->set_f_14(0x72c968ec4e77fe5e);
  v21_0->set_f_17(false);
  v21_0->set_f_13(0x5c9c5be283ac50e3);
  v21_0->set_f_11(0x863e5cb);
  v21_0->set_f_18(0x26);
  v21_0->set_f_28(0x7e163fb939b603e9);
  v21_0->set_f_7(0x1ad99abb94344fce);
  v21_0->set_f_6(0x65f3c31387376751);
  Message1::M4::M47* v28 = v21_0->mutable_f_52();
  Message1::M4::M47::M87* v29 = v28->mutable_f_7();
  v29->set_f_1(0x74aa2ca86d1930c2);
  v29->set_f_2(false);
  v28->set_f_0(0xe1a6849);
  v21_0->set_f_22(s->substr(0, 87));
  Message1::M4::M31* v30 = v21_0->mutable_f_43();
  v30->set_f_0(s->substr(0, 2));
  v30->add_f_1(Message1::M4::M31::E6_CONST_2);
  v30->set_f_3(0x1e9d);
  v21_0->add_f_5(0x1dcb6);
  v21_0->set_f_4(0x7a);
  Message1::M4::M13* v31_0 = v21_0->add_f_40();
  v31_0->set_f_2(0x1905);
  v31_0->set_f_4(s->substr(0, 4));
  message->set_f_7(0x18d9);
  message->set_f_13(0xf46c708);
  message->set_f_16(0x3b64b5c4c08ec9f1);
  message->set_f_30(0x746089016c92a4f7);
  message->set_f_5(0x5fc3ecc);
  message->set_f_19(0x33f8);
  message->set_f_27(0x3b08ddf);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_7(0x2a);
  message->set_f_21(0x25639deb4e3aa013);
  message->set_f_31(s->substr(0, 6));
  Message1::M2* v0_0 = message->add_f_56();
  Message1::M2::M34* v1 = v0_0->mutable_f_9();
  v1->set_f_0(0x47221fbd2eff2f3a);
  Message1::M2::M37* v2 = v0_0->mutable_f_10();
  v2->set_f_0(s->substr(0, 29));
  Message1::M2::M19* v3_0 = v0_0->add_f_6();
  v3_0->set_f_3(0x31d869eb7d3c71e3);
  v3_0->set_f_1(s->substr(0, 56));
  Message1::M2::M19::M66* v4 = v3_0->mutable_f_9();
  v4->set_f_0(s->substr(0, 32));
  v4->set_f_1(0x27272d3bb6c5c844);
  v3_0->set_f_0(s->substr(0, 3));
  message->set_f_10(false);
  message->set_f_5(0x35bc689);
  message->set_f_18(s->substr(0, 8));
  message->set_f_19(0x28);
  message->set_f_30(0x6ac0a1055664bcf1);
  message->set_f_16(0x7adf6f8ec85e3c41);
  Message1::M5* v5 = message->mutable_f_60();
  Message1::M5::M14* v6 = v5->mutable_f_9();
  v6->set_f_13(true);
  v6->set_f_2(0x71);
  v6->set_f_7(s->substr(0, 1));
  v6->set_f_14(0x46);
  Message1::M5::M14::M63* v7_0 = v6->add_f_38();
  v7_0->set_f_0(0xa98b2fc);
  v6->set_f_21(0xb);
  v6->set_f_6(0x48);
  v6->set_f_5(0x1fa2698);
  v6->set_f_3(0x110a);
  v6->set_f_1(s->substr(0, 57));
  v6->set_f_9(true);
  Message1::M5::M24* v8 = v5->mutable_f_11();
  Message1::M5::M24::M90* v9 = v8->mutable_f_9();
  v9->set_f_3(0x59975be29c015560);
  v9->set_f_5(0x6e4b08a6eeb60a05);
  v9->add_f_2(s->substr(0, 2));
  v8->set_f_1(s->substr(0, 3202));
  Message1::M5::M24::M96* v10_0 = v8->add_f_11();
  v10_0->set_f_9(s->substr(0, 29));
  v10_0->set_f_13(0x5ffe2830251ee0a);
  v10_0->set_f_10(0x32168e52d34942d4);
  v10_0->set_f_14(s->substr(0, 3));
  v10_0->set_f_7(false);
  v10_0->add_f_5(Message1::M5::M24::M96::E11_CONST_3);
  v10_0->set_f_4(0x3f39ee3);
  v10_0->set_f_15(s->substr(0, 23));
  v10_0->set_f_2(0x2db61de928ffa78f);
  Message1::M5::M28* v11_0 = v5->add_f_13();
  Message1::M5::M28::M59* v12 = v11_0->mutable_f_4();
  v12->set_f_0(s->substr(0, 21));
  v12->set_f_2(s->substr(0, 2));
  Message1::M5::M39* v13 = v5->mutable_f_18();
  Message1::M5::M39::M84* v14_0 = v13->add_f_4();
  v14_0->set_f_0(0x48933c91a7dd685e);
  v13->set_f_0(0x9a45ea9);
  Message1::M5::M7* v15_0 = v5->add_f_8();
  v15_0->set_f_4(s->substr(0, 1721));
  v15_0->set_f_5(0x20);
  v15_0->set_f_3(0x4857af93);
  v15_0->set_f_1(0x15e3e1);
  Message1::M5::M7::M79* v16 = v15_0->mutable_f_11();
  v16->set_f_0(0x3b08f50e6436392c);
  Message1::M5::M23* v17 = v5->mutable_f_10();
  Message1::M5::M23::M57* v18_0 = v17->add_f_4();
  v18_0->set_f_1(s->substr(0, 6));
  message->set_f_26(s->substr(0, 23));
  message->set_f_25(0x5c08fa63e00387a0);
  message->set_f_4(0xfc8c6af);
  message->set_f_11(s->substr(0, 2464));
  message->set_f_24(0x5e2197d7e1fbaebd);
  Message1::M4* v19_0 = message->add_f_58();
  v19_0->set_f_9(0x652c4b44);
  Message1::M4::M33* v20 = v19_0->mutable_f_45();
  v20->set_f_0(0x65d5648caa349ac8);
  v20->set_f_2(0x3d);
  v19_0->set_f_18(0x4d7a8);
  v19_0->set_f_1(0x14c87a9);
  Message1::M4::M40* v21 = v19_0->mutable_f_46();
  v21->set_f_3(s->substr(0, 24));
  v21->set_f_11(0x2d);
  v21->set_f_21(0xef1fda7);
  v21->set_f_23(0x12);
  v21->set_f_2(0x56acc0f2616d965a);
  v21->set_f_25(0x19);
  v21->set_f_18(0x430986ba616656c0);
  v21->set_f_20(0x366b0b38259d4a57);
  v21->set_f_22(0x1c);
  v21->set_f_26(s->substr(0, 167));
  Message1::M4::M40::M98* v22_0 = v21->add_f_47();
  (void)v22_0;  // Suppresses clang-tidy.
  v21->set_f_5(0x1dfd32);
  v21->set_f_0(false);
  v21->set_f_15(0xf7c);
  v21->set_f_6(0x3bdfb29262ef92c);
  Message1::M4::M40::M83* v23 = v21->mutable_f_46();
  v23->set_f_0(0x477e193d17075c2d);
  v21->set_f_17(0x4c);
  v21->set_f_14(0x4c);
  v21->set_f_10(s->substr(0, 6));
  v21->set_f_9(0x63);
  Message1::M4::M13* v24_0 = v19_0->add_f_40();
  v24_0->set_f_0(0xefee466);
  Message1::M4::M13::M65* v25_0 = v24_0->add_f_9();
  v25_0->set_f_1(s->substr(0, 23));
  v24_0->set_f_1(0x55c078f);
  v19_0->set_f_12(0x1aa5818c9a6e7d28);
  Message1::M4::M46* v26 = v19_0->mutable_f_51();
  Message1::M4::M46::M91* v27 = v26->mutable_f_9();
  (void)v27;  // Suppresses clang-tidy.
  v26->set_f_1(0x5);
  v19_0->set_f_14(0x5047d3de4c1366dc);
  Message1::M4::M27* v28 = v19_0->mutable_f_42();
  (void)v28;  // Suppresses clang-tidy.
  v19_0->set_f_8(s->substr(0, 27));
  v19_0->add_f_5(0x802b9d5);
  v19_0->set_f_17(true);
  v19_0->set_f_15(0x11);
  v19_0->set_f_2(true);
  Message1::M4::M31* v29 = v19_0->mutable_f_43();
  v29->set_f_0(s->substr(0, 12));
  Message1::M4::M31::M78* v30 = v29->mutable_f_8();
  v30->set_f_0(0x767ab403d7e965d1);
  v29->add_f_1(Message1::M4::M31::E6_CONST_5);
  v19_0->set_f_24(0x1e4397b);
  v19_0->add_f_20(Message1::M4::E1_CONST_5);
  v19_0->set_f_27(0xca6cb8f77cac79a);
  v19_0->set_f_16(s->substr(0, 103));
  v19_0->set_f_0(0x183a56);
  v19_0->set_f_6(0x93d8292ed4a2948);
  v19_0->set_f_10(s->substr(0, 66));
  Message1::M4::M16* v31 = v19_0->mutable_f_41();
  Message1::M4::M16::M48* v32 = v31->mutable_f_3();
  v32->set_f_0(s->substr(0, 1));
  v19_0->set_f_28(0x77fb90a0b4c8f53e);
  v19_0->set_f_7(0x4eda77ddfad6cf56);
  Message1::M4::M44* v33 = v19_0->mutable_f_50();
  Message1::M4::M44::M68* v34_0 = v33->add_f_3();
  (void)v34_0;  // Suppresses clang-tidy.
  v33->set_f_0(s->substr(0, 23));
  v19_0->set_f_29(0x643d0c2f);
  v19_0->set_f_13(0x654a83dd80804b03);
  v19_0->set_f_25(0x2e3741e2b62a8ba);
  Message1::M4::M43* v35 = v19_0->mutable_f_49();
  v35->set_f_0(0x42773b66c7493ef1);
  Message1::M4::M43::M86* v36_0 = v35->add_f_3();
  v36_0->set_f_0(s->substr(0, 19));
  v35->set_f_1(0x64a2db234e2ede2f);
  v19_0->set_f_3(0x68302750cef898a);
  v19_0->set_f_19(s->substr(0, 45));
  message->set_f_8(0x52);
  message->set_f_23(0x49);
  message->set_f_17(0x59438d3f70d5190);
  message->set_f_12(0xf982ee6);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_10(true);
  message->set_f_31(s->substr(0, 25));
  message->set_f_0(0xd);
  Message1::M3* v0 = message->mutable_f_57();
  Message1::M3::M35* v1 = v0->mutable_f_8();
  Message1::M3::M35::M72* v2 = v1->mutable_f_2();
  v2->set_f_0(0x292f);
  v0->set_f_0(s->substr(0, 106));
  Message1::M3::M6* v3 = v0->mutable_f_4();
  v3->set_f_0(s->substr(0, 462));
  Message1::M3::M12* v4 = v0->mutable_f_5();
  Message1::M3::M12::M94* v5_0 = v4->add_f_2();
  (void)v5_0;  // Suppresses clang-tidy.
  message->set_f_24(0x2fbe3774a591fbe1);
  message->set_f_4(0xbe47641);
  message->set_f_9(false);
  message->set_f_30(0x406c69855e9be83e);
  message->set_f_13(0x58);
  message->set_f_7(0xd659568);
  message->set_f_11(s->substr(0, 646));
  Message1::M4* v6_0 = message->add_f_58();
  v6_0->set_f_6(0x1210d30ff61f5a52);
  v6_0->set_f_26(false);
  v6_0->set_f_17(false);
  v6_0->set_f_18(0xf3f9f1f);
  Message1::M4::M41* v7_0 = v6_0->add_f_47();
  v7_0->set_f_2(s->substr(0, 29));
  v6_0->set_f_4(0x45);
  Message1::M4::M10* v8_0 = v6_0->add_f_39();
  v8_0->set_f_0(s->substr(0, 32));
  v6_0->set_f_14(0x5aee99de962fe522);
  Message1::M4::M16* v9 = v6_0->mutable_f_41();
  v9->set_f_0(0xb4ed133);
  v6_0->set_f_12(0x3127090bee74dbc8);
  v6_0->set_f_28(0x3ed986757d943920);
  v6_0->set_f_16(s->substr(0, 20));
  v6_0->set_f_27(0x31e54e5de45aed0f);
  v6_0->set_f_9(0x5aff37a6);
  v6_0->set_f_7(0x783195b9686a2a00);
  Message1::M4::M43* v10 = v6_0->mutable_f_49();
  Message1::M4::M43::M86* v11_0 = v10->add_f_3();
  v11_0->set_f_0(s->substr(0, 3));
  v10->set_f_0(0x5097937c172efd65);
  v6_0->set_f_29(0x64ac2bcc);
  v6_0->set_f_24(0x104430);
  Message1::M4::M33* v12 = v6_0->mutable_f_45();
  Message1::M4::M33::M75* v13_0 = v12->add_f_8();
  v13_0->set_f_0(0x11c3fd);
  v12->set_f_0(0x7b1f03a72d99cd90);
  v6_0->set_f_15(0x3d);
  v6_0->add_f_20(Message1::M4::E1_CONST_4);
  message->set_f_29(0x4952809c58bd260b);
  message->set_f_20(0xe7f1c);
  message->set_f_1(false);
  message->set_f_26(s->substr(0, 1));
  message->set_f_25(0x79c833190c97e435);
  message->set_f_3(false);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M3* v0 = message->mutable_f_57();
  Message1::M3::M22* v1 = v0->mutable_f_7();
  Message1::M3::M22::M76* v2_0 = v1->add_f_2();
  v2_0->set_f_0(0x545ef80e6074337);
  message->set_f_6(false);
  message->set_f_11(s->substr(0, 5));
  message->set_f_31(s->substr(0, 739));
  message->set_f_17(0x16b2e5eb117736df);
  message->set_f_0(0x6);
  Message1::M4* v3_0 = message->add_f_58();
  v3_0->set_f_27(0x12a4cb81c79c22df);
  v3_0->set_f_22(s->substr(0, 26));
  Message1::M4::M10* v4_0 = v3_0->add_f_39();
  (void)v4_0;  // Suppresses clang-tidy.
  v3_0->set_f_24(0x1c);
  v3_0->set_f_11(0x61);
  v3_0->set_f_25(0x634689ef1df99d49);
  v3_0->set_f_19(s->substr(0, 32));
  v3_0->set_f_3(0x4df7fe2049a39b67);
  Message1::M4::M47* v5 = v3_0->mutable_f_52();
  Message1::M4::M47::M87* v6 = v5->mutable_f_7();
  (void)v6;  // Suppresses clang-tidy.
  v5->set_f_1(0xea011a6);
  v3_0->set_f_10(s->substr(0, 2));
  v3_0->set_f_0(0x6);
  v3_0->set_f_26(false);
  v3_0->set_f_15(0x27);
  Message1::M4::M41* v7_0 = v3_0->add_f_47();
  Message1::M4::M41::M80* v8 = v7_0->mutable_f_9();
  v8->set_f_2(0x22);
  v8->set_f_1(s->substr(0, 22));
  v7_0->set_f_0(0x61);
  v7_0->set_f_2(s->substr(0, 60));
  v7_0->set_f_1(0x70);
  Message1::M4::M31* v9 = v3_0->mutable_f_43();
  Message1::M4::M31::M71* v10 = v9->mutable_f_7();
  v10->set_f_0(s->substr(0, 2));
  v9->set_f_0(s->substr(0, 7));
  int32_t array_0[70] = {
      0x2f,      0xf4399,   0x40e2544, 0x9bb26d1, 0x1d,      0x129a89,
      0xc239263, 0x54,      0x31,      0x69,      0x1baebe,  0x5e,
      0x22,      0xa34f4,   0x73,      0xa,       0x35,      0x1442f2,
      0x72,      0xb834079, 0x64,      0x1c,      0x632c21a, 0x9c000,
      0x14d964,  0x15,      0x153cc3,  0x2079da6, 0x133d8c,  0x6b,
      0xe,       0x6d,      0x20,      0x18,      0xc2db0d2, 0xa2d04f7,
      0xa76f8,   0x65,      0x42,      0x3d,      0x6a,      0xb2823c5,
      0x1a0997,  0x1d,      0x240695b, 0x3fb7f2f, 0xf45e07e, 0x3ef99,
      0x10,      0x3e75af9, 0x219184,  0x3f,      0x3a,      0x190cc7,
      0x9,       0x128d0f,  0x51,      0xb0fd4,   0x4f1a1,   0x8fbd70,
      0x85cd4,   0x5,       0x3b,      0x26dec9e, 0x80a7757, 0x1bd937,
      0x1b1c2f,  0x1c8dc1,  0xfbf1c7f, 0xc58a1,
  };
  for (auto v : array_0) {
    v3_0->add_f_5(v);
  }
  v3_0->set_f_2(true);
  v3_0->set_f_14(0x6084330979f9c273);
  v3_0->set_f_23(0x1b);
  v3_0->set_f_28(0x31fde5031a36223d);
  v3_0->set_f_16(s->substr(0, 16));
  v3_0->set_f_4(0x6);
  v3_0->set_f_6(0x505c1eebeecd71d5);
  message->set_f_23(0x149f);
  message->set_f_18(s->substr(0, 5));
  message->set_f_19(0xb523b39);
  message->set_f_22(s->substr(0, 2));
  message->set_f_29(0x5d1dde121e7f1de6);
  Message1::M5* v11 = message->mutable_f_60();
  Message1::M5::M7* v12_0 = v11->add_f_8();
  Message1::M5::M7::M79* v13 = v12_0->mutable_f_11();
  (void)v13;  // Suppresses clang-tidy.
  v12_0->set_f_6(s->substr(0, 1));
  v12_0->set_f_1(0x1f7e42);
  v12_0->set_f_5(0x67);
  v12_0->set_f_4(s->substr(0, 291));
  v11->set_f_1(false);
  Message1::M5::M28* v14_0 = v11->add_f_13();
  Message1::M5::M28::M74* v15_0 = v14_0->add_f_7();
  Message1::M5::M28::M74::M100* v16 = v15_0->mutable_f_3();
  Message1::M5::M28::M74::M100::M113* v17 = v16->mutable_f_5();
  v17->set_f_22(s->substr(0, 3191));
  v17->set_f_5(0x205841deef58d74b);
  v17->set_f_13(0x2d3329653061a8ac);
  v17->set_f_12(s->substr(0, 6));
  v17->set_f_0(0x2f826c92f8fc4f53);
  v17->set_f_20(true);
  v17->set_f_15(0x15);
  v17->set_f_3(s->substr(0, 24));
  v17->set_f_18(0x601fb03935bf825f);
  v17->set_f_24(0x6058c09a1cbb6739);
  v17->set_f_14(0x7d);
  v17->set_f_6(s->substr(0, 162));
  v17->set_f_26(0x3db002bb);
  v14_0->set_f_0(0x2442);
  Message1::M5::M45* v18_0 = v11->add_f_19();
  v18_0->set_f_0(0x53c4d1f396282d65);
  v18_0->set_f_1(s->substr(0, 20));
  v18_0->set_f_2(0x76bd2cc1);
  Message1::M5::M39* v19 = v11->mutable_f_18();
  v19->set_f_1(0x21);
  v19->set_f_0(0x1e8250);
  Message1::M5::M14* v20 = v11->mutable_f_9();
  v20->set_f_18(false);
  v20->set_f_21(0x16432a);
  v20->set_f_4(0x3ab3c);
  v20->set_f_13(false);
  v20->set_f_10(0x5d);
  v20->set_f_9(true);
  v20->set_f_23(0x5adde44ca70a2951);
  Message1::M5::M14::M92* v21 = v20->mutable_f_40();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M5::M23* v22 = v11->mutable_f_10();
  Message1::M5::M23::M57* v23_0 = v22->add_f_4();
  v23_0->set_f_2(Message1::M5::M23::M57::E7_CONST_1);
  Message1::M5::M24* v24 = v11->mutable_f_11();
  Message1::M5::M24::M90* v25 = v24->mutable_f_9();
  v25->add_f_2(s->substr(0, 5));
  v25->set_f_4(s->substr(0, 242));
  v25->set_f_3(0x1c10add5138d923a);
  v24->set_f_0(false);
  Message1::M5::M24::M55* v26 = v24->mutable_f_8();
  v26->set_f_0(0x152c32d2);
  Message1::M1* v27 = message->mutable_f_55();
  v27->set_f_0(s->substr(0, 67));
  Message1::M1::M36* v28 = v27->mutable_f_18();
  v28->set_f_0(0xf4897e0);
  Message1::M1::M36::M85* v29 = v28->mutable_f_4();
  (void)v29;  // Suppresses clang-tidy.
  Message1::M1::M30* v30 = v27->mutable_f_16();
  v30->set_f_0(s->substr(0, 21));
  Message1::M1::M15* v31 = v27->mutable_f_8();
  v31->set_f_0(0x4c0ef5d77f46bf47);
  Message1::M1::M15::M95* v32 = v31->mutable_f_3();
  (void)v32;  // Suppresses clang-tidy.
  Message1::M1::M15::M88* v33 = v31->mutable_f_2();
  Message1::M1::M15::M88::M108* v34 = v33->mutable_f_3();
  Message1::M1::M15::M88::M108::M109* v35_0 = v34->add_f_4();
  (void)v35_0;  // Suppresses clang-tidy.
  Message1::M1::M15::M88::M108::M118* v36 = v34->mutable_f_7();
  v36->set_f_3(0x5f5f9189391a37ee);
  v36->set_f_2(0x12af3d6);
  v36->set_f_1(0x596fce7c03bbff09);
  v36->set_f_0(true);
  message->set_f_5(0x29);
  message->set_f_13(0x7a);
  message->set_f_26(s->substr(0, 18));
  message->set_f_9(true);
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
}  // namespace fleetbench::rpc::P3::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE1_H_
