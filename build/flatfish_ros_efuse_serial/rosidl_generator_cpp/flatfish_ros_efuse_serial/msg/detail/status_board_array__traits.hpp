// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoardArray.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__TRAITS_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status_board'
#include "flatfish_ros_efuse_serial/msg/detail/status_board__traits.hpp"

namespace flatfish_ros_efuse_serial
{

namespace msg
{

inline void to_flow_style_yaml(
  const StatusBoardArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: status_board
  {
    if (msg.status_board.size() == 0) {
      out << "status_board: []";
    } else {
      out << "status_board: [";
      size_t pending_items = msg.status_board.size();
      for (auto item : msg.status_board) {
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
  const StatusBoardArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status_board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_board.size() == 0) {
      out << "status_board: []\n";
    } else {
      out << "status_board:\n";
      for (auto item : msg.status_board) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StatusBoardArray & msg, bool use_flow_style = false)
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
  const flatfish_ros_efuse_serial::msg::StatusBoardArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::msg::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::msg::StatusBoardArray & msg)
{
  return flatfish_ros_efuse_serial::msg::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::msg::StatusBoardArray>()
{
  return "flatfish_ros_efuse_serial::msg::StatusBoardArray";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::msg::StatusBoardArray>()
{
  return "flatfish_ros_efuse_serial/msg/StatusBoardArray";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::msg::StatusBoardArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::msg::StatusBoardArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<flatfish_ros_efuse_serial::msg::StatusBoardArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__TRAITS_HPP_
