// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/msg/pose_set__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `pose_arrays`
#include "geometry_msgs/msg/pose_array__functions.h"

bool
region_detection_msgs__msg__PoseSet__init(region_detection_msgs__msg__PoseSet * msg)
{
  if (!msg) {
    return false;
  }
  // pose_arrays
  if (!geometry_msgs__msg__PoseArray__Sequence__init(&msg->pose_arrays, 0)) {
    region_detection_msgs__msg__PoseSet__fini(msg);
    return false;
  }
  return true;
}

void
region_detection_msgs__msg__PoseSet__fini(region_detection_msgs__msg__PoseSet * msg)
{
  if (!msg) {
    return;
  }
  // pose_arrays
  geometry_msgs__msg__PoseArray__Sequence__fini(&msg->pose_arrays);
}

region_detection_msgs__msg__PoseSet *
region_detection_msgs__msg__PoseSet__create()
{
  region_detection_msgs__msg__PoseSet * msg = (region_detection_msgs__msg__PoseSet *)malloc(sizeof(region_detection_msgs__msg__PoseSet));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(region_detection_msgs__msg__PoseSet));
  bool success = region_detection_msgs__msg__PoseSet__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
region_detection_msgs__msg__PoseSet__destroy(region_detection_msgs__msg__PoseSet * msg)
{
  if (msg) {
    region_detection_msgs__msg__PoseSet__fini(msg);
  }
  free(msg);
}


bool
region_detection_msgs__msg__PoseSet__Sequence__init(region_detection_msgs__msg__PoseSet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  region_detection_msgs__msg__PoseSet * data = NULL;
  if (size) {
    data = (region_detection_msgs__msg__PoseSet *)calloc(size, sizeof(region_detection_msgs__msg__PoseSet));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = region_detection_msgs__msg__PoseSet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        region_detection_msgs__msg__PoseSet__fini(&data[i - 1]);
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
region_detection_msgs__msg__PoseSet__Sequence__fini(region_detection_msgs__msg__PoseSet__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      region_detection_msgs__msg__PoseSet__fini(&array->data[i]);
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

region_detection_msgs__msg__PoseSet__Sequence *
region_detection_msgs__msg__PoseSet__Sequence__create(size_t size)
{
  region_detection_msgs__msg__PoseSet__Sequence * array = (region_detection_msgs__msg__PoseSet__Sequence *)malloc(sizeof(region_detection_msgs__msg__PoseSet__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = region_detection_msgs__msg__PoseSet__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
region_detection_msgs__msg__PoseSet__Sequence__destroy(region_detection_msgs__msg__PoseSet__Sequence * array)
{
  if (array) {
    region_detection_msgs__msg__PoseSet__Sequence__fini(array);
  }
  free(array);
}
