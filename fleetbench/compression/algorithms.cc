// Copyright 2023 The Fleetbench Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "fleetbench/compression/algorithms.h"

#include <string>

#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/string_view.h"
#include "snappy.h"
#include "zstd.h"

namespace fleetbench {
namespace compression {

size_t ZstdCompressor::Compress(const absl::string_view input,
                                std::string* output, int compression_level) {
  size_t output_size = MaxCompressedSize(input.size());
  output->resize(output_size);
  size_t final_size = ZSTD_compress(output->data(), output_size, input.data(),
                                    input.size(), compression_level);
  QCHECK(!ZSTD_isError(final_size))
      << "Error compressing: " << ZSTD_getErrorName(final_size);
  output->resize(final_size);
  return final_size;
}

bool ZstdCompressor::Decompress(const absl::string_view input,
                                std::string* output) {
  size_t output_size = ZSTD_getDecompressedSize(input.data(), input.size());
  if (!output_size) {
    LOG(ERROR) << "Error decompressing: no valid output size";
    return false;
  }
  output->resize(output_size);
  size_t final_size =
      ZSTD_decompress(output->data(), output_size, input.data(), input.size());
  if (ZSTD_isError(final_size)) {
    LOG(ERROR) << "Error decompressing: " << ZSTD_getErrorName(final_size);
    return false;
  }
  return true;
}

size_t ZstdCompressor::MaxCompressedSize(size_t input_size) const {
  size_t max_size = ZSTD_compressBound(input_size);
  QCHECK(!ZSTD_isError(max_size))
      << "Error compressing: " << ZSTD_getErrorName(max_size);
  return max_size;
}

size_t SnappyCompressor::Compress(const absl::string_view input,
                                 std::string* output, int compression_level) {
  return snappy::Compress(input.data(), input.size(), output);
}
bool SnappyCompressor::Decompress(const absl::string_view input,
                                 std::string* output) {
  return snappy::Uncompress(input.data(), input.size(), output);
}

}  // namespace compression
}  // namespace fleetbench