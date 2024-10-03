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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/response/Message1.pb.h"

namespace fleetbench::rpc::P5::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_18(0.488065);
  message->set_f_10(0x49);
  message->set_f_8(0x46994c3a60af0171);
  Message1::M2* v0 = message->mutable_f_28();
  Message1::M2::M22* v1 = v0->mutable_f_3();
  Message1::M2::M22::M29* v2 = v1->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message1::M2::M13* v3_0 = v0->add_f_2();
  v3_0->set_f_0(0x44);
  message->set_f_1(0x1134a);
  message->set_f_19(0x36);
  message->set_f_7(0.279528);
  Message1::M5* v4_0 = message->add_f_31();
  v4_0->set_f_7(Message1::M5::E5_CONST_4);
  Message1::M5::E4 array_1[15] = {
      Message1::M5::E4_CONST_2, Message1::M5::E4_CONST_3,
      Message1::M5::E4_CONST_3, Message1::M5::E4_CONST_1,
      Message1::M5::E4_CONST_4, Message1::M5::E4_CONST_5,
      Message1::M5::E4_CONST_5, Message1::M5::E4_CONST_4,
      Message1::M5::E4_CONST_2, Message1::M5::E4_CONST_2,
      Message1::M5::E4_CONST_4, Message1::M5::E4_CONST_5,
      Message1::M5::E4_CONST_5, Message1::M5::E4_CONST_1,
      Message1::M5::E4_CONST_1,
  };
  for (auto v : array_1) {
    v4_0->add_f_5(v);
  }
  Message1::M5::M24* v5_0 = v4_0->add_f_16();
  v5_0->set_f_10(0.979242);
  v5_0->set_f_1(0xd);
  v5_0->set_f_0(0x1126352c1d655370);
  v5_0->set_f_4(0x474e83eef4480ae9);
  v5_0->set_f_7(true);
  v5_0->set_f_9(0x46);
  v4_0->set_f_6(0x76);
  Message1::M5::M17* v6 = v4_0->mutable_f_15();
  v6->set_f_0(0x4e);
  Message1::M5::M17::M25* v7_0 = v6->add_f_2();
  v7_0->set_f_2(0x48);
  v7_0->set_f_1(0x75);
  v7_0->set_f_3(Message1::M5::M17::M25::E15_CONST_4);
  v4_0->set_f_3(0xe);
  v4_0->set_f_4(0x33d77ab807cb788);
  v4_0->set_f_2(s->substr(0, 89));
  Message1::M5::M12* v8 = v4_0->mutable_f_14();
  Message1::M5::M12::M33* v9_0 = v8->add_f_3();
  v9_0->set_f_0(0.284576);
  Message1::M5::M12::M32* v10 = v8->mutable_f_2();
  v10->set_f_0(0x6e);
  v8->set_f_0(false);
  message->set_f_20(0x1525352eb0abb3b1);
  message->set_f_22(0.471062);
  message->set_f_13(0.598769);
  message->set_f_14(0.938256);
  message->set_f_11(0x7b);
  message->set_f_6(0x6d7b5a09c0d46519);
  message->set_f_24(0x26);
  Message1::E1 array_2[9] = {
      Message1::E1_CONST_1, Message1::E1_CONST_1, Message1::E1_CONST_2,
      Message1::E1_CONST_4, Message1::E1_CONST_1, Message1::E1_CONST_3,
      Message1::E1_CONST_1, Message1::E1_CONST_3, Message1::E1_CONST_2,
  };
  for (auto v : array_2) {
    message->add_f_3(v);
  }
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M2* v0 = message->mutable_f_28();
  Message1::M2::M23* v1 = v0->mutable_f_4();
  (void)v1;  // Suppresses clang-tidy.
  v0->set_f_0(0x7d963bde24900603);
  Message1::M5* v2_0 = message->add_f_31();
  v2_0->set_f_0(0x7527943578186fb8);
  v2_0->set_f_1(0.428211);
  v2_0->set_f_4(0x4d8efaac39e3891d);
  Message1::M5::M17* v3 = v2_0->mutable_f_15();
  (void)v3;  // Suppresses clang-tidy.
  v2_0->set_f_2(s->substr(0, 9));
  v2_0->set_f_7(Message1::M5::E5_CONST_5);
  Message1::M5::M7* v4 = v2_0->mutable_f_13();
  (void)v4;  // Suppresses clang-tidy.
  v2_0->set_f_3(0x14);
  Message1::M5* v2_1 = message->add_f_31();
  v2_1->set_f_7(Message1::M5::E5_CONST_4);
  v2_1->set_f_1(0.526298);
  Message1::M5::M24* v5_0 = v2_1->add_f_16();
  v5_0->set_f_2(Message1::M5::M24::E13_CONST_4);
  v5_0->set_f_5(0x2fd519cf3e934b62);
  v5_0->set_f_4(0x2ffa9ac44a7996f0);
  v5_0->set_f_10(0.647368);
  v5_0->set_f_0(0x7b757e0c3c249a1b);
  v5_0->set_f_7(true);
  v5_0->set_f_8(0x24e0196f3cf7c7be);
  Message1::M5::M24::M28* v6_0 = v5_0->add_f_12();
  v6_0->set_f_0(0x19);
  Message1::M5::M24::M28* v6_1 = v5_0->add_f_12();
  v6_1->set_f_0(0x2d7b);
  v5_0->set_f_9(0x74);
  v2_1->set_f_2(s->substr(0, 79));
  v2_1->set_f_8(0.770936);
  Message1::M5::E4 array_0[12] = {
      Message1::M5::E4_CONST_3, Message1::M5::E4_CONST_5,
      Message1::M5::E4_CONST_4, Message1::M5::E4_CONST_2,
      Message1::M5::E4_CONST_4, Message1::M5::E4_CONST_2,
      Message1::M5::E4_CONST_5, Message1::M5::E4_CONST_4,
      Message1::M5::E4_CONST_4, Message1::M5::E4_CONST_4,
      Message1::M5::E4_CONST_3, Message1::M5::E4_CONST_2,
  };
  for (auto v : array_0) {
    v2_1->add_f_5(v);
  }
  v2_1->set_f_10(Message1::M5::E7_CONST_2);
  v2_1->set_f_0(0x623ea322876f4635);
  v2_1->set_f_3(0x64);
  Message1::M5::M12* v7 = v2_1->mutable_f_14();
  Message1::M5::M12::M32* v8 = v7->mutable_f_2();
  v8->set_f_0(0x2e);
  v7->set_f_0(true);
  v2_1->set_f_6(0x32);
  Message1::M4* v9_0 = message->add_f_30();
  Message1::M4::M19* v10_0 = v9_0->add_f_6();
  Message1::M4::M19::M37* v11 = v10_0->mutable_f_2();
  v11->set_f_0(0x8f29128e3334468);
  Message1::M4::M16* v12_0 = v9_0->add_f_4();
  v12_0->add_f_2(Message1::M4::M16::E10_CONST_5);
  Message1::M4::M16::M36* v13 = v12_0->mutable_f_4();
  v13->set_f_0(0.149823);
  Message1::M4::M16::M36::M39* v14 = v13->mutable_f_2();
  v14->set_f_8(0x23);
  v14->set_f_5(0x487c1d342f2b9767);
  v14->set_f_2(0.992931);
  v14->set_f_1(0.962823);
  v14->set_f_11(0.971829);
  v14->set_f_0(0x56a6b2a113492eb4);
  v14->set_f_6(0.463865);
  v12_0->set_f_1(Message1::M4::M16::E9_CONST_2);
  Message1::M4::M10* v15_0 = v9_0->add_f_3();
  v15_0->set_f_0(0.941675);
  Message1::M4::M10::M30* v16_0 = v15_0->add_f_3();
  v16_0->set_f_2(false);
  v16_0->set_f_1(0x6e);
  v16_0->set_f_4(0x35);
  v16_0->set_f_3(0x17b207e9);
  v16_0->set_f_11(0x6d645e8d4e7a9a9f);
  Message1::M4::M10::M30::E18 array_1[12] = {
      Message1::M4::M10::M30::E18_CONST_1, Message1::M4::M10::M30::E18_CONST_3,
      Message1::M4::M10::M30::E18_CONST_4, Message1::M4::M10::M30::E18_CONST_5,
      Message1::M4::M10::M30::E18_CONST_5, Message1::M4::M10::M30::E18_CONST_2,
      Message1::M4::M10::M30::E18_CONST_2, Message1::M4::M10::M30::E18_CONST_2,
      Message1::M4::M10::M30::E18_CONST_3, Message1::M4::M10::M30::E18_CONST_5,
      Message1::M4::M10::M30::E18_CONST_1, Message1::M4::M10::M30::E18_CONST_3,
  };
  for (auto v : array_1) {
    v16_0->add_f_8(v);
  }
  Message1::M4::M10::M30::E16 array_2[10] = {
      Message1::M4::M10::M30::E16_CONST_4, Message1::M4::M10::M30::E16_CONST_1,
      Message1::M4::M10::M30::E16_CONST_1, Message1::M4::M10::M30::E16_CONST_5,
      Message1::M4::M10::M30::E16_CONST_2, Message1::M4::M10::M30::E16_CONST_1,
      Message1::M4::M10::M30::E16_CONST_5, Message1::M4::M10::M30::E16_CONST_5,
      Message1::M4::M10::M30::E16_CONST_3, Message1::M4::M10::M30::E16_CONST_5,
  };
  for (auto v : array_2) {
    v16_0->add_f_5(v);
  }
  v16_0->set_f_0(0x32);
  v16_0->set_f_6(0.555079);
  v16_0->set_f_10(0.770033);
  Message1::M4::M10::M27* v17 = v15_0->mutable_f_2();
  v17->set_f_0(0x5ffe4f1ca1bf33aa);
  Message1::M4::M21* v18 = v9_0->mutable_f_7();
  Message1::M4::M21::E12 array_3[9] = {
      Message1::M4::M21::E12_CONST_5, Message1::M4::M21::E12_CONST_4,
      Message1::M4::M21::E12_CONST_5, Message1::M4::M21::E12_CONST_4,
      Message1::M4::M21::E12_CONST_4, Message1::M4::M21::E12_CONST_4,
      Message1::M4::M21::E12_CONST_3, Message1::M4::M21::E12_CONST_4,
      Message1::M4::M21::E12_CONST_2,
  };
  for (auto v : array_3) {
    v18->add_f_1(v);
  }
  v9_0->set_f_1(0.813670);
  v9_0->set_f_0(0x84a8f31f77abca3);
  message->set_f_18(0.183882);
  message->set_f_8(0x230ba10208aa4ba1);
  message->set_f_19(0x72);
  Message1::M3* v19_0 = message->add_f_29();
  Message1::M3::M6* v20 = v19_0->mutable_f_2();
  v20->set_f_0(0x5b);
  Message1::M3::M6::M26* v21_0 = v20->add_f_2();
  v21_0->set_f_0(0.476079);
  Message1::M3::M20* v22 = v19_0->mutable_f_4();
  (void)v22;  // Suppresses clang-tidy.
  Message1::M3* v19_1 = message->add_f_29();
  v19_1->set_f_0(0x70);
  Message1::M3::M20* v23 = v19_1->mutable_f_4();
  Message1::M3::M20::E11 array_4[9] = {
      Message1::M3::M20::E11_CONST_4, Message1::M3::M20::E11_CONST_2,
      Message1::M3::M20::E11_CONST_3, Message1::M3::M20::E11_CONST_1,
      Message1::M3::M20::E11_CONST_3, Message1::M3::M20::E11_CONST_3,
      Message1::M3::M20::E11_CONST_5, Message1::M3::M20::E11_CONST_5,
      Message1::M3::M20::E11_CONST_5,
  };
  for (auto v : array_4) {
    v23->add_f_0(v);
  }
  Message1::M3::M6* v24 = v19_1->mutable_f_2();
  v24->set_f_0(0x22);
  Message1::M3::M6::M26* v25_0 = v24->add_f_2();
  (void)v25_0;  // Suppresses clang-tidy.
  Message1::M3::M6::M26* v25_1 = v24->add_f_2();
  (void)v25_1;  // Suppresses clang-tidy.
  message->set_f_13(0.742805);
  message->set_f_23(0x39);
  message->set_f_0(0x3ae1570547f36f48);
  message->set_f_2(false);
  message->set_f_4(0.743278);
  message->set_f_1(0x5b);
  Message1::E2 array_5[9] = {
      Message1::E2_CONST_3, Message1::E2_CONST_2, Message1::E2_CONST_5,
      Message1::E2_CONST_1, Message1::E2_CONST_3, Message1::E2_CONST_1,
      Message1::E2_CONST_5, Message1::E2_CONST_1, Message1::E2_CONST_4,
  };
  for (auto v : array_5) {
    message->add_f_16(v);
  }
  message->set_f_15(0x15ad);
  message->set_f_14(0.380446);
  message->set_f_9(0x232fd6566bd64e50);
  message->set_f_17(0x3410aaa133475075);
  message->set_f_12(0.381565);
  message->set_f_6(0x6a63d1f8959f400a);
  message->set_f_11(0x18);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_5(0x212409d87ff9fc9);
  message->set_f_6(0x652b3609b96eb593);
  message->set_f_17(0x64c5d4bd283d1b1e);
  Message1::M2* v0 = message->mutable_f_28();
  Message1::M2::M23* v1 = v0->mutable_f_4();
  (void)v1;  // Suppresses clang-tidy.
  v0->set_f_0(0x1da5685d196b2610);
  Message1::M2::M22* v2 = v0->mutable_f_3();
  Message1::M2::M22::M29* v3 = v2->mutable_f_2();
  v3->set_f_0(0.538169);
  v2->set_f_0(0x75);
  message->set_f_21(0x4d799088f81b018b);
  message->set_f_9(0x6ee3c9e82f4dfb41);
  message->set_f_10(0x19a);
  message->set_f_0(0x1964a8f79d275e83);
  Message1::E1 array_0[12] = {
      Message1::E1_CONST_1, Message1::E1_CONST_1, Message1::E1_CONST_5,
      Message1::E1_CONST_4, Message1::E1_CONST_3, Message1::E1_CONST_4,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_5,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_3(v);
  }
  message->set_f_20(0x21946e252de273a4);
  message->set_f_8(0x6ce8f3560f61d984);
  message->set_f_19(0x42);
  Message1::M4* v4_0 = message->add_f_30();
  Message1::M4::M19* v5_0 = v4_0->add_f_6();
  Message1::M4::M19::M37* v6 = v5_0->mutable_f_2();
  v6->set_f_0(0xb881f4cb0457b86);
  v5_0->set_f_0(0x42);
  Message1::M4::M18* v7_0 = v4_0->add_f_5();
  v7_0->set_f_0(0x6a);
  Message1::M4::M18::M34* v8 = v7_0->mutable_f_2();
  v8->set_f_0(0xbd6cfaa742d430);
  Message1::M4::M18::M34::M40* v9_0 = v8->add_f_15();
  v9_0->set_f_8(0x5a6d62c6790752c8);
  v9_0->set_f_4(Message1::M4::M18::M34::M40::E25_CONST_5);
  v9_0->set_f_6(0x49f031a375d38117);
  v9_0->set_f_9(0x70);
  v9_0->set_f_11(0x6f);
  v9_0->set_f_1(0x17);
  v9_0->set_f_2(0xe4ac745979d334d);
  v9_0->set_f_7(0xb55);
  v8->set_f_8(0.055786);
  v8->set_f_9(Message1::M4::M18::M34::E21_CONST_1);
  v8->set_f_1(0x5241f72e3bfba628);
  v8->set_f_11(0x4);
  v8->set_f_2(Message1::M4::M18::M34::E19_CONST_5);
  v8->set_f_10(false);
  v8->set_f_3(0.170252);
  Message1::M4::M21* v10 = v4_0->mutable_f_7();
  v10->set_f_0(0x3bfc00b8b7a8a81a);
  v10->add_f_1(Message1::M4::M21::E12_CONST_2);
  v10->add_f_1(Message1::M4::M21::E12_CONST_3);
  v10->add_f_1(Message1::M4::M21::E12_CONST_1);
  v10->add_f_1(Message1::M4::M21::E12_CONST_5);
  Message1::M4::M10* v11_0 = v4_0->add_f_3();
  Message1::M4::M10::M27* v12 = v11_0->mutable_f_2();
  (void)v12;  // Suppresses clang-tidy.
  Message1::M4::M10::M30* v13_0 = v11_0->add_f_3();
  v13_0->set_f_1(0x6d);
  v13_0->set_f_2(false);
  v13_0->set_f_4(0x6cdef);
  v13_0->set_f_6(0.667487);
  v13_0->set_f_9(0.445771);
  v13_0->set_f_11(0x3f5cf1482b2c7865);
  Message1::M4::M10::M30* v13_1 = v11_0->add_f_3();
  v13_1->set_f_4(0x3b);
  v13_1->set_f_1(0x1d);
  v13_1->add_f_8(Message1::M4::M10::M30::E18_CONST_5);
  v13_1->set_f_2(false);
  v13_1->set_f_10(0.333849);
  v13_1->set_f_9(0.384585);
  v13_1->set_f_0(0x67);
  v13_1->set_f_3(0xb63b4c6);
  v13_1->set_f_6(0.200056);
  v4_0->set_f_1(0.479605);
  Message1::M4* v4_1 = message->add_f_30();
  Message1::M4::M18* v14_0 = v4_1->add_f_5();
  v14_0->set_f_0(0x2);
  v4_1->set_f_1(0.360684);
  v4_1->set_f_0(0x3582301d8e54960f);
  message->set_f_15(0x5c);
  message->set_f_2(true);
  message->set_f_14(0.612398);
  message->set_f_23(0x54);
  message->set_f_18(0.314422);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_4(0.133222);
  message->set_f_20(0x2ea659e594b207bf);
  message->set_f_17(0x65d1b31a213015b9);
  Message1::M4* v0_0 = message->add_f_30();
  Message1::M4::M10* v1_0 = v0_0->add_f_3();
  Message1::M4::M10::M27* v2 = v1_0->mutable_f_2();
  v2->set_f_0(0x4083126826b2c90e);
  Message1::M4::M10::M30* v3_0 = v1_0->add_f_3();
  v3_0->set_f_6(0.099296);
  v3_0->set_f_10(0.684760);
  v3_0->set_f_2(true);
  v3_0->set_f_7(Message1::M4::M10::M30::E17_CONST_3);
  v3_0->set_f_9(0.946468);
  v3_0->set_f_1(0x2992);
  v3_0->add_f_8(Message1::M4::M10::M30::E18_CONST_4);
  v3_0->add_f_5(Message1::M4::M10::M30::E16_CONST_5);
  v3_0->set_f_11(0x72915e1a64bb148f);
  v3_0->set_f_0(0x14);
  v1_0->set_f_0(0.854800);
  v0_0->set_f_1(0.362137);
  Message1::M4::M16* v4_0 = v0_0->add_f_4();
  v4_0->set_f_1(Message1::M4::M16::E9_CONST_3);
  v4_0->set_f_0(0.596817);
  Message1::M4::M16::M36* v5 = v4_0->mutable_f_4();
  Message1::M4::M16::M36::M39* v6 = v5->mutable_f_2();
  v6->set_f_2(0.921911);
  v6->set_f_7(0x29e43c3a6875c968);
  v6->set_f_4(0.920816);
  v6->set_f_9(Message1::M4::M16::M36::M39::E24_CONST_2);
  v6->set_f_8(0x4d);
  v6->set_f_0(0x5787c4f52083da00);
  v6->set_f_6(0.079403);
  v6->set_f_3(0.462097);
  v6->set_f_11(0.231024);
  Message1::M4::M21* v7 = v0_0->mutable_f_7();
  (void)v7;  // Suppresses clang-tidy.
  Message1::M4::M19* v8_0 = v0_0->add_f_6();
  v8_0->set_f_0(0x1f911c);
  Message1::M4::M18* v9_0 = v0_0->add_f_5();
  Message1::M4::M18::M34* v10 = v9_0->mutable_f_2();
  v10->set_f_11(0x2547);
  Message1::M4::M18::M34::M40* v11_0 = v10->add_f_15();
  v11_0->set_f_11(0x6c);
  v11_0->set_f_2(0x63861cc818063985);
  v11_0->set_f_3(0.055168);
  v11_0->set_f_10(0.056357);
  v11_0->set_f_5(0x69acbf2c4dfc3d77);
  Message1::M4::M18::M34::M40::M41* v12 = v11_0->mutable_f_15();
  v12->set_f_13(Message1::M4::M18::M34::M40::M41::E26_CONST_5);
  Message1::M4::M18::M34::M40::M41::M43* v13 = v12->mutable_f_27();
  Message1::M4::M18::M34::M40::M41::M43::M54* v14_0 = v13->add_f_2();
  v14_0->set_f_5(0x5a);
  v14_0->set_f_13(0x3aa0);
  v14_0->set_f_0(0.532396);
  v14_0->set_f_14(0x40);
  v14_0->set_f_9(0x6638913b4e165bea);
  v14_0->set_f_2(0x25bc98cd);
  v14_0->set_f_1(0x795c341d83f5b961);
  v14_0->set_f_15(0x30);
  v14_0->set_f_4(Message1::M4::M18::M34::M40::M41::M43::M54::E34_CONST_2);
  v14_0->set_f_6(0x28);
  v14_0->set_f_10(0x25);
  v14_0->set_f_11(0x21);
  Message1::M4::M18::M34::M40::M41::M43::E30 array_0[16] = {
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_2,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_3,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_1,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_2,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_2,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_1,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_1,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_1,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_5,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_1,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_3,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_5,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_1,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_4,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_5,
      Message1::M4::M18::M34::M40::M41::M43::E30_CONST_2,
  };
  for (auto v : array_0) {
    v13->add_f_0(v);
  }
  v12->set_f_21(0x3b);
  v12->set_f_4(0x46eed4383d82b1cf);
  v12->set_f_20(0.508540);
  v12->set_f_11(0x4);
  v12->set_f_17(0.174275);
  v12->set_f_7(0xd087c41b0795e51);
  v12->set_f_8(0x2b00f9f8a2956cc5);
  v12->set_f_12(0.817839);
  v12->set_f_9(0.135542);
  v12->set_f_16(0x3e);
  v12->add_f_22(Message1::M4::M18::M34::M40::M41::E28_CONST_3);
  Message1::M4::M18::M34::M40::M41::M42* v15 = v12->mutable_f_26();
  (void)v15;  // Suppresses clang-tidy.
  v12->set_f_2(0x45);
  v12->set_f_18(0x9);
  v12->set_f_15(0xd478bb50a471287);
  v12->set_f_19(0x2ad04f2ccb2d44d2);
  Message1::M4::M18::M34::M40::M41::M46* v16 = v12->mutable_f_30();
  v16->set_f_5(0x9e751);
  v16->set_f_1(0.779230);
  Message1::M4::M18::M34::M40::M41::M46::M51* v17 = v16->mutable_f_8();
  v17->set_f_0(0x66);
  v17->set_f_10(false);
  v17->set_f_6(0x21);
  v17->set_f_4(0x41);
  v17->set_f_8(0x3f);
  v17->set_f_2(0x1c26bd);
  v17->set_f_3(0x3a65db77fedd0f46);
  v17->set_f_5(0x735ee94503b13d30);
  Message1::M4::M18::M34::M40::M41::M46::E32 array_1[15] = {
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_3,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_3,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_2,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_2,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_2,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_3,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_4,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_3,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_2,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_4,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_1,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_5,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_1,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_5,
      Message1::M4::M18::M34::M40::M41::M46::E32_CONST_2,
  };
  for (auto v : array_1) {
    v16->add_f_6(v);
  }
  v16->set_f_0(0.020809);
  v16->set_f_3(0.017893);
  v16->set_f_2(0.955180);
  Message1::M4::M18::M34::M40::M41::E27 array_2[7] = {
      Message1::M4::M18::M34::M40::M41::E27_CONST_4,
      Message1::M4::M18::M34::M40::M41::E27_CONST_1,
      Message1::M4::M18::M34::M40::M41::E27_CONST_3,
      Message1::M4::M18::M34::M40::M41::E27_CONST_4,
      Message1::M4::M18::M34::M40::M41::E27_CONST_1,
      Message1::M4::M18::M34::M40::M41::E27_CONST_5,
      Message1::M4::M18::M34::M40::M41::E27_CONST_1,
  };
  for (auto v : array_2) {
    v12->add_f_14(v);
  }
  Message1::M4::M18::M34::M40::M41::M49* v18 = v12->mutable_f_33();
  v18->set_f_6(0.085704);
  v18->set_f_7(0x26);
  v18->set_f_2(0.747057);
  v18->set_f_1(0x54cd308a73d9c751);
  v18->set_f_10(0x461d415ccf2e61);
  v18->set_f_9(0x31cbbb81);
  v18->set_f_0(Message1::M4::M18::M34::M40::M41::M49::E33_CONST_5);
  v18->set_f_5(0x55aec5bf5655634d);
  v18->set_f_4(0x74);
  v12->set_f_10(0.339385);
  v12->set_f_6(0x3b);
  v12->set_f_23(0x59);
  v12->set_f_5(0x30);
  Message1::M4::M18::M34::M40::M41::M45* v19 = v12->mutable_f_29();
  v19->set_f_2(0x77);
  v19->set_f_3(Message1::M4::M18::M34::M40::M41::M45::E31_CONST_4);
  v19->set_f_0(0x26);
  v19->set_f_1(0x693bacf0e9c94f86);
  v11_0->set_f_12(0.887048);
  v11_0->set_f_1(0x11);
  v11_0->set_f_0(0.815306);
  v11_0->set_f_8(0x43b2d964de4aced2);
  v10->set_f_6(0x6b);
  v10->set_f_1(0x7d81cf8bb268988e);
  v10->set_f_9(Message1::M4::M18::M34::E21_CONST_4);
  v10->set_f_12(0.634915);
  v10->set_f_4(0.979230);
  v10->set_f_7(0.048741);
  v10->set_f_10(false);
  v10->set_f_5(Message1::M4::M18::M34::E20_CONST_5);
  v10->set_f_8(0.963025);
  message->set_f_14(0.175950);
  message->set_f_8(0x3e22a256c4a12fc);
  message->set_f_10(0x26);
  Message1::M2* v20 = message->mutable_f_28();
  v20->set_f_0(0x125a964cde719684);
  Message1::M2::M23* v21 = v20->mutable_f_4();
  v21->set_f_0(0.256914);
  message->set_f_2(true);
  message->set_f_6(0x74c209dccb9f816e);
  message->set_f_18(0.973797);
  Message1::M1* v22 = message->mutable_f_27();
  v22->set_f_4(0x9);
  v22->set_f_5(0x30);
  v22->set_f_3(0x680639857857ff5e);
  v22->set_f_8(0x1a9c);
  v22->set_f_10(0xa);
  v22->set_f_9(0x26);
  v22->set_f_7(0x6b1476d406651852);
  Message1::M1::M8* v23 = v22->mutable_f_13();
  v23->set_f_0(0xa40cdda);
  Message1::M1::M11* v24_0 = v22->add_f_15();
  v24_0->set_f_4(0.234545);
  v24_0->set_f_1(0.591355);
  v24_0->set_f_5(0.249828);
  v24_0->set_f_0(0x6a858488a3924f7d);
  v22->set_f_2(0.466370);
  v22->set_f_11(Message1::M1::E3_CONST_2);
  Message1::M3* v25_0 = message->add_f_29();
  v25_0->set_f_0(0x5f);
  Message1::M3::M14* v26 = v25_0->mutable_f_3();
  v26->set_f_0(0.208254);
  Message1::M3::M14::M31* v27 = v26->mutable_f_2();
  v27->set_f_0(0x35f6196b8cfe07);
  Message1::M3::M14::M38* v28 = v26->mutable_f_3();
  v28->set_f_5(Message1::M3::M14::M38::E23_CONST_4);
  v28->set_f_4(0x1204084fa17c7779);
  v28->set_f_2(0.829709);
  v28->set_f_0(0.308724);
  Message1::M3::M6* v29 = v25_0->mutable_f_2();
  Message1::M3::M6::M26* v30_0 = v29->add_f_2();
  (void)v30_0;  // Suppresses clang-tidy.
  Message1::M3::M6::M26* v30_1 = v29->add_f_2();
  (void)v30_1;  // Suppresses clang-tidy.
  v29->set_f_0(0x54);
  Message1::M3* v25_1 = message->add_f_29();
  Message1::M3::M6* v31 = v25_1->mutable_f_2();
  v31->set_f_0(0x51);
  Message1::M3::M6::M26* v32_0 = v31->add_f_2();
  (void)v32_0;  // Suppresses clang-tidy.
  v25_1->set_f_0(0x1d3c22);
  Message1::M3::M20* v33 = v25_1->mutable_f_4();
  (void)v33;  // Suppresses clang-tidy.
  Message1::M3::M14* v34 = v25_1->mutable_f_3();
  Message1::M3::M14::M31* v35 = v34->mutable_f_2();
  v35->set_f_0(0x66d39ac624ffc1d3);
  Message1::M3::M14::M38* v36 = v34->mutable_f_3();
  v36->set_f_4(0x517a3a4b3abd090b);
  v36->set_f_0(0.805388);
  v36->set_f_2(0.575027);
  v36->set_f_5(Message1::M3::M14::M38::E23_CONST_1);
  v36->set_f_3(0.060758);
  v36->set_f_1(0x19);
  v34->set_f_0(0.954486);
  message->set_f_22(0.428058);
  Message1::E1 array_3[10] = {
      Message1::E1_CONST_1, Message1::E1_CONST_4, Message1::E1_CONST_2,
      Message1::E1_CONST_1, Message1::E1_CONST_4, Message1::E1_CONST_3,
      Message1::E1_CONST_5, Message1::E1_CONST_5, Message1::E1_CONST_5,
      Message1::E1_CONST_4,
  };
  for (auto v : array_3) {
    message->add_f_3(v);
  }
  message->set_f_0(0x51693750a485a6e);
  message->set_f_12(0.042798);
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
}  // namespace fleetbench::rpc::P5::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_RESPONSE_ACCESS_MESSAGE1_H_
