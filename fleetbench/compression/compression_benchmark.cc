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

#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <filesystem>  // NOLINT
#include <fstream>
#include <ios>
#include <iterator>
#include <memory>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "absl/log/check.h"
#include "absl/log/log.h"
#include "absl/strings/match.h"
#include "absl/strings/str_cat.h"
#include "absl/strings/str_split.h"
#include "absl/strings/string_view.h"
#include "benchmark/benchmark.h"
#include "fleetbench/common/common.h"
#include "fleetbench/compression/algorithms.h"
#include "fleetbench/compression/compression_parameter.h"
#include "fleetbench/dynamic_registrar.h"

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
std::vector<std::string> GetCorpora(std::filesystem::path dir_path) {
  const std::filesystem::path sandbox{dir_path};
  std::vector<std::string> corpora;
  for (auto const& dir_entry : std::filesystem::directory_iterator{sandbox}) {
    std::string corpus;
    CHECK(GetContents(dir_entry.path(), &corpus));
    corpora.push_back(corpus);
  }
  return corpora;
}

// Returns a sorted list of the files in directory 'dir' whose filenames start
// with 'prefix'.
static std::vector<std::filesystem::path> GetMatchingDirectories(
    absl::string_view dir, absl::string_view prefix) {
  std::vector<std::filesystem::path> directories;
  for (const auto& entry : std::filesystem::directory_iterator(dir)) {
    if (std::filesystem::is_directory(entry.path())) {
      if (absl::StartsWith(entry.path().filename().string(), prefix)) {
        directories.push_back(entry.path());
      }
    }
  }
  std::sort(directories.begin(), directories.end());
  return directories;
}

// Parse the given directory_name string, which like `ZSTD_COMPRESS_A-B-C`, to
// get the binary name, i.e, A-B-C.
std::string GetBinary(std::string directory_name) {
  std::vector<std::string> v = absl::StrSplit(directory_name, '_');
  QCHECK_GE(v.size(), 3);
  std::string binary_name = v[2];
  for (int i = 3; i < v.size(); i++) {
    absl::StrAppend(&binary_name, "_", v[i]);
  }
  return binary_name;
}

namespace CompressorFactory {

std::unique_ptr<Compressor> CreateCompressor(
    const absl::string_view compressor_type, benchmark::State& state,
    bool is_compress) {
  if (compressor_type == "Snappy") {
    return std::make_unique<SnappyCompressor>();
  } else {
    auto compression_level = state.range(0);
    auto window_log = state.range(1);
    if (compressor_type == "ZSTD") {
      return std::make_unique<ZstdCompressor>(compression_level, window_log);
    } else if (compressor_type == "ZLib") {
      return std::make_unique<ZLibCompressor>(compression_level, window_log);
    } else if (compressor_type == "Brotli") {
      return std::make_unique<BrotliCompressor>(compression_level, window_log);
    } else {
      LOG(FATAL) << "Unknown compressor type: " << compressor_type;
      return nullptr;
    }
  }
}
}  // namespace CompressorFactory

}  // namespace

static constexpr absl::string_view kCorporaPath = "compression/corpora/";

static void BM_Compress(benchmark::State& state,
                        absl::string_view compressor_type,
                        std::filesystem::path dir_path,
                        const std::string& distribution_name) {
  auto compressor =
      CompressorFactory::CreateCompressor(compressor_type, state,
                                          /* is_compress= */ true);

  // Read in benchmark corpus
  const auto& corpora = GetCorpora(dir_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (auto _ : state) {
    //  Compress file
    for (size_t i = 0; i < corpora.size(); i++) {
      auto res = compressor->Compress(corpora[i], &compressed[i]);
      benchmark::DoNotOptimize(res);
    }
  }
  // Decompress file and check correctness
  for (size_t i = 0; i < compressed.size(); i++) {
    compressor->Decompress(compressed[i], &decompressed[i]);
    CHECK_EQ(corpora[i], decompressed[i]);
  }

  if (!distribution_name.empty()) state.SetLabel(distribution_name);
}

static void BM_Decompress(benchmark::State& state,
                          absl::string_view compressor_type,
                          std::filesystem::path dir_path,
                          const std::string& distribution_name) {
  auto compressor = CompressorFactory::CreateCompressor(
      compressor_type, state, /* is_compress= */ false);

  // Read in benchmark corpus
  const auto& corpora = GetCorpora(dir_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (size_t i = 0; i < corpora.size(); i++) {
    compressor->Compress(corpora[i], &compressed[i]);
  }

  for (auto _ : state) {
    for (size_t i = 0; i < compressed.size(); i++) {
      auto res = compressor->Decompress(compressed[i], &decompressed[i]);
      benchmark::DoNotOptimize(res);
    }
  }

  // Check correctness
  for (size_t i = 0; i < decompressed.size(); i++) {
    CHECK_EQ(corpora[i], decompressed[i]);
  }

  if (!distribution_name.empty()) state.SetLabel(distribution_name);
}

namespace {
void RegisterBenchmarks() {
  std::string path = GetFleetbenchRuntimePath(kCorporaPath);
  auto compression_levels_map = GetCompressionLevelsMap();
  std::vector<absl::string_view> operations = {"COMPRESS", "DECOMPRESS"};

  using algorithms_entry = std::tuple<std::string, std::string, std::string,
                                      std::vector<int64_t>, int64_t, int64_t>;
  auto algorithms = {
      algorithms_entry("Snappy", "Snappy", "", {}, NULL, NULL),
      algorithms_entry("ZSTD", "ZSTD", "", {15, 16}, 0, 0),
      algorithms_entry("Flate", "ZLib", "", {15}, 15, 6),
      algorithms_entry("Brotli", "Brotli", "", {18}, 18, 2),
  };

  for (const auto& [algorithm, compressor_type, compressor_suffix,
                    compress_window_sizes, default_window_size,
                    default_compression_level] : algorithms) {
    for (const auto& operation : operations) {
      auto benchmark_fn = fleetbench::compression::BM_Compress;
      if (operation == "DECOMPRESS")
        benchmark_fn = fleetbench::compression::BM_Decompress;

      // Gets the a list of directory paths that stores compression corpus
      std::string directory_prefix = absl::StrCat(algorithm, "_", operation);
      const auto& directories = fleetbench::compression::GetMatchingDirectories(
          path, directory_prefix);

      std::string external_name_suffix = "";
      for (const auto& directory : directories) {
        // Binary names
        std::string directory_name = directory.filename().string();
        std::string benchmark_name =
            absl::StrCat("BM_", directory_name, compressor_suffix);
        std::string binary = GetBinary(directory_name);

        auto* benchmark = benchmark::RegisterBenchmark(
            benchmark_name.c_str(), benchmark_fn, compressor_type, directory,
            external_name_suffix);

        if (compression_levels_map.contains(algorithm)) {
          benchmark->ArgNames({"compression_level", "window_log"});
          if (operation == "COMPRESS") {
            for (auto level : compression_levels_map[algorithm][binary]) {
              for (auto window_log : compress_window_sizes) {
                benchmark->Args({level, window_log});
              }
            }
          } else {
            benchmark->Args({default_compression_level, default_window_size});
          }
        }
      }
    }
  }
}

class BenchmarkRegisterer {
 public:
  BenchmarkRegisterer() {
    DynamicRegistrar::Get()->AddCallback(RegisterBenchmarks);
    DynamicRegistrar::Get()->AddDefaultFilter(
        ".*Brotli_COMPRESS_Fleet.*level:2/window_log:18");
    DynamicRegistrar::Get()->AddDefaultFilter(
        ".*Flate_COMPRESS_Fleet/.*level:6/window_log:15");
    DynamicRegistrar::Get()->AddDefaultFilter(".*Snappy_COMPRESS_Fleet.*");
    DynamicRegistrar::Get()->AddDefaultFilter(
        ".*ZSTD_COMPRESS_Fleet.*level:-1/window_log:15");
    DynamicRegistrar::Get()->AddDefaultFilter(".*DECOMPRESS_Fleet.*");
  }
};

BenchmarkRegisterer br;

}  // namespace
}  // namespace compression
}  // namespace fleetbench
