// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:msg/BoardArray.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD_ARRAY__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'board'
#include "flatfish_ros_efuse_serial/msg/detail/board__struct.h"

/// Struct defined in msg/BoardArray in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__msg__BoardArray
{
  flatfish_ros_efuse_serial__msg__Board__Sequence board;
} flatfish_ros_efuse_serial__msg__BoardArray;

// Struct for a sequence of flatfish_ros_efuse_serial__msg__BoardArray.
typedef struct flatfish_ros_efuse_serial__msg__BoardArray__Sequence
{
  flatfish_ros_efuse_serial__msg__BoardArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__msg__BoardArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__BOARD_ARRAY__STRUCT_H_
