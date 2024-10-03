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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P0/request/Message0.pb.h"

namespace fleetbench::rpc::P0::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M2* v0_0 = message->add_f_55();
  Message0::M2::M15* v1 = v0_0->mutable_f_6();
  Message0::M2::M15::M32* v2 = v1->mutable_f_7();
  v2->set_f_0(0x6e);
  v1->set_f_0(0x51f6100507b20b12);
  Message0::M2::M15::M23* v3 = v1->mutable_f_5();
  (void)v3;  // Suppresses clang-tidy.
  Message0::M2::M15::M33* v4 = v1->mutable_f_9();
  v4->set_f_0(0x2a);
  Message0::M2::M11* v5 = v0_0->mutable_f_3();
  v5->set_f_0(0x77ce434103a084d8);
  v5->set_f_2(0x34e92653);
  Message0::M2::M11::M28* v6 = v5->mutable_f_6();
  v6->set_f_5(0x7c);
  v6->set_f_6(s->substr(0, 26));
  v6->set_f_9(0x718f07c78c8ef9e8);
  v6->add_f_0(Message0::M2::M11::M28::E11_CONST_1);
  v6->set_f_1(s->substr(0, 85));
  v6->set_f_8(false);
  v6->set_f_3(s->substr(0, 10));
  Message0::M2::M11::M28::M38* v7 = v6->mutable_f_21();
  v7->set_f_0(0x5e);
  v6->set_f_10(0x51136875);
  v6->set_f_11(0.137331);
  Message0::E3 array_1[22] = {
      Message0::E3_CONST_1, Message0::E3_CONST_5, Message0::E3_CONST_3,
      Message0::E3_CONST_3, Message0::E3_CONST_1, Message0::E3_CONST_3,
      Message0::E3_CONST_2, Message0::E3_CONST_4, Message0::E3_CONST_4,
      Message0::E3_CONST_1, Message0::E3_CONST_5, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_2, Message0::E3_CONST_5,
      Message0::E3_CONST_3, Message0::E3_CONST_4, Message0::E3_CONST_3,
      Message0::E3_CONST_3, Message0::E3_CONST_5, Message0::E3_CONST_3,
      Message0::E3_CONST_2,
  };
  for (auto v : array_1) {
    message->add_f_21(v);
  }
  message->set_f_19(0x78b9446b9);
  message->set_f_28(0x4c58855d);
  Message0::M4* v8_0 = message->add_f_59();
  Message0::M4::M13* v9_0 = v8_0->add_f_4();
  Message0::M4::M13::M35* v10 = v9_0->mutable_f_2();
  Message0::M4::M13::M35::M39* v11_0 = v10->add_f_2();
  v11_0->set_f_1(0x193474f0);
  Message0::M4::M13::M35::M39::E17 array_2[21] = {
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_1,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_1,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_1,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_1,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_2,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_1,
      Message0::M4::M13::M35::M39::E17_CONST_1,
      Message0::M4::M13::M35::M39::E17_CONST_2,
  };
  for (auto v : array_2) {
    v11_0->add_f_3(v);
  }
  v11_0->set_f_4(0x3cd186de64d14cf2);
  v11_0->set_f_2(0x7c492949);
  v8_0->set_f_0(0x765f1bc3);
  Message0::M9* v12 = message->mutable_f_68();
  v12->set_f_4(0.184359);
  v12->set_f_5(s->substr(0, 339));
  v12->set_f_2(0x49ca2165ae0ee2a5);
  Message0::M1* v13 = message->mutable_f_54();
  v13->set_f_1(s->substr(0, 68));
  v13->set_f_2(0x71cfde9);
  v13->set_f_3(0x1e45bd19);
  v13->set_f_6(0x5b59616565b99019);
  v13->set_f_5(0x54);
  v13->set_f_4(s->substr(0, 442));
  message->set_f_4(true);
  message->set_f_16(0x69f73a11a81d7af1);
  message->set_f_20(0x6b);
  message->set_f_1(0x7a34da539150f1f);
  message->set_f_11(0x277faaa24c53596b);
  message->add_f_25(Message0::E4_CONST_1);
  message->set_f_17(s->substr(0, 18));
  Message0::M5* v14 = message->mutable_f_61();
  v14->set_f_1(0xd);
  message->set_f_24(0x65f369bf32fd4c9a);
  Message0::M7* v15 = message->mutable_f_63();
  v15->set_f_0(0x4f077106c6b3090a);
  message->set_f_6(s->substr(0, 210));
  message->set_f_26(0.130024);
  message->set_f_23(0x65905e1801a30da6);
  message->set_f_15(0x76);
  message->set_f_10(s->substr(0, 28));
  message->set_f_3(0x30d7e6bb9d29734a);
  Message0::E1 array_3[21] = {
      Message0::E1_CONST_1, Message0::E1_CONST_3, Message0::E1_CONST_3,
      Message0::E1_CONST_2, Message0::E1_CONST_4, Message0::E1_CONST_3,
      Message0::E1_CONST_3, Message0::E1_CONST_3, Message0::E1_CONST_3,
      Message0::E1_CONST_3, Message0::E1_CONST_2, Message0::E1_CONST_3,
      Message0::E1_CONST_5, Message0::E1_CONST_1, Message0::E1_CONST_1,
      Message0::E1_CONST_3, Message0::E1_CONST_3, Message0::E1_CONST_1,
      Message0::E1_CONST_3, Message0::E1_CONST_5, Message0::E1_CONST_4,
  };
  for (auto v : array_3) {
    message->add_f_14(v);
  }
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M3* v0_0 = message->add_f_58();
  v0_0->set_f_0(0x77);
  Message0::M6* v1_0 = message->add_f_62();
  v1_0->set_f_6(0.766559);
  v1_0->set_f_1(s->substr(0, 185));
  v1_0->set_f_3(s->substr(0, 1));
  v1_0->set_f_2(true);
  Message0::M6::M10* v2 = v1_0->mutable_f_15();
  Message0::M6::M10::M30* v3_0 = v2->add_f_5();
  v3_0->set_f_2(0x7bc943aa06f48a39);
  v3_0->set_f_0(s->substr(0, 128));
  v3_0->set_f_1(0x2df0);
  Message0::M6::M16* v4 = v1_0->mutable_f_18();
  Message0::M6::M16::M36* v5 = v4->mutable_f_7();
  v5->set_f_1(0.817704);
  v5->add_f_2(Message0::M6::M16::M36::E15_CONST_2);
  v4->set_f_0(Message0::M6::M16::E8_CONST_1);
  Message0::M6::M16::M31* v6 = v4->mutable_f_5();
  v6->set_f_0(0x20);
  v1_0->set_f_4(0x13181b);
  v1_0->set_f_0(true);
  Message0::M1* v7 = message->mutable_f_54();
  v7->set_f_6(0x5ca8ff4a824f990);
  v7->set_f_0(0xb9a7d3);
  v7->set_f_4(s->substr(0, 17));
  Message0::M1::M18* v8 = v7->mutable_f_13();
  v8->set_f_15(0x5b3490790cc45252);
  v8->set_f_6(0x77);
  v8->set_f_22(s->substr(0, 5));
  v8->set_f_20(Message0::M1::M18::E10_CONST_2);
  v8->set_f_9(0x7daf0e374c94c6dc);
  v8->set_f_0(s->substr(0, 82));
  Message0::M1::M18::M24* v9_0 = v8->add_f_48();
  v9_0->set_f_0(0x515c937fbbe9c79f);
  v8->set_f_4(0.206308);
  v8->set_f_11(s->substr(0, 14));
  Message0::M1::M18::M20* v10 = v8->mutable_f_47();
  v10->set_f_0(0x57f7dd6977568a05);
  v8->set_f_17(0x3861be3f);
  v8->set_f_2(0x539296b8a9a767ab);
  v8->set_f_13(0x6037365);
  Message0::M1::M18::M34* v11 = v8->mutable_f_50();
  v11->set_f_1(0xb44b476);
  v11->set_f_0(0x47106a1b287bedfb);
  v11->set_f_2(0x8b969e0);
  v8->set_f_19(s->substr(0, 91));
  v8->set_f_5(s->substr(0, 1));
  v8->set_f_16(0x2);
  v8->set_f_1(0x5d0e81242873d2cf);
  v7->set_f_5(0x2a34);
  v7->set_f_1(s->substr(0, 466));
  message->set_f_26(0.063331);
  message->set_f_19(0x2adb907fcbe);
  Message0::M9* v12 = message->mutable_f_68();
  v12->set_f_5(s->substr(0, 67));
  v12->set_f_3(0x1fa7f040fc9773e4);
  v12->set_f_1(0xa534447);
  v12->set_f_4(0.595248);
  v12->set_f_0(0x13);
  message->set_f_7(0x7bf20fd);
  message->set_f_1(0x4131e07c383ade7f);
  message->set_f_2(0x6);
  message->set_f_24(0xbd0e0188a8e52d0);
  message->set_f_11(0x6978ff3baf9f2b6);
  message->set_f_16(0x53a975852a016320);
  Message0::M2* v13_0 = message->add_f_55();
  Message0::M2::M11* v14 = v13_0->mutable_f_3();
  v14->set_f_0(0x55709347dd3e9f7a);
  v14->set_f_2(0xcc7b264);
  v14->set_f_1(0x183cc57d);
  Message0::M2::M11::M28* v15 = v14->mutable_f_6();
  v15->add_f_0(Message0::M2::M11::M28::E11_CONST_1);
  v15->set_f_9(0x12924e9899f19e7d);
  Message0::M2::M11::M28::M38* v16 = v15->mutable_f_21();
  v16->set_f_0(0x18a6e7);
  v15->set_f_8(false);
  v15->set_f_7(0x624cfb94a3606aeb);
  v15->set_f_12(0x2a);
  v15->set_f_4(s->substr(0, 53));
  v15->set_f_1(s->substr(0, 13));
  v15->set_f_2(0x10a23b81);
  v15->set_f_11(0.844871);
  Message0::M4* v17_0 = message->add_f_59();
  Message0::M4::M13* v18_0 = v17_0->add_f_4();
  v18_0->set_f_0(0x4f9cfe26);
  Message0::M4::M13::M35* v19 = v18_0->mutable_f_2();
  v19->add_f_0(Message0::M4::M13::M35::E14_CONST_1);
  v17_0->set_f_0(0x7cf71e54);
  message->set_f_17(s->substr(0, 122));
  Message0::M8* v20 = message->mutable_f_65();
  v20->set_f_2(0x4c6893e1d8a99a43);
  v20->set_f_1(0xd7ea6f0);
  v20->add_f_0(Message0::M8::E6_CONST_1);
  v20->add_f_0(Message0::M8::E6_CONST_5);
  v20->add_f_0(Message0::M8::E6_CONST_3);
  v20->add_f_0(Message0::M8::E6_CONST_4);
  message->set_f_12(0x2a351cc714fab19d);
  Message0::M7* v21 = message->mutable_f_63();
  (void)v21;  // Suppresses clang-tidy.
  message->set_f_20(0x58);
  message->set_f_6(s->substr(0, 5));
  message->set_f_9(0x50c05b0ecad91ae4);
  message->set_f_5(0xf);
  message->set_f_22(0x47b734e9d3270d19);
  message->set_f_4(true);
  message->set_f_18(Message0::E2_CONST_4);
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_6(s->substr(0, 10));
  Message0::M5* v0 = message->mutable_f_61();
  Message0::M5::M14* v1 = v0->mutable_f_6();
  Message0::M5::M14::M29* v2 = v1->mutable_f_8();
  v2->set_f_3(false);
  v1->set_f_0(0x75);
  Message0::M5::M14::M21* v3_0 = v1->add_f_5();
  v3_0->set_f_0(s->substr(0, 103));
  Message0::M5::M14::M19* v4 = v1->mutable_f_4();
  v4->set_f_0(0x6268300a37392234);
  Message0::M5::M12* v5_0 = v0->add_f_4();
  Message0::M5::M12::M22* v6_0 = v5_0->add_f_2();
  v6_0->set_f_0(0.245916);
  Message0::M5::M12::M22::M41* v7_0 = v6_0->add_f_5();
  v7_0->set_f_1(0.584939);
  v7_0->set_f_0(false);
  v0->set_f_0(0.500151);
  message->set_f_1(0x20a99e98b6553596);
  Message0::E3 array_0[22] = {
      Message0::E3_CONST_2, Message0::E3_CONST_2, Message0::E3_CONST_1,
      Message0::E3_CONST_1, Message0::E3_CONST_1, Message0::E3_CONST_5,
      Message0::E3_CONST_1, Message0::E3_CONST_4, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_4, Message0::E3_CONST_2,
      Message0::E3_CONST_3, Message0::E3_CONST_4, Message0::E3_CONST_1,
      Message0::E3_CONST_1, Message0::E3_CONST_2, Message0::E3_CONST_1,
      Message0::E3_CONST_3, Message0::E3_CONST_4, Message0::E3_CONST_4,
      Message0::E3_CONST_2,
  };
  for (auto v : array_0) {
    message->add_f_21(v);
  }
  message->set_f_4(true);
  Message0::M4* v8_0 = message->add_f_59();
  Message0::M4::M13* v9_0 = v8_0->add_f_4();
  Message0::M4::M13::M35* v10 = v9_0->mutable_f_2();
  v10->add_f_0(Message0::M4::M13::M35::E14_CONST_3);
  Message0::M4::M13::M35::M39* v11_0 = v10->add_f_2();
  Message0::M4::M13::M35::M39::E17 array_1[18] = {
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_2,
      Message0::M4::M13::M35::M39::E17_CONST_2,
      Message0::M4::M13::M35::M39::E17_CONST_2,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_3,
      Message0::M4::M13::M35::M39::E17_CONST_5,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_4,
      Message0::M4::M13::M35::M39::E17_CONST_5,
  };
  for (auto v : array_1) {
    v11_0->add_f_3(v);
  }
  v11_0->set_f_1(0x59a882b7);
  v11_0->set_f_2(0x19b5db56);
  message->set_f_28(0x6e961410);
  message->set_f_13(0x1aefc1);
  message->add_f_14(Message0::E1_CONST_3);
  message->add_f_25(Message0::E4_CONST_3);
  Message0::M6* v12_0 = message->add_f_62();
  v12_0->set_f_6(0.588903);
  Message0::M6::M10* v13 = v12_0->mutable_f_15();
  v13->set_f_0(Message0::M6::M10::E7_CONST_1);
  Message0::M6::M10::M30* v14_0 = v13->add_f_5();
  v14_0->set_f_2(0x635ac14cc7310d26);
  v14_0->set_f_0(s->substr(0, 247));
  v14_0->set_f_1(0xa1c0b21);
  v12_0->set_f_5(0x7d77779);
  v12_0->set_f_2(true);
  v12_0->set_f_0(true);
  v12_0->set_f_1(s->substr(0, 14));
  message->set_f_15(0x61);
  message->set_f_3(0x74d1be664f55da24);
  message->set_f_23(0x57ee59529c1f4c17);
  Message0::M7* v15 = message->mutable_f_63();
  (void)v15;  // Suppresses clang-tidy.
  Message0::M3* v16_0 = message->add_f_58();
  v16_0->set_f_1(0x5d9bd9fdae22deba);
  v16_0->set_f_0(0x1e);
  v16_0->add_f_2(Message0::M3::E5_CONST_2);
  message->set_f_7(0x71);
  Message0::M9* v17 = message->mutable_f_68();
  v17->set_f_5(s->substr(0, 21));
  v17->set_f_3(0x310103aea95367e);
  v17->set_f_0(0x19fe40d);
  v17->set_f_1(0x19);
  message->set_f_5(0x70b015a);
  Message0::M2* v18_0 = message->add_f_55();
  Message0::M2::M15* v19 = v18_0->mutable_f_6();
  Message0::M2::M15::M32* v20 = v19->mutable_f_7();
  v20->set_f_0(0x8a792e5);
  Message0::M2::M15::M33* v21 = v19->mutable_f_9();
  v21->set_f_0(0x520d559);
  v19->set_f_0(0x47e10d2dafacdf7);
  Message0::M2::M15::M23* v22 = v19->mutable_f_5();
  v22->set_f_1(0x20);
  v19->set_f_1(true);
  v18_0->set_f_0(s->substr(0, 22));
  Message0::M2::M11* v23 = v18_0->mutable_f_3();
  v23->set_f_2(0x209fc080);
  v23->set_f_1(0x3fda4be9);
  Message0::M2::M11::M28* v24 = v23->mutable_f_6();
  v24->set_f_4(s->substr(0, 3));
  v24->set_f_8(true);
  v24->set_f_12(0x9b3871c);
  v24->set_f_2(0x7ba7adc3);
  v24->add_f_0(Message0::M2::M11::M28::E11_CONST_1);
  v24->add_f_0(Message0::M2::M11::M28::E11_CONST_5);
  v24->add_f_0(Message0::M2::M11::M28::E11_CONST_5);
  v24->add_f_0(Message0::M2::M11::M28::E11_CONST_2);
  v24->set_f_6(s->substr(0, 61));
  v24->set_f_5(0xac0);
  message->set_f_0(0x4a);
  message->set_f_24(0x3e476e054c54611f);
  message->set_f_10(s->substr(0, 18));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_1(0x3be4512496681d29);
  message->set_f_10(s->substr(0, 11));
  message->set_f_28(0x6a154f4c);
  message->set_f_13(0x3e);
  message->set_f_16(0x3df6e3740b181e27);
  message->set_f_27(0x9f64f9b);
  message->set_f_24(0x5b5222b18e474d34);
  message->set_f_7(0x44);
  message->add_f_25(Message0::E4_CONST_1);
  message->add_f_25(Message0::E4_CONST_1);
  message->add_f_25(Message0::E4_CONST_3);
  message->set_f_3(0x289be15cc060c774);
  message->set_f_26(0.630747);
  message->set_f_9(0x1622f12306b575b);
  message->set_f_19(0x6d76e8907);
  message->set_f_12(0x2dd85c1d6803ba9c);
  message->set_f_5(0x51);
  message->set_f_8(0xe8d1e80);
  message->set_f_18(Message0::E2_CONST_2);
  message->set_f_4(true);
  message->set_f_2(0x5a1012e);
  Message0::M5* v0 = message->mutable_f_61();
  v0->set_f_0(0.060061);
  v0->set_f_1(0xcf5dfe);
  message->set_f_17(s->substr(0, 19));
  message->add_f_21(Message0::E3_CONST_1);
  Message0::M8* v1 = message->mutable_f_65();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_20(0x72);
  Message0::M1* v2 = message->mutable_f_54();
  v2->set_f_4(s->substr(0, 19));
  v2->set_f_0(0x2a);
  Message0::M1::M18* v3 = v2->mutable_f_13();
  v3->set_f_15(0xe1f057546103dae);
  Message0::M1::M18::M34* v4 = v3->mutable_f_50();
  v4->set_f_2(0x66);
  v4->set_f_0(0xf5676925f401d);
  v4->set_f_1(0x48);
  v3->set_f_7(0x30b378b1914c38e);
  v3->set_f_21(0x48);
  v3->set_f_3(s->substr(0, 32));
  Message0::M1::M18::M20* v5 = v3->mutable_f_47();
  v5->set_f_0(0x3070cb39c4154d1a);
  v3->set_f_10(0x602b60bc6d15bdf0);
  v3->set_f_8(0x5f27ae6c4d0c9fbc);
  v3->set_f_11(s->substr(0, 13));
  v3->set_f_0(s->substr(0, 21));
  v3->set_f_16(0x30);
  v3->set_f_2(0x377650cf5091af2);
  v3->set_f_13(0x608cc5e);
  v3->set_f_17(0x119701d3);
  v3->set_f_9(0x164d08637413827e);
  Message0::M1::M18::M24* v6_0 = v3->add_f_48();
  (void)v6_0;  // Suppresses clang-tidy.
  v3->set_f_22(s->substr(0, 1));
  v3->set_f_4(0.533570);
  Message0::M1::M18::M25* v7 = v3->mutable_f_49();
  v7->set_f_1(0x14dc84e4);
  v7->set_f_4(0.355371);
  v7->set_f_2(0x985bbf5);
  v7->set_f_0(0x1f);
  v3->set_f_20(Message0::M1::M18::E10_CONST_4);
  v2->set_f_2(0x65);
  v2->set_f_6(0x520e364b0f7d6d73);
  v2->set_f_3(0x795a510b);
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
}  // namespace fleetbench::rpc::P0::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P0_REQUEST_ACCESS_MESSAGE0_H_
