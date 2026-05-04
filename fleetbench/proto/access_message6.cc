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
  message->set_f_1(0.905219);
  message->set_f_0(s->substr(0, 6));
  message->set_f_2(0x164a3b177f480);
  Message6::M1* v0_0 = message->add_f_5();
  v0_0->set_f_1(s->substr(0, 15));
  Message6::M1::M3* v1 = v0_0->mutable_f_11();
  v1->add_f_0(s->substr(0, 18));
  Message6::M1::M3::M5* v2 = v1->mutable_f_3();
  Message6::M1::M3::M5::M7* v3_0 = v2->add_f_3();
  v3_0->set_f_5(0x7e74883);
  v3_0->set_f_6(Message6::M1::M3::M5::M7::E2_CONST_1);
  Message6::M1::M3::M5::M7::M8* v4 = v3_0->mutable_f_12();
  v4->set_f_0(0x1a864c);
  Message6::M1::M3::M5::M7::M8::M10* v5_0 = v4->add_f_10();
  Message6::M1::M3::M5::M7::M8::M10::M11* v6 = v5_0->mutable_f_2();
  v6->set_f_1(0xd0818531bb837d);
  v6->set_f_0(0.017473);
  Message6::M1::M3::M5::M7::M8::M10* v5_1 = v4->add_f_10();
  v5_1->set_f_0(Message6::M1::M3::M5::M7::M8::M10::E5_CONST_2);
  Message6::M1::M3::M5::M7::M8::M10::M11* v7 = v5_1->mutable_f_2();
  (void)v7;  // Suppresses clang-tidy.
  Message6::M1::M3::M5::M7* v3_1 = v2->add_f_3();
  v3_1->set_f_0(s->substr(0, 20));
  v3_1->set_f_1(0x4e978);
  Message6::M1::M3::M5::M7::M8* v8 = v3_1->mutable_f_12();
  v8->set_f_2(s->substr(0, 17));
  v8->set_f_0(0x941cefa55f2b77);
  Message6::M1::M3::M5::M7::M8::M10* v9_0 = v8->add_f_10();
  Message6::M1::M3::M5::M7::M8::M10::M11* v10 = v9_0->mutable_f_2();
  Message6::M1::M3::M5::M7::M8::M10::M11::M12* v11_0 = v10->add_f_3();
  v11_0->set_f_1(Message6::M1::M3::M5::M7::M8::M10::M11::M12::E6_CONST_2);
  v10->set_f_0(0.208412);
  v8->set_f_4(s->substr(0, 3));
  v3_1->set_f_6(Message6::M1::M3::M5::M7::E2_CONST_5);
  v3_1->set_f_4(0x50e);
  Message6::M1::M2* v12 = v0_0->mutable_f_8();
  v12->set_f_0(s->substr(0, 1));
  v0_0->set_f_0(0x3b62);
}
void Message6_Set_2(Message6* message, std::string* s) {
  message->set_f_0(s->substr(0, 6));
  Message6::M1* v0_0 = message->add_f_5();
  v0_0->set_f_0(0x8e3d9dfd5846d0);
  v0_0->set_f_3(0x5b);
  v0_0->set_f_2(0x1e);
  Message6::M1::M3* v1 = v0_0->mutable_f_11();
  Message6::M1::M3::M5* v2 = v1->mutable_f_3();
  Message6::M1::M3::M5::M7* v3_0 = v2->add_f_3();
  Message6::M1::M3::M5::M7::M8* v4 = v3_0->mutable_f_12();
  v4->set_f_3(0xcf40ba99599921);
  v4->set_f_1(0x6ae7594b027780);
  Message6::M1::M3::M5::M7::M8::M10* v5_0 = v4->add_f_10();
  v5_0->set_f_0(Message6::M1::M3::M5::M7::M8::M10::E5_CONST_4);
  Message6::M1::M3::M5::M7::M8::M10::M11* v6 = v5_0->mutable_f_2();
  v6->set_f_0(0.643093);
  Message6::M1::M3::M5::M7::M8::M10::M11::M12* v7_0 = v6->add_f_3();
  v7_0->set_f_0(s->substr(0, 7));
  v4->set_f_0(0x56);
  v3_0->set_f_0(s->substr(0, 6));
  v3_0->set_f_6(Message6::M1::M3::M5::M7::E2_CONST_1);
  v3_0->set_f_7(0.380619);
  v3_0->set_f_8(Message6::M1::M3::M5::M7::E3_CONST_1);
  v3_0->set_f_4(0x396a);
  Message6::M1::M3::M5::M7* v3_1 = v2->add_f_3();
  v3_1->set_f_0(s->substr(0, 23));
  Message6::M1::M3::M5::M7::M8* v8 = v3_1->mutable_f_12();
  v8->set_f_3(0x72);
  Message6::M1::M3::M5::M7::M8::M9* v9_0 = v8->add_f_9();
  v9_0->set_f_0(Message6::M1::M3::M5::M7::M8::M9::E4_CONST_2);
  Message6::M1::M3::M5::M7::M8::M10* v10_0 = v8->add_f_10();
  Message6::M1::M3::M5::M7::M8::M10::M11* v11 = v10_0->mutable_f_2();
  Message6::M1::M3::M5::M7::M8::M10::M11::M12* v12_0 = v11->add_f_3();
  v12_0->set_f_0(s->substr(0, 5));
  v8->set_f_2(s->substr(0, 341));
  v3_1->set_f_5(0xe9e1cab);
  v3_1->set_f_7(0.754160);
  v3_1->set_f_8(Message6::M1::M3::M5::M7::E3_CONST_4);
  message->set_f_2(0x11e72f3e0c6ff);
}
void Message6_Set_3(Message6* message, std::string* s) {
  Message6::M1* v0_0 = message->add_f_5();
  v0_0->set_f_2(0x13bd0f5);
  Message6::M1::M3* v1 = v0_0->mutable_f_11();
  Message6::M1::M3::M5* v2 = v1->mutable_f_3();
  v2->set_f_0(0.254072);
  Message6::M1::M3::M5::M7* v3_0 = v2->add_f_3();
  v3_0->set_f_1(0x30);
  v3_0->set_f_7(0.157737);
  Message6::M1::M3::M5::M7::M8* v4 = v3_0->mutable_f_12();
  Message6::M1::M3::M5::M7::M8::M10* v5_0 = v4->add_f_10();
  Message6::M1::M3::M5::M7::M8::M10::M11* v6 = v5_0->mutable_f_2();
  v6->set_f_1(0x269d95a6a03099);
  Message6::M1::M3::M5::M7::M8::M10::M11::M12* v7_0 = v6->add_f_3();
  v7_0->set_f_1(Message6::M1::M3::M5::M7::M8::M10::M11::M12::E6_CONST_2);
  Message6::M1::M3::M5::M7::M8::M10::M11::M12::M13* v8_0 = v7_0->add_f_4();
  v8_0->set_f_0(0x26);
  v7_0->set_f_0(s->substr(0, 58));
  v5_0->set_f_0(Message6::M1::M3::M5::M7::M8::M10::E5_CONST_4);
  Message6::M1::M3::M5::M7::M8::M10* v5_1 = v4->add_f_10();
  Message6::M1::M3::M5::M7::M8::M10::M11* v9 = v5_1->mutable_f_2();
  v9->set_f_0(0.995871);
  Message6::M1::M3::M5::M7::M8::M10::M11::M12* v10_0 = v9->add_f_3();
  v10_0->set_f_1(Message6::M1::M3::M5::M7::M8::M10::M11::M12::E6_CONST_1);
  v10_0->set_f_0(s->substr(0, 6));
  Message6::M1::M3::M5::M7::M8::M9* v11_0 = v4->add_f_9();
  v11_0->set_f_0(Message6::M1::M3::M5::M7::M8::M9::E4_CONST_1);
  v0_0->set_f_0(0xe26cd9b39bc724);
  v0_0->set_f_3(0x2d);
}
void Message6_Set_4(Message6* message, std::string* s) {
  Message6::M1* v0_0 = message->add_f_5();
  Message6::M1::M2* v1 = v0_0->mutable_f_8();
  (void)v1;  // Suppresses clang-tidy.
  Message6::M1::M3* v2 = v0_0->mutable_f_11();
  v2->add_f_0(s->substr(0, 5));
  v2->add_f_0(s->substr(0, 4));
  v2->add_f_0(s->substr(0, 8));
  v2->add_f_0(s->substr(0, 37));
  Message6::M1::M3::M5* v3 = v2->mutable_f_3();
  v3->set_f_0(0.326377);
  Message6::M1::M3::M5::M7* v4_0 = v3->add_f_3();
  v4_0->set_f_0(s->substr(0, 4));
  Message6::M1::M3::M5::M7::M8* v5 = v4_0->mutable_f_12();
  Message6::M1::M3::M5::M7::M8::M10* v6_0 = v5->add_f_10();
  Message6::M1::M3::M5::M7::M8::M10::M11* v7 = v6_0->mutable_f_2();
  Message6::M1::M3::M5::M7::M8::M10::M11::M12* v8_0 = v7->add_f_3();
  v8_0->set_f_1(Message6::M1::M3::M5::M7::M8::M10::M11::M12::E6_CONST_4);
  v5->set_f_3(0xe22b4205105d0);
  v5->set_f_2(s->substr(0, 112));
  v5->set_f_0(0x2158);
  v4_0->set_f_7(0.197611);
  v4_0->set_f_4(0x1450);
  v4_0->set_f_2(s->substr(0, 259));
  v4_0->set_f_3(0xc923452cc1f538);
  Message6::M1::M3::M4* v9 = v2->mutable_f_2();
  v9->set_f_0(Message6::M1::M3::M4::E1_CONST_5);
  Message6::M1::M3::M4::M6* v10 = v9->mutable_f_2();
  (void)v10;  // Suppresses clang-tidy.
  v0_0->set_f_2(0x3d);
}
void Message6_Get_1(Message6* message) {
  Receive((*message).f_1());
  for (const auto& v0 : (*message).f_5()) {
    Receive(v0.f_1());
    Receive(v0.f_2());
    Receive(v0.f_0());
    const Message6::M1::M2& v1 = v0.f_8();
    Receive(v1.f_0());
    Receive(v0.f_3());
    const Message6::M1::M3& v2 = v0.f_11();
    for (int i = 0; i < v2.f_0_size(); ++i) {
      Receive(v2.f_0(i));
    }
    const Message6::M1::M3::M5& v3 = v2.f_3();
    Receive(v3.f_0());
    for (const auto& v4 : v3.f_3()) {
      const Message6::M1::M3::M5::M7::M8& v5 = v4.f_12();
      Receive(v5.f_1());
      for (const auto& v6 : v5.f_10()) {
        const Message6::M1::M3::M5::M7::M8::M10::M11& v7 = v6.f_2();
        for (const auto& v8 : v7.f_3()) {
          for (const auto& v9 : v8.f_4()) {
            Receive(v9.f_0());
          }
          Receive(v8.f_1());
          Receive(v8.f_0());
        }
        Receive(v7.f_1());
        Receive(v7.f_0());
        Receive(v6.f_0());
      }
      Receive(v5.f_3());
      Receive(v5.f_0());
      Receive(v5.f_2());
      Receive(v5.f_4());
      for (const auto& v10 : v5.f_9()) {
        Receive(v10.f_0());
      }
      Receive(v4.f_6());
      Receive(v4.f_5());
      Receive(v4.f_0());
      Receive(v4.f_7());
      Receive(v4.f_2());
      Receive(v4.f_4());
      Receive(v4.f_3());
      Receive(v4.f_1());
      Receive(v4.f_8());
    }
    const Message6::M1::M3::M4& v11 = v2.f_2();
    Receive(v11.f_0());
    const Message6::M1::M3::M4::M6& v12 = v11.f_2();
    Receive(v12.f_0());
    Receive(v0.f_4());
  }
  Receive((*message).f_0());
  Receive((*message).f_2());
}
void Message6_Get_2(Message6* message) {
  for (const auto& v0 : (*message).f_5()) {
    Receive(v0.f_3());
    Receive(v0.f_1());
    const Message6::M1::M2& v1 = v0.f_8();
    Receive(v1.f_0());
    Receive(v0.f_0());
    Receive(v0.f_2());
    const Message6::M1::M3& v2 = v0.f_11();
    const Message6::M1::M3::M4& v3 = v2.f_2();
    const Message6::M1::M3::M4::M6& v4 = v3.f_2();
    Receive(v4.f_0());
    Receive(v3.f_0());
    const Message6::M1::M3::M5& v5 = v2.f_3();
    for (const auto& v6 : v5.f_3()) {
      Receive(v6.f_2());
      Receive(v6.f_0());
      Receive(v6.f_6());
      Receive(v6.f_3());
      const Message6::M1::M3::M5::M7::M8& v7 = v6.f_12();
      Receive(v7.f_0());
      Receive(v7.f_2());
      Receive(v7.f_3());
      for (const auto& v8 : v7.f_9()) {
        Receive(v8.f_0());
      }
      Receive(v7.f_4());
      for (const auto& v9 : v7.f_10()) {
        const Message6::M1::M3::M5::M7::M8::M10::M11& v10 = v9.f_2();
        Receive(v10.f_0());
        for (const auto& v11 : v10.f_3()) {
          Receive(v11.f_1());
          for (const auto& v12 : v11.f_4()) {
            Receive(v12.f_0());
          }
          Receive(v11.f_0());
        }
        Receive(v10.f_1());
        Receive(v9.f_0());
      }
      Receive(v7.f_1());
      Receive(v6.f_7());
      Receive(v6.f_1());
      Receive(v6.f_5());
      Receive(v6.f_8());
      Receive(v6.f_4());
    }
    Receive(v5.f_0());
    for (int i = 0; i < v2.f_0_size(); ++i) {
      Receive(v2.f_0(i));
    }
    Receive(v0.f_4());
  }
  Receive((*message).f_2());
  Receive((*message).f_1());
  Receive((*message).f_0());
}
void Message6_Get_3(Message6* message) {
  Receive((*message).f_2());
  Receive((*message).f_1());
  Receive((*message).f_0());
  for (const auto& v0 : (*message).f_5()) {
    Receive(v0.f_1());
    const Message6::M1::M2& v1 = v0.f_8();
    Receive(v1.f_0());
    Receive(v0.f_2());
    const Message6::M1::M3& v2 = v0.f_11();
    const Message6::M1::M3::M4& v3 = v2.f_2();
    const Message6::M1::M3::M4::M6& v4 = v3.f_2();
    Receive(v4.f_0());
    Receive(v3.f_0());
    const Message6::M1::M3::M5& v5 = v2.f_3();
    for (const auto& v6 : v5.f_3()) {
      Receive(v6.f_0());
      const Message6::M1::M3::M5::M7::M8& v7 = v6.f_12();
      Receive(v7.f_0());
      Receive(v7.f_1());
      Receive(v7.f_4());
      Receive(v7.f_2());
      Receive(v7.f_3());
      for (const auto& v8 : v7.f_9()) {
        Receive(v8.f_0());
      }
      for (const auto& v9 : v7.f_10()) {
        const Message6::M1::M3::M5::M7::M8::M10::M11& v10 = v9.f_2();
        for (const auto& v11 : v10.f_3()) {
          for (const auto& v12 : v11.f_4()) {
            Receive(v12.f_0());
          }
          Receive(v11.f_1());
          Receive(v11.f_0());
        }
        Receive(v10.f_1());
        Receive(v10.f_0());
        Receive(v9.f_0());
      }
      Receive(v6.f_2());
      Receive(v6.f_4());
      Receive(v6.f_8());
      Receive(v6.f_6());
      Receive(v6.f_5());
      Receive(v6.f_7());
      Receive(v6.f_3());
      Receive(v6.f_1());
    }
    Receive(v5.f_0());
    for (int i = 0; i < v2.f_0_size(); ++i) {
      Receive(v2.f_0(i));
    }
    Receive(v0.f_4());
    Receive(v0.f_0());
    Receive(v0.f_3());
  }
}
void Message6_Get_4(Message6* message) {
  for (const auto& v0 : (*message).f_5()) {
    Receive(v0.f_2());
    const Message6::M1::M3& v1 = v0.f_11();
    for (int i = 0; i < v1.f_0_size(); ++i) {
      Receive(v1.f_0(i));
    }
    const Message6::M1::M3::M5& v2 = v1.f_3();
    for (const auto& v3 : v2.f_3()) {
      Receive(v3.f_1());
      Receive(v3.f_3());
      Receive(v3.f_2());
      Receive(v3.f_7());
      Receive(v3.f_0());
      Receive(v3.f_5());
      Receive(v3.f_4());
      const Message6::M1::M3::M5::M7::M8& v4 = v3.f_12();
      Receive(v4.f_4());
      Receive(v4.f_3());
      Receive(v4.f_0());
      Receive(v4.f_2());
      for (const auto& v5 : v4.f_9()) {
        Receive(v5.f_0());
      }
      Receive(v4.f_1());
      for (const auto& v6 : v4.f_10()) {
        Receive(v6.f_0());
        const Message6::M1::M3::M5::M7::M8::M10::M11& v7 = v6.f_2();
        Receive(v7.f_1());
        Receive(v7.f_0());
        for (const auto& v8 : v7.f_3()) {
          Receive(v8.f_0());
          for (const auto& v9 : v8.f_4()) {
            Receive(v9.f_0());
          }
          Receive(v8.f_1());
        }
      }
      Receive(v3.f_8());
      Receive(v3.f_6());
    }
    Receive(v2.f_0());
    const Message6::M1::M3::M4& v10 = v1.f_2();
    const Message6::M1::M3::M4::M6& v11 = v10.f_2();
    Receive(v11.f_0());
    Receive(v10.f_0());
    Receive(v0.f_1());
    Receive(v0.f_0());
    Receive(v0.f_3());
    Receive(v0.f_4());
    const Message6::M1::M2& v12 = v0.f_8();
    Receive(v12.f_0());
  }
  Receive((*message).f_0());
  Receive((*message).f_2());
  Receive((*message).f_1());
}
}  // namespace fleetbench::proto
