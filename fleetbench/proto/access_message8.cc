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

#include "fleetbench/proto/access_message8.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message8.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message8_Set_1(Message8* message, std::string* s) {
  Message8::M1* v0 = message->mutable_f_5();
  Message8::M1::M2* v1_0 = v0->add_f_2();
  (void)v1_0;  // Suppresses clang-tidy.
  Message8::M1::M3* v2 = v0->mutable_f_3();
  Message8::M1::M3::M6* v3 = v2->mutable_f_3();
  v3->set_f_0(Message8::M1::M3::M6::E2_CONST_2);
  Message8::M1::M3::M6::M7* v4_0 = v3->add_f_3();
  v4_0->set_f_5(0x47);
  v4_0->set_f_7(Message8::M1::M3::M6::M7::E3_CONST_2);
  v4_0->set_f_4(s->substr(0, 11));
  Message8::M1::M3::M6::M7::M9* v5 = v4_0->mutable_f_13();
  v5->set_f_1(0.785610);
  v5->set_f_23(false);
  Message8::M1::M3::M6::M7::M9::M10* v6_0 = v5->add_f_32();
  Message8::M1::M3::M6::M7::M9::M10::M13* v7 = v6_0->mutable_f_2();
  v7->set_f_2(0xc49ac493f0616b);
  v7->set_f_5(s->substr(0, 29));
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v8_0 = v7->add_f_13();
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v9_0 = v8_0->add_f_5();
  v9_0->set_f_6(s->substr(0, 12));
  v9_0->set_f_1(0x3bad);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v10_0 =
      v9_0->add_f_16();
  (void)v10_0;  // Suppresses clang-tidy.
  v9_0->set_f_2(0x6fa0cd94f);
  v9_0->set_f_4(0x35);
  v9_0->set_f_11(false);
  v9_0->set_f_5(Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::E10_CONST_2);
  v8_0->set_f_1(0.083370);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v8_1 = v7->add_f_13();
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v11_0 = v8_1->add_f_5();
  v11_0->set_f_4(0x5d);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v12_0 =
      v11_0->add_f_16();
  (void)v12_0;  // Suppresses clang-tidy.
  v11_0->set_f_10(
      Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::E12_CONST_3);
  v11_0->set_f_0(0x71544bff0800278);
  v11_0->set_f_6(s->substr(0, 7));
  v8_1->set_f_0(0x42);
  v7->set_f_3(0.678666);
  v7->set_f_1(0x18f4e6304a);
  v7->set_f_6(0.204632);
  Message8::M1::M3::M6::M7::M9::M10* v6_1 = v5->add_f_32();
  Message8::M1::M3::M6::M7::M9::M10::M13* v13 = v6_1->mutable_f_2();
  v13->set_f_8(s->substr(0, 28));
  v13->set_f_3(0.715959);
  v13->set_f_2(0xd188bdddf92320);
  v13->set_f_5(s->substr(0, 8));
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v14_0 = v13->add_f_13();
  v14_0->set_f_1(0.036258);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v15_0 = v14_0->add_f_5();
  v15_0->set_f_2(0x3b9ff81532d);
  v15_0->set_f_11(true);
  v15_0->set_f_8(s->substr(0, 412));
  v5->set_f_5(0xb5f8e4eedec707);
  v5->set_f_8(0x18a673a0fcfb);
  v5->set_f_3(0.590452);
  v5->set_f_9(true);
  v5->set_f_17(s->substr(0, 25));
  v5->set_f_10(0x18b714bea00bf);
  v5->set_f_12(0.014200);
  v5->set_f_14(s->substr(0, 3));
  v5->set_f_20(0.793807);
  Message8::M1::M3::M6::M7::M8* v16 = v4_0->mutable_f_12();
  Message8::M1::M3::M6::M7::M8::M11* v17 = v16->mutable_f_2();
  v17->set_f_3(s->substr(0, 128));
  v17->set_f_2(0x76ca3b07);
  v17->set_f_6(0.764591);
  v17->set_f_1(0xeb2fd93);
  v17->set_f_8(Message8::M1::M3::M6::M7::M8::M11::E9_CONST_5);
  Message8::M1::M3::M6::M7::M8::M11::M12* v18 = v17->mutable_f_14();
  (void)v18;  // Suppresses clang-tidy.
  v17->set_f_7(0x76);
  v17->set_f_4(0x70);
  Message8::M1::M3::M5* v19_0 = v2->add_f_2();
  (void)v19_0;  // Suppresses clang-tidy.
  Message8::M1::M3::M5* v19_1 = v2->add_f_2();
  v19_1->set_f_0(0.671398);
  v2->set_f_0(0.046465);
  message->set_f_0(s->substr(0, 14));
}
void Message8_Set_2(Message8* message, std::string* s) {
  message->set_f_0(s->substr(0, 63));
  Message8::M1* v0 = message->mutable_f_5();
  v0->set_f_0(s->substr(0, 43));
  Message8::M1::M3* v1 = v0->mutable_f_3();
  Message8::M1::M3::M6* v2 = v1->mutable_f_3();
  Message8::M1::M3::M6::M7* v3_0 = v2->add_f_3();
  Message8::M1::M3::M6::M7::M9* v4 = v3_0->mutable_f_13();
  v4->set_f_11(true);
  v4->set_f_9(false);
  v4->set_f_15(Message8::M1::M3::M6::M7::M9::E5_CONST_5);
  Message8::M1::M3::M6::M7::M9::M10* v5_0 = v4->add_f_32();
  Message8::M1::M3::M6::M7::M9::M10::M13* v6 = v5_0->mutable_f_2();
  v6->set_f_4(0.462367);
  v6->set_f_3(0.642104);
  v6->set_f_6(0.239703);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v7_0 = v6->add_f_13();
  v7_0->set_f_0(0x3e);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v8_0 = v7_0->add_f_5();
  v8_0->set_f_11(true);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v9_0 =
      v8_0->add_f_16();
  (void)v9_0;  // Suppresses clang-tidy.
  v8_0->set_f_2(0x14);
  v8_0->set_f_6(s->substr(0, 26));
  v6->set_f_0(0x47cd63fbf);
  v6->set_f_9(0xab203fe);
  v5_0->set_f_0(s->substr(0, 60));
  v4->set_f_10(0x3a0b);
  v4->set_f_13(false);
  v4->set_f_18(Message8::M1::M3::M6::M7::M9::E7_CONST_1);
  v3_0->set_f_0(0xf85b41fc9c4);
  v3_0->set_f_6(true);
  v3_0->set_f_3(0x3e);
  v3_0->set_f_4(s->substr(0, 18));
  Message8::M1::M3::M6::M7::M8* v10 = v3_0->mutable_f_12();
  Message8::M1::M3::M6::M7::M8::M11* v11 = v10->mutable_f_2();
  v11->set_f_5(0x56);
  v11->set_f_1(0x1099f4f4b1a9d);
  v11->set_f_8(Message8::M1::M3::M6::M7::M8::M11::E9_CONST_3);
  v11->set_f_3(s->substr(0, 8));
  v2->set_f_0(Message8::M1::M3::M6::E2_CONST_1);
}
void Message8_Set_3(Message8* message, std::string* s) {
  Message8::M1* v0 = message->mutable_f_5();
  Message8::M1::M3* v1 = v0->mutable_f_3();
  Message8::M1::M3::M6* v2 = v1->mutable_f_3();
  v2->set_f_0(Message8::M1::M3::M6::E2_CONST_5);
  Message8::M1::M3::M6::M7* v3_0 = v2->add_f_3();
  Message8::M1::M3::M6::M7::M9* v4 = v3_0->mutable_f_13();
  v4->set_f_3(0.714992);
  v4->set_f_16(Message8::M1::M3::M6::M7::M9::E6_CONST_4);
  v4->set_f_22(Message8::M1::M3::M6::M7::M9::E8_CONST_1);
  v4->set_f_7(0x26470e9c159);
  v4->set_f_2(s->substr(0, 3));
  Message8::M1::M3::M6::M7::M9::M10* v5_0 = v4->add_f_32();
  Message8::M1::M3::M6::M7::M9::M10::M13* v6 = v5_0->mutable_f_2();
  v6->set_f_5(s->substr(0, 8));
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v7_0 = v6->add_f_13();
  v7_0->set_f_0(0x57);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v8_0 = v7_0->add_f_5();
  v8_0->set_f_7(0x16f5386);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v9_0 =
      v8_0->add_f_16();
  v9_0->set_f_1(0x69);
  v8_0->set_f_8(s->substr(0, 6));
  v8_0->set_f_10(Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::E12_CONST_2);
  v6->set_f_6(0.716609);
  v6->set_f_3(0.677619);
  v6->set_f_9(0x41b0ddf);
  v4->set_f_5(0xa32161b);
  Message8::M1::M3::M6::M7::M8* v10 = v3_0->mutable_f_12();
  Message8::M1::M3::M6::M7::M8::M11* v11 = v10->mutable_f_2();
  v11->set_f_3(s->substr(0, 907));
  v11->set_f_0(s->substr(0, 31));
  v11->set_f_4(0x12d1);
  v11->set_f_7(0x2e);
  v11->set_f_6(0.696627);
  v3_0->set_f_1(s->substr(0, 32));
  v3_0->set_f_6(true);
  v3_0->set_f_2(0x2d);
  v3_0->set_f_4(s->substr(0, 105));
  v3_0->set_f_5(0x1808);
  v3_0->set_f_7(Message8::M1::M3::M6::M7::E3_CONST_3);
  Message8::M1::M3::M5* v12_0 = v1->add_f_2();
  (void)v12_0;  // Suppresses clang-tidy.
}
void Message8_Set_4(Message8* message, std::string* s) {
  message->set_f_0(s->substr(0, 25));
  Message8::M1* v0 = message->mutable_f_5();
  Message8::M1::M2* v1_0 = v0->add_f_2();
  Message8::M1::M2::M4* v2 = v1_0->mutable_f_2();
  (void)v2;  // Suppresses clang-tidy.
  Message8::M1::M2* v1_1 = v0->add_f_2();
  (void)v1_1;  // Suppresses clang-tidy.
  Message8::M1::M3* v3 = v0->mutable_f_3();
  Message8::M1::M3::M6* v4 = v3->mutable_f_3();
  Message8::M1::M3::M6::M7* v5_0 = v4->add_f_3();
  Message8::M1::M3::M6::M7::M9* v6 = v5_0->mutable_f_13();
  v6->set_f_23(true);
  v6->set_f_11(true);
  v6->set_f_3(0.814647);
  v6->set_f_12(0.557125);
  Message8::M1::M3::M6::M7::M9::M10* v7_0 = v6->add_f_32();
  Message8::M1::M3::M6::M7::M9::M10::M13* v8 = v7_0->mutable_f_2();
  v8->set_f_9(0x17c2247);
  v8->set_f_7(s->substr(0, 20));
  v8->set_f_4(0.611159);
  v8->set_f_6(0.924711);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v9_0 = v8->add_f_13();
  v9_0->set_f_1(0.712162);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v10_0 = v9_0->add_f_5();
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v11_0 =
      v10_0->add_f_16();
  v11_0->set_f_0(s->substr(0, 26));
  v10_0->set_f_8(s->substr(0, 20));
  v10_0->set_f_7(0x17c9ab);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v10_1 = v9_0->add_f_5();
  v10_1->set_f_5(Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::E10_CONST_1);
  v10_1->set_f_1(0x246e);
  v10_1->set_f_9(Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::E11_CONST_1);
  v10_1->set_f_4(0x134f58);
  v10_1->set_f_0(0x2dfed6c38616f85a);
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v12_0 =
      v10_1->add_f_16();
  v12_0->set_f_0(s->substr(0, 6));
  v12_0->set_f_1(0x3561728);
  v10_1->set_f_11(true);
  v8->set_f_0(0x4d);
  v8->set_f_1(0x72);
  Message8::M1::M3::M6::M7::M9::M10* v7_1 = v6->add_f_32();
  Message8::M1::M3::M6::M7::M9::M10::M13* v13 = v7_1->mutable_f_2();
  Message8::M1::M3::M6::M7::M9::M10::M13::M14* v14_0 = v13->add_f_13();
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15* v15_0 = v14_0->add_f_5();
  v15_0->set_f_8(s->substr(0, 8));
  Message8::M1::M3::M6::M7::M9::M10::M13::M14::M15::M16* v16_0 =
      v15_0->add_f_16();
  v16_0->set_f_0(s->substr(0, 22));
  v15_0->set_f_6(s->substr(0, 31));
  v15_0->set_f_4(0x40);
  v13->set_f_8(s->substr(0, 5));
  v13->set_f_9(0x2c);
  v13->set_f_2(0xf25cc7e648fa2);
  v6->set_f_2(s->substr(0, 28));
  v6->set_f_20(0.213235);
  v6->set_f_18(Message8::M1::M3::M6::M7::M9::E7_CONST_4);
  v6->set_f_6(Message8::M1::M3::M6::M7::M9::E4_CONST_1);
  v6->set_f_5(0x14);
  v6->set_f_9(true);
  v6->set_f_13(true);
  v5_0->set_f_5(0x1d1c);
  v5_0->set_f_4(s->substr(0, 21));
  v5_0->set_f_2(0x781);
  v5_0->set_f_0(0x10931e10623);
  Message8::M1::M3::M6::M7::M8* v17 = v5_0->mutable_f_12();
  Message8::M1::M3::M6::M7::M8::M11* v18 = v17->mutable_f_2();
  v18->set_f_5(0x3c);
  v18->set_f_8(Message8::M1::M3::M6::M7::M8::M11::E9_CONST_4);
  v18->set_f_2(0x66886bb7);
}
void Message8_Get_1(Message8* message) {
  Receive((*message).f_0());
  const Message8::M1& v0 = (*message).f_5();
  for (const auto& v1 : v0.f_2()) {
    Receive(v1.f_0());
    const Message8::M1::M2::M4& v2 = v1.f_2();
    Receive(v2.f_0());
  }
  const Message8::M1::M3& v3 = v0.f_3();
  Receive(v3.f_0());
  const Message8::M1::M3::M6& v4 = v3.f_3();
  for (const auto& v5 : v4.f_3()) {
    Receive(v5.f_2());
    Receive(v5.f_3());
    const Message8::M1::M3::M6::M7::M9& v6 = v5.f_13();
    Receive(v6.f_11());
    Receive(v6.f_20());
    Receive(v6.f_14());
    Receive(v6.f_5());
    Receive(v6.f_15());
    Receive(v6.f_22());
    Receive(v6.f_23());
    Receive(v6.f_12());
    Receive(v6.f_19());
    Receive(v6.f_18());
    Receive(v6.f_17());
    Receive(v6.f_0());
    Receive(v6.f_6());
    Receive(v6.f_16());
    Receive(v6.f_4());
    Receive(v6.f_21());
    for (const auto& v7 : v6.f_32()) {
      const Message8::M1::M3::M6::M7::M9::M10::M13& v8 = v7.f_2();
      Receive(v8.f_6());
      Receive(v8.f_8());
      Receive(v8.f_3());
      Receive(v8.f_4());
      for (const auto& v9 : v8.f_13()) {
        for (const auto& v10 : v9.f_5()) {
          Receive(v10.f_11());
          Receive(v10.f_4());
          Receive(v10.f_6());
          Receive(v10.f_5());
          Receive(v10.f_8());
          for (int i = 0; i < v10.f_3_size(); ++i) {
            Receive(v10.f_3(i));
          }
          Receive(v10.f_10());
          Receive(v10.f_0());
          for (const auto& v11 : v10.f_16()) {
            Receive(v11.f_1());
            Receive(v11.f_0());
          }
          Receive(v10.f_9());
          Receive(v10.f_2());
          Receive(v10.f_1());
          Receive(v10.f_7());
        }
        Receive(v9.f_1());
        Receive(v9.f_0());
      }
      Receive(v8.f_9());
      Receive(v8.f_2());
      Receive(v8.f_5());
      Receive(v8.f_0());
      Receive(v8.f_1());
      Receive(v8.f_7());
      Receive(v7.f_0());
    }
    Receive(v6.f_8());
    Receive(v6.f_9());
    Receive(v6.f_2());
    Receive(v6.f_3());
    Receive(v6.f_1());
    Receive(v6.f_7());
    Receive(v6.f_10());
    Receive(v6.f_13());
    Receive(v5.f_0());
    Receive(v5.f_5());
    Receive(v5.f_7());
    Receive(v5.f_4());
    const Message8::M1::M3::M6::M7::M8& v12 = v5.f_12();
    const Message8::M1::M3::M6::M7::M8::M11& v13 = v12.f_2();
    const Message8::M1::M3::M6::M7::M8::M11::M12& v14 = v13.f_14();
    Receive(v14.f_0());
    Receive(v13.f_3());
    Receive(v13.f_6());
    Receive(v13.f_1());
    Receive(v13.f_0());
    Receive(v13.f_7());
    Receive(v13.f_4());
    Receive(v13.f_2());
    Receive(v13.f_5());
    Receive(v13.f_8());
    Receive(v12.f_0());
    Receive(v5.f_1());
    Receive(v5.f_6());
  }
  Receive(v4.f_0());
  for (const auto& v15 : v3.f_2()) {
    Receive(v15.f_0());
  }
  Receive(v0.f_0());
}
void Message8_Get_2(Message8* message) {
  Receive((*message).f_0());
  const Message8::M1& v0 = (*message).f_5();
  Receive(v0.f_0());
  const Message8::M1::M3& v1 = v0.f_3();
  const Message8::M1::M3::M6& v2 = v1.f_3();
  Receive(v2.f_0());
  for (const auto& v3 : v2.f_3()) {
    Receive(v3.f_0());
    Receive(v3.f_5());
    Receive(v3.f_3());
    const Message8::M1::M3::M6::M7::M8& v4 = v3.f_12();
    Receive(v4.f_0());
    const Message8::M1::M3::M6::M7::M8::M11& v5 = v4.f_2();
    Receive(v5.f_3());
    Receive(v5.f_6());
    Receive(v5.f_4());
    Receive(v5.f_5());
    Receive(v5.f_2());
    Receive(v5.f_8());
    Receive(v5.f_7());
    Receive(v5.f_1());
    const Message8::M1::M3::M6::M7::M8::M11::M12& v6 = v5.f_14();
    Receive(v6.f_0());
    Receive(v5.f_0());
    Receive(v3.f_2());
    Receive(v3.f_1());
    Receive(v3.f_7());
    Receive(v3.f_4());
    Receive(v3.f_6());
    const Message8::M1::M3::M6::M7::M9& v7 = v3.f_13();
    Receive(v7.f_3());
    Receive(v7.f_23());
    Receive(v7.f_1());
    Receive(v7.f_10());
    Receive(v7.f_5());
    Receive(v7.f_11());
    Receive(v7.f_18());
    Receive(v7.f_16());
    Receive(v7.f_20());
    Receive(v7.f_19());
    for (const auto& v8 : v7.f_32()) {
      Receive(v8.f_0());
      const Message8::M1::M3::M6::M7::M9::M10::M13& v9 = v8.f_2();
      Receive(v9.f_5());
      Receive(v9.f_4());
      Receive(v9.f_7());
      Receive(v9.f_1());
      for (const auto& v10 : v9.f_13()) {
        Receive(v10.f_1());
        for (const auto& v11 : v10.f_5()) {
          for (int i = 0; i < v11.f_3_size(); ++i) {
            Receive(v11.f_3(i));
          }
          Receive(v11.f_7());
          Receive(v11.f_8());
          Receive(v11.f_4());
          Receive(v11.f_9());
          for (const auto& v12 : v11.f_16()) {
            Receive(v12.f_0());
            Receive(v12.f_1());
          }
          Receive(v11.f_10());
          Receive(v11.f_6());
          Receive(v11.f_2());
          Receive(v11.f_5());
          Receive(v11.f_0());
          Receive(v11.f_11());
          Receive(v11.f_1());
        }
        Receive(v10.f_0());
      }
      Receive(v9.f_2());
      Receive(v9.f_3());
      Receive(v9.f_9());
      Receive(v9.f_6());
      Receive(v9.f_8());
      Receive(v9.f_0());
    }
    Receive(v7.f_17());
    Receive(v7.f_4());
    Receive(v7.f_6());
    Receive(v7.f_14());
    Receive(v7.f_8());
    Receive(v7.f_13());
    Receive(v7.f_21());
    Receive(v7.f_22());
    Receive(v7.f_7());
    Receive(v7.f_0());
    Receive(v7.f_2());
    Receive(v7.f_15());
    Receive(v7.f_12());
    Receive(v7.f_9());
  }
  for (const auto& v13 : v1.f_2()) {
    Receive(v13.f_0());
  }
  Receive(v1.f_0());
  for (const auto& v14 : v0.f_2()) {
    Receive(v14.f_0());
    const Message8::M1::M2::M4& v15 = v14.f_2();
    Receive(v15.f_0());
  }
}
void Message8_Get_3(Message8* message) {
  const Message8::M1& v0 = (*message).f_5();
  for (const auto& v1 : v0.f_2()) {
    Receive(v1.f_0());
    const Message8::M1::M2::M4& v2 = v1.f_2();
    Receive(v2.f_0());
  }
  Receive(v0.f_0());
  const Message8::M1::M3& v3 = v0.f_3();
  const Message8::M1::M3::M6& v4 = v3.f_3();
  Receive(v4.f_0());
  for (const auto& v5 : v4.f_3()) {
    Receive(v5.f_7());
    Receive(v5.f_4());
    Receive(v5.f_3());
    const Message8::M1::M3::M6::M7::M8& v6 = v5.f_12();
    const Message8::M1::M3::M6::M7::M8::M11& v7 = v6.f_2();
    Receive(v7.f_3());
    Receive(v7.f_2());
    Receive(v7.f_6());
    Receive(v7.f_4());
    Receive(v7.f_0());
    Receive(v7.f_5());
    Receive(v7.f_7());
    Receive(v7.f_8());
    Receive(v7.f_1());
    const Message8::M1::M3::M6::M7::M8::M11::M12& v8 = v7.f_14();
    Receive(v8.f_0());
    Receive(v6.f_0());
    Receive(v5.f_0());
    Receive(v5.f_1());
    Receive(v5.f_5());
    Receive(v5.f_6());
    const Message8::M1::M3::M6::M7::M9& v9 = v5.f_13();
    Receive(v9.f_4());
    Receive(v9.f_13());
    Receive(v9.f_6());
    Receive(v9.f_2());
    Receive(v9.f_23());
    Receive(v9.f_11());
    Receive(v9.f_10());
    Receive(v9.f_15());
    Receive(v9.f_18());
    Receive(v9.f_7());
    Receive(v9.f_0());
    Receive(v9.f_14());
    Receive(v9.f_3());
    Receive(v9.f_17());
    Receive(v9.f_5());
    Receive(v9.f_8());
    Receive(v9.f_22());
    for (const auto& v10 : v9.f_32()) {
      Receive(v10.f_0());
      const Message8::M1::M3::M6::M7::M9::M10::M13& v11 = v10.f_2();
      Receive(v11.f_2());
      Receive(v11.f_5());
      Receive(v11.f_4());
      Receive(v11.f_6());
      Receive(v11.f_9());
      Receive(v11.f_7());
      Receive(v11.f_1());
      Receive(v11.f_0());
      for (const auto& v12 : v11.f_13()) {
        for (const auto& v13 : v12.f_5()) {
          Receive(v13.f_11());
          Receive(v13.f_4());
          for (const auto& v14 : v13.f_16()) {
            Receive(v14.f_0());
            Receive(v14.f_1());
          }
          Receive(v13.f_9());
          Receive(v13.f_7());
          Receive(v13.f_2());
          Receive(v13.f_0());
          Receive(v13.f_6());
          for (int i = 0; i < v13.f_3_size(); ++i) {
            Receive(v13.f_3(i));
          }
          Receive(v13.f_5());
          Receive(v13.f_10());
          Receive(v13.f_1());
          Receive(v13.f_8());
        }
        Receive(v12.f_0());
        Receive(v12.f_1());
      }
      Receive(v11.f_3());
      Receive(v11.f_8());
    }
    Receive(v9.f_12());
    Receive(v9.f_19());
    Receive(v9.f_20());
    Receive(v9.f_16());
    Receive(v9.f_21());
    Receive(v9.f_9());
    Receive(v9.f_1());
    Receive(v5.f_2());
  }
  Receive(v3.f_0());
  for (const auto& v15 : v3.f_2()) {
    Receive(v15.f_0());
  }
  Receive((*message).f_0());
}
void Message8_Get_4(Message8* message) {
  Receive((*message).f_0());
  const Message8::M1& v0 = (*message).f_5();
  const Message8::M1::M3& v1 = v0.f_3();
  const Message8::M1::M3::M6& v2 = v1.f_3();
  Receive(v2.f_0());
  for (const auto& v3 : v2.f_3()) {
    const Message8::M1::M3::M6::M7::M9& v4 = v3.f_13();
    Receive(v4.f_10());
    Receive(v4.f_3());
    Receive(v4.f_13());
    Receive(v4.f_5());
    Receive(v4.f_14());
    Receive(v4.f_1());
    Receive(v4.f_6());
    for (const auto& v5 : v4.f_32()) {
      const Message8::M1::M3::M6::M7::M9::M10::M13& v6 = v5.f_2();
      Receive(v6.f_2());
      Receive(v6.f_9());
      Receive(v6.f_8());
      Receive(v6.f_5());
      Receive(v6.f_0());
      for (const auto& v7 : v6.f_13()) {
        Receive(v7.f_0());
        for (const auto& v8 : v7.f_5()) {
          for (int i = 0; i < v8.f_3_size(); ++i) {
            Receive(v8.f_3(i));
          }
          Receive(v8.f_7());
          Receive(v8.f_6());
          Receive(v8.f_2());
          Receive(v8.f_10());
          Receive(v8.f_9());
          Receive(v8.f_5());
          Receive(v8.f_0());
          Receive(v8.f_8());
          for (const auto& v9 : v8.f_16()) {
            Receive(v9.f_0());
            Receive(v9.f_1());
          }
          Receive(v8.f_11());
          Receive(v8.f_1());
          Receive(v8.f_4());
        }
        Receive(v7.f_1());
      }
      Receive(v6.f_6());
      Receive(v6.f_7());
      Receive(v6.f_3());
      Receive(v6.f_1());
      Receive(v6.f_4());
      Receive(v5.f_0());
    }
    Receive(v4.f_12());
    Receive(v4.f_8());
    Receive(v4.f_17());
    Receive(v4.f_9());
    Receive(v4.f_22());
    Receive(v4.f_23());
    Receive(v4.f_20());
    Receive(v4.f_4());
    Receive(v4.f_16());
    Receive(v4.f_2());
    Receive(v4.f_7());
    Receive(v4.f_18());
    Receive(v4.f_19());
    Receive(v4.f_11());
    Receive(v4.f_21());
    Receive(v4.f_15());
    Receive(v4.f_0());
    Receive(v3.f_0());
    Receive(v3.f_7());
    Receive(v3.f_1());
    Receive(v3.f_3());
    Receive(v3.f_6());
    Receive(v3.f_2());
    Receive(v3.f_4());
    const Message8::M1::M3::M6::M7::M8& v10 = v3.f_12();
    Receive(v10.f_0());
    const Message8::M1::M3::M6::M7::M8::M11& v11 = v10.f_2();
    Receive(v11.f_4());
    Receive(v11.f_6());
    Receive(v11.f_1());
    Receive(v11.f_5());
    Receive(v11.f_0());
    Receive(v11.f_2());
    Receive(v11.f_7());
    Receive(v11.f_8());
    Receive(v11.f_3());
    const Message8::M1::M3::M6::M7::M8::M11::M12& v12 = v11.f_14();
    Receive(v12.f_0());
    Receive(v3.f_5());
  }
  Receive(v1.f_0());
  for (const auto& v13 : v1.f_2()) {
    Receive(v13.f_0());
  }
  Receive(v0.f_0());
  for (const auto& v14 : v0.f_2()) {
    const Message8::M1::M2::M4& v15 = v14.f_2();
    Receive(v15.f_0());
    Receive(v14.f_0());
  }
}
}  // namespace fleetbench::proto
