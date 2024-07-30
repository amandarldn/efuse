// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:msg/CmdChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/CmdChannel in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__msg__CmdChannel
{
  bool channel[8];
} flatfish_ros_efuse_serial__msg__CmdChannel;

// Struct for a sequence of flatfish_ros_efuse_serial__msg__CmdChannel.
typedef struct flatfish_ros_efuse_serial__msg__CmdChannel__Sequence
{
  flatfish_ros_efuse_serial__msg__CmdChannel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__msg__CmdChannel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__CMD_CHANNEL__STRUCT_H_
