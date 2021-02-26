// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/TransformMap.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/transform_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `names`
#include "rosidl_generator_c/string_functions.h"
// Member `transforms`
#include "geometry_msgs/msg/pose__functions.h"

bool
tesseract_msgs__msg__TransformMap__init(tesseract_msgs__msg__TransformMap * msg)
{
  if (!msg) {
    return false;
  }
  // names
  if (!rosidl_generator_c__String__Sequence__init(&msg->names, 0)) {
    tesseract_msgs__msg__TransformMap__fini(msg);
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->transforms, 0)) {
    tesseract_msgs__msg__TransformMap__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__TransformMap__fini(tesseract_msgs__msg__TransformMap * msg)
{
  if (!msg) {
    return;
  }
  // names
  rosidl_generator_c__String__Sequence__fini(&msg->names);
  // transforms
  geometry_msgs__msg__Pose__Sequence__fini(&msg->transforms);
}

tesseract_msgs__msg__TransformMap *
tesseract_msgs__msg__TransformMap__create()
{
  tesseract_msgs__msg__TransformMap * msg = (tesseract_msgs__msg__TransformMap *)malloc(sizeof(tesseract_msgs__msg__TransformMap));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__TransformMap));
  bool success = tesseract_msgs__msg__TransformMap__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__TransformMap__destroy(tesseract_msgs__msg__TransformMap * msg)
{
  if (msg) {
    tesseract_msgs__msg__TransformMap__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__TransformMap__Sequence__init(tesseract_msgs__msg__TransformMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__TransformMap * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__TransformMap *)calloc(size, sizeof(tesseract_msgs__msg__TransformMap));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__TransformMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__TransformMap__fini(&data[i - 1]);
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
tesseract_msgs__msg__TransformMap__Sequence__fini(tesseract_msgs__msg__TransformMap__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__TransformMap__fini(&array->data[i]);
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

tesseract_msgs__msg__TransformMap__Sequence *
tesseract_msgs__msg__TransformMap__Sequence__create(size_t size)
{
  tesseract_msgs__msg__TransformMap__Sequence * array = (tesseract_msgs__msg__TransformMap__Sequence *)malloc(sizeof(tesseract_msgs__msg__TransformMap__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__TransformMap__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__TransformMap__Sequence__destroy(tesseract_msgs__msg__TransformMap__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__TransformMap__Sequence__fini(array);
  }
  free(array);
}
