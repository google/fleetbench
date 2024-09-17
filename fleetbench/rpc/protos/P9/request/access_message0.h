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

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P9/request/Message0.pb.h"

namespace fleetbench::rpc::P9::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_7(false);
  Message0::M3* v0 = message->mutable_f_50();
  Message0::M3::M52* v1 = v0->mutable_f_8();
  (void)v1;  // Suppresses clang-tidy.
  v0->set_f_0(0x172180a1b61b62cc);
  Message0::M3::M36* v2_0 = v0->add_f_4();
  v2_0->set_f_0(0x70);
  Message0::M3::M49* v3 = v0->mutable_f_6();
  v3->set_f_0(0x114839aa);
  Message0::M3::M48* v4 = v0->mutable_f_5();
  Message0::M3::M48::M66* v5 = v4->mutable_f_3();
  v5->set_f_0(0x1);
  Message0::M3::M48::M66::M85* v6 = v5->mutable_f_2();
  v6->set_f_0(0x12f980f4b7bcb6c8);
  v6->set_f_1(0x38ee);
  Message0::M5* v7 = message->mutable_f_55();
  Message0::M5::M33* v8 = v7->mutable_f_11();
  v8->set_f_0(0x1d0b);
  Message0::M5::M29* v9_0 = v7->add_f_9();
  v9_0->set_f_0(s->substr(0, 26));
  Message0::M5::M11* v10 = v7->mutable_f_4();
  v10->set_f_1(0x60229d406d7fe8);
  v10->set_f_0(0x3b68);
  Message0::M5::M24* v11 = v7->mutable_f_7();
  v11->set_f_4(0x1c);
  v11->set_f_7(0x6686708fa4bf49ab);
  v11->set_f_5(0x6d823578651c3ce7);
  v11->set_f_2(0x6f);
  v11->set_f_6(0x9be351);
  v11->set_f_1(false);
  Message0::M5::M12* v12_0 = v7->add_f_5();
  v12_0->set_f_4(0x227c0e1ff24394e6);
  message->set_f_24(0x327a82ade094a2f3);
  message->set_f_6(0x1b29);
  message->set_f_1(0x5c1fcec5c23f1e9f);
  message->set_f_20(0xa898b);
  message->set_f_3(0x7f79d34b);
  message->set_f_11(0x288a2ab3233279b1);
  message->set_f_4(0x72);
  message->set_f_2(0x6430e27c67ad12bf);
  Message0::M7* v13 = message->mutable_f_57();
  Message0::M7::M35* v14_0 = v13->add_f_8();
  v14_0->set_f_0(0x213d);
  Message0::M7::M39* v15_0 = v13->add_f_10();
  v15_0->set_f_0(s->substr(0, 1));
  Message0::M7::M39::M70* v16_0 = v15_0->add_f_2();
  (void)v16_0;  // Suppresses clang-tidy.
  Message0::M7::M16* v17 = v13->mutable_f_4();
  v17->set_f_4(0x4eb814b);
  v17->set_f_2(0x7c);
  v17->set_f_1(false);
  v17->set_f_0(0x6c0b56f069c8f2be);
  Message0::M6* v18 = message->mutable_f_56();
  Message0::M6::M21* v19 = v18->mutable_f_5();
  (void)v19;  // Suppresses clang-tidy.
  Message0::M6::M53* v20_0 = v18->add_f_10();
  v20_0->set_f_0(0x14ce);
  v20_0->set_f_2(s->substr(0, 20));
  Message0::M6::M53::M72* v21 = v20_0->mutable_f_6();
  v21->set_f_0(0x10);
  v20_0->add_f_1(0x13f7d);
  Message0::M6::M37* v22 = v18->mutable_f_7();
  v22->set_f_0(0x5a412ae7f94935ca);
  Message0::M6::M37::M71* v23 = v22->mutable_f_3();
  v23->add_f_0(s->substr(0, 6));
  v23->add_f_0(s->substr(0, 6));
  Message0::M6::M37::M71::M87* v24 = v23->mutable_f_4();
  v24->set_f_0(0x77);
  Message0::M6::M28* v25 = v18->mutable_f_6();
  v25->set_f_0(true);
  Message0::M6::M28::M83* v26_0 = v25->add_f_3();
  v26_0->set_f_1(0x60ea226b179a8c11);
  Message0::M6::M28::M83::M84* v27_0 = v26_0->add_f_5();
  (void)v27_0;  // Suppresses clang-tidy.
  v26_0->set_f_0(0x31);
  message->set_f_15(0x7b);
  message->set_f_27(Message0::E1_CONST_1);
  message->set_f_28(0.562957);
  message->set_f_31(0x3afa4bdc8fbb245);
  message->set_f_10(0x3f);
  message->set_f_30(0x1b);
  Message0::M1* v28 = message->mutable_f_48();
  Message0::M1::M25* v29 = v28->mutable_f_3();
  v29->set_f_0(0x6b37d296b2047120);
  Message0::M1::M40* v30_0 = v28->add_f_7();
  Message0::M1::M40::M60* v31 = v30_0->mutable_f_5();
  v31->set_f_0(Message0::M1::M40::M60::E9_CONST_3);
  v31->set_f_3(0x24);
  v31->set_f_4(0x4afa5c581762b12a);
  v31->set_f_1(0x5ded4c891c205c4);
  v31->set_f_2(true);
  v30_0->add_f_0(s->substr(0, 5));
  Message0::M1::M41* v32_0 = v28->add_f_8();
  Message0::M1::M41::M77* v33_0 = v32_0->add_f_6();
  v33_0->set_f_0(0x1583ee915518f7f5);
  Message0::M1::M9* v34 = v28->mutable_f_2();
  v34->set_f_0(0x221ceda809bb3b31);
  v28->set_f_0(s->substr(0, 4));
  Message0::M8* v35_0 = message->add_f_58();
  Message0::M8::M45* v36 = v35_0->mutable_f_44();
  (void)v36;  // Suppresses clang-tidy.
  v35_0->set_f_7(false);
  v35_0->set_f_19(s->substr(0, 7));
  Message0::M8::M55* v37 = v35_0->mutable_f_47();
  Message0::M8::M55::M67* v38 = v37->mutable_f_3();
  Message0::M8::M55::M67::M98* v39 = v38->mutable_f_3();
  v39->set_f_0(s->substr(0, 21));
  v37->set_f_0(0x35bd74ea65d0abbe);
  v35_0->set_f_8(0x39ba25d5da3001c0);
  v35_0->set_f_5(0x7);
  v35_0->set_f_2(0x35);
  Message0::M8::M20* v40 = v35_0->mutable_f_36();
  Message0::M8::M20::M61* v41_0 = v40->add_f_4();
  v41_0->set_f_4(false);
  v41_0->set_f_0(0x161d);
  Message0::M8::M20::M61::M88* v42_0 = v41_0->add_f_9();
  v42_0->set_f_0(s->substr(0, 13));
  v41_0->set_f_2(0xc7443ca);
  v41_0->set_f_1(s->substr(0, 16));
  v40->set_f_0(s->substr(0, 7));
  v35_0->set_f_20(Message0::M8::E2_CONST_3);
  v35_0->set_f_21(0x7f95a729330005e8);
  v35_0->set_f_17(0x4db105f);
  Message0::M8::M46* v43 = v35_0->mutable_f_46();
  v43->set_f_1(0x25a9);
  v35_0->set_f_13(true);
  v35_0->set_f_3(0x2e31);
  Message0::M8::M26* v44_0 = v35_0->add_f_40();
  (void)v44_0;  // Suppresses clang-tidy.
  message->set_f_9(0.971952);
  message->set_f_29(s->substr(0, 5));
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_1(0x352dd37850ab4734);
  message->set_f_6(0x79);
  message->set_f_26(0x67d8892113306d9b);
  message->set_f_21(s->substr(0, 7));
  message->set_f_31(0xc759901818c3ce0);
  message->set_f_17(0x134692);
  message->set_f_19(0x76);
  message->set_f_23(0x1ae9ff);
  message->set_f_24(0x43030a201f0bd3cf);
  message->set_f_18(s->substr(0, 10));
  message->set_f_11(0x1d1a42b3de124527);
  message->set_f_10(0xc7bc6af);
  Message0::M7* v0 = message->mutable_f_57();
  v0->set_f_0(0x68);
  Message0::M7::M42* v1_0 = v0->add_f_11();
  v1_0->add_f_11(Message0::M7::M42::E6_CONST_5);
  v1_0->set_f_7(false);
  v1_0->set_f_3(s->substr(0, 3));
  v1_0->set_f_24(s->substr(0, 31));
  v1_0->set_f_18(0xc);
  v1_0->set_f_17(0x5eae05901bde4403);
  v1_0->set_f_14(0x3914);
  v1_0->set_f_2(s->substr(0, 3));
  v1_0->set_f_10(0x1c63730ce9b30b47);
  v1_0->set_f_23(0x5c2ffb13568bb4e6);
  v1_0->set_f_28(s->substr(0, 18));
  v1_0->set_f_8(true);
  v1_0->set_f_27(0x13);
  v1_0->set_f_4(s->substr(0, 13));
  v1_0->set_f_26(0x309e78328b0);
  v1_0->set_f_22(true);
  v1_0->set_f_25(false);
  v1_0->set_f_13(0x47);
  v1_0->set_f_1(0x1e9385011da354fb);
  v1_0->set_f_20(0x4758462ed64fb9c1);
  Message0::M7::M39* v2_0 = v0->add_f_10();
  v2_0->set_f_0(s->substr(0, 13));
  Message0::M7::M39::M70* v3_0 = v2_0->add_f_2();
  v3_0->set_f_0(0x410262d);
  Message0::M7::M39::M70::M89* v4_0 = v3_0->add_f_2();
  (void)v4_0;  // Suppresses clang-tidy.
  Message0::M7::M35* v5_0 = v0->add_f_8();
  (void)v5_0;  // Suppresses clang-tidy.
  Message0::M7::M10* v6 = v0->mutable_f_2();
  (void)v6;  // Suppresses clang-tidy.
  Message0::M7::M27* v7 = v0->mutable_f_6();
  (void)v7;  // Suppresses clang-tidy.
  message->set_f_22(0x4a758296);
  Message0::M1* v8 = message->mutable_f_48();
  Message0::M1::M9* v9 = v8->mutable_f_2();
  v9->set_f_0(0x5376c3523105a7a3);
  Message0::M1::M40* v10_0 = v8->add_f_7();
  Message0::M1::M40::M60* v11 = v10_0->mutable_f_5();
  v11->set_f_2(true);
  v11->set_f_1(0x6b0d2b48c4af9ca0);
  v11->set_f_0(Message0::M1::M40::M60::E9_CONST_5);
  v11->set_f_4(0x95d3e51470f2b7f);
  Message0::M1::M41* v12_0 = v8->add_f_8();
  v12_0->set_f_1(0x9f8);
  v12_0->set_f_0(s->substr(0, 15));
  Message0::M1::M41::M77* v13_0 = v12_0->add_f_6();
  v13_0->set_f_0(0x7b23926ab9e81b13);
  v8->set_f_0(s->substr(0, 14));
  message->set_f_7(false);
  message->set_f_15(0x39);
  message->set_f_9(0.671583);
  Message0::M8* v14_0 = message->add_f_58();
  v14_0->set_f_21(0x6ce6f47203c93898);
  v14_0->set_f_17(0xd146907);
  v14_0->set_f_4(0x7);
  v14_0->set_f_15(0x6aee6bf4f67e5087);
  v14_0->set_f_14(s->substr(0, 8));
  v14_0->set_f_0(false);
  v14_0->set_f_2(0x20d4);
  v14_0->set_f_10(s->substr(0, 24));
  Message0::M8::M22* v15_0 = v14_0->add_f_38();
  Message0::M8::M22::M78* v16_0 = v15_0->add_f_3();
  v16_0->set_f_0(0x5e9676d);
  Message0::M8::M22::M78::M91* v17_0 = v16_0->add_f_4();
  (void)v17_0;  // Suppresses clang-tidy.
  Message0::M8::M22::M65* v18 = v15_0->mutable_f_2();
  Message0::M8::M22::M65::M106* v19 = v18->mutable_f_2();
  v19->set_f_2(0x399a31e7b1d18fb1);
  v19->set_f_1(0x83de3);
  v15_0->set_f_0(s->substr(0, 1));
  v14_0->set_f_7(false);
  v14_0->set_f_19(s->substr(0, 1));
  v14_0->set_f_13(false);
  v14_0->set_f_6(0x12cb56f4b060020f);
  message->set_f_2(0x37d2998ae8619b66);
  message->set_f_14(0x258afee6);
  message->set_f_27(Message0::E1_CONST_2);
  message->set_f_5(s->substr(0, 21));
  Message0::M6* v20 = message->mutable_f_56();
  v20->set_f_0(false);
  Message0::M6::M37* v21 = v20->mutable_f_7();
  (void)v21;  // Suppresses clang-tidy.
  Message0::M6::M19* v22 = v20->mutable_f_4();
  Message0::M6::M19::M76* v23 = v22->mutable_f_3();
  v23->set_f_2(true);
  v23->set_f_1(s->substr(0, 7));
  Message0::M6::M28* v24 = v20->mutable_f_6();
  Message0::M6::M28::M83* v25_0 = v24->add_f_3();
  v25_0->set_f_0(0x66);
  v24->set_f_0(false);
  message->set_f_16(0xa);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_28(0.341884);
  message->set_f_3(0x422d1db9);
  message->set_f_12(0x27);
  message->set_f_23(0xe);
  message->set_f_7(false);
  Message0::M7* v0 = message->mutable_f_57();
  Message0::M7::M43* v1 = v0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M7::M10* v2 = v0->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M7::M16* v3 = v0->mutable_f_4();
  v3->set_f_2(0x77);
  v3->set_f_4(0x6f88aae);
  v3->set_f_0(0x454bed68dc51b5ad);
  v3->set_f_3(s->substr(0, 33));
  Message0::M7::M51* v4_0 = v0->add_f_13();
  v4_0->set_f_15(0.139042);
  v4_0->set_f_16(0x655cb17e3d8942a3);
  v4_0->set_f_19(0x53);
  v4_0->set_f_20(0x34ac);
  v4_0->set_f_22(0xc);
  v4_0->set_f_0(0x16744f1b97274d82);
  v4_0->set_f_18(0x6dca16622d555d80);
  v4_0->set_f_21(0x5bda72e7ab28d97e);
  v4_0->set_f_17(Message0::M7::M51::E7_CONST_2);
  v4_0->set_f_10(0x249827bbe0a21595);
  v4_0->set_f_2(0x5b);
  v4_0->set_f_9(s->substr(0, 6));
  v4_0->set_f_12(s->substr(0, 27));
  v4_0->set_f_6(0x17);
  v4_0->set_f_14(s->substr(0, 4));
  v4_0->set_f_4(0x1a);
  v4_0->set_f_1(0xd9d5fb5);
  v4_0->set_f_13(0x244c9cbbe3c2535d);
  Message0::M1* v5 = message->mutable_f_48();
  Message0::M1::M41* v6_0 = v5->add_f_8();
  v6_0->set_f_1(0x1da0);
  Message0::M1::M41::M77* v7_0 = v6_0->add_f_6();
  v7_0->set_f_0(0x6c2f2920a9b7f332);
  Message0::M1::M25* v8 = v5->mutable_f_3();
  v8->set_f_0(0x5d48df03147be904);
  Message0::M1::M25::M73* v9 = v8->mutable_f_3();
  v9->set_f_0(0x3d);
  Message0::M1::M25::M73::M97* v10_0 = v9->add_f_2();
  (void)v10_0;  // Suppresses clang-tidy.
  Message0::M1::M40* v11_0 = v5->add_f_7();
  Message0::M1::M40::M60* v12 = v11_0->mutable_f_5();
  v12->set_f_1(0x1d7bb9b481cfab43);
  v12->set_f_3(0x19);
  v12->set_f_0(Message0::M1::M40::M60::E9_CONST_5);
  v12->set_f_2(false);
  Message0::M1::M44* v13_0 = v5->add_f_9();
  (void)v13_0;  // Suppresses clang-tidy.
  v5->set_f_0(s->substr(0, 2));
  message->set_f_22(0x17f5a4c3);
  Message0::M6* v14 = message->mutable_f_56();
  v14->set_f_0(false);
  Message0::M6::M53* v15_0 = v14->add_f_10();
  Message0::M6::M53::M72* v16 = v15_0->mutable_f_6();
  (void)v16;  // Suppresses clang-tidy.
  v15_0->set_f_2(s->substr(0, 28));
  Message0::M6::M37* v17 = v14->mutable_f_7();
  v17->set_f_0(0x61f52c06e3e6452f);
  Message0::M6::M14* v18 = v14->mutable_f_3();
  v18->set_f_5(0x788299f);
  v18->set_f_7(0x3e2b);
  v18->set_f_2(0x53);
  v18->set_f_4(0x192e93f142aadaf1);
  v18->set_f_8(0x3c0a);
  v18->set_f_3(0x17);
  v18->set_f_0(s->substr(0, 66));
  v18->set_f_1(0x6f0f8933);
  v18->set_f_6(s->substr(0, 3));
  Message0::M6::M28* v19 = v14->mutable_f_6();
  Message0::M6::M28::M83* v20_0 = v19->add_f_3();
  v20_0->set_f_2(0x72);
  v20_0->set_f_1(0x581216d887a722b3);
  Message0::M6::M19* v21 = v14->mutable_f_4();
  v21->set_f_0(s->substr(0, 7));
  Message0::M6::M19::M68* v22 = v21->mutable_f_2();
  v22->set_f_9(s->substr(0, 9));
  Message0::M6::M19::M68::M99* v23 = v22->mutable_f_43();
  v23->set_f_0(false);
  v22->set_f_27(Message0::M6::M19::M68::E12_CONST_1);
  v22->set_f_5(0xffb959a);
  v22->set_f_26(0xe);
  v22->set_f_15(0x5165e0748aee802f);
  v22->set_f_14(s->substr(0, 2));
  int32_t array_0[5] = {
      0x8461f, 0x6cf3b, 0x57, 0xe, 0x43ca1,
  };
  for (auto v : array_0) {
    v22->add_f_3(v);
  }
  Message0::M6::M19::M68::M90* v24 = v22->mutable_f_41();
  Message0::M6::M19::M68::M90::M107* v25 = v24->mutable_f_4();
  v25->set_f_0(0x8c1);
  v24->set_f_0(0x13c74b5);
  Message0::M6::M19::M68::M90::M109* v26 = v24->mutable_f_7();
  v26->set_f_17(s->substr(0, 1));
  v26->set_f_24(Message0::M6::M19::M68::M90::M109::E16_CONST_2);
  v26->set_f_30(0x132e);
  v26->set_f_7(s->substr(0, 5));
  v26->set_f_4(s->substr(0, 6));
  v26->set_f_12(0x11);
  v26->add_f_22(s->substr(0, 6));
  v26->set_f_1(s->substr(0, 6));
  v26->set_f_26(true);
  v26->set_f_14(0x47);
  v26->set_f_6(0x13);
  v26->set_f_9(s->substr(0, 5));
  v26->set_f_0(0x113cb370);
  v26->set_f_29(0x7a1e6eeb6fa893b5);
  v26->set_f_18(s->substr(0, 13));
  v22->set_f_10(s->substr(0, 24));
  v22->set_f_19(0x356d8f0f7fe1e0f6);
  v22->set_f_17(true);
  v22->add_f_13(s->substr(0, 5));
  v22->add_f_13(s->substr(0, 6));
  v22->set_f_2(0x198f4d86090ee491);
  v22->set_f_20(0x131eff);
  v22->set_f_16(0x2a);
  v22->set_f_18(0x12);
  v22->set_f_21(true);
  v22->set_f_22(true);
  v22->set_f_1(0x7950ec99a7020cf0);
  v22->set_f_23(s->substr(0, 28));
  message->set_f_19(0x15a0a1);
  message->set_f_31(0x1866a6857be5ce2a);
  message->set_f_24(0x74ab33a1d39db12e);
  message->set_f_18(s->substr(0, 14));
  message->set_f_27(Message0::E1_CONST_4);
  Message0::M8* v27_0 = message->add_f_58();
  v27_0->set_f_17(0x3f);
  Message0::M8::M20* v28 = v27_0->mutable_f_36();
  v28->set_f_1(0x45eb970a5735a12f);
  Message0::M8::M20::M61* v29_0 = v28->add_f_4();
  v29_0->set_f_0(0x5c);
  v29_0->set_f_2(0x20);
  Message0::M8::M20::M61::M88* v30_0 = v29_0->add_f_9();
  (void)v30_0;  // Suppresses clang-tidy.
  v29_0->set_f_4(true);
  v29_0->set_f_1(s->substr(0, 212));
  v28->set_f_0(s->substr(0, 14));
  v27_0->set_f_5(0x66);
  Message0::M8::M22* v31_0 = v27_0->add_f_38();
  v31_0->set_f_0(s->substr(0, 3));
  v27_0->set_f_8(0x4526d61549a30c72);
  v27_0->set_f_20(Message0::M8::E2_CONST_2);
  v27_0->set_f_12(true);
  v27_0->set_f_2(0x12b7142);
  v27_0->set_f_9(0x1dd17b70687cab5d);
  v27_0->set_f_10(s->substr(0, 16));
  v27_0->set_f_16(0x3788);
  v27_0->set_f_7(false);
  v27_0->set_f_21(0x1f3d0905de17381a);
  v27_0->set_f_1(0xcca510);
  Message0::M8::M26* v32_0 = v27_0->add_f_40();
  (void)v32_0;  // Suppresses clang-tidy.
  v27_0->set_f_3(0x47ec20afa);
  message->set_f_30(0x72);
  message->set_f_2(0x7013acb6ffe1fa09);
  Message0::M5* v33 = message->mutable_f_55();
  Message0::M5::M50* v34 = v33->mutable_f_14();
  v34->set_f_0(0x40fb0fc);
  Message0::M5::M12* v35_0 = v33->add_f_5();
  v35_0->set_f_1(s->substr(0, 11));
  v35_0->set_f_4(0x77f6e50d4574c2a9);
  v35_0->set_f_3(0x102fb39d9b2af5d0);
  v33->set_f_0(s->substr(0, 128));
  Message0::M5::M18* v36 = v33->mutable_f_6();
  v36->set_f_1(0x2f8fa04);
  v36->set_f_0(0xda1);
  Message0::M5::M33* v37 = v33->mutable_f_11();
  (void)v37;  // Suppresses clang-tidy.
  Message0::M5::M29* v38_0 = v33->add_f_9();
  (void)v38_0;  // Suppresses clang-tidy.
  Message0::M4* v39 = message->mutable_f_52();
  v39->set_f_0(false);
  Message0::M4::M17* v40 = v39->mutable_f_3();
  (void)v40;  // Suppresses clang-tidy.
  message->set_f_17(0x14);
  message->set_f_15(0x3f97);
  message->set_f_26(0x7bc0296d8f158698);
  message->set_f_25(0x49);
  message->add_f_8(s->substr(0, 3));
  message->add_f_8(s->substr(0, 3));
  message->set_f_29(s->substr(0, 21));
  message->set_f_1(0x882cc1759881c12);
  message->set_f_21(s->substr(0, 24));
  message->set_f_11(0x357e162d44d80f3a);
  message->set_f_14(0x4ce663b3);
  message->set_f_13(0x1);
  message->set_f_6(0x2429);
  message->set_f_20(0x2c);
  message->set_f_16(0x2a);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_22(0x26c0236b);
  message->set_f_16(0x3);
  message->set_f_20(0x798);
  message->set_f_26(0x1582430913c85bf);
  message->set_f_3(0x574dc504);
  message->set_f_7(false);
  message->set_f_15(0x78);
  message->set_f_4(0x1432);
  Message0::M7* v0 = message->mutable_f_57();
  v0->set_f_0(0x1daf);
  Message0::M7::M43* v1 = v0->mutable_f_12();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M7::M16* v2 = v0->mutable_f_4();
  v2->set_f_3(s->substr(0, 33));
  v2->set_f_1(true);
  v2->set_f_2(0xb);
  Message0::M7::M23* v3_0 = v0->add_f_5();
  v3_0->set_f_17(0x2ed5e813935cf3e5);
  v3_0->set_f_9(0x711d944a7b9210d1);
  v3_0->set_f_14(s->substr(0, 3));
  Message0::M7::M23::E3 array_0[20] = {
      Message0::M7::M23::E3_CONST_4, Message0::M7::M23::E3_CONST_1,
      Message0::M7::M23::E3_CONST_2, Message0::M7::M23::E3_CONST_1,
      Message0::M7::M23::E3_CONST_1, Message0::M7::M23::E3_CONST_4,
      Message0::M7::M23::E3_CONST_2, Message0::M7::M23::E3_CONST_4,
      Message0::M7::M23::E3_CONST_3, Message0::M7::M23::E3_CONST_4,
      Message0::M7::M23::E3_CONST_4, Message0::M7::M23::E3_CONST_2,
      Message0::M7::M23::E3_CONST_3, Message0::M7::M23::E3_CONST_4,
      Message0::M7::M23::E3_CONST_2, Message0::M7::M23::E3_CONST_2,
      Message0::M7::M23::E3_CONST_3, Message0::M7::M23::E3_CONST_3,
      Message0::M7::M23::E3_CONST_4, Message0::M7::M23::E3_CONST_3,
  };
  for (auto v : array_0) {
    v3_0->add_f_5(v);
  }
  v3_0->set_f_3(s->substr(0, 63));
  v3_0->set_f_1(s->substr(0, 22));
  v3_0->set_f_12(Message0::M7::M23::E4_CONST_4);
  Message0::M7::M23::M58* v4 = v3_0->mutable_f_25();
  Message0::M7::M23::M58::M103* v5 = v4->mutable_f_5();
  Message0::M7::M23::M58::M103::M113* v6 = v5->mutable_f_3();
  v6->set_f_1(true);
  v6->set_f_3(0x3737dd910416738d);
  v5->set_f_0(0x1a31b6e);
  v4->set_f_0(0x5c);
  v3_0->set_f_13(false);
  v3_0->set_f_4(0x35fa664f);
  v3_0->set_f_15(0x65d25ebf1f74144);
  v3_0->set_f_0(0x5199f8c64ceb8e5);
  v3_0->set_f_10(s->substr(0, 163));
  v3_0->set_f_18(true);
  v3_0->set_f_11(0xb99b18c5d53772);
  Message0::M7::M51* v7_0 = v0->add_f_13();
  v7_0->set_f_3(0x13af55);
  v7_0->set_f_18(0x308bfa7cb4e1d0a0);
  v7_0->set_f_19(0x28);
  v7_0->set_f_0(0x29684a4e419eec0b);
  v7_0->set_f_7(true);
  v7_0->set_f_16(0x3f8e0849fed14d89);
  v7_0->set_f_5(0.495559);
  v7_0->set_f_8(false);
  v7_0->set_f_21(0x3ff2088fa0818698);
  v7_0->set_f_1(0x39);
  v7_0->set_f_2(0x21);
  v7_0->set_f_12(s->substr(0, 5));
  v7_0->set_f_4(0x119a8c);
  v7_0->set_f_17(Message0::M7::M51::E7_CONST_2);
  Message0::M7::M27* v8 = v0->mutable_f_6();
  v8->set_f_0(0x6ac4b4f);
  message->set_f_23(0x3b);
  Message0::M8* v9_0 = message->add_f_58();
  v9_0->set_f_21(0x59684a8acbeb729b);
  v9_0->set_f_15(0x5df463b613abda39);
  v9_0->set_f_3(0x1c);
  v9_0->set_f_14(s->substr(0, 6));
  v9_0->set_f_8(0x72dc8659ec3cf52);
  v9_0->set_f_0(true);
  v9_0->set_f_6(0x4adad45d58c79803);
  v9_0->set_f_7(false);
  v9_0->set_f_10(s->substr(0, 3));
  v9_0->set_f_12(true);
  v9_0->set_f_20(Message0::M8::E2_CONST_2);
  v9_0->set_f_18(s->substr(0, 19));
  v9_0->set_f_5(0x11);
  Message0::M8::M55* v10 = v9_0->mutable_f_47();
  Message0::M8::M55::M67* v11 = v10->mutable_f_3();
  Message0::M8::M55::M67::M98* v12 = v11->mutable_f_3();
  (void)v12;  // Suppresses clang-tidy.
  v9_0->set_f_19(s->substr(0, 3));
  message->set_f_0(s->substr(0, 42));
  message->set_f_11(0x50a1ffc96e9b55d);
  message->set_f_30(0x27);
  message->set_f_31(0x7174cd69384328d7);
  message->set_f_10(0x47104f7);
  message->set_f_21(s->substr(0, 21));
  message->set_f_5(s->substr(0, 116));
  message->add_f_8(s->substr(0, 7));
  message->add_f_8(s->substr(0, 3));
  Message0::M6* v13 = message->mutable_f_56();
  Message0::M6::M19* v14 = v13->mutable_f_4();
  Message0::M6::M19::M68* v15 = v14->mutable_f_2();
  v15->set_f_14(s->substr(0, 12));
  v15->set_f_20(0x3e);
  v15->set_f_29(true);
  v15->set_f_7(0x59);
  v15->set_f_22(false);
  v15->set_f_28(0x4b01d4e3db618316);
  v15->set_f_17(false);
  v15->set_f_25(0x4e0977aaf56a5fc1);
  v15->set_f_26(0x1778);
  v15->set_f_9(s->substr(0, 19));
  v15->set_f_0(0x319d1dba113430ce);
  v15->set_f_12(s->substr(0, 22));
  v15->set_f_15(0x10988379fa6f81e);
  v15->set_f_5(0x2efa899);
  v15->set_f_4(0xcc6748789076164);
  v15->set_f_21(true);
  v15->set_f_16(0x54);
  Message0::M6::M19::M68::M99* v16 = v15->mutable_f_43();
  v16->set_f_0(false);
  v15->set_f_2(0x73c1f7bbc78597a3);
  v15->set_f_24(s->substr(0, 17));
  Message0::M6::M19::M68::M90* v17 = v15->mutable_f_41();
  v17->set_f_1(0x5b5c93c157d5689);
  v17->set_f_0(0x1e);
  Message0::M6::M19::M68::M90::M107* v18 = v17->mutable_f_4();
  v18->set_f_0(0x1050);
  Message0::M6::M19::M76* v19 = v14->mutable_f_3();
  v19->set_f_1(s->substr(0, 31));
  v19->set_f_0(s->substr(0, 35));
  Message0::M6::M19::M76::M101* v20 = v19->mutable_f_5();
  v20->set_f_0(false);
  Message0::M6::M19::M76::M101::M111* v21 = v20->mutable_f_2();
  (void)v21;  // Suppresses clang-tidy.
  Message0::M6::M37* v22 = v13->mutable_f_7();
  Message0::M6::M37::M71* v23 = v22->mutable_f_3();
  Message0::M6::M37::M71::M87* v24 = v23->mutable_f_4();
  (void)v24;  // Suppresses clang-tidy.
  v23->add_f_0(s->substr(0, 4));
  Message0::M6::M28* v25 = v13->mutable_f_6();
  Message0::M6::M28::M83* v26_0 = v25->add_f_3();
  Message0::M6::M28::M83::M84* v27_0 = v26_0->add_f_5();
  (void)v27_0;  // Suppresses clang-tidy.
  v26_0->set_f_0(0x6a);
  Message0::M6::M53* v28_0 = v13->add_f_10();
  v28_0->add_f_1(0x18cc9a);
  v28_0->set_f_0(0x1a);
  Message0::M6::M14* v29 = v13->mutable_f_3();
  v29->set_f_8(0x7);
  v29->set_f_1(0x20550a1);
  v29->set_f_2(0x3b61);
  v29->set_f_5(0x1062);
  v29->set_f_9(0x65f0bc4a9a44809);
  v29->set_f_7(0x78);
  v13->set_f_0(true);
  message->set_f_2(0x1865a991b8ee7075);
  message->set_f_9(0.046855);
  message->set_f_13(0x3);
  Message0::M5* v30 = message->mutable_f_55();
  v30->set_f_1(s->substr(0, 2));
  Message0::M5::M29* v31_0 = v30->add_f_9();
  (void)v31_0;  // Suppresses clang-tidy.
  v30->set_f_0(s->substr(0, 18));
  Message0::M5::M11* v32 = v30->mutable_f_4();
  v32->set_f_0(0x9);
  Message0::M5::M18* v33 = v30->mutable_f_6();
  v33->set_f_2(0x725de8f213ab0828);
  v33->set_f_0(0x2b3867264);
  v33->set_f_1(0x21ca216d);
  Message0::M5::M33* v34 = v30->mutable_f_11();
  (void)v34;  // Suppresses clang-tidy.
  Message0::M2* v35 = message->mutable_f_49();
  Message0::M2::M15* v36 = v35->mutable_f_11();
  v36->set_f_0(false);
  Message0::M2::M15::M75* v37 = v36->mutable_f_3();
  v37->set_f_1(0x7b);
  v37->set_f_2(s->substr(0, 3));
  v37->set_f_3(s->substr(0, 64));
  v37->set_f_0(0xfd9);
  v35->set_f_2(0xf484a0b6eaa3e5d);
  v35->set_f_4(0xc);
  Message0::M2::M32* v38 = v35->mutable_f_12();
  v38->set_f_27(0xdb2e5db);
  v38->set_f_16(true);
  v38->set_f_10(0x3d59b04fcb746d9d);
  v38->set_f_19(s->substr(0, 22));
  v38->set_f_12(s->substr(0, 26));
  v38->set_f_31(s->substr(0, 2));
  v38->set_f_21(0xe2c);
  v38->set_f_28(0x8);
  v38->set_f_17(s->substr(0, 3));
  v38->set_f_0(0x53d58d0d);
  v38->set_f_13(0x7);
  v38->set_f_3(0x3c5);
  v38->set_f_20(Message0::M2::M32::E5_CONST_3);
  v38->set_f_4(0x69);
  Message0::M2::M32::M81* v39 = v38->mutable_f_58();
  v39->set_f_0(0x7fa55f4c6d6218c4);
  v38->set_f_15(0x20);
  Message0::M2::M47* v40 = v35->mutable_f_13();
  Message0::M2::M47::M82* v41 = v40->mutable_f_5();
  v41->set_f_2(s->substr(0, 1891));
  v41->set_f_3(true);
  v41->set_f_0(s->substr(0, 6));
  v41->set_f_1(0x1621962);
  v40->set_f_0(0x86522b95b671437);
  v35->set_f_0(false);
  v35->set_f_5(0x46);
  Message0::M2::M56* v42 = v35->mutable_f_14();
  v42->set_f_15(s->substr(0, 7));
  v42->set_f_9(0x31);
  v42->set_f_12(0x9c58cce437c137d);
  Message0::M2::M56::M80* v43 = v42->mutable_f_31();
  v43->set_f_1(0x72d889f8067d5a6);
  v43->set_f_2(0x5c);
  v43->set_f_3(0x3c2a5da12cd9b779);
  v43->set_f_6(0x5a);
  v43->set_f_0(s->substr(0, 3));
  v43->set_f_5(0x41);
  v42->set_f_10(0x30ec39171b1766c4);
  v42->set_f_19(0x2d);
  v42->set_f_18(0x1a4cde);
  v42->set_f_0(0x1834df);
  v42->set_f_2(0x1f);
  v42->set_f_6(Message0::M2::M56::E8_CONST_5);
  v42->set_f_17(s->substr(0, 7));
  v42->set_f_4(0xf);
  v42->set_f_11(0.742546);
  v42->set_f_1(0x4d37c44);
  v35->set_f_1(s->substr(0, 23));
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
