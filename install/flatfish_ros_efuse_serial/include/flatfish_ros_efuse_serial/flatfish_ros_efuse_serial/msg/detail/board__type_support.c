// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flatfish_ros_efuse_serial:msg/Board.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flatfish_ros_efuse_serial/msg/detail/board__rosidl_typesupport_introspection_c.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flatfish_ros_efuse_serial/msg/detail/board__functions.h"
#include "flatfish_ros_efuse_serial/msg/detail/board__struct.h"


// Include directives for member types
// Member `name`
// Member `channels`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__msg__Board__init(message_memory);
}

void flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__msg__Board__fini(message_memory);
}

size_t flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__size_function__Board__channels(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__get_const_function__Board__channels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String * member =
    (const rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void * flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__get_function__Board__channels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String * member =
    (rosidl_runtime_c__String *)(untyped_member);
  return &member[index];
}

void flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__fetch_function__Board__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__get_const_function__Board__channels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__assign_function__Board__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__get_function__Board__channels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__Board, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__Board, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__Board, channels),  // bytes offset in struct
    NULL,  // default value
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__size_function__Board__channels,  // size() function pointer
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__get_const_function__Board__channels,  // get_const(index) function pointer
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__get_function__Board__channels,  // get(index) function pointer
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__fetch_function__Board__channels,  // fetch(index, &value) function pointer
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__assign_function__Board__channels,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_members = {
  "flatfish_ros_efuse_serial__msg",  // message namespace
  "Board",  // message name
  3,  // number of fields
  sizeof(flatfish_ros_efuse_serial__msg__Board),
  flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_member_array,  // message members
  flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, Board)() {
  if (!flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
