// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/EnvironmentCommand.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/environment_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `add_link`
#include "tesseract_msgs/msg/link__functions.h"
// Member `add_joint`
// Member `move_link_joint`
#include "tesseract_msgs/msg/joint__functions.h"
// Member `move_joint_name`
// Member `move_joint_parent_link`
// Member `remove_link`
// Member `remove_joint`
// Member `change_link_origin_name`
// Member `change_joint_origin_name`
// Member `change_link_collision_enabled_name`
// Member `change_link_visibility_name`
// Member `remove_allowed_collision_link`
#include "rosidl_generator_c/string_functions.h"
// Member `change_link_origin_pose`
// Member `change_joint_origin_pose`
#include "geometry_msgs/msg/pose__functions.h"
// Member `add_allowed_collision`
// Member `remove_allowed_collision`
#include "tesseract_msgs/msg/allowed_collision_entry__functions.h"
// Member `joint_state`
#include "sensor_msgs/msg/joint_state__functions.h"

bool
tesseract_msgs__msg__EnvironmentCommand__init(tesseract_msgs__msg__EnvironmentCommand * msg)
{
  if (!msg) {
    return false;
  }
  // command
  // add_link
  if (!tesseract_msgs__msg__Link__init(&msg->add_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // add_joint
  if (!tesseract_msgs__msg__Joint__init(&msg->add_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // move_link_joint
  if (!tesseract_msgs__msg__Joint__init(&msg->move_link_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // move_joint_name
  if (!rosidl_generator_c__String__init(&msg->move_joint_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // move_joint_parent_link
  if (!rosidl_generator_c__String__init(&msg->move_joint_parent_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_link
  if (!rosidl_generator_c__String__init(&msg->remove_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_joint
  if (!rosidl_generator_c__String__init(&msg->remove_joint)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_origin_name
  if (!rosidl_generator_c__String__init(&msg->change_link_origin_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_origin_pose
  if (!geometry_msgs__msg__Pose__init(&msg->change_link_origin_pose)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_origin_name
  if (!rosidl_generator_c__String__init(&msg->change_joint_origin_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_joint_origin_pose
  if (!geometry_msgs__msg__Pose__init(&msg->change_joint_origin_pose)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_collision_enabled_name
  if (!rosidl_generator_c__String__init(&msg->change_link_collision_enabled_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_collision_enabled_value
  // change_link_visibility_name
  if (!rosidl_generator_c__String__init(&msg->change_link_visibility_name)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // change_link_visibility_value
  // add_allowed_collision
  if (!tesseract_msgs__msg__AllowedCollisionEntry__init(&msg->add_allowed_collision)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_allowed_collision
  if (!tesseract_msgs__msg__AllowedCollisionEntry__init(&msg->remove_allowed_collision)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // remove_allowed_collision_link
  if (!rosidl_generator_c__String__init(&msg->remove_allowed_collision_link)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  // joint_state
  if (!sensor_msgs__msg__JointState__init(&msg->joint_state)) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__EnvironmentCommand__fini(tesseract_msgs__msg__EnvironmentCommand * msg)
{
  if (!msg) {
    return;
  }
  // command
  // add_link
  tesseract_msgs__msg__Link__fini(&msg->add_link);
  // add_joint
  tesseract_msgs__msg__Joint__fini(&msg->add_joint);
  // move_link_joint
  tesseract_msgs__msg__Joint__fini(&msg->move_link_joint);
  // move_joint_name
  rosidl_generator_c__String__fini(&msg->move_joint_name);
  // move_joint_parent_link
  rosidl_generator_c__String__fini(&msg->move_joint_parent_link);
  // remove_link
  rosidl_generator_c__String__fini(&msg->remove_link);
  // remove_joint
  rosidl_generator_c__String__fini(&msg->remove_joint);
  // change_link_origin_name
  rosidl_generator_c__String__fini(&msg->change_link_origin_name);
  // change_link_origin_pose
  geometry_msgs__msg__Pose__fini(&msg->change_link_origin_pose);
  // change_joint_origin_name
  rosidl_generator_c__String__fini(&msg->change_joint_origin_name);
  // change_joint_origin_pose
  geometry_msgs__msg__Pose__fini(&msg->change_joint_origin_pose);
  // change_link_collision_enabled_name
  rosidl_generator_c__String__fini(&msg->change_link_collision_enabled_name);
  // change_link_collision_enabled_value
  // change_link_visibility_name
  rosidl_generator_c__String__fini(&msg->change_link_visibility_name);
  // change_link_visibility_value
  // add_allowed_collision
  tesseract_msgs__msg__AllowedCollisionEntry__fini(&msg->add_allowed_collision);
  // remove_allowed_collision
  tesseract_msgs__msg__AllowedCollisionEntry__fini(&msg->remove_allowed_collision);
  // remove_allowed_collision_link
  rosidl_generator_c__String__fini(&msg->remove_allowed_collision_link);
  // joint_state
  sensor_msgs__msg__JointState__fini(&msg->joint_state);
}

tesseract_msgs__msg__EnvironmentCommand *
tesseract_msgs__msg__EnvironmentCommand__create()
{
  tesseract_msgs__msg__EnvironmentCommand * msg = (tesseract_msgs__msg__EnvironmentCommand *)malloc(sizeof(tesseract_msgs__msg__EnvironmentCommand));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__EnvironmentCommand));
  bool success = tesseract_msgs__msg__EnvironmentCommand__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__EnvironmentCommand__destroy(tesseract_msgs__msg__EnvironmentCommand * msg)
{
  if (msg) {
    tesseract_msgs__msg__EnvironmentCommand__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__EnvironmentCommand__Sequence__init(tesseract_msgs__msg__EnvironmentCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__EnvironmentCommand * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__EnvironmentCommand *)calloc(size, sizeof(tesseract_msgs__msg__EnvironmentCommand));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__EnvironmentCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__EnvironmentCommand__fini(&data[i - 1]);
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
tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(tesseract_msgs__msg__EnvironmentCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__EnvironmentCommand__fini(&array->data[i]);
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

tesseract_msgs__msg__EnvironmentCommand__Sequence *
tesseract_msgs__msg__EnvironmentCommand__Sequence__create(size_t size)
{
  tesseract_msgs__msg__EnvironmentCommand__Sequence * array = (tesseract_msgs__msg__EnvironmentCommand__Sequence *)malloc(sizeof(tesseract_msgs__msg__EnvironmentCommand__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__EnvironmentCommand__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__EnvironmentCommand__Sequence__destroy(tesseract_msgs__msg__EnvironmentCommand__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(array);
  }
  free(array);
}
