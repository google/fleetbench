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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P7/request/Message1.pb.h"

namespace fleetbench::rpc::P7::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_18(0x4bc53f76bfb43ea6);
  message->set_f_2(0x44);
  message->set_f_23(0x5a81e9233bdc94a7);
  Message1::M14* v0 = message->mutable_f_80();
  v0->set_f_3(0x27f4c78fc02529f);
  v0->set_f_5(0x22ec1461347736);
  v0->set_f_2(0x4ed3f4e69b899e17);
  v0->set_f_4(0xc95dce024a05350);
  Message1::M14::M15* v1 = v0->mutable_f_14();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M14::M30* v2 = v0->mutable_f_19();
  v2->set_f_10(0.407933);
  v2->set_f_1(0xec8d7db80058b12);
  v2->set_f_3(false);
  v2->set_f_0(s->substr(0, 5));
  v2->set_f_2(s->substr(0, 89));
  Message1::M14::M30::M43* v3 = v2->mutable_f_16();
  Message1::M14::M30::M43::M64* v4_0 = v3->add_f_5();
  v4_0->set_f_1(0x6705751ba227b6b5);
  v4_0->set_f_0(0x3a);
  v3->set_f_0(0x50);
  Message1::M14::M30::M43::M61* v5_0 = v3->add_f_3();
  v5_0->set_f_0(0xdccf15233b6e3c5);
  v2->set_f_5(true);
  v2->set_f_6(s->substr(0, 4));
  v2->set_f_9(s->substr(0, 52));
  v2->set_f_7(true);
  Message1::M13* v6 = message->mutable_f_78();
  Message1::M13::M38* v7 = v6->mutable_f_9();
  v7->set_f_0(s->substr(0, 19));
  v7->set_f_1(0x3bf0b350b);
  v6->set_f_0(0x6cc9760b20056d);
  v6->set_f_2(0x9a13b);
  message->set_f_10(s->substr(0, 6));
  Message1::M5* v8 = message->mutable_f_64();
  v8->set_f_0(false);
  v8->set_f_1(false);
  Message1::M5::M42* v9 = v8->mutable_f_21();
  v9->set_f_19(0x342a290afc19dc6b);
  v9->set_f_12(true);
  v9->set_f_5(s->substr(0, 12));
  v9->set_f_11(0x3e552a32b60);
  v9->set_f_23(0x2c);
  v9->set_f_22(0x657c38f491c8953f);
  v9->set_f_9(0x5);
  v9->set_f_27(0x5c225b3a);
  v9->set_f_21(0x28131f0);
  v9->set_f_13(0x12655400fb302070);
  v9->set_f_24(Message1::M5::M42::E11_CONST_5);
  v9->set_f_2(0x4fb40b06d8e755a3);
  v9->set_f_17(0x2d03b817);
  v9->set_f_25(true);
  v9->set_f_10(s->substr(0, 4));
  v9->set_f_0(true);
  v9->set_f_7(0x8a4657271004);
  v9->set_f_20(s->substr(0, 4));
  v9->set_f_14(0x12);
  v9->set_f_3(0x6b);
  Message1::M5::M19* v10 = v8->mutable_f_19();
  v10->set_f_0(0x105780448a242b60);
  Message1::M5::M19::M59* v11 = v10->mutable_f_5();
  v11->set_f_3(0x5da8de4a);
  v11->set_f_1(0x2a84eb272117ac21);
  v11->set_f_2(0xa25eb95);
  v11->set_f_0(0x472380dc10997310);
  v8->set_f_2(0xcb3d510);
  Message1::M5::M40* v12 = v8->mutable_f_20();
  v12->set_f_0(0x4e);
  v8->set_f_10(false);
  v8->set_f_11(0x22);
  v8->set_f_7(0xeaf15f6);
  v8->set_f_3(true);
  v8->set_f_4(s->substr(0, 28));
  v8->set_f_5(s->substr(0, 4));
  message->set_f_13(s->substr(0, 11));
  message->set_f_24(s->substr(0, 23));
  message->set_f_3(false);
  Message1::M6* v13_0 = message->add_f_65();
  Message1::M6::M27* v14 = v13_0->mutable_f_7();
  v14->set_f_0(Message1::M6::M27::E6_CONST_1);
  v13_0->set_f_0(s->substr(0, 3));
  Message1::M6::M17* v15 = v13_0->mutable_f_3();
  v15->set_f_2(false);
  Message1::M6::M17::M47* v16_0 = v15->add_f_6();
  v16_0->set_f_0(s->substr(0, 17));
  message->set_f_29(0xa86d6c6);
  message->set_f_1(0x51);
  Message1::M12* v17 = message->mutable_f_77();
  Message1::M12::M28* v18_0 = v17->add_f_4();
  v18_0->set_f_0(s->substr(0, 22));
  message->set_f_27(0x272b49105e8c3c);
  message->set_f_20(0x49946042b761d614);
  message->set_f_16(0xdd871);
  message->add_f_5(Message1::E1_CONST_1);
  message->set_f_11(0x6710c87de680e927);
  message->set_f_28(s->substr(0, 13));
  message->set_f_17(0x757fb9943a04208d);
  message->set_f_21(0x245709a89794a088);
  message->set_f_0(0xeecb636);
  Message1::M7* v19 = message->mutable_f_68();
  Message1::M7::M31* v20 = v19->mutable_f_3();
  v20->set_f_2(0x66046d7a197a70bb);
  v20->set_f_0(s->substr(0, 35));
  Message1::M3* v21 = message->mutable_f_60();
  Message1::M3::M34* v22_0 = v21->add_f_5();
  v22_0->set_f_0(0x26);
  Message1::M3::M34::M52* v23 = v22_0->mutable_f_4();
  v23->set_f_0(Message1::M3::M34::M52::E12_CONST_1);
  Message1::M3::M34::M52::M70* v24_0 = v23->add_f_5();
  v24_0->add_f_0(0xf803921);
  Message1::M3::M34::M52::M70::M77* v25_0 = v24_0->add_f_4();
  (void)v25_0;  // Suppresses clang-tidy.
  Message1::M3::M34::M52::M70::M84* v26 = v24_0->mutable_f_7();
  Message1::M3::M34::M52::M70::M84::M88* v27 = v26->mutable_f_6();
  v27->set_f_0(s->substr(0, 7));
  v27->set_f_1(0x145219a862dd4bfd);
  v26->set_f_0(s->substr(0, 7));
  v26->set_f_2(0.748734);
  v26->set_f_1(0x44e703869a5230f);
  v23->set_f_1(s->substr(0, 13));
  v22_0->set_f_1(0x5d5d046f);
  v21->set_f_0(0x1283290);
  Message1::M10* v28 = message->mutable_f_72();
  v28->set_f_0(false);
  Message1::M9* v29 = message->mutable_f_71();
  (void)v29;  // Suppresses clang-tidy.
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::E1 array_0[19] = {
      Message1::E1_CONST_1, Message1::E1_CONST_4, Message1::E1_CONST_1,
      Message1::E1_CONST_5, Message1::E1_CONST_2, Message1::E1_CONST_2,
      Message1::E1_CONST_3, Message1::E1_CONST_4, Message1::E1_CONST_3,
      Message1::E1_CONST_5, Message1::E1_CONST_4, Message1::E1_CONST_2,
      Message1::E1_CONST_2, Message1::E1_CONST_3, Message1::E1_CONST_3,
      Message1::E1_CONST_5, Message1::E1_CONST_1, Message1::E1_CONST_1,
      Message1::E1_CONST_5,
  };
  for (auto v : array_0) {
    message->add_f_5(v);
  }
  message->set_f_18(0x783983111d16d050);
  Message1::M7* v0 = message->mutable_f_68();
  v0->set_f_0(false);
  Message1::M7::M36* v1 = v0->mutable_f_4();
  Message1::M7::M36::M57* v2_0 = v1->add_f_5();
  v2_0->set_f_3(s->substr(0, 64));
  v2_0->set_f_1(0.687348);
  Message1::M7::M36::M57::M62* v3 = v2_0->mutable_f_10();
  v3->set_f_0(0x6c);
  Message1::M7::M36::M57::M62::M81* v4 = v3->mutable_f_4();
  v4->set_f_0(false);
  v2_0->set_f_2(0x4e3b2e02b9618772);
  Message1::M7::M41* v5 = v0->mutable_f_5();
  v5->set_f_1(false);
  v5->set_f_2(0x7f5ce03f3);
  v5->set_f_0(true);
  v0->set_f_1(0.022718);
  message->set_f_29(0x47);
  message->set_f_24(s->substr(0, 64));
  message->set_f_8(false);
  Message1::M11* v6 = message->mutable_f_74();
  Message1::M11::M18* v7_0 = v6->add_f_3();
  v7_0->set_f_0(s->substr(0, 17));
  Message1::M11::M18::M53* v8 = v7_0->mutable_f_4();
  v8->set_f_0(0xae2174fb448c258);
  v8->set_f_2(0x39);
  v8->set_f_1(true);
  Message1::M11::M18::M60* v9_0 = v7_0->add_f_6();
  v9_0->set_f_0(s->substr(0, 12));
  v6->set_f_0(s->substr(0, 135));
  message->set_f_26(0x746c248a);
  Message1::M8* v10 = message->mutable_f_70();
  Message1::M8::M37* v11 = v10->mutable_f_3();
  (void)v11;  // Suppresses clang-tidy.
  Message1::M8::M39* v12 = v10->mutable_f_4();
  (void)v12;  // Suppresses clang-tidy.
  message->set_f_20(0x336479e6fd898f97);
  message->set_f_22(0x5c);
  message->set_f_25(0x17cf2cab31eb73b1);
  message->set_f_1(0x9904d8);
  message->set_f_6(0x496595a221d29268);
  Message1::M13* v13 = message->mutable_f_78();
  v13->set_f_1(0x3e632ddbc103ad20);
  Message1::M13::M38* v14 = v13->mutable_f_9();
  v14->set_f_1(0xdb2544ee855e);
  v14->set_f_0(s->substr(0, 2));
  Message1::M3* v15 = message->mutable_f_60();
  Message1::M3::M34* v16_0 = v15->add_f_5();
  v16_0->set_f_1(0x78ae3e09);
  Message1::M3::M34::M52* v17 = v16_0->mutable_f_4();
  Message1::M3::M34::M52::M70* v18_0 = v17->add_f_5();
  v18_0->add_f_0(0x92251);
  Message1::M3::M34::M52::M70::M84* v19 = v18_0->mutable_f_7();
  v19->set_f_1(0x4b184970b95aae5d);
  v19->set_f_2(0.256947);
  Message1::M3::M34::M52::M70::M84::M88* v20 = v19->mutable_f_6();
  v20->set_f_0(s->substr(0, 3));
  Message1::M3::M34::M52::M70::M77* v21_0 = v18_0->add_f_4();
  v21_0->set_f_0(s->substr(0, 8));
  v17->set_f_0(Message1::M3::M34::M52::E12_CONST_5);
  v17->set_f_1(s->substr(0, 5));
  Message1::M3::M32* v22 = v15->mutable_f_3();
  v22->set_f_0(0x2b4);
  v15->set_f_0(0x70);
  Message1::M10* v23 = message->mutable_f_72();
  (void)v23;  // Suppresses clang-tidy.
  message->set_f_27(0x7a9b40a6f);
  message->set_f_11(0x7e3bcc7c3e777a6d);
  message->set_f_2(0x59);
  message->set_f_16(0x3a46);
  Message1::M4* v24 = message->mutable_f_62();
  Message1::M4::M16* v25 = v24->mutable_f_4();
  Message1::M4::M16::M55* v26 = v25->mutable_f_6();
  v26->set_f_0(s->substr(0, 3));
  v25->set_f_0(0x601bc61728d34bcd);
  v25->set_f_1(true);
  v24->set_f_0(s->substr(0, 5));
  Message1::M4::M24* v27 = v24->mutable_f_5();
  v27->set_f_0(0x90242d3);
  message->set_f_10(s->substr(0, 110));
  message->set_f_21(0x6165728b0db2a619);
  message->set_f_15(0x46403f83a408d12e);
  message->set_f_7(s->substr(0, 2));
  message->set_f_19(0xb072c5e);
  Message1::M6* v28_0 = message->add_f_65();
  Message1::M6::M27* v29 = v28_0->mutable_f_7();
  (void)v29;  // Suppresses clang-tidy.
  Message1::M6::M26* v30 = v28_0->mutable_f_5();
  v30->set_f_2(0x251f90e7);
  v30->set_f_4(true);
  message->set_f_14(0x112f65a8e86de01c);
  message->set_f_9(0x63623a17ce1c3ffa);
  Message1::M14* v31 = message->mutable_f_80();
  v31->set_f_3(0x13bf119c5e8d0f57);
  v31->add_f_1(Message1::M14::E3_CONST_5);
  Message1::M14::M15* v32 = v31->mutable_f_14();
  v32->set_f_0(0x4a9bb696304faacf);
  v31->set_f_0(s->substr(0, 60));
  Message1::M14::M30* v33 = v31->mutable_f_19();
  v33->set_f_6(s->substr(0, 34));
  v33->set_f_4(0x2dffbf2d);
  v33->set_f_9(s->substr(0, 14));
  v33->set_f_0(s->substr(0, 28));
  Message1::M14::M30::M43* v34 = v33->mutable_f_16();
  Message1::M14::M30::M43::M64* v35_0 = v34->add_f_5();
  v35_0->set_f_2(0x79911f5bfa29ebc3);
  v35_0->set_f_1(0x486dfb78d993c54d);
  v35_0->set_f_0(0x73);
  v34->set_f_0(0xcb78119);
  v33->set_f_10(0.435013);
  v33->set_f_5(false);
  Message1::M5* v36 = message->mutable_f_64();
  v36->add_f_8(Message1::M5::E2_CONST_5);
  v36->set_f_0(true);
  v36->set_f_4(s->substr(0, 6));
  Message1::M5::M40* v37 = v36->mutable_f_20();
  Message1::M5::M40::M50* v38 = v37->mutable_f_5();
  Message1::M5::M40::M50::M65* v39 = v38->mutable_f_4();
  v39->set_f_0(0x21);
  v39->set_f_1(0x51f680c4426bf830);
  v38->set_f_0(0x7e05b0de30b52da3);
  v37->set_f_0(0x3be8);
  v36->set_f_2(0xf66f924);
  v36->set_f_9(0x3c83079759143f0e);
  Message1::M5::M19* v40 = v36->mutable_f_19();
  Message1::M5::M19::M59* v41 = v40->mutable_f_5();
  Message1::M5::M19::M59::M72* v42 = v41->mutable_f_9();
  v42->set_f_0(0x250cb89c);
  v42->set_f_1(0x7bbb617890b576b);
  v41->set_f_2(0x6e);
  v41->set_f_0(0x15a42e2c1d889858);
  v41->set_f_1(0x118491860de8e1e9);
  v41->set_f_3(0x6a230947);
  v36->set_f_6(s->substr(0, 26));
  v36->set_f_11(0x1f);
  Message1::M5::M42* v43 = v36->mutable_f_21();
  v43->set_f_10(s->substr(0, 17));
  v43->set_f_7(0x9700e43ff96ecb);
  v43->set_f_19(0x6cd0ef97b992c183);
  v43->set_f_24(Message1::M5::M42::E11_CONST_4);
  v43->set_f_17(0x1ee802b3);
  v43->set_f_21(0x73a9e);
  v43->set_f_14(0xc4820);
  v43->set_f_11(0xd9c25defc0437c);
  v43->set_f_22(0x53dbc61fe982c5fe);
  v43->set_f_5(s->substr(0, 17));
  v43->set_f_20(s->substr(0, 52));
  v43->set_f_8(s->substr(0, 19));
  v43->set_f_16(0x7df3cf990b9ebfc6);
  v43->set_f_12(true);
  v43->set_f_25(false);
  Message1::M5::M42::M46* v44 = v43->mutable_f_49();
  Message1::M5::M42::M46::M66* v45 = v44->mutable_f_4();
  v45->set_f_2(0x5ca4a8428c8470e7);
  v45->set_f_4(0x4457025cad62ca01);
  v45->set_f_3(0x54f4d97f0154f9b8);
  Message1::M5::M42::M46::M67* v46 = v44->mutable_f_5();
  v46->set_f_0(s->substr(0, 30));
  v44->set_f_0(s->substr(0, 3));
  v43->set_f_6(s->substr(0, 19));
  v43->set_f_4(0x585e311e);
  v43->set_f_13(0x39dca3df70584c42);
  v43->set_f_15(0x526bb);
  Message1::M1* v47 = message->mutable_f_56();
  v47->set_f_2(0x6fddd4f36ce66267);
  Message1::M1::M22* v48_0 = v47->add_f_8();
  v48_0->set_f_0(0x17e3be);
  v47->set_f_1(0x6);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_7(s->substr(0, 22));
  Message1::M4* v0 = message->mutable_f_62();
  Message1::M4::M35* v1 = v0->mutable_f_8();
  v1->set_f_4(0xd0c2e7db6aeb5f2);
  v1->set_f_11(0x62);
  v1->set_f_13(Message1::M4::M35::E10_CONST_2);
  v1->set_f_12(0x1a);
  v1->set_f_7(s->substr(0, 26));
  v1->set_f_5(s->substr(0, 22));
  v1->set_f_1(0x1de15fc3);
  Message1::M4::M35::E9 array_0[21] = {
      Message1::M4::M35::E9_CONST_4, Message1::M4::M35::E9_CONST_2,
      Message1::M4::M35::E9_CONST_2, Message1::M4::M35::E9_CONST_2,
      Message1::M4::M35::E9_CONST_3, Message1::M4::M35::E9_CONST_2,
      Message1::M4::M35::E9_CONST_2, Message1::M4::M35::E9_CONST_4,
      Message1::M4::M35::E9_CONST_4, Message1::M4::M35::E9_CONST_4,
      Message1::M4::M35::E9_CONST_1, Message1::M4::M35::E9_CONST_2,
      Message1::M4::M35::E9_CONST_4, Message1::M4::M35::E9_CONST_5,
      Message1::M4::M35::E9_CONST_1, Message1::M4::M35::E9_CONST_2,
      Message1::M4::M35::E9_CONST_5, Message1::M4::M35::E9_CONST_3,
      Message1::M4::M35::E9_CONST_2, Message1::M4::M35::E9_CONST_2,
      Message1::M4::M35::E9_CONST_1,
  };
  for (auto v : array_0) {
    v1->add_f_6(v);
  }
  v1->set_f_3(0x7e2596099e52c6d7);
  Message1::M4::M33* v2_0 = v0->add_f_7();
  Message1::M4::M33::M54* v3_0 = v2_0->add_f_5();
  v3_0->set_f_0(0x6d022b9);
  Message1::M4::M33::M54::M63* v4 = v3_0->mutable_f_3();
  v4->set_f_2(s->substr(0, 5));
  v4->set_f_3(0x2d529caeeab0b390);
  v4->set_f_0(0x4f24c8fab08494f);
  Message1::M4::M16* v5 = v0->mutable_f_4();
  v5->set_f_0(0x50bd42051ebcfcdb);
  Message1::M4::M16::M55* v6 = v5->mutable_f_6();
  (void)v6;  // Suppresses clang-tidy.
  Message1::M4::M24* v7 = v0->mutable_f_5();
  v7->set_f_0(0x17);
  message->set_f_26(0x58719688);
  Message1::M13* v8 = message->mutable_f_78();
  v8->set_f_0(0x291abb43088);
  Message1::M13::M38* v9 = v8->mutable_f_9();
  v9->set_f_1(0x5720c8d2768b0e);
  v9->set_f_0(s->substr(0, 22));
  v8->set_f_2(0x17321e);
  message->set_f_3(true);
  message->set_f_25(0x1e3ab981ad5b5f78);
  Message1::M5* v10 = message->mutable_f_64();
  v10->set_f_10(false);
  v10->set_f_7(0xcef07);
  Message1::M5::M42* v11 = v10->mutable_f_21();
  v11->set_f_13(0x470dcd2fb4220caf);
  v11->set_f_24(Message1::M5::M42::E11_CONST_1);
  v11->set_f_26(0x78);
  v11->set_f_6(s->substr(0, 5));
  v11->set_f_8(s->substr(0, 13));
  v11->set_f_25(false);
  v11->set_f_12(true);
  v11->set_f_21(0x79);
  v11->set_f_0(false);
  v11->set_f_18(0x4d);
  v11->set_f_1(0xe);
  v11->set_f_4(0x1dd71598);
  v11->set_f_23(0x78);
  v11->set_f_15(0x6d82f1f);
  v11->set_f_11(0x19e265f650f458);
  v11->set_f_20(s->substr(0, 7));
  v11->set_f_10(s->substr(0, 1));
  v10->set_f_11(0x78);
  v10->set_f_1(true);
  v10->set_f_6(s->substr(0, 8));
  v10->set_f_9(0x3beadb7a81271366);
  v10->set_f_4(s->substr(0, 27));
  Message1::M5::M40* v12 = v10->mutable_f_20();
  v12->set_f_0(0xd16);
  Message1::M5::M40::M50* v13 = v12->mutable_f_5();
  Message1::M5::M40::M50::M65* v14 = v13->mutable_f_4();
  v14->set_f_0(0x3e48);
  Message1::M5::M40::M50::M65::M83* v15 = v14->mutable_f_5();
  v15->set_f_0(s->substr(0, 33));
  v14->set_f_1(0x3599d30f0adc493a);
  v13->set_f_0(0x6e656a6abca5b594);
  Message1::M5::M40::M49* v16 = v12->mutable_f_3();
  v16->set_f_14(0x466);
  v16->set_f_0(s->substr(0, 26));
  v16->set_f_4(s->substr(0, 7));
  v16->set_f_10(true);
  v16->set_f_1(0x6dd1486047a84401);
  v16->set_f_6(0x1e23aee);
  v16->set_f_9(0x7e9030ccedd66a5b);
  v16->set_f_2(true);
  v16->set_f_12(s->substr(0, 29));
  Message1::M5::M40::M49::M73* v17 = v16->mutable_f_26();
  Message1::M5::M40::M49::M73::M78* v18 = v17->mutable_f_7();
  (void)v18;  // Suppresses clang-tidy.
  v16->set_f_11(s->substr(0, 121));
  v16->set_f_8(0.161163);
  v16->set_f_7(0x6de61425834b70a9);
  v10->set_f_3(false);
  v10->set_f_0(true);
  message->set_f_10(s->substr(0, 8));
  Message1::M2* v19 = message->mutable_f_57();
  v19->set_f_0(0x85d7f);
  message->set_f_6(0x19c874fd6825e4af);
  message->set_f_11(0x21b863025fc40947);
  message->set_f_1(0x24e72f5);
  Message1::M8* v20 = message->mutable_f_70();
  v20->set_f_0(0x40d1769bc99941fb);
  Message1::M8::M39* v21 = v20->mutable_f_4();
  v21->set_f_0(0x28553288469f475d);
  Message1::M8::M37* v22 = v20->mutable_f_3();
  Message1::M8::M37::M44* v23_0 = v22->add_f_2();
  v23_0->set_f_0(s->substr(0, 11));
  Message1::M8::M37::M44::M74* v24_0 = v23_0->add_f_4();
  v24_0->set_f_2(0x6e);
  v24_0->set_f_18(0x44da76822c1363);
  v24_0->set_f_16(0xaf1b9);
  v24_0->set_f_6(0x49e63535efd5765);
  v24_0->set_f_29(s->substr(0, 23));
  v24_0->set_f_23(0x41052eea13912787);
  v24_0->set_f_20(true);
  v24_0->set_f_24(s->substr(0, 30));
  v24_0->set_f_25(0x1d4186ad7ea2a6e9);
  v24_0->set_f_9(0.622135);
  v24_0->set_f_26(0xd1dbda40169b34d);
  v24_0->set_f_21(0x56b3d408);
  v24_0->set_f_14(0.323332);
  v24_0->set_f_3(false);
  v24_0->set_f_22(0x46);
  v24_0->set_f_27(0x73);
  v24_0->set_f_5(s->substr(0, 23));
  message->set_f_4(0xa2d92);
  message->set_f_27(0x21dbfeed3);
  message->set_f_28(s->substr(0, 7));
  message->set_f_14(0x4fa1a4a36192570b);
  message->set_f_17(0x1a7996271be64c18);
  message->set_f_0(0x58);
  message->set_f_9(0x52967d261161da3);
  Message1::M7* v25 = message->mutable_f_68();
  Message1::M7::M36* v26 = v25->mutable_f_4();
  Message1::M7::M36::M57* v27_0 = v26->add_f_5();
  v27_0->set_f_0(0x51d9cb51d2d6d298);
  Message1::M7::M36::M57::M62* v28 = v27_0->mutable_f_10();
  v28->set_f_0(0x2cf57cc);
  v27_0->set_f_1(0.808639);
  v26->set_f_0(0x1e757c39);
  v25->set_f_1(0.034049);
  Message1::M7::M31* v29 = v25->mutable_f_3();
  v29->set_f_1(0x34);
  v29->set_f_2(0x199c858972e8c27a);
  v29->set_f_0(s->substr(0, 32));
  v25->set_f_0(false);
  Message1::M7::M41* v30 = v25->mutable_f_5();
  v30->set_f_0(true);
  v30->set_f_3(0x295178592e995806);
  Message1::M6* v31_0 = message->add_f_65();
  v31_0->set_f_0(s->substr(0, 47));
  Message1::M6::M26* v32 = v31_0->mutable_f_5();
  v32->set_f_0(0x7c);
  v32->set_f_4(true);
  v32->set_f_3(0x61);
  v32->set_f_2(0x7b9e504f);
  v32->set_f_1(0xe837f9bd27f67d5);
  Message1::M6::M27* v33 = v31_0->mutable_f_7();
  (void)v33;  // Suppresses clang-tidy.
  message->set_f_21(0x6deef9e85db40d0a);
  Message1::M12* v34 = message->mutable_f_77();
  v34->set_f_0(0x8);
  message->set_f_22(0xc7acc8cd407aba);
  message->set_f_8(false);
  message->set_f_18(0x1a7ab86dd944e931);
  message->add_f_5(Message1::E1_CONST_1);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_27(0x2a6c0b256326d6);
  message->set_f_3(true);
  Message1::M3* v0 = message->mutable_f_60();
  v0->set_f_0(0x77);
  Message1::M3::M32* v1 = v0->mutable_f_3();
  (void)v1;  // Suppresses clang-tidy.
  Message1::M2* v2 = message->mutable_f_57();
  v2->set_f_0(0x40);
  Message1::M10* v3 = message->mutable_f_72();
  Message1::M10::M23* v4 = v3->mutable_f_3();
  v4->set_f_6(0x162f0f7d2b427);
  v4->set_f_5(s->substr(0, 25));
  v4->set_f_3(s->substr(0, 32));
  v4->set_f_2(0x2b75fd237efe1a3c);
  v4->add_f_7(Message1::M10::M23::E5_CONST_1);
  v4->set_f_4(0x20131647ca81829);
  message->set_f_28(s->substr(0, 4));
  Message1::M6* v5_0 = message->add_f_65();
  Message1::M6::M26* v6 = v5_0->mutable_f_5();
  v6->set_f_0(0x1e6c5f2);
  v6->set_f_1(0x53c3c1b755327b4f);
  v6->set_f_3(0x6563775);
  v5_0->set_f_0(s->substr(0, 22));
  Message1::M6::M17* v7 = v5_0->mutable_f_3();
  v7->set_f_1(0x469cabc194ce55c);
  v7->set_f_3(s->substr(0, 56));
  Message1::M6::M27* v8 = v5_0->mutable_f_7();
  v8->set_f_0(Message1::M6::M27::E6_CONST_5);
  message->set_f_4(0x12);
  message->set_f_19(0xe505686);
  Message1::M14* v9 = message->mutable_f_80();
  v9->set_f_0(s->substr(0, 32));
  v9->set_f_3(0x479e2540a9395166);
  Message1::M14::M30* v10 = v9->mutable_f_19();
  v10->set_f_1(0x16bc880eac439359);
  v10->set_f_3(false);
  Message1::M14::M30::M43* v11 = v10->mutable_f_16();
  Message1::M14::M30::M43::M61* v12_0 = v11->add_f_3();
  v12_0->set_f_0(0x4ec85f838fdfa256);
  v11->set_f_0(0x73);
  v10->set_f_5(false);
  v10->set_f_7(false);
  v10->set_f_9(s->substr(0, 3));
  v10->set_f_4(0x392f89c8);
  v10->set_f_8(Message1::M14::M30::E7_CONST_4);
  v9->set_f_2(0x42242b2a753868c8);
  Message1::M14::M29* v13 = v9->mutable_f_16();
  (void)v13;  // Suppresses clang-tidy.
  Message1::M14::M15* v14 = v9->mutable_f_14();
  v14->set_f_0(0x48c521cca984eefa);
  v9->add_f_1(Message1::M14::E3_CONST_2);
  Message1::M7* v15 = message->mutable_f_68();
  v15->set_f_1(0.659064);
  Message1::M7::M36* v16 = v15->mutable_f_4();
  v16->set_f_1(s->substr(0, 8));
  Message1::M7::M36::M57* v17_0 = v16->add_f_5();
  v17_0->set_f_2(0x57349c815778dd81);
  v17_0->set_f_0(0x12d7384150ed2a71);
  Message1::M7::M36::M57::M62* v18 = v17_0->mutable_f_10();
  Message1::M7::M36::M57::M62::M81* v19 = v18->mutable_f_4();
  (void)v19;  // Suppresses clang-tidy.
  v17_0->set_f_1(0.803241);
  v17_0->set_f_3(s->substr(0, 9));
  v15->set_f_0(false);
  Message1::M7::M41* v20 = v15->mutable_f_5();
  v20->set_f_0(false);
  v20->set_f_3(0x276a4ef164c6a1a4);
  message->set_f_24(s->substr(0, 7));
  Message1::M9* v21 = message->mutable_f_71();
  v21->set_f_0(s->substr(0, 32));
  message->set_f_9(0x4688d25fdc341dea);
  message->set_f_22(0xb9e640495f8bd2);
  message->set_f_18(0x1e79ca3e3f188037);
  message->set_f_23(0x60589ae0446b998f);
  message->set_f_13(s->substr(0, 1));
  message->set_f_8(true);
  Message1::M12* v22 = message->mutable_f_77();
  Message1::M12::M28* v23_0 = v22->add_f_4();
  v23_0->set_f_0(s->substr(0, 10));
  message->set_f_16(0x45);
  Message1::M5* v24 = message->mutable_f_64();
  Message1::M5::M40* v25 = v24->mutable_f_20();
  Message1::M5::M40::M50* v26 = v25->mutable_f_5();
  Message1::M5::M40::M50::M65* v27 = v26->mutable_f_4();
  v27->set_f_1(0x4b591619661a43b4);
  Message1::M5::M40::M49* v28 = v25->mutable_f_3();
  v28->set_f_0(s->substr(0, 37));
  v28->set_f_1(0x356fabda2269a76c);
  v28->set_f_9(0x1cfae7a5bed041da);
  v28->set_f_5(0x6a7d843);
  v28->set_f_4(s->substr(0, 31));
  v28->set_f_8(0.111855);
  v28->set_f_10(false);
  v28->set_f_3(0x1be2bd219b38e483);
  v28->set_f_2(false);
  v28->set_f_7(0x41e5eaaa5ff3cbb5);
  Message1::M5::M40::M49::M73* v29 = v28->mutable_f_26();
  Message1::M5::M40::M49::M73::M78* v30 = v29->mutable_f_7();
  v30->set_f_0(0x33da02f188ba4709);
  v29->set_f_1(0x5e6a6927da987271);
  v28->set_f_6(0x4e);
  Message1::M5::M40::M49::M71* v31_0 = v28->add_f_25();
  (void)v31_0;  // Suppresses clang-tidy.
  v24->set_f_6(s->substr(0, 5));
  v24->set_f_4(s->substr(0, 21));
  v24->add_f_8(Message1::M5::E2_CONST_1);
  v24->add_f_8(Message1::M5::E2_CONST_3);
  v24->set_f_3(false);
  Message1::M5::M19* v32 = v24->mutable_f_19();
  v32->set_f_0(0x2e963d77989c3bec);
  Message1::M5::M42* v33 = v24->mutable_f_21();
  v33->set_f_2(0x1ad3f7f75284f3f9);
  Message1::M5::M42::M46* v34 = v33->mutable_f_49();
  Message1::M5::M42::M46::M67* v35 = v34->mutable_f_5();
  v35->set_f_0(s->substr(0, 1));
  Message1::M5::M42::M46::M66* v36 = v34->mutable_f_4();
  v36->set_f_5(s->substr(0, 6));
  v36->set_f_3(0x6e65d145cff8c413);
  v36->set_f_4(0x6f9761161bbfa4bc);
  v36->set_f_1(s->substr(0, 18));
  v36->set_f_0(0x79f40ef);
  v36->set_f_2(0x51561068ed3f9862);
  v33->set_f_4(0x4a9b2447);
  v33->set_f_12(true);
  v33->set_f_25(false);
  v33->set_f_14(0x121d);
  v33->set_f_10(s->substr(0, 8));
  v33->set_f_19(0x68a282ce6613908f);
  v33->set_f_21(0x6d);
  v33->set_f_13(0x16b06cc8b9450554);
  v33->set_f_20(s->substr(0, 15));
  v33->set_f_11(0x7141e51e3);
  v33->set_f_5(s->substr(0, 8));
  v33->set_f_22(0x262406337b802a7e);
  v33->set_f_24(Message1::M5::M42::E11_CONST_4);
  v33->set_f_7(0x14249a7ec7219);
  v33->set_f_26(0x60);
  v33->set_f_3(0x5fbf41c);
  v24->set_f_12(0x4e1c7569);
  v24->set_f_2(0x4d19789);
  v24->set_f_9(0x686c8bffb816f15d);
  v24->set_f_0(false);
  v24->set_f_1(true);
  message->set_f_1(0x36);
  message->set_f_25(0x50ade13dd689cce3);
  Message1::M8* v37 = message->mutable_f_70();
  Message1::M8::M39* v38 = v37->mutable_f_4();
  (void)v38;  // Suppresses clang-tidy.
  v37->set_f_0(0x69712e0141ca719d);
  Message1::M8::M37* v39 = v37->mutable_f_3();
  Message1::M8::M37::M44* v40_0 = v39->add_f_2();
  v40_0->set_f_0(s->substr(0, 6));
  v39->set_f_0(s->substr(0, 3));
  message->set_f_29(0x44);
  message->set_f_2(0x3e);
  message->set_f_11(0x50ec4ba46e7781db);
  message->add_f_5(Message1::E1_CONST_4);
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
}  // namespace fleetbench::rpc::P7::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P7_REQUEST_ACCESS_MESSAGE1_H_
