// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__TRAITS_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'status_channel'
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__traits.hpp"

namespace flatfish_ros_efuse_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusBoard & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: status_channel
  {
    if (msg.status_channel.size() == 0) {
      out << "status_channel: []";
    } else {
      out << "status_channel: [";
      size_t pending_items = msg.status_channel.size();
      for (auto item : msg.status_channel) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StatusBoard & msg,
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

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }

  // member: status_channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_channel.size() == 0) {
      out << "status_channel: []\n";
    } else {
      out << "status_channel:\n";
      for (auto item : msg.status_channel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusBoard & msg, bool use_flow_style = false)
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
  const flatfish_ros_efuse_serial::msg::StatusBoard & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::msg::StatusBoard & msg)
{
  return flatfish_ros_efuse_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::msg::StatusBoard>()
{
  return "flatfish_ros_efuse_serial::msg::StatusBoard";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::msg::StatusBoard>()
{
  return "flatfish_ros_efuse_serial/msg/StatusBoard";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::msg::StatusBoard>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::msg::StatusBoard>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flatfish_ros_efuse_serial::msg::StatusBoard>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__TRAITS_HPP_
