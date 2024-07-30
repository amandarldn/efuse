// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__TRAITS_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flatfish_ros_efuse_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusChannel & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: default_on
  {
    out << "default_on: ";
    rosidl_generator_traits::value_to_yaml(msg.default_on, out);
    out << ", ";
  }

  // member: channel_on
  {
    out << "channel_on: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_on, out);
    out << ", ";
  }

  // member: max_current
  {
    out << "max_current: ";
    rosidl_generator_traits::value_to_yaml(msg.max_current, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: check_voltage
  {
    out << "check_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.check_voltage, out);
    out << ", ";
  }

  // member: error_led
  {
    out << "error_led: ";
    rosidl_generator_traits::value_to_yaml(msg.error_led, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatusChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: default_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "default_on: ";
    rosidl_generator_traits::value_to_yaml(msg.default_on, out);
    out << "\n";
  }

  // member: channel_on
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_on: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_on, out);
    out << "\n";
  }

  // member: max_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_current: ";
    rosidl_generator_traits::value_to_yaml(msg.max_current, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: check_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "check_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.check_voltage, out);
    out << "\n";
  }

  // member: error_led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_led: ";
    rosidl_generator_traits::value_to_yaml(msg.error_led, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusChannel & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

namespace rosidl_generator_traits
{

[[deprecated("use flatfish_ros_efuse_serial::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flatfish_ros_efuse_serial::msg::StatusChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::msg::StatusChannel & msg)
{
  return flatfish_ros_efuse_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::msg::StatusChannel>()
{
  return "flatfish_ros_efuse_serial::msg::StatusChannel";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::msg::StatusChannel>()
{
  return "flatfish_ros_efuse_serial/msg/StatusChannel";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::msg::StatusChannel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::msg::StatusChannel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flatfish_ros_efuse_serial::msg::StatusChannel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__TRAITS_HPP_
