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

#ifndef ROS_DRIVER_BASE__UDP_SERVER_STREAM_HPP_
#define ROS_DRIVER_BASE__UDP_SERVER_STREAM_HPP_

#include "ros_driver_base/fd_stream.hpp"

namespace ros_driver_base
{

class UDPServerStream : public FDStream
{
public:
  UDPServerStream(int fd, bool auto_close);
  UDPServerStream(int fd, bool auto_close, struct sockaddr * si_other, size_t * s_len);
  virtual size_t read(uint8_t * buffer, size_t buffer_size);
  virtual size_t write(uint8_t const * buffer, size_t buffer_size);

protected:
  struct sockaddr m_si_other;
  bool m_si_other_dynamic;
  unsigned int m_s_len;
};
}  // namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__UDP_SERVER_STREAM_HPP_
