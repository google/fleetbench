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
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <numeric>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "absl/container/btree_set.h"
#include "absl/container/flat_hash_map.h"
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
#include "zip.h"

namespace fleetbench {
namespace compression {

namespace {

class CompressionCorpus {
 public:
  explicit CompressionCorpus() {
    // Open the zip file and read the entries.
    // Store the names, sizes and indices of the entries.
    int error = 0;
    auto corpus_path = GetFleetbenchRuntimePath("compression/corpus.zip");
    archive_ = zip_open(corpus_path.c_str(), 0, &error);
    if (archive_ == nullptr) {
      LOG(FATAL) << "Failed to open zip archive: " << corpus_path
                 << " error: " << error;
    }
    const int num_files = zip_get_num_entries(archive_, 0);
    for (int i = 0; i < num_files; ++i) {
      zip_stat_t zip_entry;
      if (zip_stat_index(archive_, i, 0, &zip_entry) != 0) {
        LOG(FATAL) << "Failed to stat zip entry: " << i;
      }

      std::vector<std::string> paths =
          absl::StrSplit(std::string(zip_entry.name), '/');
      if (paths.size() < 3) {
        LOG(FATAL) << "corpus entry should have at least 3 components: "
                   << zip_entry.name;
      }
      // Strip off the path apart from the last dirname/basename,
      // assuming that the corpus is only ever 1 level deep.
      const std::string& basename = paths[paths.size() - 1];
      const std::string& dirname = paths[paths.size() - 2];
      std::string path = absl::StrCat(dirname, "/", basename);
      entries_[path] = {.size = zip_entry.size, .index = i};
      corpora_.insert(std::move(path));
      // Keep track of the directories for use in GetMatchingDirectories().
      directories_.insert(dirname);
    }
  }
  ~CompressionCorpus() { zip_close(archive_); }

  // Returns a sorted list of directories that match the given prefix.
  std::vector<std::string> GetMatchingDirectories(
      absl::string_view prefix) const {
    std::vector<std::string> directories;
    for (auto it = directories_.lower_bound(prefix); it != directories_.end();
         ++it) {
      if (!absl::StartsWith(*it, prefix)) {
        break;
      }
      directories.push_back(std::move(*it));
    }
    return directories;
  }

  // Find all corpora whose path starts with 'dir_path', decompress and return
  // the data.
  std::vector<std::string> GetCorpora(absl::string_view dir_path) const {
    std::vector<std::string> corpora;
    for (auto it = corpora_.lower_bound(dir_path); it != corpora_.end(); ++it) {
      if (!absl::StartsWith(*it, dir_path)) {
        break;
      }
      const auto& entry = entries_.at(*it);
      std::string content(entry.size, '\0');
      zip_file_t* file = zip_fopen_index(archive_, entry.index, 0);
      auto bytes_read = zip_fread(file, content.data(), content.size());
      CHECK_GE(bytes_read, 0) << "Failed to read zip entry: " << *it;
      content.resize(bytes_read);
      zip_fclose(file);
      corpora.push_back(std::move(content));
    }
    return corpora;
  }

 private:
  struct ZipEntry {
    size_t size;
    int index;
  };

  zip_t* archive_ = nullptr;
  // A map from file path to zip archive entries.
  absl::flat_hash_map<std::string, ZipEntry> entries_;
  absl::btree_set<std::string> corpora_;
  absl::btree_set<std::string> directories_;
};

CompressionCorpus* g_corpus = nullptr;

// Parse the given directory_name string, which like `ZSTD_COMPRESS_A-B-C`, to
// get the binary name, i.e, A-B-C.
std::string GetBinary(absl::string_view directory_name) {
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

// Returns the total number of characters in a vector of strings.
static int ComputeTotalNumChars(const std::vector<std::string>& strings) {
  return std::accumulate(
      strings.begin(), strings.end(), 0,
      [](int sum, const auto& cur) { return sum + cur.size(); });
}

static void BM_Compress(benchmark::State& state,
                        absl::string_view compressor_type,
                        absl::string_view dir_path,
                        const std::string& distribution_name) {
  auto compressor =
      CompressorFactory::CreateCompressor(compressor_type, state,
                                          /* is_compress= */ true);

  // Read in benchmark corpus
  const auto& corpora = g_corpus->GetCorpora(dir_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size());
  std::vector<std::string> decompressed(corpora.size());

  size_t batch_size = ComputeTotalNumChars(corpora);
  while (state.KeepRunningBatch(batch_size)) {
    //  Compress file
    for (size_t i = 0; i < corpora.size(); i++) {
      auto res = compressor->Compress(corpora[i], &compressed[i]);
      benchmark::DoNotOptimize(res);
    }
  }
  // Decompress file and check correctness, and also compute compression_ratio,
  // which is defined as the ratio of the uncompressed size to the compressed
  // size.
  double total_compression_ratio = 0.0;
  for (size_t i = 0; i < compressed.size(); i++) {
    compressor->Decompress(compressed[i], &decompressed[i]);
    CHECK_EQ(corpora[i], decompressed[i]);
    total_compression_ratio += (corpora[i].size() / compressed[i].size());
  }

  state.counters["avg_compression_ratio"] =
      benchmark::Counter(total_compression_ratio / corpora.size());

  // Compute compression byte rate
  state.counters["compression_byte_rate"] =
      benchmark::Counter(state.iterations(), benchmark::Counter::kIsRate,
                         benchmark::Counter::OneK::kIs1024);

  if (!distribution_name.empty()) state.SetLabel(distribution_name);
}

static void BM_Decompress(benchmark::State& state,
                          absl::string_view compressor_type,
                          absl::string_view dir_path,
                          const std::string& distribution_name) {
  auto compressor = CompressorFactory::CreateCompressor(
      compressor_type, state, /* is_compress= */ false);

  // Read in benchmark corpus
  const auto& corpora = g_corpus->GetCorpora(dir_path);

  // Reserve space to store string after compression and decompression.
  std::vector<std::string> compressed(corpora.size()),
      decompressed(corpora.size());

  for (size_t i = 0; i < corpora.size(); i++) {
    compressor->Compress(corpora[i], &compressed[i]);
  }

  size_t batch_size = ComputeTotalNumChars(corpora);
  while (state.KeepRunningBatch(batch_size)) {
    for (size_t i = 0; i < compressed.size(); i++) {
      auto res = compressor->Decompress(compressed[i], &decompressed[i]);
      benchmark::DoNotOptimize(res);
    }
  }

  // Check correctness, and also compute compression_ratio, which is defined as
  // the ratio of the uncompressed size to the compressed size.
  double total_compression_ratio = 0.0;
  for (size_t i = 0; i < decompressed.size(); i++) {
    CHECK_EQ(corpora[i], decompressed[i]);
    total_compression_ratio += (corpora[i].size() / compressed[i].size());
  }
  state.counters["avg_compression_ratio"] =
      benchmark::Counter(total_compression_ratio / corpora.size());

  // Compute decompression byte rate
  state.counters["decompression_byte_rate"] =
      benchmark::Counter(state.iterations(), benchmark::Counter::kIsRate,
                         benchmark::Counter::OneK::kIs1024);

  if (!distribution_name.empty()) state.SetLabel(distribution_name);
}

namespace {
void RegisterBenchmarks() {
  g_corpus = new CompressionCorpus();
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
      if (operation == "DECOMPRESS") {
        benchmark_fn = fleetbench::compression::BM_Decompress;
      }

      // Gets a list of directory paths that stores compression corpus
      std::string directory_prefix = absl::StrCat(algorithm, "_", operation);
      const auto& directories =
          g_corpus->GetMatchingDirectories(directory_prefix);

      std::string external_name_suffix = "";
      for (const auto& directory_name : directories) {
        // Binary names
        std::string benchmark_name =
            absl::StrCat("BM_COMPRESSION_", directory_name, compressor_suffix);
        std::string binary = GetBinary(directory_name);

        auto* benchmark = benchmark::RegisterBenchmark(
            benchmark_name, benchmark_fn, compressor_type, directory_name,
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
