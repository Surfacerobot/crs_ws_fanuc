// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Geometry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/geometry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `mesh`
#include "tesseract_msgs/msg/mesh__functions.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap__functions.h"

bool
tesseract_msgs__msg__Geometry__init(tesseract_msgs__msg__Geometry * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // sphere_radius
  // cylinder_dimensions
  // cone_dimensions
  // box_dimensions
  // plane_coeff
  // mesh
  if (!tesseract_msgs__msg__Mesh__init(&msg->mesh)) {
    tesseract_msgs__msg__Geometry__fini(msg);
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__Octomap__init(&msg->octomap)) {
    tesseract_msgs__msg__Geometry__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__Geometry__fini(tesseract_msgs__msg__Geometry * msg)
{
  if (!msg) {
    return;
  }
  // type
  // sphere_radius
  // cylinder_dimensions
  // cone_dimensions
  // box_dimensions
  // plane_coeff
  // mesh
  tesseract_msgs__msg__Mesh__fini(&msg->mesh);
  // octomap
  octomap_msgs__msg__Octomap__fini(&msg->octomap);
}

tesseract_msgs__msg__Geometry *
tesseract_msgs__msg__Geometry__create()
{
  tesseract_msgs__msg__Geometry * msg = (tesseract_msgs__msg__Geometry *)malloc(sizeof(tesseract_msgs__msg__Geometry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Geometry));
  bool success = tesseract_msgs__msg__Geometry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Geometry__destroy(tesseract_msgs__msg__Geometry * msg)
{
  if (msg) {
    tesseract_msgs__msg__Geometry__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__Geometry__Sequence__init(tesseract_msgs__msg__Geometry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__Geometry * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__Geometry *)calloc(size, sizeof(tesseract_msgs__msg__Geometry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Geometry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Geometry__fini(&data[i - 1]);
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
tesseract_msgs__msg__Geometry__Sequence__fini(tesseract_msgs__msg__Geometry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__Geometry__fini(&array->data[i]);
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

tesseract_msgs__msg__Geometry__Sequence *
tesseract_msgs__msg__Geometry__Sequence__create(size_t size)
{
  tesseract_msgs__msg__Geometry__Sequence * array = (tesseract_msgs__msg__Geometry__Sequence *)malloc(sizeof(tesseract_msgs__msg__Geometry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Geometry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Geometry__Sequence__destroy(tesseract_msgs__msg__Geometry__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__Geometry__Sequence__fini(array);
  }
  free(array);
}
