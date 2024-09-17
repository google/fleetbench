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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P5/request/Message0.pb.h"

namespace fleetbench::rpc::P5::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_6(0x60);
  message->set_f_23(false);
  Message0::M6* v0 = message->mutable_f_51();
  Message0::M6::M41* v1 = v0->mutable_f_13();
  (void)v1;  // Suppresses clang-tidy.
  v0->add_f_1(Message0::M6::E9_CONST_5);
  v0->set_f_2(0x3899ea6dd6558420);
  Message0::M6::M33* v2 = v0->mutable_f_10();
  Message0::M6::M33::M64* v3 = v2->mutable_f_3();
  Message0::M6::M33::M64::M86* v4_0 = v3->add_f_4();
  v4_0->set_f_0(true);
  v4_0->set_f_1(s->substr(0, 18));
  Message0::M6::M33::M64::M79* v5 = v3->mutable_f_3();
  v5->set_f_0(s->substr(0, 6));
  v5->set_f_1(s->substr(0, 11));
  Message0::M6::M33::M64::M79::M106* v6 = v5->mutable_f_3();
  v6->set_f_0(0x137afca);
  v0->set_f_0(0x644c188697b5931f);
  Message0::M6::M22* v7_0 = v0->add_f_6();
  v7_0->add_f_0(Message0::M6::M22::E17_CONST_1);
  v7_0->set_f_4(0x2cbad547f6ccaa9b);
  v7_0->set_f_3(s->substr(0, 222));
  Message0::M6::M22::M70* v8_0 = v7_0->add_f_9();
  Message0::M6::M22::M70::M85* v9 = v8_0->mutable_f_3();
  (void)v9;  // Suppresses clang-tidy.
  Message0::M6::M19* v10_0 = v0->add_f_5();
  v10_0->set_f_4(0xfb2b18e);
  v10_0->set_f_0(s->substr(0, 28));
  v10_0->set_f_1(0x566f767010871e74);
  v10_0->set_f_5(0xd03dac3);
  v10_0->set_f_3(0x62);
  v0->set_f_3(s->substr(0, 127));
  Message0::M6::M42* v11 = v0->mutable_f_15();
  v11->set_f_4(s->substr(0, 3));
  v11->set_f_1(s->substr(0, 224));
  v11->set_f_2(0x66);
  Message0::M6::M28* v12 = v0->mutable_f_9();
  v12->set_f_1(0x5164c8538b1601b3);
  v12->set_f_0(0x13);
  v12->set_f_3(0x60fa9a8580347182);
  v12->set_f_2(0x68d076f1182b5798);
  message->set_f_7(0x4017b1e8f107c68c);
  message->set_f_5(0x2);
  message->set_f_11(0x75a62430bd33e6e0);
  message->set_f_0(0x50488049cd4a8397);
  message->set_f_14(Message0::E2_CONST_2);
  Message0::M5* v13_0 = message->add_f_50();
  Message0::M5::M36* v14_0 = v13_0->add_f_9();
  v14_0->set_f_2(0x17);
  v14_0->set_f_1(s->substr(0, 68));
  Message0::M5::M36::M63* v15_0 = v14_0->add_f_13();
  v15_0->set_f_2(0x292da0a97cd9df7c);
  v15_0->set_f_10(0x402e150f311e2c);
  v15_0->set_f_9(0.787894);
  v15_0->set_f_1(s->substr(0, 163));
  v15_0->set_f_3(false);
  v15_0->set_f_13(0x97b4d863b707a0c);
  Message0::M5::M36::M63::M77* v16_0 = v15_0->add_f_21();
  (void)v16_0;  // Suppresses clang-tidy.
  v15_0->set_f_6(s->substr(0, 2));
  v15_0->set_f_11(0x6269571b0b538896);
  v14_0->set_f_3(0x77a704fa8333973c);
  v14_0->set_f_0(0x70);
  Message0::M5::M43* v17_0 = v13_0->add_f_10();
  (void)v17_0;  // Suppresses clang-tidy.
  Message0::M5::M21* v18 = v13_0->mutable_f_7();
  (void)v18;  // Suppresses clang-tidy.
  Message0::M5::M13* v19 = v13_0->mutable_f_5();
  Message0::M5::M13::M61* v20_0 = v19->add_f_2();
  Message0::M5::M13::M61::M90* v21 = v20_0->mutable_f_2();
  v21->set_f_2(Message0::M5::M13::M61::M90::E35_CONST_3);
  v21->set_f_0(s->substr(0, 427));
  v21->set_f_1(0x2767a2ccbfeec904);
  v21->set_f_3(s->substr(0, 29));
  v19->set_f_0(s->substr(0, 17));
  message->set_f_15(0x61);
  Message0::M8* v22 = message->mutable_f_53();
  v22->set_f_2(0x18e9);
  v22->set_f_0(0x5bb8a94c8e870864);
  v22->set_f_1(0x38f25b20ee0c8b57);
  Message0::M8::M23* v23 = v22->mutable_f_13();
  v23->set_f_5(true);
  v23->set_f_12(true);
  v23->set_f_10(Message0::M8::M23::E18_CONST_4);
  v23->set_f_13(0x770704adad2d3362);
  v23->set_f_17(s->substr(0, 19));
  v23->set_f_9(0.745049);
  v23->set_f_15(0x2b1407accc7c50ab);
  v23->set_f_16(0x1204426640eeb815);
  v23->set_f_18(false);
  v23->set_f_0(0x4eade06d22232df3);
  v23->set_f_7(s->substr(0, 17));
  v22->set_f_3(s->substr(0, 29));
  Message0::M8::M20* v24_0 = v22->add_f_12();
  v24_0->set_f_10(0x46bca49b);
  v24_0->set_f_6(s->substr(0, 29));
  Message0::M8::M20::E16 array_1[9] = {
      Message0::M8::M20::E16_CONST_1, Message0::M8::M20::E16_CONST_3,
      Message0::M8::M20::E16_CONST_3, Message0::M8::M20::E16_CONST_4,
      Message0::M8::M20::E16_CONST_1, Message0::M8::M20::E16_CONST_1,
      Message0::M8::M20::E16_CONST_2, Message0::M8::M20::E16_CONST_4,
      Message0::M8::M20::E16_CONST_1,
  };
  for (auto v : array_1) {
    v24_0->add_f_8(v);
  }
  v24_0->set_f_4(s->substr(0, 27));
  v24_0->set_f_1(s->substr(0, 24));
  v24_0->set_f_3(s->substr(0, 2));
  v24_0->set_f_0(s->substr(0, 24));
  v24_0->set_f_7(0.283956);
  v24_0->set_f_2(0x42333e26);
  Message0::M8::M44* v25 = v22->mutable_f_16();
  v25->set_f_0(0x29fa7f684dd46ec9);
  v25->set_f_2(0x73);
  v25->set_f_1(s->substr(0, 1));
  v25->set_f_3(s->substr(0, 441));
  v22->set_f_6(0x2040b589d691a741);
  Message0::M8::M16* v26 = v22->mutable_f_11();
  v26->set_f_1(0.903128);
  v26->set_f_4(0.750084);
  v26->set_f_6(0x9dfe4b5);
  v26->set_f_2(0.657998);
  v26->set_f_5(Message0::M8::M16::E13_CONST_5);
  v26->set_f_3(true);
  v22->set_f_4(0x5cf3c93b7744009b);
  message->set_f_20(0x37e9a550e74d7585);
  message->set_f_18(Message0::E3_CONST_3);
  Message0::M3* v27_0 = message->add_f_48();
  Message0::M3::M30* v28 = v27_0->mutable_f_13();
  v28->set_f_0(0x6);
  Message0::M3::M45* v29_0 = v27_0->add_f_16();
  v29_0->set_f_1(0x4);
  v29_0->set_f_5(true);
  v29_0->set_f_6(0x5a41c);
  v29_0->set_f_0(s->substr(0, 19));
  Message0::M3::M45::M69* v30 = v29_0->mutable_f_12();
  (void)v30;  // Suppresses clang-tidy.
  Message0::M3::M17* v31_0 = v27_0->add_f_11();
  v31_0->set_f_0(Message0::M3::M17::E14_CONST_4);
  Message0::M3::M47* v32_0 = v27_0->add_f_18();
  v32_0->set_f_0(0x34);
  Message0::M3::M15* v33 = v27_0->mutable_f_9();
  v33->set_f_2(0x50d92c);
  Message0::M3::M15::M50* v34 = v33->mutable_f_8();
  v34->set_f_0(0xef8a8fc5b72dcbf);
  Message0::M3::M15::M50::M80* v35_0 = v34->add_f_6();
  v35_0->set_f_2(0x4957b7774);
  v35_0->set_f_0(0x693153d114e67cf8);
  v35_0->set_f_3(s->substr(0, 3));
  Message0::M3::M15::M50::M94* v36 = v34->mutable_f_7();
  v36->set_f_0(0x353cb59fe2b511cc);
  v33->set_f_0(0x7d1c704a09fb970c);
  v33->set_f_5(Message0::M3::M15::E12_CONST_5);
  v33->set_f_3(s->substr(0, 17));
  v33->set_f_1(0xec5268a);
  v33->set_f_4(false);
  v27_0->set_f_0(0x11ffcdf2);
  message->set_f_26(true);
  message->set_f_2(0x7cfcefa37b66182d);
  message->set_f_27(s->substr(0, 4));
  message->set_f_16(0x36e747ed5dad4414);
  Message0::M1* v37_0 = message->add_f_46();
  v37_0->set_f_1(0xce92007e62f03b0);
  v37_0->set_f_0(s->substr(0, 7));
  v37_0->set_f_2(s->substr(0, 5));
  Message0::M1::M29* v38 = v37_0->mutable_f_5();
  v38->set_f_0(false);
  Message0::M9* v39 = message->mutable_f_54();
  v39->set_f_4(0x50);
  Message0::M9::M34* v40_0 = v39->add_f_19();
  v40_0->set_f_0(0.112515);
  Message0::M9::M34::M72* v41 = v40_0->mutable_f_2();
  v41->set_f_0(false);
  v39->set_f_2(0x4e);
  Message0::M9::M31* v42 = v39->mutable_f_15();
  (void)v42;  // Suppresses clang-tidy.
  v39->set_f_3(0x53c490ccf51eed5);
  Message0::M9::M10* v43 = v39->mutable_f_13();
  Message0::M9::M10::M75* v44_0 = v43->add_f_4();
  v44_0->set_f_0(0x45);
  v44_0->set_f_2(0x6f);
  Message0::M9::M10::M75::M87* v45 = v44_0->mutable_f_6();
  Message0::M9::M10::M75::M87::M102* v46_0 = v45->add_f_3();
  v46_0->set_f_0(0x39d4952d67548a06);
  v45->set_f_0(0x336b78d);
  v44_0->set_f_3(0x41);
  v44_0->set_f_1(Message0::M9::M10::M75::E30_CONST_3);
  Message0::M9::E10 array_2[19] = {
      Message0::M9::E10_CONST_5, Message0::M9::E10_CONST_1,
      Message0::M9::E10_CONST_4, Message0::M9::E10_CONST_3,
      Message0::M9::E10_CONST_1, Message0::M9::E10_CONST_1,
      Message0::M9::E10_CONST_2, Message0::M9::E10_CONST_4,
      Message0::M9::E10_CONST_1, Message0::M9::E10_CONST_5,
      Message0::M9::E10_CONST_5, Message0::M9::E10_CONST_3,
      Message0::M9::E10_CONST_1, Message0::M9::E10_CONST_4,
      Message0::M9::E10_CONST_3, Message0::M9::E10_CONST_4,
      Message0::M9::E10_CONST_1, Message0::M9::E10_CONST_4,
      Message0::M9::E10_CONST_2,
  };
  for (auto v : array_2) {
    v39->add_f_1(v);
  }
  v39->set_f_0(0x7b1e2582ed5303a2);
  message->set_f_1(Message0::E1_CONST_1);
  message->set_f_12(0x1175d08b6e54cbf1);
  message->set_f_3(false);
  message->set_f_29(s->substr(0, 275));
  message->set_f_24(0xa);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_19(Message0::E4_CONST_4);
  message->add_f_22(Message0::E5_CONST_3);
  message->set_f_2(0x5f6de10851b37493);
  message->set_f_1(Message0::E1_CONST_1);
  message->set_f_25(0.395337);
  Message0::M5* v0_0 = message->add_f_50();
  Message0::M5::M36* v1_0 = v0_0->add_f_9();
  v1_0->set_f_1(s->substr(0, 5));
  v1_0->set_f_5(0x5469a1651);
  Message0::M5::M21* v2 = v0_0->mutable_f_7();
  v2->set_f_0(s->substr(0, 22));
  v0_0->set_f_0(0x61be68f8fb02dc31);
  message->set_f_27(s->substr(0, 3));
  Message0::M2* v3_0 = message->add_f_47();
  Message0::M2::M25* v4 = v3_0->mutable_f_3();
  v4->set_f_1(0xe78d02d101);
  v4->set_f_0(0.247767);
  v3_0->set_f_0(0x35eecf6e);
  message->set_f_15(0x25fe112);
  message->set_f_14(Message0::E2_CONST_3);
  message->set_f_10(0x21766274);
  message->set_f_8(0xf257eb0);
  message->set_f_13(s->substr(0, 404));
  message->set_f_28(0x79);
  message->set_f_24(0x61dbe);
  Message0::M3* v5_0 = message->add_f_48();
  Message0::M3::M30* v6 = v5_0->mutable_f_13();
  (void)v6;  // Suppresses clang-tidy.
  Message0::M3::M32* v7 = v5_0->mutable_f_15();
  v7->set_f_0(true);
  Message0::M3::M32::M73* v8 = v7->mutable_f_3();
  v8->set_f_3(s->substr(0, 21));
  v8->set_f_2(0x59221635a1a4f7cc);
  v8->set_f_4(true);
  v8->set_f_1(false);
  v8->add_f_0(s->substr(0, 8));
  v5_0->set_f_1(0.529233);
  Message0::M3::M45* v9_0 = v5_0->add_f_16();
  v9_0->set_f_0(s->substr(0, 5));
  v9_0->set_f_3(0x5d5761bee114a9b6);
  v9_0->set_f_1(0x4b29a03);
  v9_0->set_f_6(0x7);
  v5_0->set_f_0(0x2e1e40cd);
  Message0::M3::M14* v10 = v5_0->mutable_f_8();
  v10->set_f_0(0x21e130d4f43c2c51);
  v10->set_f_2(0x61);
  v10->set_f_1(0x18d6);
  Message0::M3::M15* v11 = v5_0->mutable_f_9();
  v11->set_f_2(0xc07c7b0);
  v11->set_f_0(0x589f89a31b40af7a);
  Message0::M3::M15::M56* v12 = v11->mutable_f_9();
  Message0::M3::M15::M56::M83* v13 = v12->mutable_f_2();
  v13->set_f_0(s->substr(0, 22));
  Message0::M3::M15::M56::M83::M105* v14 = v13->mutable_f_3();
  v14->set_f_1(0.853084);
  Message0::M3::M15::M56::M83::M108* v15 = v13->mutable_f_4();
  v15->set_f_0(0x1630d68f4d51d834);
  v12->set_f_0(0x7149864c);
  v11->set_f_5(Message0::M3::M15::E12_CONST_2);
  Message0::M3::M15::M50* v16 = v11->mutable_f_8();
  v16->set_f_1(Message0::M3::M15::M50::E23_CONST_1);
  Message0::M3::M15::M50::M80* v17_0 = v16->add_f_6();
  v17_0->set_f_1(0x702bda4);
  v17_0->set_f_3(s->substr(0, 7));
  v17_0->set_f_0(0x7151a6614c5ec177);
  Message0::M3::M15::M50::M94* v18 = v16->mutable_f_7();
  v18->set_f_0(0x8ff02bac48ab3b2);
  Message0::M3::M15::M50::M94::M101* v19 = v18->mutable_f_2();
  v19->set_f_1(0.138776);
  v19->set_f_4(0x2027);
  Message0::M3::M15::M50::M94::M101::M112* v20 = v19->mutable_f_10();
  v20->set_f_0(0x136305);
  v20->set_f_1(s->substr(0, 123));
  v20->set_f_2(0xb502e697c3964ea);
  v20->set_f_3(false);
  Message0::M3::M15::M50::M94::M101::M111* v21 = v19->mutable_f_9();
  v21->set_f_0(0x72);
  v16->set_f_0(0x3a528725cc171b7f);
  message->set_f_4(true);
  Message0::M1* v22_0 = message->add_f_46();
  Message0::M1::M40* v23_0 = v22_0->add_f_6();
  v23_0->set_f_2(0x7f915f62);
  v23_0->set_f_1(0x3275d3f6df186fc6);
  v22_0->set_f_2(s->substr(0, 30));
  v22_0->set_f_1(0x604523b03df2ef6e);
  v22_0->set_f_0(s->substr(0, 70));
  message->set_f_17(0x158cc556dd453aa5);
  message->set_f_18(Message0::E3_CONST_3);
  message->set_f_20(0x52f9fa37e55af910);
  message->set_f_16(0x51434377c2eb684c);
  message->set_f_7(0x23c494b425082182);
  Message0::M7* v24 = message->mutable_f_52();
  Message0::M7::M48* v25 = v24->mutable_f_7();
  v25->set_f_5(0x124027f4);
  v25->set_f_1(0x4a4a028d03058429);
  v25->set_f_2(0x3c);
  Message0::M7::M46* v26 = v24->mutable_f_6();
  (void)v26;  // Suppresses clang-tidy.
  v24->set_f_0(true);
  message->set_f_3(true);
  Message0::M8* v27 = message->mutable_f_53();
  v27->set_f_2(0x22);
  v27->set_f_1(0x60953377e034c642);
  v27->set_f_6(0x12028078f3eaef6f);
  Message0::M8::M16* v28 = v27->mutable_f_11();
  v28->set_f_1(0.350688);
  v28->set_f_2(0.452981);
  v28->set_f_6(0x1);
  v28->set_f_5(Message0::M8::M16::E13_CONST_5);
  v28->set_f_4(0.761104);
  v27->set_f_3(s->substr(0, 2));
  Message0::M8::M12* v29_0 = v27->add_f_10();
  v29_0->add_f_4(Message0::M8::M12::E11_CONST_5);
  v29_0->set_f_1(s->substr(0, 5));
  v29_0->set_f_0(0x664ddf27);
  Message0::M8::M12::M65* v30_0 = v29_0->add_f_6();
  v30_0->set_f_0(0x61);
  v29_0->set_f_3(0x7248497);
  Message0::M8::M12::M67* v31 = v29_0->mutable_f_7();
  v31->set_f_2(0x7d6ef158fdcb4d2a);
  v31->set_f_1(0.009846);
  Message0::M8::M44* v32 = v27->mutable_f_16();
  v32->set_f_0(0x220ad4f160a8cdb4);
  v32->set_f_3(s->substr(0, 2));
  Message0::M8::M20* v33_0 = v27->add_f_12();
  v33_0->set_f_1(s->substr(0, 20));
  v33_0->set_f_6(s->substr(0, 54));
  v33_0->set_f_10(0x16b767ea);
  v33_0->set_f_7(0.430035);
  v33_0->add_f_8(Message0::M8::M20::E16_CONST_1);
  v33_0->set_f_2(0x35af0d3b);
  v33_0->set_f_3(s->substr(0, 286));
  v33_0->set_f_0(s->substr(0, 31));
  v33_0->set_f_9(s->substr(0, 4));
  v33_0->set_f_4(s->substr(0, 20));
  v27->set_f_0(0x3b10f4b9ac778ea1);
  v27->set_f_4(0x6d386bd053c24f52);
  Message0::M8::M23* v34 = v27->mutable_f_13();
  v34->set_f_2(0x28);
  v34->set_f_16(0x242fa1ff0a9698b6);
  v34->set_f_5(false);
  v34->set_f_11(0x277a546c6e172d48);
  v34->set_f_14(0x46b8af0c);
  v34->set_f_4(s->substr(0, 20));
  v34->set_f_17(s->substr(0, 21));
  v34->set_f_9(0.637122);
  v34->set_f_10(Message0::M8::M23::E18_CONST_3);
  v34->set_f_7(s->substr(0, 16));
  v34->set_f_13(0x3d3a709e549011ee);
  v34->set_f_6(s->substr(0, 352));
  v34->set_f_12(true);
  v34->set_f_15(0x1cd83c6c9db3247f);
  v34->set_f_1(0x2f7992088660f3a4);
  Message0::M8::M27* v35 = v27->mutable_f_14();
  Message0::M8::M27::M66* v36 = v35->mutable_f_10();
  v36->set_f_0(0x4839620a);
  Message0::M8::M27::M66::M91* v37 = v36->mutable_f_4();
  v37->set_f_1(0xd4d46b8);
  v37->set_f_0(0x34);
  Message0::M8::M27::M66::E27 array_0[10] = {
      Message0::M8::M27::M66::E27_CONST_3, Message0::M8::M27::M66::E27_CONST_1,
      Message0::M8::M27::M66::E27_CONST_1, Message0::M8::M27::M66::E27_CONST_5,
      Message0::M8::M27::M66::E27_CONST_3, Message0::M8::M27::M66::E27_CONST_4,
      Message0::M8::M27::M66::E27_CONST_4, Message0::M8::M27::M66::E27_CONST_5,
      Message0::M8::M27::M66::E27_CONST_1, Message0::M8::M27::M66::E27_CONST_5,
  };
  for (auto v : array_0) {
    v36->add_f_1(v);
  }
  Message0::M8::M27::M52* v38 = v35->mutable_f_3();
  v38->set_f_11(0x177c898a09fbc77b);
  v38->set_f_8(0x27eca30d72888b0d);
  v38->set_f_22(0xbc64dfa);
  v38->set_f_21(false);
  v38->set_f_1(s->substr(0, 205));
  v38->set_f_3(0x40);
  v38->set_f_15(s->substr(0, 26));
  v38->set_f_0(0x201);
  v38->set_f_20(0x98601d1b942693a);
  v38->set_f_18(0x3084d779bb256e46);
  v38->set_f_17(s->substr(0, 3));
  v38->set_f_10(0x7d24e43);
  v38->set_f_19(s->substr(0, 101));
  v38->set_f_16(s->substr(0, 408));
  v38->set_f_5(s->substr(0, 7));
  v38->set_f_14(0x2dca879494bb7028);
  v38->set_f_13(0x1d38cbc);
  v38->set_f_12(s->substr(0, 268));
  Message0::M8::M27::M55* v39 = v35->mutable_f_6();
  v39->set_f_3(0x3b);
  v39->set_f_5(0x606efb7951c038ca);
  v39->set_f_4(0.635402);
  v39->set_f_0(0x5098994657131e2c);
  v39->set_f_2(0x7e20a7c1497e359);
  v39->set_f_1(0x2d201f);
  message->set_f_6(0x5f);
  message->set_f_0(0x57225014b1082bba);
  message->set_f_12(0xbeb254f87993533);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_28(0x7c5ce83);
  Message0::M3* v0_0 = message->add_f_48();
  Message0::M3::M11* v1_0 = v0_0->add_f_5();
  (void)v1_0;  // Suppresses clang-tidy.
  Message0::M3::M15* v2 = v0_0->mutable_f_9();
  v2->set_f_3(s->substr(0, 377));
  v2->set_f_4(false);
  v2->set_f_1(0x30);
  v2->set_f_2(0x6a);
  Message0::M3::M15::M50* v3 = v2->mutable_f_8();
  Message0::M3::M15::M50::M94* v4 = v3->mutable_f_7();
  v4->set_f_0(0x3aa078ae169756dd);
  Message0::M3::M15::M50::M94::M101* v5 = v4->mutable_f_2();
  v5->set_f_4(0x98d60a3);
  Message0::M3::M15::M50::M94::M101::M112* v6 = v5->mutable_f_10();
  v6->set_f_0(0xcb7b771);
  v6->set_f_3(true);
  v6->set_f_1(s->substr(0, 6));
  v6->set_f_2(0x65ef877ddcfff79e);
  v5->set_f_3(0x5cc7104e8976ebf3);
  v5->set_f_1(0.188545);
  v5->set_f_0(0x2c1b);
  v5->set_f_2(0x77dcedde33148a9);
  v3->set_f_1(Message0::M3::M15::M50::E23_CONST_1);
  v3->set_f_0(0x2c2f6654f948a7f1);
  Message0::M3::M15::M50::M80* v7_0 = v3->add_f_6();
  v7_0->set_f_3(s->substr(0, 22));
  v7_0->set_f_2(0x39f34fa8c);
  Message0::M3::M15::M56* v8 = v2->mutable_f_9();
  v8->set_f_0(0x5b3d74);
  Message0::M3::M15::M56::M88* v9 = v8->mutable_f_4();
  v9->set_f_1(false);
  v9->set_f_0(0x4a7ff128bc8569);
  Message0::M3::M15::M56::M88::M104* v10 = v9->mutable_f_3();
  v10->set_f_0(0x7e);
  Message0::M3::M15::M56::M83* v11 = v8->mutable_f_2();
  Message0::M3::M15::M56::M83::M105* v12 = v11->mutable_f_3();
  v12->set_f_1(0.869467);
  v12->set_f_0(s->substr(0, 19));
  v11->set_f_0(s->substr(0, 7));
  Message0::M3::M15::M56::M83::M108* v13 = v11->mutable_f_4();
  v13->set_f_0(0x75cf2440956e60bc);
  Message0::M3::M14* v14 = v0_0->mutable_f_8();
  v14->set_f_0(0x4194e8fb45c15e54);
  v14->set_f_1(0xe0d6e);
  Message0::M3::M32* v15 = v0_0->mutable_f_15();
  v15->set_f_0(false);
  v0_0->set_f_1(0.385611);
  Message0::M9* v16 = message->mutable_f_54();
  v16->set_f_3(0x529ccbbf91dadc6f);
  Message0::M9::M35* v17_0 = v16->add_f_21();
  v17_0->set_f_1(s->substr(0, 98));
  Message0::M9::M35::M59* v18 = v17_0->mutable_f_7();
  (void)v18;  // Suppresses clang-tidy.
  v17_0->set_f_0(0x7338ea33b14884ed);
  v16->set_f_0(0x198e35545397891e);
  Message0::M9::M31* v19 = v16->mutable_f_15();
  (void)v19;  // Suppresses clang-tidy.
  Message0::M9::M10* v20 = v16->mutable_f_13();
  v20->set_f_0(true);
  v16->add_f_1(Message0::M9::E10_CONST_5);
  v16->set_f_4(0x71);
  message->set_f_16(0x774809d7b80e2483);
  Message0::M5* v21_0 = message->add_f_50();
  Message0::M5::M13* v22 = v21_0->mutable_f_5();
  Message0::M5::M13::M61* v23_0 = v22->add_f_2();
  Message0::M5::M13::M61::M90* v24 = v23_0->mutable_f_2();
  v24->set_f_3(s->substr(0, 9));
  v24->set_f_0(s->substr(0, 483));
  v23_0->set_f_0(0x78caf7e21b3d8c55);
  v22->set_f_0(s->substr(0, 205));
  Message0::M5::M21* v25 = v21_0->mutable_f_7();
  v25->set_f_0(s->substr(0, 16));
  Message0::M5::M43* v26_0 = v21_0->add_f_10();
  v26_0->set_f_0(Message0::M5::M43::E22_CONST_1);
  Message0::M5::M36* v27_0 = v21_0->add_f_9();
  v27_0->set_f_2(0x222186b);
  v27_0->set_f_1(s->substr(0, 2572));
  v27_0->set_f_5(0x2e);
  Message0::M8* v28 = message->mutable_f_53();
  Message0::M8::M16* v29 = v28->mutable_f_11();
  v29->set_f_2(0.442485);
  v29->set_f_4(0.315112);
  v29->set_f_3(true);
  v29->set_f_5(Message0::M8::M16::E13_CONST_1);
  v29->set_f_6(0x41f);
  Message0::M8::M20* v30_0 = v28->add_f_12();
  v30_0->set_f_10(0x24059979);
  v30_0->set_f_6(s->substr(0, 15));
  v30_0->set_f_9(s->substr(0, 483));
  v30_0->set_f_1(s->substr(0, 18));
  v30_0->set_f_7(0.392642);
  v30_0->set_f_3(s->substr(0, 3));
  v30_0->set_f_0(s->substr(0, 17));
  Message0::M8::M49* v31 = v28->mutable_f_18();
  v31->set_f_9(false);
  v31->set_f_5(s->substr(0, 3));
  v31->set_f_10(0x339228a119b6639a);
  v31->set_f_11(s->substr(0, 1));
  v31->set_f_17(0.468515);
  v31->set_f_14(0x3f);
  v31->set_f_0(true);
  v31->set_f_15(0x3642e);
  v31->set_f_4(0xcec29ea);
  v31->set_f_3(s->substr(0, 13));
  v31->set_f_12(false);
  v31->set_f_13(s->substr(0, 8));
  v31->set_f_7(s->substr(0, 7));
  v31->set_f_2(true);
  Message0::M8::M12* v32_0 = v28->add_f_10();
  v32_0->set_f_1(s->substr(0, 32));
  v32_0->set_f_2(0xc8cfb5c);
  Message0::M8::M12::M67* v33 = v32_0->mutable_f_7();
  v33->set_f_2(0x665884d75f4919e3);
  v33->set_f_1(0.128939);
  v32_0->set_f_3(0x47);
  v28->set_f_0(0x236f9e6ca7efd143);
  v28->set_f_3(s->substr(0, 16));
  v28->set_f_2(0x35);
  v28->set_f_5(0xaef87ea);
  Message0::M8::M23* v34 = v28->mutable_f_13();
  v34->set_f_8(0x493d793172d242aa);
  v34->set_f_14(0x63afc4f3);
  v34->set_f_7(s->substr(0, 6));
  v34->set_f_5(false);
  v34->set_f_13(0x6a35aed7aab7705);
  v34->set_f_4(s->substr(0, 39));
  v34->set_f_9(0.278946);
  v34->set_f_11(0x4f1f10341ec58a85);
  v34->set_f_10(Message0::M8::M23::E18_CONST_5);
  v34->set_f_16(0x4e318f3136f2657e);
  v34->set_f_6(s->substr(0, 98));
  v34->set_f_3(s->substr(0, 19));
  Message0::M8::M44* v35 = v28->mutable_f_16();
  v35->set_f_1(s->substr(0, 28));
  v35->set_f_3(s->substr(0, 17));
  v35->set_f_2(0x3e);
  message->set_f_12(0x7d56f5f08a65007e);
  message->set_f_18(Message0::E3_CONST_2);
  message->set_f_29(s->substr(0, 38));
  message->set_f_4(false);
  Message0::M4* v36 = message->mutable_f_49();
  v36->set_f_3(Message0::M4::E7_CONST_4);
  v36->set_f_5(0x25d5c9756fb050b3);
  Message0::M4::M18* v37 = v36->mutable_f_11();
  v37->set_f_4(0x2c7708e);
  v37->set_f_3(0x1e24822);
  v37->set_f_5(0.113568);
  v37->set_f_7(0x51ef74805261b280);
  v37->set_f_2(s->substr(0, 6));
  Message0::M4::M18::M60* v38 = v37->mutable_f_14();
  v38->set_f_2(0x14f08e443e3b44e5);
  v38->set_f_3(0x5ba7ba4);
  v38->set_f_1(0.679155);
  v38->set_f_0(false);
  v37->set_f_1(0x1f);
  v36->set_f_0(0x34);
  Message0::M4::M26* v39_0 = v36->add_f_12();
  Message0::M4::M26::M54* v40 = v39_0->mutable_f_2();
  v40->set_f_0(0x5107967878);
  v39_0->set_f_0(0x451c95b8d69a977);
  Message0::M4::M26::M58* v41_0 = v39_0->add_f_3();
  Message0::M4::M26::M58::M92* v42_0 = v41_0->add_f_2();
  Message0::M4::M26::M58::M92::M107* v43 = v42_0->mutable_f_3();
  v43->set_f_5(s->substr(0, 30));
  v43->set_f_3(s->substr(0, 2));
  v43->set_f_6(s->substr(0, 26));
  v43->set_f_4(0.161573);
  v43->set_f_0(Message0::M4::M26::M58::M92::M107::E39_CONST_1);
  v41_0->set_f_0(0x599e225c578ed3e1);
  v36->set_f_1(0xef6f9b6);
  Message0::M4::M38* v44 = v36->mutable_f_15();
  (void)v44;  // Suppresses clang-tidy.
  message->set_f_21(s->substr(0, 17));
  message->set_f_14(Message0::E2_CONST_1);
  message->set_f_6(0x77);
  message->set_f_9(0x279049f9fa11d2bc);
  message->set_f_23(false);
  message->set_f_25(0.966781);
  message->set_f_3(true);
  message->set_f_24(0x2ebc);
  message->set_f_27(s->substr(0, 333));
  Message0::M1* v45_0 = message->add_f_46();
  Message0::M1::M40* v46_0 = v45_0->add_f_6();
  v46_0->add_f_0(Message0::M1::M40::E21_CONST_2);
  v46_0->set_f_2(0x4ea0e3bc);
  Message0::M1::M29* v47 = v45_0->mutable_f_5();
  v47->set_f_0(true);
  v45_0->set_f_1(0x106040fcb1665226);
  message->set_f_5(0x4);
  message->set_f_10(0x39947b37);
  Message0::M2* v48_0 = message->add_f_47();
  v48_0->set_f_0(0x3f9566f7);
  Message0::M2::M25* v49 = v48_0->mutable_f_3();
  v49->set_f_0(0.172465);
  v49->set_f_1(0xe0e37139);
  Message0::M2::M37* v50 = v48_0->mutable_f_4();
  v50->set_f_1(s->substr(0, 5));
  v50->set_f_0(0x73);
  message->add_f_22(Message0::E5_CONST_1);
  message->set_f_13(s->substr(0, 53));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_1(Message0::E1_CONST_3);
  message->set_f_27(s->substr(0, 20));
  message->set_f_13(s->substr(0, 99));
  Message0::M8* v0 = message->mutable_f_53();
  Message0::M8::M44* v1 = v0->mutable_f_16();
  v1->set_f_1(s->substr(0, 25));
  v1->set_f_3(s->substr(0, 14));
  v1->set_f_2(0x37);
  v0->set_f_1(0x19099385ee77dbdc);
  v0->set_f_4(0x5b654b93927cd38d);
  v0->set_f_3(s->substr(0, 104));
  Message0::M8::M16* v2 = v0->mutable_f_11();
  v2->set_f_2(0.080813);
  v2->set_f_3(false);
  v2->set_f_6(0x6c);
  v0->set_f_2(0x2577113);
  v0->set_f_0(0x10a21cb7eaa60b2c);
  Message0::M8::M27* v3 = v0->mutable_f_14();
  Message0::M8::M27::M55* v4 = v3->mutable_f_6();
  v4->set_f_3(0x54);
  v4->set_f_1(0x1f8ad4c);
  Message0::M8::M27::M62* v5 = v3->mutable_f_8();
  v5->set_f_0(s->substr(0, 134));
  Message0::M8::M27::M62::M76* v6 = v5->mutable_f_2();
  Message0::M8::M27::M62::M76::M103* v7 = v6->mutable_f_3();
  Message0::M8::M27::M62::M76::M103::M110* v8_0 = v7->add_f_3();
  v8_0->set_f_0(s->substr(0, 320));
  v7->set_f_0(s->substr(0, 26));
  Message0::M8::M27::M62::M76::E31 array_0[21] = {
      Message0::M8::M27::M62::M76::E31_CONST_1,
      Message0::M8::M27::M62::M76::E31_CONST_5,
      Message0::M8::M27::M62::M76::E31_CONST_1,
      Message0::M8::M27::M62::M76::E31_CONST_5,
      Message0::M8::M27::M62::M76::E31_CONST_4,
      Message0::M8::M27::M62::M76::E31_CONST_1,
      Message0::M8::M27::M62::M76::E31_CONST_4,
      Message0::M8::M27::M62::M76::E31_CONST_1,
      Message0::M8::M27::M62::M76::E31_CONST_2,
      Message0::M8::M27::M62::M76::E31_CONST_5,
      Message0::M8::M27::M62::M76::E31_CONST_2,
      Message0::M8::M27::M62::M76::E31_CONST_2,
      Message0::M8::M27::M62::M76::E31_CONST_1,
      Message0::M8::M27::M62::M76::E31_CONST_5,
      Message0::M8::M27::M62::M76::E31_CONST_2,
      Message0::M8::M27::M62::M76::E31_CONST_3,
      Message0::M8::M27::M62::M76::E31_CONST_4,
      Message0::M8::M27::M62::M76::E31_CONST_5,
      Message0::M8::M27::M62::M76::E31_CONST_4,
      Message0::M8::M27::M62::M76::E31_CONST_3,
      Message0::M8::M27::M62::M76::E31_CONST_1,
  };
  for (auto v : array_0) {
    v6->add_f_0(v);
  }
  Message0::M7* v9 = message->mutable_f_52();
  Message0::M7::M46* v10 = v9->mutable_f_6();
  v10->set_f_0(s->substr(0, 17));
  v9->set_f_0(true);
  Message0::M7::M39* v11_0 = v9->add_f_5();
  v11_0->set_f_3(s->substr(0, 23));
  v11_0->set_f_0(0x3b);
  v11_0->set_f_4(0x1e7bdf4257193cb);
  Message0::M6* v12 = message->mutable_f_51();
  Message0::M6::M28* v13 = v12->mutable_f_9();
  v13->set_f_3(0x4352c1e8bbbf52c1);
  v13->set_f_1(0x6393286aeafe208b);
  v13->set_f_0(0x498e77a);
  Message0::M6::M19* v14_0 = v12->add_f_5();
  v14_0->set_f_0(s->substr(0, 281));
  v14_0->set_f_2(0x3d786d991a8b1e72);
  v14_0->set_f_1(0x7723c5487ed421ed);
  v14_0->set_f_5(0x6e);
  v14_0->set_f_4(0x23);
  v12->set_f_2(0x1ad2c081061d4c0a);
  v12->set_f_0(0x793b25822a63236a);
  Message0::M6::M41* v15 = v12->mutable_f_13();
  v15->set_f_0(s->substr(0, 38));
  v15->set_f_1(0x9551c6e);
  Message0::M6::M42* v16 = v12->mutable_f_15();
  v16->set_f_1(s->substr(0, 66));
  v16->set_f_4(s->substr(0, 2));
  v16->set_f_3(0x9a97705);
  Message0::M6::M42::M68* v17 = v16->mutable_f_8();
  Message0::M6::M42::M68::M98* v18_0 = v17->add_f_3();
  v18_0->set_f_0(0x122f4e);
  Message0::M6::M33* v19 = v12->mutable_f_10();
  Message0::M6::M33::M64* v20 = v19->mutable_f_3();
  Message0::M6::M33::M64::M79* v21 = v20->mutable_f_3();
  Message0::M6::M33::M64::M79::M106* v22 = v21->mutable_f_3();
  v22->set_f_0(0x50);
  v21->set_f_0(s->substr(0, 20));
  v21->set_f_1(s->substr(0, 5));
  v19->set_f_0(s->substr(0, 104));
  Message0::M6::E9 array_1[20] = {
      Message0::M6::E9_CONST_2, Message0::M6::E9_CONST_4,
      Message0::M6::E9_CONST_4, Message0::M6::E9_CONST_3,
      Message0::M6::E9_CONST_2, Message0::M6::E9_CONST_1,
      Message0::M6::E9_CONST_1, Message0::M6::E9_CONST_5,
      Message0::M6::E9_CONST_3, Message0::M6::E9_CONST_2,
      Message0::M6::E9_CONST_2, Message0::M6::E9_CONST_1,
      Message0::M6::E9_CONST_5, Message0::M6::E9_CONST_3,
      Message0::M6::E9_CONST_1, Message0::M6::E9_CONST_3,
      Message0::M6::E9_CONST_2, Message0::M6::E9_CONST_2,
      Message0::M6::E9_CONST_5, Message0::M6::E9_CONST_1,
  };
  for (auto v : array_1) {
    v12->add_f_1(v);
  }
  v12->set_f_3(s->substr(0, 3));
  Message0::M6::M22* v23_0 = v12->add_f_6();
  v23_0->set_f_1(0x40fb3);
  v23_0->add_f_0(Message0::M6::M22::E17_CONST_2);
  v23_0->set_f_3(s->substr(0, 4));
  v23_0->set_f_5(0x4154f14c168de02d);
  Message0::M9* v24 = message->mutable_f_54();
  Message0::M9::M31* v25 = v24->mutable_f_15();
  (void)v25;  // Suppresses clang-tidy.
  v24->set_f_2(0x7a);
  v24->set_f_0(0x7dfa24430cabd880);
  Message0::M9::M35* v26_0 = v24->add_f_21();
  v26_0->set_f_2(s->substr(0, 5));
  Message0::M9::M35::M59* v27 = v26_0->mutable_f_7();
  v27->set_f_0(Message0::M9::M35::M59::E24_CONST_5);
  Message0::M9::M34* v28_0 = v24->add_f_19();
  Message0::M9::M34::M72* v29 = v28_0->mutable_f_2();
  v29->set_f_0(true);
  v28_0->set_f_0(0.732533);
  v24->add_f_1(Message0::M9::E10_CONST_1);
  Message0::M9::M10* v30 = v24->mutable_f_13();
  Message0::M9::M10::M75* v31_0 = v30->add_f_4();
  v31_0->set_f_3(0xd1688dc);
  v31_0->set_f_0(0x18);
  v30->set_f_0(false);
  message->set_f_8(0x15f33);
  message->set_f_3(true);
  message->set_f_6(0x76);
  message->set_f_16(0x12e8750f2e68d612);
  message->set_f_28(0xdfc33d8);
  message->set_f_29(s->substr(0, 2));
  Message0::M5* v32_0 = message->add_f_50();
  Message0::M5::M21* v33 = v32_0->mutable_f_7();
  v33->set_f_0(s->substr(0, 27));
  Message0::M5::M43* v34_0 = v32_0->add_f_10();
  v34_0->set_f_0(Message0::M5::M43::E22_CONST_3);
  Message0::M5::M36* v35_0 = v32_0->add_f_9();
  v35_0->set_f_1(s->substr(0, 22));
  Message0::M5::M36::M63* v36_0 = v35_0->add_f_13();
  Message0::M5::M36::M63::M77* v37_0 = v36_0->add_f_21();
  v37_0->set_f_0(0xc25f18cb6aa68d5);
  v36_0->set_f_2(0x483d23363a6e582d);
  v36_0->set_f_3(true);
  v36_0->set_f_6(s->substr(0, 5));
  v36_0->set_f_12(0x4df9e067e57f5a0e);
  v36_0->set_f_10(0x4e1efc557a36b0a5);
  v36_0->set_f_0(0x6265b18);
  v36_0->set_f_13(0xc1fb85006fcc2b8);
  v36_0->set_f_8(0x774884793556cc6b);
  v36_0->set_f_9(0.200561);
  v36_0->set_f_1(s->substr(0, 82));
  v36_0->add_f_7(Message0::M5::M36::M63::E26_CONST_4);
  v36_0->set_f_4(true);
  v35_0->set_f_0(0xce2f027);
  v35_0->set_f_5(0x1623ca639);
  v32_0->set_f_0(0x3346d8092b011b5e);
  Message0::M5::M13* v38 = v32_0->mutable_f_5();
  v38->set_f_0(s->substr(0, 31));
  Message0::M5::M13::M61* v39_0 = v38->add_f_2();
  Message0::M5::M13::M61::M99* v40 = v39_0->mutable_f_3();
  v40->set_f_4(0x305a440a3781bf65);
  v40->set_f_0(0x9571aca98ab2ffb);
  v40->set_f_3(Message0::M5::M13::M61::M99::E37_CONST_5);
  v40->set_f_1(false);
  message->set_f_9(0x5257db731ed60d9d);
  message->set_f_18(Message0::E3_CONST_2);
  message->set_f_4(true);
  message->set_f_15(0xf2181);
  message->add_f_22(Message0::E5_CONST_5);
  message->set_f_5(0xa);
  message->set_f_25(0.307308);
  Message0::M3* v41_0 = message->add_f_48();
  Message0::M3::M30* v42 = v41_0->mutable_f_13();
  (void)v42;  // Suppresses clang-tidy.
  v41_0->set_f_1(0.406454);
  Message0::M3::M11* v43_0 = v41_0->add_f_5();
  v43_0->set_f_0(0x39db9220de26946c);
  Message0::M3::M14* v44 = v41_0->mutable_f_8();
  v44->set_f_2(0x18);
  v44->set_f_0(0x18c9081e394b7fef);
  Message0::M3::M45* v45_0 = v41_0->add_f_16();
  v45_0->set_f_2(true);
  v45_0->set_f_1(0x978b8b6);
  v45_0->set_f_3(0x549231fbbc85bf0b);
  Message0::M3::M45::M69* v46 = v45_0->mutable_f_12();
  v46->set_f_0(0x65cde747fc188ba1);
  v45_0->set_f_5(false);
  v45_0->set_f_0(s->substr(0, 6));
  v45_0->set_f_4(0x6c);
  Message0::M3::M32* v47 = v41_0->mutable_f_15();
  (void)v47;  // Suppresses clang-tidy.
  Message0::M3::M17* v48_0 = v41_0->add_f_11();
  Message0::M3::M17::M71* v49 = v48_0->mutable_f_3();
  v49->set_f_1(0x4db13a65c98d5b0e);
  v49->set_f_4(0x19);
  v49->set_f_0(Message0::M3::M17::M71::E28_CONST_2);
  Message0::M3::M17::M71::M95* v50_0 = v49->add_f_7();
  v50_0->set_f_2(0x450d6724a771cf8);
  v50_0->set_f_1(0.639675);
  Message0::M3::M17::M71::M95::E36 array_2[7] = {
      Message0::M3::M17::M71::M95::E36_CONST_4,
      Message0::M3::M17::M71::M95::E36_CONST_5,
      Message0::M3::M17::M71::M95::E36_CONST_4,
      Message0::M3::M17::M71::M95::E36_CONST_2,
      Message0::M3::M17::M71::M95::E36_CONST_1,
      Message0::M3::M17::M71::M95::E36_CONST_4,
      Message0::M3::M17::M71::M95::E36_CONST_2,
  };
  for (auto v : array_2) {
    v50_0->add_f_4(v);
  }
  v50_0->set_f_3(true);
  v50_0->set_f_0(0x7b);
  v48_0->set_f_0(Message0::M3::M17::E14_CONST_3);
  Message0::M3::M15* v51 = v41_0->mutable_f_9();
  v51->set_f_5(Message0::M3::M15::E12_CONST_1);
  v51->set_f_3(s->substr(0, 1));
  v51->set_f_4(true);
  v51->set_f_0(0x2220266aa8cd7890);
  v51->set_f_1(0x1dcfa3);
  v51->set_f_2(0x16);
  Message0::M3::M15::M56* v52 = v51->mutable_f_9();
  v52->set_f_0(0x656321cd);
  Message0::M3::M15::M56::M83* v53 = v52->mutable_f_2();
  Message0::M3::M15::M56::M83::M105* v54 = v53->mutable_f_3();
  v54->set_f_1(0.395552);
  v54->set_f_0(s->substr(0, 104));
  Message0::M3::M15::M56::M83::M108* v55 = v53->mutable_f_4();
  (void)v55;  // Suppresses clang-tidy.
  v53->set_f_0(s->substr(0, 8));
  Message0::M3::M15::M56::M88* v56 = v52->mutable_f_4();
  v56->set_f_1(false);
  Message0::M3::M15::M56::M88::M104* v57 = v56->mutable_f_3();
  v57->set_f_0(0x1363a0);
  message->set_f_17(0x711f7ec8c6e2d254);
  message->set_f_0(0x2454d28474bb79d6);
  message->set_f_21(s->substr(0, 95));
  message->set_f_24(0x10);
  message->set_f_7(0x51f32a482636e7c8);
  message->set_f_26(false);
  message->set_f_10(0x63f398db);
  message->set_f_19(Message0::E4_CONST_4);
  message->set_f_11(0x283a6a8e9421d94e);
  message->set_f_12(0xee712c1cb04ee89);
  message->set_f_20(0x1641080c7a7920e8);
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
}  // namespace fleetbench::rpc::P5::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P5_REQUEST_ACCESS_MESSAGE0_H_
