// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flatfish_ros_efuse_serial:msg/StatusChannel.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/msg/detail/status_channel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
flatfish_ros_efuse_serial__msg__StatusChannel__init(flatfish_ros_efuse_serial__msg__StatusChannel * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    flatfish_ros_efuse_serial__msg__StatusChannel__fini(msg);
    return false;
  }
  // default_on
  // channel_on
  // max_current
  // current
  // check_voltage
  // error_led
  return true;
}

void
flatfish_ros_efuse_serial__msg__StatusChannel__fini(flatfish_ros_efuse_serial__msg__StatusChannel * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // default_on
  // channel_on
  // max_current
  // current
  // check_voltage
  // error_led
}

bool
flatfish_ros_efuse_serial__msg__StatusChannel__are_equal(const flatfish_ros_efuse_serial__msg__StatusChannel * lhs, const flatfish_ros_efuse_serial__msg__StatusChannel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // default_on
  if (lhs->default_on != rhs->default_on) {
    return false;
  }
  // channel_on
  if (lhs->channel_on != rhs->channel_on) {
    return false;
  }
  // max_current
  if (lhs->max_current != rhs->max_current) {
    return false;
  }
  // current
  if (lhs->current != rhs->current) {
    return false;
  }
  // check_voltage
  if (lhs->check_voltage != rhs->check_voltage) {
    return false;
  }
  // error_led
  if (lhs->error_led != rhs->error_led) {
    return false;
  }
  return true;
}

bool
flatfish_ros_efuse_serial__msg__StatusChannel__copy(
  const flatfish_ros_efuse_serial__msg__StatusChannel * input,
  flatfish_ros_efuse_serial__msg__StatusChannel * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // default_on
  output->default_on = input->default_on;
  // channel_on
  output->channel_on = input->channel_on;
  // max_current
  output->max_current = input->max_current;
  // current
  output->current = input->current;
  // check_voltage
  output->check_voltage = input->check_voltage;
  // error_led
  output->error_led = input->error_led;
  return true;
}

flatfish_ros_efuse_serial__msg__StatusChannel *
flatfish_ros_efuse_serial__msg__StatusChannel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__msg__StatusChannel * msg = (flatfish_ros_efuse_serial__msg__StatusChannel *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__msg__StatusChannel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flatfish_ros_efuse_serial__msg__StatusChannel));
  bool success = flatfish_ros_efuse_serial__msg__StatusChannel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flatfish_ros_efuse_serial__msg__StatusChannel__destroy(flatfish_ros_efuse_serial__msg__StatusChannel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flatfish_ros_efuse_serial__msg__StatusChannel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__init(flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__msg__StatusChannel * data = NULL;

  if (size) {
    data = (flatfish_ros_efuse_serial__msg__StatusChannel *)allocator.zero_allocate(size, sizeof(flatfish_ros_efuse_serial__msg__StatusChannel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flatfish_ros_efuse_serial__msg__StatusChannel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flatfish_ros_efuse_serial__msg__StatusChannel__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__fini(flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      flatfish_ros_efuse_serial__msg__StatusChannel__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

flatfish_ros_efuse_serial__msg__StatusChannel__Sequence *
flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * array = (flatfish_ros_efuse_serial__msg__StatusChannel__Sequence *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__msg__StatusChannel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__destroy(flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__are_equal(const flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * lhs, const flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flatfish_ros_efuse_serial__msg__StatusChannel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flatfish_ros_efuse_serial__msg__StatusChannel__Sequence__copy(
  const flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * input,
  flatfish_ros_efuse_serial__msg__StatusChannel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flatfish_ros_efuse_serial__msg__StatusChannel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flatfish_ros_efuse_serial__msg__StatusChannel * data =
      (flatfish_ros_efuse_serial__msg__StatusChannel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flatfish_ros_efuse_serial__msg__StatusChannel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flatfish_ros_efuse_serial__msg__StatusChannel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flatfish_ros_efuse_serial__msg__StatusChannel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
