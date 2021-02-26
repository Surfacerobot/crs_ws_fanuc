// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/TesseractState.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/tesseract_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `id`
#include "rosidl_generator_c/string_functions.h"
// Member `commands`
#include "tesseract_msgs/msg/environment_command__functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state__functions.h"
// Member `multi_dof_joint_state`
#include "sensor_msgs/msg/multi_dof_joint_state__functions.h"
// Member `initial_state`
#include "tesseract_msgs/msg/tesseract_init_info__functions.h"

bool
tesseract_msgs__msg__TesseractState__init(tesseract_msgs__msg__TesseractState * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_generator_c__String__init(&msg->id)) {
    tesseract_msgs__msg__TesseractState__fini(msg);
    return false;
  }
  // revision
  // commands
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&msg->commands, 0)) {
    tesseract_msgs__msg__TesseractState__fini(msg);
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    tesseract_msgs__msg__TesseractState__fini(msg);
    return false;
  }
  // multi_dof_joint_state
  if (!sensor_msgs__msg__MultiDOFJointState__init(&msg->multi_dof_joint_state)) {
    tesseract_msgs__msg__TesseractState__fini(msg);
    return false;
  }
  // initial_state
  if (!tesseract_msgs__msg__TesseractInitInfo__init(&msg->initial_state)) {
    tesseract_msgs__msg__TesseractState__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__TesseractState__fini(tesseract_msgs__msg__TesseractState * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_generator_c__String__fini(&msg->id);
  // revision
  // commands
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(&msg->commands);
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
  // multi_dof_joint_state
  sensor_msgs__msg__MultiDOFJointState__fini(&msg->multi_dof_joint_state);
  // initial_state
  tesseract_msgs__msg__TesseractInitInfo__fini(&msg->initial_state);
}

tesseract_msgs__msg__TesseractState *
tesseract_msgs__msg__TesseractState__create()
{
  tesseract_msgs__msg__TesseractState * msg = (tesseract_msgs__msg__TesseractState *)malloc(sizeof(tesseract_msgs__msg__TesseractState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__TesseractState));
  bool success = tesseract_msgs__msg__TesseractState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__TesseractState__destroy(tesseract_msgs__msg__TesseractState * msg)
{
  if (msg) {
    tesseract_msgs__msg__TesseractState__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__TesseractState__Sequence__init(tesseract_msgs__msg__TesseractState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__TesseractState * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__TesseractState *)calloc(size, sizeof(tesseract_msgs__msg__TesseractState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__TesseractState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__TesseractState__fini(&data[i - 1]);
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
tesseract_msgs__msg__TesseractState__Sequence__fini(tesseract_msgs__msg__TesseractState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__TesseractState__fini(&array->data[i]);
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

tesseract_msgs__msg__TesseractState__Sequence *
tesseract_msgs__msg__TesseractState__Sequence__create(size_t size)
{
  tesseract_msgs__msg__TesseractState__Sequence * array = (tesseract_msgs__msg__TesseractState__Sequence *)malloc(sizeof(tesseract_msgs__msg__TesseractState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__TesseractState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__TesseractState__Sequence__destroy(tesseract_msgs__msg__TesseractState__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__TesseractState__Sequence__fini(array);
  }
  free(array);
}
