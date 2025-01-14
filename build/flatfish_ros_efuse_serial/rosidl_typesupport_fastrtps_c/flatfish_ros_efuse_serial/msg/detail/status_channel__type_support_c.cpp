// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "flatfish_ros_efuse_serial/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__struct.h"
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__functions.h"
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

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _StatusChannel__ros_msg_type = flatfish_ros_efuse_serial__msg__StatusChannel;

static bool _StatusChannel__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StatusChannel__ros_msg_type * ros_message = static_cast<const _StatusChannel__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: default_on
  {
    cdr << (ros_message->default_on ? true : false);
  }

  // Field name: channel_on
  {
    cdr << (ros_message->channel_on ? true : false);
  }

  // Field name: max_current
  {
    cdr << ros_message->max_current;
  }

  // Field name: current
  {
    cdr << ros_message->current;
  }

  // Field name: check_voltage
  {
    cdr << (ros_message->check_voltage ? true : false);
  }

  // Field name: error_led
  {
    cdr << (ros_message->error_led ? true : false);
  }

  return true;
}

static bool _StatusChannel__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StatusChannel__ros_msg_type * ros_message = static_cast<_StatusChannel__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: default_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->default_on = tmp ? true : false;
  }

  // Field name: channel_on
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->channel_on = tmp ? true : false;
  }

  // Field name: max_current
  {
    cdr >> ros_message->max_current;
  }

  // Field name: current
  {
    cdr >> ros_message->current;
  }

  // Field name: check_voltage
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->check_voltage = tmp ? true : false;
  }

  // Field name: error_led
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->error_led = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flatfish_ros_efuse_serial
size_t get_serialized_size_flatfish_ros_efuse_serial__msg__StatusChannel(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StatusChannel__ros_msg_type * ros_message = static_cast<const _StatusChannel__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name default_on
  {
    size_t item_size = sizeof(ros_message->default_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name channel_on
  {
    size_t item_size = sizeof(ros_message->channel_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_current
  {
    size_t item_size = sizeof(ros_message->max_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current
  {
    size_t item_size = sizeof(ros_message->current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name check_voltage
  {
    size_t item_size = sizeof(ros_message->check_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_led
  {
    size_t item_size = sizeof(ros_message->error_led);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StatusChannel__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_flatfish_ros_efuse_serial__msg__StatusChannel(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_flatfish_ros_efuse_serial
size_t max_serialized_size_flatfish_ros_efuse_serial__msg__StatusChannel(
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

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: default_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: channel_on
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: check_voltage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_led
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
    using DataType = flatfish_ros_efuse_serial__msg__StatusChannel;
    is_plain =
      (
      offsetof(DataType, error_led) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StatusChannel__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_flatfish_ros_efuse_serial__msg__StatusChannel(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StatusChannel = {
  "flatfish_ros_efuse_serial::msg",
  "StatusChannel",
  _StatusChannel__cdr_serialize,
  _StatusChannel__cdr_deserialize,
  _StatusChannel__get_serialized_size,
  _StatusChannel__max_serialized_size
};

static rosidl_message_type_support_t _StatusChannel__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StatusChannel,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, flatfish_ros_efuse_serial, msg, StatusChannel)() {
  return &_StatusChannel__type_support;
}

#if defined(__cplusplus)
}
#endif
