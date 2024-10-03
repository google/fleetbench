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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/request/Message1.pb.h"

namespace fleetbench::rpc::P6::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_6(0x4b);
  Message1::M12* v0_0 = message->add_f_63();
  v0_0->set_f_0(0x73d405b0720cfc8);
  Message1::M12::M14* v1_0 = v0_0->add_f_6();
  v1_0->set_f_2(0x63);
  v1_0->set_f_1(0x41);
  v1_0->set_f_5(Message1::M12::M14::E12_CONST_5);
  v1_0->set_f_4(0x6a9b5931e7432beb);
  v1_0->set_f_3(0x1bf91cb27537735f);
  v0_0->set_f_1(Message1::M12::E11_CONST_4);
  message->set_f_25(0x3f9628b87);
  message->set_f_16(0x7716fb4e7acca1b1);
  message->set_f_7(s->substr(0, 104));
  Message1::M9* v2 = message->mutable_f_55();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_19(s->substr(0, 128));
  Message1::M8* v3 = message->mutable_f_53();
  Message1::M8::M27* v4 = v3->mutable_f_4();
  v4->set_f_0(false);
  v3->set_f_0(0x29);
  Message1::M11* v5 = message->mutable_f_62();
  Message1::M11::E10 array_1[20] = {
      Message1::M11::E10_CONST_3, Message1::M11::E10_CONST_5,
      Message1::M11::E10_CONST_2, Message1::M11::E10_CONST_4,
      Message1::M11::E10_CONST_5, Message1::M11::E10_CONST_4,
      Message1::M11::E10_CONST_2, Message1::M11::E10_CONST_5,
      Message1::M11::E10_CONST_4, Message1::M11::E10_CONST_5,
      Message1::M11::E10_CONST_2, Message1::M11::E10_CONST_4,
      Message1::M11::E10_CONST_1, Message1::M11::E10_CONST_5,
      Message1::M11::E10_CONST_5, Message1::M11::E10_CONST_4,
      Message1::M11::E10_CONST_4, Message1::M11::E10_CONST_4,
      Message1::M11::E10_CONST_4, Message1::M11::E10_CONST_3,
  };
  for (auto v : array_1) {
    v5->add_f_1(v);
  }
  Message1::M11::E9 array_2[12] = {
      Message1::M11::E9_CONST_5, Message1::M11::E9_CONST_2,
      Message1::M11::E9_CONST_4, Message1::M11::E9_CONST_3,
      Message1::M11::E9_CONST_5, Message1::M11::E9_CONST_1,
      Message1::M11::E9_CONST_4, Message1::M11::E9_CONST_3,
      Message1::M11::E9_CONST_5, Message1::M11::E9_CONST_2,
      Message1::M11::E9_CONST_1, Message1::M11::E9_CONST_2,
  };
  for (auto v : array_2) {
    v5->add_f_0(v);
  }
  Message1::M11::M31* v6 = v5->mutable_f_9();
  v6->set_f_1(s->substr(0, 308));
  v6->set_f_2(0x7c);
  Message1::M11::M31::M34* v7 = v6->mutable_f_9();
  (void)v7;  // Suppresses clang-tidy.
  Message1::M11::M31::M45* v8 = v6->mutable_f_11();
  Message1::M11::M31::M45::M56* v9 = v8->mutable_f_4();
  v9->add_f_8(Message1::M11::M31::M45::M56::E40_CONST_3);
  v9->add_f_8(Message1::M11::M31::M45::M56::E40_CONST_4);
  v9->set_f_13(true);
  v9->set_f_1(0x1d34c8b5afba62c7);
  v9->set_f_6(Message1::M11::M31::M45::M56::E39_CONST_2);
  v9->set_f_3(s->substr(0, 21));
  v9->add_f_0(Message1::M11::M31::M45::M56::E37_CONST_1);
  v9->set_f_10(0x2c055c50490a35cf);
  v9->set_f_4(0x46505e75fba3474a);
  Message1::M11::M31::M45::M56::E38 array_3[13] = {
      Message1::M11::M31::M45::M56::E38_CONST_5,
      Message1::M11::M31::M45::M56::E38_CONST_5,
      Message1::M11::M31::M45::M56::E38_CONST_4,
      Message1::M11::M31::M45::M56::E38_CONST_5,
      Message1::M11::M31::M45::M56::E38_CONST_4,
      Message1::M11::M31::M45::M56::E38_CONST_4,
      Message1::M11::M31::M45::M56::E38_CONST_1,
      Message1::M11::M31::M45::M56::E38_CONST_3,
      Message1::M11::M31::M45::M56::E38_CONST_3,
      Message1::M11::M31::M45::M56::E38_CONST_1,
      Message1::M11::M31::M45::M56::E38_CONST_4,
      Message1::M11::M31::M45::M56::E38_CONST_4,
      Message1::M11::M31::M45::M56::E38_CONST_1,
  };
  for (auto v : array_3) {
    v9->add_f_2(v);
  }
  v9->set_f_5(0x5c);
  v9->set_f_9(Message1::M11::M31::M45::M56::E41_CONST_3);
  v9->set_f_12(0xaf129ba);
  v8->set_f_1(0x37eac958d3a0b711);
  v8->add_f_0(Message1::M11::M31::M45::E30_CONST_3);
  Message1::M11::M31::M50* v10 = v6->mutable_f_12();
  (void)v10;  // Suppresses clang-tidy.
  v6->set_f_3(0x2b70f9faf7f57600);
  Message1::M11::M17* v11 = v5->mutable_f_8();
  v11->set_f_0(0x3b537780c0183745);
  v5->set_f_3(0x267d12ea15e3d304);
  v5->set_f_2(s->substr(0, 28));
  Message1::M11::M15* v12 = v5->mutable_f_7();
  Message1::M11::M15::M46* v13 = v12->mutable_f_4();
  v13->set_f_0(0x61aa5d712a5580cf);
  message->set_f_14(0.114871);
  message->set_f_13(0x5718f956489ae51);
  Message1::E4 array_4[5] = {
      Message1::E4_CONST_4, Message1::E4_CONST_3, Message1::E4_CONST_4,
      Message1::E4_CONST_2, Message1::E4_CONST_1,
  };
  for (auto v : array_4) {
    message->add_f_15(v);
  }
  Message1::M10* v14 = message->mutable_f_59();
  v14->set_f_1(0x2127a94c50c443c0);
  v14->set_f_3(0x9);
  message->set_f_0(0x32f392b);
  Message1::M3* v15_0 = message->add_f_47();
  Message1::M3::M21* v16 = v15_0->mutable_f_5();
  Message1::M3::M21::M42* v17 = v16->mutable_f_5();
  (void)v17;  // Suppresses clang-tidy.
  Message1::M3::M21::M52* v18_0 = v16->add_f_11();
  v18_0->set_f_0(true);
  Message1::M3::M21::M54* v19 = v16->mutable_f_13();
  v19->set_f_14(false);
  v19->set_f_13(true);
  v19->set_f_1(0x35);
  v19->set_f_3(Message1::M3::M21::M54::E35_CONST_3);
  v19->set_f_6(0x8137df6);
  v19->set_f_8(0.818128);
  v19->set_f_0(s->substr(0, 402));
  v19->set_f_9(s->substr(0, 455));
  v16->set_f_1(true);
  Message1::M3::M21::M48* v20_0 = v16->add_f_8();
  v20_0->set_f_0(0x17);
  v20_0->set_f_1(false);
  Message1::M3::M16* v21 = v15_0->mutable_f_4();
  v21->set_f_1(0x38);
  Message1::M3::M16::M51* v22 = v21->mutable_f_7();
  v22->set_f_8(0x92eb78c74a4d9b2);
  v22->set_f_10(true);
  v22->set_f_1(Message1::M3::M16::M51::E33_CONST_5);
  v22->set_f_9(true);
  v22->set_f_4(s->substr(0, 20));
  v22->set_f_3(0x3a);
  v22->set_f_5(0x4034547c735d121);
  v22->set_f_6(0x231470f02c8c0058);
  v22->set_f_0(0x5c4eea0);
  v22->set_f_7(0x6b1385441f40a837);
  v21->set_f_2(0x50);
  v21->set_f_0(s->substr(0, 25));
  message->set_f_5(Message1::E2_CONST_3);
  Message1::M4* v23 = message->mutable_f_48();
  v23->set_f_0(s->substr(0, 16));
  Message1::M4::M19* v24_0 = v23->add_f_2();
  v24_0->set_f_3(s->substr(0, 4));
  v24_0->set_f_1(Message1::M4::M19::E14_CONST_1);
  v24_0->set_f_2(true);
  v24_0->set_f_0(false);
  message->set_f_10(0x58cf403);
  message->set_f_24(0x6a33e381);
  Message1::M6* v25 = message->mutable_f_51();
  v25->set_f_0(false);
  message->set_f_26(Message1::E6_CONST_4);
  message->set_f_8(0x1076cb8ddfc2f65b);
  message->set_f_12(Message1::E3_CONST_1);
  Message1::M7* v26 = message->mutable_f_52();
  v26->set_f_1(0x69);
  v26->set_f_0(0x3b01809c9cfb2b6b);
  v26->set_f_4(0x77);
  v26->set_f_3(0x41a9db643f7ed41f);
  Message1::M5* v27_0 = message->add_f_49();
  Message1::M5::M18* v28_0 = v27_0->add_f_3();
  v28_0->set_f_1(0x6a730785a5140891);
  Message1::M5::M18::M38* v29 = v28_0->mutable_f_8();
  v29->set_f_0(true);
  Message1::M5::M18::E13 array_5[22] = {
      Message1::M5::M18::E13_CONST_3, Message1::M5::M18::E13_CONST_1,
      Message1::M5::M18::E13_CONST_5, Message1::M5::M18::E13_CONST_5,
      Message1::M5::M18::E13_CONST_5, Message1::M5::M18::E13_CONST_3,
      Message1::M5::M18::E13_CONST_1, Message1::M5::M18::E13_CONST_1,
      Message1::M5::M18::E13_CONST_5, Message1::M5::M18::E13_CONST_3,
      Message1::M5::M18::E13_CONST_3, Message1::M5::M18::E13_CONST_4,
      Message1::M5::M18::E13_CONST_4, Message1::M5::M18::E13_CONST_2,
      Message1::M5::M18::E13_CONST_5, Message1::M5::M18::E13_CONST_4,
      Message1::M5::M18::E13_CONST_4, Message1::M5::M18::E13_CONST_2,
      Message1::M5::M18::E13_CONST_5, Message1::M5::M18::E13_CONST_3,
      Message1::M5::M18::E13_CONST_3, Message1::M5::M18::E13_CONST_3,
  };
  for (auto v : array_5) {
    v28_0->add_f_0(v);
  }
  Message1::M5::M18::M53* v30_0 = v28_0->add_f_9();
  v30_0->set_f_0(0x2b);
  v30_0->add_f_1(Message1::M5::M18::M53::E34_CONST_4);
  Message1::M5::M23* v31 = v27_0->mutable_f_5();
  Message1::M5::M23::M44* v32 = v31->mutable_f_4();
  v32->set_f_0(0x21ef);
  v31->set_f_0(0xb55375b);
  Message1::M5::M23::M40* v33 = v31->mutable_f_3();
  (void)v33;  // Suppresses clang-tidy.
  Message1::M5::M24* v34 = v27_0->mutable_f_6();
  v34->add_f_1(Message1::M5::M24::E17_CONST_5);
  v34->set_f_0(Message1::M5::M24::E16_CONST_4);
  v34->add_f_2(Message1::M5::M24::E18_CONST_5);
  message->set_f_11(0xb655c);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M13* v0_0 = message->add_f_64();
  v0_0->set_f_0(0x8d0ff);
  message->set_f_18(0x78e996ce);
  message->set_f_9(s->substr(0, 3));
  message->set_f_4(0x6c44d86c);
  Message1::M5* v1_0 = message->add_f_49();
  Message1::M5::M18* v2_0 = v1_0->add_f_3();
  Message1::M5::M18::M38* v3 = v2_0->mutable_f_8();
  (void)v3;  // Suppresses clang-tidy.
  v2_0->set_f_2(s->substr(0, 149));
  Message1::M5::M24* v4 = v1_0->mutable_f_6();
  v4->add_f_2(Message1::M5::M24::E18_CONST_3);
  v4->add_f_1(Message1::M5::M24::E17_CONST_3);
  v1_0->set_f_0(s->substr(0, 234));
  Message1::M5::M23* v5 = v1_0->mutable_f_5();
  Message1::M5::M23::M44* v6 = v5->mutable_f_4();
  v6->set_f_0(0xd);
  v5->set_f_0(0x4c1baac3);
  Message1::M5::M30* v7 = v1_0->mutable_f_9();
  v7->set_f_2(false);
  Message1::M5::M30::M39* v8 = v7->mutable_f_11();
  v8->set_f_1(Message1::M5::M30::M39::E29_CONST_5);
  Message1::M5::M30::M39::M58* v9_0 = v8->add_f_9();
  Message1::M5::M30::M39::M58::M60* v10 = v9_0->mutable_f_3();
  v10->set_f_0(true);
  v9_0->set_f_0(Message1::M5::M30::M39::M58::E44_CONST_4);
  v8->set_f_3(0x38);
  v8->set_f_0(Message1::M5::M30::M39::E28_CONST_4);
  v8->set_f_2(s->substr(0, 24));
  v7->set_f_3(0.362354);
  v7->set_f_1(0x1a6e8d);
  message->set_f_24(0x34c5744);
  Message1::M11* v11 = message->mutable_f_62();
  Message1::M11::M15* v12 = v11->mutable_f_7();
  v12->set_f_0(s->substr(0, 22));
  v11->set_f_2(s->substr(0, 3));
  message->set_f_13(0x25bba30c44b9615c);
  Message1::M9* v13 = message->mutable_f_55();
  v13->set_f_1(0x1301d9);
  v13->set_f_2(s->substr(0, 15));
  v13->set_f_0(Message1::M9::E8_CONST_4);
  message->set_f_12(Message1::E3_CONST_2);
  message->set_f_23(0x68982976e5985f3f);
  message->set_f_2(0x4e6761cb);
  Message1::M4* v14 = message->mutable_f_48();
  v14->set_f_0(s->substr(0, 32));
  Message1::M4::M19* v15_0 = v14->add_f_2();
  v15_0->set_f_1(Message1::M4::M19::E14_CONST_3);
  v15_0->set_f_2(true);
  message->set_f_28(0x69524e4acfb192d0);
  message->set_f_27(s->substr(0, 18));
  message->set_f_26(Message1::E6_CONST_1);
  message->set_f_16(0x21d974e87a8fe72a);
  Message1::E5 array_0[21] = {
      Message1::E5_CONST_2, Message1::E5_CONST_5, Message1::E5_CONST_2,
      Message1::E5_CONST_1, Message1::E5_CONST_2, Message1::E5_CONST_3,
      Message1::E5_CONST_3, Message1::E5_CONST_4, Message1::E5_CONST_4,
      Message1::E5_CONST_4, Message1::E5_CONST_5, Message1::E5_CONST_5,
      Message1::E5_CONST_3, Message1::E5_CONST_4, Message1::E5_CONST_5,
      Message1::E5_CONST_2, Message1::E5_CONST_1, Message1::E5_CONST_2,
      Message1::E5_CONST_3, Message1::E5_CONST_4, Message1::E5_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_21(v);
  }
  message->set_f_8(0xe19eb5704945396);
  message->set_f_11(0x55);
  message->set_f_1(0x480ce0b);
  Message1::M10* v16 = message->mutable_f_59();
  v16->set_f_3(0xc3179d8);
  v16->set_f_2(0x2ba7b30);
  v16->set_f_1(0x4959c740c67bf5ef);
  Message1::M12* v17_0 = message->add_f_63();
  v17_0->set_f_0(0x232820f3fe7d1e28);
  v17_0->set_f_1(Message1::M12::E11_CONST_4);
  Message1::M12::M14* v18_0 = v17_0->add_f_6();
  v18_0->set_f_2(0x46);
  v18_0->set_f_5(Message1::M12::M14::E12_CONST_4);
  v18_0->set_f_1(0xdcc6a80);
  v18_0->set_f_4(0x6cfd78a09a52503);
  v18_0->set_f_3(0x7d201ff75a462b9b);
  v18_0->set_f_0(0x440594eb);
  Message1::M3* v19_0 = message->add_f_47();
  Message1::M3::M21* v20 = v19_0->mutable_f_5();
  Message1::M3::M21::M52* v21_0 = v20->add_f_11();
  (void)v21_0;  // Suppresses clang-tidy.
  Message1::M3::M21::M48* v22_0 = v20->add_f_8();
  v22_0->set_f_1(true);
  v20->set_f_1(true);
  Message1::M3::M21::M42* v23 = v20->mutable_f_5();
  v23->set_f_0(0x1fe6ba20cbf888c7);
  Message1::M3::M22* v24_0 = v19_0->add_f_6();
  Message1::M3::M22::M41* v25 = v24_0->mutable_f_4();
  v25->set_f_0(false);
  v24_0->set_f_0(0x10351c91e00870ab);
  v19_0->set_f_0(false);
  Message1::M3::M16* v26 = v19_0->mutable_f_4();
  v26->set_f_2(0x4f905ac);
  Message1::M3::M16::M51* v27 = v26->mutable_f_7();
  v27->set_f_6(0x51cd53e67da889e2);
  v27->set_f_8(0x61f105cf46bb0e55);
  v27->set_f_1(Message1::M3::M16::M51::E33_CONST_3);
  v27->set_f_9(true);
  v27->set_f_3(0x4e);
  v27->set_f_5(0x4cb02de31463a078);
  v27->set_f_2(s->substr(0, 126));
  v27->set_f_4(s->substr(0, 3532));
  v26->set_f_0(s->substr(0, 21));
  v26->set_f_1(0x95d777d);
  message->set_f_22(true);
  message->set_f_17(0x8913424);
  message->set_f_10(0x2d);
  message->add_f_15(Message1::E4_CONST_2);
  message->set_f_14(0.050655);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M12* v0_0 = message->add_f_63();
  v0_0->set_f_1(Message1::M12::E11_CONST_3);
  v0_0->set_f_0(0x20d38581c76816b0);
  Message1::M12::M14* v1_0 = v0_0->add_f_6();
  v1_0->set_f_3(0x2ce9c221ef736d0a);
  v1_0->set_f_1(0x70);
  v1_0->set_f_4(0x44f8ff1f799fb7be);
  v1_0->set_f_5(Message1::M12::M14::E12_CONST_3);
  v1_0->set_f_2(0xd3c9ddd);
  v1_0->set_f_0(0x36cd5755);
  Message1::M11* v2 = message->mutable_f_62();
  Message1::M11::M31* v3 = v2->mutable_f_9();
  v3->set_f_2(0xab502bd);
  Message1::M11::M31::M45* v4 = v3->mutable_f_11();
  Message1::M11::M31::M45::M56* v5 = v4->mutable_f_4();
  v5->set_f_12(0x586e1b2);
  Message1::M11::M31::M45::M56::M62* v6 = v5->mutable_f_26();
  v6->add_f_4(Message1::M11::M31::M45::M56::M62::E46_CONST_5);
  v6->set_f_3(0x499f3b3);
  v6->set_f_0(0x1f2b76bbaaf1a6a6);
  v6->set_f_1(0x6b055a3);
  v5->set_f_7(0x6d);
  v5->set_f_1(0x58b6f35edbee6eed);
  v5->set_f_10(0x4490731bcfb4af6d);
  v5->set_f_6(Message1::M11::M31::M45::M56::E39_CONST_3);
  v5->set_f_13(true);
  v5->set_f_3(s->substr(0, 26));
  v5->set_f_9(Message1::M11::M31::M45::M56::E41_CONST_5);
  v3->set_f_3(0x73ad099b47eac4bb);
  Message1::M11::M31::M34* v7 = v3->mutable_f_9();
  v7->set_f_0(0xe56f0f6);
  v2->set_f_2(s->substr(0, 1));
  v2->set_f_3(0x46b0b6272bf0e126);
  Message1::M11::M17* v8 = v2->mutable_f_8();
  v8->set_f_0(0x2039924d4092cdc7);
  v2->add_f_0(Message1::M11::E9_CONST_2);
  message->set_f_20(0x2dcfa8d5e39ad249);
  Message1::M7* v9 = message->mutable_f_52();
  v9->set_f_4(0x6a);
  v9->set_f_1(0xd);
  v9->set_f_0(0x3adebfbcc8366227);
  Message1::M7::M28* v10 = v9->mutable_f_10();
  v10->set_f_0(0x210866a);
  Message1::M7::M28::M37* v11 = v10->mutable_f_9();
  v11->set_f_1(Message1::M7::M28::M37::E26_CONST_2);
  v11->set_f_3(0x2dfe01ecd796a14f);
  v11->set_f_2(Message1::M7::M28::M37::E27_CONST_1);
  v10->set_f_1(Message1::M7::M28::E19_CONST_2);
  v10->set_f_2(0x2b9ae90cfbbcb430);
  message->set_f_13(0x297ded5d62bf17d2);
  Message1::M9* v12 = message->mutable_f_55();
  v12->set_f_3(0x24);
  v12->set_f_2(s->substr(0, 19));
  v12->set_f_1(0x77);
  message->set_f_2(0x39c2709a);
  message->set_f_4(0x1241af8d);
  Message1::M8* v13 = message->mutable_f_53();
  Message1::M8::M29* v14 = v13->mutable_f_6();
  Message1::M8::M29::M43* v15_0 = v14->add_f_3();
  v15_0->set_f_0(s->substr(0, 2));
  v15_0->set_f_3(0x2bae266ffb347be7);
  v15_0->set_f_2(s->substr(0, 8));
  v14->set_f_0(0x14ba);
  Message1::M8::M29::M35* v16 = v14->mutable_f_2();
  v16->add_f_0(Message1::M8::M29::M35::E24_CONST_3);
  v13->set_f_0(0xb);
  Message1::M8::M27* v17 = v13->mutable_f_4();
  v17->set_f_0(true);
  message->set_f_16(0x29ff862ed9c882);
  Message1::M10* v18 = message->mutable_f_59();
  v18->set_f_2(0x49dce51);
  v18->set_f_1(0x25b7f56d7ac99386);
  v18->set_f_3(0x16355b);
  message->set_f_12(Message1::E3_CONST_5);
  message->add_f_21(Message1::E5_CONST_2);
  message->set_f_22(true);
  message->set_f_8(0xdc3929971ee1880);
  Message1::M13* v19_0 = message->add_f_64();
  v19_0->set_f_0(0x8);
  message->set_f_7(s->substr(0, 218));
  message->set_f_26(Message1::E6_CONST_3);
  message->add_f_15(Message1::E4_CONST_1);
  message->set_f_23(0x2cdfc74493cfad83);
  message->set_f_0(0x65);
  message->set_f_14(0.861255);
  message->set_f_27(s->substr(0, 440));
  Message1::M3* v20_0 = message->add_f_47();
  Message1::M3::M22* v21_0 = v20_0->add_f_6();
  v21_0->set_f_0(0x1c230fd10a25897d);
  Message1::M3::M16* v22 = v20_0->mutable_f_4();
  v22->set_f_0(s->substr(0, 20));
  Message1::M3::M16::M51* v23 = v22->mutable_f_7();
  v23->set_f_8(0x1ac28a9e0bfc665e);
  v23->set_f_4(s->substr(0, 1577));
  v23->set_f_0(0x560f3e5);
  v23->set_f_9(false);
  v23->set_f_7(0x202d77028b22e576);
  v23->set_f_2(s->substr(0, 12));
  v23->set_f_3(0xd5d5946);
  v22->set_f_3(s->substr(0, 4));
  v22->set_f_1(0xc);
  v20_0->set_f_0(true);
  message->set_f_18(0x5b8e323ea);
  message->set_f_17(0x1f);
  message->set_f_28(0x647bda3ae9ad09e);
  Message1::M4* v24 = message->mutable_f_48();
  Message1::M4::M19* v25_0 = v24->add_f_2();
  v25_0->set_f_0(true);
  v25_0->set_f_2(true);
  v25_0->set_f_3(s->substr(0, 6));
  message->set_f_24(0x34207bd8);
  message->set_f_10(0xb48fd47);
  Message1::M1* v26 = message->mutable_f_44();
  v26->set_f_0(0x629e5b21);
  Message1::M1::M33* v27 = v26->mutable_f_2();
  v27->set_f_5(0x2e);
  v27->set_f_1(0x55465e9ab669c94c);
  v27->set_f_3(Message1::M1::M33::E23_CONST_2);
  v27->set_f_4(false);
  v27->set_f_0(Message1::M1::M33::E22_CONST_1);
  message->set_f_6(0xd);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_10(0x265bd3c);
  message->set_f_17(0x27);
  Message1::M12* v0_0 = message->add_f_63();
  v0_0->set_f_1(Message1::M12::E11_CONST_3);
  Message1::M12::M14* v1_0 = v0_0->add_f_6();
  v1_0->set_f_2(0x56);
  v1_0->set_f_1(0x18);
  v1_0->set_f_0(0x6339e7aa);
  v1_0->set_f_4(0x2636c0964f18888a);
  v1_0->set_f_5(Message1::M12::M14::E12_CONST_4);
  v1_0->set_f_3(0x339f56e68013a8a8);
  v0_0->set_f_0(0x6e19f0884aecdba2);
  Message1::M10* v2 = message->mutable_f_59();
  v2->set_f_2(0x8);
  v2->set_f_3(0x77e66);
  message->set_f_22(false);
  message->set_f_12(Message1::E3_CONST_5);
  message->set_f_2(0x3cba109a);
  message->set_f_14(0.351182);
  Message1::M3* v3_0 = message->add_f_47();
  v3_0->set_f_0(false);
  Message1::M3::M21* v4 = v3_0->mutable_f_5();
  Message1::M3::M21::M54* v5 = v4->mutable_f_13();
  v5->set_f_9(s->substr(0, 159));
  v5->set_f_1(0x21775a2);
  Message1::M3::M21::M54::E36 array_0[15] = {
      Message1::M3::M21::M54::E36_CONST_5, Message1::M3::M21::M54::E36_CONST_1,
      Message1::M3::M21::M54::E36_CONST_5, Message1::M3::M21::M54::E36_CONST_3,
      Message1::M3::M21::M54::E36_CONST_1, Message1::M3::M21::M54::E36_CONST_1,
      Message1::M3::M21::M54::E36_CONST_4, Message1::M3::M21::M54::E36_CONST_1,
      Message1::M3::M21::M54::E36_CONST_2, Message1::M3::M21::M54::E36_CONST_4,
      Message1::M3::M21::M54::E36_CONST_1, Message1::M3::M21::M54::E36_CONST_3,
      Message1::M3::M21::M54::E36_CONST_3, Message1::M3::M21::M54::E36_CONST_3,
      Message1::M3::M21::M54::E36_CONST_2,
  };
  for (auto v : array_0) {
    v5->add_f_10(v);
  }
  v5->set_f_11(s->substr(0, 244));
  v5->set_f_6(0x26);
  v5->set_f_13(false);
  v5->set_f_8(0.761386);
  v5->set_f_14(true);
  v5->set_f_12(0x19b1bb);
  v4->set_f_0(0x754c404a71334cb9);
  Message1::M3::M16* v6 = v3_0->mutable_f_4();
  Message1::M3::M16::M51* v7 = v6->mutable_f_7();
  v7->set_f_5(0x54165f40a8533f07);
  v7->set_f_3(0x17);
  v7->set_f_10(false);
  v7->set_f_1(Message1::M3::M16::M51::E33_CONST_4);
  v7->set_f_9(true);
  v7->set_f_0(0x7c);
  v7->set_f_8(0x1e3c9f51524c085b);
  v7->set_f_6(0x1a91e80f396afaed);
  v7->set_f_2(s->substr(0, 19));
  v7->set_f_4(s->substr(0, 20));
  v6->set_f_3(s->substr(0, 490));
  v6->set_f_2(0xe45adbc);
  v6->set_f_0(s->substr(0, 182));
  v6->set_f_1(0x9769911);
  Message1::M3::M22* v8_0 = v3_0->add_f_6();
  Message1::M3::M22::M41* v9 = v8_0->mutable_f_4();
  v9->set_f_0(false);
  v8_0->set_f_0(0x2162bd6ae120d84f);
  message->set_f_6(0x32798c1);
  message->set_f_26(Message1::E6_CONST_1);
  message->set_f_27(s->substr(0, 27));
  message->add_f_15(Message1::E4_CONST_3);
  message->add_f_15(Message1::E4_CONST_4);
  message->set_f_1(0x5b);
  Message1::M6* v10 = message->mutable_f_51();
  Message1::M6::M26* v11 = v10->mutable_f_5();
  v11->set_f_0(0xe9e2ae2);
  v10->set_f_0(true);
  message->set_f_20(0x6a86d864f5730f96);
  message->set_f_13(0x2465f9dccb0e343b);
  Message1::E5 array_1[21] = {
      Message1::E5_CONST_5, Message1::E5_CONST_2, Message1::E5_CONST_5,
      Message1::E5_CONST_2, Message1::E5_CONST_1, Message1::E5_CONST_5,
      Message1::E5_CONST_3, Message1::E5_CONST_2, Message1::E5_CONST_3,
      Message1::E5_CONST_3, Message1::E5_CONST_2, Message1::E5_CONST_1,
      Message1::E5_CONST_2, Message1::E5_CONST_3, Message1::E5_CONST_1,
      Message1::E5_CONST_2, Message1::E5_CONST_5, Message1::E5_CONST_5,
      Message1::E5_CONST_3, Message1::E5_CONST_5, Message1::E5_CONST_4,
  };
  for (auto v : array_1) {
    message->add_f_21(v);
  }
  Message1::M1* v12 = message->mutable_f_44();
  v12->set_f_0(0x20e16b56);
  message->set_f_8(0xf0a2b04decde719);
  Message1::M5* v13_0 = message->add_f_49();
  v13_0->set_f_0(s->substr(0, 19));
  Message1::M5::M18* v14_0 = v13_0->add_f_3();
  Message1::M5::M18::M53* v15_0 = v14_0->add_f_9();
  v15_0->set_f_0(0x803e9d4);
  v14_0->set_f_2(s->substr(0, 66));
  v14_0->set_f_1(0x603c2fb2d576deff);
  v14_0->add_f_0(Message1::M5::M18::E13_CONST_2);
  Message1::M5::M18::M38* v16 = v14_0->mutable_f_8();
  v16->set_f_0(false);
  Message1::M13* v17_0 = message->add_f_64();
  v17_0->set_f_0(0x1d);
  message->set_f_25(0x25d17953d03);
  message->set_f_9(s->substr(0, 21));
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
}  // namespace fleetbench::rpc::P6::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_
