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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message1.pb.h"

namespace fleetbench::rpc::P4::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_4(0x5bbbac99f6eda54c);
  message->set_f_14(Message1::E3_CONST_4);
  message->set_f_5(0x1c);
  Message1::M5* v0_0 = message->add_f_61();
  Message1::M5::M14* v1 = v0_0->mutable_f_50();
  v1->set_f_3(0x3f);
  v1->set_f_2(0x5fefd5d9);
  v1->add_f_1(Message1::M5::M14::E10_CONST_4);
  v1->set_f_4(0x1ade5e86dec4518d);
  v0_0->set_f_8(0x1d9bd7ef01af89ff);
  v0_0->set_f_16(0x6c5e2daf6c5253ae);
  v0_0->set_f_15(s->substr(0, 48));
  v0_0->set_f_21(0x36);
  v0_0->set_f_29(true);
  Message1::M5::E8 array_1[22] = {
      Message1::M5::E8_CONST_4, Message1::M5::E8_CONST_1,
      Message1::M5::E8_CONST_5, Message1::M5::E8_CONST_4,
      Message1::M5::E8_CONST_4, Message1::M5::E8_CONST_2,
      Message1::M5::E8_CONST_4, Message1::M5::E8_CONST_5,
      Message1::M5::E8_CONST_4, Message1::M5::E8_CONST_1,
      Message1::M5::E8_CONST_3, Message1::M5::E8_CONST_3,
      Message1::M5::E8_CONST_3, Message1::M5::E8_CONST_3,
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_3,
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_1,
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_1,
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_2,
  };
  for (auto v : array_1) {
    v0_0->add_f_26(v);
  }
  v0_0->set_f_25(0x41);
  v0_0->set_f_14(s->substr(0, 31));
  Message1::M5::M6* v2_0 = v0_0->add_f_48();
  v2_0->set_f_3(0x5e);
  v2_0->set_f_2(s->substr(0, 3720));
  v0_0->set_f_9(0x1fe3f5e21482025f);
  v0_0->set_f_20(0.240678);
  v0_0->set_f_10(0x2a9b884958988e04);
  v0_0->set_f_24(0x4912fe3a741fbbd0);
  v0_0->set_f_6(false);
  v0_0->set_f_18(s->substr(0, 17));
  Message1::M5::M15* v3 = v0_0->mutable_f_52();
  Message1::M5::M15::M18* v4_0 = v3->add_f_8();
  v4_0->set_f_0(0xf9f6e98786eb058);
  Message1::M5::M15::M18::M27* v5 = v4_0->mutable_f_10();
  v5->set_f_0(false);
  v5->set_f_2(0x2bdaee42ab13be46);
  v5->set_f_1(0.083661);
  v4_0->set_f_4(0x461587b1b15a594b);
  v4_0->set_f_2(Message1::M5::M15::M18::E15_CONST_5);
  v4_0->set_f_5(0xf9272086f726cf5);
  v4_0->set_f_3(0x76);
  Message1::M5::M15::M20* v6 = v3->mutable_f_9();
  v6->set_f_0(0x480502);
  v3->set_f_2(s->substr(0, 8));
  v3->set_f_0(s->substr(0, 214));
  v3->set_f_3(0x4a9afc0ecbe8a6a1);
  v3->set_f_1(0x57abd15735fdad33);
  v0_0->set_f_22(0x652d04c131205a03);
  v0_0->set_f_7(s->substr(0, 57));
  v0_0->set_f_27(s->substr(0, 4));
  v0_0->set_f_23(false);
  v0_0->set_f_28(0x32);
  v0_0->set_f_13(true);
  v0_0->set_f_0(false);
  v0_0->set_f_19(Message1::M5::E7_CONST_4);
  v0_0->set_f_2(0x41);
  v0_0->set_f_3(0xa3ff1fb);
  message->set_f_17(0x3fccbc1a3069150a);
  message->set_f_16(0x72fda6a);
  message->set_f_7(0x2d30a8a);
  message->set_f_0(0x63);
  message->add_f_25(Message1::E4_CONST_1);
  message->set_f_8(0x46);
  message->set_f_21(true);
  message->set_f_10(0x7b8357aaa19c4d17);
  message->add_f_1(Message1::E1_CONST_2);
  message->set_f_26(0.830755);
  Message1::M1* v7 = message->mutable_f_56();
  v7->set_f_1(0x7a);
  v7->set_f_0(true);
  message->set_f_12(Message1::E2_CONST_4);
  message->set_f_29(s->substr(0, 3));
  message->set_f_22(0x27);
  Message1::M4* v8 = message->mutable_f_59();
  v8->set_f_2(0x544e143);
  v8->set_f_3(s->substr(0, 14));
  v8->set_f_5(false);
  message->set_f_11(s->substr(0, 21));
  message->set_f_28(0x7bd2dc3e54029c85);
  Message1::M2* v9 = message->mutable_f_57();
  v9->set_f_4(s->substr(0, 22));
  v9->set_f_5(0x7f134526ef524fba);
  v9->set_f_2(s->substr(0, 15));
  Message1::M2::M8* v10 = v9->mutable_f_10();
  (void)v10;  // Suppresses clang-tidy.
  Message1::M2::M7* v11 = v9->mutable_f_8();
  v11->set_f_6(0x3f);
  v11->set_f_5(0x74a06bb8bcfc0051);
  v11->set_f_3(0x13969);
  v11->set_f_0(s->substr(0, 21));
  Message1::M2::M10* v12 = v9->mutable_f_11();
  v12->set_f_1(0x244e774f09e23831);
  v9->set_f_1(true);
  Message1::M2::E5 array_2[21] = {
      Message1::M2::E5_CONST_1, Message1::M2::E5_CONST_4,
      Message1::M2::E5_CONST_2, Message1::M2::E5_CONST_3,
      Message1::M2::E5_CONST_2, Message1::M2::E5_CONST_2,
      Message1::M2::E5_CONST_1, Message1::M2::E5_CONST_4,
      Message1::M2::E5_CONST_3, Message1::M2::E5_CONST_2,
      Message1::M2::E5_CONST_4, Message1::M2::E5_CONST_4,
      Message1::M2::E5_CONST_3, Message1::M2::E5_CONST_4,
      Message1::M2::E5_CONST_1, Message1::M2::E5_CONST_5,
      Message1::M2::E5_CONST_5, Message1::M2::E5_CONST_3,
      Message1::M2::E5_CONST_5, Message1::M2::E5_CONST_4,
      Message1::M2::E5_CONST_2,
  };
  for (auto v : array_2) {
    v9->add_f_0(v);
  }
  message->set_f_23(0x663c955);
  Message1::M3* v13 = message->mutable_f_58();
  v13->set_f_0(0x6656e4c95);
  message->set_f_15(0x6450efd18db8c3d7);
  message->set_f_6(0xc2be4f3);
  message->set_f_18(0x3af1e4ac);
  message->set_f_2(0.546344);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_3(0.898338);
  message->add_f_25(Message1::E4_CONST_2);
  message->set_f_21(false);
  message->set_f_0(0x16);
  message->set_f_15(0x60465fc04c31cc79);
  Message1::M4* v0 = message->mutable_f_59();
  v0->set_f_5(true);
  v0->set_f_0(s->substr(0, 2695));
  v0->set_f_2(0x3e81);
  v0->set_f_3(s->substr(0, 8));
  Message1::M4::M12* v1 = v0->mutable_f_9();
  v1->add_f_4(Message1::M4::M12::E9_CONST_1);
  v1->set_f_3(0x3b5ff1226af38dbc);
  v1->set_f_2(s->substr(0, 7));
  v1->set_f_0(0xabc8fd620d34dbf);
  v0->set_f_1(0x7b051bc3);
  message->set_f_6(0x3076);
  message->set_f_23(0x62b4312);
  Message1::M2* v2 = message->mutable_f_57();
  v2->set_f_1(false);
  Message1::M2::M8* v3 = v2->mutable_f_10();
  (void)v3;  // Suppresses clang-tidy.
  Message1::M2::M7* v4 = v2->mutable_f_8();
  v4->set_f_2(0x3f90);
  v4->set_f_1(false);
  v4->set_f_3(0x29312);
  Message1::M2::M10* v5 = v2->mutable_f_11();
  v5->set_f_0(0xe68e6eb);
  v2->add_f_0(Message1::M2::E5_CONST_5);
  v2->set_f_4(s->substr(0, 57));
  v2->set_f_5(0x7c2ed63866938fe1);
  v2->set_f_3(0x4ba6e2161);
  v2->set_f_2(s->substr(0, 23));
  message->set_f_5(0x14920d);
  message->set_f_20(0.811598);
  Message1::M5* v6_0 = message->add_f_61();
  v6_0->set_f_6(true);
  v6_0->set_f_25(0x59);
  v6_0->set_f_12(s->substr(0, 400));
  v6_0->set_f_8(0x4affde74e42bfca2);
  v6_0->set_f_23(false);
  Message1::M5::M15* v7 = v6_0->mutable_f_52();
  v7->set_f_1(0x7d6942e47112fd64);
  v7->set_f_0(s->substr(0, 51));
  Message1::M5::M15::M20* v8 = v7->mutable_f_9();
  v8->set_f_0(0x44db925);
  v7->set_f_2(s->substr(0, 16));
  v6_0->set_f_29(true);
  v6_0->set_f_2(0x1f);
  v6_0->set_f_27(s->substr(0, 55));
  v6_0->set_f_21(0x16);
  v6_0->set_f_18(s->substr(0, 1648));
  v6_0->set_f_5(s->substr(0, 29));
  v6_0->set_f_16(0x1315e60104572236);
  v6_0->set_f_13(true);
  v6_0->set_f_24(0x28342a3288395954);
  v6_0->set_f_10(0x48213dad9c6be476);
  Message1::M5::M6* v9_0 = v6_0->add_f_48();
  v9_0->set_f_3(0x758c6f6);
  v9_0->set_f_1(0.357398);
  v9_0->set_f_2(s->substr(0, 42));
  v9_0->set_f_0(0x22);
  v6_0->set_f_17(0.026105);
  v6_0->set_f_3(0x23);
  v6_0->set_f_22(0x6ee5ee7b19868214);
  v6_0->set_f_15(s->substr(0, 5));
  v6_0->set_f_0(false);
  v6_0->set_f_9(0x63181ca3b0b4f3f2);
  v6_0->set_f_14(s->substr(0, 2));
  v6_0->add_f_26(Message1::M5::E8_CONST_5);
  v6_0->set_f_19(Message1::M5::E7_CONST_1);
  v6_0->set_f_28(0x54);
  message->set_f_12(Message1::E2_CONST_5);
  message->set_f_4(0x65843e9fd0d2c28a);
  message->set_f_29(s->substr(0, 20));
  message->set_f_13(false);
  message->set_f_17(0x93b82fbb6f40a36);
  message->set_f_19(0x552);
  message->set_f_7(0x26);
  message->set_f_24(0xc4262);
  message->set_f_28(0x41840cbad677cf8c);
  message->set_f_10(0x6da1c88269289c56);
  Message1::M3* v10 = message->mutable_f_58();
  Message1::M3::M9* v11 = v10->mutable_f_3();
  v11->set_f_0(s->substr(0, 8));
  Message1::M3::M9::M21* v12 = v11->mutable_f_3();
  v12->set_f_4(s->substr(0, 12));
  v12->set_f_3(0x1a);
  Message1::M3::M9::M21::M29* v13 = v12->mutable_f_10();
  Message1::M3::M9::M21::M29::E21 array_0[16] = {
      Message1::M3::M9::M21::M29::E21_CONST_5,
      Message1::M3::M9::M21::M29::E21_CONST_3,
      Message1::M3::M9::M21::M29::E21_CONST_5,
      Message1::M3::M9::M21::M29::E21_CONST_2,
      Message1::M3::M9::M21::M29::E21_CONST_3,
      Message1::M3::M9::M21::M29::E21_CONST_3,
      Message1::M3::M9::M21::M29::E21_CONST_5,
      Message1::M3::M9::M21::M29::E21_CONST_5,
      Message1::M3::M9::M21::M29::E21_CONST_4,
      Message1::M3::M9::M21::M29::E21_CONST_3,
      Message1::M3::M9::M21::M29::E21_CONST_2,
      Message1::M3::M9::M21::M29::E21_CONST_2,
      Message1::M3::M9::M21::M29::E21_CONST_5,
      Message1::M3::M9::M21::M29::E21_CONST_3,
      Message1::M3::M9::M21::M29::E21_CONST_2,
      Message1::M3::M9::M21::M29::E21_CONST_4,
  };
  for (auto v : array_0) {
    v13->add_f_0(v);
  }
  v13->set_f_2(0x14ee6d2);
  v13->add_f_3(Message1::M3::M9::M21::M29::E22_CONST_5);
  v12->set_f_0(true);
  v12->set_f_2(0x398e96fa131f3dc4);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_18(0x25476e54);
  message->set_f_8(0xbd6cfa9);
  message->set_f_4(0x635345322a2860a4);
  message->set_f_17(0x26fa4495c013074f);
  Message1::M5* v0_0 = message->add_f_61();
  v0_0->set_f_5(s->substr(0, 138));
  v0_0->set_f_18(s->substr(0, 2677));
  v0_0->set_f_19(Message1::M5::E7_CONST_3);
  v0_0->set_f_14(s->substr(0, 82));
  v0_0->set_f_22(0x407528812e795e85);
  v0_0->set_f_1(0x6e7fc89b79f1c527);
  v0_0->set_f_28(0x403);
  Message1::M5::M15* v1 = v0_0->mutable_f_52();
  v1->set_f_3(0x3ce3f35f4524900a);
  v1->set_f_2(s->substr(0, 1));
  Message1::M5::M15::M18* v2_0 = v1->add_f_8();
  v2_0->set_f_2(Message1::M5::M15::M18::E15_CONST_4);
  v2_0->set_f_3(0x50);
  v2_0->set_f_1(false);
  v2_0->set_f_4(0x38f23dbf4532d032);
  v1->set_f_0(s->substr(0, 7));
  Message1::M5::M15::M20* v3 = v1->mutable_f_9();
  v3->set_f_0(0x2c);
  v1->set_f_1(0x7153cad1c5818a9f);
  v0_0->set_f_17(0.951977);
  v0_0->set_f_29(false);
  v0_0->set_f_11(0x3e96b95529d58b94);
  v0_0->set_f_23(false);
  Message1::M5::M6* v4_0 = v0_0->add_f_48();
  v4_0->set_f_1(0.876136);
  v4_0->set_f_3(0xa);
  Message1::M5::M14* v5 = v0_0->mutable_f_50();
  v5->set_f_3(0x13);
  v5->set_f_0(0x539dbc86c7c859a2);
  v5->add_f_1(Message1::M5::M14::E10_CONST_5);
  v5->set_f_2(0xbf271d7);
  v0_0->set_f_10(0x291e87236120bb7a);
  v0_0->set_f_16(0x1b6f5cf3831162ce);
  v0_0->set_f_0(false);
  v0_0->set_f_20(0.279299);
  v0_0->set_f_24(0x62245843dff9f45d);
  Message1::M5::E8 array_0[21] = {
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_5,
      Message1::M5::E8_CONST_5, Message1::M5::E8_CONST_4,
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_3,
      Message1::M5::E8_CONST_4, Message1::M5::E8_CONST_4,
      Message1::M5::E8_CONST_1, Message1::M5::E8_CONST_5,
      Message1::M5::E8_CONST_2, Message1::M5::E8_CONST_4,
      Message1::M5::E8_CONST_5, Message1::M5::E8_CONST_4,
      Message1::M5::E8_CONST_4, Message1::M5::E8_CONST_5,
      Message1::M5::E8_CONST_3, Message1::M5::E8_CONST_4,
      Message1::M5::E8_CONST_5, Message1::M5::E8_CONST_5,
      Message1::M5::E8_CONST_4,
  };
  for (auto v : array_0) {
    v0_0->add_f_26(v);
  }
  v0_0->set_f_3(0x14);
  v0_0->set_f_25(0x19041e);
  v0_0->set_f_13(false);
  v0_0->set_f_9(0x46242e16a89a0648);
  v0_0->set_f_8(0x49940277cf144d0a);
  v0_0->set_f_7(s->substr(0, 3823));
  v0_0->set_f_12(s->substr(0, 383));
  v0_0->set_f_27(s->substr(0, 15));
  v0_0->set_f_2(0x6e);
  message->set_f_13(false);
  message->set_f_12(Message1::E2_CONST_3);
  message->set_f_26(0.029661);
  message->set_f_23(0x6454826);
  message->set_f_20(0.536297);
  message->set_f_0(0x169851);
  message->set_f_16(0x167e);
  message->add_f_1(Message1::E1_CONST_5);
  Message1::M3* v6 = message->mutable_f_58();
  Message1::M3::M9* v7 = v6->mutable_f_3();
  Message1::M3::M9::M22* v8 = v7->mutable_f_4();
  v8->set_f_15(false);
  v8->set_f_11(true);
  Message1::M3::M9::M22::M24* v9 = v8->mutable_f_45();
  v9->set_f_0(true);
  v9->set_f_3(s->substr(0, 30));
  v9->set_f_2(0x1fd5b5f274f1a62d);
  v8->set_f_8(true);
  v8->set_f_16(false);
  v8->set_f_14(0x7925dfee8736895c);
  v8->set_f_26(true);
  v8->set_f_5(s->substr(0, 1772));
  v8->set_f_31(true);
  v8->set_f_24(0x57);
  v8->set_f_27(0.710942);
  v8->set_f_6(0x38);
  v8->add_f_12(Message1::M3::M9::M22::E19_CONST_4);
  v8->set_f_29(s->substr(0, 33));
  v8->set_f_10(0x3d);
  v8->set_f_25(Message1::M3::M9::M22::E20_CONST_2);
  v8->set_f_23(true);
  v8->set_f_9(0x143fd38);
  v8->set_f_18(s->substr(0, 5));
  v8->set_f_3(0x5d4a0b889);
  Message1::M3::M9::M22::M23* v10 = v8->mutable_f_43();
  v10->set_f_1(true);
  v10->set_f_0(0x2);
  v10->set_f_2(0x30e809e0d169bcc9);
  v8->set_f_4(0x9e23d90b6af0f8);
  v8->set_f_22(0xda27771a861453b);
  v8->set_f_20(0xdf17bee);
  v8->set_f_17(0xb22ce580c210ffd);
  v8->set_f_1(0x1a);
  v8->set_f_13(0xf3d81919d5ffc65);
  v8->set_f_7(0x4616cb3a58299ca8);
  v8->set_f_19(0x9e19751);
  Message1::M3::M9::M21* v11 = v7->mutable_f_3();
  Message1::M3::M9::M21::M29* v12 = v11->mutable_f_10();
  v12->set_f_2(0x3b);
  v12->add_f_0(Message1::M3::M9::M21::M29::E21_CONST_5);
  v12->add_f_3(Message1::M3::M9::M21::M29::E22_CONST_5);
  v11->set_f_2(0x469eb4224fd77bca);
  v11->set_f_4(s->substr(0, 125));
  v11->set_f_0(false);
  v11->set_f_1(0xa9d43b);
  v6->set_f_0(0x48);
  message->add_f_25(Message1::E4_CONST_2);
  message->add_f_25(Message1::E4_CONST_5);
  Message1::M2* v13 = message->mutable_f_57();
  Message1::M2::M10* v14 = v13->mutable_f_11();
  v14->set_f_1(0x41de1f67d42bbe8a);
  v14->set_f_0(0xd8da8cd);
  v13->set_f_4(s->substr(0, 22));
  v13->add_f_0(Message1::M2::E5_CONST_3);
  v13->set_f_1(false);
  v13->set_f_3(0x5b);
  Message1::M2::M8* v15 = v13->mutable_f_10();
  v15->set_f_0(s->substr(0, 16));
  Message1::M2::M7* v16 = v13->mutable_f_8();
  v16->set_f_2(0xeca9c3f);
  v16->set_f_5(0x47ab6f83d100f4eb);
  v16->set_f_3(0x1bd163);
  v16->set_f_6(0xa);
  v16->set_f_1(true);
  v16->set_f_0(s->substr(0, 456));
  v16->set_f_4(s->substr(0, 10));
  v13->set_f_5(0x2dcb11bc2a9e032f);
  v13->set_f_2(s->substr(0, 337));
  message->set_f_22(0x27);
  message->set_f_2(0.947345);
  Message1::M4* v17 = message->mutable_f_59();
  v17->set_f_0(s->substr(0, 406));
  v17->set_f_1(0x7f18b12c);
  v17->add_f_4(Message1::M4::E6_CONST_2);
  Message1::M4::M12* v18 = v17->mutable_f_9();
  v18->set_f_3(0xb60e433f24c1407);
  v18->set_f_0(0x7f74074ca8df9c20);
  v17->set_f_3(s->substr(0, 18));
  v17->set_f_2(0x2d54ff0);
  message->set_f_24(0x19);
  message->set_f_6(0x9);
  message->set_f_29(s->substr(0, 21));
  message->set_f_7(0xca86f05);
  message->set_f_27(0x1d56cd33eca7cb0b);
  message->set_f_14(Message1::E3_CONST_3);
  message->set_f_3(0.952890);
  message->set_f_5(0x1a25);
  message->set_f_10(0x38d492e6e867070a);
  message->set_f_11(s->substr(0, 23));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_3(0.225058);
  message->set_f_17(0x37e1e918a12cc21f);
  message->set_f_29(s->substr(0, 1));
  message->set_f_7(0xa6c82d2);
  message->set_f_24(0x19f4);
  message->set_f_23(0x7762c48);
  message->set_f_6(0x5b);
  message->set_f_18(0x40d2e4c1);
  Message1::E4 array_0[21] = {
      Message1::E4_CONST_3, Message1::E4_CONST_3, Message1::E4_CONST_1,
      Message1::E4_CONST_3, Message1::E4_CONST_1, Message1::E4_CONST_3,
      Message1::E4_CONST_2, Message1::E4_CONST_1, Message1::E4_CONST_1,
      Message1::E4_CONST_5, Message1::E4_CONST_4, Message1::E4_CONST_4,
      Message1::E4_CONST_3, Message1::E4_CONST_1, Message1::E4_CONST_2,
      Message1::E4_CONST_4, Message1::E4_CONST_1, Message1::E4_CONST_4,
      Message1::E4_CONST_2, Message1::E4_CONST_3, Message1::E4_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_25(v);
  }
  Message1::M1* v0 = message->mutable_f_56();
  v0->set_f_1(0x973);
  Message1::M1::M13* v1 = v0->mutable_f_6();
  v1->set_f_2(0x1d34c8b5afba62c7);
  v1->set_f_1(0x45138779fc29af82);
  v1->set_f_3(0.239784);
  v1->set_f_0(0x76511119584852de);
  Message1::M1::M16* v2 = v0->mutable_f_7();
  v2->set_f_25(0x5c);
  v2->set_f_11(false);
  v2->set_f_4(0xaf129ba);
  v2->set_f_18(s->substr(0, 19));
  v2->set_f_15(s->substr(0, 2));
  v2->set_f_8(s->substr(0, 46));
  v2->set_f_7(0x42f581afb67d1112);
  v2->set_f_16(0x7018020dd19efaaa);
  v2->set_f_3(0x5d42bcf4c15b306d);
  Message1::M1::M16::M17* v3 = v2->mutable_f_50();
  Message1::M1::M16::M17::M28* v4_0 = v3->add_f_4();
  v4_0->set_f_0(0x586121a8);
  v3->add_f_0(Message1::M1::M16::M17::E14_CONST_2);
  v2->set_f_12(0x71);
  v2->set_f_23(true);
  v2->set_f_14(Message1::M1::M16::E11_CONST_5);
  v2->set_f_22(s->substr(0, 27));
  v2->set_f_27(true);
  v2->set_f_17(0.250513);
  v2->set_f_32(0x44140b8);
  v2->set_f_20(0x69);
  v2->set_f_5(0x7c);
  v2->add_f_28(Message1::M1::M16::E13_CONST_4);
  v2->set_f_10(0x5144e3fe);
  v2->set_f_29(s->substr(0, 24478));
  v2->set_f_2(s->substr(0, 32));
  v2->set_f_24(0x6be9b);
  v0->set_f_0(false);
  message->set_f_9(s->substr(0, 3));
  message->set_f_14(Message1::E3_CONST_5);
  message->set_f_10(0x63ef798ed40a6f52);
  message->set_f_11(s->substr(0, 15));
  message->set_f_21(false);
  message->set_f_13(false);
  message->set_f_12(Message1::E2_CONST_2);
  message->set_f_8(0x8662b51);
  message->set_f_26(0.058146);
  message->set_f_20(0.204296);
  Message1::M2* v5 = message->mutable_f_57();
  v5->set_f_5(0x4d6c7f6d9030cc94);
  Message1::M2::M7* v6 = v5->mutable_f_8();
  v6->set_f_4(s->substr(0, 19));
  v6->set_f_1(true);
  v6->set_f_3(0x62672b1);
  v6->set_f_5(0x680639857857ff5e);
  v6->set_f_0(s->substr(0, 189));
  v5->set_f_1(false);
  v5->add_f_0(Message1::M2::E5_CONST_2);
  Message1::M2::M8* v7 = v5->mutable_f_10();
  (void)v7;  // Suppresses clang-tidy.
  v5->set_f_3(0x6b3e4de65);
  v5->set_f_4(s->substr(0, 185));
  message->set_f_19(0x213e);
  message->add_f_1(Message1::E1_CONST_1);
  message->set_f_28(0x44b57118a393c0b1);
  message->set_f_2(0.923034);
  message->set_f_22(0x2a);
  message->set_f_16(0x11);
  message->set_f_4(0x5b200767a6c606df);
  message->set_f_0(0x43);
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
}  // namespace fleetbench::rpc::P4::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE1_H_
