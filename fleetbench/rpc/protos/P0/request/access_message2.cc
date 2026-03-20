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


#include <string>
#include "fleetbench/rpc/protos/P0/request/access_message2.h"

namespace fleetbench::rpc::P0::request::Message2 {
void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_2();
  (void)v0_0;  // Suppresses clang-tidy.
  Message2::M1* v0_1 = message->add_f_2();
  v0_1->set_f_0(0x21);
  Message2::M2* v1 = message->mutable_f_3();
  v1->set_f_0(s->substr(0, 7));
  message->set_f_0(0.614644);
}
void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_2();
  v0_0->set_f_0(0x4d);
  Message2::M1* v0_1 = message->add_f_2();
  v0_1->set_f_0(0x5e);
  Message2::M2* v1 = message->mutable_f_3();
  v1->set_f_0(s->substr(0, 6));
  message->set_f_0(0.691690);
}
void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_0(0.905649);
  Message2::M2* v0 = message->mutable_f_3();
  (void)v0;  // Suppresses clang-tidy.
  Message2::M1* v1_0 = message->add_f_2();
  v1_0->set_f_0(0x3963);
  Message2::M1* v1_1 = message->add_f_2();
  v1_1->set_f_0(0x2b);
}
void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M2* v0 = message->mutable_f_3();
  (void)v0;  // Suppresses clang-tidy.
  Message2::M1* v1_0 = message->add_f_2();
  v1_0->set_f_0(0x3ccc);
  Message2::M1* v1_1 = message->add_f_2();
  v1_1->set_f_0(0x38);
  message->set_f_0(0.171460);
}
void Message2_Set(const int i, Message2* message, std::string* s) {
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
}  // namespace fleetbench::rpc::P0::request::Message2
