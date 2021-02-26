// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `tesseract_state`
#include "tesseract_msgs/msg/tesseract_state__functions.h"
// Member `joint_trajectory`
#include "trajectory_msgs/msg/joint_trajectory__functions.h"
// Member `multi_dof_joint_trajectory`
#include "trajectory_msgs/msg/multi_dof_joint_trajectory__functions.h"

bool
tesseract_msgs__msg__Trajectory__init(tesseract_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // tesseract_state
  if (!tesseract_msgs__msg__TesseractState__init(&msg->tesseract_state)) {
    tesseract_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // joint_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->joint_trajectory)) {
    tesseract_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  // multi_dof_joint_trajectory
  if (!trajectory_msgs__msg__MultiDOFJointTrajectory__init(&msg->multi_dof_joint_trajectory)) {
    tesseract_msgs__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__Trajectory__fini(tesseract_msgs__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // tesseract_state
  tesseract_msgs__msg__TesseractState__fini(&msg->tesseract_state);
  // joint_trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->joint_trajectory);
  // multi_dof_joint_trajectory
  trajectory_msgs__msg__MultiDOFJointTrajectory__fini(&msg->multi_dof_joint_trajectory);
}

tesseract_msgs__msg__Trajectory *
tesseract_msgs__msg__Trajectory__create()
{
  tesseract_msgs__msg__Trajectory * msg = (tesseract_msgs__msg__Trajectory *)malloc(sizeof(tesseract_msgs__msg__Trajectory));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Trajectory));
  bool success = tesseract_msgs__msg__Trajectory__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Trajectory__destroy(tesseract_msgs__msg__Trajectory * msg)
{
  if (msg) {
    tesseract_msgs__msg__Trajectory__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__Trajectory__Sequence__init(tesseract_msgs__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__Trajectory * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__Trajectory *)calloc(size, sizeof(tesseract_msgs__msg__Trajectory));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Trajectory__fini(&data[i - 1]);
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
tesseract_msgs__msg__Trajectory__Sequence__fini(tesseract_msgs__msg__Trajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__Trajectory__fini(&array->data[i]);
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

tesseract_msgs__msg__Trajectory__Sequence *
tesseract_msgs__msg__Trajectory__Sequence__create(size_t size)
{
  tesseract_msgs__msg__Trajectory__Sequence * array = (tesseract_msgs__msg__Trajectory__Sequence *)malloc(sizeof(tesseract_msgs__msg__Trajectory__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Trajectory__Sequence__destroy(tesseract_msgs__msg__Trajectory__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__Trajectory__Sequence__fini(array);
  }
  free(array);
}
