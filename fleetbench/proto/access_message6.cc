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

#include "fleetbench/proto/access_message6.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message6.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message6_Set_1(Message6* message, std::string* s) {
  Message6::M1* v0_0 = message->add_f_6();
  Message6::M1::M4* v1 = v0_0->mutable_f_8();
  Message6::M1::M4::M6* v2 = v1->mutable_f_2();
  v2->set_f_1(s->substr(0, 17));
  v2->set_f_2(0x202a5f9a0360);
  v2->set_f_0(0x617cbb5);
  Message6::M1::M3* v3 = v0_0->mutable_f_6();
  Message6::M1::M3::M5* v4 = v3->mutable_f_2();
  Message6::M1::M3::M5::M7* v5 = v4->mutable_f_2();
  v5->set_f_1(true);
  Message6::M1::M3::M5::M7::M12* v6 = v5->mutable_f_12();
  (void)v6;  // Suppresses clang-tidy.
  Message6::M1::M3::M5::M7::M9* v7 = v5->mutable_f_9();
  Message6::M1::M3::M5::M7::M9::M14* v8 = v7->mutable_f_3();
  Message6::M1::M3::M5::M7::M9::M14::M15* v9 = v8->mutable_f_2();
  (void)v9;  // Suppresses clang-tidy.
  Message6::M1::M3::M5::M7::M9::M14::M17* v10 = v8->mutable_f_3();
  v10->set_f_9(0x4da9a57);
  v10->set_f_8(Message6::M1::M3::M5::M7::M9::M14::M17::E1_CONST_3);
  v10->set_f_7(0.534227);
  v10->set_f_0(0x141c54f1eda532);
  v10->set_f_6(0x31bd61a58874);
  v5->set_f_3(0x4393fd6ee);
  Message6::M1::M3::M5::M7::M10* v11 = v5->mutable_f_10();
  Message6::M1::M3::M5::M7::M10::M13* v12 = v11->mutable_f_4();
  v12->set_f_2(s->substr(0, 8));
  v12->set_f_0(0x8);
  v12->set_f_1(0x15ec55b7e9ae4);
  Message6::M1::M3::M5::M7::M10::M13::M16* v13_0 = v12->add_f_5();
  v13_0->set_f_0(0.113926);
  Message6::M1::M3::M5::M7::M10::M13::M16::M19* v14_0 = v13_0->add_f_4();
  v14_0->set_f_0(Message6::M1::M3::M5::M7::M10::M13::M16::M19::E2_CONST_5);
  Message6::M1::M3::M5::M7::M10::M13::M16::M19* v14_1 = v13_0->add_f_4();
  (void)v14_1;  // Suppresses clang-tidy.
  Message6::M1::M3::M5::M7::M10::M13::M16::M18* v15 = v13_0->mutable_f_3();
  v15->set_f_0(0x3689299e);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20* v16 = v15->mutable_f_2();
  v16->set_f_0(0xb1547ebe83730f);
  v16->set_f_1(0x8);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21* v17_0 =
      v16->add_f_8();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22* v18 =
      v17_0->mutable_f_2();
  (void)v18;  // Suppresses clang-tidy.
  v4->set_f_0(0x1d5b421714599);
  message->set_f_3(0x1e1d);
  message->set_f_0(s->substr(0, 24));
}
void Message6_Set_2(Message6* message, std::string* s) {
  Message6::M1* v0_0 = message->add_f_6();
  Message6::M1::M3* v1 = v0_0->mutable_f_6();
  Message6::M1::M3::M5* v2 = v1->mutable_f_2();
  Message6::M1::M3::M5::M7* v3 = v2->mutable_f_2();
  v3->set_f_0(0x17012a);
  Message6::M1::M3::M5::M7::M9* v4 = v3->mutable_f_9();
  Message6::M1::M3::M5::M7::M9::M14* v5 = v4->mutable_f_3();
  Message6::M1::M3::M5::M7::M9::M14::M17* v6 = v5->mutable_f_3();
  v6->set_f_4(s->substr(0, 40));
  v6->set_f_3(true);
  v4->set_f_0(0.824857);
  Message6::M1::M3::M5::M7::M10* v7 = v3->mutable_f_10();
  v7->set_f_0(0x2e);
  Message6::M1::M3::M5::M7::M10::M13* v8 = v7->mutable_f_4();
  v8->set_f_0(0x1675);
  Message6::M1::M3::M5::M7::M10::M13::M16* v9_0 = v8->add_f_5();
  Message6::M1::M3::M5::M7::M10::M13::M16::M19* v10_0 = v9_0->add_f_4();
  v10_0->set_f_0(Message6::M1::M3::M5::M7::M10::M13::M16::M19::E2_CONST_3);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18* v11 = v9_0->mutable_f_3();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20* v12 = v11->mutable_f_2();
  v12->set_f_3(0.724861);
  v12->set_f_0(0x57c8a1f);
  v12->set_f_4(0xf9887);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21* v13_0 =
      v12->add_f_8();
  v13_0->set_f_0(
      Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::E3_CONST_4);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22* v14 =
      v13_0->mutable_f_2();
  v14->set_f_2(
      Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22::E4_CONST_5);
  v14->set_f_0(0.069991);
  Message6::M1::M3::M5::M7::M12* v15 = v3->mutable_f_12();
  v15->set_f_0(true);
  Message6::M1::M3::M5::M7::M11* v16_0 = v3->add_f_11();
  v16_0->set_f_0(0x63);
  v2->set_f_0(0xd777cceedbd1);
  v1->set_f_0(0x3cecdb9);
  Message6::M1::M4* v17 = v0_0->mutable_f_8();
  Message6::M1::M4::M6* v18 = v17->mutable_f_2();
  v18->set_f_3(0x8496d0b7ef1e34);
  v0_0->set_f_0(0x23);
}
void Message6_Set_3(Message6* message, std::string* s) {
  message->add_f_2(0.379947);
  message->set_f_3(0x179cd2318);
  Message6::M1* v0_0 = message->add_f_6();
  Message6::M1::M4* v1 = v0_0->mutable_f_8();
  v1->set_f_0(0x424da082);
  v0_0->set_f_0(0x38);
  Message6::M1::M3* v2 = v0_0->mutable_f_6();
  v2->set_f_0(0x3c);
  Message6::M1::M3::M5* v3 = v2->mutable_f_2();
  v3->set_f_0(0x2af9e78597f);
  Message6::M1::M3::M5::M7* v4 = v3->mutable_f_2();
  Message6::M1::M3::M5::M7::M10* v5 = v4->mutable_f_10();
  Message6::M1::M3::M5::M7::M10::M13* v6 = v5->mutable_f_4();
  Message6::M1::M3::M5::M7::M10::M13::M16* v7_0 = v6->add_f_5();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18* v8 = v7_0->mutable_f_3();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20* v9 = v8->mutable_f_2();
  v9->set_f_2(0xa53e749);
  v9->set_f_0(0x6d);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21* v10_0 = v9->add_f_8();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22* v11 =
      v10_0->mutable_f_2();
  (void)v11;  // Suppresses clang-tidy.
  v6->set_f_0(0x70);
  Message6::M1::M3::M5::M7::M9* v12 = v4->mutable_f_9();
  Message6::M1::M3::M5::M7::M9::M14* v13 = v12->mutable_f_3();
  v13->set_f_0(0x14);
  Message6::M1::M3::M5::M7::M9::M14::M17* v14 = v13->mutable_f_3();
  v14->set_f_8(Message6::M1::M3::M5::M7::M9::M14::M17::E1_CONST_4);
  v14->set_f_5(0x19);
  v14->set_f_6(0x1b551c59f8a02);
  v14->set_f_4(s->substr(0, 4));
  Message6::M1::M3::M5::M7::M12* v15 = v4->mutable_f_12();
  (void)v15;  // Suppresses clang-tidy.
  Message6::M1::M3::M5::M7::M11* v16_0 = v4->add_f_11();
  v16_0->set_f_0(0x34);
  Message6::M1::M3::M5::M7::M11* v16_1 = v4->add_f_11();
  (void)v16_1;  // Suppresses clang-tidy.
  message->add_f_1(s->substr(0, 24));
  message->add_f_1(s->substr(0, 17));
  message->add_f_1(s->substr(0, 1));
}
void Message6_Set_4(Message6* message, std::string* s) {
  message->add_f_1(s->substr(0, 19));
  Message6::M1* v0_0 = message->add_f_6();
  v0_0->set_f_0(0xea4aa60);
  Message6::M1::M3* v1 = v0_0->mutable_f_6();
  Message6::M1::M3::M5* v2 = v1->mutable_f_2();
  v2->set_f_0(0xb9a872a);
  Message6::M1::M3::M5::M7* v3 = v2->mutable_f_2();
  v3->set_f_3(0xb77223fef81a9);
  Message6::M1::M3::M5::M7::M12* v4 = v3->mutable_f_12();
  v4->set_f_0(false);
  Message6::M1::M3::M5::M7::M10* v5 = v3->mutable_f_10();
  v5->set_f_0(0x31cb);
  Message6::M1::M3::M5::M7::M10::M13* v6 = v5->mutable_f_4();
  v6->set_f_0(0x1c);
  Message6::M1::M3::M5::M7::M10::M13::M16* v7_0 = v6->add_f_5();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18* v8 = v7_0->mutable_f_3();
  v8->set_f_0(0x29f2887b);
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20* v9 = v8->mutable_f_2();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21* v10_0 = v9->add_f_8();
  Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22* v11 =
      v10_0->mutable_f_2();
  (void)v11;  // Suppresses clang-tidy.
  v9->set_f_0(0x653f8cb);
  v9->set_f_1(0x10);
  Message6::M1::M3::M5::M7::M10::M13::M16::M19* v12_0 = v7_0->add_f_4();
  v12_0->set_f_0(Message6::M1::M3::M5::M7::M10::M13::M16::M19::E2_CONST_5);
  Message6::M1::M3::M5::M7::M10::M13::M16::M19* v12_1 = v7_0->add_f_4();
  (void)v12_1;  // Suppresses clang-tidy.
  v6->set_f_2(s->substr(0, 3));
  Message6::M1::M3::M5::M7::M9* v13 = v3->mutable_f_9();
  v13->set_f_0(0.298196);
  Message6::M1::M3::M5::M7::M9::M14* v14 = v13->mutable_f_3();
  Message6::M1::M3::M5::M7::M9::M14::M17* v15 = v14->mutable_f_3();
  v15->set_f_3(false);
  v15->set_f_9(0x56);
  v15->set_f_4(s->substr(0, 24));
  v15->set_f_7(0.892247);
  Message6::M1::M4* v16 = v0_0->mutable_f_8();
  (void)v16;  // Suppresses clang-tidy.
  Message6::M1::M2* v17 = v0_0->mutable_f_4();
  (void)v17;  // Suppresses clang-tidy.
  message->set_f_3(0x3651c14);
  message->set_f_0(s->substr(0, 53));
}
void Message6_Get_1(Message6* message) {
  for (const auto& v0 : (*message).f_6()) {
    const Message6::M1::M3& v1 = v0.f_6();
    Receive(v1.f_0());
    const Message6::M1::M3::M5& v2 = v1.f_2();
    const Message6::M1::M3::M5::M7& v3 = v2.f_2();
    Receive(v3.f_3());
    Receive(v3.f_1());
    Receive(v3.f_0());
    Receive(v3.f_2());
    for (const auto& v4 : v3.f_11()) {
      Receive(v4.f_0());
    }
    const Message6::M1::M3::M5::M7::M9& v5 = v3.f_9();
    const Message6::M1::M3::M5::M7::M9::M14& v6 = v5.f_3();
    Receive(v6.f_0());
    const Message6::M1::M3::M5::M7::M9::M14::M15& v7 = v6.f_2();
    Receive(v7.f_0());
    const Message6::M1::M3::M5::M7::M9::M14::M17& v8 = v6.f_3();
    Receive(v8.f_4());
    Receive(v8.f_0());
    Receive(v8.f_6());
    Receive(v8.f_9());
    Receive(v8.f_2());
    Receive(v8.f_3());
    Receive(v8.f_8());
    Receive(v8.f_1());
    Receive(v8.f_7());
    Receive(v8.f_5());
    Receive(v5.f_0());
    const Message6::M1::M3::M5::M7::M12& v9 = v3.f_12();
    Receive(v9.f_0());
    for (const auto& v10 : v3.f_8()) {
      Receive(v10.f_0());
    }
    const Message6::M1::M3::M5::M7::M10& v11 = v3.f_10();
    Receive(v11.f_0());
    const Message6::M1::M3::M5::M7::M10::M13& v12 = v11.f_4();
    for (const auto& v13 : v12.f_5()) {
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18& v14 = v13.f_3();
      Receive(v14.f_0());
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20& v15 = v14.f_2();
      for (const auto& v16 : v15.f_8()) {
        Receive(v16.f_0());
        const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22& v17 =
            v16.f_2();
        Receive(v17.f_0());
        Receive(v17.f_2());
        Receive(v17.f_1());
      }
      Receive(v15.f_0());
      Receive(v15.f_4());
      Receive(v15.f_1());
      Receive(v15.f_2());
      Receive(v15.f_3());
      Receive(v13.f_0());
      for (const auto& v18 : v13.f_4()) {
        Receive(v18.f_0());
      }
    }
    Receive(v12.f_1());
    Receive(v12.f_0());
    Receive(v12.f_2());
    Receive(v3.f_4());
    Receive(v2.f_0());
    Receive(v0.f_0());
    const Message6::M1::M4& v19 = v0.f_8();
    Receive(v19.f_0());
    const Message6::M1::M4::M6& v20 = v19.f_2();
    Receive(v20.f_2());
    Receive(v20.f_0());
    Receive(v20.f_3());
    Receive(v20.f_1());
    const Message6::M1::M2& v21 = v0.f_4();
    Receive(v21.f_0());
  }
  Receive((*message).f_3());
  for (int i = 0; i < (*message).f_2_size(); ++i) {
    Receive((*message).f_2(i));
  }
  Receive((*message).f_0());
  for (int i = 0; i < (*message).f_1_size(); ++i) {
    Receive((*message).f_1(i));
  }
}
void Message6_Get_2(Message6* message) {
  for (int i = 0; i < (*message).f_2_size(); ++i) {
    Receive((*message).f_2(i));
  }
  Receive((*message).f_3());
  for (const auto& v0 : (*message).f_6()) {
    const Message6::M1::M3& v1 = v0.f_6();
    Receive(v1.f_0());
    const Message6::M1::M3::M5& v2 = v1.f_2();
    Receive(v2.f_0());
    const Message6::M1::M3::M5::M7& v3 = v2.f_2();
    for (const auto& v4 : v3.f_11()) {
      Receive(v4.f_0());
    }
    Receive(v3.f_3());
    Receive(v3.f_4());
    const Message6::M1::M3::M5::M7::M10& v5 = v3.f_10();
    const Message6::M1::M3::M5::M7::M10::M13& v6 = v5.f_4();
    for (const auto& v7 : v6.f_5()) {
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18& v8 = v7.f_3();
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20& v9 = v8.f_2();
      Receive(v9.f_0());
      for (const auto& v10 : v9.f_8()) {
        const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22& v11 =
            v10.f_2();
        Receive(v11.f_0());
        Receive(v11.f_2());
        Receive(v11.f_1());
        Receive(v10.f_0());
      }
      Receive(v9.f_4());
      Receive(v9.f_2());
      Receive(v9.f_3());
      Receive(v9.f_1());
      Receive(v8.f_0());
      for (const auto& v12 : v7.f_4()) {
        Receive(v12.f_0());
      }
      Receive(v7.f_0());
    }
    Receive(v6.f_0());
    Receive(v6.f_1());
    Receive(v6.f_2());
    Receive(v5.f_0());
    for (const auto& v13 : v3.f_8()) {
      Receive(v13.f_0());
    }
    Receive(v3.f_2());
    const Message6::M1::M3::M5::M7::M12& v14 = v3.f_12();
    Receive(v14.f_0());
    Receive(v3.f_1());
    const Message6::M1::M3::M5::M7::M9& v15 = v3.f_9();
    const Message6::M1::M3::M5::M7::M9::M14& v16 = v15.f_3();
    Receive(v16.f_0());
    const Message6::M1::M3::M5::M7::M9::M14::M17& v17 = v16.f_3();
    Receive(v17.f_5());
    Receive(v17.f_3());
    Receive(v17.f_8());
    Receive(v17.f_2());
    Receive(v17.f_0());
    Receive(v17.f_4());
    Receive(v17.f_6());
    Receive(v17.f_9());
    Receive(v17.f_1());
    Receive(v17.f_7());
    const Message6::M1::M3::M5::M7::M9::M14::M15& v18 = v16.f_2();
    Receive(v18.f_0());
    Receive(v15.f_0());
    Receive(v3.f_0());
    const Message6::M1::M2& v19 = v0.f_4();
    Receive(v19.f_0());
    Receive(v0.f_0());
    const Message6::M1::M4& v20 = v0.f_8();
    Receive(v20.f_0());
    const Message6::M1::M4::M6& v21 = v20.f_2();
    Receive(v21.f_1());
    Receive(v21.f_2());
    Receive(v21.f_3());
    Receive(v21.f_0());
  }
  for (int i = 0; i < (*message).f_1_size(); ++i) {
    Receive((*message).f_1(i));
  }
  Receive((*message).f_0());
}
void Message6_Get_3(Message6* message) {
  for (int i = 0; i < (*message).f_1_size(); ++i) {
    Receive((*message).f_1(i));
  }
  for (int i = 0; i < (*message).f_2_size(); ++i) {
    Receive((*message).f_2(i));
  }
  Receive((*message).f_3());
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_6()) {
    const Message6::M1::M4& v1 = v0.f_8();
    const Message6::M1::M4::M6& v2 = v1.f_2();
    Receive(v2.f_1());
    Receive(v2.f_3());
    Receive(v2.f_2());
    Receive(v2.f_0());
    Receive(v1.f_0());
    const Message6::M1::M2& v3 = v0.f_4();
    Receive(v3.f_0());
    const Message6::M1::M3& v4 = v0.f_6();
    const Message6::M1::M3::M5& v5 = v4.f_2();
    Receive(v5.f_0());
    const Message6::M1::M3::M5::M7& v6 = v5.f_2();
    for (const auto& v7 : v6.f_8()) {
      Receive(v7.f_0());
    }
    const Message6::M1::M3::M5::M7::M10& v8 = v6.f_10();
    Receive(v8.f_0());
    const Message6::M1::M3::M5::M7::M10::M13& v9 = v8.f_4();
    for (const auto& v10 : v9.f_5()) {
      for (const auto& v11 : v10.f_4()) {
        Receive(v11.f_0());
      }
      Receive(v10.f_0());
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18& v12 = v10.f_3();
      Receive(v12.f_0());
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20& v13 = v12.f_2();
      Receive(v13.f_1());
      Receive(v13.f_2());
      for (const auto& v14 : v13.f_8()) {
        const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22& v15 =
            v14.f_2();
        Receive(v15.f_2());
        Receive(v15.f_1());
        Receive(v15.f_0());
        Receive(v14.f_0());
      }
      Receive(v13.f_4());
      Receive(v13.f_0());
      Receive(v13.f_3());
    }
    Receive(v9.f_1());
    Receive(v9.f_0());
    Receive(v9.f_2());
    Receive(v6.f_0());
    Receive(v6.f_1());
    const Message6::M1::M3::M5::M7::M12& v16 = v6.f_12();
    Receive(v16.f_0());
    Receive(v6.f_2());
    Receive(v6.f_3());
    Receive(v6.f_4());
    for (const auto& v17 : v6.f_11()) {
      Receive(v17.f_0());
    }
    const Message6::M1::M3::M5::M7::M9& v18 = v6.f_9();
    const Message6::M1::M3::M5::M7::M9::M14& v19 = v18.f_3();
    const Message6::M1::M3::M5::M7::M9::M14::M17& v20 = v19.f_3();
    Receive(v20.f_7());
    Receive(v20.f_8());
    Receive(v20.f_0());
    Receive(v20.f_3());
    Receive(v20.f_4());
    Receive(v20.f_5());
    Receive(v20.f_6());
    Receive(v20.f_1());
    Receive(v20.f_2());
    Receive(v20.f_9());
    Receive(v19.f_0());
    const Message6::M1::M3::M5::M7::M9::M14::M15& v21 = v19.f_2();
    Receive(v21.f_0());
    Receive(v18.f_0());
    Receive(v4.f_0());
    Receive(v0.f_0());
  }
}
void Message6_Get_4(Message6* message) {
  for (int i = 0; i < (*message).f_1_size(); ++i) {
    Receive((*message).f_1(i));
  }
  for (int i = 0; i < (*message).f_2_size(); ++i) {
    Receive((*message).f_2(i));
  }
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_6()) {
    const Message6::M1::M4& v1 = v0.f_8();
    Receive(v1.f_0());
    const Message6::M1::M4::M6& v2 = v1.f_2();
    Receive(v2.f_3());
    Receive(v2.f_0());
    Receive(v2.f_1());
    Receive(v2.f_2());
    const Message6::M1::M3& v3 = v0.f_6();
    const Message6::M1::M3::M5& v4 = v3.f_2();
    Receive(v4.f_0());
    const Message6::M1::M3::M5::M7& v5 = v4.f_2();
    Receive(v5.f_3());
    const Message6::M1::M3::M5::M7::M9& v6 = v5.f_9();
    const Message6::M1::M3::M5::M7::M9::M14& v7 = v6.f_3();
    Receive(v7.f_0());
    const Message6::M1::M3::M5::M7::M9::M14::M17& v8 = v7.f_3();
    Receive(v8.f_1());
    Receive(v8.f_2());
    Receive(v8.f_4());
    Receive(v8.f_7());
    Receive(v8.f_5());
    Receive(v8.f_8());
    Receive(v8.f_9());
    Receive(v8.f_6());
    Receive(v8.f_3());
    Receive(v8.f_0());
    const Message6::M1::M3::M5::M7::M9::M14::M15& v9 = v7.f_2();
    Receive(v9.f_0());
    Receive(v6.f_0());
    const Message6::M1::M3::M5::M7::M10& v10 = v5.f_10();
    Receive(v10.f_0());
    const Message6::M1::M3::M5::M7::M10::M13& v11 = v10.f_4();
    Receive(v11.f_2());
    for (const auto& v12 : v11.f_5()) {
      for (const auto& v13 : v12.f_4()) {
        Receive(v13.f_0());
      }
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18& v14 = v12.f_3();
      const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20& v15 = v14.f_2();
      Receive(v15.f_1());
      Receive(v15.f_4());
      for (const auto& v16 : v15.f_8()) {
        Receive(v16.f_0());
        const Message6::M1::M3::M5::M7::M10::M13::M16::M18::M20::M21::M22& v17 =
            v16.f_2();
        Receive(v17.f_1());
        Receive(v17.f_2());
        Receive(v17.f_0());
      }
      Receive(v15.f_2());
      Receive(v15.f_0());
      Receive(v15.f_3());
      Receive(v14.f_0());
      Receive(v12.f_0());
    }
    Receive(v11.f_0());
    Receive(v11.f_1());
    const Message6::M1::M3::M5::M7::M12& v18 = v5.f_12();
    Receive(v18.f_0());
    Receive(v5.f_1());
    for (const auto& v19 : v5.f_11()) {
      Receive(v19.f_0());
    }
    Receive(v5.f_4());
    for (const auto& v20 : v5.f_8()) {
      Receive(v20.f_0());
    }
    Receive(v5.f_0());
    Receive(v5.f_2());
    Receive(v3.f_0());
    Receive(v0.f_0());
    const Message6::M1::M2& v21 = v0.f_4();
    Receive(v21.f_0());
  }
  Receive((*message).f_3());
}
}  // namespace fleetbench::proto
