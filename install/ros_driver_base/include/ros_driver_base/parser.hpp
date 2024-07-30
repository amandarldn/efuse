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

#ifndef ROS_DRIVER_BASE__PARSER_HPP_
#define ROS_DRIVER_BASE__PARSER_HPP_

#include <ros_driver_base/bus.hpp>

namespace ros_driver_base
{

class Bus;

/**
 * @brief This Class implements a Parser. Classes that inherit this, are able to "dock" on an IOBus.
 * Its used for e.g. for RS-485 Communication busses, there may be different devices on one bus.
 * It`s not practical to write a huge extract_packed for this. Each device can implement it's
 * own extractor with this class.
 */
class Parser
{
public:
  /*
   * Give the Constructor the bus, which it belongs to.
   */
  explicit Parser(ros_driver_base::Bus * bus);
  /**
   * Destructor of the class.
   */
  virtual ~Parser() {}

  /**
   * @brief readPacket calls the readPacked from IOBus. If this readPacked is used only the extract packed
   * from this Device is called, other device-extractors are not involved, to no call to packedReady
   * (see IOBusHandler) is done. If you are devices not request->answer like you need to use the IOBusHandler,
   * and call the readPacked from IOBus.
   */
  virtual int readPacket(
    uint8_t * buffer, int buffer_size, int packet_timeout,
    int first_byte_timeout = -1);

  /**
   * @brief extractPacket implementation finds a packet in the buffer. When a packet is found, it is copied
   * into the buffer given to readPacket and the packet size is returned. See IODriver for more details.
   */
  virtual int extractPacket(uint8_t const * buffer, size_t buffer_size) const = 0;

  /**
   * @brief Tries to write a packet to the file descriptor. +timeout+ is the timeout in milliseconds.
   * There is not infinite timeout value, and 0 is non-blocking at all. See See IODriver for more details.
   */
  bool writePacket(uint8_t const * buffer, int bufsize, int timeout);

protected:
  ros_driver_base::Bus * bus;
};
}  // namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__PARSER_HPP_
