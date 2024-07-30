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

#ifndef ROS_DRIVER_BASE__BUS_HANDLER_HPP_
#define ROS_DRIVER_BASE__BUS_HANDLER_HPP_

#include <ros_driver_base/driver.hpp>
#include <ros_driver_base/parser.hpp>


namespace ros_driver_base
{
/**
 * @brief This class extends the Parser. This class should be inherit for all devices that send periodically
 * data to the bus, and are not request->answer based. In case an Parser detects an packed for this Device,
 * the function packedReady get's call IF this class is registered to the Bus.
 */
class BusHandler : public Parser
{
public:
  /**
   * Give the bus to which this Device belongs, auto_registration is done by the second parameter
   */
  explicit BusHandler(ros_driver_base::Bus * bus, bool auto_register = true);

  /**
  * Destructor of the class.
  */
  ~BusHandler();

  /**
   * The function packedReady get's call IF this class is registered to
   * the Bus. See See IODriver for more details.
   */
  virtual void packedReady(uint8_t const * buffer, size_t size) = 0;

  /**
   * @brief Tries to read a packet from the file descriptor and to save it in the
   * provided buffer. See See IODriver for more details.
   */
  virtual int readPacket(
    uint8_t * buffer, int buffer_size, int packet_timeout,
    int first_byte_timeout = -1);
};
}  //  namespace ros_driver_base

#endif  // ROS_DRIVER_BASE__BUS_HANDLER_HPP_
