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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message1.pb.h"

namespace fleetbench::rpc::P7::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_4(s->substr(0, 19));
  message->set_f_23(0x42213ef);
  message->set_f_11(s->substr(0, 13));
  Message1::M6* v0 = message->mutable_f_71();
  Message1::M6::M25* v1 = v0->mutable_f_4();
  Message1::M6::M25::M50* v2 = v1->mutable_f_7();
  v2->set_f_2(0x9fe458f);
  v2->set_f_6(s->substr(0, 20));
  v2->set_f_5(0x77);
  v2->set_f_4(0x1ea7);
  v1->set_f_1(0x671f6ac1a583dea9);
  Message1::M6::M25::M44* v3_0 = v1->add_f_5();
  v3_0->set_f_0(0x3f);
  v1->set_f_0(s->substr(0, 32));
  Message1::M9* v4 = message->mutable_f_77();
  Message1::M9::M22* v5 = v4->mutable_f_3();
  Message1::M9::M22::M49* v6_0 = v5->add_f_9();
  v6_0->set_f_2(0x18a3968cbcb5fe9c);
  v6_0->set_f_6(s->substr(0, 9));
  Message1::M9::M22::M49::M64* v7_0 = v6_0->add_f_38();
  Message1::M9::M22::M49::M64::M68* v8 = v7_0->mutable_f_3();
  Message1::M9::M22::M49::M64::M68::E30 array_1[13] = {
      Message1::M9::M22::M49::M64::M68::E30_CONST_2,
      Message1::M9::M22::M49::M64::M68::E30_CONST_1,
      Message1::M9::M22::M49::M64::M68::E30_CONST_1,
      Message1::M9::M22::M49::M64::M68::E30_CONST_1,
      Message1::M9::M22::M49::M64::M68::E30_CONST_4,
      Message1::M9::M22::M49::M64::M68::E30_CONST_1,
      Message1::M9::M22::M49::M64::M68::E30_CONST_3,
      Message1::M9::M22::M49::M64::M68::E30_CONST_1,
      Message1::M9::M22::M49::M64::M68::E30_CONST_3,
      Message1::M9::M22::M49::M64::M68::E30_CONST_3,
      Message1::M9::M22::M49::M64::M68::E30_CONST_3,
      Message1::M9::M22::M49::M64::M68::E30_CONST_4,
      Message1::M9::M22::M49::M64::M68::E30_CONST_4,
  };
  for (auto v : array_1) {
    v8->add_f_1(v);
  }
  Message1::M9::M22::M49::M64::M75* v9_0 = v7_0->add_f_6();
  v9_0->set_f_4(0x4969655ead7ba2bb);
  v9_0->set_f_0(0x31);
  v9_0->set_f_1(0.029938);
  v7_0->set_f_0(0x34686b61d13a5e57);
  v6_0->set_f_3(s->substr(0, 36));
  v6_0->set_f_18(0x750eb076a55a994f);
  v6_0->set_f_20(s->substr(0, 4));
  v6_0->set_f_17(s->substr(0, 7));
  v6_0->set_f_13(true);
  Message1::M9::M22::M49::E19 array_2[21] = {
      Message1::M9::M22::M49::E19_CONST_1, Message1::M9::M22::M49::E19_CONST_2,
      Message1::M9::M22::M49::E19_CONST_2, Message1::M9::M22::M49::E19_CONST_2,
      Message1::M9::M22::M49::E19_CONST_4, Message1::M9::M22::M49::E19_CONST_2,
      Message1::M9::M22::M49::E19_CONST_5, Message1::M9::M22::M49::E19_CONST_4,
      Message1::M9::M22::M49::E19_CONST_1, Message1::M9::M22::M49::E19_CONST_2,
      Message1::M9::M22::M49::E19_CONST_3, Message1::M9::M22::M49::E19_CONST_5,
      Message1::M9::M22::M49::E19_CONST_3, Message1::M9::M22::M49::E19_CONST_2,
      Message1::M9::M22::M49::E19_CONST_1, Message1::M9::M22::M49::E19_CONST_4,
      Message1::M9::M22::M49::E19_CONST_2, Message1::M9::M22::M49::E19_CONST_3,
      Message1::M9::M22::M49::E19_CONST_5, Message1::M9::M22::M49::E19_CONST_4,
      Message1::M9::M22::M49::E19_CONST_1,
  };
  for (auto v : array_2) {
    v6_0->add_f_19(v);
  }
  v6_0->set_f_7(0x1a4ceb4b);
  v6_0->set_f_9(0x4271656f341ea1a9);
  v6_0->set_f_10(0x59);
  v6_0->set_f_1(0x6b);
  v6_0->set_f_8(true);
  v6_0->set_f_15(0x411ae7e);
  v6_0->set_f_16(0x28f145ff4c5261b6);
  Message1::M9::M22::M48* v10 = v5->mutable_f_8();
  (void)v10;  // Suppresses clang-tidy.
  message->set_f_26(s->substr(0, 8));
  message->set_f_7(s->substr(0, 25));
  message->set_f_9(0x7d);
  message->set_f_19(s->substr(0, 5));
  message->set_f_12(s->substr(0, 29));
  message->set_f_27(true);
  message->set_f_13(s->substr(0, 8));
  Message1::M10* v11 = message->mutable_f_78();
  v11->set_f_1(0x13746a4bb050944b);
  v11->set_f_2(Message1::M10::E4_CONST_1);
  Message1::M8* v12 = message->mutable_f_76();
  Message1::M8::M30* v13 = v12->mutable_f_2();
  Message1::M8::M30::M51* v14 = v13->mutable_f_7();
  v14->set_f_1(s->substr(0, 48));
  v14->set_f_3(s->substr(0, 8));
  v14->set_f_0(s->substr(0, 92));
  v13->set_f_0(s->substr(0, 23));
  v12->set_f_0(0x70e0e1c8);
  message->set_f_24(0.410766);
  Message1::M13* v15 = message->mutable_f_82();
  v15->set_f_0(Message1::M13::E5_CONST_5);
  Message1::M13::M32* v16_0 = v15->add_f_4();
  v16_0->set_f_3(0x28cd6dc2);
  v16_0->set_f_30(0xc1673c5);
  v16_0->set_f_1(0x360aafbd7c9debdb);
  v16_0->set_f_20(s->substr(0, 60));
  v16_0->set_f_25(s->substr(0, 11));
  v16_0->set_f_28(s->substr(0, 9));
  v16_0->set_f_0(0x26a51142);
  Message1::M13::M32::M55* v17 = v16_0->mutable_f_51();
  v17->add_f_0(Message1::M13::M32::M55::E21_CONST_4);
  v16_0->set_f_4(0.873176);
  v16_0->set_f_6(0xde5b454);
  v16_0->set_f_10(true);
  Message1::M13::M32::E14 array_3[10] = {
      Message1::M13::M32::E14_CONST_4, Message1::M13::M32::E14_CONST_5,
      Message1::M13::M32::E14_CONST_5, Message1::M13::M32::E14_CONST_5,
      Message1::M13::M32::E14_CONST_2, Message1::M13::M32::E14_CONST_3,
      Message1::M13::M32::E14_CONST_5, Message1::M13::M32::E14_CONST_2,
      Message1::M13::M32::E14_CONST_1, Message1::M13::M32::E14_CONST_1,
  };
  for (auto v : array_3) {
    v16_0->add_f_24(v);
  }
  v16_0->set_f_13(Message1::M13::M32::E13_CONST_4);
  v16_0->set_f_26(s->substr(0, 11));
  v16_0->set_f_18(0x63275);
  v16_0->set_f_22(true);
  v16_0->set_f_11(s->substr(0, 3));
  v16_0->set_f_17(0x25170e1cea187707);
  v16_0->set_f_7(0x5bb513fa6f9d691c);
  v16_0->set_f_16(s->substr(0, 17));
  v16_0->set_f_27(s->substr(0, 1));
  v16_0->set_f_9(true);
  v16_0->set_f_19(0x1b08);
  v16_0->set_f_14(s->substr(0, 23));
  v16_0->set_f_15(s->substr(0, 3));
  v16_0->set_f_21(0x1b);
  v16_0->set_f_23(0xf15803b8bee0d13);
  Message1::M13::M27* v18_0 = v15->add_f_2();
  Message1::M13::M27::E8 array_4[20] = {
      Message1::M13::M27::E8_CONST_4, Message1::M13::M27::E8_CONST_2,
      Message1::M13::M27::E8_CONST_1, Message1::M13::M27::E8_CONST_2,
      Message1::M13::M27::E8_CONST_1, Message1::M13::M27::E8_CONST_5,
      Message1::M13::M27::E8_CONST_5, Message1::M13::M27::E8_CONST_3,
      Message1::M13::M27::E8_CONST_3, Message1::M13::M27::E8_CONST_3,
      Message1::M13::M27::E8_CONST_1, Message1::M13::M27::E8_CONST_2,
      Message1::M13::M27::E8_CONST_1, Message1::M13::M27::E8_CONST_5,
      Message1::M13::M27::E8_CONST_2, Message1::M13::M27::E8_CONST_2,
      Message1::M13::M27::E8_CONST_3, Message1::M13::M27::E8_CONST_1,
      Message1::M13::M27::E8_CONST_5, Message1::M13::M27::E8_CONST_5,
  };
  for (auto v : array_4) {
    v18_0->add_f_0(v);
  }
  message->set_f_6(0x370bcb90ee8c9d34);
  message->set_f_15(0x5a);
  message->set_f_10(0x2bb11aa698463874);
  message->set_f_28(0x2bafe5160377c82b);
  message->set_f_20(false);
  message->set_f_0(0x7bd22976cb03c93);
  message->set_f_21(s->substr(0, 21));
  Message1::M3* v19 = message->mutable_f_66();
  Message1::M3::M17* v20_0 = v19->add_f_5();
  v20_0->set_f_3(0x3de16f13dbed4147);
  Message1::M3::M17::M53* v21 = v20_0->mutable_f_9();
  v21->set_f_4(0x57);
  v21->set_f_2(0x24);
  v21->set_f_5(0x1c);
  v21->set_f_1(0x49);
  v21->add_f_0(Message1::M3::M17::M53::E20_CONST_3);
  v20_0->set_f_0(0.557925);
  Message1::M3::M17::M41* v22 = v20_0->mutable_f_8();
  (void)v22;  // Suppresses clang-tidy.
  message->set_f_16(0xa080f60f4d01a31);
  Message1::M1* v23 = message->mutable_f_60();
  v23->set_f_0(false);
  message->set_f_8(0x6b1466d1c);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_16(0x78978c4f2c9b2e5f);
  message->set_f_9(0xb954ff4);
  Message1::M8* v0 = message->mutable_f_76();
  v0->set_f_0(0x60c887e0);
  Message1::M8::M30* v1 = v0->mutable_f_2();
  v1->set_f_0(s->substr(0, 22));
  message->set_f_6(0x4ac56045f44c0ba2);
  message->set_f_8(0x356e);
  message->set_f_22(0x128c2);
  message->set_f_5(0x163b5492e6bb4a8b);
  message->set_f_28(0x32110dd192a05870);
  message->set_f_15(0xa73b541);
  message->set_f_21(s->substr(0, 20));
  message->add_f_18(Message1::E1_CONST_5);
  Message1::M14* v2 = message->mutable_f_84();
  v2->set_f_1(0.746282);
  v2->set_f_0(0x4e);
  Message1::M2* v3 = message->mutable_f_64();
  Message1::M2::M19* v4_0 = v3->add_f_4();
  v4_0->set_f_0(Message1::M2::M19::E7_CONST_5);
  Message1::M2::M19::M57* v5 = v4_0->mutable_f_3();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M2::M18* v6_0 = v3->add_f_2();
  Message1::M2::M18::M43* v7 = v6_0->mutable_f_6();
  (void)v7;  // Suppresses clang-tidy.
  Message1::M2::M18::M52* v8_0 = v6_0->add_f_7();
  v8_0->set_f_1(0x77233c55c7d3372d);
  v8_0->set_f_0(0x5d319631ce95dd9b);
  v3->set_f_0(0xf4fbc);
  Message1::M10* v9 = message->mutable_f_78();
  v9->set_f_0(Message1::M10::E3_CONST_3);
  v9->set_f_1(0x2f702354a27ee9bd);
  message->set_f_14(s->substr(0, 29));
  Message1::M3* v10 = message->mutable_f_66();
  (void)v10;  // Suppresses clang-tidy.
  Message1::M9* v11 = message->mutable_f_77();
  Message1::M9::M22* v12 = v11->mutable_f_3();
  v12->set_f_0(s->substr(0, 5));
  Message1::M9::M22::M48* v13 = v12->mutable_f_8();
  v13->set_f_0(0x7df342eb);
  Message1::M9::M22::M49* v14_0 = v12->add_f_9();
  v14_0->set_f_21(0x6f5490bfb7e4b882);
  Message1::M9::M22::M49::M64* v15_0 = v14_0->add_f_38();
  Message1::M9::M22::M49::M64::M70* v16 = v15_0->mutable_f_4();
  v16->set_f_0(true);
  v15_0->set_f_0(0x1934b2f13be307a9);
  Message1::M9::M22::M49::M64::M76* v17_0 = v15_0->add_f_8();
  v17_0->set_f_0(0x5672204f8f28b67e);
  v14_0->set_f_3(s->substr(0, 4));
  v14_0->set_f_17(s->substr(0, 57));
  v14_0->set_f_4(true);
  v14_0->set_f_10(0x321da4f);
  v14_0->set_f_13(true);
  v14_0->set_f_0(0x7d6a3ef9);
  v14_0->set_f_8(true);
  v14_0->set_f_14(0x3f81);
  v14_0->set_f_6(s->substr(0, 8));
  v14_0->add_f_19(Message1::M9::M22::M49::E19_CONST_4);
  v14_0->set_f_20(s->substr(0, 2));
  v14_0->set_f_7(0x657cc3af);
  v14_0->set_f_9(0x51de31bd6f30b4f4);
  v14_0->set_f_1(0x75);
  v14_0->set_f_11(s->substr(0, 3));
  v14_0->set_f_12(0x3d26b9352da8a9a);
  Message1::M9::M22::M59* v18 = v12->mutable_f_11();
  (void)v18;  // Suppresses clang-tidy.
  Message1::M9::M22::M40* v19 = v12->mutable_f_4();
  v19->set_f_0(s->substr(0, 48));
  v19->set_f_1(s->substr(0, 6));
  v11->set_f_0(false);
  message->set_f_1(0x22a1fe422a4cfb9b);
  message->set_f_0(0x2feb16bfd031eded);
  message->set_f_12(s->substr(0, 21));
  message->set_f_11(s->substr(0, 38));
  message->set_f_17(0x71cb9a3);
  Message1::M11* v20 = message->mutable_f_79();
  Message1::M11::M21* v21_0 = v20->add_f_3();
  Message1::M11::M21::M37* v22 = v21_0->mutable_f_2();
  v22->set_f_3(0x37);
  v22->set_f_2(0x53ec8376);
  Message1::M11::M21::M47* v23 = v21_0->mutable_f_4();
  v23->set_f_3(s->substr(0, 2));
  v23->set_f_4(0x44f2016d);
  v23->set_f_5(0.745465);
  v20->set_f_0(0x248b);
  message->set_f_4(s->substr(0, 3));
  message->set_f_3(0xaa981);
  message->set_f_29(0xd5aa889e8b7ed79);
  Message1::M16* v24 = message->mutable_f_87();
  v24->set_f_0(0x5d2cc75cbaee1b2a);
  Message1::M16::M26* v25 = v24->mutable_f_2();
  v25->set_f_0(0x3aec);
  Message1::M16::M26::M42* v26 = v25->mutable_f_4();
  v26->add_f_1(Message1::M16::M26::M42::E17_CONST_4);
  v26->set_f_0(false);
  v26->set_f_2(0x42f3d7bfa147c1fa);
  Message1::M13* v27 = message->mutable_f_82();
  Message1::M13::M32* v28_0 = v27->add_f_4();
  v28_0->set_f_3(0x4d532e8a);
  v28_0->set_f_25(s->substr(0, 3));
  v28_0->set_f_14(s->substr(0, 27));
  v28_0->add_f_2(Message1::M13::M32::E12_CONST_3);
  v28_0->set_f_11(s->substr(0, 1));
  v28_0->set_f_8(0x4b);
  v28_0->set_f_30(0x5d);
  v28_0->set_f_12(0x368c56ce);
  Message1::M13::M32::M36* v29_0 = v28_0->add_f_50();
  v29_0->set_f_1(0x3647ec62fdb78c74);
  v29_0->set_f_0(0x48a2113714b4603);
  v29_0->set_f_2(s->substr(0, 1));
  v29_0->set_f_4(false);
  v29_0->set_f_3(false);
  v28_0->set_f_5(0x71ffb5ccf7bd1a6e);
  v28_0->set_f_21(0x63);
  v28_0->set_f_23(0x283bf236de74e379);
  v28_0->set_f_20(s->substr(0, 5));
  v28_0->set_f_10(true);
  v28_0->set_f_17(0x214dcfe579182c3b);
  v28_0->set_f_19(0xea5955);
  v28_0->set_f_6(0x35);
  v28_0->set_f_7(0x751eaedf32e167d);
  Message1::M13::M32::E14 array_0[11] = {
      Message1::M13::M32::E14_CONST_1, Message1::M13::M32::E14_CONST_2,
      Message1::M13::M32::E14_CONST_4, Message1::M13::M32::E14_CONST_1,
      Message1::M13::M32::E14_CONST_1, Message1::M13::M32::E14_CONST_4,
      Message1::M13::M32::E14_CONST_3, Message1::M13::M32::E14_CONST_1,
      Message1::M13::M32::E14_CONST_2, Message1::M13::M32::E14_CONST_1,
      Message1::M13::M32::E14_CONST_4,
  };
  for (auto v : array_0) {
    v28_0->add_f_24(v);
  }
  v28_0->set_f_15(s->substr(0, 14));
  v28_0->set_f_26(s->substr(0, 50));
  v28_0->set_f_9(false);
  v28_0->set_f_22(true);
  v28_0->set_f_18(0x56);
  v28_0->set_f_29(0xce70776);
  v28_0->set_f_16(s->substr(0, 8));
  message->set_f_10(0x650be6eecd4be665);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M9* v0 = message->mutable_f_77();
  Message1::M9::M22* v1 = v0->mutable_f_3();
  Message1::M9::M22::M59* v2 = v1->mutable_f_11();
  v2->set_f_0(0x20ace62adff7fb6a);
  Message1::M9::M22::M49* v3_0 = v1->add_f_9();
  v3_0->set_f_17(s->substr(0, 32));
  v3_0->set_f_18(0x6f6af7d3b98fcfdb);
  v3_0->set_f_3(s->substr(0, 4));
  v3_0->set_f_8(false);
  v3_0->set_f_15(0x41);
  v3_0->set_f_11(s->substr(0, 20));
  v3_0->set_f_14(0x6c);
  v3_0->set_f_21(0x1729018ad684898);
  v3_0->set_f_12(0x41b8f3dd77f460a4);
  v3_0->set_f_13(true);
  v3_0->set_f_4(false);
  v3_0->set_f_9(0x482dcb3a67f4e177);
  v3_0->set_f_7(0x72b52774);
  v3_0->set_f_16(0x691f47791f3c1a04);
  v3_0->set_f_0(0x7c3455b4);
  v3_0->add_f_19(Message1::M9::M22::M49::E19_CONST_3);
  v3_0->set_f_10(0x76);
  v3_0->set_f_1(0x61);
  Message1::M9::M22::M49::M64* v4_0 = v3_0->add_f_38();
  Message1::M9::M22::M49::M64::M70* v5 = v4_0->mutable_f_4();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M9::M22::M49::M64::M68* v6 = v4_0->mutable_f_3();
  v6->set_f_3(s->substr(0, 15));
  v6->set_f_0(0xd6e742);
  v6->set_f_2(s->substr(0, 8));
  Message1::M9::M22::M49::M64::M75* v7_0 = v4_0->add_f_6();
  v7_0->set_f_3(s->substr(0, 25));
  v7_0->set_f_2(s->substr(0, 2));
  v7_0->set_f_0(0x6c);
  v7_0->set_f_1(0.153754);
  Message1::M9::M22::M49::M64::M76* v8_0 = v4_0->add_f_8();
  (void)v8_0;  // Suppresses clang-tidy.
  v4_0->set_f_0(0x68b7faad8c28e404);
  Message1::M9::M22::M40* v9 = v1->mutable_f_4();
  v9->set_f_1(s->substr(0, 2));
  v9->set_f_0(s->substr(0, 7));
  v1->set_f_0(s->substr(0, 7));
  v0->set_f_0(false);
  message->add_f_18(Message1::E1_CONST_5);
  message->set_f_13(s->substr(0, 27));
  message->set_f_20(true);
  message->set_f_1(0x181367581b49cbd6);
  message->set_f_19(s->substr(0, 49));
  Message1::M8* v10 = message->mutable_f_76();
  v10->set_f_0(0x405eb5b0);
  Message1::M8::M30* v11 = v10->mutable_f_2();
  Message1::M8::M30::M51* v12 = v11->mutable_f_7();
  v12->set_f_2(0x7a);
  v12->set_f_0(s->substr(0, 2));
  v12->set_f_1(s->substr(0, 22));
  v12->set_f_3(s->substr(0, 27));
  v11->set_f_0(s->substr(0, 30));
  message->set_f_8(0xce96d3953c3099);
  message->set_f_16(0x34cc1d2d4bcbd4f4);
  Message1::M4* v13 = message->mutable_f_69();
  v13->add_f_0(Message1::M4::E2_CONST_5);
  Message1::M10* v14 = message->mutable_f_78();
  v14->set_f_2(Message1::M10::E4_CONST_3);
  v14->set_f_0(Message1::M10::E3_CONST_1);
  message->set_f_14(s->substr(0, 17));
  message->set_f_25(0x5ce811d7ec2bac);
  message->set_f_3(0x11);
  Message1::M12* v15_0 = message->add_f_80();
  v15_0->set_f_1(false);
  message->set_f_29(0x5fff222c81dc2c96);
  message->set_f_2(s->substr(0, 2));
  message->set_f_12(s->substr(0, 19));
  message->set_f_23(0x5c);
  message->set_f_11(s->substr(0, 6));
  message->set_f_5(0x28c5b6cc70cd6cd3);
  message->set_f_7(s->substr(0, 401));
  message->set_f_28(0x5805eb2577aa2fd8);
  Message1::M6* v16 = message->mutable_f_71();
  v16->set_f_0(0x947a5c2);
  Message1::M6::M25* v17 = v16->mutable_f_4();
  v17->set_f_1(0x6d488f952e47d981);
  Message1::M6::M25::M44* v18_0 = v17->add_f_5();
  (void)v18_0;  // Suppresses clang-tidy.
  Message1::M6::M25::M50* v19 = v17->mutable_f_7();
  v19->set_f_1(0x2d41f58aff7edd06);
  v19->set_f_2(0xaa72cfa);
  v19->set_f_4(0xd48c7af);
  v19->set_f_3(true);
  v19->set_f_5(0x50);
  message->set_f_10(0x35655461174067b8);
  Message1::M14* v20 = message->mutable_f_84();
  v20->set_f_0(0x6b);
  v20->set_f_1(0.779961);
  message->set_f_6(0x657b9efe13218a20);
  Message1::M16* v21 = message->mutable_f_87();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_27(false);
  Message1::M13* v22 = message->mutable_f_82();
  Message1::M13::M32* v23_0 = v22->add_f_4();
  v23_0->set_f_0(0x503f17b5);
  v23_0->set_f_17(0x1c9b7188bd8aa654);
  v23_0->set_f_5(0x19ab6cf0e7e3f6bd);
  v23_0->add_f_2(Message1::M13::M32::E12_CONST_5);
  v23_0->set_f_12(0x68b16a54);
  v23_0->set_f_14(s->substr(0, 21));
  v23_0->set_f_19(0x73);
  v23_0->set_f_29(0xadc4cbc);
  v23_0->set_f_21(0x44);
  v23_0->set_f_8(0x36);
  v23_0->set_f_27(s->substr(0, 26));
  v23_0->set_f_18(0x6a);
  v23_0->set_f_22(false);
  v23_0->set_f_13(Message1::M13::M32::E13_CONST_1);
  v23_0->set_f_6(0x6c);
  v23_0->set_f_23(0x2ba93fbfff9c2e60);
  v23_0->set_f_15(s->substr(0, 6));
  v23_0->set_f_30(0x1d09dc);
  v23_0->set_f_28(s->substr(0, 10));
  v23_0->set_f_16(s->substr(0, 28));
  v23_0->set_f_10(true);
  v23_0->set_f_25(s->substr(0, 1));
  Message1::M13::M27* v24_0 = v22->add_f_2();
  v24_0->add_f_0(Message1::M13::M27::E8_CONST_4);
  v22->set_f_0(Message1::M13::E5_CONST_1);
  message->set_f_9(0x6b75789);
  message->set_f_17(0x6892e85c);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M13* v0 = message->mutable_f_82();
  Message1::M13::M27* v1_0 = v0->add_f_2();
  v1_0->add_f_0(Message1::M13::M27::E8_CONST_2);
  v0->set_f_0(Message1::M13::E5_CONST_4);
  message->set_f_13(s->substr(0, 3));
  Message1::M2* v2 = message->mutable_f_64();
  Message1::M2::M19* v3_0 = v2->add_f_4();
  Message1::M2::M19::M57* v4 = v3_0->mutable_f_3();
  v4->set_f_0(0x9174db3e09b43fe);
  v3_0->set_f_0(Message1::M2::M19::E7_CONST_4);
  Message1::M2::M18* v5_0 = v2->add_f_2();
  Message1::M2::M18::M43* v6 = v5_0->mutable_f_6();
  v6->set_f_0(0x1e92bd4b95fd8dfa);
  v5_0->set_f_2(0x635b70a);
  Message1::M2::M18::M52* v7_0 = v5_0->add_f_7();
  v7_0->set_f_0(0x55f13df95f203c14);
  v7_0->set_f_1(0x7acb57da7aa62626);
  Message1::M2::M20* v8_0 = v2->add_f_6();
  v8_0->set_f_0(s->substr(0, 44));
  v2->set_f_0(0x15563);
  message->set_f_16(0x51f8f8066055c313);
  message->set_f_15(0x361153d);
  Message1::M4* v9 = message->mutable_f_69();
  Message1::M4::M31* v10_0 = v9->add_f_2();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->add_f_0(Message1::M4::E2_CONST_4);
  Message1::M12* v11_0 = message->add_f_80();
  (void)v11_0;  // Suppresses clang-tidy.
  message->set_f_2(s->substr(0, 305));
  message->set_f_0(0x72fa384cca8b0c9e);
  message->set_f_11(s->substr(0, 3));
  message->set_f_29(0x5dbff54ff6928517);
  Message1::M16* v12 = message->mutable_f_87();
  Message1::M16::M26* v13 = v12->mutable_f_2();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_0(0x7a886e50c706755f);
  message->set_f_10(0x27a98caac108fd3b);
  message->set_f_5(0x39d609178349de20);
  message->set_f_6(0x4bab123c921e67fc);
  message->set_f_24(0.114639);
  message->set_f_8(0x7b60e67b1);
  message->set_f_26(s->substr(0, 18));
  message->set_f_19(s->substr(0, 2));
  message->set_f_25(0x99775ffaaed6df);
  Message1::M6* v14 = message->mutable_f_71();
  Message1::M6::M25* v15 = v14->mutable_f_4();
  v15->set_f_0(s->substr(0, 32));
  Message1::M6::M25::M50* v16 = v15->mutable_f_7();
  v16->set_f_1(0x29597d240ed755a9);
  v16->set_f_2(0xf557b31);
  v16->set_f_5(0x6f);
  v16->set_f_4(0x9);
  v15->set_f_1(0x9525b2c10eab54f);
  v14->set_f_0(0x71);
  Message1::M6::M34* v17 = v14->mutable_f_5();
  v17->set_f_1(0x2fcf147212cac6e);
  Message1::M6::M34::M35* v18_0 = v17->add_f_4();
  (void)v18_0;  // Suppresses clang-tidy.
  Message1::M14* v19 = message->mutable_f_84();
  v19->set_f_1(0.380918);
  message->set_f_4(s->substr(0, 16));
  Message1::M7* v20 = message->mutable_f_73();
  v20->set_f_0(s->substr(0, 4));
  message->set_f_21(s->substr(0, 24));
  Message1::E1 array_0[10] = {
      Message1::E1_CONST_1, Message1::E1_CONST_5, Message1::E1_CONST_4,
      Message1::E1_CONST_4, Message1::E1_CONST_5, Message1::E1_CONST_4,
      Message1::E1_CONST_3, Message1::E1_CONST_2, Message1::E1_CONST_2,
      Message1::E1_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_18(v);
  }
  Message1::M10* v21 = message->mutable_f_78();
  v21->set_f_1(0x5ef2a3361e8ea88f);
  v21->set_f_0(Message1::M10::E3_CONST_4);
  Message1::M10::M33* v22_0 = v21->add_f_6();
  (void)v22_0;  // Suppresses clang-tidy.
  message->set_f_28(0x5669b7e0658e004);
  message->set_f_9(0x4);
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
}  // namespace fleetbench::rpc::P7::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
