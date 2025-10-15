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

#include "fleetbench/proto/access_message9.h"

#include <cstddef>
#include <cstdint>
#include <string>

#include "fleetbench/proto/Message9.pb.h"
#include "fleetbench/proto/receiver.h"

namespace fleetbench::proto {
void Message9_Set_1(Message9* message, std::string* s) {
  Message9::M1* v0 = message->mutable_f_2();
  Message9::M1::M2* v1 = v0->mutable_f_2();
  v1->set_f_1(0x56);
  Message9::M1::M2::M4* v2 = v1->mutable_f_8();
  v2->set_f_0(0x7a);
  Message9::M1::M2::M4::M8* v3_0 = v2->add_f_2();
  v3_0->set_f_0(0x7);
  Message9::M1::M2::M4::M8::M13* v4 = v3_0->mutable_f_3();
  Message9::M1::M2::M4::M8::M13::M16* v5_0 = v4->add_f_2();
  v5_0->set_f_0(0.433292);
  Message9::M1::M2::M4::M8::M12* v6_0 = v3_0->add_f_2();
  Message9::M1::M2::M4::M8::M12::M15* v7_0 = v6_0->add_f_5();
  (void)v7_0;  // Suppresses clang-tidy.
  Message9::M1::M2::M5* v8 = v1->mutable_f_9();
  Message9::M1::M2::M5::M7* v9 = v8->mutable_f_2();
  Message9::M1::M2::M5::M7::M11* v10 = v9->mutable_f_3();
  Message9::M1::M2::M5::M7::M11::M14* v11 = v10->mutable_f_5();
  Message9::M1::M2::M5::M7::M11::M14::M17* v12 = v11->mutable_f_2();
  v12->set_f_6(false);
  v12->set_f_4(Message9::M1::M2::M5::M7::M11::M14::M17::E5_CONST_3);
  v12->set_f_2(s->substr(0, 3));
  v11->set_f_0(s->substr(0, 48));
  v9->set_f_0(Message9::M1::M2::M5::M7::E1_CONST_4);
  Message9::M1::M2::M6* v13 = v1->mutable_f_12();
  Message9::M1::M2::M6::M9* v14 = v13->mutable_f_6();
  (void)v14;  // Suppresses clang-tidy.
  v13->set_f_3(0x4a8dc622f7fef159);
  v13->set_f_0(0x72);
  message->set_f_0(0x3258);
}
void Message9_Set_2(Message9* message, std::string* s) {
  Message9::M1* v0 = message->mutable_f_2();
  Message9::M1::M2* v1 = v0->mutable_f_2();
  Message9::M1::M2::M4* v2 = v1->mutable_f_8();
  Message9::M1::M2::M4::M8* v3_0 = v2->add_f_2();
  Message9::M1::M2::M4::M8::M12* v4_0 = v3_0->add_f_2();
  (void)v4_0;  // Suppresses clang-tidy.
  Message9::M1::M2::M4::M8::M13* v5 = v3_0->mutable_f_3();
  Message9::M1::M2::M4::M8::M13::M16* v6_0 = v5->add_f_2();
  v6_0->set_f_1(0x5d);
  v6_0->set_f_3(Message9::M1::M2::M4::M8::M13::M16::E3_CONST_4);
  Message9::M1::M2::M6* v7 = v1->mutable_f_12();
  v7->add_f_1(0x5a);
  v7->add_f_1(0x17ec38);
  v7->add_f_1(0xf1827f7);
  v7->set_f_2(true);
  v1->set_f_1(0x7a);
  Message9::M1::M2::M5* v8 = v1->mutable_f_9();
  Message9::M1::M2::M5::M10* v9 = v8->mutable_f_3();
  (void)v9;  // Suppresses clang-tidy.
  Message9::M1::M2::M5::M7* v10 = v8->mutable_f_2();
  Message9::M1::M2::M5::M7::M11* v11 = v10->mutable_f_3();
  v11->set_f_1(Message9::M1::M2::M5::M7::M11::E2_CONST_2);
  v11->set_f_2(s->substr(0, 21));
  Message9::M1::M2::M5::M7::M11::M14* v12 = v11->mutable_f_5();
  Message9::M1::M2::M5::M7::M11::M14::M17* v13 = v12->mutable_f_2();
  v13->set_f_2(s->substr(0, 30));
  v13->add_f_1(0x50495);
  v13->add_f_1(0x1dcc03);
  v13->add_f_1(0xfe6175d);
  v13->add_f_1(0x6ec0ff4);
  Message9::M1::M2::M5::M7::M11::M14::M17::M18* v14 = v13->mutable_f_14();
  (void)v14;  // Suppresses clang-tidy.
  Message9::M1::M2::M5::M7::M11::M14::M17::M19* v15 = v13->mutable_f_16();
  v15->set_f_2(Message9::M1::M2::M5::M7::M11::M14::M17::M19::E7_CONST_3);
  v10->set_f_1(0.051019);
  v1->set_f_4(s->substr(0, 4));
}
void Message9_Set_3(Message9* message, std::string* s) {
  message->set_f_0(0x1d);
  Message9::M1* v0 = message->mutable_f_2();
  v0->set_f_0(s->substr(0, 20));
  Message9::M1::M2* v1 = v0->mutable_f_2();
  Message9::M1::M2::M4* v2 = v1->mutable_f_8();
  v2->set_f_0(0x62);
  Message9::M1::M2::M4::M8* v3_0 = v2->add_f_2();
  Message9::M1::M2::M4::M8::M13* v4 = v3_0->mutable_f_3();
  Message9::M1::M2::M4::M8::M13::M16* v5_0 = v4->add_f_2();
  v5_0->set_f_1(0x50f7ed8c5);
  Message9::M1::M2::M4::M8* v3_1 = v2->add_f_2();
  v3_1->set_f_0(0x1);
  Message9::M1::M2::M4::M8::M13* v6 = v3_1->mutable_f_3();
  Message9::M1::M2::M4::M8::M13::M16* v7_0 = v6->add_f_2();
  v7_0->set_f_0(0.911267);
  Message9::M1::M2::M6* v8 = v1->mutable_f_12();
  Message9::M1::M2::M6::M9* v9 = v8->mutable_f_6();
  (void)v9;  // Suppresses clang-tidy.
  v1->set_f_3(s->substr(0, 5));
  Message9::M1::M2::M5* v10 = v1->mutable_f_9();
  Message9::M1::M2::M5::M10* v11 = v10->mutable_f_3();
  (void)v11;  // Suppresses clang-tidy.
  v10->add_f_0(s->substr(0, 6));
  Message9::M1::M2::M5::M7* v12 = v10->mutable_f_2();
  Message9::M1::M2::M5::M7::M11* v13 = v12->mutable_f_3();
  Message9::M1::M2::M5::M7::M11::M14* v14 = v13->mutable_f_5();
  Message9::M1::M2::M5::M7::M11::M14::M17* v15 = v14->mutable_f_2();
  v15->set_f_6(true);
  v15->add_f_1(0x1c2bcb);
  v15->set_f_0(Message9::M1::M2::M5::M7::M11::M14::M17::E4_CONST_4);
  v14->set_f_0(s->substr(0, 29));
  v13->set_f_0(0x7fd3e3055);
}
void Message9_Set_4(Message9* message, std::string* s) {
  Message9::M1* v0 = message->mutable_f_2();
  Message9::M1::M2* v1 = v0->mutable_f_2();
  Message9::M1::M2::M6* v2 = v1->mutable_f_12();
  Message9::M1::M2::M6::M9* v3 = v2->mutable_f_6();
  (void)v3;  // Suppresses clang-tidy.
  Message9::M1::M2::M4* v4 = v1->mutable_f_8();
  v4->set_f_0(0x8);
  Message9::M1::M2::M4::M8* v5_0 = v4->add_f_2();
  Message9::M1::M2::M4::M8::M13* v6 = v5_0->mutable_f_3();
  Message9::M1::M2::M4::M8::M13::M16* v7_0 = v6->add_f_2();
  v7_0->set_f_0(0.790188);
  v7_0->set_f_2(s->substr(0, 7));
  Message9::M1::M2::M4::M8::M12* v8_0 = v5_0->add_f_2();
  v8_0->set_f_0(s->substr(0, 3));
  Message9::M1::M2::M4::M8::M12* v8_1 = v5_0->add_f_2();
  (void)v8_1;  // Suppresses clang-tidy.
  v1->set_f_0(s->substr(0, 18));
  Message9::M1::M2::M5* v9 = v1->mutable_f_9();
  Message9::M1::M2::M5::M7* v10 = v9->mutable_f_2();
  Message9::M1::M2::M5::M7::M11* v11 = v10->mutable_f_3();
  Message9::M1::M2::M5::M7::M11::M14* v12 = v11->mutable_f_5();
  Message9::M1::M2::M5::M7::M11::M14::M17* v13 = v12->mutable_f_2();
  Message9::M1::M2::M5::M7::M11::M14::M17::M19* v14 = v13->mutable_f_16();
  v14->set_f_2(Message9::M1::M2::M5::M7::M11::M14::M17::M19::E7_CONST_3);
  v13->set_f_6(false);
  v13->set_f_5(Message9::M1::M2::M5::M7::M11::M14::M17::E6_CONST_4);
}
void Message9_Get_1(Message9* message) {
  Receive((*message).f_0());
  const Message9::M1& v0 = (*message).f_2();
  const Message9::M1::M2& v1 = v0.f_2();
  const Message9::M1::M2::M6& v2 = v1.f_12();
  Receive(v2.f_2());
  const Message9::M1::M2::M6::M9& v3 = v2.f_6();
  Receive(v3.f_0());
  Receive(v2.f_0());
  for (int i = 0; i < v2.f_1_size(); ++i) {
    Receive(v2.f_1(i));
  }
  Receive(v2.f_3());
  const Message9::M1::M2::M5& v4 = v1.f_9();
  const Message9::M1::M2::M5::M7& v5 = v4.f_2();
  Receive(v5.f_1());
  const Message9::M1::M2::M5::M7::M11& v6 = v5.f_3();
  const Message9::M1::M2::M5::M7::M11::M14& v7 = v6.f_5();
  Receive(v7.f_0());
  const Message9::M1::M2::M5::M7::M11::M14::M17& v8 = v7.f_2();
  Receive(v8.f_2());
  Receive(v8.f_6());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M18& v9 = v8.f_14();
  for (int i = 0; i < v9.f_0_size(); ++i) {
    Receive(v9.f_0(i));
  }
  Receive(v8.f_0());
  for (int i = 0; i < v8.f_1_size(); ++i) {
    Receive(v8.f_1(i));
  }
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19& v10 = v8.f_16();
  Receive(v10.f_0());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19::M20& v11 = v10.f_5();
  Receive(v11.f_0());
  Receive(v10.f_1());
  Receive(v10.f_2());
  Receive(v8.f_3());
  Receive(v8.f_4());
  Receive(v8.f_5());
  Receive(v6.f_0());
  Receive(v6.f_2());
  Receive(v6.f_1());
  Receive(v5.f_0());
  for (int i = 0; i < v4.f_0_size(); ++i) {
    Receive(v4.f_0(i));
  }
  const Message9::M1::M2::M5::M10& v12 = v4.f_3();
  Receive(v12.f_0());
  const Message9::M1::M2::M3& v13 = v1.f_7();
  Receive(v13.f_0());
  Receive(v1.f_0());
  Receive(v1.f_4());
  const Message9::M1::M2::M4& v14 = v1.f_8();
  for (const auto& v15 : v14.f_2()) {
    const Message9::M1::M2::M4::M8::M13& v16 = v15.f_3();
    Receive(v16.f_0());
    for (const auto& v17 : v16.f_2()) {
      Receive(v17.f_0());
      Receive(v17.f_3());
      Receive(v17.f_1());
      Receive(v17.f_2());
    }
    for (const auto& v18 : v15.f_2()) {
      Receive(v18.f_0());
      for (const auto& v19 : v18.f_5()) {
        Receive(v19.f_0());
      }
    }
    Receive(v15.f_0());
  }
  Receive(v14.f_0());
  Receive(v1.f_3());
  Receive(v1.f_2());
  Receive(v1.f_1());
  Receive(v0.f_0());
}
void Message9_Get_2(Message9* message) {
  const Message9::M1& v0 = (*message).f_2();
  const Message9::M1::M2& v1 = v0.f_2();
  Receive(v1.f_2());
  Receive(v1.f_1());
  const Message9::M1::M2::M3& v2 = v1.f_7();
  Receive(v2.f_0());
  Receive(v1.f_0());
  Receive(v1.f_3());
  Receive(v1.f_4());
  const Message9::M1::M2::M4& v3 = v1.f_8();
  Receive(v3.f_0());
  for (const auto& v4 : v3.f_2()) {
    for (const auto& v5 : v4.f_2()) {
      Receive(v5.f_0());
      for (const auto& v6 : v5.f_5()) {
        Receive(v6.f_0());
      }
    }
    const Message9::M1::M2::M4::M8::M13& v7 = v4.f_3();
    Receive(v7.f_0());
    for (const auto& v8 : v7.f_2()) {
      Receive(v8.f_0());
      Receive(v8.f_2());
      Receive(v8.f_1());
      Receive(v8.f_3());
    }
    Receive(v4.f_0());
  }
  const Message9::M1::M2::M6& v9 = v1.f_12();
  Receive(v9.f_3());
  Receive(v9.f_0());
  for (int i = 0; i < v9.f_1_size(); ++i) {
    Receive(v9.f_1(i));
  }
  Receive(v9.f_2());
  const Message9::M1::M2::M6::M9& v10 = v9.f_6();
  Receive(v10.f_0());
  const Message9::M1::M2::M5& v11 = v1.f_9();
  for (int i = 0; i < v11.f_0_size(); ++i) {
    Receive(v11.f_0(i));
  }
  const Message9::M1::M2::M5::M7& v12 = v11.f_2();
  Receive(v12.f_1());
  Receive(v12.f_0());
  const Message9::M1::M2::M5::M7::M11& v13 = v12.f_3();
  const Message9::M1::M2::M5::M7::M11::M14& v14 = v13.f_5();
  const Message9::M1::M2::M5::M7::M11::M14::M17& v15 = v14.f_2();
  Receive(v15.f_5());
  for (int i = 0; i < v15.f_1_size(); ++i) {
    Receive(v15.f_1(i));
  }
  Receive(v15.f_6());
  Receive(v15.f_0());
  Receive(v15.f_2());
  Receive(v15.f_4());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M18& v16 = v15.f_14();
  for (int i = 0; i < v16.f_0_size(); ++i) {
    Receive(v16.f_0(i));
  }
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19& v17 = v15.f_16();
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19::M20& v18 = v17.f_5();
  Receive(v18.f_0());
  Receive(v17.f_0());
  Receive(v17.f_1());
  Receive(v17.f_2());
  Receive(v15.f_3());
  Receive(v14.f_0());
  Receive(v13.f_1());
  Receive(v13.f_2());
  Receive(v13.f_0());
  const Message9::M1::M2::M5::M10& v19 = v11.f_3();
  Receive(v19.f_0());
  Receive(v0.f_0());
  Receive((*message).f_0());
}
void Message9_Get_3(Message9* message) {
  const Message9::M1& v0 = (*message).f_2();
  const Message9::M1::M2& v1 = v0.f_2();
  const Message9::M1::M2::M4& v2 = v1.f_8();
  Receive(v2.f_0());
  for (const auto& v3 : v2.f_2()) {
    Receive(v3.f_0());
    for (const auto& v4 : v3.f_2()) {
      for (const auto& v5 : v4.f_5()) {
        Receive(v5.f_0());
      }
      Receive(v4.f_0());
    }
    const Message9::M1::M2::M4::M8::M13& v6 = v3.f_3();
    Receive(v6.f_0());
    for (const auto& v7 : v6.f_2()) {
      Receive(v7.f_3());
      Receive(v7.f_1());
      Receive(v7.f_0());
      Receive(v7.f_2());
    }
  }
  const Message9::M1::M2::M5& v8 = v1.f_9();
  const Message9::M1::M2::M5::M7& v9 = v8.f_2();
  Receive(v9.f_1());
  Receive(v9.f_0());
  const Message9::M1::M2::M5::M7::M11& v10 = v9.f_3();
  Receive(v10.f_2());
  Receive(v10.f_0());
  const Message9::M1::M2::M5::M7::M11::M14& v11 = v10.f_5();
  Receive(v11.f_0());
  const Message9::M1::M2::M5::M7::M11::M14::M17& v12 = v11.f_2();
  Receive(v12.f_5());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19& v13 = v12.f_16();
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19::M20& v14 = v13.f_5();
  Receive(v14.f_0());
  Receive(v13.f_1());
  Receive(v13.f_0());
  Receive(v13.f_2());
  Receive(v12.f_2());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M18& v15 = v12.f_14();
  for (int i = 0; i < v15.f_0_size(); ++i) {
    Receive(v15.f_0(i));
  }
  Receive(v12.f_6());
  for (int i = 0; i < v12.f_1_size(); ++i) {
    Receive(v12.f_1(i));
  }
  Receive(v12.f_0());
  Receive(v12.f_4());
  Receive(v12.f_3());
  Receive(v10.f_1());
  const Message9::M1::M2::M5::M10& v16 = v8.f_3();
  Receive(v16.f_0());
  for (int i = 0; i < v8.f_0_size(); ++i) {
    Receive(v8.f_0(i));
  }
  Receive(v1.f_0());
  Receive(v1.f_1());
  const Message9::M1::M2::M3& v17 = v1.f_7();
  Receive(v17.f_0());
  const Message9::M1::M2::M6& v18 = v1.f_12();
  Receive(v18.f_2());
  const Message9::M1::M2::M6::M9& v19 = v18.f_6();
  Receive(v19.f_0());
  Receive(v18.f_3());
  Receive(v18.f_0());
  for (int i = 0; i < v18.f_1_size(); ++i) {
    Receive(v18.f_1(i));
  }
  Receive(v1.f_4());
  Receive(v1.f_3());
  Receive(v1.f_2());
  Receive(v0.f_0());
  Receive((*message).f_0());
}
void Message9_Get_4(Message9* message) {
  const Message9::M1& v0 = (*message).f_2();
  const Message9::M1::M2& v1 = v0.f_2();
  const Message9::M1::M2::M3& v2 = v1.f_7();
  Receive(v2.f_0());
  Receive(v1.f_1());
  Receive(v1.f_0());
  Receive(v1.f_4());
  const Message9::M1::M2::M5& v3 = v1.f_9();
  const Message9::M1::M2::M5::M7& v4 = v3.f_2();
  const Message9::M1::M2::M5::M7::M11& v5 = v4.f_3();
  Receive(v5.f_2());
  Receive(v5.f_1());
  Receive(v5.f_0());
  const Message9::M1::M2::M5::M7::M11::M14& v6 = v5.f_5();
  Receive(v6.f_0());
  const Message9::M1::M2::M5::M7::M11::M14::M17& v7 = v6.f_2();
  Receive(v7.f_4());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19& v8 = v7.f_16();
  Receive(v8.f_0());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M19::M20& v9 = v8.f_5();
  Receive(v9.f_0());
  Receive(v8.f_2());
  Receive(v8.f_1());
  const Message9::M1::M2::M5::M7::M11::M14::M17::M18& v10 = v7.f_14();
  for (int i = 0; i < v10.f_0_size(); ++i) {
    Receive(v10.f_0(i));
  }
  Receive(v7.f_5());
  Receive(v7.f_3());
  Receive(v7.f_0());
  for (int i = 0; i < v7.f_1_size(); ++i) {
    Receive(v7.f_1(i));
  }
  Receive(v7.f_6());
  Receive(v7.f_2());
  Receive(v4.f_0());
  Receive(v4.f_1());
  for (int i = 0; i < v3.f_0_size(); ++i) {
    Receive(v3.f_0(i));
  }
  const Message9::M1::M2::M5::M10& v11 = v3.f_3();
  Receive(v11.f_0());
  Receive(v1.f_3());
  Receive(v1.f_2());
  const Message9::M1::M2::M4& v12 = v1.f_8();
  Receive(v12.f_0());
  for (const auto& v13 : v12.f_2()) {
    Receive(v13.f_0());
    const Message9::M1::M2::M4::M8::M13& v14 = v13.f_3();
    Receive(v14.f_0());
    for (const auto& v15 : v14.f_2()) {
      Receive(v15.f_0());
      Receive(v15.f_2());
      Receive(v15.f_3());
      Receive(v15.f_1());
    }
    for (const auto& v16 : v13.f_2()) {
      Receive(v16.f_0());
      for (const auto& v17 : v16.f_5()) {
        Receive(v17.f_0());
      }
    }
  }
  const Message9::M1::M2::M6& v18 = v1.f_12();
  Receive(v18.f_2());
  const Message9::M1::M2::M6::M9& v19 = v18.f_6();
  Receive(v19.f_0());
  for (int i = 0; i < v18.f_1_size(); ++i) {
    Receive(v18.f_1(i));
  }
  Receive(v18.f_0());
  Receive(v18.f_3());
  Receive(v0.f_0());
  Receive((*message).f_0());
}
}  // namespace fleetbench::proto
