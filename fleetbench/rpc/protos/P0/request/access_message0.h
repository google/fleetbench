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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message0.pb.h"

namespace fleetbench::rpc::P0::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_2(0x3916);
  message->set_f_10(0x64);
  message->set_f_11(s->substr(0, 405));
  message->set_f_12(false);
  message->set_f_14(0x403d29813fe11dc4);
  Message0::M2* v0 = message->mutable_f_48();
  v0->set_f_0(0x6bbca61613412d59);
  Message0::M2::M33* v1 = v0->mutable_f_8();
  v1->set_f_1(0x6133fd38179a63f8);
  v1->set_f_3(true);
  v1->set_f_4(0x7c87c99796a4a555);
  v1->set_f_0(0x73baf59dd65516d1);
  Message0::M2::M23* v2 = v0->mutable_f_6();
  v2->set_f_0(0xb05d7e9);
  v0->set_f_1(0x524b6b483e5eabbe);
  Message0::M2::M22* v3_0 = v0->add_f_4();
  v3_0->set_f_1(0x53a81fd79ba5d7fb);
  Message0::M2::M29* v4 = v0->mutable_f_7();
  Message0::M2::M29::M74* v5 = v4->mutable_f_2();
  Message0::M2::M29::M74::M97* v6 = v5->mutable_f_4();
  v6->set_f_0(0x6a76913f);
  v5->set_f_0(s->substr(0, 202));
  Message0::M2::M29::M74::M92* v7 = v5->mutable_f_3();
  v7->set_f_2(0xd);
  v7->set_f_1(0x13cb49);
  v7->set_f_0(0x39d3a19f31a1f232);
  v7->set_f_5(0xdde8463);
  v7->set_f_4(0x1c);
  v7->set_f_3(Message0::M2::M29::M74::M92::E18_CONST_4);
  message->set_f_20(0x1a839e4aab2ec26f);
  Message0::M4* v8 = message->mutable_f_50();
  v8->set_f_0(0.391331);
  Message0::M4::M58* v9 = v8->mutable_f_9();
  v9->set_f_0(s->substr(0, 13));
  Message0::M4::M58::M77* v10 = v9->mutable_f_2();
  v10->set_f_1(0x7f8ed3e79118f50c);
  Message0::M4::M13* v11 = v8->mutable_f_6();
  Message0::M4::M13::M89* v12 = v11->mutable_f_2();
  v12->set_f_3(s->substr(0, 32));
  v12->set_f_0(0x16);
  message->set_f_24(s->substr(0, 491));
  Message0::E1 array_1[22] = {
      Message0::E1_CONST_4, Message0::E1_CONST_1, Message0::E1_CONST_3,
      Message0::E1_CONST_2, Message0::E1_CONST_4, Message0::E1_CONST_2,
      Message0::E1_CONST_3, Message0::E1_CONST_2, Message0::E1_CONST_2,
      Message0::E1_CONST_1, Message0::E1_CONST_4, Message0::E1_CONST_3,
      Message0::E1_CONST_4, Message0::E1_CONST_1, Message0::E1_CONST_5,
      Message0::E1_CONST_3, Message0::E1_CONST_2, Message0::E1_CONST_2,
      Message0::E1_CONST_3, Message0::E1_CONST_4, Message0::E1_CONST_1,
      Message0::E1_CONST_3,
  };
  for (auto v : array_1) {
    message->add_f_27(v);
  }
  message->set_f_1(0x6a1ce0666f56b351);
  message->set_f_18(0xbd6a7d01929be04);
  message->set_f_7(0x45cd411d4ed7d4ad);
  message->set_f_9(0x45);
  Message0::M7* v13_0 = message->add_f_55();
  v13_0->set_f_0(s->substr(0, 197));
  Message0::M7::M46* v14 = v13_0->mutable_f_4();
  v14->set_f_0(0x40f7870eca49f9ad);
  Message0::M7::M11* v15 = v13_0->mutable_f_2();
  Message0::M7::M11::M88* v16 = v15->mutable_f_6();
  v16->set_f_2(0x20bbf86bcd4d8b32);
  v16->set_f_5(0.811987);
  v16->set_f_4(s->substr(0, 11));
  v16->set_f_1(false);
  Message0::M7::M11::M88::M99* v17_0 = v16->add_f_9();
  v17_0->set_f_0(0x722b69d);
  Message0::M7::M11::M71* v18_0 = v15->add_f_5();
  v18_0->set_f_2(0x1e);
  v18_0->set_f_4(s->substr(0, 1));
  v18_0->set_f_0(0x9a1096e);
  v18_0->set_f_3(0x53dd0895057e30db);
  v18_0->set_f_1(true);
  v15->set_f_0(0xe891fdc8ce184d9);
  Message0::M9* v19 = message->mutable_f_57();
  Message0::M9::M44* v20 = v19->mutable_f_13();
  v20->set_f_1(0x51f);
  v20->set_f_2(0x73bc3457637ceec3);
  v19->set_f_4(0x207cd2300c327b26);
  v19->set_f_2(0x22ee2b2b83cd6783);
  Message0::M9::M12* v21 = v19->mutable_f_9();
  v21->set_f_0(0x32);
  v19->set_f_3(0x2a1ec23);
  v19->set_f_0(0x6f805adb723aefbb);
  v19->set_f_1(s->substr(0, 20));
  Message0::M9::M16* v22 = v19->mutable_f_10();
  (void)v22;  // Suppresses clang-tidy.
  message->set_f_4(0x4c627808);
  message->set_f_22(0x57e4c48a3712cf4d);
  message->set_f_5(0x5f5d2815ee9bb3f3);
  message->set_f_13(0.700513);
  message->set_f_29(0x59547b3);
  message->set_f_3(0x769a19c687ee9493);
  Message0::M3* v23 = message->mutable_f_49();
  Message0::M3::M53* v24_0 = v23->add_f_17();
  v24_0->set_f_0(0x18);
  v23->set_f_0(s->substr(0, 79));
  v23->set_f_1(s->substr(0, 91));
  Message0::M3::M31* v25 = v23->mutable_f_11();
  v25->set_f_0(0x3d6a3f8);
  Message0::M3::M36* v26 = v23->mutable_f_12();
  v26->set_f_17(0x42);
  v26->set_f_0(0x13d1);
  v26->add_f_28(Message0::M3::M36::E10_CONST_3);
  v26->set_f_26(s->substr(0, 62));
  v26->add_f_25(s->substr(0, 2));
  v26->set_f_16(s->substr(0, 182));
  v26->set_f_9(0x13a05dbe);
  v26->set_f_31(0x21ffd6cd8b5463ed);
  v26->set_f_8(s->substr(0, 10));
  v26->set_f_3(0x72);
  v26->set_f_2(0x29);
  v26->set_f_20(s->substr(0, 19));
  v26->set_f_27(0x66);
  v26->set_f_4(s->substr(0, 14));
  v26->set_f_14(0x6b26bcc753503130);
  v26->set_f_11(0x2c75fed041d46da8);
  v26->set_f_10(0x16c0);
  v26->set_f_7(s->substr(0, 2323));
  v26->set_f_24(Message0::M3::M36::E9_CONST_3);
  v26->set_f_30(0x77e11319e1);
  v26->set_f_18(0x6a079078c230d629);
  message->set_f_0(0x58);
  message->set_f_8(0x5acd61ddf786050c);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_17(0x56ae34583d8928e);
  message->set_f_24(s->substr(0, 21));
  message->set_f_26(0x470a5a03);
  message->set_f_28(0x5e8cff8f2fc4991);
  message->set_f_20(0xc6fbb20d55a1318);
  Message0::M3* v0 = message->mutable_f_49();
  Message0::M3::M31* v1 = v0->mutable_f_11();
  v1->set_f_0(0x660daac2);
  v0->set_f_1(s->substr(0, 91));
  Message0::M3::M19* v2_0 = v0->add_f_7();
  v2_0->set_f_0(0xd911c);
  Message0::M3::M36* v3 = v0->mutable_f_12();
  v3->set_f_29(0x3e320);
  v3->set_f_14(0x60e3a149dd7a75a8);
  v3->set_f_7(s->substr(0, 83));
  v3->set_f_2(0xb08bda8);
  v3->set_f_16(s->substr(0, 8));
  v3->set_f_4(s->substr(0, 44));
  v3->set_f_26(s->substr(0, 7));
  v3->set_f_5(0x550b2c8b1a5cc06d);
  v3->set_f_12(0x3fa0);
  v3->set_f_24(Message0::M3::M36::E9_CONST_5);
  v3->set_f_10(0x1c1c);
  v3->set_f_0(0x591142a);
  v3->set_f_9(0x1d24363a);
  v3->set_f_13(0xa2351);
  v3->set_f_22(s->substr(0, 24));
  v3->set_f_8(s->substr(0, 126));
  v3->set_f_20(s->substr(0, 29));
  v3->set_f_6(0x2e);
  v3->set_f_18(0x17464d87d1b6275f);
  v3->add_f_25(s->substr(0, 7));
  v3->set_f_11(0x7db89d4c3b381f4b);
  v3->set_f_31(0x5bcc0c2f86148ca7);
  v3->set_f_1(0x167bc543b4abd584);
  v3->set_f_3(0x72);
  v0->set_f_2(0x726b1a6);
  v0->set_f_0(s->substr(0, 458));
  Message0::M3::M51* v4 = v0->mutable_f_16();
  v4->set_f_3(s->substr(0, 19));
  v4->set_f_0(0x2a);
  v4->set_f_5(s->substr(0, 9));
  v4->set_f_1(s->substr(0, 1981));
  v4->set_f_2(s->substr(0, 5));
  v4->set_f_4(0x7a);
  Message0::M3::M43* v5 = v0->mutable_f_13();
  v5->set_f_1(0xadb);
  v5->set_f_2(0x6b5a5a);
  Message0::M3::M53* v6_0 = v0->add_f_17();
  v6_0->set_f_0(0x7c3268e);
  message->set_f_14(0x39b7476a01f6d87d);
  Message0::M4* v7 = message->mutable_f_50();
  Message0::M4::M27* v8 = v7->mutable_f_8();
  v8->set_f_0(true);
  v7->set_f_0(0.665725);
  Message0::M4::M13* v9 = v7->mutable_f_6();
  (void)v9;  // Suppresses clang-tidy.
  message->set_f_15(0x2d188eaf9df3ada3);
  Message0::M8* v10 = message->mutable_f_56();
  Message0::M8::M17* v11 = v10->mutable_f_10();
  (void)v11;  // Suppresses clang-tidy.
  Message0::M8::M15* v12 = v10->mutable_f_9();
  v12->set_f_0(0x579bdeb04ca6874c);
  Message0::M8::M14* v13 = v10->mutable_f_6();
  v13->set_f_0(s->substr(0, 326));
  Message0::M8::M14::M87* v14 = v13->mutable_f_4();
  v14->set_f_1(0x41);
  v14->set_f_0(true);
  Message0::M8::M14::M79* v15 = v13->mutable_f_2();
  Message0::M8::M14::M79::M93* v16_0 = v15->add_f_4();
  Message0::M8::M14::M79::M93::M111* v17 = v16_0->mutable_f_2();
  Message0::M8::M14::M79::M93::M111::M116* v18 = v17->mutable_f_5();
  v18->set_f_0(0x35f2);
  v17->set_f_0(0x39c7e407e586d507);
  v16_0->add_f_0(Message0::M8::M14::M79::M93::E19_CONST_2);
  v15->set_f_0(0x414823b096707ef5);
  v10->add_f_1(Message0::M8::E5_CONST_4);
  Message0::M8::M47* v19 = v10->mutable_f_16();
  v19->set_f_0(s->substr(0, 2));
  Message0::M8::M47::E11 array_0[17] = {
      Message0::M8::M47::E11_CONST_4, Message0::M8::M47::E11_CONST_5,
      Message0::M8::M47::E11_CONST_4, Message0::M8::M47::E11_CONST_2,
      Message0::M8::M47::E11_CONST_3, Message0::M8::M47::E11_CONST_3,
      Message0::M8::M47::E11_CONST_2, Message0::M8::M47::E11_CONST_4,
      Message0::M8::M47::E11_CONST_4, Message0::M8::M47::E11_CONST_1,
      Message0::M8::M47::E11_CONST_2, Message0::M8::M47::E11_CONST_5,
      Message0::M8::M47::E11_CONST_3, Message0::M8::M47::E11_CONST_4,
      Message0::M8::M47::E11_CONST_1, Message0::M8::M47::E11_CONST_2,
      Message0::M8::M47::E11_CONST_5,
  };
  for (auto v : array_0) {
    v19->add_f_1(v);
  }
  Message0::M8::M47::M59* v20 = v19->mutable_f_5();
  v20->set_f_0(s->substr(0, 11));
  Message0::M8::M54* v21 = v10->mutable_f_19();
  v21->set_f_2(0x7b4366b165373600);
  v21->set_f_3(0x78);
  Message0::M8::M54::M81* v22 = v21->mutable_f_9();
  v22->set_f_8(s->substr(0, 11));
  v22->set_f_11(0x11);
  v22->set_f_1(s->substr(0, 22));
  v22->set_f_9(0x4e1984d);
  v22->set_f_13(0x23cecee1a8b510d5);
  v22->set_f_4(s->substr(0, 327));
  v22->set_f_3(0x2f84ee572de5f5bc);
  v22->set_f_6(0x4d0133553445cca8);
  v22->set_f_5(true);
  v22->set_f_12(0x4ea8494d28136603);
  v21->set_f_0(0x2ab786110e9f04f2);
  v21->set_f_1(0x32);
  Message0::M8::M40* v23 = v10->mutable_f_15();
  Message0::M8::M40::M62* v24 = v23->mutable_f_3();
  v24->set_f_0(0x28e11c98);
  v23->set_f_0(0x55edec88014e87f4);
  Message0::M8::M40::M82* v25 = v23->mutable_f_4();
  v25->set_f_0(0x61);
  message->set_f_1(0x25836f454f3c0598);
  Message0::M10* v26 = message->mutable_f_58();
  v26->set_f_4(0x373bd3a1080d19e4);
  v26->set_f_3(0x34);
  Message0::M10::M42* v27 = v26->mutable_f_16();
  v27->set_f_0(0x74);
  v26->set_f_0(0x37);
  v26->set_f_2(0x5a);
  Message0::M10::M21* v28_0 = v26->add_f_13();
  v28_0->set_f_4(0x7b0b31bcb918d4fa);
  v28_0->add_f_3(Message0::M10::M21::E6_CONST_1);
  v28_0->set_f_1(s->substr(0, 289));
  Message0::M10::M38* v29 = v26->mutable_f_15();
  Message0::M10::M38::M73* v30 = v29->mutable_f_3();
  v30->set_f_0(0x2e47dc81);
  v26->set_f_1(false);
  message->set_f_2(0x112c73d);
  message->add_f_27(Message0::E1_CONST_1);
  message->add_f_27(Message0::E1_CONST_1);
  message->add_f_27(Message0::E1_CONST_2);
  message->add_f_27(Message0::E1_CONST_1);
  message->set_f_13(0.676111);
  message->set_f_10(0x15d5984);
  message->set_f_18(0x30318ecb7257cb2f);
  message->set_f_29(0x27);
  message->set_f_25(0x25);
  message->set_f_0(0x7e2c513);
  message->set_f_21(s->substr(0, 17));
  message->set_f_11(s->substr(0, 277));
  message->set_f_3(0x1073e92df7579e6c);
  message->set_f_12(true);
  Message0::M9* v31 = message->mutable_f_57();
  Message0::M9::M44* v32 = v31->mutable_f_13();
  v32->set_f_4(0x396729fab);
  v32->set_f_2(0x26476b9a2c0a8a4e);
  v32->set_f_0(0x90f6dcee15);
  v32->set_f_1(0xc9d034e);
  Message0::M9::M12* v33 = v31->mutable_f_9();
  v33->set_f_0(0x57ff93b);
  Message0::M9::M12::M68* v34 = v33->mutable_f_2();
  Message0::M9::M12::M68::M90* v35_0 = v34->add_f_3();
  v35_0->set_f_0(0x2dec720a89af4573);
  v31->set_f_0(0x67c36a2bb2bc793e);
  Message0::M9::M39* v36 = v31->mutable_f_12();
  Message0::M9::M39::M84* v37_0 = v36->add_f_7();
  v37_0->set_f_3(0x46bc799dfedaf5a0);
  v37_0->set_f_4(Message0::M9::M39::M84::E17_CONST_1);
  v37_0->set_f_0(0x79);
  Message0::M9::M39::M84::E16 array_1[21] = {
      Message0::M9::M39::M84::E16_CONST_4, Message0::M9::M39::M84::E16_CONST_1,
      Message0::M9::M39::M84::E16_CONST_4, Message0::M9::M39::M84::E16_CONST_5,
      Message0::M9::M39::M84::E16_CONST_5, Message0::M9::M39::M84::E16_CONST_3,
      Message0::M9::M39::M84::E16_CONST_2, Message0::M9::M39::M84::E16_CONST_5,
      Message0::M9::M39::M84::E16_CONST_2, Message0::M9::M39::M84::E16_CONST_3,
      Message0::M9::M39::M84::E16_CONST_5, Message0::M9::M39::M84::E16_CONST_3,
      Message0::M9::M39::M84::E16_CONST_4, Message0::M9::M39::M84::E16_CONST_1,
      Message0::M9::M39::M84::E16_CONST_5, Message0::M9::M39::M84::E16_CONST_3,
      Message0::M9::M39::M84::E16_CONST_3, Message0::M9::M39::M84::E16_CONST_5,
      Message0::M9::M39::M84::E16_CONST_3, Message0::M9::M39::M84::E16_CONST_1,
      Message0::M9::M39::M84::E16_CONST_3,
  };
  for (auto v : array_1) {
    v37_0->add_f_2(v);
  }
  v37_0->set_f_1(0x31);
  Message0::M9::M39::M84::M95* v38_0 = v37_0->add_f_8();
  v38_0->set_f_15(0x11);
  v38_0->set_f_10(s->substr(0, 16));
  v38_0->set_f_5(0x1f90d3a921b1a172);
  v38_0->set_f_12(0x6);
  v38_0->set_f_1(0x5d48bd3a19dc2fd4);
  v38_0->set_f_11(0x8caff12);
  v38_0->set_f_6(0x6f);
  v38_0->set_f_9(0x29);
  v38_0->set_f_3(0xdd326bc30a9499e);
  v38_0->set_f_4(0x1f);
  v38_0->set_f_13(0x3e);
  v38_0->set_f_0(0x10);
  v38_0->set_f_14(0x21);
  Message0::M9::M39::M75* v39_0 = v36->add_f_6();
  v39_0->set_f_0(0x70);
  v31->set_f_3(0x45a3d);
  v31->set_f_1(s->substr(0, 195));
  message->set_f_16(0x15bb746b41bef60c);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_17(0x3802f722f3f9be25);
  message->set_f_23(0x6d);
  message->set_f_10(0x2d);
  message->set_f_18(0x3228b663c35cd967);
  message->set_f_4(0x40352ae7);
  Message0::M8* v0 = message->mutable_f_56();
  Message0::M8::M28* v1 = v0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M8::M54* v2 = v0->mutable_f_19();
  v2->set_f_0(0x6a73b864d5d55042);
  v2->set_f_3(0x1b77);
  v2->set_f_2(0x7e5024551ad79756);
  v2->set_f_1(0xe33accc);
  v0->set_f_2(0x23188a4a38dc9f60);
  Message0::M8::M50* v3_0 = v0->add_f_18();
  v3_0->set_f_3(0x333d);
  v3_0->set_f_0(0x71);
  v3_0->set_f_4(0.792621);
  v3_0->set_f_1(0x48);
  Message0::M8::E5 array_0[17] = {
      Message0::M8::E5_CONST_3, Message0::M8::E5_CONST_3,
      Message0::M8::E5_CONST_3, Message0::M8::E5_CONST_2,
      Message0::M8::E5_CONST_3, Message0::M8::E5_CONST_4,
      Message0::M8::E5_CONST_5, Message0::M8::E5_CONST_5,
      Message0::M8::E5_CONST_2, Message0::M8::E5_CONST_3,
      Message0::M8::E5_CONST_3, Message0::M8::E5_CONST_1,
      Message0::M8::E5_CONST_4, Message0::M8::E5_CONST_1,
      Message0::M8::E5_CONST_5, Message0::M8::E5_CONST_5,
      Message0::M8::E5_CONST_3,
  };
  for (auto v : array_0) {
    v0->add_f_1(v);
  }
  Message0::M8::M14* v4 = v0->mutable_f_6();
  Message0::M8::M14::M87* v5 = v4->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  v4->set_f_0(s->substr(0, 8));
  Message0::M8::M14::M79* v6 = v4->mutable_f_2();
  v6->set_f_1(s->substr(0, 20));
  v6->set_f_0(0x1f5f7ff72e0c93b3);
  Message0::M8::M32* v7 = v0->mutable_f_13();
  v7->set_f_0(0x57);
  v0->set_f_0(s->substr(0, 11));
  message->set_f_29(0x78b91fb);
  message->set_f_8(0x45d5bbc35bdf04a8);
  message->set_f_15(0x1adc3a3e889aa6d7);
  message->set_f_9(0x97c4);
  message->set_f_0(0x4e);
  message->set_f_2(0x4a);
  message->set_f_21(s->substr(0, 12));
  message->set_f_7(0x105df194a88e6046);
  message->add_f_27(Message0::E1_CONST_1);
  Message0::M5* v8 = message->mutable_f_51();
  Message0::M5::E3 array_1[21] = {
      Message0::M5::E3_CONST_4, Message0::M5::E3_CONST_3,
      Message0::M5::E3_CONST_2, Message0::M5::E3_CONST_1,
      Message0::M5::E3_CONST_4, Message0::M5::E3_CONST_4,
      Message0::M5::E3_CONST_2, Message0::M5::E3_CONST_2,
      Message0::M5::E3_CONST_5, Message0::M5::E3_CONST_4,
      Message0::M5::E3_CONST_2, Message0::M5::E3_CONST_2,
      Message0::M5::E3_CONST_4, Message0::M5::E3_CONST_1,
      Message0::M5::E3_CONST_3, Message0::M5::E3_CONST_3,
      Message0::M5::E3_CONST_5, Message0::M5::E3_CONST_3,
      Message0::M5::E3_CONST_5, Message0::M5::E3_CONST_3,
      Message0::M5::E3_CONST_1,
  };
  for (auto v : array_1) {
    v8->add_f_0(v);
  }
  Message0::M5::M30* v9 = v8->mutable_f_5();
  v9->set_f_0(0x74761eacfff407ff);
  Message0::M5::M48* v10_0 = v8->add_f_7();
  Message0::M5::M48::M80* v11 = v10_0->mutable_f_3();
  Message0::M5::M48::M80::M101* v12 = v11->mutable_f_12();
  v12->set_f_4(0x89d);
  v12->set_f_1(0x1371f6);
  v12->set_f_3(0xa);
  v12->set_f_0(0x126070);
  v11->set_f_4(0x1080158d);
  v11->set_f_1(0x4fe061776d79b6b5);
  v11->set_f_0(0x2e);
  v11->set_f_2(0x2f);
  v10_0->set_f_0(0x16b3b8af);
  message->set_f_22(0x4df58ab4f65428df);
  message->set_f_24(s->substr(0, 15));
  message->set_f_3(0x4ce3e76dacf5b5ad);
  message->set_f_13(0.635876);
  Message0::M4* v13 = message->mutable_f_50();
  Message0::M4::M27* v14 = v13->mutable_f_8();
  (void)v14;  // Suppresses clang-tidy.
  Message0::M4::M13* v15 = v13->mutable_f_6();
  v15->set_f_0(0x369ee5c69fab511d);
  v13->add_f_1(Message0::M4::E2_CONST_2);
  v13->set_f_0(0.768996);
  Message0::M7* v16_0 = message->add_f_55();
  Message0::M7::M46* v17 = v16_0->mutable_f_4();
  (void)v17;  // Suppresses clang-tidy.
  Message0::M7::M11* v18 = v16_0->mutable_f_2();
  Message0::M7::M11::M71* v19_0 = v18->add_f_5();
  v19_0->set_f_0(0x8bdf853);
  v19_0->set_f_2(0x78);
  v18->set_f_3(false);
  v18->set_f_1(0x1ac8e34d1f7d9150);
  Message0::M7::M11::M88* v20 = v18->mutable_f_6();
  v20->set_f_4(s->substr(0, 457));
  v20->set_f_3(0x56);
  v20->set_f_0(true);
  v20->set_f_5(0.150757);
  Message0::M7::M11::M88::M99* v21_0 = v20->add_f_9();
  (void)v21_0;  // Suppresses clang-tidy.
  v20->set_f_1(false);
  v20->set_f_2(0x658e44ce36da25bf);
  v16_0->set_f_0(s->substr(0, 30));
  message->set_f_14(0x486579ab2eaa97cb);
  Message0::M10* v22 = message->mutable_f_58();
  Message0::M10::M38* v23 = v22->mutable_f_15();
  Message0::M10::M38::M73* v24 = v23->mutable_f_3();
  v24->set_f_0(0x435eac87);
  v23->set_f_0(0x2bd41f4d815aa99d);
  v22->set_f_4(0xfb78183d9c411e8);
  v22->set_f_3(0x7576ade);
  v22->set_f_0(0x2);
  Message0::M10::M42* v25 = v22->mutable_f_16();
  v25->set_f_0(0x50);
  v22->set_f_1(false);
  message->set_f_11(s->substr(0, 336));
  message->set_f_5(0x6395323798ccfdc3);
  message->set_f_25(0x27);
  message->set_f_19(0x783e51305c5e383a);
  Message0::M6* v26 = message->mutable_f_54();
  v26->add_f_0(Message0::M6::E4_CONST_3);
  Message0::M6::M55* v27_0 = v26->add_f_8();
  Message0::M6::M55::M69* v28 = v27_0->mutable_f_2();
  Message0::M6::M55::M69::M105* v29_0 = v28->add_f_2();
  v29_0->set_f_0(false);
  Message0::M6::M55::M69::M105::M110* v30 = v29_0->mutable_f_3();
  v30->set_f_2(0x2d29f7080673e736);
  v30->set_f_0(0x10156b26);
  v27_0->set_f_0(0x5d37297ae308b898);
  Message0::M6::M55::M85* v31_0 = v27_0->add_f_6();
  v31_0->set_f_2(false);
  v31_0->set_f_1(0x78);
  v31_0->set_f_4(s->substr(0, 176));
  Message0::M6::M55::M72* v32 = v27_0->mutable_f_5();
  v32->set_f_0(0x5301fa8d2beb5681);
  Message0::M6::M18* v33 = v26->mutable_f_2();
  Message0::M6::M18::M78* v34 = v33->mutable_f_2();
  v34->set_f_0(s->substr(0, 22));
  Message0::M6::M18::M78::M91* v35 = v34->mutable_f_3();
  v35->set_f_2(0x23a7);
  Message0::M6::M18::M78::M91::M113* v36 = v35->mutable_f_6();
  v36->set_f_1(false);
  v36->set_f_2(0x9269e7c);
  v36->set_f_5(s->substr(0, 21));
  v35->set_f_1(0x19aed1);
  v35->set_f_0(true);
  v33->set_f_0(0xc4f2eba);
  Message0::M6::M45* v37 = v26->mutable_f_6();
  v37->set_f_3(0.871052);
  Message0::M6::M45::M63* v38_0 = v37->add_f_8();
  v38_0->set_f_0(0x5);
  Message0::M6::M45::M63::M106* v39 = v38_0->mutable_f_2();
  v39->set_f_7(0x31);
  v39->set_f_13(0x2f23);
  v39->set_f_16(0.037663);
  v39->set_f_26(0x7d6794b84c5f1b3a);
  v39->set_f_2(false);
  v39->set_f_21(s->substr(0, 7));
  v39->set_f_18(0x748eb8289be0833f);
  v39->set_f_28(0x6e0b4d9eb27ea5b0);
  v39->set_f_12(0x21fd);
  v39->set_f_8(0x681d28a482639f6c);
  v39->set_f_25(0x1da1);
  v39->set_f_15(0x6d);
  v39->set_f_23(0x56303ca539e8ffd6);
  v39->set_f_19(0x3cb2f0d0ccc1f2a9);
  v39->set_f_24(0x5ca8bfba);
  v39->set_f_11(0x3c5c602663119d8);
  v39->set_f_22(Message0::M6::M45::M63::M106::E21_CONST_5);
  v39->set_f_20(0x6e9ccfe51dc087bb);
  v39->set_f_5(0x6f8c4e6293981504);
  v39->set_f_30(s->substr(0, 209));
  v39->set_f_14(0x42);
  v37->set_f_2(0x697ab18);
  Message0::M6::M35* v40_0 = v26->add_f_4();
  v40_0->set_f_1(0x56cbf03d);
  v40_0->set_f_0(Message0::M6::M35::E7_CONST_4);
  message->set_f_26(0x64e446c3);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_10(0x11fb);
  message->set_f_20(0x6223c3e4e8c0650d);
  Message0::M3* v0 = message->mutable_f_49();
  v0->set_f_2(0x7b);
  Message0::M3::M31* v1 = v0->mutable_f_11();
  v1->set_f_0(0x6597516b);
  v0->set_f_1(s->substr(0, 67));
  Message0::M3::M19* v2_0 = v0->add_f_7();
  Message0::M3::M19::M61* v3 = v2_0->mutable_f_2();
  v3->set_f_0(0x6c145ac70aa22b78);
  Message0::M3::M24* v4 = v0->mutable_f_9();
  v4->set_f_0(0.186749);
  v4->set_f_1(0x7b9961b9ccc24f8a);
  v0->set_f_0(s->substr(0, 11));
  Message0::M3::M36* v5 = v0->mutable_f_12();
  v5->set_f_30(0x21e6625e5b2);
  v5->set_f_17(0x6);
  v5->set_f_10(0xa882a42);
  v5->set_f_27(0xa8d8273);
  v5->set_f_31(0x186629a033e2dcac);
  v5->set_f_20(s->substr(0, 86));
  v5->set_f_22(s->substr(0, 8));
  v5->set_f_4(s->substr(0, 17));
  v5->set_f_21(0x30f3);
  v5->set_f_7(s->substr(0, 54));
  v5->set_f_2(0x32);
  v5->set_f_9(0x5b32db03);
  v5->set_f_0(0x12);
  v5->set_f_12(0x7d);
  v5->set_f_16(s->substr(0, 101));
  v5->set_f_23(0x2276dc8528d0767);
  v5->set_f_13(0xcd13b14);
  v5->set_f_29(0xa736f37);
  v5->add_f_25(s->substr(0, 4));
  v5->set_f_15(0x13);
  v5->set_f_24(Message0::M3::M36::E9_CONST_5);
  v5->set_f_8(s->substr(0, 31));
  v5->set_f_26(s->substr(0, 21));
  v5->set_f_5(0x480efbaf4718ac3);
  v5->set_f_11(0x2d5287e1b4a7bc57);
  v5->set_f_1(0x617b4370aa00d9ec);
  Message0::M3::M43* v6 = v0->mutable_f_13();
  v6->set_f_0(0x6222b4b6ddb87b6d);
  v6->set_f_2(0x5b);
  v6->set_f_1(0x171e39);
  Message0::M3::M53* v7_0 = v0->add_f_17();
  (void)v7_0;  // Suppresses clang-tidy.
  message->set_f_17(0x5b56f53a7ac44e27);
  message->set_f_29(0xdb3a7f7);
  message->set_f_7(0x7fb1276c52fc8672);
  message->set_f_19(0x339c5ed9898d2585);
  message->set_f_25(0x410c89);
  message->set_f_23(0x6de2c);
  message->set_f_24(s->substr(0, 19));
  message->set_f_12(false);
  Message0::M6* v8 = message->mutable_f_54();
  v8->add_f_0(Message0::M6::E4_CONST_4);
  Message0::M6::M41* v9 = v8->mutable_f_5();
  v9->set_f_0(s->substr(0, 86));
  v9->set_f_1(0x16de9adbc6702681);
  Message0::M6::M35* v10_0 = v8->add_f_4();
  Message0::M6::M35::M83* v11_0 = v10_0->add_f_4();
  v11_0->set_f_4(0x1a5c9e);
  v11_0->set_f_2(0x1b073ba96e59a46e);
  Message0::M6::M35::M83::M100* v12_0 = v11_0->add_f_21();
  v12_0->set_f_0(true);
  v11_0->set_f_3(0x33b4b836202e9e2f);
  v11_0->set_f_0(Message0::M6::M35::M83::E15_CONST_1);
  v11_0->set_f_9(s->substr(0, 101));
  v11_0->set_f_7(s->substr(0, 15));
  Message0::M6::M35::M83::M94* v13 = v11_0->mutable_f_19();
  v13->set_f_0(0x53);
  Message0::M6::M18* v14 = v8->mutable_f_2();
  Message0::M6::M18::M78* v15 = v14->mutable_f_2();
  v15->set_f_0(s->substr(0, 19));
  v14->set_f_0(0x20f2);
  Message0::M6::M55* v16_0 = v8->add_f_8();
  Message0::M6::M55::M69* v17 = v16_0->mutable_f_2();
  v17->set_f_0(0x15);
  Message0::M6::M55::M69::M105* v18_0 = v17->add_f_2();
  v18_0->set_f_0(false);
  Message0::M6::M55::M72* v19 = v16_0->mutable_f_5();
  v19->set_f_0(0x43febeb2151d4b65);
  Message0::M6::M55::M85* v20_0 = v16_0->add_f_6();
  v20_0->set_f_1(0x50);
  v20_0->set_f_0(0x4b);
  Message0::M6::M45* v21 = v8->mutable_f_6();
  Message0::M6::M45::M63* v22_0 = v21->add_f_8();
  Message0::M6::M45::M63::M106* v23 = v22_0->mutable_f_2();
  v23->set_f_17(false);
  v23->set_f_1(0x751e00f8c7b90177);
  v23->set_f_0(s->substr(0, 250));
  v23->set_f_22(Message0::M6::M45::M63::M106::E21_CONST_2);
  v23->set_f_16(0.345792);
  v23->set_f_8(0x7f20ffb079cf873c);
  v23->set_f_4(0x5787acf0a7a3764d);
  v23->set_f_11(0xf871ca6b0fd3e7a);
  v23->set_f_13(0x52);
  v23->set_f_7(0xe07bee2);
  v23->set_f_15(0x45dbb34);
  v23->set_f_5(0x2f0e6c3c1336b292);
  v23->set_f_21(s->substr(0, 295));
  v23->set_f_12(0x31);
  v23->set_f_19(0x4386d3c477dbfea8);
  v23->set_f_27(true);
  v23->set_f_24(0x5093a0e9);
  v23->set_f_14(0x26);
  v23->set_f_6(0x26);
  v23->set_f_30(s->substr(0, 25));
  v23->set_f_20(0x4852f81a89dd8a42);
  v22_0->set_f_0(0x6f);
  v21->set_f_0(s->substr(0, 340));
  v21->set_f_1(s->substr(0, 349));
  message->set_f_2(0x4b);
  Message0::M8* v24 = message->mutable_f_56();
  v24->set_f_0(s->substr(0, 107));
  Message0::M8::M32* v25 = v24->mutable_f_13();
  v25->set_f_0(0x566f5e6c0);
  Message0::M8::M28* v26 = v24->mutable_f_12();
  v26->set_f_0(0x1643f625de44d07b);
  Message0::M8::M14* v27 = v24->mutable_f_6();
  Message0::M8::M14::M87* v28 = v27->mutable_f_4();
  v28->set_f_1(0x23);
  v28->set_f_0(true);
  Message0::M8::M50* v29_0 = v24->add_f_18();
  v29_0->set_f_0(0x26);
  v29_0->set_f_4(0.528688);
  v29_0->set_f_1(0x12a9);
  v29_0->set_f_3(0xb82cccf);
  Message0::M8::M17* v30 = v24->mutable_f_10();
  v30->set_f_0(0x32);
  v24->set_f_2(0x32587f3f7d084ac2);
  Message0::M8::M54* v31 = v24->mutable_f_19();
  Message0::M8::M54::M81* v32 = v31->mutable_f_9();
  v32->set_f_4(s->substr(0, 378));
  v32->set_f_1(s->substr(0, 215));
  v32->set_f_7(0x393f151803834399);
  v32->set_f_6(0x616ae483c153ac8e);
  v32->set_f_8(s->substr(0, 2));
  v32->set_f_10(true);
  v32->set_f_0(s->substr(0, 120));
  v32->set_f_2(s->substr(0, 3));
  v32->set_f_12(0xc785e3b7e4fade0);
  v32->set_f_3(0x15a1665cc7fb1c83);
  v32->set_f_13(0x2a5c5c56f010a700);
  v31->set_f_1(0x13);
  v31->set_f_3(0x38cd);
  Message0::M8::M15* v33 = v24->mutable_f_9();
  (void)v33;  // Suppresses clang-tidy.
  Message0::M8::M40* v34 = v24->mutable_f_15();
  Message0::M8::M40::M62* v35 = v34->mutable_f_3();
  v35->set_f_0(0x2726fae0);
  message->set_f_11(s->substr(0, 29));
  message->set_f_0(0xa);
  message->set_f_8(0x43e789abb1255b94);
  Message0::M7* v36_0 = message->add_f_55();
  Message0::M7::M46* v37 = v36_0->mutable_f_4();
  v37->set_f_0(0x37997514fce259bd);
  Message0::M7::M34* v38 = v36_0->mutable_f_3();
  v38->set_f_0(0.577930);
  Message0::M7::M11* v39 = v36_0->mutable_f_2();
  Message0::M7::M11::M71* v40_0 = v39->add_f_5();
  v40_0->set_f_2(0x2b);
  v40_0->set_f_3(0x29cf903d5f1e28c);
  v40_0->set_f_0(0xa855a68);
  v40_0->set_f_1(true);
  v40_0->set_f_4(s->substr(0, 23));
  v39->set_f_0(0x686ef6f7144399eb);
  v39->set_f_1(0x1c06118f4856484d);
  Message0::M7::M11::M88* v41 = v39->mutable_f_6();
  v41->set_f_1(true);
  v41->set_f_0(false);
  v41->set_f_5(0.673643);
  Message0::M7::M11::M88::M99* v42_0 = v41->add_f_9();
  v42_0->set_f_0(0xe313c08);
  v41->set_f_3(0x28267c1);
  v41->set_f_4(s->substr(0, 2));
  v41->set_f_2(0x5f62753bef090a36);
  v39->set_f_3(false);
  v39->set_f_2(0x4f0a7a1a);
  v36_0->set_f_0(s->substr(0, 4));
  message->set_f_5(0x3eebd2a437159f20);
  Message0::M10* v43 = message->mutable_f_58();
  Message0::M10::M21* v44_0 = v43->add_f_13();
  v44_0->set_f_2(s->substr(0, 15));
  v44_0->add_f_3(Message0::M10::M21::E6_CONST_3);
  v43->set_f_0(0x3b35100ea);
  v43->set_f_3(0x3746e4d);
  Message0::M10::M38* v45 = v43->mutable_f_15();
  Message0::M10::M38::M64* v46_0 = v45->add_f_2();
  v46_0->set_f_0(0.114430);
  v45->set_f_0(0x5a718e8d6452d6d0);
  Message0::M10::M38::M73* v47 = v45->mutable_f_3();
  (void)v47;  // Suppresses clang-tidy.
  Message0::M10::M42* v48 = v43->mutable_f_16();
  v48->set_f_0(0xf263081);
  v43->set_f_2(0x64);
  message->set_f_1(0x229074865fb93062);
  message->set_f_4(0x6ad9dee6);
  Message0::M5* v49 = message->mutable_f_51();
  Message0::M5::E3 array_0[18] = {
      Message0::M5::E3_CONST_2, Message0::M5::E3_CONST_1,
      Message0::M5::E3_CONST_5, Message0::M5::E3_CONST_3,
      Message0::M5::E3_CONST_2, Message0::M5::E3_CONST_2,
      Message0::M5::E3_CONST_1, Message0::M5::E3_CONST_1,
      Message0::M5::E3_CONST_1, Message0::M5::E3_CONST_5,
      Message0::M5::E3_CONST_5, Message0::M5::E3_CONST_3,
      Message0::M5::E3_CONST_3, Message0::M5::E3_CONST_2,
      Message0::M5::E3_CONST_3, Message0::M5::E3_CONST_5,
      Message0::M5::E3_CONST_2, Message0::M5::E3_CONST_2,
  };
  for (auto v : array_0) {
    v49->add_f_0(v);
  }
  Message0::M5::M30* v50 = v49->mutable_f_5();
  v50->set_f_0(0x22d0bfa0a77e3e98);
  Message0::M5::M25* v51_0 = v49->add_f_4();
  v51_0->set_f_2(0.578193);
  v51_0->set_f_0(0x1175);
  v49->set_f_1(s->substr(0, 15));
  Message0::M5::M48* v52_0 = v49->add_f_7();
  v52_0->set_f_0(0x2a687e53);
  Message0::M5::M48::M80* v53 = v52_0->mutable_f_3();
  v53->set_f_4(0x3e716862);
  v53->set_f_0(0x9d4);
  Message0::M5::M48::M80::M101* v54 = v53->mutable_f_12();
  v54->set_f_3(0x62);
  v54->set_f_1(0x49);
  v54->set_f_4(0x70);
  v54->set_f_2(s->substr(0, 11));
  v53->set_f_2(0x75);
  Message0::M4* v55 = message->mutable_f_50();
  v55->set_f_0(0.448378);
  Message0::M4::M58* v56 = v55->mutable_f_9();
  (void)v56;  // Suppresses clang-tidy.
  Message0::M4::M27* v57 = v55->mutable_f_8();
  (void)v57;  // Suppresses clang-tidy.
  Message0::M4::M13* v58 = v55->mutable_f_6();
  v58->set_f_0(0x7ecaf6f284b931);
  Message0::M4::E2 array_1[19] = {
      Message0::M4::E2_CONST_5, Message0::M4::E2_CONST_3,
      Message0::M4::E2_CONST_2, Message0::M4::E2_CONST_2,
      Message0::M4::E2_CONST_2, Message0::M4::E2_CONST_1,
      Message0::M4::E2_CONST_2, Message0::M4::E2_CONST_5,
      Message0::M4::E2_CONST_1, Message0::M4::E2_CONST_4,
      Message0::M4::E2_CONST_1, Message0::M4::E2_CONST_2,
      Message0::M4::E2_CONST_1, Message0::M4::E2_CONST_3,
      Message0::M4::E2_CONST_4, Message0::M4::E2_CONST_4,
      Message0::M4::E2_CONST_4, Message0::M4::E2_CONST_4,
      Message0::M4::E2_CONST_3,
  };
  for (auto v : array_1) {
    v55->add_f_1(v);
  }
  Message0::M1* v59 = message->mutable_f_46();
  v59->set_f_4(true);
  v59->set_f_6(s->substr(0, 17));
  v59->set_f_0(false);
  Message0::M1::M37* v60_0 = v59->add_f_13();
  Message0::M1::M37::M76* v61 = v60_0->mutable_f_5();
  v61->set_f_0(0xdad785a);
  v60_0->set_f_0(false);
  v59->set_f_1(0xcc12c47);
  Message0::M9* v62 = message->mutable_f_57();
  Message0::M9::M16* v63 = v62->mutable_f_10();
  (void)v63;  // Suppresses clang-tidy.
  v62->set_f_3(0x18419f);
  Message0::M9::M39* v64 = v62->mutable_f_12();
  Message0::M9::M39::M84* v65_0 = v64->add_f_7();
  v65_0->set_f_1(0xb16ae26);
  v65_0->set_f_4(Message0::M9::M39::M84::E17_CONST_5);
  Message0::M9::M39::M84::M95* v66_0 = v65_0->add_f_8();
  v66_0->set_f_8(s->substr(0, 3483));
  v66_0->set_f_5(0x1ba90bac4a4e512a);
  v66_0->set_f_2(s->substr(0, 203));
  v66_0->set_f_14(0x5b);
  v66_0->set_f_6(0x14af);
  v66_0->set_f_9(0xd49);
  v66_0->set_f_15(0x2690);
  v66_0->set_f_11(0x1e2f7d);
  v66_0->set_f_13(0x71);
  v66_0->set_f_1(0x335bbc29389d086c);
  v65_0->set_f_3(0x7be2b34adc8eb3aa);
  Message0::M9::M39::M75* v67_0 = v64->add_f_6();
  (void)v67_0;  // Suppresses clang-tidy.
  v64->set_f_0(false);
  v62->set_f_1(s->substr(0, 11));
  v62->set_f_0(0x6cecf25663cb1e8);
  v62->set_f_4(0xcff7c61b2a1203d);
  message->set_f_26(0x57c7828a);
  message->set_f_14(0x6b808a4b59ad981e);
  message->set_f_15(0x7e2a21bb78179d1e);
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
}  // namespace fleetbench::rpc::P0::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_
