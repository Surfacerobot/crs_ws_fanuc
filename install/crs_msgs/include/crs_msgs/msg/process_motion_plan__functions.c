// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice
#include "crs_msgs/msg/process_motion_plan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `start`
// Member `process_motions`
// Member `free_motions`
// Member `end`
#include "trajectory_msgs/msg/joint_trajectory__functions.h"
// Member `force_controlled_process_motions`
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__functions.h"

bool
crs_msgs__msg__ProcessMotionPlan__init(crs_msgs__msg__ProcessMotionPlan * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->start)) {
    crs_msgs__msg__ProcessMotionPlan__fini(msg);
    return false;
  }
  // process_motions
  if (!trajectory_msgs__msg__JointTrajectory__Sequence__init(&msg->process_motions, 0)) {
    crs_msgs__msg__ProcessMotionPlan__fini(msg);
    return false;
  }
  // force_controlled_process_motions
  if (!cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__init(&msg->force_controlled_process_motions, 0)) {
    crs_msgs__msg__ProcessMotionPlan__fini(msg);
    return false;
  }
  // free_motions
  if (!trajectory_msgs__msg__JointTrajectory__Sequence__init(&msg->free_motions, 0)) {
    crs_msgs__msg__ProcessMotionPlan__fini(msg);
    return false;
  }
  // end
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->end)) {
    crs_msgs__msg__ProcessMotionPlan__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__msg__ProcessMotionPlan__fini(crs_msgs__msg__ProcessMotionPlan * msg)
{
  if (!msg) {
    return;
  }
  // start
  trajectory_msgs__msg__JointTrajectory__fini(&msg->start);
  // process_motions
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(&msg->process_motions);
  // force_controlled_process_motions
  cartesian_trajectory_msgs__msg__CartesianTrajectory__Sequence__fini(&msg->force_controlled_process_motions);
  // free_motions
  trajectory_msgs__msg__JointTrajectory__Sequence__fini(&msg->free_motions);
  // end
  trajectory_msgs__msg__JointTrajectory__fini(&msg->end);
}

crs_msgs__msg__ProcessMotionPlan *
crs_msgs__msg__ProcessMotionPlan__create()
{
  crs_msgs__msg__ProcessMotionPlan * msg = (crs_msgs__msg__ProcessMotionPlan *)malloc(sizeof(crs_msgs__msg__ProcessMotionPlan));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__msg__ProcessMotionPlan));
  bool success = crs_msgs__msg__ProcessMotionPlan__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__msg__ProcessMotionPlan__destroy(crs_msgs__msg__ProcessMotionPlan * msg)
{
  if (msg) {
    crs_msgs__msg__ProcessMotionPlan__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__msg__ProcessMotionPlan__Sequence__init(crs_msgs__msg__ProcessMotionPlan__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__msg__ProcessMotionPlan * data = NULL;
  if (size) {
    data = (crs_msgs__msg__ProcessMotionPlan *)calloc(size, sizeof(crs_msgs__msg__ProcessMotionPlan));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__msg__ProcessMotionPlan__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__msg__ProcessMotionPlan__fini(&data[i - 1]);
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
crs_msgs__msg__ProcessMotionPlan__Sequence__fini(crs_msgs__msg__ProcessMotionPlan__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__msg__ProcessMotionPlan__fini(&array->data[i]);
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

crs_msgs__msg__ProcessMotionPlan__Sequence *
crs_msgs__msg__ProcessMotionPlan__Sequence__create(size_t size)
{
  crs_msgs__msg__ProcessMotionPlan__Sequence * array = (crs_msgs__msg__ProcessMotionPlan__Sequence *)malloc(sizeof(crs_msgs__msg__ProcessMotionPlan__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__msg__ProcessMotionPlan__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__msg__ProcessMotionPlan__Sequence__destroy(crs_msgs__msg__ProcessMotionPlan__Sequence * array)
{
  if (array) {
    crs_msgs__msg__ProcessMotionPlan__Sequence__fini(array);
  }
  free(array);
}
