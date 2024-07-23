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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message0.pb.h"

namespace fleetbench::rpc::P9::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_20(false);
  message->set_f_29(0x70e64525de70b3da);
  message->set_f_8(0x39);
  message->set_f_28(0x1d52);
  message->set_f_7(0xc79cb115258e1488);
  Message0::M3* v0 = message->mutable_f_52();
  v0->set_f_0(s->substr(0, 19));
  message->set_f_22(s->substr(0, 16));
  Message0::M18* v1 = message->mutable_f_72();
  v1->set_f_0(0x4);
  message->set_f_21(s->substr(0, 3));
  message->set_f_24(false);
  Message0::M8* v2 = message->mutable_f_59();
  Message0::M8::M47* v3_0 = v2->add_f_7();
  (void)v3_0;  // Suppresses clang-tidy.
  Message0::M8::M48* v4 = v2->mutable_f_10();
  v4->set_f_1(0x20dc61df544c8030);
  v4->set_f_2(true);
  v4->add_f_5(Message0::M8::M48::E5_CONST_5);
  v2->set_f_0(s->substr(0, 252));
  message->set_f_5(0x1ccd);
  message->set_f_2(0xbaa32dc8f7cb50c);
  Message0::M12* v5 = message->mutable_f_65();
  Message0::M12::M74* v6 = v5->mutable_f_4();
  v6->set_f_2(s->substr(0, 26));
  v6->set_f_0(0x1eca0e);
  v6->set_f_1(0x27);
  Message0::M12::M20* v7 = v5->mutable_f_2();
  v7->set_f_4(s->substr(0, 49));
  v7->set_f_0(0x65165c823806e7ac);
  Message0::M12::M20::M84* v8 = v7->mutable_f_8();
  v8->set_f_0(0x38);
  Message0::M9* v9 = message->mutable_f_62();
  Message0::M9::M65* v10_0 = v9->add_f_5();
  v10_0->set_f_1(true);
  Message0::M9::M46* v11_0 = v9->add_f_2();
  v11_0->set_f_0(0x49);
  message->set_f_31(Message0::E1_CONST_1);
  message->set_f_15(0xf147657733febcea);
  message->set_f_23(0x37f1aba);
  message->set_f_0(0x96d6a);
  message->set_f_9(0x1ff33c1c);
  int32_t array_1[7] = {
      0x2b, 0x73, 0x40, 0x66, 0x32, 0x54, 0x73,
  };
  for (auto v : array_1) {
    message->add_f_19(v);
  }
  Message0::M11* v12 = message->mutable_f_64();
  (void)v12;  // Suppresses clang-tidy.
  Message0::M15* v13 = message->mutable_f_68();
  Message0::M15::M49* v14 = v13->mutable_f_7();
  v14->add_f_0(s->substr(0, 5));
  v13->set_f_0(Message0::M15::E2_CONST_4);
  Message0::M15::M56* v15 = v13->mutable_f_10();
  v15->set_f_0(0x15643dd22fd48d08);
  Message0::M15::M55* v16 = v13->mutable_f_9();
  v16->set_f_0(0x73);
  v13->set_f_1(s->substr(0, 23));
  Message0::M15::M51* v17 = v13->mutable_f_8();
  (void)v17;  // Suppresses clang-tidy.
  Message0::M7* v18 = message->mutable_f_58();
  Message0::M7::M21* v19 = v18->mutable_f_9();
  v19->set_f_3(0xeec066fce0bf8aa3);
  v19->set_f_0(0x68a52a779e097caa);
  v19->set_f_1(0xe1f662a37e312be9);
  v19->set_f_2(s->substr(0, 3));
  v18->set_f_5(true);
  Message0::M7::M30* v20 = v18->mutable_f_12();
  v20->set_f_0(s->substr(0, 1));
  v20->set_f_4(false);
  v20->set_f_3(0x66140b);
  v18->set_f_1(false);
  Message0::M7::M23* v21 = v18->mutable_f_11();
  Message0::M7::M23::M83* v22 = v21->mutable_f_3();
  (void)v22;  // Suppresses clang-tidy.
  v21->set_f_0(0x5f);
  v18->set_f_4(0x22);
  message->set_f_26(0x2969093f09245f1e);
  message->set_f_18(true);
  message->set_f_32(0x796767609e06c753);
  Message0::M13* v23_0 = message->add_f_66();
  Message0::M13::M81* v24 = v23_0->mutable_f_8();
  v24->set_f_2(0x77da8);
  v24->set_f_3(s->substr(0, 282));
  v24->set_f_8(s->substr(0, 7));
  v24->set_f_13(Message0::M13::M81::E9_CONST_1);
  v24->set_f_4(0x58);
  v24->set_f_5(0x4a);
  v24->set_f_6(0x8f483f9);
  v24->set_f_23(s->substr(0, 13));
  v24->set_f_10(0xcd8c74e870aa1703);
  v24->add_f_0(s->substr(0, 1));
  v24->set_f_9(s->substr(0, 27));
  v24->set_f_7(0x895e13c399bf2efc);
  v24->set_f_19(Message0::M13::M81::E10_CONST_4);
  v24->set_f_11(s->substr(0, 31));
  v24->set_f_22(0x37733e8e);
  v24->set_f_29(0x10);
  v24->set_f_16(true);
  v24->add_f_17(0x39);
  Message0::M13::M36* v25 = v23_0->mutable_f_6();
  v25->set_f_0(0xd6dd7db38b7a0443);
  v25->set_f_5(0x644ecf0cc8bc9cff);
  v25->set_f_2(s->substr(0, 2986));
  v25->set_f_4(false);
  message->set_f_3(0xa2908f6054c9f14f);
  Message0::M14* v26 = message->mutable_f_67();
  v26->set_f_1(0xc07);
  v26->set_f_2(0x28);
  Message0::M14::M70* v27 = v26->mutable_f_6();
  v27->set_f_0(0x4c);
  Message0::M6* v28 = message->mutable_f_57();
  Message0::M6::M25* v29 = v28->mutable_f_3();
  v29->set_f_0(0x8daab1b9a47ead86);
  v28->set_f_0(0x2e);
  message->set_f_17(0x18);
  message->set_f_11(0x5f1bcc62f596a530);
  message->set_f_12(0x857405455de3f6ac);
  Message0::M1* v30_0 = message->add_f_49();
  Message0::M1::M39* v31 = v30_0->mutable_f_4();
  (void)v31;  // Suppresses clang-tidy.
  v30_0->set_f_0(0x3553);
  Message0::M1::M34* v32 = v30_0->mutable_f_3();
  (void)v32;  // Suppresses clang-tidy.
  Message0::M1::M59* v33 = v30_0->mutable_f_8();
  v33->set_f_0(0.692835);
  Message0::M1::M77* v34 = v30_0->mutable_f_12();
  v34->set_f_0(s->substr(0, 9));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_31(Message0::E1_CONST_4);
  message->set_f_14(0x4ff);
  Message0::M18* v0 = message->mutable_f_72();
  v0->set_f_1(true);
  Message0::M18::M50* v1_0 = v0->add_f_5();
  v1_0->set_f_0(0x62865b0ab9815372);
  Message0::M18::M41* v2 = v0->mutable_f_4();
  v2->set_f_2(s->substr(0, 26));
  v2->set_f_1(0x38);
  v2->set_f_3(0x5b6f54d70e823c1b);
  message->set_f_18(true);
  int32_t array_0[8] = {
      0x1d, 0x2e, 0x43, 0x1, 0x18, 0xbe86928, 0x43, 0x1d7d76,
  };
  for (auto v : array_0) {
    message->add_f_19(v);
  }
  message->set_f_25(s->substr(0, 17));
  Message0::M3* v3 = message->mutable_f_52();
  Message0::M3::M28* v4 = v3->mutable_f_4();
  v4->set_f_0(s->substr(0, 1));
  v3->set_f_0(s->substr(0, 331));
  message->set_f_3(0xb2425de0e97e5757);
  Message0::M5* v5 = message->mutable_f_56();
  Message0::M5::M76* v6 = v5->mutable_f_6();
  Message0::M5::M76::M94* v7_0 = v6->add_f_5();
  v7_0->set_f_0(0x6c);
  v6->set_f_0(0xea0b115968b92020);
  Message0::M5::M73* v8 = v5->mutable_f_4();
  v8->set_f_0(s->substr(0, 22));
  v5->set_f_1(0.855523);
  Message0::M8* v9 = message->mutable_f_59();
  Message0::M8::M79* v10_0 = v9->add_f_11();
  v10_0->set_f_0(0x26);
  Message0::M8::M48* v11 = v9->mutable_f_10();
  v11->set_f_4(0x5f);
  v11->set_f_3(0x10d730d8);
  v11->set_f_1(0x2d5e4e7a1759a691);
  v11->set_f_2(false);
  Message0::M8::M47* v12_0 = v9->add_f_7();
  v12_0->set_f_0(0x156c7c88);
  Message0::M8::M45* v13 = v9->mutable_f_6();
  (void)v13;  // Suppresses clang-tidy.
  v9->set_f_0(s->substr(0, 8));
  message->set_f_27(0x3a);
  Message0::M17* v14 = message->mutable_f_71();
  Message0::M17::M54* v15 = v14->mutable_f_4();
  v15->set_f_0(0x14);
  Message0::M17::M24* v16 = v14->mutable_f_3();
  v16->set_f_1(0.173145);
  v16->set_f_0(0x3b54e89e);
  v14->add_f_0(s->substr(0, 7));
  Message0::M17::M67* v17 = v14->mutable_f_6();
  (void)v17;  // Suppresses clang-tidy.
  message->set_f_6(s->substr(0, 1));
  message->set_f_17(0x174b);
  Message0::M7* v18 = message->mutable_f_58();
  v18->set_f_2(0x79b19fa);
  v18->set_f_5(true);
  Message0::M7::M30* v19 = v18->mutable_f_12();
  v19->set_f_4(true);
  Message0::M7::M21* v20 = v18->mutable_f_9();
  v20->set_f_4(0x57);
  v20->set_f_3(0xd0a82eff5afe186b);
  v18->set_f_4(0x16);
  Message0::M4* v21 = message->mutable_f_54();
  Message0::M4::M71* v22_0 = v21->add_f_6();
  v22_0->set_f_0(true);
  v21->set_f_0(false);
  Message0::M1* v23_0 = message->add_f_49();
  Message0::M1::M59* v24 = v23_0->mutable_f_8();
  v24->set_f_0(0.288206);
  Message0::M1::M77* v25 = v23_0->mutable_f_12();
  v25->set_f_0(s->substr(0, 11));
  Message0::M1::M69* v26_0 = v23_0->add_f_11();
  v26_0->set_f_0(0x26302a39589ff3b7);
  Message0::M1::M39* v27 = v23_0->mutable_f_4();
  v27->set_f_0(0x79);
  message->set_f_11(0x8c7d81e426150690);
  Message0::M14* v28 = message->mutable_f_67();
  Message0::M14::M70* v29 = v28->mutable_f_6();
  v29->set_f_0(0xfc05037);
  v28->set_f_2(0xc);
  v28->set_f_0(0x1e);
  v28->set_f_1(0x20);
  message->set_f_1(0x70);
  message->set_f_7(0xe4fb86e14a797638);
  message->set_f_23(0x1812d2e);
  message->set_f_15(0x33bdee9455ef406f);
  Message0::M15* v30 = message->mutable_f_68();
  Message0::M15::M55* v31 = v30->mutable_f_9();
  (void)v31;  // Suppresses clang-tidy.
  Message0::M15::M49* v32 = v30->mutable_f_7();
  v32->set_f_1(0x4c);
  v32->add_f_0(s->substr(0, 7));
  v32->add_f_0(s->substr(0, 4));
  Message0::M15::M68* v33 = v30->mutable_f_11();
  v33->add_f_2(Message0::M15::M68::E7_CONST_3);
  v33->set_f_0(Message0::M15::M68::E6_CONST_1);
  Message0::M15::M51* v34 = v30->mutable_f_8();
  Message0::M15::M51::M85* v35_0 = v34->add_f_2();
  v35_0->set_f_3(0x6be2174);
  v35_0->set_f_2(0x51);
  v34->set_f_0(0x317b);
  Message0::M15::M75* v36 = v30->mutable_f_12();
  v36->set_f_0(0x16a676);
  v30->set_f_1(s->substr(0, 2));
  Message0::M2* v37 = message->mutable_f_51();
  Message0::M2::M29* v38 = v37->mutable_f_3();
  v38->set_f_0(0xfd7);
  Message0::M2::M58* v39 = v37->mutable_f_5();
  v39->set_f_3(s->substr(0, 17));
  Message0::M2::M58::M89* v40_0 = v39->add_f_7();
  Message0::M2::M58::M89::M106* v41 = v40_0->mutable_f_4();
  v41->set_f_1(0x4f);
  v41->set_f_0(s->substr(0, 4));
  v40_0->set_f_0(0x716209c5fdc05aa0);
  v39->set_f_0(0xb98a6e1);
  v39->set_f_2(s->substr(0, 7));
  v39->add_f_1(0x70);
  Message0::M2::M26* v42 = v37->mutable_f_2();
  v42->set_f_0(0x5e);
  v42->set_f_2(0x136911a);
  v42->set_f_4(0x50);
  v37->set_f_0(s->substr(0, 127));
  Message0::M2::M52* v43 = v37->mutable_f_4();
  v43->set_f_0(0x95c0b60);
  v43->set_f_2(0x3ee59bd94f2e618c);
  v43->set_f_3(true);
  Message0::M2::M66* v44_0 = v37->add_f_6();
  v44_0->set_f_2(0x77);
  message->set_f_2(0xe8ef5c2e1c45d58e);
  message->set_f_24(false);
  message->set_f_9(0x565cb1a3);
  message->set_f_8(0x1c);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M1* v0_0 = message->add_f_49();
  Message0::M1::M77* v1 = v0_0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M1::M59* v2 = v0_0->mutable_f_8();
  v2->set_f_0(0.225765);
  Message0::M1::M59::M91* v3_0 = v2->add_f_3();
  v3_0->set_f_0(0x308d);
  v0_0->set_f_0(0x145b);
  Message0::M1::M39* v4 = v0_0->mutable_f_4();
  v4->set_f_0(0x3f34);
  message->set_f_4(0xbdeb2a0d56736ed4);
  message->set_f_7(0xbcff5927e84c9c7b);
  Message0::M8* v5 = message->mutable_f_59();
  v5->set_f_0(s->substr(0, 498));
  Message0::M8::M79* v6_0 = v5->add_f_11();
  v6_0->set_f_0(0x9cc0db0);
  message->set_f_12(0xd9584f7541ebba89);
  message->set_f_8(0x12c24b);
  Message0::M7* v7 = message->mutable_f_58();
  v7->set_f_1(true);
  v7->set_f_0(0x530bee06fdfc92e9);
  v7->set_f_2(0x5);
  Message0::M7::M30* v8 = v7->mutable_f_12();
  v8->set_f_1(0x3ddaa4e633ad368f);
  v8->set_f_4(false);
  v8->set_f_3(0x70);
  v8->set_f_2(s->substr(0, 7));
  v7->set_f_4(0xc);
  message->set_f_10(0x8);
  Message0::M18* v9 = message->mutable_f_72();
  Message0::M18::M41* v10 = v9->mutable_f_4();
  v10->set_f_2(s->substr(0, 34));
  v10->set_f_1(0x15);
  v10->set_f_0(0x3583ac374aee35f3);
  Message0::M18::M61* v11 = v9->mutable_f_8();
  v11->set_f_0(0x5bddfd359d4ef9a9);
  v9->set_f_1(false);
  message->set_f_13(0x5cab7d3936b644d3);
  Message0::M13* v12_0 = message->add_f_66();
  v12_0->set_f_0(0x72d61660f68c7f3a);
  Message0::M13::M36* v13 = v12_0->mutable_f_6();
  v13->set_f_2(s->substr(0, 1));
  v13->set_f_0(0x274f9e61109dcb1d);
  v13->set_f_3(s->substr(0, 4));
  message->set_f_18(true);
  message->set_f_21(s->substr(0, 26));
  Message0::M11* v14 = message->mutable_f_64();
  (void)v14;  // Suppresses clang-tidy.
  message->set_f_16(false);
  Message0::M4* v15 = message->mutable_f_54();
  Message0::M4::M71* v16_0 = v15->add_f_6();
  v16_0->set_f_0(true);
  Message0::M4::M37* v17 = v15->mutable_f_3();
  v17->set_f_4(s->substr(0, 253));
  Message0::M4::M37::M101* v18 = v17->mutable_f_9();
  v18->set_f_0(0xd2369);
  v17->set_f_3(Message0::M4::M37::E3_CONST_5);
  v17->set_f_1(0x1e);
  v17->set_f_2(0x4);
  Message0::M4::M53* v19 = v15->mutable_f_4();
  (void)v19;  // Suppresses clang-tidy.
  v15->set_f_1(0x27e2538d163e5f48);
  message->set_f_32(0x25cc451d37c2275d);
  message->set_f_26(0x2dd633627fa7076c);
  message->set_f_24(true);
  message->set_f_5(0x1a);
  message->set_f_2(0xad11925e29b67046);
  Message0::M2* v20 = message->mutable_f_51();
  Message0::M2::M26* v21 = v20->mutable_f_2();
  v21->set_f_1(0x4c);
  v21->set_f_4(0x90b0e73);
  v21->set_f_0(0xa);
  Message0::M2::M66* v22_0 = v20->add_f_6();
  Message0::M2::M66::M88* v23_0 = v22_0->add_f_4();
  v23_0->set_f_0(s->substr(0, 55));
  v22_0->set_f_2(0x42ca522);
  v22_0->set_f_0(0xf);
  Message0::M2::M29* v24 = v20->mutable_f_3();
  (void)v24;  // Suppresses clang-tidy.
  Message0::M2::M52* v25 = v20->mutable_f_4();
  v25->set_f_1(s->substr(0, 41));
  v25->set_f_2(0x20ec2c58197e7da5);
  v25->set_f_0(0x338a);
  message->set_f_6(s->substr(0, 3));
  message->set_f_28(0x5);
  message->set_f_25(s->substr(0, 3));
  message->set_f_31(Message0::E1_CONST_3);
  message->set_f_20(true);
  message->set_f_27(0xe8e);
  message->set_f_29(0x8954e777573b0349);
  Message0::M12* v26 = message->mutable_f_65();
  v26->set_f_0(0xefa75531b56071c1);
  Message0::M12::M20* v27 = v26->mutable_f_2();
  v27->set_f_3(s->substr(0, 36));
  v27->set_f_1(0xc3c4f2);
  v27->set_f_0(0xe308ca5963f9524a);
  v27->set_f_2(0x24a2853929b6135a);
  v27->set_f_4(s->substr(0, 8));
  message->set_f_11(0x2d6a077e00a202a7);
  Message0::M5* v28 = message->mutable_f_56();
  Message0::M5::M76* v29 = v28->mutable_f_6();
  Message0::M5::M76::M94* v30_0 = v29->add_f_5();
  v30_0->set_f_0(0x315f);
  v29->set_f_0(0x3ec0aefa6d9aeea9);
  v28->set_f_1(0.819566);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M9* v0 = message->mutable_f_62();
  Message0::M9::M64* v1 = v0->mutable_f_3();
  v1->set_f_0(s->substr(0, 135));
  Message0::M9::M46* v2_0 = v0->add_f_2();
  v2_0->set_f_0(0x1c18);
  v0->set_f_0(0x8e28ddefe72921ff);
  message->set_f_31(Message0::E1_CONST_2);
  message->set_f_4(0xdd3b020c9594860b);
  message->set_f_29(0xccfd4dea2b8e8a20);
  message->set_f_17(0x2031);
  message->set_f_8(0x51fb5db);
  Message0::M2* v3 = message->mutable_f_51();
  Message0::M2::M66* v4_0 = v3->add_f_6();
  v4_0->set_f_2(0xa06c6);
  v4_0->set_f_0(0xe91ff);
  Message0::M2::M66::M88* v5_0 = v4_0->add_f_4();
  v5_0->set_f_0(s->substr(0, 7));
  Message0::M2::M52* v6 = v3->mutable_f_4();
  v6->set_f_3(true);
  v6->set_f_2(0x5f6b2c57b577fc95);
  v6->set_f_1(s->substr(0, 8));
  v6->set_f_0(0x5d);
  Message0::M2::M58* v7 = v3->mutable_f_5();
  Message0::M2::M58::M89* v8_0 = v7->add_f_7();
  Message0::M2::M58::M89::M106* v9 = v8_0->mutable_f_4();
  v9->set_f_1(0x6);
  v7->set_f_4(0xa71b38cd5f92c700);
  v7->set_f_3(s->substr(0, 104));
  v7->set_f_2(s->substr(0, 6));
  Message0::M2::M26* v10 = v3->mutable_f_2();
  v10->set_f_3(0x89ddc7242adbdd5a);
  v10->set_f_2(0x7e);
  Message0::M6* v11 = message->mutable_f_57();
  Message0::M6::M25* v12 = v11->mutable_f_3();
  v12->set_f_0(0xb326a15471db5d4);
  message->set_f_14(0x297b476d95f);
  message->add_f_19(0x59);
  message->set_f_6(s->substr(0, 20));
  Message0::M3* v13 = message->mutable_f_52();
  v13->set_f_0(s->substr(0, 6));
  Message0::M8* v14 = message->mutable_f_59();
  Message0::M8::M79* v15_0 = v14->add_f_11();
  v15_0->set_f_0(0x2);
  Message0::M8::M19* v16 = v14->mutable_f_4();
  (void)v16;  // Suppresses clang-tidy.
  Message0::M8::M48* v17 = v14->mutable_f_10();
  v17->set_f_0(0x53);
  v17->set_f_3(0x743e8f6b);
  v17->set_f_4(0xfbf6d);
  Message0::M8::M45* v18 = v14->mutable_f_6();
  v18->set_f_0(0x4b);
  Message0::M8::M47* v19_0 = v14->add_f_7();
  (void)v19_0;  // Suppresses clang-tidy.
  Message0::M7* v20 = message->mutable_f_58();
  Message0::M7::M23* v21 = v20->mutable_f_11();
  Message0::M7::M23::M83* v22 = v21->mutable_f_3();
  (void)v22;  // Suppresses clang-tidy.
  v20->set_f_0(0x33e192b6270dd7e0);
  v20->set_f_3(0xb);
  v20->set_f_2(0xe517378);
  v20->set_f_1(false);
  v20->set_f_5(true);
  message->set_f_16(true);
  message->set_f_12(0xc322ffe6e252c90f);
  message->set_f_9(0x52f67c21);
  Message0::M10* v23 = message->mutable_f_63();
  Message0::M10::M27* v24 = v23->mutable_f_3();
  Message0::M10::M27::M99* v25_0 = v24->add_f_6();
  v25_0->set_f_7(0x62ed770a0d47bd68);
  v25_0->set_f_6(0x2e95);
  v25_0->set_f_4(s->substr(0, 21));
  v25_0->set_f_2(0x853c2c5);
  v24->set_f_2(true);
  v24->set_f_3(0x4f);
  Message0::M10::M80* v26 = v23->mutable_f_10();
  v26->set_f_3(0xdbe05c02ff3998ea);
  v26->set_f_2(true);
  v26->set_f_0(true);
  v26->set_f_4(0x2a);
  Message0::M10::M31* v27_0 = v23->add_f_4();
  v27_0->set_f_0(0xccffc);
  Message0::M10::M31::M100* v28 = v27_0->mutable_f_2();
  v28->set_f_0(0x858);
  Message0::M12* v29 = message->mutable_f_65();
  v29->set_f_0(0xdc42207fa721b567);
  Message0::M12::M74* v30 = v29->mutable_f_4();
  v30->set_f_2(s->substr(0, 5));
  v30->set_f_4(0xbb402e9);
  Message0::M4* v31 = message->mutable_f_54();
  Message0::M4::M71* v32_0 = v31->add_f_6();
  v32_0->set_f_0(false);
  Message0::M4::M37* v33 = v31->mutable_f_3();
  Message0::M4::M37::M101* v34 = v33->mutable_f_9();
  v34->set_f_0(0xe89c0);
  v33->set_f_3(Message0::M4::M37::E3_CONST_4);
  v33->set_f_2(0x5f);
  Message0::M4::M53* v35 = v31->mutable_f_4();
  v35->set_f_1(0xc4233db221d29d15);
  v35->set_f_0(0x31);
  v31->set_f_0(true);
  Message0::M4::M57* v36_0 = v31->add_f_5();
  v36_0->set_f_0(0x99f76699261abee9);
  Message0::M16* v37_0 = message->add_f_69();
  Message0::M16::M35* v38 = v37_0->mutable_f_7();
  (void)v38;  // Suppresses clang-tidy.
  v37_0->set_f_2(0x1c521ebed1b3da13);
  v37_0->set_f_3(s->substr(0, 11));
  Message0::M16::M43* v39_0 = v37_0->add_f_9();
  Message0::M16::M43::M98* v40 = v39_0->mutable_f_4();
  v40->set_f_1(s->substr(0, 13));
  v40->set_f_0(s->substr(0, 51));
  v39_0->set_f_0(false);
  v37_0->set_f_0(0x22bb);
  message->set_f_27(0x57);
  message->set_f_10(0xe3fa848);
  message->set_f_15(0x6757ab48dbf2fff5);
  message->set_f_13(0xab0ecbcf322c63eb);
  message->set_f_32(0x731329ff687c10);
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

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P9_REQUEST_ACCESS_MESSAGE0_H_
