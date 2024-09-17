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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/response/Message0.pb.h"

namespace fleetbench::rpc::P4::response::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_8(0x6b);
  message->set_f_9(Message0::E1_CONST_1);
  message->set_f_18(0x1b);
  message->set_f_21(s->substr(0, 6));
  message->set_f_13(0x42);
  message->set_f_3(0x21);
  message->set_f_12(0x54f051366602cedb);
  Message0::M3* v0 = message->mutable_f_34();
  Message0::M3::M14* v1 = v0->mutable_f_23();
  v1->set_f_1(0.979776);
  v1->set_f_0(0.349801);
  v0->set_f_10(0.462231);
  Message0::M3::M4* v2 = v0->mutable_f_16();
  v2->set_f_0(0x58);
  Message0::M3::M7* v3 = v0->mutable_f_19();
  v3->set_f_2(0.014097);
  v3->set_f_1(0.985238);
  v3->set_f_3(s->substr(0, 35));
  v0->set_f_6(Message0::M3::E4_CONST_3);
  Message0::M3::M12* v4 = v0->mutable_f_21();
  v4->set_f_5(0.687650);
  v4->set_f_3(0x6f);
  v4->set_f_6(0x746fe43bc3d1265f);
  v4->set_f_1(s->substr(0, 8));
  v4->set_f_0(0.045720);
  v4->set_f_4(0.995396);
  Message0::M3::M20* v5 = v0->mutable_f_24();
  v5->set_f_0(s->substr(0, 3));
  v0->set_f_0(0.977421);
  Message0::M3::M5* v6 = v0->mutable_f_18();
  v6->set_f_0(0x2f54);
  v6->set_f_3(0.040062);
  v6->set_f_1(0.355345);
  Message0::M3::M5::M25* v7 = v6->mutable_f_6();
  v7->set_f_0(0.064695);
  v7->set_f_2(0x1899f0b8c3e8c128);
  v7->set_f_1(0x3f);
  v7->set_f_8(0x54);
  v7->set_f_5(0x200d1b5ab503cd36);
  v7->set_f_4(0.098959);
  v7->set_f_6(0.734224);
  v6->set_f_2(0x4);
  v0->set_f_11(0.727971);
  v0->set_f_5(s->substr(0, 4));
  v0->set_f_4(s->substr(0, 5));
  v0->set_f_8(0.353959);
  v0->set_f_9(s->substr(0, 22));
  v0->set_f_2(0x512477f3351abee2);
  Message0::E3 array_1[6] = {
      Message0::E3_CONST_4, Message0::E3_CONST_2, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_4, Message0::E3_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_20(v);
  }
  Message0::M1* v8 = message->mutable_f_32();
  v8->set_f_0(0x31);
  Message0::M1::M23* v9 = v8->mutable_f_14();
  v9->set_f_2(0.223800);
  Message0::M1::M23::M28* v10 = v9->mutable_f_7();
  (void)v10;  // Suppresses clang-tidy.
  v9->set_f_0(0x1f);
  v9->set_f_4(0.308942);
  v9->set_f_3(s->substr(0, 6));
  Message0::M1::M19* v11_0 = v8->add_f_10();
  v11_0->set_f_0(0.287243);
  Message0::M1::M15* v12 = v8->mutable_f_6();
  v12->set_f_0(0.358080);
  Message0::M1::M17* v13 = v8->mutable_f_9();
  v13->set_f_0(0.053361);
  Message0::M1::M21* v14 = v8->mutable_f_11();
  v14->set_f_0(0x3d);
  v14->set_f_2(0x1c);
  v14->set_f_1(s->substr(0, 18));
  Message0::M1::M22* v15 = v8->mutable_f_12();
  (void)v15;  // Suppresses clang-tidy.
  Message0::M1::M16* v16 = v8->mutable_f_7();
  v16->set_f_0(0.842537);
  v16->set_f_4(0x28);
  v16->set_f_1(0x46);
  message->set_f_7(0.522086);
  message->set_f_2(0x2c);
  message->set_f_16(s->substr(0, 2));
  message->set_f_6(0.999576);
  message->set_f_23(0.770094);
  Message0::M2* v17 = message->mutable_f_33();
  Message0::M2::M18* v18_0 = v17->add_f_8();
  (void)v18_0;  // Suppresses clang-tidy.
  v17->set_f_0(0.545190);
  Message0::M2::M6* v19 = v17->mutable_f_7();
  v19->set_f_0(0x72);
  v17->set_f_2(0.256505);
  v17->set_f_4(s->substr(0, 5));
  v17->set_f_3(0.325160);
  v17->set_f_5(0.843009);
  message->set_f_10(s->substr(0, 24));
  message->set_f_5(0.646433);
  message->set_f_1(0.710849);
  message->set_f_15(0.392684);
  message->set_f_4(0x6846fd157b6dd85f);
  message->set_f_11(Message0::E2_CONST_3);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_14(s->substr(0, 20));
  Message0::M1* v0 = message->mutable_f_32();
  Message0::M1::M17* v1 = v0->mutable_f_9();
  v1->set_f_0(0.594231);
  v1->set_f_2(0.709846);
  Message0::M1::M16* v2 = v0->mutable_f_7();
  v2->set_f_1(0x7);
  v2->set_f_0(0.134799);
  v2->set_f_2(0x70e7c16a2c03d85e);
  Message0::M1::M19* v3_0 = v0->add_f_10();
  v3_0->set_f_0(0.527347);
  Message0::M1::M9* v4 = v0->mutable_f_4();
  Message0::M1::M9::M30* v5_0 = v4->add_f_2();
  v5_0->set_f_3(false);
  v5_0->set_f_8(0x57);
  v5_0->set_f_2(0x15);
  v5_0->set_f_0(0x42dbf4d3545f3c9a);
  v5_0->set_f_1(0x1a59b7b673aa9aae);
  v5_0->set_f_9(0xd3d25);
  v5_0->set_f_6(0.962320);
  v5_0->set_f_5(0x5d);
  v5_0->set_f_10(0.298956);
  v5_0->set_f_12(0.072736);
  Message0::M1::M8* v6_0 = v0->add_f_2();
  v6_0->set_f_5(Message0::M1::M8::E5_CONST_2);
  v6_0->set_f_3(0x12);
  v6_0->set_f_1(s->substr(0, 4));
  v6_0->set_f_4(0x1c685d84bad5bba0);
  v6_0->set_f_0(0.223191);
  v6_0->set_f_2(0.002009);
  Message0::M1::M22* v7 = v0->mutable_f_12();
  v7->set_f_0(0x7a);
  Message0::M1::M10* v8_0 = v0->add_f_5();
  v8_0->set_f_0(0x3c);
  Message0::M1::M23* v9 = v0->mutable_f_14();
  Message0::M1::M23::M28* v10 = v9->mutable_f_7();
  v10->set_f_0(0.107092);
  v9->set_f_3(s->substr(0, 3));
  v9->set_f_0(0x6d);
  v9->set_f_2(0.201842);
  v9->set_f_1(0.685595);
  v9->set_f_4(0.337991);
  message->set_f_17(s->substr(0, 6));
  message->set_f_18(0x25);
  message->set_f_9(Message0::E1_CONST_1);
  message->set_f_10(s->substr(0, 7));
  message->set_f_5(0.254771);
  message->set_f_16(s->substr(0, 3));
  message->set_f_11(Message0::E2_CONST_4);
  message->set_f_0(0x52);
  message->set_f_13(0x2f);
  message->set_f_15(0.329210);
  Message0::M3* v11 = message->mutable_f_34();
  Message0::M3::M5* v12 = v11->mutable_f_18();
  v12->set_f_1(0.878644);
  v12->set_f_2(0x72);
  v12->set_f_3(0.481878);
  Message0::M3::M5::M25* v13 = v12->mutable_f_6();
  v13->set_f_5(0x5778d415a77055fb);
  v13->set_f_0(0.418573);
  v13->set_f_8(0x69);
  v13->set_f_2(0x673ca383cc9e9dd1);
  v13->set_f_7(0.585051);
  v13->set_f_3(0x4c0bbdbebb270e96);
  Message0::M3::M13* v14 = v11->mutable_f_22();
  v14->set_f_1(0.687039);
  v14->set_f_2(0.594992);
  Message0::M3::M13::E6 array_0[5] = {
      Message0::M3::M13::E6_CONST_3, Message0::M3::M13::E6_CONST_4,
      Message0::M3::M13::E6_CONST_4, Message0::M3::M13::E6_CONST_5,
      Message0::M3::M13::E6_CONST_5,
  };
  for (auto v : array_0) {
    v14->add_f_0(v);
  }
  v14->set_f_4(0.718350);
  v14->set_f_3(0.027361);
  v11->set_f_4(s->substr(0, 24));
  Message0::M3::M7* v15 = v11->mutable_f_19();
  v15->set_f_2(0.452464);
  v15->set_f_1(0.602034);
  v15->set_f_0(0x2a);
  v15->set_f_3(s->substr(0, 54));
  Message0::M3::M14* v16 = v11->mutable_f_23();
  v16->set_f_1(0.578251);
  v16->set_f_0(0.355792);
  v11->set_f_10(0.969336);
  v11->set_f_0(0.699105);
  v11->set_f_9(s->substr(0, 32));
  v11->set_f_5(s->substr(0, 5));
  v11->set_f_6(Message0::M3::E4_CONST_4);
  v11->set_f_8(0.062765);
  v11->set_f_2(0x6eea17dbde6cde32);
  Message0::M3::M4* v17 = v11->mutable_f_16();
  v17->set_f_0(0x39);
  v11->set_f_1(0.886274);
  Message0::M3::M12* v18 = v11->mutable_f_21();
  v18->set_f_2(0.336153);
  v18->set_f_6(0x369040fe425570e5);
  v18->set_f_5(0.439975);
  v18->set_f_3(0x16);
  v18->set_f_0(0.718008);
  v18->set_f_7(0.807575);
  v11->set_f_11(0.969865);
  Message0::M3::M11* v19 = v11->mutable_f_20();
  v19->set_f_0(0x20);
  Message0::M3::M11::M29* v20 = v19->mutable_f_2();
  v20->set_f_1(0x3a);
  v20->set_f_4(0.118834);
  v20->set_f_0(0.742837);
  v20->set_f_2(0.968856);
  v20->set_f_3(0.383598);
  Message0::M3::M11::M29::M32* v21 = v20->mutable_f_6();
  v21->set_f_0(0x48);
  v21->set_f_1(0x1e);
  v21->set_f_2(0.847832);
  message->set_f_12(0x131d873c157f8eea);
  message->set_f_23(0.901838);
  message->set_f_3(0x23);
  message->set_f_6(0.904769);
  message->set_f_4(0x48fbf66f593042a7);
  message->set_f_1(0.044982);
  message->add_f_20(Message0::E3_CONST_5);
  message->add_f_20(Message0::E3_CONST_5);
  message->set_f_21(s->substr(0, 5));
  message->set_f_19(0.044168);
  message->set_f_8(0x4c);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_23(0.552215);
  message->set_f_5(0.111775);
  message->set_f_19(0.996219);
  Message0::M1* v0 = message->mutable_f_32();
  Message0::M1::M10* v1_0 = v0->add_f_5();
  v1_0->set_f_0(0x2b);
  Message0::M1::M10::M26* v2 = v1_0->mutable_f_2();
  Message0::M1::M10::M26::M31* v3_0 = v2->add_f_3();
  v3_0->set_f_0(0x3a);
  v2->set_f_0(0.827805);
  Message0::M1::M19* v4_0 = v0->add_f_10();
  v4_0->set_f_0(0.420599);
  Message0::M1::M21* v5 = v0->mutable_f_11();
  v5->set_f_0(0x59);
  v5->set_f_1(s->substr(0, 2));
  Message0::M1::M8* v6_0 = v0->add_f_2();
  v6_0->set_f_4(0x4ef1b613c3e3d6f1);
  v6_0->set_f_1(s->substr(0, 3));
  v6_0->set_f_0(0.419331);
  v6_0->set_f_2(0.631143);
  v6_0->set_f_5(Message0::M1::M8::E5_CONST_5);
  Message0::M1::M23* v7 = v0->mutable_f_14();
  v7->set_f_1(0.988166);
  v7->set_f_4(0.948432);
  v7->set_f_3(s->substr(0, 1));
  v7->set_f_2(0.951857);
  v7->set_f_0(0x5d);
  Message0::M1::M23::M28* v8 = v7->mutable_f_7();
  v8->set_f_0(0.829791);
  Message0::M1::M9* v9 = v0->mutable_f_4();
  v9->set_f_0(0x6d6b95712c4ac359);
  Message0::M1::M9::M30* v10_0 = v9->add_f_2();
  v10_0->set_f_6(0.767484);
  v10_0->set_f_7(0.095510);
  v10_0->set_f_12(0.904796);
  v10_0->set_f_4(0x49247f4172b1ff10);
  v10_0->set_f_11(0x53);
  v10_0->set_f_5(0x69);
  v10_0->set_f_9(0x10);
  v10_0->set_f_8(0x55);
  Message0::M1::M17* v11 = v0->mutable_f_9();
  v11->set_f_0(0.704980);
  Message0::M1::M16* v12 = v0->mutable_f_7();
  v12->set_f_3(0.200064);
  v12->set_f_2(0x2b188ad4f4b79800);
  v12->set_f_0(0.231285);
  v12->set_f_1(0x52);
  Message0::M1::M22* v13 = v0->mutable_f_12();
  v13->set_f_0(0x7d);
  v0->set_f_0(0x18);
  Message0::M1::M15* v14 = v0->mutable_f_6();
  Message0::M1::M15::M27* v15 = v14->mutable_f_2();
  v15->set_f_2(0x51abc57b66ff01b1);
  v15->set_f_3(0.034259);
  v15->set_f_0(0.484306);
  v15->set_f_4(0.184426);
  v15->set_f_1(0.891571);
  message->set_f_4(0x1530cf3a686aaddd);
  message->set_f_16(s->substr(0, 3));
  message->set_f_6(0.671497);
  message->set_f_12(0x3d04ad001048b18c);
  message->set_f_3(0x48);
  message->set_f_11(Message0::E2_CONST_4);
  message->add_f_20(Message0::E3_CONST_2);
  message->set_f_7(0.878257);
  message->set_f_18(0x46);
  message->set_f_8(0x3c);
  message->set_f_15(0.600886);
  message->set_f_9(Message0::E1_CONST_5);
  Message0::M3* v16 = message->mutable_f_34();
  Message0::M3::M13* v17 = v16->mutable_f_22();
  v17->set_f_3(0.508837);
  Message0::M3::M13::M24* v18_0 = v17->add_f_8();
  Message0::M3::M13::M24::M34* v19 = v18_0->mutable_f_3();
  v19->set_f_1(0.179664);
  v19->set_f_4(s->substr(0, 18));
  v19->set_f_3(0x213ad0a165883f77);
  v19->set_f_5(0x6c);
  v18_0->set_f_0(0x22);
  Message0::M3::M13::E6 array_0[7] = {
      Message0::M3::M13::E6_CONST_5, Message0::M3::M13::E6_CONST_3,
      Message0::M3::M13::E6_CONST_2, Message0::M3::M13::E6_CONST_4,
      Message0::M3::M13::E6_CONST_3, Message0::M3::M13::E6_CONST_2,
      Message0::M3::M13::E6_CONST_2,
  };
  for (auto v : array_0) {
    v17->add_f_0(v);
  }
  v17->set_f_2(0.298671);
  v16->set_f_5(s->substr(0, 7));
  v16->set_f_3(0x72);
  Message0::M3::M4* v20 = v16->mutable_f_16();
  v20->set_f_0(0x163);
  v16->set_f_7(0.559053);
  Message0::M3::M5* v21 = v16->mutable_f_18();
  v21->set_f_3(0.072397);
  v21->set_f_2(0x32);
  Message0::M3::M5::M25* v22 = v21->mutable_f_6();
  v22->set_f_2(0x66d0282ce4ba93cf);
  v22->set_f_1(0x35);
  v22->set_f_0(0.295560);
  v22->set_f_5(0x12aeca40a2c73b90);
  v22->set_f_3(0x5bac06c9a2241860);
  v22->set_f_4(0.728141);
  v22->set_f_6(0.040051);
  v22->set_f_8(0x7d);
  Message0::M3::M11* v23 = v16->mutable_f_20();
  v23->set_f_0(0x4d);
  v16->set_f_9(s->substr(0, 8));
  v16->set_f_4(s->substr(0, 30));
  v16->set_f_2(0x72b97999a3b411ac);
  v16->set_f_1(0.794497);
  Message0::M3::M7* v24 = v16->mutable_f_19();
  v24->set_f_0(0x3);
  v24->set_f_1(0.547217);
  v24->set_f_2(0.167458);
  Message0::M3::M12* v25 = v16->mutable_f_21();
  v25->set_f_4(0.621180);
  v25->set_f_2(0.663928);
  v25->set_f_3(0x24);
  v25->set_f_1(s->substr(0, 24));
  v25->set_f_0(0.559223);
  v25->set_f_7(0.341902);
  v25->set_f_6(0x43f90fa32cb2fdc1);
  v25->set_f_5(0.434974);
  v16->set_f_10(0.356197);
  Message0::M2* v26 = message->mutable_f_33();
  v26->set_f_3(0.899804);
  v26->set_f_1(0.648190);
  Message0::M2::M18* v27_0 = v26->add_f_8();
  v27_0->set_f_0(0x638792ce49a00746);
  v27_0->set_f_1(0.916836);
  v26->set_f_4(s->substr(0, 30));
  Message0::M2::M6* v28 = v26->mutable_f_7();
  v28->set_f_0(0x24);
  message->set_f_22(0x54);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_5(0.895641);
  message->set_f_11(Message0::E2_CONST_1);
  message->set_f_22(0x11);
  message->set_f_8(0x33);
  message->set_f_17(s->substr(0, 19));
  message->set_f_15(0.460047);
  Message0::M1* v0 = message->mutable_f_32();
  Message0::M1::M23* v1 = v0->mutable_f_14();
  v1->set_f_1(0.526373);
  v1->set_f_2(0.685292);
  v1->set_f_3(s->substr(0, 4));
  Message0::M1::M23::M28* v2 = v1->mutable_f_7();
  v2->set_f_0(0.217229);
  v1->set_f_4(0.955891);
  Message0::M1::M22* v3 = v0->mutable_f_12();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M1::M15* v4 = v0->mutable_f_6();
  v4->set_f_0(0.324681);
  Message0::M1::M15::M27* v5 = v4->mutable_f_2();
  v5->set_f_3(0.050864);
  v5->set_f_4(0.047061);
  v5->set_f_2(0x2130481b9db53cb5);
  v5->set_f_0(0.327330);
  Message0::M1::M16* v6 = v0->mutable_f_7();
  v6->set_f_0(0.609258);
  v6->set_f_3(0.750326);
  v6->set_f_1(0x1d);
  v6->set_f_4(0x20);
  v6->set_f_2(0x73707713136dfc82);
  v0->set_f_0(0x11);
  Message0::M1::M10* v7_0 = v0->add_f_5();
  Message0::M1::M10::M26* v8 = v7_0->mutable_f_2();
  Message0::M1::M10::M26::M33* v9 = v8->mutable_f_4();
  v9->set_f_0(0x2c0c7d6ba47e3258);
  v9->set_f_1(s->substr(0, 21));
  v8->set_f_0(0.175946);
  Message0::M1::M10::M26::M31* v10_0 = v8->add_f_3();
  v10_0->set_f_0(0x23);
  Message0::M1::M8* v11_0 = v0->add_f_2();
  v11_0->set_f_5(Message0::M1::M8::E5_CONST_1);
  v11_0->set_f_1(s->substr(0, 8));
  v11_0->set_f_3(0x6);
  Message0::M1::M17* v12 = v0->mutable_f_9();
  v12->set_f_0(0.428600);
  v12->set_f_1(0x5b);
  message->set_f_19(0.601355);
  message->set_f_9(Message0::E1_CONST_5);
  message->set_f_0(0x49);
  message->set_f_10(s->substr(0, 18));
  message->set_f_7(0.010426);
  message->set_f_6(0.353386);
  Message0::M3* v13 = message->mutable_f_34();
  v13->set_f_0(0.939621);
  Message0::M3::M12* v14 = v13->mutable_f_21();
  v14->set_f_1(s->substr(0, 4));
  v14->set_f_7(0.309527);
  v14->set_f_0(0.421330);
  v14->set_f_6(0x124665da0137efb8);
  v14->set_f_3(0xb231b01);
  v14->set_f_4(0.872597);
  Message0::M3::M4* v15 = v13->mutable_f_16();
  (void)v15;  // Suppresses clang-tidy.
  Message0::M3::M20* v16 = v13->mutable_f_24();
  v16->set_f_0(s->substr(0, 1));
  v13->set_f_3(0x33);
  v13->set_f_9(s->substr(0, 7));
  v13->set_f_1(0.339236);
  Message0::M3::M13* v17 = v13->mutable_f_22();
  Message0::M3::M13::M24* v18_0 = v17->add_f_8();
  Message0::M3::M13::M24::M34* v19 = v18_0->mutable_f_3();
  v19->set_f_4(s->substr(0, 4));
  v19->set_f_2(0x6f);
  v19->set_f_5(0x68);
  v19->set_f_1(0.158298);
  v19->set_f_3(0x596e65c911255ae);
  v19->set_f_0(0x74bc516e1e526cad);
  v18_0->set_f_0(0x48);
  v17->set_f_2(0.721481);
  v17->set_f_4(0.168896);
  v17->set_f_1(0.757695);
  Message0::M3::M14* v20 = v13->mutable_f_23();
  v20->set_f_1(0.490985);
  v20->set_f_0(0.652459);
  v13->set_f_2(0x7f6094ff37842b78);
  v13->set_f_6(Message0::M3::E4_CONST_3);
  Message0::M3::M7* v21 = v13->mutable_f_19();
  v21->set_f_2(0.199696);
  v13->set_f_11(0.932643);
  v13->set_f_10(0.548510);
  v13->set_f_8(0.589587);
  message->set_f_18(0x7d);
  message->set_f_21(s->substr(0, 8));
  Message0::M2* v22 = message->mutable_f_33();
  Message0::M2::M18* v23_0 = v22->add_f_8();
  v23_0->set_f_0(0x1247242461a1a25a);
  v23_0->set_f_1(0.745586);
  v22->set_f_0(0.147256);
  Message0::M2::M6* v24 = v22->mutable_f_7();
  v24->set_f_0(0x7c);
  message->set_f_12(0xbbccdaa2a61c4be);
  message->set_f_23(0.832727);
  message->set_f_4(0x153a8f4f754e31be);
  message->set_f_3(0x68);
  message->set_f_14(s->substr(0, 1));
  message->set_f_16(s->substr(0, 8));
  message->set_f_1(0.560175);
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
}  // namespace fleetbench::rpc::P4::response::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE0_H_
