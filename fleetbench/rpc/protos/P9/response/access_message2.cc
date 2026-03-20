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
#include "fleetbench/rpc/protos/P9/response/access_message2.h"

namespace fleetbench::rpc::P9::response::Message2 {
void Message2_Set_1(Message2* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
}
void Message2_Set_2(Message2* message, std::string* s) {
  message->set_f_0(0xa7a8ba51);
}
void Message2_Set_3(Message2* message, std::string* s) {
  message->set_f_0(0x133dd8);
}
void Message2_Set_4(Message2* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
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
}  // namespace fleetbench::rpc::P9::response::Message2
