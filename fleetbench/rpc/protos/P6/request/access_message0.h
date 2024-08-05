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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/request/Message0.pb.h"

namespace fleetbench::rpc::P6::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_28(true);
  Message0::M3* v0 = message->mutable_f_50();
  v0->add_f_1(Message0::M3::E3_CONST_1);
  Message0::M3::M11* v1 = v0->mutable_f_3();
  v1->set_f_0(s->substr(0, 25));
  Message0::M1* v2_0 = message->add_f_47();
  v2_0->set_f_0(0x33);
  v2_0->set_f_1(s->substr(0, 6));
  Message0::M1::M9* v3 = v2_0->mutable_f_10();
  v3->set_f_4(s->substr(0, 1343));
  v3->set_f_0(Message0::M1::M9::E7_CONST_1);
  v3->set_f_5(0x79aa9);
  v3->set_f_6(0x52);
  v3->set_f_7(Message0::M1::M9::E9_CONST_4);
  v3->add_f_2(Message0::M1::M9::E8_CONST_4);
  v3->set_f_1(0x46e523c585cc1e2f);
  v2_0->set_f_2(0x52);
  v2_0->set_f_3(0x1009f98241ec4552);
  Message0::M1::M26* v4 = v2_0->mutable_f_13();
  v4->set_f_1(false);
  v4->set_f_0(0x6da9038f3ae38289);
  v4->set_f_2(s->substr(0, 21));
  Message0::M1::M34* v5 = v2_0->mutable_f_14();
  v5->set_f_0(0x553660d6da93e6d2);
  v5->set_f_4(0x28113436d5ba7fc5);
  v5->set_f_1(0x76);
  v5->set_f_2(0x69);
  message->set_f_7(true);
  message->set_f_4(0xd);
  message->set_f_26(0x24);
  message->set_f_5(Message0::E2_CONST_2);
  message->set_f_18(0x4a46482b61aa499a);
  message->set_f_14(0x291bf9c8649fbc13);
  message->set_f_25(0x465829fd2e0884cc);
  message->set_f_3(false);
  message->set_f_12(false);
  message->set_f_6(0x35cec67e77d1f4b5);
  message->set_f_11(0x1753153);
  Message0::M2* v6 = message->mutable_f_48();
  Message0::M2::M33* v7 = v6->mutable_f_8();
  v7->set_f_2(0x5a5f99d533225c67);
  v7->set_f_3(0x22ad101b3);
  v7->set_f_1(false);
  v7->set_f_4(Message0::M2::M33::E22_CONST_1);
  v7->set_f_0(0x33);
  Message0::M2::M31* v8 = v6->mutable_f_6();
  v8->set_f_1(0x70ae09b5ba5f1e10);
  v8->add_f_2(Message0::M2::M31::E21_CONST_2);
  v6->set_f_0(s->substr(0, 2));
  Message0::M2::M32* v9 = v6->mutable_f_7();
  v9->set_f_1(0x2d);
  v9->set_f_0(true);
  v6->set_f_1(0x2347a0d9);
  message->set_f_16(s->substr(0, 89));
  message->set_f_21(0x58a8865b6f);
  message->set_f_29(0x7235094526d54715);
  message->set_f_8(s->substr(0, 11));
  message->set_f_0(s->substr(0, 28));
  message->set_f_19(0x26);
  Message0::M6* v10 = message->mutable_f_53();
  v10->set_f_14(0x5f3c4354);
  v10->set_f_3(0xa41be);
  v10->set_f_8(0.462644);
  v10->set_f_11(0x31b6da82);
  v10->set_f_7(0x4910c1554f91787e);
  v10->set_f_5(0x38d5a48813b);
  Message0::M6::M13* v11 = v10->mutable_f_31();
  v11->set_f_2(Message0::M6::M13::E11_CONST_3);
  v11->set_f_0(0x1dbfe4da15e07164);
  v11->set_f_4(0x1657bd05249);
  v10->set_f_10(0x86c56);
  Message0::M6::M20* v12 = v10->mutable_f_32();
  v12->set_f_0(s->substr(0, 3));
  v10->set_f_2(true);
  v10->set_f_12(0x395404d5e5aed3a);
  v10->set_f_4(0x2a69bbdb9c7c9f1e);
  Message0::M6::M10* v13_0 = v10->add_f_28();
  v13_0->set_f_0(true);
  v13_0->set_f_2(0xa);
  v13_0->set_f_1(Message0::M6::M10::E10_CONST_2);
  v13_0->set_f_3(0x3160bf56d7552ccb);
  v10->set_f_6(s->substr(0, 20));
  v10->add_f_1(Message0::M6::E5_CONST_5);
  Message0::M6::M12* v14 = v10->mutable_f_29();
  v14->set_f_1(s->substr(0, 411));
  v14->set_f_0(0x4d978c20cbdfbee7);
  v14->set_f_2(s->substr(0, 484));
  v10->set_f_13(0x63533725906f5e63);
  v10->set_f_16(0x87849);
  v10->set_f_15(0x5f287190a664fb21);
  v10->set_f_17(0x4b0e268d);
  message->set_f_24(0x7c2ac);
  message->set_f_23(0x1);
  message->set_f_13(0x76);
  message->set_f_10(0x59);
  Message0::M4* v15_0 = message->add_f_51();
  Message0::M4::M30* v16 = v15_0->mutable_f_16();
  v16->set_f_0(Message0::M4::M30::E20_CONST_3);
  Message0::M4::M30::M35* v17_0 = v16->add_f_2();
  Message0::M4::M30::M35::M41* v18 = v17_0->mutable_f_7();
  v18->set_f_3(false);
  Message0::M4::M30::M35::M41::M49* v19_0 = v18->add_f_10();
  v19_0->set_f_0(0x227ef5b7e2a9db6c);
  v18->set_f_2(0x3);
  v18->set_f_1(s->substr(0, 195));
  v18->set_f_0(true);
  Message0::M4::M30::M35::M37* v20_0 = v17_0->add_f_5();
  v20_0->set_f_0(true);
  Message0::M4::M30::M35::M44* v21_0 = v17_0->add_f_9();
  v21_0->set_f_0(Message0::M4::M30::M35::M44::E25_CONST_3);
  v21_0->set_f_1(0x22);
  v17_0->set_f_0(0xa);
  v15_0->set_f_1(0x1337);
  v15_0->set_f_4(0x582326);
  Message0::M4::M22* v22 = v15_0->mutable_f_15();
  v22->set_f_1(0x66);
  v22->set_f_0(0x4aa37);
  v15_0->set_f_3(s->substr(0, 29));
  v15_0->set_f_2(true);
  Message0::M4::M8* v23 = v15_0->mutable_f_11();
  v23->set_f_3(0x5d);
  v23->set_f_1(0x7a341a563bbcd510);
  v23->set_f_2(true);
  v23->set_f_0(Message0::M4::M8::E6_CONST_5);
  Message0::M4::M14* v24 = v15_0->mutable_f_13();
  v24->set_f_0(0x1396f69);
  message->add_f_2(Message0::E1_CONST_1);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M6* v0 = message->mutable_f_53();
  v0->set_f_16(0x38518fb);
  v0->set_f_14(0x7fcffbf5);
  Message0::M6::M20* v1 = v0->mutable_f_32();
  v1->set_f_0(s->substr(0, 7));
  v0->add_f_1(Message0::M6::E5_CONST_3);
  v0->set_f_12(0x4d0c106e8847c6bf);
  Message0::M6::M10* v2_0 = v0->add_f_28();
  v2_0->set_f_0(true);
  v2_0->set_f_2(0x5b14761);
  v2_0->set_f_3(0x6be821337882bcb0);
  v0->set_f_2(false);
  v0->set_f_6(s->substr(0, 9));
  Message0::M6::M12* v3 = v0->mutable_f_29();
  v3->set_f_1(s->substr(0, 2));
  v0->set_f_4(0x8401ef89dc94174);
  Message0::M6::M13* v4 = v0->mutable_f_31();
  v4->set_f_0(0xcc7284375692008);
  v4->set_f_3(Message0::M6::M13::E12_CONST_3);
  v4->set_f_4(0x11609be861);
  v4->set_f_2(Message0::M6::M13::E11_CONST_1);
  v0->set_f_0(0xe7314e6);
  v0->set_f_13(0xa884627f907678);
  v0->set_f_10(0xf0b16);
  message->set_f_0(s->substr(0, 8));
  message->set_f_11(0xb93bf4e);
  message->set_f_4(0xc9b9104);
  message->set_f_5(Message0::E2_CONST_3);
  message->set_f_24(0x54);
  message->set_f_12(false);
  message->set_f_16(s->substr(0, 18));
  message->set_f_20(0x62);
  Message0::M1* v5_0 = message->add_f_47();
  Message0::M1::M16* v6 = v5_0->mutable_f_12();
  v6->set_f_0(Message0::M1::M16::E13_CONST_5);
  v6->set_f_1(Message0::M1::M16::E14_CONST_2);
  v6->set_f_2(s->substr(0, 5));
  Message0::M1::M7* v7_0 = v5_0->add_f_7();
  (void)v7_0;  // Suppresses clang-tidy.
  v5_0->set_f_3(0x7cd19075429aadf4);
  Message0::M1::M9* v8 = v5_0->mutable_f_10();
  v8->set_f_0(Message0::M1::M9::E7_CONST_2);
  v8->set_f_5(0x4354645);
  v8->set_f_4(s->substr(0, 11));
  v8->add_f_2(Message0::M1::M9::E8_CONST_4);
  v8->add_f_2(Message0::M1::M9::E8_CONST_4);
  v8->add_f_2(Message0::M1::M9::E8_CONST_2);
  v8->set_f_3(0x54be7c8c4bff46f7);
  Message0::M1::M34* v9 = v5_0->mutable_f_14();
  v9->set_f_3(0x1b1f7e);
  v9->set_f_4(0x54211763812e2009);
  v9->set_f_0(0x421e6b6171c84b44);
  v9->set_f_1(0x46);
  message->set_f_22(0x5797d24a6da0edb6);
  message->set_f_26(0x10c877);
  message->set_f_3(false);
  message->set_f_13(0x60);
  message->add_f_2(Message0::E1_CONST_3);
  message->set_f_14(0x2320ced3df6450a6);
  message->set_f_18(0x39ee471f4e3ee58);
  message->set_f_29(0x4a9ba434d9f37d7e);
  message->set_f_25(0x17bf43f0591f7241);
  message->set_f_6(0x70a93c7b4fd4605b);
  message->set_f_1(s->substr(0, 256));
  message->set_f_8(s->substr(0, 28));
  message->set_f_21(0x37de7b4e3fa);
  message->set_f_9(0.797990);
  Message0::M2* v10 = message->mutable_f_48();
  Message0::M2::M32* v11 = v10->mutable_f_7();
  v11->set_f_1(0x53);
  v10->set_f_0(s->substr(0, 55));
  v10->set_f_1(0x3199ebcb);
  Message0::M2::M31* v12 = v10->mutable_f_6();
  v12->set_f_1(0x523d2bb2937733b6);
  v12->set_f_0(0xec0861ee1017bb);
  v12->add_f_2(Message0::M2::M31::E21_CONST_3);
  message->set_f_7(false);
  message->set_f_15(0x2a9e3c7b56b7b3c6);
  message->set_f_23(0xf226f);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_15(0x735cedac7dec8865);
  message->set_f_8(s->substr(0, 21));
  Message0::M6* v0 = message->mutable_f_53();
  Message0::M6::M12* v1 = v0->mutable_f_29();
  v1->set_f_2(s->substr(0, 20));
  v1->set_f_1(s->substr(0, 208));
  v0->set_f_12(0x6d9b84c0abe07a2c);
  v0->set_f_11(0x7d72c3dd);
  v0->set_f_7(0x5f159592311f0cc5);
  v0->set_f_3(0x5a09346);
  Message0::M6::M20* v2 = v0->mutable_f_32();
  v2->set_f_0(s->substr(0, 5));
  v0->set_f_10(0x2760a1);
  v0->set_f_0(0x833cfed);
  Message0::M6::M10* v3_0 = v0->add_f_28();
  v3_0->set_f_3(0x1dff93fac40c2e00);
  v3_0->set_f_0(true);
  v0->set_f_17(0x74503028);
  v0->set_f_15(0xcae27aa8b451338);
  v0->set_f_8(0.788697);
  v0->set_f_16(0x1a3b4f);
  v0->set_f_2(true);
  v0->set_f_14(0x7b903ddd);
  v0->set_f_6(s->substr(0, 3013));
  v0->set_f_5(0x345384e34);
  Message0::M1* v4_0 = message->add_f_47();
  Message0::M1::M16* v5 = v4_0->mutable_f_12();
  v5->set_f_2(s->substr(0, 13));
  v5->set_f_1(Message0::M1::M16::E14_CONST_2);
  v4_0->set_f_2(0x68);
  v4_0->set_f_0(0x4f);
  Message0::M1::M26* v6 = v4_0->mutable_f_13();
  v6->set_f_1(true);
  v6->set_f_0(0x5bb6a1ff34a92652);
  Message0::M1::M7* v7_0 = v4_0->add_f_7();
  v7_0->set_f_0(0x43a338c6);
  message->set_f_0(s->substr(0, 3761));
  message->set_f_27(0x34e519861d0);
  message->set_f_11(0x41ccc9);
  message->set_f_17(0x3b7a);
  message->set_f_21(0x485a883e);
  message->set_f_9(0.264950);
  Message0::M2* v8 = message->mutable_f_48();
  v8->set_f_1(0x464e605e);
  Message0::M2::M33* v9 = v8->mutable_f_8();
  v9->set_f_1(false);
  v9->set_f_0(0x51);
  v9->set_f_2(0x2a8bef0cd9d7202e);
  v9->set_f_4(Message0::M2::M33::E22_CONST_3);
  Message0::M2::M32* v10 = v8->mutable_f_7();
  v10->set_f_1(0x7c);
  Message0::M2::M31* v11 = v8->mutable_f_6();
  v11->add_f_2(Message0::M2::M31::E21_CONST_1);
  v8->set_f_0(s->substr(0, 8));
  message->set_f_18(0x14d84cc8ccdbea9f);
  message->set_f_14(0x772aa15def37fe45);
  message->set_f_23(0x4e);
  message->set_f_13(0xbc83751);
  message->set_f_5(Message0::E2_CONST_1);
  message->set_f_19(0xfa9);
  Message0::M5* v12 = message->mutable_f_52();
  Message0::M5::M19* v13_0 = v12->add_f_6();
  v13_0->set_f_3(true);
  v13_0->set_f_2(s->substr(0, 3));
  v13_0->set_f_1(false);
  v13_0->set_f_0(s->substr(0, 2));
  v13_0->set_f_4(0x15);
  Message0::M5::M23* v14 = v12->mutable_f_7();
  v14->set_f_0(0x1c9aa0d0);
  Message0::M5::M17* v15 = v12->mutable_f_5();
  v15->set_f_0(0x2030210);
  Message0::M5::M27* v16 = v12->mutable_f_8();
  v16->set_f_2(0x10a94627);
  v16->set_f_6(true);
  v16->set_f_0(0x6265795ac5507cf8);
  v16->set_f_4(Message0::M5::M27::E18_CONST_5);
  v16->set_f_1(Message0::M5::M27::E16_CONST_2);
  v12->set_f_0(s->substr(0, 509));
  message->set_f_7(false);
  message->set_f_10(0x8);
  message->set_f_20(0x2a);
  Message0::M3* v17 = message->mutable_f_50();
  v17->set_f_0(0x73e59d2360306d91);
  Message0::M3::M25* v18 = v17->mutable_f_8();
  Message0::M3::M25::M36* v19 = v18->mutable_f_4();
  v19->set_f_7(s->substr(0, 128));
  Message0::M3::M25::M36::M38* v20_0 = v19->add_f_49();
  Message0::M3::M25::M36::M38::M50* v21_0 = v20_0->add_f_6();
  v21_0->set_f_0(0x2d);
  v21_0->set_f_2(0.244959);
  v21_0->set_f_3(Message0::M3::M25::M36::M38::M50::E34_CONST_5);
  v19->set_f_10(Message0::M3::M25::M36::E23_CONST_2);
  v19->set_f_16(0x4035eac);
  v19->set_f_28(s->substr(0, 2));
  v19->set_f_25(0xe2b8b);
  v19->set_f_21(true);
  Message0::M3::M25::M36::M45* v22 = v19->mutable_f_55();
  v22->set_f_16(false);
  v22->add_f_26(Message0::M3::M25::M36::M45::E31_CONST_2);
  v22->add_f_26(Message0::M3::M25::M36::M45::E31_CONST_5);
  v22->set_f_17(s->substr(0, 365));
  v22->set_f_24(Message0::M3::M25::M36::M45::E30_CONST_2);
  v22->set_f_23(0x7ffb523f555e6b2d);
  v22->set_f_13(true);
  v22->set_f_21(true);
  v22->set_f_2(0x72d424699a633847);
  v22->set_f_4(s->substr(0, 239));
  v22->set_f_25(s->substr(0, 8));
  v22->set_f_19(0x6a);
  v22->add_f_14(Message0::M3::M25::M36::M45::E28_CONST_5);
  v22->add_f_14(Message0::M3::M25::M36::M45::E28_CONST_2);
  v22->set_f_1(false);
  v22->set_f_20(0x70);
  v22->set_f_10(0x3983784);
  v22->set_f_15(0.825146);
  v22->set_f_11(s->substr(0, 393));
  v22->set_f_18(Message0::M3::M25::M36::M45::E29_CONST_5);
  v22->add_f_8(Message0::M3::M25::M36::M45::E27_CONST_3);
  v19->set_f_2(0x71);
  v19->set_f_14(0x168c53f3ceaa5072);
  v19->set_f_24(0x28ccd61a08864dda);
  v19->set_f_3(s->substr(0, 114));
  Message0::M3::M25::M36::M40* v23_0 = v19->add_f_51();
  v23_0->set_f_0(0x41);
  v23_0->set_f_1(0x27f401e2c);
  v23_0->set_f_2(Message0::M3::M25::M36::M40::E24_CONST_4);
  Message0::M3::M25::M36::M39* v24_0 = v19->add_f_50();
  v24_0->set_f_0(0x39fa8c41d2ac39d);
  v24_0->set_f_1(0x48);
  v19->set_f_27(s->substr(0, 2));
  v19->set_f_20(s->substr(0, 31));
  v19->set_f_19(0x3a065c4b7a614359);
  v19->set_f_23(0x5f93c0cf554754c8);
  v19->set_f_11(0.680577);
  v19->set_f_9(0x52);
  v19->set_f_12(0x79676ff);
  v19->set_f_26(0x7abd1599ba409a21);
  v19->set_f_8(0x1911943552c40f30);
  v18->set_f_0(0x3931721ad50993e2);
  Message0::M3::M18* v25 = v17->mutable_f_5();
  (void)v25;  // Suppresses clang-tidy.
  Message0::M3::M11* v26 = v17->mutable_f_3();
  (void)v26;  // Suppresses clang-tidy.
  v17->add_f_1(Message0::M3::E3_CONST_5);
  v17->add_f_1(Message0::M3::E3_CONST_4);
  Message0::M3::M29* v27 = v17->mutable_f_11();
  v27->set_f_1(0x5d5d03c2ac519b7b);
  Message0::M3::M29::E19 array_0[21] = {
      Message0::M3::M29::E19_CONST_4, Message0::M3::M29::E19_CONST_4,
      Message0::M3::M29::E19_CONST_3, Message0::M3::M29::E19_CONST_1,
      Message0::M3::M29::E19_CONST_1, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_3, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_3,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_3,
      Message0::M3::M29::E19_CONST_4, Message0::M3::M29::E19_CONST_2,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_3,
      Message0::M3::M29::E19_CONST_2,
  };
  for (auto v : array_0) {
    v27->add_f_0(v);
  }
  v27->set_f_4(0x241571f0153bd82c);
  v27->set_f_3(s->substr(0, 4));
  Message0::M3::M28* v28_0 = v17->add_f_9();
  v28_0->set_f_0(true);
  v28_0->set_f_1(0x2b350440);
  v28_0->set_f_2(0x767a26019bbbcfef);
  Message0::M4* v29_0 = message->add_f_51();
  v29_0->set_f_4(0x5);
  v29_0->set_f_3(s->substr(0, 8));
  Message0::M4::M22* v30 = v29_0->mutable_f_15();
  v30->set_f_0(0x1ac3d48);
  v30->set_f_1(0x3e);
  v29_0->set_f_0(0x25dd5);
  Message0::M4::M8* v31 = v29_0->mutable_f_11();
  v31->set_f_2(false);
  v31->set_f_0(Message0::M4::M8::E6_CONST_5);
  v31->set_f_1(0xea2d8eb6df03af7);
  message->set_f_22(0x225d8944f012a9f);
  message->set_f_26(0xea4e5d7);
  message->set_f_4(0x79);
  message->set_f_29(0x56eccb969cba97e9);
  message->set_f_12(true);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_27(0x49);
  message->set_f_8(s->substr(0, 113));
  message->set_f_22(0x50033ba53662626e);
  Message0::M3* v0 = message->mutable_f_50();
  Message0::M3::M28* v1_0 = v0->add_f_9();
  v1_0->set_f_1(0x3abd7cbe);
  v1_0->set_f_0(true);
  Message0::M3::M18* v2 = v0->mutable_f_5();
  v2->set_f_0(Message0::M3::M18::E15_CONST_1);
  Message0::M3::M29* v3 = v0->mutable_f_11();
  v3->set_f_5(false);
  v3->set_f_4(0x5aa7127740ca01e3);
  Message0::M3::M29::E19 array_0[20] = {
      Message0::M3::M29::E19_CONST_2, Message0::M3::M29::E19_CONST_1,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_4, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_1,
      Message0::M3::M29::E19_CONST_3, Message0::M3::M29::E19_CONST_1,
      Message0::M3::M29::E19_CONST_4, Message0::M3::M29::E19_CONST_5,
      Message0::M3::M29::E19_CONST_4, Message0::M3::M29::E19_CONST_3,
      Message0::M3::M29::E19_CONST_2, Message0::M3::M29::E19_CONST_2,
      Message0::M3::M29::E19_CONST_4, Message0::M3::M29::E19_CONST_3,
      Message0::M3::M29::E19_CONST_5, Message0::M3::M29::E19_CONST_4,
  };
  for (auto v : array_0) {
    v3->add_f_0(v);
  }
  v3->set_f_2(0x2d87ef6923753cb2);
  v3->set_f_3(s->substr(0, 19));
  v0->set_f_0(0x276a4cb58417a282);
  Message0::M3::E3 array_1[21] = {
      Message0::M3::E3_CONST_1, Message0::M3::E3_CONST_3,
      Message0::M3::E3_CONST_5, Message0::M3::E3_CONST_3,
      Message0::M3::E3_CONST_3, Message0::M3::E3_CONST_1,
      Message0::M3::E3_CONST_3, Message0::M3::E3_CONST_2,
      Message0::M3::E3_CONST_5, Message0::M3::E3_CONST_5,
      Message0::M3::E3_CONST_2, Message0::M3::E3_CONST_1,
      Message0::M3::E3_CONST_2, Message0::M3::E3_CONST_4,
      Message0::M3::E3_CONST_4, Message0::M3::E3_CONST_1,
      Message0::M3::E3_CONST_2, Message0::M3::E3_CONST_2,
      Message0::M3::E3_CONST_3, Message0::M3::E3_CONST_1,
      Message0::M3::E3_CONST_2,
  };
  for (auto v : array_1) {
    v0->add_f_1(v);
  }
  Message0::M3::M21* v4 = v0->mutable_f_7();
  v4->set_f_1(s->substr(0, 18));
  v4->set_f_0(0x50ef6d1cead25ab);
  v4->set_f_2(true);
  message->set_f_20(0x19505f);
  message->set_f_25(0x1a2fd108a6b4ca2a);
  message->set_f_0(s->substr(0, 1));
  message->set_f_26(0x2f);
  message->set_f_12(false);
  message->set_f_28(true);
  message->set_f_17(0x55c);
  message->set_f_15(0x1ad35ab259eb690f);
  Message0::M1* v5_0 = message->add_f_47();
  Message0::M1::M9* v6 = v5_0->mutable_f_10();
  v6->set_f_6(0x57);
  v6->set_f_4(s->substr(0, 15));
  v6->set_f_7(Message0::M1::M9::E9_CONST_2);
  v6->set_f_0(Message0::M1::M9::E7_CONST_2);
  v6->set_f_3(0x2159f59fbc208c9d);
  v5_0->set_f_1(s->substr(0, 18));
  Message0::M1::M16* v7 = v5_0->mutable_f_12();
  v7->set_f_1(Message0::M1::M16::E14_CONST_3);
  v7->set_f_2(s->substr(0, 225));
  Message0::M1::M7* v8_0 = v5_0->add_f_7();
  v8_0->set_f_0(0x87afac1);
  v5_0->set_f_2(0xc65f9ee);
  Message0::M1::M26* v9 = v5_0->mutable_f_13();
  v9->set_f_0(0x561f96cfd5d557e5);
  message->set_f_18(0x5c41d88583e4d42f);
  message->set_f_4(0x25c09e8);
  message->set_f_13(0xfdadb9e);
  message->set_f_9(0.373366);
  Message0::M5* v10 = message->mutable_f_52();
  v10->set_f_0(s->substr(0, 21));
  Message0::M5::M27* v11 = v10->mutable_f_8();
  v11->set_f_4(Message0::M5::M27::E18_CONST_3);
  v11->set_f_6(false);
  v11->add_f_3(Message0::M5::M27::E17_CONST_5);
  v11->set_f_5(s->substr(0, 100));
  Message0::M5::M15* v12 = v10->mutable_f_3();
  (void)v12;  // Suppresses clang-tidy.
  Message0::M5::M19* v13_0 = v10->add_f_6();
  v13_0->set_f_4(0xd9d3181);
  v13_0->set_f_3(false);
  v13_0->set_f_2(s->substr(0, 3));
  v13_0->set_f_1(false);
  v13_0->set_f_0(s->substr(0, 29));
  Message0::M5::M17* v14 = v10->mutable_f_5();
  v14->set_f_0(0x2d0a8);
  Message0::M5::M23* v15 = v10->mutable_f_7();
  (void)v15;  // Suppresses clang-tidy.
  Message0::M2* v16 = message->mutable_f_48();
  Message0::M2::M24* v17 = v16->mutable_f_5();
  v17->set_f_0(0x75285df1);
  Message0::M2::M32* v18 = v16->mutable_f_7();
  v18->set_f_0(true);
  v18->set_f_1(0xee28b9f);
  v16->set_f_0(s->substr(0, 10));
  Message0::M2::M33* v19 = v16->mutable_f_8();
  v19->set_f_3(0x297acc79128);
  v19->set_f_4(Message0::M2::M33::E22_CONST_5);
  v19->set_f_2(0x1523f39cdce54eb9);
  v19->set_f_1(true);
  v19->set_f_0(0x74);
  Message0::M2::M31* v20 = v16->mutable_f_6();
  v20->set_f_0(0x4dcdb0e9efc22c22);
  v16->set_f_1(0x93239b2);
  message->set_f_21(0x45);
  message->set_f_24(0x5315551);
  message->set_f_7(false);
  message->set_f_1(s->substr(0, 395));
  Message0::M4* v21_0 = message->add_f_51();
  Message0::M4::M30* v22 = v21_0->mutable_f_16();
  v22->set_f_0(Message0::M4::M30::E20_CONST_3);
  Message0::M4::M8* v23 = v21_0->mutable_f_11();
  v23->set_f_0(Message0::M4::M8::E6_CONST_1);
  v23->set_f_2(false);
  v23->set_f_1(0x1eb56ad379d9a8cb);
  v21_0->set_f_3(s->substr(0, 4));
  v21_0->set_f_0(0x39);
  v21_0->set_f_1(0x2a);
  Message0::M4::M22* v24 = v21_0->mutable_f_15();
  v24->set_f_0(0x16b9);
  v24->set_f_1(0xeb4b0);
  Message0::M4::M14* v25 = v21_0->mutable_f_13();
  (void)v25;  // Suppresses clang-tidy.
  v21_0->add_f_5(Message0::M4::E4_CONST_2);
  message->set_f_11(0x7c);
  message->set_f_14(0x752ab8d6b39c209a);
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
}  // namespace fleetbench::rpc::P6::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE0_H_
