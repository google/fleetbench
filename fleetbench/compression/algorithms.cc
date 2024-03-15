
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
#include "absl/strings/string_view.h"
#include "c/include/brotli/decode.h"
#include "c/include/brotli/encode.h"
#include "snappy.h"
#include "fleetbench/compression/zlibwrapper.h"
#include "zstd.h"

namespace fleetbench {
namespace compression {

size_t ZDelete(ZSTD_CCtx* ptr) { return ZSTD_freeCCtx(ptr); }
size_t ZDelete(ZSTD_DCtx* ptr) { return ZSTD_freeDCtx(ptr); }

ZstdCompressor::ZstdCompressor(int compression_level, int window_log)
    : cctx_(ZSTD_createCCtx()), dctx_(ZSTD_createDCtx()) {
  // Set compression parameters.
  ZSTD_CCtx_setParameter(cctx_.get(), ZSTD_c_compressionLevel,
                         compression_level);
  ZSTD_CCtx_setParameter(cctx_.get(), ZSTD_c_windowLog, window_log);
}

size_t ZstdCompressor::Compress(const absl::string_view input,
                                std::string* output) {
  size_t output_size = MaxCompressedSize(input.size());
  output->resize(output_size);
  size_t final_size = ZSTD_compress2(
      cctx_.get(), output->data(), output->size(), input.data(), input.size());
  QCHECK(!ZSTD_isError(final_size))
      << "Error compressing: " << ZSTD_getErrorName(final_size);
  output->resize(final_size);
  return final_size;
}

bool ZstdCompressor::Decompress(const absl::string_view input,
                                std::string* output) {
  size_t output_size = ZSTD_getDecompressedSize(input.data(), input.size());
  QCHECK(output_size) << "Error decompressing: no valid output size";

  output->resize(output_size);
  size_t final_size = ZSTD_decompressDCtx(
      dctx_.get(), output->data(), output_size, input.data(), input.size());
  QCHECK(!ZSTD_isError(final_size))
      << "Error decompressing: " << ZSTD_getErrorName(final_size);
  return true;
}

size_t ZstdCompressor::MaxCompressedSize(size_t input_size) const {
  size_t max_size = ZSTD_compressBound(input_size);
  QCHECK(!ZSTD_isError(max_size))
      << "Error compressing: " << ZSTD_getErrorName(max_size);
  return max_size;
}

size_t SnappyCompressor::Compress(const absl::string_view input,
                                 std::string* output) {
  return snappy::Compress(input.data(), input.size(), output);
}
bool SnappyCompressor::Decompress(const absl::string_view input,
                                 std::string* output) {
  return snappy::Uncompress(input.data(), input.size(), output);
}

ZLibCompressor::ZLibCompressor(int compression_level, int window_log)
    : compression_level_(compression_level), window_log_(window_log) {}

size_t ZLibCompressor::Compress(const absl::string_view input,
                                std::string* output) {
  ZLib zlib;
  zlib.SetCompressionLevel(compression_level_);
  zlib.SetCompressionWindowSizeInBits(window_log_);
  // We use a gzip header, so that we can get the size of the uncompressed data
  // in Decompress().
  zlib.SetGzipHeaderMode();

  auto compressed_length = ZLib::MinCompressbufSize(input.size());
  output->resize(compressed_length);
  int status =
      zlib.Compress(reinterpret_cast<Bytef*>(&(*output)[0]), &compressed_length,
                    reinterpret_cast<const Bytef*>(input.data()), input.size());
  QCHECK(status == Z_OK) << "Error compressing: " << status << output;

  output->resize(compressed_length);
  return output->size();
}

bool ZLibCompressor::Decompress(const absl::string_view input,
                                std::string* output) {
  ZLib zlib;
  zlib.SetCompressionWindowSizeInBits(window_log_);
  zlib.SetGzipHeaderMode();

  auto uncompressed_length =
      zlib.GzipUncompressedLength((const uint8_t*)input.data(), input.size());
  output->resize(uncompressed_length);
  int status = zlib.Uncompress(
      reinterpret_cast<Bytef*>(&(*output)[0]), &uncompressed_length,
      reinterpret_cast<const Bytef*>(input.data()), input.size());
  output->resize(uncompressed_length);

  return (status == Z_OK);
}

BrotliCompressor::BrotliCompressor(int compression_level, int window_log)
    : compression_level_(compression_level), window_log_(window_log) {}

size_t BrotliCompressor::Compress(absl::string_view input,
                                  std::string* output) {
  output->clear();

  BrotliEncoderState* state =
      BrotliEncoderCreateInstance(nullptr, nullptr, nullptr);
  QCHECK(state != nullptr) << "Error creating BrotliEncoderState";
  QCHECK(BrotliEncoderSetParameter(state, BROTLI_PARAM_QUALITY,
                                   compression_level_) == BROTLI_TRUE)
      << "Error setting compression level";
  QCHECK(BrotliEncoderSetParameter(state, BROTLI_PARAM_LGWIN, window_log_) ==
         BROTLI_TRUE)
      << "Error setting window size";
  QCHECK(BrotliEncoderSetParameter(state, BROTLI_PARAM_SIZE_HINT,
                                   input.size()) == BROTLI_TRUE)
      << "Error setting size hint";

  size_t available_in, available_out = 0;
  BROTLI_BOOL result = BROTLI_TRUE;
  while (!input.empty() && result) {
    available_in = input.size();
    const uint8_t* next_in = reinterpret_cast<const uint8_t*>(input.data());
    result = BrotliEncoderCompressStream(state, BROTLI_OPERATION_PROCESS,
                                         &available_in, &next_in,
                                         &available_out, nullptr, nullptr);
    size_t buffer_size = 0;
    const uint8_t* buffer = BrotliEncoderTakeOutput(state, &buffer_size);
    if (buffer_size > 0) {
      output->append(reinterpret_cast<const char*>(buffer), buffer_size);
    }
    input.remove_prefix(input.size() - available_in);
  }
  while (result && !BrotliEncoderIsFinished(state)) {
    available_in = 0;
    const uint8_t* next_in = nullptr;
    result = BrotliEncoderCompressStream(state, BROTLI_OPERATION_FINISH,
                                         &available_in, &next_in,
                                         &available_out, nullptr, nullptr);
    size_t buffer_size = 0;
    const uint8_t* buffer = BrotliEncoderTakeOutput(state, &buffer_size);
    if (buffer_size > 0) {
      output->append(reinterpret_cast<const char*>(buffer), buffer_size);
    }
  }
  BrotliEncoderDestroyInstance(state);
  QCHECK(result) << "Error compressing: " << result << output;

  return output->size();
}

bool BrotliCompressor::Decompress(absl::string_view input,
                                  std::string* output) {
  output->clear();
  BrotliDecoderState* state =
      BrotliDecoderCreateInstance(nullptr, nullptr, nullptr);
  QCHECK(state != nullptr) << "Error creating BrotliDecoderState";

  size_t available_in, available_out = 0;
  BrotliDecoderResult result = BROTLI_DECODER_RESULT_SUCCESS;
  while (!input.empty() && result != BROTLI_DECODER_RESULT_ERROR) {
    available_in = input.size();
    const uint8_t* next_in = reinterpret_cast<const uint8_t*>(input.data());
    result = BrotliDecoderDecompressStream(state, &available_in, &next_in,
                                           &available_out, nullptr, nullptr);
    input.remove_prefix(input.size() - available_in);
    size_t buffer_size = 0;
    const uint8_t* buffer = BrotliDecoderTakeOutput(state, &buffer_size);
    if (buffer_size > 0) {
      output->append(reinterpret_cast<const char*>(buffer), buffer_size);
    } else if (result == BROTLI_DECODER_RESULT_SUCCESS) {
      // Decoding is finished and all output is pushed.
      break;
    }
  }
  while (result == BROTLI_DECODER_RESULT_NEEDS_MORE_OUTPUT) {
    available_in = 0;
    const uint8_t* next_in = nullptr;
    result = BrotliDecoderDecompressStream(state, &available_in, &next_in,
                                           &available_out, nullptr, nullptr);
    size_t buffer_size = 0;
    const uint8_t* buffer = BrotliDecoderTakeOutput(state, &buffer_size);
    if (buffer_size > 0) {
      output->append(reinterpret_cast<const char*>(buffer), buffer_size);
    }
  }
  BrotliDecoderDestroyInstance(state);

  return result == BROTLI_DECODER_RESULT_SUCCESS && input.empty();
}

}  // namespace compression
}  // namespace fleetbench
