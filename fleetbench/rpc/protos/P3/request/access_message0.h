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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P3/request/Message0.pb.h"

namespace fleetbench::rpc::P3::request::Message0 {
inline void Message0_Set_1(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_2();
  (void)v0;  // Suppresses clang-tidy.
  Message0::M2* v1_0 = message->add_f_3();
  Message0::M2::M6* v2 = v1_0->mutable_f_3();
  (void)v2;  // Suppresses clang-tidy.
  Message0::M2::M3* v3 = v1_0->mutable_f_2();
  Message0::M2::M3::M8* v4_0 = v3->add_f_3();
  Message0::M2::M3::M8::M16* v5 = v4_0->mutable_f_2();
  v5->set_f_0(0x6f);
  v1_0->set_f_0(0x375c9c8c61a);
}
inline void Message0_Set_2(Message0* message, std::string* s) {
  Message0::M2* v0_0 = message->add_f_3();
  Message0::M2::M3* v1 = v0_0->mutable_f_2();
  Message0::M2::M3::M7* v2 = v1->mutable_f_2();
  v2->set_f_0(0x2127);
  Message0::M2::M6* v3 = v0_0->mutable_f_3();
  (void)v3;  // Suppresses clang-tidy.
}
inline void Message0_Set_3(Message0* message, std::string* s) {
  Message0::M2* v0_0 = message->add_f_3();
  Message0::M2::M6* v1 = v0_0->mutable_f_3();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 1));
}
inline void Message0_Set_4(Message0* message, std::string* s) {
  Message0::M1* v0 = message->mutable_f_2();
  v0->set_f_0(s->substr(0, 2));
  Message0::M1::M4* v1 = v0->mutable_f_2();
  (void)v1;  // Suppresses clang-tidy.
  message->set_f_0(s->substr(0, 56));
}
const int kMessage0MaxProtoSetters = 4;
inline void Message0_Set(const int i, Message0* message, std::string* s) {
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
}  // namespace fleetbench::rpc::P3::request::Message0

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P3_REQUEST_ACCESS_MESSAGE0_H_
