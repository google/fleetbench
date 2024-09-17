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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P1/request/Message2.pb.h"

namespace fleetbench::rpc::P1::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M6* v0_0 = message->add_f_54();
  v0_0->set_f_1(0x7c);
  Message2::M6::M19* v1_0 = v0_0->add_f_10();
  v1_0->set_f_0(0x3475d050);
  v1_0->set_f_2(0x27d18bc07a2800b4);
  v1_0->set_f_3(0x7dd11c5d88ecc58e);
  v1_0->set_f_1(0x22);
  v0_0->set_f_0(s->substr(0, 15));
  Message2::M6::M12* v2 = v0_0->mutable_f_9();
  v2->set_f_2(s->substr(0, 2));
  v2->set_f_3(0x72a77917);
  v2->set_f_0(s->substr(0, 90));
  v2->set_f_4(s->substr(0, 26));
  v2->add_f_5(s->substr(0, 5));
  v2->add_f_6(Message2::M6::M12::E9_CONST_2);
  v0_0->set_f_2(0x4126353);
  Message2::M6::M9* v3 = v0_0->mutable_f_6();
  (void)v3;  // Suppresses clang-tidy.
  Message2::E4 array_1[21] = {
      Message2::E4_CONST_1, Message2::E4_CONST_5, Message2::E4_CONST_4,
      Message2::E4_CONST_1, Message2::E4_CONST_4, Message2::E4_CONST_3,
      Message2::E4_CONST_4, Message2::E4_CONST_1, Message2::E4_CONST_2,
      Message2::E4_CONST_3, Message2::E4_CONST_2, Message2::E4_CONST_2,
      Message2::E4_CONST_5, Message2::E4_CONST_5, Message2::E4_CONST_3,
      Message2::E4_CONST_4, Message2::E4_CONST_1, Message2::E4_CONST_3,
      Message2::E4_CONST_4, Message2::E4_CONST_2, Message2::E4_CONST_4,
  };
  for (auto v : array_1) {
    message->add_f_18(v);
  }
  message->set_f_16(0x369b812ea62a9dad);
  message->set_f_24(0x15ab3c);
  message->set_f_0(Message2::E1_CONST_2);
  message->set_f_14(0x69);
  message->set_f_27(0x1e026c43359173d8);
  Message2::M4* v4 = message->mutable_f_50();
  v4->set_f_1(0x7dcd419347f23a9e);
  v4->set_f_0(0xb1108ae);
  Message2::M4::M26* v5 = v4->mutable_f_8();
  v5->set_f_0(0x1476f3f9542b75d8);
  Message2::M4::M31* v6 = v4->mutable_f_9();
  v6->set_f_0(0x21bde40b3eba1e3a);
  Message2::M4::M31::M42* v7 = v6->mutable_f_9();
  (void)v7;  // Suppresses clang-tidy.
  v6->set_f_1(0.194522);
  Message2::M4::M16* v8 = v4->mutable_f_7();
  v8->set_f_0(s->substr(0, 3));
  Message2::M4::M16::M45* v9_0 = v8->add_f_5();
  v9_0->set_f_0(0.259279);
  Message2::M4::M32* v10 = v4->mutable_f_10();
  v10->set_f_0(0x5591a7d4ee772942);
  Message2::M4::M8* v11 = v4->mutable_f_6();
  v11->set_f_1(s->substr(0, 2));
  Message2::M4::M8::M39* v12 = v11->mutable_f_6();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_25(Message2::E5_CONST_1);
  message->set_f_17(s->substr(0, 403));
  message->set_f_12(0x5da6cff25453358b);
  Message2::M5* v13_0 = message->add_f_52();
  v13_0->set_f_4(0x34bd1b2cf1d98edb);
  v13_0->set_f_3(0x2150);
  Message2::M5::M17* v14 = v13_0->mutable_f_14();
  Message2::M5::M17::M40* v15_0 = v14->add_f_4();
  v15_0->set_f_1(s->substr(0, 2));
  v15_0->set_f_3(0x78dedae29d7b3307);
  v15_0->set_f_4(s->substr(0, 6));
  v15_0->set_f_6(0x5c8a7d4b);
  v15_0->set_f_7(s->substr(0, 12));
  v15_0->set_f_5(0x465a4f5);
  v15_0->set_f_0(false);
  v14->set_f_0(0x76ba4fe9d5b9409e);
  v13_0->set_f_1(0x31287ab91db82b76);
  Message2::M5::M33* v16 = v13_0->mutable_f_15();
  v16->set_f_0(0x6d276185);
  Message2::M5::M11* v17 = v13_0->mutable_f_12();
  Message2::M5::M11::M44* v18 = v17->mutable_f_9();
  v18->set_f_0(0x1a2b6dc9);
  v17->set_f_1(0x5a28e51b);
  Message2::M5::M11::M43* v19 = v17->mutable_f_7();
  v19->set_f_0(s->substr(0, 60));
  v17->set_f_2(0x18d03feb);
  v17->set_f_0(true);
  v13_0->set_f_0(0x79f2f14935a425bb);
  v13_0->set_f_2(0x735212150ac2ba2f);
  message->set_f_13(0x596997fce9e37bc1);
  Message2::M1* v20 = message->mutable_f_47();
  v20->set_f_0(0x22f29f5d2c8f3143);
  Message2::M1::M34* v21 = v20->mutable_f_4();
  v21->add_f_11(Message2::M1::M34::E14_CONST_3);
  v21->set_f_9(0x1a0e59);
  v21->set_f_1(s->substr(0, 289));
  v21->set_f_3(Message2::M1::M34::E12_CONST_2);
  v21->set_f_12(s->substr(0, 326));
  v21->set_f_4(true);
  v21->set_f_10(0xa437c50);
  v21->set_f_6(s->substr(0, 373));
  v21->set_f_0(0xbfd);
  v21->set_f_8(0.856573);
  v21->add_f_7(Message2::M1::M34::E13_CONST_3);
  Message2::M1::M13* v22 = v20->mutable_f_2();
  v22->set_f_10(false);
  v22->set_f_6(0x141918);
  Message2::M1::M13::M38* v23_0 = v22->add_f_16();
  v23_0->set_f_0(0x5a896baf111febd0);
  v23_0->set_f_1(s->substr(0, 5));
  v23_0->set_f_3(0x4bb5dfc5f871891b);
  v23_0->set_f_2(0xe3c69);
  v22->set_f_8(s->substr(0, 98));
  v22->set_f_1(0x7f3d8bb609b72bfd);
  v22->set_f_9(0x756f0c35c203b9d);
  v22->set_f_0(s->substr(0, 27));
  v22->set_f_3(0x3f35e6fc178ec74);
  v22->set_f_7(0x2df1292f);
  v22->set_f_4(s->substr(0, 2631));
  v22->set_f_5(0x35b635da3d1d53af);
  v22->set_f_11(s->substr(0, 5));
  Message2::M3* v24 = message->mutable_f_49();
  Message2::M3::M29* v25 = v24->mutable_f_21();
  v25->set_f_0(0x6577a680);
  Message2::M3::M10* v26_0 = v24->add_f_13();
  v26_0->set_f_0(0xb02c55);
  Message2::M3::M30* v27_0 = v24->add_f_22();
  v27_0->set_f_1(0x61c629d2033ea7ad);
  v24->set_f_1(s->substr(0, 20));
  v24->set_f_3(0.840455);
  Message2::M3::M28* v28 = v24->mutable_f_20();
  v28->set_f_6(0.180850);
  v28->set_f_0(Message2::M3::M28::E11_CONST_2);
  v28->set_f_1(true);
  v28->set_f_3(0x4285bb0758569823);
  v28->set_f_5(0xe071b71);
  v28->set_f_2(s->substr(0, 2));
  v28->set_f_4(s->substr(0, 337));
  Message2::M3::M14* v29_0 = v24->add_f_14();
  (void)v29_0;  // Suppresses clang-tidy.
  v24->set_f_0(Message2::M3::E7_CONST_1);
  v24->set_f_2(0x111dd21b);
  message->set_f_7(s->substr(0, 90));
  message->set_f_1(0x5424faa57caf57e3);
  message->set_f_3(s->substr(0, 21));
  message->set_f_23(0x15);
  Message2::E6 array_2[10] = {
      Message2::E6_CONST_1, Message2::E6_CONST_5, Message2::E6_CONST_5,
      Message2::E6_CONST_4, Message2::E6_CONST_2, Message2::E6_CONST_2,
      Message2::E6_CONST_3, Message2::E6_CONST_2, Message2::E6_CONST_3,
      Message2::E6_CONST_2,
  };
  for (auto v : array_2) {
    message->add_f_29(v);
  }
  message->set_f_6(0.683688);
  message->set_f_21(0x736c43ff);
  message->set_f_19(0x23d185b0d44e196a);
  message->set_f_5(Message2::E2_CONST_1);
  message->set_f_8(s->substr(0, 7));
  message->set_f_28(true);
  message->set_f_4(0x32570);
  message->set_f_22(0x988484b);
  message->set_f_26(s->substr(0, 384));
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_27(0x2494c973757141d6);
  Message2::E6 array_0[12] = {
      Message2::E6_CONST_1, Message2::E6_CONST_4, Message2::E6_CONST_1,
      Message2::E6_CONST_1, Message2::E6_CONST_1, Message2::E6_CONST_3,
      Message2::E6_CONST_5, Message2::E6_CONST_4, Message2::E6_CONST_5,
      Message2::E6_CONST_1, Message2::E6_CONST_1, Message2::E6_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_29(v);
  }
  message->set_f_17(s->substr(0, 5));
  message->set_f_2(s->substr(0, 8));
  message->set_f_16(0x3356c71d3ca8311);
  Message2::M1* v0 = message->mutable_f_47();
  Message2::M1::M13* v1 = v0->mutable_f_2();
  v1->set_f_4(s->substr(0, 15));
  v1->set_f_10(false);
  v1->set_f_1(0x3eba828e8b811e7c);
  v1->set_f_7(0x3e4dd95a);
  v1->set_f_6(0x1417fb);
  v1->set_f_8(s->substr(0, 7));
  v1->set_f_2(s->substr(0, 108));
  Message2::M1::M13::M38* v2_0 = v1->add_f_16();
  v2_0->set_f_2(0x863ae);
  v2_0->set_f_1(s->substr(0, 1));
  v2_0->set_f_0(0x66375716d913009b);
  v2_0->set_f_3(0x546f67c5a111a20a);
  v1->set_f_11(s->substr(0, 3));
  v1->set_f_9(0x3a0981dfd1ea9313);
  v1->set_f_0(s->substr(0, 5));
  v1->set_f_3(0x4976e74f0b693328);
  v0->set_f_0(0x3ce8ed3c2c789f3);
  Message2::M1::M21* v3 = v0->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_15(0x74);
  message->set_f_14(0xfcd21e3);
  message->set_f_6(0.679998);
  Message2::M5* v4_0 = message->add_f_52();
  v4_0->set_f_1(0x450393cf65267896);
  Message2::M5::M33* v5 = v4_0->mutable_f_15();
  v5->set_f_0(0x96a6129);
  v4_0->set_f_0(0x25024de6264c1079);
  v4_0->set_f_3(0x6db);
  v4_0->set_f_2(0x18325a397ec8f26);
  v4_0->set_f_4(0x58ab0ce4a373c767);
  Message2::M5::M17* v6 = v4_0->mutable_f_14();
  v6->set_f_0(0x515ec16e3cf485d5);
  Message2::M5::M11* v7 = v4_0->mutable_f_12();
  Message2::M5::M11::M43* v8 = v7->mutable_f_7();
  v8->set_f_0(s->substr(0, 28));
  v7->set_f_0(true);
  Message2::M5::M11::M44* v9 = v7->mutable_f_9();
  v9->set_f_0(0x1960e2bd);
  v7->set_f_2(0x116c1a96);
  v7->set_f_1(0x5ee73bb1);
  v7->set_f_3(0xb658443);
  message->set_f_23(0x64);
  message->set_f_9(Message2::E3_CONST_1);
  message->set_f_19(0x4acdcc885068ca37);
  Message2::M3* v10 = message->mutable_f_49();
  v10->set_f_1(s->substr(0, 6));
  v10->set_f_2(0x76fb5696);
  v10->set_f_0(Message2::M3::E7_CONST_3);
  Message2::M3::M28* v11 = v10->mutable_f_20();
  v11->set_f_4(s->substr(0, 10));
  v11->set_f_3(0x2bd3f37e36d6992e);
  v11->set_f_1(false);
  v11->set_f_6(0.027289);
  v11->set_f_2(s->substr(0, 7));
  v11->set_f_5(0xf);
  v11->set_f_0(Message2::M3::M28::E11_CONST_1);
  v10->set_f_3(0.638337);
  Message2::M3::M14* v12_0 = v10->add_f_14();
  v12_0->set_f_0(0x1fae96e8420a6319);
  Message2::M3::M14::M36* v13_0 = v12_0->add_f_3();
  v13_0->set_f_0(s->substr(0, 2534));
  v13_0->set_f_6(0x54b286b2);
  v13_0->set_f_3(0x57deca67);
  Message2::M3::M14::M36::M49* v14_0 = v13_0->add_f_11();
  v14_0->set_f_3(0x27adac5f1fd6325d);
  v14_0->set_f_1(0xc);
  Message2::M3::M14::M36::M49::M54* v15_0 = v14_0->add_f_6();
  (void)v15_0;  // Suppresses clang-tidy.
  v14_0->set_f_2(0x87c0ff6);
  v14_0->set_f_0(0xc538d69);
  v13_0->set_f_2(0x4448f04e162d3926);
  v13_0->set_f_1(0x7dad0bb1e3d95ce0);
  Message2::M3::M15* v16 = v10->mutable_f_15();
  v16->set_f_0(true);
  v16->set_f_1(0x24e48e786d4c3139);
  v16->set_f_3(0xf50c2);
  v16->set_f_2(0.366120);
  v16->set_f_4(0x26869f8875a367ab);
  Message2::M3::M29* v17 = v10->mutable_f_21();
  v17->set_f_0(0x70c20d91);
  message->set_f_22(0xbeff809);
  message->set_f_10(0.859985);
  message->set_f_8(s->substr(0, 12));
  message->set_f_11(0x3010c95d6b2c5e8e);
  message->set_f_0(Message2::E1_CONST_2);
  Message2::M2* v18 = message->mutable_f_48();
  Message2::M2::M18* v19 = v18->mutable_f_4();
  v19->set_f_3(true);
  v19->set_f_0(s->substr(0, 97));
  v19->set_f_1(s->substr(0, 7));
  v19->set_f_2(true);
  Message2::M2::M20* v20 = v18->mutable_f_5();
  v20->set_f_0(0xa0e5bc63e8e20f1);
  Message2::M2::M20::M35* v21 = v20->mutable_f_8();
  v21->set_f_0(0x6c95c70a9d459c11);
  Message2::M2::M20::M35::M48* v22_0 = v21->add_f_4();
  v22_0->set_f_1(0x3b1bbf56);
  v22_0->set_f_2(0x11);
  v22_0->add_f_0(Message2::M2::M20::M35::M48::E17_CONST_5);
  v22_0->add_f_0(Message2::M2::M20::M35::M48::E17_CONST_2);
  v22_0->set_f_3(0x4a9d377fa);
  Message2::M2::M20::M35::M48::M60* v23 = v22_0->mutable_f_8();
  v23->set_f_0(s->substr(0, 11));
  Message2::M2::M20::M35::M52* v24 = v21->mutable_f_7();
  v24->set_f_1(true);
  v24->set_f_0(0x1b89166c58f6315f);
  Message2::M2::M20::M35::M52::M61* v25 = v24->mutable_f_6();
  v25->set_f_4(0xa4a02e);
  v25->set_f_3(s->substr(0, 20));
  v25->set_f_1(s->substr(0, 36));
  v25->set_f_0(0x49);
  v24->set_f_2(true);
  Message2::M2::M20::M35::M50* v26 = v21->mutable_f_5();
  v26->set_f_1(0x4ae6e2297488a7e4);
  v26->set_f_0(0x23ddd9ed63bf6126);
  v26->set_f_2(0x5c7e7a2516cc8fb6);
  v20->set_f_2(0x2d);
  Message2::M2::M20::M46* v27 = v20->mutable_f_9();
  v27->set_f_2(0xfb02f01);
  v27->set_f_0(0x3a5fbf4be0521f87);
  v27->add_f_4(Message2::M2::M20::M46::E16_CONST_1);
  v27->set_f_3(0x1dde9d80e8c6377e);
  v27->set_f_1(0x3699);
  v20->add_f_1(Message2::M2::M20::E10_CONST_2);
  Message2::M2::M25* v28 = v18->mutable_f_10();
  v28->set_f_0(s->substr(0, 6));
  Message2::M2::M22* v29_0 = v18->add_f_6();
  v29_0->set_f_0(s->substr(0, 27));
  v18->set_f_1(0x6e46f583ec67a7e8);
  Message2::M2::M23* v30 = v18->mutable_f_8();
  v30->set_f_0(0x4fe0dfba7b2a9b58);
  v18->set_f_0(0x554faae84919791f);
  Message2::M2::M27* v31 = v18->mutable_f_12();
  Message2::M2::M27::M37* v32 = v31->mutable_f_3();
  v32->set_f_2(s->substr(0, 3));
  v32->add_f_0(Message2::M2::M27::M37::E15_CONST_1);
  v31->set_f_0(0x1992e4bc);
  message->set_f_5(Message2::E2_CONST_3);
  message->set_f_13(0x579f1c44c66ab602);
  message->set_f_4(0x1737);
  Message2::E4 array_1[19] = {
      Message2::E4_CONST_4, Message2::E4_CONST_5, Message2::E4_CONST_4,
      Message2::E4_CONST_4, Message2::E4_CONST_1, Message2::E4_CONST_2,
      Message2::E4_CONST_2, Message2::E4_CONST_4, Message2::E4_CONST_3,
      Message2::E4_CONST_2, Message2::E4_CONST_1, Message2::E4_CONST_5,
      Message2::E4_CONST_4, Message2::E4_CONST_1, Message2::E4_CONST_2,
      Message2::E4_CONST_4, Message2::E4_CONST_3, Message2::E4_CONST_1,
      Message2::E4_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_18(v);
  }
  message->set_f_21(0x12addbb0);
  message->set_f_24(0xf);
  message->set_f_12(0x7095f5ae48fa71b3);
  message->set_f_28(false);
  message->set_f_7(s->substr(0, 21));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_11(0x4965cef6976c996f);
  message->set_f_17(s->substr(0, 3));
  message->set_f_5(Message2::E2_CONST_1);
  message->set_f_7(s->substr(0, 162));
  message->set_f_19(0x5cb5dac7eb2a0e4f);
  message->set_f_21(0x10e64448);
  message->set_f_25(Message2::E5_CONST_1);
  message->set_f_14(0xc89ec);
  Message2::M6* v0_0 = message->add_f_54();
  v0_0->set_f_2(0x137f98);
  Message2::M6::M12* v1 = v0_0->mutable_f_9();
  v1->set_f_3(0x27b75888);
  v1->set_f_1(s->substr(0, 19));
  v1->add_f_6(Message2::M6::M12::E9_CONST_1);
  v1->set_f_4(s->substr(0, 15));
  v1->set_f_2(s->substr(0, 5));
  v1->set_f_0(s->substr(0, 1));
  v0_0->set_f_0(s->substr(0, 3));
  Message2::M6::M9* v2 = v0_0->mutable_f_6();
  v2->set_f_0(0x62cc329);
  Message2::M6::M7* v3 = v0_0->mutable_f_5();
  v3->set_f_0(0x328c);
  v3->set_f_1(s->substr(0, 21));
  v0_0->set_f_1(0x794ca3e);
  Message2::M6::M19* v4_0 = v0_0->add_f_10();
  v4_0->set_f_3(0x1f1e01efdda35ac8);
  v4_0->set_f_2(0x7dcb0145f251c530);
  v4_0->set_f_0(0x163206b0);
  v4_0->set_f_1(0x3c9b2);
  message->set_f_15(0x140520);
  message->set_f_6(0.229021);
  Message2::M4* v5 = message->mutable_f_50();
  Message2::M4::M26* v6 = v5->mutable_f_8();
  v6->set_f_0(0x391e907ef0c406ca);
  Message2::M4::M16* v7 = v5->mutable_f_7();
  Message2::M4::M16::M41* v8 = v7->mutable_f_4();
  v8->set_f_1(0x26c4f522e294201);
  v8->set_f_0(0x27c3);
  v7->set_f_0(s->substr(0, 2));
  v5->set_f_0(0x1ab1);
  Message2::M4::M8* v9 = v5->mutable_f_6();
  Message2::M4::M8::M39* v10 = v9->mutable_f_6();
  v10->set_f_0(s->substr(0, 1152));
  v9->set_f_0(Message2::M4::M8::E8_CONST_3);
  v9->set_f_1(s->substr(0, 10));
  Message2::M4::M31* v11 = v5->mutable_f_9();
  v11->set_f_1(0.093808);
  v11->set_f_0(0x60e552ab2e45b089);
  Message2::M4::M31::M42* v12 = v11->mutable_f_9();
  v12->set_f_0(0x3130);
  v5->set_f_1(0x30e36259c78b4194);
  Message2::M4::M32* v13 = v5->mutable_f_10();
  v13->set_f_0(0x1f8471fb0be3a0);
  message->set_f_12(0x1b960d66794927a8);
  message->set_f_27(0x5286bff635b135c8);
  Message2::M2* v14 = message->mutable_f_48();
  Message2::M2::M25* v15 = v14->mutable_f_10();
  v15->set_f_0(s->substr(0, 2));
  v15->set_f_1(0.295170);
  Message2::M2::M22* v16_0 = v14->add_f_6();
  v16_0->set_f_0(s->substr(0, 3));
  v14->set_f_0(0x4699a9f54d0fb83a);
  Message2::M2::M18* v17 = v14->mutable_f_4();
  v17->set_f_1(s->substr(0, 22));
  Message2::M2::M18::M47* v18_0 = v17->add_f_7();
  v18_0->set_f_4(s->substr(0, 302));
  Message2::M2::M18::M47::M51* v19_0 = v18_0->add_f_9();
  Message2::M2::M18::M47::M51::M57* v20 = v19_0->mutable_f_6();
  v20->set_f_2(s->substr(0, 5));
  v20->set_f_0(0xbdd);
  v20->set_f_1(0x3c4c43eb2530429f);
  Message2::M2::M18::M47::M51::M56* v21 = v19_0->mutable_f_4();
  v21->set_f_0(s->substr(0, 12));
  Message2::M2::M18::M47::M51::M58* v22_0 = v19_0->add_f_8();
  v22_0->set_f_0(0x3185b14);
  v18_0->set_f_1(0.981612);
  v18_0->set_f_3(0x2c39e178eb82b580);
  v18_0->set_f_5(0x49d7d61129baff11);
  v18_0->set_f_2(0x2c49165f2c9c0261);
  Message2::M2::M18::M47::M53* v23 = v18_0->mutable_f_13();
  v23->set_f_2(0x1c);
  v23->set_f_13(0x3199e1b);
  v23->set_f_11(0x6c4d087b06ff5275);
  v23->set_f_5(0x4a);
  v23->set_f_9(0x1ca756e);
  v23->set_f_17(0x74612);
  v23->set_f_0(s->substr(0, 23));
  v23->set_f_20(s->substr(0, 21));
  v23->set_f_15(s->substr(0, 117));
  v23->add_f_19(Message2::M2::M18::M47::M53::E18_CONST_2);
  v23->add_f_19(Message2::M2::M18::M47::M53::E18_CONST_2);
  v23->set_f_14(s->substr(0, 14));
  v23->set_f_1(true);
  v23->set_f_16(true);
  v23->set_f_18(0x2402bda72);
  v23->add_f_12(0x7a);
  v23->set_f_3(s->substr(0, 3));
  v23->set_f_21(0x19bb78fdc0c30fee);
  v23->set_f_4(s->substr(0, 9));
  v17->set_f_2(true);
  v17->set_f_3(true);
  v17->set_f_0(s->substr(0, 227));
  v14->set_f_1(0x1b88be6e394e3c20);
  message->set_f_28(false);
  message->set_f_24(0x38d6464);
  message->set_f_2(s->substr(0, 11));
  message->set_f_0(Message2::E1_CONST_1);
  message->set_f_8(s->substr(0, 7));
  message->set_f_26(s->substr(0, 15));
  message->set_f_9(Message2::E3_CONST_4);
  Message2::E4 array_0[11] = {
      Message2::E4_CONST_1, Message2::E4_CONST_1, Message2::E4_CONST_4,
      Message2::E4_CONST_1, Message2::E4_CONST_5, Message2::E4_CONST_5,
      Message2::E4_CONST_5, Message2::E4_CONST_5, Message2::E4_CONST_2,
      Message2::E4_CONST_5, Message2::E4_CONST_1,
  };
  for (auto v : array_0) {
    message->add_f_18(v);
  }
  Message2::M1* v24 = message->mutable_f_47();
  Message2::M1::M21* v25 = v24->mutable_f_3();
  v25->set_f_0(s->substr(0, 13));
  Message2::M1::M13* v26 = v24->mutable_f_2();
  v26->set_f_8(s->substr(0, 4));
  v26->set_f_0(s->substr(0, 1));
  v26->set_f_1(0x37062bdb5ec94f54);
  Message2::M1::M13::M38* v27_0 = v26->add_f_16();
  v27_0->set_f_2(0x5e);
  v27_0->set_f_1(s->substr(0, 334));
  v27_0->set_f_0(0x7f866ec2b7dab7bf);
  v26->set_f_11(s->substr(0, 4));
  v26->set_f_4(s->substr(0, 8));
  v26->set_f_2(s->substr(0, 10));
  v26->set_f_9(0x29328e8e28ea0095);
  v26->set_f_3(0x2548807a7b3f4eda);
  v26->set_f_7(0x43d34e59);
  v26->set_f_5(0x71a3836d57102459);
  v26->set_f_10(false);
  v26->set_f_6(0x67);
  Message2::M1::M34* v28 = v24->mutable_f_4();
  v28->set_f_5(0x3e);
  v28->set_f_12(s->substr(0, 6));
  v28->set_f_2(s->substr(0, 7));
  v28->add_f_11(Message2::M1::M34::E14_CONST_2);
  v28->set_f_3(Message2::M1::M34::E12_CONST_1);
  v28->set_f_0(0x3a74);
  v28->set_f_4(true);
  v28->add_f_7(Message2::M1::M34::E13_CONST_3);
  v28->set_f_9(0x1a);
  v28->set_f_6(s->substr(0, 2425));
  v28->set_f_8(0.796615);
  v28->set_f_10(0xb);
  message->set_f_13(0x51631965392dfc7d);
  message->set_f_3(s->substr(0, 62));
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_27(0x7fa54b55cab7707c);
  Message2::M4* v0 = message->mutable_f_50();
  Message2::M4::M8* v1 = v0->mutable_f_6();
  v1->set_f_1(s->substr(0, 12));
  Message2::M4::M8::M39* v2 = v1->mutable_f_6();
  v2->set_f_1(0x498c8a3a);
  v1->set_f_0(Message2::M4::M8::E8_CONST_4);
  Message2::M4::M32* v3 = v0->mutable_f_10();
  v3->set_f_0(0x1413cd3713780f53);
  Message2::M4::M16* v4 = v0->mutable_f_7();
  Message2::M4::M16::M45* v5_0 = v4->add_f_5();
  v5_0->set_f_0(0.599296);
  Message2::M4::M16::M41* v6 = v4->mutable_f_4();
  v6->set_f_0(0x67);
  v4->set_f_0(s->substr(0, 43));
  Message2::M4::M26* v7 = v0->mutable_f_8();
  v7->set_f_0(0x30a7f762c2fededf);
  v0->set_f_1(0x1c753d107264a5f3);
  v0->set_f_0(0x1e);
  Message2::M4::M31* v8 = v0->mutable_f_9();
  v8->set_f_0(0x351e3a5bd8f1d30e);
  v8->set_f_1(0.604125);
  Message2::M4::M31::M42* v9 = v8->mutable_f_9();
  v9->set_f_0(0x795fb8ba11);
  message->set_f_25(Message2::E5_CONST_2);
  message->set_f_1(0x6a157e2007d30f8e);
  Message2::M2* v10 = message->mutable_f_48();
  Message2::M2::M23* v11 = v10->mutable_f_8();
  v11->set_f_0(0x5d2e8d9ebf3a1d61);
  Message2::M2::M22* v12_0 = v10->add_f_6();
  v12_0->set_f_0(s->substr(0, 108));
  Message2::M2::M20* v13 = v10->mutable_f_5();
  v13->add_f_1(Message2::M2::M20::E10_CONST_5);
  v13->set_f_2(0x507c9);
  Message2::M2::M20::M46* v14 = v13->mutable_f_9();
  v14->add_f_4(Message2::M2::M20::M46::E16_CONST_2);
  v14->set_f_1(0x151d98);
  v14->set_f_3(0x3883cf1c1c601d01);
  v14->set_f_2(0x7ba9b004);
  v14->set_f_0(0x78a662f4af5d4233);
  Message2::M2::M20::M35* v15 = v13->mutable_f_8();
  v15->set_f_0(0x5171e422ead8be8e);
  Message2::M2::M20::M35::M50* v16 = v15->mutable_f_5();
  v16->set_f_1(0x47e202cfe2a2c32c);
  v16->set_f_2(0x70dc7ba58bf9d703);
  v16->set_f_0(0x87445b17775a938);
  Message2::M2::M20::M35::M52* v17 = v15->mutable_f_7();
  Message2::M2::M20::M35::M52::M61* v18 = v17->mutable_f_6();
  v18->set_f_1(s->substr(0, 8));
  v18->set_f_4(0x3ac);
  v18->set_f_0(0x5b);
  v17->set_f_2(true);
  Message2::M2::M18* v19 = v10->mutable_f_4();
  v19->set_f_1(s->substr(0, 397));
  v19->set_f_2(false);
  v19->set_f_3(true);
  v19->set_f_0(s->substr(0, 2));
  Message2::M2::M18::M47* v20_0 = v19->add_f_7();
  v20_0->set_f_5(0x4b40c1ec06d55afb);
  v20_0->set_f_3(0x66d93ed5825abb85);
  v20_0->set_f_2(0x528cf5fa3ec0d5ec);
  v20_0->set_f_4(s->substr(0, 3));
  v20_0->set_f_0(true);
  Message2::M2::M18::M47::M53* v21 = v20_0->mutable_f_13();
  v21->set_f_2(0xd60cabf);
  v21->set_f_0(s->substr(0, 17));
  v21->set_f_20(s->substr(0, 16));
  v21->set_f_13(0x26cd4fb3);
  v21->set_f_4(s->substr(0, 2018));
  v21->set_f_6(0x6a5908c);
  v21->set_f_3(s->substr(0, 68));
  v21->set_f_21(0x4a55522ab60c7663);
  v21->set_f_15(s->substr(0, 233));
  v21->set_f_10(0x7ce7954e);
  v21->set_f_1(true);
  v21->set_f_11(0x2c162c4211e95f4e);
  v21->set_f_16(false);
  v21->set_f_9(0x14);
  Message2::M2::M18::M47::M53::E18 array_0[19] = {
      Message2::M2::M18::M47::M53::E18_CONST_1,
      Message2::M2::M18::M47::M53::E18_CONST_3,
      Message2::M2::M18::M47::M53::E18_CONST_4,
      Message2::M2::M18::M47::M53::E18_CONST_3,
      Message2::M2::M18::M47::M53::E18_CONST_2,
      Message2::M2::M18::M47::M53::E18_CONST_3,
      Message2::M2::M18::M47::M53::E18_CONST_4,
      Message2::M2::M18::M47::M53::E18_CONST_1,
      Message2::M2::M18::M47::M53::E18_CONST_1,
      Message2::M2::M18::M47::M53::E18_CONST_3,
      Message2::M2::M18::M47::M53::E18_CONST_1,
      Message2::M2::M18::M47::M53::E18_CONST_4,
      Message2::M2::M18::M47::M53::E18_CONST_1,
      Message2::M2::M18::M47::M53::E18_CONST_4,
      Message2::M2::M18::M47::M53::E18_CONST_3,
      Message2::M2::M18::M47::M53::E18_CONST_1,
      Message2::M2::M18::M47::M53::E18_CONST_3,
      Message2::M2::M18::M47::M53::E18_CONST_2,
      Message2::M2::M18::M47::M53::E18_CONST_1,
  };
  for (auto v : array_0) {
    v21->add_f_19(v);
  }
  v21->set_f_14(s->substr(0, 3));
  v21->add_f_12(0x78);
  v21->set_f_17(0x148017);
  v21->set_f_5(0x1b2b);
  v21->set_f_8(0x7ac74bc);
  v21->set_f_18(0x316ed48c88e);
  v20_0->set_f_1(0.897991);
  v10->set_f_1(0x1146c108a80cde14);
  Message2::M2::M27* v22 = v10->mutable_f_12();
  Message2::M2::M27::M37* v23 = v22->mutable_f_3();
  v23->set_f_1(true);
  Message2::M2::M27::M37::E15 array_1[14] = {
      Message2::M2::M27::M37::E15_CONST_3, Message2::M2::M27::M37::E15_CONST_2,
      Message2::M2::M27::M37::E15_CONST_2, Message2::M2::M27::M37::E15_CONST_1,
      Message2::M2::M27::M37::E15_CONST_5, Message2::M2::M27::M37::E15_CONST_1,
      Message2::M2::M27::M37::E15_CONST_4, Message2::M2::M27::M37::E15_CONST_1,
      Message2::M2::M27::M37::E15_CONST_4, Message2::M2::M27::M37::E15_CONST_5,
      Message2::M2::M27::M37::E15_CONST_5, Message2::M2::M27::M37::E15_CONST_5,
      Message2::M2::M27::M37::E15_CONST_4, Message2::M2::M27::M37::E15_CONST_5,
  };
  for (auto v : array_1) {
    v23->add_f_0(v);
  }
  v23->set_f_2(s->substr(0, 4));
  v22->set_f_0(0x77eb9186);
  Message2::M2::M25* v24 = v10->mutable_f_10();
  v24->set_f_1(0.803288);
  v24->set_f_0(s->substr(0, 20));
  message->set_f_24(0x37c3275);
  Message2::E6 array_2[18] = {
      Message2::E6_CONST_1, Message2::E6_CONST_4, Message2::E6_CONST_1,
      Message2::E6_CONST_4, Message2::E6_CONST_4, Message2::E6_CONST_2,
      Message2::E6_CONST_3, Message2::E6_CONST_2, Message2::E6_CONST_5,
      Message2::E6_CONST_2, Message2::E6_CONST_3, Message2::E6_CONST_5,
      Message2::E6_CONST_5, Message2::E6_CONST_3, Message2::E6_CONST_4,
      Message2::E6_CONST_2, Message2::E6_CONST_4, Message2::E6_CONST_3,
  };
  for (auto v : array_2) {
    message->add_f_29(v);
  }
  message->set_f_28(true);
  message->set_f_9(Message2::E3_CONST_3);
  Message2::M5* v25_0 = message->add_f_52();
  v25_0->set_f_4(0x3b1a987868422931);
  v25_0->set_f_2(0x11b543056515d823);
  Message2::M5::M17* v26 = v25_0->mutable_f_14();
  Message2::M5::M17::M40* v27_0 = v26->add_f_4();
  v27_0->set_f_0(true);
  v27_0->set_f_6(0x1786dc22);
  v27_0->set_f_3(0x18e6f7216e9f9ad3);
  v27_0->set_f_7(s->substr(0, 2));
  v27_0->set_f_5(0x4223872);
  v27_0->set_f_1(s->substr(0, 82));
  v26->set_f_0(0x6de7a1ff2c628cbc);
  v25_0->set_f_1(0xf20ca77ae84f96e);
  v25_0->set_f_3(0x10);
  v25_0->set_f_0(0x77d4c30dfe2c56d6);
  Message2::M5::M33* v28 = v25_0->mutable_f_15();
  v28->set_f_0(0x3ec2155b);
  message->set_f_17(s->substr(0, 3));
  message->set_f_13(0x4c86fd6ab1d19d55);
  message->set_f_21(0x4ac50706);
  message->set_f_4(0x1894);
  Message2::M6* v29_0 = message->add_f_54();
  v29_0->set_f_0(s->substr(0, 482));
  Message2::M6::M7* v30 = v29_0->mutable_f_5();
  v30->set_f_0(0xe);
  v29_0->set_f_2(0x67);
  Message2::M6::M9* v31 = v29_0->mutable_f_6();
  v31->set_f_0(0x6323eef);
  Message2::M6::M12* v32 = v29_0->mutable_f_9();
  v32->set_f_1(s->substr(0, 401));
  v32->set_f_0(s->substr(0, 4));
  v32->set_f_3(0x6451fdf4);
  v32->add_f_5(s->substr(0, 3));
  v32->set_f_2(s->substr(0, 8));
  v32->set_f_4(s->substr(0, 10));
  Message2::M6::M19* v33_0 = v29_0->add_f_10();
  v33_0->set_f_3(0x275f1f8332bb0abd);
  v33_0->set_f_2(0x5ab05b0f1630854);
  v33_0->set_f_1(0x10);
  message->set_f_23(0x242f);
  message->set_f_16(0x15322370d0ee097);
  message->set_f_19(0x45654fa46385687c);
  Message2::M1* v34 = message->mutable_f_47();
  Message2::M1::M21* v35 = v34->mutable_f_3();
  v35->set_f_0(s->substr(0, 22));
  Message2::M1::M13* v36 = v34->mutable_f_2();
  v36->set_f_9(0x78fb13f56a8c5702);
  v36->set_f_4(s->substr(0, 73));
  v36->set_f_1(0x43a37449484a70c0);
  v36->set_f_3(0x4b5ef5435668a04e);
  v36->set_f_5(0xeb31362f8cacf36);
  v36->set_f_6(0x15b097);
  v36->set_f_0(s->substr(0, 3));
  v34->set_f_0(0x1f9b49af730bd957);
  Message2::M1::M34* v37 = v34->mutable_f_4();
  v37->add_f_7(Message2::M1::M34::E13_CONST_3);
  v37->set_f_8(0.167506);
  v37->set_f_3(Message2::M1::M34::E12_CONST_4);
  v37->set_f_9(0x6493546);
  v37->set_f_12(s->substr(0, 32));
  v37->set_f_0(0x68);
  v37->set_f_2(s->substr(0, 353));
  Message2::M1::M34::E14 array_3[19] = {
      Message2::M1::M34::E14_CONST_4, Message2::M1::M34::E14_CONST_3,
      Message2::M1::M34::E14_CONST_4, Message2::M1::M34::E14_CONST_2,
      Message2::M1::M34::E14_CONST_3, Message2::M1::M34::E14_CONST_4,
      Message2::M1::M34::E14_CONST_2, Message2::M1::M34::E14_CONST_5,
      Message2::M1::M34::E14_CONST_2, Message2::M1::M34::E14_CONST_4,
      Message2::M1::M34::E14_CONST_2, Message2::M1::M34::E14_CONST_5,
      Message2::M1::M34::E14_CONST_1, Message2::M1::M34::E14_CONST_2,
      Message2::M1::M34::E14_CONST_4, Message2::M1::M34::E14_CONST_5,
      Message2::M1::M34::E14_CONST_3, Message2::M1::M34::E14_CONST_1,
      Message2::M1::M34::E14_CONST_5,
  };
  for (auto v : array_3) {
    v37->add_f_11(v);
  }
  v37->set_f_1(s->substr(0, 14));
  v37->set_f_10(0xecb62);
  v37->set_f_5(0x2d);
  message->set_f_7(s->substr(0, 2));
  message->set_f_3(s->substr(0, 6));
  message->set_f_20(0x19ac3a);
  message->set_f_8(s->substr(0, 11));
  message->set_f_0(Message2::E1_CONST_4);
  message->set_f_22(0x2765d4a);
  message->set_f_15(0x45e);
  message->set_f_10(0.430844);
  message->add_f_18(Message2::E4_CONST_3);
  message->set_f_11(0x178d38ad73a985e5);
  message->set_f_26(s->substr(0, 7));
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
}  // namespace fleetbench::rpc::P1::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P1_REQUEST_ACCESS_MESSAGE2_H_
