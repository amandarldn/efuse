// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:msg/Board.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__STRUCT_H_

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
// Member 'channels'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Board in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__msg__Board
{
  rosidl_runtime_c__String name;
  uint8_t id;
  rosidl_runtime_c__String channels[8];
} flatfish_ros_efuse_serial__msg__Board;

// Struct for a sequence of flatfish_ros_efuse_serial__msg__Board.
typedef struct flatfish_ros_efuse_serial__msg__Board__Sequence
{
  flatfish_ros_efuse_serial__msg__Board * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__msg__Board__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD__STRUCT_H_
