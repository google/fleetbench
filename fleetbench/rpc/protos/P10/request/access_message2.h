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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE2_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE2_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P10/request/Message2.pb.h"

namespace fleetbench::rpc::P10::request::Message2 {
inline void Message2_Set_1(Message2* message, std::string* s) {
  Message2::M2* v0_0 = message->add_f_6();
  v0_0->set_f_0(0x4a);
  message->set_f_1(0xeb707);
  message->set_f_0(0x61d4228a0);
  message->set_f_2(0x1305d5);
}
inline void Message2_Set_2(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_5();
  v0_0->set_f_0(s->substr(0, 28));
  message->set_f_0(0xef746f82b723ee);
  message->set_f_1(0x4a2e80);
  Message2::M2* v1_0 = message->add_f_6();
  v1_0->set_f_0(0x5d);
}
inline void Message2_Set_3(Message2* message, std::string* s) {
  (void)message;  // Suppresses clang-tidy.
}
inline void Message2_Set_4(Message2* message, std::string* s) {
  Message2::M1* v0_0 = message->add_f_5();
  (void)v0_0;  // Suppresses clang-tidy.
  Message2::M1* v0_1 = message->add_f_5();
  (void)v0_1;  // Suppresses clang-tidy.
  message->set_f_1(0x3b);
}
const int kMessage2MaxProtoSetters = 4;
inline void Message2_Set(const int i, Message2* message, std::string* s) {
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
}  // namespace fleetbench::rpc::P10::request::Message2

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P10_REQUEST_ACCESS_MESSAGE2_H_
