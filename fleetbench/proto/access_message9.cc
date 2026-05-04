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
  Message9::M1* v0 = message->mutable_f_8();
  Message9::M1::M3* v1 = v0->mutable_f_4();
  int32_t array_1[8] = {
      0x49ba24d, 0x552e541, 0x467ad,   0xa8d99a0,
      0x53,      0x668a6ed, 0x885b58b, 0x390bb36,
  };
  for (auto v : array_1) {
    v1->add_f_0(v);
  }
  Message9::M1::M2* v2 = v0->mutable_f_3();
  Message9::M1::M2::M4* v3 = v2->mutable_f_2();
  v3->set_f_0(0x77);
  Message9::M1::M2::M4::M7* v4_0 = v3->add_f_5();
  v4_0->add_f_0(Message9::M1::M2::M4::M7::E2_CONST_1);
  Message9::M1::M2::M5* v5_0 = v2->add_f_3();
  Message9::M1::M2::M5::M8* v6_0 = v5_0->add_f_3();
  v6_0->set_f_3(Message9::M1::M2::M5::M8::E3_CONST_3);
  v6_0->set_f_1(0x25);
  Message9::M1::M2::M5::M8::M9* v7 = v6_0->mutable_f_5();
  v7->set_f_2(0.720100);
  Message9::M1::M2::M5::M8::M9::M11* v8 = v7->mutable_f_7();
  Message9::M1::M2::M5::M8::M9::M11::M12* v9_0 = v8->add_f_2();
  Message9::M1::M2::M5::M8::M9::M11::M12::M13* v10 = v9_0->mutable_f_13();
  v10->set_f_5(0x53);
  v10->set_f_3(s->substr(0, 39));
  v10->set_f_1(Message9::M1::M2::M5::M8::M9::M11::M12::M13::E5_CONST_4);
  v0->set_f_0(true);
  message->add_f_4(s->substr(0, 3));
}
void Message9_Set_2(Message9* message, std::string* s) {
  message->set_f_2(Message9::E1_CONST_2);
  message->set_f_0(true);
  Message9::M1* v0 = message->mutable_f_8();
  Message9::M1::M2* v1 = v0->mutable_f_3();
  Message9::M1::M2::M5* v2_0 = v1->add_f_3();
  Message9::M1::M2::M5::M8* v3_0 = v2_0->add_f_3();
  Message9::M1::M2::M5::M8::M9* v4 = v3_0->mutable_f_5();
  v4->set_f_0(0xd97eb);
  Message9::M1::M2::M5::M8::M9::M11* v5 = v4->mutable_f_7();
  Message9::M1::M2::M5::M8::M9::M11::M12* v6_0 = v5->add_f_2();
  v6_0->set_f_6(s->substr(0, 2));
  v6_0->set_f_2(false);
  v6_0->set_f_5(0xe260f2e);
  Message9::M1::M2::M5::M8::M9::M11::M12::M13* v7 = v6_0->mutable_f_13();
  v7->set_f_0(0xc9c6ff87fc4615);
  v7->set_f_2(s->substr(0, 1));
  v6_0->set_f_1(0x7e4d7c343f01843);
  v5->set_f_0(0.968346);
  Message9::M1::M2::M5::M8::M9::M10* v8 = v4->mutable_f_6();
  (void)v8;  // Suppresses clang-tidy.
  v4->set_f_2(0.046701);
  v3_0->add_f_0(0x3999);
  v3_0->add_f_0(0x5efa95);
  v3_0->add_f_0(0xced3e7c);
  v3_0->set_f_3(Message9::M1::M2::M5::M8::E3_CONST_5);
  v3_0->set_f_2(0x53);
  v1->set_f_0(s->substr(0, 5));
}
void Message9_Set_3(Message9* message, std::string* s) {
  Message9::M1* v0 = message->mutable_f_8();
  Message9::M1::M2* v1 = v0->mutable_f_3();
  v1->set_f_0(s->substr(0, 18));
  Message9::M1::M2::M5* v2_0 = v1->add_f_3();
  v2_0->set_f_0(0.877485);
  Message9::M1::M2::M5::M8* v3_0 = v2_0->add_f_3();
  v3_0->add_f_0(0x25db);
  v3_0->add_f_0(0x14370e);
  v3_0->set_f_2(0x34c66);
  Message9::M1::M2::M5::M8::M9* v4 = v3_0->mutable_f_5();
  Message9::M1::M2::M5::M8::M9::M10* v5 = v4->mutable_f_6();
  v5->set_f_0(0x1cbc);
  Message9::M1::M2::M5::M8::M9::M11* v6 = v4->mutable_f_7();
  Message9::M1::M2::M5::M8::M9::M11::M12* v7_0 = v6->add_f_2();
  Message9::M1::M2::M5::M8::M9::M11::M12::M13* v8 = v7_0->mutable_f_13();
  v8->set_f_2(s->substr(0, 16));
  v8->set_f_4(Message9::M1::M2::M5::M8::M9::M11::M12::M13::E6_CONST_1);
  v8->set_f_0(0x581c21d58);
  v8->set_f_3(s->substr(0, 8));
  v7_0->set_f_6(s->substr(0, 25));
  v6->set_f_0(0.955475);
  v3_0->set_f_1(0xcf3db6b);
  v3_0->set_f_3(Message9::M1::M2::M5::M8::E3_CONST_1);
  Message9::M1::M2::M4* v9 = v1->mutable_f_2();
  Message9::M1::M2::M4::M6* v10_0 = v9->add_f_3();
  (void)v10_0;  // Suppresses clang-tidy.
  Message9::M1::M2::M4::M7* v11_0 = v9->add_f_5();
  (void)v11_0;  // Suppresses clang-tidy.
  message->set_f_0(true);
}
void Message9_Set_4(Message9* message, std::string* s) {
  message->set_f_2(Message9::E1_CONST_3);
  message->set_f_3(0x29);
  Message9::M1* v0 = message->mutable_f_8();
  v0->set_f_0(false);
  Message9::M1::M2* v1 = v0->mutable_f_3();
  Message9::M1::M2::M5* v2_0 = v1->add_f_3();
  Message9::M1::M2::M5::M8* v3_0 = v2_0->add_f_3();
  Message9::M1::M2::M5::M8::M9* v4 = v3_0->mutable_f_5();
  Message9::M1::M2::M5::M8::M9::M10* v5 = v4->mutable_f_6();
  (void)v5;  // Suppresses clang-tidy.
  Message9::M1::M2::M5::M8::M9::M11* v6 = v4->mutable_f_7();
  Message9::M1::M2::M5::M8::M9::M11::M12* v7_0 = v6->add_f_2();
  v7_0->set_f_3(0x2f);
  v7_0->set_f_5(0x5d);
  Message9::M1::M2::M5::M8::M9::M11::M12::M13* v8 = v7_0->mutable_f_13();
  v8->set_f_3(s->substr(0, 126));
  v8->set_f_1(Message9::M1::M2::M5::M8::M9::M11::M12::M13::E5_CONST_1);
  v8->set_f_2(s->substr(0, 19));
  Message9::M1::M2::M5::M8::M9::M11::M12::M13::M14* v9 = v8->mutable_f_13();
  (void)v9;  // Suppresses clang-tidy.
  v7_0->set_f_0(0.401797);
  v7_0->set_f_6(s->substr(0, 48));
  v4->set_f_2(0.085873);
  v3_0->set_f_1(0x63);
  v1->set_f_0(s->substr(0, 29));
}
void Message9_Get_1(Message9* message) {
  const Message9::M1& v0 = (*message).f_8();
  Receive(v0.f_0());
  const Message9::M1::M2& v1 = v0.f_3();
  for (const auto& v2 : v1.f_3()) {
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_3());
      const Message9::M1::M2::M5::M8::M9& v4 = v3.f_5();
      Receive(v4.f_2());
      Receive(v4.f_1());
      Receive(v4.f_0());
      const Message9::M1::M2::M5::M8::M9::M10& v5 = v4.f_6();
      Receive(v5.f_0());
      const Message9::M1::M2::M5::M8::M9::M11& v6 = v4.f_7();
      for (const auto& v7 : v6.f_2()) {
        Receive(v7.f_3());
        Receive(v7.f_1());
        Receive(v7.f_0());
        Receive(v7.f_5());
        Receive(v7.f_2());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13& v8 = v7.f_13();
        Receive(v8.f_1());
        Receive(v8.f_0());
        Receive(v8.f_3());
        Receive(v8.f_5());
        Receive(v8.f_4());
        Receive(v8.f_2());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13::M14& v9 = v8.f_13();
        Receive(v9.f_0());
        Receive(v7.f_6());
        Receive(v7.f_4());
      }
      Receive(v6.f_0());
      for (int i = 0; i < v3.f_0_size(); ++i) {
        Receive(v3.f_0(i));
      }
      Receive(v3.f_1());
      Receive(v3.f_2());
    }
    Receive(v2.f_0());
  }
  const Message9::M1::M2::M4& v10 = v1.f_2();
  for (const auto& v11 : v10.f_5()) {
    for (int i = 0; i < v11.f_0_size(); ++i) {
      Receive(v11.f_0(i));
    }
  }
  for (const auto& v12 : v10.f_3()) {
    Receive(v12.f_0());
  }
  Receive(v10.f_0());
  Receive(v1.f_0());
  const Message9::M1::M3& v13 = v0.f_4();
  for (int i = 0; i < v13.f_0_size(); ++i) {
    Receive(v13.f_0(i));
  }
  Receive((*message).f_3());
  Receive((*message).f_2());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  Receive((*message).f_1());
  Receive((*message).f_0());
}
void Message9_Get_2(Message9* message) {
  Receive((*message).f_2());
  Receive((*message).f_3());
  Receive((*message).f_1());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  const Message9::M1& v0 = (*message).f_8();
  Receive(v0.f_0());
  const Message9::M1::M3& v1 = v0.f_4();
  for (int i = 0; i < v1.f_0_size(); ++i) {
    Receive(v1.f_0(i));
  }
  const Message9::M1::M2& v2 = v0.f_3();
  for (const auto& v3 : v2.f_3()) {
    for (const auto& v4 : v3.f_3()) {
      for (int i = 0; i < v4.f_0_size(); ++i) {
        Receive(v4.f_0(i));
      }
      Receive(v4.f_2());
      Receive(v4.f_1());
      Receive(v4.f_3());
      const Message9::M1::M2::M5::M8::M9& v5 = v4.f_5();
      Receive(v5.f_2());
      Receive(v5.f_0());
      const Message9::M1::M2::M5::M8::M9::M10& v6 = v5.f_6();
      Receive(v6.f_0());
      Receive(v5.f_1());
      const Message9::M1::M2::M5::M8::M9::M11& v7 = v5.f_7();
      for (const auto& v8 : v7.f_2()) {
        Receive(v8.f_3());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13& v9 = v8.f_13();
        Receive(v9.f_0());
        Receive(v9.f_5());
        Receive(v9.f_1());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13::M14& v10 = v9.f_13();
        Receive(v10.f_0());
        Receive(v9.f_2());
        Receive(v9.f_3());
        Receive(v9.f_4());
        Receive(v8.f_1());
        Receive(v8.f_4());
        Receive(v8.f_0());
        Receive(v8.f_5());
        Receive(v8.f_6());
        Receive(v8.f_2());
      }
      Receive(v7.f_0());
    }
    Receive(v3.f_0());
  }
  Receive(v2.f_0());
  const Message9::M1::M2::M4& v11 = v2.f_2();
  for (const auto& v12 : v11.f_5()) {
    for (int i = 0; i < v12.f_0_size(); ++i) {
      Receive(v12.f_0(i));
    }
  }
  Receive(v11.f_0());
  for (const auto& v13 : v11.f_3()) {
    Receive(v13.f_0());
  }
  Receive((*message).f_0());
}
void Message9_Get_3(Message9* message) {
  Receive((*message).f_0());
  const Message9::M1& v0 = (*message).f_8();
  Receive(v0.f_0());
  const Message9::M1::M2& v1 = v0.f_3();
  Receive(v1.f_0());
  const Message9::M1::M2::M4& v2 = v1.f_2();
  Receive(v2.f_0());
  for (const auto& v3 : v2.f_3()) {
    Receive(v3.f_0());
  }
  for (const auto& v4 : v2.f_5()) {
    for (int i = 0; i < v4.f_0_size(); ++i) {
      Receive(v4.f_0(i));
    }
  }
  for (const auto& v5 : v1.f_3()) {
    Receive(v5.f_0());
    for (const auto& v6 : v5.f_3()) {
      const Message9::M1::M2::M5::M8::M9& v7 = v6.f_5();
      Receive(v7.f_1());
      const Message9::M1::M2::M5::M8::M9::M10& v8 = v7.f_6();
      Receive(v8.f_0());
      const Message9::M1::M2::M5::M8::M9::M11& v9 = v7.f_7();
      Receive(v9.f_0());
      for (const auto& v10 : v9.f_2()) {
        Receive(v10.f_2());
        Receive(v10.f_0());
        Receive(v10.f_6());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13& v11 = v10.f_13();
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13::M14& v12 =
            v11.f_13();
        Receive(v12.f_0());
        Receive(v11.f_0());
        Receive(v11.f_1());
        Receive(v11.f_2());
        Receive(v11.f_5());
        Receive(v11.f_4());
        Receive(v11.f_3());
        Receive(v10.f_1());
        Receive(v10.f_4());
        Receive(v10.f_3());
        Receive(v10.f_5());
      }
      Receive(v7.f_0());
      Receive(v7.f_2());
      for (int i = 0; i < v6.f_0_size(); ++i) {
        Receive(v6.f_0(i));
      }
      Receive(v6.f_1());
      Receive(v6.f_2());
      Receive(v6.f_3());
    }
  }
  const Message9::M1::M3& v13 = v0.f_4();
  for (int i = 0; i < v13.f_0_size(); ++i) {
    Receive(v13.f_0(i));
  }
  Receive((*message).f_2());
  Receive((*message).f_3());
  Receive((*message).f_1());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
}
void Message9_Get_4(Message9* message) {
  Receive((*message).f_2());
  Receive((*message).f_1());
  Receive((*message).f_3());
  for (int i = 0; i < (*message).f_4_size(); ++i) {
    Receive((*message).f_4(i));
  }
  Receive((*message).f_0());
  const Message9::M1& v0 = (*message).f_8();
  Receive(v0.f_0());
  const Message9::M1::M3& v1 = v0.f_4();
  for (int i = 0; i < v1.f_0_size(); ++i) {
    Receive(v1.f_0(i));
  }
  const Message9::M1::M2& v2 = v0.f_3();
  const Message9::M1::M2::M4& v3 = v2.f_2();
  for (const auto& v4 : v3.f_5()) {
    for (int i = 0; i < v4.f_0_size(); ++i) {
      Receive(v4.f_0(i));
    }
  }
  for (const auto& v5 : v3.f_3()) {
    Receive(v5.f_0());
  }
  Receive(v3.f_0());
  Receive(v2.f_0());
  for (const auto& v6 : v2.f_3()) {
    Receive(v6.f_0());
    for (const auto& v7 : v6.f_3()) {
      Receive(v7.f_2());
      const Message9::M1::M2::M5::M8::M9& v8 = v7.f_5();
      const Message9::M1::M2::M5::M8::M9::M10& v9 = v8.f_6();
      Receive(v9.f_0());
      Receive(v8.f_0());
      Receive(v8.f_1());
      const Message9::M1::M2::M5::M8::M9::M11& v10 = v8.f_7();
      Receive(v10.f_0());
      for (const auto& v11 : v10.f_2()) {
        Receive(v11.f_6());
        Receive(v11.f_0());
        Receive(v11.f_5());
        Receive(v11.f_2());
        Receive(v11.f_4());
        Receive(v11.f_3());
        Receive(v11.f_1());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13& v12 = v11.f_13();
        Receive(v12.f_3());
        Receive(v12.f_1());
        Receive(v12.f_0());
        Receive(v12.f_5());
        Receive(v12.f_2());
        const Message9::M1::M2::M5::M8::M9::M11::M12::M13::M14& v13 =
            v12.f_13();
        Receive(v13.f_0());
        Receive(v12.f_4());
      }
      Receive(v8.f_2());
      Receive(v7.f_1());
      Receive(v7.f_3());
      for (int i = 0; i < v7.f_0_size(); ++i) {
        Receive(v7.f_0(i));
      }
    }
  }
}
}  // namespace fleetbench::proto
