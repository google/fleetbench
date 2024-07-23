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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message0.pb.h"

namespace fleetbench::rpc::P5::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_8(0x713807cbfe0dbd9f);
  message->set_f_0(s->substr(0, 2));
  Message0::M2* v0_0 = message->add_f_48();
  Message0::M2::M24* v1 = v0_0->mutable_f_15();
  v1->set_f_0(s->substr(0, 23));
  Message0::M2::M12* v2_0 = v0_0->add_f_12();
  (void)v2_0;  // Suppresses clang-tidy.
  v0_0->set_f_0(0x1);
  v0_0->set_f_5(0x29e67f1);
  v0_0->set_f_3(0.264435);
  Message0::M2::M26* v3 = v0_0->mutable_f_16();
  (void)v3;  // Suppresses clang-tidy.
  v0_0->set_f_2(Message0::M2::E1_CONST_4);
  Message0::M6* v4 = message->mutable_f_54();
  Message0::M6::M28* v5 = v4->mutable_f_7();
  (void)v5;  // Suppresses clang-tidy.
  Message0::M6::M18* v6_0 = v4->add_f_6();
  v6_0->set_f_1(true);
  v6_0->set_f_2(0x770184086);
  Message0::M6::M38* v7_0 = v4->add_f_8();
  v7_0->set_f_0(0x60fd7926);
  Message0::M6::M38::E5 array_1[21] = {
      Message0::M6::M38::E5_CONST_1, Message0::M6::M38::E5_CONST_4,
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_3,
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_4,
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_2,
      Message0::M6::M38::E5_CONST_4, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_1, Message0::M6::M38::E5_CONST_4,
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_1, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_3, Message0::M6::M38::E5_CONST_3,
      Message0::M6::M38::E5_CONST_5,
  };
  for (auto v : array_1) {
    v7_0->add_f_1(v);
  }
  v7_0->set_f_2(0x3df848fc92697cf9);
  v7_0->set_f_4(0x420cf90d799935c3);
  v7_0->set_f_3(0.103288);
  Message0::M6::M10* v8_0 = v4->add_f_2();
  v8_0->set_f_8(false);
  v8_0->set_f_7(false);
  v8_0->set_f_9(true);
  v8_0->set_f_0(s->substr(0, 119));
  v8_0->set_f_5(s->substr(0, 12));
  v8_0->set_f_13(0xc884c59);
  v8_0->set_f_14(s->substr(0, 7));
  v8_0->set_f_10(0x6610d455);
  v8_0->set_f_11(0x2073a952117456af);
  message->set_f_24(0x282feda);
  Message0::M3* v9 = message->mutable_f_49();
  Message0::M3::M30* v10 = v9->mutable_f_9();
  v10->set_f_14(0x6dd10258c28355cf);
  v10->set_f_6(0x41);
  v10->set_f_9(0x4d);
  v10->set_f_3(s->substr(0, 8));
  v10->set_f_1(0.934146);
  v10->set_f_19(0xd4e601fd13d32f78);
  Message0::M3::M30::M50* v11 = v10->mutable_f_46();
  v11->set_f_12(0xac7aa46);
  v11->set_f_10(s->substr(0, 20));
  v11->set_f_21(0x18df1be);
  v11->set_f_29(0.603617);
  v11->set_f_18(false);
  v11->set_f_30(s->substr(0, 31));
  v11->set_f_1(0xbe9291c5f25c3c48);
  v11->set_f_15(s->substr(0, 9));
  v11->set_f_8(0x68);
  v11->set_f_6(0x30);
  v11->set_f_20(s->substr(0, 4));
  v11->set_f_28(0xa929214);
  v11->set_f_14(0x47f5400);
  v11->set_f_3(0x30b02b1f6185dec1);
  v11->set_f_13(0xc5280);
  v11->set_f_25(0x7d);
  v11->set_f_22(false);
  Message0::M3::M30::M50::M58* v12_0 = v11->add_f_49();
  v12_0->set_f_0(0x17da92fd);
  Message0::M3::M30::M50::M58::M76* v13 = v12_0->mutable_f_2();
  v13->set_f_0(s->substr(0, 89));
  v11->set_f_11(0x6b05a20);
  v11->set_f_4(false);
  v11->set_f_19(true);
  v11->set_f_5(s->substr(0, 330));
  Message0::M3::M30::M50::M64* v14 = v11->mutable_f_50();
  v14->set_f_0(0xc8f01e514e76fb6b);
  Message0::M3::M30::M50::M64::M79* v15 = v14->mutable_f_5();
  v15->set_f_0(0x5f45ffacd3cbb7ad);
  v15->set_f_1(0x52);
  v15->set_f_2(0x650876655af5de2d);
  Message0::M3::M30::M50::M64::M74* v16 = v14->mutable_f_2();
  v16->set_f_0(0xa2b67eaec1d5b2dd);
  v11->set_f_26(s->substr(0, 22));
  v11->set_f_9(0x6b);
  v11->set_f_27(0xb21dd65);
  v11->set_f_17(0x73);
  v10->set_f_7(0xe90c0098ee8af797);
  v10->set_f_8(0.606297);
  v10->set_f_18(s->substr(0, 17));
  v10->set_f_17(0x47);
  v10->set_f_12(0x36);
  v10->set_f_23(0x544774d8);
  v10->set_f_11(s->substr(0, 20));
  v10->set_f_2(0xdc44584b71d2e40e);
  v10->set_f_16(false);
  v10->set_f_5(s->substr(0, 2));
  v10->set_f_13(0x3b);
  v10->set_f_0(0x367a);
  v10->set_f_10(s->substr(0, 25));
  v10->set_f_20(0x39);
  Message0::M3::M43* v17 = v9->mutable_f_12();
  v17->set_f_0(0x26);
  Message0::M3::M27* v18 = v9->mutable_f_7();
  v18->set_f_1(s->substr(0, 19));
  v18->set_f_2(0xa0400b3b6ca977a3);
  v18->set_f_0(0x23b3f15);
  Message0::M3::M14* v19 = v9->mutable_f_4();
  v19->set_f_0(0x5c27b2cb1774ad45);
  Message0::M3::M21* v20 = v9->mutable_f_5();
  v20->set_f_0(s->substr(0, 23));
  Message0::M3::M21::M54* v21_0 = v20->add_f_3();
  v21_0->set_f_10(0xbc6409cf4af4e59e);
  v21_0->set_f_13(0xa957f60);
  v21_0->set_f_12(0.056659);
  v21_0->set_f_11(0x4e);
  v21_0->set_f_8(0x6c9d321);
  v21_0->set_f_7(true);
  v21_0->set_f_19(0x42);
  v21_0->set_f_16(0x1884cc);
  v21_0->set_f_3(0x9410c);
  v21_0->set_f_4(0x1a);
  v21_0->set_f_0(0x67b072766baab916);
  v21_0->set_f_1(0xeec4);
  Message0::M3::M21::M54::M63* v22_0 = v21_0->add_f_34();
  v22_0->set_f_0(true);
  v21_0->set_f_9(0x3f05);
  v21_0->set_f_20(0x5a621fba);
  v21_0->set_f_17(0x3f80831f);
  v21_0->set_f_5(s->substr(0, 6));
  v21_0->set_f_22(false);
  v21_0->set_f_6(0xd31480814cb10405);
  message->set_f_19(false);
  Message0::M7* v23 = message->mutable_f_55();
  Message0::M7::M42* v24 = v23->mutable_f_8();
  v24->set_f_0(0x5ebf108150aedb1d);
  Message0::M7::M33* v25_0 = v23->add_f_5();
  v25_0->set_f_3(0xfad8c70);
  v25_0->set_f_0(s->substr(0, 18));
  v25_0->set_f_1(true);
  v23->set_f_0(0x17cca5);
  Message0::M1* v26 = message->mutable_f_47();
  v26->set_f_0(false);
  Message0::M1::M29* v27_0 = v26->add_f_7();
  v27_0->set_f_1(0xda9ae67175e25347);
  v27_0->set_f_3(s->substr(0, 21));
  v27_0->set_f_2(false);
  v27_0->set_f_0(0x24);
  Message0::M1::M41* v28 = v26->mutable_f_9();
  v28->set_f_1(s->substr(0, 18));
  v28->set_f_0(s->substr(0, 8));
  Message0::M1::M22* v29_0 = v26->add_f_5();
  v29_0->set_f_1(0x74156f974be04f54);
  v29_0->set_f_0(s->substr(0, 31));
  message->set_f_9(s->substr(0, 17));
  message->set_f_6(0x94b5420003c59d8c);
  message->set_f_20(0x2d3e7ba070e);
  message->set_f_26(0x307ff3e7);
  message->set_f_27(s->substr(0, 20));
  message->set_f_10(s->substr(0, 12));
  message->set_f_3(0x12fdc94c);
  message->set_f_17(0.000145);
  message->set_f_13(0x59470);
  message->set_f_18(0x2073c92728bb2741);
  message->set_f_2(0xb4bb95c86efe1e0f);
  message->set_f_23(s->substr(0, 3));
  message->set_f_4(0xfe7748f7f9a9d976);
  message->set_f_16(s->substr(0, 2));
  Message0::M8* v30_0 = message->add_f_56();
  v30_0->set_f_14(0x188027);
  v30_0->set_f_25(0x9a0edd1e75717092);
  v30_0->set_f_9(0.116516);
  v30_0->set_f_28(0x2f);
  v30_0->set_f_5(0x2ab12752450cc7ef);
  v30_0->set_f_18(0x1130499);
  v30_0->set_f_16(0xb15563e);
  v30_0->set_f_0(s->substr(0, 29));
  v30_0->set_f_11(0x4b80ae45cc470dff);
  v30_0->set_f_6(0x47);
  v30_0->set_f_3(0xa57b3b9751f91694);
  v30_0->set_f_8(0xd413278);
  v30_0->set_f_19(0x87c6700);
  v30_0->set_f_10(s->substr(0, 27));
  v30_0->set_f_29(0x9a1856ca541aa9e8);
  v30_0->set_f_7(0x59);
  Message0::M8::M35* v31_0 = v30_0->add_f_48();
  v31_0->set_f_2(0x2ab10047642ea5ad);
  v31_0->set_f_0(0xf728a);
  Message0::M8::M11* v32 = v30_0->mutable_f_45();
  v32->set_f_0(0xb0caa9);
  v30_0->set_f_4(true);
  v30_0->set_f_15(0x6bdb1d8dedddd283);
  v30_0->set_f_13(0x1591954a2b108da);
  v30_0->set_f_2(s->substr(0, 27));
  v30_0->set_f_1(0x4fb07f8);
  v30_0->set_f_17(0x713111a6);
  v30_0->add_f_27(Message0::M8::E2_CONST_1);
  message->set_f_22(false);
  message->set_f_21(0x51f77);
  Message0::M5* v33 = message->mutable_f_53();
  Message0::M5::M20* v34_0 = v33->add_f_15();
  v34_0->set_f_2(0xce4aaa);
  v34_0->set_f_14(0.658679);
  v34_0->set_f_0(0.354592);
  v34_0->set_f_7(false);
  v34_0->set_f_20(s->substr(0, 113));
  v34_0->set_f_11(false);
  v34_0->set_f_9(0xc68df25f4a879c00);
  Message0::M5::M20::E3 array_2[18] = {
      Message0::M5::M20::E3_CONST_2, Message0::M5::M20::E3_CONST_3,
      Message0::M5::M20::E3_CONST_1, Message0::M5::M20::E3_CONST_2,
      Message0::M5::M20::E3_CONST_5, Message0::M5::M20::E3_CONST_5,
      Message0::M5::M20::E3_CONST_4, Message0::M5::M20::E3_CONST_5,
      Message0::M5::M20::E3_CONST_4, Message0::M5::M20::E3_CONST_3,
      Message0::M5::M20::E3_CONST_3, Message0::M5::M20::E3_CONST_5,
      Message0::M5::M20::E3_CONST_1, Message0::M5::M20::E3_CONST_3,
      Message0::M5::M20::E3_CONST_5, Message0::M5::M20::E3_CONST_2,
      Message0::M5::M20::E3_CONST_4, Message0::M5::M20::E3_CONST_4,
  };
  for (auto v : array_2) {
    v34_0->add_f_13(v);
  }
  v34_0->set_f_6(s->substr(0, 8));
  v34_0->set_f_5(0x6602bd5547ec2375);
  v34_0->set_f_12(0x3911b4f74d284e67);
  v34_0->set_f_19(0xb72bcdc9566adc24);
  v34_0->set_f_18(0.092119);
  v33->set_f_3(s->substr(0, 1));
  v33->set_f_4(s->substr(0, 18));
  Message0::M5::M9* v35_0 = v33->add_f_11();
  v35_0->set_f_0(0xd28d31ec3b2559a4);
  v33->set_f_5(0xa4e2b0629ba5459d);
  v33->set_f_0(0x25);
  Message0::M5::M17* v36 = v33->mutable_f_12();
  v36->set_f_0(0xcadcd67d1d9a6ac8);
  Message0::M5::M19* v37_0 = v33->add_f_14();
  (void)v37_0;  // Suppresses clang-tidy.
  Message0::M5::M34* v38 = v33->mutable_f_17();
  v38->set_f_3(0xc843464);
  v38->set_f_1(0x2411d20e8a2);
  Message0::M5::M34::M46* v39 = v38->mutable_f_11();
  v39->set_f_3(s->substr(0, 6));
  Message0::M5::M34::M46::M60* v40 = v39->mutable_f_12();
  v40->set_f_0(0x52e38);
  v40->set_f_4(0.080706);
  v40->set_f_1(true);
  Message0::M5::M34::M46::M57* v41 = v39->mutable_f_11();
  v41->set_f_1(0.180297);
  v41->set_f_0(0xdf69096);
  v38->set_f_0(0x44);
  v38->set_f_4(0x762d0c0b460c37f8);
  v33->set_f_6(0xc7e54a8bd78b67eb);
  message->set_f_1(0x1c);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M7* v0 = message->mutable_f_55();
  Message0::M7::M42* v1 = v0->mutable_f_8();
  v1->set_f_0(0x2e05a30c1c410cd6);
  Message0::M7::M36* v2_0 = v0->add_f_7();
  (void)v2_0;  // Suppresses clang-tidy.
  Message0::M7::M33* v3_0 = v0->add_f_5();
  v3_0->set_f_3(0xd4e3de7);
  v3_0->set_f_1(true);
  v3_0->set_f_2(0x31be5b33f39932cf);
  v0->set_f_1(0xd);
  v0->set_f_0(0xc1d65b6);
  message->set_f_7(0x886ac902e40d7219);
  Message0::M3* v4 = message->mutable_f_49();
  v4->set_f_0(0xd25e6e5b5d9b86e8);
  Message0::M3::M39* v5 = v4->mutable_f_10();
  v5->set_f_0(0x56);
  v5->set_f_1(0x5bbeefe871942619);
  Message0::M3::M27* v6 = v4->mutable_f_7();
  v6->set_f_0(0x75);
  v6->set_f_2(0xd686f06ae0511a95);
  Message0::M3::M30* v7 = v4->mutable_f_9();
  v7->set_f_6(0x75);
  v7->set_f_16(true);
  v7->set_f_15(0x9271bdfb5ff3ba02);
  v7->set_f_20(0x15b7fa);
  v7->set_f_24(0x58);
  v7->set_f_7(0x152be23195794da8);
  v7->set_f_1(0.656554);
  v7->set_f_5(s->substr(0, 107));
  v7->set_f_9(0xe0f91);
  v7->set_f_11(s->substr(0, 3));
  Message0::M3::M30::M48* v8_0 = v7->add_f_44();
  v8_0->add_f_2(0x4b);
  v8_0->set_f_0(false);
  v8_0->set_f_1(0x4bde02198df8c20d);
  Message0::M3::M30::M48::M65* v9 = v8_0->mutable_f_6();
  v9->set_f_0(0x3e83b1eb);
  Message0::M3::M30::M48::M65::M75* v10 = v9->mutable_f_6();
  v10->set_f_0(0xe40);
  v8_0->set_f_3(0xdf5518b4fa44f704);
  v7->set_f_4(0x55d76752);
  v7->set_f_18(s->substr(0, 18));
  v7->set_f_0(0x37);
  v7->set_f_12(0x6d);
  v7->set_f_2(0xdc2f4cbceae621a5);
  v7->set_f_23(0x7c55b54);
  v7->set_f_17(0x44);
  v7->set_f_10(s->substr(0, 22));
  v7->set_f_19(0x151ee2657fc3b5fd);
  Message0::M3::M21* v11 = v4->mutable_f_5();
  Message0::M3::M21::M54* v12_0 = v11->add_f_3();
  v12_0->set_f_8(0x9c3ec28);
  v12_0->set_f_18(0x64d7c08d);
  Message0::M3::M21::M54::M66* v13_0 = v12_0->add_f_35();
  v13_0->set_f_0(0x2a);
  v12_0->set_f_12(0.670732);
  Message0::M3::M21::M54::M67* v14 = v12_0->mutable_f_36();
  v14->set_f_0(Message0::M3::M21::M54::M67::E8_CONST_5);
  v12_0->set_f_4(0xc2d8336);
  v12_0->set_f_7(true);
  v12_0->set_f_17(0x16fe6174);
  v12_0->set_f_2(true);
  v12_0->set_f_11(0x5d887);
  v12_0->set_f_9(0xb42aedf);
  v12_0->set_f_20(0x70d0cd0d);
  v12_0->set_f_15(s->substr(0, 17));
  v12_0->set_f_19(0x50);
  v12_0->set_f_3(0x79);
  v12_0->set_f_16(0x64);
  v12_0->set_f_13(0x25);
  v12_0->set_f_10(0x2174a4c348c1c166);
  v12_0->set_f_14(0x2d4b0ce1b05c52fb);
  message->set_f_29(0x78fa47e3b5050cd0);
  message->set_f_20(0x1917a42cd69);
  message->set_f_12(0xa317a);
  message->set_f_9(s->substr(0, 352));
  message->set_f_8(0x975ff9a39a63e96b);
  message->set_f_28(0x72);
  Message0::M1* v15 = message->mutable_f_47();
  v15->set_f_1(0xf7);
  Message0::M1::M29* v16_0 = v15->add_f_7();
  v16_0->set_f_2(false);
  v16_0->set_f_1(0x8f8ffebf9b40c667);
  v16_0->set_f_3(s->substr(0, 22));
  v16_0->set_f_0(0x3dc4);
  Message0::M1::M22* v17_0 = v15->add_f_5();
  v17_0->set_f_1(0x6e4609e3c04df6b3);
  Message0::M1::M41* v18 = v15->mutable_f_9();
  v18->set_f_0(s->substr(0, 17));
  v15->set_f_2(0x15dc);
  v15->set_f_0(false);
  message->set_f_27(s->substr(0, 18));
  message->set_f_10(s->substr(0, 12));
  message->set_f_11(0xc);
  message->set_f_15(0x1cf2ce);
  message->set_f_25(0x5923eae86cf9994f);
  message->set_f_23(s->substr(0, 24));
  message->set_f_5(0x10);
  message->set_f_26(0x3ef398ad);
  message->set_f_2(0xdd9b4fbafa00c4b5);
  message->set_f_18(0xc1507c0664529264);
  message->set_f_0(s->substr(0, 111));
  message->set_f_6(0x7dfb81b2e2287c8b);
  message->set_f_21(0x1652);
  message->set_f_14(0xcc8d5c293ae906ea);
  message->set_f_1(0x47);
  Message0::M6* v19 = message->mutable_f_54();
  Message0::M6::M13* v20 = v19->mutable_f_4();
  v20->set_f_1(0.693754);
  v20->set_f_0(0x84737370340daa87);
  v20->set_f_2(s->substr(0, 10));
  v20->set_f_3(0xfb9342b0f61c0679);
  Message0::M6::M10* v21_0 = v19->add_f_2();
  v21_0->set_f_3(0x1f77e82);
  v21_0->set_f_5(s->substr(0, 3));
  v21_0->set_f_2(s->substr(0, 4));
  v21_0->set_f_9(false);
  v21_0->set_f_1(s->substr(0, 2));
  v21_0->set_f_10(0x3d27c56c);
  v21_0->set_f_4(true);
  v21_0->set_f_14(s->substr(0, 14));
  v21_0->set_f_0(s->substr(0, 127));
  v21_0->set_f_11(0xbd17eea491124b4e);
  Message0::M6::M18* v22_0 = v19->add_f_6();
  Message0::M6::M18::M52* v23 = v22_0->mutable_f_5();
  v23->add_f_0(Message0::M6::M18::M52::E6_CONST_5);
  v23->add_f_0(Message0::M6::M18::M52::E6_CONST_3);
  v23->set_f_2(0x6a);
  v22_0->set_f_1(false);
  v19->set_f_0(0x7408dfb55412f241);
  Message0::M6::M38* v24_0 = v19->add_f_8();
  v24_0->add_f_1(Message0::M6::M38::E5_CONST_4);
  v24_0->set_f_2(0x283dc8b79a21db2);
  v24_0->set_f_3(0.403118);
  v24_0->set_f_4(0xab3497bd85222ee6);
  v24_0->set_f_0(0x4c873ecf);
  message->set_f_24(0xebc2c4a);
  Message0::M8* v25_0 = message->add_f_56();
  v25_0->set_f_6(0x214268f);
  v25_0->set_f_13(0xc1cfdf170968b5f2);
  v25_0->set_f_31(0x45);
  v25_0->set_f_25(0x2484698b2f261b13);
  v25_0->set_f_18(0x280abcb);
  v25_0->set_f_5(0x882a0b13be0fbca);
  v25_0->set_f_3(0x2a2b51ee23bd8887);
  Message0::M8::E2 array_0[22] = {
      Message0::M8::E2_CONST_2, Message0::M8::E2_CONST_2,
      Message0::M8::E2_CONST_1, Message0::M8::E2_CONST_5,
      Message0::M8::E2_CONST_2, Message0::M8::E2_CONST_3,
      Message0::M8::E2_CONST_2, Message0::M8::E2_CONST_2,
      Message0::M8::E2_CONST_3, Message0::M8::E2_CONST_3,
      Message0::M8::E2_CONST_4, Message0::M8::E2_CONST_5,
      Message0::M8::E2_CONST_3, Message0::M8::E2_CONST_3,
      Message0::M8::E2_CONST_3, Message0::M8::E2_CONST_2,
      Message0::M8::E2_CONST_1, Message0::M8::E2_CONST_3,
      Message0::M8::E2_CONST_5, Message0::M8::E2_CONST_3,
      Message0::M8::E2_CONST_2, Message0::M8::E2_CONST_5,
  };
  for (auto v : array_0) {
    v25_0->add_f_27(v);
  }
  Message0::M8::M35* v26_0 = v25_0->add_f_48();
  v26_0->set_f_1(0x47fb7064ee76155e);
  v26_0->set_f_2(0x4e7b653bd1fc499b);
  v26_0->set_f_0(0x23d5);
  v26_0->set_f_3(0x42);
  v25_0->set_f_30(s->substr(0, 2));
  v25_0->set_f_23(s->substr(0, 159));
  v25_0->set_f_28(0x27d7);
  v25_0->set_f_15(0x695b60bec28436d9);
  v25_0->set_f_20(s->substr(0, 512));
  Message0::M8::M15* v27 = v25_0->mutable_f_47();
  v27->add_f_0(0x62);
  v27->set_f_1(0x75719a3b3cfb121b);
  v27->set_f_2(s->substr(0, 3));
  Message0::M8::M40* v28 = v25_0->mutable_f_49();
  v28->set_f_3(false);
  v28->set_f_0(0xb62fe36fe56ec484);
  v28->set_f_2(0x6b5e8b06fde93365);
  Message0::M8::M40::M51* v29 = v28->mutable_f_6();
  Message0::M8::M40::M51::M62* v30 = v29->mutable_f_5();
  v30->set_f_1(0x941fa76668c9541);
  v30->set_f_0(0x531d63f77ae52b2f);
  Message0::M8::M40::M51::M62::M77* v31 = v30->mutable_f_4();
  v31->set_f_0(0x5f);
  v31->set_f_1(0x5dfb24c);
  v31->set_f_5(s->substr(0, 30));
  v31->set_f_4(0x66);
  v31->set_f_2(0x9968391581dc682e);
  v29->set_f_0(s->substr(0, 23));
  Message0::M8::M40::M51::M56* v32 = v29->mutable_f_2();
  v32->set_f_0(0x6081c3b7);
  v32->set_f_2(0x80654a016983ac);
  v28->set_f_1(0xb88173834b6aa71f);
  v25_0->set_f_24(s->substr(0, 6));
  v25_0->set_f_7(0x3d6d4da);
  v25_0->set_f_9(0.221151);
  v25_0->set_f_16(0x69);
  Message0::M5* v33 = message->mutable_f_53();
  v33->set_f_2(0xa008e8c894e962bc);
  Message0::M5::M9* v34_0 = v33->add_f_11();
  v34_0->set_f_0(0xf653d6351c5c6713);
  Message0::M5::M17* v35 = v33->mutable_f_12();
  (void)v35;  // Suppresses clang-tidy.
  Message0::M5::M20* v36_0 = v33->add_f_15();
  v36_0->set_f_12(0x867b48e5b070c3d2);
  v36_0->set_f_20(s->substr(0, 224));
  v36_0->set_f_3(0xe9650cb);
  v36_0->set_f_17(0xe4d89ee4b48e1a6d);
  v36_0->set_f_16(true);
  v36_0->set_f_0(0.807167);
  v36_0->set_f_11(true);
  v36_0->set_f_9(0xc13adc1e706a4f90);
  v36_0->set_f_5(0x71f491efea0181e2);
  v36_0->set_f_8(0x39);
  v36_0->set_f_2(0xd8a7037);
  v36_0->add_f_15(0x66);
  v36_0->set_f_18(0.840024);
  v36_0->set_f_1(0xcd04b09c96c8f3b4);
  v36_0->set_f_14(0.571080);
  v36_0->set_f_4(0x3ae77c7c5d103226);
  Message0::M5::M34* v37 = v33->mutable_f_17();
  v37->set_f_2(0x6daaa30d6);
  Message0::M5::M34::M46* v38 = v37->mutable_f_11();
  v38->set_f_2(0x3764f62bbf1ce0ee);
  v38->set_f_1(false);
  Message0::M5::M34::M46::M57* v39 = v38->mutable_f_11();
  v39->set_f_1(0.322093);
  v38->set_f_3(s->substr(0, 6));
  v38->set_f_0(s->substr(0, 32));
  Message0::M5::M34::M46::M60* v40 = v38->mutable_f_12();
  v40->set_f_3(0x22ddd322caa551ac);
  v40->set_f_4(0.202086);
  v40->set_f_2(0.662901);
  v40->set_f_1(false);
  v40->set_f_0(0x77);
  v37->set_f_0(0x16);
  v37->set_f_4(0x37b0cd58734095dc);
  v33->set_f_3(s->substr(0, 22));
  v33->set_f_0(0xb0741);
  v33->set_f_4(s->substr(0, 87));
  v33->set_f_5(0xce50ea8e3fe9a418);
  v33->set_f_6(0x4277410f21f5d00e);
  v33->set_f_1(0xa457953);
  message->set_f_22(false);
  Message0::M4* v41 = message->mutable_f_50();
  v41->set_f_0(0.868311);
  Message0::M4::M37* v42 = v41->mutable_f_10();
  v42->set_f_1(0x8ea203527bb84b5b);
  Message0::M4::M31* v43_0 = v41->add_f_6();
  v43_0->set_f_1(0x3529d3926266dcd4);
  v43_0->set_f_0(0x68967f24104db9f3);
  v43_0->set_f_2(0xe947fde283650056);
  Message0::M4::M32* v44 = v41->mutable_f_9();
  v44->set_f_0(s->substr(0, 23));
  message->set_f_19(true);
  message->set_f_17(0.101517);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_23(s->substr(0, 15));
  message->set_f_21(0xbde89fd);
  message->set_f_9(s->substr(0, 39));
  Message0::M8* v0_0 = message->add_f_56();
  v0_0->set_f_14(0x151652);
  v0_0->set_f_26(0x75db48ba);
  Message0::M8::M15* v1 = v0_0->mutable_f_47();
  v1->set_f_2(s->substr(0, 22));
  v1->add_f_0(0x63);
  v1->set_f_1(0xce41fb52d5c86449);
  v0_0->set_f_22(0xe33c9e7b5d1ab54);
  v0_0->set_f_25(0xfdf5ce9ac2cd0d0c);
  v0_0->set_f_20(s->substr(0, 27));
  v0_0->set_f_7(0x5e);
  v0_0->set_f_19(0x8088b);
  v0_0->set_f_17(0x66a1088e);
  v0_0->set_f_6(0xb43cb22);
  v0_0->set_f_0(s->substr(0, 2183));
  v0_0->set_f_16(0x64);
  v0_0->set_f_8(0x16c74b);
  v0_0->set_f_18(0x2a);
  v0_0->set_f_4(false);
  v0_0->set_f_2(s->substr(0, 8));
  v0_0->set_f_29(0xd746a81ec1c0bea3);
  v0_0->set_f_30(s->substr(0, 388));
  Message0::M8::M11* v2 = v0_0->mutable_f_45();
  v2->set_f_0(0xe27b598);
  v0_0->set_f_12(0x883f4cb741bd3d90);
  Message0::M8::M35* v3_0 = v0_0->add_f_48();
  v3_0->set_f_0(0x809417b);
  v3_0->set_f_1(0xfa1a46eaa811477);
  v3_0->set_f_2(0x7df786def2d86e90);
  v3_0->set_f_3(0x45);
  v0_0->set_f_10(s->substr(0, 3));
  Message0::M8::M40* v4 = v0_0->mutable_f_49();
  v4->set_f_2(0x26c0d9bef1a36943);
  v4->set_f_0(0x41cef33cdeeed90);
  v4->set_f_3(true);
  v4->set_f_1(0x7e72a83dfd91a658);
  message->set_f_3(0x747ec014);
  message->set_f_11(0x4e);
  message->set_f_14(0x917e27f35cd032fd);
  message->set_f_12(0x3a);
  message->set_f_8(0xf43ba02a2301bd9c);
  message->set_f_6(0x3181478a8191e74d);
  message->set_f_13(0xd7c1);
  message->set_f_19(false);
  message->set_f_5(0xa8a2cca);
  message->set_f_1(0x15cb);
  message->set_f_16(s->substr(0, 2));
  Message0::M2* v5_0 = message->add_f_48();
  v5_0->set_f_3(0.228317);
  v5_0->set_f_4(false);
  Message0::M2::M24* v6 = v5_0->mutable_f_15();
  (void)v6;  // Suppresses clang-tidy.
  Message0::M2::M12* v7_0 = v5_0->add_f_12();
  v7_0->set_f_0(0.755846);
  Message0::M2::M26* v8 = v5_0->mutable_f_16();
  v8->set_f_0(Message0::M2::M26::E4_CONST_4);
  v5_0->set_f_2(Message0::M2::E1_CONST_1);
  v5_0->set_f_5(0x5a);
  Message0::M2::M23* v9 = v5_0->mutable_f_13();
  Message0::M2::M23::M44* v10_0 = v9->add_f_4();
  v10_0->set_f_3(0x6a1cd320d539996);
  v10_0->set_f_11(0x5fb66752);
  Message0::M2::M23::M44::M59* v11_0 = v10_0->add_f_28();
  v11_0->set_f_1(0.078518);
  v11_0->add_f_3(Message0::M2::M23::M44::M59::E7_CONST_4);
  v10_0->set_f_2(0xf8c5131535ec805f);
  v10_0->set_f_5(s->substr(0, 115));
  v10_0->set_f_9(0x28);
  v10_0->set_f_0(0x7fd73719be1a6c6e);
  v10_0->set_f_4(0x7437537c40b4bb53);
  v10_0->set_f_10(0x85fc1149cba9fee0);
  v10_0->set_f_7(0x24102d356083714);
  v10_0->set_f_6(0x702f406);
  v10_0->set_f_8(0x74);
  v10_0->set_f_1(s->substr(0, 26));
  v10_0->set_f_15(0x801a852a36f67e8b);
  v10_0->set_f_12(0x8d9814f359ced492);
  v9->set_f_0(0x60);
  Message0::M6* v12 = message->mutable_f_54();
  Message0::M6::M38* v13_0 = v12->add_f_8();
  v13_0->set_f_0(0xae489ad);
  v13_0->set_f_4(0x7c185a7fd807df6a);
  Message0::M6::M38::E5 array_0[6] = {
      Message0::M6::M38::E5_CONST_1, Message0::M6::M38::E5_CONST_2,
      Message0::M6::M38::E5_CONST_3, Message0::M6::M38::E5_CONST_3,
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_5,
  };
  for (auto v : array_0) {
    v13_0->add_f_1(v);
  }
  v13_0->set_f_2(0x9975d551b725fde);
  v13_0->set_f_3(0.060907);
  v12->set_f_0(0x2bc9b3226ab6fb33);
  Message0::M6::M18* v14_0 = v12->add_f_6();
  v14_0->set_f_0(0x7cd6fb8);
  Message0::M6::M18::M52* v15 = v14_0->mutable_f_5();
  v15->set_f_2(0x3c);
  v15->add_f_0(Message0::M6::M18::M52::E6_CONST_3);
  v14_0->set_f_2(0x35f4694f69b);
  Message0::M6::M10* v16_0 = v12->add_f_2();
  v16_0->set_f_1(s->substr(0, 6));
  v16_0->set_f_12(0xd5ad844c66e60a5);
  v16_0->set_f_14(s->substr(0, 29));
  v16_0->set_f_5(s->substr(0, 17));
  v16_0->set_f_9(true);
  v16_0->set_f_11(0xee645fdb9f5f7f85);
  v16_0->set_f_10(0x6d1a4b20);
  v16_0->set_f_0(s->substr(0, 28));
  v16_0->set_f_3(0x58);
  v16_0->set_f_8(false);
  v16_0->set_f_4(true);
  v16_0->set_f_6(0x2255);
  message->set_f_7(0xc0f322354bbf146d);
  message->set_f_18(0x41c2a0023ebc7c0e);
  Message0::M5* v17 = message->mutable_f_53();
  v17->set_f_4(s->substr(0, 3));
  Message0::M5::M19* v18_0 = v17->add_f_14();
  v18_0->set_f_0(false);
  Message0::M5::M19::M45* v19 = v18_0->mutable_f_3();
  v19->set_f_1(0x2e21b7b13a8dd89c);
  v19->set_f_0(0xda7c1d5ea346e7bd);
  Message0::M5::M19::M45::M69* v20_0 = v19->add_f_3();
  v20_0->set_f_0(0xfc3df77144e26181);
  v17->set_f_3(s->substr(0, 430));
  Message0::M5::M9* v21_0 = v17->add_f_11();
  v21_0->set_f_0(0x7e9e4b4a69f3e560);
  Message0::M5::M20* v22_0 = v17->add_f_15();
  v22_0->set_f_21(0x5b107);
  v22_0->set_f_7(false);
  v22_0->set_f_12(0x53b9439d493a0ad3);
  v22_0->set_f_3(0x592832cf);
  v22_0->set_f_20(s->substr(0, 30));
  v22_0->set_f_17(0xb1caa932951622bf);
  v22_0->set_f_14(0.349925);
  Message0::M5::M20::E3 array_1[12] = {
      Message0::M5::M20::E3_CONST_3, Message0::M5::M20::E3_CONST_2,
      Message0::M5::M20::E3_CONST_1, Message0::M5::M20::E3_CONST_4,
      Message0::M5::M20::E3_CONST_4, Message0::M5::M20::E3_CONST_4,
      Message0::M5::M20::E3_CONST_1, Message0::M5::M20::E3_CONST_3,
      Message0::M5::M20::E3_CONST_2, Message0::M5::M20::E3_CONST_3,
      Message0::M5::M20::E3_CONST_4, Message0::M5::M20::E3_CONST_4,
  };
  for (auto v : array_1) {
    v22_0->add_f_13(v);
  }
  v22_0->set_f_4(0xf443b827f1a4e9f3);
  v22_0->set_f_0(0.614469);
  v22_0->set_f_16(false);
  v22_0->set_f_9(0xeeed5e1e6a522079);
  Message0::M5::M34* v23 = v17->mutable_f_17();
  Message0::M5::M34::M46* v24 = v23->mutable_f_11();
  Message0::M5::M34::M46::M57* v25 = v24->mutable_f_11();
  v25->set_f_1(0.491445);
  v24->set_f_3(s->substr(0, 8));
  Message0::M5::M34::M46::M55* v26 = v24->mutable_f_10();
  v26->set_f_1(0xcc0078e40313c62f);
  v26->set_f_0(0xb11b5);
  v26->set_f_2(false);
  v24->set_f_4(0xd234f0);
  v24->set_f_2(0x3c7398575bc8522a);
  v24->set_f_0(s->substr(0, 15));
  v24->set_f_1(true);
  v23->set_f_0(0x36);
  v23->set_f_4(0xd61d8c78acebfa46);
  v23->set_f_2(0x3a);
  v17->set_f_1(0x33a1da40);
  v17->set_f_2(0x7578273e3b0ce01);
  message->set_f_15(0x1422ff);
  Message0::M1* v27 = message->mutable_f_47();
  Message0::M1::M29* v28_0 = v27->add_f_7();
  v28_0->set_f_1(0x8cc314fc71dedf61);
  v28_0->set_f_2(false);
  v28_0->set_f_0(0x70);
  v27->set_f_0(true);
  Message0::M1::M41* v29 = v27->mutable_f_9();
  v29->set_f_1(s->substr(0, 4));
  v27->set_f_1(0xd99b9e6);
  v27->set_f_2(0xd3bb125);
  Message0::M7* v30 = message->mutable_f_55();
  Message0::M7::M33* v31_0 = v30->add_f_5();
  v31_0->set_f_0(s->substr(0, 233));
  v31_0->set_f_2(0xb758e151e3e8851c);
  v31_0->set_f_1(false);
  v31_0->set_f_3(0xff90e18);
  Message0::M7::M36* v32_0 = v30->add_f_7();
  (void)v32_0;  // Suppresses clang-tidy.
  v30->set_f_1(0x5e);
  message->set_f_20(0x1050a9fc8dc);
  message->set_f_4(0x478d06584262e615);
  Message0::M4* v33 = message->mutable_f_50();
  v33->set_f_0(0.434481);
  Message0::M4::M16* v34_0 = v33->add_f_3();
  Message0::M4::M16::M47* v35 = v34_0->mutable_f_4();
  v35->set_f_0(true);
  Message0::M4::M25* v36_0 = v33->add_f_5();
  Message0::M4::M25::M53* v37 = v36_0->mutable_f_2();
  v37->set_f_0(s->substr(0, 7));
  v37->set_f_2(0xe2ed97a4ee93d390);
  Message0::M4::M31* v38_0 = v33->add_f_6();
  v38_0->set_f_1(0xdf46c09d381e06c8);
  v38_0->set_f_0(0x9c63e94fe0a9634e);
  Message0::M4::M31::M49* v39_0 = v38_0->add_f_8();
  v39_0->set_f_1(0xf7ec8a3b15ffadec);
  Message0::M4::M31::M49::M68* v40_0 = v39_0->add_f_4();
  (void)v40_0;  // Suppresses clang-tidy.
  message->set_f_25(0x75d3434088218761);
  message->set_f_2(0xb21c060bf30486ab);
  message->set_f_17(0.096570);
  message->set_f_0(s->substr(0, 21));
  message->set_f_27(s->substr(0, 24));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_12(0xb1ed2a3);
  message->set_f_11(0x656acdc);
  Message0::M6* v0 = message->mutable_f_54();
  Message0::M6::M38* v1_0 = v0->add_f_8();
  Message0::M6::M38::E5 array_0[22] = {
      Message0::M6::M38::E5_CONST_5, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_4, Message0::M6::M38::E5_CONST_3,
      Message0::M6::M38::E5_CONST_3, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_2, Message0::M6::M38::E5_CONST_2,
      Message0::M6::M38::E5_CONST_4, Message0::M6::M38::E5_CONST_1,
      Message0::M6::M38::E5_CONST_2, Message0::M6::M38::E5_CONST_5,
      Message0::M6::M38::E5_CONST_4, Message0::M6::M38::E5_CONST_4,
      Message0::M6::M38::E5_CONST_3, Message0::M6::M38::E5_CONST_1,
      Message0::M6::M38::E5_CONST_4, Message0::M6::M38::E5_CONST_3,
      Message0::M6::M38::E5_CONST_4, Message0::M6::M38::E5_CONST_1,
      Message0::M6::M38::E5_CONST_3, Message0::M6::M38::E5_CONST_1,
  };
  for (auto v : array_0) {
    v1_0->add_f_1(v);
  }
  v1_0->set_f_4(0x20756b1729d5193b);
  v1_0->set_f_0(0x48c89674);
  v1_0->set_f_3(0.056872);
  Message0::M6::M10* v2_0 = v0->add_f_2();
  v2_0->set_f_1(s->substr(0, 2));
  v2_0->set_f_8(true);
  v2_0->set_f_14(s->substr(0, 3));
  v2_0->set_f_10(0x2c3f8d79);
  v2_0->set_f_4(true);
  v2_0->set_f_12(0x37435130ca5c0d2);
  v2_0->set_f_13(0x1e612fb);
  v2_0->set_f_9(false);
  v2_0->set_f_11(0x765bac81e9d35398);
  Message0::M6::M13* v3 = v0->mutable_f_4();
  v3->set_f_4(0xa2a2890d82ccd322);
  v3->set_f_3(0x8f1dcda574baab23);
  v3->set_f_2(s->substr(0, 115));
  v3->set_f_1(0.176813);
  message->set_f_1(0xe9f45);
  message->set_f_27(s->substr(0, 31));
  message->set_f_22(true);
  message->set_f_2(0xb1c26fc6d434c644);
  message->set_f_6(0xf76baf6f3b02f70e);
  message->set_f_15(0x44);
  message->set_f_24(0x3e);
  Message0::M5* v4 = message->mutable_f_53();
  Message0::M5::M34* v5 = v4->mutable_f_17();
  v5->set_f_4(0xfcb42c81c98f7acf);
  Message0::M5::M34::M46* v6 = v5->mutable_f_11();
  v6->set_f_5(0.680253);
  Message0::M5::M34::M46::M57* v7 = v6->mutable_f_11();
  v7->set_f_0(0x61);
  v6->set_f_2(0xef37c05980780f57);
  v6->set_f_1(false);
  Message0::M5::M34::M46::M60* v8 = v6->mutable_f_12();
  v8->set_f_3(0x45b1f2241a4d5cbb);
  v6->set_f_4(0x81754536);
  v5->set_f_3(0xac91e4c);
  v5->set_f_2(0x112bbcf4ac1);
  Message0::M5::M20* v9_0 = v4->add_f_15();
  v9_0->add_f_15(0x53);
  v9_0->set_f_17(0xcf04f731dd1a1dc1);
  v9_0->set_f_10(s->substr(0, 19));
  v9_0->set_f_7(false);
  v9_0->set_f_0(0.726745);
  v9_0->set_f_4(0x3d84ebd2d066abc6);
  v9_0->set_f_11(false);
  v9_0->set_f_5(0xee3d641919aa6b8f);
  v9_0->set_f_6(s->substr(0, 3));
  v9_0->set_f_12(0x78693e58e28bb49b);
  v9_0->set_f_3(0x1f81c1ed);
  v9_0->set_f_1(0xefd96a0da617e222);
  v9_0->set_f_14(0.255043);
  v9_0->set_f_16(false);
  v9_0->set_f_20(s->substr(0, 8));
  v9_0->add_f_13(Message0::M5::M20::E3_CONST_4);
  Message0::M5::M9* v10_0 = v4->add_f_11();
  v10_0->set_f_0(0x93c4e04b2c1d7b39);
  v4->set_f_2(0x9bb78f984e60ac77);
  v4->set_f_5(0x19290676a48152be);
  v4->set_f_3(s->substr(0, 3));
  Message0::M5::M19* v11_0 = v4->add_f_14();
  Message0::M5::M19::M45* v12 = v11_0->mutable_f_3();
  Message0::M5::M19::M45::M69* v13_0 = v12->add_f_3();
  (void)v13_0;  // Suppresses clang-tidy.
  v12->set_f_1(0x94f587603154544f);
  v12->set_f_0(0x18fb3f598ba10cb5);
  v4->set_f_1(0x589ae154);
  v4->set_f_6(0xd5355c5c476762d9);
  message->set_f_8(0xea08298fae7cbd29);
  message->set_f_4(0xc5c2ab3290a7b4bb);
  message->set_f_9(s->substr(0, 7));
  message->set_f_10(s->substr(0, 63));
  message->set_f_23(s->substr(0, 6));
  Message0::M7* v14 = message->mutable_f_55();
  v14->set_f_1(0x158b);
  Message0::M7::M36* v15_0 = v14->add_f_7();
  (void)v15_0;  // Suppresses clang-tidy.
  v14->set_f_0(0x1);
  Message0::M7::M33* v16_0 = v14->add_f_5();
  v16_0->set_f_2(0x137dd8e225fb0343);
  v16_0->set_f_1(true);
  message->set_f_5(0x2329);
  message->set_f_25(0x38d2dac35ed6337a);
  Message0::M1* v17 = message->mutable_f_47();
  v17->set_f_3(0x29e2121938d6e9f5);
  v17->set_f_1(0x704befd);
  Message0::M1::M41* v18 = v17->mutable_f_9();
  v18->set_f_0(s->substr(0, 5));
  Message0::M1::M22* v19_0 = v17->add_f_5();
  v19_0->set_f_0(s->substr(0, 27));
  v19_0->set_f_1(0xc1739bc5db8710a6);
  v17->set_f_2(0x5938963);
  v17->set_f_0(false);
  Message0::M8* v20_0 = message->add_f_56();
  v20_0->set_f_18(0xe);
  v20_0->set_f_21(0x65);
  v20_0->set_f_3(0xdab3e223e00515b0);
  v20_0->set_f_16(0x14);
  Message0::M8::E2 array_1[21] = {
      Message0::M8::E2_CONST_2, Message0::M8::E2_CONST_5,
      Message0::M8::E2_CONST_5, Message0::M8::E2_CONST_1,
      Message0::M8::E2_CONST_1, Message0::M8::E2_CONST_4,
      Message0::M8::E2_CONST_3, Message0::M8::E2_CONST_4,
      Message0::M8::E2_CONST_3, Message0::M8::E2_CONST_4,
      Message0::M8::E2_CONST_1, Message0::M8::E2_CONST_3,
      Message0::M8::E2_CONST_2, Message0::M8::E2_CONST_1,
      Message0::M8::E2_CONST_5, Message0::M8::E2_CONST_2,
      Message0::M8::E2_CONST_3, Message0::M8::E2_CONST_4,
      Message0::M8::E2_CONST_4, Message0::M8::E2_CONST_4,
      Message0::M8::E2_CONST_2,
  };
  for (auto v : array_1) {
    v20_0->add_f_27(v);
  }
  v20_0->set_f_8(0x344877);
  v20_0->set_f_24(s->substr(0, 21));
  v20_0->set_f_5(0x509230b2aa01bbf9);
  v20_0->set_f_6(0x1183);
  v20_0->set_f_14(0x59b4e11);
  v20_0->set_f_11(0x55a3b357e981c1e);
  v20_0->set_f_26(0x3b6eaa45);
  v20_0->set_f_20(s->substr(0, 9));
  Message0::M8::M40* v21 = v20_0->mutable_f_49();
  v21->set_f_2(0xb5b7c9e6bce4d604);
  v21->set_f_1(0x5bd328073a79d247);
  v21->set_f_0(0xfe3069c9cf212036);
  v20_0->set_f_1(0x2d);
  v20_0->set_f_25(0x80c522bae1e4e5e8);
  v20_0->set_f_9(0.110897);
  Message0::M8::M35* v22_0 = v20_0->add_f_48();
  v22_0->set_f_2(0x65c595085f029fec);
  v22_0->set_f_1(0xf5b57650dab30477);
  v22_0->set_f_0(0x65);
  v20_0->set_f_22(0xb5a70ce338f649a3);
  v20_0->set_f_12(0x7b18dd86e86ef480);
  v20_0->set_f_30(s->substr(0, 106));
  v20_0->set_f_15(0x660f1cbfacf15ec8);
  v20_0->set_f_19(0x783a020);
  v20_0->set_f_7(0xa5a4365);
  v20_0->set_f_13(0x99e7fe73f005beb0);
  v20_0->set_f_17(0x201dca2b);
  message->set_f_17(0.835107);
  Message0::M3* v23 = message->mutable_f_49();
  Message0::M3::M27* v24 = v23->mutable_f_7();
  v24->set_f_2(0x6bab0a2d2b669d99);
  v24->set_f_1(s->substr(0, 24));
  Message0::M3::M43* v25 = v23->mutable_f_12();
  v25->set_f_0(0x47);
  Message0::M3::M14* v26 = v23->mutable_f_4();
  v26->set_f_0(0x85d506a789c415b7);
  Message0::M3::M30* v27 = v23->mutable_f_9();
  v27->set_f_22(0x1ff9d9);
  v27->set_f_11(s->substr(0, 22));
  v27->set_f_2(0x4bc5dea8c7f56c53);
  v27->set_f_16(true);
  v27->set_f_9(0x87a);
  v27->set_f_5(s->substr(0, 17));
  v27->set_f_8(0.002446);
  v27->set_f_15(0x9b9bfbedde93b27);
  v27->set_f_18(s->substr(0, 19));
  v27->set_f_17(0x4225ed1);
  v27->set_f_10(s->substr(0, 205));
  v27->set_f_23(0x4bd9da90);
  v27->set_f_19(0x95c38e26292dbff5);
  v27->set_f_6(0x791e97);
  v27->set_f_4(0x632f1f24);
  v27->set_f_7(0x32e73d83fc1c4b2);
  v27->set_f_20(0x53);
  v23->set_f_0(0x8b04e2579e486492);
  Message0::M3::M39* v28 = v23->mutable_f_10();
  v28->set_f_0(0xf488069);
  v28->set_f_1(0xfdda6473d43a3cb6);
  message->set_f_26(0x3445aff4);
  Message0::M4* v29 = message->mutable_f_50();
  Message0::M4::M32* v30 = v29->mutable_f_9();
  (void)v30;  // Suppresses clang-tidy.
  v29->set_f_0(0.147404);
  Message0::M4::M37* v31 = v29->mutable_f_10();
  v31->set_f_1(0x9c703d4a53cb003c);
  Message0::M4::M31* v32_0 = v29->add_f_6();
  Message0::M4::M31::M49* v33_0 = v32_0->add_f_8();
  Message0::M4::M31::M49::M61* v34 = v33_0->mutable_f_3();
  v34->set_f_0(0.817844);
  Message0::M4::M31::M49::M61::M72* v35 = v34->mutable_f_3();
  v35->set_f_0(0x1e);
  Message0::M4::M31::M49::M61::M72::M80* v36 = v35->mutable_f_4();
  v36->set_f_2(0x416807);
  v36->set_f_0(0xfd4d6e8);
  v36->set_f_1(s->substr(0, 100));
  v36->add_f_3(Message0::M4::M31::M49::M61::M72::M80::E9_CONST_1);
  Message0::M4::M31::M49::M68* v37_0 = v33_0->add_f_4();
  Message0::M4::M31::M49::M68::M73* v38 = v37_0->mutable_f_3();
  (void)v38;  // Suppresses clang-tidy.
  v37_0->set_f_0(0x70ac981b);
  Message0::M4::M31::M49::M71* v39_0 = v33_0->add_f_6();
  v39_0->set_f_0(0x12667bf4ef5);
  v33_0->set_f_1(0x5e6753df72fa68eb);
  v33_0->set_f_0(s->substr(0, 209));
  v32_0->set_f_0(0xd623c52203fbc51);
  Message0::M4::M25* v40_0 = v29->add_f_5();
  v40_0->set_f_0(0xd0d6aa852f7c0ffd);
  Message0::M4::M16* v41_0 = v29->add_f_3();
  Message0::M4::M16::M47* v42 = v41_0->mutable_f_4();
  (void)v42;  // Suppresses clang-tidy.
  v41_0->set_f_0(0x2e02b9c0);
  message->set_f_28(0x5a);
  message->set_f_21(0x2281f);
  message->set_f_14(0xd49819f9f998ff79);
  message->set_f_0(s->substr(0, 3));
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
}  // namespace fleetbench::rpc::P5::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_
