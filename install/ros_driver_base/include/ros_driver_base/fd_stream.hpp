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

#ifndef ROS_DRIVER_BASE__FD_STREAM_HPP_
#define ROS_DRIVER_BASE__FD_STREAM_HPP_

#include <ros_driver_base/io_stream.hpp>

namespace ros_driver_base
{

/**
 * Implementation of IOStream for file descriptors
 */
class FDStream : public ros_driver_base::IOStream
{
  bool m_auto_close;

protected:
  int m_fd;

public:
  static const int INVALID_FD = -1;

  FDStream(int fd, bool auto_close);
  virtual ~FDStream();
  virtual void waitRead(std::chrono::duration<double> const & timeout);
  virtual void waitWrite(std::chrono::duration<double> const & timeout);
  virtual size_t read(uint8_t * buffer, size_t buffer_size);
  virtual size_t write(uint8_t const * buffer, size_t buffer_size);
  virtual void clear();

  /**
   * @brief Sets the NONBLOCK flag on the given file descriptor and returns true if
   * the file descriptor was in blocking mode
   */
  bool setNonBlockingFlag(int fd);

  virtual int getFileDescriptor() const;
};
}  //  namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__FD_STREAM_HPP_
