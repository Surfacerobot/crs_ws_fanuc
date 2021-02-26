// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/TesseractInitInfo.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/tesseract_init_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `scene_graph`
#include "tesseract_msgs/msg/scene_graph__functions.h"
// Member `urdf_string`
// Member `srdf_string`
// Member `urdf_path`
// Member `srdf_path`
#include "rosidl_generator_c/string_functions.h"

bool
tesseract_msgs__msg__TesseractInitInfo__init(tesseract_msgs__msg__TesseractInitInfo * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // scene_graph
  if (!tesseract_msgs__msg__SceneGraph__init(&msg->scene_graph)) {
    tesseract_msgs__msg__TesseractInitInfo__fini(msg);
    return false;
  }
  // urdf_string
  if (!rosidl_generator_c__String__init(&msg->urdf_string)) {
    tesseract_msgs__msg__TesseractInitInfo__fini(msg);
    return false;
  }
  // srdf_string
  if (!rosidl_generator_c__String__init(&msg->srdf_string)) {
    tesseract_msgs__msg__TesseractInitInfo__fini(msg);
    return false;
  }
  // urdf_path
  if (!rosidl_generator_c__String__init(&msg->urdf_path)) {
    tesseract_msgs__msg__TesseractInitInfo__fini(msg);
    return false;
  }
  // srdf_path
  if (!rosidl_generator_c__String__init(&msg->srdf_path)) {
    tesseract_msgs__msg__TesseractInitInfo__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__TesseractInitInfo__fini(tesseract_msgs__msg__TesseractInitInfo * msg)
{
  if (!msg) {
    return;
  }
  // type
  // scene_graph
  tesseract_msgs__msg__SceneGraph__fini(&msg->scene_graph);
  // urdf_string
  rosidl_generator_c__String__fini(&msg->urdf_string);
  // srdf_string
  rosidl_generator_c__String__fini(&msg->srdf_string);
  // urdf_path
  rosidl_generator_c__String__fini(&msg->urdf_path);
  // srdf_path
  rosidl_generator_c__String__fini(&msg->srdf_path);
}

tesseract_msgs__msg__TesseractInitInfo *
tesseract_msgs__msg__TesseractInitInfo__create()
{
  tesseract_msgs__msg__TesseractInitInfo * msg = (tesseract_msgs__msg__TesseractInitInfo *)malloc(sizeof(tesseract_msgs__msg__TesseractInitInfo));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__TesseractInitInfo));
  bool success = tesseract_msgs__msg__TesseractInitInfo__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__TesseractInitInfo__destroy(tesseract_msgs__msg__TesseractInitInfo * msg)
{
  if (msg) {
    tesseract_msgs__msg__TesseractInitInfo__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__TesseractInitInfo__Sequence__init(tesseract_msgs__msg__TesseractInitInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__TesseractInitInfo * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__TesseractInitInfo *)calloc(size, sizeof(tesseract_msgs__msg__TesseractInitInfo));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__TesseractInitInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__TesseractInitInfo__fini(&data[i - 1]);
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
tesseract_msgs__msg__TesseractInitInfo__Sequence__fini(tesseract_msgs__msg__TesseractInitInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__TesseractInitInfo__fini(&array->data[i]);
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

tesseract_msgs__msg__TesseractInitInfo__Sequence *
tesseract_msgs__msg__TesseractInitInfo__Sequence__create(size_t size)
{
  tesseract_msgs__msg__TesseractInitInfo__Sequence * array = (tesseract_msgs__msg__TesseractInitInfo__Sequence *)malloc(sizeof(tesseract_msgs__msg__TesseractInitInfo__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__TesseractInitInfo__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__TesseractInitInfo__Sequence__destroy(tesseract_msgs__msg__TesseractInitInfo__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__TesseractInitInfo__Sequence__fini(array);
  }
  free(array);
}
