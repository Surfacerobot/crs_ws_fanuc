// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/ContactResult.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/contact_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `link_names`
#include "rosidl_generator_c/string_functions.h"
// Member `nearest_points`
// Member `nearest_points_local`
// Member `normal`
#include "geometry_msgs/msg/vector3__functions.h"
// Member `transform`
// Member `cc_transform`
#include "geometry_msgs/msg/pose__functions.h"

bool
tesseract_msgs__msg__ContactResult__init(tesseract_msgs__msg__ContactResult * msg)
{
  if (!msg) {
    return false;
  }
  // distance
  // type_id
  // link_names
  for (size_t i = 0; i < 2; ++i) {
    if (!rosidl_generator_c__String__init(&msg->link_names[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // shape_id
  // subshape_id
  // nearest_points
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__init(&msg->nearest_points[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // nearest_points_local
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Vector3__init(&msg->nearest_points_local[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__init(&msg->transform[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  // normal
  if (!geometry_msgs__msg__Vector3__init(&msg->normal)) {
    tesseract_msgs__msg__ContactResult__fini(msg);
    return false;
  }
  // cc_time
  // cc_type
  // cc_transform
  for (size_t i = 0; i < 2; ++i) {
    if (!geometry_msgs__msg__Pose__init(&msg->cc_transform[i])) {
      tesseract_msgs__msg__ContactResult__fini(msg);
      return false;
    }
  }
  return true;
}

void
tesseract_msgs__msg__ContactResult__fini(tesseract_msgs__msg__ContactResult * msg)
{
  if (!msg) {
    return;
  }
  // distance
  // type_id
  // link_names
  for (size_t i = 0; i < 2; ++i) {
    rosidl_generator_c__String__fini(&msg->link_names[i]);
  }
  // shape_id
  // subshape_id
  // nearest_points
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Vector3__fini(&msg->nearest_points[i]);
  }
  // nearest_points_local
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Vector3__fini(&msg->nearest_points_local[i]);
  }
  // transform
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Pose__fini(&msg->transform[i]);
  }
  // normal
  geometry_msgs__msg__Vector3__fini(&msg->normal);
  // cc_time
  // cc_type
  // cc_transform
  for (size_t i = 0; i < 2; ++i) {
    geometry_msgs__msg__Pose__fini(&msg->cc_transform[i]);
  }
}

tesseract_msgs__msg__ContactResult *
tesseract_msgs__msg__ContactResult__create()
{
  tesseract_msgs__msg__ContactResult * msg = (tesseract_msgs__msg__ContactResult *)malloc(sizeof(tesseract_msgs__msg__ContactResult));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__ContactResult));
  bool success = tesseract_msgs__msg__ContactResult__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__ContactResult__destroy(tesseract_msgs__msg__ContactResult * msg)
{
  if (msg) {
    tesseract_msgs__msg__ContactResult__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__ContactResult__Sequence__init(tesseract_msgs__msg__ContactResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__ContactResult * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__ContactResult *)calloc(size, sizeof(tesseract_msgs__msg__ContactResult));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__ContactResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__ContactResult__fini(&data[i - 1]);
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
tesseract_msgs__msg__ContactResult__Sequence__fini(tesseract_msgs__msg__ContactResult__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__ContactResult__fini(&array->data[i]);
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

tesseract_msgs__msg__ContactResult__Sequence *
tesseract_msgs__msg__ContactResult__Sequence__create(size_t size)
{
  tesseract_msgs__msg__ContactResult__Sequence * array = (tesseract_msgs__msg__ContactResult__Sequence *)malloc(sizeof(tesseract_msgs__msg__ContactResult__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__ContactResult__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__ContactResult__Sequence__destroy(tesseract_msgs__msg__ContactResult__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__ContactResult__Sequence__fini(array);
  }
  free(array);
}
