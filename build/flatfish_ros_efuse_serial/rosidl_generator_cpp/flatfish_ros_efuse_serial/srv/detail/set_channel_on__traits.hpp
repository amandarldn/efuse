// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flatfish_ros_efuse_serial:srv/SetChannelOn.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__TRAITS_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "flatfish_ros_efuse_serial/srv/detail/set_channel_on__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace flatfish_ros_efuse_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetChannelOn_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: board
  {
    out << "board: ";
    rosidl_generator_traits::value_to_yaml(msg.board, out);
    out << ", ";
  }

  // member: channel
  {
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetChannelOn_Request & msg,
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

  // member: channel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel: ";
    rosidl_generator_traits::value_to_yaml(msg.channel, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetChannelOn_Request & msg, bool use_flow_style = false)
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
  const flatfish_ros_efuse_serial::srv::SetChannelOn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::srv::SetChannelOn_Request & msg)
{
  return flatfish_ros_efuse_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>()
{
  return "flatfish_ros_efuse_serial::srv::SetChannelOn_Request";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>()
{
  return "flatfish_ros_efuse_serial/srv/SetChannelOn_Request";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace flatfish_ros_efuse_serial
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetChannelOn_Response & msg,
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
  const SetChannelOn_Response & msg,
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

inline std::string to_yaml(const SetChannelOn_Response & msg, bool use_flow_style = false)
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
  const flatfish_ros_efuse_serial::srv::SetChannelOn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  flatfish_ros_efuse_serial::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use flatfish_ros_efuse_serial::srv::to_yaml() instead")]]
inline std::string to_yaml(const flatfish_ros_efuse_serial::srv::SetChannelOn_Response & msg)
{
  return flatfish_ros_efuse_serial::srv::to_yaml(msg);
}

template<>
inline const char * data_type<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>()
{
  return "flatfish_ros_efuse_serial::srv::SetChannelOn_Response";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>()
{
  return "flatfish_ros_efuse_serial/srv/SetChannelOn_Response";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flatfish_ros_efuse_serial::srv::SetChannelOn>()
{
  return "flatfish_ros_efuse_serial::srv::SetChannelOn";
}

template<>
inline const char * name<flatfish_ros_efuse_serial::srv::SetChannelOn>()
{
  return "flatfish_ros_efuse_serial/srv/SetChannelOn";
}

template<>
struct has_fixed_size<flatfish_ros_efuse_serial::srv::SetChannelOn>
  : std::integral_constant<
    bool,
    has_fixed_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>::value &&
    has_fixed_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>::value
  >
{
};

template<>
struct has_bounded_size<flatfish_ros_efuse_serial::srv::SetChannelOn>
  : std::integral_constant<
    bool,
    has_bounded_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>::value &&
    has_bounded_size<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>::value
  >
{
};

template<>
struct is_service<flatfish_ros_efuse_serial::srv::SetChannelOn>
  : std::true_type
{
};

template<>
struct is_service_request<flatfish_ros_efuse_serial::srv::SetChannelOn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<flatfish_ros_efuse_serial::srv::SetChannelOn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNEL_ON__TRAITS_HPP_
