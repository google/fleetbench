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
  message->set_f_24(0x7998525b8abc4cee);
  message->set_f_18(0x2c3a40068c8beb65);
  message->set_f_0(Message0::E1_CONST_2);
  Message0::M7* v0_0 = message->add_f_55();
  v0_0->set_f_0(0x72ef259);
  Message0::M7::M15* v1_0 = v0_0->add_f_3();
  v1_0->set_f_2(0x4565ab838c46a166);
  Message0::M7::M15::M35* v2 = v1_0->mutable_f_10();
  v2->set_f_2(0x1b181);
  v2->set_f_6(0.953153);
  v2->set_f_1(s->substr(0, 1290));
  v2->set_f_9(0.590553);
  v2->set_f_5(Message0::M7::M15::M35::E38_CONST_4);
  v2->set_f_0(0x3f9642f94a0ed685);
  v1_0->set_f_0(true);
  v1_0->set_f_3(0x3444ea80ce25bd0e);
  v1_0->set_f_5(0x1549e97f125e10b3);
  Message0::M7::M15::E14 array_1[12] = {
      Message0::M7::M15::E14_CONST_3, Message0::M7::M15::E14_CONST_5,
      Message0::M7::M15::E14_CONST_3, Message0::M7::M15::E14_CONST_1,
      Message0::M7::M15::E14_CONST_3, Message0::M7::M15::E14_CONST_4,
      Message0::M7::M15::E14_CONST_5, Message0::M7::M15::E14_CONST_4,
      Message0::M7::M15::E14_CONST_4, Message0::M7::M15::E14_CONST_5,
      Message0::M7::M15::E14_CONST_5, Message0::M7::M15::E14_CONST_2,
  };
  for (auto v : array_1) {
    v1_0->add_f_1(v);
  }
  message->set_f_3(0x12585f);
  message->set_f_13(0.757173);
  Message0::E2 array_2[12] = {
      Message0::E2_CONST_4, Message0::E2_CONST_1, Message0::E2_CONST_2,
      Message0::E2_CONST_3, Message0::E2_CONST_1, Message0::E2_CONST_3,
      Message0::E2_CONST_1, Message0::E2_CONST_5, Message0::E2_CONST_3,
      Message0::E2_CONST_4, Message0::E2_CONST_4, Message0::E2_CONST_4,
  };
  for (auto v : array_2) {
    message->add_f_6(v);
  }
  message->set_f_20(0x79);
  message->set_f_25(0x47);
  message->set_f_14(0x21);
  message->set_f_9(Message0::E3_CONST_2);
  Message0::M11* v3 = message->mutable_f_64();
  v3->set_f_0(0x87d1e56);
  v3->set_f_2(s->substr(0, 12));
  v3->set_f_3(0x2);
  Message0::M9* v4_0 = message->add_f_58();
  v4_0->set_f_0(0xb51a248a7155451);
  Message0::M9::M14* v5 = v4_0->mutable_f_3();
  v5->set_f_5(true);
  Message0::M9::M14::M32* v6_0 = v5->add_f_13();
  v6_0->set_f_0(s->substr(0, 480));
  Message0::M9::M14::M29* v7 = v5->mutable_f_11();
  Message0::M9::M14::M29::M45* v8_0 = v7->add_f_5();
  v8_0->set_f_21(true);
  v8_0->set_f_10(s->substr(0, 19));
  v8_0->set_f_11(0x3ef33e75e7474051);
  v8_0->set_f_12(0xf8400f1a2fac477);
  v8_0->set_f_27(0x8054b04);
  v8_0->add_f_24(Message0::M9::M14::M29::M45::E53_CONST_1);
  v8_0->set_f_4(Message0::M9::M14::M29::M45::E50_CONST_1);
  v8_0->add_f_9(Message0::M9::M14::M29::M45::E52_CONST_1);
  v8_0->set_f_23(0x71926bd111ec1e72);
  v8_0->set_f_29(0x6eb183ae84e8ed6);
  v8_0->set_f_19(0x6ecb498d);
  v8_0->set_f_2(0x2ac1a4dc6daf41fe);
  v8_0->set_f_5(0.963480);
  v8_0->set_f_28(0x6cb3329bc52793da);
  v8_0->set_f_14(0.855631);
  v8_0->set_f_31(0x57);
  v8_0->set_f_17(s->substr(0, 18));
  v8_0->set_f_20(s->substr(0, 21));
  v8_0->set_f_30(0.871912);
  v8_0->set_f_15(0x2614d79df40);
  v8_0->set_f_18(0x588c7d36a8349114);
  v8_0->set_f_22(s->substr(0, 2595));
  v8_0->add_f_6(Message0::M9::M14::M29::M45::E51_CONST_5);
  v8_0->set_f_26(0x147c8e9);
  v7->add_f_0(Message0::M9::M14::M29::E28_CONST_4);
  v5->set_f_4(s->substr(0, 280));
  v5->set_f_3(0x70971af4a808b76f);
  v5->set_f_1(false);
  v5->set_f_0(Message0::M9::M14::E13_CONST_3);
  Message0::M9::M24* v9 = v4_0->mutable_f_4();
  (void)v9;  // Suppresses clang-tidy.
  message->set_f_12(true);
  message->set_f_19(false);
  message->set_f_2(0.296067);
  Message0::M5* v10 = message->mutable_f_52();
  Message0::M5::M23* v11 = v10->mutable_f_2();
  Message0::M5::M23::M27* v12 = v11->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_21(0x48);
  Message0::E6 array_3[22] = {
      Message0::E6_CONST_3, Message0::E6_CONST_4, Message0::E6_CONST_2,
      Message0::E6_CONST_5, Message0::E6_CONST_2, Message0::E6_CONST_2,
      Message0::E6_CONST_2, Message0::E6_CONST_3, Message0::E6_CONST_5,
      Message0::E6_CONST_5, Message0::E6_CONST_1, Message0::E6_CONST_5,
      Message0::E6_CONST_2, Message0::E6_CONST_2, Message0::E6_CONST_3,
      Message0::E6_CONST_4, Message0::E6_CONST_5, Message0::E6_CONST_5,
      Message0::E6_CONST_4, Message0::E6_CONST_4, Message0::E6_CONST_5,
      Message0::E6_CONST_1,
  };
  for (auto v : array_3) {
    message->add_f_27(v);
  }
  Message0::M6* v13_0 = message->add_f_53();
  Message0::M6::M12* v14_0 = v13_0->add_f_2();
  Message0::M6::M12::M40* v15 = v14_0->mutable_f_3();
  Message0::M6::M12::M40::M43* v16_0 = v15->add_f_8();
  Message0::M6::M12::M40::M43::M46* v17 = v16_0->mutable_f_4();
  v17->set_f_0(0xe00897e);
  v16_0->set_f_0(0x46f1093b);
  Message0::M6::M12::M40::M43::M49* v18_0 = v16_0->add_f_5();
  v18_0->set_f_2(true);
  v18_0->set_f_0(0x5e);
  v15->set_f_2(s->substr(0, 3498));
  v14_0->add_f_0(Message0::M6::M12::E12_CONST_4);
  v13_0->set_f_0(true);
  message->set_f_10(0x6316b455);
  message->set_f_17(0x31a2c2127b3b6aac);
  message->set_f_8(0xce9);
  Message0::M8* v19 = message->mutable_f_57();
  v19->set_f_3(0x2830c35);
  v19->set_f_2(0x61a014dc0967ace9);
  v19->set_f_0(Message0::M8::E10_CONST_4);
  Message0::M3* v20 = message->mutable_f_49();
  Message0::M3::M20* v21 = v20->mutable_f_4();
  v21->set_f_0(0x2fcfe31b);
  Message0::M3::M20::M31* v22 = v21->mutable_f_3();
  v22->set_f_1(0x28);
  v20->set_f_0(0x6b);
  message->set_f_1(true);
  message->set_f_23(0x33);
  message->set_f_16(0x513a21623);
  message->set_f_4(0x7de037e28006ccbf);
  message->add_f_15(Message0::E4_CONST_1);
  Message0::M4* v23 = message->mutable_f_50();
  Message0::M4::M21* v24 = v23->mutable_f_3();
  v24->set_f_3(true);
  v24->set_f_1(0x37c11fc6);
  v23->set_f_0(0x6c15451);
  message->set_f_26(Message0::E5_CONST_5);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M3* v0 = message->mutable_f_49();
  v0->set_f_0(0x1aad2b);
  Message0::M3::M26* v1 = v0->mutable_f_7();
  v1->set_f_22(0x23451fce44ab0c92);
  v1->set_f_5(0x5a603538);
  v1->set_f_13(0x467824da3e9fa11f);
  v1->add_f_19(Message0::M3::M26::E24_CONST_5);
  Message0::M3::M26::E21 array_0[13] = {
      Message0::M3::M26::E21_CONST_3, Message0::M3::M26::E21_CONST_2,
      Message0::M3::M26::E21_CONST_5, Message0::M3::M26::E21_CONST_4,
      Message0::M3::M26::E21_CONST_4, Message0::M3::M26::E21_CONST_4,
      Message0::M3::M26::E21_CONST_4, Message0::M3::M26::E21_CONST_5,
      Message0::M3::M26::E21_CONST_5, Message0::M3::M26::E21_CONST_3,
      Message0::M3::M26::E21_CONST_5, Message0::M3::M26::E21_CONST_1,
      Message0::M3::M26::E21_CONST_4,
  };
  for (auto v : array_0) {
    v1->add_f_2(v);
  }
  v1->set_f_21(0x34);
  v1->set_f_10(false);
  v1->set_f_16(0x38);
  v1->set_f_9(0xd8e23b7);
  v1->set_f_0(0x1f);
  v1->set_f_23(s->substr(0, 26));
  v1->set_f_8(0x7a6e8cbb4ffdac24);
  v1->set_f_3(0x502cb91dda405b86);
  v1->set_f_12(Message0::M3::M26::E22_CONST_2);
  v1->set_f_11(0x2ae6bf6b4d26d1c8);
  v1->set_f_4(0x18262416);
  v1->set_f_14(0x16b2e06de9d4c8ff);
  v1->set_f_6(s->substr(0, 2));
  v1->set_f_20(Message0::M3::M26::E25_CONST_5);
  v1->set_f_15(Message0::M3::M26::E23_CONST_5);
  v1->set_f_18(true);
  v1->set_f_1(0x6ebf3e7fd76f0317);
  Message0::M3::M17* v2 = v0->mutable_f_3();
  v2->set_f_1(0x33064d2a42ceeb52);
  Message0::M3::M17::M37* v3 = v2->mutable_f_9();
  Message0::M3::M17::M37::M44* v4 = v3->mutable_f_2();
  Message0::M3::M17::M37::M44::M48* v5 = v4->mutable_f_17();
  (void)v5;  // Suppresses clang-tidy.
  v4->set_f_2(true);
  v4->set_f_4(0x42488a6fffd213ac);
  v4->set_f_0(Message0::M3::M17::M37::M44::E48_CONST_4);
  v4->add_f_3(Message0::M3::M17::M37::M44::E49_CONST_3);
  Message0::M3::M17::M30* v6 = v2->mutable_f_6();
  v6->set_f_0(s->substr(0, 29));
  v2->set_f_0(Message0::M3::M17::E16_CONST_4);
  Message0::M3::M25* v7_0 = v0->add_f_6();
  Message0::M3::M25::M39* v8_0 = v7_0->add_f_4();
  (void)v8_0;  // Suppresses clang-tidy.
  Message0::M3::M25::M41* v9 = v7_0->mutable_f_8();
  v9->set_f_23(0x2801c34fd);
  v9->set_f_28(0x635e6af3d59c90d4);
  v9->add_f_24(Message0::M3::M25::M41::E46_CONST_5);
  v9->set_f_7(false);
  v9->set_f_4(s->substr(0, 54));
  v9->set_f_0(0.456310);
  v9->set_f_21(s->substr(0, 29));
  v9->set_f_6(false);
  v9->set_f_26(0xa25c34a96957324);
  v9->set_f_16(Message0::M3::M25::M41::E44_CONST_2);
  v9->set_f_25(s->substr(0, 22));
  v9->set_f_8(0x13cb4f);
  v9->set_f_18(true);
  v9->set_f_29(s->substr(0, 6));
  v9->set_f_27(0x3f);
  v9->set_f_19(0x74a06bb8bcfc0051);
  v9->set_f_9(0x272d2f9ca1);
  v9->set_f_22(true);
  v9->set_f_1(s->substr(0, 424));
  message->set_f_11(0x69e13c8e0c82bbf4);
  message->set_f_2(0.525041);
  message->set_f_23(0xb5eef61);
  message->set_f_24(0x68f19c8bacd41bec);
  message->set_f_25(0xb71ea54);
  message->set_f_3(0x71);
  message->set_f_19(true);
  message->set_f_12(false);
  message->set_f_16(0x115fb6bf8ab);
  message->set_f_5(0x623ea321);
  message->set_f_13(0.687284);
  message->set_f_21(0x2);
  message->set_f_10(0x719fb62e);
  message->set_f_0(Message0::E1_CONST_1);
  message->set_f_17(0x1832fbbc4a942da3);
  message->set_f_28(0x61c96440d2dc915b);
  message->set_f_8(0x5878fde);
  message->set_f_22(0.351430);
  message->set_f_18(0x7a6018aa18cc508);
  Message0::M10* v10 = message->mutable_f_60();
  Message0::M10::M22* v11_0 = v10->add_f_9();
  v11_0->set_f_0(Message0::M10::M22::E18_CONST_2);
  v10->set_f_3(0x15ebf03f4589fa31);
  v10->set_f_0(true);
  message->add_f_27(Message0::E6_CONST_1);
  message->add_f_27(Message0::E6_CONST_5);
  message->set_f_14(0x1e8e1e9);
  message->set_f_4(0x4d5390973d058ae1);
  message->set_f_1(false);
  Message0::M9* v12_0 = message->add_f_58();
  Message0::M9::M13* v13 = v12_0->mutable_f_2();
  v13->set_f_0(0x7b3dc5b4a607e748);
  v12_0->set_f_0(0x7c64e0a3a5c53336);
  message->add_f_15(Message0::E4_CONST_1);
  message->add_f_15(Message0::E4_CONST_1);
  message->add_f_15(Message0::E4_CONST_1);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_0(Message0::E1_CONST_4);
  message->add_f_6(Message0::E2_CONST_5);
  message->add_f_6(Message0::E2_CONST_2);
  message->set_f_9(Message0::E3_CONST_3);
  message->set_f_26(Message0::E5_CONST_4);
  message->set_f_11(0x27c38265067ced46);
  Message0::M9* v0_0 = message->add_f_58();
  Message0::M9::M14* v1 = v0_0->mutable_f_3();
  v1->set_f_1(false);
  Message0::M9::M14::M29* v2 = v1->mutable_f_11();
  v2->add_f_0(Message0::M9::M14::M29::E28_CONST_2);
  Message0::M9::M14::M29::M45* v3_0 = v2->add_f_5();
  Message0::M9::M14::M29::M45::E53 array_0[22] = {
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_3,
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_2,
      Message0::M9::M14::M29::M45::E53_CONST_1,
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_1,
      Message0::M9::M14::M29::M45::E53_CONST_3,
      Message0::M9::M14::M29::M45::E53_CONST_2,
      Message0::M9::M14::M29::M45::E53_CONST_1,
      Message0::M9::M14::M29::M45::E53_CONST_3,
      Message0::M9::M14::M29::M45::E53_CONST_3,
      Message0::M9::M14::M29::M45::E53_CONST_5,
      Message0::M9::M14::M29::M45::E53_CONST_2,
      Message0::M9::M14::M29::M45::E53_CONST_2,
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_3,
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_4,
      Message0::M9::M14::M29::M45::E53_CONST_5,
      Message0::M9::M14::M29::M45::E53_CONST_1,
  };
  for (auto v : array_0) {
    v3_0->add_f_24(v);
  }
  Message0::M9::M14::M29::M45::E51 array_1[21] = {
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_3,
      Message0::M9::M14::M29::M45::E51_CONST_3,
      Message0::M9::M14::M29::M45::E51_CONST_1,
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_4,
      Message0::M9::M14::M29::M45::E51_CONST_4,
      Message0::M9::M14::M29::M45::E51_CONST_5,
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_4,
      Message0::M9::M14::M29::M45::E51_CONST_3,
      Message0::M9::M14::M29::M45::E51_CONST_4,
      Message0::M9::M14::M29::M45::E51_CONST_1,
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_5,
      Message0::M9::M14::M29::M45::E51_CONST_5,
      Message0::M9::M14::M29::M45::E51_CONST_2,
      Message0::M9::M14::M29::M45::E51_CONST_4,
      Message0::M9::M14::M29::M45::E51_CONST_5,
  };
  for (auto v : array_1) {
    v3_0->add_f_6(v);
  }
  v3_0->set_f_17(s->substr(0, 2));
  v3_0->set_f_0(0x5dda833d442560a8);
  v3_0->set_f_3(0x61a42cf42050cdec);
  v3_0->add_f_9(Message0::M9::M14::M29::M45::E52_CONST_1);
  v3_0->set_f_27(0x1be79970);
  v3_0->set_f_19(0x74122148);
  v3_0->set_f_21(true);
  v3_0->set_f_28(0x6576f875a804c40d);
  v3_0->set_f_5(0.555520);
  v3_0->set_f_23(0x131b18b0a082ba0a);
  v3_0->set_f_8(0x1);
  v3_0->set_f_4(Message0::M9::M14::M29::M45::E50_CONST_4);
  v3_0->set_f_2(0x6ca5cfad8c74ae58);
  v3_0->set_f_7(s->substr(0, 9));
  v3_0->set_f_29(0x5f23bf3047f36b41);
  v3_0->set_f_10(s->substr(0, 77));
  v3_0->set_f_11(0x7e43b21211f582bc);
  v3_0->set_f_12(0x7d190a41f81472da);
  v3_0->set_f_22(s->substr(0, 29));
  v3_0->set_f_15(0x2535d2977);
  v3_0->set_f_32(0x35768950b3e2c66);
  v3_0->set_f_16(0x42a34d4fc9cf742d);
  Message0::M9::M14::M32* v4_0 = v1->add_f_13();
  v4_0->set_f_0(s->substr(0, 5));
  v1->set_f_5(false);
  v1->set_f_2(false);
  v1->set_f_3(0x166d1120c3a4682c);
  Message0::M9::M24* v5 = v0_0->mutable_f_4();
  v5->add_f_0(Message0::M9::M24::E19_CONST_1);
  message->set_f_16(0x5b639718b);
  message->set_f_4(0x4904def60e584696);
  message->set_f_20(0x5e54787);
  Message0::M1* v6 = message->mutable_f_46();
  v6->set_f_6(s->substr(0, 367));
  v6->set_f_2(s->substr(0, 15));
  Message0::M1::M19* v7_0 = v6->add_f_13();
  v7_0->set_f_2(true);
  v7_0->set_f_6(0x18);
  v7_0->set_f_5(0x24c0d11c0ef703bc);
  v7_0->set_f_3(s->substr(0, 19));
  v7_0->set_f_0(0x47f31);
  v6->set_f_0(0x3d05eb7ed0b4cb44);
  v6->set_f_3(true);
  v6->set_f_5(0.198384);
  Message0::M7* v8_0 = message->add_f_55();
  Message0::M7::M15* v9_0 = v8_0->add_f_3();
  v9_0->set_f_0(false);
  Message0::M7::M15::M35* v10 = v9_0->mutable_f_10();
  v10->set_f_10(s->substr(0, 22));
  v10->set_f_1(s->substr(0, 1));
  v10->set_f_5(Message0::M7::M15::M35::E38_CONST_1);
  v10->set_f_8(0x5f4263cf71307b1b);
  v10->set_f_4(s->substr(0, 14));
  v10->set_f_7(0x24);
  v10->set_f_9(0.380288);
  v10->set_f_6(0.904663);
  v10->set_f_0(0x5b1ba9c29a95624e);
  v9_0->set_f_5(0x15fae87a2328a6f8);
  v9_0->set_f_3(0x7e0508d85a8def7f);
  v8_0->set_f_0(0xc7193d4);
  message->set_f_13(0.304513);
  message->set_f_25(0x70);
  Message0::M6* v11_0 = message->add_f_53();
  Message0::M6::M12* v12_0 = v11_0->add_f_2();
  Message0::M6::M12::M40* v13 = v12_0->mutable_f_3();
  v13->set_f_2(s->substr(0, 8));
  v13->set_f_1(0x39);
  Message0::M6::M12::M40::M43* v14_0 = v13->add_f_8();
  v14_0->set_f_0(0x3dfcc4d);
  v13->set_f_0(s->substr(0, 464));
  Message0::M6::M12::M36* v15 = v12_0->mutable_f_2();
  v15->add_f_0(Message0::M6::M12::M36::E39_CONST_4);
  message->set_f_19(true);
  message->set_f_18(0x5241f72e3bfba628);
  message->set_f_2(0.568691);
  message->add_f_15(Message0::E4_CONST_3);
  message->set_f_21(0x8a669);
  Message0::M3* v16 = message->mutable_f_49();
  v16->set_f_0(0x7);
  Message0::M3::M20* v17 = v16->mutable_f_4();
  Message0::M3::M20::M38* v18 = v17->mutable_f_5();
  (void)v18;  // Suppresses clang-tidy.
  v17->set_f_0(0x3cff1747);
  Message0::M3::M20::M31* v19 = v17->mutable_f_3();
  v19->set_f_0(0.827793);
  Message0::M3::M25* v20_0 = v16->add_f_6();
  Message0::M3::M25::M39* v21_0 = v20_0->add_f_4();
  v21_0->set_f_0(0x51330ee12c824a35);
  v20_0->add_f_0(Message0::M3::M25::E20_CONST_3);
  v20_0->add_f_0(Message0::M3::M25::E20_CONST_3);
  Message0::M3::M17* v22 = v16->mutable_f_3();
  Message0::M3::M17::M30* v23 = v22->mutable_f_6();
  v23->set_f_0(s->substr(0, 1));
  v22->set_f_0(Message0::M3::M17::E16_CONST_3);
  message->set_f_8(0x13);
  message->set_f_10(0x539dbc86);
  Message0::M2* v24 = message->mutable_f_48();
  v24->add_f_1(Message0::M2::E9_CONST_2);
  v24->set_f_0(s->substr(0, 6));
  Message0::M2::M18* v25 = v24->mutable_f_12();
  Message0::M2::M18::M33* v26 = v25->mutable_f_7();
  v26->set_f_0(0x8);
  v25->set_f_1(0x87bfe7d17b55771);
  v25->add_f_0(Message0::M2::M18::E17_CONST_5);
  v24->set_f_2(s->substr(0, 3549));
  v24->set_f_4(0x411b88ccdb4e6327);
  v24->set_f_5(0x6b2f2829fa5d5fda);
  message->set_f_14(0x55);
  message->set_f_12(true);
  message->set_f_22(0.090466);
  Message0::M5* v27 = message->mutable_f_52();
  v27->set_f_0(s->substr(0, 23));
  Message0::M5::M23* v28 = v27->mutable_f_2();
  v28->set_f_0(0x7dc46813);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::E4 array_0[22] = {
      Message0::E4_CONST_2, Message0::E4_CONST_4, Message0::E4_CONST_2,
      Message0::E4_CONST_1, Message0::E4_CONST_1, Message0::E4_CONST_3,
      Message0::E4_CONST_3, Message0::E4_CONST_2, Message0::E4_CONST_5,
      Message0::E4_CONST_1, Message0::E4_CONST_4, Message0::E4_CONST_1,
      Message0::E4_CONST_3, Message0::E4_CONST_1, Message0::E4_CONST_2,
      Message0::E4_CONST_5, Message0::E4_CONST_1, Message0::E4_CONST_4,
      Message0::E4_CONST_5, Message0::E4_CONST_1, Message0::E4_CONST_2,
      Message0::E4_CONST_4,
  };
  for (auto v : array_0) {
    message->add_f_15(v);
  }
  message->set_f_22(0.503021);
  message->set_f_18(0x17065c5c55eb3ba8);
  message->set_f_23(0x176a12e);
  message->set_f_19(false);
  message->set_f_12(false);
  message->add_f_27(Message0::E6_CONST_1);
  message->set_f_9(Message0::E3_CONST_5);
  Message0::M10* v0 = message->mutable_f_60();
  v0->set_f_2(0x27);
  v0->set_f_1(0x60d1c28ee88703d);
  message->add_f_6(Message0::E2_CONST_4);
  Message0::M8* v1 = message->mutable_f_57();
  v1->set_f_3(0x41);
  Message0::M8::M16* v2 = v1->mutable_f_15();
  v2->set_f_0(Message0::M8::M16::E15_CONST_4);
  v1->set_f_0(Message0::M8::E10_CONST_1);
  v1->set_f_1(Message0::M8::E11_CONST_4);
  message->set_f_20(0xbbf623f);
  message->set_f_8(0x60);
  message->set_f_2(0.950660);
  Message0::M2* v3 = message->mutable_f_48();
  v3->set_f_2(s->substr(0, 3));
  v3->set_f_3(s->substr(0, 277));
  v3->set_f_4(0x76012e524bef4e6b);
  v3->set_f_0(s->substr(0, 16));
  Message0::M2::E9 array_1[21] = {
      Message0::M2::E9_CONST_1, Message0::M2::E9_CONST_1,
      Message0::M2::E9_CONST_2, Message0::M2::E9_CONST_5,
      Message0::M2::E9_CONST_4, Message0::M2::E9_CONST_4,
      Message0::M2::E9_CONST_2, Message0::M2::E9_CONST_1,
      Message0::M2::E9_CONST_4, Message0::M2::E9_CONST_4,
      Message0::M2::E9_CONST_4, Message0::M2::E9_CONST_4,
      Message0::M2::E9_CONST_5, Message0::M2::E9_CONST_3,
      Message0::M2::E9_CONST_3, Message0::M2::E9_CONST_5,
      Message0::M2::E9_CONST_2, Message0::M2::E9_CONST_5,
      Message0::M2::E9_CONST_5, Message0::M2::E9_CONST_5,
      Message0::M2::E9_CONST_1,
  };
  for (auto v : array_1) {
    v3->add_f_1(v);
  }
  message->set_f_16(0x9);
  message->set_f_14(0x144236);
  message->set_f_11(0x7c558630b65ce95f);
  message->set_f_21(0x3e);
  message->set_f_5(0x34b2d64a);
  message->set_f_3(0x9e5a2ae);
  Message0::M7* v4_0 = message->add_f_55();
  v4_0->set_f_0(0x1e);
  message->set_f_25(0x5a);
  Message0::M11* v5 = message->mutable_f_64();
  v5->set_f_1(true);
  v5->set_f_2(s->substr(0, 365));
  v5->set_f_0(0x10);
  message->set_f_28(0x6127bc75ef8c753);
  message->set_f_26(Message0::E5_CONST_4);
  message->set_f_24(0x69acbf2c4dfc3d77);
  message->set_f_0(Message0::E1_CONST_1);
  message->set_f_17(0x1ba787def60972d2);
  Message0::M1* v6 = message->mutable_f_46();
  v6->set_f_3(true);
  v6->set_f_2(s->substr(0, 162));
  Message0::M1::M19* v7_0 = v6->add_f_13();
  v7_0->set_f_5(0x4f20475363524e3f);
  v7_0->set_f_0(0x1d7363);
  v7_0->set_f_6(0x72);
  v7_0->set_f_1(s->substr(0, 24));
  v6->set_f_0(0x47df9ae6dfdd9c92);
  v6->set_f_1(Message0::M1::E7_CONST_5);
  v6->set_f_4(Message0::M1::E8_CONST_5);
  v6->set_f_5(0.211753);
  v6->set_f_6(s->substr(0, 3));
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
