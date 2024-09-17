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
  message->set_f_12(0x62ebc4a0f05b9172);
  message->set_f_19(0x6a13d2dc42c5173d);
  message->set_f_24(0x60);
  message->set_f_10(0x2ace844fc91cd30c);
  message->set_f_1(s->substr(0, 18));
  message->set_f_20(s->substr(0, 25));
  message->set_f_16(s->substr(0, 7));
  Message2::M2* v0 = message->mutable_f_56();
  Message2::M2::M31* v1 = v0->mutable_f_21();
  v1->set_f_2(0x1dbe05);
  v1->set_f_1(s->substr(0, 104));
  Message2::M2::M31::M45* v2_0 = v1->add_f_7();
  Message2::M2::M31::M45::M55* v3 = v2_0->mutable_f_5();
  Message2::M2::M31::M45::M55::M62* v4 = v3->mutable_f_2();
  v4->set_f_2(0x597270b2e4174776);
  v4->set_f_1(0x346f);
  v4->set_f_5(0x691c3ada71ff0e1e);
  v4->set_f_6(0x7f2e1ee64c169554);
  v4->set_f_4(0x7c77734c386e9ab2);
  v4->set_f_3(s->substr(0, 4));
  v2_0->set_f_0(s->substr(0, 22));
  Message2::M2::M31::M45::M52* v5 = v2_0->mutable_f_4();
  v5->set_f_0(0.715001);
  v1->add_f_4(Message2::M2::M31::E13_CONST_1);
  v1->set_f_3(0x41f6254767fe2882);
  Message2::M2::M22* v6_0 = v0->add_f_20();
  (void)v6_0;  // Suppresses clang-tidy.
  v0->set_f_6(s->substr(0, 8));
  v0->set_f_1(0x1362464be8f1d513);
  Message2::M2::M38* v7 = v0->mutable_f_25();
  v7->set_f_3(0x7ad1a1bcc6520f36);
  v7->set_f_0(Message2::M2::M38::E14_CONST_2);
  v7->set_f_1(0x7ae41fb);
  v7->set_f_2(0xc);
  Message2::M2::M34* v8_0 = v0->add_f_23();
  Message2::M2::M34::M49* v9 = v8_0->mutable_f_2();
  v9->set_f_0(0x53bf0b64c89cdfc2);
  Message2::M2::M34::M49::M59* v10 = v9->mutable_f_2();
  v10->set_f_0(s->substr(0, 8));
  v8_0->set_f_0(true);
  Message2::M2::M11* v11_0 = v0->add_f_16();
  v11_0->set_f_0(s->substr(0, 4));
  v0->set_f_3(s->substr(0, 18));
  Message2::M2::M7* v12 = v0->mutable_f_15();
  Message2::M2::M7::M46* v13 = v12->mutable_f_9();
  v13->set_f_6(s->substr(0, 108));
  v13->set_f_10(0x13e80e92888f4c24);
  v13->set_f_5(s->substr(0, 25));
  v13->set_f_1(0x4be0664e2a42b8ee);
  v13->set_f_9(true);
  v13->set_f_8(0xef1d172);
  v13->set_f_7(0x1033f672324fac74);
  v13->set_f_2(0x1e2abf);
  v12->set_f_4(s->substr(0, 20));
  v12->set_f_2(0x62d0dc8c);
  v12->set_f_0(0x3d2b5cd0b49ae6b);
  Message2::M2::M7::M48* v14_0 = v12->add_f_10();
  Message2::M2::M7::M48::M53* v15 = v14_0->mutable_f_5();
  (void)v15;  // Suppresses clang-tidy.
  Message2::M2::M7::M48::M61* v16_0 = v14_0->add_f_6();
  v16_0->set_f_0(Message2::M2::M7::M48::M61::E17_CONST_1);
  v14_0->set_f_0(s->substr(0, 5));
  Message2::M2::M5* v17 = v0->mutable_f_14();
  v17->set_f_0(s->substr(0, 7));
  v0->set_f_2(0xcd9);
  v0->add_f_7(Message2::M2::E4_CONST_2);
  Message2::M2::M32* v18 = v0->mutable_f_22();
  v18->set_f_0(0x63a4c85c45b4318e);
  v0->set_f_5(s->substr(0, 360));
  Message2::M2::M12* v19 = v0->mutable_f_17();
  v19->set_f_2(0x363d53b6);
  v19->set_f_1(0x6b);
  v19->set_f_0(0x6c4787291ad681ec);
  message->set_f_0(s->substr(0, 272));
  message->set_f_25(s->substr(0, 2));
  message->set_f_8(s->substr(0, 6));
  message->set_f_3(s->substr(0, 8));
  Message2::M1* v20 = message->mutable_f_55();
  Message2::M1::M19* v21 = v20->mutable_f_9();
  Message2::M1::M19::M47* v22 = v21->mutable_f_6();
  v22->set_f_3(0x55b96a6914b5ed88);
  v22->set_f_5(Message2::M1::M19::M47::E15_CONST_3);
  Message2::M1::M19::M47::M51* v23 = v22->mutable_f_11();
  v23->set_f_0(s->substr(0, 18));
  v22->set_f_2(s->substr(0, 8));
  Message2::M1::M19::M47::M50* v24 = v22->mutable_f_8();
  v24->set_f_0(0.278067);
  Message2::M1::M19::M47::M57* v25_0 = v22->add_f_12();
  v25_0->set_f_5(0x3e5e743e1cab43b6);
  v25_0->set_f_3(0x73f2d652a51bd3d8);
  v25_0->set_f_4(0x37e82fa35d0b62cc);
  v25_0->set_f_0(0x4c5d908115887660);
  v25_0->set_f_1(0x27ed);
  v21->set_f_1(s->substr(0, 32));
  v21->set_f_0(s->substr(0, 56));
  Message2::M1::M26* v26 = v20->mutable_f_11();
  Message2::M1::M26::M42* v27 = v26->mutable_f_2();
  v27->set_f_1(s->substr(0, 19));
  v27->set_f_0(0x5c7535ab);
  v27->set_f_3(0.440385);
  v27->set_f_2(false);
  v27->set_f_4(0.979353);
  v26->set_f_0(0x2d);
  Message2::M1::M20* v28 = v20->mutable_f_10();
  (void)v28;  // Suppresses clang-tidy.
  Message2::M1::M8* v29 = v20->mutable_f_2();
  v29->set_f_0(0x7542bf7208859c59);
  Message2::M1::M8::M41* v30_0 = v29->add_f_3();
  v30_0->set_f_0(s->substr(0, 463));
  v30_0->set_f_2(0x5bfb84d);
  v30_0->set_f_1(s->substr(0, 32));
  Message2::M1::M8::M41::M58* v31 = v30_0->mutable_f_5();
  v31->set_f_0(0x68fb8a83c5ff67c6);
  Message2::M1::M16* v32 = v20->mutable_f_7();
  v32->set_f_0(s->substr(0, 10));
  Message2::M1::M35* v33_0 = v20->add_f_15();
  v33_0->set_f_0(0x7c);
  Message2::M1::M35::M44* v34 = v33_0->mutable_f_3();
  Message2::M1::M35::M44::M54* v35 = v34->mutable_f_2();
  v35->set_f_1(0x52642);
  v34->set_f_0(0x1a);
  Message2::M1::M13* v36 = v20->mutable_f_5();
  v36->set_f_0(0x14);
  v36->set_f_1(s->substr(0, 107));
  v36->set_f_2(0x62);
  v20->set_f_0(s->substr(0, 6));
  Message2::M1::M9* v37 = v20->mutable_f_3();
  (void)v37;  // Suppresses clang-tidy.
  message->set_f_21(0x5736a3c3a1975a0);
  message->set_f_2(0x6ab08b87a294cae0);
  message->set_f_11(Message2::E2_CONST_1);
  message->set_f_26(s->substr(0, 120));
  message->set_f_15(0x5be155f6c35607a9);
  message->set_f_27(s->substr(0, 1));
  message->set_f_13(s->substr(0, 6));
  message->set_f_9(true);
  message->add_f_22(Message2::E3_CONST_3);
  Message2::M3* v38_0 = message->add_f_57();
  Message2::M3::M36* v39 = v38_0->mutable_f_27();
  v39->set_f_1(s->substr(0, 5));
  Message2::M3::M24* v40_0 = v38_0->add_f_16();
  (void)v40_0;  // Suppresses clang-tidy.
  Message2::M3::M28* v41 = v38_0->mutable_f_20();
  v41->set_f_1(Message2::M3::M28::E11_CONST_3);
  v41->set_f_4(Message2::M3::M28::E12_CONST_1);
  v41->set_f_0(Message2::M3::M28::E10_CONST_1);
  v38_0->set_f_3(0x245a4);
  Message2::M3::M25* v42 = v38_0->mutable_f_17();
  Message2::M3::M25::E9 array_1[13] = {
      Message2::M3::M25::E9_CONST_5, Message2::M3::M25::E9_CONST_3,
      Message2::M3::M25::E9_CONST_1, Message2::M3::M25::E9_CONST_2,
      Message2::M3::M25::E9_CONST_2, Message2::M3::M25::E9_CONST_2,
      Message2::M3::M25::E9_CONST_1, Message2::M3::M25::E9_CONST_5,
      Message2::M3::M25::E9_CONST_5, Message2::M3::M25::E9_CONST_3,
      Message2::M3::M25::E9_CONST_5, Message2::M3::M25::E9_CONST_3,
      Message2::M3::M25::E9_CONST_4,
  };
  for (auto v : array_1) {
    v42->add_f_1(v);
  }
  v42->set_f_0(0x81decc5);
  Message2::M3::M10* v43 = v38_0->mutable_f_11();
  v43->set_f_0(0x7c);
  Message2::M3::M6* v44 = v38_0->mutable_f_10();
  v44->set_f_0(0x4245887);
  v38_0->set_f_4(s->substr(0, 17));
  v38_0->set_f_1(0x52445be);
  v38_0->set_f_0(0x22be17d3);
  Message2::M3::M29* v45 = v38_0->mutable_f_22();
  v45->set_f_0(0xf7c4593);
  Message2::M3::M15* v46_0 = v38_0->add_f_13();
  (void)v46_0;  // Suppresses clang-tidy.
  message->set_f_28(0.361098);
  message->set_f_29(s->substr(0, 32));
  message->set_f_4(s->substr(0, 70));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_11(Message2::E2_CONST_4);
  Message2::E3 array_0[20] = {
      Message2::E3_CONST_5, Message2::E3_CONST_3, Message2::E3_CONST_1,
      Message2::E3_CONST_2, Message2::E3_CONST_5, Message2::E3_CONST_3,
      Message2::E3_CONST_3, Message2::E3_CONST_4, Message2::E3_CONST_2,
      Message2::E3_CONST_4, Message2::E3_CONST_3, Message2::E3_CONST_3,
      Message2::E3_CONST_1, Message2::E3_CONST_2, Message2::E3_CONST_1,
      Message2::E3_CONST_4, Message2::E3_CONST_5, Message2::E3_CONST_1,
      Message2::E3_CONST_5, Message2::E3_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_22(v);
  }
  Message2::M4* v0 = message->mutable_f_58();
  Message2::M4::M33* v1 = v0->mutable_f_25();
  v1->set_f_2(0x3b74346);
  v1->set_f_1(false);
  v1->set_f_0(0x26b0b05b3da7b9da);
  Message2::M4::M14* v2 = v0->mutable_f_21();
  v2->set_f_0(0x7cbe0c23d4022c9f);
  Message2::M4::M37* v3 = v0->mutable_f_26();
  v3->set_f_2(0x47cc04b3cccbb147);
  v3->set_f_0(s->substr(0, 5));
  v3->set_f_4(s->substr(0, 410));
  v3->set_f_1(s->substr(0, 13));
  v3->set_f_6(0x78de8ca95ddac779);
  v3->set_f_5(0x3bee06461042a17e);
  v0->set_f_7(0x59f1fdbd);
  Message2::M4::M17* v4_0 = v0->add_f_22();
  v4_0->set_f_2(0xb17acead3b1c95d);
  v4_0->set_f_3(false);
  v0->set_f_11(0x3df5);
  v0->set_f_12(Message2::M4::E5_CONST_2);
  v0->set_f_4(false);
  v0->set_f_6(s->substr(0, 15));
  v0->set_f_14(0x7c);
  Message2::M4::M39* v5 = v0->mutable_f_27();
  v5->set_f_1(s->substr(0, 27));
  v5->set_f_0(0x57ff74);
  v5->set_f_2(false);
  v0->set_f_9(s->substr(0, 3));
  v0->set_f_15(0x27);
  v0->set_f_16(Message2::M4::E6_CONST_3);
  v0->set_f_0(0x45fa2);
  v0->set_f_8(0x4185bb0c879fe823);
  v0->set_f_13(0x5ec1bd);
  v0->set_f_2(0x493780ee0dea099e);
  Message2::M4::M23* v6_0 = v0->add_f_23();
  v6_0->set_f_0(0.276481);
  v0->set_f_5(true);
  v0->set_f_3(0x7a9f9d0bf251e943);
  message->set_f_10(0x18bfc87903a1cd86);
  message->set_f_20(s->substr(0, 16));
  message->set_f_29(s->substr(0, 65));
  message->set_f_8(s->substr(0, 13));
  message->set_f_1(s->substr(0, 30));
  message->set_f_9(false);
  message->set_f_5(0x2a);
  message->set_f_23(0x6145a706ece23386);
  message->set_f_4(s->substr(0, 2));
  message->set_f_27(s->substr(0, 10));
  message->set_f_19(0x718b2c37f2c6b57e);
  message->set_f_0(s->substr(0, 8));
  message->set_f_17(s->substr(0, 16));
  message->set_f_13(s->substr(0, 8));
  message->set_f_14(false);
  Message2::M2* v7 = message->mutable_f_56();
  Message2::M2::M7* v8 = v7->mutable_f_15();
  v8->set_f_2(0x31db8f68);
  Message2::M2::M7::M46* v9 = v8->mutable_f_9();
  v9->set_f_3(0x43d8091047ea9c13);
  v9->set_f_6(s->substr(0, 11));
  v9->set_f_4(0xcd7f3e16413c202);
  v9->set_f_9(true);
  v9->set_f_2(0x4a82117);
  v9->set_f_1(0x2f26a98cf7d9153a);
  v9->set_f_8(0x10ff63);
  v9->set_f_0(0x538da5b04dff2f87);
  v9->set_f_7(0x7d97498e9ba740d0);
  v8->set_f_0(0x68950a1237663949);
  v8->set_f_4(s->substr(0, 16));
  v8->set_f_3(false);
  Message2::M2::M12* v10 = v7->mutable_f_17();
  v10->set_f_0(0x5450d3cd067d4f58);
  Message2::M2::M11* v11_0 = v7->add_f_16();
  v11_0->set_f_0(s->substr(0, 11));
  v7->set_f_0(s->substr(0, 1));
  Message2::M2::E4 array_1[21] = {
      Message2::M2::E4_CONST_2, Message2::M2::E4_CONST_2,
      Message2::M2::E4_CONST_3, Message2::M2::E4_CONST_2,
      Message2::M2::E4_CONST_2, Message2::M2::E4_CONST_4,
      Message2::M2::E4_CONST_4, Message2::M2::E4_CONST_4,
      Message2::M2::E4_CONST_2, Message2::M2::E4_CONST_1,
      Message2::M2::E4_CONST_3, Message2::M2::E4_CONST_4,
      Message2::M2::E4_CONST_2, Message2::M2::E4_CONST_5,
      Message2::M2::E4_CONST_5, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_5, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_4, Message2::M2::E4_CONST_3,
      Message2::M2::E4_CONST_5,
  };
  for (auto v : array_1) {
    v7->add_f_7(v);
  }
  v7->set_f_5(s->substr(0, 4));
  Message2::M2::M18* v12 = v7->mutable_f_19();
  v12->set_f_0(0x2d041b62b4276bf9);
  Message2::M2::M34* v13_0 = v7->add_f_23();
  Message2::M2::M34::M49* v14 = v13_0->mutable_f_2();
  v14->set_f_0(0x4a3a9823279ea457);
  v13_0->set_f_0(true);
  v7->set_f_2(0x2c7c);
  Message2::M2::M38* v15 = v7->mutable_f_25();
  v15->set_f_0(Message2::M2::M38::E14_CONST_1);
  v15->set_f_3(0x6a54f8d4666bb04a);
  v15->set_f_1(0x72);
  v7->set_f_3(s->substr(0, 32));
  Message2::M2::M40* v16 = v7->mutable_f_27();
  v16->set_f_0(0x6e1d404a);
  v7->set_f_1(0x4dbd17780f3cbc37);
  Message2::M2::M22* v17_0 = v7->add_f_20();
  Message2::M2::M22::E8 array_2[17] = {
      Message2::M2::M22::E8_CONST_5, Message2::M2::M22::E8_CONST_1,
      Message2::M2::M22::E8_CONST_2, Message2::M2::M22::E8_CONST_5,
      Message2::M2::M22::E8_CONST_3, Message2::M2::M22::E8_CONST_4,
      Message2::M2::M22::E8_CONST_5, Message2::M2::M22::E8_CONST_4,
      Message2::M2::M22::E8_CONST_1, Message2::M2::M22::E8_CONST_5,
      Message2::M2::M22::E8_CONST_5, Message2::M2::M22::E8_CONST_1,
      Message2::M2::M22::E8_CONST_2, Message2::M2::M22::E8_CONST_3,
      Message2::M2::M22::E8_CONST_4, Message2::M2::M22::E8_CONST_1,
      Message2::M2::M22::E8_CONST_5,
  };
  for (auto v : array_2) {
    v17_0->add_f_0(v);
  }
  message->set_f_3(s->substr(0, 118));
  message->set_f_12(0x6ad09639ee215376);
  message->set_f_7(0x77b2cb4c65a84db2);
  message->set_f_26(s->substr(0, 12));
  message->set_f_25(s->substr(0, 12));
  message->set_f_2(0x32c5a6249de37f3);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_3(s->substr(0, 103));
  message->set_f_9(true);
  message->set_f_13(s->substr(0, 31));
  message->set_f_19(0x379bea9ab1fe801e);
  message->set_f_11(Message2::E2_CONST_1);
  message->set_f_0(s->substr(0, 14));
  message->set_f_4(s->substr(0, 45));
  message->set_f_27(s->substr(0, 5));
  message->set_f_7(0x6f71de5398d932ba);
  message->set_f_18(0x3b83b6980f004da);
  message->set_f_25(s->substr(0, 24));
  message->set_f_14(false);
  message->set_f_10(0x73020e9a807f0a62);
  Message2::M3* v0_0 = message->add_f_57();
  Message2::M3::M36* v1 = v0_0->mutable_f_27();
  v1->set_f_1(s->substr(0, 264));
  v0_0->set_f_4(s->substr(0, 19));
  v0_0->set_f_2(0x39);
  Message2::M3::M25* v2 = v0_0->mutable_f_17();
  v2->set_f_0(0x30);
  Message2::M3::M21* v3_0 = v0_0->add_f_14();
  v3_0->set_f_0(0x67a9d22a23c718ea);
  Message2::M3::M29* v4 = v0_0->mutable_f_22();
  v4->set_f_0(0x4e522f0c);
  v0_0->set_f_1(0x90e578c);
  v0_0->set_f_0(0x3c5c46ce);
  Message2::M3::M6* v5 = v0_0->mutable_f_10();
  v5->set_f_0(0x25a5);
  Message2::M3::M28* v6 = v0_0->mutable_f_20();
  v6->set_f_0(Message2::M3::M28::E10_CONST_3);
  v6->set_f_1(Message2::M3::M28::E11_CONST_1);
  v6->set_f_4(Message2::M3::M28::E12_CONST_3);
  v6->set_f_3(0xd);
  v6->set_f_5(0x1fb34b);
  Message2::M3::M10* v7 = v0_0->mutable_f_11();
  v7->set_f_0(0x5dac5);
  Message2::M3::M15* v8_0 = v0_0->add_f_13();
  v8_0->set_f_0(0x70ba0a4);
  Message2::M2* v9 = message->mutable_f_56();
  Message2::M2::M22* v10_0 = v9->add_f_20();
  Message2::M2::M22::E8 array_0[18] = {
      Message2::M2::M22::E8_CONST_3, Message2::M2::M22::E8_CONST_1,
      Message2::M2::M22::E8_CONST_4, Message2::M2::M22::E8_CONST_4,
      Message2::M2::M22::E8_CONST_1, Message2::M2::M22::E8_CONST_3,
      Message2::M2::M22::E8_CONST_2, Message2::M2::M22::E8_CONST_4,
      Message2::M2::M22::E8_CONST_1, Message2::M2::M22::E8_CONST_2,
      Message2::M2::M22::E8_CONST_4, Message2::M2::M22::E8_CONST_1,
      Message2::M2::M22::E8_CONST_5, Message2::M2::M22::E8_CONST_5,
      Message2::M2::M22::E8_CONST_3, Message2::M2::M22::E8_CONST_2,
      Message2::M2::M22::E8_CONST_2, Message2::M2::M22::E8_CONST_5,
  };
  for (auto v : array_0) {
    v10_0->add_f_0(v);
  }
  v9->set_f_2(0xd84b02c);
  Message2::M2::M11* v11_0 = v9->add_f_16();
  v11_0->set_f_0(s->substr(0, 367));
  Message2::M2::M5* v12 = v9->mutable_f_14();
  v12->set_f_0(s->substr(0, 103));
  v9->set_f_0(s->substr(0, 7));
  Message2::M2::M40* v13 = v9->mutable_f_27();
  v13->set_f_0(0x6285918);
  v9->set_f_6(s->substr(0, 15));
  v9->set_f_5(s->substr(0, 24));
  v9->set_f_1(0x265d534f92f12872);
  Message2::M2::M18* v14 = v9->mutable_f_19();
  v14->set_f_0(0x6df8fc09786c4dc0);
  v14->set_f_1(0x72bde6f6a425bd68);
  Message2::M2::M32* v15 = v9->mutable_f_22();
  (void)v15;  // Suppresses clang-tidy.
  v9->set_f_4(s->substr(0, 1));
  Message2::M2::M31* v16 = v9->mutable_f_21();
  v16->set_f_3(0x4a02ce4f61588cc);
  Message2::M2::M31::M45* v17_0 = v16->add_f_7();
  Message2::M2::M31::M45::M55* v18 = v17_0->mutable_f_5();
  v18->set_f_0(0x59);
  Message2::M2::M31::M45::M55::M62* v19 = v18->mutable_f_2();
  v19->set_f_2(0x56482b04f353b1f8);
  v19->set_f_4(0x4f408263b5eeba15);
  v19->set_f_3(s->substr(0, 19));
  v19->set_f_1(0x19);
  v19->set_f_5(0x14d05037ee258ace);
  v19->set_f_0(0xf5f5dbb);
  v16->set_f_2(0x87e215f);
  Message2::M2::M31::E13 array_1[11] = {
      Message2::M2::M31::E13_CONST_2, Message2::M2::M31::E13_CONST_3,
      Message2::M2::M31::E13_CONST_5, Message2::M2::M31::E13_CONST_1,
      Message2::M2::M31::E13_CONST_1, Message2::M2::M31::E13_CONST_2,
      Message2::M2::M31::E13_CONST_5, Message2::M2::M31::E13_CONST_3,
      Message2::M2::M31::E13_CONST_4, Message2::M2::M31::E13_CONST_3,
      Message2::M2::M31::E13_CONST_5,
  };
  for (auto v : array_1) {
    v16->add_f_4(v);
  }
  v16->set_f_0(0x240cf98aef085c45);
  v16->set_f_1(s->substr(0, 6));
  Message2::M2::M7* v20 = v9->mutable_f_15();
  Message2::M2::M7::M46* v21 = v20->mutable_f_9();
  v21->set_f_4(0x185aabf9e20bec2f);
  v21->set_f_8(0x67);
  v21->set_f_6(s->substr(0, 7));
  v21->set_f_9(true);
  v21->set_f_0(0x187fac1f45c7c0a);
  v21->set_f_10(0xc83a9a0989368e5);
  v21->set_f_2(0xf4444);
  v21->set_f_7(0x5289f4894a6b5fbf);
  v21->set_f_3(0x4135726cdec5ffb);
  v21->set_f_1(0x2422378ec73b0c90);
  v21->set_f_5(s->substr(0, 99));
  v20->set_f_2(0xd5be87b);
  Message2::M2::M7::M48* v22_0 = v20->add_f_10();
  (void)v22_0;  // Suppresses clang-tidy.
  v20->set_f_4(s->substr(0, 1));
  Message2::M2::M34* v23_0 = v9->add_f_23();
  v23_0->set_f_0(true);
  v9->set_f_3(s->substr(0, 5));
  Message2::E3 array_2[9] = {
      Message2::E3_CONST_3, Message2::E3_CONST_4, Message2::E3_CONST_3,
      Message2::E3_CONST_4, Message2::E3_CONST_1, Message2::E3_CONST_1,
      Message2::E3_CONST_4, Message2::E3_CONST_2, Message2::E3_CONST_4,
  };
  for (auto v : array_2) {
    message->add_f_22(v);
  }
  message->set_f_24(0x7e);
  message->set_f_20(s->substr(0, 18));
  message->set_f_26(s->substr(0, 249));
  message->set_f_21(0x52a6f774a073ff9c);
  message->set_f_29(s->substr(0, 7));
  message->set_f_28(0.148485);
  message->set_f_12(0x6b793c794ee7d341);
  message->set_f_8(s->substr(0, 9));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_28(0.182674);
  message->set_f_23(0x4a6fa99521759625);
  message->set_f_4(s->substr(0, 62));
  message->add_f_22(Message2::E3_CONST_4);
  message->set_f_7(0x7ae4d0401ff0723c);
  message->set_f_12(0x47c81bbe3e99d921);
  message->set_f_16(s->substr(0, 7));
  message->set_f_21(0x30c71b84c692ced7);
  message->set_f_5(0x1);
  message->set_f_27(s->substr(0, 5));
  message->set_f_8(s->substr(0, 26));
  message->set_f_15(0x7961b3b81d8050a6);
  message->set_f_10(0x20c0bb1a2547ea82);
  message->set_f_0(s->substr(0, 15));
  message->set_f_3(s->substr(0, 1));
  message->set_f_17(s->substr(0, 7));
  message->set_f_24(0x1674f8);
  message->set_f_1(s->substr(0, 1));
  message->set_f_29(s->substr(0, 213));
  message->set_f_19(0x56fca6a4981843b1);
  message->set_f_9(true);
  message->set_f_25(s->substr(0, 16));
  message->add_f_6(Message2::E1_CONST_1);
  Message2::M3* v0_0 = message->add_f_57();
  v0_0->set_f_4(s->substr(0, 3));
  Message2::M3::M25* v1 = v0_0->mutable_f_17();
  v1->add_f_1(Message2::M3::M25::E9_CONST_3);
  Message2::M3::M29* v2 = v0_0->mutable_f_22();
  (void)v2;  // Suppresses clang-tidy.
  Message2::M3::M21* v3_0 = v0_0->add_f_14();
  v3_0->set_f_0(0x65609c3a257a9db3);
  Message2::M3::M21::M43* v4 = v3_0->mutable_f_4();
  v4->set_f_0(false);
  Message2::M3::M21::M43::M56* v5 = v4->mutable_f_2();
  v5->set_f_1(s->substr(0, 50));
  Message2::M3::M21::M43::M56::E16 array_0[21] = {
      Message2::M3::M21::M43::M56::E16_CONST_2,
      Message2::M3::M21::M43::M56::E16_CONST_3,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_4,
      Message2::M3::M21::M43::M56::E16_CONST_1,
      Message2::M3::M21::M43::M56::E16_CONST_1,
      Message2::M3::M21::M43::M56::E16_CONST_1,
      Message2::M3::M21::M43::M56::E16_CONST_1,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_2,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_3,
      Message2::M3::M21::M43::M56::E16_CONST_4,
      Message2::M3::M21::M43::M56::E16_CONST_1,
      Message2::M3::M21::M43::M56::E16_CONST_4,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_3,
      Message2::M3::M21::M43::M56::E16_CONST_5,
      Message2::M3::M21::M43::M56::E16_CONST_5,
  };
  for (auto v : array_0) {
    v5->add_f_0(v);
  }
  v0_0->set_f_1(0xca8d5d6);
  v0_0->set_f_2(0x3);
  Message2::M3::M10* v6 = v0_0->mutable_f_11();
  v6->set_f_0(0x2cdc);
  Message2::M3::M24* v7_0 = v0_0->add_f_16();
  v7_0->set_f_0(0x2f);
  Message2::M3::M28* v8 = v0_0->mutable_f_20();
  v8->set_f_1(Message2::M3::M28::E11_CONST_3);
  v8->set_f_0(Message2::M3::M28::E10_CONST_1);
  v8->set_f_5(0x18);
  v8->set_f_3(0x49);
  Message2::M3::M6* v9 = v0_0->mutable_f_10();
  v9->set_f_0(0x79);
  v0_0->set_f_3(0x41d61ad);
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
