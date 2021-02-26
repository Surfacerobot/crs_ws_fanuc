// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Link.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `inertial`
#include "tesseract_msgs/msg/inertial__functions.h"
// Member `visual`
#include "tesseract_msgs/msg/visual_geometry__functions.h"
// Member `collision`
#include "tesseract_msgs/msg/collision_geometry__functions.h"

bool
tesseract_msgs__msg__Link__init(tesseract_msgs__msg__Link * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    tesseract_msgs__msg__Link__fini(msg);
    return false;
  }
  // inertial
  if (!tesseract_msgs__msg__Inertial__init(&msg->inertial)) {
    tesseract_msgs__msg__Link__fini(msg);
    return false;
  }
  // visual
  if (!tesseract_msgs__msg__VisualGeometry__Sequence__init(&msg->visual, 0)) {
    tesseract_msgs__msg__Link__fini(msg);
    return false;
  }
  // collision
  if (!tesseract_msgs__msg__CollisionGeometry__Sequence__init(&msg->collision, 0)) {
    tesseract_msgs__msg__Link__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__Link__fini(tesseract_msgs__msg__Link * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // inertial
  tesseract_msgs__msg__Inertial__fini(&msg->inertial);
  // visual
  tesseract_msgs__msg__VisualGeometry__Sequence__fini(&msg->visual);
  // collision
  tesseract_msgs__msg__CollisionGeometry__Sequence__fini(&msg->collision);
}

tesseract_msgs__msg__Link *
tesseract_msgs__msg__Link__create()
{
  tesseract_msgs__msg__Link * msg = (tesseract_msgs__msg__Link *)malloc(sizeof(tesseract_msgs__msg__Link));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Link));
  bool success = tesseract_msgs__msg__Link__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Link__destroy(tesseract_msgs__msg__Link * msg)
{
  if (msg) {
    tesseract_msgs__msg__Link__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__Link__Sequence__init(tesseract_msgs__msg__Link__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__Link * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__Link *)calloc(size, sizeof(tesseract_msgs__msg__Link));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Link__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Link__fini(&data[i - 1]);
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
tesseract_msgs__msg__Link__Sequence__fini(tesseract_msgs__msg__Link__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__Link__fini(&array->data[i]);
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

tesseract_msgs__msg__Link__Sequence *
tesseract_msgs__msg__Link__Sequence__create(size_t size)
{
  tesseract_msgs__msg__Link__Sequence * array = (tesseract_msgs__msg__Link__Sequence *)malloc(sizeof(tesseract_msgs__msg__Link__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Link__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Link__Sequence__destroy(tesseract_msgs__msg__Link__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__Link__Sequence__fini(array);
  }
  free(array);
}
