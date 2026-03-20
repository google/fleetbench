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
#include "fleetbench/rpc/protos/P9/response/access_message0.h"

namespace fleetbench::rpc::P9::response::Message0 {
void Message0_Set_1(Message0* message, std::string* s) {
  message->set_f_1(0x20e0);
  message->set_f_0(s->substr(0, 9));
}
void Message0_Set_2(Message0* message, std::string* s) {
  message->set_f_1(0x612f1);
}
void Message0_Set_3(Message0* message, std::string* s) {
  message->set_f_1(0x36a2);
}
void Message0_Set_4(Message0* message, std::string* s) {
  message->set_f_0(s->substr(0, 54));
}
void Message0_Set(const int i, Message0* message, std::string* s) {
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
}  // namespace fleetbench::rpc::P9::response::Message0
