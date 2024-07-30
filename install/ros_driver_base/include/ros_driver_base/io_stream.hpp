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

#ifndef ROS_DRIVER_BASE__IO_STREAM_HPP_
#define ROS_DRIVER_BASE__IO_STREAM_HPP_

#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <chrono>

namespace ros_driver_base
{
/**
 * @brief Generic IO handler that allows to wait, read and write to an IO stream
 *
 * We're not using the default std::iostream interface as it is quite
 * complicated, and the Driver class really needs little
 */
class IOStream
{
public:
  virtual ~IOStream();
  virtual void clear() = 0;
  virtual size_t read(uint8_t * buffer, size_t buffer_size) = 0;
  virtual void waitRead(std::chrono::duration<double> const & timeout) = 0;
  virtual void waitWrite(std::chrono::duration<double> const & timeout) = 0;
  virtual size_t write(uint8_t const * buffer, size_t buffer_size) = 0;

  /**
   * If this IOStream is attached to a file descriptor, return it.
   * Otherwise, returns INVALID_FD;
   *
   * The default implementation returns INVALID_FD
   */
  virtual int getFileDescriptor() const;
};
}  // namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__IO_STREAM_HPP_
