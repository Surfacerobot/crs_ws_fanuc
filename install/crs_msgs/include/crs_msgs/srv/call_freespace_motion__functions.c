// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:srv/CallFreespaceMotion.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/call_freespace_motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `target_link`
#include "rosidl_generator_c/string_functions.h"
// Member `start_position`
// Member `goal_position`
#include "sensor_msgs/msg/joint_state__functions.h"
// Member `goal_pose`
#include "geometry_msgs/msg/transform__functions.h"

bool
crs_msgs__srv__CallFreespaceMotion_Request__init(crs_msgs__srv__CallFreespaceMotion_Request * msg)
{
  if (!msg) {
    return false;
  }
  // target_link
  if (!rosidl_generator_c__String__init(&msg->target_link)) {
    crs_msgs__srv__CallFreespaceMotion_Request__fini(msg);
    return false;
  }
  // start_position
  if (!sensor_msgs__msg__JointState__init(&msg->start_position)) {
    crs_msgs__srv__CallFreespaceMotion_Request__fini(msg);
    return false;
  }
  // goal_position
  if (!sensor_msgs__msg__JointState__init(&msg->goal_position)) {
    crs_msgs__srv__CallFreespaceMotion_Request__fini(msg);
    return false;
  }
  // goal_pose
  if (!geometry_msgs__msg__Transform__init(&msg->goal_pose)) {
    crs_msgs__srv__CallFreespaceMotion_Request__fini(msg);
    return false;
  }
  // num_steps
  // execute
  return true;
}

void
crs_msgs__srv__CallFreespaceMotion_Request__fini(crs_msgs__srv__CallFreespaceMotion_Request * msg)
{
  if (!msg) {
    return;
  }
  // target_link
  rosidl_generator_c__String__fini(&msg->target_link);
  // start_position
  sensor_msgs__msg__JointState__fini(&msg->start_position);
  // goal_position
  sensor_msgs__msg__JointState__fini(&msg->goal_position);
  // goal_pose
  geometry_msgs__msg__Transform__fini(&msg->goal_pose);
  // num_steps
  // execute
}

crs_msgs__srv__CallFreespaceMotion_Request *
crs_msgs__srv__CallFreespaceMotion_Request__create()
{
  crs_msgs__srv__CallFreespaceMotion_Request * msg = (crs_msgs__srv__CallFreespaceMotion_Request *)malloc(sizeof(crs_msgs__srv__CallFreespaceMotion_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__CallFreespaceMotion_Request));
  bool success = crs_msgs__srv__CallFreespaceMotion_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__CallFreespaceMotion_Request__destroy(crs_msgs__srv__CallFreespaceMotion_Request * msg)
{
  if (msg) {
    crs_msgs__srv__CallFreespaceMotion_Request__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__CallFreespaceMotion_Request__Sequence__init(crs_msgs__srv__CallFreespaceMotion_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__CallFreespaceMotion_Request * data = NULL;
  if (size) {
    data = (crs_msgs__srv__CallFreespaceMotion_Request *)calloc(size, sizeof(crs_msgs__srv__CallFreespaceMotion_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__CallFreespaceMotion_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__CallFreespaceMotion_Request__fini(&data[i - 1]);
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
crs_msgs__srv__CallFreespaceMotion_Request__Sequence__fini(crs_msgs__srv__CallFreespaceMotion_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__CallFreespaceMotion_Request__fini(&array->data[i]);
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

crs_msgs__srv__CallFreespaceMotion_Request__Sequence *
crs_msgs__srv__CallFreespaceMotion_Request__Sequence__create(size_t size)
{
  crs_msgs__srv__CallFreespaceMotion_Request__Sequence * array = (crs_msgs__srv__CallFreespaceMotion_Request__Sequence *)malloc(sizeof(crs_msgs__srv__CallFreespaceMotion_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__CallFreespaceMotion_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__CallFreespaceMotion_Request__Sequence__destroy(crs_msgs__srv__CallFreespaceMotion_Request__Sequence * array)
{
  if (array) {
    crs_msgs__srv__CallFreespaceMotion_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `output_trajectory`
#include "trajectory_msgs/msg/joint_trajectory__functions.h"
// Member `message`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__srv__CallFreespaceMotion_Response__init(crs_msgs__srv__CallFreespaceMotion_Response * msg)
{
  if (!msg) {
    return false;
  }
  // output_trajectory
  if (!trajectory_msgs__msg__JointTrajectory__init(&msg->output_trajectory)) {
    crs_msgs__srv__CallFreespaceMotion_Response__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_generator_c__String__init(&msg->message)) {
    crs_msgs__srv__CallFreespaceMotion_Response__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__CallFreespaceMotion_Response__fini(crs_msgs__srv__CallFreespaceMotion_Response * msg)
{
  if (!msg) {
    return;
  }
  // output_trajectory
  trajectory_msgs__msg__JointTrajectory__fini(&msg->output_trajectory);
  // success
  // message
  rosidl_generator_c__String__fini(&msg->message);
}

crs_msgs__srv__CallFreespaceMotion_Response *
crs_msgs__srv__CallFreespaceMotion_Response__create()
{
  crs_msgs__srv__CallFreespaceMotion_Response * msg = (crs_msgs__srv__CallFreespaceMotion_Response *)malloc(sizeof(crs_msgs__srv__CallFreespaceMotion_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__CallFreespaceMotion_Response));
  bool success = crs_msgs__srv__CallFreespaceMotion_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__CallFreespaceMotion_Response__destroy(crs_msgs__srv__CallFreespaceMotion_Response * msg)
{
  if (msg) {
    crs_msgs__srv__CallFreespaceMotion_Response__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__CallFreespaceMotion_Response__Sequence__init(crs_msgs__srv__CallFreespaceMotion_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__CallFreespaceMotion_Response * data = NULL;
  if (size) {
    data = (crs_msgs__srv__CallFreespaceMotion_Response *)calloc(size, sizeof(crs_msgs__srv__CallFreespaceMotion_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__CallFreespaceMotion_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__CallFreespaceMotion_Response__fini(&data[i - 1]);
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
crs_msgs__srv__CallFreespaceMotion_Response__Sequence__fini(crs_msgs__srv__CallFreespaceMotion_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__CallFreespaceMotion_Response__fini(&array->data[i]);
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

crs_msgs__srv__CallFreespaceMotion_Response__Sequence *
crs_msgs__srv__CallFreespaceMotion_Response__Sequence__create(size_t size)
{
  crs_msgs__srv__CallFreespaceMotion_Response__Sequence * array = (crs_msgs__srv__CallFreespaceMotion_Response__Sequence *)malloc(sizeof(crs_msgs__srv__CallFreespaceMotion_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__CallFreespaceMotion_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__CallFreespaceMotion_Response__Sequence__destroy(crs_msgs__srv__CallFreespaceMotion_Response__Sequence * array)
{
  if (array) {
    crs_msgs__srv__CallFreespaceMotion_Response__Sequence__fini(array);
  }
  free(array);
}
