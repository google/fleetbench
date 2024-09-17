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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message0.pb.h"

namespace fleetbench::rpc::P7::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_28(0x7b);
  Message0::M7* v0 = message->mutable_f_58();
  v0->set_f_0(s->substr(0, 8));
  Message0::M8* v1_0 = message->add_f_59();
  Message0::M8::M40* v2 = v1_0->mutable_f_11();
  v2->set_f_0(0.559610);
  Message0::M8::M28* v3 = v1_0->mutable_f_9();
  v3->set_f_0(s->substr(0, 28));
  v1_0->set_f_4(0x247);
  v1_0->set_f_1(0xf445124);
  v1_0->set_f_0(0x61);
  Message0::M15* v4_0 = message->add_f_68();
  Message0::M15::M34* v5 = v4_0->mutable_f_4();
  v5->set_f_0(0x3fc04154001e7b0e);
  Message0::M15::M34::M72* v6 = v5->mutable_f_2();
  (void)v6;  // Suppresses clang-tidy.
  Message0::M15::M21* v7 = v4_0->mutable_f_3();
  v7->add_f_0(Message0::M15::M21::E7_CONST_4);
  Message0::M15::M21::M67* v8_0 = v7->add_f_11();
  v8_0->set_f_1(0xb095c2e);
  v8_0->set_f_2(s->substr(0, 27));
  v8_0->set_f_4(0x35e8e08);
  Message0::M15::M21::M67::M93* v9_0 = v8_0->add_f_13();
  v9_0->set_f_0(s->substr(0, 10));
  v8_0->set_f_0(false);
  v7->set_f_2(0x14d6bfc7c14cf0ed);
  v7->set_f_1(0x104685fe58c3872f);
  Message0::M15::M21::M74* v10_0 = v7->add_f_13();
  v10_0->set_f_1(0x1f4f8a209f761ba2);
  v7->set_f_5(s->substr(0, 16));
  v7->set_f_4(0x465be0bd4cbf8155);
  v4_0->set_f_0(0xdcffdb);
  message->set_f_4(0x142be8a);
  Message0::M14* v11_0 = message->add_f_66();
  v11_0->set_f_1(false);
  Message0::M14::M18* v12_0 = v11_0->add_f_12();
  v12_0->set_f_0(s->substr(0, 60));
  v11_0->set_f_4(0x3781db194dc00a9a);
  v11_0->set_f_2(0x48e89458b56ce850);
  message->set_f_27(0x49);
  message->set_f_16(0x56);
  message->set_f_22(s->substr(0, 326));
  Message0::M4* v13 = message->mutable_f_55();
  Message0::M4::M44* v14 = v13->mutable_f_5();
  v14->set_f_1(false);
  v14->set_f_3(0.059968);
  message->set_f_5(false);
  Message0::M12* v15 = message->mutable_f_64();
  Message0::M12::M32* v16 = v15->mutable_f_7();
  v16->set_f_0(0x514a5d6ba2df79d9);
  Message0::M12::M35* v17 = v15->mutable_f_8();
  v17->set_f_1(0x58200fe7b6fedc57);
  v17->set_f_2(0x6bd02268);
  v15->set_f_0(0x69f916f2);
  Message0::M12::M27* v18_0 = v15->add_f_6();
  v18_0->set_f_1(0x10536e39345cf410);
  v18_0->set_f_2(false);
  Message0::M12::M27::M78* v19 = v18_0->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  message->add_f_1(Message0::E1_CONST_2);
  message->set_f_13(true);
  Message0::M13* v20 = message->mutable_f_65();
  v20->set_f_0(0x7d72ade0c0afee2c);
  message->set_f_2(0x7ae4f0398e3ad74c);
  message->set_f_7(0x7e);
  Message0::M1* v21 = message->mutable_f_50();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_19(0x245d2ce0);
  message->set_f_17(0x22a40e2bfe94cf87);
  message->set_f_10(s->substr(0, 7));
  message->set_f_25(0x771170c0d8e7c0c8);
  message->set_f_0(0x4329c528);
  message->set_f_26(0x38);
  message->set_f_9(0xc131748);
  message->add_f_21(Message0::E3_CONST_3);
  message->add_f_20(Message0::E2_CONST_1);
  Message0::M9* v22_0 = message->add_f_60();
  Message0::M9::M48* v23_0 = v22_0->add_f_9();
  Message0::M9::M48::M80* v24_0 = v23_0->add_f_3();
  v24_0->set_f_0(0.232741);
  Message0::M9::M48::M64* v25 = v23_0->mutable_f_2();
  Message0::M9::M48::M64::M87* v26 = v25->mutable_f_3();
  v26->set_f_0(0x4ae93a16);
  Message0::M9::M38* v27_0 = v22_0->add_f_8();
  v27_0->set_f_0(s->substr(0, 12));
  v22_0->set_f_0(0x5eb9f9b74e13c120);
  Message0::M9::M30* v28 = v22_0->mutable_f_4();
  Message0::M9::M30::M60* v29_0 = v28->add_f_5();
  Message0::M9::M30::M60::M97* v30_0 = v29_0->add_f_4();
  v30_0->set_f_0(Message0::M9::M30::M60::M97::E23_CONST_4);
  v30_0->set_f_3(0x8b214d);
  v30_0->set_f_1(0x62);
  v30_0->set_f_2(0.533000);
  v29_0->set_f_0(s->substr(0, 7));
  message->set_f_11(true);
  Message0::M2* v31 = message->mutable_f_52();
  Message0::M2::M24* v32 = v31->mutable_f_3();
  (void)v32;  // Suppresses clang-tidy.
  v31->set_f_0(0.287550);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M2* v0 = message->mutable_f_52();
  Message0::M2::M24* v1 = v0->mutable_f_3();
  Message0::M2::M24::M65* v2 = v1->mutable_f_2();
  v2->set_f_3(0x52b4c31f72e2cad6);
  v2->set_f_1(0x1da63ec90cfffbdb);
  Message0::M12* v3 = message->mutable_f_64();
  v3->set_f_1(0x2144f);
  Message0::M12::M32* v4 = v3->mutable_f_7();
  Message0::M12::M32::M56* v5 = v4->mutable_f_5();
  v5->set_f_0(s->substr(0, 1));
  v5->set_f_3(0.953316);
  v5->set_f_5(true);
  v5->set_f_2(0x32edcd65966cc8b3);
  Message0::M12::M35* v6 = v3->mutable_f_8();
  v6->set_f_0(0x51);
  v6->set_f_2(0x4c6372eb);
  v6->set_f_1(0x4a08c14f400ae5de);
  v3->set_f_0(0x1f59a2ff);
  message->set_f_15(0x624c4b25abee8eab);
  message->set_f_16(0x33);
  Message0::E4 array_0[10] = {
      Message0::E4_CONST_1, Message0::E4_CONST_3, Message0::E4_CONST_2,
      Message0::E4_CONST_3, Message0::E4_CONST_4, Message0::E4_CONST_2,
      Message0::E4_CONST_1, Message0::E4_CONST_4, Message0::E4_CONST_4,
      Message0::E4_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_24(v);
  }
  message->set_f_12(true);
  message->add_f_21(Message0::E3_CONST_1);
  message->set_f_28(0x18f1dc);
  message->set_f_11(false);
  message->set_f_13(true);
  Message0::M6* v7 = message->mutable_f_57();
  Message0::M6::M19* v8 = v7->mutable_f_3();
  v8->set_f_0(0x2f7676c82d86e6e);
  Message0::M6::M19::M62* v9 = v8->mutable_f_6();
  v9->set_f_0(0x4a);
  Message0::M6::M19::M54* v10 = v8->mutable_f_5();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_27(0x64);
  message->set_f_23(s->substr(0, 26));
  message->set_f_14(0x75);
  Message0::M15* v11_0 = message->add_f_68();
  v11_0->set_f_1(s->substr(0, 323));
  Message0::M15::M21* v12 = v11_0->mutable_f_3();
  v12->set_f_4(0x51d01065d2f9ef05);
  v12->set_f_1(0x7b786a678f00df4b);
  v12->set_f_2(0x7c089ec24b2c2a80);
  v12->set_f_3(Message0::M15::M21::E8_CONST_1);
  v12->add_f_0(Message0::M15::M21::E7_CONST_2);
  v11_0->set_f_0(0x30);
  message->add_f_20(Message0::E2_CONST_4);
  message->set_f_9(0x58);
  message->set_f_22(s->substr(0, 8));
  message->set_f_5(true);
  Message0::M16* v13 = message->mutable_f_69();
  v13->set_f_1(0x4f9b5134);
  Message0::M16::M25* v14 = v13->mutable_f_6();
  v14->set_f_2(0x53d49d28a612fa7c);
  v14->set_f_3(s->substr(0, 24));
  v14->set_f_0(0x7543d1084f65b86b);
  v14->add_f_1(Message0::M16::M25::E9_CONST_1);
  Message0::M16::M37* v15 = v13->mutable_f_9();
  v15->set_f_0(0xabc0b49);
  Message0::M16::M20* v16_0 = v13->add_f_5();
  v16_0->set_f_0(0x24018a8);
  Message0::M16::M45* v17_0 = v13->add_f_11();
  v17_0->set_f_2(0.397161);
  v17_0->set_f_1(0x10);
  v17_0->set_f_4(Message0::M16::M45::E15_CONST_5);
  v17_0->set_f_3(0xde89c3657334943);
  v17_0->set_f_0(true);
  v17_0->set_f_5(s->substr(0, 7));
  Message0::M16::M29* v18 = v13->mutable_f_8();
  v18->set_f_0(s->substr(0, 17));
  Message0::M17* v19 = message->mutable_f_70();
  v19->set_f_1(s->substr(0, 6));
  v19->set_f_2(0x7857b8f749175611);
  v19->set_f_9(0xb77);
  v19->set_f_6(0x3e49d3a0);
  v19->set_f_3(0.990306);
  v19->set_f_0(0x48);
  v19->set_f_10(s->substr(0, 13));
  v19->set_f_4(false);
  v19->set_f_5(0x6c);
  v19->set_f_8(s->substr(0, 3));
  v19->set_f_7(Message0::M17::E5_CONST_5);
  v19->add_f_12(Message0::M17::E6_CONST_3);
  v19->set_f_14(true);
  message->set_f_8(0x6b136b0d50f99871);
  message->set_f_17(0x184a73e29b98b02f);
  Message0::M3* v20 = message->mutable_f_54();
  Message0::M3::M26* v21_0 = v20->add_f_4();
  v21_0->set_f_0(0x45e071ec6bf0ac24);
  message->set_f_25(0x6c62383ae30c9f4d);
  Message0::M1* v22 = message->mutable_f_50();
  Message0::M1::M47* v23 = v22->mutable_f_3();
  v23->set_f_0(0x1c0991a0f01ad3);
  Message0::M9* v24_0 = message->add_f_60();
  Message0::M9::M30* v25 = v24_0->mutable_f_4();
  Message0::M9::M30::M60* v26_0 = v25->add_f_5();
  v26_0->set_f_0(s->substr(0, 7));
  Message0::M9::M30::M60::M97* v27_0 = v26_0->add_f_4();
  v27_0->set_f_0(Message0::M9::M30::M60::M97::E23_CONST_2);
  v27_0->set_f_3(0x55);
  v27_0->set_f_2(0.812110);
  v25->set_f_0(s->substr(0, 9));
  Message0::M9::M38* v28_0 = v24_0->add_f_8();
  v28_0->set_f_0(s->substr(0, 2));
  v24_0->set_f_0(0x5b5c05a7cdf42366);
  Message0::M9::M48* v29_0 = v24_0->add_f_9();
  Message0::M9::M48::M80* v30_0 = v29_0->add_f_3();
  (void)v30_0;  // Suppresses clang-tidy.
  message->set_f_4(0x1884a0);
  Message0::M8* v31_0 = message->add_f_59();
  v31_0->set_f_4(0x72);
  Message0::M8::M28* v32 = v31_0->mutable_f_9();
  v32->set_f_0(s->substr(0, 2));
  v31_0->set_f_3(s->substr(0, 6));
  v31_0->set_f_5(0x15fb6c);
  Message0::M8::M52* v33 = v31_0->mutable_f_12();
  v33->set_f_1(0x2c01370ee6bf6978);
  v33->set_f_2(s->substr(0, 1));
  v31_0->set_f_0(0x2174786f6);
  Message0::M5* v34 = message->mutable_f_56();
  v34->set_f_0(0x2b38299459e68518);
  Message0::M7* v35 = message->mutable_f_58();
  v35->set_f_0(s->substr(0, 18));
  Message0::M7::M36* v36 = v35->mutable_f_5();
  (void)v36;  // Suppresses clang-tidy.
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M12* v0 = message->mutable_f_64();
  v0->set_f_1(0x24cd);
  Message0::M12::M35* v1 = v0->mutable_f_8();
  v1->set_f_1(0x723d368d9768c74a);
  v1->set_f_0(0x1f);
  v1->set_f_2(0x1dad0c96);
  Message0::M12::M32* v2 = v0->mutable_f_7();
  v2->set_f_0(0x236b2c066cc8699b);
  v0->set_f_0(0x5e426703);
  Message0::M12::M27* v3_0 = v0->add_f_6();
  v3_0->set_f_1(0x69cea6061e0e17ba);
  v3_0->set_f_0(0x589a18d1279b5614);
  Message0::M15* v4_0 = message->add_f_68();
  Message0::M15::M21* v5 = v4_0->mutable_f_3();
  v5->set_f_4(0x4a0a2f88629d1844);
  v5->set_f_5(s->substr(0, 2));
  v5->set_f_1(0x565793b8954e02cb);
  Message0::M15::M21::M67* v6_0 = v5->add_f_11();
  v6_0->set_f_4(0x5262fd7);
  Message0::M15::M21::M67::M82* v7_0 = v6_0->add_f_12();
  (void)v7_0;  // Suppresses clang-tidy.
  v6_0->set_f_3(0x74f18ed);
  v6_0->set_f_6(s->substr(0, 10));
  v6_0->set_f_2(s->substr(0, 11));
  Message0::M15::M21::M67::M93* v8_0 = v6_0->add_f_13();
  v8_0->set_f_0(s->substr(0, 7));
  v6_0->set_f_5(0x56);
  v6_0->set_f_1(0xfeb130f);
  Message0::M15::M21::M74* v9_0 = v5->add_f_13();
  v9_0->set_f_1(0x7b1155bd87e982c1);
  v9_0->set_f_0(s->substr(0, 8));
  v5->set_f_3(Message0::M15::M21::E8_CONST_3);
  v4_0->set_f_1(s->substr(0, 23));
  Message0::M15::M34* v10 = v4_0->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_9(0x32d7095);
  message->set_f_8(0x32efb0e3e884f3e4);
  message->set_f_18(0x15f50d);
  message->add_f_1(Message0::E1_CONST_3);
  Message0::M10* v11 = message->mutable_f_61();
  Message0::M10::M51* v12 = v11->mutable_f_2();
  v12->set_f_1(false);
  v12->set_f_0(0.668904);
  Message0::M10::M51::M55* v13_0 = v12->add_f_4();
  (void)v13_0;  // Suppresses clang-tidy.
  Message0::M10::M51::M59* v14_0 = v12->add_f_5();
  v14_0->set_f_3(0x73);
  Message0::M10::M51::M59::M96* v15 = v14_0->mutable_f_9();
  v15->set_f_1(s->substr(0, 3));
  Message0::M10::M51::M59::M96::M108* v16 = v15->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  Message0::M10::M51::M59::M96::M114* v17 = v15->mutable_f_6();
  v17->set_f_0(0x2386029ca03230dd);
  v17->set_f_1(s->substr(0, 30));
  v17->set_f_2(true);
  v14_0->set_f_1(0x20175a82b96c59f2);
  Message0::M10::M51::M76* v18 = v12->mutable_f_6();
  v18->set_f_0(0x1e);
  message->set_f_29(0x341a6bf0);
  message->set_f_3(0.151927);
  message->set_f_15(0x65a43517a80a5843);
  message->set_f_13(false);
  message->set_f_14(0x66);
  Message0::M4* v19 = message->mutable_f_55();
  v19->set_f_0(0x5aa76b90d8ad7496);
  Message0::M4::M44* v20 = v19->mutable_f_5();
  Message0::M4::M44::M57* v21 = v20->mutable_f_10();
  v21->set_f_0(0x17a9195);
  Message0::M4::M44::M57::M89* v22 = v21->mutable_f_5();
  v22->set_f_0(0x1c4c3cf9fe2302b6);
  v20->set_f_0(s->substr(0, 2));
  v20->set_f_3(0.431715);
  Message0::M4::M44::E14 array_0[21] = {
      Message0::M4::M44::E14_CONST_4, Message0::M4::M44::E14_CONST_3,
      Message0::M4::M44::E14_CONST_2, Message0::M4::M44::E14_CONST_3,
      Message0::M4::M44::E14_CONST_3, Message0::M4::M44::E14_CONST_3,
      Message0::M4::M44::E14_CONST_4, Message0::M4::M44::E14_CONST_1,
      Message0::M4::M44::E14_CONST_3, Message0::M4::M44::E14_CONST_3,
      Message0::M4::M44::E14_CONST_3, Message0::M4::M44::E14_CONST_2,
      Message0::M4::M44::E14_CONST_4, Message0::M4::M44::E14_CONST_2,
      Message0::M4::M44::E14_CONST_1, Message0::M4::M44::E14_CONST_2,
      Message0::M4::M44::E14_CONST_2, Message0::M4::M44::E14_CONST_1,
      Message0::M4::M44::E14_CONST_5, Message0::M4::M44::E14_CONST_2,
      Message0::M4::M44::E14_CONST_3,
  };
  for (auto v : array_0) {
    v20->add_f_2(v);
  }
  message->set_f_2(0x50ac2913ff7ac9d6);
  message->set_f_19(0x224df212);
  message->add_f_20(Message0::E2_CONST_1);
  message->set_f_27(0x4);
  Message0::M5* v23 = message->mutable_f_56();
  v23->set_f_0(0x792cc531ebc7de81);
  Message0::M5::M39* v24 = v23->mutable_f_6();
  v24->set_f_28(Message0::M5::M39::E13_CONST_5);
  v24->set_f_1(0x12);
  v24->set_f_13(s->substr(0, 22));
  v24->add_f_8(Message0::M5::M39::E11_CONST_1);
  v24->set_f_0(0x3da4);
  v24->set_f_3(0x4a8eb48c65f2142a);
  Message0::M5::M39::E12 array_1[20] = {
      Message0::M5::M39::E12_CONST_3, Message0::M5::M39::E12_CONST_2,
      Message0::M5::M39::E12_CONST_3, Message0::M5::M39::E12_CONST_1,
      Message0::M5::M39::E12_CONST_4, Message0::M5::M39::E12_CONST_2,
      Message0::M5::M39::E12_CONST_3, Message0::M5::M39::E12_CONST_5,
      Message0::M5::M39::E12_CONST_4, Message0::M5::M39::E12_CONST_1,
      Message0::M5::M39::E12_CONST_1, Message0::M5::M39::E12_CONST_5,
      Message0::M5::M39::E12_CONST_4, Message0::M5::M39::E12_CONST_2,
      Message0::M5::M39::E12_CONST_2, Message0::M5::M39::E12_CONST_3,
      Message0::M5::M39::E12_CONST_1, Message0::M5::M39::E12_CONST_3,
      Message0::M5::M39::E12_CONST_3, Message0::M5::M39::E12_CONST_2,
  };
  for (auto v : array_1) {
    v24->add_f_25(v);
  }
  v24->set_f_18(0x560a41f9647528);
  v24->set_f_27(0x222c53557b65a0cb);
  v24->set_f_12(0x7ed124a);
  v24->set_f_5(0x6f);
  v24->set_f_7(false);
  v24->set_f_4(0xa);
  v24->set_f_20(0x6363d8586627193c);
  Message0::M5::M39::M73* v25 = v24->mutable_f_54();
  v25->set_f_5(0x4d6806388aed900a);
  v25->set_f_2(0x4b17685);
  v25->add_f_3(Message0::M5::M39::M73::E19_CONST_3);
  v24->set_f_9(false);
  v24->set_f_2(0x2afb53d3cf33a93a);
  v24->set_f_21(s->substr(0, 4));
  v24->set_f_16(0x53);
  v24->set_f_24(0x2a6fc5f2);
  v24->set_f_17(false);
  message->set_f_22(s->substr(0, 3));
  Message0::M1* v26 = message->mutable_f_50();
  Message0::M1::M47* v27 = v26->mutable_f_3();
  (void)v27;  // Suppresses clang-tidy.
  Message0::M6* v28 = message->mutable_f_57();
  Message0::M6::M19* v29 = v28->mutable_f_3();
  v29->set_f_0(0x7bc063e36f0e8a44);
  Message0::M6::M19::M54* v30 = v29->mutable_f_5();
  v30->set_f_0(0.531359);
  Message0::M6::M49* v31 = v28->mutable_f_5();
  v31->set_f_4(0x68547a105101688e);
  v31->set_f_1(s->substr(0, 39));
  v31->set_f_0(0x55ef4e0);
  v31->set_f_5(s->substr(0, 283));
  v31->set_f_3(0x15722b66fdc04d0b);
  Message0::M11* v32 = message->mutable_f_62();
  Message0::M11::M22* v33 = v32->mutable_f_4();
  Message0::M11::M22::M58* v34_0 = v33->add_f_3();
  v34_0->set_f_0(0x2ce06af51d05e376);
  v33->set_f_0(0x5c);
  Message0::M11::M31* v35_0 = v32->add_f_5();
  v35_0->set_f_0(0x180ea60472a460c8);
  message->set_f_28(0x28);
  Message0::M13* v36 = message->mutable_f_65();
  v36->set_f_0(0x2d4b31b546df9646);
  message->set_f_4(0x2f6d83);
  message->set_f_5(true);
  message->add_f_24(Message0::E4_CONST_3);
  Message0::M3* v37 = message->mutable_f_54();
  Message0::M3::M23* v38 = v37->mutable_f_2();
  Message0::M3::M23::M75* v39_0 = v38->add_f_8();
  v39_0->set_f_0(0x4723d86ff6f62934);
  v39_0->set_f_1(0x2c0bcbbcd31e6344);
  Message0::M3::M23::M75::M85* v40 = v39_0->mutable_f_9();
  (void)v40;  // Suppresses clang-tidy.
  v39_0->set_f_2(0xcc65e8c);
  v39_0->set_f_4(s->substr(0, 6));
  Message0::M3::M23::M68* v41 = v38->mutable_f_6();
  v41->set_f_1(0x22);
  v41->set_f_0(s->substr(0, 5));
  Message0::M3::M23::M61* v42 = v38->mutable_f_3();
  Message0::M3::M23::M61::M91* v43_0 = v42->add_f_12();
  v43_0->set_f_0(0x6f);
  Message0::M3::M23::M61::M91::M112* v44 = v43_0->mutable_f_3();
  v44->set_f_0(s->substr(0, 22));
  Message0::M3::M23::M61::M98* v45_0 = v42->add_f_13();
  Message0::M3::M23::M61::M98::M102* v46 = v45_0->mutable_f_3();
  (void)v46;  // Suppresses clang-tidy.
  v42->set_f_2(0x328ff5e03baf755e);
  Message0::M3::M42* v47_0 = v37->add_f_5();
  v47_0->set_f_0(0x5ebbeee1d98647a0);
  Message0::M3::M42::M63* v48 = v47_0->mutable_f_5();
  v48->set_f_0(0x4);
  Message0::M3::M42::M66* v49 = v47_0->mutable_f_9();
  v49->set_f_3(s->substr(0, 9));
  Message0::M3::M42::M66::M84* v50_0 = v49->add_f_10();
  v50_0->set_f_0(s->substr(0, 31));
  v49->set_f_5(s->substr(0, 48));
  Message0::M3::M42::M66::M95* v51 = v49->mutable_f_12();
  v51->set_f_0(0x53e03dd78ca48212);
  v49->set_f_4(s->substr(0, 20));
  v37->set_f_0(0x92df83bb214e879);
  message->set_f_26(0x7a);
  Message0::M17* v52 = message->mutable_f_70();
  v52->set_f_5(0x21);
  v52->set_f_4(true);
  v52->set_f_6(0x527a2f6f);
  v52->set_f_9(0x64);
  v52->add_f_12(Message0::M17::E6_CONST_4);
  v52->set_f_3(0.435667);
  v52->set_f_7(Message0::M17::E5_CONST_4);
  v52->set_f_14(false);
  v52->set_f_1(s->substr(0, 74));
  v52->set_f_10(s->substr(0, 5));
  v52->set_f_13(0x73480dcdca0d3a);
  Message0::M8* v53_0 = message->add_f_59();
  v53_0->set_f_5(0x31d5);
  v53_0->set_f_4(0x5e);
  v53_0->set_f_0(0x13);
  Message0::M8::M28* v54 = v53_0->mutable_f_9();
  v54->set_f_0(s->substr(0, 70));
  v53_0->set_f_2(0x2b75146f48a08736);
  Message0::M8::M52* v55 = v53_0->mutable_f_12();
  Message0::M8::M52::M81* v56 = v55->mutable_f_6();
  v56->set_f_0(s->substr(0, 27));
  v56->set_f_7(s->substr(0, 55));
  v56->set_f_23(0x52d9e3fd);
  v56->set_f_5(0x6668c21);
  v56->set_f_21(0x355a);
  v56->set_f_20(Message0::M8::M52::M81::E21_CONST_1);
  v56->set_f_6(0x57dbcb4f67d5289c);
  v56->set_f_17(0x609ccf9cf43c5db7);
  v56->set_f_16(s->substr(0, 11));
  v56->set_f_3(0x24);
  v56->set_f_12(0x1cfd5f6);
  Message0::M8::M52::M81::M92* v57 = v56->mutable_f_36();
  v57->set_f_0(0x64f21b13f2ecf19f);
  v57->set_f_3(s->substr(0, 4));
  v57->set_f_1(false);
  Message0::M8::M52::M81::M92::M103* v58 = v57->mutable_f_6();
  v58->set_f_0(0x38e369fc08b555c6);
  v58->set_f_1(0x27edd5ec);
  v58->set_f_2(0x3d);
  v56->set_f_14(0x4c);
  v56->set_f_10(s->substr(0, 7));
  v56->set_f_18(0x7cbf4);
  v56->set_f_13(s->substr(0, 22));
  v56->set_f_8(s->substr(0, 4));
  v55->set_f_2(s->substr(0, 1));
  v55->set_f_0(0xeac);
  v53_0->set_f_1(0x17);
  Message0::M7* v59 = message->mutable_f_58();
  Message0::M7::M36* v60 = v59->mutable_f_5();
  v60->set_f_0(0x7777245);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_5(false);
  Message0::M14* v0_0 = message->add_f_66();
  v0_0->set_f_0(0.432360);
  v0_0->set_f_4(0xa477d55e1f3183b);
  v0_0->set_f_2(0x74bdd47010763379);
  v0_0->set_f_3(0xc);
  v0_0->set_f_1(true);
  Message0::M5* v1 = message->mutable_f_56();
  Message0::M5::M39* v2 = v1->mutable_f_6();
  v2->set_f_20(0x5abea4c2a7e4f843);
  v2->add_f_8(Message0::M5::M39::E11_CONST_1);
  v2->set_f_27(0x296ae0251c2afc69);
  v2->set_f_1(0x65);
  v2->set_f_14(s->substr(0, 63));
  v2->set_f_26(true);
  v2->set_f_17(false);
  v2->set_f_18(0x526349438cf64724);
  v2->set_f_23(0x54);
  v2->set_f_11(s->substr(0, 5));
  v2->set_f_29(0x65eee5ef);
  Message0::M5::M39::M73* v3 = v2->mutable_f_54();
  v3->set_f_5(0x1f2f7f99c9ea4cc5);
  v3->set_f_1(0x11cf71621fbff36b);
  v3->set_f_4(0x50b43d2487df1106);
  Message0::M5::M39::M73::M83* v4_0 = v3->add_f_12();
  Message0::M5::M39::M73::M83::M106* v5 = v4_0->mutable_f_2();
  (void)v5;  // Suppresses clang-tidy.
  v2->set_f_2(0x4e6ad9b898c4d5db);
  v2->set_f_4(0x66);
  v2->set_f_7(true);
  v2->set_f_21(s->substr(0, 2741));
  message->set_f_6(s->substr(0, 28));
  message->add_f_20(Message0::E2_CONST_4);
  message->set_f_26(0x2cef2e0);
  message->set_f_11(false);
  message->set_f_28(0xfdc648e);
  Message0::M15* v6_0 = message->add_f_68();
  v6_0->set_f_1(s->substr(0, 32));
  Message0::M15::M21* v7 = v6_0->mutable_f_3();
  Message0::M15::M21::E7 array_0[20] = {
      Message0::M15::M21::E7_CONST_4, Message0::M15::M21::E7_CONST_1,
      Message0::M15::M21::E7_CONST_5, Message0::M15::M21::E7_CONST_1,
      Message0::M15::M21::E7_CONST_5, Message0::M15::M21::E7_CONST_5,
      Message0::M15::M21::E7_CONST_1, Message0::M15::M21::E7_CONST_3,
      Message0::M15::M21::E7_CONST_5, Message0::M15::M21::E7_CONST_3,
      Message0::M15::M21::E7_CONST_4, Message0::M15::M21::E7_CONST_5,
      Message0::M15::M21::E7_CONST_3, Message0::M15::M21::E7_CONST_3,
      Message0::M15::M21::E7_CONST_3, Message0::M15::M21::E7_CONST_3,
      Message0::M15::M21::E7_CONST_2, Message0::M15::M21::E7_CONST_1,
      Message0::M15::M21::E7_CONST_3, Message0::M15::M21::E7_CONST_5,
  };
  for (auto v : array_0) {
    v7->add_f_0(v);
  }
  v7->set_f_1(0x1a8280108e05b388);
  Message0::M15::M21::M67* v8_0 = v7->add_f_11();
  v8_0->set_f_2(s->substr(0, 64));
  v8_0->set_f_6(s->substr(0, 2));
  Message0::M15::M21::M67::M93* v9_0 = v8_0->add_f_13();
  (void)v9_0;  // Suppresses clang-tidy.
  v8_0->set_f_1(0x38f1);
  Message0::M15::M21::M67::M82* v10_0 = v8_0->add_f_12();
  v10_0->set_f_0(s->substr(0, 2));
  v8_0->set_f_0(false);
  v7->set_f_5(s->substr(0, 9));
  Message0::M15::M21::M74* v11_0 = v7->add_f_13();
  v11_0->set_f_1(0x6eababe05b8f3360);
  v7->set_f_4(0x69737d61dbf009f8);
  message->set_f_7(0x51);
  Message0::M13* v12 = message->mutable_f_65();
  v12->set_f_0(0x63907b90494aba0b);
  Message0::M1* v13 = message->mutable_f_50();
  v13->set_f_0(0x4433e86ef8cbfbcd);
  message->set_f_14(0x33);
  Message0::M8* v14_0 = message->add_f_59();
  Message0::M8::M40* v15 = v14_0->mutable_f_11();
  v15->set_f_0(0.320806);
  v14_0->set_f_2(0xda78a79f746f63d);
  v14_0->set_f_5(0x77);
  v14_0->set_f_3(s->substr(0, 22));
  v14_0->set_f_1(0x73);
  Message0::M8::M52* v16 = v14_0->mutable_f_12();
  Message0::M8::M52::M81* v17 = v16->mutable_f_6();
  v17->set_f_10(s->substr(0, 21));
  v17->set_f_0(s->substr(0, 91));
  v17->set_f_21(0x51);
  v17->set_f_1(0x13a0a3278cbad1fd);
  v17->set_f_14(0x3c9c8df);
  v17->set_f_9(s->substr(0, 32));
  v17->set_f_17(0x1d54d3c6a27d24b5);
  v17->set_f_6(0x923438a7b1545d4);
  v17->set_f_11(0x28c1d4ba5063b609);
  v17->set_f_20(Message0::M8::M52::M81::E21_CONST_5);
  v17->set_f_19(0x2b60adbd5ea07b55);
  v17->set_f_22(0x1e9d9fe2);
  v17->set_f_2(0x2890e422c0384623);
  v17->set_f_18(0x50b0);
  v17->set_f_8(s->substr(0, 1));
  v16->set_f_0(0x52);
  v16->set_f_2(s->substr(0, 4));
  v14_0->set_f_0(0x94b25bcaabb941);
  Message0::M9* v18_0 = message->add_f_60();
  Message0::M9::M38* v19_0 = v18_0->add_f_8();
  (void)v19_0;  // Suppresses clang-tidy.
  Message0::M9::M33* v20_0 = v18_0->add_f_5();
  Message0::M9::M33::M77* v21_0 = v20_0->add_f_3();
  v21_0->add_f_0(Message0::M9::M33::M77::E20_CONST_1);
  v18_0->set_f_0(0x49db35f377c68e18);
  Message0::M9::M30* v22 = v18_0->mutable_f_4();
  Message0::M9::M30::M60* v23_0 = v22->add_f_5();
  v23_0->set_f_0(s->substr(0, 4));
  v22->set_f_0(s->substr(0, 5));
  Message0::M9::M48* v24_0 = v18_0->add_f_9();
  v24_0->set_f_0(0xe2f211b);
  Message0::M9::M48::M80* v25_0 = v24_0->add_f_3();
  v25_0->set_f_0(0.526973);
  Message0::M9::M48::M64* v26 = v24_0->mutable_f_2();
  v26->set_f_0(s->substr(0, 21));
  Message0::M6* v27 = message->mutable_f_57();
  Message0::M6::M19* v28 = v27->mutable_f_3();
  Message0::M6::M19::M62* v29 = v28->mutable_f_6();
  (void)v29;  // Suppresses clang-tidy.
  Message0::M6::M19::M54* v30 = v28->mutable_f_5();
  v30->set_f_0(0.280297);
  v28->set_f_0(0x4a3860562d3aa9dd);
  Message0::M6::M49* v31 = v27->mutable_f_5();
  v31->set_f_2(0x77);
  v31->set_f_0(0x67);
  v27->set_f_0(s->substr(0, 24));
  message->set_f_19(0x75b6e9b6);
  message->set_f_27(0x47);
  Message0::M3* v32 = message->mutable_f_54();
  (void)v32;  // Suppresses clang-tidy.
  Message0::M11* v33 = message->mutable_f_62();
  Message0::M11::M41* v34 = v33->mutable_f_6();
  (void)v34;  // Suppresses clang-tidy.
  Message0::M11::M22* v35 = v33->mutable_f_4();
  v35->set_f_0(0x2a);
  Message0::M11::M22::M69* v36_0 = v35->add_f_4();
  v36_0->set_f_0(0x2d6c7043f64ef605);
  Message0::M11::M31* v37_0 = v33->add_f_5();
  (void)v37_0;  // Suppresses clang-tidy.
  Message0::M16* v38 = message->mutable_f_69();
  v38->set_f_0(0xa69c32a);
  Message0::M16::M45* v39_0 = v38->add_f_11();
  v39_0->set_f_0(true);
  v39_0->set_f_3(0x57f5b2edfbd72ffa);
  v39_0->set_f_2(0.845323);
  v39_0->set_f_5(s->substr(0, 30));
  v39_0->set_f_4(Message0::M16::M45::E15_CONST_5);
  Message0::M16::M20* v40_0 = v38->add_f_5();
  v40_0->set_f_0(0x77c320a3);
  Message0::M16::M37* v41 = v38->mutable_f_9();
  (void)v41;  // Suppresses clang-tidy.
  Message0::M16::M29* v42 = v38->mutable_f_8();
  Message0::M16::M29::M53* v43 = v42->mutable_f_3();
  Message0::M16::M29::M53::M94* v44_0 = v43->add_f_3();
  v44_0->set_f_0(true);
  v44_0->set_f_1(0x45e3dc4d07841c79);
  v44_0->set_f_3(0x3e64);
  Message0::M16::M29::M53::M101* v45 = v43->mutable_f_4();
  v45->set_f_13(s->substr(0, 14));
  v45->set_f_9(0x8);
  v45->set_f_14(0x2b7b);
  v45->set_f_10(0x4b);
  v45->set_f_2(s->substr(0, 3));
  v45->set_f_8(0x5d);
  v45->set_f_7(0xa3a7bf6);
  v45->set_f_3(true);
  v45->set_f_12(0x4268d7a542a7909a);
  v45->set_f_6(0x2c5e021c00f7810c);
  v45->set_f_16(0x3d71ace);
  v45->set_f_15(0x5d);
  v45->set_f_17(0x317ad53e);
  v42->set_f_0(s->substr(0, 3));
  v38->set_f_1(0x31f6f0c7);
  Message0::M4* v46 = message->mutable_f_55();
  Message0::M4::M43* v47 = v46->mutable_f_3();
  v47->set_f_1(true);
  Message0::M4::M43::M71* v48 = v47->mutable_f_5();
  (void)v48;  // Suppresses clang-tidy.
  Message0::M4::M43::M79* v49_0 = v47->add_f_6();
  (void)v49_0;  // Suppresses clang-tidy.
  v47->set_f_0(0x64ba30cda9a79948);
  Message0::M4::M44* v50 = v46->mutable_f_5();
  v50->set_f_1(false);
  v50->set_f_3(0.439289);
  v46->set_f_0(0x3697a2d40f443788);
  Message0::M10* v51 = message->mutable_f_61();
  Message0::M10::M51* v52 = v51->mutable_f_2();
  Message0::M10::M51::M76* v53 = v52->mutable_f_6();
  (void)v53;  // Suppresses clang-tidy.
  Message0::M10::M51::M59* v54_0 = v52->add_f_5();
  v54_0->set_f_3(0x69);
  Message0::M10::M51::M59::M96* v55 = v54_0->mutable_f_9();
  Message0::M10::M51::M59::M96::M108* v56 = v55->mutable_f_5();
  v56->set_f_0(s->substr(0, 22));
  v55->set_f_0(0x61);
  v55->set_f_1(s->substr(0, 31));
  v54_0->set_f_2(s->substr(0, 8));
  v54_0->set_f_1(0x256a99e08cf1d148);
  v54_0->set_f_0(Message0::M10::M51::M59::E17_CONST_1);
  Message0::M10::M51::M59::M90* v57 = v54_0->mutable_f_7();
  v57->set_f_0(true);
  Message0::M10::M51::M59::M90::M111* v58_0 = v57->add_f_7();
  v58_0->set_f_0(Message0::M10::M51::M59::M90::M111::E26_CONST_2);
  v52->set_f_1(false);
  v51->set_f_0(false);
  message->set_f_12(false);
  message->set_f_23(s->substr(0, 63));
  message->set_f_13(false);
  message->set_f_10(s->substr(0, 60));
  message->set_f_22(s->substr(0, 11));
  message->set_f_17(0x56e24d9828788875);
  message->set_f_25(0x3cc51f13dd56fce8);
  message->set_f_15(0x5d83e98f03805baa);
  message->set_f_4(0xd);
  message->set_f_18(0xd9e5a81);
  message->set_f_8(0x2aaeda2aff701edd);
  message->add_f_21(Message0::E3_CONST_4);
  message->set_f_3(0.877322);
  Message0::E4 array_1[21] = {
      Message0::E4_CONST_4, Message0::E4_CONST_3, Message0::E4_CONST_2,
      Message0::E4_CONST_4, Message0::E4_CONST_3, Message0::E4_CONST_1,
      Message0::E4_CONST_5, Message0::E4_CONST_1, Message0::E4_CONST_2,
      Message0::E4_CONST_3, Message0::E4_CONST_3, Message0::E4_CONST_2,
      Message0::E4_CONST_4, Message0::E4_CONST_2, Message0::E4_CONST_2,
      Message0::E4_CONST_3, Message0::E4_CONST_4, Message0::E4_CONST_1,
      Message0::E4_CONST_3, Message0::E4_CONST_4, Message0::E4_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_24(v);
  }
  Message0::M7* v59 = message->mutable_f_58();
  v59->set_f_0(s->substr(0, 58));
  Message0::M7::M36* v60 = v59->mutable_f_5();
  v60->set_f_0(0x2b66);
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
}  // namespace fleetbench::rpc::P7::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE0_H_
