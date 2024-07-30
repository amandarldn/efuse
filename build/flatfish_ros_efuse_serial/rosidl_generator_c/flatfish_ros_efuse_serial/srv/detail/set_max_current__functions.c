// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flatfish_ros_efuse_serial:srv/SetMaxCurrent.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/srv/detail/set_max_current__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__init(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * msg)
{
  if (!msg) {
    return false;
  }
  // board
  // channel
  // value
  return true;
}

void
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__fini(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * msg)
{
  if (!msg) {
    return;
  }
  // board
  // channel
  // value
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__are_equal(const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * lhs, const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // board
  if (lhs->board != rhs->board) {
    return false;
  }
  // channel
  if (lhs->channel != rhs->channel) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__copy(
  const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * input,
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // board
  output->board = input->board;
  // channel
  output->channel = input->channel;
  // value
  output->value = input->value;
  return true;
}

flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request *
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * msg = (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request));
  bool success = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__destroy(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__init(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * data = NULL;

  if (size) {
    data = (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request *)allocator.zero_allocate(size, sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__fini(&data[i - 1]);
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
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__fini(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * array)
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
      flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__fini(&array->data[i]);
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

flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence *
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * array = (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__destroy(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__are_equal(const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * lhs, const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence__copy(
  const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * input,
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request * data =
      (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flatfish_ros_efuse_serial__srv__SetMaxCurrent_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__init(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * msg)
{
  if (!msg) {
    return false;
  }
  // error
  return true;
}

void
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__fini(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * msg)
{
  if (!msg) {
    return;
  }
  // error
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__are_equal(const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * lhs, const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (lhs->error != rhs->error) {
    return false;
  }
  return true;
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__copy(
  const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * input,
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  output->error = input->error;
  return true;
}

flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response *
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * msg = (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response));
  bool success = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__destroy(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__init(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * data = NULL;

  if (size) {
    data = (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response *)allocator.zero_allocate(size, sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__fini(&data[i - 1]);
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
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__fini(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * array)
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
      flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__fini(&array->data[i]);
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

flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence *
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * array = (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__destroy(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__are_equal(const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * lhs, const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence__copy(
  const flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * input,
  flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response * data =
      (flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flatfish_ros_efuse_serial__srv__SetMaxCurrent_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
