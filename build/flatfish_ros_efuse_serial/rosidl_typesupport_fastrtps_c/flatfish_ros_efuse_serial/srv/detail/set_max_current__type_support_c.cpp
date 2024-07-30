// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flatfish_ros_efuse_serial:srv/SetMaxCurrent.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/srv/detail/set_max_current__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flatfish_ros_efuse_serial/srv/detail/set_max_current__struct.h"
#include "flatfish_ros_efuse_serial/srv/detail/set_max_current__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetMaxCurrent_Request__ros_msg_type = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request;

static bool _SetMaxCurrent_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMaxCurrent_Request__ros_msg_type * ros_message = static_cast<const _SetMaxCurrent_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: board
  {
    cdr << ros_message->board;
  }

  // Field name: channel
  {
    cdr << ros_message->channel;
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  return true;
}

static bool _SetMaxCurrent_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMaxCurrent_Request__ros_msg_type * ros_message = static_cast<_SetMaxCurrent_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: board
  {
    cdr >> ros_message->board;
  }

  // Field name: channel
  {
    cdr >> ros_message->channel;
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flatfish_ros_efuse_serial
size_t get_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMaxCurrent_Request__ros_msg_type * ros_message = static_cast<const _SetMaxCurrent_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name board
  {
    size_t item_size = sizeof(ros_message->board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel
  {
    size_t item_size = sizeof(ros_message->channel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMaxCurrent_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flatfish_ros_efuse_serial
size_t max_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: board
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: channel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request;
    is_plain =
      (
      offsetof(DataType, value) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetMaxCurrent_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMaxCurrent_Request = {
  "flatfish_ros_efuse_serial::srv",
  "SetMaxCurrent_Request",
  _SetMaxCurrent_Request__cdr_serialize,
  _SetMaxCurrent_Request__cdr_deserialize,
  _SetMaxCurrent_Request__get_serialized_size,
  _SetMaxCurrent_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetMaxCurrent_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMaxCurrent_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flatfish_ros_efuse_serial, srv, SetMaxCurrent_Request)() {
  return &_SetMaxCurrent_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/set_max_current__struct.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/set_max_current__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetMaxCurrent_Response__ros_msg_type = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response;

static bool _SetMaxCurrent_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetMaxCurrent_Response__ros_msg_type * ros_message = static_cast<const _SetMaxCurrent_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr << ros_message->error;
  }

  return true;
}

static bool _SetMaxCurrent_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetMaxCurrent_Response__ros_msg_type * ros_message = static_cast<_SetMaxCurrent_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: error
  {
    cdr >> ros_message->error;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flatfish_ros_efuse_serial
size_t get_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetMaxCurrent_Response__ros_msg_type * ros_message = static_cast<const _SetMaxCurrent_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name error
  {
    size_t item_size = sizeof(ros_message->error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetMaxCurrent_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flatfish_ros_efuse_serial
size_t max_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response;
    is_plain =
      (
      offsetof(DataType, error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetMaxCurrent_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetMaxCurrent_Response = {
  "flatfish_ros_efuse_serial::srv",
  "SetMaxCurrent_Response",
  _SetMaxCurrent_Response__cdr_serialize,
  _SetMaxCurrent_Response__cdr_deserialize,
  _SetMaxCurrent_Response__get_serialized_size,
  _SetMaxCurrent_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetMaxCurrent_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetMaxCurrent_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flatfish_ros_efuse_serial, srv, SetMaxCurrent_Response)() {
  return &_SetMaxCurrent_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flatfish_ros_efuse_serial/srv/set_max_current.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetMaxCurrent__callbacks = {
  "flatfish_ros_efuse_serial::srv",
  "SetMaxCurrent",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flatfish_ros_efuse_serial, srv, SetMaxCurrent_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flatfish_ros_efuse_serial, srv, SetMaxCurrent_Response)(),
};

static rosidl_service_type_support_t SetMaxCurrent__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetMaxCurrent__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flatfish_ros_efuse_serial, srv, SetMaxCurrent)() {
  return &SetMaxCurrent__handle;
}

#if defined(__cplusplus)
}
#endif
