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

#ifndef ROS_DRIVER_BASE__BUS_HPP_
#define ROS_DRIVER_BASE__BUS_HPP_

#include <inttypes.h>

#include <list>

#include <boost/thread/recursive_mutex.hpp>

#include <ros_driver_base/driver.hpp>
#include <ros_driver_base/parser.hpp>

namespace ros_driver_base
{
/**
 * @brief Bus Version of the IODriver, to this class can "dock" IOBusHandler or Parser classes
 * If you have Periodic devices you should use IOBusHandler, otherwise Parser. See Classes
 * for more details.
 */
class Bus : public Driver
{
public:
  /**
  * Creator function to create an driver instance using the max_packet_size
  * @param max_packet_size: the maximum packet size send by component
  * @param extract_last: flag to start the packet extraction from the last packet recieved
  *
  */
  explicit Bus(int max_packet_size, bool extract_last = false);

  /**
   * readPacket implementation inherited from ros_driver_base. See proper documentation for more details.
  */
  int readPacket(
    uint8_t * buffer, int buffer_size, int packet_timeout, int first_byte_timeout = -1,
    Parser * parser = 0);

  /**
   * Receive a parser instance and use on current bus driver
   * @param parser: the parser instance
  */
  void addParser(Parser * parser);

  /**
   * Remove the parser from the bus driver
   * @param parser: the pointer to the target parser
  */
  void removeParser(Parser * parser);

  /**
   * extractPacket implementation inherited from ros_driver_base. See proper documentation for more details.
   * @param buffer: pointer to the memory block
   * @param buffer_size: the size of the memory block
  */
  int extractPacket(uint8_t const * buffer, size_t buffer_size) const;

  /**
   * writePacket implementation inherited from ros_driver_base. See proper documentation for more details.
   * @param buffer: pointer to the memory block
   * @param buffer_size: the size of the memory block
  */
  bool writePacket(uint8_t const * buffer, int buffer_size, int timeout);

protected:
  std::list<Parser *> parser;
  Parser * caller;
  boost::recursive_mutex mutex;
};
}  //  namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__BUS_HPP_
