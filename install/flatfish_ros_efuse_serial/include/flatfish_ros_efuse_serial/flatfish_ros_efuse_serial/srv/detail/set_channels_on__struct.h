// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flatfish_ros_efuse_serial:srv/SetChannelsOn.idl
// generated code does not contain a copyright notice

#ifndef FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNELS_ON__STRUCT_H_
#define FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNELS_ON__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'command'
#include "flatfish_ros_efuse_serial/msg/detail/cmd_channel__struct.h"

/// Struct defined in srv/SetChannelsOn in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__srv__SetChannelsOn_Request
{
  int8_t board;
  flatfish_ros_efuse_serial__msg__CmdChannel command;
} flatfish_ros_efuse_serial__srv__SetChannelsOn_Request;

// Struct for a sequence of flatfish_ros_efuse_serial__srv__SetChannelsOn_Request.
typedef struct flatfish_ros_efuse_serial__srv__SetChannelsOn_Request__Sequence
{
  flatfish_ros_efuse_serial__srv__SetChannelsOn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__srv__SetChannelsOn_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetChannelsOn in the package flatfish_ros_efuse_serial.
typedef struct flatfish_ros_efuse_serial__srv__SetChannelsOn_Response
{
  int8_t error;
} flatfish_ros_efuse_serial__srv__SetChannelsOn_Response;

// Struct for a sequence of flatfish_ros_efuse_serial__srv__SetChannelsOn_Response.
typedef struct flatfish_ros_efuse_serial__srv__SetChannelsOn_Response__Sequence
{
  flatfish_ros_efuse_serial__srv__SetChannelsOn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flatfish_ros_efuse_serial__srv__SetChannelsOn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLATFISH_ROS_EFUSE_SERIAL__SRV__DETAIL__SET_CHANNELS_ON__STRUCT_H_
