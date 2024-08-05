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

#ifndef THIRD_PARTY_FLEETBENCH_RPC_UTIL_H_
#define THIRD_PARTY_FLEETBENCH_RPC_UTIL_H_

#include "absl/status/status.h"
#include "absl/strings/string_view.h"
#include "google/protobuf/message.h"

namespace fleetbench::rpc {

// Parse a protocol buffer message passed in as "arg_spec" into the message
// pointed to by "parsed".
//
// "arg_spec" may be either:
// 1. A text-proto string describing a protobuf message,
// 2. A filename containing a text-proto formatted protobuf message,
// 3. A filename containing a binary formatted protobuf message.
//
// It is expected that the format of the protobuf in "arg_spec" matches the
// underlying concrete type of "parsed".
//
// "what" is used as an identifying string for more informative log and error
// messages - it is the type and/or reason we're parsing this protobuf.
absl::Status ParseProto(google::protobuf::Message* parsed, absl::string_view arg_spec,
                        absl::string_view what);

}  // namespace fleetbench::rpc

#endif  // THIRD_PARTY_FLEETBENCH_RPC_UTIL_H_
