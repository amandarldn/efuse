// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'status_channel'
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.h"

/// Struct defined in msg/StatusBoard in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__msg__StatusBoard
{
  rosidl_runtime_c__String name;
  builtin_interfaces__msg__Time time;
  flatfish_ros_efuse_serial__msg__StatusChannel status_channel[8];
} flatfish_ros_efuse_serial__msg__StatusBoard;

// Struct for a sequence of flatfish_ros_efuse_serial__msg__StatusBoard.
typedef struct flatfish_ros_efuse_serial__msg__StatusBoard__Sequence
{
  flatfish_ros_efuse_serial__msg__StatusBoard * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__msg__StatusBoard__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD__STRUCT_H_
