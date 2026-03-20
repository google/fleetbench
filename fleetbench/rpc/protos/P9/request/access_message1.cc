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
#include "fleetbench/rpc/protos/P9/request/access_message1.h"

namespace fleetbench::rpc::P9::request::Message1 {
void Message1_Set_1(Message1* message, std::string* s) {
  Message1::M1* v0 = message->mutable_f_6();
  v0->set_f_3(0x7596b2e1);
  v0->set_f_2(0x341e0d90);
  v0->set_f_0(0x11f2d0);
}
void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_0(0x4e30dfdbc84755);
}
void Message1_Set_3(Message1* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
}
void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_0(0xfeb567218b4442);
}
void Message1_Set(const int i, Message1* message, std::string* s) {
  CHECK(i < kMessage1MaxProtoSetters) << "Invalid i";
  switch (i) {
    case 0:
      Message1_Set_1(message, s);
      break;
    case 1:
      Message1_Set_2(message, s);
      break;
    case 2:
      Message1_Set_3(message, s);
      break;
    case 3:
      Message1_Set_4(message, s);
      break;
    default:
      break;
  }
}
}  // namespace fleetbench::rpc::P9::request::Message1
