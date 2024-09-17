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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message1.pb.h"

namespace fleetbench::rpc::P5::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_49();
  Message1::M1::M40* v1 = v0_0->mutable_f_15();
  Message1::M1::M40::M59* v2_0 = v1->add_f_7();
  v2_0->set_f_0(false);
  Message1::M1::M40::M72* v3 = v1->mutable_f_8();
  v3->set_f_1(s->substr(0, 17));
  Message1::M1::M40::M48* v4 = v1->mutable_f_6();
  v4->set_f_0(true);
  v4->set_f_4(s->substr(0, 22));
  v4->set_f_1(s->substr(0, 1));
  v4->set_f_6(0x393ff30fc5b9f35d);
  v1->set_f_0(s->substr(0, 24));
  v0_0->set_f_3(0x524);
  v0_0->set_f_2(0x32d47);
  v0_0->set_f_1(0x79d07cb6ad742e9);
  v0_0->set_f_6(0x14033dbbc79eccf0);
  Message1::M1::M39* v5 = v0_0->mutable_f_14();
  (void)v5;  // Suppresses clang-tidy.
  Message1::M1::M46* v6_0 = v0_0->add_f_16();
  v6_0->set_f_0(s->substr(0, 13));
  v6_0->set_f_9(false);
  Message1::M1::M46::E16 array_1[17] = {
      Message1::M1::M46::E16_CONST_1, Message1::M1::M46::E16_CONST_5,
      Message1::M1::M46::E16_CONST_2, Message1::M1::M46::E16_CONST_2,
      Message1::M1::M46::E16_CONST_2, Message1::M1::M46::E16_CONST_5,
      Message1::M1::M46::E16_CONST_2, Message1::M1::M46::E16_CONST_1,
      Message1::M1::M46::E16_CONST_1, Message1::M1::M46::E16_CONST_3,
      Message1::M1::M46::E16_CONST_5, Message1::M1::M46::E16_CONST_5,
      Message1::M1::M46::E16_CONST_3, Message1::M1::M46::E16_CONST_4,
      Message1::M1::M46::E16_CONST_1, Message1::M1::M46::E16_CONST_1,
      Message1::M1::M46::E16_CONST_3,
  };
  for (auto v : array_1) {
    v6_0->add_f_17(v);
  }
  v6_0->set_f_4(0x31cb78de);
  v6_0->set_f_8(false);
  v6_0->set_f_1(s->substr(0, 17));
  Message1::M1::M46::E17 array_2[15] = {
      Message1::M1::M46::E17_CONST_5, Message1::M1::M46::E17_CONST_5,
      Message1::M1::M46::E17_CONST_4, Message1::M1::M46::E17_CONST_3,
      Message1::M1::M46::E17_CONST_4, Message1::M1::M46::E17_CONST_1,
      Message1::M1::M46::E17_CONST_3, Message1::M1::M46::E17_CONST_1,
      Message1::M1::M46::E17_CONST_5, Message1::M1::M46::E17_CONST_4,
      Message1::M1::M46::E17_CONST_4, Message1::M1::M46::E17_CONST_4,
      Message1::M1::M46::E17_CONST_5, Message1::M1::M46::E17_CONST_3,
      Message1::M1::M46::E17_CONST_1,
  };
  for (auto v : array_2) {
    v6_0->add_f_18(v);
  }
  v6_0->set_f_13(0x11255a);
  v6_0->set_f_14(s->substr(0, 5));
  v6_0->set_f_6(0xad85300);
  v6_0->set_f_7(0x3e);
  v6_0->set_f_16(0x87d364b);
  v6_0->set_f_15(0x5e);
  v6_0->set_f_12(0x49);
  Message1::M1::M28* v7 = v0_0->mutable_f_13();
  Message1::M1::M28::E12 array_3[19] = {
      Message1::M1::M28::E12_CONST_4, Message1::M1::M28::E12_CONST_4,
      Message1::M1::M28::E12_CONST_1, Message1::M1::M28::E12_CONST_2,
      Message1::M1::M28::E12_CONST_1, Message1::M1::M28::E12_CONST_1,
      Message1::M1::M28::E12_CONST_5, Message1::M1::M28::E12_CONST_5,
      Message1::M1::M28::E12_CONST_5, Message1::M1::M28::E12_CONST_3,
      Message1::M1::M28::E12_CONST_4, Message1::M1::M28::E12_CONST_1,
      Message1::M1::M28::E12_CONST_3, Message1::M1::M28::E12_CONST_3,
      Message1::M1::M28::E12_CONST_2, Message1::M1::M28::E12_CONST_5,
      Message1::M1::M28::E12_CONST_5, Message1::M1::M28::E12_CONST_4,
      Message1::M1::M28::E12_CONST_3,
  };
  for (auto v : array_3) {
    v7->add_f_4(v);
  }
  v7->set_f_5(0x2a3bd);
  v7->set_f_3(0xecf46de7ec9a9bc);
  v7->add_f_0(Message1::M1::M28::E11_CONST_3);
  v7->set_f_1(0x3ddb09e7b61b31d1);
  v7->set_f_7(s->substr(0, 105));
  v7->set_f_6(0x7aeffda5156248ff);
  v0_0->set_f_5(0x5862c696);
  message->set_f_4(0x56bf7302d1b48109);
  Message1::M6* v8 = message->mutable_f_55();
  v8->set_f_0(0x3eeae08a1f1ac9e6);
  Message1::M6::M25* v9 = v8->mutable_f_16();
  v9->set_f_0(0x116582d0e0dff440);
  v9->set_f_1(true);
  v9->set_f_3(Message1::M6::M25::E9_CONST_5);
  Message1::M6::M25::M82* v10_0 = v9->add_f_11();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->set_f_2(0x167857f0f2c21880);
  v9->set_f_4(0x57bfbcb0184c07dc);
  Message1::M6::M11* v11 = v8->mutable_f_12();
  Message1::M6::M11::M62* v12_0 = v11->add_f_2();
  v12_0->set_f_0(0x4dd3c8446d796c1e);
  Message1::M6::M12* v13 = v8->mutable_f_13();
  Message1::M6::M12::M57* v14_0 = v13->add_f_17();
  (void)v14_0;  // Suppresses clang-tidy.
  v13->set_f_4(s->substr(0, 17));
  v13->set_f_6(0x5c7855810c270982);
  v13->set_f_0(s->substr(0, 29));
  v13->set_f_5(0x365be8c2ca12cbf5);
  v13->set_f_2(0.480389);
  Message1::M6::M12::E3 array_4[18] = {
      Message1::M6::M12::E3_CONST_5, Message1::M6::M12::E3_CONST_4,
      Message1::M6::M12::E3_CONST_2, Message1::M6::M12::E3_CONST_1,
      Message1::M6::M12::E3_CONST_1, Message1::M6::M12::E3_CONST_3,
      Message1::M6::M12::E3_CONST_3, Message1::M6::M12::E3_CONST_4,
      Message1::M6::M12::E3_CONST_1, Message1::M6::M12::E3_CONST_5,
      Message1::M6::M12::E3_CONST_1, Message1::M6::M12::E3_CONST_2,
      Message1::M6::M12::E3_CONST_4, Message1::M6::M12::E3_CONST_2,
      Message1::M6::M12::E3_CONST_1, Message1::M6::M12::E3_CONST_5,
      Message1::M6::M12::E3_CONST_2, Message1::M6::M12::E3_CONST_1,
  };
  for (auto v : array_4) {
    v13->add_f_1(v);
  }
  Message1::M6::M10* v15 = v8->mutable_f_9();
  v15->set_f_0(0xa78b754);
  Message1::M6::M10::M55* v16_0 = v15->add_f_2();
  v16_0->set_f_1(0x29);
  v16_0->set_f_0(true);
  Message1::M6::M10::M55::M87* v17 = v16_0->mutable_f_8();
  v17->set_f_0(0x6b646198);
  v17->set_f_1(true);
  Message1::M6::M8* v18 = v8->mutable_f_7();
  Message1::M6::M8::M53* v19_0 = v18->add_f_11();
  v19_0->set_f_0(0x539567a03f0b0b5b);
  v18->set_f_1(s->substr(0, 6));
  v18->set_f_3(0x4ec56ea93ab29ae0);
  Message1::M6::M8::M69* v20 = v18->mutable_f_15();
  v20->set_f_5(0x52e4755d);
  v20->set_f_6(0.989198);
  v20->set_f_1(true);
  v20->set_f_2(0x34);
  v20->set_f_0(0x50c417e812cc653);
  v20->set_f_4(0x4047eed0fc77fb9d);
  v18->set_f_2(0x62);
  Message1::M6::M36* v21 = v8->mutable_f_20();
  (void)v21;  // Suppresses clang-tidy.
  Message1::M6::M20* v22 = v8->mutable_f_15();
  v22->set_f_2(0x71783d66c4a3445e);
  v22->set_f_1(0x40);
  Message1::M6::M20::M65* v23 = v22->mutable_f_4();
  v23->set_f_0(0x5e190c79d413c25);
  v22->set_f_0(false);
  Message1::M6::M30* v24 = v8->mutable_f_17();
  Message1::M6::M30::M74* v25_0 = v24->add_f_3();
  (void)v25_0;  // Suppresses clang-tidy.
  v24->set_f_0(0x7f8f72f);
  v8->set_f_1(s->substr(0, 2937));
  Message1::M6::M18* v26 = v8->mutable_f_14();
  Message1::M6::M18::M80* v27 = v26->mutable_f_4();
  Message1::M6::M18::M80::E20 array_5[21] = {
      Message1::M6::M18::M80::E20_CONST_5, Message1::M6::M18::M80::E20_CONST_2,
      Message1::M6::M18::M80::E20_CONST_4, Message1::M6::M18::M80::E20_CONST_5,
      Message1::M6::M18::M80::E20_CONST_4, Message1::M6::M18::M80::E20_CONST_3,
      Message1::M6::M18::M80::E20_CONST_4, Message1::M6::M18::M80::E20_CONST_5,
      Message1::M6::M18::M80::E20_CONST_5, Message1::M6::M18::M80::E20_CONST_4,
      Message1::M6::M18::M80::E20_CONST_5, Message1::M6::M18::M80::E20_CONST_2,
      Message1::M6::M18::M80::E20_CONST_4, Message1::M6::M18::M80::E20_CONST_3,
      Message1::M6::M18::M80::E20_CONST_1, Message1::M6::M18::M80::E20_CONST_3,
      Message1::M6::M18::M80::E20_CONST_1, Message1::M6::M18::M80::E20_CONST_4,
      Message1::M6::M18::M80::E20_CONST_4, Message1::M6::M18::M80::E20_CONST_1,
      Message1::M6::M18::M80::E20_CONST_2,
  };
  for (auto v : array_5) {
    v27->add_f_0(v);
  }
  v27->set_f_1(0.578609);
  Message1::M6::M18::M64* v28_0 = v26->add_f_3();
  v28_0->set_f_0(0x50);
  Message1::M6::M18::M64::M90* v29_0 = v28_0->add_f_3();
  (void)v29_0;  // Suppresses clang-tidy.
  v26->set_f_0(s->substr(0, 32));
  Message1::M6::M34* v30 = v8->mutable_f_19();
  Message1::M6::M34::M56* v31 = v30->mutable_f_5();
  v31->set_f_2(0x20d7e9cc67de6d83);
  v31->set_f_1(0.077009);
  v31->set_f_0(0x9);
  v30->set_f_0(0x4b1d1edb1542a219);
  message->set_f_28(0x6596e81df9688add);
  message->set_f_0(0x6b6cac8);
  message->set_f_7(0x6c);
  message->set_f_19(0x5e1bb8ea);
  message->set_f_8(0xf915029);
  message->set_f_14(0x2c0a743904eab11b);
  message->add_f_9(Message1::E1_CONST_5);
  message->set_f_16(false);
  message->set_f_17(0x45);
  message->set_f_1(0x23222);
  message->set_f_27(s->substr(0, 7));
  message->set_f_2(0x5f);
  message->set_f_18(true);
  Message1::M7* v32 = message->mutable_f_56();
  v32->set_f_19(true);
  v32->set_f_0(0x1f8d);
  v32->set_f_11(s->substr(0, 19));
  Message1::M7::M45* v33 = v32->mutable_f_56();
  v33->set_f_1(0x46);
  v33->set_f_0(0x449249b37737d020);
  Message1::M7::M45::M83* v34 = v33->mutable_f_7();
  (void)v34;  // Suppresses clang-tidy.
  v32->set_f_9(0x42fa925f10811ad7);
  v32->set_f_16(s->substr(0, 7));
  v32->set_f_7(s->substr(0, 17));
  v32->set_f_1(false);
  v32->set_f_14(s->substr(0, 21));
  v32->set_f_27(0x4bd705d);
  v32->set_f_5(0x3e);
  Message1::M7::M26* v35 = v32->mutable_f_50();
  Message1::M7::M26::M54* v36 = v35->mutable_f_15();
  Message1::M7::M26::M54::M92* v37_0 = v36->add_f_4();
  v37_0->set_f_13(0x5b);
  v37_0->set_f_6(0x64);
  v37_0->set_f_0(0x4be626747b1ab15e);
  v37_0->set_f_19(0x96a9045);
  v37_0->set_f_25(0xaa53a8d22ab5c3);
  v37_0->set_f_7(true);
  v37_0->add_f_12(Message1::M7::M26::M54::M92::E33_CONST_5);
  v37_0->set_f_17(0x751172ef47bb7fda);
  v37_0->set_f_2(0x8);
  v37_0->set_f_4(s->substr(0, 76));
  v37_0->set_f_28(s->substr(0, 96));
  v37_0->set_f_15(0.377735);
  v37_0->set_f_21(0x11e9068b65e5468b);
  v37_0->set_f_5(0x2469da2cf1fd1042);
  v37_0->set_f_23(true);
  v37_0->set_f_26(false);
  v37_0->set_f_27(0x60);
  v37_0->set_f_24(0x2d);
  v37_0->set_f_1(false);
  v37_0->set_f_16(Message1::M7::M26::M54::M92::E35_CONST_5);
  v37_0->set_f_11(0xb1f3eed);
  v37_0->set_f_29(s->substr(0, 400));
  v37_0->set_f_10(0x12c17520d5abdf4d);
  v36->set_f_0(0x1cc501f773971c09);
  Message1::M7::M26::M54::M88* v38_0 = v36->add_f_3();
  v38_0->set_f_0(s->substr(0, 346));
  v35->set_f_0(0xfbaeac8);
  v35->set_f_2(0.432278);
  Message1::M7::M26::M50* v39 = v35->mutable_f_10();
  v39->set_f_0(true);
  Message1::M7::M23* v40_0 = v32->add_f_49();
  v40_0->set_f_0(true);
  v32->set_f_18(false);
  v32->set_f_25(0xc49d813);
  v32->set_f_23(0x9e5c551624eb008);
  v32->set_f_20(s->substr(0, 22));
  v32->set_f_12(0x78b3db20);
  Message1::M7::M41* v41 = v32->mutable_f_53();
  v41->set_f_0(false);
  v41->set_f_3(0x1205c070);
  v41->set_f_1(true);
  Message1::M7::M41::M71* v42 = v41->mutable_f_7();
  v42->set_f_0(0x233e353d8b47ee6b);
  Message1::M7::M41::M71::M89* v43_0 = v42->add_f_3();
  Message1::M7::M41::M71::M89::M93* v44 = v43_0->mutable_f_4();
  v44->set_f_1(0.666282);
  v43_0->set_f_0(Message1::M7::M41::M71::M89::E26_CONST_5);
  v41->set_f_4(0x27);
  v32->set_f_28(0x78da403a8c3cdcf4);
  v32->set_f_30(0.760974);
  v32->set_f_26(0x387a22079c0f945d);
  v32->set_f_6(0x50);
  v32->set_f_10(0xcd10dc0);
  v32->set_f_22(0xf0d2dd9);
  v32->add_f_13(Message1::M7::E2_CONST_3);
  v32->set_f_17(s->substr(0, 454));
  v32->set_f_29(false);
  v32->set_f_21(0x71);
  message->set_f_24(s->substr(0, 2));
  message->set_f_5(0x4da8a54e0f15c882);
  message->set_f_11(s->substr(0, 24));
  message->set_f_10(0x46c85f6);
  message->set_f_22(0x4c7536259aa29004);
  Message1::M2* v45 = message->mutable_f_50();
  v45->set_f_0(0x7d);
  Message1::M2::M33* v46_0 = v45->add_f_6();
  v46_0->set_f_1(0x7040d1db5d3ce6e3);
  v46_0->set_f_4(0x2568e37e65d79683);
  v46_0->set_f_3(Message1::M2::M33::E13_CONST_2);
  v46_0->set_f_0(0x4d04a592);
  Message1::M2::M33::E14 array_6[15] = {
      Message1::M2::M33::E14_CONST_1, Message1::M2::M33::E14_CONST_1,
      Message1::M2::M33::E14_CONST_5, Message1::M2::M33::E14_CONST_1,
      Message1::M2::M33::E14_CONST_5, Message1::M2::M33::E14_CONST_3,
      Message1::M2::M33::E14_CONST_4, Message1::M2::M33::E14_CONST_4,
      Message1::M2::M33::E14_CONST_1, Message1::M2::M33::E14_CONST_4,
      Message1::M2::M33::E14_CONST_3, Message1::M2::M33::E14_CONST_2,
      Message1::M2::M33::E14_CONST_1, Message1::M2::M33::E14_CONST_4,
      Message1::M2::M33::E14_CONST_4,
  };
  for (auto v : array_6) {
    v46_0->add_f_5(v);
  }
  Message1::M2::M33::M60* v47_0 = v46_0->add_f_11();
  v47_0->set_f_3(0x2a);
  v47_0->set_f_4(0x6d);
  v47_0->set_f_1(0xec8d4de);
  v47_0->set_f_2(0x7);
  Message1::M2::M37* v48 = v45->mutable_f_7();
  v48->set_f_3(0x512f951d1);
  v48->set_f_1(0xad42640);
  v48->set_f_2(0x5cf81d3a2de301f8);
  Message1::M2::M38* v49_0 = v45->add_f_8();
  v49_0->set_f_2(0x29);
  Message1::M2::M38::M67* v50 = v49_0->mutable_f_22();
  v50->set_f_0(0x7a7b8b9b);
  v50->set_f_1(0xf0bcfa4);
  v50->set_f_2(0x65b9204f148587ce);
  v49_0->set_f_5(s->substr(0, 98));
  v49_0->set_f_7(0x42993a9ac7b8852d);
  v49_0->set_f_1(0x64cc9e4);
  v49_0->set_f_4(false);
  v49_0->set_f_3(0x5ba4ff68928a98e8);
  v49_0->set_f_9(0x2e4e4b7e0cccd9a3);
  v49_0->set_f_0(s->substr(0, 2));
  v49_0->set_f_8(0x4447766a605b30cf);
  Message1::M2::M21* v51 = v45->mutable_f_5();
  v51->set_f_0(0x34);
  message->set_f_25(0.965911);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  Message1::M1* v0_0 = message->add_f_49();
  Message1::M1::M39* v1 = v0_0->mutable_f_14();
  v1->set_f_0(s->substr(0, 5));
  v0_0->set_f_3(0xb47de0c);
  Message1::M1::M40* v2 = v0_0->mutable_f_15();
  Message1::M1::M40::M59* v3_0 = v2->add_f_7();
  v3_0->set_f_0(false);
  Message1::M1::M40::M48* v4 = v2->mutable_f_6();
  v4->set_f_3(0x1ee896b24b88439d);
  v4->set_f_4(s->substr(0, 1));
  v4->set_f_6(0x1bd46f5729c2ea9d);
  v4->set_f_2(0xb5f5e2d67518d6e);
  v4->set_f_5(0x16a18fc0b921111);
  Message1::M1::M40::M72* v5 = v2->mutable_f_8();
  v5->set_f_0(0x773627ee151786cb);
  Message1::M1::M15* v6 = v0_0->mutable_f_10();
  v6->set_f_0(0x5864ae00623937ad);
  v0_0->set_f_1(0x15f435d79fd6df5b);
  Message1::M1::M28* v7 = v0_0->mutable_f_13();
  v7->add_f_4(Message1::M1::M28::E12_CONST_2);
  v7->set_f_5(0x6d87262);
  v0_0->set_f_5(0x7bc25e86);
  v0_0->set_f_2(0x71);
  v0_0->set_f_0(true);
  Message1::M1::M46* v8_0 = v0_0->add_f_16();
  v8_0->set_f_13(0x6c72a42);
  v8_0->set_f_6(0x9);
  v8_0->set_f_7(0x5a81435);
  v8_0->set_f_11(0x3e);
  v8_0->set_f_19(0x450d22138c72a5e5);
  v8_0->set_f_3(0x5678f065e13a2cc4);
  v8_0->set_f_9(false);
  v8_0->set_f_15(0x9e4c2);
  v8_0->set_f_14(s->substr(0, 22));
  v8_0->set_f_4(0x2943a9cb);
  v8_0->add_f_18(Message1::M1::M46::E17_CONST_5);
  Message1::M1::M46::E16 array_0[16] = {
      Message1::M1::M46::E16_CONST_5, Message1::M1::M46::E16_CONST_2,
      Message1::M1::M46::E16_CONST_1, Message1::M1::M46::E16_CONST_5,
      Message1::M1::M46::E16_CONST_2, Message1::M1::M46::E16_CONST_1,
      Message1::M1::M46::E16_CONST_1, Message1::M1::M46::E16_CONST_5,
      Message1::M1::M46::E16_CONST_2, Message1::M1::M46::E16_CONST_3,
      Message1::M1::M46::E16_CONST_5, Message1::M1::M46::E16_CONST_5,
      Message1::M1::M46::E16_CONST_3, Message1::M1::M46::E16_CONST_4,
      Message1::M1::M46::E16_CONST_1, Message1::M1::M46::E16_CONST_4,
  };
  for (auto v : array_0) {
    v8_0->add_f_17(v);
  }
  v8_0->set_f_12(0xcb5d7ce);
  v8_0->set_f_5(s->substr(0, 2));
  v8_0->set_f_16(0xa);
  v8_0->set_f_8(false);
  message->set_f_18(false);
  Message1::M7* v9 = message->mutable_f_56();
  v9->set_f_12(0x52c1b935);
  v9->set_f_11(s->substr(0, 65));
  v9->set_f_30(0.747890);
  v9->set_f_6(0x23);
  v9->set_f_8(0x30d79bbb68660aa4);
  v9->set_f_28(0x13957e4789d1a7ce);
  v9->set_f_9(0x46da96213b722dad);
  Message1::M7::M29* v10 = v9->mutable_f_51();
  Message1::M7::M29::M78* v11_0 = v10->add_f_2();
  v11_0->set_f_1(0x50b7332b130c60e8);
  v11_0->set_f_0(Message1::M7::M29::M78::E19_CONST_5);
  Message1::M7::M29::M84* v12_0 = v10->add_f_3();
  v12_0->set_f_17(0x5209095f1346882b);
  v12_0->set_f_0(0x34b1ebb8e3c41014);
  v12_0->set_f_7(0x17a23f9f225bd57a);
  v12_0->set_f_20(0xf90003c);
  v12_0->set_f_26(0x7eb209ae42350d7);
  v12_0->set_f_4(s->substr(0, 18));
  v12_0->set_f_5(0x6ce4ed86e410d0ca);
  v12_0->set_f_14(0x2c3f16ea17ce5b58);
  v12_0->set_f_10(0x50bac194b4bb64e5);
  v12_0->set_f_11(0x19ea7a);
  v12_0->set_f_25(0x834);
  v12_0->set_f_6(true);
  v12_0->set_f_3(s->substr(0, 18));
  v12_0->set_f_21(Message1::M7::M29::M84::E24_CONST_1);
  v12_0->set_f_1(0x13);
  v12_0->set_f_13(0x7c);
  v12_0->set_f_24(0x610ddd7);
  v12_0->set_f_22(s->substr(0, 18));
  v12_0->set_f_23(0x4e087f44);
  v12_0->set_f_15(0xfc31b);
  v12_0->set_f_2(0x3117168119b9fa01);
  v9->set_f_1(false);
  v9->set_f_21(0x41);
  v9->set_f_24(0x696aba8fc0b48a08);
  Message1::M7::M44* v13_0 = v9->add_f_55();
  Message1::M7::M44::M68* v14 = v13_0->mutable_f_3();
  (void)v14;  // Suppresses clang-tidy.
  Message1::M7::M44::M75* v15_0 = v13_0->add_f_5();
  v15_0->set_f_0(0x6cef2a84b77851aa);
  v13_0->set_f_0(0x6bff95bfcfb43dc2);
  v9->set_f_25(0x63);
  v9->set_f_14(s->substr(0, 14));
  v9->set_f_20(s->substr(0, 787));
  v9->set_f_16(s->substr(0, 402));
  Message1::M7::M41* v16 = v9->mutable_f_53();
  v16->set_f_0(true);
  v16->set_f_4(0x84e2c);
  v16->set_f_3(0x3d13d998);
  v16->set_f_2(0x66fc518a04fbeb4c);
  v16->set_f_1(true);
  v9->set_f_18(true);
  v9->set_f_27(0x61b2cd49);
  v9->set_f_23(0x5ff583e085bcae5c);
  v9->set_f_15(0x3ce5076921fbb7b7);
  Message1::M7::M26* v17 = v9->mutable_f_50();
  Message1::M7::M26::M52* v18 = v17->mutable_f_13();
  v18->set_f_0(0x39aaabaccca42bd);
  v17->set_f_3(0.642755);
  Message1::M7::M26::M54* v19 = v17->mutable_f_15();
  Message1::M7::M26::M54::M88* v20_0 = v19->add_f_3();
  Message1::M7::M26::M54::M88::M94* v21_0 = v20_0->add_f_2();
  v21_0->set_f_11(0x13520b35830385c3);
  v21_0->set_f_16(s->substr(0, 18));
  v21_0->set_f_8(0x13d5cfb913031ffc);
  v21_0->set_f_15(0x74d9b06f1f9c266f);
  v21_0->set_f_17(0x9126bf5);
  v21_0->set_f_12(0x3aff8b4b8ba34d5);
  v21_0->set_f_18(s->substr(0, 19));
  v21_0->set_f_9(Message1::M7::M26::M54::M88::M94::E37_CONST_4);
  v21_0->set_f_14(s->substr(0, 59));
  v21_0->set_f_0(0x4d);
  v21_0->set_f_3(0x3a);
  v21_0->set_f_13(Message1::M7::M26::M54::M88::M94::E38_CONST_3);
  v21_0->set_f_7(0x737bb2ac9a8ec7e0);
  v21_0->set_f_1(true);
  Message1::M7::M26::M54::M88::M94::M98* v22 = v21_0->mutable_f_27();
  v22->set_f_0(0x2248);
  v21_0->set_f_2(s->substr(0, 20));
  v19->set_f_0(0x4e3a28ec42765532);
  v17->set_f_4(0x4124d470a51cd789);
  v17->set_f_1(0x34);
  Message1::M7::M26::M50* v23 = v17->mutable_f_10();
  v23->set_f_0(true);
  v17->set_f_2(0.616906);
  Message1::M7::M26::M61* v24_0 = v17->add_f_19();
  v24_0->set_f_0(s->substr(0, 1));
  v9->set_f_7(s->substr(0, 4));
  v9->set_f_17(s->substr(0, 842));
  v9->set_f_22(0x9717e5f);
  message->set_f_28(0x1a1720446e7e4f2);
  message->set_f_3(false);
  message->set_f_15(0x26b2);
  message->set_f_23(0x45cc3ee7cf22f08);
  message->add_f_9(Message1::E1_CONST_4);
  message->set_f_19(0x76e822ee);
  Message1::M6* v25 = message->mutable_f_55();
  Message1::M6::M18* v26 = v25->mutable_f_14();
  Message1::M6::M18::M64* v27_0 = v26->add_f_3();
  v27_0->set_f_0(0x7d);
  Message1::M6::M18::M64::M90* v28_0 = v27_0->add_f_3();
  v28_0->set_f_0(0x12);
  v26->set_f_0(s->substr(0, 319));
  Message1::M6::M36* v29 = v25->mutable_f_20();
  v29->set_f_0(0xe06);
  Message1::M6::M34* v30 = v25->mutable_f_19();
  Message1::M6::M34::M56* v31 = v30->mutable_f_5();
  v31->set_f_0(0x3163);
  v31->set_f_1(0.308028);
  Message1::M6::M34::M47* v32 = v30->mutable_f_2();
  v32->set_f_0(0x4786b9725775000d);
  Message1::M6::M20* v33 = v25->mutable_f_15();
  Message1::M6::M20::M65* v34 = v33->mutable_f_4();
  v34->set_f_0(0x540ac5ddf403230a);
  v33->set_f_2(0x4afb20752e86a9e7);
  v33->set_f_1(0x3795);
  v33->set_f_0(false);
  Message1::M6::M25* v35 = v25->mutable_f_16();
  Message1::M6::M25::M82* v36_0 = v35->add_f_11();
  v36_0->set_f_0(0x541f0a727855fa24);
  v35->set_f_4(0x12429df6037fe2bb);
  v35->set_f_0(0x2b0bdb33d467259b);
  v35->set_f_1(true);
  v35->set_f_2(0x73af9d39b0b47d9a);
  v25->set_f_1(s->substr(0, 12));
  v25->set_f_0(0x25c17e1613331bcd);
  Message1::M6::M11* v37 = v25->mutable_f_12();
  Message1::M6::M11::M62* v38_0 = v37->add_f_2();
  v38_0->set_f_0(0x70904fe428007f75);
  Message1::M6::M8* v39 = v25->mutable_f_7();
  Message1::M6::M8::M69* v40 = v39->mutable_f_15();
  v40->set_f_6(0.484180);
  v40->set_f_4(0x3c27bab0cb443d18);
  v40->set_f_1(false);
  v40->set_f_2(0x54);
  v40->set_f_5(0x46a8c70d);
  v39->set_f_3(0x69ce1f9dd3323124);
  Message1::M6::M8::M53* v41_0 = v39->add_f_11();
  v41_0->set_f_0(0x2cac3375d3a1cb90);
  v39->set_f_2(0x6a878fa);
  v39->set_f_0(0x6cb0dc0c7fc84ebd);
  Message1::M6::M8::M63* v42 = v39->mutable_f_13();
  v42->set_f_0(0x5f);
  message->set_f_1(0x92111b7);
  message->set_f_14(0x24875f577076a6e6);
  message->set_f_7(0x3f);
  Message1::M3* v43 = message->mutable_f_51();
  v43->set_f_2(s->substr(0, 7));
  Message1::M3::M32* v44 = v43->mutable_f_11();
  v44->set_f_0(0x2d);
  v43->set_f_4(s->substr(0, 87));
  v43->set_f_1(0x1776dfb1eba7b3dc);
  Message1::M3::M13* v45 = v43->mutable_f_7();
  v45->set_f_0(true);
  v45->set_f_1(false);
  v45->set_f_2(s->substr(0, 220));
  v43->set_f_0(0x48c9068ea2a50d29);
  Message1::M3::M27* v46_0 = v43->add_f_10();
  v46_0->add_f_1(Message1::M3::M27::E10_CONST_2);
  v46_0->set_f_0(s->substr(0, 126));
  Message1::M3::M42* v47 = v43->mutable_f_12();
  v47->set_f_1(0x7c9b7480);
  v47->set_f_5(0.575965);
  v47->set_f_3(0x4d);
  v47->set_f_4(Message1::M3::M42::E15_CONST_3);
  v47->set_f_0(s->substr(0, 11));
  v43->set_f_3(s->substr(0, 18));
  message->set_f_4(0x5d55bb62dceecce7);
  message->set_f_22(0x397df22ed8a9806c);
  message->set_f_5(0x71ca8bcff3c977ee);
  message->set_f_25(0.782381);
  message->set_f_0(0x7e);
  message->set_f_24(s->substr(0, 20));
  message->set_f_8(0x530e0d6);
  Message1::M5* v48 = message->mutable_f_53();
  Message1::M5::M31* v49 = v48->mutable_f_4();
  v49->set_f_0(0x62a456c40a0f3d01);
  Message1::M5::M16* v50 = v48->mutable_f_2();
  v50->set_f_0(0x5c171d29ac4eb543);
  Message1::M5::M16::M51* v51 = v50->mutable_f_2();
  v51->set_f_4(0x65dc4d3b3eb06cdf);
  v51->set_f_0(0x1d3b18bcb082707e);
  v51->set_f_2(0x7a8cd29b0a7ac4a1);
  message->set_f_29(0x170d9ec3e76efaab);
  Message1::M2* v52 = message->mutable_f_50();
  Message1::M2::M14* v53 = v52->mutable_f_3();
  v53->set_f_2(s->substr(0, 330));
  v53->set_f_1(0.312911);
  v53->set_f_5(0xfef3158);
  Message1::M2::M38* v54_0 = v52->add_f_8();
  v54_0->set_f_8(0x4956fe23215c5b98);
  v54_0->set_f_0(s->substr(0, 7));
  v54_0->set_f_6(0x311d3db0e);
  v54_0->set_f_10(s->substr(0, 699));
  v54_0->set_f_4(true);
  Message1::M2::M38::M67* v55 = v54_0->mutable_f_22();
  v55->set_f_2(0x33c7b2a9e5f2b340);
  v55->set_f_1(0x1ef3d7de);
  v55->set_f_0(0x3513ff88);
  v54_0->set_f_5(s->substr(0, 6));
  v54_0->set_f_9(0x62cf576283e6b7f2);
  v54_0->set_f_3(0x220d6e8445707494);
  Message1::M2::M21* v56 = v52->mutable_f_5();
  (void)v56;  // Suppresses clang-tidy.
  Message1::M2::M9* v57 = v52->mutable_f_2();
  v57->set_f_2(s->substr(0, 122));
  v57->set_f_0(0xea1142c);
  v57->set_f_4(0x26236851ae404f3e);
  v57->set_f_1(s->substr(0, 13));
  v52->set_f_0(0x3e);
  Message1::M2::M19* v58 = v52->mutable_f_4();
  Message1::M2::M19::M58* v59 = v58->mutable_f_3();
  (void)v59;  // Suppresses clang-tidy.
  v58->set_f_0(0x50729180);
  message->set_f_17(0xe95020c);
  message->set_f_27(s->substr(0, 102));
  message->set_f_2(0xa7a3c1);
  message->set_f_21(0.512051);
  message->set_f_13(s->substr(0, 21));
  message->set_f_20(false);
  message->set_f_11(s->substr(0, 8));
  message->set_f_16(false);
  message->set_f_6(false);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_28(0x21e81a32266c2394);
  message->set_f_27(s->substr(0, 24));
  message->set_f_10(0x11d6ee);
  message->set_f_25(0.008102);
  Message1::M6* v0 = message->mutable_f_55();
  Message1::M6::M36* v1 = v0->mutable_f_20();
  v1->set_f_0(0xa03db15);
  Message1::M6::M20* v2 = v0->mutable_f_15();
  v2->set_f_2(0x2120597e49dab05d);
  Message1::M6::M20::M65* v3 = v2->mutable_f_4();
  v3->set_f_0(0x7037bb7b48693581);
  v2->set_f_0(false);
  Message1::M6::M18* v4 = v0->mutable_f_14();
  v4->set_f_0(s->substr(0, 22));
  Message1::M6::M18::M80* v5 = v4->mutable_f_4();
  v5->add_f_0(Message1::M6::M18::M80::E20_CONST_5);
  v5->set_f_1(0.654152);
  Message1::M6::M18::M64* v6_0 = v4->add_f_3();
  (void)v6_0;  // Suppresses clang-tidy.
  Message1::M6::M12* v7 = v0->mutable_f_13();
  v7->set_f_5(0x268c9d11620a18d2);
  Message1::M6::M12::E3 array_0[14] = {
      Message1::M6::M12::E3_CONST_1, Message1::M6::M12::E3_CONST_3,
      Message1::M6::M12::E3_CONST_4, Message1::M6::M12::E3_CONST_3,
      Message1::M6::M12::E3_CONST_4, Message1::M6::M12::E3_CONST_4,
      Message1::M6::M12::E3_CONST_4, Message1::M6::M12::E3_CONST_4,
      Message1::M6::M12::E3_CONST_5, Message1::M6::M12::E3_CONST_5,
      Message1::M6::M12::E3_CONST_1, Message1::M6::M12::E3_CONST_4,
      Message1::M6::M12::E3_CONST_3, Message1::M6::M12::E3_CONST_4,
  };
  for (auto v : array_0) {
    v7->add_f_1(v);
  }
  v7->set_f_4(s->substr(0, 1));
  v7->set_f_6(0x2bdfd74e8a932e83);
  v7->set_f_3(0x233127d6360fd1cc);
  v7->set_f_7(0x6f4e3);
  Message1::M6::M12::M57* v8_0 = v7->add_f_17();
  v8_0->set_f_0(0xbb5f0);
  v7->set_f_2(0.011533);
  Message1::M6::M8* v9 = v0->mutable_f_7();
  v9->set_f_1(s->substr(0, 20));
  Message1::M6::M8::M53* v10_0 = v9->add_f_11();
  (void)v10_0;  // Suppresses clang-tidy.
  v9->set_f_2(0xaf83d);
  v9->set_f_0(0x7136a935f05ef6ab);
  Message1::M6::M8::M70* v11_0 = v9->add_f_16();
  v11_0->set_f_0(true);
  v9->set_f_3(0x2d4b409dbdb0d2fc);
  Message1::M6::M8::M69* v12 = v9->mutable_f_15();
  v12->set_f_1(true);
  v12->set_f_2(0x52);
  v12->set_f_0(0x6ca08f3e92d049c4);
  v12->set_f_3(true);
  v12->set_f_6(0.368447);
  Message1::M6::M10* v13 = v0->mutable_f_9();
  Message1::M6::M10::M55* v14_0 = v13->add_f_2();
  v14_0->set_f_0(true);
  v13->set_f_0(0x77);
  Message1::M6::M34* v15 = v0->mutable_f_19();
  Message1::M6::M34::M47* v16 = v15->mutable_f_2();
  v16->set_f_0(0x3b8b8a535151e7a2);
  v15->set_f_0(0x43da48e3915fe4fd);
  v0->set_f_0(0x7b68aea60b9792e4);
  Message1::M6::M30* v17 = v0->mutable_f_17();
  Message1::M6::M30::M74* v18_0 = v17->add_f_3();
  v18_0->add_f_0(Message1::M6::M30::M74::E18_CONST_5);
  v17->set_f_0(0x2a511760);
  Message1::M6::M25* v19 = v0->mutable_f_16();
  v19->set_f_5(0x2223be63b365fd73);
  v19->set_f_0(0x68c334dd22513335);
  v19->set_f_1(false);
  v19->set_f_4(0x56d649851204d2b5);
  Message1::M6::M25::M82* v20_0 = v19->add_f_11();
  v20_0->set_f_0(0xb5713218d5f09e);
  message->set_f_18(true);
  message->set_f_6(false);
  message->set_f_21(0.730623);
  message->set_f_1(0x20);
  Message1::M4* v21_0 = message->add_f_52();
  Message1::M4::M24* v22_0 = v21_0->add_f_8();
  v22_0->set_f_1(0x39efa2680d658f3c);
  v22_0->set_f_3(0x4efc6cffd);
  v22_0->set_f_2(false);
  v22_0->set_f_0(0x593c850);
  Message1::M4::M22* v23 = v21_0->mutable_f_7();
  v23->set_f_2(0x2dd249d8e29ca40d);
  v23->set_f_25(0.008750);
  v23->set_f_12(s->substr(0, 14));
  v23->set_f_14(s->substr(0, 18));
  v23->set_f_9(Message1::M4::M22::E6_CONST_5);
  v23->set_f_1(0x7560b81ad73b8092);
  v23->set_f_19(s->substr(0, 19));
  v23->add_f_10(Message1::M4::M22::E7_CONST_5);
  v23->set_f_0(s->substr(0, 8));
  v23->set_f_16(0x79);
  v23->set_f_5(0.222497);
  v23->set_f_22(Message1::M4::M22::E8_CONST_2);
  v23->set_f_24(s->substr(0, 19));
  v23->set_f_18(0x28b9f8a46d00b716);
  v23->set_f_7(0x2bc2f14130f79833);
  v23->set_f_15(0x29a52e8);
  v23->set_f_20(s->substr(0, 16));
  v23->set_f_17(0.278346);
  v23->set_f_4(s->substr(0, 14));
  v21_0->set_f_1(s->substr(0, 32));
  message->set_f_17(0x2e0e3fa);
  message->set_f_11(s->substr(0, 23));
  Message1::M5* v24 = message->mutable_f_53();
  Message1::M5::M35* v25_0 = v24->add_f_5();
  v25_0->set_f_0(s->substr(0, 2));
  Message1::M5::M35::M73* v26 = v25_0->mutable_f_10();
  Message1::M5::M35::M73::M86* v27 = v26->mutable_f_4();
  (void)v27;  // Suppresses clang-tidy.
  v26->set_f_0(s->substr(0, 7));
  v25_0->set_f_5(0x45);
  v25_0->set_f_4(0x4d26565a0d048018);
  v25_0->set_f_2(0.835372);
  v25_0->set_f_1(0x10);
  v24->set_f_0(true);
  Message1::M5::M16* v28 = v24->mutable_f_2();
  Message1::M5::M16::M51* v29 = v28->mutable_f_2();
  v29->set_f_3(0x30d52a83bb8d8a00);
  v29->set_f_1(0.065168);
  v29->set_f_0(0x3d148308b0090a9c);
  v28->set_f_0(0x10e919ad19b297d7);
  message->set_f_14(0x4ab26e3463ea6c57);
  message->set_f_15(0xdc60821);
  message->set_f_16(false);
  message->set_f_26(0x13);
  Message1::M1* v30_0 = message->add_f_49();
  Message1::M1::M15* v31 = v30_0->mutable_f_10();
  v31->set_f_0(0x5212aa6c39563fba);
  v30_0->set_f_5(0x4cc1dba0);
  v30_0->set_f_6(0x20516caf4afc8270);
  v30_0->set_f_0(false);
  v30_0->set_f_3(0xe);
  v30_0->set_f_4(s->substr(0, 41));
  Message1::M1::M40* v32 = v30_0->mutable_f_15();
  Message1::M1::M40::M59* v33_0 = v32->add_f_7();
  (void)v33_0;  // Suppresses clang-tidy.
  Message1::M1::M40::M72* v34 = v32->mutable_f_8();
  v34->set_f_0(0x1e8ad0da5a75ea3c);
  v32->set_f_0(s->substr(0, 30));
  Message1::M1::M40::M48* v35 = v32->mutable_f_6();
  v35->set_f_6(0x1d59d512cf71a19d);
  v35->set_f_4(s->substr(0, 24));
  v35->set_f_5(0x5cb2422976cd88db);
  v35->set_f_0(false);
  v35->set_f_3(0xf3b1e407ee3f00c);
  message->set_f_13(s->substr(0, 64));
  message->set_f_0(0xe00ddc1);
  message->set_f_20(false);
  message->set_f_23(0x36cc9ff16d49de3f);
  message->set_f_8(0x5479234);
  Message1::M7* v36 = message->mutable_f_56();
  v36->set_f_19(false);
  v36->set_f_25(0xca6959e);
  v36->set_f_22(0xbf54561);
  v36->set_f_18(true);
  v36->set_f_1(true);
  Message1::M7::M44* v37_0 = v36->add_f_55();
  Message1::M7::M44::M68* v38 = v37_0->mutable_f_3();
  v38->set_f_0(0x61ec6bc9ce106c6c);
  Message1::M7::M44::M75* v39_0 = v37_0->add_f_5();
  v39_0->set_f_0(0x5414d3a80b79b5eb);
  v36->set_f_26(0x311b943005587e91);
  v36->set_f_11(s->substr(0, 161));
  v36->set_f_0(0x80625fb);
  Message1::M7::M26* v40 = v36->mutable_f_50();
  Message1::M7::M26::M54* v41 = v40->mutable_f_15();
  Message1::M7::M26::M54::M92* v42_0 = v41->add_f_4();
  v42_0->set_f_5(0x680a64ddba305f38);
  v42_0->set_f_19(0x27);
  v42_0->set_f_24(0x50);
  v42_0->set_f_15(0.533922);
  v42_0->set_f_7(true);
  v42_0->add_f_9(Message1::M7::M26::M54::M92::E32_CONST_5);
  v42_0->set_f_20(false);
  v42_0->set_f_4(s->substr(0, 18));
  v42_0->set_f_16(Message1::M7::M26::M54::M92::E35_CONST_5);
  v42_0->set_f_2(0xb);
  v42_0->set_f_28(s->substr(0, 24));
  v42_0->set_f_23(false);
  v42_0->set_f_11(0xb62265a);
  v42_0->set_f_27(0x21);
  v42_0->set_f_22(s->substr(0, 4));
  v42_0->set_f_13(0xef2285a);
  v42_0->set_f_1(false);
  v42_0->set_f_17(0x7f7479b3409376e);
  v41->set_f_0(0x1070659d78acf26a);
  v40->set_f_1(0x38);
  v40->set_f_0(0xf05be7f);
  v40->set_f_3(0.376194);
  v40->set_f_2(0.513118);
  Message1::M7::M26::M61* v43_0 = v40->add_f_19();
  v43_0->set_f_0(s->substr(0, 472));
  Message1::M7::M26::M50* v44 = v40->mutable_f_10();
  v44->set_f_0(false);
  v40->set_f_4(0x3fdcf3b441b2566f);
  v36->set_f_3(true);
  Message1::M7::M41* v45 = v36->mutable_f_53();
  v45->set_f_3(0x45341f4);
  v45->set_f_1(false);
  Message1::M7::M41::M71* v46 = v45->mutable_f_7();
  Message1::M7::M41::M71::M89* v47_0 = v46->add_f_3();
  v47_0->set_f_0(Message1::M7::M41::M71::M89::E26_CONST_4);
  v46->set_f_0(0x340efcad66d6ddae);
  Message1::M7::M41::M81* v48_0 = v45->add_f_8();
  v48_0->set_f_2(0x34ca);
  Message1::M7::M41::M81::E21 array_1[21] = {
      Message1::M7::M41::M81::E21_CONST_1, Message1::M7::M41::M81::E21_CONST_5,
      Message1::M7::M41::M81::E21_CONST_5, Message1::M7::M41::M81::E21_CONST_5,
      Message1::M7::M41::M81::E21_CONST_3, Message1::M7::M41::M81::E21_CONST_4,
      Message1::M7::M41::M81::E21_CONST_3, Message1::M7::M41::M81::E21_CONST_3,
      Message1::M7::M41::M81::E21_CONST_1, Message1::M7::M41::M81::E21_CONST_4,
      Message1::M7::M41::M81::E21_CONST_2, Message1::M7::M41::M81::E21_CONST_1,
      Message1::M7::M41::M81::E21_CONST_2, Message1::M7::M41::M81::E21_CONST_5,
      Message1::M7::M41::M81::E21_CONST_1, Message1::M7::M41::M81::E21_CONST_2,
      Message1::M7::M41::M81::E21_CONST_2, Message1::M7::M41::M81::E21_CONST_2,
      Message1::M7::M41::M81::E21_CONST_5, Message1::M7::M41::M81::E21_CONST_3,
      Message1::M7::M41::M81::E21_CONST_5,
  };
  for (auto v : array_1) {
    v48_0->add_f_0(v);
  }
  v48_0->add_f_1(Message1::M7::M41::M81::E22_CONST_2);
  v45->set_f_0(true);
  v36->set_f_15(0x40cab6bcf5f67341);
  v36->set_f_30(0.693077);
  v36->set_f_16(s->substr(0, 50));
  v36->set_f_27(0x3908b97a);
  v36->set_f_14(s->substr(0, 20));
  v36->set_f_4(true);
  v36->set_f_29(true);
  v36->set_f_12(0x31a5fb09);
  v36->set_f_7(s->substr(0, 1639));
  Message1::M7::M23* v49_0 = v36->add_f_49();
  v49_0->set_f_0(true);
  Message1::M7::M45* v50 = v36->mutable_f_56();
  v50->set_f_1(0x4e6947e);
  Message1::M7::M45::M83* v51 = v50->mutable_f_7();
  v51->set_f_0(s->substr(0, 31));
  Message1::M7::M45::M83::M91* v52 = v51->mutable_f_2();
  v52->set_f_9(0x17e841c86a43f2c0);
  v52->set_f_5(0x3369f8ea58020f9c);
  v52->set_f_18(0x2f5d168722f36085);
  v52->add_f_19(Message1::M7::M45::M83::M91::E30_CONST_2);
  v52->set_f_12(0xf);
  v52->set_f_17(Message1::M7::M45::M83::M91::E29_CONST_5);
  v52->add_f_8(Message1::M7::M45::M83::M91::E27_CONST_3);
  v52->set_f_11(0x5db7c717e9d240d8);
  v52->set_f_16(0x3f);
  v52->set_f_10(0x8a40af);
  Message1::M7::M45::M83::M91::M96* v53 = v52->mutable_f_30();
  v53->set_f_1(s->substr(0, 80));
  v53->set_f_2(s->substr(0, 8));
  v53->set_f_3(s->substr(0, 6));
  v53->set_f_0(s->substr(0, 25));
  v52->set_f_0(0x78a423d3df43448);
  v52->set_f_7(0x6d01e96718bbbb3e);
  v52->set_f_13(0x6);
  v52->set_f_15(s->substr(0, 31));
  v50->set_f_0(0x67ee49a840d1399);
  v36->set_f_21(0xc47886f);
  Message1::M7::M29* v54 = v36->mutable_f_51();
  Message1::M7::M29::M78* v55_0 = v54->add_f_2();
  v55_0->set_f_1(0x4ef19ee711cf38);
  v54->set_f_0(s->substr(0, 15));
  v36->set_f_24(0x4d818bdfd46da623);
  v36->set_f_8(0x7a9de5b35327e61d);
  message->add_f_9(Message1::E1_CONST_2);
  message->set_f_3(false);
  message->set_f_5(0x4d4d222cbc0dfd33);
  message->set_f_4(0x418a6ef7e7497053);
  message->set_f_19(0x58d6a6be);
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  Message1::M4* v0_0 = message->add_f_52();
  Message1::M4::M22* v1 = v0_0->mutable_f_7();
  Message1::M4::M22::M49* v2 = v1->mutable_f_36();
  (void)v2;  // Suppresses clang-tidy.
  v1->set_f_12(s->substr(0, 83));
  v1->set_f_20(s->substr(0, 174));
  v1->set_f_14(s->substr(0, 36));
  v1->set_f_21(0x1c);
  v1->set_f_1(0x1341eb6306ae72c8);
  v1->set_f_5(0.714157);
  v1->set_f_24(s->substr(0, 20));
  v1->set_f_23(false);
  v1->set_f_16(0x84ac0d4);
  v1->set_f_22(Message1::M4::M22::E8_CONST_3);
  v1->set_f_2(0x515d89fc3a7afc49);
  v1->set_f_25(0.573045);
  v1->set_f_0(s->substr(0, 6));
  v1->set_f_7(0x73441e1a4dbe50fb);
  v1->set_f_3(0.980625);
  v1->set_f_18(0x7ccf64409d44044d);
  Message1::M4::M22::M79* v3 = v1->mutable_f_37();
  v3->set_f_0(0x4897767eeaa0fde0);
  v1->set_f_19(s->substr(0, 5));
  v1->set_f_9(Message1::M4::M22::E6_CONST_2);
  v1->set_f_17(0.291820);
  v1->set_f_11(0.562719);
  Message1::M7* v4 = message->mutable_f_56();
  v4->set_f_6(0x2f7f5b0);
  Message1::M7::M29* v5 = v4->mutable_f_51();
  Message1::M7::M29::M84* v6_0 = v5->add_f_3();
  v6_0->set_f_0(0x30b4361195df130a);
  v6_0->set_f_26(0x6c1ad48ef5d23ea);
  v6_0->set_f_24(0xb1251b5);
  v6_0->set_f_21(Message1::M7::M29::M84::E24_CONST_5);
  v6_0->set_f_12(0x3a443225);
  v6_0->set_f_5(0x7b36e30b1dbea468);
  v6_0->set_f_3(s->substr(0, 32));
  v6_0->set_f_20(0x33);
  v6_0->set_f_16(s->substr(0, 17));
  v6_0->set_f_9(true);
  v6_0->set_f_17(0x65687c69594f4002);
  v6_0->set_f_7(0x5675fbff077e71d7);
  v6_0->set_f_23(0x14b78eb2);
  v6_0->set_f_2(0xf304b0e573ad9f1);
  v6_0->add_f_27(Message1::M7::M29::M84::E25_CONST_1);
  v6_0->set_f_19(0.750838);
  v6_0->set_f_14(0x55881a699d8bd11);
  v6_0->set_f_18(true);
  v6_0->set_f_11(0x7c);
  v6_0->set_f_13(0x6e);
  v5->set_f_0(s->substr(0, 3));
  Message1::M7::M29::M78* v7_0 = v5->add_f_2();
  v7_0->set_f_0(Message1::M7::M29::M78::E19_CONST_2);
  Message1::M7::M45* v8 = v4->mutable_f_56();
  v8->set_f_1(0x1b);
  v8->set_f_0(0x31cee3dce0e604f5);
  v4->set_f_22(0x1f3c);
  v4->set_f_17(s->substr(0, 21));
  v4->set_f_21(0x1b);
  v4->set_f_4(false);
  v4->set_f_18(false);
  v4->set_f_25(0x39c5920);
  v4->set_f_3(false);
  Message1::M7::M41* v9 = v4->mutable_f_53();
  v9->set_f_4(0x6b);
  v9->set_f_2(0x569a8589a8e2289f);
  Message1::M7::M41::M81* v10_0 = v9->add_f_8();
  Message1::M7::M41::M81::E22 array_0[15] = {
      Message1::M7::M41::M81::E22_CONST_4, Message1::M7::M41::M81::E22_CONST_5,
      Message1::M7::M41::M81::E22_CONST_3, Message1::M7::M41::M81::E22_CONST_5,
      Message1::M7::M41::M81::E22_CONST_5, Message1::M7::M41::M81::E22_CONST_4,
      Message1::M7::M41::M81::E22_CONST_1, Message1::M7::M41::M81::E22_CONST_2,
      Message1::M7::M41::M81::E22_CONST_4, Message1::M7::M41::M81::E22_CONST_5,
      Message1::M7::M41::M81::E22_CONST_4, Message1::M7::M41::M81::E22_CONST_3,
      Message1::M7::M41::M81::E22_CONST_2, Message1::M7::M41::M81::E22_CONST_3,
      Message1::M7::M41::M81::E22_CONST_1,
  };
  for (auto v : array_0) {
    v10_0->add_f_1(v);
  }
  v10_0->set_f_3(0x2c0f52345112cd28);
  v10_0->set_f_2(0x51);
  v10_0->add_f_0(Message1::M7::M41::M81::E21_CONST_4);
  v9->set_f_0(false);
  v9->set_f_1(true);
  v9->set_f_3(0x61c9029f);
  v4->set_f_9(0xadf8e7af9b48984);
  v4->set_f_27(0x315f76c2);
  v4->set_f_26(0x195b02f604f6f6f1);
  v4->set_f_12(0x70b976fe);
  v4->set_f_23(0x668f5060fc3629d);
  v4->set_f_29(true);
  v4->set_f_10(0x70b6ab4);
  v4->set_f_30(0.967289);
  Message1::M7::M23* v11_0 = v4->add_f_49();
  v11_0->set_f_0(true);
  v4->set_f_14(s->substr(0, 12));
  v4->set_f_2(0.493650);
  v4->set_f_8(0x4def6970684365bb);
  Message1::M7::M44* v12_0 = v4->add_f_55();
  Message1::M7::M44::M75* v13_0 = v12_0->add_f_5();
  v13_0->set_f_0(0x292bf88681626ba7);
  v12_0->set_f_0(0x4ed7c4bf51739d47);
  Message1::M7::M44::M68* v14 = v12_0->mutable_f_3();
  v14->set_f_0(0x4b0bdb68cbdbb08c);
  v4->set_f_15(0x30e3bd72b5e993d2);
  Message1::M6* v15 = message->mutable_f_55();
  Message1::M6::M18* v16 = v15->mutable_f_14();
  Message1::M6::M18::M80* v17 = v16->mutable_f_4();
  v17->set_f_1(0.876540);
  v17->add_f_0(Message1::M6::M18::M80::E20_CONST_1);
  v16->set_f_0(s->substr(0, 19));
  Message1::M6::M8* v18 = v15->mutable_f_7();
  Message1::M6::M8::M53* v19_0 = v18->add_f_11();
  v19_0->set_f_0(0x4446cb8878bd9534);
  Message1::M6::M8::M70* v20_0 = v18->add_f_16();
  (void)v20_0;  // Suppresses clang-tidy.
  Message1::M6::M8::M69* v21 = v18->mutable_f_15();
  v21->set_f_6(0.579112);
  v21->set_f_3(true);
  v21->set_f_5(0x36c2b64f);
  v21->set_f_4(0x303cef9ffd22bc81);
  v21->set_f_1(false);
  Message1::M6::M8::M63* v22 = v18->mutable_f_13();
  v22->set_f_0(0x2f1c);
  v18->set_f_0(0x5c0583c647a8dd8);
  v18->set_f_1(s->substr(0, 24));
  v18->set_f_3(0x2fbb9f2d0396e50e);
  Message1::M6::M30* v23 = v15->mutable_f_17();
  v23->set_f_0(0x35fdec6d);
  Message1::M6::M30::M76* v24_0 = v23->add_f_4();
  v24_0->set_f_0(0x407eb7c649761f9);
  v24_0->set_f_1(0x646f111);
  v24_0->set_f_2(false);
  Message1::M6::M30::M74* v25_0 = v23->add_f_3();
  v25_0->add_f_0(Message1::M6::M30::M74::E18_CONST_3);
  Message1::M6::M36* v26 = v15->mutable_f_20();
  v26->set_f_0(0x8922d03);
  v15->set_f_1(s->substr(0, 11));
  Message1::M6::M10* v27 = v15->mutable_f_9();
  Message1::M6::M10::M55* v28_0 = v27->add_f_2();
  Message1::M6::M10::M55::M87* v29 = v28_0->mutable_f_8();
  v29->set_f_0(0x5e2327d);
  v29->set_f_1(true);
  v28_0->set_f_2(false);
  v28_0->set_f_0(true);
  v28_0->set_f_1(0x5b);
  v27->set_f_0(0x3dc97bc);
  Message1::M6::M25* v30 = v15->mutable_f_16();
  v30->set_f_4(0x221a788dd712f187);
  Message1::M6::M25::M82* v31_0 = v30->add_f_11();
  v31_0->set_f_0(0x35f2bb3f31abeced);
  v30->set_f_0(0x1e672807d94160ae);
  v30->set_f_3(Message1::M6::M25::E9_CONST_2);
  v30->set_f_1(false);
  v30->set_f_2(0x1174b7f4be20546c);
  Message1::M6::M20* v32 = v15->mutable_f_15();
  v32->set_f_2(0x177e89fbd14f6db4);
  v32->set_f_0(false);
  message->set_f_24(s->substr(0, 2));
  message->set_f_17(0xe319f);
  message->set_f_20(false);
  message->set_f_2(0x2c7e782);
  Message1::M1* v33_0 = message->add_f_49();
  v33_0->set_f_0(true);
  Message1::M1::M28* v34 = v33_0->mutable_f_13();
  v34->set_f_1(0x194cd0a5603b5dbc);
  v34->set_f_2(0x40a45c5db5256a2d);
  v34->add_f_4(Message1::M1::M28::E12_CONST_4);
  Message1::M1::M28::E11 array_1[13] = {
      Message1::M1::M28::E11_CONST_1, Message1::M1::M28::E11_CONST_3,
      Message1::M1::M28::E11_CONST_3, Message1::M1::M28::E11_CONST_3,
      Message1::M1::M28::E11_CONST_5, Message1::M1::M28::E11_CONST_5,
      Message1::M1::M28::E11_CONST_1, Message1::M1::M28::E11_CONST_2,
      Message1::M1::M28::E11_CONST_5, Message1::M1::M28::E11_CONST_5,
      Message1::M1::M28::E11_CONST_3, Message1::M1::M28::E11_CONST_2,
      Message1::M1::M28::E11_CONST_4,
  };
  for (auto v : array_1) {
    v34->add_f_0(v);
  }
  v34->set_f_6(0x2b0f1fe553bc0c84);
  v34->set_f_7(s->substr(0, 4));
  v34->set_f_3(0x837c223b62a40f2);
  v34->set_f_5(0xbb3f9bc);
  Message1::M1::M15* v35 = v33_0->mutable_f_10();
  (void)v35;  // Suppresses clang-tidy.
  Message1::M1::M40* v36 = v33_0->mutable_f_15();
  Message1::M1::M40::M48* v37 = v36->mutable_f_6();
  v37->set_f_4(s->substr(0, 29));
  v37->set_f_6(0x4f5b9543f40e22b2);
  v37->set_f_3(0x6688675805650fd7);
  Message1::M1::M40::M72* v38 = v36->mutable_f_8();
  v38->set_f_1(s->substr(0, 66));
  v38->set_f_0(0x4cbb415ec188c2e1);
  v33_0->set_f_6(0x42e90d61cd8f3327);
  Message1::M1::M39* v39 = v33_0->mutable_f_14();
  v39->set_f_0(s->substr(0, 1));
  Message1::M1::M46* v40_0 = v33_0->add_f_16();
  v40_0->set_f_8(true);
  v40_0->set_f_1(s->substr(0, 15));
  v40_0->add_f_17(Message1::M1::M46::E16_CONST_2);
  v40_0->set_f_12(0x112740);
  v40_0->set_f_4(0x1ec82cea);
  v40_0->set_f_3(0x2e77f892d7c0d079);
  v40_0->set_f_0(s->substr(0, 5));
  v40_0->set_f_9(false);
  v40_0->set_f_7(0x2804490);
  v40_0->set_f_19(0x72c4134747ceb4eb);
  v40_0->set_f_5(s->substr(0, 403));
  v40_0->set_f_14(s->substr(0, 20));
  v40_0->set_f_10(true);
  v40_0->add_f_18(Message1::M1::M46::E17_CONST_1);
  v40_0->add_f_18(Message1::M1::M46::E17_CONST_1);
  v40_0->add_f_18(Message1::M1::M46::E17_CONST_4);
  v40_0->set_f_13(0x7b02);
  message->set_f_15(0x1a7ea6);
  message->set_f_1(0x1cb275f);
  message->set_f_11(s->substr(0, 5));
  message->set_f_10(0x18);
  message->set_f_18(false);
  message->set_f_29(0x470a1b66e94a6e77);
  message->set_f_12(0x3ed2291325f9aef0);
  message->set_f_21(0.931839);
  message->set_f_26(0x13);
  message->set_f_25(0.938320);
  message->set_f_23(0x5af7771660173e36);
  message->set_f_3(true);
  message->set_f_5(0x27fa461d079dfc22);
  message->set_f_0(0x6c);
  Message1::M3* v41 = message->mutable_f_51();
  Message1::M3::M27* v42_0 = v41->add_f_10();
  v42_0->set_f_0(s->substr(0, 5));
  Message1::M3::M27::M77* v43 = v42_0->mutable_f_6();
  v43->set_f_0(s->substr(0, 181));
  v43->set_f_1(0x10fef2);
  Message1::M3::M27::E10 array_2[19] = {
      Message1::M3::M27::E10_CONST_5, Message1::M3::M27::E10_CONST_1,
      Message1::M3::M27::E10_CONST_3, Message1::M3::M27::E10_CONST_2,
      Message1::M3::M27::E10_CONST_2, Message1::M3::M27::E10_CONST_5,
      Message1::M3::M27::E10_CONST_4, Message1::M3::M27::E10_CONST_3,
      Message1::M3::M27::E10_CONST_2, Message1::M3::M27::E10_CONST_1,
      Message1::M3::M27::E10_CONST_2, Message1::M3::M27::E10_CONST_5,
      Message1::M3::M27::E10_CONST_2, Message1::M3::M27::E10_CONST_1,
      Message1::M3::M27::E10_CONST_2, Message1::M3::M27::E10_CONST_1,
      Message1::M3::M27::E10_CONST_3, Message1::M3::M27::E10_CONST_4,
      Message1::M3::M27::E10_CONST_4,
  };
  for (auto v : array_2) {
    v42_0->add_f_1(v);
  }
  v42_0->set_f_2(0x6126bc8eac945bec);
  v41->set_f_3(s->substr(0, 21));
  Message1::M3::M32* v44 = v41->mutable_f_11();
  (void)v44;  // Suppresses clang-tidy.
  v41->set_f_2(s->substr(0, 22));
  Message1::M3::M13* v45 = v41->mutable_f_7();
  v45->set_f_0(false);
  v45->set_f_2(s->substr(0, 30));
  v45->set_f_1(true);
  v41->set_f_0(0x75c58e176dba31f4);
  message->set_f_16(false);
  message->set_f_28(0x5d5307dc33bf1019);
  message->set_f_13(s->substr(0, 11));
  message->set_f_27(s->substr(0, 76));
  Message1::M2* v46 = message->mutable_f_50();
  v46->set_f_0(0xe49d03b);
  Message1::M2::M14* v47 = v46->mutable_f_3();
  v47->set_f_5(0x5a);
  v47->set_f_0(0x544871c8a0b90972);
  v47->set_f_3(0x17c6cc1b);
  v47->set_f_2(s->substr(0, 7));
  v47->set_f_4(0x7917d2eeb443f236);
  v47->set_f_1(0.172868);
  Message1::M2::M33* v48_0 = v46->add_f_6();
  Message1::M2::M33::E14 array_3[19] = {
      Message1::M2::M33::E14_CONST_1, Message1::M2::M33::E14_CONST_1,
      Message1::M2::M33::E14_CONST_4, Message1::M2::M33::E14_CONST_4,
      Message1::M2::M33::E14_CONST_3, Message1::M2::M33::E14_CONST_5,
      Message1::M2::M33::E14_CONST_3, Message1::M2::M33::E14_CONST_3,
      Message1::M2::M33::E14_CONST_4, Message1::M2::M33::E14_CONST_2,
      Message1::M2::M33::E14_CONST_2, Message1::M2::M33::E14_CONST_1,
      Message1::M2::M33::E14_CONST_4, Message1::M2::M33::E14_CONST_4,
      Message1::M2::M33::E14_CONST_4, Message1::M2::M33::E14_CONST_4,
      Message1::M2::M33::E14_CONST_1, Message1::M2::M33::E14_CONST_2,
      Message1::M2::M33::E14_CONST_4,
  };
  for (auto v : array_3) {
    v48_0->add_f_5(v);
  }
  v48_0->set_f_1(0x47b11a2f52f0406c);
  v48_0->set_f_3(Message1::M2::M33::E13_CONST_3);
  Message1::M2::M33::M60* v49_0 = v48_0->add_f_11();
  v49_0->set_f_2(0x46);
  v49_0->set_f_1(0x43);
  v49_0->set_f_4(0x5589de6);
  Message1::M2::M38* v50_0 = v46->add_f_8();
  v50_0->set_f_4(true);
  v50_0->set_f_9(0xe5a40e5d33eb521);
  v50_0->set_f_0(s->substr(0, 32));
  v50_0->set_f_7(0x640a0d838dfded1d);
  v50_0->set_f_1(0xa923587);
  v50_0->set_f_3(0xca2cc8fb52f79f6);
  v50_0->set_f_2(0x119067);
  Message1::M2::M37* v51 = v46->mutable_f_7();
  v51->set_f_2(0x5dc9ef00e8eee854);
  v51->set_f_0(0x47);
  Message1::M2::M9* v52 = v46->mutable_f_2();
  v52->set_f_4(0xeb55c3c85040b76);
  v52->set_f_3(0.049937);
  v52->set_f_2(s->substr(0, 421));
  v52->set_f_1(s->substr(0, 88));
  v52->set_f_0(0x75);
  message->set_f_6(true);
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
}  // namespace fleetbench::rpc::P5::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE1_H_
