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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message0.pb.h"

namespace fleetbench::rpc::P9::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_10(0x5a);
  message->set_f_5(s->substr(0, 16));
  message->set_f_17(0x224a18b4be22db67);
  message->set_f_18(s->substr(0, 3));
  message->set_f_7(s->substr(0, 28));
  Message0::M5* v0 = message->mutable_f_62();
  Message0::M5::M10* v1 = v0->mutable_f_4();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M5::M13* v2 = v0->mutable_f_5();
  v2->set_f_0(0x71f97b1e8dc91642);
  Message0::M5::M13::M26* v3_0 = v2->add_f_2();
  v3_0->set_f_1(false);
  v3_0->set_f_0(0x10f88c24e79ae3d2);
  Message0::M5::M19* v4 = v0->mutable_f_9();
  v4->set_f_1(true);
  v4->set_f_2(s->substr(0, 2));
  v4->set_f_3(s->substr(0, 2108));
  v4->set_f_0(0x7e5b71f68da3a03a);
  v0->set_f_0(0x523b89533728418c);
  Message0::M5::M25* v5 = v0->mutable_f_12();
  v5->set_f_2(0x7718da4bd9e22bb3);
  v5->set_f_1(0x16);
  message->set_f_24(true);
  message->set_f_21(0x68);
  message->set_f_3(0xf6f);
  Message0::M3* v6 = message->mutable_f_60();
  v6->set_f_0(0x55dc522eb3b07a95);
  Message0::M3::M23* v7 = v6->mutable_f_11();
  v7->set_f_3(s->substr(0, 476));
  v7->set_f_2(0x2a);
  v7->set_f_0(s->substr(0, 3));
  Message0::M3::M23::E5 array_1[16] = {
      Message0::M3::M23::E5_CONST_3, Message0::M3::M23::E5_CONST_5,
      Message0::M3::M23::E5_CONST_3, Message0::M3::M23::E5_CONST_2,
      Message0::M3::M23::E5_CONST_1, Message0::M3::M23::E5_CONST_5,
      Message0::M3::M23::E5_CONST_3, Message0::M3::M23::E5_CONST_2,
      Message0::M3::M23::E5_CONST_4, Message0::M3::M23::E5_CONST_3,
      Message0::M3::M23::E5_CONST_3, Message0::M3::M23::E5_CONST_2,
      Message0::M3::M23::E5_CONST_4, Message0::M3::M23::E5_CONST_1,
      Message0::M3::M23::E5_CONST_3, Message0::M3::M23::E5_CONST_2,
  };
  for (auto v : array_1) {
    v7->add_f_1(v);
  }
  Message0::M3::M22* v8_0 = v6->add_f_10();
  v8_0->set_f_0(0x1459);
  v8_0->set_f_2(s->substr(0, 2));
  Message0::M3::M22::M32* v9 = v8_0->mutable_f_9();
  v9->set_f_0(0x188104);
  v8_0->set_f_1(false);
  Message0::M3::M21* v10 = v6->mutable_f_8();
  v10->add_f_0(s->substr(0, 8));
  v10->set_f_1(0x34);
  v10->set_f_2(0x1947);
  Message0::M3::M17* v11_0 = v6->add_f_3();
  v11_0->set_f_0(0x551366478e9b1c65);
  message->set_f_19(false);
  message->set_f_25(0.514726);
  message->set_f_4(s->substr(0, 8));
  message->set_f_28(false);
  message->set_f_9(0x683d7c1d445127d);
  Message0::M4* v12_0 = message->add_f_61();
  v12_0->set_f_17(0x77681a359b0bc48);
  v12_0->set_f_6(0x2f529cf1);
  v12_0->set_f_18(0x49);
  v12_0->set_f_13(0x735fb1e61690ee0a);
  v12_0->set_f_11(true);
  v12_0->set_f_22(0x16cc39d825be207a);
  v12_0->set_f_0(0x673633b836b0b055);
  Message0::M4::M20* v13 = v12_0->mutable_f_44();
  v13->set_f_0(0x20);
  v12_0->set_f_21(false);
  v12_0->set_f_5(0x37);
  v12_0->set_f_7(0x129b80);
  v12_0->set_f_15(0x6c);
  v12_0->set_f_12(0x383c768fb080141e);
  v12_0->set_f_3(s->substr(0, 8));
  Message0::M4::M12* v14 = v12_0->mutable_f_43();
  v14->set_f_1(0xb);
  v14->set_f_5(0xa5525a9);
  v12_0->set_f_1(0x51331b23);
  v12_0->set_f_20(0x69);
  Message0::M1* v15 = message->mutable_f_56();
  Message0::M1::M8* v16 = v15->mutable_f_4();
  Message0::M1::M8::M27* v17 = v16->mutable_f_7();
  Message0::M1::M8::M27::M45* v18_0 = v17->add_f_9();
  v18_0->set_f_1(0xcbe6bcc7e9d3ac);
  v18_0->set_f_0(0x39);
  v17->set_f_2(0x780);
  v17->set_f_0(false);
  v17->set_f_3(0x22);
  Message0::M1::M11* v19 = v15->mutable_f_7();
  Message0::M1::M11::M29* v20 = v19->mutable_f_3();
  v20->set_f_0(0x77ce6c36dd04396f);
  v19->set_f_0(0x5d);
  Message0::M1::M16* v21 = v15->mutable_f_8();
  v21->set_f_4(0x4);
  v21->set_f_0(false);
  message->set_f_27(0x55);
  message->set_f_23(0x325745cd);
  message->set_f_6(0xff6e2);
  message->set_f_2(false);
  message->set_f_16(0x69);
  message->set_f_15(0x6f);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_10(0x135622);
  message->set_f_1(0x5209b3b2f8cf1007);
  message->set_f_9(0x51e10c350c7b42c8);
  message->set_f_11(0x4);
  Message0::M1* v0 = message->mutable_f_56();
  Message0::M1::M11* v1 = v0->mutable_f_7();
  v1->set_f_0(0x26);
  Message0::M1::M11::M29* v2 = v1->mutable_f_3();
  v2->set_f_0(0x78c082a8a2cf7bd9);
  Message0::M1::M11::M34* v3 = v1->mutable_f_4();
  (void)v3;  // Suppresses clang-tidy.
  v0->set_f_0(0x688bb8348b5ef1bb);
  message->set_f_27(0x26);
  message->set_f_4(s->substr(0, 1));
  message->set_f_14(0x5b234aa881ce29cf);
  message->set_f_3(0x1a);
  message->set_f_8(false);
  Message0::M2* v4_0 = message->add_f_58();
  v4_0->set_f_4(s->substr(0, 52));
  v4_0->set_f_1(true);
  v4_0->set_f_0(0x41122f6bf011702);
  v4_0->set_f_2(0x2710);
  Message0::M2::M7* v5 = v4_0->mutable_f_16();
  (void)v5;  // Suppresses clang-tidy.
  v4_0->set_f_3(0x45);
  Message0::M2::M15* v6 = v4_0->mutable_f_19();
  v6->set_f_0(0x625a1d11);
  Message0::M2::M15::M30* v7 = v6->mutable_f_7();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_18(s->substr(0, 419));
  message->set_f_21(0x2e74);
  message->set_f_2(true);
  message->set_f_23(0x195ba3bd);
  message->set_f_0(false);
  message->set_f_6(0x54);
  message->set_f_29(0x3a9c1b154256ccde);
  message->add_f_13(Message0::E1_CONST_4);
  message->set_f_17(0x6a4ee29e621a3e94);
  message->set_f_22(s->substr(0, 32));
  Message0::M5* v8 = message->mutable_f_62();
  Message0::M5::M25* v9 = v8->mutable_f_12();
  v9->set_f_3(0x1a00);
  v9->set_f_1(0x571311c);
  v9->set_f_0(0x1c7c);
  Message0::M5::M14* v10 = v8->mutable_f_6();
  v10->set_f_0(s->substr(0, 4));
  Message0::M5::M13* v11 = v8->mutable_f_5();
  Message0::M5::M13::M26* v12_0 = v11->add_f_2();
  v12_0->set_f_0(0x7b40c5b57de4215);
  Message0::M5::M13::M26::M39* v13 = v12_0->mutable_f_3();
  (void)v13;  // Suppresses clang-tidy.
  v12_0->set_f_1(true);
  v8->set_f_0(0x243f58704262ad0);
  message->set_f_5(s->substr(0, 7));
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_56();
  Message0::M1::M16* v1 = v0->mutable_f_8();
  v1->set_f_4(0x1b7f);
  v1->set_f_3(0x38);
  v1->set_f_1(0x48);
  Message0::M1::M11* v2 = v0->mutable_f_7();
  Message0::M1::M11::M29* v3 = v2->mutable_f_3();
  v3->set_f_0(0x4bf862ca3ec4c09e);
  message->set_f_23(0x79baf674);
  message->set_f_7(s->substr(0, 109));
  message->set_f_15(0x195c828a1);
  message->set_f_22(s->substr(0, 3));
  message->set_f_3(0x56);
  message->set_f_21(0x1c);
  message->set_f_14(0x36d643e2d50113d1);
  message->set_f_4(s->substr(0, 103));
  message->set_f_27(0x78);
  message->set_f_25(0.786642);
  message->set_f_16(0xb);
  message->set_f_6(0x7c);
  message->set_f_17(0x5a011af9d2260b3);
  message->set_f_18(s->substr(0, 28));
  message->set_f_8(false);
  message->set_f_20(0xe4af05fe82aa7e);
  message->set_f_11(0x36);
  Message0::M2* v4_0 = message->add_f_58();
  Message0::M2::M15* v5 = v4_0->mutable_f_19();
  Message0::M2::M15::M30* v6 = v5->mutable_f_7();
  v6->set_f_0(0x4d0dd194);
  v5->set_f_2(0x7d);
  v5->set_f_1(0x61af87dba78b7507);
  v5->set_f_0(0x596f6a44);
  v4_0->set_f_4(s->substr(0, 27));
  v4_0->set_f_2(0x6c);
  Message0::M2::M6* v7 = v4_0->mutable_f_15();
  Message0::M2::M6::M35* v8_0 = v7->add_f_13();
  v8_0->set_f_17(false);
  v8_0->set_f_0(0x4ac9f0b790426e8a);
  v8_0->set_f_19(0x121ea5727e8796);
  v8_0->add_f_21(Message0::M2::M6::M35::E6_CONST_5);
  v8_0->set_f_31(true);
  v8_0->set_f_5(false);
  v8_0->set_f_30(0x66fb447bc5c9d956);
  v8_0->set_f_27(0x78);
  v8_0->set_f_4(s->substr(0, 6));
  v8_0->set_f_23(0x14);
  v8_0->set_f_6(0x69);
  v8_0->set_f_14(0x1d338956717ab25d);
  v8_0->set_f_15(false);
  v8_0->set_f_18(0x57);
  v8_0->set_f_13(0x6d6);
  v8_0->set_f_16(0x40);
  v8_0->set_f_32(0x35e8d4e4);
  v8_0->set_f_28(0x337e5c9226b89012);
  v8_0->set_f_20(0x13);
  v8_0->set_f_8(0x58);
  v8_0->set_f_22(0x2c6fe3fa6dd68429);
  v8_0->set_f_7(0x68);
  v8_0->set_f_11(0x1a2d94db19446a20);
  v7->set_f_1(0x212c);
  v7->set_f_0(s->substr(0, 3));
  Message0::M2::M6::M28* v9_0 = v7->add_f_9();
  v9_0->set_f_8(0x42);
  v9_0->set_f_4(0x27b99504926c691);
  v9_0->set_f_11(s->substr(0, 29));
  v9_0->set_f_10(true);
  v9_0->set_f_9(0x7cf71e5556a5af8b);
  v9_0->add_f_0(s->substr(0, 5));
  v9_0->set_f_6(0x39f11b77e7f98d11);
  v9_0->set_f_3(0x8bdf534);
  v9_0->set_f_1(0x5873b72a496a8163);
  Message0::M2::M9* v10 = v4_0->mutable_f_17();
  v10->set_f_0(0x73c64);
  v4_0->set_f_0(0x6fcd4b32794d908);
  message->set_f_9(0x8976809516480b7);
  message->set_f_5(s->substr(0, 5));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_22(s->substr(0, 38));
  message->set_f_23(0x62827ad3);
  message->set_f_25(0.749812);
  message->set_f_14(0x25320c6cb1cd65cc);
  message->set_f_29(0x72b15a858832ec8b);
  message->set_f_7(s->substr(0, 20));
  message->set_f_0(false);
  message->set_f_9(0x59de8d34373331d7);
  message->add_f_13(Message0::E1_CONST_4);
  message->set_f_2(false);
  message->set_f_5(s->substr(0, 138));
  message->set_f_17(0x441f5cd66e334a5c);
  Message0::M5* v0 = message->mutable_f_62();
  v0->set_f_0(0x59ddd90d5d2bdc5a);
  Message0::M5::M19* v1 = v0->mutable_f_9();
  v1->set_f_1(true);
  v1->set_f_2(s->substr(0, 206));
  v1->set_f_0(0x1f7a2e887efe4c44);
  Message0::M5::M25* v2 = v0->mutable_f_12();
  v2->set_f_1(0x22a31a3);
  v2->set_f_3(0x7a);
  Message0::M5::M13* v3 = v0->mutable_f_5();
  Message0::M5::M13::M26* v4_0 = v3->add_f_2();
  v4_0->set_f_0(0x63c5b3631a4f2fb6);
  Message0::M5::M13::M26::M39* v5 = v4_0->mutable_f_3();
  v5->set_f_0(0x52ba1f2de0cf3213);
  v3->set_f_0(0x1e81df6592a61fd0);
  Message0::M5::M13::M36* v6 = v3->mutable_f_3();
  v6->set_f_22(0x1f);
  v6->set_f_19(0x46);
  v6->set_f_12(0x3);
  v6->set_f_20(0x4aeb4);
  v6->set_f_9(0x20);
  v6->set_f_11(0x6a698bac09a12214);
  v6->set_f_3(0x3b);
  v6->set_f_5(0x1f);
  v6->set_f_24(Message0::M5::M13::M36::E10_CONST_3);
  v6->set_f_29(0x6a32fa2194678c44);
  v6->set_f_30(0x74b9c9386c9958ca);
  v6->add_f_0(Message0::M5::M13::M36::E8_CONST_5);
  v6->set_f_17(s->substr(0, 30));
  v6->set_f_10(0x3418ffbf1a7d03ab);
  v6->set_f_1(0xd370b);
  v6->set_f_8(true);
  v6->set_f_13(false);
  v6->set_f_4(0x9);
  v6->set_f_21(0x1e);
  v6->set_f_28(0x45);
  v6->set_f_14(0x75ae8b65);
  v6->set_f_6(s->substr(0, 30));
  message->set_f_24(false);
  message->set_f_15(0x39a1);
  message->set_f_21(0x6d);
  Message0::M1* v7 = message->mutable_f_56();
  Message0::M1::M16* v8 = v7->mutable_f_8();
  v8->set_f_2(0x2ed0);
  v8->set_f_1(0xe4a95);
  v8->set_f_0(true);
  v7->set_f_0(0x44d8fa89102a1916);
  Message0::M1::M11* v9 = v7->mutable_f_7();
  Message0::M1::M11::M29* v10 = v9->mutable_f_3();
  v10->set_f_0(0x70b00391aff1078);
  Message0::M1::M11::M34* v11 = v9->mutable_f_4();
  v11->set_f_0(0xbeb193e);
  message->set_f_27(0xa9824);
  Message0::M4* v12_0 = message->add_f_61();
  v12_0->set_f_16(false);
  v12_0->set_f_14(0xb74f6c9);
  v12_0->set_f_21(false);
  v12_0->set_f_13(0x485b43879bed51da);
  v12_0->set_f_19(s->substr(0, 5));
  v12_0->set_f_22(0x64a9ec4fc0b898c3);
  v12_0->set_f_0(0x425e54b0e4e1bb8);
  Message0::M4::M20* v13 = v12_0->mutable_f_44();
  Message0::M4::M20::M33* v14 = v13->mutable_f_3();
  Message0::M4::M20::M33::M38* v15_0 = v14->add_f_3();
  v15_0->set_f_0(0.384843);
  v15_0->set_f_3(true);
  v14->set_f_0(s->substr(0, 13));
  v13->set_f_0(0x68969);
  v12_0->set_f_6(0x77744504);
  v12_0->set_f_7(0x14);
  v12_0->set_f_2(false);
  v12_0->set_f_17(0x6a0a5299f1759b68);
  v12_0->set_f_12(0x361aa24f29a3d5e5);
  v12_0->set_f_18(0x31cc5);
  Message0::M4::M12* v16 = v12_0->mutable_f_43();
  v16->set_f_0(0x9b3871c);
  v16->set_f_1(0x121f4ff);
  v16->set_f_3(0x49b);
  v16->set_f_5(0x1e);
  v12_0->set_f_5(0xb05fa62);
  v12_0->set_f_3(s->substr(0, 459));
  v12_0->set_f_9(s->substr(0, 21));
  v12_0->set_f_20(0x2f);
  Message0::M3* v17 = message->mutable_f_60();
  Message0::M3::M17* v18_0 = v17->add_f_3();
  v18_0->set_f_0(0xff33445276ee1fa);
  Message0::M3::M18* v19 = v17->mutable_f_4();
  v19->set_f_2(0xcc65d6);
  v19->set_f_4(0x1e1208767b532d38);
  v19->set_f_3(0x3be4512496681d29);
  message->set_f_6(0xa);
  message->set_f_10(0xc7ac9f7);
  message->set_f_20(0xa19399554fdb9e);
  message->set_f_4(s->substr(0, 912));
  message->set_f_3(0x5a);
  message->set_f_8(false);
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
}  // namespace fleetbench::rpc::P9::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
