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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message2.pb.h"

namespace fleetbench::rpc::P8::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M3* v0 = message->mutable_f_54();
  Message2::M3::M31* v1 = v0->mutable_f_15();
  Message2::M3::M31::M34* v2 = v1->mutable_f_4();
  (void)v2;  // Suppresses clang-tidy.
  v1->set_f_0(s->substr(0, 2));
  Message2::M3::M16* v3 = v0->mutable_f_9();
  v3->set_f_0(0x3375ece2a69e0728);
  Message2::M3::M9* v4 = v0->mutable_f_4();
  v4->set_f_4(0.731284);
  v4->set_f_10(0x19e1a099);
  v4->set_f_2(0.760054);
  v4->set_f_1(0x5f6e8da1f0a31aeb);
  v4->set_f_8(s->substr(0, 8));
  Message2::M3::M9::M33* v5 = v4->mutable_f_21();
  v5->set_f_0(0x9e57357a0c9dee04);
  v4->set_f_7(0xf988bad);
  v4->set_f_0(s->substr(0, 8));
  v4->set_f_9(0x311fde888b430bc4);
  v4->set_f_5(0x9b58a6266cdbaadd);
  v4->set_f_6(0x4b85387f);
  Message2::M3::M14* v6 = v0->mutable_f_8();
  v6->set_f_2(s->substr(0, 2));
  v6->set_f_1(s->substr(0, 7));
  Message2::M3::M26* v7_0 = v0->add_f_14();
  v7_0->set_f_3(0x45007cf645ca3872);
  v7_0->set_f_2(0x1136);
  v7_0->set_f_0(false);
  Message2::M3::M25* v8_0 = v0->add_f_13();
  v8_0->set_f_2(s->substr(0, 5));
  v8_0->set_f_1(0x8c24bedb9bc20482);
  v8_0->set_f_0(s->substr(0, 5));
  v8_0->set_f_3(s->substr(0, 3));
  v0->set_f_0(0x9621e6b0e4f0b70c);
  Message2::M3::M11* v9_0 = v0->add_f_5();
  v9_0->add_f_0(Message2::M3::M11::E3_CONST_1);
  v9_0->add_f_0(Message2::M3::M11::E3_CONST_3);
  v9_0->add_f_0(Message2::M3::M11::E3_CONST_3);
  v9_0->set_f_2(0x48524ed4);
  Message2::M3::M24* v10_0 = v0->add_f_11();
  v10_0->set_f_2(0xdb0095f0e1b0038f);
  v10_0->set_f_3(0xac0556b);
  Message2::M3::M24::E4 array_1[19] = {
      Message2::M3::M24::E4_CONST_3, Message2::M3::M24::E4_CONST_3,
      Message2::M3::M24::E4_CONST_4, Message2::M3::M24::E4_CONST_1,
      Message2::M3::M24::E4_CONST_3, Message2::M3::M24::E4_CONST_4,
      Message2::M3::M24::E4_CONST_1, Message2::M3::M24::E4_CONST_4,
      Message2::M3::M24::E4_CONST_2, Message2::M3::M24::E4_CONST_2,
      Message2::M3::M24::E4_CONST_3, Message2::M3::M24::E4_CONST_4,
      Message2::M3::M24::E4_CONST_2, Message2::M3::M24::E4_CONST_1,
      Message2::M3::M24::E4_CONST_1, Message2::M3::M24::E4_CONST_5,
      Message2::M3::M24::E4_CONST_2, Message2::M3::M24::E4_CONST_3,
      Message2::M3::M24::E4_CONST_1,
  };
  for (auto v : array_1) {
    v10_0->add_f_1(v);
  }
  v10_0->set_f_0(0xcb9e97c9461eb1da);
  message->set_f_29(0x4b1f315);
  message->set_f_27(true);
  Message2::M2* v11 = message->mutable_f_51();
  Message2::M2::M22* v12 = v11->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  Message2::M2::M23* v13 = v11->mutable_f_5();
  Message2::M2::M23::M40* v14_0 = v13->add_f_6();
  v14_0->set_f_3(0x3a2);
  v14_0->set_f_2(0x2e749e43ce65e195);
  v14_0->set_f_0(s->substr(0, 4));
  v14_0->set_f_1(false);
  v13->set_f_3(0x691204a1ee2a8086);
  Message2::M2::M23::M35* v15 = v13->mutable_f_5();
  v15->set_f_0(s->substr(0, 112));
  v15->set_f_2(s->substr(0, 7));
  v15->set_f_1(true);
  Message2::M2::M23::M35::M45* v16 = v15->mutable_f_9();
  v16->set_f_2(s->substr(0, 11));
  v16->set_f_0(0x6c);
  v16->set_f_13(0.827236);
  v16->set_f_5(0x8c387d9402fe0928);
  v16->set_f_1(0x4a165584f05f2a0d);
  v16->set_f_9(0x7e425e0ae941f59d);
  v16->set_f_3(0x8b408ed65e85164b);
  v16->set_f_16(0x6089758fd57c034d);
  v16->set_f_14(0x42);
  v16->set_f_15(0x21ee194d);
  v16->set_f_20(false);
  v16->set_f_17(s->substr(0, 25));
  v16->set_f_12(0.490639);
  v16->set_f_4(0xc506e8797e83f03a);
  v13->set_f_2(0xbaba7302c5591365);
  v13->set_f_0(0x35);
  Message2::M2::M23::M41* v17 = v13->mutable_f_7();
  v17->set_f_1(s->substr(0, 3));
  v17->set_f_0(0x432029de75381502);
  v13->set_f_1(0xb50813f);
  Message2::M2::M10* v18 = v11->mutable_f_2();
  Message2::M2::M10::M36* v19_0 = v18->add_f_6();
  v19_0->set_f_0(0x81d0bbf2a3e5c238);
  v18->set_f_1(0xd516b7c);
  v18->set_f_2(0x7ba9398);
  v18->set_f_0(s->substr(0, 111));
  v11->set_f_0(s->substr(0, 2));
  Message2::M2::M20* v20 = v11->mutable_f_3();
  v20->set_f_0(s->substr(0, 1));
  message->set_f_22(0x10f60f);
  message->set_f_19(0x7f77d4ee43268af9);
  message->set_f_2(s->substr(0, 1));
  Message2::M4* v21 = message->mutable_f_56();
  Message2::M4::M27* v22 = v21->mutable_f_6();
  v22->set_f_0(true);
  Message2::M4::M12* v23_0 = v21->add_f_5();
  v23_0->set_f_0(0x9b08776009336ee5);
  Message2::M4::M12::M43* v24 = v23_0->mutable_f_4();
  v24->set_f_1(0.170472);
  v23_0->set_f_1(s->substr(0, 28));
  Message2::M4::M28* v25_0 = v21->add_f_7();
  v25_0->set_f_0(0xe82963bde20598d);
  v21->set_f_0(0x7c3b341a325c8ed5);
  message->set_f_23(0x86c15d5768a853fb);
  message->set_f_28(s->substr(0, 8));
  message->set_f_17(0x3e8cd631227af2dc);
  message->set_f_7(0x1ec34ed640b2e2a3);
  message->set_f_25(s->substr(0, 96));
  message->set_f_6(0x7c);
  message->set_f_11(0x448180e);
  message->set_f_16(s->substr(0, 3));
  message->set_f_12(0x29d3c8cb2179cb6b);
  message->set_f_15(s->substr(0, 8));
  message->set_f_24(0x6993de3697dfaeb);
  message->set_f_13(0x7a6430515da0258e);
  message->set_f_5(0x4c);
  message->set_f_18(s->substr(0, 57));
  message->set_f_1(0xb2b83cf444efd84e);
  message->set_f_21(0xc06d29801bb972ad);
  message->set_f_0(s->substr(0, 14));
  message->set_f_4(0xe30ed8b286770a0);
  message->set_f_26(0.047020);
  message->set_f_3(0x1fee);
  Message2::M1* v26_0 = message->add_f_50();
  v26_0->set_f_0(0x1c88ced8cff543e4);
  Message2::M1::M32* v27 = v26_0->mutable_f_8();
  v27->set_f_1(0.809758);
  v27->set_f_0(0x242d0bcb04b1a85);
  Message2::M1::M17* v28 = v26_0->mutable_f_6();
  v28->set_f_0(0xde532);
  v28->set_f_1(true);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_24(0xa6461cbe9c3908f7);
  message->set_f_29(0x2b00);
  message->set_f_9(0x1ae4163);
  Message2::M3* v0 = message->mutable_f_54();
  Message2::M3::M11* v1_0 = v0->add_f_5();
  v1_0->set_f_3(0x96ad03);
  v1_0->set_f_2(0x474461dc);
  Message2::M3::M25* v2_0 = v0->add_f_13();
  v2_0->set_f_3(s->substr(0, 7));
  v2_0->set_f_1(0x888a66d64d6cf682);
  v2_0->set_f_4(false);
  v2_0->set_f_2(s->substr(0, 18));
  v2_0->set_f_0(s->substr(0, 7));
  Message2::M3::M9* v3 = v0->mutable_f_4();
  v3->set_f_6(0x693b7caf);
  v3->set_f_0(s->substr(0, 6));
  v3->set_f_4(0.769411);
  v3->set_f_5(0xea020a1d07dc47aa);
  v3->set_f_10(0xe8f7ffb);
  Message2::M3::M9::M33* v4 = v3->mutable_f_21();
  v4->set_f_0(0x99b027c709952d9b);
  v3->set_f_7(0x36);
  v3->set_f_8(s->substr(0, 11));
  v3->set_f_2(0.027363);
  Message2::M3::M24* v5_0 = v0->add_f_11();
  v5_0->add_f_1(Message2::M3::M24::E4_CONST_5);
  v5_0->add_f_1(Message2::M3::M24::E4_CONST_5);
  v5_0->set_f_2(0xf7ce37031273c698);
  v5_0->set_f_0(0x707829c85033bc12);
  Message2::M3::M31* v6 = v0->mutable_f_15();
  Message2::M3::M31::M34* v7 = v6->mutable_f_4();
  v7->set_f_0(s->substr(0, 7));
  Message2::M3::M14* v8 = v0->mutable_f_8();
  v8->set_f_2(s->substr(0, 11));
  v8->set_f_0(0x3e4c7b9d782283b9);
  v8->set_f_1(s->substr(0, 12));
  v0->set_f_0(0x1fb2e58c58d32c5e);
  Message2::M3::M16* v9 = v0->mutable_f_9();
  (void)v9;  // Suppresses clang-tidy.
  message->set_f_3(0x1d8e1de);
  message->set_f_19(0x4e1dd3471a9db32);
  message->set_f_17(0xb239035a4f5d4ee3);
  message->set_f_10(0x68);
  Message2::M2* v10 = message->mutable_f_51();
  v10->set_f_0(s->substr(0, 3));
  Message2::M2::M23* v11 = v10->mutable_f_5();
  v11->set_f_1(0xc7b875a);
  Message2::M2::M23::M40* v12_0 = v11->add_f_6();
  v12_0->set_f_0(s->substr(0, 328));
  v12_0->set_f_3(0xfa3f4bd);
  v12_0->set_f_1(true);
  v11->set_f_3(0xfb5e559100f52a00);
  v11->set_f_2(0x945ebc50432d5746);
  Message2::M2::M23::M41* v13 = v11->mutable_f_7();
  v13->set_f_0(0x7a9831c3113de76);
  v13->set_f_1(s->substr(0, 2));
  Message2::M2::M22* v14 = v10->mutable_f_4();
  v14->set_f_0(0x30);
  Message2::M2::M20* v15 = v10->mutable_f_3();
  v15->set_f_0(s->substr(0, 8));
  Message2::M1* v16_0 = message->add_f_50();
  Message2::M1::M32* v17 = v16_0->mutable_f_8();
  v17->set_f_0(0x4ae7eb413aa3517d);
  v17->set_f_1(0.023653);
  Message2::M1::M8* v18 = v16_0->mutable_f_4();
  Message2::M1::M8::M42* v19 = v18->mutable_f_6();
  (void)v19;  // Suppresses clang-tidy.
  v18->set_f_1(0xacd86b4);
  v18->set_f_0(s->substr(0, 18));
  v16_0->set_f_0(0xda07d71964a44af5);
  Message2::M4* v20 = message->mutable_f_56();
  v20->set_f_0(0xab65058a336a373b);
  Message2::M4::M27* v21 = v20->mutable_f_6();
  v21->set_f_0(false);
  message->set_f_6(0x7c);
  message->set_f_12(0xc218bfa5de4ea1dd);
  message->set_f_4(0x7967deaddd2b13e4);
  message->set_f_15(s->substr(0, 5));
  message->set_f_25(s->substr(0, 29));
  message->set_f_11(0xb);
  message->set_f_0(s->substr(0, 5));
  Message2::M6* v22 = message->mutable_f_61();
  v22->set_f_22(s->substr(0, 3));
  v22->set_f_12(true);
  Message2::M6::M30* v23 = v22->mutable_f_43();
  v23->set_f_1(0x8f7e);
  v23->set_f_0(0x673631a);
  v23->set_f_2(0x1f);
  Message2::M6::M29* v24 = v22->mutable_f_42();
  v24->set_f_0(0x12);
  Message2::M6::E1 array_0[18] = {
      Message2::M6::E1_CONST_3, Message2::M6::E1_CONST_2,
      Message2::M6::E1_CONST_4, Message2::M6::E1_CONST_5,
      Message2::M6::E1_CONST_2, Message2::M6::E1_CONST_1,
      Message2::M6::E1_CONST_2, Message2::M6::E1_CONST_1,
      Message2::M6::E1_CONST_1, Message2::M6::E1_CONST_2,
      Message2::M6::E1_CONST_2, Message2::M6::E1_CONST_5,
      Message2::M6::E1_CONST_1, Message2::M6::E1_CONST_4,
      Message2::M6::E1_CONST_2, Message2::M6::E1_CONST_1,
      Message2::M6::E1_CONST_3, Message2::M6::E1_CONST_4,
  };
  for (auto v : array_0) {
    v22->add_f_9(v);
  }
  v22->set_f_4(0xdb2);
  v22->set_f_21(0x1e2c3aa4555c8b81);
  v22->set_f_20(0x4a476ad292705a0f);
  v22->set_f_6(0x9fa84ff3a604a53f);
  Message2::M6::M18* v25 = v22->mutable_f_40();
  v25->set_f_0(0xb4217c4fc89819f3);
  v22->set_f_2(0.576300);
  v22->set_f_5(0x11ebe6d4d5955536);
  v22->set_f_19(0xa091ce0);
  Message2::M6::M21* v26 = v22->mutable_f_41();
  v26->set_f_0(false);
  v22->set_f_17(0xa065d7c);
  v22->set_f_3(0x5cda0d49);
  v22->set_f_8(0x51);
  v22->set_f_11(0x8);
  v22->set_f_14(0x7ace75e30a97cfb3);
  v22->set_f_15(0x91f18b92f1e03c18);
  message->set_f_14(0x9b68787c156f4177);
  message->set_f_22(0x27);
  message->set_f_28(s->substr(0, 4));
  message->set_f_21(0xe6600e14f3ccf088);
  message->set_f_26(0.282548);
  message->set_f_20(0x321f01e7c08d06f2);
  message->set_f_5(0x6d);
  message->set_f_2(s->substr(0, 7));
  message->set_f_16(s->substr(0, 10));
  Message2::M5* v27_0 = message->add_f_58();
  Message2::M5::M7* v28_0 = v27_0->add_f_2();
  v28_0->set_f_0(s->substr(0, 21));
  v27_0->set_f_0(s->substr(0, 20));
  Message2::M5::M13* v29 = v27_0->mutable_f_3();
  v29->set_f_0(s->substr(0, 63));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_9(0x7c);
  Message2::M4* v0 = message->mutable_f_56();
  Message2::M4::M27* v1 = v0->mutable_f_6();
  v1->set_f_0(false);
  Message2::M4::M28* v2_0 = v0->add_f_7();
  v2_0->set_f_0(0x4534660e14e0a84b);
  v0->set_f_0(0x6beb747bee44093e);
  Message2::M4::M12* v3_0 = v0->add_f_5();
  v3_0->set_f_0(0x42c76eddbf58fae5);
  Message2::M4::M12::M43* v4 = v3_0->mutable_f_4();
  v4->set_f_2(s->substr(0, 4));
  v4->set_f_1(0.577296);
  v4->set_f_0(0x3ccb446b5b287dff);
  v3_0->set_f_1(s->substr(0, 13));
  message->set_f_12(0x37d6a0aa6a8a34da);
  message->set_f_22(0x8135fc7);
  message->set_f_20(0xfa76f08b99d4280a);
  Message2::M5* v5_0 = message->add_f_58();
  Message2::M5::M13* v6 = v5_0->mutable_f_3();
  v6->set_f_0(s->substr(0, 7));
  Message2::M5::M7* v7_0 = v5_0->add_f_2();
  v7_0->set_f_0(s->substr(0, 22));
  Message2::M5::M19* v8_0 = v5_0->add_f_5();
  Message2::M5::M19::M38* v9_0 = v8_0->add_f_2();
  v9_0->set_f_2(0x77);
  v9_0->set_f_1(0x167125ff2c297cdf);
  v9_0->set_f_4(false);
  v9_0->set_f_3(0xc72c649);
  v9_0->set_f_0(s->substr(0, 18));
  v8_0->set_f_0(0xc1ea91f);
  message->set_f_24(0x433d55ac46301118);
  message->set_f_6(0x35);
  message->set_f_18(s->substr(0, 16));
  message->set_f_19(0xae9f475175ade644);
  message->set_f_7(0xd99747603d4a3b73);
  message->set_f_11(0x3874dfe);
  message->set_f_8(0xa8b67f8fdf9fdc52);
  Message2::M2* v10 = message->mutable_f_51();
  Message2::M2::M20* v11 = v10->mutable_f_3();
  v11->set_f_0(s->substr(0, 7));
  v10->set_f_0(s->substr(0, 4));
  Message2::M2::M23* v12 = v10->mutable_f_5();
  v12->set_f_1(0x67);
  v12->set_f_0(0x61);
  v12->set_f_3(0xcf7b3662a84b3d34);
  Message2::M2::M23::M35* v13 = v12->mutable_f_5();
  v13->set_f_0(s->substr(0, 2));
  v13->set_f_2(s->substr(0, 16));
  v13->set_f_1(true);
  v13->set_f_3(0x2e38);
  Message2::M2::M23::M35::M45* v14 = v13->mutable_f_9();
  v14->set_f_7(s->substr(0, 5));
  Message2::M2::M23::M35::M45::M47* v15 = v14->mutable_f_33();
  v15->set_f_3(false);
  v15->set_f_2(false);
  Message2::M2::M23::M35::M45::M47::M48* v16 = v15->mutable_f_8();
  v16->set_f_0(0x18fa22bcc71);
  v15->set_f_1(s->substr(0, 8));
  v14->set_f_17(s->substr(0, 2));
  v14->set_f_15(0x7713529c);
  v14->set_f_8(0xedc2385b86b0d42f);
  v14->set_f_12(0.089610);
  v14->set_f_1(0x12b32905b2f84863);
  v14->set_f_4(0xde44138d77aa63f2);
  v14->set_f_11(0x737d233);
  v14->set_f_14(0x924fb54);
  v14->set_f_5(0xf8b3f37795aae1ce);
  v14->set_f_19(0.823042);
  v14->set_f_16(0x4cc31912d667ede5);
  v14->set_f_3(0xceccf5b3fb17148);
  v14->set_f_2(s->substr(0, 2));
  v12->set_f_2(0xd9ec30645c925320);
  Message2::M2::M23::M40* v17_0 = v12->add_f_6();
  v17_0->set_f_1(false);
  v17_0->set_f_0(s->substr(0, 6));
  v17_0->set_f_3(0x840576d);
  Message2::M2::M23::M41* v18 = v12->mutable_f_7();
  v18->set_f_0(0x1e55ff921e7a43e0);
  Message2::M2::M10* v19 = v10->mutable_f_2();
  v19->set_f_1(0x3b);
  v19->set_f_2(0x7b);
  message->set_f_23(0xf8e76afc2a1da50a);
  message->set_f_17(0x6b1dfae6de99e445);
  message->set_f_0(s->substr(0, 490));
  message->set_f_25(s->substr(0, 7));
  message->set_f_15(s->substr(0, 23));
  message->set_f_26(0.276125);
  message->set_f_29(0x9a6129);
  message->set_f_4(0x7a6fe3663f3bb73c);
  message->set_f_3(0xa519ed9);
  message->set_f_13(0x31eb9a5259319b9a);
  message->set_f_1(0xefe11d8117e1986a);
  message->set_f_10(0x6e);
  message->set_f_21(0xb0fdd01665ee142e);
  message->set_f_5(0x3ad6);
  Message2::M1* v20_0 = message->add_f_50();
  v20_0->set_f_0(0x97f583c2bd959430);
  Message2::M1::M17* v21 = v20_0->mutable_f_6();
  v21->set_f_1(true);
  v21->set_f_0(0x61);
  Message2::M1::M32* v22 = v20_0->mutable_f_8();
  v22->set_f_0(0x908423af144125c0);
  v22->set_f_1(0.406990);
  message->set_f_27(true);
  message->set_f_2(s->substr(0, 63));
  Message2::M3* v23 = message->mutable_f_54();
  Message2::M3::M11* v24_0 = v23->add_f_5();
  v24_0->set_f_1(0x54e0f08bfa690c3e);
  v24_0->set_f_2(0x3d7435a2);
  v24_0->add_f_0(Message2::M3::M11::E3_CONST_1);
  Message2::M3::M16* v25 = v23->mutable_f_9();
  v25->set_f_0(0xaa9ce5daee8e8a1c);
  Message2::M3::M16::M39* v26 = v25->mutable_f_5();
  v26->set_f_0(0x12e32518cfe5c542);
  v23->set_f_0(0xc498397ab2c86436);
  Message2::M3::M24* v27_0 = v23->add_f_11();
  v27_0->add_f_1(Message2::M3::M24::E4_CONST_2);
  v27_0->set_f_0(0xf437827ca110a803);
  v27_0->set_f_3(0xef7fe);
  Message2::M3::M31* v28 = v23->mutable_f_15();
  v28->set_f_0(s->substr(0, 58));
  Message2::M3::M31::M34* v29 = v28->mutable_f_4();
  v29->set_f_0(s->substr(0, 1));
  Message2::M3::M14* v30 = v23->mutable_f_8();
  v30->set_f_1(s->substr(0, 22));
  v30->set_f_0(0x5d7e1499d5232b4b);
  v30->set_f_2(s->substr(0, 8));
  Message2::M3::M14::M37* v31 = v30->mutable_f_4();
  Message2::M3::M14::M37::M44* v32 = v31->mutable_f_3();
  v32->set_f_2(0x3c9f604bfc11625b);
  v32->set_f_0(0xdc259d4d1a44a51d);
  Message2::M3::M14::M37::M44::M46* v33 = v32->mutable_f_7();
  v33->set_f_0(s->substr(0, 2));
  v33->set_f_2(s->substr(0, 2));
  v32->set_f_3(0x8328497a4d55b131);
  Message2::M3::M9* v34 = v23->mutable_f_4();
  v34->set_f_8(s->substr(0, 14));
  v34->set_f_7(0x3992);
  v34->set_f_10(0x364a444c);
  v34->set_f_9(0xc729a0723972bd0e);
  v34->set_f_0(s->substr(0, 8));
  v34->set_f_5(0x5ee7e68123f0127e);
  Message2::M3::M9::M33* v35 = v34->mutable_f_21();
  v35->set_f_0(0x40f28a8d77221612);
  v34->set_f_6(0x736856);
  v34->set_f_3(0x4864462615f9c899);
  Message2::M6* v36 = message->mutable_f_61();
  v36->set_f_20(0xc92f3e1e101a4689);
  v36->set_f_0(s->substr(0, 11));
  v36->set_f_13(s->substr(0, 6));
  v36->set_f_18(0x5950c8f2bf4c0790);
  v36->set_f_2(0.211853);
  v36->set_f_11(0x76);
  v36->set_f_17(0x2);
  v36->add_f_16(Message2::M6::E2_CONST_4);
  v36->set_f_19(0xb8ded85);
  v36->set_f_3(0x73d75879);
  v36->add_f_9(Message2::M6::E1_CONST_2);
  Message2::M6::M30* v37 = v36->mutable_f_43();
  v37->set_f_4(0x8852f395247e0e22);
  v37->set_f_3(0x959130d09d189e85);
  v37->set_f_2(0x2e);
  v36->set_f_25(0xf93510ee58b8034f);
  v36->set_f_22(s->substr(0, 56));
  v36->set_f_23(0x2d60f5539460789d);
  v36->set_f_12(true);
  v36->set_f_6(0x32ead466a7909c5b);
  v36->set_f_24(0xc);
  v36->set_f_4(0x6f);
  v36->set_f_15(0x37d250abe479801d);
  Message2::M6::M29* v38 = v36->mutable_f_42();
  v38->set_f_0(0xe3dbb2f);
  Message2::M6::M18* v39 = v36->mutable_f_40();
  (void)v39;  // Suppresses clang-tidy.
  v36->set_f_10(s->substr(0, 4));
  v36->set_f_14(0xbc167ed8dc5f171);
  v36->set_f_5(0x3961068d999833ed);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_18(s->substr(0, 1));
  message->set_f_16(s->substr(0, 1));
  message->set_f_5(0xa0b5d);
  message->set_f_27(false);
  message->set_f_17(0x1e1a1d1997b8238a);
  message->set_f_21(0x28d18db338ec6b5);
  message->set_f_10(0x79c5ee9);
  Message2::M4* v0 = message->mutable_f_56();
  v0->set_f_0(0xeca017a7d9de8bd3);
  Message2::M4::M27* v1 = v0->mutable_f_6();
  v1->set_f_0(true);
  Message2::M4::M28* v2_0 = v0->add_f_7();
  v2_0->set_f_0(0xd34d1ca3bcdf108b);
  message->set_f_2(s->substr(0, 5));
  message->set_f_0(s->substr(0, 4));
  message->set_f_24(0x733ab0b84f3fd15d);
  message->set_f_28(s->substr(0, 4));
  message->set_f_3(0x5d5f077);
  message->set_f_8(0xdda231bcd017e994);
  message->set_f_11(0x26);
  message->set_f_6(0x1f);
  message->set_f_14(0x511fe3ff69ceb079);
  Message2::M2* v3 = message->mutable_f_51();
  Message2::M2::M23* v4 = v3->mutable_f_5();
  v4->set_f_1(0x1a);
  Message2::M2::M23::M35* v5 = v4->mutable_f_5();
  Message2::M2::M23::M35::M45* v6 = v5->mutable_f_9();
  v6->set_f_0(0x1beb25);
  v6->set_f_1(0xf92ccc6ac150479a);
  v6->set_f_8(0xc02d65a65259d52e);
  Message2::M2::M23::M35::M45::M47* v7 = v6->mutable_f_33();
  v7->set_f_0(0x98003f6eaa4020cd);
  v7->set_f_3(true);
  v7->set_f_1(s->substr(0, 1));
  v7->set_f_2(true);
  v6->set_f_5(0xdc279fde85e8cf3c);
  v6->set_f_18(0x703fe7c);
  v6->set_f_19(0.282112);
  v6->set_f_2(s->substr(0, 14));
  v6->set_f_10(s->substr(0, 44));
  v6->set_f_17(s->substr(0, 9));
  v6->set_f_13(0.379850);
  v6->set_f_9(0xe20f61b7ccd7e815);
  v6->set_f_16(0xe77bf1cb88428b26);
  v6->set_f_4(0x55b2b03325c44c4d);
  v6->set_f_11(0x86a3a9);
  v5->set_f_0(s->substr(0, 155));
  v5->set_f_3(0x59);
  v5->set_f_1(true);
  v5->set_f_2(s->substr(0, 6));
  v4->set_f_3(0xd43743a76af94357);
  v4->set_f_2(0x2f4757f6c89e3423);
  v4->set_f_0(0x1b);
  Message2::M2::M20* v8 = v3->mutable_f_3();
  (void)v8;  // Suppresses clang-tidy.
  Message2::M2::M22* v9 = v3->mutable_f_4();
  v9->set_f_0(0x5c);
  Message2::M2::M10* v10 = v3->mutable_f_2();
  v10->set_f_1(0xe884725);
  v10->set_f_0(s->substr(0, 8));
  v10->set_f_2(0x7b);
  message->set_f_25(s->substr(0, 191));
  message->set_f_13(0xabe0bbd56f37ca3a);
  message->set_f_22(0x67);
  message->set_f_1(0xe909d5fb4ea4e7bb);
  message->set_f_20(0x190d0a158ebe3e9f);
  message->set_f_12(0x3e965e33c9d4a5c);
  message->set_f_26(0.799128);
  message->set_f_9(0x674f874);
  Message2::M1* v11_0 = message->add_f_50();
  Message2::M1::M8* v12 = v11_0->mutable_f_4();
  v12->set_f_1(0x57);
  Message2::M1::M8::M42* v13 = v12->mutable_f_6();
  v13->set_f_1(s->substr(0, 15));
  v13->set_f_2(0x3a07908);
  v12->set_f_0(s->substr(0, 114));
  Message2::M1::M32* v14 = v11_0->mutable_f_8();
  v14->set_f_0(0x5e40448ca435eb16);
  v14->set_f_1(0.854895);
  v11_0->set_f_0(0xe2eee83a9c1cbaf2);
  Message2::M1::M17* v15 = v11_0->mutable_f_6();
  v15->set_f_0(0x6fff037);
  Message2::M6* v16 = message->mutable_f_61();
  v16->set_f_8(0x232ad52);
  v16->set_f_4(0x61);
  v16->set_f_24(0x3650);
  Message2::M6::M30* v17 = v16->mutable_f_43();
  v17->set_f_1(0xbc9333e);
  v17->set_f_3(0xe65fb2868dfb2c93);
  v17->set_f_4(0x8c9573df8b3b7069);
  v17->set_f_0(0x5d);
  v17->set_f_2(0x21);
  v16->set_f_5(0x88294fadc75b6b76);
  v16->set_f_25(0x7ca1b67eaa9fc6d0);
  v16->set_f_13(s->substr(0, 5));
  v16->set_f_18(0x8d75db70880f76f7);
  Message2::M6::M29* v18 = v16->mutable_f_42();
  v18->set_f_0(0x1b0c11c);
  v16->set_f_1(s->substr(0, 3));
  v16->set_f_21(0xbdd775bb3193a34f);
  v16->set_f_2(0.350080);
  v16->set_f_19(0x64817a5);
  v16->set_f_17(0x4a);
  v16->set_f_0(s->substr(0, 5));
  v16->set_f_10(s->substr(0, 408));
  v16->set_f_12(false);
  v16->add_f_9(Message2::M6::E1_CONST_1);
  v16->add_f_9(Message2::M6::E1_CONST_5);
  v16->set_f_23(0x469ec3ff2ed938a);
  v16->set_f_11(0x70);
  v16->set_f_3(0x4f016cea);
  Message2::M6::M18* v19 = v16->mutable_f_40();
  (void)v19;  // Suppresses clang-tidy.
  v16->set_f_6(0x94b997b0226a9b98);
  v16->set_f_22(s->substr(0, 12));
  v16->set_f_14(0x62772fa3aa212086);
  message->set_f_29(0x9a532d5);
  message->set_f_19(0xc23e501e97fbc36e);
  message->set_f_4(0x7dc63b51a23060ab);
  message->set_f_15(s->substr(0, 19));
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_REQUEST_ACCESS_MESSAGE2_H_
