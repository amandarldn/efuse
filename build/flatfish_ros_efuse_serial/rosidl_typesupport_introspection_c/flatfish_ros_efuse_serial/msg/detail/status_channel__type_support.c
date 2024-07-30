// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__rosidl_typesupport_introspection_c.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__functions.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__msg__StatusChannel__init(message_memory);
}

void flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__msg__StatusChannel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, default_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel_on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, channel_on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, max_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "check_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, check_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_led",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusChannel, error_led),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_members = {
  "flatfish_ros_efuse_serial__msg",  // message namespace
  "StatusChannel",  // message name
  7,  // number of fields
  sizeof(flatfish_ros_efuse_serial__msg__StatusChannel),
  flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_member_array,  // message members
  flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, StatusChannel)() {
  if (!flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__msg__StatusChannel__rosidl_typesupport_introspection_c__StatusChannel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
