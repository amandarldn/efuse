// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoardArray.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status_board'
#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.h"

/// Struct defined in msg/StatusBoardArray in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__msg__StatusBoardArray
{
  flatfish_ros_efuse_serial__msg__StatusBoard__Sequence status_board;
} flatfish_ros_efuse_serial__msg__StatusBoardArray;

// Struct for a sequence of flatfish_ros_efuse_serial__msg__StatusBoardArray.
typedef struct flatfish_ros_efuse_serial__msg__StatusBoardArray__Sequence
{
  flatfish_ros_efuse_serial__msg__StatusBoardArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__msg__StatusBoardArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_BOARD_ARRAY__STRUCT_H_
