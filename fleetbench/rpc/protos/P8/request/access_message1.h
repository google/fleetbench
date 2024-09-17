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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message1.pb.h"

namespace fleetbench::rpc::P8::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_7(0x181175afda0b887f);
  message->set_f_29(0x1e687a);
  message->set_f_9(0x5770f);
  message->set_f_15(0x3e01f8e3f0629a3a);
  message->set_f_26(s->substr(0, 25));
  message->set_f_4(Message1::E1_CONST_2);
  Message1::M1* v0 = message->mutable_f_47();
  Message1::M1::M29* v1 = v0->mutable_f_8();
  v1->set_f_2(s->substr(0, 8));
  v1->set_f_4(0x688b3567be54dc8d);
  v1->set_f_5(0x78daddc4762b8440);
  v1->set_f_0(0xc066078);
  v1->set_f_1(0xe5962af);
  v1->set_f_3(0x3c89fc9413ce6c7);
  v0->set_f_0(0x76d5e369682c854b);
  Message1::M1::M28* v2 = v0->mutable_f_7();
  v2->set_f_0(0x447cf11bea3a934a);
  Message1::M1::M28::M45* v3 = v2->mutable_f_4();
  v3->set_f_0(0x75bdf959d8ca5f04);
  Message1::M1::M28::M32* v4 = v2->mutable_f_3();
  v4->set_f_0(0x13a3cea);
  v4->set_f_1(s->substr(0, 9));
  v0->set_f_2(0.706682);
  message->set_f_22(true);
  message->add_f_11(Message1::E2_CONST_3);
  message->set_f_17(0x6c197637f288be64);
  Message1::M2* v5_0 = message->add_f_48();
  Message1::M2::M17* v6_0 = v5_0->add_f_4();
  Message1::M2::M17::M43* v7 = v6_0->mutable_f_7();
  v7->set_f_0(0x614e8c60);
  v7->set_f_2(s->substr(0, 3));
  v7->set_f_1(s->substr(0, 104));
  Message1::M2::M17::M35* v8_0 = v6_0->add_f_5();
  (void)v8_0;  // Suppresses clang-tidy.
  v5_0->set_f_0(0x884e290);
  message->add_f_24(s->substr(0, 5));
  message->set_f_21(0x2d0ff0eb);
  message->set_f_20(0x6b9c0329e3475dcd);
  message->set_f_3(0xef0461e);
  message->set_f_25(0x1);
  Message1::M3* v9 = message->mutable_f_51();
  v9->set_f_1(0x410204960f44e41d);
  v9->set_f_3(0x5a);
  Message1::M3::M21* v10_0 = v9->add_f_11();
  v10_0->set_f_2(0x5056dd3c8eeca268);
  v10_0->set_f_0(s->substr(0, 102));
  v10_0->set_f_3(0x21edfe1171f68496);
  Message1::M3::M21::M44* v11 = v10_0->mutable_f_8();
  v11->set_f_0(true);
  v10_0->add_f_1(Message1::M3::M21::E12_CONST_2);
  v9->set_f_0(false);
  Message1::M3::M24* v12 = v9->mutable_f_13();
  (void)v12;  // Suppresses clang-tidy.
  v9->set_f_2(0x5989e08cb83faf5d);
  message->set_f_16(s->substr(0, 3));
  message->set_f_27(0x7c2f477);
  Message1::M5* v13 = message->mutable_f_54();
  v13->set_f_1(true);
  v13->set_f_2(0x20);
  v13->set_f_0(0x22);
  Message1::M4* v14 = message->mutable_f_52();
  v14->set_f_3(0x36059fae5d492d7f);
  v14->set_f_0(false);
  v14->set_f_1(0x49);
  Message1::M4::M14* v15 = v14->mutable_f_7();
  v15->set_f_1(0xcbad2fd);
  v15->set_f_2(s->substr(0, 15));
  v15->set_f_0(0x18624dcb8f5d5fff);
  Message1::M4::M25* v16 = v14->mutable_f_10();
  v16->set_f_1(0x65ddba7b48fd6d15);
  v16->set_f_0(s->substr(0, 5));
  v16->set_f_3(s->substr(0, 97));
  Message1::M4::M25::M40* v17_0 = v16->add_f_6();
  v17_0->set_f_1(0xbf9dab76a48c26);
  v16->set_f_2(s->substr(0, 245));
  Message1::M4::M23* v18 = v14->mutable_f_8();
  (void)v18;  // Suppresses clang-tidy.
  Message1::M4::E4 array_1[7] = {
      Message1::M4::E4_CONST_5, Message1::M4::E4_CONST_4,
      Message1::M4::E4_CONST_2, Message1::M4::E4_CONST_2,
      Message1::M4::E4_CONST_4, Message1::M4::E4_CONST_4,
      Message1::M4::E4_CONST_1,
  };
  for (auto v : array_1) {
    v14->add_f_2(v);
  }
  Message1::M4::M9* v19 = v14->mutable_f_6();
  Message1::M4::M9::M41* v20 = v19->mutable_f_10();
  v20->set_f_0(s->substr(0, 113));
  v20->set_f_1(s->substr(0, 2));
  v19->set_f_1(0x64);
  v19->set_f_2(0x1b66ff40ef033711);
  v19->set_f_0(0x4838afe7);
  message->set_f_8(0x2e0604a741066ff8);
  message->set_f_1(s->substr(0, 1));
  message->set_f_23(0x751b0868ed246e35);
  message->set_f_28(0x6cff923c);
  message->set_f_18(0xb7b);
  message->set_f_0(0x1f88059ac361ea52);
  message->set_f_13(0x31);
  message->set_f_5(0x639c0849b0eff0d3);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_21(0x7183540);
  Message1::M5* v0 = message->mutable_f_54();
  v0->set_f_1(false);
  v0->set_f_2(0x65);
  v0->set_f_0(0x8);
  Message1::M5::M10* v1 = v0->mutable_f_7();
  Message1::M5::M10::M34* v2 = v1->mutable_f_6();
  v2->set_f_3(0x10867b);
  v2->set_f_2(0x284ade73d65a3e81);
  v1->set_f_1(0x48f653dd8eff0f0c);
  v1->set_f_3(0x63);
  v1->set_f_2(0x34ca1b8);
  v1->set_f_0(0x34f2ab6);
  message->set_f_16(s->substr(0, 7));
  message->set_f_17(0x4afa6a5e0008b565);
  message->set_f_23(0x3e581946f6e2e760);
  message->set_f_9(0x2160);
  Message1::M4* v3 = message->mutable_f_52();
  v3->set_f_1(0x53);
  Message1::M4::M14* v4 = v3->mutable_f_7();
  v4->set_f_2(s->substr(0, 3));
  v4->set_f_1(0x4be492c);
  Message1::M4::M23* v5 = v3->mutable_f_8();
  v5->set_f_0(0x261b16a566b56eab);
  Message1::M4::M25* v6 = v3->mutable_f_10();
  v6->set_f_2(s->substr(0, 6));
  v6->set_f_1(0x8c67975c28f5d24);
  v6->set_f_3(s->substr(0, 2));
  v3->set_f_0(false);
  Message1::M4::M9* v7 = v3->mutable_f_6();
  Message1::M4::M9::M41* v8 = v7->mutable_f_10();
  v8->set_f_1(s->substr(0, 19));
  v8->set_f_0(s->substr(0, 14));
  Message1::M4::M9::M39* v9 = v7->mutable_f_7();
  v9->set_f_1(0x1ab2);
  v9->set_f_2(0x635d41359604f1);
  message->set_f_25(0x4cbab);
  Message1::M2* v10_0 = message->add_f_48();
  Message1::M2::M8* v11 = v10_0->mutable_f_3();
  Message1::M2::M8::E6 array_0[18] = {
      Message1::M2::M8::E6_CONST_4, Message1::M2::M8::E6_CONST_4,
      Message1::M2::M8::E6_CONST_4, Message1::M2::M8::E6_CONST_2,
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_5,
      Message1::M2::M8::E6_CONST_4, Message1::M2::M8::E6_CONST_3,
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_4,
      Message1::M2::M8::E6_CONST_5, Message1::M2::M8::E6_CONST_3,
      Message1::M2::M8::E6_CONST_2, Message1::M2::M8::E6_CONST_1,
      Message1::M2::M8::E6_CONST_1, Message1::M2::M8::E6_CONST_2,
      Message1::M2::M8::E6_CONST_5, Message1::M2::M8::E6_CONST_4,
  };
  for (auto v : array_0) {
    v11->add_f_0(v);
  }
  message->add_f_24(s->substr(0, 4));
  message->set_f_20(0xd0afa365f9303fc);
  message->set_f_4(Message1::E1_CONST_1);
  message->set_f_10(0.233098);
  message->set_f_29(0x1b0c77);
  message->set_f_28(0x2a9a8b0c);
  Message1::M1* v12 = message->mutable_f_47();
  v12->set_f_1(s->substr(0, 5));
  Message1::M1::M29* v13 = v12->mutable_f_8();
  v13->set_f_1(0x18);
  v13->set_f_3(0x3c8250af7d294836);
  v13->set_f_5(0x4a70bec9e9a86c0f);
  v13->set_f_4(0x477717a57c572344);
  Message1::M1::M29::M46* v14 = v13->mutable_f_8();
  (void)v14;  // Suppresses clang-tidy.
  v13->set_f_0(0x6565cce);
  v13->set_f_2(s->substr(0, 17));
  Message1::M1::M28* v15 = v12->mutable_f_7();
  Message1::M1::M28::M32* v16 = v15->mutable_f_3();
  v16->set_f_1(s->substr(0, 7));
  v16->set_f_2(s->substr(0, 65));
  Message1::M1::M28::M45* v17 = v15->mutable_f_4();
  v17->set_f_0(0x3cd178bdb54666c5);
  v15->set_f_0(0x1c06cdd5f801e14f);
  Message1::M1::M26* v18 = v12->mutable_f_5();
  v18->set_f_0(0x5784ac47);
  v12->set_f_2(0.657840);
  message->set_f_3(0xa57cf);
  message->set_f_5(0x403e129b53c609a4);
  Message1::M6* v19 = message->mutable_f_55();
  v19->set_f_1(0.117371);
  v19->set_f_4(0x4211f844f2b95c71);
  v19->set_f_3(s->substr(0, 20));
  Message1::M6::M16* v20_0 = v19->add_f_8();
  v20_0->set_f_1(0x3c);
  v20_0->set_f_0(s->substr(0, 4));
  Message1::M6::M16::E10 array_1[21] = {
      Message1::M6::M16::E10_CONST_5, Message1::M6::M16::E10_CONST_3,
      Message1::M6::M16::E10_CONST_5, Message1::M6::M16::E10_CONST_4,
      Message1::M6::M16::E10_CONST_4, Message1::M6::M16::E10_CONST_3,
      Message1::M6::M16::E10_CONST_5, Message1::M6::M16::E10_CONST_4,
      Message1::M6::M16::E10_CONST_3, Message1::M6::M16::E10_CONST_3,
      Message1::M6::M16::E10_CONST_5, Message1::M6::M16::E10_CONST_5,
      Message1::M6::M16::E10_CONST_1, Message1::M6::M16::E10_CONST_4,
      Message1::M6::M16::E10_CONST_1, Message1::M6::M16::E10_CONST_3,
      Message1::M6::M16::E10_CONST_1, Message1::M6::M16::E10_CONST_3,
      Message1::M6::M16::E10_CONST_2, Message1::M6::M16::E10_CONST_1,
      Message1::M6::M16::E10_CONST_3,
  };
  for (auto v : array_1) {
    v20_0->add_f_2(v);
  }
  Message1::M6::M30* v21 = v19->mutable_f_10();
  v21->set_f_0(0x5ca6723cc1579966);
  v21->set_f_12(0xbf395942486a809);
  v21->set_f_3(0x12);
  v21->set_f_13(Message1::M6::M30::E13_CONST_2);
  v21->set_f_9(0.162728);
  v21->set_f_1(s->substr(0, 98));
  Message1::M6::M30::M33* v22 = v21->mutable_f_24();
  Message1::M6::M30::M33::M50* v23_0 = v22->add_f_3();
  v23_0->set_f_2(Message1::M6::M30::M33::M50::E14_CONST_5);
  v23_0->set_f_4(true);
  v23_0->set_f_1(0x44);
  v23_0->set_f_0(s->substr(0, 3));
  v22->set_f_0(s->substr(0, 59));
  v21->set_f_5(s->substr(0, 2));
  v21->set_f_6(s->substr(0, 1));
  v21->set_f_4(s->substr(0, 13));
  v21->set_f_16(0x7e);
  v21->set_f_2(0x2f2aff94b3c57512);
  v21->set_f_7(0.723189);
  v21->set_f_11(0x6d2b9f94a57aa089);
  v21->set_f_15(0x6cc17520f016b8dc);
  v21->set_f_8(0x76db53b6);
  message->set_f_15(0x550b4a06cde9dfb1);
  Message1::E3 array_2[20] = {
      Message1::E3_CONST_5, Message1::E3_CONST_4, Message1::E3_CONST_5,
      Message1::E3_CONST_2, Message1::E3_CONST_3, Message1::E3_CONST_3,
      Message1::E3_CONST_1, Message1::E3_CONST_5, Message1::E3_CONST_4,
      Message1::E3_CONST_1, Message1::E3_CONST_1, Message1::E3_CONST_3,
      Message1::E3_CONST_1, Message1::E3_CONST_4, Message1::E3_CONST_1,
      Message1::E3_CONST_5, Message1::E3_CONST_5, Message1::E3_CONST_1,
      Message1::E3_CONST_4, Message1::E3_CONST_4,
  };
  for (auto v : array_2) {
    message->add_f_14(v);
  }
  Message1::M3* v24 = message->mutable_f_51();
  v24->set_f_2(0x688cfc3dbf472263);
  Message1::M3::M24* v25 = v24->mutable_f_13();
  v25->set_f_0(0x360e583a976ed39b);
  v24->set_f_0(true);
  Message1::M3::M19* v26_0 = v24->add_f_9();
  Message1::M3::M19::M36* v27 = v26_0->mutable_f_3();
  (void)v27;  // Suppresses clang-tidy.
  Message1::M3::M27* v28 = v24->mutable_f_14();
  Message1::M3::M27::M31* v29 = v28->mutable_f_4();
  Message1::M3::M27::M31::M48* v30 = v29->mutable_f_2();
  v30->set_f_0(s->substr(0, 6));
  v28->set_f_0(s->substr(0, 32));
  v28->set_f_1(s->substr(0, 10));
  Message1::M3::M12* v31 = v24->mutable_f_6();
  v31->set_f_0(s->substr(0, 60));
  v31->set_f_1(0x3520);
  Message1::M3::M12::M37* v32_0 = v31->add_f_6();
  v32_0->set_f_0(0x10d75c1c11efcfe3);
  v31->set_f_3(0x40);
  Message1::M3::M21* v33_0 = v24->add_f_11();
  Message1::M3::M21::M44* v34 = v33_0->mutable_f_8();
  v34->set_f_0(false);
  v33_0->set_f_2(0xe4ffe223c23f517);
  v33_0->set_f_0(s->substr(0, 25));
  v33_0->set_f_4(0x31);
  Message1::M7* v35_0 = message->add_f_56();
  v35_0->set_f_12(0xb9de501);
  Message1::M7::M15* v36_0 = v35_0->add_f_23();
  v36_0->set_f_0(0x295d7e98073a1a32);
  v35_0->set_f_1(s->substr(0, 6));
  v35_0->set_f_14(s->substr(0, 4));
  v35_0->set_f_6(0x1cb65a38);
  v35_0->set_f_4(0x2d);
  v35_0->set_f_0(0x12f8cf537e6d96bb);
  v35_0->add_f_11(Message1::M7::E5_CONST_4);
  v35_0->set_f_3(0x12462e2b);
  Message1::M7::M22* v37_0 = v35_0->add_f_26();
  Message1::M7::M22::M38* v38 = v37_0->mutable_f_2();
  v38->set_f_0(0xc0ea77f21b41929);
  v37_0->set_f_0(0x41);
  v35_0->set_f_5(0x7a8ad004);
  Message1::M7::M11* v39 = v35_0->mutable_f_21();
  v39->set_f_1(s->substr(0, 456));
  v39->set_f_16(0x6a72ea9b3eb6a01a);
  v39->add_f_7(Message1::M7::M11::E8_CONST_1);
  v39->set_f_20(s->substr(0, 8));
  v39->set_f_17(0x12e696a1ffc555d3);
  v39->set_f_4(0x24);
  v39->set_f_15(0x1ac7c8);
  v39->set_f_8(0x8fbb1cd);
  v39->set_f_10(s->substr(0, 3));
  v39->set_f_13(0x47);
  Message1::M7::M11::E9 array_3[16] = {
      Message1::M7::M11::E9_CONST_3, Message1::M7::M11::E9_CONST_1,
      Message1::M7::M11::E9_CONST_4, Message1::M7::M11::E9_CONST_2,
      Message1::M7::M11::E9_CONST_3, Message1::M7::M11::E9_CONST_2,
      Message1::M7::M11::E9_CONST_5, Message1::M7::M11::E9_CONST_1,
      Message1::M7::M11::E9_CONST_5, Message1::M7::M11::E9_CONST_5,
      Message1::M7::M11::E9_CONST_1, Message1::M7::M11::E9_CONST_1,
      Message1::M7::M11::E9_CONST_3, Message1::M7::M11::E9_CONST_4,
      Message1::M7::M11::E9_CONST_1, Message1::M7::M11::E9_CONST_4,
  };
  for (auto v : array_3) {
    v39->add_f_14(v);
  }
  v39->set_f_18(0xd7c4b4);
  Message1::M7::M11::E7 array_4[11] = {
      Message1::M7::M11::E7_CONST_3, Message1::M7::M11::E7_CONST_1,
      Message1::M7::M11::E7_CONST_5, Message1::M7::M11::E7_CONST_4,
      Message1::M7::M11::E7_CONST_2, Message1::M7::M11::E7_CONST_5,
      Message1::M7::M11::E7_CONST_5, Message1::M7::M11::E7_CONST_4,
      Message1::M7::M11::E7_CONST_4, Message1::M7::M11::E7_CONST_2,
      Message1::M7::M11::E7_CONST_5,
  };
  for (auto v : array_4) {
    v39->add_f_3(v);
  }
  v39->set_f_6(s->substr(0, 20));
  v39->set_f_5(0x16ae6eb3cbe3e5c1);
  v39->set_f_21(0xa78ed3b);
  v39->set_f_19(0xfb01471);
  v39->set_f_23(0xb4a9d);
  v39->set_f_2(true);
  v39->set_f_22(0x823675d);
  v39->set_f_11(0xd3e71);
  v39->set_f_12(s->substr(0, 12));
  v39->set_f_9(s->substr(0, 81));
  v35_0->set_f_7(s->substr(0, 9));
  v35_0->set_f_9(0x75);
  message->set_f_27(0x23);
  message->set_f_12(0.392153);
  message->add_f_11(Message1::E2_CONST_5);
  message->set_f_6(0x465014);
  message->set_f_19(0.726159);
  message->set_f_26(s->substr(0, 15));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_10(0.948867);
  message->set_f_8(0x5bf405e7379d770f);
  message->set_f_15(0x29c60c3a36bb1978);
  message->set_f_13(0x8);
  Message1::M6* v0 = message->mutable_f_55();
  v0->set_f_2(0x565e4ca5c197c20c);
  v0->set_f_3(s->substr(0, 7));
  v0->set_f_4(0x4bae3ca349632098);
  Message1::M6::M18* v1 = v0->mutable_f_9();
  (void)v1;  // Suppresses clang-tidy.
  message->add_f_11(Message1::E2_CONST_2);
  message->set_f_7(0x299260de4984c0ba);
  Message1::M7* v2_0 = message->add_f_56();
  v2_0->set_f_5(0x552ccf7c);
  v2_0->set_f_0(0x29f74493b3201c2e);
  v2_0->set_f_4(0xe4fed21);
  Message1::M7::M15* v3_0 = v2_0->add_f_23();
  v3_0->set_f_1(0xca9403c61c853ed);
  v3_0->set_f_0(0x15100b4318ad2961);
  v2_0->set_f_10(0x16ad1c);
  Message1::M7::M22* v4_0 = v2_0->add_f_26();
  Message1::M7::M22::M38* v5 = v4_0->mutable_f_2();
  (void)v5;  // Suppresses clang-tidy.
  v2_0->set_f_3(0x1917ceaa);
  v2_0->set_f_13(s->substr(0, 6));
  v2_0->set_f_6(0x3ad5a6d);
  v2_0->set_f_2(s->substr(0, 2));
  v2_0->set_f_7(s->substr(0, 8));
  v2_0->set_f_1(s->substr(0, 51));
  message->set_f_2(0.520424);
  message->set_f_12(0.664064);
  Message1::M5* v6 = message->mutable_f_54();
  v6->set_f_0(0x62e20);
  v6->set_f_1(false);
  Message1::M5::M10* v7 = v6->mutable_f_7();
  v7->set_f_3(0x59);
  v7->set_f_0(0xae4933f);
  v7->set_f_1(0x7fb5ce2ad59c477f);
  v7->set_f_2(0x3525f84);
  v6->set_f_3(false);
  v6->set_f_2(0x5e);
  message->set_f_1(s->substr(0, 249));
  message->add_f_14(Message1::E3_CONST_3);
  message->add_f_24(s->substr(0, 7));
  message->set_f_20(0x42671b31c05b6da);
  message->set_f_21(0x1a3742c1);
  Message1::M1* v8 = message->mutable_f_47();
  Message1::M1::M29* v9 = v8->mutable_f_8();
  Message1::M1::M29::M46* v10 = v9->mutable_f_8();
  v10->set_f_0(0x550695790ab3c269);
  v9->set_f_3(0xcde5cc24fabd153);
  v9->set_f_0(0x53);
  v9->set_f_2(s->substr(0, 120));
  Message1::M1::M28* v11 = v8->mutable_f_7();
  Message1::M1::M28::M32* v12 = v11->mutable_f_3();
  v12->set_f_2(s->substr(0, 10));
  v12->set_f_0(0x4ba8b5d);
  Message1::M1::M28::M32::M51* v13 = v12->mutable_f_6();
  v13->set_f_7(s->substr(0, 15));
  Message1::M1::M28::M32::M51::M52* v14 = v13->mutable_f_16();
  v14->set_f_3(0x465ed2c15dbab2f4);
  v14->set_f_2(0x661e880c310bbecc);
  v13->set_f_0(Message1::M1::M28::M32::M51::E15_CONST_5);
  v13->set_f_9(0xfde6e96);
  v13->set_f_8(s->substr(0, 1));
  v13->set_f_4(0x3d);
  v13->set_f_10(0x3020f98cb95);
  v13->set_f_6(s->substr(0, 116));
  v13->set_f_2(0x2);
  v13->add_f_5(Message1::M1::M28::M32::M51::E16_CONST_3);
  v13->set_f_1(0x45eb29d530183184);
  Message1::M1::M28::M45* v15 = v11->mutable_f_4();
  (void)v15;  // Suppresses clang-tidy.
  Message1::M1::M26* v16 = v8->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  v8->set_f_0(0x7cde65a2a109e974);
  message->set_f_17(0x4c4b8288628a0648);
  message->set_f_22(false);
  message->set_f_19(0.453590);
  message->set_f_4(Message1::E1_CONST_1);
  Message1::M2* v17_0 = message->add_f_48();
  Message1::M2::M8* v18 = v17_0->mutable_f_3();
  Message1::M2::M8::E6 array_0[22] = {
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_3,
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_5,
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_5,
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_5,
      Message1::M2::M8::E6_CONST_5, Message1::M2::M8::E6_CONST_2,
      Message1::M2::M8::E6_CONST_5, Message1::M2::M8::E6_CONST_3,
      Message1::M2::M8::E6_CONST_1, Message1::M2::M8::E6_CONST_3,
      Message1::M2::M8::E6_CONST_4, Message1::M2::M8::E6_CONST_4,
      Message1::M2::M8::E6_CONST_1, Message1::M2::M8::E6_CONST_5,
      Message1::M2::M8::E6_CONST_5, Message1::M2::M8::E6_CONST_4,
      Message1::M2::M8::E6_CONST_3, Message1::M2::M8::E6_CONST_2,
  };
  for (auto v : array_0) {
    v18->add_f_0(v);
  }
  Message1::M2::M17* v19_0 = v17_0->add_f_4();
  Message1::M2::M17::M43* v20 = v19_0->mutable_f_7();
  v20->set_f_1(s->substr(0, 1));
  v20->set_f_2(s->substr(0, 5));
  v19_0->set_f_0(0x62fc9);
  Message1::M2::M17::M35* v21_0 = v19_0->add_f_5();
  v21_0->set_f_0(0x17e6f8);
  message->set_f_29(0x3b20);
  message->set_f_28(0x2db90e4e);
  message->set_f_27(0x38);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_15(0xf03cbeb183862bb);
  message->set_f_0(0x56c031d58df2d49e);
  message->set_f_2(0.812136);
  message->set_f_23(0x75d0d4fa19cb57ff);
  message->set_f_3(0xae464b1);
  message->add_f_11(Message1::E2_CONST_4);
  message->set_f_13(0x2);
  message->add_f_24(s->substr(0, 2));
  message->set_f_8(0x756cc6251172a1f6);
  message->set_f_5(0x5e6339b366c62ba);
  message->set_f_16(s->substr(0, 11));
  message->set_f_21(0x67180d46);
  message->set_f_4(Message1::E1_CONST_5);
  message->set_f_20(0x763248d9ee946ad6);
  Message1::M5* v0 = message->mutable_f_54();
  v0->set_f_0(0x46b2196);
  v0->set_f_1(false);
  Message1::M5::M10* v1 = v0->mutable_f_7();
  v1->set_f_1(0x75457efe1ee15938);
  v0->set_f_2(0x4a);
  message->set_f_25(0x7c15502);
  message->set_f_18(0x56);
  message->set_f_26(s->substr(0, 7));
  message->set_f_17(0xfd1c404df313f53);
  message->set_f_27(0x63be4f2);
  message->set_f_22(true);
  message->set_f_19(0.791934);
  Message1::M6* v2 = message->mutable_f_55();
  v2->set_f_0(0x276c60c5d8dc3594);
  v2->set_f_4(0x757fee6e976fd258);
  v2->set_f_1(0.828170);
  Message1::M6::M18* v3 = v2->mutable_f_9();
  v3->add_f_0(Message1::M6::M18::E11_CONST_1);
  Message1::M6::M30* v4 = v2->mutable_f_10();
  v4->set_f_4(s->substr(0, 1));
  v4->set_f_12(0x256acb2fdec30389);
  v4->set_f_8(0x26dffd9c);
  v4->set_f_11(0x74c763aee8a7052a);
  v4->set_f_14(0x3ac02a51);
  v4->set_f_10(0x6);
  v4->set_f_3(0x28);
  v4->set_f_2(0x74c3f8d800dfe40f);
  v4->set_f_1(s->substr(0, 8));
  v4->set_f_0(0x37a0b608ccc02309);
  Message1::M6::M30::M33* v5 = v4->mutable_f_24();
  Message1::M6::M30::M33::M50* v6_0 = v5->add_f_3();
  v6_0->set_f_1(0xfd90f6d);
  v6_0->set_f_4(true);
  v6_0->set_f_0(s->substr(0, 8));
  v5->set_f_0(s->substr(0, 18));
  v4->set_f_6(s->substr(0, 47));
  v4->set_f_5(s->substr(0, 511));
  v4->set_f_7(0.874948);
  v2->set_f_3(s->substr(0, 69));
  v2->set_f_2(0x6b6262959f062e58);
  Message1::M1* v7 = message->mutable_f_47();
  v7->set_f_1(s->substr(0, 2));
  Message1::M1::M28* v8 = v7->mutable_f_7();
  Message1::M1::M28::M45* v9 = v8->mutable_f_4();
  v9->set_f_0(0x79f80beeb1d8496b);
  Message1::M1::M28::M32* v10 = v8->mutable_f_3();
  v10->set_f_1(s->substr(0, 14));
  v10->set_f_0(0x2f);
  Message1::M1::M28::M32::M51* v11 = v10->mutable_f_6();
  v11->set_f_9(0xb63f8f9);
  Message1::M1::M28::M32::M51::E16 array_0[21] = {
      Message1::M1::M28::M32::M51::E16_CONST_5,
      Message1::M1::M28::M32::M51::E16_CONST_3,
      Message1::M1::M28::M32::M51::E16_CONST_1,
      Message1::M1::M28::M32::M51::E16_CONST_1,
      Message1::M1::M28::M32::M51::E16_CONST_2,
      Message1::M1::M28::M32::M51::E16_CONST_3,
      Message1::M1::M28::M32::M51::E16_CONST_5,
      Message1::M1::M28::M32::M51::E16_CONST_1,
      Message1::M1::M28::M32::M51::E16_CONST_3,
      Message1::M1::M28::M32::M51::E16_CONST_4,
      Message1::M1::M28::M32::M51::E16_CONST_1,
      Message1::M1::M28::M32::M51::E16_CONST_3,
      Message1::M1::M28::M32::M51::E16_CONST_1,
      Message1::M1::M28::M32::M51::E16_CONST_2,
      Message1::M1::M28::M32::M51::E16_CONST_1,
      Message1::M1::M28::M32::M51::E16_CONST_4,
      Message1::M1::M28::M32::M51::E16_CONST_5,
      Message1::M1::M28::M32::M51::E16_CONST_2,
      Message1::M1::M28::M32::M51::E16_CONST_4,
      Message1::M1::M28::M32::M51::E16_CONST_3,
      Message1::M1::M28::M32::M51::E16_CONST_4,
  };
  for (auto v : array_0) {
    v11->add_f_5(v);
  }
  v11->set_f_3(0x52);
  v11->set_f_8(s->substr(0, 5));
  v11->set_f_1(0x77568a5702cbc30);
  v11->set_f_2(0x56b15);
  v11->set_f_0(Message1::M1::M28::M32::M51::E15_CONST_3);
  v11->set_f_10(0x61);
  v11->set_f_7(s->substr(0, 1));
  Message1::M1::M29* v12 = v7->mutable_f_8();
  Message1::M1::M29::M46* v13 = v12->mutable_f_8();
  v13->set_f_0(0x5f641afb79edde40);
  v12->set_f_2(s->substr(0, 30));
  v12->set_f_1(0x46);
  v12->set_f_0(0xd5931a3);
  v12->set_f_4(0xb48235cd008e266);
  v7->set_f_2(0.645688);
  Message1::M1::M26* v14 = v7->mutable_f_5();
  v14->set_f_0(0x4adb3e77);
  Message1::M7* v15_0 = message->add_f_56();
  v15_0->set_f_2(s->substr(0, 14));
  v15_0->set_f_14(s->substr(0, 26));
  Message1::M7::M11* v16 = v15_0->mutable_f_21();
  v16->set_f_22(0xe3f459e);
  Message1::M7::M11::E8 array_1[17] = {
      Message1::M7::M11::E8_CONST_1, Message1::M7::M11::E8_CONST_1,
      Message1::M7::M11::E8_CONST_1, Message1::M7::M11::E8_CONST_5,
      Message1::M7::M11::E8_CONST_3, Message1::M7::M11::E8_CONST_1,
      Message1::M7::M11::E8_CONST_1, Message1::M7::M11::E8_CONST_5,
      Message1::M7::M11::E8_CONST_2, Message1::M7::M11::E8_CONST_2,
      Message1::M7::M11::E8_CONST_2, Message1::M7::M11::E8_CONST_4,
      Message1::M7::M11::E8_CONST_3, Message1::M7::M11::E8_CONST_3,
      Message1::M7::M11::E8_CONST_2, Message1::M7::M11::E8_CONST_2,
      Message1::M7::M11::E8_CONST_4,
  };
  for (auto v : array_1) {
    v16->add_f_7(v);
  }
  v16->set_f_2(true);
  v16->set_f_18(0xc142cc2);
  Message1::M7::M11::E7 array_2[9] = {
      Message1::M7::M11::E7_CONST_3, Message1::M7::M11::E7_CONST_3,
      Message1::M7::M11::E7_CONST_3, Message1::M7::M11::E7_CONST_5,
      Message1::M7::M11::E7_CONST_2, Message1::M7::M11::E7_CONST_2,
      Message1::M7::M11::E7_CONST_2, Message1::M7::M11::E7_CONST_2,
      Message1::M7::M11::E7_CONST_5,
  };
  for (auto v : array_2) {
    v16->add_f_3(v);
  }
  v16->set_f_17(0x4a922fa45ff3b1b1);
  v16->set_f_1(s->substr(0, 12));
  v16->set_f_0(0x476359150);
  v16->set_f_15(0x18e3);
  v16->set_f_12(s->substr(0, 68));
  v16->set_f_9(s->substr(0, 18));
  v16->set_f_6(s->substr(0, 8));
  v16->set_f_10(s->substr(0, 3));
  v16->set_f_8(0x25);
  v16->set_f_13(0x5577be8);
  v16->set_f_5(0x72bee81490c1439c);
  v16->set_f_20(s->substr(0, 8));
  v16->set_f_16(0x6442b2b690cb485b);
  Message1::M7::M11::E9 array_3[12] = {
      Message1::M7::M11::E9_CONST_4, Message1::M7::M11::E9_CONST_1,
      Message1::M7::M11::E9_CONST_3, Message1::M7::M11::E9_CONST_3,
      Message1::M7::M11::E9_CONST_1, Message1::M7::M11::E9_CONST_2,
      Message1::M7::M11::E9_CONST_5, Message1::M7::M11::E9_CONST_5,
      Message1::M7::M11::E9_CONST_5, Message1::M7::M11::E9_CONST_2,
      Message1::M7::M11::E9_CONST_4, Message1::M7::M11::E9_CONST_1,
  };
  for (auto v : array_3) {
    v16->add_f_14(v);
  }
  v16->set_f_11(0x1ec27);
  v16->set_f_21(0x33bdb);
  v15_0->set_f_10(0x48);
  v15_0->set_f_3(0x5a6a6e9f);
  v15_0->set_f_9(0x6bb9916);
  Message1::M7::M22* v17_0 = v15_0->add_f_26();
  Message1::M7::M22::M38* v18 = v17_0->mutable_f_2();
  (void)v18;  // Suppresses clang-tidy.
  v17_0->set_f_0(0x6d191cc);
  v15_0->set_f_5(0x6fd91b02);
  v15_0->set_f_1(s->substr(0, 7));
  v15_0->set_f_7(s->substr(0, 10));
  v15_0->set_f_4(0x1afe2d);
  v15_0->set_f_13(s->substr(0, 111));
  v15_0->set_f_8(0x5cf71dc1);
  v15_0->set_f_6(0x3e9f6fca);
  Message1::M7::M20* v19 = v15_0->mutable_f_24();
  v19->set_f_0(s->substr(0, 3));
  v19->set_f_2(0x369fb);
  v19->set_f_3(0x5d9233be27f53f23);
  v19->set_f_1(0x7fa90ac);
  Message1::M2* v20_0 = message->add_f_48();
  Message1::M2::M8* v21 = v20_0->mutable_f_3();
  v21->add_f_0(Message1::M2::M8::E6_CONST_3);
  Message1::M2::M17* v22_0 = v20_0->add_f_4();
  Message1::M2::M17::M35* v23_0 = v22_0->add_f_5();
  v23_0->set_f_0(0x75);
  v22_0->set_f_0(0xe06b1e3);
  v20_0->set_f_0(0xa32bf32);
  message->set_f_28(0x7a545bae);
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
}  // namespace fleetbench::rpc::P8::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P8_REQUEST_ACCESS_MESSAGE1_H_
