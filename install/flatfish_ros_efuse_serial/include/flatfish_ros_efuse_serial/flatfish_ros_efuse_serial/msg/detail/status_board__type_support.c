// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoard.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flatfish_ros_efuse_serial/msg/detail/status_board__rosidl_typesupport_introspection_c.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_board__functions.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_board__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `status_channel`
#include "flatfish_ros_efuse_serial/msg/status_channel.h"
// Member `status_channel`
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__msg__StatusBoard__init(message_memory);
}

void flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__msg__StatusBoard__fini(message_memory);
}

size_t flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__size_function__StatusBoard__status_channel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__get_const_function__StatusBoard__status_channel(
  const void * untyped_member, size_t index)
{
  const flatfish_ros_efuse_serial__msg__StatusChannel * member =
    (const flatfish_ros_efuse_serial__msg__StatusChannel *)(untyped_member);
  return &member[index];
}

void * flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__get_function__StatusBoard__status_channel(
  void * untyped_member, size_t index)
{
  flatfish_ros_efuse_serial__msg__StatusChannel * member =
    (flatfish_ros_efuse_serial__msg__StatusChannel *)(untyped_member);
  return &member[index];
}

void flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__fetch_function__StatusBoard__status_channel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const flatfish_ros_efuse_serial__msg__StatusChannel * item =
    ((const flatfish_ros_efuse_serial__msg__StatusChannel *)
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__get_const_function__StatusBoard__status_channel(untyped_member, index));
  flatfish_ros_efuse_serial__msg__StatusChannel * value =
    (flatfish_ros_efuse_serial__msg__StatusChannel *)(untyped_value);
  *value = *item;
}

void flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__assign_function__StatusBoard__status_channel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  flatfish_ros_efuse_serial__msg__StatusChannel * item =
    ((flatfish_ros_efuse_serial__msg__StatusChannel *)
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__get_function__StatusBoard__status_channel(untyped_member, index));
  const flatfish_ros_efuse_serial__msg__StatusChannel * value =
    (const flatfish_ros_efuse_serial__msg__StatusChannel *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusBoard, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusBoard, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_channel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusBoard, status_channel),  // bytes offset in struct
    NULL,  // default value
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__size_function__StatusBoard__status_channel,  // size() function pointer
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__get_const_function__StatusBoard__status_channel,  // get_const(index) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__get_function__StatusBoard__status_channel,  // get(index) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__fetch_function__StatusBoard__status_channel,  // fetch(index, &value) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__assign_function__StatusBoard__status_channel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_members = {
  "flatfish_ros_efuse_serial__msg",  // message namespace
  "StatusBoard",  // message name
  3,  // number of fields
  sizeof(flatfish_ros_efuse_serial__msg__StatusBoard),
  flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_member_array,  // message members
  flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, StatusBoard)() {
  flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, StatusChannel)();
  if (!flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__msg__StatusBoard__rosidl_typesupport_introspection_c__StatusBoard_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
