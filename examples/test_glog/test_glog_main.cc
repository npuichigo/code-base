// Copyright 2016 ASLP@NPU.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Author: npuichigo@gmail.com (zhangyuchao)

#include "glog/logging.h"

int main(int argc, char** argv) {
  FLAGS_alsologtostderr = 1;
  FLAGS_colorlogtostderr = true;
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "this is glog INFO test";
  LOG(ERROR) << "this is glog ERROR test";
  LOG(WARNING) << "other log useage see doc";
  return 0;
}
