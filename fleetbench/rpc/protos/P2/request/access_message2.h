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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P2/request/Message2.pb.h"

namespace fleetbench::rpc::P2::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_14(0x784a16dcdcc5af3b);
  message->set_f_10(0x66510725ef9584f0);
  message->set_f_22(0x1f);
  Message2::M3* v0_0 = message->add_f_61();
  Message2::M3::M11* v1_0 = v0_0->add_f_3();
  v1_0->set_f_1(0xa2e149e);
  v1_0->set_f_3(s->substr(0, 18));
  v1_0->set_f_4(s->substr(0, 2));
  v1_0->set_f_2(0.969004);
  v1_0->set_f_0(s->substr(0, 11));
  Message2::M3::M10* v2 = v0_0->mutable_f_2();
  v2->set_f_1(0x16);
  v2->set_f_0(s->substr(0, 20));
  Message2::M3::M10::M29* v3 = v2->mutable_f_5();
  v3->set_f_0(true);
  message->add_f_28(Message2::E4_CONST_2);
  message->set_f_23(s->substr(0, 2541));
  message->set_f_21(0x68c445d1e97befbf);
  message->set_f_4(s->substr(0, 24));
  message->set_f_13(s->substr(0, 2));
  message->set_f_29(0.196907);
  message->set_f_12(0x20fb2bdf8);
  message->set_f_2(0x362dd5e964e38f23);
  Message2::M2* v4 = message->mutable_f_58();
  v4->set_f_1(0x3c63);
  v4->set_f_5(0x73);
  v4->set_f_3(0x1c7d07665dfdb7b);
  Message2::M2::M9* v5 = v4->mutable_f_16();
  v5->set_f_8(0x7b9e47fb);
  v5->set_f_5(true);
  v5->set_f_1(0x8fef9d1aefe204);
  v5->set_f_20(true);
  v5->set_f_27(s->substr(0, 1));
  v5->set_f_23(Message2::M2::M9::E8_CONST_4);
  v5->set_f_21(0x1970);
  v5->set_f_29(0x238d148bb90a2327);
  v5->set_f_3(0x2780a55ca1c);
  v5->set_f_13(0x320922ebff575f25);
  v5->set_f_10(0x40);
  v5->set_f_2(0x61c97c0c527f64bd);
  v5->set_f_30(0x3dd6e3993d00737f);
  v5->set_f_19(0.458126);
  v5->set_f_0(false);
  v5->set_f_22(s->substr(0, 108));
  v5->set_f_6(0x42);
  v5->set_f_18(0.574882);
  v5->set_f_12(0x40073d7ccf7aa3b7);
  v5->add_f_15(Message2::M2::M9::E7_CONST_5);
  v4->set_f_6(s->substr(0, 4));
  v4->set_f_2(s->substr(0, 32));
  message->add_f_20(Message2::E1_CONST_5);
  message->set_f_19(0x12dd);
  message->set_f_26(Message2::E3_CONST_4);
  Message2::M1* v6 = message->mutable_f_56();
  Message2::M1::M8* v7 = v6->mutable_f_3();
  (void)v7;  // Suppresses clang-tidy.
  Message2::M1::M13* v8 = v6->mutable_f_4();
  Message2::M1::M13::M27* v9 = v8->mutable_f_4();
  v9->set_f_1(0x3b0dd49bf3c749d7);
  v9->set_f_0(0x37cc60ff04ee578b);
  v9->set_f_2(0x71e53e411d78a553);
  Message2::M1::M13::M34* v10 = v8->mutable_f_5();
  v10->set_f_1(0x174862e4);
  v10->set_f_3(0x14c056f4c09b6def);
  v10->set_f_0(true);
  v10->set_f_2(0x70ff156710);
  v10->set_f_6(0x53);
  Message2::M1::M13::M20* v11 = v8->mutable_f_3();
  v11->set_f_1(0x7c21550ff49a0f5a);
  v11->set_f_2(0x2fd3);
  v11->set_f_0(s->substr(0, 22));
  v8->set_f_0(0x39fa1e3b803622c8);
  Message2::M1::E5 array_1[8] = {
      Message2::M1::E5_CONST_5, Message2::M1::E5_CONST_3,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_3,
      Message2::M1::E5_CONST_2, Message2::M1::E5_CONST_4,
      Message2::M1::E5_CONST_1, Message2::M1::E5_CONST_2,
  };
  for (auto v : array_1) {
    v6->add_f_1(v);
  }
  v6->set_f_0(0.573188);
  Message2::M4* v12 = message->mutable_f_62();
  v12->set_f_0(true);
  message->set_f_15(0x45);
  message->set_f_1(0x53815cf);
  message->set_f_0(false);
  message->set_f_16(0x21f847bd682ace1c);
  Message2::M6* v13 = message->mutable_f_65();
  Message2::M6::M15* v14 = v13->mutable_f_9();
  v14->set_f_4(0x20149c9b80e1dd4d);
  v14->set_f_13(s->substr(0, 4));
  v14->set_f_0(0x60);
  v14->set_f_3(0x2ae31c);
  v14->set_f_14(0x2d);
  v14->set_f_18(0x4e8db51edb0b8d58);
  v14->set_f_19(0.115482);
  v14->set_f_16(Message2::M6::M15::E10_CONST_5);
  Message2::M6::M15::M24* v15_0 = v14->add_f_35();
  (void)v15_0;  // Suppresses clang-tidy.
  v14->set_f_2(0x121201f7d6ab1b5d);
  v14->set_f_7(0x405e4dff);
  v14->set_f_12(0x3e5e264e58f935dc);
  v14->set_f_5(true);
  v14->set_f_1(0x13c9b6a9119865bc);
  v14->set_f_6(s->substr(0, 32));
  v14->set_f_17(0x484b78688146b652);
  v14->set_f_9(0x1200fcd54498e5e0);
  v14->set_f_20(0x3ad1831304a9f560);
  Message2::M6::M12* v16_0 = v13->add_f_5();
  v16_0->set_f_0(false);
  Message2::M6::M12::M32* v17_0 = v16_0->add_f_6();
  v17_0->set_f_4(s->substr(0, 432));
  v17_0->set_f_0(0x324ea15f90be4548);
  v17_0->set_f_2(true);
  v17_0->set_f_1(true);
  Message2::M6::M12::M28* v18 = v16_0->mutable_f_5();
  v18->set_f_1(s->substr(0, 70));
  v18->set_f_5(0x7f4dace378bc757e);
  v18->set_f_2(s->substr(0, 22));
  v18->set_f_0(0x352fa674062da6c9);
  v18->set_f_3(s->substr(0, 5));
  v13->set_f_0(s->substr(0, 5));
  Message2::M6::M14* v19 = v13->mutable_f_7();
  v19->set_f_4(true);
  v19->set_f_0(0x6eb1a1c);
  v19->set_f_3(0x69dba12aba6480ef);
  v19->set_f_1(s->substr(0, 4));
  message->set_f_9(0x29fd816d1a8);
  message->set_f_7(0x4fb252a4);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_7(0x3288deaa);
  message->set_f_8(0x50);
  message->set_f_12(0x4a1808720);
  message->set_f_11(s->substr(0, 5));
  Message2::M6* v0 = message->mutable_f_65();
  Message2::M6::M15* v1 = v0->mutable_f_9();
  v1->set_f_6(s->substr(0, 25));
  v1->set_f_2(0xef726d4b16790f2);
  v1->set_f_4(0x362b83cf2265ba24);
  v1->set_f_8(s->substr(0, 336));
  v1->set_f_11(0x274a4b50537a4f23);
  v1->set_f_16(Message2::M6::M15::E10_CONST_2);
  v1->set_f_9(0x15020a9f956330d9);
  v1->set_f_5(true);
  v1->set_f_7(0x2a7ee12);
  v1->set_f_10(s->substr(0, 4));
  v1->set_f_20(0x3f693cfacd52f11d);
  v1->set_f_18(0x2f251cd607d8810);
  v1->set_f_15(s->substr(0, 21));
  v1->set_f_14(0x309b);
  Message2::M6::M15::M24* v2_0 = v1->add_f_35();
  v2_0->set_f_0(0x2029fe23);
  v1->set_f_0(0x26fe);
  v1->set_f_19(0.893373);
  v1->set_f_1(0x30a19b687ae310fb);
  v0->set_f_0(s->substr(0, 9));
  Message2::M6::M14* v3 = v0->mutable_f_7();
  v3->set_f_2(0x78683a51);
  v3->set_f_4(true);
  v3->set_f_0(0x55);
  v3->set_f_1(s->substr(0, 1));
  message->set_f_3(0x22);
  message->set_f_1(0x47);
  message->set_f_9(0x7e);
  message->set_f_19(0xc02563d);
  Message2::M1* v4 = message->mutable_f_56();
  Message2::M1::E5 array_0[21] = {
      Message2::M1::E5_CONST_1, Message2::M1::E5_CONST_1,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_4,
      Message2::M1::E5_CONST_5, Message2::M1::E5_CONST_2,
      Message2::M1::E5_CONST_2, Message2::M1::E5_CONST_4,
      Message2::M1::E5_CONST_3, Message2::M1::E5_CONST_5,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_3,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_1,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_2,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_1,
      Message2::M1::E5_CONST_4, Message2::M1::E5_CONST_5,
      Message2::M1::E5_CONST_2,
  };
  for (auto v : array_0) {
    v4->add_f_1(v);
  }
  message->set_f_4(s->substr(0, 2));
  message->set_f_24(Message2::E2_CONST_2);
  message->set_f_13(s->substr(0, 7));
  Message2::M2* v5 = message->mutable_f_58();
  v5->set_f_2(s->substr(0, 5));
  v5->set_f_0(false);
  v5->set_f_6(s->substr(0, 27));
  v5->set_f_4(0x4130e9f9);
  v5->set_f_5(0x116ff8);
  v5->set_f_3(0x161713b1f2974eb4);
  v5->set_f_1(0x31);
  Message2::M2::M9* v6 = v5->mutable_f_16();
  Message2::M2::M9::M36* v7 = v6->mutable_f_57();
  v7->set_f_0(false);
  v6->set_f_28(0xd46d697);
  v6->set_f_2(0x5585db159f274589);
  v6->set_f_16(0x5b);
  v6->set_f_30(0x77f3f0259c8fd4d4);
  v6->set_f_3(0x2347a7bde8e);
  v6->set_f_0(false);
  v6->set_f_10(0x311f49a);
  v6->set_f_5(false);
  v6->set_f_12(0xbb53cd009f3787a);
  v6->set_f_7(s->substr(0, 80));
  v6->set_f_24(0x5635824d273b1348);
  v6->set_f_29(0x796717f3dc24737);
  v6->set_f_18(0.548982);
  v6->set_f_1(0x637e77e42adfdd74);
  v6->set_f_8(0xbf3976e);
  v6->set_f_25(s->substr(0, 110));
  v6->set_f_26(Message2::M2::M9::E9_CONST_1);
  v6->add_f_15(Message2::M2::M9::E7_CONST_4);
  Message2::M7* v8_0 = message->add_f_66();
  v8_0->set_f_21(false);
  v8_0->set_f_8(0x21087b81870f8317);
  v8_0->set_f_9(0x2);
  v8_0->set_f_10(0x583e3f5e);
  v8_0->set_f_22(0x5567d48d61a30d6b);
  v8_0->set_f_7(0x266a25fd5ec74b28);
  v8_0->set_f_16(true);
  v8_0->set_f_6(0xc);
  v8_0->set_f_17(0x6e317846f9c7388f);
  v8_0->set_f_3(0x3dd6a06101c85d0c);
  v8_0->set_f_1(0x3afcdfaf6aed2de4);
  Message2::M7::M18* v9_0 = v8_0->add_f_51();
  v9_0->set_f_3(0x24d82e7639c8a267);
  v9_0->set_f_17(0x169e1b);
  v9_0->set_f_21(0x4400f5005582a29f);
  v9_0->set_f_13(0x307254a6ebe9193c);
  v9_0->set_f_27(0x3c9bf0c921593347);
  v9_0->set_f_26(0x978da3d71634);
  v9_0->set_f_1(0x7a819395ae8b3cff);
  v9_0->set_f_20(0.619829);
  v9_0->set_f_9(0x3344aa14);
  v9_0->set_f_11(s->substr(0, 18));
  v9_0->set_f_23(0x3e6001d);
  v9_0->set_f_0(s->substr(0, 24));
  v9_0->set_f_10(0x27c5ec8fe3c69574);
  v9_0->set_f_28(0x7a2270fa5db71e69);
  v9_0->set_f_2(0x1202868ee02ae284);
  v9_0->set_f_29(Message2::M7::M18::E12_CONST_5);
  v9_0->set_f_16(0x222ea4b);
  v9_0->set_f_4(0x17e6b7b);
  Message2::M7::M18::M22* v10 = v9_0->mutable_f_52();
  v10->set_f_1(Message2::M7::M18::M22::E13_CONST_3);
  v10->set_f_2(0x27bc);
  v9_0->set_f_24(0x399);
  Message2::M7::M18::E11 array_1[13] = {
      Message2::M7::M18::E11_CONST_4, Message2::M7::M18::E11_CONST_3,
      Message2::M7::M18::E11_CONST_2, Message2::M7::M18::E11_CONST_1,
      Message2::M7::M18::E11_CONST_2, Message2::M7::M18::E11_CONST_3,
      Message2::M7::M18::E11_CONST_1, Message2::M7::M18::E11_CONST_3,
      Message2::M7::M18::E11_CONST_1, Message2::M7::M18::E11_CONST_2,
      Message2::M7::M18::E11_CONST_3, Message2::M7::M18::E11_CONST_4,
      Message2::M7::M18::E11_CONST_5,
  };
  for (auto v : array_1) {
    v9_0->add_f_7(v);
  }
  v9_0->set_f_12(0x135d3d);
  v9_0->set_f_30(0x7684468);
  v9_0->set_f_6(0x430107fe235660a5);
  v9_0->set_f_5(s->substr(0, 1));
  v9_0->set_f_8(s->substr(0, 11));
  v9_0->set_f_31(false);
  v8_0->set_f_15(s->substr(0, 5));
  Message2::M7::M17* v11_0 = v8_0->add_f_48();
  Message2::M7::M17::M21* v12 = v11_0->mutable_f_3();
  v12->set_f_2(0x5313bb70);
  v12->set_f_0(s->substr(0, 104));
  v12->set_f_1(0x2650fb25);
  v12->set_f_3(s->substr(0, 509));
  Message2::M7::M17::M21::M39* v13_0 = v12->add_f_9();
  v13_0->set_f_27(Message2::M7::M17::M21::M39::E16_CONST_3);
  v13_0->set_f_8(0x4851ae7a14d10e68);
  v13_0->set_f_17(0x50);
  v13_0->set_f_19(s->substr(0, 3));
  v13_0->set_f_18(0.484654);
  v13_0->set_f_30(0x48);
  v13_0->set_f_21(0x990ca70);
  v13_0->set_f_22(0x6666f95b4d747291);
  v13_0->set_f_25(0x774e2fc4dc9399ee);
  v13_0->set_f_3(0x3dd69a7c9a972827);
  v13_0->set_f_20(0x7);
  v13_0->set_f_26(0x2a5e);
  v13_0->set_f_13(0xf7e4c29);
  v13_0->set_f_28(0x67);
  v13_0->set_f_10(0x2fc3);
  v13_0->set_f_29(0x2b2a48f1f2236711);
  v13_0->set_f_1(0x4e49ee146bb4c264);
  v13_0->set_f_11(0x7589e254d75612c3);
  v13_0->set_f_15(false);
  v13_0->set_f_2(s->substr(0, 8));
  v13_0->set_f_14(0x14bc5da70636c19d);
  v13_0->set_f_7(s->substr(0, 1));
  Message2::M7::M17::M21::M39::M40* v14 = v13_0->mutable_f_60();
  v14->set_f_2(s->substr(0, 27));
  v14->set_f_1(0x2d);
  v14->set_f_0(0x15);
  v14->set_f_3(0x26a4);
  v13_0->set_f_0(0x1a);
  v13_0->set_f_9(0x2ecaa4d66b564793);
  Message2::M7::M17::M35* v15 = v11_0->mutable_f_5();
  (void)v15;  // Suppresses clang-tidy.
  Message2::M7::M17::M31* v16_0 = v11_0->add_f_4();
  v16_0->set_f_0(0x3f);
  Message2::M7::M17::M31::M38* v17 = v16_0->mutable_f_3();
  v17->add_f_0(Message2::M7::M17::M31::M38::E15_CONST_2);
  Message2::M7::M17::M31::M38::M41* v18_0 = v17->add_f_2();
  v18_0->set_f_1(0x250ba088d2b88b0c);
  Message2::M7::M17::M31::M38::M43* v19 = v17->mutable_f_3();
  (void)v19;  // Suppresses clang-tidy.
  v11_0->set_f_0(s->substr(0, 1));
  v8_0->set_f_11(false);
  v8_0->set_f_4(s->substr(0, 582));
  v8_0->set_f_31(s->substr(0, 8));
  v8_0->set_f_28(s->substr(0, 7));
  v8_0->set_f_26(s->substr(0, 7));
  v8_0->set_f_23(0x1044);
  v8_0->set_f_19(0.144745);
  v8_0->set_f_12(0x9274f56);
  v8_0->set_f_29(s->substr(0, 22));
  v8_0->set_f_27(0x782ec161dba1841e);
  v8_0->set_f_5(true);
  message->set_f_16(0x4bef6073e3891873);
  message->set_f_17(0x99760480fd30b7b);
  message->set_f_23(s->substr(0, 29));
  Message2::M4* v20 = message->mutable_f_62();
  (void)v20;  // Suppresses clang-tidy.
  message->set_f_15(0x19);
  Message2::M3* v21_0 = message->add_f_61();
  (void)v21_0;  // Suppresses clang-tidy.
  message->set_f_29(0.650553);
  message->set_f_25(0x28badff5fc04d6e4);
  message->add_f_28(Message2::E4_CONST_4);
  message->set_f_0(false);
  message->set_f_21(0x10c332f83ae47715);
  message->set_f_22(0x57);
  message->set_f_5(0x1e4453c76be6afe);
  message->set_f_26(Message2::E3_CONST_5);
  message->set_f_18(0x73be4facdb3c3b60);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  Message2::M7* v0_0 = message->add_f_66();
  v0_0->set_f_19(0.476613);
  v0_0->set_f_9(0x4e);
  v0_0->set_f_12(0xc40);
  v0_0->set_f_22(0x46f698f3f2e41b3f);
  v0_0->set_f_31(s->substr(0, 4));
  v0_0->set_f_13(s->substr(0, 2));
  v0_0->set_f_26(s->substr(0, 107));
  v0_0->set_f_18(Message2::M7::E6_CONST_4);
  v0_0->set_f_7(0x7c5651f728e627cb);
  v0_0->set_f_16(false);
  v0_0->set_f_30(0x6987f12ad8072e3c);
  v0_0->set_f_21(false);
  v0_0->set_f_5(true);
  v0_0->set_f_2(s->substr(0, 17));
  v0_0->set_f_28(s->substr(0, 18));
  v0_0->set_f_3(0x45bbd5932510096a);
  Message2::M7::M17* v1_0 = v0_0->add_f_48();
  Message2::M7::M17::M35* v2 = v1_0->mutable_f_5();
  v2->set_f_0(true);
  Message2::M7::M17::M31* v3_0 = v1_0->add_f_4();
  Message2::M7::M17::M31::M38* v4 = v3_0->mutable_f_3();
  Message2::M7::M17::M31::M38::M41* v5_0 = v4->add_f_2();
  (void)v5_0;  // Suppresses clang-tidy.
  Message2::M7::M17::M31::M38::E15 array_0[20] = {
      Message2::M7::M17::M31::M38::E15_CONST_3,
      Message2::M7::M17::M31::M38::E15_CONST_3,
      Message2::M7::M17::M31::M38::E15_CONST_5,
      Message2::M7::M17::M31::M38::E15_CONST_5,
      Message2::M7::M17::M31::M38::E15_CONST_4,
      Message2::M7::M17::M31::M38::E15_CONST_1,
      Message2::M7::M17::M31::M38::E15_CONST_1,
      Message2::M7::M17::M31::M38::E15_CONST_3,
      Message2::M7::M17::M31::M38::E15_CONST_4,
      Message2::M7::M17::M31::M38::E15_CONST_3,
      Message2::M7::M17::M31::M38::E15_CONST_1,
      Message2::M7::M17::M31::M38::E15_CONST_4,
      Message2::M7::M17::M31::M38::E15_CONST_4,
      Message2::M7::M17::M31::M38::E15_CONST_1,
      Message2::M7::M17::M31::M38::E15_CONST_5,
      Message2::M7::M17::M31::M38::E15_CONST_4,
      Message2::M7::M17::M31::M38::E15_CONST_2,
      Message2::M7::M17::M31::M38::E15_CONST_3,
      Message2::M7::M17::M31::M38::E15_CONST_3,
      Message2::M7::M17::M31::M38::E15_CONST_3,
  };
  for (auto v : array_0) {
    v4->add_f_0(v);
  }
  v3_0->set_f_0(0x5473f1f);
  Message2::M7::M17::M21* v6 = v1_0->mutable_f_3();
  v6->set_f_1(0x73be64e);
  Message2::M7::M17::M21::M39* v7_0 = v6->add_f_9();
  v7_0->set_f_27(Message2::M7::M17::M21::M39::E16_CONST_3);
  v7_0->set_f_1(0x5c5eb423265d2d14);
  v7_0->set_f_30(0x58);
  v7_0->set_f_14(0x79132c5abeaa6936);
  v7_0->set_f_7(s->substr(0, 8));
  v7_0->set_f_11(0x1c419d0758e28e40);
  v7_0->set_f_20(0xf9d9cc7);
  v7_0->set_f_5(0x4c);
  v7_0->set_f_25(0x57034a8d4f1fb01d);
  v7_0->set_f_0(0x30);
  v7_0->set_f_22(0x48dd9bfed41f6050);
  v7_0->set_f_16(0x96926);
  v7_0->set_f_28(0x15);
  Message2::M7::M17::M21::M39::M40* v8 = v7_0->mutable_f_60();
  v8->set_f_2(s->substr(0, 48));
  v8->set_f_3(0x23);
  v8->set_f_1(0x3d70);
  v7_0->set_f_12(true);
  v7_0->set_f_9(0x6f71207f80d8b1ea);
  v7_0->set_f_4(0.130702);
  v7_0->set_f_21(0xd6a203b);
  v7_0->set_f_10(0x44);
  v7_0->set_f_17(0xbbc751d);
  v7_0->set_f_3(0x24aa474b9d6b6af9);
  v7_0->set_f_15(true);
  v7_0->set_f_23(true);
  v7_0->set_f_26(0x4f);
  v6->set_f_0(s->substr(0, 4));
  v6->set_f_3(s->substr(0, 12));
  v1_0->set_f_0(s->substr(0, 46));
  v0_0->set_f_29(s->substr(0, 98));
  v0_0->set_f_0(0x2f);
  Message2::M7::M18* v9_0 = v0_0->add_f_51();
  v9_0->set_f_28(0x2507d43a65ab87d3);
  v9_0->set_f_11(s->substr(0, 24));
  Message2::M7::M18::M22* v10 = v9_0->mutable_f_52();
  v10->set_f_1(Message2::M7::M18::M22::E13_CONST_1);
  v10->set_f_0(0x6d415d63);
  v10->set_f_2(0xd);
  v9_0->set_f_26(0x1c028c2467c);
  v9_0->set_f_24(0x2a24);
  v9_0->set_f_12(0xf5d680c);
  v9_0->set_f_4(0x7e);
  v9_0->set_f_31(true);
  v9_0->set_f_10(0x73144bf2e9242407);
  v9_0->set_f_5(s->substr(0, 258));
  v9_0->set_f_0(s->substr(0, 5));
  v9_0->set_f_6(0x1e923d71729475a2);
  v9_0->set_f_2(0x1de181fd18e8a8c9);
  Message2::M7::M18::E11 array_1[12] = {
      Message2::M7::M18::E11_CONST_1, Message2::M7::M18::E11_CONST_3,
      Message2::M7::M18::E11_CONST_5, Message2::M7::M18::E11_CONST_2,
      Message2::M7::M18::E11_CONST_3, Message2::M7::M18::E11_CONST_5,
      Message2::M7::M18::E11_CONST_2, Message2::M7::M18::E11_CONST_1,
      Message2::M7::M18::E11_CONST_1, Message2::M7::M18::E11_CONST_2,
      Message2::M7::M18::E11_CONST_3, Message2::M7::M18::E11_CONST_3,
  };
  for (auto v : array_1) {
    v9_0->add_f_7(v);
  }
  v9_0->set_f_20(0.912538);
  v9_0->set_f_19(0x1aa29d);
  v9_0->set_f_29(Message2::M7::M18::E12_CONST_2);
  v9_0->set_f_18(false);
  v9_0->set_f_1(0x19682477bad781d6);
  v9_0->set_f_9(0xe585855);
  v9_0->set_f_3(0x3cf8e6fc7966746a);
  v0_0->set_f_6(0x1);
  v0_0->set_f_15(s->substr(0, 1));
  message->set_f_12(0x32);
  message->set_f_13(s->substr(0, 4));
  message->set_f_24(Message2::E2_CONST_2);
  message->set_f_29(0.859101);
  message->add_f_28(Message2::E4_CONST_5);
  message->set_f_3(0xb3778396);
  Message2::M3* v11_0 = message->add_f_61();
  Message2::M3::M11* v12_0 = v11_0->add_f_3();
  v12_0->set_f_3(s->substr(0, 8));
  v12_0->set_f_1(0x30);
  v11_0->set_f_0(0x20c9597536810187);
  message->set_f_0(true);
  Message2::M6* v13 = message->mutable_f_65();
  Message2::M6::M12* v14_0 = v13->add_f_5();
  v14_0->set_f_0(true);
  v14_0->set_f_1(s->substr(0, 56));
  Message2::M6::M12::M32* v15_0 = v14_0->add_f_6();
  v15_0->set_f_3(0x96c08aa);
  v15_0->set_f_2(true);
  v13->set_f_0(s->substr(0, 6));
  Message2::M6::M15* v16 = v13->mutable_f_9();
  v16->set_f_8(s->substr(0, 19));
  v16->set_f_14(0x282d);
  v16->set_f_0(0xc);
  v16->set_f_17(0x420909455a68c9fc);
  v16->set_f_1(0x47a348b3724f1a46);
  v16->set_f_12(0x66e0f906ee983532);
  v16->set_f_3(0xb4e1c3d);
  v16->set_f_13(s->substr(0, 23));
  v16->set_f_7(0x6d3a40d6);
  v16->set_f_16(Message2::M6::M15::E10_CONST_2);
  v16->set_f_18(0x5079aa496722ca04);
  v16->set_f_10(s->substr(0, 1));
  v16->set_f_2(0x489b6bfec22b7dca);
  v16->set_f_9(0xfe32af2a8b2ca5f);
  v16->set_f_19(0.290254);
  v16->set_f_15(s->substr(0, 60));
  message->set_f_17(0x34baacee0aa6fa);
  Message2::M2* v17 = message->mutable_f_58();
  Message2::M2::M9* v18 = v17->mutable_f_16();
  v18->set_f_1(0x4e54eb67425a9284);
  v18->set_f_17(0x6cc50f7d);
  v18->set_f_13(0x22eead74c13218a7);
  Message2::M2::M9::M36* v19 = v18->mutable_f_57();
  v19->set_f_0(false);
  v18->set_f_0(true);
  v18->set_f_27(s->substr(0, 7));
  v18->set_f_9(0x2a7bf2aa4572afad);
  v18->set_f_26(Message2::M2::M9::E9_CONST_1);
  v18->set_f_29(0x32f1788231ec2ff4);
  v18->set_f_11(0.799482);
  v18->set_f_19(0.843048);
  v18->set_f_22(s->substr(0, 26));
  v18->add_f_15(Message2::M2::M9::E7_CONST_1);
  v18->set_f_2(0x74bebbf7c7dbf8d1);
  v18->set_f_6(0xb92cf0a);
  v18->set_f_23(Message2::M2::M9::E8_CONST_4);
  v18->set_f_24(0x2e37d31398c4c380);
  v18->set_f_25(s->substr(0, 6));
  v18->set_f_30(0x7fcab0ada0b60e79);
  v18->set_f_14(0x8);
  v18->set_f_5(false);
  v18->set_f_21(0x62);
  v17->set_f_6(s->substr(0, 74));
  v17->set_f_0(true);
  v17->set_f_2(s->substr(0, 6));
  message->set_f_7(0x5d67d5f9);
  message->set_f_15(0xe445788);
  Message2::M4* v20 = message->mutable_f_62();
  (void)v20;  // Suppresses clang-tidy.
  message->set_f_18(0x2c1d68fdc03a530c);
  message->set_f_5(0x36e9c29c9c3487fa);
  Message2::M5* v21 = message->mutable_f_64();
  v21->set_f_0(true);
  Message2::M5::M16* v22 = v21->mutable_f_3();
  Message2::M5::M16::M33* v23 = v22->mutable_f_6();
  v23->set_f_0(0.989830);
  v22->set_f_0(s->substr(0, 20));
  message->set_f_1(0x13);
  message->set_f_8(0x5d);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_25(0x1c6a970ee7b5e69a);
  message->set_f_29(0.684658);
  message->set_f_4(s->substr(0, 32));
  message->set_f_27(s->substr(0, 3));
  message->set_f_6(0x62c5a960d0d51fc4);
  message->set_f_11(s->substr(0, 95));
  message->set_f_15(0x8020ec7);
  message->set_f_23(s->substr(0, 5));
  message->set_f_9(0x2c56649ad);
  message->add_f_28(Message2::E4_CONST_1);
  message->set_f_8(0x921d0be);
  message->set_f_19(0x2);
  message->set_f_1(0x34);
  message->set_f_16(0x2f5016398ac336a2);
  message->set_f_26(Message2::E3_CONST_3);
  message->set_f_7(0x47434ab6);
  Message2::M2* v0 = message->mutable_f_58();
  v0->set_f_0(true);
  v0->set_f_6(s->substr(0, 21));
  v0->set_f_2(s->substr(0, 47));
  v0->set_f_4(0x143fdc99);
  v0->set_f_3(0x343bf968c75ed2ad);
  message->set_f_22(0x59);
  Message2::M6* v1 = message->mutable_f_65();
  Message2::M6::M12* v2_0 = v1->add_f_5();
  v2_0->set_f_0(true);
  v2_0->set_f_1(s->substr(0, 18));
  Message2::M6::M12::M32* v3_0 = v2_0->add_f_6();
  v3_0->set_f_4(s->substr(0, 2172));
  v3_0->set_f_3(0x5d);
  v3_0->set_f_1(false);
  v3_0->set_f_2(false);
  v3_0->set_f_0(0x1e93dbac27f72837);
  Message2::M6::M14* v4 = v1->mutable_f_7();
  v4->set_f_1(s->substr(0, 112));
  v4->set_f_0(0x41);
  Message2::M6::M15* v5 = v1->mutable_f_9();
  v5->set_f_16(Message2::M6::M15::E10_CONST_5);
  v5->set_f_10(s->substr(0, 4));
  v5->set_f_13(s->substr(0, 108));
  v5->set_f_11(0x17dc4441b462fcf5);
  v5->set_f_9(0xb4ae6af6ddd0e80);
  v5->set_f_14(0x3);
  Message2::M6::M15::M24* v6_0 = v5->add_f_35();
  v6_0->set_f_0(0x6ee42081);
  v5->set_f_8(s->substr(0, 8));
  v5->set_f_5(true);
  v5->set_f_4(0x474230ad997448e5);
  v5->set_f_6(s->substr(0, 75));
  v5->set_f_17(0x4aaee404568005db);
  v5->set_f_7(0x635182e8);
  v5->set_f_19(0.418855);
  v5->set_f_20(0x5da2cc6a28c8e909);
  v5->set_f_18(0x438817ab0fc774c9);
  Message2::M1* v7 = message->mutable_f_56();
  Message2::M1::M13* v8 = v7->mutable_f_4();
  Message2::M1::M13::M19* v9 = v8->mutable_f_2();
  v9->set_f_0(0.277074);
  v9->set_f_1(s->substr(0, 24));
  v9->set_f_4(0x5306ac51bf400ece);
  v9->set_f_3(s->substr(0, 277));
  v8->set_f_0(0x3ad0fe580a474744);
  Message2::M1::M13::M27* v10 = v8->mutable_f_4();
  v10->set_f_0(0x500aebd29568d94f);
  v10->set_f_1(0x821e8169ca64cc3);
  Message2::M1::M13::M34* v11 = v8->mutable_f_5();
  v11->set_f_0(false);
  v11->set_f_6(0x3);
  v11->set_f_1(0x2ed1a56e);
  v11->set_f_4(0x60679b1ed24359a8);
  v11->set_f_2(0x70);
  v7->add_f_1(Message2::M1::E5_CONST_1);
  Message2::M1::M8* v12 = v7->mutable_f_3();
  v12->set_f_0(0x4edf2df);
  Message2::M4* v13 = message->mutable_f_62();
  (void)v13;  // Suppresses clang-tidy.
  message->set_f_2(0x77a20e5cb256233e);
  message->add_f_20(Message2::E1_CONST_2);
  message->set_f_17(0x4148a8647e909b45);
  Message2::M7* v14_0 = message->add_f_66();
  v14_0->set_f_0(0x6f);
  v14_0->set_f_23(0x1e35);
  v14_0->set_f_2(s->substr(0, 27));
  v14_0->set_f_16(true);
  v14_0->set_f_22(0x73946f5bfeeb86e0);
  v14_0->set_f_30(0x30c2ea96454c6201);
  v14_0->set_f_8(0xd865f1f22aa78c8);
  v14_0->set_f_28(s->substr(0, 25));
  v14_0->set_f_25(s->substr(0, 10));
  v14_0->set_f_13(s->substr(0, 2));
  v14_0->set_f_1(0x34edd2dc01f14ae6);
  Message2::M7::M18* v15_0 = v14_0->add_f_51();
  v15_0->set_f_20(0.650346);
  v15_0->set_f_28(0x6b3ab66c208a0e13);
  v15_0->set_f_22(0x6754a3d);
  v15_0->set_f_27(0x4b1d6036dcb02ea2);
  v15_0->set_f_19(0x51);
  v15_0->set_f_16(0x43aa4e);
  v15_0->set_f_23(0xcba4ef7);
  v15_0->set_f_10(0x2b9bc6cff1d9bdd7);
  v15_0->set_f_31(false);
  v15_0->set_f_18(false);
  v15_0->set_f_12(0x2f);
  v15_0->set_f_21(0x7e53dbcfd39f49f);
  v15_0->set_f_29(Message2::M7::M18::E12_CONST_1);
  v15_0->add_f_7(Message2::M7::M18::E11_CONST_3);
  v15_0->set_f_0(s->substr(0, 365));
  v15_0->set_f_13(0x419f0bde2e2d2879);
  v15_0->set_f_14(s->substr(0, 4));
  v15_0->set_f_15(0x6f);
  v15_0->set_f_9(0x29b8452);
  v15_0->set_f_17(0x31);
  v15_0->set_f_2(0x73f7c9ffdbd4d038);
  v15_0->set_f_25(0.857758);
  v15_0->set_f_1(0x55f4ff0cd5b57de3);
  v15_0->set_f_8(s->substr(0, 16));
  v15_0->set_f_3(0x7c6e067aae1a47f3);
  Message2::M7::M17* v16_0 = v14_0->add_f_48();
  Message2::M7::M17::M21* v17 = v16_0->mutable_f_3();
  Message2::M7::M17::M21::M39* v18_0 = v17->add_f_9();
  v18_0->set_f_9(0x446309e13c983c18);
  v18_0->set_f_30(0x3b);
  v18_0->set_f_20(0x76);
  v18_0->set_f_5(0x38);
  v18_0->set_f_4(0.130211);
  v18_0->set_f_2(s->substr(0, 2515));
  v18_0->set_f_6(false);
  v18_0->set_f_16(0x914e0);
  v18_0->set_f_25(0x3841ab8261ca07b8);
  v18_0->set_f_26(0x54);
  v18_0->set_f_14(0x164b88f66a2bad7a);
  Message2::M7::M17::M21::M39::M42* v19 = v18_0->mutable_f_62();
  (void)v19;  // Suppresses clang-tidy.
  v18_0->set_f_7(s->substr(0, 46));
  v18_0->set_f_28(0x11);
  v18_0->set_f_24(s->substr(0, 6));
  v18_0->set_f_12(true);
  v18_0->set_f_10(0x53);
  v18_0->set_f_29(0x24ef570dc4b92389);
  v18_0->set_f_17(0x35);
  v18_0->set_f_13(0xe30a25e);
  Message2::M7::M17::M31* v20_0 = v16_0->add_f_4();
  Message2::M7::M17::M31::M38* v21 = v20_0->mutable_f_3();
  (void)v21;  // Suppresses clang-tidy.
  v20_0->set_f_0(0x74016);
  v14_0->set_f_7(0x7af6e94ba7273834);
  v14_0->set_f_19(0.235427);
  v14_0->set_f_5(true);
  v14_0->set_f_15(s->substr(0, 33));
  v14_0->set_f_27(0x2702c243784c4df2);
  v14_0->set_f_9(0x43);
  v14_0->set_f_10(0x798009de);
  v14_0->set_f_24(0x8801c17);
  v14_0->set_f_11(true);
  v14_0->set_f_17(0x2164ad822a7c8fb3);
  v14_0->set_f_18(Message2::M7::E6_CONST_5);
  v14_0->set_f_31(s->substr(0, 21));
  v14_0->set_f_21(true);
  message->set_f_0(false);
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
}  // namespace fleetbench::rpc::P2::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P2_REQUEST_ACCESS_MESSAGE2_H_
