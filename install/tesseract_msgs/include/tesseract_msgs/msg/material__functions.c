// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Material.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/material__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `texture_filename`
#include "rosidl_generator_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/color_rgba__functions.h"

bool
tesseract_msgs__msg__Material__init(tesseract_msgs__msg__Material * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    tesseract_msgs__msg__Material__fini(msg);
    return false;
  }
  // texture_filename
  if (!rosidl_generator_c__String__init(&msg->texture_filename)) {
    tesseract_msgs__msg__Material__fini(msg);
    return false;
  }
  // color
  if (!std_msgs__msg__ColorRGBA__init(&msg->color)) {
    tesseract_msgs__msg__Material__fini(msg);
    return false;
  }
  // empty
  return true;
}

void
tesseract_msgs__msg__Material__fini(tesseract_msgs__msg__Material * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // texture_filename
  rosidl_generator_c__String__fini(&msg->texture_filename);
  // color
  std_msgs__msg__ColorRGBA__fini(&msg->color);
  // empty
}

tesseract_msgs__msg__Material *
tesseract_msgs__msg__Material__create()
{
  tesseract_msgs__msg__Material * msg = (tesseract_msgs__msg__Material *)malloc(sizeof(tesseract_msgs__msg__Material));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Material));
  bool success = tesseract_msgs__msg__Material__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Material__destroy(tesseract_msgs__msg__Material * msg)
{
  if (msg) {
    tesseract_msgs__msg__Material__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__Material__Sequence__init(tesseract_msgs__msg__Material__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__Material * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__Material *)calloc(size, sizeof(tesseract_msgs__msg__Material));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Material__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Material__fini(&data[i - 1]);
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
tesseract_msgs__msg__Material__Sequence__fini(tesseract_msgs__msg__Material__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__Material__fini(&array->data[i]);
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

tesseract_msgs__msg__Material__Sequence *
tesseract_msgs__msg__Material__Sequence__create(size_t size)
{
  tesseract_msgs__msg__Material__Sequence * array = (tesseract_msgs__msg__Material__Sequence *)malloc(sizeof(tesseract_msgs__msg__Material__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Material__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Material__Sequence__destroy(tesseract_msgs__msg__Material__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__Material__Sequence__fini(array);
  }
  free(array);
}
