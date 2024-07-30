// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flatfish_ros_efuse_serial:msg/StatusBoardArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__rosidl_typesupport_introspection_c.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__functions.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_board_array__struct.h"


// Include directives for member types
// Member `status_board`
#include "flatfish_ros_efuse_serial/msg/status_board.h"
// Member `status_board`
#include "flatfish_ros_efuse_serial/msg/detail/status_board__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flatfish_ros_efuse_serial__msg__StatusBoardArray__init(message_memory);
}

void flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_fini_function(void * message_memory)
{
  flatfish_ros_efuse_serial__msg__StatusBoardArray__fini(message_memory);
}

size_t flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__size_function__StatusBoardArray__status_board(
  const void * untyped_member)
{
  const flatfish_ros_efuse_serial__msg__StatusBoard__Sequence * member =
    (const flatfish_ros_efuse_serial__msg__StatusBoard__Sequence *)(untyped_member);
  return member->size;
}

const void * flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__get_const_function__StatusBoardArray__status_board(
  const void * untyped_member, size_t index)
{
  const flatfish_ros_efuse_serial__msg__StatusBoard__Sequence * member =
    (const flatfish_ros_efuse_serial__msg__StatusBoard__Sequence *)(untyped_member);
  return &member->data[index];
}

void * flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__get_function__StatusBoardArray__status_board(
  void * untyped_member, size_t index)
{
  flatfish_ros_efuse_serial__msg__StatusBoard__Sequence * member =
    (flatfish_ros_efuse_serial__msg__StatusBoard__Sequence *)(untyped_member);
  return &member->data[index];
}

void flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__fetch_function__StatusBoardArray__status_board(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const flatfish_ros_efuse_serial__msg__StatusBoard * item =
    ((const flatfish_ros_efuse_serial__msg__StatusBoard *)
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__get_const_function__StatusBoardArray__status_board(untyped_member, index));
  flatfish_ros_efuse_serial__msg__StatusBoard * value =
    (flatfish_ros_efuse_serial__msg__StatusBoard *)(untyped_value);
  *value = *item;
}

void flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__assign_function__StatusBoardArray__status_board(
  void * untyped_member, size_t index, const void * untyped_value)
{
  flatfish_ros_efuse_serial__msg__StatusBoard * item =
    ((flatfish_ros_efuse_serial__msg__StatusBoard *)
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__get_function__StatusBoardArray__status_board(untyped_member, index));
  const flatfish_ros_efuse_serial__msg__StatusBoard * value =
    (const flatfish_ros_efuse_serial__msg__StatusBoard *)(untyped_value);
  *item = *value;
}

bool flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__resize_function__StatusBoardArray__status_board(
  void * untyped_member, size_t size)
{
  flatfish_ros_efuse_serial__msg__StatusBoard__Sequence * member =
    (flatfish_ros_efuse_serial__msg__StatusBoard__Sequence *)(untyped_member);
  flatfish_ros_efuse_serial__msg__StatusBoard__Sequence__fini(member);
  return flatfish_ros_efuse_serial__msg__StatusBoard__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_member_array[1] = {
  {
    "status_board",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flatfish_ros_efuse_serial__msg__StatusBoardArray, status_board),  // bytes offset in struct
    NULL,  // default value
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__size_function__StatusBoardArray__status_board,  // size() function pointer
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__get_const_function__StatusBoardArray__status_board,  // get_const(index) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__get_function__StatusBoardArray__status_board,  // get(index) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__fetch_function__StatusBoardArray__status_board,  // fetch(index, &value) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__assign_function__StatusBoardArray__status_board,  // assign(index, value) function pointer
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__resize_function__StatusBoardArray__status_board  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_members = {
  "flatfish_ros_efuse_serial__msg",  // message namespace
  "StatusBoardArray",  // message name
  1,  // number of fields
  sizeof(flatfish_ros_efuse_serial__msg__StatusBoardArray),
  flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_member_array,  // message members
  flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_init_function,  // function to initialize message memory (memory has to be allocated)
  flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_type_support_handle = {
  0,
  &flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flatfish_ros_efuse_serial
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, StatusBoardArray)() {
  flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flatfish_ros_efuse_serial, msg, StatusBoard)();
  if (!flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_type_support_handle.typesupport_identifier) {
    flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &flatfish_ros_efuse_serial__msg__StatusBoardArray__rosidl_typesupport_introspection_c__StatusBoardArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
