// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/CollisionGeometry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/collision_geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `origin`
#include "geometry_msgs/msg/pose__functions.h"
// Member `geometry`
#include "tesseract_msgs/msg/geometry__functions.h"
// Member `material`
#include "tesseract_msgs/msg/material__functions.h"

bool
tesseract_msgs__msg__CollisionGeometry__init(tesseract_msgs__msg__CollisionGeometry * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    tesseract_msgs__msg__CollisionGeometry__fini(msg);
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    tesseract_msgs__msg__CollisionGeometry__fini(msg);
    return false;
  }
  // geometry
  if (!tesseract_msgs__msg__Geometry__init(&msg->geometry)) {
    tesseract_msgs__msg__CollisionGeometry__fini(msg);
    return false;
  }
  // material
  if (!tesseract_msgs__msg__Material__init(&msg->material)) {
    tesseract_msgs__msg__CollisionGeometry__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__CollisionGeometry__fini(tesseract_msgs__msg__CollisionGeometry * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
  // geometry
  tesseract_msgs__msg__Geometry__fini(&msg->geometry);
  // material
  tesseract_msgs__msg__Material__fini(&msg->material);
}

tesseract_msgs__msg__CollisionGeometry *
tesseract_msgs__msg__CollisionGeometry__create()
{
  tesseract_msgs__msg__CollisionGeometry * msg = (tesseract_msgs__msg__CollisionGeometry *)malloc(sizeof(tesseract_msgs__msg__CollisionGeometry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__CollisionGeometry));
  bool success = tesseract_msgs__msg__CollisionGeometry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__CollisionGeometry__destroy(tesseract_msgs__msg__CollisionGeometry * msg)
{
  if (msg) {
    tesseract_msgs__msg__CollisionGeometry__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__CollisionGeometry__Sequence__init(tesseract_msgs__msg__CollisionGeometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__CollisionGeometry * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__CollisionGeometry *)calloc(size, sizeof(tesseract_msgs__msg__CollisionGeometry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__CollisionGeometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__CollisionGeometry__fini(&data[i - 1]);
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
tesseract_msgs__msg__CollisionGeometry__Sequence__fini(tesseract_msgs__msg__CollisionGeometry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__CollisionGeometry__fini(&array->data[i]);
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

tesseract_msgs__msg__CollisionGeometry__Sequence *
tesseract_msgs__msg__CollisionGeometry__Sequence__create(size_t size)
{
  tesseract_msgs__msg__CollisionGeometry__Sequence * array = (tesseract_msgs__msg__CollisionGeometry__Sequence *)malloc(sizeof(tesseract_msgs__msg__CollisionGeometry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__CollisionGeometry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__CollisionGeometry__Sequence__destroy(tesseract_msgs__msg__CollisionGeometry__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__CollisionGeometry__Sequence__fini(array);
  }
  free(array);
}
