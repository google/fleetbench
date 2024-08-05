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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/request/Message2.pb.h"

namespace fleetbench::rpc::P6::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_13(0x7569447880d691a9);
  Message2::E5 array_1[11] = {
      Message2::E5_CONST_3, Message2::E5_CONST_1, Message2::E5_CONST_1,
      Message2::E5_CONST_2, Message2::E5_CONST_4, Message2::E5_CONST_3,
      Message2::E5_CONST_5, Message2::E5_CONST_5, Message2::E5_CONST_2,
      Message2::E5_CONST_1, Message2::E5_CONST_5,
  };
  for (auto v : array_1) {
    message->add_f_21(v);
  }
  message->set_f_15(s->substr(0, 6));
  message->set_f_18(0x316fb22c07e8d696);
  message->set_f_8(true);
  message->set_f_10(0x1168);
  message->set_f_22(0x39ed);
  Message2::M1* v0 = message->mutable_f_52();
  Message2::M1::M14* v1 = v0->mutable_f_2();
  v1->set_f_0(s->substr(0, 317));
  v0->set_f_0(0.535564);
  Message2::M1::M20* v2_0 = v0->add_f_7();
  v2_0->set_f_1(s->substr(0, 4));
  Message2::M1::M19* v3_0 = v0->add_f_5();
  Message2::M1::M19::M38* v4_0 = v3_0->add_f_5();
  v4_0->set_f_0(true);
  Message2::M1::M19::M38::M49* v5_0 = v4_0->add_f_14();
  v5_0->set_f_0(s->substr(0, 28));
  v4_0->set_f_2(s->substr(0, 16));
  v4_0->set_f_4(0x3284);
  v4_0->set_f_1(Message2::M1::M19::M38::E24_CONST_3);
  v3_0->set_f_1(0x5046649fc93a65cd);
  Message2::M10* v6 = message->mutable_f_66();
  Message2::M10::M32* v7 = v6->mutable_f_6();
  v7->set_f_0(0x1d3652ec5871b75);
  Message2::M10::M21* v8_0 = v6->add_f_5();
  Message2::M10::M21::M42* v9 = v8_0->mutable_f_3();
  (void)v9;  // Suppresses clang-tidy.
  v8_0->set_f_0(s->substr(0, 21));
  v6->set_f_0(Message2::M10::E10_CONST_1);
  Message2::M12* v10_0 = message->add_f_68();
  Message2::M12::M22* v11 = v10_0->mutable_f_5();
  v11->set_f_2(0x2851d6d259f11220);
  v11->set_f_0(s->substr(0, 13));
  v11->set_f_1(s->substr(0, 19));
  v11->set_f_3(0xf6b66cc2);
  message->set_f_11(false);
  message->set_f_27(true);
  message->set_f_16(0x2d39a12f3672e2e5);
  message->add_f_14(Message2::E4_CONST_5);
  message->add_f_14(Message2::E4_CONST_5);
  message->add_f_14(Message2::E4_CONST_5);
  Message2::M4* v12 = message->mutable_f_57();
  v12->add_f_0(Message2::M4::E8_CONST_3);
  v12->add_f_0(Message2::M4::E8_CONST_2);
  message->set_f_9(0x510707486b0c60e1);
  message->set_f_1(0x12bc9a);
  message->set_f_29(s->substr(0, 1386));
  message->set_f_0(Message2::E1_CONST_5);
  message->set_f_19(0x4a723d5a75b87e29);
  Message2::M6* v13_0 = message->add_f_62();
  v13_0->set_f_5(Message2::M6::E9_CONST_5);
  v13_0->set_f_4(0x862e1);
  v13_0->set_f_7(0x16941cb6);
  v13_0->set_f_1(0x7fe814c4885502fe);
  v13_0->set_f_8(0x1a0d2cae8d7fb7b2);
  v13_0->set_f_0(0x2d0165020bd0932b);
  v13_0->set_f_2(true);
  message->set_f_5(Message2::E3_CONST_2);
  message->set_f_23(s->substr(0, 20));
  Message2::M13* v14 = message->mutable_f_69();
  v14->set_f_14(0.457019);
  v14->set_f_2(false);
  v14->set_f_16(0.191492);
  v14->set_f_12(false);
  v14->set_f_6(0xbc4543a982a9ccb);
  v14->set_f_11(s->substr(0, 18));
  v14->set_f_8(Message2::M13::E11_CONST_4);
  v14->set_f_4(0x20a4e6b044d5394);
  v14->set_f_19(true);
  v14->set_f_27(s->substr(0, 4));
  Message2::M13::M24* v15 = v14->mutable_f_39();
  v15->set_f_0(false);
  v14->set_f_23(0xb031c2585feef90);
  v14->set_f_25(0x7a6855d1a48b5614);
  v14->set_f_5(0x45f1b72842fbe79f);
  v14->set_f_10(Message2::M13::E12_CONST_5);
  v14->set_f_29(0x729efdc7a0f4f92b);
  v14->set_f_18(0x1546);
  v14->set_f_7(0.136047);
  v14->set_f_26(0x62);
  v14->add_f_24(Message2::M13::E15_CONST_1);
  v14->add_f_24(Message2::M13::E15_CONST_4);
  Message2::M13::E13 array_2[21] = {
      Message2::M13::E13_CONST_4, Message2::M13::E13_CONST_2,
      Message2::M13::E13_CONST_5, Message2::M13::E13_CONST_3,
      Message2::M13::E13_CONST_3, Message2::M13::E13_CONST_5,
      Message2::M13::E13_CONST_3, Message2::M13::E13_CONST_2,
      Message2::M13::E13_CONST_4, Message2::M13::E13_CONST_4,
      Message2::M13::E13_CONST_5, Message2::M13::E13_CONST_2,
      Message2::M13::E13_CONST_5, Message2::M13::E13_CONST_1,
      Message2::M13::E13_CONST_1, Message2::M13::E13_CONST_1,
      Message2::M13::E13_CONST_5, Message2::M13::E13_CONST_2,
      Message2::M13::E13_CONST_2, Message2::M13::E13_CONST_5,
      Message2::M13::E13_CONST_4,
  };
  for (auto v : array_2) {
    v14->add_f_13(v);
  }
  v14->set_f_15(0x50);
  v14->set_f_22(true);
  v14->set_f_9(s->substr(0, 30));
  v14->set_f_21(0xba971ca);
  message->set_f_24(0x33);
  Message2::M7* v16 = message->mutable_f_63();
  Message2::M7::M18* v17 = v16->mutable_f_6();
  v17->set_f_3(false);
  v17->set_f_2(0x4f2bc906f79d454c);
  v17->set_f_0(0x5cbb3db6899552ee);
  Message2::M7::M18::E17 array_3[22] = {
      Message2::M7::M18::E17_CONST_1, Message2::M7::M18::E17_CONST_3,
      Message2::M7::M18::E17_CONST_5, Message2::M7::M18::E17_CONST_4,
      Message2::M7::M18::E17_CONST_2, Message2::M7::M18::E17_CONST_3,
      Message2::M7::M18::E17_CONST_5, Message2::M7::M18::E17_CONST_3,
      Message2::M7::M18::E17_CONST_5, Message2::M7::M18::E17_CONST_1,
      Message2::M7::M18::E17_CONST_4, Message2::M7::M18::E17_CONST_2,
      Message2::M7::M18::E17_CONST_2, Message2::M7::M18::E17_CONST_4,
      Message2::M7::M18::E17_CONST_2, Message2::M7::M18::E17_CONST_2,
      Message2::M7::M18::E17_CONST_4, Message2::M7::M18::E17_CONST_2,
      Message2::M7::M18::E17_CONST_4, Message2::M7::M18::E17_CONST_4,
      Message2::M7::M18::E17_CONST_2, Message2::M7::M18::E17_CONST_1,
  };
  for (auto v : array_3) {
    v17->add_f_1(v);
  }
  Message2::M7::M33* v18 = v16->mutable_f_7();
  v18->set_f_3(true);
  v18->set_f_0(0x4cf821cfb30deff3);
  v18->set_f_4(0x13);
  message->set_f_17(true);
  Message2::M11* v19 = message->mutable_f_67();
  v19->set_f_5(0xa2fbc98);
  Message2::M11::M28* v20_0 = v19->add_f_12();
  v20_0->set_f_25(0x98e7155fdc);
  Message2::M11::M28::E19 array_4[10] = {
      Message2::M11::M28::E19_CONST_1, Message2::M11::M28::E19_CONST_2,
      Message2::M11::M28::E19_CONST_1, Message2::M11::M28::E19_CONST_3,
      Message2::M11::M28::E19_CONST_4, Message2::M11::M28::E19_CONST_3,
      Message2::M11::M28::E19_CONST_4, Message2::M11::M28::E19_CONST_2,
      Message2::M11::M28::E19_CONST_4, Message2::M11::M28::E19_CONST_5,
  };
  for (auto v : array_4) {
    v20_0->add_f_12(v);
  }
  v20_0->set_f_8(0x5b);
  v20_0->set_f_24(0x7b);
  v20_0->set_f_18(0x42);
  v20_0->set_f_21(s->substr(0, 512));
  v20_0->set_f_13(0x4c);
  v20_0->set_f_3(true);
  v20_0->set_f_1(0x7b61234c);
  v20_0->set_f_11(Message2::M11::M28::E18_CONST_2);
  v20_0->set_f_6(s->substr(0, 21));
  v20_0->set_f_19(0xaee0a4b312);
  v20_0->set_f_0(0x13640ef683f0b04d);
  v20_0->set_f_5(0x72035a3e9);
  v20_0->set_f_9(0x18e3f3);
  v20_0->set_f_20(s->substr(0, 6));
  v20_0->set_f_7(s->substr(0, 24));
  v20_0->set_f_26(Message2::M11::M28::E21_CONST_5);
  v20_0->set_f_14(0x7);
  v20_0->set_f_17(true);
  v20_0->set_f_16(0.721548);
  v19->set_f_2(true);
  v19->set_f_0(s->substr(0, 477));
  message->add_f_26(Message2::E6_CONST_3);
  message->set_f_2(0x8998dcc);
  message->set_f_7(0x24e7a1ecd60868e3);
  message->set_f_20(s->substr(0, 274));
  message->set_f_3(Message2::E2_CONST_4);
  Message2::M5* v21_0 = message->add_f_58();
  v21_0->set_f_0(s->substr(0, 2));
  Message2::M5::M31* v22 = v21_0->mutable_f_3();
  v22->set_f_2(0x730c995176508e89);
  v22->set_f_7(0x189b81);
  v22->set_f_5(s->substr(0, 10));
  v22->set_f_1(Message2::M5::M31::E22_CONST_2);
  v22->set_f_6(0x406f4a3b775fc5dd);
  v22->set_f_12(0x11cc21078c9d29b1);
  v22->set_f_9(0x78);
  v22->set_f_4(Message2::M5::M31::E23_CONST_4);
  v22->set_f_11(0x47183ce);
  message->set_f_6(0x5c7710e3d8);
  Message2::M9* v23 = message->mutable_f_65();
  Message2::M9::M29* v24 = v23->mutable_f_4();
  Message2::M9::M29::M40* v25 = v24->mutable_f_3();
  v25->set_f_0(true);
  Message2::M9::M29::M37* v26 = v24->mutable_f_2();
  v26->set_f_0(0x9bb5f4ebcb8f62f);
  v24->set_f_0(true);
  v23->set_f_0(0x19691684);
  Message2::M9::M34* v27 = v23->mutable_f_6();
  v27->set_f_0(false);
  Message2::M9::M30* v28 = v23->mutable_f_5();
  v28->set_f_0(0x16);
  message->set_f_25(0x43);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M10* v0 = message->mutable_f_66();
  Message2::M10::M21* v1_0 = v0->add_f_5();
  v1_0->set_f_0(s->substr(0, 298));
  Message2::M10::M21::M42* v2 = v1_0->mutable_f_3();
  v2->set_f_0(Message2::M10::M21::M42::E25_CONST_3);
  Message2::M10::M32* v3 = v0->mutable_f_6();
  (void)v3;  // Suppresses clang-tidy.
  message->set_f_6(0x3856b39ef);
  message->set_f_15(s->substr(0, 2));
  message->set_f_19(0x62a3e9277c63bb63);
  message->set_f_23(s->substr(0, 2));
  Message2::M4* v4 = message->mutable_f_57();
  (void)v4;  // Suppresses clang-tidy.
  message->set_f_11(false);
  message->add_f_21(Message2::E5_CONST_3);
  Message2::M9* v5 = message->mutable_f_65();
  Message2::M9::M29* v6 = v5->mutable_f_4();
  Message2::M9::M29::M40* v7 = v6->mutable_f_3();
  v7->set_f_0(true);
  v6->set_f_0(false);
  Message2::M9::M30* v8 = v5->mutable_f_5();
  v8->set_f_0(0x3e);
  v5->set_f_0(0x6a711f28);
  message->add_f_14(Message2::E4_CONST_1);
  message->set_f_13(0x47b9a39ae98e67b6);
  Message2::M6* v9_0 = message->add_f_62();
  v9_0->set_f_7(0x15901592);
  v9_0->set_f_0(0x1cf849975d414a1b);
  v9_0->set_f_3(0x56a80b5522b19bc6);
  v9_0->set_f_4(0xc960d);
  v9_0->set_f_1(0x2a2e0b0c1b7b6dea);
  v9_0->set_f_2(false);
  message->set_f_8(false);
  Message2::M7* v10 = message->mutable_f_63();
  Message2::M7::M15* v11 = v10->mutable_f_5();
  v11->set_f_0(s->substr(0, 3));
  Message2::M7::M18* v12 = v10->mutable_f_6();
  v12->set_f_0(0x491692427f993167);
  v12->set_f_2(0x7676f590d11dd0ef);
  v12->add_f_1(Message2::M7::M18::E17_CONST_4);
  Message2::M7::M33* v13 = v10->mutable_f_7();
  v13->set_f_2(0x276ec2d8ccb66829);
  v13->set_f_3(false);
  v13->set_f_1(0x52a91afd);
  v13->set_f_4(0x78);
  v13->set_f_0(0x71393ce0d34acd2e);
  message->set_f_5(Message2::E3_CONST_5);
  message->set_f_3(Message2::E2_CONST_3);
  Message2::M12* v14_0 = message->add_f_68();
  Message2::M12::M22* v15 = v14_0->mutable_f_5();
  v15->set_f_3(0x39d7e3619cc);
  v15->set_f_2(0x1eb2ecc2f46b576c);
  v15->set_f_0(s->substr(0, 308));
  v14_0->set_f_0(s->substr(0, 27));
  message->add_f_26(Message2::E6_CONST_3);
  message->set_f_29(s->substr(0, 7));
  message->set_f_22(0xe22a04f);
  message->set_f_20(s->substr(0, 16));
  message->set_f_4(0x7a);
  message->set_f_25(0x1b1d89);
  message->set_f_1(0x264b);
  message->set_f_2(0x7);
  message->set_f_18(0xbb99838d397df59);
  Message2::M11* v16 = message->mutable_f_67();
  v16->set_f_0(s->substr(0, 121));
  v16->set_f_2(true);
  Message2::M11::M28* v17_0 = v16->add_f_12();
  v17_0->set_f_9(0x1378fc);
  v17_0->set_f_15(s->substr(0, 3060));
  v17_0->set_f_26(Message2::M11::M28::E21_CONST_3);
  v17_0->set_f_8(0xf037);
  v17_0->set_f_13(0x13);
  v17_0->set_f_1(0x4a0ef793);
  v17_0->set_f_22(Message2::M11::M28::E20_CONST_4);
  v17_0->set_f_10(s->substr(0, 4));
  v17_0->set_f_14(0x63);
  v17_0->set_f_4(s->substr(0, 125));
  v17_0->set_f_11(Message2::M11::M28::E18_CONST_2);
  v17_0->set_f_20(s->substr(0, 628));
  v17_0->set_f_19(0x20);
  v17_0->set_f_25(0x6051baa4ca);
  v17_0->set_f_3(false);
  v17_0->set_f_2(false);
  v17_0->set_f_5(0x2b65d0d41);
  v17_0->set_f_17(false);
  v17_0->set_f_16(0.609633);
  v17_0->set_f_27(0x6b6086e);
  v17_0->set_f_18(0x2b);
  v17_0->set_f_7(s->substr(0, 37));
  v16->set_f_4(s->substr(0, 287));
  v16->set_f_5(0x6c);
  v16->set_f_1(s->substr(0, 257));
  v16->set_f_6(s->substr(0, 1));
  v16->set_f_3(0x20);
  message->set_f_10(0xed75204);
  message->set_f_9(0x36e00cfc5ca6e53d);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_2(0x12c51fd);
  message->set_f_24(0x4a);
  message->set_f_10(0x54104c7);
  Message2::M6* v0_0 = message->add_f_62();
  v0_0->set_f_6(0x8cc856fc13f839a);
  v0_0->set_f_2(false);
  v0_0->set_f_7(0x6a46a278);
  v0_0->set_f_5(Message2::M6::E9_CONST_5);
  v0_0->set_f_8(0x2ca506db62986ff);
  v0_0->set_f_4(0x1cddcd);
  v0_0->set_f_3(0x33c9f2c679d65857);
  message->set_f_12(s->substr(0, 1));
  message->set_f_6(0x2cacfdaf017);
  message->set_f_22(0x1b);
  Message2::M7* v1 = message->mutable_f_63();
  v1->set_f_0(s->substr(0, 19));
  Message2::M7::M15* v2 = v1->mutable_f_5();
  (void)v2;  // Suppresses clang-tidy.
  Message2::M7::M33* v3 = v1->mutable_f_7();
  v3->set_f_1(0x5b353836);
  v3->set_f_0(0x5f2e7c27dc9c4eac);
  v3->set_f_3(true);
  Message2::M13* v4 = message->mutable_f_69();
  v4->set_f_17(0xf480569);
  v4->set_f_25(0x716e8b5f8aabaa0a);
  v4->set_f_7(0.636074);
  v4->set_f_10(Message2::M13::E12_CONST_5);
  v4->set_f_28(0.019503);
  v4->set_f_6(0x50b31d59ceb27518);
  v4->set_f_14(0.126772);
  v4->set_f_2(false);
  v4->set_f_12(true);
  Message2::M13::M24* v5 = v4->mutable_f_39();
  v5->set_f_0(false);
  v4->set_f_1(0xfea9154);
  v4->set_f_9(s->substr(0, 28));
  v4->set_f_18(0xfab2cfb);
  v4->set_f_20(Message2::M13::E14_CONST_2);
  v4->set_f_3(false);
  v4->set_f_27(s->substr(0, 22));
  v4->set_f_29(0xeebbff73d37ed83);
  v4->set_f_5(0x73306ea3e32ebdc5);
  v4->set_f_22(false);
  message->set_f_28(0x4162aaea4);
  Message2::M4* v6 = message->mutable_f_57();
  (void)v6;  // Suppresses clang-tidy.
  message->add_f_21(Message2::E5_CONST_2);
  message->set_f_16(0x12347f91fa009514);
  message->set_f_7(0x1c72fb2723bae215);
  message->set_f_3(Message2::E2_CONST_5);
  message->set_f_5(Message2::E3_CONST_1);
  message->set_f_19(0xad023ab692b794b);
  message->set_f_17(false);
  message->set_f_13(0x60f1d60c8aa34f8e);
  message->add_f_14(Message2::E4_CONST_4);
  message->set_f_9(0x2b091c2c6387ed43);
  Message2::M3* v7 = message->mutable_f_55();
  v7->set_f_0(0x47675e575eca664b);
  Message2::M3::M23* v8 = v7->mutable_f_3();
  v8->set_f_0(0x5f);
  message->set_f_15(s->substr(0, 49));
  Message2::M11* v9 = message->mutable_f_67();
  v9->set_f_5(0x3601);
  v9->set_f_2(false);
  Message2::M11::M28* v10_0 = v9->add_f_12();
  v10_0->set_f_8(0x9060afc);
  v10_0->set_f_15(s->substr(0, 2723));
  v10_0->set_f_11(Message2::M11::M28::E18_CONST_4);
  v10_0->set_f_1(0x45726ab1);
  v10_0->set_f_3(false);
  v10_0->set_f_0(0x5500b4ad9a621b3a);
  v10_0->set_f_14(0xf1d77c2);
  v10_0->set_f_27(0xef54a11);
  v10_0->set_f_23(0x68eba0278d5bebcb);
  v10_0->set_f_5(0x13d03ead052);
  v10_0->set_f_26(Message2::M11::M28::E21_CONST_1);
  v10_0->add_f_12(Message2::M11::M28::E19_CONST_1);
  v10_0->set_f_20(s->substr(0, 20));
  v10_0->set_f_22(Message2::M11::M28::E20_CONST_2);
  v10_0->set_f_16(0.961467);
  v10_0->set_f_21(s->substr(0, 123));
  v10_0->set_f_24(0x1cbce3);
  v10_0->set_f_10(s->substr(0, 1));
  v10_0->set_f_19(0x49fe7c589);
  v10_0->set_f_17(false);
  v9->set_f_6(s->substr(0, 4));
  v9->set_f_4(s->substr(0, 3));
  v9->set_f_0(s->substr(0, 250));
  v9->set_f_1(s->substr(0, 5));
  message->add_f_26(Message2::E6_CONST_3);
  message->set_f_29(s->substr(0, 27));
  Message2::M8* v11_0 = message->add_f_64();
  v11_0->set_f_3(0x12202f3df1c8283a);
  v11_0->set_f_4(true);
  v11_0->set_f_0(0x483b34313855ed63);
  Message2::M8::M25* v12 = v11_0->mutable_f_8();
  Message2::M8::M25::M46* v13 = v12->mutable_f_8();
  Message2::M8::M25::M46::M48* v14 = v13->mutable_f_6();
  v14->set_f_0(true);
  v13->set_f_2(s->substr(0, 4));
  v13->set_f_1(true);
  v13->set_f_3(0x33455d93);
  v13->set_f_0(0x5d);
  Message2::M8::M25::M41* v15 = v12->mutable_f_6();
  v15->set_f_0(0x753ddd13);
  v15->set_f_2(0.553846);
  v12->set_f_1(0x7926aef814935915);
  v11_0->set_f_2(0x2998c23624ab082f);
  Message2::M12* v16_0 = message->add_f_68();
  Message2::M12::M17* v17_0 = v16_0->add_f_3();
  Message2::M12::M17::M39* v18 = v17_0->mutable_f_5();
  v18->set_f_2(0xe6b2047);
  v18->set_f_1(0x73462932373d9f07);
  Message2::M12::M17::M39::M55* v19 = v18->mutable_f_5();
  v19->set_f_3(0xf0049345418a186);
  v19->set_f_2(0x359cbe2);
  v19->set_f_0(s->substr(0, 21));
  v19->set_f_1(false);
  v19->set_f_6(0x2138);
  v17_0->set_f_0(true);
  Message2::M12::M22* v20 = v16_0->mutable_f_5();
  v20->set_f_2(0x3c9eb3dd96da85e9);
  v20->set_f_0(s->substr(0, 17));
  v20->set_f_4(0x3f6a99a0e7d85e5);
  v20->set_f_1(s->substr(0, 141));
  v20->set_f_3(0x11d4e003a72);
  message->set_f_18(0x6f46f9dfac84a646);
  message->set_f_4(0x50);
  Message2::M9* v21 = message->mutable_f_65();
  Message2::M9::M30* v22 = v21->mutable_f_5();
  v22->set_f_0(0x115572);
  Message2::M9::M29* v23 = v21->mutable_f_4();
  v23->set_f_0(true);
  Message2::M9::M29::M40* v24 = v23->mutable_f_3();
  v24->set_f_1(s->substr(0, 3));
  v24->set_f_0(true);
  v21->set_f_0(0x57ecd949);
  Message2::M9::M34* v25 = v21->mutable_f_6();
  v25->set_f_0(true);
  message->set_f_27(true);
  Message2::M2* v26 = message->mutable_f_53();
  Message2::M2::M27* v27 = v26->mutable_f_4();
  v27->set_f_0(s->substr(0, 99));
  Message2::M2::M27::M45* v28 = v27->mutable_f_6();
  v28->set_f_0(0.841373);
  v28->set_f_1(false);
  Message2::M2::M27::M45::M47* v29 = v28->mutable_f_9();
  v29->set_f_0(0x26477386c649968e);
  Message2::M2::M27::M45::M47::M59* v30_0 = v29->add_f_5();
  v30_0->set_f_0(Message2::M2::M27::M45::M47::M59::E27_CONST_4);
  v30_0->set_f_2(0x7595a94b8b1532d8);
  v30_0->add_f_1(Message2::M2::M27::M45::M47::M59::E28_CONST_3);
  v29->set_f_1(0x55);
  v28->set_f_3(0x28d36bff8ab06d75);
  v28->set_f_4(s->substr(0, 31));
  v28->set_f_2(0x653a13c5248a564f);
  Message2::M2::E7 array_0[21] = {
      Message2::M2::E7_CONST_3, Message2::M2::E7_CONST_2,
      Message2::M2::E7_CONST_3, Message2::M2::E7_CONST_2,
      Message2::M2::E7_CONST_1, Message2::M2::E7_CONST_4,
      Message2::M2::E7_CONST_3, Message2::M2::E7_CONST_5,
      Message2::M2::E7_CONST_2, Message2::M2::E7_CONST_5,
      Message2::M2::E7_CONST_3, Message2::M2::E7_CONST_4,
      Message2::M2::E7_CONST_3, Message2::M2::E7_CONST_2,
      Message2::M2::E7_CONST_3, Message2::M2::E7_CONST_2,
      Message2::M2::E7_CONST_5, Message2::M2::E7_CONST_2,
      Message2::M2::E7_CONST_1, Message2::M2::E7_CONST_2,
      Message2::M2::E7_CONST_3,
  };
  for (auto v : array_0) {
    v26->add_f_0(v);
  }
  Message2::M2::M26* v31_0 = v26->add_f_3();
  v31_0->set_f_0(s->substr(0, 583));
  message->set_f_20(s->substr(0, 1857));
  message->set_f_1(0x7c);
  Message2::M5* v32_0 = message->add_f_58();
  v32_0->set_f_0(s->substr(0, 3));
  Message2::M5::M31* v33 = v32_0->mutable_f_3();
  v33->set_f_7(0x2b);
  v33->set_f_11(0x25183d1);
  v33->set_f_12(0x480773fb040d60f0);
  v33->set_f_3(false);
  v33->set_f_6(0x47c2a6abd2d92aa2);
  v33->set_f_2(0x21c84613b63dfc82);
  v33->set_f_5(s->substr(0, 10));
  v33->set_f_1(Message2::M5::M31::E22_CONST_2);
  v33->set_f_0(s->substr(0, 10));
  v33->set_f_4(Message2::M5::M31::E23_CONST_5);
  message->set_f_8(false);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_17(true);
  message->set_f_5(Message2::E3_CONST_5);
  Message2::M7* v0 = message->mutable_f_63();
  Message2::M7::M15* v1 = v0->mutable_f_5();
  (void)v1;  // Suppresses clang-tidy.
  Message2::M7::M18* v2 = v0->mutable_f_6();
  v2->set_f_2(0x41886639f85609f4);
  v2->add_f_1(Message2::M7::M18::E17_CONST_4);
  v2->set_f_0(0x3b693fa74fd47d76);
  v2->set_f_3(false);
  Message2::M10* v3 = message->mutable_f_66();
  v3->set_f_0(Message2::M10::E10_CONST_4);
  Message2::M10::M21* v4_0 = v3->add_f_5();
  Message2::M10::M21::M42* v5 = v4_0->mutable_f_3();
  v5->set_f_0(Message2::M10::M21::M42::E25_CONST_1);
  v4_0->set_f_0(s->substr(0, 104));
  Message2::M10::M32* v6 = v3->mutable_f_6();
  v6->set_f_0(0x21d417f1a5fba4ba);
  message->add_f_26(Message2::E6_CONST_2);
  message->set_f_25(0xe348324);
  message->set_f_2(0x76);
  Message2::M8* v7_0 = message->add_f_64();
  Message2::M8::M25* v8 = v7_0->mutable_f_8();
  Message2::M8::M25::M46* v9 = v8->mutable_f_8();
  v9->set_f_1(true);
  v9->set_f_3(0x3dd4ad54);
  v9->set_f_2(s->substr(0, 2));
  Message2::M8::M25::M46::M48* v10 = v9->mutable_f_6();
  v10->set_f_0(true);
  v8->set_f_1(0x4b4f980fa48265e6);
  Message2::M8::M25::M41* v11 = v8->mutable_f_6();
  v11->set_f_2(0.045721);
  v11->set_f_1(0x7d);
  v8->set_f_3(0x78a34184864d9474);
  v8->set_f_2(0x4074c09);
  v8->set_f_0(0x5d24882b1a9f3805);
  v7_0->set_f_1(true);
  v7_0->set_f_3(0x5e461b49efda8279);
  v7_0->set_f_2(0x794dacd67c1d29a3);
  v7_0->set_f_0(0x2ef43f39094637bf);
  v7_0->set_f_4(true);
  message->set_f_1(0x71);
  Message2::M11* v12 = message->mutable_f_67();
  v12->set_f_6(s->substr(0, 3687));
  v12->set_f_5(0xb7e55bf);
  v12->set_f_1(s->substr(0, 24));
  v12->set_f_3(0xb101ba2);
  Message2::M11::M28* v13_0 = v12->add_f_12();
  v13_0->set_f_16(0.099964);
  v13_0->set_f_1(0x38ddd27d);
  v13_0->set_f_2(false);
  v13_0->set_f_9(0x44);
  v13_0->set_f_0(0x4c8973446b75fc09);
  v13_0->set_f_18(0x93d5078);
  v13_0->set_f_4(s->substr(0, 3));
  v13_0->set_f_17(true);
  v13_0->set_f_26(Message2::M11::M28::E21_CONST_5);
  v13_0->set_f_14(0xeb86fe);
  v13_0->set_f_20(s->substr(0, 320));
  v13_0->set_f_25(0x1ef1e6aeffc);
  v13_0->set_f_7(s->substr(0, 16));
  v13_0->set_f_6(s->substr(0, 16));
  v13_0->set_f_27(0x18);
  v13_0->set_f_19(0x8226cb76e);
  v13_0->set_f_15(s->substr(0, 1));
  v13_0->set_f_21(s->substr(0, 53));
  v13_0->set_f_23(0x1137a84e640f5d20);
  v13_0->set_f_22(Message2::M11::M28::E20_CONST_4);
  v13_0->set_f_3(false);
  Message2::M9* v14 = message->mutable_f_65();
  Message2::M9::M34* v15 = v14->mutable_f_6();
  Message2::M9::M34::M44* v16 = v15->mutable_f_2();
  Message2::M9::M34::M44::M52* v17 = v16->mutable_f_5();
  v17->set_f_0(0xd);
  v16->set_f_1(0x7a);
  v15->set_f_0(false);
  Message2::M9::M30* v18 = v14->mutable_f_5();
  v18->set_f_0(0x58);
  v14->set_f_0(0x2608c1e5);
  Message2::M9::M29* v19 = v14->mutable_f_4();
  Message2::M9::M29::M37* v20 = v19->mutable_f_2();
  Message2::M9::M29::M37::M53* v21_0 = v20->add_f_4();
  v21_0->set_f_0(0x40);
  Message2::M9::M29::M37::M53::M60* v22 = v21_0->mutable_f_3();
  v22->set_f_3(Message2::M9::M29::M37::M53::M60::E29_CONST_1);
  v22->set_f_2(0x1a57d5);
  v22->set_f_6(s->substr(0, 25));
  v22->set_f_0(s->substr(0, 14));
  v20->set_f_0(0x5643d8e22e816d1);
  Message2::M9::M29::M37::M54* v23 = v20->mutable_f_5();
  v23->set_f_0(0x19);
  Message2::M9::M29::M40* v24 = v19->mutable_f_3();
  v24->set_f_0(false);
  message->set_f_13(0xcddc915562d5f2b);
  message->add_f_21(Message2::E5_CONST_4);
  message->add_f_21(Message2::E5_CONST_3);
  message->set_f_9(0x5b01f6b2c29c5b55);
  message->set_f_6(0x602119ad9);
  message->set_f_7(0x29b57ef4ba63b162);
  message->set_f_23(s->substr(0, 25));
  Message2::M1* v25 = message->mutable_f_52();
  Message2::M1::M36* v26 = v25->mutable_f_8();
  v26->set_f_0(0xa3ebe6);
  Message2::M1::M14* v27 = v25->mutable_f_2();
  (void)v27;  // Suppresses clang-tidy.
  v25->set_f_0(0.042561);
  Message2::M1::M16* v28 = v25->mutable_f_4();
  (void)v28;  // Suppresses clang-tidy.
  Message2::M1::M20* v29_0 = v25->add_f_7();
  v29_0->set_f_0(0x73);
  v29_0->set_f_1(s->substr(0, 30));
  Message2::M1::M19* v30_0 = v25->add_f_5();
  Message2::M1::M19::M38* v31_0 = v30_0->add_f_5();
  v31_0->set_f_0(true);
  v31_0->set_f_2(s->substr(0, 65));
  Message2::M1::M19::M38::M49* v32_0 = v31_0->add_f_14();
  v32_0->set_f_0(s->substr(0, 1));
  Message2::M1::M19::M38::M50* v33 = v31_0->mutable_f_16();
  v33->set_f_0(0x5453eb7);
  v30_0->set_f_0(0x3a4581c);
  Message2::M13* v34 = message->mutable_f_69();
  v34->set_f_12(true);
  v34->set_f_14(0.486643);
  v34->set_f_21(0x69b6f6f7);
  v34->set_f_28(0.296278);
  v34->set_f_26(0xa037c);
  v34->set_f_10(Message2::M13::E12_CONST_1);
  v34->set_f_19(false);
  v34->set_f_0(0x7c6e698babc99409);
  v34->set_f_2(false);
  v34->set_f_22(true);
  v34->set_f_25(0x6ba5dea9cec2bd81);
  v34->set_f_3(false);
  v34->set_f_15(0x2b);
  v34->set_f_27(s->substr(0, 198));
  Message2::M13::M24* v35 = v34->mutable_f_39();
  v35->set_f_0(true);
  v34->set_f_18(0x5c54e22);
  v34->set_f_9(s->substr(0, 29));
  v34->set_f_16(0.572613);
  v34->set_f_17(0xaf);
  v34->set_f_29(0x6e31b5d4c47864c0);
  v34->add_f_24(Message2::M13::E15_CONST_4);
  v34->add_f_24(Message2::M13::E15_CONST_2);
  v34->add_f_13(Message2::M13::E13_CONST_2);
  v34->add_f_13(Message2::M13::E13_CONST_1);
  v34->set_f_4(0x33b234878b7b2bd4);
  v34->set_f_7(0.400052);
  message->set_f_15(s->substr(0, 19));
  message->set_f_10(0x4c);
  message->set_f_16(0x5e8c68728fd81fd8);
  message->set_f_29(s->substr(0, 8));
  Message2::M3* v36 = message->mutable_f_55();
  v36->set_f_0(0x342363d5ac792266);
  Message2::M3::M23* v37 = v36->mutable_f_3();
  (void)v37;  // Suppresses clang-tidy.
  message->set_f_28(0x630fdf8d6);
  message->set_f_0(Message2::E1_CONST_1);
  Message2::M6* v38_0 = message->add_f_62();
  v38_0->set_f_1(0x1e6258b766572576);
  v38_0->set_f_6(0x68b0f2560c82674);
  v38_0->set_f_0(0x7b14e6c4a7b7a70a);
  v38_0->set_f_8(0x3990fa23dac1c5c3);
  v38_0->set_f_4(0x2f0c);
  message->set_f_27(true);
  Message2::M12* v39_0 = message->add_f_68();
  Message2::M12::M17* v40_0 = v39_0->add_f_3();
  v40_0->set_f_0(true);
  v39_0->set_f_0(s->substr(0, 255));
  Message2::M12::M22* v41 = v39_0->mutable_f_5();
  v41->set_f_2(0x281d3db63199aec6);
  v41->set_f_4(0x60dba101c9c5d34a);
  v41->set_f_1(s->substr(0, 386));
  v41->set_f_0(s->substr(0, 10));
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
}  // namespace fleetbench::rpc::P6::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE2_H_
