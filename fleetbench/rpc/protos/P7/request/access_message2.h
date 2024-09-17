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
  message->set_f_20(s->substr(0, 6));
  Message2::M8* v0_0 = message->add_f_67();
  v0_0->set_f_0(Message2::M8::E3_CONST_3);
  message->set_f_21(true);
  message->set_f_4(s->substr(0, 26));
  Message2::M4* v1 = message->mutable_f_62();
  v1->set_f_0(s->substr(0, 25));
  message->set_f_5(0.277659);
  message->add_f_25(Message2::E2_CONST_5);
  Message2::M9* v2_0 = message->add_f_71();
  v2_0->set_f_0(0x7a6e8f4aaec87c8a);
  message->set_f_9(0x511fed34);
  message->set_f_0(s->substr(0, 8));
  message->set_f_22(0.910639);
  message->set_f_24(s->substr(0, 295));
  message->set_f_17(0x44);
  message->set_f_15(0x48f415de8613bed8);
  message->set_f_18(false);
  Message2::M3* v3_0 = message->add_f_60();
  (void)v3_0;  // Suppresses clang-tidy.
  Message2::M13* v4_0 = message->add_f_77();
  Message2::M13::M24* v5_0 = v4_0->add_f_11();
  Message2::M13::M24::M49* v6_0 = v5_0->add_f_3();
  Message2::M13::M24::M49::M73* v7 = v6_0->mutable_f_2();
  v7->set_f_4(0x31);
  Message2::M13::M24::M49::M73::M90* v8 = v7->mutable_f_12();
  v8->set_f_2(0x53);
  v8->set_f_1(0x4d);
  v8->set_f_4(0x3973ce63fe01cc89);
  v8->set_f_3(0x666f34f0c550faab);
  v7->set_f_2(0x6ec27c2629a01778);
  v7->set_f_3(0x3ae5e5207398fca7);
  v6_0->set_f_0(0x49ec40a65cd3c6a9);
  v5_0->set_f_0(s->substr(0, 244));
  v4_0->set_f_0(0xb);
  Message2::M13::M31* v9 = v4_0->mutable_f_13();
  Message2::M13::M31::M35* v10 = v9->mutable_f_4();
  v10->set_f_0(0xd8b63a9);
  Message2::M13::M31::M35::M67* v11 = v10->mutable_f_5();
  v11->set_f_0(0xde4404770180972);
  Message2::M13::M31::M35::M67::M85* v12 = v11->mutable_f_9();
  v12->set_f_0(0x2e);
  v12->set_f_1(0x24);
  Message2::M13::M31::M35::M67::M82* v13 = v11->mutable_f_5();
  v13->set_f_1(0x6cf63b3449876899);
  v13->set_f_0(s->substr(0, 2));
  Message2::M13::M31::M35::M70* v14 = v10->mutable_f_6();
  v14->set_f_0(0x3a655c6d07226a0);
  v10->set_f_1(false);
  v9->set_f_1(s->substr(0, 336));
  v9->set_f_0(0x1c92c15c24649133);
  Message2::M13::M31::M43* v15 = v9->mutable_f_5();
  Message2::M13::M31::M43::M78* v16 = v15->mutable_f_7();
  v16->set_f_0(s->substr(0, 7));
  Message2::M13::M31::M43::M75* v17 = v15->mutable_f_6();
  v17->set_f_1(s->substr(0, 20));
  Message2::M13::M31::M43::M75::M92* v18_0 = v17->add_f_3();
  (void)v18_0;  // Suppresses clang-tidy.
  Message2::M13::M31::M57* v19 = v9->mutable_f_8();
  v19->set_f_2(0x69);
  v19->set_f_3(Message2::M13::M31::M57::E11_CONST_5);
  Message2::M13::M31::M57::M77* v20 = v19->mutable_f_8();
  v20->set_f_0(s->substr(0, 31));
  v19->set_f_0(0x187a7a84ab4c4614);
  v19->set_f_1(0x43);
  v4_0->set_f_3(0.924140);
  v4_0->set_f_1(0x51a55e89bcf38a33);
  message->set_f_19(0x798258bf085b3140);
  message->set_f_6(0x1914b65);
  Message2::M12* v21 = message->mutable_f_74();
  v21->set_f_1(true);
  v21->set_f_2(s->substr(0, 9));
  v21->set_f_0(0x4a);
  Message2::M12::M16* v22 = v21->mutable_f_6();
  Message2::M12::M16::M58* v23 = v22->mutable_f_5();
  v23->set_f_3(Message2::M12::M16::M58::E12_CONST_5);
  v23->set_f_2(0x2a3f3d1e47bde85b);
  v23->set_f_0(0x11505cddc585e967);
  message->set_f_8(0xd);
  message->set_f_28(s->substr(0, 8));
  Message2::M11* v24 = message->mutable_f_73();
  Message2::M11::M23* v25_0 = v24->add_f_4();
  Message2::M11::M23::M56* v26 = v25_0->mutable_f_4();
  Message2::M11::M23::M56::M64* v27 = v26->mutable_f_4();
  Message2::M11::M23::M56::M64::M89* v28 = v27->mutable_f_3();
  v28->set_f_1(0xaa0f85c);
  v28->set_f_0(0xd);
  v27->set_f_0(0x4c5046b62bd3c6f6);
  v24->set_f_0(0x3c9d456f);
  message->set_f_23(0x75e898fabd449b57);
  message->set_f_10(s->substr(0, 5));
  Message2::E1 array_1[16] = {
      Message2::E1_CONST_1, Message2::E1_CONST_3, Message2::E1_CONST_1,
      Message2::E1_CONST_3, Message2::E1_CONST_1, Message2::E1_CONST_4,
      Message2::E1_CONST_4, Message2::E1_CONST_2, Message2::E1_CONST_1,
      Message2::E1_CONST_4, Message2::E1_CONST_4, Message2::E1_CONST_3,
      Message2::E1_CONST_1, Message2::E1_CONST_4, Message2::E1_CONST_1,
      Message2::E1_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_11(v);
  }
  Message2::M14* v29 = message->mutable_f_79();
  Message2::M14::M26* v30 = v29->mutable_f_8();
  (void)v30;  // Suppresses clang-tidy.
  v29->set_f_3(0x2b4e9e2c);
  Message2::M1* v31_0 = message->add_f_56();
  v31_0->set_f_0(s->substr(0, 17));
  Message2::M1::M18* v32 = v31_0->mutable_f_12();
  v32->set_f_0(0x2bf7914);
  v31_0->set_f_4(s->substr(0, 8));
  Message2::M1::M20* v33 = v31_0->mutable_f_13();
  v33->set_f_13(0xd);
  v33->set_f_19(s->substr(0, 4));
  v33->set_f_29(0x50f6c5c);
  v33->set_f_6(s->substr(0, 21));
  v33->set_f_16(0x49fc63e8b16d8416);
  v33->set_f_8(s->substr(0, 7));
  v33->set_f_15(s->substr(0, 19));
  v33->set_f_31(0x737fd08f);
  Message2::M1::M20::M48* v34 = v33->mutable_f_53();
  v34->set_f_0(s->substr(0, 6));
  Message2::M1::M20::M47* v35 = v33->mutable_f_51();
  (void)v35;  // Suppresses clang-tidy.
  v33->set_f_7(0x7baaa9fda9039f08);
  v33->add_f_17(Message2::M1::M20::E5_CONST_5);
  v33->set_f_9(0x7fca3b28);
  v33->set_f_2(false);
  v33->set_f_12(0x346687e9);
  v33->set_f_26(s->substr(0, 7));
  v33->add_f_4(Message2::M1::M20::E4_CONST_2);
  v33->set_f_0(0x1e53662);
  v33->set_f_5(s->substr(0, 27));
  v33->set_f_25(s->substr(0, 4));
  v33->set_f_11(0x1b0bad4c89760acd);
  v33->set_f_22(0x19);
  v31_0->set_f_5(0x79);
  message->set_f_26(0x50948be0533f8a96);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_6(0x54adc);
  Message2::M2* v0_0 = message->add_f_58();
  v0_0->set_f_1(s->substr(0, 1));
  v0_0->set_f_0(0x210a1fee);
  message->set_f_20(s->substr(0, 44));
  message->set_f_22(0.206183);
  message->set_f_4(s->substr(0, 2));
  message->set_f_24(s->substr(0, 378));
  message->set_f_12(0x56fba7112af5cf5);
  Message2::M13* v1_0 = message->add_f_77();
  v1_0->set_f_0(0xa6af07c);
  v1_0->set_f_3(0.811584);
  Message2::M13::M31* v2 = v1_0->mutable_f_13();
  Message2::M13::M31::M43* v3 = v2->mutable_f_5();
  v3->set_f_0(0x48);
  Message2::M13::M31::M43::M75* v4 = v3->mutable_f_6();
  v4->set_f_1(s->substr(0, 18));
  v4->set_f_0(s->substr(0, 8));
  v2->set_f_0(0x749307f462406b04);
  Message2::M13::M31::M59* v5 = v2->mutable_f_10();
  Message2::M13::M31::M59::M69* v6 = v5->mutable_f_4();
  v6->set_f_0(false);
  v1_0->set_f_1(0x72c1872561ab1ebf);
  v1_0->set_f_2(0x5aa374211c6cb8f0);
  message->set_f_2(0x39a7b3d14e82514);
  Message2::M6* v7_0 = message->add_f_64();
  Message2::M6::M27* v8 = v7_0->mutable_f_7();
  v8->set_f_0(0x49f46de1e0da0920);
  Message2::M6::M25* v9 = v7_0->mutable_f_5();
  v9->set_f_1(0x7ffbe50b919cb678);
  Message2::M6::M25::M40* v10 = v9->mutable_f_7();
  v10->set_f_21(0x7bf64a831b2602bf);
  v10->set_f_0(s->substr(0, 44));
  Message2::M6::M25::M40::M74* v11 = v10->mutable_f_45();
  v11->set_f_3(true);
  v11->set_f_1(0x71f56fd3a630bc5b);
  v11->set_f_2(0x4720b7c3);
  v10->set_f_17(0x45);
  v10->set_f_20(s->substr(0, 12));
  v10->set_f_16(0x21);
  v10->set_f_15(0x483d19c62f316f5f);
  v10->set_f_4(0xe08aff074cdbfc);
  v10->set_f_9(0x2);
  v10->set_f_18(0x432872f46cefe699);
  v10->set_f_12(0x7a0cad8ecc0df402);
  v10->set_f_2(0x378c581);
  v10->set_f_1(s->substr(0, 4));
  Message2::M6::M25::M40::M72* v12 = v10->mutable_f_43();
  v12->set_f_0(0x63);
  Message2::M6::M25::M40::M71* v13_0 = v10->add_f_40();
  v13_0->set_f_0(0x1c);
  v10->set_f_14(true);
  v10->set_f_3(0.484401);
  v10->set_f_8(s->substr(0, 46));
  v10->set_f_19(0x25f2dc60a43d030);
  v10->set_f_7(s->substr(0, 16));
  v10->set_f_5(s->substr(0, 26));
  message->set_f_10(s->substr(0, 6));
  message->set_f_1(0x79);
  Message2::M8* v14_0 = message->add_f_67();
  v14_0->set_f_0(Message2::M8::E3_CONST_3);
  Message2::M4* v15 = message->mutable_f_62();
  (void)v15;  // Suppresses clang-tidy.
  Message2::M11* v16 = message->mutable_f_73();
  Message2::M11::M23* v17_0 = v16->add_f_4();
  (void)v17_0;  // Suppresses clang-tidy.
  message->set_f_21(true);
  message->set_f_16(0x1c76047db75fbc60);
  message->set_f_17(0x26);
  Message2::M3* v18_0 = message->add_f_60();
  v18_0->set_f_0(0x1afa2c1a373e0b5c);
  v18_0->set_f_1(0x3c16);
  message->set_f_0(s->substr(0, 4));
  message->set_f_13(0x24d29f43d181b708);
  message->set_f_23(0x3cef705e20675d60);
  message->set_f_8(0x1a);
  message->set_f_15(0x141df3048cb7487e);
  Message2::M12* v19 = message->mutable_f_74();
  v19->set_f_2(s->substr(0, 30));
  v19->set_f_0(0xf7f);
  message->set_f_5(0.819421);
  message->set_f_29(0x228b);
  Message2::M1* v20_0 = message->add_f_56();
  Message2::M1::M18* v21 = v20_0->mutable_f_12();
  Message2::M1::M18::M37* v22 = v21->mutable_f_5();
  (void)v22;  // Suppresses clang-tidy.
  v21->set_f_0(0x2c);
  v20_0->set_f_0(s->substr(0, 12));
  v20_0->set_f_5(0x6f);
  v20_0->set_f_4(s->substr(0, 7));
  v20_0->set_f_1(0x50);
  v20_0->set_f_3(s->substr(0, 13));
  Message2::M1::M20* v23 = v20_0->mutable_f_13();
  v23->add_f_4(Message2::M1::M20::E4_CONST_3);
  v23->set_f_12(0x6bf1a0fd);
  v23->set_f_26(s->substr(0, 18));
  v23->set_f_21(0x754e978c3113679);
  v23->set_f_0(0x5e);
  v23->set_f_11(0x78b45066883bc629);
  v23->set_f_24(0x420fa77fa22e9af4);
  v23->set_f_5(s->substr(0, 15));
  v23->set_f_25(s->substr(0, 24));
  v23->set_f_10(0x365221c74404a09e);
  v23->set_f_9(0x4a62f7fa);
  v23->set_f_7(0xf86bc5e14a93493);
  v23->set_f_23(0x34);
  v23->set_f_13(0x5d);
  v23->set_f_16(0x41e91439ce5b6c52);
  v23->set_f_27(s->substr(0, 17));
  v23->set_f_31(0x396769c8);
  v23->set_f_3(s->substr(0, 6));
  v23->set_f_22(0x25);
  Message2::M1::M20::M48* v24 = v23->mutable_f_53();
  v24->set_f_0(s->substr(0, 6));
  v23->set_f_18(false);
  v23->set_f_8(s->substr(0, 24));
  v23->set_f_1(0x15d4dbef71588ab9);
  Message2::M1::M20::M47* v25 = v23->mutable_f_51();
  v25->set_f_0(0x58);
  v20_0->set_f_2(0x1ad37be0aef7d103);
  Message2::M7* v26 = message->mutable_f_66();
  Message2::M7::M28* v27 = v26->mutable_f_6();
  Message2::M7::M28::M54* v28_0 = v27->add_f_7();
  v28_0->set_f_0(0x1cdd4c56);
  v27->set_f_0(0x3eeb038d9d8aa19d);
  Message2::M7::M28::M51* v29_0 = v27->add_f_6();
  v29_0->set_f_0(0x710ca77445ebf23f);
  Message2::M7::M15* v30_0 = v26->add_f_5();
  Message2::M7::M15::M62* v31 = v30_0->mutable_f_8();
  v31->set_f_1(0x3f7e05a);
  Message2::M7::M15::M41* v32 = v30_0->mutable_f_6();
  (void)v32;  // Suppresses clang-tidy.
  Message2::M7::M15::M44* v33 = v30_0->mutable_f_7();
  v33->set_f_0(0xcaddd49);
  v33->set_f_2(s->substr(0, 8));
  v33->set_f_4(0x276d855);
  v30_0->set_f_1(s->substr(0, 32));
  Message2::M7::M15::M39* v34 = v30_0->mutable_f_5();
  v34->set_f_0(s->substr(0, 25));
  Message2::M7::M15::M34* v35 = v30_0->mutable_f_3();
  v35->set_f_1(0x1d4a34683f878215);
  v30_0->set_f_0(s->substr(0, 63));
  Message2::M7::M15::M38* v36_0 = v30_0->add_f_4();
  (void)v36_0;  // Suppresses clang-tidy.
  v26->set_f_1(0x1880a107fa157b6b);
  v26->set_f_0(s->substr(0, 29));
  Message2::M14* v37 = message->mutable_f_79();
  v37->set_f_1(true);
  Message2::M14::M26* v38 = v37->mutable_f_8();
  Message2::M14::M26::M63* v39 = v38->mutable_f_3();
  v39->set_f_2(0xf46e61);
  v39->set_f_4(Message2::M14::M26::M63::E13_CONST_4);
  v39->set_f_1(0x75b98bc68d377f1f);
  v39->set_f_12(0x1696);
  v39->set_f_6(0x10be78);
  v39->set_f_10(0.200654);
  v39->set_f_0(s->substr(0, 2));
  v39->set_f_9(0x3d);
  v37->set_f_3(0x62d3d698);
  v37->set_f_2(0x3);
  message->set_f_28(s->substr(0, 5));
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_14(0x7b1f7e770117343e);
  Message2::M2* v0_0 = message->add_f_58();
  v0_0->set_f_0(0x5ab0bd74);
  Message2::M12* v1 = message->mutable_f_74();
  v1->set_f_1(false);
  v1->set_f_0(0x78ca0eb);
  Message2::M4* v2 = message->mutable_f_62();
  v2->set_f_0(s->substr(0, 30));
  message->set_f_5(0.608646);
  message->set_f_4(s->substr(0, 40));
  message->set_f_8(0xa);
  message->add_f_11(Message2::E1_CONST_4);
  message->set_f_2(0x7210b850041455e2);
  message->set_f_10(s->substr(0, 4));
  message->set_f_18(true);
  message->set_f_17(0x1c9eb67);
  Message2::E2 array_0[21] = {
      Message2::E2_CONST_2, Message2::E2_CONST_4, Message2::E2_CONST_5,
      Message2::E2_CONST_2, Message2::E2_CONST_4, Message2::E2_CONST_3,
      Message2::E2_CONST_2, Message2::E2_CONST_1, Message2::E2_CONST_2,
      Message2::E2_CONST_5, Message2::E2_CONST_2, Message2::E2_CONST_2,
      Message2::E2_CONST_3, Message2::E2_CONST_3, Message2::E2_CONST_2,
      Message2::E2_CONST_4, Message2::E2_CONST_5, Message2::E2_CONST_4,
      Message2::E2_CONST_1, Message2::E2_CONST_2, Message2::E2_CONST_3,
  };
  for (auto v : array_0) {
    message->add_f_25(v);
  }
  message->set_f_0(s->substr(0, 29));
  message->set_f_12(0x3743c45cc424b3b3);
  message->set_f_24(s->substr(0, 333));
  message->set_f_16(0x4758a4e8a3471f3);
  message->set_f_7(s->substr(0, 2));
  Message2::M7* v3 = message->mutable_f_66();
  Message2::M7::M28* v4 = v3->mutable_f_6();
  Message2::M7::M28::M54* v5_0 = v4->add_f_7();
  v5_0->set_f_0(0x38188ab5);
  v4->set_f_0(0x675b2c3b49f140fe);
  v3->set_f_0(s->substr(0, 1));
  Message2::M1* v6_0 = message->add_f_56();
  v6_0->set_f_0(s->substr(0, 24));
  v6_0->set_f_4(s->substr(0, 15));
  Message2::M1::M18* v7 = v6_0->mutable_f_12();
  v7->set_f_0(0xb);
  Message2::M1::M18::M37* v8 = v7->mutable_f_5();
  v8->set_f_0(0x57b7ec2);
  v6_0->set_f_3(s->substr(0, 29));
  v6_0->set_f_1(0x1);
  v6_0->set_f_5(0x76c60);
  v6_0->set_f_2(0x106ff71ca720b114);
  Message2::M5* v9 = message->mutable_f_63();
  v9->set_f_0(0x78);
  Message2::M5::M17* v10 = v9->mutable_f_3();
  v10->set_f_0(0x1a);
  Message2::M5::M22* v11_0 = v9->add_f_5();
  Message2::M5::M22::M33* v12 = v11_0->mutable_f_24();
  v12->set_f_1(0x6e2e4db23114469c);
  v12->set_f_2(0x1dacf7635bb71cad);
  v12->set_f_6(s->substr(0, 12));
  v11_0->set_f_9(0x51f8308f46efd394);
  v11_0->set_f_5(0x767fcd1f762e441b);
  v11_0->set_f_6(false);
  v11_0->set_f_10(0.519214);
  v11_0->set_f_8(0x7242457eb65ba72e);
  v11_0->set_f_11(s->substr(0, 8));
  Message2::M5::M22::M42* v13 = v11_0->mutable_f_26();
  v13->set_f_0(0xd907ebd);
  v11_0->set_f_4(s->substr(0, 17));
  v11_0->set_f_3(s->substr(0, 1));
  v11_0->set_f_12(0x79);
  v11_0->set_f_2(0.571058);
  Message2::M14* v14 = message->mutable_f_79();
  v14->set_f_0(0xb8a2c11);
  Message2::M14::M26* v15 = v14->mutable_f_8();
  Message2::M14::M26::M63* v16 = v15->mutable_f_3();
  v16->set_f_10(0.446397);
  v16->set_f_5(0x96b10);
  v16->set_f_9(0x81099d7);
  v16->set_f_11(0x13cfacaa2f17a689);
  v16->set_f_4(Message2::M14::M26::M63::E13_CONST_3);
  v16->set_f_2(0x60);
  v16->set_f_13(0x6b8d3aa8b330dfd5);
  v16->set_f_14(s->substr(0, 27));
  Message2::M14::M26::M63::E14 array_1[20] = {
      Message2::M14::M26::M63::E14_CONST_2,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_4,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_3,
      Message2::M14::M26::M63::E14_CONST_1,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_2,
      Message2::M14::M26::M63::E14_CONST_1,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_2,
      Message2::M14::M26::M63::E14_CONST_3,
      Message2::M14::M26::M63::E14_CONST_1,
      Message2::M14::M26::M63::E14_CONST_5,
      Message2::M14::M26::M63::E14_CONST_2,
      Message2::M14::M26::M63::E14_CONST_4,
      Message2::M14::M26::M63::E14_CONST_4,
      Message2::M14::M26::M63::E14_CONST_5,
  };
  for (auto v : array_1) {
    v16->add_f_8(v);
  }
  v16->set_f_7(s->substr(0, 59));
  v15->set_f_0(false);
  v14->set_f_2(0xc84);
  message->set_f_28(s->substr(0, 9));
  message->set_f_21(true);
  Message2::M13* v17_0 = message->add_f_77();
  v17_0->set_f_0(0x58de9);
  Message2::M13::M31* v18 = v17_0->mutable_f_13();
  Message2::M13::M31::M35* v19 = v18->mutable_f_4();
  Message2::M13::M31::M35::M65* v20 = v19->mutable_f_3();
  v20->set_f_2(0x9b1f913a59e98b);
  v19->set_f_0(0xf29dea1);
  Message2::M13::M31::M35::M80* v21 = v19->mutable_f_8();
  v21->set_f_5(0.785045);
  v21->set_f_26(s->substr(0, 29));
  v21->set_f_16(0x5f42473439e53063);
  v21->set_f_29(0.247335);
  v21->set_f_7(0xba7a4b5);
  v21->set_f_1(Message2::M13::M31::M35::M80::E15_CONST_3);
  v21->set_f_13(0x3c01044f9b43cc7e);
  v21->set_f_12(false);
  v21->set_f_10(0x51a497097b770c2c);
  v21->set_f_30(0x1e);
  v21->add_f_2(Message2::M13::M31::M35::M80::E16_CONST_2);
  v21->set_f_3(s->substr(0, 4));
  v21->set_f_4(0x3cd1349ed53d33e3);
  v21->set_f_17(0x5f53bb02af4b5366);
  v21->set_f_20(Message2::M13::M31::M35::M80::E17_CONST_1);
  v21->set_f_0(0x140a5f7c1d87ce26);
  v21->set_f_11(false);
  v21->set_f_21(s->substr(0, 17));
  v21->set_f_15(s->substr(0, 28));
  v21->set_f_27(0x6139616314cf1572);
  v21->set_f_23(s->substr(0, 1217));
  v21->set_f_28(0x19);
  v21->set_f_19(0x76);
  v21->set_f_18(s->substr(0, 7));
  v21->set_f_9(true);
  v19->set_f_1(true);
  Message2::M13::M31::M35::M67* v22 = v19->mutable_f_5();
  Message2::M13::M31::M35::M67::M85* v23 = v22->mutable_f_9();
  v23->set_f_0(0xacad6be);
  v23->set_f_1(0x4c);
  Message2::M13::M31::M35::M67::M82* v24 = v22->mutable_f_5();
  (void)v24;  // Suppresses clang-tidy.
  Message2::M13::M31::M43* v25 = v18->mutable_f_5();
  Message2::M13::M31::M43::M78* v26 = v25->mutable_f_7();
  (void)v26;  // Suppresses clang-tidy.
  v25->set_f_0(0xe737797);
  Message2::M13::M31::M43::M75* v27 = v25->mutable_f_6();
  Message2::M13::M31::M43::M75::M92* v28_0 = v27->add_f_3();
  v28_0->set_f_0(0xef34b5b43bf9888);
  v27->set_f_1(s->substr(0, 1));
  v27->set_f_0(s->substr(0, 4));
  Message2::M13::M31::M59* v29 = v18->mutable_f_10();
  (void)v29;  // Suppresses clang-tidy.
  v17_0->set_f_1(0x2c3ff4d4493213d4);
  v17_0->set_f_4(0x177779697ff35);
  v17_0->set_f_3(0.417560);
  Message2::M13::M24* v30_0 = v17_0->add_f_11();
  (void)v30_0;  // Suppresses clang-tidy.
  v17_0->set_f_2(0x439e84acc307cc6);
  message->set_f_9(0x11a25a3b);
  message->set_f_29(0x5);
  message->set_f_23(0x223b292d6fc6f39b);
  message->set_f_3(s->substr(0, 9));
  message->set_f_6(0x26ff);
  message->set_f_26(0x63e36e031c90f624);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->add_f_25(Message2::E2_CONST_1);
  message->set_f_2(0x604a10a3a2c87c40);
  message->set_f_29(0x14c323);
  Message2::M8* v0_0 = message->add_f_67();
  v0_0->set_f_0(Message2::M8::E3_CONST_4);
  Message2::M11* v1 = message->mutable_f_73();
  v1->set_f_0(0x8b8f5e9);
  Message2::M11::M23* v2_0 = v1->add_f_4();
  Message2::M11::M23::M55* v3 = v2_0->mutable_f_3();
  v3->set_f_0(0x11);
  Message2::M11::M23::M55::M68* v4_0 = v3->add_f_4();
  Message2::M11::M23::M55::M68::M93* v5 = v4_0->mutable_f_4();
  v5->set_f_13(0x3104bb14748);
  v5->set_f_14(0x7160c9e31c0f51ea);
  v5->set_f_0(0x148d78c060b8b45d);
  v5->set_f_3(true);
  v5->set_f_6(s->substr(0, 3));
  v5->set_f_8(false);
  v5->set_f_9(0x42397af);
  v5->set_f_4(true);
  v5->set_f_10(0x2d);
  v5->set_f_5(0x39d751c85933fa48);
  v5->set_f_7(s->substr(0, 13));
  v4_0->set_f_0(0x7b);
  Message2::M11::M23::M56* v6 = v2_0->mutable_f_4();
  (void)v6;  // Suppresses clang-tidy.
  v2_0->set_f_0(0x2a96);
  message->set_f_1(0x3e);
  Message2::M10* v7 = message->mutable_f_72();
  v7->set_f_1(0x9d1117d);
  v7->set_f_0(0x14);
  Message2::M3* v8_0 = message->add_f_60();
  v8_0->set_f_0(0x6c9e6bfd2e10449b);
  message->set_f_21(true);
  Message2::M4* v9 = message->mutable_f_62();
  v9->set_f_0(s->substr(0, 20));
  message->set_f_14(0x5977557dc18aeee2);
  message->set_f_5(0.003416);
  message->set_f_16(0xf0393a3d6ab53cb);
  message->set_f_4(s->substr(0, 27));
  message->set_f_17(0x79);
  Message2::M7* v10 = message->mutable_f_66();
  v10->set_f_0(s->substr(0, 54));
  Message2::M7::M28* v11 = v10->mutable_f_6();
  v11->set_f_0(0x255e6a7977b5707a);
  v10->set_f_1(0x73d7a5cdbd017eb1);
  Message2::M7::M15* v12_0 = v10->add_f_5();
  Message2::M7::M15::M39* v13 = v12_0->mutable_f_5();
  v13->set_f_0(s->substr(0, 2));
  Message2::M7::M15::M41* v14 = v12_0->mutable_f_6();
  (void)v14;  // Suppresses clang-tidy.
  v12_0->set_f_0(s->substr(0, 7));
  Message2::M7::M15::M62* v15 = v12_0->mutable_f_8();
  v15->set_f_2(0x38a6801);
  v15->set_f_1(0x1d);
  Message2::M7::M15::M44* v16 = v12_0->mutable_f_7();
  v16->set_f_3(0x5daf1f3);
  v16->set_f_2(s->substr(0, 1));
  v16->set_f_4(0x614957a);
  v16->set_f_1(0x27e1b5c6538c2502);
  v16->set_f_0(0x33);
  Message2::M7::M15::M38* v17_0 = v12_0->add_f_4();
  v17_0->set_f_0(0.927802);
  Message2::M7::M15::M34* v18 = v12_0->mutable_f_3();
  Message2::M7::M15::M34::M76* v19 = v18->mutable_f_5();
  v19->set_f_0(0x5b723a514ae9d29c);
  Message2::M7::M15::M34::M76::M86* v20 = v19->mutable_f_3();
  Message2::M7::M15::M34::M76::M86::M95* v21 = v20->mutable_f_3();
  v21->set_f_0(0x5596efba9a7b4c53);
  Message2::M7::M15::M34::M76::M86::M96* v22_0 = v20->add_f_4();
  Message2::M7::M15::M34::M76::M86::M96::M97* v23_0 = v22_0->add_f_3();
  v23_0->set_f_0(s->substr(0, 6));
  v23_0->set_f_2(s->substr(0, 15));
  v23_0->set_f_1(0x5ea36c2393caf5ad);
  v23_0->set_f_3(s->substr(0, 47));
  v22_0->set_f_0(0x5c68940c11f5277f);
  v18->set_f_0(0x1cbf1ccaf21e89b8);
  message->set_f_13(0x684b40d1431066);
  Message2::M14* v24 = message->mutable_f_79();
  Message2::M14::M26* v25 = v24->mutable_f_8();
  v25->set_f_0(true);
  Message2::M14::M26::M63* v26 = v25->mutable_f_3();
  v26->set_f_6(0x4fe8e8b);
  v26->set_f_3(true);
  v26->set_f_12(0x13);
  v26->set_f_1(0x5fea9385e6c92fbd);
  v26->set_f_5(0xd9fe9d0);
  v26->set_f_2(0x5e3bbc1);
  v26->set_f_0(s->substr(0, 2));
  v26->set_f_13(0x730d1746d64c7eab);
  v26->set_f_10(0.272483);
  v26->set_f_7(s->substr(0, 31));
  v26->set_f_9(0x17d7259);
  v26->set_f_14(s->substr(0, 48));
  v24->set_f_2(0xd);
  v24->set_f_0(0xc1e913c);
  message->set_f_0(s->substr(0, 64));
  Message2::M2* v27_0 = message->add_f_58();
  v27_0->set_f_1(s->substr(0, 82));
  message->set_f_10(s->substr(0, 22));
  message->set_f_20(s->substr(0, 3));
  message->set_f_6(0xdaecc8e);
  Message2::M9* v28_0 = message->add_f_71();
  v28_0->set_f_0(0x64aa09e195db0036);
  Message2::M9::M21* v29 = v28_0->mutable_f_2();
  v29->set_f_2(0x24581b459988fc73);
  v29->set_f_0(false);
  message->set_f_24(s->substr(0, 7));
  message->set_f_7(s->substr(0, 20));
  message->set_f_23(0x247323d2ffba2418);
  message->set_f_22(0.039835);
  Message2::M5* v30 = message->mutable_f_63();
  Message2::M5::M17* v31 = v30->mutable_f_3();
  Message2::M5::M17::M36* v32 = v31->mutable_f_5();
  v32->set_f_0(0x4c614efb5766d83f);
  Message2::M5::M17::M52* v33 = v31->mutable_f_9();
  v33->set_f_0(0x2bc156c97b5a6cc7);
  Message2::M5::M17::M50* v34 = v31->mutable_f_6();
  v34->set_f_0(0x1);
  Message2::M5::M22* v35_0 = v30->add_f_5();
  v35_0->set_f_0(s->substr(0, 46));
  v35_0->set_f_3(s->substr(0, 31));
  v35_0->set_f_6(false);
  v35_0->set_f_1(0x1b8dd6);
  v35_0->set_f_8(0xf8e7c35970645e7);
  Message2::M5::M22::M42* v36 = v35_0->mutable_f_26();
  v36->set_f_0(0xbeb895a);
  v35_0->set_f_5(0xb6aa8727d93cfb9);
  v35_0->set_f_12(0x59);
  v35_0->set_f_10(0.405350);
  v35_0->set_f_4(s->substr(0, 7));
  v35_0->set_f_2(0.902322);
  Message2::M5::M22::M33* v37 = v35_0->mutable_f_24();
  v37->set_f_5(0x51083d4ad1761bb2);
  v37->set_f_3(0x43ca5e7b);
  v37->set_f_4(0x47);
  message->set_f_8(0xcde2131);
  message->set_f_15(0x35f6f2e345448100);
  message->set_f_9(0x7c9d30bf);
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
