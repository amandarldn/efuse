// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace flatfish_ros_efuse_serial
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
cdr_serialize(
  const flatfish_ros_efuse_serial::msg::StatusBoard & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flatfish_ros_efuse_serial::msg::StatusBoard & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
get_serialized_size(
  const flatfish_ros_efuse_serial::msg::StatusBoard & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
max_serialized_size_StatusBoard(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flatfish_ros_efuse_serial

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flatfish_ros_efuse_serial, msg, StatusBoard)();

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
