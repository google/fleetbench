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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message2.pb.h"

namespace fleetbench::rpc::P5::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_19(s->substr(0, 6));
  message->set_f_12(0x62af82aa84e9fa08);
  message->set_f_20(0x59b7b580);
  message->set_f_11(Message2::E1_CONST_4);
  message->set_f_25(0x3553b9e84b95963c);
  message->set_f_9(true);
  message->set_f_8(s->substr(0, 30));
  message->set_f_4(s->substr(0, 23));
  message->set_f_24(false);
  message->set_f_10(0x711b01e42ece171d);
  message->set_f_22(s->substr(0, 456));
  message->set_f_6(0x8c50929071425f2);
  message->set_f_27(0x7d028d3c6b457e5a);
  Message2::M3* v0 = message->mutable_f_50();
  Message2::M3::M28* v1 = v0->mutable_f_14();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M3::M20* v2 = v0->mutable_f_9();
  v2->set_f_2(0x194bf4db);
  v2->set_f_9(0x634f61e025487022);
  v2->set_f_5(false);
  v2->set_f_1(s->substr(0, 1));
  v2->set_f_3(0x47b8edea7076cbec);
  v2->set_f_10(0x3840c339ca3449af);
  v2->set_f_6(0x5a);
  v2->set_f_0(0x5a);
  v0->set_f_4(0x4aae2ec2e6ef1552);
  Message2::M3::M34* v3_0 = v0->add_f_16();
  v3_0->set_f_3(0x309c);
  v3_0->set_f_0(s->substr(0, 3));
  v3_0->add_f_1(Message2::M3::M34::E15_CONST_2);
  Message2::M3::M23* v4 = v0->mutable_f_13();
  v4->set_f_0(0x514300);
  Message2::M3::M49* v5 = v0->mutable_f_19();
  v5->set_f_0(0x7c);
  v0->set_f_0(0x4247c5b5950008ce);
  Message2::M3::M29* v6_0 = v0->add_f_15();
  Message2::M3::M29::M73* v7_0 = v6_0->add_f_8();
  v7_0->set_f_0(true);
  v7_0->set_f_16(0x2a);
  v7_0->set_f_25(0x13b322f7e400f02d);
  v7_0->add_f_14(Message2::M3::M29::M73::E31_CONST_4);
  v7_0->set_f_21(s->substr(0, 1127));
  v7_0->set_f_17(false);
  v7_0->set_f_4(0x18fd903a88eed587);
  v7_0->set_f_24(s->substr(0, 20));
  v7_0->set_f_10(0x2338e3053b8b1dd9);
  v7_0->set_f_6(0x761e5ab);
  v7_0->set_f_11(Message2::M3::M29::M73::E30_CONST_1);
  v7_0->set_f_3(0xbb5895f0a4d9de4);
  v7_0->set_f_8(s->substr(0, 2));
  v7_0->set_f_7(true);
  v7_0->set_f_18(false);
  v7_0->set_f_12(0x34);
  v7_0->set_f_13(false);
  v7_0->set_f_22(0x3d9da500c4f);
  v7_0->set_f_1(0x70);
  v7_0->set_f_2(s->substr(0, 7));
  v7_0->set_f_20(0.836501);
  v6_0->set_f_1(0x6ffeb2510b9a103d);
  v6_0->set_f_0(s->substr(0, 505));
  Message2::M3::M29::M72* v8 = v6_0->mutable_f_7();
  v8->set_f_0(s->substr(0, 284));
  message->add_f_28(Message2::E2_CONST_3);
  message->set_f_13(0x333451098124b65f);
  message->set_f_23(s->substr(0, 32));
  message->set_f_21(0x7c1ff19);
  message->set_f_3(0x45302ba437992850);
  message->set_f_16(false);
  message->set_f_14(0x49);
  message->set_f_17(0x52);
  message->set_f_29(0x78);
  message->set_f_18(false);
  message->set_f_15(0x41d9c16c95d2a3d1);
  Message2::M2* v9 = message->mutable_f_49();
  Message2::M2::M41* v10_0 = v9->add_f_28();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->add_f_3(Message2::M2::E3_CONST_2);
  Message2::M2::M6* v11 = v9->mutable_f_11();
  v11->set_f_23(0.365187);
  v11->set_f_2(0x3649b978c996eb1);
  v11->set_f_25(true);
  v11->set_f_17(0xb2cb387fee24026);
  v11->set_f_29(0x4d961880797e878d);
  v11->set_f_9(s->substr(0, 296));
  v11->set_f_5(0xe76831a);
  v11->set_f_24(0x7ee1fad9c7a5c3cc);
  v11->set_f_13(0xa9f4e9c);
  v11->set_f_26(false);
  v11->set_f_7(0x39);
  v11->set_f_20(s->substr(0, 7));
  v11->set_f_28(true);
  v11->set_f_10(0x2beaf0a5cdb81ff4);
  v11->set_f_19(s->substr(0, 10));
  v11->set_f_21(false);
  v11->set_f_3(0x28e0);
  v11->set_f_16(false);
  v11->set_f_8(0xedd4438);
  v11->set_f_0(s->substr(0, 427));
  v11->set_f_18(0xd094019);
  Message2::M2::M46* v12 = v9->mutable_f_34();
  v12->set_f_0(0x20b9805c);
  Message2::M2::M13* v13 = v9->mutable_f_18();
  v13->set_f_0(true);
  v9->set_f_0(0x43e);
  Message2::M2::M40* v14 = v9->mutable_f_27();
  v14->set_f_2(0x64f20db2);
  v14->set_f_0(s->substr(0, 439));
  Message2::M2::M39* v15_0 = v9->add_f_26();
  v15_0->set_f_0(true);
  v15_0->set_f_1(s->substr(0, 140));
  v15_0->add_f_3(Message2::M2::M39::E21_CONST_4);
  Message2::M2::M16* v16 = v9->mutable_f_19();
  v16->set_f_3(s->substr(0, 29));
  v16->set_f_1(0x5d837b79);
  Message2::M2::M16::M57* v17 = v16->mutable_f_6();
  v17->set_f_0(false);
  v17->set_f_1(0x5c);
  v16->set_f_0(s->substr(0, 9));
  Message2::M2::M11* v18_0 = v9->add_f_17();
  v18_0->set_f_0(0x2c643af415816ba5);
  Message2::M2::M35* v19 = v9->mutable_f_25();
  Message2::M2::M35::M61* v20 = v19->mutable_f_3();
  v20->add_f_0(Message2::M2::M35::M61::E25_CONST_5);
  Message2::M2::M35::M61::M75* v21 = v20->mutable_f_2();
  (void)v21;  // Suppresses clang-tidy.
  v19->set_f_0(0x77);
  Message2::M2::M5* v22_0 = v9->add_f_9();
  Message2::M2::M5::M70* v23 = v22_0->mutable_f_4();
  v23->set_f_0(0xff47f);
  Message2::M2::M42* v24 = v9->mutable_f_30();
  v24->set_f_0(s->substr(0, 21));
  v9->set_f_1(s->substr(0, 101));
  Message2::M4* v25_0 = message->add_f_52();
  v25_0->set_f_24(true);
  v25_0->set_f_8(Message2::M4::E6_CONST_4);
  Message2::M4::M22* v26 = v25_0->mutable_f_53();
  v26->set_f_2(0x3e36a69a3b76e07f);
  v26->set_f_1(0x5e59af579fb578b6);
  v26->set_f_3(0x156cdeb3bff5699a);
  v25_0->set_f_2(0x7d38b269cd4d7a84);
  v25_0->set_f_28(0.875649);
  v25_0->set_f_30(0x44efebedaa8f0010);
  v25_0->set_f_9(true);
  v25_0->set_f_21(0x2ceab9ce9b05f38e);
  v25_0->set_f_25(0x6f);
  Message2::M4::M8* v27 = v25_0->mutable_f_46();
  Message2::M4::M8::M56* v28 = v27->mutable_f_8();
  v28->set_f_1(true);
  v28->set_f_0(s->substr(0, 30));
  v28->set_f_3(0x15817335671b6187);
  v28->set_f_2(0x6c);
  v27->set_f_3(Message2::M4::M8::E10_CONST_1);
  Message2::M4::M48* v29 = v25_0->mutable_f_60();
  v29->set_f_2(false);
  v29->set_f_0(0x20);
  v25_0->set_f_29(s->substr(0, 29));
  v25_0->add_f_23(Message2::M4::E7_CONST_2);
  Message2::M4::M17* v30 = v25_0->mutable_f_51();
  v30->set_f_0(s->substr(0, 101));
  Message2::M4::M9* v31 = v25_0->mutable_f_48();
  v31->set_f_0(0x75073a3);
  Message2::M4::M18* v32 = v25_0->mutable_f_52();
  v32->set_f_0(0x28032447ce0ea0fc);
  Message2::M4::M18::M71* v33 = v32->mutable_f_2();
  v33->set_f_0(0x988d31a);
  v25_0->set_f_20(0x914);
  Message2::M4::M26* v34 = v25_0->mutable_f_55();
  (void)v34;  // Suppresses clang-tidy.
  v25_0->set_f_22(0.141016);
  v25_0->set_f_12(0x2820);
  v25_0->set_f_16(s->substr(0, 1));
  v25_0->set_f_17(0xf4d9f48ff774868);
  v25_0->set_f_11(0x2a6944a63e315b00);
  Message2::M4::M37* v35 = v25_0->mutable_f_59();
  v35->set_f_1(s->substr(0, 22));
  v35->set_f_2(0.284017);
  v35->add_f_3(Message2::M4::M37::E18_CONST_4);
  v35->set_f_0(Message2::M4::M37::E17_CONST_4);
  v25_0->set_f_3(Message2::M4::E4_CONST_3);
  v25_0->set_f_0(s->substr(0, 7));
  v25_0->set_f_7(0x4f66782e4e066990);
  v25_0->set_f_15(0x32c8005b75b885fd);
  v25_0->set_f_14(false);
  Message2::M4::M12* v36_0 = v25_0->add_f_49();
  v36_0->set_f_0(0x65);
  Message2::M4::M12::M58* v37_0 = v36_0->add_f_2();
  v37_0->set_f_4(0.164940);
  v37_0->set_f_3(0x40);
  v37_0->set_f_0(0x57);
  v25_0->set_f_19(0x1b739d608ed1607b);
  v25_0->add_f_5(Message2::M4::E5_CONST_1);
  v25_0->set_f_26(0x7c48298);
  message->set_f_26(true);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_24(false);
  message->set_f_26(true);
  message->set_f_1(0x4c);
  message->set_f_21(0x13a1432);
  message->add_f_28(Message2::E2_CONST_3);
  Message2::M2* v0 = message->mutable_f_49();
  Message2::M2::M13* v1 = v0->mutable_f_18();
  v1->set_f_0(true);
  Message2::M2::M47* v2_0 = v0->add_f_36();
  v2_0->set_f_1(0xb760611);
  v2_0->set_f_0(0x7bced1d8fd3e60dc);
  Message2::M2::M42* v3 = v0->mutable_f_30();
  v3->set_f_0(s->substr(0, 118));
  v0->set_f_0(0x1c89588);
  v0->set_f_1(s->substr(0, 8));
  Message2::M2::M44* v4_0 = v0->add_f_31();
  v4_0->set_f_0(true);
  Message2::M2::E3 array_0[18] = {
      Message2::M2::E3_CONST_2, Message2::M2::E3_CONST_1,
      Message2::M2::E3_CONST_2, Message2::M2::E3_CONST_5,
      Message2::M2::E3_CONST_4, Message2::M2::E3_CONST_3,
      Message2::M2::E3_CONST_5, Message2::M2::E3_CONST_5,
      Message2::M2::E3_CONST_3, Message2::M2::E3_CONST_2,
      Message2::M2::E3_CONST_4, Message2::M2::E3_CONST_3,
      Message2::M2::E3_CONST_4, Message2::M2::E3_CONST_2,
      Message2::M2::E3_CONST_5, Message2::M2::E3_CONST_5,
      Message2::M2::E3_CONST_3, Message2::M2::E3_CONST_4,
  };
  for (auto v : array_0) {
    v0->add_f_3(v);
  }
  Message2::M2::M11* v5_0 = v0->add_f_17();
  v5_0->set_f_0(0x4fe60e3cf118e4e);
  Message2::M2::M10* v6 = v0->mutable_f_12();
  v6->set_f_0(0x1df4d4c0d83bd08a);
  Message2::M2::M39* v7_0 = v0->add_f_26();
  v7_0->set_f_2(0x7de623b);
  v7_0->set_f_1(s->substr(0, 5));
  Message2::M2::M39::E21 array_1[14] = {
      Message2::M2::M39::E21_CONST_5, Message2::M2::M39::E21_CONST_1,
      Message2::M2::M39::E21_CONST_1, Message2::M2::M39::E21_CONST_5,
      Message2::M2::M39::E21_CONST_5, Message2::M2::M39::E21_CONST_5,
      Message2::M2::M39::E21_CONST_5, Message2::M2::M39::E21_CONST_2,
      Message2::M2::M39::E21_CONST_5, Message2::M2::M39::E21_CONST_4,
      Message2::M2::M39::E21_CONST_1, Message2::M2::M39::E21_CONST_1,
      Message2::M2::M39::E21_CONST_2, Message2::M2::M39::E21_CONST_4,
  };
  for (auto v : array_1) {
    v7_0->add_f_3(v);
  }
  Message2::M2::M31* v8_0 = v0->add_f_21();
  v8_0->set_f_0(0x5c574cd7);
  Message2::M2::M35* v9 = v0->mutable_f_25();
  v9->set_f_0(0x5b);
  Message2::M2::M35::M61* v10 = v9->mutable_f_3();
  Message2::M2::M35::M61::E25 array_2[7] = {
      Message2::M2::M35::M61::E25_CONST_5, Message2::M2::M35::M61::E25_CONST_1,
      Message2::M2::M35::M61::E25_CONST_3, Message2::M2::M35::M61::E25_CONST_2,
      Message2::M2::M35::M61::E25_CONST_1, Message2::M2::M35::M61::E25_CONST_3,
      Message2::M2::M35::M61::E25_CONST_1,
  };
  for (auto v : array_2) {
    v10->add_f_0(v);
  }
  Message2::M2::M35::M61::M75* v11 = v10->mutable_f_2();
  (void)v11;  // Suppresses clang-tidy.
  Message2::M2::M40* v12 = v0->mutable_f_27();
  v12->set_f_2(0x598210b3);
  v12->set_f_0(s->substr(0, 16));
  Message2::M2::M6* v13 = v0->mutable_f_11();
  v13->set_f_17(0x330eaee7716df99b);
  v13->set_f_13(0xfaaf7fa);
  v13->set_f_5(0x2c);
  v13->set_f_6(s->substr(0, 16));
  v13->set_f_28(false);
  v13->set_f_18(0x77ca7);
  v13->set_f_16(true);
  v13->set_f_8(0x67);
  v13->set_f_29(0x17d1a16626f3f3e0);
  v13->set_f_23(0.257425);
  v13->set_f_14(s->substr(0, 338));
  v13->set_f_4(0x27);
  v13->set_f_27(0xf42553f);
  v13->set_f_10(0x50a3e2af62b5e10);
  v13->set_f_2(0x15b01aa96cf47d49);
  v13->set_f_22(false);
  v13->set_f_3(0x5e);
  v13->set_f_25(true);
  v13->set_f_19(s->substr(0, 1));
  v13->set_f_20(s->substr(0, 20));
  v13->set_f_21(true);
  v13->set_f_7(0x2adc12);
  v13->set_f_9(s->substr(0, 24));
  v13->set_f_11(0x5c);
  v13->set_f_15(0x43);
  Message2::M2::M46* v14 = v0->mutable_f_34();
  v14->set_f_0(0x6391487);
  Message2::M2::M41* v15_0 = v0->add_f_28();
  v15_0->set_f_0(0x5496457a721c3dd5);
  Message2::M2::M5* v16_0 = v0->add_f_9();
  Message2::M2::M5::M70* v17 = v16_0->mutable_f_4();
  v17->set_f_0(0x1d38147);
  Message2::M2::M5::M70::M78* v18 = v17->mutable_f_4();
  v18->set_f_0(0x54a0a4776fdef981);
  v16_0->set_f_0(0x61895424cc5de53a);
  Message2::M2::M45* v19 = v0->mutable_f_32();
  v19->set_f_1(0x4);
  v19->set_f_2(0x2e7b2fa12cb7055a);
  v19->set_f_4(0.538288);
  v19->set_f_5(0xffdb797);
  v19->set_f_3(0x4);
  message->set_f_19(s->substr(0, 4));
  message->set_f_15(0x2a5e964d65dfd9e7);
  message->set_f_13(0x781d944b2f061040);
  message->set_f_11(Message2::E1_CONST_1);
  Message2::M4* v20_0 = message->add_f_52();
  v20_0->set_f_16(s->substr(0, 12));
  Message2::M4::M8* v21 = v20_0->mutable_f_46();
  v21->set_f_2(0x11404ecf);
  v21->set_f_1(0x3e7db);
  v21->set_f_3(Message2::M4::M8::E10_CONST_4);
  v21->set_f_0(0.426779);
  Message2::M4::M8::M56* v22 = v21->mutable_f_8();
  v22->set_f_0(s->substr(0, 1));
  v22->set_f_2(0x4e);
  v22->set_f_1(true);
  Message2::M4::M8::M68* v23 = v21->mutable_f_9();
  v23->set_f_0(0xefcd9);
  Message2::M4::M8::M68::M92* v24 = v23->mutable_f_10();
  v24->set_f_29(0xf3125f6);
  v24->set_f_0(0x998811d);
  v24->set_f_28(false);
  v24->set_f_26(0x72f330020e9b5b8d);
  v24->set_f_18(s->substr(0, 15));
  v24->set_f_14(false);
  v24->set_f_10(s->substr(0, 7));
  v24->set_f_12(Message2::M4::M8::M68::M92::E36_CONST_2);
  v24->set_f_13(0x5d068353d10abaab);
  v24->set_f_15(s->substr(0, 1759));
  v24->set_f_19(0.013733);
  v24->set_f_17(s->substr(0, 21));
  v24->set_f_3(s->substr(0, 8));
  v24->set_f_27(0.354493);
  v24->set_f_6(0xcfd8578);
  v24->set_f_25(0xd84f02042b525ba);
  v24->set_f_23(0x1dda16d);
  v24->set_f_8(s->substr(0, 3));
  v24->set_f_22(0x2a0d7635);
  v24->set_f_21(0x671536a62c34bbd7);
  v24->set_f_11(0x4e95a98);
  v24->set_f_30(0x3c1e19e250a065db);
  v24->set_f_5(0x2d);
  Message2::M4::M8::M68::M92::E37 array_3[18] = {
      Message2::M4::M8::M68::M92::E37_CONST_1,
      Message2::M4::M8::M68::M92::E37_CONST_1,
      Message2::M4::M8::M68::M92::E37_CONST_2,
      Message2::M4::M8::M68::M92::E37_CONST_4,
      Message2::M4::M8::M68::M92::E37_CONST_4,
      Message2::M4::M8::M68::M92::E37_CONST_4,
      Message2::M4::M8::M68::M92::E37_CONST_3,
      Message2::M4::M8::M68::M92::E37_CONST_5,
      Message2::M4::M8::M68::M92::E37_CONST_2,
      Message2::M4::M8::M68::M92::E37_CONST_3,
      Message2::M4::M8::M68::M92::E37_CONST_2,
      Message2::M4::M8::M68::M92::E37_CONST_5,
      Message2::M4::M8::M68::M92::E37_CONST_1,
      Message2::M4::M8::M68::M92::E37_CONST_1,
      Message2::M4::M8::M68::M92::E37_CONST_5,
      Message2::M4::M8::M68::M92::E37_CONST_5,
      Message2::M4::M8::M68::M92::E37_CONST_3,
      Message2::M4::M8::M68::M92::E37_CONST_5,
  };
  for (auto v : array_3) {
    v24->add_f_20(v);
  }
  v24->set_f_4(0x41);
  v23->set_f_1(0x31ab2a02);
  Message2::M4::M8::M68::M83* v25 = v23->mutable_f_6();
  v25->set_f_0(true);
  v23->set_f_3(0x73b6ba879);
  v23->set_f_2(s->substr(0, 1));
  v20_0->set_f_17(0x243c8c34d4d35af9);
  v20_0->set_f_6(0x1c68cdd7b644ee95);
  Message2::M4::M36* v26_0 = v20_0->add_f_58();
  v26_0->add_f_0(Message2::M4::M36::E16_CONST_3);
  v26_0->set_f_1(0x7);
  v26_0->set_f_4(0x5e93a5d);
  v26_0->set_f_2(s->substr(0, 261));
  v20_0->set_f_1(true);
  v20_0->set_f_30(0x62e1f8180dce0b87);
  v20_0->set_f_0(s->substr(0, 13));
  Message2::M4::M48* v27 = v20_0->mutable_f_60();
  v27->set_f_1(s->substr(0, 103));
  v27->set_f_2(false);
  v27->set_f_0(0x53);
  Message2::M4::E5 array_4[19] = {
      Message2::M4::E5_CONST_1, Message2::M4::E5_CONST_1,
      Message2::M4::E5_CONST_5, Message2::M4::E5_CONST_3,
      Message2::M4::E5_CONST_3, Message2::M4::E5_CONST_2,
      Message2::M4::E5_CONST_1, Message2::M4::E5_CONST_4,
      Message2::M4::E5_CONST_5, Message2::M4::E5_CONST_4,
      Message2::M4::E5_CONST_3, Message2::M4::E5_CONST_1,
      Message2::M4::E5_CONST_5, Message2::M4::E5_CONST_4,
      Message2::M4::E5_CONST_5, Message2::M4::E5_CONST_2,
      Message2::M4::E5_CONST_5, Message2::M4::E5_CONST_1,
      Message2::M4::E5_CONST_3,
  };
  for (auto v : array_4) {
    v20_0->add_f_5(v);
  }
  Message2::M4::M30* v28_0 = v20_0->add_f_57();
  v28_0->set_f_0(0x40d2772);
  v20_0->set_f_22(0.459410);
  v20_0->add_f_23(Message2::M4::E7_CONST_4);
  Message2::M4::M26* v29 = v20_0->mutable_f_55();
  v29->set_f_0(s->substr(0, 19));
  Message2::M4::M17* v30 = v20_0->mutable_f_51();
  v30->set_f_0(s->substr(0, 2784));
  v20_0->set_f_21(0x7af5a67af9cec3fd);
  v20_0->set_f_7(0x29114a73cbde9324);
  v20_0->set_f_12(0x36);
  v20_0->set_f_14(false);
  v20_0->set_f_24(true);
  v20_0->set_f_20(0xf);
  v20_0->set_f_18(0x374854e71a878204);
  v20_0->set_f_28(0.402856);
  Message2::M4::M27* v31_0 = v20_0->add_f_56();
  (void)v31_0;  // Suppresses clang-tidy.
  Message2::M4::M18* v32 = v20_0->mutable_f_52();
  v32->set_f_0(0x23f35f3f1290379b);
  Message2::M4::M18::M71* v33 = v32->mutable_f_2();
  v33->set_f_0(0x40);
  v20_0->set_f_3(Message2::M4::E4_CONST_5);
  v20_0->set_f_4(0xd4c88006031516a);
  Message2::M4::M22* v34 = v20_0->mutable_f_53();
  v34->set_f_1(0x2f7679ef8fb6385b);
  v34->set_f_0(0x22982376);
  v34->set_f_3(0x6ac916c4732f345b);
  Message2::M4::M14* v35_0 = v20_0->add_f_50();
  v35_0->set_f_0(true);
  Message2::M4::M12* v36_0 = v20_0->add_f_49();
  v36_0->set_f_0(0x9a1eb);
  Message2::M4::M12::M58* v37_0 = v36_0->add_f_2();
  v37_0->set_f_1(0x4cc2ccdde64a1b54);
  v37_0->set_f_5(false);
  v37_0->set_f_3(0x1c);
  v37_0->set_f_0(0x1e);
  v20_0->set_f_26(0x1404);
  Message2::M4::M37* v38 = v20_0->mutable_f_59();
  v38->set_f_0(Message2::M4::M37::E17_CONST_1);
  v38->set_f_4(Message2::M4::M37::E19_CONST_1);
  v20_0->set_f_27(0x3085aaf);
  message->set_f_29(0x49);
  Message2::M3* v39 = message->mutable_f_50();
  v39->set_f_0(0x76845c3033d31ac6);
  Message2::M3::M21* v40 = v39->mutable_f_11();
  v40->add_f_1(Message2::M3::M21::E14_CONST_1);
  Message2::M3::M34* v41_0 = v39->add_f_16();
  v41_0->set_f_0(s->substr(0, 22));
  v41_0->add_f_1(Message2::M3::M34::E15_CONST_1);
  Message2::M3::M34::M54* v42_0 = v41_0->add_f_6();
  v42_0->set_f_1(s->substr(0, 420));
  v42_0->set_f_3(0x2fb65eb46f55076d);
  Message2::M3::M34::M54::M90* v43 = v42_0->mutable_f_10();
  (void)v43;  // Suppresses clang-tidy.
  v42_0->set_f_0(0x6e2a6539e3323439);
  Message2::M3::M34::M54::M84* v44 = v42_0->mutable_f_9();
  v44->set_f_2(0x71ff1bfa);
  v44->set_f_1(s->substr(0, 121));
  v41_0->set_f_3(0x3f);
  v41_0->set_f_2(0x4839d34a2442dc96);
  Message2::M3::M20* v45 = v39->mutable_f_9();
  v45->set_f_2(0x2c4728b4);
  v45->set_f_3(0x3f387625498bc600);
  v45->set_f_7(s->substr(0, 338));
  v45->set_f_0(0x28);
  v45->set_f_9(0x5a5369ccf24a11ba);
  v45->set_f_1(s->substr(0, 22));
  v45->set_f_13(0x5576435e);
  v45->set_f_8(0x3a0e);
  v45->set_f_11(Message2::M3::M20::E11_CONST_3);
  v45->set_f_5(false);
  v45->set_f_12(Message2::M3::M20::E12_CONST_2);
  v45->set_f_4(false);
  Message2::M3::M23* v46 = v39->mutable_f_13();
  v46->set_f_0(0xd);
  Message2::M3::M28* v47 = v39->mutable_f_14();
  (void)v47;  // Suppresses clang-tidy.
  Message2::M3::M29* v48_0 = v39->add_f_15();
  v48_0->set_f_0(s->substr(0, 2));
  Message2::M3::M29::M72* v49 = v48_0->mutable_f_7();
  v49->set_f_0(s->substr(0, 1));
  Message2::M3::M29::M72::M85* v50 = v49->mutable_f_5();
  v50->set_f_5(0x70);
  v50->set_f_6(s->substr(0, 3));
  v50->set_f_2(0xb618251);
  v50->set_f_0(0xd49334b);
  v50->set_f_7(0x72);
  v49->set_f_1(0x40ac17c);
  Message2::M3::M29::M73* v51_0 = v48_0->add_f_8();
  v51_0->set_f_17(true);
  v51_0->set_f_8(s->substr(0, 24));
  v51_0->set_f_16(0x46);
  v51_0->set_f_15(0x20e52ebebea7cdb7);
  Message2::M3::M29::M73::E29 array_5[18] = {
      Message2::M3::M29::M73::E29_CONST_3, Message2::M3::M29::M73::E29_CONST_5,
      Message2::M3::M29::M73::E29_CONST_4, Message2::M3::M29::M73::E29_CONST_2,
      Message2::M3::M29::M73::E29_CONST_5, Message2::M3::M29::M73::E29_CONST_5,
      Message2::M3::M29::M73::E29_CONST_3, Message2::M3::M29::M73::E29_CONST_2,
      Message2::M3::M29::M73::E29_CONST_3, Message2::M3::M29::M73::E29_CONST_1,
      Message2::M3::M29::M73::E29_CONST_2, Message2::M3::M29::M73::E29_CONST_2,
      Message2::M3::M29::M73::E29_CONST_2, Message2::M3::M29::M73::E29_CONST_2,
      Message2::M3::M29::M73::E29_CONST_5, Message2::M3::M29::M73::E29_CONST_3,
      Message2::M3::M29::M73::E29_CONST_3, Message2::M3::M29::M73::E29_CONST_4,
  };
  for (auto v : array_5) {
    v51_0->add_f_5(v);
  }
  v51_0->set_f_18(true);
  v51_0->set_f_3(0x1c6b734078e73f);
  v51_0->set_f_4(0x7a727dc19156b37d);
  v51_0->set_f_20(0.298247);
  v51_0->set_f_1(0xcce9100);
  v51_0->set_f_2(s->substr(0, 301));
  v51_0->set_f_0(true);
  v51_0->set_f_22(0x7a220c175);
  v51_0->set_f_26(0x773c1ed30fb9e62b);
  v51_0->set_f_9(0x16b4cc3db79);
  v51_0->set_f_11(Message2::M3::M29::M73::E30_CONST_2);
  v51_0->set_f_24(s->substr(0, 4));
  v51_0->set_f_13(false);
  v51_0->set_f_7(true);
  v51_0->set_f_23(0xe475de1bbc280f8);
  v51_0->set_f_10(0xa0149d597bbc54f);
  v48_0->set_f_1(0x27659889d45e3c06);
  Message2::M3::M49* v52 = v39->mutable_f_19();
  Message2::M3::M49::M52* v53 = v52->mutable_f_3();
  Message2::M3::M49::M52::M76* v54 = v53->mutable_f_2();
  v54->set_f_0(true);
  Message2::M3::M49::M52::M88* v55 = v53->mutable_f_4();
  Message2::M3::M49::M52::M88::M94* v56 = v55->mutable_f_2();
  v56->set_f_2(0x964);
  v56->set_f_10(0xae6498bf8d);
  v56->set_f_8(false);
  v56->set_f_11(0x63);
  v56->set_f_15(0x3e7f);
  v56->set_f_6(0.816422);
  v56->set_f_14(Message2::M3::M49::M52::M88::M94::E38_CONST_1);
  Message2::M3::M49::M52::M88::M94::M96* v57_0 = v56->add_f_40();
  v57_0->set_f_0(0x286b9f1adae1f7bb);
  v56->set_f_17(0x685b30f8c85132cd);
  v56->set_f_16(0x490b2626cbf2a6a6);
  v56->set_f_4(false);
  v56->set_f_18(0x203291989306ca09);
  v56->set_f_12(0x33c9144);
  v56->set_f_3(0x3f0891578);
  v56->set_f_23(0.597954);
  v56->set_f_0(s->substr(0, 75));
  v56->set_f_7(0x39d3bad19affd1da);
  v56->set_f_22(0x43);
  v56->set_f_21(0x13c54176ce35ffd4);
  v55->set_f_0(true);
  Message2::M3::M49::M52::M77* v58 = v53->mutable_f_3();
  v58->set_f_0(0x2b486e2ea5ae4ecc);
  v53->set_f_0(s->substr(0, 3));
  Message2::M3::M49::M65* v59 = v52->mutable_f_6();
  v59->set_f_0(0x55);
  Message2::M3::M49::M65::M86* v60 = v59->mutable_f_3();
  v60->set_f_0(0x58ef5389a87409ca);
  v52->set_f_0(0x3810);
  v39->set_f_1(0x1f2ae1c93647940a);
  v39->set_f_2(0x1);
  message->set_f_17(0x3bb3d81);
  message->set_f_2(0xa8349ba);
  message->set_f_10(0x185533cadede08e6);
  message->set_f_23(s->substr(0, 15));
  message->set_f_0(s->substr(0, 82));
  message->set_f_3(0x36bc7be50422c94f);
  message->set_f_6(0x1cb3e9e9c487a20c);
  message->set_f_8(s->substr(0, 20));
  message->set_f_12(0x45bf2a514c2d176f);
  message->set_f_25(0x2d8cfc28ddd7bdbf);
  Message2::M1* v61 = message->mutable_f_46();
  Message2::M1::M38* v62 = v61->mutable_f_15();
  v62->set_f_0(0x110f5991);
  v62->set_f_2(Message2::M1::M38::E20_CONST_1);
  Message2::M1::M38::M55* v63 = v62->mutable_f_5();
  v63->set_f_0(0x1cc3fc);
  v62->set_f_1(0x3d1885ff8d2c74aa);
  Message2::M1::M25* v64 = v61->mutable_f_11();
  v64->set_f_0(0xe3584b4);
  Message2::M1::M7* v65 = v61->mutable_f_4();
  v65->set_f_3(true);
  Message2::M1::M7::E9 array_6[5] = {
      Message2::M1::M7::E9_CONST_1, Message2::M1::M7::E9_CONST_5,
      Message2::M1::M7::E9_CONST_3, Message2::M1::M7::E9_CONST_1,
      Message2::M1::M7::E9_CONST_4,
  };
  for (auto v : array_6) {
    v65->add_f_2(v);
  }
  v65->set_f_1(0x7c96ada);
  v65->set_f_0(0x12109893edb2c129);
  v61->set_f_0(s->substr(0, 20));
  Message2::M1::M19* v66 = v61->mutable_f_6();
  v66->set_f_0(s->substr(0, 24));
  Message2::M1::M19::M64* v67 = v66->mutable_f_9();
  Message2::M1::M19::M64::M91* v68_0 = v67->add_f_4();
  (void)v68_0;  // Suppresses clang-tidy.
  Message2::M1::M19::M64::M81* v69_0 = v67->add_f_3();
  v69_0->set_f_0(0x1052ebf4);
  v67->set_f_1(0x304af4695f3d49db);
  v66->set_f_3(0xa6e2a8e);
  Message2::M1::M32* v70 = v61->mutable_f_13();
  v70->set_f_0(0x1672bac31967e0);
  Message2::M1::M32::M69* v71_0 = v70->add_f_5();
  v71_0->set_f_0(0x1661076c0c1c0fb8);
  Message2::M1::M32::M69::M87* v72 = v71_0->mutable_f_3();
  v72->set_f_0(0.435310);
  v72->add_f_1(Message2::M1::M32::M69::M87::E35_CONST_2);
  Message2::M1::M51* v73_0 = v61->add_f_22();
  v73_0->set_f_0(0x4976fe1d98879090);
  v73_0->set_f_1(0x70e8bad992dc45f6);
  v73_0->set_f_5(0x59baac9f);
  v73_0->set_f_2(true);
  message->set_f_9(false);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_17(0x9fe6a);
  Message2::M4* v0_0 = message->add_f_52();
  Message2::M4::M48* v1 = v0_0->mutable_f_60();
  v1->set_f_2(false);
  v1->set_f_0(0x44);
  v1->set_f_1(s->substr(0, 484));
  Message2::M4::M8* v2 = v0_0->mutable_f_46();
  v2->set_f_0(0.247058);
  v2->set_f_1(0x49);
  Message2::M4::M8::M68* v3 = v2->mutable_f_9();
  v3->set_f_2(s->substr(0, 18));
  v3->set_f_1(0x78684465);
  v3->set_f_0(0x1bd4);
  v3->set_f_3(0x3cb32f032d3);
  Message2::M4::M8::M68::M92* v4 = v3->mutable_f_10();
  v4->set_f_26(0x77e487f3f140e5a8);
  v4->set_f_11(0x4a);
  v4->set_f_7(0x79dacfaa235ae9c9);
  v4->set_f_24(s->substr(0, 1));
  v4->set_f_12(Message2::M4::M8::M68::M92::E36_CONST_5);
  v4->set_f_27(0.700130);
  v4->add_f_20(Message2::M4::M8::M68::M92::E37_CONST_3);
  v4->set_f_5(0xa);
  v4->set_f_10(s->substr(0, 29));
  v4->set_f_17(s->substr(0, 31));
  v4->set_f_6(0x6cc24579);
  v4->set_f_22(0x7f90e091);
  v4->set_f_30(0x292bd266471d1e0e);
  v4->set_f_18(s->substr(0, 15));
  v4->set_f_2(0x4a);
  v4->set_f_8(s->substr(0, 8));
  v4->set_f_13(0x1b877146b79d27b2);
  v4->set_f_9(0x741fb8d);
  v4->set_f_1(false);
  v4->set_f_0(0xdfb61ea);
  v4->set_f_23(0x1c);
  v4->set_f_21(0x543a15a1063d4d89);
  v4->set_f_28(false);
  Message2::M4::M8::M68::M83* v5 = v3->mutable_f_6();
  (void)v5;  // Suppresses clang-tidy.
  v0_0->set_f_2(0x205461d87df58776);
  v0_0->set_f_3(Message2::M4::E4_CONST_2);
  Message2::M4::M14* v6_0 = v0_0->add_f_50();
  v6_0->set_f_0(false);
  Message2::M4::M37* v7 = v0_0->mutable_f_59();
  v7->set_f_4(Message2::M4::M37::E19_CONST_3);
  v7->add_f_3(Message2::M4::M37::E18_CONST_2);
  v7->set_f_2(0.607076);
  v7->set_f_1(s->substr(0, 27));
  v7->set_f_0(Message2::M4::M37::E17_CONST_4);
  v0_0->set_f_10(0x7163d311749d4d57);
  v0_0->set_f_29(s->substr(0, 8));
  v0_0->set_f_20(0x60);
  Message2::M4::M12* v8_0 = v0_0->add_f_49();
  v8_0->set_f_0(0x25);
  Message2::M4::M12::M58* v9_0 = v8_0->add_f_2();
  v9_0->set_f_2(0x63e0814e41bcfd1b);
  v9_0->set_f_4(0.501523);
  v9_0->set_f_3(0xbd8a158);
  v9_0->set_f_1(0x34283bda0f22dcd);
  v9_0->set_f_5(false);
  Message2::M4::M36* v10_0 = v0_0->add_f_58();
  v10_0->set_f_2(s->substr(0, 281));
  v10_0->set_f_1(0x71);
  v10_0->add_f_0(Message2::M4::M36::E16_CONST_4);
  v10_0->set_f_4(0x18);
  v0_0->set_f_22(0.092612);
  Message2::M4::M9* v11 = v0_0->mutable_f_48();
  v11->set_f_0(0x62);
  Message2::M4::M9::M60* v12 = v11->mutable_f_2();
  v12->set_f_0(0x1d6df4);
  Message2::M4::M9::M60::M80* v13 = v12->mutable_f_5();
  v13->set_f_2(0x54a56fe8ec01cdf4);
  v13->set_f_0(0x45);
  Message2::M4::M9::M60::M80::M93* v14 = v13->mutable_f_10();
  Message2::M4::M9::M60::M80::M93::M95* v15_0 = v14->add_f_4();
  v15_0->set_f_1(0x3a);
  v15_0->set_f_2(true);
  v13->set_f_3(s->substr(0, 82));
  v0_0->set_f_26(0x13726a);
  v0_0->set_f_21(0x6b4ff2c834e497ca);
  v0_0->set_f_9(true);
  v0_0->add_f_5(Message2::M4::E5_CONST_4);
  v0_0->set_f_18(0x48c95ac39fd3d507);
  Message2::M4::M26* v16 = v0_0->mutable_f_55();
  (void)v16;  // Suppresses clang-tidy.
  v0_0->set_f_12(0x61b2643);
  v0_0->set_f_17(0x2dda78533b3c4873);
  v0_0->set_f_0(s->substr(0, 7));
  v0_0->set_f_1(false);
  v0_0->set_f_24(false);
  Message2::M4::M17* v17 = v0_0->mutable_f_51();
  v17->set_f_0(s->substr(0, 22));
  Message2::M4::M27* v18_0 = v0_0->add_f_56();
  v18_0->set_f_0(0x66);
  v0_0->set_f_28(0.548530);
  v0_0->set_f_25(0x16f1);
  v0_0->set_f_8(Message2::M4::E6_CONST_1);
  v0_0->set_f_19(0x2d93f2cfbe630b77);
  v0_0->set_f_16(s->substr(0, 7));
  Message2::M4::M30* v19_0 = v0_0->add_f_57();
  v19_0->set_f_0(0x806af76);
  Message2::M4::M18* v20 = v0_0->mutable_f_52();
  (void)v20;  // Suppresses clang-tidy.
  Message2::M1* v21 = message->mutable_f_46();
  Message2::M1::M32* v22 = v21->mutable_f_13();
  v22->set_f_0(0xfe42a20cba07be);
  Message2::M1::M32::M69* v23_0 = v22->add_f_5();
  (void)v23_0;  // Suppresses clang-tidy.
  Message2::M1::M32::M62* v24 = v22->mutable_f_4();
  v24->set_f_0(0.413813);
  Message2::M1::M7* v25 = v21->mutable_f_4();
  v25->add_f_2(Message2::M1::M7::E9_CONST_3);
  v25->set_f_3(false);
  v25->set_f_1(0x24);
  Message2::M1::M25* v26 = v21->mutable_f_11();
  v26->set_f_0(0xee8dcf7);
  Message2::M1::M15* v27 = v21->mutable_f_5();
  Message2::M1::M15::M66* v28_0 = v27->add_f_2();
  v28_0->set_f_14(0x511cc1382ff746a);
  v28_0->set_f_2(0.079935);
  v28_0->add_f_24(Message2::M1::M15::M66::E27_CONST_4);
  v28_0->set_f_30(Message2::M1::M15::M66::E28_CONST_3);
  v28_0->set_f_3(0x2e);
  v28_0->set_f_5(0x2c);
  v28_0->set_f_21(0x2098eeb);
  v28_0->set_f_16(0xd4535f9);
  v28_0->set_f_6(s->substr(0, 85));
  v28_0->set_f_9(0x1b);
  v28_0->set_f_27(s->substr(0, 18));
  v28_0->set_f_22(s->substr(0, 246));
  v28_0->set_f_19(0x33cbe73c2c5748db);
  v28_0->set_f_28(s->substr(0, 6));
  v28_0->set_f_18(0x7e);
  v28_0->set_f_12(s->substr(0, 21));
  v28_0->set_f_20(s->substr(0, 8));
  v28_0->set_f_8(0x1fe8b0);
  v28_0->set_f_10(0x2cd4);
  v28_0->set_f_11(0x25);
  v28_0->set_f_26(0xc4c7c94e0384c80);
  v28_0->set_f_29(0x511339f);
  v28_0->set_f_17(s->substr(0, 25));
  v28_0->set_f_25(0xd10fc979c69f6ce);
  Message2::M1::M19* v29 = v21->mutable_f_6();
  v29->set_f_1(false);
  v29->set_f_4(0x1febc160347877d3);
  Message2::M1::M19::M64* v30 = v29->mutable_f_9();
  v30->set_f_0(0x4bcbff0a82e01778);
  Message2::M1::M19::M64::M91* v31_0 = v30->add_f_4();
  v31_0->set_f_0(0x42);
  v30->set_f_1(0x171bb91afd0dcb20);
  v29->set_f_3(0x52);
  Message2::M1::M43* v32 = v21->mutable_f_20();
  Message2::M1::M43::E23 array_0[21] = {
      Message2::M1::M43::E23_CONST_1, Message2::M1::M43::E23_CONST_4,
      Message2::M1::M43::E23_CONST_1, Message2::M1::M43::E23_CONST_5,
      Message2::M1::M43::E23_CONST_5, Message2::M1::M43::E23_CONST_5,
      Message2::M1::M43::E23_CONST_4, Message2::M1::M43::E23_CONST_4,
      Message2::M1::M43::E23_CONST_4, Message2::M1::M43::E23_CONST_3,
      Message2::M1::M43::E23_CONST_4, Message2::M1::M43::E23_CONST_1,
      Message2::M1::M43::E23_CONST_4, Message2::M1::M43::E23_CONST_5,
      Message2::M1::M43::E23_CONST_1, Message2::M1::M43::E23_CONST_3,
      Message2::M1::M43::E23_CONST_5, Message2::M1::M43::E23_CONST_2,
      Message2::M1::M43::E23_CONST_2, Message2::M1::M43::E23_CONST_3,
      Message2::M1::M43::E23_CONST_3,
  };
  for (auto v : array_0) {
    v32->add_f_3(v);
  }
  v32->set_f_2(s->substr(0, 14));
  Message2::M1::M43::E22 array_1[9] = {
      Message2::M1::M43::E22_CONST_1, Message2::M1::M43::E22_CONST_4,
      Message2::M1::M43::E22_CONST_5, Message2::M1::M43::E22_CONST_5,
      Message2::M1::M43::E22_CONST_4, Message2::M1::M43::E22_CONST_2,
      Message2::M1::M43::E22_CONST_4, Message2::M1::M43::E22_CONST_4,
      Message2::M1::M43::E22_CONST_4,
  };
  for (auto v : array_1) {
    v32->add_f_0(v);
  }
  v32->set_f_1(0x6d);
  Message2::M1::M50* v33 = v21->mutable_f_21();
  (void)v33;  // Suppresses clang-tidy.
  v21->set_f_0(s->substr(0, 22));
  message->set_f_23(s->substr(0, 21));
  message->set_f_16(false);
  message->set_f_0(s->substr(0, 28));
  message->set_f_19(s->substr(0, 16));
  message->set_f_14(0x2e872a996);
  message->set_f_5(0x1bdc5020f96fa049);
  message->set_f_6(0x14b58a53d0a064a7);
  message->set_f_7(true);
  message->set_f_1(0x77);
  message->set_f_24(false);
  message->set_f_25(0x5cde74ac4907a265);
  message->set_f_12(0x57fff137f7415e6b);
  message->set_f_18(false);
  message->set_f_15(0x3c78aa0f7f90073d);
  message->set_f_4(s->substr(0, 15));
  message->set_f_9(false);
  message->set_f_13(0x56e423345cb97092);
  message->set_f_21(0x2b);
  message->set_f_2(0x2b);
  message->set_f_26(true);
  Message2::M2* v34 = message->mutable_f_49();
  Message2::M2::M11* v35_0 = v34->add_f_17();
  v35_0->set_f_0(0x573657d4b206323a);
  v34->set_f_1(s->substr(0, 26));
  Message2::M2::M6* v36 = v34->mutable_f_11();
  v36->set_f_10(0x1df1cc31219f1a95);
  v36->set_f_9(s->substr(0, 202));
  v36->set_f_12(Message2::M2::M6::E8_CONST_3);
  v36->set_f_4(0xa1213);
  v36->set_f_25(true);
  v36->set_f_8(0x43);
  v36->set_f_23(0.019495);
  v36->set_f_2(0x7b08c96cfbd28498);
  v36->set_f_6(s->substr(0, 1));
  v36->set_f_5(0xea7175d);
  v36->set_f_3(0xb);
  v36->set_f_29(0xdc65de0903aa562);
  v36->set_f_0(s->substr(0, 22));
  v36->set_f_26(false);
  v36->set_f_13(0x55);
  v36->set_f_14(s->substr(0, 75));
  v36->set_f_20(s->substr(0, 1));
  v36->set_f_11(0xf7f7);
  v36->set_f_22(true);
  v36->set_f_24(0x3807b715975cc17e);
  v36->set_f_7(0xba48c51);
  v36->set_f_17(0x1e5d89d5f1699e01);
  v36->set_f_18(0x63);
  v36->set_f_28(true);
  v36->set_f_19(s->substr(0, 360));
  v34->set_f_2(0xa);
  Message2::M2::M13* v37 = v34->mutable_f_18();
  (void)v37;  // Suppresses clang-tidy.
  v34->set_f_0(0x693c1e2);
  v34->add_f_3(Message2::M2::E3_CONST_5);
  Message2::M2::M45* v38 = v34->mutable_f_32();
  Message2::M2::M45::M53* v39 = v38->mutable_f_9();
  v39->set_f_0(0x563707706);
  Message2::M2::M45::M53::M89* v40_0 = v39->add_f_2();
  v40_0->set_f_1(0x23);
  v40_0->set_f_0(0x60791221f);
  v38->set_f_5(0x108d);
  v38->set_f_4(0.648924);
  v38->set_f_2(0x66d271bdb24f2fc1);
  v38->set_f_1(0x1a99);
  v38->set_f_0(s->substr(0, 4));
  Message2::M2::M16* v41 = v34->mutable_f_19();
  v41->set_f_2(0x66);
  Message2::M2::M16::M57* v42 = v41->mutable_f_6();
  v42->set_f_1(0x2c);
  v42->set_f_2(false);
  v42->set_f_0(true);
  v41->set_f_1(0x18fb9519);
  Message2::M2::M40* v43 = v34->mutable_f_27();
  v43->set_f_1(0x566939658);
  v43->set_f_0(s->substr(0, 95));
  Message2::M2::M42* v44 = v34->mutable_f_30();
  (void)v44;  // Suppresses clang-tidy.
  Message2::M2::M44* v45_0 = v34->add_f_31();
  v45_0->set_f_0(true);
  Message2::M2::M41* v46_0 = v34->add_f_28();
  (void)v46_0;  // Suppresses clang-tidy.
  Message2::M2::M39* v47_0 = v34->add_f_26();
  v47_0->add_f_3(Message2::M2::M39::E21_CONST_1);
  v47_0->set_f_1(s->substr(0, 178));
  v47_0->set_f_0(false);
  v47_0->set_f_2(0x358e8a3);
  Message2::M2::M33* v48 = v34->mutable_f_23();
  v48->set_f_3(0x331585841b3338cb);
  v48->set_f_0(0xa5130c08140c4a9);
  v48->set_f_2(s->substr(0, 31));
  v48->set_f_1(0x2d);
  Message2::M2::M5* v49_0 = v34->add_f_9();
  v49_0->set_f_0(0x22751ea752ce7148);
  Message2::M2::M5::M70* v50 = v49_0->mutable_f_4();
  Message2::M2::M5::M70::M78* v51 = v50->mutable_f_4();
  (void)v51;  // Suppresses clang-tidy.
  v50->set_f_0(0x4628979);
  message->set_f_8(s->substr(0, 21));
  message->set_f_10(0x413994304ffba323);
  message->set_f_3(0x27386fbcc6922087);
  message->set_f_27(0x7fe730a8fa1567cb);
  message->set_f_22(s->substr(0, 27));
  Message2::M3* v52 = message->mutable_f_50();
  Message2::M3::M28* v53 = v52->mutable_f_14();
  (void)v53;  // Suppresses clang-tidy.
  Message2::M3::M34* v54_0 = v52->add_f_16();
  v54_0->set_f_2(0x1c354049fc0a970b);
  Message2::M3::M34::M54* v55_0 = v54_0->add_f_6();
  v55_0->set_f_2(0x38a2a95746e84d7f);
  Message2::M3::M34::M54::M84* v56 = v55_0->mutable_f_9();
  v56->set_f_1(s->substr(0, 17));
  Message2::M3::M34::M54::M79* v57_0 = v55_0->add_f_7();
  v57_0->set_f_3(true);
  v57_0->set_f_4(0.064919);
  v57_0->set_f_2(0x17158a59ace57cc7);
  v57_0->set_f_0(Message2::M3::M34::M54::M79::E33_CONST_2);
  v57_0->set_f_1(0x77);
  v55_0->set_f_3(0x658f9fc127c558e0);
  v55_0->set_f_0(0x120390c8b2b6d14b);
  v54_0->add_f_1(Message2::M3::M34::E15_CONST_3);
  v54_0->set_f_0(s->substr(0, 13));
  v52->set_f_0(0x3339ed3926bc767a);
  v52->set_f_4(0x1a209e231e8b237f);
  Message2::M3::M20* v58 = v52->mutable_f_9();
  v58->set_f_4(false);
  v58->set_f_10(0x6fff6d5352b4ee8f);
  v58->set_f_5(true);
  v58->set_f_1(s->substr(0, 19));
  v58->set_f_8(0x74);
  v58->set_f_12(Message2::M3::M20::E12_CONST_3);
  v58->set_f_13(0x69cb34fe);
  v58->set_f_2(0x693edaf7);
  v52->set_f_3(0x508c5cec2f1b28df);
  Message2::M3::M49* v59 = v52->mutable_f_19();
  v59->set_f_0(0x10);
  Message2::M3::M49::M52* v60 = v59->mutable_f_3();
  Message2::M3::M49::M52::M88* v61 = v60->mutable_f_4();
  Message2::M3::M49::M52::M88::M94* v62 = v61->mutable_f_2();
  v62->set_f_9(0x6cdfc762b180e9ce);
  v62->set_f_14(Message2::M3::M49::M52::M88::M94::E38_CONST_5);
  v62->set_f_0(s->substr(0, 4));
  v62->set_f_12(0x61);
  v62->set_f_15(0x8c7aa78);
  v62->set_f_1(s->substr(0, 32));
  v62->set_f_11(0xe);
  v62->set_f_2(0x59762de);
  v62->set_f_4(false);
  v62->set_f_17(0x48bc5f397719e7c7);
  v62->set_f_23(0.607602);
  v62->set_f_20(0x3d03);
  v62->set_f_3(0x275d15f86ef);
  v62->set_f_6(0.843900);
  v62->set_f_21(0x406e7ea027343a4e);
  v62->set_f_22(0xbf0f8be);
  v62->set_f_19(0x86b07);
  v62->set_f_8(true);
  v61->set_f_0(true);
  Message2::M3::M49::M52::M77* v63 = v60->mutable_f_3();
  v63->set_f_0(0x3eecee589d2e7c94);
  v60->set_f_0(s->substr(0, 74));
  Message2::M3::M49::M65* v64 = v59->mutable_f_6();
  Message2::M3::M49::M65::M86* v65 = v64->mutable_f_3();
  v65->set_f_0(0x2782016c9b418c5a);
  v64->set_f_0(0x69);
  message->set_f_20(0x3b717406);
  message->add_f_28(Message2::E2_CONST_1);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_7(true);
  message->set_f_3(0x2dd02fce0de123d1);
  message->set_f_29(0x716e45);
  message->set_f_20(0xb9e5447);
  message->set_f_9(true);
  message->set_f_22(s->substr(0, 31));
  message->set_f_25(0x1ee811505d5ee895);
  message->add_f_28(Message2::E2_CONST_2);
  message->add_f_28(Message2::E2_CONST_1);
  message->set_f_19(s->substr(0, 435));
  message->set_f_26(true);
  message->set_f_4(s->substr(0, 30));
  message->set_f_12(0x34f95b8223ffa51a);
  message->set_f_1(0x510b2);
  message->set_f_8(s->substr(0, 3));
  message->set_f_10(0x5cf9b4036373c7b2);
  Message2::M2* v0 = message->mutable_f_49();
  Message2::M2::M41* v1_0 = v0->add_f_28();
  v1_0->set_f_0(0x7a48bf16b892c1cf);
  Message2::M2::M11* v2_0 = v0->add_f_17();
  v2_0->set_f_0(0x6eb238156c679a4f);
  Message2::M2::M35* v3 = v0->mutable_f_25();
  v3->set_f_0(0x50);
  Message2::M2::M35::M61* v4 = v3->mutable_f_3();
  Message2::M2::M35::M61::M75* v5 = v4->mutable_f_2();
  (void)v5;  // Suppresses clang-tidy.
  Message2::M2::M35::M61::E25 array_0[16] = {
      Message2::M2::M35::M61::E25_CONST_1, Message2::M2::M35::M61::E25_CONST_2,
      Message2::M2::M35::M61::E25_CONST_5, Message2::M2::M35::M61::E25_CONST_1,
      Message2::M2::M35::M61::E25_CONST_2, Message2::M2::M35::M61::E25_CONST_1,
      Message2::M2::M35::M61::E25_CONST_2, Message2::M2::M35::M61::E25_CONST_5,
      Message2::M2::M35::M61::E25_CONST_5, Message2::M2::M35::M61::E25_CONST_3,
      Message2::M2::M35::M61::E25_CONST_5, Message2::M2::M35::M61::E25_CONST_1,
      Message2::M2::M35::M61::E25_CONST_1, Message2::M2::M35::M61::E25_CONST_4,
      Message2::M2::M35::M61::E25_CONST_5, Message2::M2::M35::M61::E25_CONST_4,
  };
  for (auto v : array_0) {
    v4->add_f_0(v);
  }
  Message2::M2::M40* v6 = v0->mutable_f_27();
  v6->set_f_2(0x366f1ab2);
  v6->set_f_1(0x6a68fa9c5);
  Message2::M2::M10* v7 = v0->mutable_f_12();
  v7->set_f_0(0x69414697107ec0d1);
  Message2::M2::M39* v8_0 = v0->add_f_26();
  v8_0->set_f_1(s->substr(0, 299));
  v8_0->set_f_2(0x10);
  v8_0->add_f_3(Message2::M2::M39::E21_CONST_5);
  v8_0->set_f_0(true);
  Message2::M2::M16* v9 = v0->mutable_f_19();
  v9->set_f_2(0x39);
  v9->set_f_0(s->substr(0, 18));
  v9->set_f_1(0x7608975d);
  Message2::M2::M16::M57* v10 = v9->mutable_f_6();
  v10->set_f_0(true);
  v10->set_f_1(0x33);
  Message2::M2::M5* v11_0 = v0->add_f_9();
  v11_0->set_f_0(0x44f9a2a877c0cc37);
  v0->set_f_0(0x85c62fd);
  Message2::M2::M45* v12 = v0->mutable_f_32();
  v12->set_f_4(0.727984);
  v12->set_f_0(s->substr(0, 3));
  Message2::M2::M45::M53* v13 = v12->mutable_f_9();
  v13->set_f_0(0xdab7369032);
  v12->set_f_1(0x2a81);
  v12->set_f_2(0x6ce685a5db15808);
  v12->set_f_3(0x11d1f01);
  v0->set_f_1(s->substr(0, 5));
  Message2::M2::M42* v14 = v0->mutable_f_30();
  v14->set_f_0(s->substr(0, 19));
  Message2::M2::M44* v15_0 = v0->add_f_31();
  v15_0->set_f_0(false);
  Message2::M2::M33* v16 = v0->mutable_f_23();
  v16->set_f_1(0x27);
  v16->set_f_3(0x176bd68b8b60d3dc);
  v16->set_f_2(s->substr(0, 8));
  v16->set_f_0(0x71bc533b381d99df);
  Message2::M3* v17 = message->mutable_f_50();
  Message2::M3::M20* v18 = v17->mutable_f_9();
  v18->set_f_8(0x8ea2cf4);
  v18->set_f_7(s->substr(0, 24));
  v18->set_f_3(0x478f02c260f60a66);
  v18->set_f_6(0xeb8ddce);
  v18->set_f_10(0x672cdafce6eb71e8);
  v18->set_f_12(Message2::M3::M20::E12_CONST_4);
  v18->set_f_13(0x3ae80b4d);
  v18->set_f_4(false);
  v18->set_f_0(0x4b);
  v17->set_f_1(0x496c6ae1c3862a17);
  Message2::M3::M29* v19_0 = v17->add_f_15();
  v19_0->set_f_1(0x4c4d20e25c954994);
  v19_0->set_f_0(s->substr(0, 1963));
  Message2::M3::M29::M72* v20 = v19_0->mutable_f_7();
  Message2::M3::M29::M72::M85* v21 = v20->mutable_f_5();
  v21->set_f_4(s->substr(0, 18));
  v21->set_f_6(s->substr(0, 20));
  v21->set_f_7(0x39);
  v21->set_f_3(0x11e2e8d4);
  v21->set_f_1(0x20fa0004eb8e47f);
  v20->set_f_0(s->substr(0, 13));
  v20->set_f_1(0x8e20034);
  Message2::M3::M28* v22 = v17->mutable_f_14();
  v22->set_f_0(s->substr(0, 5));
  Message2::M3::M34* v23_0 = v17->add_f_16();
  Message2::M3::M34::M54* v24_0 = v23_0->add_f_6();
  v24_0->set_f_0(0x3e1bab3b61a224b9);
  Message2::M3::M34::M54::M84* v25 = v24_0->mutable_f_9();
  v25->set_f_1(s->substr(0, 24));
  v25->set_f_2(0x63ad5f59);
  v25->set_f_0(0x68f12e6f7458c75d);
  v24_0->set_f_2(0x1e7b439b0acd822b);
  Message2::M3::M34::M54::M90* v26 = v24_0->mutable_f_10();
  v26->set_f_0(0xa);
  v24_0->set_f_3(0x62a6fcc58c523723);
  v23_0->set_f_3(0x1c);
  v23_0->add_f_1(Message2::M3::M34::E15_CONST_1);
  v17->set_f_3(0x7b425c54f82e027e);
  v17->set_f_2(0x36);
  Message2::M3::M21* v27 = v17->mutable_f_11();
  Message2::M3::M21::E14 array_1[15] = {
      Message2::M3::M21::E14_CONST_3, Message2::M3::M21::E14_CONST_5,
      Message2::M3::M21::E14_CONST_1, Message2::M3::M21::E14_CONST_4,
      Message2::M3::M21::E14_CONST_1, Message2::M3::M21::E14_CONST_5,
      Message2::M3::M21::E14_CONST_4, Message2::M3::M21::E14_CONST_4,
      Message2::M3::M21::E14_CONST_5, Message2::M3::M21::E14_CONST_1,
      Message2::M3::M21::E14_CONST_5, Message2::M3::M21::E14_CONST_5,
      Message2::M3::M21::E14_CONST_1, Message2::M3::M21::E14_CONST_3,
      Message2::M3::M21::E14_CONST_5,
  };
  for (auto v : array_1) {
    v27->add_f_1(v);
  }
  v27->set_f_0(Message2::M3::M21::E13_CONST_5);
  v17->set_f_4(0x79ca5e30f6b274aa);
  v17->set_f_0(0x3c5f5ec75ba1bc0e);
  message->set_f_2(0xffbcaac);
  message->set_f_27(0x2890a04681f32c38);
  Message2::M4* v28_0 = message->add_f_52();
  v28_0->set_f_10(0x5f3a28ca1897523c);
  v28_0->set_f_4(0x1dd5a1e9b950d059);
  v28_0->set_f_17(0x5fd5cf1dc8b64fc3);
  Message2::M4::E7 array_2[22] = {
      Message2::M4::E7_CONST_3, Message2::M4::E7_CONST_5,
      Message2::M4::E7_CONST_5, Message2::M4::E7_CONST_2,
      Message2::M4::E7_CONST_3, Message2::M4::E7_CONST_3,
      Message2::M4::E7_CONST_5, Message2::M4::E7_CONST_2,
      Message2::M4::E7_CONST_4, Message2::M4::E7_CONST_2,
      Message2::M4::E7_CONST_2, Message2::M4::E7_CONST_3,
      Message2::M4::E7_CONST_1, Message2::M4::E7_CONST_5,
      Message2::M4::E7_CONST_4, Message2::M4::E7_CONST_4,
      Message2::M4::E7_CONST_3, Message2::M4::E7_CONST_3,
      Message2::M4::E7_CONST_3, Message2::M4::E7_CONST_1,
      Message2::M4::E7_CONST_1, Message2::M4::E7_CONST_1,
  };
  for (auto v : array_2) {
    v28_0->add_f_23(v);
  }
  Message2::M4::M9* v29 = v28_0->mutable_f_48();
  v29->set_f_0(0x4bad5);
  Message2::M4::M26* v30 = v28_0->mutable_f_55();
  v30->set_f_0(s->substr(0, 119));
  v28_0->set_f_7(0x3b5bd060a5740562);
  v28_0->set_f_26(0x8);
  Message2::M4::M14* v31_0 = v28_0->add_f_50();
  (void)v31_0;  // Suppresses clang-tidy.
  v28_0->set_f_3(Message2::M4::E4_CONST_1);
  v28_0->set_f_6(0x224bf91f8abb6d5a);
  v28_0->set_f_18(0x6c0e9832190a03e7);
  v28_0->set_f_22(0.247714);
  v28_0->set_f_9(true);
  v28_0->set_f_14(true);
  Message2::M4::M27* v32_0 = v28_0->add_f_56();
  v32_0->set_f_0(0x5313c64);
  v28_0->set_f_30(0x27bcc2f7d5a2be8d);
  v28_0->set_f_25(0x9);
  Message2::M4::E5 array_3[8] = {
      Message2::M4::E5_CONST_2, Message2::M4::E5_CONST_3,
      Message2::M4::E5_CONST_4, Message2::M4::E5_CONST_3,
      Message2::M4::E5_CONST_2, Message2::M4::E5_CONST_2,
      Message2::M4::E5_CONST_1, Message2::M4::E5_CONST_4,
  };
  for (auto v : array_3) {
    v28_0->add_f_5(v);
  }
  Message2::M4::M37* v33 = v28_0->mutable_f_59();
  v33->set_f_5(0x5aacffa95);
  v33->set_f_4(Message2::M4::M37::E19_CONST_3);
  v33->set_f_0(Message2::M4::M37::E17_CONST_3);
  v33->add_f_3(Message2::M4::M37::E18_CONST_5);
  v33->set_f_1(s->substr(0, 10));
  v33->set_f_2(0.799592);
  Message2::M4::M30* v34_0 = v28_0->add_f_57();
  v34_0->set_f_0(0x1b96fd);
  v28_0->set_f_16(s->substr(0, 1));
  v28_0->set_f_13(0.435393);
  Message2::M4::M36* v35_0 = v28_0->add_f_58();
  v35_0->set_f_3(s->substr(0, 20));
  v35_0->set_f_1(0x8fa403);
  v35_0->add_f_0(Message2::M4::M36::E16_CONST_2);
  v35_0->set_f_4(0x71);
  v28_0->set_f_1(false);
  Message2::M4::M12* v36_0 = v28_0->add_f_49();
  v36_0->set_f_0(0x8aec245);
  Message2::M4::M12::M58* v37_0 = v36_0->add_f_2();
  v37_0->set_f_1(0x292ec5ba5396e316);
  v37_0->set_f_5(true);
  v37_0->set_f_2(0x266c2103429345b1);
  v37_0->set_f_3(0x5f);
  v37_0->set_f_4(0.759093);
  v37_0->set_f_0(0x5b);
  v28_0->set_f_27(0x34);
  v28_0->set_f_11(0x76237b32e6da67c3);
  v28_0->set_f_24(true);
  v28_0->set_f_12(0x63);
  v28_0->set_f_20(0xc41f2d8);
  v28_0->set_f_8(Message2::M4::E6_CONST_4);
  v28_0->set_f_21(0x2aa9710479426f04);
  message->set_f_11(Message2::E1_CONST_1);
  message->set_f_16(true);
  Message2::M1* v38 = message->mutable_f_46();
  v38->set_f_0(s->substr(0, 98));
  Message2::M1::M38* v39 = v38->mutable_f_15();
  v39->set_f_2(Message2::M1::M38::E20_CONST_5);
  Message2::M1::M38::M55* v40 = v39->mutable_f_5();
  v40->set_f_0(0x13);
  Message2::M1::M38::M55::M74* v41_0 = v40->add_f_2();
  v41_0->set_f_2(0x27);
  v41_0->set_f_1(0x509bee64);
  v41_0->set_f_0(true);
  v41_0->set_f_4(true);
  v39->set_f_0(0x6c633dd9);
  Message2::M1::M19* v42 = v38->mutable_f_6();
  Message2::M1::M19::M64* v43 = v42->mutable_f_9();
  Message2::M1::M19::M64::M81* v44_0 = v43->add_f_3();
  v44_0->set_f_0(0x45e72672);
  v43->set_f_1(0x1d2498a99138c8d);
  v43->set_f_0(0x3f1610f63899a566);
  Message2::M1::M19::M64::M91* v45_0 = v43->add_f_4();
  v45_0->set_f_0(0xddd270b);
  v42->set_f_3(0xa52);
  v42->set_f_2(0.991771);
  v42->set_f_4(0x51c43596299f8f7d);
  v42->set_f_1(false);
  Message2::M1::M24* v46 = v38->mutable_f_7();
  v46->set_f_0(0xdc5906feade411f);
  v46->set_f_3(0.911396);
  Message2::M1::M24::M59* v47 = v46->mutable_f_6();
  v47->set_f_4(Message2::M1::M24::M59::E24_CONST_4);
  v47->set_f_1(true);
  v47->set_f_5(0x387c2f4e52eca093);
  v47->set_f_2(false);
  Message2::M1::M25* v48 = v38->mutable_f_11();
  v48->set_f_0(0x7155f);
  Message2::M1::M51* v49_0 = v38->add_f_22();
  v49_0->set_f_2(true);
  v49_0->set_f_1(0x7c50558354c6c2f8);
  v49_0->set_f_3(0x19ba49);
  Message2::M1::M51::M63* v50 = v49_0->mutable_f_13();
  (void)v50;  // Suppresses clang-tidy.
  v49_0->set_f_4(0x38);
  v49_0->set_f_5(0x53c4c534);
  v49_0->set_f_0(0x56ed6041d2149776);
  Message2::M1::M7* v51 = v38->mutable_f_4();
  v51->set_f_0(0x776f30490bea82ac);
  v51->set_f_3(false);
  v51->add_f_2(Message2::M1::M7::E9_CONST_1);
  v51->set_f_1(0x3);
  Message2::M1::M43* v52 = v38->mutable_f_20();
  v52->set_f_5(0x3911);
  v52->set_f_1(0xdd1ad65);
  v52->set_f_4(s->substr(0, 177));
  Message2::M1::M15* v53 = v38->mutable_f_5();
  v53->set_f_0(0x2f5be530ff27a353);
  Message2::M1::M15::M66* v54_0 = v53->add_f_2();
  v54_0->set_f_5(0xf7765b1);
  v54_0->set_f_18(0x10);
  v54_0->set_f_6(s->substr(0, 230));
  v54_0->add_f_23(Message2::M1::M15::M66::E26_CONST_1);
  v54_0->set_f_10(0x9756945);
  v54_0->set_f_30(Message2::M1::M15::M66::E28_CONST_1);
  v54_0->set_f_11(0x49);
  v54_0->set_f_1(0.621525);
  v54_0->set_f_29(0x2d36);
  v54_0->set_f_17(s->substr(0, 19));
  v54_0->set_f_3(0x79);
  v54_0->set_f_21(0xc04c772);
  v54_0->set_f_12(s->substr(0, 486));
  v54_0->set_f_7(0x27b1ce648e4f93bb);
  v54_0->set_f_0(s->substr(0, 9));
  v54_0->set_f_20(s->substr(0, 2));
  v54_0->set_f_22(s->substr(0, 4));
  v54_0->set_f_19(0x5e7c063865dcdcfa);
  v54_0->set_f_14(0x2b8d92fdb1d2a681);
  v54_0->set_f_4(0x23822cac);
  v54_0->add_f_24(Message2::M1::M15::M66::E27_CONST_2);
  v54_0->set_f_27(s->substr(0, 7));
  v54_0->set_f_13(true);
  v54_0->set_f_9(0x9fe);
  v54_0->set_f_26(0x6d2b9214814b84ab);
  Message2::M1::M32* v55 = v38->mutable_f_13();
  v55->set_f_0(0x9a934e8d887e86);
  message->set_f_18(true);
  message->set_f_5(0x1dfd6a56c9365c52);
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
}  // namespace fleetbench::rpc::P5::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE2_H_
