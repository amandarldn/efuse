// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flatfish_ros_efuse_serial:srv/ResetBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__TRAITS_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flatfish_ros_efuse_serial/srv/detail/reset_board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flatfish_ros_efuse_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetBoard_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: board
  {
    out << "board: ";
    rosidl_generator_traits::value_to_yaml(msg.board, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board: ";
    rosidl_generator_traits::value_to_yaml(msg.board, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetBoard_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

namespace rosidl_generator_traits
{

[[deprecated("use flatfish_ros_efuse_serial::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flatfish_ros_efuse_serial::srv::ResetBoard_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::srv::ResetBoard_Request & msg)
{
  return flatfish_ros_efuse_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::srv::ResetBoard_Request>()
{
  return "flatfish_ros_efuse_serial::srv::ResetBoard_Request";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::srv::ResetBoard_Request>()
{
  return "flatfish_ros_efuse_serial/srv/ResetBoard_Request";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::srv::ResetBoard_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::srv::ResetBoard_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flatfish_ros_efuse_serial::srv::ResetBoard_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace flatfish_ros_efuse_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResetBoard_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResetBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResetBoard_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace flatfish_ros_efuse_serial

namespace rosidl_generator_traits
{

[[deprecated("use flatfish_ros_efuse_serial::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const flatfish_ros_efuse_serial::srv::ResetBoard_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::srv::ResetBoard_Response & msg)
{
  return flatfish_ros_efuse_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::srv::ResetBoard_Response>()
{
  return "flatfish_ros_efuse_serial::srv::ResetBoard_Response";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::srv::ResetBoard_Response>()
{
  return "flatfish_ros_efuse_serial/srv/ResetBoard_Response";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::srv::ResetBoard_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::srv::ResetBoard_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flatfish_ros_efuse_serial::srv::ResetBoard_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flatfish_ros_efuse_serial::srv::ResetBoard>()
{
  return "flatfish_ros_efuse_serial::srv::ResetBoard";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::srv::ResetBoard>()
{
  return "flatfish_ros_efuse_serial/srv/ResetBoard";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::srv::ResetBoard>
  : std::integral_constant<
    bool,
    has_fixed_size<flatfish_ros_efuse_serial::srv::ResetBoard_Request>::value &&
    has_fixed_size<flatfish_ros_efuse_serial::srv::ResetBoard_Response>::value
  >
{
};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::srv::ResetBoard>
  : std::integral_constant<
    bool,
    has_bounded_size<flatfish_ros_efuse_serial::srv::ResetBoard_Request>::value &&
    has_bounded_size<flatfish_ros_efuse_serial::srv::ResetBoard_Response>::value
  >
{
};

template<>
struct is_service<flatfish_ros_efuse_serial::srv::ResetBoard>
  : std::true_type
{
};

template<>
struct is_service_request<flatfish_ros_efuse_serial::srv::ResetBoard_Request>
  : std::true_type
{
};

template<>
struct is_service_response<flatfish_ros_efuse_serial::srv::ResetBoard_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__RESET_BOARD__TRAITS_HPP_
