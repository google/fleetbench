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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message2.pb.h"

namespace fleetbench::rpc::P4::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  message->set_f_20(false);
  Message2::M5* v0 = message->mutable_f_53();
  v0->set_f_1(0.799878);
  Message2::M5::M26* v1 = v0->mutable_f_5();
  v1->set_f_2(s->substr(0, 19));
  v1->set_f_1(0x46);
  v1->set_f_4(0x5);
  message->set_f_4(0x52);
  message->set_f_31(0xabf19d2);
  message->set_f_16(0x33);
  message->set_f_8(0x3b489f54f757da7);
  Message2::M7* v2 = message->mutable_f_59();
  Message2::M7::M42* v3 = v2->mutable_f_2();
  Message2::M7::M42::M80* v4 = v3->mutable_f_5();
  Message2::M7::M42::M80::M89* v5 = v4->mutable_f_3();
  v5->set_f_0(0x302f39cf);
  v4->set_f_0(Message2::M7::M42::M80::E25_CONST_2);
  v3->set_f_0(0.195507);
  v2->set_f_0(s->substr(0, 32));
  message->set_f_6(s->substr(0, 23));
  message->set_f_15(0x1b716fa85cb1464b);
  message->set_f_24(0x3e);
  message->set_f_32(s->substr(0, 41));
  message->set_f_21(0x3f);
  message->set_f_10(s->substr(0, 3127));
  message->set_f_29(0xc);
  Message2::M1* v6 = message->mutable_f_48();
  v6->set_f_2(0x515e4);
  v6->set_f_1(s->substr(0, 29));
  v6->set_f_4(s->substr(0, 23));
  Message2::M1::M37* v7 = v6->mutable_f_12();
  (void)v7;  // Suppresses clang-tidy.
  v6->set_f_3(0x3c);
  Message2::M13* v8 = message->mutable_f_67();
  v8->set_f_0(false);
  Message2::M13::M31* v9 = v8->mutable_f_2();
  (void)v9;  // Suppresses clang-tidy.
  Message2::M13::M35* v10 = v8->mutable_f_3();
  v10->set_f_0(0x3c);
  Message2::M13::M35::M74* v11 = v10->mutable_f_2();
  Message2::M13::M35::M74::M85* v12 = v11->mutable_f_3();
  Message2::M13::M35::M74::M85::M116* v13 = v12->mutable_f_6();
  v13->set_f_0(0x3f4bab215b19f66e);
  Message2::M13::M35::M74::M85::M116::M117* v14 = v13->mutable_f_4();
  v14->set_f_13(true);
  v14->set_f_8(0x18a35d850fdab28f);
  v14->set_f_5(0x7177cce90bcaee72);
  v14->add_f_12(Message2::M13::M35::M74::M85::M116::M117::E36_CONST_5);
  v14->set_f_6(0x60);
  v14->set_f_3(false);
  v14->set_f_7(false);
  v14->set_f_1(0x13);
  v14->set_f_0(0x3f0dd9a976b51c21);
  Message2::M13::M35::M74::M94* v15_0 = v11->add_f_4();
  v15_0->set_f_0(0x24);
  Message2::M12* v16 = message->mutable_f_65();
  v16->add_f_0(Message2::M12::E4_CONST_2);
  message->set_f_19(true);
  message->set_f_25(0x68dc1160f);
  message->set_f_13(s->substr(0, 2));
  Message2::M10* v17 = message->mutable_f_62();
  Message2::M10::M57* v18 = v17->mutable_f_4();
  v18->set_f_2(s->substr(0, 2101));
  v18->set_f_3(0x37);
  Message2::M10::M57::M63* v19_0 = v18->add_f_8();
  (void)v19_0;  // Suppresses clang-tidy.
  v18->set_f_0(s->substr(0, 3506));
  message->set_f_3(0x7e2c30f);
  Message2::M11* v20 = message->mutable_f_64();
  Message2::M11::M36* v21 = v20->mutable_f_5();
  v21->set_f_0(false);
  v20->set_f_0(0x2f2e20e4);
  Message2::M11::M23* v22 = v20->mutable_f_2();
  v22->set_f_0(0x2aa5603d58716121);
  message->set_f_23(false);
  message->set_f_17(0x2a5e8478b80);
  Message2::M9* v23 = message->mutable_f_61();
  v23->set_f_0(0x3c1a);
  Message2::M9::M19* v24 = v23->mutable_f_3();
  v24->set_f_0(0x754ff179);
  message->set_f_18(0x3196);
  message->set_f_26(0x6ecfb1a43a360384);
  Message2::M17* v25_0 = message->add_f_72();
  v25_0->set_f_2(s->substr(0, 9));
  Message2::M17::M38* v26_0 = v25_0->add_f_10();
  v26_0->set_f_1(s->substr(0, 21));
  v26_0->set_f_3(0x74c6ff87f65329a1);
  int32_t array_1[12] = {
      0x71, 0x5, 0x3f, 0x51, 0x1cd0e7, 0x65, 0xd, 0x29, 0x3d, 0x19, 0x32, 0x66,
  };
  for (auto v : array_1) {
    v26_0->add_f_2(v);
  }
  v26_0->set_f_0(0x9ca3b34);
  Message2::M17::M38::M77* v27_0 = v26_0->add_f_9();
  (void)v27_0;  // Suppresses clang-tidy.
  v26_0->set_f_4(Message2::M17::M38::E13_CONST_3);
  Message2::M17::M34* v28_0 = v25_0->add_f_8();
  v28_0->set_f_0(Message2::M17::M34::E12_CONST_4);
  v25_0->set_f_1(0x78b34487c316e62d);
  Message2::M8* v29_0 = message->add_f_60();
  v29_0->set_f_0(0x1edd04850);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_13(s->substr(0, 34));
  message->set_f_16(0x3976);
  message->set_f_15(0x3cad19f70df6ec69);
  message->set_f_6(s->substr(0, 11));
  message->set_f_18(0x5c);
  message->set_f_22(0x3b82);
  Message2::M16* v0 = message->mutable_f_71();
  Message2::M16::M51* v1_0 = v0->add_f_6();
  v1_0->set_f_0(false);
  message->set_f_17(0x2160e3a3a99);
  message->set_f_30(0x9e1ca59);
  Message2::M13* v2 = message->mutable_f_67();
  Message2::M13::M31* v3 = v2->mutable_f_2();
  (void)v3;  // Suppresses clang-tidy.
  v2->set_f_0(true);
  message->set_f_14(0x6b);
  Message2::M3* v4 = message->mutable_f_50();
  Message2::M3::M20* v5 = v4->mutable_f_6();
  v5->set_f_0(0x44949ef85459ebc4);
  Message2::M3::M21* v6 = v4->mutable_f_8();
  v6->set_f_5(0x671b75736f668c32);
  v6->set_f_1(0.795363);
  v6->set_f_0(0x13086aaa6b837cc);
  v6->set_f_3(0x69);
  v6->set_f_4(0x1f30);
  Message2::M3::M29* v7 = v4->mutable_f_13();
  v7->set_f_0(0x1b67ec81c45b3c5f);
  v4->set_f_0(0x57);
  Message2::M3::M25* v8_0 = v4->add_f_10();
  v8_0->set_f_0(0.261261);
  Message2::M3::M25::M78* v9 = v8_0->mutable_f_5();
  v9->set_f_0(false);
  message->set_f_23(false);
  Message2::M11* v10 = message->mutable_f_64();
  Message2::M11::M33* v11 = v10->mutable_f_4();
  v11->set_f_0(s->substr(0, 3761));
  Message2::M11::M36* v12 = v10->mutable_f_5();
  (void)v12;  // Suppresses clang-tidy.
  v10->set_f_0(0x7238d3f1);
  Message2::M17* v13_0 = message->add_f_72();
  v13_0->set_f_0(0.586792);
  v13_0->set_f_2(s->substr(0, 86));
  v13_0->set_f_3(0.594598);
  message->set_f_11(s->substr(0, 218));
  message->set_f_10(s->substr(0, 8));
  Message2::M7* v14 = message->mutable_f_59();
  v14->set_f_0(s->substr(0, 7));
  message->set_f_25(0x579219d10);
  message->set_f_27(0x26a8e654a4b8c166);
  message->set_f_2(s->substr(0, 139));
  message->set_f_26(0x624c00afd65eb4fa);
  Message2::M8* v15_0 = message->add_f_60();
  Message2::M8::M52* v16 = v15_0->mutable_f_5();
  (void)v16;  // Suppresses clang-tidy.
  Message2::M8::M48* v17_0 = v15_0->add_f_2();
  (void)v17_0;  // Suppresses clang-tidy.
  message->set_f_29(0x53);
  message->set_f_32(s->substr(0, 14));
  message->set_f_21(0x3e);
  message->set_f_7(0x1c6c37e);
  Message2::M9* v18 = message->mutable_f_61();
  v18->set_f_0(0x23);
  Message2::M15* v19 = message->mutable_f_69();
  v19->set_f_0(0xf387315);
  message->set_f_19(false);
  Message2::M2* v20_0 = message->add_f_49();
  Message2::M2::M44* v21 = v20_0->mutable_f_3();
  v21->set_f_5(s->substr(0, 9));
  v21->set_f_3(0x367c67798aae1261);
  v21->set_f_7(s->substr(0, 2));
  v21->set_f_2(0x68299ed7cb0c19d);
  v20_0->set_f_0(0x10);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_11(s->substr(0, 12));
  Message2::M10* v0 = message->mutable_f_62();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_6(s->substr(0, 59));
  message->set_f_29(0x5d2);
  message->set_f_13(s->substr(0, 37));
  message->set_f_19(false);
  message->set_f_18(0x2978);
  message->set_f_2(s->substr(0, 30));
  Message2::M4* v1_0 = message->add_f_51();
  Message2::M4::M39* v2 = v1_0->mutable_f_7();
  v2->set_f_0(0x6d1d9087);
  Message2::M4::M39::M75* v3_0 = v2->add_f_4();
  v3_0->set_f_5(0x3c96f3390ac4c947);
  Message2::M4::M39::M75::M91* v4_0 = v3_0->add_f_11();
  Message2::M4::M39::M75::M91::M110* v5_0 = v4_0->add_f_2();
  v5_0->set_f_0(false);
  v4_0->set_f_0(0x4423621f5edbae2d);
  v3_0->set_f_2(0x3788896f528c4950);
  v3_0->set_f_4(0x1f20ac7253693f49);
  Message2::M4::M39::M75::E21 array_0[5] = {
      Message2::M4::M39::M75::E21_CONST_3, Message2::M4::M39::M75::E21_CONST_4,
      Message2::M4::M39::M75::E21_CONST_2, Message2::M4::M39::M75::E21_CONST_3,
      Message2::M4::M39::M75::E21_CONST_5,
  };
  for (auto v : array_0) {
    v3_0->add_f_6(v);
  }
  v3_0->set_f_0(0x1d6045ac292138c1);
  v3_0->set_f_3(0x15);
  v1_0->set_f_0(Message2::M4::E2_CONST_3);
  v1_0->set_f_1(false);
  Message2::M4::M22* v6 = v1_0->mutable_f_5();
  v6->set_f_0(0x2b);
  v6->set_f_2(0x645b637b);
  v6->set_f_5(0x31);
  v6->set_f_7(true);
  v6->set_f_6(0x35a7);
  Message2::M4::M22::M72* v7 = v6->mutable_f_16();
  v7->set_f_4(0xa);
  v7->set_f_6(0x3c246208bb8ae468);
  v7->set_f_11(true);
  v7->set_f_17(s->substr(0, 11));
  v7->set_f_10(0x730eb88cdb98d1c);
  v7->set_f_1(Message2::M4::M22::M72::E20_CONST_3);
  v7->set_f_21(0x3dce05529b38008);
  v7->set_f_0(0x4f);
  v7->set_f_7(s->substr(0, 7));
  v7->set_f_12(0x33);
  v7->set_f_3(0x3dc441b203af5247);
  v7->set_f_19(false);
  v7->set_f_15(0x1e);
  v6->set_f_4(0x10868b);
  v6->set_f_3(0x33);
  message->set_f_3(0x46);
  message->set_f_14(0x5886fac);
  message->set_f_28(0x1aca111af718e139);
  Message2::M3* v8 = message->mutable_f_50();
  Message2::M3::M32* v9 = v8->mutable_f_14();
  v9->set_f_0(Message2::M3::M32::E11_CONST_3);
  Message2::M3::M25* v10_0 = v8->add_f_10();
  Message2::M3::M25::M78* v11 = v10_0->mutable_f_5();
  v11->set_f_0(true);
  message->set_f_7(0x44e4dd9);
  message->set_f_12(true);
  Message2::M2* v12_0 = message->add_f_49();
  Message2::M2::M44* v13 = v12_0->mutable_f_3();
  Message2::M2::M44::M83* v14 = v13->mutable_f_19();
  Message2::M2::M44::M83::M99* v15 = v14->mutable_f_3();
  v15->set_f_0(0x3e);
  v14->set_f_0(Message2::M2::M44::M83::E26_CONST_2);
  v13->set_f_4(Message2::M2::M44::E14_CONST_2);
  v13->set_f_3(0x5fae3e13ede0f6d6);
  v13->set_f_7(s->substr(0, 25));
  v12_0->set_f_0(0x13);
  message->set_f_0(0x58a586fea8ed5785);
  Message2::M9* v16 = message->mutable_f_61();
  Message2::M9::M19* v17 = v16->mutable_f_3();
  v17->set_f_0(0x1a222686);
  Message2::M9::M19::M64* v18 = v17->mutable_f_3();
  v18->set_f_0(0x7bde76851d6034aa);
  Message2::M9::M19::M64::M90* v19_0 = v18->add_f_5();
  v19_0->set_f_0(s->substr(0, 2594));
  Message2::M9::M19::M64::M90::M104* v20_0 = v19_0->add_f_3();
  v20_0->set_f_0(s->substr(0, 2006));
  v20_0->set_f_1(0x4d1968edecc1f5e8);
  v20_0->set_f_2(0x52e40a1348657cbe);
  v20_0->set_f_3(0x341868a03d191aee);
  Message2::M9::M53* v21_0 = v16->add_f_4();
  v21_0->set_f_0(0x3c9cba5d03b45a6);
  Message2::M13* v22 = message->mutable_f_67();
  Message2::M13::M35* v23 = v22->mutable_f_3();
  Message2::M13::M35::M74* v24 = v23->mutable_f_2();
  Message2::M13::M35::M74::M94* v25_0 = v24->add_f_4();
  v25_0->set_f_0(0x213e);
  v23->set_f_0(0x64);
  message->set_f_26(0x42298041667c6751);
  Message2::M18* v26 = message->mutable_f_76();
  Message2::M18::M60* v27_0 = v26->add_f_6();
  v27_0->set_f_4(0x39);
  v27_0->set_f_3(s->substr(0, 25));
  v27_0->set_f_1(0xfea4bf9);
  v27_0->set_f_0(false);
  Message2::M18::M27* v28 = v26->mutable_f_2();
  v28->set_f_5(0x77ff68fcaafde16e);
  v28->set_f_13(Message2::M18::M27::E9_CONST_3);
  v28->set_f_10(0x50);
  v28->set_f_3(s->substr(0, 56));
  v28->set_f_9(0x20);
  v28->set_f_0(0xb3ba);
  v28->set_f_11(0x208576ef);
  v28->set_f_4(true);
  Message2::M18::M54* v29 = v26->mutable_f_4();
  (void)v29;  // Suppresses clang-tidy.
  message->set_f_24(0x3506);
  message->set_f_31(0x5e);
  message->set_f_25(0x61ac80c3e);
  message->set_f_23(true);
  Message2::M1* v30 = message->mutable_f_48();
  v30->set_f_0(0x94ee4);
  Message2::M1::M41* v31 = v30->mutable_f_13();
  (void)v31;  // Suppresses clang-tidy.
  v30->set_f_2(0x2bfe77e);
  v30->set_f_1(s->substr(0, 22));
  v30->set_f_4(s->substr(0, 8));
  Message2::M17* v32_0 = message->add_f_72();
  v32_0->set_f_2(s->substr(0, 11));
  v32_0->set_f_0(0.882035);
  v32_0->set_f_1(0xddd46abbdf21ff2);
  Message2::M17::M38* v33_0 = v32_0->add_f_10();
  Message2::M17::M38::M77* v34_0 = v33_0->add_f_9();
  (void)v34_0;  // Suppresses clang-tidy.
  v33_0->set_f_4(Message2::M17::M38::E13_CONST_3);
  int32_t array_1[12] = {
      0x33, 0x1e, 0x2a, 0x7b92896, 0x21, 0x1f,
      0x2e, 0x3d, 0x6c, 0x7e,      0x41, 0x11,
  };
  for (auto v : array_1) {
    v33_0->add_f_2(v);
  }
  Message2::M17::M34* v35_0 = v32_0->add_f_8();
  (void)v35_0;  // Suppresses clang-tidy.
  Message2::M5* v36 = message->mutable_f_53();
  v36->set_f_1(0.639754);
  Message2::M5::M26* v37 = v36->mutable_f_5();
  v37->set_f_4(0x11);
  v37->set_f_2(s->substr(0, 12));
  v37->set_f_3(0x48cca715225c0fb9);
  message->set_f_4(0x69);
  Message2::M8* v38_0 = message->add_f_60();
  Message2::M8::M48* v39_0 = v38_0->add_f_2();
  (void)v39_0;  // Suppresses clang-tidy.
  v38_0->set_f_0(0x2f);
  Message2::M8::M52* v40 = v38_0->mutable_f_5();
  v40->set_f_0(0x7ef5a857356a9dd5);
  message->set_f_16(0x5851f8b);
  message->set_f_22(0x2b);
  message->set_f_9(0x7b);
  message->set_f_20(true);
  message->set_f_27(0x59ddf5f5a67be03c);
  message->set_f_30(0xf592fe5);
  Message2::M14* v41 = message->mutable_f_68();
  v41->set_f_2(0x116);
  v41->set_f_3(0xada8e8a);
  v41->set_f_1(s->substr(0, 1514));
  Message2::M14::M40* v42 = v41->mutable_f_14();
  Message2::M14::M40::M69* v43_0 = v42->add_f_3();
  (void)v43_0;  // Suppresses clang-tidy.
  v42->set_f_0(0x6f);
  Message2::M14::M56* v44_0 = v41->add_f_19();
  (void)v44_0;  // Suppresses clang-tidy.
  v41->set_f_0(Message2::M14::E5_CONST_5);
  Message2::M14::M49* v45 = v41->mutable_f_18();
  v45->set_f_0(0xa91f21);
  Message2::M11* v46 = message->mutable_f_64();
  Message2::M11::M33* v47 = v46->mutable_f_4();
  v47->set_f_0(s->substr(0, 17521));
  v46->set_f_0(0x457d8435);
  Message2::M11::M36* v48 = v46->mutable_f_5();
  v48->set_f_0(true);
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  message->set_f_13(s->substr(0, 30));
  Message2::M5* v0 = message->mutable_f_53();
  v0->set_f_1(0.107301);
  message->set_f_7(0x6a);
  message->set_f_25(0x33f02e76ac1);
  Message2::M1* v1 = message->mutable_f_48();
  v1->set_f_3(0x17);
  v1->set_f_1(s->substr(0, 2));
  v1->set_f_4(s->substr(0, 51));
  Message2::M1::M37* v2 = v1->mutable_f_12();
  v2->set_f_0(0xf41f8fe);
  message->set_f_5(Message2::E1_CONST_5);
  Message2::M3* v3 = message->mutable_f_50();
  Message2::M3::M25* v4_0 = v3->add_f_10();
  Message2::M3::M25::M78* v5 = v4_0->mutable_f_5();
  v5->set_f_0(true);
  v4_0->set_f_0(0.950223);
  Message2::M3::M29* v6 = v3->mutable_f_13();
  Message2::M3::M29::M62* v7_0 = v6->add_f_3();
  v7_0->set_f_1(0x34);
  v7_0->set_f_3(0x333);
  v6->set_f_0(0x25eab5f4544e1b40);
  Message2::M3::M20* v8 = v3->mutable_f_6();
  Message2::M3::M20::M79* v9 = v8->mutable_f_4();
  Message2::M3::M20::M79::M100* v10_0 = v9->add_f_2();
  v10_0->set_f_0(s->substr(0, 53));
  Message2::M3::M21* v11 = v3->mutable_f_8();
  v11->set_f_1(0.760768);
  v11->set_f_3(0xcf48c0c);
  v11->set_f_2(0x42165f2ecc9fd972);
  v11->set_f_0(0x16730a7e36250cea);
  v11->set_f_4(0x7e8a287);
  v3->set_f_0(0x42);
  Message2::M2* v12_0 = message->add_f_49();
  v12_0->set_f_0(0xb);
  Message2::M7* v13 = message->mutable_f_59();
  Message2::M7::M42* v14 = v13->mutable_f_2();
  Message2::M7::M42::M80* v15 = v14->mutable_f_5();
  Message2::M7::M42::M80::M89* v16 = v15->mutable_f_3();
  v16->set_f_0(0x2ead153);
  v15->set_f_0(Message2::M7::M42::M80::E25_CONST_4);
  Message2::M7::M42::M61* v17 = v14->mutable_f_2();
  v17->set_f_8(false);
  v17->set_f_5(0x7c7933a3047e79cf);
  v17->set_f_3(0x4880c932909f0d7f);
  v17->set_f_1(s->substr(0, 18));
  v17->set_f_9(0x488c287c);
  v17->set_f_6(0x4657d6abc66c3a58);
  v17->add_f_4(Message2::M7::M42::M61::E17_CONST_5);
  v17->set_f_7(0x880d069667a73bc);
  v17->set_f_2(0xbbb9748e5beb8d1);
  v17->set_f_0(0x83dca2d5c7d0);
  v13->set_f_0(s->substr(0, 323));
  message->set_f_14(0x21);
  message->set_f_2(s->substr(0, 69));
  message->set_f_26(0x502d1fa3c7835a3a);
  message->set_f_27(0x5a632cc290985211);
  message->set_f_22(0x5bb113a);
  message->set_f_3(0x52);
  message->set_f_8(0x54e411d4c00cf7a5);
  message->set_f_10(s->substr(0, 21));
  message->set_f_6(s->substr(0, 84));
  message->set_f_11(s->substr(0, 23));
  message->set_f_30(0x44);
  Message2::M14* v18 = message->mutable_f_68();
  Message2::M14::M40* v19 = v18->mutable_f_14();
  v19->set_f_0(0x10de1b);
  Message2::M14::M40::M69* v20_0 = v19->add_f_3();
  v20_0->set_f_0(Message2::M14::M40::M69::E18_CONST_4);
  Message2::M14::M30* v21_0 = v18->add_f_12();
  v21_0->set_f_0(0x674cc6da5f32f249);
  v18->set_f_6(s->substr(0, 29));
  v18->set_f_2(0x1e393e9);
  Message2::M14::M47* v22 = v18->mutable_f_17();
  v22->set_f_0(s->substr(0, 3));
  Message2::M14::M47::M81* v23_0 = v22->add_f_2();
  Message2::M14::M47::M81::M87* v24_0 = v23_0->add_f_4();
  v24_0->set_f_0(s->substr(0, 2591));
  Message2::M14::M45* v25 = v18->mutable_f_16();
  (void)v25;  // Suppresses clang-tidy.
  Message2::M14::M56* v26_0 = v18->add_f_19();
  v26_0->set_f_0(0x1d3d00d);
  Message2::M4* v27_0 = message->add_f_51();
  v27_0->set_f_1(true);
  message->set_f_23(false);
  message->set_f_1(0x2b);
  message->set_f_12(true);
  Message2::M12* v28 = message->mutable_f_65();
  Message2::M12::M50* v29 = v28->mutable_f_2();
  v29->set_f_0(0.618046);
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
}  // namespace fleetbench::rpc::P4::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE2_H_
