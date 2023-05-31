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

#include <cstddef>
#include <cstdlib>
#include <filesystem>  // NOLINT
#include <fstream>
#include <ios>
#include <iterator>
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "tools/cpp/runfiles/runfiles.h"
#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/compression/algorithms.h"

using bazel::tools::cpp::runfiles::Runfiles;

namespace fleetbench {
namespace compression {

namespace {
bool GetContents(const std::string& file_path, std::string* output) {
  std::ifstream file(file_path.c_str(), std::ios::binary);
  if (!file.good()) {
    return false;
  }
  std::string content((std::istreambuf_iterator<char>(file)),
                      std::istreambuf_iterator<char>());
  *output = std::move(content);
  return true;
}

// Reads all files under a given "file_path" directory and returns as a vector
std::vector<std::string> GetCorpora(const absl::string_view file_path) {
  //github.com/bazelbuild/bazel/blob/master/tools/cpp/runfiles/runfiles_src.h
  std::string error;
  const char* program_path = std::getenv("FLEETBENCH_PROGRAM_PATH");
  std::unique_ptr<Runfiles> runfiles(Runfiles::Create(program_path, &error));
  if (runfiles == nullptr)
    LOG(FATAL) << "Can't find runfile directory: " << error;
  std::string path = runfiles->Rlocation(std::string(file_path));
  const std::filesystem::path sandbox{path};
  std::vector<std::string> corpora;
  for (auto const& dir_entry : std::filesystem::directory_iterator{sandbox}) {
    std::string corpus;
    CHECK(GetContents(dir_entry.path(), &corpus));
    corpora.push_back(corpus);
  }
  return corpora;
}

namespace CompressorFactory {

std::unique_ptr<Compressor> CreateCompressor(
    const absl::string_view compressor_type) {
  if (compressor_type == "Snappy") {
    return std::make_unique<SnappyCompressor>();
  } else if (compressor_type == "ZSTD") {
    return std::make_unique<ZstdCompressor>();
  } else {
    LOG(FATAL) << "Unknown compressor type: " << compressor_type;
    return nullptr;
  }
}
}  // namespace CompressorFactory

}  // namespace

static constexpr absl::string_view kCorporaPath =
    "com_google_fleetbench/fleetbench/compression/corpora/";

template <class... Args>
static void BM_Compress(benchmark::State& state, Args&&... args) {
  auto args_tuple = std::make_tuple(std::move(args)...);

  std::string compressor_type = std::get<0>(args_tuple);
  auto compressor = CompressorFactory::CreateCompressor(compressor_type);

  auto distributions = std::get<1>(args_tuple);
  const auto& binary_directory = distributions[state.range(0)];
  std::string file_path = absl::StrCat(kCorporaPath, binary_directory);

  int compression_level = 0;
  if (compressor_type == "ZSTD") {
    compression_level = state.range(1);
  }

  // Read in benchmark corpus
  auto corpora = GetCorpora(file_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (auto _ : state) {
    //  Compress file
    for (size_t i = 0; i < corpora.size(); i++) {
      benchmark::DoNotOptimize(
          compressor->Compress(corpora[i], &compressed[i], compression_level));
    }
  }
  // Decompress file and check correctness
  for (size_t i = 0; i < compressed.size(); i++) {
    compressor->Decompress(compressed[i], &decompressed[i]);
    CHECK_EQ(corpora[i], decompressed[i]);
  }

  state.SetLabel(absl::StrCat(binary_directory));
}

template <class... Args>
static void BM_Decompress(benchmark::State& state, Args&&... args) {
  auto args_tuple = std::make_tuple(std::move(args)...);

  std::string compressor_type = std::get<0>(args_tuple);
  auto compressor = CompressorFactory::CreateCompressor(compressor_type);

  auto distributions = std::get<1>(args_tuple);
  const auto& binary_directory = distributions[state.range(0)];
  std::string file_path = absl::StrCat(kCorporaPath, binary_directory);

  int compression_level = 0;
  if (compressor_type == "ZSTD") {
    compression_level = state.range(1);
  }

  // Read in benchmark corpus
  auto corpora = GetCorpora(file_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (size_t i = 0; i < corpora.size(); i++) {
    compressor->Compress(corpora[i], &compressed[i], compression_level);
  }

  for (auto _ : state) {
    for (size_t i = 0; i < compressed.size(); i++) {
      benchmark::DoNotOptimize(
          compressor->Decompress(compressed[i], &decompressed[i]));
    }
  }
  for (size_t i = 0; i < decompressed.size(); i++) {
    CHECK_EQ(corpora[i], decompressed[i]);
  }

  state.SetLabel(absl::StrCat(binary_directory));
}

absl::Span<const absl::string_view> SnappyCompressDistributions() {
  static constexpr absl::string_view kDistributions[] = {
      "Snappy-COMPRESS-A", "Snappy-COMPRESS-B", "Snappy-COMPRESS-C",
      "Snappy-COMPRESS-D", "Snappy-COMPRESS-F", "Snappy-COMPRESS-L",
      "Snappy-COMPRESS-M", "Snappy-COMPRESS-P", "Snappy-COMPRESS-S",
      "Snappy-COMPRESS-U",
  };
  return kDistributions;
}

absl::Span<const absl::string_view> SnappyDecompressDistributions() {
  static constexpr absl::string_view kDistributions[] = {
      "Snappy-DECOMPRESS-A", "Snappy-DECOMPRESS-B", "Snappy-DECOMPRESS-C",
      "Snappy-DECOMPRESS-D", "Snappy-DECOMPRESS-F", "Snappy-DECOMPRESS-L",
      "Snappy-DECOMPRESS-M", "Snappy-DECOMPRESS-P", "Snappy-DECOMPRESS-S",
      "Snappy-DECOMPRESS-U",
  };
  return kDistributions;
}

absl::Span<const absl::string_view> ZSTDCompressDistributions() {
  static constexpr absl::string_view kDistributions[] = {
      "ZSTD-COMPRESS-A", "ZSTD-COMPRESS-B", "ZSTD-COMPRESS-C",
      "ZSTD-COMPRESS-D", "ZSTD-COMPRESS-F", "ZSTD-COMPRESS-M",
      "ZSTD-COMPRESS-P", "ZSTD-COMPRESS-S", "ZSTD-COMPRESS-U",
  };
  return kDistributions;
}

absl::Span<const absl::string_view> ZSTDDecompressDistributions() {
  static constexpr absl::string_view kDistributions[] = {
      "ZSTD-DECOMPRESS-A", "ZSTD-DECOMPRESS-B", "ZSTD-DECOMPRESS-C",
      "ZSTD-DECOMPRESS-D", "ZSTD-DECOMPRESS-F", "ZSTD-DECOMPRESS-L",
      "ZSTD-DECOMPRESS-M", "ZSTD-DECOMPRESS-P", "ZSTD-DECOMPRESS-S",
      "ZSTD-DECOMPRESS-U",
  };
  return kDistributions;
}

BENCHMARK_CAPTURE(BM_Compress, Snappy, "Snappy", SnappyCompressDistributions())
    ->DenseRange(0, SnappyCompressDistributions().size() - 1, 1)
    ->ArgName("binary");

BENCHMARK_CAPTURE(BM_Decompress, Snappy, "Snappy", SnappyDecompressDistributions())
    ->DenseRange(0, SnappyDecompressDistributions().size() - 1, 1)
    ->ArgName("binary");

BENCHMARK_CAPTURE(BM_Compress, ZSTD, "ZSTD", ZSTDCompressDistributions())
    ->ArgsProduct({benchmark::CreateDenseRange(
                       0, ZSTDCompressDistributions().size() - 1, /*step=*/1),
                   benchmark::CreateDenseRange(-1, 11, /*step=*/1)})
    ->ArgNames({"binary", "compression_level"});

BENCHMARK_CAPTURE(BM_Decompress, ZSTD, "ZSTD", ZSTDDecompressDistributions())
    ->ArgsProduct({benchmark::CreateDenseRange(
                       0, ZSTDDecompressDistributions().size() - 1, /*step=*/1),
                   /* only +/- levels matters */ {-1, 1}})
    ->ArgNames({"binary", "compression_level"});

}  // namespace compression
}  // namespace fleetbench
