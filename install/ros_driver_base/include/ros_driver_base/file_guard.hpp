// Copyright (c) 2022-2023, SENAI Cimatec
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

#ifndef ROS_DRIVER_BASE__FILE_GUARD_HPP_
#define ROS_DRIVER_BASE__FILE_GUARD_HPP_

#include <unistd.h>

namespace ros_driver_base
{

class FileGuard
{
  int fd;

public:
  explicit FileGuard(int fd = -1)
  : fd(fd) {}
  ~FileGuard() {reset();}

  void reset(int new_fd = -1)
  {
    if (fd != -1) {close(fd);}
    fd = new_fd;
  }

  int get() const {return fd;}
  int release()
  {
    int ret = fd;
    fd = -1;
    return ret;
  }
};
}  //  namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__FILE_GUARD_HPP_
