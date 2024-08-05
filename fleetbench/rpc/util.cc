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

#include "fleetbench/rpc/util.h"

#include <fcntl.h>

#include "absl/log/log.h"
#include "absl/status/status.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "google/protobuf/io/zero_copy_stream_impl.h"
#include "google/protobuf/message.h"
#include "google/protobuf/text_format.h"

namespace fleetbench::rpc {

absl::Status ParseProto(google::protobuf::Message* parsed, absl::string_view arg_spec,
                        absl::string_view what) {
  if (!arg_spec.empty()) {
    // First try as if string contains text-based protobuf.
    LOG(INFO) << "Parsing " << arg_spec
              << " as if it were an inline text-proto for " << what;
    if (google::protobuf::TextFormat::ParseFromString(arg_spec, parsed)) {
      LOG(INFO) << "Successfully parsed text-proto string for " << what;
      return absl::OkStatus();
    } else {
      LOG(INFO) << "Could not parse " << arg_spec
                << " as an inline text-proto for " << what;
    }

    // Next try opening the file

    // this is null-terminated since it
    // comes from a std::string flag
    auto fd = open(arg_spec.data(), O_RDONLY);
    if (fd < 0) {
      LOG(INFO) << "Unable to open file " << arg_spec << " for " << what;
    } else {
      google::protobuf::io::FileInputStream infile(fd);

      // Next try as if it's a file containing a text-protobuf.
      LOG(INFO) << "Parsing " << arg_spec << " as a text-proto file for "
                << what;

      if (google::protobuf::TextFormat::Parse(&infile, parsed)) {
        LOG(INFO) << "Successfully parsed text-proto file for " << what;
        return absl::OkStatus();
      } else {
        LOG(INFO) << "Could not parse " << arg_spec
                  << " as a test-proto file for " << what;
      }
    }
  }
  return absl::InvalidArgumentError(
      absl::StrCat("Unable to parse proto [", arg_spec, "] for ", what));
}

}  // namespace fleetbench::rpc
