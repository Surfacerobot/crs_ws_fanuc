// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:msg/ProcessConfiguration.idl
// generated code does not contain a copyright notice
#include "crs_msgs/msg/process_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `yaml_config`
#include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__msg__ProcessConfiguration__init(crs_msgs__msg__ProcessConfiguration * msg)
{
  if (!msg) {
    return false;
  }
  // yaml_config
  if (!rosidl_generator_c__String__init(&msg->yaml_config)) {
    crs_msgs__msg__ProcessConfiguration__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__msg__ProcessConfiguration__fini(crs_msgs__msg__ProcessConfiguration * msg)
{
  if (!msg) {
    return;
  }
  // yaml_config
  rosidl_generator_c__String__fini(&msg->yaml_config);
}

crs_msgs__msg__ProcessConfiguration *
crs_msgs__msg__ProcessConfiguration__create()
{
  crs_msgs__msg__ProcessConfiguration * msg = (crs_msgs__msg__ProcessConfiguration *)malloc(sizeof(crs_msgs__msg__ProcessConfiguration));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__msg__ProcessConfiguration));
  bool success = crs_msgs__msg__ProcessConfiguration__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__msg__ProcessConfiguration__destroy(crs_msgs__msg__ProcessConfiguration * msg)
{
  if (msg) {
    crs_msgs__msg__ProcessConfiguration__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__msg__ProcessConfiguration__Sequence__init(crs_msgs__msg__ProcessConfiguration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__msg__ProcessConfiguration * data = NULL;
  if (size) {
    data = (crs_msgs__msg__ProcessConfiguration *)calloc(size, sizeof(crs_msgs__msg__ProcessConfiguration));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__msg__ProcessConfiguration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__msg__ProcessConfiguration__fini(&data[i - 1]);
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
crs_msgs__msg__ProcessConfiguration__Sequence__fini(crs_msgs__msg__ProcessConfiguration__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__msg__ProcessConfiguration__fini(&array->data[i]);
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

crs_msgs__msg__ProcessConfiguration__Sequence *
crs_msgs__msg__ProcessConfiguration__Sequence__create(size_t size)
{
  crs_msgs__msg__ProcessConfiguration__Sequence * array = (crs_msgs__msg__ProcessConfiguration__Sequence *)malloc(sizeof(crs_msgs__msg__ProcessConfiguration__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__msg__ProcessConfiguration__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__msg__ProcessConfiguration__Sequence__destroy(crs_msgs__msg__ProcessConfiguration__Sequence * array)
{
  if (array) {
    crs_msgs__msg__ProcessConfiguration__Sequence__fini(array);
  }
  free(array);
}
