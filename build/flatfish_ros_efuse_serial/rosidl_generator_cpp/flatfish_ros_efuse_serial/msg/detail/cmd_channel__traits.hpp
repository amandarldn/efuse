// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flatfish_ros_efuse_serial:msg/CmdChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__TRAITS_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flatfish_ros_efuse_serial/msg/detail/cmd_channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flatfish_ros_efuse_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const CmdChannel & msg,
  std::ostream & out)
{
  out << "{";
  // member: channel
  {
    if (msg.channel.size() == 0) {
      out << "channel: []";
    } else {
      out << "channel: [";
      size_t pending_items = msg.channel.size();
      for (auto item : msg.channel) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const CmdChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channel.size() == 0) {
      out << "channel: []\n";
    } else {
      out << "channel:\n";
      for (auto item : msg.channel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CmdChannel & msg, bool use_flow_style = false)
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
  const flatfish_ros_efuse_serial::msg::CmdChannel & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::msg::CmdChannel & msg)
{
  return flatfish_ros_efuse_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::msg::CmdChannel>()
{
  return "flatfish_ros_efuse_serial::msg::CmdChannel";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::msg::CmdChannel>()
{
  return "flatfish_ros_efuse_serial/msg/CmdChannel";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::msg::CmdChannel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::msg::CmdChannel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flatfish_ros_efuse_serial::msg::CmdChannel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__TRAITS_HPP_
