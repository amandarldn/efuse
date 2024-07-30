// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flatfish_ros_efuse_serial:msg/CmdChannel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flatfish_ros_efuse_serial/msg/detail/cmd_channel__rosidl_typesupport_introspection_c.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flatfish_ros_efuse_serial/msg/detail/cmd_channel__functions.h"
#include "flatfish_ros_efuse_serial/msg/detail/cmd_channel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__msg__CmdChannel__init(message_memory);
}

void flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__msg__CmdChannel__fini(message_memory);
}

size_t flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__size_function__CmdChannel__channel(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__get_const_function__CmdChannel__channel(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__get_function__CmdChannel__channel(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__fetch_function__CmdChannel__channel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__get_const_function__CmdChannel__channel(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__assign_function__CmdChannel__channel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__get_function__CmdChannel__channel(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_member_array[1] = {
  {
    "channel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__CmdChannel, channel),  // bytes offset in struct
    NULL,  // default value
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__size_function__CmdChannel__channel,  // size() function pointer
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__get_const_function__CmdChannel__channel,  // get_const(index) function pointer
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__get_function__CmdChannel__channel,  // get(index) function pointer
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__fetch_function__CmdChannel__channel,  // fetch(index, &value) function pointer
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__assign_function__CmdChannel__channel,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_members = {
  "flatfish_ros_efuse_serial__msg",  // message namespace
  "CmdChannel",  // message name
  1,  // number of fields
  sizeof(flatfish_ros_efuse_serial__msg__CmdChannel),
  flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_member_array,  // message members
  flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, CmdChannel)() {
  if (!flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__msg__CmdChannel__rosidl_typesupport_introspection_c__CmdChannel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
