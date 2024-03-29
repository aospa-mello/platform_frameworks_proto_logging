/*
 * Copyright (C) 2023, The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_STATS_LOG_API_GEN_NATIVE_WRITER_VENDOR_H
#define ANDROID_STATS_LOG_API_GEN_NATIVE_WRITER_VENDOR_H

#include <stdio.h>
#include <string.h>

#include "Collation.h"

namespace android {
namespace stats_log_api_gen {

int write_stats_log_cpp_vendor(FILE* out, const Atoms& atoms, const AtomDecl& attributionDecl,
                               const string& cppNamespace, const string& importHeader);

int write_stats_log_header_vendor(FILE* out, const Atoms& atoms, const AtomDecl& attributionDecl,
                                  const string& cppNamespace);

}  // namespace stats_log_api_gen
}  // namespace android

#endif  // ANDROID_STATS_LOG_API_GEN_NATIVE_WRITER_VENDOR_H
