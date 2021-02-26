// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/JointMimic.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/joint_mimic__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `joint_name`
#include "rosidl_generator_c/string_functions.h"

bool
tesseract_msgs__msg__JointMimic__init(tesseract_msgs__msg__JointMimic * msg)
{
  if (!msg) {
    return false;
  }
  // offset
  // multiplier
  // joint_name
  if (!rosidl_generator_c__String__init(&msg->joint_name)) {
    tesseract_msgs__msg__JointMimic__fini(msg);
    return false;
  }
  // empty
  return true;
}

void
tesseract_msgs__msg__JointMimic__fini(tesseract_msgs__msg__JointMimic * msg)
{
  if (!msg) {
    return;
  }
  // offset
  // multiplier
  // joint_name
  rosidl_generator_c__String__fini(&msg->joint_name);
  // empty
}

tesseract_msgs__msg__JointMimic *
tesseract_msgs__msg__JointMimic__create()
{
  tesseract_msgs__msg__JointMimic * msg = (tesseract_msgs__msg__JointMimic *)malloc(sizeof(tesseract_msgs__msg__JointMimic));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__JointMimic));
  bool success = tesseract_msgs__msg__JointMimic__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__JointMimic__destroy(tesseract_msgs__msg__JointMimic * msg)
{
  if (msg) {
    tesseract_msgs__msg__JointMimic__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__JointMimic__Sequence__init(tesseract_msgs__msg__JointMimic__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__JointMimic * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__JointMimic *)calloc(size, sizeof(tesseract_msgs__msg__JointMimic));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__JointMimic__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__JointMimic__fini(&data[i - 1]);
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
tesseract_msgs__msg__JointMimic__Sequence__fini(tesseract_msgs__msg__JointMimic__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__JointMimic__fini(&array->data[i]);
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

tesseract_msgs__msg__JointMimic__Sequence *
tesseract_msgs__msg__JointMimic__Sequence__create(size_t size)
{
  tesseract_msgs__msg__JointMimic__Sequence * array = (tesseract_msgs__msg__JointMimic__Sequence *)malloc(sizeof(tesseract_msgs__msg__JointMimic__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__JointMimic__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__JointMimic__Sequence__destroy(tesseract_msgs__msg__JointMimic__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__JointMimic__Sequence__fini(array);
  }
  free(array);
}
