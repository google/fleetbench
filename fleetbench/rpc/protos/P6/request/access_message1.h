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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P6/request/Message1.pb.h"

namespace fleetbench::rpc::P6::request::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_4(s->substr(0, 25));
  message->set_f_17(0x18aba0);
  message->add_f_1(s->substr(0, 60));
  message->add_f_1(s->substr(0, 1));
  message->add_f_1(s->substr(0, 19));
  message->add_f_1(s->substr(0, 5));
  message->add_f_8(Message1::E3_CONST_5);
  message->set_f_14(0x1b9d39);
  message->add_f_7(Message1::E2_CONST_5);
  message->set_f_18(0x37422385);
  message->set_f_19(s->substr(0, 4));
  message->set_f_13(0x1935b448);
  message->set_f_5(0xbc0c6b7);
  message->set_f_16(s->substr(0, 35));
  message->set_f_11(0xbcfe2);
  message->set_f_2(0x42fcabcd);
  message->add_f_0(Message1::E1_CONST_4);
  Message1::M1* v0 = message->mutable_f_25();
  (void)v0;  // Suppresses clang-tidy.
  message->set_f_15(true);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_13(0x1030fc3c);
  message->set_f_15(false);
  message->set_f_6(0x562071f);
  message->set_f_16(s->substr(0, 25));
  Message1::M2* v0 = message->mutable_f_26();
  v0->set_f_1(0x1d5ce923);
  v0->set_f_2(0x639e32a0);
  v0->set_f_3(false);
  v0->set_f_4(true);
  message->set_f_11(0x4857446);
  message->add_f_12(s->substr(0, 2));
  message->add_f_12(s->substr(0, 5));
  message->add_f_12(s->substr(0, 2));
  message->add_f_12(s->substr(0, 1));
  message->set_f_2(0x6c97a19);
  message->set_f_9(false);
  message->set_f_14(0x190ac9);
  message->set_f_10(s->substr(0, 26));
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_10(s->substr(0, 115));
  message->add_f_7(Message1::E2_CONST_5);
  message->set_f_4(s->substr(0, 26));
  message->set_f_2(0x4b270d5b);
  message->set_f_18(0x17f3445b);
  message->set_f_9(false);
  message->set_f_5(0x1beb6b);
  message->set_f_11(0x18c7347);
  message->set_f_13(0x465570d);
  message->set_f_19(s->substr(0, 1));
  message->add_f_3(s->substr(0, 4));
  message->add_f_3(s->substr(0, 2));
  message->add_f_3(s->substr(0, 86));
  message->add_f_3(s->substr(0, 17));
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_15(true);
  message->set_f_11(0x603d8);
  message->set_f_19(s->substr(0, 2));
  message->set_f_10(s->substr(0, 33));
  message->set_f_14(0x112c86);
  message->set_f_13(0x64c4dae9);
  message->set_f_16(s->substr(0, 48));
  Message1::M2* v0 = message->mutable_f_26();
  v0->set_f_2(0x15e13d22);
  v0->set_f_3(false);
  message->set_f_18(0x3989ba54);
  message->set_f_2(0x67d0915e);
  message->set_f_17(0x62288e);
  message->set_f_6(0x41);
}
const int kMessage1MaxProtoSetters = 4;
inline void Message1_Set(const int i, Message1* message, std::string* s) {
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
}  // namespace fleetbench::rpc::P6::request::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P6_REQUEST_ACCESS_MESSAGE1_H_
