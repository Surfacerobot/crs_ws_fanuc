// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/mesh__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `vertices`
#include "geometry_msgs/msg/point__functions.h"
// Member `faces`
#include "rosidl_generator_c/primitives_sequence_functions.h"
// Member `file_path`
#include "rosidl_generator_c/string_functions.h"

bool
tesseract_msgs__msg__Mesh__init(tesseract_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->vertices, 0)) {
    tesseract_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // faces
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->faces, 0)) {
    tesseract_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // file_path
  if (!rosidl_generator_c__String__init(&msg->file_path)) {
    tesseract_msgs__msg__Mesh__fini(msg);
    return false;
  }
  // scale
  return true;
}

void
tesseract_msgs__msg__Mesh__fini(tesseract_msgs__msg__Mesh * msg)
{
  if (!msg) {
    return;
  }
  // vertices
  geometry_msgs__msg__Point__Sequence__fini(&msg->vertices);
  // faces
  rosidl_generator_c__uint32__Sequence__fini(&msg->faces);
  // file_path
  rosidl_generator_c__String__fini(&msg->file_path);
  // scale
}

tesseract_msgs__msg__Mesh *
tesseract_msgs__msg__Mesh__create()
{
  tesseract_msgs__msg__Mesh * msg = (tesseract_msgs__msg__Mesh *)malloc(sizeof(tesseract_msgs__msg__Mesh));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Mesh));
  bool success = tesseract_msgs__msg__Mesh__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Mesh__destroy(tesseract_msgs__msg__Mesh * msg)
{
  if (msg) {
    tesseract_msgs__msg__Mesh__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__Mesh__Sequence__init(tesseract_msgs__msg__Mesh__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__Mesh * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__Mesh *)calloc(size, sizeof(tesseract_msgs__msg__Mesh));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Mesh__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Mesh__fini(&data[i - 1]);
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
tesseract_msgs__msg__Mesh__Sequence__fini(tesseract_msgs__msg__Mesh__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__Mesh__fini(&array->data[i]);
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

tesseract_msgs__msg__Mesh__Sequence *
tesseract_msgs__msg__Mesh__Sequence__create(size_t size)
{
  tesseract_msgs__msg__Mesh__Sequence * array = (tesseract_msgs__msg__Mesh__Sequence *)malloc(sizeof(tesseract_msgs__msg__Mesh__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Mesh__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Mesh__Sequence__destroy(tesseract_msgs__msg__Mesh__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__Mesh__Sequence__fini(array);
  }
  free(array);
}
