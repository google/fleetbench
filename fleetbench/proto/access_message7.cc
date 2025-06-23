// Copyright 2025 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License" );
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// WARNING: DO NOT EDIT! This file is auto-generated.

#include "fleetbench/proto/access_message7.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message7.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message7_Set_1(Message7* message, std::string* s) {
  Message7::M1* v0_0 = message->add_f_3();
  Message7::M1::M2* v1 = v0_0->mutable_f_2();
  Message7::M1::M2::M5* v2 = v1->mutable_f_2();
  Message7::M1::M2::M5::M8* v3 = v2->mutable_f_5();
  Message7::M1::M2::M5::M8::M11* v4_0 = v3->add_f_4();
  v4_0->set_f_1(s->substr(0, 1));
  Message7::M1::M2::M5::M8::M11::M12* v5 = v4_0->mutable_f_4();
  v5->set_f_0(s->substr(0, 4));
  Message7::M1::M2::M5::M8::M11::M12::M16* v6_0 = v5->add_f_2();
  Message7::M1::M2::M5::M8::M11::M12::M16::M18* v7 = v6_0->mutable_f_4();
  (void)v7;  // Suppresses clang-tidy.
  Message7::M1::M2::M5::M8::M11::M12::M16* v6_1 = v5->add_f_2();
  v6_1->set_f_0(false);
  v4_0->set_f_2(0x34e1b5c3082);
  v3->add_f_0(Message7::M1::M2::M5::M8::E6_CONST_1);
  Message7::M1::M2::M5::M8::M10* v8 = v3->mutable_f_3();
  v8->set_f_3(0x36fdf1cf);
  v8->set_f_1(0x28c28f716f3c62);
  v8->set_f_2(0x2a);
  v8->set_f_0(false);
  Message7::M1::M2::M5::M8::M10::M13* v9 = v8->mutable_f_6();
  v9->set_f_16(false);
  v9->set_f_55(0.408922);
  v9->set_f_26(0x429f042);
  v9->set_f_15(0x3c);
  v9->set_f_58(s->substr(0, 3));
  v9->set_f_18(0x64);
  v9->set_f_42(0x16);
  v9->set_f_1(0x2b69);
  v9->set_f_39(Message7::M1::M2::M5::M8::M10::M13::E10_CONST_3);
  v9->set_f_56(0x305d7d9a9);
  v9->set_f_28(s->substr(0, 2));
  v9->set_f_57(0x2b);
  v9->set_f_24(Message7::M1::M2::M5::M8::M10::M13::E8_CONST_1);
  Message7::M1::M2::M5::M8::M10::M13::M15* v10 = v9->mutable_f_75();
  v10->set_f_0(Message7::M1::M2::M5::M8::M10::M13::M15::E13_CONST_3);
  v9->set_f_36(true);
  v9->set_f_27(0x6b);
  int array_1[49] = {
      6,  64,  16, 7,   13, 24, 32, 8,  3,  23, 4,  4, 28, 25, 8,  37, 10,
      2,  6,   28, 125, 3,  8,  4,  19, 28, 83, 30, 7, 16, 22, 26, 29, 8,
      40, 104, 7,  6,   19, 12, 8,  48, 21, 30, 3,  8, 36, 8,  29,
  };
  for (size_t i = 0; i < 49; ++i) {
    v9->add_f_31(s->substr(0, array_1[i]));
  }
  v9->set_f_20(0x39);
  v9->add_f_37(0xc1a9815);
  v9->add_f_37(0xcd4cb0d);
  v9->set_f_46(s->substr(0, 4));
  v9->add_f_13(Message7::M1::M2::M5::M8::M10::M13::E7_CONST_3);
  Message7::M1::M2::M5::M7* v11_0 = v2->add_f_3();
  v11_0->set_f_0(0x2191c1a);
  v1->add_f_0(Message7::M1::M2::E3_CONST_3);
  v0_0->set_f_0(Message7::M1::E2_CONST_2);
  Message7::M1::M4* v12 = v0_0->mutable_f_5();
  v12->set_f_2(Message7::M1::M4::E4_CONST_1);
  Message7::M1::M4::M6* v13 = v12->mutable_f_6();
  v13->set_f_3(Message7::M1::M4::M6::E5_CONST_4);
  message->set_f_1(s->substr(0, 34));
  message->set_f_0(Message7::E1_CONST_2);
}
void Message7_Set_2(Message7* message, std::string* s) {
  message->set_f_0(Message7::E1_CONST_5);
  Message7::M1* v0_0 = message->add_f_3();
  Message7::M1::M3* v1_0 = v0_0->add_f_4();
  (void)v1_0;  // Suppresses clang-tidy.
  Message7::M1::M2* v2 = v0_0->mutable_f_2();
  v2->add_f_0(Message7::M1::M2::E3_CONST_4);
  Message7::M1::M2::M5* v3 = v2->mutable_f_2();
  v3->set_f_0(0x26);
  Message7::M1::M2::M5::M8* v4 = v3->mutable_f_5();
  Message7::M1::M2::M5::M8::M11* v5_0 = v4->add_f_4();
  v5_0->set_f_2(0x930f);
  Message7::M1::M2::M5::M8::M11::M12* v6 = v5_0->mutable_f_4();
  Message7::M1::M2::M5::M8::M11::M12::M16* v7_0 = v6->add_f_2();
  Message7::M1::M2::M5::M8::M11::M12::M16::M17* v8_0 = v7_0->add_f_3();
  Message7::M1::M2::M5::M8::M11::M12::M16::M17::M19* v9_0 = v8_0->add_f_2();
  v9_0->set_f_0(0x49);
  Message7::M1::M2::M5::M8::M11::M12::M16::M18* v10 = v7_0->mutable_f_4();
  (void)v10;  // Suppresses clang-tidy.
  Message7::M1::M2::M5::M8::M10* v11 = v4->mutable_f_3();
  v11->set_f_0(false);
  Message7::M1::M2::M5::M8::M10::M13* v12 = v11->mutable_f_6();
  v12->set_f_45(Message7::M1::M2::M5::M8::M10::M13::E11_CONST_5);
  v12->set_f_23(0.470354);
  v12->set_f_25(s->substr(0, 5));
  v12->set_f_22(0x63b602f6c635fa69);
  v12->set_f_42(0x7d);
  v12->set_f_43(s->substr(0, 13));
  v12->set_f_48(Message7::M1::M2::M5::M8::M10::M13::E12_CONST_1);
  v12->set_f_46(s->substr(0, 5));
  v12->set_f_49(0x55ff1f3683f993);
  v12->set_f_4(0x155d74315efaa);
  v12->set_f_54(0x7e);
  v12->set_f_40(0x21ef141a8);
  v12->set_f_17(s->substr(0, 89));
  Message7::M1::M2::M5::M8::M10::M13::M15* v13 = v12->mutable_f_75();
  (void)v13;  // Suppresses clang-tidy.
  v12->set_f_55(0.714275);
  v12->set_f_47(0x132c40);
  v12->set_f_57(0x3d);
  v12->set_f_51(0x5a13b66b);
  v12->set_f_12(0x59);
  v12->set_f_0(0x482b552c6fb7aec3);
  v12->add_f_31(s->substr(0, 15));
  v12->set_f_3(s->substr(0, 3));
  v12->set_f_20(0x6bb93bd25e13);
  Message7::M1::M2::M5::M8::M10::M13::M14* v14 = v12->mutable_f_74();
  (void)v14;  // Suppresses clang-tidy.
  v12->set_f_10(0x656471a07);
  v12->set_f_27(0x3d58);
  v12->set_f_44(true);
  v12->set_f_15(0x1a290e);
  v11->set_f_3(0x573bc0fb);
  v11->set_f_1(0x30);
  Message7::M1::M2::M5::M7* v15_0 = v3->add_f_3();
  (void)v15_0;  // Suppresses clang-tidy.
  Message7::M1::M2::M5::M7* v15_1 = v3->add_f_3();
  (void)v15_1;  // Suppresses clang-tidy.
  Message7::M1::M4* v16 = v0_0->mutable_f_5();
  v16->set_f_2(Message7::M1::M4::E4_CONST_4);
  v16->set_f_1(s->substr(0, 7));
  Message7::M1::M4::M6* v17 = v16->mutable_f_6();
  v17->set_f_1(0.175447);
  Message7::M1::M4::M6::M9* v18 = v17->mutable_f_10();
  (void)v18;  // Suppresses clang-tidy.
  v16->set_f_0(0x3902);
}
void Message7_Set_3(Message7* message, std::string* s) {
  message->set_f_0(Message7::E1_CONST_4);
  message->set_f_1(s->substr(0, 4));
  Message7::M1* v0_0 = message->add_f_3();
  Message7::M1::M2* v1 = v0_0->mutable_f_2();
  Message7::M1::M2::M5* v2 = v1->mutable_f_2();
  Message7::M1::M2::M5::M7* v3_0 = v2->add_f_3();
  v3_0->set_f_2(s->substr(0, 5));
  v3_0->set_f_0(0xae16b76);
  Message7::M1::M2::M5::M8* v4 = v2->mutable_f_5();
  Message7::M1::M2::M5::M8::M10* v5 = v4->mutable_f_3();
  Message7::M1::M2::M5::M8::M10::M13* v6 = v5->mutable_f_6();
  v6->set_f_33(0x4fd08eb);
  v6->set_f_22(0x60b2d2c1ac531c5d);
  v6->set_f_38(s->substr(0, 4));
  v6->set_f_48(Message7::M1::M2::M5::M8::M10::M13::E12_CONST_5);
  v6->set_f_55(0.905812);
  v6->set_f_3(s->substr(0, 5));
  v6->set_f_9(0xc1bdb0843e6d34);
  v6->set_f_36(false);
  v6->set_f_44(true);
  v6->set_f_58(s->substr(0, 28));
  v6->set_f_17(s->substr(0, 31));
  v6->set_f_12(0xf252f9583d40cb);
  v6->set_f_19(0x10);
  v6->set_f_32(s->substr(0, 4));
  v6->set_f_46(s->substr(0, 7));
  v6->add_f_13(Message7::M1::M2::M5::M8::M10::M13::E7_CONST_5);
  v5->set_f_3(0x2f06b5b1);
  v4->add_f_0(Message7::M1::M2::M5::M8::E6_CONST_2);
  Message7::M1::M2::M5::M8::M11* v7_0 = v4->add_f_4();
  Message7::M1::M2::M5::M8::M11::M12* v8 = v7_0->mutable_f_4();
  Message7::M1::M2::M5::M8::M11::M12::M16* v9_0 = v8->add_f_2();
  Message7::M1::M2::M5::M8::M11::M12::M16::M17* v10_0 = v9_0->add_f_3();
  (void)v10_0;  // Suppresses clang-tidy.
  v8->set_f_0(s->substr(0, 415));
  Message7::M1::M4* v11 = v0_0->mutable_f_5();
  Message7::M1::M4::M6* v12 = v11->mutable_f_6();
  v12->set_f_3(Message7::M1::M4::M6::E5_CONST_2);
  v11->set_f_2(Message7::M1::M4::E4_CONST_5);
}
void Message7_Set_4(Message7* message, std::string* s) {
  Message7::M1* v0_0 = message->add_f_3();
  v0_0->set_f_0(Message7::M1::E2_CONST_2);
  Message7::M1::M3* v1_0 = v0_0->add_f_4();
  (void)v1_0;  // Suppresses clang-tidy.
  Message7::M1::M3* v1_1 = v0_0->add_f_4();
  (void)v1_1;  // Suppresses clang-tidy.
  Message7::M1::M4* v2 = v0_0->mutable_f_5();
  v2->set_f_3(0x71);
  v2->set_f_0(0x3b14ec746);
  Message7::M1::M4::M6* v3 = v2->mutable_f_6();
  v3->set_f_0(s->substr(0, 15));
  v2->set_f_1(s->substr(0, 2));
  Message7::M1::M2* v4 = v0_0->mutable_f_2();
  Message7::M1::M2::M5* v5 = v4->mutable_f_2();
  Message7::M1::M2::M5::M8* v6 = v5->mutable_f_5();
  Message7::M1::M2::M5::M8::M11* v7_0 = v6->add_f_4();
  v7_0->set_f_2(0x496b7f8df2fcc);
  Message7::M1::M2::M5::M8::M11::M12* v8 = v7_0->mutable_f_4();
  Message7::M1::M2::M5::M8::M11::M12::M16* v9_0 = v8->add_f_2();
  Message7::M1::M2::M5::M8::M11::M12::M16::M17* v10_0 = v9_0->add_f_3();
  Message7::M1::M2::M5::M8::M11::M12::M16::M17::M19* v11_0 = v10_0->add_f_2();
  (void)v11_0;  // Suppresses clang-tidy.
  Message7::M1::M2::M5::M8::M11::M12::M16::M18* v12 = v9_0->mutable_f_4();
  v12->set_f_0(0xb3c46e9f3d7cf0);
  v7_0->add_f_0(s->substr(0, 7));
  v6->add_f_0(Message7::M1::M2::M5::M8::E6_CONST_1);
  Message7::M1::M2::M5::M8::M10* v13 = v6->mutable_f_3();
  Message7::M1::M2::M5::M8::M10::M13* v14 = v13->mutable_f_6();
  v14->set_f_11(s->substr(0, 110));
  v14->set_f_7(false);
  v14->set_f_48(Message7::M1::M2::M5::M8::M10::M13::E12_CONST_4);
  v14->set_f_30(Message7::M1::M2::M5::M8::M10::M13::E9_CONST_5);
  Message7::M1::M2::M5::M8::M10::M13::M15* v15 = v14->mutable_f_75();
  v15->set_f_0(Message7::M1::M2::M5::M8::M10::M13::M15::E13_CONST_5);
  v14->set_f_14(0xb09ffaa);
  v14->set_f_27(0x14bb);
  v14->set_f_40(0x595eb318b3864f);
  v14->set_f_16(false);
  v14->set_f_6(0x74ed1e4de1f752);
  v14->set_f_17(s->substr(0, 1));
  v14->set_f_53(true);
  v14->set_f_3(s->substr(0, 3));
  v14->set_f_10(0x1c54acf2a331b);
  v14->set_f_0(0x53ed8aa54b97a561);
  v14->set_f_34(0.149062);
  v14->set_f_41(0.672593);
  v14->set_f_8(s->substr(0, 13));
  v14->set_f_33(0xc2cc667);
  v14->set_f_42(0x5b);
  v14->set_f_25(s->substr(0, 24));
  v14->set_f_23(0.986110);
  v14->set_f_18(0xd06ba74);
  v14->set_f_24(Message7::M1::M2::M5::M8::M10::M13::E8_CONST_1);
  v14->set_f_1(0x13f9c0);
  v13->set_f_1(0x4d);
  v13->set_f_3(0x1ccf2df9);
  v4->add_f_0(Message7::M1::M2::E3_CONST_4);
}
void Message7_Get_1(Message7* message) {
  Receive((*message).f_1());
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_3()) {
    const Message7::M1::M2& v1 = v0.f_2();
    const Message7::M1::M2::M5& v2 = v1.f_2();
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_0());
      Receive(v3.f_2());
      Receive(v3.f_1());
    }
    const Message7::M1::M2::M5::M8& v4 = v2.f_5();
    const Message7::M1::M2::M5::M8::M10& v5 = v4.f_3();
    Receive(v5.f_3());
    Receive(v5.f_2());
    Receive(v5.f_0());
    Receive(v5.f_1());
    const Message7::M1::M2::M5::M8::M10::M13& v6 = v5.f_6();
    for (int i = 0; i < v6.f_37_size(); ++i) {
      Receive(v6.f_37(i));
    }
    Receive(v6.f_42());
    Receive(v6.f_39());
    Receive(v6.f_29());
    Receive(v6.f_4());
    Receive(v6.f_32());
    Receive(v6.f_12());
    Receive(v6.f_20());
    Receive(v6.f_28());
    Receive(v6.f_44());
    Receive(v6.f_38());
    Receive(v6.f_55());
    for (int i = 0; i < v6.f_35_size(); ++i) {
      Receive(v6.f_35(i));
    }
    Receive(v6.f_33());
    const Message7::M1::M2::M5::M8::M10::M13::M14& v7 = v6.f_74();
    Receive(v7.f_0());
    Receive(v6.f_2());
    Receive(v6.f_27());
    Receive(v6.f_10());
    Receive(v6.f_40());
    Receive(v6.f_5());
    for (int i = 0; i < v6.f_31_size(); ++i) {
      Receive(v6.f_31(i));
    }
    for (int i = 0; i < v6.f_13_size(); ++i) {
      Receive(v6.f_13(i));
    }
    Receive(v6.f_34());
    Receive(v6.f_18());
    Receive(v6.f_11());
    Receive(v6.f_41());
    Receive(v6.f_57());
    Receive(v6.f_48());
    Receive(v6.f_22());
    Receive(v6.f_17());
    Receive(v6.f_24());
    Receive(v6.f_50());
    Receive(v6.f_26());
    Receive(v6.f_14());
    Receive(v6.f_36());
    Receive(v6.f_25());
    Receive(v6.f_30());
    Receive(v6.f_16());
    Receive(v6.f_8());
    Receive(v6.f_3());
    Receive(v6.f_43());
    Receive(v6.f_0());
    Receive(v6.f_21());
    Receive(v6.f_58());
    Receive(v6.f_15());
    Receive(v6.f_45());
    Receive(v6.f_49());
    Receive(v6.f_23());
    Receive(v6.f_56());
    Receive(v6.f_1());
    Receive(v6.f_6());
    Receive(v6.f_54());
    Receive(v6.f_7());
    Receive(v6.f_52());
    const Message7::M1::M2::M5::M8::M10::M13::M15& v8 = v6.f_75();
    Receive(v8.f_0());
    Receive(v6.f_19());
    Receive(v6.f_9());
    Receive(v6.f_51());
    Receive(v6.f_53());
    Receive(v6.f_46());
    Receive(v6.f_47());
    for (int i = 0; i < v4.f_0_size(); ++i) {
      Receive(v4.f_0(i));
    }
    for (const auto& v9 : v4.f_4()) {
      Receive(v9.f_2());
      for (int i = 0; i < v9.f_0_size(); ++i) {
        Receive(v9.f_0(i));
      }
      Receive(v9.f_1());
      const Message7::M1::M2::M5::M8::M11::M12& v10 = v9.f_4();
      for (const auto& v11 : v10.f_2()) {
        const Message7::M1::M2::M5::M8::M11::M12::M16::M18& v12 = v11.f_4();
        Receive(v12.f_0());
        Receive(v11.f_0());
        for (const auto& v13 : v11.f_3()) {
          for (const auto& v14 : v13.f_2()) {
            const Message7::M1::M2::M5::M8::M11::M12::M16::M17::M19::M20& v15 =
                v14.f_2();
            Receive(v15.f_0());
            Receive(v14.f_0());
          }
          Receive(v13.f_0());
        }
      }
      Receive(v10.f_0());
    }
    Receive(v2.f_0());
    for (int i = 0; i < v1.f_0_size(); ++i) {
      Receive(v1.f_0(i));
    }
    const Message7::M1::M4& v16 = v0.f_5();
    Receive(v16.f_2());
    Receive(v16.f_1());
    Receive(v16.f_0());
    Receive(v16.f_3());
    const Message7::M1::M4::M6& v17 = v16.f_6();
    Receive(v17.f_3());
    Receive(v17.f_0());
    const Message7::M1::M4::M6::M9& v18 = v17.f_10();
    Receive(v18.f_0());
    for (int i = 0; i < v17.f_4_size(); ++i) {
      Receive(v17.f_4(i));
    }
    Receive(v17.f_1());
    Receive(v17.f_2());
    Receive(v0.f_0());
    for (const auto& v19 : v0.f_4()) {
      Receive(v19.f_0());
    }
  }
}
void Message7_Get_2(Message7* message) {
  for (const auto& v0 : (*message).f_3()) {
    Receive(v0.f_0());
    const Message7::M1::M4& v1 = v0.f_5();
    Receive(v1.f_2());
    const Message7::M1::M4::M6& v2 = v1.f_6();
    Receive(v2.f_3());
    Receive(v2.f_0());
    Receive(v2.f_1());
    for (int i = 0; i < v2.f_4_size(); ++i) {
      Receive(v2.f_4(i));
    }
    Receive(v2.f_2());
    const Message7::M1::M4::M6::M9& v3 = v2.f_10();
    Receive(v3.f_0());
    Receive(v1.f_0());
    Receive(v1.f_3());
    Receive(v1.f_1());
    const Message7::M1::M2& v4 = v0.f_2();
    for (int i = 0; i < v4.f_0_size(); ++i) {
      Receive(v4.f_0(i));
    }
    const Message7::M1::M2::M5& v5 = v4.f_2();
    for (const auto& v6 : v5.f_3()) {
      Receive(v6.f_0());
      Receive(v6.f_1());
      Receive(v6.f_2());
    }
    const Message7::M1::M2::M5::M8& v7 = v5.f_5();
    for (const auto& v8 : v7.f_4()) {
      for (int i = 0; i < v8.f_0_size(); ++i) {
        Receive(v8.f_0(i));
      }
      Receive(v8.f_1());
      Receive(v8.f_2());
      const Message7::M1::M2::M5::M8::M11::M12& v9 = v8.f_4();
      Receive(v9.f_0());
      for (const auto& v10 : v9.f_2()) {
        for (const auto& v11 : v10.f_3()) {
          Receive(v11.f_0());
          for (const auto& v12 : v11.f_2()) {
            Receive(v12.f_0());
            const Message7::M1::M2::M5::M8::M11::M12::M16::M17::M19::M20& v13 =
                v12.f_2();
            Receive(v13.f_0());
          }
        }
        const Message7::M1::M2::M5::M8::M11::M12::M16::M18& v14 = v10.f_4();
        Receive(v14.f_0());
        Receive(v10.f_0());
      }
    }
    for (int i = 0; i < v7.f_0_size(); ++i) {
      Receive(v7.f_0(i));
    }
    const Message7::M1::M2::M5::M8::M10& v15 = v7.f_3();
    Receive(v15.f_3());
    Receive(v15.f_1());
    Receive(v15.f_2());
    Receive(v15.f_0());
    const Message7::M1::M2::M5::M8::M10::M13& v16 = v15.f_6();
    Receive(v16.f_53());
    Receive(v16.f_7());
    Receive(v16.f_26());
    Receive(v16.f_43());
    const Message7::M1::M2::M5::M8::M10::M13::M15& v17 = v16.f_75();
    Receive(v17.f_0());
    Receive(v16.f_57());
    Receive(v16.f_29());
    Receive(v16.f_22());
    Receive(v16.f_42());
    Receive(v16.f_55());
    Receive(v16.f_48());
    for (int i = 0; i < v16.f_31_size(); ++i) {
      Receive(v16.f_31(i));
    }
    Receive(v16.f_28());
    Receive(v16.f_10());
    Receive(v16.f_45());
    Receive(v16.f_3());
    Receive(v16.f_23());
    Receive(v16.f_11());
    Receive(v16.f_18());
    Receive(v16.f_2());
    Receive(v16.f_32());
    Receive(v16.f_14());
    Receive(v16.f_52());
    Receive(v16.f_24());
    Receive(v16.f_58());
    Receive(v16.f_51());
    Receive(v16.f_34());
    Receive(v16.f_47());
    Receive(v16.f_38());
    Receive(v16.f_16());
    Receive(v16.f_40());
    Receive(v16.f_12());
    Receive(v16.f_49());
    Receive(v16.f_9());
    Receive(v16.f_15());
    Receive(v16.f_44());
    Receive(v16.f_27());
    Receive(v16.f_41());
    for (int i = 0; i < v16.f_13_size(); ++i) {
      Receive(v16.f_13(i));
    }
    const Message7::M1::M2::M5::M8::M10::M13::M14& v18 = v16.f_74();
    Receive(v18.f_0());
    Receive(v16.f_5());
    Receive(v16.f_33());
    Receive(v16.f_56());
    Receive(v16.f_8());
    Receive(v16.f_6());
    Receive(v16.f_54());
    Receive(v16.f_4());
    Receive(v16.f_17());
    for (int i = 0; i < v16.f_37_size(); ++i) {
      Receive(v16.f_37(i));
    }
    for (int i = 0; i < v16.f_35_size(); ++i) {
      Receive(v16.f_35(i));
    }
    Receive(v16.f_46());
    Receive(v16.f_36());
    Receive(v16.f_20());
    Receive(v16.f_50());
    Receive(v16.f_21());
    Receive(v16.f_19());
    Receive(v16.f_1());
    Receive(v16.f_25());
    Receive(v16.f_0());
    Receive(v16.f_30());
    Receive(v16.f_39());
    Receive(v5.f_0());
    for (const auto& v19 : v0.f_4()) {
      Receive(v19.f_0());
    }
  }
  Receive((*message).f_1());
  Receive((*message).f_0());
}
void Message7_Get_3(Message7* message) {
  Receive((*message).f_0());
  Receive((*message).f_1());
  for (const auto& v0 : (*message).f_3()) {
    for (const auto& v1 : v0.f_4()) {
      Receive(v1.f_0());
    }
    const Message7::M1::M2& v2 = v0.f_2();
    for (int i = 0; i < v2.f_0_size(); ++i) {
      Receive(v2.f_0(i));
    }
    const Message7::M1::M2::M5& v3 = v2.f_2();
    Receive(v3.f_0());
    const Message7::M1::M2::M5::M8& v4 = v3.f_5();
    for (const auto& v5 : v4.f_4()) {
      Receive(v5.f_1());
      for (int i = 0; i < v5.f_0_size(); ++i) {
        Receive(v5.f_0(i));
      }
      Receive(v5.f_2());
      const Message7::M1::M2::M5::M8::M11::M12& v6 = v5.f_4();
      Receive(v6.f_0());
      for (const auto& v7 : v6.f_2()) {
        for (const auto& v8 : v7.f_3()) {
          for (const auto& v9 : v8.f_2()) {
            const Message7::M1::M2::M5::M8::M11::M12::M16::M17::M19::M20& v10 =
                v9.f_2();
            Receive(v10.f_0());
            Receive(v9.f_0());
          }
          Receive(v8.f_0());
        }
        Receive(v7.f_0());
        const Message7::M1::M2::M5::M8::M11::M12::M16::M18& v11 = v7.f_4();
        Receive(v11.f_0());
      }
    }
    const Message7::M1::M2::M5::M8::M10& v12 = v4.f_3();
    const Message7::M1::M2::M5::M8::M10::M13& v13 = v12.f_6();
    Receive(v13.f_43());
    Receive(v13.f_41());
    Receive(v13.f_18());
    Receive(v13.f_23());
    Receive(v13.f_19());
    Receive(v13.f_45());
    Receive(v13.f_0());
    Receive(v13.f_38());
    Receive(v13.f_55());
    Receive(v13.f_2());
    Receive(v13.f_48());
    Receive(v13.f_3());
    Receive(v13.f_30());
    Receive(v13.f_58());
    Receive(v13.f_42());
    Receive(v13.f_9());
    Receive(v13.f_17());
    Receive(v13.f_1());
    for (int i = 0; i < v13.f_37_size(); ++i) {
      Receive(v13.f_37(i));
    }
    Receive(v13.f_8());
    Receive(v13.f_56());
    Receive(v13.f_29());
    Receive(v13.f_46());
    Receive(v13.f_4());
    Receive(v13.f_49());
    Receive(v13.f_24());
    Receive(v13.f_21());
    Receive(v13.f_15());
    Receive(v13.f_51());
    Receive(v13.f_12());
    Receive(v13.f_11());
    Receive(v13.f_16());
    Receive(v13.f_53());
    Receive(v13.f_39());
    for (int i = 0; i < v13.f_31_size(); ++i) {
      Receive(v13.f_31(i));
    }
    Receive(v13.f_40());
    Receive(v13.f_52());
    Receive(v13.f_33());
    const Message7::M1::M2::M5::M8::M10::M13::M14& v14 = v13.f_74();
    Receive(v14.f_0());
    Receive(v13.f_44());
    Receive(v13.f_14());
    Receive(v13.f_34());
    for (int i = 0; i < v13.f_13_size(); ++i) {
      Receive(v13.f_13(i));
    }
    Receive(v13.f_57());
    Receive(v13.f_5());
    Receive(v13.f_20());
    Receive(v13.f_36());
    Receive(v13.f_6());
    Receive(v13.f_32());
    Receive(v13.f_22());
    Receive(v13.f_27());
    for (int i = 0; i < v13.f_35_size(); ++i) {
      Receive(v13.f_35(i));
    }
    Receive(v13.f_26());
    Receive(v13.f_50());
    Receive(v13.f_47());
    Receive(v13.f_25());
    Receive(v13.f_28());
    Receive(v13.f_7());
    Receive(v13.f_54());
    Receive(v13.f_10());
    const Message7::M1::M2::M5::M8::M10::M13::M15& v15 = v13.f_75();
    Receive(v15.f_0());
    Receive(v12.f_2());
    Receive(v12.f_0());
    Receive(v12.f_1());
    Receive(v12.f_3());
    for (int i = 0; i < v4.f_0_size(); ++i) {
      Receive(v4.f_0(i));
    }
    for (const auto& v16 : v3.f_3()) {
      Receive(v16.f_2());
      Receive(v16.f_0());
      Receive(v16.f_1());
    }
    const Message7::M1::M4& v17 = v0.f_5();
    const Message7::M1::M4::M6& v18 = v17.f_6();
    Receive(v18.f_2());
    Receive(v18.f_0());
    const Message7::M1::M4::M6::M9& v19 = v18.f_10();
    Receive(v19.f_0());
    Receive(v18.f_1());
    for (int i = 0; i < v18.f_4_size(); ++i) {
      Receive(v18.f_4(i));
    }
    Receive(v18.f_3());
    Receive(v17.f_3());
    Receive(v17.f_1());
    Receive(v17.f_2());
    Receive(v17.f_0());
    Receive(v0.f_0());
  }
}
void Message7_Get_4(Message7* message) {
  for (const auto& v0 : (*message).f_3()) {
    const Message7::M1::M2& v1 = v0.f_2();
    for (int i = 0; i < v1.f_0_size(); ++i) {
      Receive(v1.f_0(i));
    }
    const Message7::M1::M2::M5& v2 = v1.f_2();
    Receive(v2.f_0());
    const Message7::M1::M2::M5::M8& v3 = v2.f_5();
    for (int i = 0; i < v3.f_0_size(); ++i) {
      Receive(v3.f_0(i));
    }
    for (const auto& v4 : v3.f_4()) {
      for (int i = 0; i < v4.f_0_size(); ++i) {
        Receive(v4.f_0(i));
      }
      const Message7::M1::M2::M5::M8::M11::M12& v5 = v4.f_4();
      for (const auto& v6 : v5.f_2()) {
        Receive(v6.f_0());
        for (const auto& v7 : v6.f_3()) {
          Receive(v7.f_0());
          for (const auto& v8 : v7.f_2()) {
            const Message7::M1::M2::M5::M8::M11::M12::M16::M17::M19::M20& v9 =
                v8.f_2();
            Receive(v9.f_0());
            Receive(v8.f_0());
          }
        }
        const Message7::M1::M2::M5::M8::M11::M12::M16::M18& v10 = v6.f_4();
        Receive(v10.f_0());
      }
      Receive(v5.f_0());
      Receive(v4.f_2());
      Receive(v4.f_1());
    }
    const Message7::M1::M2::M5::M8::M10& v11 = v3.f_3();
    Receive(v11.f_0());
    Receive(v11.f_1());
    Receive(v11.f_2());
    Receive(v11.f_3());
    const Message7::M1::M2::M5::M8::M10::M13& v12 = v11.f_6();
    Receive(v12.f_5());
    Receive(v12.f_8());
    Receive(v12.f_14());
    Receive(v12.f_44());
    Receive(v12.f_19());
    Receive(v12.f_34());
    const Message7::M1::M2::M5::M8::M10::M13::M14& v13 = v12.f_74();
    Receive(v13.f_0());
    Receive(v12.f_48());
    Receive(v12.f_39());
    Receive(v12.f_45());
    Receive(v12.f_21());
    Receive(v12.f_16());
    Receive(v12.f_52());
    Receive(v12.f_53());
    Receive(v12.f_46());
    Receive(v12.f_57());
    Receive(v12.f_9());
    for (int i = 0; i < v12.f_13_size(); ++i) {
      Receive(v12.f_13(i));
    }
    Receive(v12.f_30());
    Receive(v12.f_20());
    Receive(v12.f_40());
    Receive(v12.f_51());
    Receive(v12.f_11());
    Receive(v12.f_24());
    Receive(v12.f_18());
    Receive(v12.f_33());
    Receive(v12.f_1());
    Receive(v12.f_23());
    Receive(v12.f_47());
    Receive(v12.f_7());
    Receive(v12.f_22());
    Receive(v12.f_50());
    Receive(v12.f_54());
    Receive(v12.f_0());
    Receive(v12.f_27());
    Receive(v12.f_10());
    Receive(v12.f_49());
    Receive(v12.f_43());
    Receive(v12.f_12());
    Receive(v12.f_32());
    Receive(v12.f_26());
    Receive(v12.f_15());
    Receive(v12.f_41());
    Receive(v12.f_28());
    Receive(v12.f_42());
    Receive(v12.f_36());
    Receive(v12.f_6());
    Receive(v12.f_3());
    for (int i = 0; i < v12.f_35_size(); ++i) {
      Receive(v12.f_35(i));
    }
    for (int i = 0; i < v12.f_31_size(); ++i) {
      Receive(v12.f_31(i));
    }
    Receive(v12.f_38());
    Receive(v12.f_17());
    Receive(v12.f_55());
    Receive(v12.f_25());
    Receive(v12.f_4());
    Receive(v12.f_2());
    Receive(v12.f_29());
    Receive(v12.f_56());
    for (int i = 0; i < v12.f_37_size(); ++i) {
      Receive(v12.f_37(i));
    }
    const Message7::M1::M2::M5::M8::M10::M13::M15& v14 = v12.f_75();
    Receive(v14.f_0());
    Receive(v12.f_58());
    for (const auto& v15 : v2.f_3()) {
      Receive(v15.f_1());
      Receive(v15.f_0());
      Receive(v15.f_2());
    }
    for (const auto& v16 : v0.f_4()) {
      Receive(v16.f_0());
    }
    const Message7::M1::M4& v17 = v0.f_5();
    const Message7::M1::M4::M6& v18 = v17.f_6();
    Receive(v18.f_2());
    for (int i = 0; i < v18.f_4_size(); ++i) {
      Receive(v18.f_4(i));
    }
    Receive(v18.f_0());
    const Message7::M1::M4::M6::M9& v19 = v18.f_10();
    Receive(v19.f_0());
    Receive(v18.f_1());
    Receive(v18.f_3());
    Receive(v17.f_2());
    Receive(v17.f_3());
    Receive(v17.f_0());
    Receive(v17.f_1());
    Receive(v0.f_0());
  }
  Receive((*message).f_1());
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
