// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/Joint.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `child_link_name`
// Member `parent_link_name`
#include "rosidl_generator_c/string_functions.h"
// Member `parent_to_joint_origin_transform`
#include "geometry_msgs/msg/pose__functions.h"
// Member `limits`
#include "tesseract_msgs/msg/joint_limits__functions.h"
// Member `dynamics`
#include "tesseract_msgs/msg/joint_dynamics__functions.h"
// Member `safety`
#include "tesseract_msgs/msg/joint_safety__functions.h"
// Member `calibration`
#include "tesseract_msgs/msg/joint_calibration__functions.h"
// Member `mimic`
#include "tesseract_msgs/msg/joint_mimic__functions.h"

bool
tesseract_msgs__msg__Joint__init(tesseract_msgs__msg__Joint * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // type
  // axis
  // child_link_name
  if (!rosidl_generator_c__String__init(&msg->child_link_name)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // parent_link_name
  if (!rosidl_generator_c__String__init(&msg->parent_link_name)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // parent_to_joint_origin_transform
  if (!geometry_msgs__msg__Pose__init(&msg->parent_to_joint_origin_transform)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // limits
  if (!tesseract_msgs__msg__JointLimits__init(&msg->limits)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // dynamics
  if (!tesseract_msgs__msg__JointDynamics__init(&msg->dynamics)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // safety
  if (!tesseract_msgs__msg__JointSafety__init(&msg->safety)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // calibration
  if (!tesseract_msgs__msg__JointCalibration__init(&msg->calibration)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  // mimic
  if (!tesseract_msgs__msg__JointMimic__init(&msg->mimic)) {
    tesseract_msgs__msg__Joint__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__Joint__fini(tesseract_msgs__msg__Joint * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // type
  // axis
  // child_link_name
  rosidl_generator_c__String__fini(&msg->child_link_name);
  // parent_link_name
  rosidl_generator_c__String__fini(&msg->parent_link_name);
  // parent_to_joint_origin_transform
  geometry_msgs__msg__Pose__fini(&msg->parent_to_joint_origin_transform);
  // limits
  tesseract_msgs__msg__JointLimits__fini(&msg->limits);
  // dynamics
  tesseract_msgs__msg__JointDynamics__fini(&msg->dynamics);
  // safety
  tesseract_msgs__msg__JointSafety__fini(&msg->safety);
  // calibration
  tesseract_msgs__msg__JointCalibration__fini(&msg->calibration);
  // mimic
  tesseract_msgs__msg__JointMimic__fini(&msg->mimic);
}

tesseract_msgs__msg__Joint *
tesseract_msgs__msg__Joint__create()
{
  tesseract_msgs__msg__Joint * msg = (tesseract_msgs__msg__Joint *)malloc(sizeof(tesseract_msgs__msg__Joint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__Joint));
  bool success = tesseract_msgs__msg__Joint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__Joint__destroy(tesseract_msgs__msg__Joint * msg)
{
  if (msg) {
    tesseract_msgs__msg__Joint__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__Joint__Sequence__init(tesseract_msgs__msg__Joint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__Joint * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__Joint *)calloc(size, sizeof(tesseract_msgs__msg__Joint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__Joint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__Joint__fini(&data[i - 1]);
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
tesseract_msgs__msg__Joint__Sequence__fini(tesseract_msgs__msg__Joint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__Joint__fini(&array->data[i]);
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

tesseract_msgs__msg__Joint__Sequence *
tesseract_msgs__msg__Joint__Sequence__create(size_t size)
{
  tesseract_msgs__msg__Joint__Sequence * array = (tesseract_msgs__msg__Joint__Sequence *)malloc(sizeof(tesseract_msgs__msg__Joint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__Joint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__Joint__Sequence__destroy(tesseract_msgs__msg__Joint__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__Joint__Sequence__fini(array);
  }
  free(array);
}
