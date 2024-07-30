// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__STRUCT_H_

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

/// Struct defined in msg/StatusChannel in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__msg__StatusChannel
{
  rosidl_runtime_c__String name;
  bool default_on;
  bool channel_on;
  double max_current;
  double current;
  bool check_voltage;
  bool error_led;
} flatfish_ros_efuse_serial__msg__StatusChannel;

// Struct for a sequence of flatfish_ros_efuse_serial__msg__StatusChannel.
typedef struct flatfish_ros_efuse_serial__msg__StatusChannel__Sequence
{
  flatfish_ros_efuse_serial__msg__StatusChannel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__msg__StatusChannel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__MSG__DETAIL__STATUS_CHANNEL__STRUCT_H_
