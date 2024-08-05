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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE1_H_
#define THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE1_H_

#include <string>

#include "absl/log/check.h"
#include "fleetbench/rpc/protos/P4/response/Message1.pb.h"

namespace fleetbench::rpc::P4::response::Message1 {
inline void Message1_Set_1(Message1* message, std::string* s) {
  message->set_f_1(0x5e);
  message->set_f_7(0.751251);
  message->set_f_16(0.118919);
  message->set_f_15(s->substr(0, 8));
  message->set_f_6(0x2a847fe0252ae763);
  message->set_f_9(0.258835);
  message->set_f_22(0x2d9fc98922e223fb);
  message->set_f_23(0x4f4910ae2bfc8e18);
  message->set_f_13(0x75);
  message->set_f_17(0.776890);
  message->set_f_19(0x18a85137aff808b2);
  message->set_f_0(0.692461);
  message->set_f_11(0.131967);
  message->set_f_2(0x54);
  message->set_f_21(0.204124);
  message->set_f_4(0.100799);
  message->set_f_14(0.011496);
  message->set_f_20(0x38);
  message->set_f_3(0x3783);
  message->set_f_10(0.659565);
  message->set_f_8(0.086754);
  message->set_f_18(0x505f9b2ec7393182);
  message->set_f_5(0.253138);
}
inline void Message1_Set_2(Message1* message, std::string* s) {
  message->set_f_5(0.115882);
  message->set_f_17(0.673459);
  message->set_f_11(0.254218);
  message->set_f_12(s->substr(0, 7));
  message->set_f_10(0.199485);
  message->set_f_3(0x3a);
  message->set_f_8(0.132566);
  message->set_f_9(0.835622);
  message->set_f_1(0x25);
  message->set_f_15(s->substr(0, 31));
  message->set_f_4(0.599420);
  message->set_f_16(0.933964);
  message->set_f_2(0x62);
  message->set_f_22(0x42d78383f4925131);
  message->set_f_21(0.591016);
  message->set_f_20(0x2a);
}
inline void Message1_Set_3(Message1* message, std::string* s) {
  message->set_f_16(0.086653);
  message->set_f_19(0x19acc38780c1c894);
  message->set_f_11(0.326164);
  message->set_f_9(0.758576);
  message->set_f_5(0.051161);
  message->set_f_0(0.506814);
  message->set_f_23(0x19c306ea97023c5f);
  message->set_f_21(0.865369);
  message->set_f_18(0x36b70b166ceeb2be);
  message->set_f_8(0.608448);
  message->set_f_22(0x667376366cf99492);
  message->set_f_15(s->substr(0, 22));
  message->set_f_6(0x61ebd3c1182dac0);
  message->set_f_4(0.204608);
  message->set_f_12(s->substr(0, 4));
  message->set_f_20(0x12);
  message->set_f_7(0.394968);
  message->set_f_2(0x27b6);
  message->set_f_14(0.271859);
  message->set_f_1(0x78);
  message->set_f_13(0x77);
  (void)message;  // Suppresses clang-tidy.
}
inline void Message1_Set_4(Message1* message, std::string* s) {
  message->set_f_18(0x709733144cc602d8);
  message->set_f_5(0.169422);
  message->set_f_19(0x3f73321d29cce3e0);
  message->set_f_9(0.959341);
  message->set_f_16(0.497383);
  message->set_f_6(0x759d7688aec57636);
  message->set_f_14(0.272779);
  message->set_f_17(0.102142);
  message->set_f_4(0.743418);
  message->set_f_13(0x62);
  message->set_f_2(0x79a61);
  message->set_f_0(0.776343);
  message->set_f_23(0x7d666b1d79a432c7);
  message->set_f_8(0.344954);
  message->set_f_1(0x39);
  message->set_f_3(0x7e);
  message->set_f_7(0.999286);
  message->set_f_10(0.756798);
  message->set_f_11(0.495782);
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
}  // namespace fleetbench::rpc::P4::response::Message1

#endif  // THIRD_PARTY_FLEETBENCH_RPC_PROTOS_P4_RESPONSE_ACCESS_MESSAGE1_H_
