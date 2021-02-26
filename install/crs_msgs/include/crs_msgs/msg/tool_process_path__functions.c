// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:msg/ToolProcessPath.idl
// generated code does not contain a copyright notice
#include "crs_msgs/msg/tool_process_path__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `rasters`
#include "geometry_msgs/msg/pose_array__functions.h"

bool
crs_msgs__msg__ToolProcessPath__init(crs_msgs__msg__ToolProcessPath * msg)
{
  if (!msg) {
    return false;
  }
  // rasters
  if (!geometry_msgs__msg__PoseArray__Sequence__init(&msg->rasters, 0)) {
    crs_msgs__msg__ToolProcessPath__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__msg__ToolProcessPath__fini(crs_msgs__msg__ToolProcessPath * msg)
{
  if (!msg) {
    return;
  }
  // rasters
  geometry_msgs__msg__PoseArray__Sequence__fini(&msg->rasters);
}

crs_msgs__msg__ToolProcessPath *
crs_msgs__msg__ToolProcessPath__create()
{
  crs_msgs__msg__ToolProcessPath * msg = (crs_msgs__msg__ToolProcessPath *)malloc(sizeof(crs_msgs__msg__ToolProcessPath));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__msg__ToolProcessPath));
  bool success = crs_msgs__msg__ToolProcessPath__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__msg__ToolProcessPath__destroy(crs_msgs__msg__ToolProcessPath * msg)
{
  if (msg) {
    crs_msgs__msg__ToolProcessPath__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__msg__ToolProcessPath__Sequence__init(crs_msgs__msg__ToolProcessPath__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__msg__ToolProcessPath * data = NULL;
  if (size) {
    data = (crs_msgs__msg__ToolProcessPath *)calloc(size, sizeof(crs_msgs__msg__ToolProcessPath));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__msg__ToolProcessPath__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__msg__ToolProcessPath__fini(&data[i - 1]);
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
crs_msgs__msg__ToolProcessPath__Sequence__fini(crs_msgs__msg__ToolProcessPath__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__msg__ToolProcessPath__fini(&array->data[i]);
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

crs_msgs__msg__ToolProcessPath__Sequence *
crs_msgs__msg__ToolProcessPath__Sequence__create(size_t size)
{
  crs_msgs__msg__ToolProcessPath__Sequence * array = (crs_msgs__msg__ToolProcessPath__Sequence *)malloc(sizeof(crs_msgs__msg__ToolProcessPath__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__msg__ToolProcessPath__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__msg__ToolProcessPath__Sequence__destroy(crs_msgs__msg__ToolProcessPath__Sequence * array)
{
  if (array) {
    crs_msgs__msg__ToolProcessPath__Sequence__fini(array);
  }
  free(array);
}
