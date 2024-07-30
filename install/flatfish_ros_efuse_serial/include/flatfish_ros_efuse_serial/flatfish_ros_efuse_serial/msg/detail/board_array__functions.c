// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flatfish_ros_efuse_serial:msg/BoardArray.idl
// generated code does not contain a copyright notice
#include "flatfish_ros_efuse_serial/msg/detail/board_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `board`
#include "flatfish_ros_efuse_serial/msg/detail/board__functions.h"

bool
flatfish_ros_efuse_serial__msg__BoardArray__init(flatfish_ros_efuse_serial__msg__BoardArray * msg)
{
  if (!msg) {
    return false;
  }
  // board
  if (!flatfish_ros_efuse_serial__msg__Board__Sequence__init(&msg->board, 0)) {
    flatfish_ros_efuse_serial__msg__BoardArray__fini(msg);
    return false;
  }
  return true;
}

void
flatfish_ros_efuse_serial__msg__BoardArray__fini(flatfish_ros_efuse_serial__msg__BoardArray * msg)
{
  if (!msg) {
    return;
  }
  // board
  flatfish_ros_efuse_serial__msg__Board__Sequence__fini(&msg->board);
}

bool
flatfish_ros_efuse_serial__msg__BoardArray__are_equal(const flatfish_ros_efuse_serial__msg__BoardArray * lhs, const flatfish_ros_efuse_serial__msg__BoardArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // board
  if (!flatfish_ros_efuse_serial__msg__Board__Sequence__are_equal(
      &(lhs->board), &(rhs->board)))
  {
    return false;
  }
  return true;
}

bool
flatfish_ros_efuse_serial__msg__BoardArray__copy(
  const flatfish_ros_efuse_serial__msg__BoardArray * input,
  flatfish_ros_efuse_serial__msg__BoardArray * output)
{
  if (!input || !output) {
    return false;
  }
  // board
  if (!flatfish_ros_efuse_serial__msg__Board__Sequence__copy(
      &(input->board), &(output->board)))
  {
    return false;
  }
  return true;
}

flatfish_ros_efuse_serial__msg__BoardArray *
flatfish_ros_efuse_serial__msg__BoardArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__msg__BoardArray * msg = (flatfish_ros_efuse_serial__msg__BoardArray *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__msg__BoardArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flatfish_ros_efuse_serial__msg__BoardArray));
  bool success = flatfish_ros_efuse_serial__msg__BoardArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flatfish_ros_efuse_serial__msg__BoardArray__destroy(flatfish_ros_efuse_serial__msg__BoardArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flatfish_ros_efuse_serial__msg__BoardArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flatfish_ros_efuse_serial__msg__BoardArray__Sequence__init(flatfish_ros_efuse_serial__msg__BoardArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__msg__BoardArray * data = NULL;

  if (size) {
    data = (flatfish_ros_efuse_serial__msg__BoardArray *)allocator.zero_allocate(size, sizeof(flatfish_ros_efuse_serial__msg__BoardArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flatfish_ros_efuse_serial__msg__BoardArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flatfish_ros_efuse_serial__msg__BoardArray__fini(&data[i - 1]);
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
flatfish_ros_efuse_serial__msg__BoardArray__Sequence__fini(flatfish_ros_efuse_serial__msg__BoardArray__Sequence * array)
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
      flatfish_ros_efuse_serial__msg__BoardArray__fini(&array->data[i]);
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

flatfish_ros_efuse_serial__msg__BoardArray__Sequence *
flatfish_ros_efuse_serial__msg__BoardArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flatfish_ros_efuse_serial__msg__BoardArray__Sequence * array = (flatfish_ros_efuse_serial__msg__BoardArray__Sequence *)allocator.allocate(sizeof(flatfish_ros_efuse_serial__msg__BoardArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flatfish_ros_efuse_serial__msg__BoardArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flatfish_ros_efuse_serial__msg__BoardArray__Sequence__destroy(flatfish_ros_efuse_serial__msg__BoardArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flatfish_ros_efuse_serial__msg__BoardArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flatfish_ros_efuse_serial__msg__BoardArray__Sequence__are_equal(const flatfish_ros_efuse_serial__msg__BoardArray__Sequence * lhs, const flatfish_ros_efuse_serial__msg__BoardArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flatfish_ros_efuse_serial__msg__BoardArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flatfish_ros_efuse_serial__msg__BoardArray__Sequence__copy(
  const flatfish_ros_efuse_serial__msg__BoardArray__Sequence * input,
  flatfish_ros_efuse_serial__msg__BoardArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flatfish_ros_efuse_serial__msg__BoardArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    flatfish_ros_efuse_serial__msg__BoardArray * data =
      (flatfish_ros_efuse_serial__msg__BoardArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flatfish_ros_efuse_serial__msg__BoardArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          flatfish_ros_efuse_serial__msg__BoardArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flatfish_ros_efuse_serial__msg__BoardArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
