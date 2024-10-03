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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message1.pb.h"

namespace fleetbench::rpc::P9::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_10(0x2dd85c1d6803ba9c);
  message->set_f_0(false);
  message->set_f_25(0x68bbaebc9fb2f44a);
  message->set_f_15(0x6d);
  Message1::M5* v0_0 = message->add_f_68();
  Message1::M5::M17* v1_0 = v0_0->add_f_3();
  v1_0->set_f_0(true);
  message->set_f_5(false);
  message->set_f_18(true);
  message->set_f_3(0x52a12);
  message->set_f_26(0xe035a6c1c0c7cb7);
  message->set_f_21(0x57);
  message->set_f_8(s->substr(0, 4));
  message->set_f_14(0x58e03b0);
  Message1::M4* v2 = message->mutable_f_67();
  v2->set_f_0(0x1);
  Message1::M4::M24* v3_0 = v2->add_f_8();
  v3_0->set_f_0(0x2a97537023f8ab7a);
  v3_0->set_f_1(true);
  Message1::M4::M40* v4 = v2->mutable_f_14();
  (void)v4;  // Suppresses clang-tidy.
  Message1::M4::M32* v5 = v2->mutable_f_12();
  v5->set_f_0(true);
  Message1::M4::M20* v6 = v2->mutable_f_6();
  v6->set_f_0(0.581651);
  Message1::M4::M20::M50* v7 = v6->mutable_f_7();
  v7->set_f_0(s->substr(0, 20));
  Message1::M9* v8_0 = message->add_f_73();
  (void)v8_0;  // Suppresses clang-tidy.
  message->set_f_28(false);
  message->set_f_1(s->substr(0, 1));
  message->set_f_20(s->substr(0, 7));
  message->set_f_19(0x279b6e4578c65641);
  message->set_f_17(0xd3fc8cb);
  message->add_f_7(Message1::E1_CONST_1);
  message->set_f_22(0x2def88aa4f45fc48);
  Message1::M12* v9_0 = message->add_f_79();
  v9_0->set_f_0(true);
  message->set_f_6(0x59447c2);
  Message1::M11* v10 = message->mutable_f_77();
  Message1::M11::M34* v11_0 = v10->add_f_5();
  v11_0->set_f_1(true);
  v11_0->set_f_2(0x6a);
  v11_0->set_f_0(0.174226);
  Message1::M11::M34::M56* v12 = v11_0->mutable_f_6();
  v12->set_f_2(0x233c);
  v12->set_f_1(true);
  v12->set_f_0(0x47);
  Message1::M11::M29* v13 = v10->mutable_f_3();
  v13->set_f_2(0x13);
  v13->set_f_0(0x492b495f21936b87);
  Message1::M8* v14 = message->mutable_f_72();
  v14->set_f_3(s->substr(0, 20));
  Message1::M8::M33* v15 = v14->mutable_f_15();
  v15->set_f_0(0x2a0c5898);
  v15->set_f_5(s->substr(0, 1));
  v15->set_f_3(0xd424a20);
  v15->set_f_4(0x93);
  Message1::M8::M33::M57* v16 = v15->mutable_f_9();
  (void)v16;  // Suppresses clang-tidy.
  v15->set_f_2(0xa);
  v14->set_f_2(0x7a4792fe62d312d5);
  Message1::M8::M18* v17_0 = v14->add_f_11();
  v17_0->set_f_1(0x77);
  v17_0->set_f_2(true);
  Message1::M8::M35* v18 = v14->mutable_f_16();
  (void)v18;  // Suppresses clang-tidy.
  Message1::M8::M26* v19 = v14->mutable_f_14();
  v19->set_f_0(0x3defebe);
  v14->set_f_0(s->substr(0, 15));
  message->set_f_4(0.541117);
  Message1::M13* v20 = message->mutable_f_81();
  v20->set_f_3(0x46314f65);
  v20->set_f_0(0x163);
  Message1::M13::M23* v21_0 = v20->add_f_50();
  v21_0->set_f_1(0x78);
  v20->set_f_2(0x56);
  v20->set_f_7(0x44);
  v20->set_f_23(0x39061ede1cbcdfa7);
  v20->set_f_25(0x24);
  v20->set_f_28(Message1::M13::E2_CONST_5);
  v20->set_f_4(s->substr(0, 7));
  v20->set_f_20(0x402f136cf4962a89);
  v20->set_f_30(0x6a);
  v20->set_f_13(s->substr(0, 79));
  v20->set_f_1(0x70971af4a808b76f);
  v20->set_f_19(0x13be51);
  v20->set_f_6(0xe1);
  v20->set_f_5(0x54);
  v20->set_f_24(0xd);
  v20->set_f_12(0xbfeb3);
  v20->set_f_29(0x7e);
  v20->set_f_21(0x6b6d1d415a884702);
  v20->set_f_9(0x4174ba5e98ecfe85);
  v20->set_f_14(0x7171d);
  Message1::M7* v22 = message->mutable_f_71();
  v22->set_f_1(0.428474);
  Message1::M7::M36* v23_0 = v22->add_f_4();
  (void)v23_0;  // Suppresses clang-tidy.
  v22->set_f_2(true);
  message->set_f_24(0x1f);
  message->set_f_29(0x1f6f7a);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_8(s->substr(0, 113));
  message->set_f_19(0x49959fe85067c4aa);
  Message1::M4* v0 = message->mutable_f_67();
  v0->set_f_0(0x2e);
  Message1::M4::M32* v1 = v0->mutable_f_12();
  v1->set_f_0(true);
  Message1::M4::M40* v2 = v0->mutable_f_14();
  v2->set_f_0(0xce9);
  Message1::M4::M24* v3_0 = v0->add_f_8();
  v3_0->set_f_1(false);
  v3_0->set_f_0(0x265f8cfe80e3b30b);
  message->set_f_26(0x27233e096e00c9bd);
  message->set_f_29(0x42);
  message->set_f_12(0x33);
  Message1::M5* v4_0 = message->add_f_68();
  Message1::M5::M17* v5_0 = v4_0->add_f_3();
  Message1::M5::M17::M45* v6 = v5_0->mutable_f_3();
  v6->set_f_1(0x6b);
  Message1::M10* v7 = message->mutable_f_75();
  v7->set_f_1(0x553e8c8bf426641d);
  Message1::M10::M41* v8_0 = v7->add_f_5();
  (void)v8_0;  // Suppresses clang-tidy.
  v7->set_f_2(s->substr(0, 3494));
  message->set_f_1(s->substr(0, 14));
  message->set_f_5(false);
  message->set_f_23(0x36);
  message->set_f_24(0x40);
  message->set_f_20(s->substr(0, 4));
  message->set_f_21(0xfdee0);
  message->set_f_15(0x22);
  Message1::M6* v9_0 = message->add_f_69();
  (void)v9_0;  // Suppresses clang-tidy.
  message->add_f_9(s->substr(0, 6));
  Message1::M1* v10 = message->mutable_f_61();
  v10->set_f_0(0x4ff8f83e);
  v10->set_f_2(0x5c933);
  v10->set_f_4(0x91354);
  Message1::M1::M19* v11 = v10->mutable_f_9();
  v11->set_f_4(0x4e3a7107c58224c5);
  v11->set_f_3(0x572be96bf9bcff2);
  v11->set_f_2(0x7dde8a02ba829530);
  Message1::M1::M27* v12 = v10->mutable_f_12();
  (void)v12;  // Suppresses clang-tidy.
  v10->set_f_1(0x6d138633c12368f9);
  v10->set_f_3(0x7bb1620);
  Message1::M8* v13 = message->mutable_f_72();
  v13->set_f_1(true);
  v13->set_f_0(s->substr(0, 5));
  Message1::M8::M25* v14 = v13->mutable_f_13();
  v14->set_f_0(false);
  Message1::M8::M25::M49* v15 = v14->mutable_f_4();
  v15->set_f_0(0x41);
  v13->set_f_3(s->substr(0, 6));
  Message1::M8::M26* v16 = v13->mutable_f_14();
  v16->set_f_0(0x21);
  v13->set_f_2(0x7a6e8cbb4ffdac24);
  Message1::M8::M18* v17_0 = v13->add_f_11();
  v17_0->set_f_2(false);
  v17_0->set_f_1(0x37bc);
  message->set_f_27(0x4df6e45);
  message->set_f_0(false);
  message->set_f_6(0x9a1657c);
  message->set_f_18(true);
  message->set_f_17(0xa82ee);
  message->set_f_13(0x11);
  Message1::M7* v18 = message->mutable_f_71();
  v18->set_f_1(0.508006);
  v18->set_f_0(0x61);
  message->set_f_4(0.261734);
  Message1::M9* v19_0 = message->add_f_73();
  v19_0->set_f_0(0x762bacd0f9a0a4bc);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_61();
  v0->set_f_1(0x7527943578186fb8);
  v0->set_f_2(0x27);
  Message1::M1::M27* v1 = v0->mutable_f_12();
  v1->set_f_0(0x133dc0eb317efc34);
  Message1::M1::M22* v2_0 = v0->add_f_10();
  v2_0->set_f_0(s->substr(0, 129));
  message->set_f_21(0x1f);
  message->set_f_25(0x5ac51d342e92db5);
  Message1::M2* v3 = message->mutable_f_63();
  v3->set_f_4(0x32);
  v3->set_f_1(0x5a89e6dcd8a27cb2);
  v3->set_f_5(0x45);
  v3->set_f_2(0x3e27a);
  v3->set_f_3(0xa);
  message->set_f_24(0x268e);
  message->set_f_29(0x2c);
  message->set_f_15(0x47);
  Message1::M6* v4_0 = message->add_f_69();
  v4_0->set_f_0(0x1841fe);
  message->set_f_13(0x4d);
  Message1::M5* v5_0 = message->add_f_68();
  Message1::M5::M17* v6_0 = v5_0->add_f_3();
  Message1::M5::M17::M48* v7_0 = v6_0->add_f_8();
  v7_0->set_f_0(false);
  v6_0->set_f_0(false);
  Message1::M7* v8 = message->mutable_f_71();
  v8->set_f_1(0.584175);
  Message1::M7::M36* v9_0 = v8->add_f_4();
  v9_0->set_f_0(0x61216a798662f39f);
  v8->set_f_0(0x4b);
  message->set_f_5(true);
  Message1::M13* v10 = message->mutable_f_81();
  v10->set_f_24(0x13c1580);
  v10->set_f_23(0x1c60134afa8c044f);
  v10->set_f_13(s->substr(0, 1));
  v10->set_f_15(true);
  v10->set_f_11(0x60465fc04c31cc79);
  v10->set_f_20(0x3aec749ae9e9aa71);
  v10->set_f_2(0x73);
  v10->set_f_6(0x3e81);
  Message1::M13::M23* v11_0 = v10->add_f_50();
  (void)v11_0;  // Suppresses clang-tidy.
  v10->set_f_1(0x3e55cab5358a844c);
  v10->set_f_26(0x500165daff9489aa);
  v10->set_f_14(0xd41);
  v10->set_f_27(0xe);
  v10->set_f_4(s->substr(0, 28));
  v10->set_f_25(0x32);
  v10->set_f_7(0x3f);
  v10->set_f_5(0x3394087);
  v10->set_f_29(0x35);
  message->set_f_28(false);
  Message1::M10* v12 = message->mutable_f_75();
  v12->set_f_0(s->substr(0, 21));
  v12->set_f_1(0x27c38265067ced46);
  Message1::M10::M41* v13_0 = v12->add_f_5();
  (void)v13_0;  // Suppresses clang-tidy.
  v12->set_f_2(s->substr(0, 14));
  Message1::M9* v14_0 = message->add_f_73();
  v14_0->set_f_0(0x64e6eb996c9a1159);
  message->set_f_12(0x19);
  message->set_f_6(0x65c2d7a);
  message->set_f_2(false);
  message->set_f_16(0x268d67148394a4c4);
  Message1::M4* v15 = message->mutable_f_67();
  Message1::M4::M24* v16_0 = v15->add_f_8();
  v16_0->set_f_1(false);
  v16_0->set_f_0(0x67e26e94d6cbddb1);
  Message1::M4::M40* v17 = v15->mutable_f_14();
  v17->set_f_0(0x41);
  v15->set_f_0(0x24e7e);
  message->set_f_20(s->substr(0, 1));
  message->set_f_0(false);
  message->set_f_27(0x8a55);
  message->set_f_26(0x5e0e58bb29bd0251);
  message->add_f_9(s->substr(0, 7));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_17(0x74);
  message->set_f_8(s->substr(0, 5));
  message->set_f_0(true);
  Message1::M8* v0 = message->mutable_f_72();
  Message1::M8::M18* v1_0 = v0->add_f_11();
  v1_0->set_f_0(0x46b6016c1e778564);
  v1_0->set_f_2(true);
  v1_0->set_f_1(0x1839e9);
  v0->set_f_2(0x12fd40e20c5d779c);
  v0->set_f_3(s->substr(0, 13));
  v0->set_f_1(false);
  Message1::M8::M33* v2 = v0->mutable_f_15();
  v2->set_f_4(0xb3cdc32);
  v2->set_f_1(0x7808a75303477a6b);
  Message1::M8::M26* v3 = v0->mutable_f_14();
  v3->set_f_0(0x47d2ed4);
  Message1::M8::M35* v4 = v0->mutable_f_16();
  v4->set_f_0(true);
  message->set_f_4(0.904467);
  message->set_f_5(false);
  Message1::M11* v5 = message->mutable_f_77();
  Message1::M11::M34* v6_0 = v5->add_f_5();
  v6_0->set_f_0(0.504979);
  Message1::M11::M34::M56* v7 = v6_0->mutable_f_6();
  v7->set_f_0(0x2f81);
  v7->set_f_2(0x5a);
  v7->set_f_1(true);
  Message1::M11::M34::M58* v8_0 = v6_0->add_f_7();
  v8_0->set_f_29(0x122953f6f2949819);
  v8_0->set_f_5(0x267b);
  v8_0->set_f_25(0x3e);
  v8_0->set_f_17(false);
  v8_0->set_f_14(false);
  v8_0->set_f_6(0x2a);
  v8_0->set_f_11(0x1e);
  v8_0->set_f_10(0x1017);
  v8_0->set_f_27(0x44);
  v8_0->set_f_24(0x6ac1ec766146c8e5);
  v8_0->set_f_9(0xb);
  v8_0->set_f_13(0x1f);
  v8_0->set_f_20(0x63);
  v8_0->set_f_21(0x3c);
  v8_0->set_f_12(s->substr(0, 14));
  v8_0->set_f_26(0x5ff2b6cc076615a7);
  v8_0->set_f_16(0xf973975);
  v8_0->set_f_22(0x4b);
  v8_0->set_f_15(false);
  v8_0->set_f_28(false);
  v8_0->set_f_19(0x349b7);
  v8_0->set_f_3(0x91b4d37d22256ff);
  Message1::M11::M34::M46* v9_0 = v6_0->add_f_5();
  v9_0->set_f_1(0x5be332e46ab4dab);
  v9_0->set_f_0(true);
  v9_0->set_f_2(0x6b);
  Message1::M11::M29* v10 = v5->mutable_f_3();
  v10->set_f_2(0x53);
  v10->set_f_1(0x3bce01a996f2d032);
  Message1::M11::M29::M52* v11 = v10->mutable_f_10();
  v11->set_f_3(0x699a6f48d7e19199);
  Message1::M11::M29::M52::M69* v12 = v11->mutable_f_10();
  v12->set_f_1(s->substr(0, 16));
  v12->set_f_0(0x3e);
  Message1::M11::M29::M52::M61* v13 = v11->mutable_f_9();
  v13->set_f_0(0x263cd87ecb3070fa);
  v11->set_f_0(0x268b73952fbd9cfa);
  v11->add_f_4(Message1::M11::M29::M52::E3_CONST_4);
  Message1::M3* v14 = message->mutable_f_65();
  Message1::M3::M42* v15 = v14->mutable_f_14();
  Message1::M3::M42::M44* v16 = v15->mutable_f_4();
  v16->set_f_2(0x9ddad79);
  v16->set_f_4(s->substr(0, 26));
  v16->set_f_0(0x4e814a7b322f3b4b);
  v16->set_f_1(s->substr(0, 12));
  v16->set_f_3(0x1a);
  v15->set_f_0(0x44);
  Message1::M3::M38* v17_0 = v14->add_f_11();
  v17_0->set_f_2(s->substr(0, 32));
  v17_0->set_f_3(0x2a);
  v17_0->set_f_0(0xc7f74c76eac204);
  Message1::M3::M28* v18 = v14->mutable_f_9();
  Message1::M3::M28::M47* v19_0 = v18->add_f_2();
  v19_0->set_f_0(0xbf271d769f4fc49);
  Message1::M3::M28::M47::M66* v20 = v19_0->mutable_f_4();
  (void)v20;  // Suppresses clang-tidy.
  Message1::M3::M28::M47::M59* v21 = v19_0->mutable_f_2();
  v21->set_f_0(s->substr(0, 17));
  v21->set_f_1(0x23c0103994d636f3);
  Message1::M3::M15* v22 = v14->mutable_f_7();
  v22->set_f_0(0x28);
  Message1::M3::M39* v23 = v14->mutable_f_13();
  v23->set_f_0(s->substr(0, 6));
  v23->set_f_1(0x70e7d29fa4f1bba3);
  Message1::M7* v24 = message->mutable_f_71();
  v24->set_f_0(0x7e);
  Message1::M7::M36* v25_0 = v24->add_f_4();
  v25_0->set_f_0(0x3de74fa7fc003465);
  Message1::M2* v26 = message->mutable_f_63();
  v26->set_f_3(0x3059df3);
  v26->set_f_4(0x44);
  Message1::M2::M30* v27 = v26->mutable_f_14();
  v27->set_f_2(0x240deaf5);
  v27->set_f_3(0x4);
  v26->add_f_6(s->substr(0, 1));
  v26->set_f_0(s->substr(0, 3));
  message->set_f_1(s->substr(0, 18));
  Message1::M1* v28 = message->mutable_f_61();
  Message1::M1::M19* v29 = v28->mutable_f_9();
  v29->set_f_1(0x5ec);
  v29->set_f_4(0x234f437b61a6d7eb);
  Message1::M1::M27* v30 = v28->mutable_f_12();
  v30->set_f_0(0x46e1b2d2ac38e515);
  Message1::M1::M22* v31_0 = v28->add_f_10();
  v31_0->set_f_0(s->substr(0, 21));
  v28->set_f_0(0x6ed768ee);
  message->set_f_6(0x49);
  message->set_f_10(0x57a63443e3b4ecf3);
  message->set_f_26(0x50b3211ed23a80e2);
  message->set_f_28(true);
  message->add_f_9(s->substr(0, 6));
  Message1::M13* v32 = message->mutable_f_81();
  v32->set_f_13(s->substr(0, 5));
  v32->set_f_0(0x1f);
  v32->set_f_19(0x3c5c);
  v32->set_f_10(0x6f);
  v32->set_f_1(0x5d65b2e8209ec024);
  v32->set_f_21(0x6a445475ce253c86);
  v32->set_f_18(0x1891eb);
  v32->set_f_29(0x15d89f);
  v32->set_f_8(0x3c1a2e6f3274d762);
  v32->set_f_6(0x6d);
  v32->set_f_20(0x6d246dd92fcded55);
  v32->set_f_26(0x5a6a58fc04b16458);
  v32->set_f_12(0x3660);
  v32->set_f_2(0x134f1);
  v32->set_f_28(Message1::M13::E2_CONST_3);
  v32->set_f_23(0x4616cb3a58299ca8);
  v32->set_f_11(0x619b2ff207b7d57d);
  v32->set_f_16(0x1203270a2486965a);
  Message1::M13::M23* v33_0 = v32->add_f_50();
  v33_0->set_f_0(0x303d1276554b3c52);
  v32->set_f_24(0x1);
  v32->set_f_27(0x4);
  v32->set_f_22(0x4eea451c);
  v32->set_f_17(0x4a);
  message->set_f_23(0x33e4);
  Message1::M4* v34 = message->mutable_f_67();
  Message1::M4::M24* v35_0 = v34->add_f_8();
  v35_0->set_f_1(false);
  v35_0->set_f_0(0x4b969a9dbb9fef3b);
  Message1::M4::M40* v36 = v34->mutable_f_14();
  v36->set_f_0(0x2f1b);
  Message1::M4::M20* v37 = v34->mutable_f_6();
  v37->set_f_0(0.315189);
  Message1::M4::M20::M50* v38 = v37->mutable_f_7();
  v38->set_f_0(s->substr(0, 94));
  v34->set_f_1(0x745);
  Message1::M4::M32* v39 = v34->mutable_f_12();
  v39->set_f_0(true);
  message->set_f_25(0x5a6d39ee044d003d);
  message->set_f_19(0x5c66875d346e9d77);
  message->set_f_3(0x50);
  message->set_f_29(0x8);
  message->set_f_24(0x42);
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
}  // namespace fleetbench::rpc::P9::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P9_REQUEST_ACCESS_MESSAGE1_H_
