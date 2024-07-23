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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P8/request/Message0.pb.h"

namespace fleetbench::rpc::P8::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_47();
  v0->set_f_4(0x124879);
  v0->set_f_1(0x573739babf4a950a);
  v0->set_f_2(0x98263db);
  v0->set_f_3(0x2585);
  Message0::M1::M30* v1_0 = v0->add_f_9();
  v1_0->set_f_10(0x7b9900e);
  v1_0->set_f_1(0x7b8);
  v1_0->set_f_8(0x91e42);
  v1_0->set_f_4(s->substr(0, 19));
  v1_0->set_f_9(0x33);
  v1_0->set_f_7(s->substr(0, 1));
  v1_0->add_f_15(Message0::M1::M30::E7_CONST_5);
  v1_0->set_f_5(0xee8338fdac11d204);
  v1_0->set_f_3(0xa06e766);
  v1_0->set_f_6(0x6e978ebe);
  v1_0->set_f_12(s->substr(0, 3));
  v1_0->set_f_2(true);
  v1_0->set_f_11(0x167d5956);
  v0->set_f_0(s->substr(0, 7));
  v0->add_f_5(Message0::M1::E3_CONST_4);
  message->set_f_22(s->substr(0, 3));
  message->set_f_23(0x1818ebcfa5a71c4d);
  Message0::M2* v2 = message->mutable_f_49();
  Message0::M2::M10* v3 = v2->mutable_f_4();
  v3->set_f_1(0x1fb40b);
  v3->set_f_0(s->substr(0, 11));
  v3->set_f_2(s->substr(0, 8));
  v3->set_f_3(0x71);
  Message0::M2::M16* v4 = v2->mutable_f_6();
  (void)v4;  // Suppresses clang-tidy.
  Message0::M2::M11* v5 = v2->mutable_f_5();
  v5->set_f_1(0x1bdb36);
  v5->set_f_0(0xa44cc8);
  Message0::M2::M11::M35* v6 = v5->mutable_f_3();
  v6->set_f_1(0.172279);
  Message0::M2::M11::M35::M41* v7_0 = v6->add_f_7();
  v7_0->set_f_0(s->substr(0, 5));
  Message0::M2::M11::M35::M48* v8_0 = v6->add_f_13();
  v8_0->set_f_0(false);
  v6->set_f_2(0x4c9b4ce8);
  v6->set_f_3(0x348e90f070c6b7fe);
  Message0::M2::M11::M35::M43* v9_0 = v6->add_f_10();
  (void)v9_0;  // Suppresses clang-tidy.
  v6->set_f_0(s->substr(0, 1));
  Message0::M2::M11::M35::M45* v10_0 = v6->add_f_12();
  v10_0->set_f_1(0xb3e1008ca6ae368a);
  v10_0->set_f_2(0x8c50d0315415695a);
  v10_0->set_f_3(0.318718);
  v10_0->set_f_7(0x7a);
  v10_0->set_f_5(0x8b538005986615b7);
  v10_0->set_f_4(false);
  v6->set_f_4(s->substr(0, 4));
  v2->set_f_1(0x6bd18667f328a0c8);
  Message0::M2::M20* v11_0 = v2->add_f_7();
  (void)v11_0;  // Suppresses clang-tidy.
  v2->set_f_0(s->substr(0, 8));
  Message0::M9* v12 = message->mutable_f_58();
  Message0::M9::M17* v13 = v12->mutable_f_7();
  v13->set_f_0(0x2916615ca9a574a4);
  v13->set_f_2(0.427496);
  v13->set_f_3(0x1e71b59daf3aa5c);
  v13->set_f_1(0x6ce672757c920947);
  v12->set_f_2(0x25);
  Message0::M9::M23* v14_0 = v12->add_f_11();
  v14_0->set_f_0(0x95092c71c2cbb825);
  Message0::M9::M14* v15 = v12->mutable_f_6();
  v15->set_f_0(0x18e2374);
  Message0::M9::M14::M38* v16 = v15->mutable_f_4();
  v16->set_f_1(0.591923);
  v16->set_f_0(s->substr(0, 4));
  Message0::M9::M14::M38::M46* v17_0 = v16->add_f_6();
  v17_0->set_f_0(false);
  Message0::M9::M14::M32* v18 = v15->mutable_f_2();
  v18->set_f_0(s->substr(0, 398));
  v12->set_f_0(0xcbd7236d387f1c89);
  Message0::M8* v19 = message->mutable_f_55();
  v19->set_f_0(0xc148f0f);
  v19->set_f_3(0x8d03fdcd74107bcf);
  v19->add_f_1(Message0::M8::E5_CONST_1);
  Message0::M8::M25* v20 = v19->mutable_f_10();
  (void)v20;  // Suppresses clang-tidy.
  v19->set_f_2(s->substr(0, 4));
  message->set_f_25(s->substr(0, 5));
  message->set_f_15(0x99d52bb);
  message->set_f_17(s->substr(0, 18));
  message->set_f_28(s->substr(0, 14));
  message->set_f_11(0xf66b0f);
  Message0::M5* v21 = message->mutable_f_52();
  Message0::M5::M21* v22_0 = v21->add_f_5();
  v22_0->set_f_1(0x47);
  v22_0->set_f_3(0x7839b1b791e488d0);
  v22_0->set_f_4(0x2e);
  v22_0->set_f_0(false);
  v22_0->set_f_2(0xe2fde56);
  Message0::M5::M24* v23 = v21->mutable_f_6();
  v23->set_f_0(0.047402);
  Message0::M5::M24::M39* v24 = v23->mutable_f_2();
  v24->set_f_2(0x4a198b244524295f);
  v24->set_f_3(0x98e85295a65a783e);
  v21->set_f_0(s->substr(0, 26));
  Message0::M5::M29* v25_0 = v21->add_f_7();
  v25_0->set_f_6(0x2a);
  v25_0->add_f_3(Message0::M5::M29::E6_CONST_4);
  v25_0->add_f_3(Message0::M5::M29::E6_CONST_4);
  v25_0->add_f_3(Message0::M5::M29::E6_CONST_4);
  v25_0->set_f_5(s->substr(0, 4));
  v25_0->set_f_2(s->substr(0, 6));
  v25_0->set_f_0(0.140795);
  v25_0->set_f_1(0x57d1655a0aa9d022);
  message->set_f_7(s->substr(0, 127));
  message->add_f_26(Message0::E2_CONST_3);
  message->set_f_18(0x14dba3e);
  message->set_f_19(0x37);
  message->set_f_3(0x15ae7d873273a11);
  message->set_f_5(0x6ab13809);
  Message0::M7* v26 = message->mutable_f_54();
  v26->set_f_3(true);
  Message0::M7::M28* v27 = v26->mutable_f_7();
  v27->set_f_0(0x30);
  v26->set_f_0(0x10);
  v26->set_f_1(true);
  message->set_f_0(0x78);
  message->set_f_1(s->substr(0, 13));
  message->set_f_16(true);
  message->set_f_21(0xc435fb8ea94cdc0c);
  Message0::M3* v28 = message->mutable_f_50();
  Message0::M3::M19* v29 = v28->mutable_f_7();
  v29->set_f_0(false);
  v28->set_f_1(0x69642c6c);
  v28->add_f_2(Message0::M3::E4_CONST_2);
  v28->set_f_0(0x9278e66c7f92121a);
  Message0::E1 array_1[16] = {
      Message0::E1_CONST_2, Message0::E1_CONST_5, Message0::E1_CONST_1,
      Message0::E1_CONST_5, Message0::E1_CONST_5, Message0::E1_CONST_5,
      Message0::E1_CONST_1, Message0::E1_CONST_4, Message0::E1_CONST_5,
      Message0::E1_CONST_1, Message0::E1_CONST_4, Message0::E1_CONST_5,
      Message0::E1_CONST_1, Message0::E1_CONST_1, Message0::E1_CONST_5,
      Message0::E1_CONST_5,
  };
  for (auto v : array_1) {
    message->add_f_2(v);
  }
  message->set_f_8(0x63);
  message->set_f_6(s->substr(0, 27));
  message->set_f_12(0x1899cf46d663bd04);
  Message0::M4* v30_0 = message->add_f_51();
  Message0::M4::M31* v31 = v30_0->mutable_f_13();
  v31->set_f_23(s->substr(0, 5));
  v31->set_f_3(0xe5ff378);
  v31->set_f_13(0.936251);
  v31->set_f_5(0x223e501ecec91887);
  v31->set_f_6(0xbc6eba7);
  v31->set_f_20(0x143eec32a0f873b7);
  v31->add_f_22(Message0::M4::M31::E9_CONST_4);
  v31->set_f_1(0x2b);
  v31->set_f_26(0x15f923);
  v31->set_f_19(true);
  v31->set_f_4(0.254709);
  v31->set_f_24(s->substr(0, 3));
  v31->set_f_8(0x13f69304);
  v31->set_f_28(0x3f89a124759323e1);
  v31->set_f_10(s->substr(0, 19));
  v31->set_f_25(s->substr(0, 128));
  v31->set_f_29(0x2b);
  v31->set_f_12(false);
  v31->set_f_2(0.101940);
  v31->set_f_21(0x3401);
  v31->set_f_11(0x3d);
  v31->add_f_15(Message0::M4::M31::E8_CONST_2);
  v31->add_f_15(Message0::M4::M31::E8_CONST_4);
  v31->set_f_0(0.506599);
  v31->set_f_14(0xf96d1c3cdb866fdd);
  v31->set_f_7(0xcd0302991b8e313c);
  v31->set_f_18(0xc64c1b);
  v31->set_f_9(s->substr(0, 2));
  v31->set_f_27(false);
  Message0::M4::M15* v32 = v30_0->mutable_f_7();
  Message0::M4::M15::M36* v33_0 = v32->add_f_2();
  Message0::M4::M15::M36::M44* v34 = v33_0->mutable_f_4();
  v34->set_f_1(false);
  v32->set_f_0(0x1a);
  Message0::M4::M12* v35_0 = v30_0->add_f_6();
  Message0::M4::M12::M34* v36_0 = v35_0->add_f_11();
  Message0::M4::M12::M34::M42* v37 = v36_0->mutable_f_7();
  v37->set_f_0(s->substr(0, 1));
  v36_0->set_f_2(0x6ea9e17);
  v36_0->set_f_3(s->substr(0, 1));
  v36_0->set_f_1(0xc5b7d7e1df843e07);
  Message0::M4::M12::M33* v38 = v35_0->mutable_f_9();
  v38->set_f_0(0x1b);
  v35_0->set_f_0(s->substr(0, 1));
  v35_0->set_f_2(s->substr(0, 9));
  v35_0->set_f_1(true);
  v35_0->set_f_3(0x5e82f51194babcb1);
  message->set_f_4(0x2a45efbc);
  message->set_f_27(0.609671);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M5* v0 = message->mutable_f_52();
  Message0::M5::M29* v1_0 = v0->add_f_7();
  v1_0->set_f_1(0xfede8cc80c4e2f52);
  v1_0->set_f_0(0.734390);
  v1_0->set_f_6(0x69);
  v1_0->set_f_4(0xcaf23ab73aa11832);
  v1_0->set_f_5(s->substr(0, 8));
  Message0::M5::M29::E6 array_0[20] = {
      Message0::M5::M29::E6_CONST_2, Message0::M5::M29::E6_CONST_4,
      Message0::M5::M29::E6_CONST_2, Message0::M5::M29::E6_CONST_5,
      Message0::M5::M29::E6_CONST_2, Message0::M5::M29::E6_CONST_3,
      Message0::M5::M29::E6_CONST_1, Message0::M5::M29::E6_CONST_3,
      Message0::M5::M29::E6_CONST_2, Message0::M5::M29::E6_CONST_3,
      Message0::M5::M29::E6_CONST_4, Message0::M5::M29::E6_CONST_1,
      Message0::M5::M29::E6_CONST_5, Message0::M5::M29::E6_CONST_2,
      Message0::M5::M29::E6_CONST_5, Message0::M5::M29::E6_CONST_4,
      Message0::M5::M29::E6_CONST_5, Message0::M5::M29::E6_CONST_3,
      Message0::M5::M29::E6_CONST_1, Message0::M5::M29::E6_CONST_2,
  };
  for (auto v : array_0) {
    v1_0->add_f_3(v);
  }
  v0->set_f_3(0xcd67b22cfd11b285);
  v0->set_f_2(0x15c5d0);
  Message0::M5::M24* v2 = v0->mutable_f_6();
  v2->set_f_0(0.726334);
  Message0::M5::M21* v3_0 = v0->add_f_5();
  v3_0->set_f_2(0x1c);
  v3_0->set_f_1(0x61b2271);
  v3_0->set_f_0(false);
  v3_0->set_f_4(0x6b);
  v0->set_f_0(s->substr(0, 12));
  message->set_f_22(s->substr(0, 1));
  Message0::M3* v4 = message->mutable_f_50();
  v4->add_f_2(Message0::M3::E4_CONST_3);
  v4->set_f_0(0x66809ebccad7086d);
  message->set_f_10(0xc93575d430dbd71a);
  message->set_f_24(s->substr(0, 63));
  message->set_f_17(s->substr(0, 2));
  message->set_f_21(0x5f31077ef4631f09);
  Message0::M2* v5 = message->mutable_f_49();
  Message0::M2::M11* v6 = v5->mutable_f_5();
  Message0::M2::M11::M35* v7 = v6->mutable_f_3();
  Message0::M2::M11::M35::M43* v8_0 = v7->add_f_10();
  Message0::M2::M11::M35::M43::M49* v9 = v8_0->mutable_f_2();
  v9->set_f_1(s->substr(0, 15));
  v9->set_f_5(0xf);
  v9->set_f_6(0x4f81e63b75987133);
  v9->set_f_4(0xa3e49b13fc6ae934);
  v9->set_f_2(0xc266681cfc8a1d1);
  v9->set_f_0(false);
  v9->set_f_3(0xdf597749d94d8e30);
  v7->set_f_4(s->substr(0, 7));
  v7->set_f_1(0.019045);
  Message0::M2::M11::M35::M41* v10_0 = v7->add_f_7();
  v10_0->set_f_0(s->substr(0, 11));
  v7->set_f_2(0x4ae87c50);
  v7->set_f_3(0xc49f62fb1deeca59);
  v7->set_f_0(s->substr(0, 58));
  v6->set_f_1(0x5a91699);
  v5->set_f_2(0x51c94919564b4908);
  v5->set_f_0(s->substr(0, 38));
  v5->set_f_1(0x1e2ccd891afce4df);
  message->set_f_7(s->substr(0, 14));
  Message0::M1* v11 = message->mutable_f_47();
  v11->set_f_3(0x9d84);
  v11->set_f_0(s->substr(0, 18));
  Message0::M1::M30* v12_0 = v11->add_f_9();
  v12_0->set_f_12(s->substr(0, 12));
  v12_0->set_f_1(0x32ad);
  v12_0->set_f_10(0xddcaa5c);
  v12_0->set_f_14(0x5a69048);
  v12_0->set_f_11(0x5dfa9086);
  v12_0->set_f_3(0xa20a753);
  v12_0->set_f_2(true);
  v12_0->set_f_8(0xdfa1b);
  v12_0->set_f_0(0x69);
  v12_0->set_f_9(0x79);
  v12_0->set_f_5(0xdd0ae16270db7cdd);
  v12_0->set_f_6(0x3e95af94);
  Message0::M1::M30::E7 array_1[20] = {
      Message0::M1::M30::E7_CONST_1, Message0::M1::M30::E7_CONST_2,
      Message0::M1::M30::E7_CONST_5, Message0::M1::M30::E7_CONST_3,
      Message0::M1::M30::E7_CONST_5, Message0::M1::M30::E7_CONST_2,
      Message0::M1::M30::E7_CONST_4, Message0::M1::M30::E7_CONST_1,
      Message0::M1::M30::E7_CONST_2, Message0::M1::M30::E7_CONST_2,
      Message0::M1::M30::E7_CONST_5, Message0::M1::M30::E7_CONST_3,
      Message0::M1::M30::E7_CONST_5, Message0::M1::M30::E7_CONST_2,
      Message0::M1::M30::E7_CONST_1, Message0::M1::M30::E7_CONST_4,
      Message0::M1::M30::E7_CONST_3, Message0::M1::M30::E7_CONST_1,
      Message0::M1::M30::E7_CONST_3, Message0::M1::M30::E7_CONST_5,
  };
  for (auto v : array_1) {
    v12_0->add_f_15(v);
  }
  v11->set_f_2(0x158687);
  v11->set_f_4(0x61);
  v11->set_f_1(0xe07bfd2921b5f06e);
  Message0::M1::E3 array_2[5] = {
      Message0::M1::E3_CONST_3, Message0::M1::E3_CONST_5,
      Message0::M1::E3_CONST_4, Message0::M1::E3_CONST_1,
      Message0::M1::E3_CONST_1,
  };
  for (auto v : array_2) {
    v11->add_f_5(v);
  }
  message->set_f_27(0.784816);
  message->set_f_9(0x164b22f);
  message->set_f_28(s->substr(0, 490));
  Message0::E2 array_3[18] = {
      Message0::E2_CONST_1, Message0::E2_CONST_4, Message0::E2_CONST_4,
      Message0::E2_CONST_3, Message0::E2_CONST_2, Message0::E2_CONST_4,
      Message0::E2_CONST_2, Message0::E2_CONST_5, Message0::E2_CONST_4,
      Message0::E2_CONST_4, Message0::E2_CONST_5, Message0::E2_CONST_4,
      Message0::E2_CONST_2, Message0::E2_CONST_2, Message0::E2_CONST_2,
      Message0::E2_CONST_3, Message0::E2_CONST_2, Message0::E2_CONST_5,
  };
  for (auto v : array_3) {
    message->add_f_26(v);
  }
  message->set_f_6(s->substr(0, 12));
  message->set_f_8(0xfda0880);
  Message0::M4* v13_0 = message->add_f_51();
  v13_0->set_f_0(s->substr(0, 3));
  Message0::M4::M12* v14_0 = v13_0->add_f_6();
  Message0::M4::M12::M34* v15_0 = v14_0->add_f_11();
  v15_0->set_f_2(0xa42f3);
  Message0::M4::M12::M34::M42* v16 = v15_0->mutable_f_7();
  (void)v16;  // Suppresses clang-tidy.
  v15_0->set_f_1(0x7d5363a8d93bce8e);
  v15_0->set_f_0(0x6a);
  v14_0->set_f_4(0xd79ef197249e448b);
  v14_0->set_f_3(0x91686b62603ce06);
  Message0::M4::M12::M33* v17 = v14_0->mutable_f_9();
  Message0::M4::M12::M33::M47* v18 = v17->mutable_f_3();
  v18->set_f_0(0x5d622e6421a785e0);
  v18->set_f_1(0x35b5541f);
  v17->set_f_0(0x66);
  v14_0->set_f_5(s->substr(0, 6));
  Message0::M4::M18* v19 = v13_0->mutable_f_8();
  v19->set_f_1(0x229b75757cc9c852);
  v19->set_f_2(0x4);
  message->set_f_20(s->substr(0, 15));
  message->set_f_1(s->substr(0, 192));
  message->add_f_2(Message0::E1_CONST_4);
  message->set_f_12(0x10b0462966c362de);
  message->set_f_4(0x41770e3a);
  message->set_f_15(0x4deb949d);
  message->set_f_23(0x2c4d929179128b10);
  message->set_f_29(0x4193a03);
  message->set_f_13(0x1df5f4);
  Message0::M9* v20 = message->mutable_f_58();
  Message0::M9::M17* v21 = v20->mutable_f_7();
  v21->set_f_3(0x89613d41dd32b0e6);
  v21->set_f_2(0.533084);
  v21->set_f_0(0xfa1f9e0ded2d7157);
  v21->set_f_1(0xe40cf9256ba76262);
  v20->set_f_1(0xe2e8071ae506cb75);
  Message0::M9::M23* v22_0 = v20->add_f_11();
  v22_0->set_f_0(0xc8865a505b73123d);
  v20->set_f_2(0x14);
  Message0::M9::M14* v23 = v20->mutable_f_6();
  Message0::M9::M14::M38* v24 = v23->mutable_f_4();
  Message0::M9::M14::M38::M46* v25_0 = v24->add_f_6();
  v25_0->set_f_0(true);
  v24->set_f_0(s->substr(0, 2));
  v24->set_f_2(s->substr(0, 11));
  v23->set_f_0(0x298e);
  v20->set_f_0(0x33b212bfba902909);
  message->set_f_0(0x72);
  Message0::M6* v26 = message->mutable_f_53();
  Message0::M6::M13* v27_0 = v26->add_f_4();
  v27_0->set_f_0(0x7088a1e);
  message->set_f_5(0x525ff7fb);
  Message0::M7* v28 = message->mutable_f_54();
  v28->set_f_3(true);
  v28->set_f_0(0x24);
  v28->set_f_2(false);
  Message0::M7::M28* v29 = v28->mutable_f_7();
  v29->set_f_0(0x6ac);
  v28->set_f_1(true);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_1(s->substr(0, 3));
  Message0::M9* v0 = message->mutable_f_58();
  v0->set_f_0(0xde2c3320e707ece);
  v0->set_f_1(0x113713c0ab38b3);
  Message0::M9::M14* v1 = v0->mutable_f_6();
  Message0::M9::M14::M32* v2 = v1->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M9::M14::M38* v3 = v1->mutable_f_4();
  v3->set_f_2(s->substr(0, 19));
  v3->set_f_0(s->substr(0, 18));
  v3->set_f_1(0.036598);
  v1->set_f_0(0x64);
  Message0::M9::M23* v4_0 = v0->add_f_11();
  (void)v4_0;  // Suppresses clang-tidy.
  Message0::M9::M17* v5 = v0->mutable_f_7();
  v5->set_f_0(0xa0cfffee3a932971);
  v5->set_f_1(0x85d6720223f5f2ed);
  v5->set_f_3(0x4d34aab1cbaea8f3);
  v5->set_f_2(0.671192);
  Message0::M9::M22* v6 = v0->mutable_f_10();
  Message0::M9::M22::M37* v7_0 = v6->add_f_4();
  v7_0->set_f_0(0x17);
  v6->set_f_0(0xf);
  v0->set_f_2(0x4d);
  message->set_f_4(0x5fa39458);
  message->set_f_28(s->substr(0, 27));
  message->set_f_0(0x38ad);
  message->set_f_14(false);
  message->set_f_8(0xe506bd2);
  message->set_f_9(0x4c);
  message->set_f_20(s->substr(0, 1));
  message->set_f_17(s->substr(0, 7));
  message->set_f_3(0x920e87950e2dd1d8);
  message->set_f_12(0xf4dc5f26a2c57014);
  message->set_f_11(0x1e);
  message->set_f_6(s->substr(0, 66));
  Message0::M3* v8 = message->mutable_f_50();
  v8->set_f_1(0x5e3f3934);
  v8->set_f_3(0xd68ad7e9b54a27a8);
  v8->set_f_0(0xe3a9bcb3132007ef);
  v8->add_f_2(Message0::M3::E4_CONST_4);
  v8->add_f_2(Message0::M3::E4_CONST_3);
  v8->add_f_2(Message0::M3::E4_CONST_4);
  message->set_f_24(s->substr(0, 28));
  message->add_f_2(Message0::E1_CONST_3);
  Message0::M4* v9_0 = message->add_f_51();
  Message0::M4::M12* v10_0 = v9_0->add_f_6();
  Message0::M4::M12::M33* v11 = v10_0->mutable_f_9();
  v11->set_f_0(0x56180e7);
  Message0::M4::M12::M33::M47* v12 = v11->mutable_f_3();
  v12->set_f_1(0x1699cc42);
  v12->set_f_0(0xf732ce58dc73e132);
  v10_0->set_f_5(s->substr(0, 4));
  Message0::M4::M12::M34* v13_0 = v10_0->add_f_11();
  v13_0->set_f_2(0xaca2d58);
  v13_0->set_f_1(0x906ce6993239d2d4);
  Message0::M4::M12::M34::M42* v14 = v13_0->mutable_f_7();
  v14->set_f_0(s->substr(0, 85));
  v13_0->set_f_3(s->substr(0, 4));
  v13_0->set_f_0(0x52);
  v10_0->set_f_2(s->substr(0, 1));
  v10_0->set_f_0(s->substr(0, 4));
  v10_0->set_f_3(0x4061f95792ecd5bf);
  v9_0->set_f_0(s->substr(0, 253));
  Message0::M4::M18* v15 = v9_0->mutable_f_8();
  v15->set_f_1(0xa9a854c68e706639);
  v15->set_f_2(0x44);
  Message0::M4::M15* v16 = v9_0->mutable_f_7();
  Message0::M4::M15::M36* v17_0 = v16->add_f_2();
  Message0::M4::M15::M36::M44* v18 = v17_0->mutable_f_4();
  v18->set_f_1(true);
  v17_0->set_f_0(0xaa946428b7fc9f2f);
  v16->set_f_0(0x16ad66);
  Message0::M4::M15::M40* v19 = v16->mutable_f_5();
  v19->set_f_1(0xe08d125847e71300);
  v19->add_f_2(Message0::M4::M15::M40::E10_CONST_5);
  v19->set_f_0(0x1742130f83793ea1);
  v19->set_f_6(s->substr(0, 4));
  Message0::M4::M31* v20 = v9_0->mutable_f_13();
  v20->add_f_22(Message0::M4::M31::E9_CONST_4);
  v20->set_f_1(0x503a9d6);
  v20->set_f_11(0x93568a);
  v20->set_f_7(0x7f96eb0716e44dbd);
  v20->set_f_28(0xec70a3e7cd1c52f8);
  v20->set_f_27(false);
  v20->set_f_24(s->substr(0, 8));
  v20->set_f_10(s->substr(0, 39));
  v20->set_f_20(0x237fd391c3c432c0);
  v20->set_f_29(0xc38143e);
  v20->set_f_18(0x47);
  v20->set_f_4(0.054227);
  v20->set_f_6(0x1b);
  v20->set_f_17(0xb504886);
  v20->set_f_19(false);
  v20->set_f_23(s->substr(0, 5));
  v20->set_f_14(0x205b59fcb31fc529);
  v20->set_f_16(0.825683);
  v20->set_f_13(0.237328);
  v20->add_f_15(Message0::M4::M31::E8_CONST_2);
  v20->set_f_12(true);
  v20->set_f_5(0x1a5db22058eeb8c);
  v20->set_f_8(0x5edc065d);
  v20->set_f_21(0x71a01b6);
  v20->set_f_2(0.519380);
  Message0::M8* v21 = message->mutable_f_55();
  Message0::M8::M27* v22 = v21->mutable_f_12();
  v22->set_f_0(0x49);
  v21->set_f_4(0x6af8b1e225b81e44);
  v21->set_f_0(0x128ef4);
  Message0::M8::M25* v23 = v21->mutable_f_10();
  v23->set_f_0(0xb0370afa81ddc06d);
  v21->set_f_2(s->substr(0, 460));
  v21->add_f_1(Message0::M8::E5_CONST_3);
  message->set_f_18(0x6);
  message->set_f_5(0x20f0e2d1);
  message->set_f_21(0xc007f591ff92ef9d);
  message->set_f_7(s->substr(0, 1));
  message->set_f_25(s->substr(0, 32));
  message->set_f_13(0x84e6c);
  Message0::M5* v24 = message->mutable_f_52();
  Message0::M5::M29* v25_0 = v24->add_f_7();
  v25_0->set_f_2(s->substr(0, 20));
  v25_0->set_f_4(0x16dd223ac9f2c4d3);
  v25_0->set_f_0(0.756508);
  v25_0->add_f_3(Message0::M5::M29::E6_CONST_4);
  v25_0->set_f_6(0xb);
  v25_0->set_f_5(s->substr(0, 26));
  v25_0->set_f_1(0xc248ac224dad8bff);
  v24->set_f_0(s->substr(0, 6));
  v24->set_f_1(0x3f5a341884392b9);
  v24->set_f_2(0x362c);
  v24->set_f_3(0x127f7530fa3a2abc);
  message->set_f_16(false);
  Message0::M7* v26 = message->mutable_f_54();
  v26->set_f_0(0x46);
  v26->set_f_2(true);
  v26->set_f_3(true);
  v26->set_f_1(false);
  message->set_f_10(0xa97f7870965edc85);
  Message0::M6* v27 = message->mutable_f_53();
  v27->set_f_0(0xcd232914deaa6034);
  message->add_f_26(Message0::E2_CONST_4);
  message->add_f_26(Message0::E2_CONST_3);
  message->add_f_26(Message0::E2_CONST_1);
  message->set_f_15(0x31d9a0c4);
  Message0::M1* v28 = message->mutable_f_47();
  v28->set_f_4(0x6);
  v28->add_f_5(Message0::M1::E3_CONST_1);
  v28->add_f_5(Message0::M1::E3_CONST_4);
  v28->add_f_5(Message0::M1::E3_CONST_5);
  v28->add_f_5(Message0::M1::E3_CONST_2);
  v28->set_f_2(0x6e);
  v28->set_f_0(s->substr(0, 4));
  v28->set_f_1(0x994a432d45fa2d60);
  message->set_f_27(0.248840);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M6* v0 = message->mutable_f_53();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_9(0xf4944cd);
  message->set_f_23(0xdbf601c03f782abf);
  message->set_f_7(s->substr(0, 31));
  Message0::M8* v1 = message->mutable_f_55();
  v1->set_f_4(0x33c83e9ac276ed1d);
  v1->add_f_1(Message0::M8::E5_CONST_2);
  Message0::M8::M25* v2 = v1->mutable_f_10();
  v2->set_f_0(0x535a83d09d9b84a1);
  Message0::M8::M27* v3 = v1->mutable_f_12();
  v3->set_f_0(0x4526157);
  v1->set_f_2(s->substr(0, 84));
  v1->set_f_0(0x73abe4c);
  message->set_f_12(0x1b6a070b78a6da63);
  message->set_f_19(0x109f);
  message->set_f_21(0x715a25bb3e8e3d50);
  message->set_f_20(s->substr(0, 24));
  message->set_f_8(0x41a3c0d);
  Message0::M1* v4 = message->mutable_f_47();
  v4->set_f_4(0x1f86db);
  Message0::M1::M30* v5_0 = v4->add_f_9();
  v5_0->set_f_13(0x91a196b);
  v5_0->set_f_9(0x4a);
  v5_0->set_f_2(false);
  v5_0->set_f_12(s->substr(0, 2));
  v5_0->set_f_3(0x5f06dc40);
  v5_0->set_f_11(0x688c2855);
  v5_0->set_f_7(s->substr(0, 57));
  v5_0->set_f_6(0x49b27499);
  v5_0->set_f_5(0x3f581a0bca53eb4a);
  v5_0->set_f_8(0x3336c86);
  v5_0->set_f_1(0x18);
  v5_0->add_f_15(Message0::M1::M30::E7_CONST_1);
  v5_0->add_f_15(Message0::M1::M30::E7_CONST_1);
  v5_0->add_f_15(Message0::M1::M30::E7_CONST_4);
  v5_0->add_f_15(Message0::M1::M30::E7_CONST_4);
  v5_0->set_f_14(0x2b);
  v5_0->set_f_4(s->substr(0, 16));
  v4->set_f_1(0xf68db1a3b40e3ddb);
  v4->set_f_0(s->substr(0, 1));
  v4->set_f_3(0x54);
  v4->add_f_5(Message0::M1::E3_CONST_5);
  message->set_f_16(false);
  Message0::M9* v6 = message->mutable_f_58();
  Message0::M9::M23* v7_0 = v6->add_f_11();
  (void)v7_0;  // Suppresses clang-tidy.
  v6->set_f_1(0x7c860fd65a54dce9);
  v6->set_f_2(0x63);
  Message0::M9::M22* v8 = v6->mutable_f_10();
  v8->set_f_0(0x30);
  Message0::M9::M22::M37* v9_0 = v8->add_f_4();
  v9_0->set_f_0(0x3baccda);
  message->add_f_26(Message0::E2_CONST_4);
  message->set_f_6(s->substr(0, 8));
  message->set_f_4(0x56cc51d1);
  message->set_f_13(0x959ec37);
  message->set_f_24(s->substr(0, 346));
  message->set_f_29(0x6);
  Message0::M4* v10_0 = message->add_f_51();
  Message0::M4::M31* v11 = v10_0->mutable_f_13();
  v11->set_f_3(0x826ae56);
  v11->set_f_6(0x2e);
  v11->set_f_1(0x76853d7);
  v11->set_f_9(s->substr(0, 73));
  v11->set_f_24(s->substr(0, 16));
  v11->set_f_23(s->substr(0, 26));
  v11->set_f_19(true);
  v11->set_f_28(0x175532e22c500e20);
  v11->set_f_18(0x3a);
  v11->set_f_0(0.844168);
  v11->set_f_29(0x202b179);
  v11->set_f_11(0x1aa211);
  v11->set_f_27(false);
  v11->set_f_2(0.310206);
  v11->set_f_8(0x444248f0);
  v11->set_f_16(0.495805);
  v11->set_f_25(s->substr(0, 28));
  Message0::M4::M31::E8 array_0[11] = {
      Message0::M4::M31::E8_CONST_2, Message0::M4::M31::E8_CONST_2,
      Message0::M4::M31::E8_CONST_5, Message0::M4::M31::E8_CONST_2,
      Message0::M4::M31::E8_CONST_2, Message0::M4::M31::E8_CONST_1,
      Message0::M4::M31::E8_CONST_3, Message0::M4::M31::E8_CONST_1,
      Message0::M4::M31::E8_CONST_2, Message0::M4::M31::E8_CONST_1,
      Message0::M4::M31::E8_CONST_1,
  };
  for (auto v : array_0) {
    v11->add_f_15(v);
  }
  v11->add_f_22(Message0::M4::M31::E9_CONST_5);
  v11->add_f_22(Message0::M4::M31::E9_CONST_5);
  v11->add_f_22(Message0::M4::M31::E9_CONST_1);
  v11->add_f_22(Message0::M4::M31::E9_CONST_5);
  v11->set_f_14(0xd89e64730606ebad);
  v11->set_f_20(0xf514e9545ee1bdcb);
  v11->set_f_17(0x139378);
  v11->set_f_5(0xbda4be5e89e48988);
  v11->set_f_21(0xeec06);
  v11->set_f_12(false);
  v11->set_f_13(0.771646);
  Message0::M4::M12* v12_0 = v10_0->add_f_6();
  v12_0->set_f_3(0x512aace80db06c9f);
  v12_0->set_f_5(s->substr(0, 7));
  v12_0->set_f_2(s->substr(0, 7));
  Message0::M4::M12::M33* v13 = v12_0->mutable_f_9();
  Message0::M4::M12::M33::M47* v14 = v13->mutable_f_3();
  v14->set_f_1(0x322ecfe5);
  v13->set_f_0(0xa7dc467);
  v12_0->set_f_1(true);
  Message0::M4::M12::M34* v15_0 = v12_0->add_f_11();
  Message0::M4::M12::M34::M42* v16 = v15_0->mutable_f_7();
  (void)v16;  // Suppresses clang-tidy.
  v15_0->set_f_2(0x3b);
  v15_0->set_f_0(0x9c822b1);
  v12_0->set_f_4(0x8fc2494ff1372ecb);
  Message0::M4::M18* v17 = v10_0->mutable_f_8();
  v17->set_f_2(0x152ec2);
  v17->set_f_1(0xd88256a0498c05c6);
  v17->set_f_0(0x6f);
  Message0::M7* v18 = message->mutable_f_54();
  Message0::M7::M28* v19 = v18->mutable_f_7();
  v19->set_f_0(0x3);
  v18->set_f_0(0x5b);
  v18->set_f_3(false);
  v18->set_f_1(true);
  v18->set_f_2(true);
  message->set_f_3(0xed6a7936e2230905);
  message->set_f_11(0x16369e);
  message->set_f_15(0x651db394);
  Message0::M2* v20 = message->mutable_f_49();
  v20->set_f_0(s->substr(0, 23));
  v20->set_f_2(0x26f017c2b98472bd);
  v20->set_f_1(0x44059fc2aa8b572f);
  Message0::M2::M11* v21 = v20->mutable_f_5();
  v21->set_f_0(0xa1e);
  v21->set_f_1(0xbcce0);
  Message0::M2::M20* v22_0 = v20->add_f_7();
  (void)v22_0;  // Suppresses clang-tidy.
  message->set_f_25(s->substr(0, 1));
  message->set_f_0(0x8c05a);
  Message0::M3* v23 = message->mutable_f_50();
  v23->add_f_2(Message0::M3::E4_CONST_3);
  v23->add_f_2(Message0::M3::E4_CONST_1);
  v23->add_f_2(Message0::M3::E4_CONST_4);
  v23->add_f_2(Message0::M3::E4_CONST_3);
  v23->set_f_3(0x4fe748ff4a37487b);
  v23->set_f_1(0x4dbdde64);
  message->set_f_22(s->substr(0, 23));
  message->set_f_5(0x1f4fa391);
  message->set_f_1(s->substr(0, 12));
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
}  // namespace fleetbench::rpc::P8::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_RPCPERF_PROTOS_P8_REQUEST_ACCESS_MESSAGE0_H_
