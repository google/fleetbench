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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_

#include <cstdint>
#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/request/Message0.pb.h"

namespace fleetbench::rpc::P4::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M3* v0 = message->mutable_f_51();
  Message0::M3::M50* v1 = v0->mutable_f_5();
  (void)v1;  // Suppresses clang-tidy.
  Message0::M3::M51* v2 = v0->mutable_f_6();
  v2->add_f_0(Message0::M3::M51::E15_CONST_2);
  Message0::M3::M57* v3 = v0->mutable_f_8();
  v3->set_f_1(true);
  v3->set_f_0(0x79358386004771e9);
  v3->set_f_3(0x326c7b3);
  v3->set_f_2(0.604501);
  v3->set_f_4(0xc);
  v3->set_f_5(0x33);
  Message0::M3::M39* v4_0 = v0->add_f_3();
  v4_0->set_f_2(true);
  v4_0->set_f_0(0x22);
  v4_0->set_f_3(s->substr(0, 27));
  v4_0->set_f_4(0x46);
  v0->set_f_0(true);
  message->set_f_0(0x61);
  Message0::M10* v5_0 = message->add_f_59();
  Message0::M10::M30* v6 = v5_0->mutable_f_5();
  v6->set_f_0(true);
  v5_0->add_f_2(Message0::M10::E6_CONST_2);
  v5_0->set_f_0(true);
  v5_0->set_f_1(s->substr(0, 9));
  Message0::M10::M42* v7 = v5_0->mutable_f_6();
  v7->set_f_0(0x55222fdd5d8443e);
  Message0::M10::M46* v8 = v5_0->mutable_f_8();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M5* v9 = message->mutable_f_53();
  v9->set_f_0(true);
  Message0::M5::M36* v10 = v9->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message0::M5::M55* v11_0 = v9->add_f_8();
  v11_0->set_f_0(0x5a8be08);
  Message0::M5::M55::M61* v12_0 = v11_0->add_f_3();
  Message0::M5::M55::M61::M72* v13 = v12_0->mutable_f_5();
  v13->set_f_1(0x36b8d08e);
  v13->set_f_4(0x79783902);
  v13->set_f_0(true);
  v12_0->set_f_0(s->substr(0, 16));
  Message0::M5::M55::M61::M70* v14 = v12_0->mutable_f_2();
  (void)v14;  // Suppresses clang-tidy.
  Message0::M5::M24* v15 = v9->mutable_f_2();
  v15->set_f_0(false);
  message->set_f_1(0x1c27);
  message->set_f_20(true);
  message->set_f_12(0xd8f7719);
  message->add_f_23(Message0::E4_CONST_4);
  message->add_f_23(Message0::E4_CONST_1);
  message->add_f_23(Message0::E4_CONST_5);
  Message0::M7* v16_0 = message->add_f_56();
  v16_0->set_f_0(0x346c);
  Message0::M7::M27* v17 = v16_0->mutable_f_5();
  v17->set_f_2(0x14);
  Message0::M7::M22* v18 = v16_0->mutable_f_4();
  v18->set_f_0(0.081498);
  message->set_f_27(true);
  Message0::E3 array_1[22] = {
      Message0::E3_CONST_4, Message0::E3_CONST_2, Message0::E3_CONST_2,
      Message0::E3_CONST_1, Message0::E3_CONST_5, Message0::E3_CONST_5,
      Message0::E3_CONST_1, Message0::E3_CONST_5, Message0::E3_CONST_5,
      Message0::E3_CONST_4, Message0::E3_CONST_2, Message0::E3_CONST_4,
      Message0::E3_CONST_1, Message0::E3_CONST_5, Message0::E3_CONST_3,
      Message0::E3_CONST_2, Message0::E3_CONST_5, Message0::E3_CONST_2,
      Message0::E3_CONST_4, Message0::E3_CONST_1, Message0::E3_CONST_4,
      Message0::E3_CONST_5,
  };
  for (auto v : array_1) {
    message->add_f_19(v);
  }
  message->set_f_33(s->substr(0, 134));
  message->set_f_30(0.213868);
  Message0::M13* v19 = message->mutable_f_64();
  v19->set_f_1(true);
  v19->set_f_0(0x18);
  Message0::M13::M34* v20 = v19->mutable_f_5();
  v20->set_f_12(0x2a10873a25334115);
  v20->set_f_11(0.131931);
  v20->set_f_1(s->substr(0, 100));
  v20->set_f_7(s->substr(0, 68));
  v20->set_f_2(s->substr(0, 21));
  v20->set_f_5(0x6b8e51);
  v20->set_f_10(0x5f36c08630f02806);
  v20->set_f_4(0x2c597f6);
  v20->set_f_0(0x6cf1f58cd12c3b9c);
  v20->set_f_9(0x9);
  v20->set_f_6(0x24a4);
  message->set_f_14(0x1dcd82);
  Message0::M12* v21_0 = message->add_f_61();
  v21_0->set_f_0(0.291189);
  v21_0->set_f_1(0x4ee0026369);
  Message0::M12::E7 array_2[22] = {
      Message0::M12::E7_CONST_4, Message0::M12::E7_CONST_4,
      Message0::M12::E7_CONST_3, Message0::M12::E7_CONST_4,
      Message0::M12::E7_CONST_4, Message0::M12::E7_CONST_5,
      Message0::M12::E7_CONST_2, Message0::M12::E7_CONST_2,
      Message0::M12::E7_CONST_1, Message0::M12::E7_CONST_4,
      Message0::M12::E7_CONST_2, Message0::M12::E7_CONST_3,
      Message0::M12::E7_CONST_2, Message0::M12::E7_CONST_1,
      Message0::M12::E7_CONST_1, Message0::M12::E7_CONST_5,
      Message0::M12::E7_CONST_2, Message0::M12::E7_CONST_1,
      Message0::M12::E7_CONST_1, Message0::M12::E7_CONST_1,
      Message0::M12::E7_CONST_3, Message0::M12::E7_CONST_4,
  };
  for (auto v : array_2) {
    v21_0->add_f_2(v);
  }
  message->set_f_28(0x36cb);
  message->set_f_7(0x38e25d66d6561e24);
  message->set_f_26(0x3a9db8f8016a2724);
  message->set_f_10(s->substr(0, 22));
  Message0::M9* v22 = message->mutable_f_58();
  v22->set_f_0(0x4d);
  message->set_f_24(0x22);
  message->set_f_9(0x24);
  message->set_f_5(s->substr(0, 8473));
  message->set_f_25(0x2c2e4db4a1288bf9);
  message->set_f_29(0x2de41eaba18326e0);
  message->set_f_6(0x5e);
  message->set_f_17(s->substr(0, 17));
  Message0::M11* v23 = message->mutable_f_60();
  v23->set_f_10(0x7ab2f7c6);
  Message0::M11::M35* v24 = v23->mutable_f_22();
  (void)v24;  // Suppresses clang-tidy.
  v23->set_f_9(s->substr(0, 21));
  v23->set_f_12(0x7179e9564a0c0290);
  v23->set_f_0(true);
  v23->set_f_1(0x3e8f45a83d3b0595);
  v23->set_f_5(0x44);
  v23->set_f_4(0x20);
  Message0::M11::M49* v25_0 = v23->add_f_23();
  v25_0->add_f_0(Message0::M11::M49::E14_CONST_2);
  v23->set_f_8(true);
  v23->set_f_6(0x1c);
  v23->set_f_11(false);
  Message0::M11::M19* v26 = v23->mutable_f_20();
  v26->set_f_0(0x5508d88d6970337a);
  v23->set_f_7(0x7c5ff28f4976c45d);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_26(0x3c5fe6095064362c);
  message->set_f_14(0x28);
  Message0::M1* v0 = message->mutable_f_48();
  Message0::M1::M41* v1 = v0->mutable_f_3();
  v1->set_f_0(0x645eb0bca5bebb40);
  message->set_f_32(0x5f8e09ac);
  message->set_f_16(0x179bab);
  message->set_f_25(0x3c05951283d04136);
  message->set_f_15(0x1c);
  message->set_f_13(Message0::E1_CONST_4);
  message->set_f_17(s->substr(0, 4));
  Message0::M11* v2 = message->mutable_f_60();
  v2->set_f_4(0x2a);
  Message0::M11::M35* v3 = v2->mutable_f_22();
  v3->set_f_0(0x5fd7f02f);
  Message0::M11::M35::M62* v4_0 = v3->add_f_2();
  v4_0->set_f_22(0x4f);
  v4_0->set_f_10(s->substr(0, 1));
  v4_0->set_f_2(0x13aecf);
  v4_0->set_f_13(false);
  v4_0->set_f_9(0.795110);
  v4_0->set_f_27(s->substr(0, 14));
  v4_0->set_f_0(true);
  v4_0->set_f_16(0x631a84f741468bab);
  v4_0->set_f_28(0x148086);
  v4_0->set_f_12(false);
  Message0::M11::M35::M62::M67* v5_0 = v4_0->add_f_36();
  v5_0->set_f_1(0x5db3dec4b31fece);
  v5_0->set_f_2(0x3cf72f0721b42ae5);
  v5_0->set_f_3(true);
  Message0::M11::M35::M62::M67::M84* v6 = v5_0->mutable_f_9();
  Message0::M11::M35::M62::M67::M84::M101* v7 = v6->mutable_f_3();
  v7->set_f_2(0x71);
  Message0::M11::M35::M62::M67::M84::M101::M104* v8 = v7->mutable_f_13();
  (void)v8;  // Suppresses clang-tidy.
  Message0::M11::M35::M62::M67::M84::M101::M103* v9 = v7->mutable_f_12();
  (void)v9;  // Suppresses clang-tidy.
  v7->set_f_3(false);
  v7->set_f_6(0x921fe84);
  v7->set_f_0(0x518b469cae67c761);
  Message0::M11::M35::M62::M67::M84::M101::M102* v10_0 = v7->add_f_10();
  v10_0->set_f_0(true);
  v7->set_f_5(s->substr(0, 354));
  Message0::M11::M35::M62::M67::M92* v11 = v5_0->mutable_f_10();
  (void)v11;  // Suppresses clang-tidy.
  Message0::M11::M35::M62::M67::M82* v12 = v5_0->mutable_f_8();
  v12->set_f_0(0x210d);
  v12->set_f_1(0x2640);
  v4_0->set_f_24(0x7b);
  v4_0->set_f_25(0x1c4c6bcbe33a27e7);
  v4_0->set_f_20(s->substr(0, 30));
  v4_0->set_f_14(0x3c0c8bd93c8b5a52);
  Message0::M11::M35::M62::M68* v13_0 = v4_0->add_f_37();
  v13_0->set_f_17(0x19af9d8b);
  v13_0->set_f_10(s->substr(0, 18));
  v13_0->set_f_27(0x156d565ee88f3aff);
  v13_0->set_f_16(0x3a);
  v13_0->set_f_5(0x25dc6ca5df2);
  v13_0->set_f_21(0x72d89f66);
  v13_0->set_f_25(true);
  v13_0->set_f_14(0x3c);
  v13_0->set_f_15(true);
  v13_0->set_f_13(0x39929ad7b6af741e);
  v13_0->set_f_1(0x12);
  v13_0->set_f_2(true);
  v13_0->set_f_22(s->substr(0, 20));
  v13_0->set_f_26(true);
  v13_0->set_f_4(0x4fbf3d9032c37381);
  v13_0->set_f_0(0x79389a4792639d07);
  v13_0->set_f_3(false);
  v4_0->set_f_1(s->substr(0, 23));
  v4_0->set_f_17(0x27033d7bbca7c4da);
  v4_0->set_f_6(Message0::M11::M35::M62::E18_CONST_2);
  v4_0->set_f_23(s->substr(0, 26));
  Message0::M11::M35::M62::M74* v14_0 = v4_0->add_f_39();
  Message0::M11::M35::M62::M74::M85* v15 = v14_0->mutable_f_4();
  v15->set_f_0(0x742e551);
  v14_0->set_f_0(s->substr(0, 506));
  v4_0->set_f_15(s->substr(0, 4));
  v2->set_f_9(s->substr(0, 4));
  v2->set_f_3(0x31974934f7e335d);
  Message0::M11::M19* v16 = v2->mutable_f_20();
  v16->set_f_0(0xde9e09d6af905dd);
  Message0::M11::M29* v17 = v2->mutable_f_21();
  int32_t array_0[9] = {
      0x30, 0x40, 0x42, 0x58, 0x7b, 0x6e, 0x50, 0xe, 0x60,
  };
  for (auto v : array_0) {
    v17->add_f_0(v);
  }
  v17->set_f_2(false);
  v2->set_f_1(0x38dc30c80ce4df59);
  v2->set_f_12(0x44bc21658cfeeb50);
  v2->set_f_8(false);
  v2->set_f_5(0x71d4024);
  v2->set_f_6(0xbb58a8f);
  v2->set_f_2(0x5839f4503cc25c46);
  Message0::M11::M49* v18_0 = v2->add_f_23();
  v18_0->add_f_0(Message0::M11::M49::E14_CONST_4);
  v2->set_f_11(true);
  Message0::M9* v19 = message->mutable_f_58();
  v19->set_f_0(0x7d);
  Message0::M12* v20_0 = message->add_f_61();
  v20_0->set_f_1(0xb425b2520c7d42);
  Message0::M7* v21_0 = message->add_f_56();
  Message0::M7::M18* v22 = v21_0->mutable_f_3();
  v22->set_f_2(0x2cf3e87f3dfea9b6);
  v22->set_f_1(0x54c89a7b1);
  v21_0->set_f_0(0x54);
  Message0::M7::M27* v23 = v21_0->mutable_f_5();
  v23->set_f_0(s->substr(0, 59));
  v23->set_f_3(0x7e19f04a);
  v23->set_f_2(0xa);
  Message0::M7::M53* v24 = v21_0->mutable_f_6();
  v24->set_f_4(s->substr(0, 25));
  Message0::M7::M53::M65* v25 = v24->mutable_f_10();
  v25->set_f_0(s->substr(0, 63));
  v24->set_f_1(0x64f6327cd312fe3f);
  v24->set_f_0(0x53);
  Message0::M10* v26_0 = message->add_f_59();
  v26_0->add_f_2(Message0::M10::E6_CONST_4);
  Message0::M10::M44* v27_0 = v26_0->add_f_7();
  v27_0->set_f_0(0x35bde40);
  Message0::M10::M42* v28 = v26_0->mutable_f_6();
  (void)v28;  // Suppresses clang-tidy.
  v26_0->set_f_1(s->substr(0, 18));
  Message0::M10::M30* v29 = v26_0->mutable_f_5();
  v29->set_f_0(true);
  Message0::M13* v30 = message->mutable_f_64();
  (void)v30;  // Suppresses clang-tidy.
  message->set_f_33(s->substr(0, 18));
  message->set_f_6(0x57);
  message->set_f_1(0x11bf81);
  Message0::M15* v31 = message->mutable_f_66();
  Message0::M15::M43* v32 = v31->mutable_f_4();
  v32->set_f_0(0x5d3231f53de7ace6);
  v31->set_f_0(s->substr(0, 8));
  Message0::M15::M26* v33_0 = v31->add_f_3();
  (void)v33_0;  // Suppresses clang-tidy.
  message->set_f_27(false);
  message->set_f_24(0x69ecda2);
  Message0::M4* v34 = message->mutable_f_52();
  v34->set_f_0(0x10c6);
  Message0::M4::M17* v35_0 = v34->add_f_2();
  v35_0->set_f_0(0x26c36c8f);
  v35_0->set_f_1(0x618a282);
  v35_0->set_f_5(s->substr(0, 12));
  v35_0->set_f_4(true);
  v35_0->add_f_3(Message0::M4::M17::E9_CONST_4);
  v35_0->add_f_3(Message0::M4::M17::E9_CONST_4);
  v35_0->set_f_2(0x1a200d7d);
  message->set_f_10(s->substr(0, 32));
  Message0::M3* v36 = message->mutable_f_51();
  Message0::M3::M57* v37 = v36->mutable_f_8();
  v37->set_f_5(0xf58a51b);
  v37->set_f_0(0x62aaa35a98af3c29);
  v37->set_f_4(0xb);
  v37->set_f_3(0x42);
  v37->set_f_2(0.227921);
  v37->set_f_1(false);
  Message0::M3::M39* v38_0 = v36->add_f_3();
  v38_0->set_f_3(s->substr(0, 167));
  v38_0->set_f_1(0x28f4c3cb17ad14b3);
  v38_0->set_f_2(true);
  v36->set_f_0(false);
  message->set_f_30(0.541853);
  message->set_f_7(0x534f99f841fed4a9);
  message->add_f_23(Message0::E4_CONST_5);
  message->set_f_8(0x7d);
  message->set_f_22(s->substr(0, 4));
  message->set_f_2(s->substr(0, 1399));
  message->add_f_19(Message0::E3_CONST_4);
  message->set_f_5(s->substr(0, 2134));
  message->set_f_31(false);
  message->set_f_4(0x3);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M4* v0 = message->mutable_f_52();
  Message0::M4::M45* v1 = v0->mutable_f_3();
  v1->set_f_0(0x1c);
  v0->set_f_0(0x11);
  message->add_f_19(Message0::E3_CONST_1);
  Message0::M9* v2 = message->mutable_f_58();
  (void)v2;  // Suppresses clang-tidy.
  message->set_f_16(0x289987f);
  message->set_f_3(0x6f);
  message->set_f_26(0x358696efa1bcb690);
  message->set_f_2(s->substr(0, 196));
  Message0::M5* v3 = message->mutable_f_53();
  Message0::M5::M24* v4 = v3->mutable_f_2();
  v4->set_f_1(false);
  Message0::M5::M40* v5_0 = v3->add_f_6();
  v5_0->set_f_0(0.009002);
  v5_0->set_f_2(Message0::M5::M40::E13_CONST_4);
  v5_0->set_f_1(0x11);
  Message0::M5::M55* v6_0 = v3->add_f_8();
  v6_0->set_f_0(0x2);
  message->set_f_15(0x1a);
  message->set_f_27(false);
  Message0::M12* v7_0 = message->add_f_61();
  v7_0->add_f_2(Message0::M12::E7_CONST_3);
  v7_0->add_f_2(Message0::M12::E7_CONST_1);
  message->set_f_29(0x279b91f6c4427b5);
  message->set_f_6(0x141d);
  message->set_f_17(s->substr(0, 1441));
  message->set_f_14(0x6cd71);
  Message0::M16* v8_0 = message->add_f_68();
  v8_0->set_f_2(0x16701e80eca3f979);
  v8_0->set_f_5(Message0::M16::E8_CONST_1);
  v8_0->set_f_3(true);
  Message0::M16::M54* v9_0 = v8_0->add_f_7();
  v9_0->set_f_0(0x22497aa2ec42b0f9);
  v8_0->set_f_1(0x7c);
  v8_0->set_f_0(0x21477f276b54ff6);
  Message0::M3* v10 = message->mutable_f_51();
  Message0::M3::M39* v11_0 = v10->add_f_3();
  v11_0->set_f_0(0x51fb1d1);
  v11_0->set_f_1(0x57db5f15ca6a5432);
  v11_0->set_f_3(s->substr(0, 12));
  v10->set_f_0(true);
  Message0::M3::M57* v12 = v10->mutable_f_8();
  v12->set_f_2(0.022269);
  v12->set_f_4(0x64);
  v12->set_f_3(0x6b);
  v12->set_f_5(0x2839);
  Message0::M3::M50* v13 = v10->mutable_f_5();
  v13->set_f_0(0x5fffdbcd03add530);
  v13->set_f_1(0x49eff885);
  Message0::M1* v14 = message->mutable_f_48();
  Message0::M1::M41* v15 = v14->mutable_f_3();
  v15->set_f_0(0x363beb3b6f40a5f3);
  v14->set_f_0(0xb7149);
  message->add_f_23(Message0::E4_CONST_1);
  message->set_f_0(0x6efa5);
  message->set_f_10(s->substr(0, 17));
  Message0::M14* v16 = message->mutable_f_65();
  Message0::M14::M47* v17 = v16->mutable_f_5();
  v17->set_f_1(false);
  v17->set_f_0(s->substr(0, 31));
  v17->set_f_3(0x182ea9db25b94476);
  Message0::M14::M32* v18 = v16->mutable_f_4();
  (void)v18;  // Suppresses clang-tidy.
  Message0::M14::M28* v19 = v16->mutable_f_2();
  (void)v19;  // Suppresses clang-tidy.
  message->set_f_24(0xc95b4bc);
  Message0::M13* v20 = message->mutable_f_64();
  v20->set_f_0(0x429f845);
  Message0::M13::M34* v21 = v20->mutable_f_5();
  v21->set_f_13(false);
  v21->set_f_6(0x5ea1ed);
  v21->set_f_3(0x27dc);
  v21->set_f_8(0x448d212);
  v21->set_f_12(0x2d5e922b5265ee0b);
  v21->set_f_1(s->substr(0, 2));
  v21->set_f_0(0x48ed5d3685c23346);
  v21->set_f_5(0xcfb13);
  v21->set_f_9(0x16c3ab);
  v21->set_f_2(s->substr(0, 19));
  v21->set_f_7(s->substr(0, 18));
  message->set_f_22(s->substr(0, 17));
  message->set_f_31(false);
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_26(0x17621dad8dcf5177);
  message->set_f_0(0xaf2b5);
  message->set_f_6(0x56);
  Message0::M12* v0_0 = message->add_f_61();
  v0_0->set_f_0(0.706574);
  Message0::M3* v1 = message->mutable_f_51();
  Message0::M3::M57* v2 = v1->mutable_f_8();
  v2->set_f_2(0.938562);
  v2->set_f_4(0x1c52bdf);
  v2->set_f_0(0x3b308c6e9b52e3af);
  v2->set_f_1(false);
  v2->set_f_5(0x49f5f9b);
  v2->set_f_3(0x2b7a5d5);
  Message0::M3::M51* v3 = v1->mutable_f_6();
  v3->set_f_1(s->substr(0, 17));
  Message0::M3::M50* v4 = v1->mutable_f_5();
  v4->set_f_0(0x69c9874cdc63d32a);
  message->add_f_18(Message0::E2_CONST_1);
  Message0::M7* v5_0 = message->add_f_56();
  Message0::M7::M18* v6 = v5_0->mutable_f_3();
  v6->set_f_1(0x1e12913af85);
  v6->set_f_2(0x2e7b627c2c4af971);
  v6->set_f_0(0x36f635ec);
  v6->set_f_3(true);
  Message0::M7::M27* v7 = v5_0->mutable_f_5();
  v7->set_f_4(0x3bf101074c6c9801);
  v7->set_f_3(0x5b9c1495);
  v7->set_f_2(0x36);
  v7->set_f_0(s->substr(0, 12));
  v7->set_f_1(s->substr(0, 5));
  Message0::M7::M22* v8 = v5_0->mutable_f_4();
  (void)v8;  // Suppresses clang-tidy.
  message->set_f_7(0x32310b70f9e5ad34);
  Message0::M8* v9 = message->mutable_f_57();
  v9->set_f_0(0xf4c6194);
  Message0::M8::M33* v10 = v9->mutable_f_4();
  v10->set_f_0(0x6c8e8601adb6a7a);
  Message0::M5* v11 = message->mutable_f_53();
  v11->set_f_0(true);
  Message0::M5::M24* v12 = v11->mutable_f_2();
  v12->set_f_0(true);
  v12->set_f_1(false);
  Message0::M5::M40* v13_0 = v11->add_f_6();
  v13_0->set_f_2(Message0::M5::M40::E13_CONST_1);
  v13_0->set_f_0(0.751216);
  v13_0->set_f_1(0x69);
  Message0::M5::M38* v14_0 = v11->add_f_5();
  v14_0->set_f_0(0x15fce3);
  message->set_f_8(0x32);
  message->set_f_4(0x55);
  message->set_f_1(0x30);
  message->set_f_15(0x2b);
  Message0::M16* v15_0 = message->add_f_68();
  v15_0->set_f_1(0x3c9);
  v15_0->set_f_0(0x39a67ee3b68d656d);
  v15_0->set_f_4(0.327846);
  Message0::M16::M54* v16_0 = v15_0->add_f_7();
  (void)v16_0;  // Suppresses clang-tidy.
  v15_0->set_f_5(Message0::M16::E8_CONST_3);
  Message0::M16::M56* v17 = v15_0->mutable_f_8();
  v17->set_f_0(s->substr(0, 22));
  Message0::M4* v18 = message->mutable_f_52();
  Message0::M4::M45* v19 = v18->mutable_f_3();
  v19->set_f_0(0x5e);
  message->set_f_31(true);
  message->set_f_3(0x7);
  message->set_f_20(true);
  Message0::M2* v20 = message->mutable_f_49();
  Message0::M2::M37* v21_0 = v20->add_f_6();
  v21_0->add_f_0(Message0::M2::M37::E12_CONST_4);
  v21_0->set_f_1(0x5d63b67dc8580bcd);
  v21_0->set_f_2(s->substr(0, 2283));
  Message0::M2::M58* v22 = v20->mutable_f_8();
  Message0::M2::M58::M64* v23 = v22->mutable_f_2();
  v23->set_f_0(true);
  Message0::M2::M58::M64::M78* v24 = v23->mutable_f_5();
  Message0::M2::M58::M64::M78::M98* v25_0 = v24->add_f_3();
  v25_0->set_f_0(s->substr(0, 31));
  Message0::M2::M58::M64::M78::M81* v26 = v24->mutable_f_2();
  (void)v26;  // Suppresses clang-tidy.
  v24->set_f_0(0x300);
  Message0::M2::M48* v27_0 = v20->add_f_7();
  v27_0->set_f_0(0x1a7ac50);
  v20->set_f_0(0x6cce51c);
  Message0::M2::M31* v28 = v20->mutable_f_4();
  v28->set_f_0(0x3e68);
  Message0::M2::M21* v29 = v20->mutable_f_3();
  v29->set_f_13(0x4ad5ce6b412a11bb);
  v29->set_f_3(0x78843a4);
  Message0::M2::M21::M63* v30_0 = v29->add_f_20();
  v30_0->add_f_0(Message0::M2::M21::M63::E21_CONST_1);
  v30_0->set_f_2(0x504329286161287b);
  v29->set_f_0(0x490c8266);
  v29->set_f_11(Message0::M2::M21::E10_CONST_2);
  v29->set_f_6(0x8ffd88d22fc1a0a);
  v29->set_f_10(false);
  v29->set_f_8(0x74946eb8f200f41e);
  v29->set_f_9(0x17e5499a6cd8bc1f);
  v29->set_f_5(0x6e);
  message->set_f_32(0x3e2493ad);
  message->set_f_12(0x58);
  message->set_f_30(0.013212);
  message->set_f_27(true);
  message->add_f_19(Message0::E3_CONST_4);
  message->set_f_16(0x258f);
  Message0::M14* v31 = message->mutable_f_65();
  Message0::M14::M32* v32 = v31->mutable_f_4();
  v32->set_f_0(s->substr(0, 26));
  Message0::M14::M47* v33 = v31->mutable_f_5();
  v33->set_f_1(true);
  v33->set_f_0(s->substr(0, 12));
  v33->set_f_3(0x37b35289bb8bc0a8);
  v33->set_f_2(0xf5d60);
  Message0::M10* v34_0 = message->add_f_59();
  v34_0->set_f_0(true);
  Message0::M10::M44* v35_0 = v34_0->add_f_7();
  v35_0->set_f_0(0x33);
  Message0::M10::M42* v36 = v34_0->mutable_f_6();
  v36->set_f_0(0x369d02976e59e260);
  Message0::M10::M46* v37 = v34_0->mutable_f_8();
  v37->set_f_0(0x433d35aee6d850c4);
  v34_0->add_f_2(Message0::M10::E6_CONST_3);
  v34_0->add_f_2(Message0::M10::E6_CONST_3);
  Message0::M11* v38 = message->mutable_f_60();
  v38->set_f_5(0x30);
  v38->set_f_3(0x3c15c3bcbab88f74);
  Message0::M11::M35* v39 = v38->mutable_f_22();
  v39->set_f_0(0x2a4a3d1d);
  v38->set_f_2(0xbfe36a7f28a2c9b);
  v38->set_f_11(true);
  v38->set_f_1(0x7476160ef813c972);
  v38->set_f_10(0x219b5ded);
  v38->set_f_8(true);
  Message0::M11::M19* v40 = v38->mutable_f_20();
  v40->set_f_0(0x204b329d42566f7b);
  v38->set_f_6(0x6c);
  message->set_f_24(0x42);
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
}  // namespace fleetbench::rpc::P4::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_REQUEST_ACCESS_MESSAGE0_H_
