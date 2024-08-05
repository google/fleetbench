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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message2.pb.h"

namespace fleetbench::rpc::P7::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_7(s->substr(0, 1));
  Message2::M3* v0 = message->mutable_f_57();
  v0->set_f_0(0x14);
  Message2::M3::M22* v1 = v0->mutable_f_4();
  v1->set_f_1(false);
  v1->set_f_9(0x1e526230d585bea8);
  Message2::M3::M22::M59* v2_0 = v1->add_f_19();
  v2_0->set_f_0(0x721131f3a91e3d39);
  v2_0->set_f_1(0x47cf310e215d8ebb);
  v1->set_f_4(0x7e3214cfa782a98f);
  v1->set_f_2(true);
  v1->set_f_8(false);
  v1->set_f_5(s->substr(0, 26));
  v1->set_f_3(0.974658);
  v1->set_f_7(s->substr(0, 34));
  Message2::M3::M24* v3 = v0->mutable_f_5();
  Message2::M3::M24::M38* v4_0 = v3->add_f_5();
  v4_0->set_f_0(0x11977414b8247065);
  v3->set_f_1(s->substr(0, 25));
  message->add_f_25(Message2::E1_CONST_3);
  Message2::M2* v5 = message->mutable_f_54();
  v5->set_f_0(false);
  v5->set_f_5(false);
  v5->set_f_6(0x56);
  v5->set_f_4(0x363a6759c95b49f4);
  v5->set_f_2(0x60);
  v5->set_f_3(0x6eb36da1359e083e);
  message->set_f_17(false);
  message->set_f_24(s->substr(0, 20));
  message->set_f_3(0x1d434c2);
  message->set_f_12(0x6c8c682);
  Message2::M9* v6 = message->mutable_f_69();
  v6->set_f_0(s->substr(0, 22));
  Message2::M13* v7 = message->mutable_f_80();
  v7->set_f_0(s->substr(0, 2));
  Message2::M13::M30* v8 = v7->mutable_f_4();
  Message2::M13::M30::M52* v9 = v8->mutable_f_7();
  v9->set_f_3(s->substr(0, 8));
  v9->set_f_2(0x4761dae044de4d7e);
  v9->set_f_0(0.709641);
  Message2::M13::M30::M52::M74* v10_0 = v9->add_f_10();
  (void)v10_0;  // Suppresses clang-tidy.
  Message2::M13::M30::M39* v11_0 = v8->add_f_5();
  v11_0->set_f_0(0x4acfa60d39450940);
  Message2::M13::M30::M39::M63* v12 = v11_0->mutable_f_10();
  v12->set_f_0(true);
  v11_0->set_f_2(s->substr(0, 9));
  v11_0->set_f_4(true);
  v11_0->set_f_3(s->substr(0, 5));
  v11_0->set_f_1(s->substr(0, 4));
  v8->set_f_0(0x1adfc49274150b2a);
  message->set_f_27(0x5c3289ccc17e11d0);
  message->set_f_26(0x916e6678c8f2);
  Message2::M1* v13 = message->mutable_f_51();
  v13->set_f_1(0x7b643f71);
  v13->set_f_0(s->substr(0, 3));
  Message2::M8* v14 = message->mutable_f_66();
  v14->set_f_0(s->substr(0, 3));
  v14->set_f_1(0.414076);
  v14->set_f_2(false);
  Message2::M8::M32* v15 = v14->mutable_f_5();
  v15->set_f_13(0x43);
  v15->set_f_24(true);
  v15->set_f_25(true);
  v15->set_f_12(s->substr(0, 19));
  v15->set_f_28(Message2::M8::M32::E8_CONST_5);
  v15->set_f_23(0x7b0f1a824);
  v15->set_f_6(0x5f);
  v15->set_f_29(s->substr(0, 8));
  v15->set_f_17(true);
  v15->set_f_18(s->substr(0, 22));
  v15->set_f_4(s->substr(0, 7));
  v15->set_f_22(0x26);
  v15->add_f_9(Message2::M8::M32::E6_CONST_5);
  v15->set_f_21(Message2::M8::M32::E7_CONST_5);
  v15->set_f_16(0x4b7720dd1fbd5356);
  Message2::M8::M32::M58* v16 = v15->mutable_f_53();
  v16->set_f_0(0x5ba1ff2e);
  v15->set_f_3(0x454c4a2d73b3089b);
  v15->set_f_19(0.391167);
  v15->set_f_2(0xd);
  v15->set_f_0(Message2::M8::M32::E5_CONST_1);
  v15->set_f_27(0x6fbdcecf8f086f57);
  v15->set_f_1(0x6cf8f60);
  message->set_f_14(s->substr(0, 21));
  message->set_f_5(0x1852d);
  message->set_f_22(0x185a8844c0281aee);
  message->set_f_20(true);
  Message2::M11* v17_0 = message->add_f_73();
  Message2::M11::M28* v18 = v17_0->mutable_f_9();
  v18->set_f_2(s->substr(0, 6));
  Message2::M11::M28::M33* v19 = v18->mutable_f_9();
  v19->set_f_0(s->substr(0, 1));
  v18->set_f_1(0x49);
  v18->set_f_3(s->substr(0, 24));
  v17_0->set_f_1(s->substr(0, 30));
  v17_0->add_f_2(Message2::M11::E2_CONST_4);
  Message2::M11::M15* v20 = v17_0->mutable_f_7();
  v20->set_f_1(0x67);
  v17_0->set_f_0(0x59);
  message->set_f_8(0x7bec0c1);
  message->set_f_15(s->substr(0, 13));
  Message2::M10* v21_0 = message->add_f_71();
  Message2::M10::M31* v22 = v21_0->mutable_f_4();
  Message2::M10::M31::M61* v23 = v22->mutable_f_9();
  v23->set_f_0(0x35f6);
  v22->set_f_4(false);
  v22->set_f_2(0x4b);
  v22->set_f_1(0.841147);
  Message2::M10::M31::M53* v24 = v22->mutable_f_8();
  v24->set_f_3(0x760a7f8618f39000);
  v24->set_f_0(0x364e7e0a3dc56cbe);
  v21_0->set_f_0(false);
  message->set_f_16(0x13);
  Message2::M4* v25 = message->mutable_f_59();
  Message2::M4::M19* v26 = v25->mutable_f_9();
  v26->set_f_0(0.585266);
  Message2::M4::M19::M56* v27_0 = v26->add_f_9();
  v27_0->set_f_0(0x3fd8ef77ab0c9bdc);
  Message2::M4::M19::M45* v28 = v26->mutable_f_6();
  v28->add_f_0(Message2::M4::M19::M45::E11_CONST_4);
  v28->set_f_1(0x26bb);
  v25->set_f_3(0x60c00f4d493eb820);
  Message2::M4::M26* v29 = v25->mutable_f_16();
  v29->set_f_0(0.310111);
  Message2::M4::M26::M35* v30_0 = v29->add_f_4();
  v30_0->set_f_0(s->substr(0, 24));
  v25->set_f_2(0xcdbac);
  v25->set_f_1(0.036630);
  v25->set_f_4(0x9);
  v25->set_f_0(s->substr(0, 9));
  Message2::M4::M25* v31_0 = v25->add_f_13();
  v31_0->set_f_4(0.410961);
  v31_0->set_f_5(0x6d);
  v31_0->set_f_13(0x7733e966);
  v31_0->set_f_10(s->substr(0, 22));
  Message2::M4::M25::M49* v32 = v31_0->mutable_f_36();
  (void)v32;  // Suppresses clang-tidy.
  v31_0->set_f_12(0x111556c5cd57c4fc);
  v31_0->set_f_7(0x54ac20d017bc4c7c);
  v31_0->set_f_0(0.953899);
  v31_0->set_f_3(s->substr(0, 56));
  v31_0->set_f_2(0x540b9de93e5a88ed);
  v31_0->set_f_14(true);
  v31_0->set_f_8(0x8dd7);
  v31_0->set_f_9(s->substr(0, 1));
  v25->set_f_5(0x1ad9dccc3178e965);
  message->set_f_2(0x2b149a7);
  message->set_f_29(0x7572a1b498b76533);
  Message2::M6* v33 = message->mutable_f_61();
  Message2::M6::M17* v34_0 = v33->add_f_5();
  Message2::M6::M17::M48* v35 = v34_0->mutable_f_8();
  Message2::M6::M17::M48::M64* v36_0 = v35->add_f_27();
  v36_0->set_f_1(0x6c7c3f99);
  v36_0->set_f_0(0x57);
  v36_0->set_f_2(s->substr(0, 18));
  v35->set_f_7(true);
  v35->set_f_14(0.542789);
  v35->set_f_3(0x3d65);
  v35->set_f_13(s->substr(0, 14));
  v35->set_f_6(s->substr(0, 23));
  v35->set_f_8(s->substr(0, 35));
  v35->set_f_4(true);
  v35->set_f_12(0x5751b0146d219e34);
  v35->set_f_5(s->substr(0, 8));
  v35->set_f_10(0x40);
  Message2::M6::M17::M47* v37 = v34_0->mutable_f_6();
  (void)v37;  // Suppresses clang-tidy.
  Message2::M6::M17::M50* v38 = v34_0->mutable_f_9();
  v38->add_f_0(Message2::M6::M17::M50::E12_CONST_1);
  Message2::M6::M17::M50::M75* v39 = v38->mutable_f_2();
  v39->set_f_0(true);
  v39->set_f_1(0x41e00b0395ecc38b);
  Message2::M6::M17::M50::M75::M87* v40 = v39->mutable_f_4();
  v40->set_f_0(s->substr(0, 5));
  Message2::M6::M17::M57* v41 = v34_0->mutable_f_10();
  v41->set_f_1(0x77);
  v41->set_f_2(s->substr(0, 20));
  v41->set_f_0(0x6548ebfe6b0304b5);
  v33->set_f_0(0xbe09d2839633c31);
  Message2::M6::M20* v42 = v33->mutable_f_7();
  v42->set_f_0(0x57ad8cb60530ce36);
  Message2::M6::M20::M44* v43 = v42->mutable_f_3();
  v43->set_f_1(0x7ec3b7ca);
  v43->set_f_4(0x45d6985f26f3298b);
  v43->set_f_3(0x79);
  v43->set_f_2(0x54fabfd6);
  message->set_f_28(0x4efeca483074e02f);
  Message2::M14* v44_0 = message->add_f_82();
  v44_0->set_f_2(0.070516);
  v44_0->set_f_3(s->substr(0, 29));
  Message2::M14::M27* v45 = v44_0->mutable_f_6();
  Message2::M14::M27::M54* v46_0 = v45->add_f_3();
  v46_0->set_f_0(s->substr(0, 15));
  Message2::M14::M27::M54::M76* v47 = v46_0->mutable_f_8();
  v47->set_f_5(false);
  v47->set_f_1(Message2::M14::M27::M54::M76::E14_CONST_5);
  v47->set_f_4(0x39);
  v47->set_f_3(0x5bbbd256e76a2705);
  v47->set_f_6(0x3e8a98dcabe5e9d8);
  Message2::M14::M27::M54::M76::M85* v48_0 = v47->add_f_17();
  (void)v48_0;  // Suppresses clang-tidy.
  v47->set_f_0(false);
  v46_0->set_f_1(0xa);
  v46_0->set_f_2(0x6d);
  Message2::M14::M27::M62* v49_0 = v45->add_f_6();
  v49_0->set_f_1(0x800eb08);
  v49_0->set_f_0(0x2a);
  Message2::M14::M27::M55* v50 = v45->mutable_f_5();
  v50->set_f_1(0x29);
  Message2::M14::M27::M55::M73* v51 = v50->mutable_f_5();
  v51->set_f_2(s->substr(0, 6));
  v51->set_f_0(0x52);
  v51->set_f_1(false);
  v51->set_f_3(0xcb43626);
  v50->set_f_0(0.053220);
  v44_0->set_f_1(0x7296bf5a1acffbf0);
  v44_0->set_f_0(0x56);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_27(0xa3005d9679a850c);
  Message2::M9* v0 = message->mutable_f_69();
  Message2::M9::M16* v1 = v0->mutable_f_2();
  v1->set_f_0(s->substr(0, 15));
  Message2::M9::M16::M60* v2_0 = v1->add_f_4();
  v2_0->set_f_0(0xdf54778);
  Message2::M1* v3 = message->mutable_f_51();
  v3->set_f_1(0x3a4662e6);
  Message2::M4* v4 = message->mutable_f_59();
  Message2::M4::M19* v5 = v4->mutable_f_9();
  Message2::M4::M19::M56* v6_0 = v5->add_f_9();
  Message2::M4::M19::M56::M71* v7 = v6_0->mutable_f_2();
  v7->set_f_0(s->substr(0, 19));
  v7->set_f_1(0x1ff3f0);
  v7->set_f_2(0x1c418);
  v6_0->set_f_0(0x24a3403cbfca0e0c);
  v5->set_f_1(0x502e69f3e7150d15);
  Message2::M4::M19::M45* v8 = v5->mutable_f_6();
  v8->add_f_0(Message2::M4::M19::M45::E11_CONST_2);
  v5->set_f_0(0.426844);
  Message2::M4::M26* v9 = v4->mutable_f_16();
  Message2::M4::M26::M35* v10_0 = v9->add_f_4();
  v10_0->set_f_0(s->substr(0, 16));
  v9->set_f_0(0.149064);
  v4->set_f_0(s->substr(0, 6));
  v4->set_f_1(0.776003);
  v4->set_f_4(0x10e160);
  v4->set_f_3(0x11295917b462ac2a);
  Message2::M12* v11_0 = message->add_f_76();
  v11_0->set_f_0(0x17);
  message->set_f_1(0x21);
  message->set_f_24(s->substr(0, 26));
  Message2::M8* v12 = message->mutable_f_66();
  v12->set_f_0(s->substr(0, 26));
  Message2::M8::M32* v13 = v12->mutable_f_5();
  v13->set_f_7(0x646eb5320961e9fc);
  v13->set_f_23(0xccc1c731c3db23);
  v13->set_f_19(0.934235);
  Message2::M8::M32::M58* v14 = v13->mutable_f_53();
  v14->set_f_0(0x76d1adb8);
  v13->set_f_2(0x792fa65);
  v13->set_f_6(0x3c7a);
  v13->set_f_11(s->substr(0, 3615));
  v13->set_f_26(false);
  v13->set_f_15(0x6f);
  v13->set_f_3(0x63975d1c82d11a34);
  v13->set_f_0(Message2::M8::M32::E5_CONST_4);
  v13->set_f_5(0x895c444);
  v13->set_f_14(0x3d6136816c60a71f);
  Message2::M8::M32::E6 array_0[21] = {
      Message2::M8::M32::E6_CONST_1, Message2::M8::M32::E6_CONST_4,
      Message2::M8::M32::E6_CONST_2, Message2::M8::M32::E6_CONST_4,
      Message2::M8::M32::E6_CONST_4, Message2::M8::M32::E6_CONST_3,
      Message2::M8::M32::E6_CONST_1, Message2::M8::M32::E6_CONST_5,
      Message2::M8::M32::E6_CONST_2, Message2::M8::M32::E6_CONST_5,
      Message2::M8::M32::E6_CONST_2, Message2::M8::M32::E6_CONST_3,
      Message2::M8::M32::E6_CONST_5, Message2::M8::M32::E6_CONST_3,
      Message2::M8::M32::E6_CONST_3, Message2::M8::M32::E6_CONST_4,
      Message2::M8::M32::E6_CONST_3, Message2::M8::M32::E6_CONST_1,
      Message2::M8::M32::E6_CONST_2, Message2::M8::M32::E6_CONST_4,
      Message2::M8::M32::E6_CONST_3,
  };
  for (auto v : array_0) {
    v13->add_f_9(v);
  }
  Message2::M8::M32::M37* v15_0 = v13->add_f_51();
  Message2::M8::M32::M37::M70* v16 = v15_0->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  v15_0->set_f_0(s->substr(0, 20));
  v15_0->set_f_1(0.504074);
  Message2::M8::M32::M37::M78* v17 = v15_0->mutable_f_6();
  v17->set_f_0(0x3acf);
  v13->set_f_13(0x14);
  v13->set_f_18(s->substr(0, 29));
  v13->set_f_25(true);
  v13->set_f_27(0x5f2c5869b3e62154);
  v13->set_f_21(Message2::M8::M32::E7_CONST_3);
  v13->set_f_12(s->substr(0, 14));
  v13->set_f_1(0x3b);
  v13->set_f_28(Message2::M8::M32::E8_CONST_1);
  v13->set_f_24(true);
  message->set_f_7(s->substr(0, 32));
  Message2::M2* v18 = message->mutable_f_54();
  v18->set_f_4(0x7852a7895c3efe4c);
  v18->set_f_3(0x766c60e99c475dec);
  v18->set_f_6(0x44);
  v18->set_f_1(0xf4d79e29e501f0a);
  Message2::M5* v19_0 = message->add_f_60();
  Message2::M5::M23* v20_0 = v19_0->add_f_3();
  v20_0->set_f_0(s->substr(0, 3));
  Message2::M5::M23::M41* v21 = v20_0->mutable_f_4();
  v21->set_f_4(0xfd5b6c6);
  v21->set_f_1(s->substr(0, 33));
  v21->set_f_2(0x51c1030a8a5cd56c);
  v21->set_f_3(0x6f);
  Message2::M5::M23::M51* v22 = v20_0->mutable_f_6();
  (void)v22;  // Suppresses clang-tidy.
  v19_0->set_f_0(0x6f);
  Message2::M7* v23_0 = message->add_f_62();
  v23_0->set_f_0(0x4be244cc203652d3);
  message->set_f_5(0x6a);
  message->set_f_11(0x723ded93b257be89);
  message->set_f_16(0x2d);
  message->set_f_3(0x6a);
  message->set_f_15(s->substr(0, 4));
  Message2::M11* v24_0 = message->add_f_73();
  v24_0->add_f_2(Message2::M11::E2_CONST_4);
  v24_0->add_f_2(Message2::M11::E2_CONST_3);
  v24_0->set_f_1(s->substr(0, 29));
  v24_0->set_f_0(0x6b);
  Message2::M11::M15* v25 = v24_0->mutable_f_7();
  Message2::M11::M15::M46* v26_0 = v25->add_f_7();
  v26_0->set_f_0(0xf663c250918453a);
  v25->set_f_1(0x3fc119b);
  v25->add_f_2(Message2::M11::M15::E3_CONST_1);
  v25->set_f_0(0x30);
  v25->set_f_3(0x5e53a);
  message->set_f_19(0x1a610b639c09f755);
  message->set_f_14(s->substr(0, 2));
  Message2::M10* v27_0 = message->add_f_71();
  Message2::M10::M31* v28 = v27_0->mutable_f_4();
  v28->set_f_2(0x3);
  Message2::M10::M31::M61* v29 = v28->mutable_f_9();
  v29->set_f_0(0x8a175);
  Message2::M10::M31::M53* v30 = v28->mutable_f_8();
  v30->set_f_1(0xe7e2c9d);
  v30->set_f_3(0x6f1d57f527a5fc0d);
  v30->set_f_2(0x4311ca9264db6b53);
  v30->set_f_0(0x3967728139b2ad14);
  Message2::M10::M31::M53::M66* v31 = v30->mutable_f_7();
  v31->set_f_0(0.595051);
  v28->set_f_3(s->substr(0, 22));
  message->set_f_22(0x1134ac187a13e2b4);
  message->set_f_23(0xedc4784);
  Message2::M13* v32 = message->mutable_f_80();
  v32->set_f_0(s->substr(0, 3));
  Message2::M13::M30* v33 = v32->mutable_f_4();
  Message2::M13::M30::M39* v34_0 = v33->add_f_5();
  v34_0->set_f_4(true);
  v34_0->set_f_3(s->substr(0, 54));
  Message2::M13::M30::M39::M63* v35 = v34_0->mutable_f_10();
  (void)v35;  // Suppresses clang-tidy.
  v34_0->set_f_0(0x60d702b83659991d);
  v34_0->set_f_1(s->substr(0, 1));
  v33->set_f_0(0x1968741742dd16c9);
  Message2::M6* v36 = message->mutable_f_61();
  Message2::M6::M20* v37 = v36->mutable_f_7();
  Message2::M6::M20::M44* v38 = v37->mutable_f_3();
  v38->set_f_1(0x1b464b5b);
  v38->set_f_4(0x7d723feadad2659);
  v38->set_f_0(s->substr(0, 1));
  v37->set_f_0(0x333aa09bfa6a4a47);
  v36->set_f_0(0xe2f86da5dab47);
  message->set_f_10(s->substr(0, 8));
  message->set_f_6(0x325fe194ab0f905b);
  message->set_f_26(0x325a3b9eb2);
  message->set_f_2(0x954dad);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_14(s->substr(0, 11));
  message->set_f_21(false);
  Message2::M5* v0_0 = message->add_f_60();
  v0_0->set_f_0(0x3a);
  message->set_f_28(0x1520efbae02309b1);
  message->set_f_29(0x6748576e6213f0dd);
  message->set_f_8(0x6c32543);
  message->set_f_20(false);
  Message2::M8* v1 = message->mutable_f_66();
  v1->set_f_2(true);
  v1->set_f_0(s->substr(0, 24));
  v1->set_f_1(0.896118);
  Message2::M11* v2_0 = message->add_f_73();
  Message2::M11::M15* v3 = v2_0->mutable_f_7();
  v3->set_f_0(0x710d0cd);
  v3->set_f_3(0x38);
  Message2::M11::M15::M46* v4_0 = v3->add_f_7();
  (void)v4_0;  // Suppresses clang-tidy.
  Message2::M11::M28* v5 = v2_0->mutable_f_9();
  Message2::M11::M28::M33* v6 = v5->mutable_f_9();
  v6->set_f_0(s->substr(0, 18));
  v5->set_f_3(s->substr(0, 22));
  v5->set_f_2(s->substr(0, 32));
  v5->set_f_0(0x6b7e4da3cc5d3259);
  v5->set_f_4(0x6c6860825a45aef2);
  v5->set_f_1(0x75);
  v2_0->set_f_1(s->substr(0, 16));
  v2_0->set_f_0(0x6a7e45c);
  Message2::M3* v7 = message->mutable_f_57();
  Message2::M3::M22* v8 = v7->mutable_f_4();
  Message2::M3::M22::M59* v9_0 = v8->add_f_19();
  v9_0->set_f_0(0x133f36adb6498aac);
  v8->set_f_10(0x40823a6496bd0ace);
  v8->set_f_6(0x70);
  v8->set_f_5(s->substr(0, 7));
  v8->set_f_2(true);
  v8->set_f_7(s->substr(0, 28));
  Message2::M3::M24* v10 = v7->mutable_f_5();
  v10->set_f_0(0x3b);
  message->set_f_15(s->substr(0, 72));
  Message2::M4* v11 = message->mutable_f_59();
  v11->set_f_0(s->substr(0, 4));
  v11->set_f_3(0x248b62e1db521837);
  v11->set_f_5(0x46e45f877c3425f7);
  v11->set_f_1(0.254714);
  v11->set_f_4(0xa3551a2);
  Message2::M4::M29* v12 = v11->mutable_f_17();
  Message2::M4::M29::M43* v13_0 = v12->add_f_4();
  Message2::M4::M29::M43::M81* v14 = v13_0->mutable_f_4();
  v14->set_f_1(0xc0ee73e);
  Message2::M4::M29::M43::M81::M89* v15_0 = v14->add_f_7();
  v15_0->set_f_0(0x1c7d1e52);
  Message2::M4::M29::M43::M81::M90* v16 = v14->mutable_f_9();
  v16->set_f_3(0x5e54911f9d471531);
  v16->set_f_0(s->substr(0, 19));
  v16->set_f_2(s->substr(0, 27));
  v14->set_f_2(true);
  v13_0->set_f_0(false);
  Message2::M4::M29::M43::M72* v17 = v13_0->mutable_f_3();
  v17->set_f_0(0x6c5496daca5f3fae);
  v12->set_f_0(0x6020e427e7df21f1);
  v11->set_f_2(0x7a);
  Message2::M4::M25* v18_0 = v11->add_f_13();
  Message2::M4::M25::M34* v19 = v18_0->mutable_f_35();
  v19->set_f_4(s->substr(0, 6));
  v19->set_f_2(0x28);
  v19->set_f_0(s->substr(0, 19));
  Message2::M4::M25::M34::M79* v20_0 = v19->add_f_13();
  v20_0->set_f_1(0x3c2aff4000ddc419);
  v20_0->add_f_0(Message2::M4::M25::M34::M79::E15_CONST_3);
  v19->set_f_1(false);
  Message2::M4::M25::M34::E9 array_0[19] = {
      Message2::M4::M25::M34::E9_CONST_5, Message2::M4::M25::M34::E9_CONST_3,
      Message2::M4::M25::M34::E9_CONST_2, Message2::M4::M25::M34::E9_CONST_2,
      Message2::M4::M25::M34::E9_CONST_2, Message2::M4::M25::M34::E9_CONST_3,
      Message2::M4::M25::M34::E9_CONST_5, Message2::M4::M25::M34::E9_CONST_1,
      Message2::M4::M25::M34::E9_CONST_3, Message2::M4::M25::M34::E9_CONST_2,
      Message2::M4::M25::M34::E9_CONST_4, Message2::M4::M25::M34::E9_CONST_1,
      Message2::M4::M25::M34::E9_CONST_2, Message2::M4::M25::M34::E9_CONST_5,
      Message2::M4::M25::M34::E9_CONST_2, Message2::M4::M25::M34::E9_CONST_4,
      Message2::M4::M25::M34::E9_CONST_1, Message2::M4::M25::M34::E9_CONST_3,
      Message2::M4::M25::M34::E9_CONST_5,
  };
  for (auto v : array_0) {
    v19->add_f_3(v);
  }
  v18_0->set_f_13(0x1f3c6c52);
  v18_0->set_f_14(true);
  v18_0->set_f_3(s->substr(0, 25));
  v18_0->set_f_7(0xd2c101cd95b8643);
  v18_0->set_f_9(s->substr(0, 33));
  v18_0->set_f_6(0x51bdac0f69852e0d);
  v18_0->set_f_4(0.399033);
  v18_0->set_f_5(0x7d);
  v18_0->set_f_10(s->substr(0, 20));
  v18_0->set_f_11(0x12c42471);
  v18_0->set_f_8(0x3);
  message->set_f_4(true);
  message->set_f_23(0x36);
  Message2::M6* v21 = message->mutable_f_61();
  v21->set_f_0(0x4722326d349fd78b);
  Message2::M6::M20* v22 = v21->mutable_f_7();
  Message2::M6::M20::M44* v23 = v22->mutable_f_3();
  v23->set_f_1(0x4d5b6eab);
  v23->set_f_0(s->substr(0, 15));
  v23->set_f_4(0x24041240ca8089dd);
  v23->set_f_2(0x16a1935b);
  v22->set_f_0(0xcf1d82bbac21019);
  message->set_f_19(0x7b6aff6628968eca);
  message->set_f_9(true);
  message->set_f_12(0x9a80629);
  Message2::M1* v24 = message->mutable_f_51();
  v24->set_f_0(s->substr(0, 16));
  v24->set_f_1(0x7d2c77e5);
  message->set_f_5(0x4e);
  message->add_f_25(Message2::E1_CONST_1);
  message->set_f_11(0x75af679389e5af38);
  Message2::M2* v25 = message->mutable_f_54();
  v25->set_f_5(true);
  v25->set_f_3(0x46e3be43d69965f0);
  v25->set_f_2(0x67);
  Message2::M2::M21* v26 = v25->mutable_f_14();
  v26->set_f_5(0x1c);
  v26->set_f_4(s->substr(0, 25));
  v26->set_f_6(true);
  v26->set_f_12(0x691018359fe33c6a);
  v26->set_f_3(0.250983);
  v26->set_f_10(0x197bb8d268a);
  v26->set_f_11(s->substr(0, 25));
  v26->set_f_0(0.080599);
  message->set_f_22(0x444c99f1dd3e4115);
  message->set_f_27(0x4c4f3832a6cee91);
  Message2::M7* v27_0 = message->add_f_62();
  v27_0->set_f_0(0x713e706f45886434);
  message->set_f_17(true);
  message->set_f_24(s->substr(0, 25));
  message->set_f_10(s->substr(0, 4));
  message->set_f_13(0x38);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_24(s->substr(0, 5));
  message->set_f_21(false);
  Message2::M5* v0_0 = message->add_f_60();
  Message2::M5::M23* v1_0 = v0_0->add_f_3();
  Message2::M5::M23::M41* v2 = v1_0->mutable_f_4();
  v2->set_f_0(0x603e6614156dcaf9);
  v2->set_f_4(0xc);
  v2->set_f_1(s->substr(0, 1));
  v1_0->set_f_0(s->substr(0, 9));
  Message2::M12* v3_0 = message->add_f_76();
  v3_0->set_f_1(0xe0a97e4);
  v3_0->set_f_0(0x2b);
  Message2::M7* v4_0 = message->add_f_62();
  (void)v4_0;  // Suppresses clang-tidy.
  message->set_f_28(0x1deb16432daee54);
  message->set_f_19(0x24db270241230cb9);
  message->set_f_18(s->substr(0, 5));
  message->set_f_6(0x67a8b459acb4cd62);
  message->set_f_17(false);
  Message2::M10* v5_0 = message->add_f_71();
  Message2::M10::M31* v6 = v5_0->mutable_f_4();
  v6->set_f_4(true);
  v6->set_f_0(0x1a);
  Message2::M10::M31::M61* v7 = v6->mutable_f_9();
  (void)v7;  // Suppresses clang-tidy.
  v6->set_f_3(s->substr(0, 1));
  v6->set_f_1(0.649153);
  Message2::M10::M31::M53* v8 = v6->mutable_f_8();
  v8->set_f_2(0x41ca776f5d74fd81);
  v8->set_f_3(0x1a24557e1e56e19);
  v8->set_f_0(0x2bb85d0ff122302e);
  Message2::M10::M31::M53::M66* v9 = v8->mutable_f_7();
  v9->set_f_0(0.444174);
  Message2::M10::M31::M53::M66::M92* v10 = v9->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message2::M10::M31::M36* v11_0 = v6->add_f_7();
  v11_0->add_f_0(Message2::M10::M31::M36::E10_CONST_3);
  Message2::M10::M31::M36::M65* v12_0 = v11_0->add_f_2();
  v12_0->set_f_1(s->substr(0, 3));
  v12_0->set_f_0(0xf5a2852741ec856);
  Message2::M10::M31::M36::M65::M86* v13 = v12_0->mutable_f_8();
  (void)v13;  // Suppresses clang-tidy.
  v12_0->set_f_3(0.641017);
  v5_0->set_f_0(true);
  message->set_f_5(0x28e1a27);
  message->set_f_4(true);
  message->set_f_29(0x55d066f89a37cfbc);
  message->set_f_14(s->substr(0, 1));
  message->set_f_26(0x5252688629cbfa);
  message->set_f_16(0x5c);
  message->set_f_1(0x1f);
  message->set_f_15(s->substr(0, 20));
  Message2::M1* v14 = message->mutable_f_51();
  v14->set_f_0(s->substr(0, 10));
  message->set_f_27(0x7d447380448feb76);
  message->set_f_23(0x43ddd3c);
  message->set_f_10(s->substr(0, 17));
  message->set_f_20(true);
  message->set_f_13(0x2e);
  Message2::M9* v15 = message->mutable_f_69();
  Message2::M9::M16* v16 = v15->mutable_f_2();
  v16->set_f_0(s->substr(0, 3));
  Message2::M9::M16::M60* v17_0 = v16->add_f_4();
  v17_0->set_f_0(0x12ee44);
  message->set_f_7(s->substr(0, 17));
  message->set_f_8(0x61);
  message->set_f_3(0x5e);
  Message2::M3* v18 = message->mutable_f_57();
  v18->set_f_0(0x61);
  Message2::M3::M22* v19 = v18->mutable_f_4();
  v19->set_f_1(false);
  v19->set_f_0(true);
  Message2::M3::M22::M59* v20_0 = v19->add_f_19();
  v20_0->set_f_0(0x464ed938ece05147);
  v20_0->set_f_1(0x400e2a678cf9be70);
  v19->set_f_2(true);
  v19->set_f_4(0xdec2a870efdc7e3);
  v19->set_f_9(0x5bac43510b776cef);
  v19->set_f_8(true);
  v19->set_f_7(s->substr(0, 1));
  v19->set_f_6(0x31e232c);
  v19->set_f_5(s->substr(0, 7));
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
}  // namespace fleetbench::rpc::P7::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE2_H_
