# Copyright 2024 The Fleetbench Authors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

package(
    default_visibility = ["//visibility:public"],
    features = ["header_modules"],
)

licenses(["notice"])

# Upstream libzip uses CMake to build. This BUILD file is the minimal set needed for Fleetbench.
# In particular, we exclude crypto, lzma and bz2 support to avoid unnecessary dependencies.

cc_library(
    name = "zip",
    srcs = [
        "config.h",
        "lib/compat.h",
        "lib/zip_add.c",
        "lib/zip_add_dir.c",
        "lib/zip_add_entry.c",
        "lib/zip_algorithm_deflate.c",
        "lib/zip_buffer.c",
        "lib/zip_close.c",
        "lib/zip_delete.c",
        "lib/zip_dir_add.c",
        "lib/zip_dirent.c",
        "lib/zip_discard.c",
        "lib/zip_entry.c",
        "lib/zip_error.c",
        "lib/zip_error_clear.c",
        "lib/zip_error_get.c",
        "lib/zip_error_get_sys_type.c",
        "lib/zip_error_strerror.c",
        "lib/zip_error_to_str.c",
        "lib/zip_extra_field.c",
        "lib/zip_extra_field_api.c",
        "lib/zip_fclose.c",
        "lib/zip_fdopen.c",
        "lib/zip_file_add.c",
        "lib/zip_file_error_clear.c",
        "lib/zip_file_error_get.c",
        "lib/zip_file_get_comment.c",
        "lib/zip_file_get_external_attributes.c",
        "lib/zip_file_get_offset.c",
        "lib/zip_file_rename.c",
        "lib/zip_file_replace.c",
        "lib/zip_file_set_comment.c",
        "lib/zip_file_set_encryption.c",
        "lib/zip_file_set_external_attributes.c",
        "lib/zip_file_set_mtime.c",
        "lib/zip_file_strerror.c",
        "lib/zip_fopen.c",
        "lib/zip_fopen_encrypted.c",
        "lib/zip_fopen_index.c",
        "lib/zip_fopen_index_encrypted.c",
        "lib/zip_fread.c",
        "lib/zip_fseek.c",
        "lib/zip_ftell.c",
        "lib/zip_get_archive_comment.c",
        "lib/zip_get_archive_flag.c",
        "lib/zip_get_encryption_implementation.c",
        "lib/zip_get_file_comment.c",
        "lib/zip_get_name.c",
        "lib/zip_get_num_entries.c",
        "lib/zip_get_num_files.c",
        "lib/zip_hash.c",
        "lib/zip_io_util.c",
        "lib/zip_libzip_version.c",
        "lib/zip_memdup.c",
        "lib/zip_name_locate.c",
        "lib/zip_new.c",
        "lib/zip_open.c",
        "lib/zip_pkware.c",
        "lib/zip_progress.c",
        "lib/zip_random_unix.c",
        "lib/zip_rename.c",
        "lib/zip_replace.c",
        "lib/zip_set_archive_comment.c",
        "lib/zip_set_archive_flag.c",
        "lib/zip_set_default_password.c",
        "lib/zip_set_file_comment.c",
        "lib/zip_set_file_compression.c",
        "lib/zip_set_name.c",
        "lib/zip_source_accept_empty.c",
        "lib/zip_source_begin_write.c",
        "lib/zip_source_begin_write_cloning.c",
        "lib/zip_source_buffer.c",
        "lib/zip_source_call.c",
        "lib/zip_source_close.c",
        "lib/zip_source_commit_write.c",
        "lib/zip_source_compress.c",
        "lib/zip_source_crc.c",
        "lib/zip_source_error.c",
        "lib/zip_source_file.h",
        "lib/zip_source_file_common.c",
        "lib/zip_source_file_stdio.c",
        "lib/zip_source_file_stdio.h",
        "lib/zip_source_file_stdio_named.c",
        "lib/zip_source_free.c",
        "lib/zip_source_function.c",
        "lib/zip_source_get_file_attributes.c",
        "lib/zip_source_is_deleted.c",
        "lib/zip_source_layered.c",
        "lib/zip_source_open.c",
        "lib/zip_source_pass_to_lower_layer.c",
        "lib/zip_source_pkware_decode.c",
        "lib/zip_source_pkware_encode.c",
        "lib/zip_source_read.c",
        "lib/zip_source_remove.c",
        "lib/zip_source_rollback_write.c",
        "lib/zip_source_seek.c",
        "lib/zip_source_seek_write.c",
        "lib/zip_source_stat.c",
        "lib/zip_source_supports.c",
        "lib/zip_source_tell.c",
        "lib/zip_source_tell_write.c",
        "lib/zip_source_window.c",
        "lib/zip_source_write.c",
        "lib/zip_source_zip.c",
        "lib/zip_source_zip_new.c",
        "lib/zip_stat.c",
        "lib/zip_stat_index.c",
        "lib/zip_stat_init.c",
        "lib/zip_strerror.c",
        "lib/zip_string.c",
        "lib/zip_unchange.c",
        "lib/zip_unchange_all.c",
        "lib/zip_unchange_archive.c",
        "lib/zip_unchange_data.c",
        "lib/zip_utf-8.c",
        "lib/zipint.h",
        "zip_err_str.c",
    ],
    hdrs = [
        "lib/zip.h",
        "zipconf.h",
    ],
    copts = [
        "-Wno-implicit-function-declaration",
        "-Wno-unused",
        "-DHAVE_CONFIG_H",
    ],
    includes = [
        ".",
        "lib",
    ],
    deps = [
        "@chromium_zlib//:zlib",
    ],
)

# Generate a zipconf.h similar to what cmake would produce.
genrule(
    name = "zipconf_h",
    outs = ["zipconf.h"],
    cmd =
        """cat <<EOF >$@
#ifndef _HAD_ZIPCONF_H
#define _HAD_ZIPCONF_H

/*
   zipconf.h -- platform specific include file
 */

#define LIBZIP_VERSION "1.10.1"
#define LIBZIP_VERSION_MAJOR 1
#define LIBZIP_VERSION_MINOR 10
#define LIBZIP_VERSION_MICRO 1

/* #undef ZIP_STATIC */

#define _Nullable
#define _Nonnull

#if !defined(__STDC_FORMAT_MACROS)
#define __STDC_FORMAT_MACROS 1
#endif
#include <inttypes.h>

typedef int8_t zip_int8_t;
typedef uint8_t zip_uint8_t;
typedef int16_t zip_int16_t;
typedef uint16_t zip_uint16_t;
typedef int32_t zip_int32_t;
typedef uint32_t zip_uint32_t;
typedef int64_t zip_int64_t;
typedef uint64_t zip_uint64_t;

#define ZIP_INT8_MIN     (-ZIP_INT8_MAX-1)
#define ZIP_INT8_MAX     0x7f
#define ZIP_UINT8_MAX    0xff

#define ZIP_INT16_MIN    (-ZIP_INT16_MAX-1)
#define ZIP_INT16_MAX    0x7fff
#define ZIP_UINT16_MAX   0xffff

#define ZIP_INT32_MIN    (-ZIP_INT32_MAX-1L)
#define ZIP_INT32_MAX    0x7fffffffL
#define ZIP_UINT32_MAX   0xffffffffLU

#define ZIP_INT64_MIN    (-ZIP_INT64_MAX-1LL)
#define ZIP_INT64_MAX    0x7fffffffffffffffLL
#define ZIP_UINT64_MAX   0xffffffffffffffffULL

#endif /* zipconf.h */

EOF
""",
)

genrule(
    name = "config_h",
    outs = ["config.h"],
    cmd =
        """cat <<EOF >$@
#ifndef HAD_CONFIG_H
#define HAD_CONFIG_H
#ifndef _HAD_ZIPCONF_H
#include "zipconf.h"
#endif
#define HAVE_FICLONERANGE
#define HAVE_FILENO
#define HAVE_FCHMOD
#define HAVE_FSEEKO
#define HAVE_FTELLO
#define HAVE_LOCALTIME_R
#define HAVE_SNPRINTF
#define HAVE_STRCASECMP
#define HAVE_STRDUP
#define HAVE_STRTOLL
#define HAVE_STRTOULL
#define HAVE_STDBOOL_H
#define HAVE_STRINGS_H
#define HAVE_UNISTD_H
#define SIZEOF_OFF_T 8
#define SIZEOF_SIZE_T 8
#define HAVE_FTS_H
#define HAVE_SHARED
#define PACKAGE "libzip"
#define VERSION "1.10.1"
#endif /* HAD_CONFIG_H */
EOF
""",
)

genrule(
    name = "zip_err_str_c",
    outs = ["zip_err_str.c"],
    cmd = """cat <<EOF >$@
        /*
  This file was generated automatically from a Bazel genrule.
*/

#include "zipint.h"

#define L ZIP_ET_LIBZIP
#define N ZIP_ET_NONE
#define S ZIP_ET_SYS
#define Z ZIP_ET_ZLIB

#define E ZIP_DETAIL_ET_ENTRY
#define G ZIP_DETAIL_ET_GLOBAL

const struct _zip_err_info _zip_err_str[] = {
    { N, "No error" },
    { N, "Multi-disk zip archives not supported" },
    { S, "Renaming temporary file failed" },
    { S, "Closing zip archive failed" },
    { S, "Seek error" },
    { S, "Read error" },
    { S, "Write error" },
    { N, "CRC error" },
    { N, "Containing zip archive was closed" },
    { N, "No such file" },
    { N, "File already exists" },
    { S, "Can't open file" },
    { S, "Failure to create temporary file" },
    { Z, "Zlib error" },
    { N, "Malloc failure" },
    { N, "Entry has been changed" },
    { N, "Compression method not supported" },
    { N, "Premature end of file" },
    { N, "Invalid argument" },
    { N, "Not a zip archive" },
    { N, "Internal error" },
    { L, "Zip archive inconsistent" },
    { S, "Can't remove file" },
    { N, "Entry has been deleted" },
    { N, "Encryption method not supported" },
    { N, "Read-only archive" },
    { N, "No password provided" },
    { N, "Wrong password provided" },
    { N, "Operation not supported" },
    { N, "Resource still in use" },
    { S, "Tell error" },
    { N, "Compressed data invalid" },
    { N, "Operation cancelled" },
    { N, "Unexpected length of data" },
    { N, "Not allowed in torrentzip" },
};

const int _zip_err_str_count = sizeof(_zip_err_str)/sizeof(_zip_err_str[0]);

const struct _zip_err_info _zip_err_details[] = {
    { G, "no detail" },
    { G, "central directory overlaps EOCD, or there is space between them" },
    { G, "archive comment length incorrect" },
    { G, "central directory length invalid" },
    { E, "central header invalid" },
    { G, "central directory count of entries is incorrect" },
    { E, "local and central headers do not match" },
    { G, "wrong EOCD length" },
    { G, "EOCD64 overlaps EOCD, or there is space between them" },
    { G, "EOCD64 magic incorrect" },
    { G, "EOCD64 and EOCD do not match" },
    { G, "invalid value in central directory" },
    { E, "variable size fields overflow header" },
    { E, "invalid UTF-8 in filename" },
    { E, "invalid UTF-8 in comment" },
    { E, "invalid Zip64 extra field" },
    { E, "invalid WinZip AES extra field" },
    { E, "garbage at end of extra fields" },
    { E, "extra field length is invalid" },
    { E, "file length in header doesn't match actual file length" },
};

const int _zip_err_details_count = sizeof(_zip_err_details)/sizeof(_zip_err_details[0]);
EOF
""",
)
