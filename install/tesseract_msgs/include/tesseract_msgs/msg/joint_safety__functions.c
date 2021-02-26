// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/JointSafety.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/joint_safety__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tesseract_msgs__msg__JointSafety__init(tesseract_msgs__msg__JointSafety * msg)
{
  if (!msg) {
    return false;
  }
  // soft_upper_limit
  // soft_lower_limit
  // k_position
  // k_velocity
  // empty
  return true;
}

void
tesseract_msgs__msg__JointSafety__fini(tesseract_msgs__msg__JointSafety * msg)
{
  if (!msg) {
    return;
  }
  // soft_upper_limit
  // soft_lower_limit
  // k_position
  // k_velocity
  // empty
}

tesseract_msgs__msg__JointSafety *
tesseract_msgs__msg__JointSafety__create()
{
  tesseract_msgs__msg__JointSafety * msg = (tesseract_msgs__msg__JointSafety *)malloc(sizeof(tesseract_msgs__msg__JointSafety));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__JointSafety));
  bool success = tesseract_msgs__msg__JointSafety__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__JointSafety__destroy(tesseract_msgs__msg__JointSafety * msg)
{
  if (msg) {
    tesseract_msgs__msg__JointSafety__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__JointSafety__Sequence__init(tesseract_msgs__msg__JointSafety__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__JointSafety * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__JointSafety *)calloc(size, sizeof(tesseract_msgs__msg__JointSafety));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__JointSafety__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__JointSafety__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tesseract_msgs__msg__JointSafety__Sequence__fini(tesseract_msgs__msg__JointSafety__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__JointSafety__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tesseract_msgs__msg__JointSafety__Sequence *
tesseract_msgs__msg__JointSafety__Sequence__create(size_t size)
{
  tesseract_msgs__msg__JointSafety__Sequence * array = (tesseract_msgs__msg__JointSafety__Sequence *)malloc(sizeof(tesseract_msgs__msg__JointSafety__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__JointSafety__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__JointSafety__Sequence__destroy(tesseract_msgs__msg__JointSafety__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__JointSafety__Sequence__fini(array);
  }
  free(array);
}
