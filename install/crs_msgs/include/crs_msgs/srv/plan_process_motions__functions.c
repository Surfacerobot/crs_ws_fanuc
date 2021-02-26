// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:srv/PlanProcessMotions.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/plan_process_motions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `tool_link`
#include "rosidl_generator_c/string_functions.h"
// Member `start_position`
// Member `end_position`
#include "sensor_msgs/msg/joint_state__functions.h"
// Member `tool_offset`
#include "geometry_msgs/msg/pose__functions.h"
// Member `process_paths`
#include "crs_msgs/msg/tool_process_path__functions.h"

bool
crs_msgs__srv__PlanProcessMotions_Request__init(crs_msgs__srv__PlanProcessMotions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // tool_link
  if (!rosidl_generator_c__String__init(&msg->tool_link)) {
    crs_msgs__srv__PlanProcessMotions_Request__fini(msg);
    return false;
  }
  // start_position
  if (!sensor_msgs__msg__JointState__init(&msg->start_position)) {
    crs_msgs__srv__PlanProcessMotions_Request__fini(msg);
    return false;
  }
  // end_position
  if (!sensor_msgs__msg__JointState__init(&msg->end_position)) {
    crs_msgs__srv__PlanProcessMotions_Request__fini(msg);
    return false;
  }
  // tool_offset
  if (!geometry_msgs__msg__Pose__init(&msg->tool_offset)) {
    crs_msgs__srv__PlanProcessMotions_Request__fini(msg);
    return false;
  }
  // approach_dist
  // retreat_dist
  // tool_speed
  // target_force
  // process_paths
  if (!crs_msgs__msg__ToolProcessPath__Sequence__init(&msg->process_paths, 0)) {
    crs_msgs__srv__PlanProcessMotions_Request__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__PlanProcessMotions_Request__fini(crs_msgs__srv__PlanProcessMotions_Request * msg)
{
  if (!msg) {
    return;
  }
  // tool_link
  rosidl_generator_c__String__fini(&msg->tool_link);
  // start_position
  sensor_msgs__msg__JointState__fini(&msg->start_position);
  // end_position
  sensor_msgs__msg__JointState__fini(&msg->end_position);
  // tool_offset
  geometry_msgs__msg__Pose__fini(&msg->tool_offset);
  // approach_dist
  // retreat_dist
  // tool_speed
  // target_force
  // process_paths
  crs_msgs__msg__ToolProcessPath__Sequence__fini(&msg->process_paths);
}

crs_msgs__srv__PlanProcessMotions_Request *
crs_msgs__srv__PlanProcessMotions_Request__create()
{
  crs_msgs__srv__PlanProcessMotions_Request * msg = (crs_msgs__srv__PlanProcessMotions_Request *)malloc(sizeof(crs_msgs__srv__PlanProcessMotions_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__PlanProcessMotions_Request));
  bool success = crs_msgs__srv__PlanProcessMotions_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__PlanProcessMotions_Request__destroy(crs_msgs__srv__PlanProcessMotions_Request * msg)
{
  if (msg) {
    crs_msgs__srv__PlanProcessMotions_Request__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__PlanProcessMotions_Request__Sequence__init(crs_msgs__srv__PlanProcessMotions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__PlanProcessMotions_Request * data = NULL;
  if (size) {
    data = (crs_msgs__srv__PlanProcessMotions_Request *)calloc(size, sizeof(crs_msgs__srv__PlanProcessMotions_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__PlanProcessMotions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__PlanProcessMotions_Request__fini(&data[i - 1]);
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
crs_msgs__srv__PlanProcessMotions_Request__Sequence__fini(crs_msgs__srv__PlanProcessMotions_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__PlanProcessMotions_Request__fini(&array->data[i]);
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

crs_msgs__srv__PlanProcessMotions_Request__Sequence *
crs_msgs__srv__PlanProcessMotions_Request__Sequence__create(size_t size)
{
  crs_msgs__srv__PlanProcessMotions_Request__Sequence * array = (crs_msgs__srv__PlanProcessMotions_Request__Sequence *)malloc(sizeof(crs_msgs__srv__PlanProcessMotions_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__PlanProcessMotions_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__PlanProcessMotions_Request__Sequence__destroy(crs_msgs__srv__PlanProcessMotions_Request__Sequence * array)
{
  if (array) {
    crs_msgs__srv__PlanProcessMotions_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `plans`
#include "crs_msgs/msg/process_motion_plan__functions.h"
// Member `err_msg`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__srv__PlanProcessMotions_Response__init(crs_msgs__srv__PlanProcessMotions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // plans
  if (!crs_msgs__msg__ProcessMotionPlan__Sequence__init(&msg->plans, 0)) {
    crs_msgs__srv__PlanProcessMotions_Response__fini(msg);
    return false;
  }
  // succeeded
  // err_msg
  if (!rosidl_generator_c__String__init(&msg->err_msg)) {
    crs_msgs__srv__PlanProcessMotions_Response__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__PlanProcessMotions_Response__fini(crs_msgs__srv__PlanProcessMotions_Response * msg)
{
  if (!msg) {
    return;
  }
  // plans
  crs_msgs__msg__ProcessMotionPlan__Sequence__fini(&msg->plans);
  // succeeded
  // err_msg
  rosidl_generator_c__String__fini(&msg->err_msg);
}

crs_msgs__srv__PlanProcessMotions_Response *
crs_msgs__srv__PlanProcessMotions_Response__create()
{
  crs_msgs__srv__PlanProcessMotions_Response * msg = (crs_msgs__srv__PlanProcessMotions_Response *)malloc(sizeof(crs_msgs__srv__PlanProcessMotions_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__PlanProcessMotions_Response));
  bool success = crs_msgs__srv__PlanProcessMotions_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__PlanProcessMotions_Response__destroy(crs_msgs__srv__PlanProcessMotions_Response * msg)
{
  if (msg) {
    crs_msgs__srv__PlanProcessMotions_Response__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__PlanProcessMotions_Response__Sequence__init(crs_msgs__srv__PlanProcessMotions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__PlanProcessMotions_Response * data = NULL;
  if (size) {
    data = (crs_msgs__srv__PlanProcessMotions_Response *)calloc(size, sizeof(crs_msgs__srv__PlanProcessMotions_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__PlanProcessMotions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__PlanProcessMotions_Response__fini(&data[i - 1]);
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
crs_msgs__srv__PlanProcessMotions_Response__Sequence__fini(crs_msgs__srv__PlanProcessMotions_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__PlanProcessMotions_Response__fini(&array->data[i]);
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

crs_msgs__srv__PlanProcessMotions_Response__Sequence *
crs_msgs__srv__PlanProcessMotions_Response__Sequence__create(size_t size)
{
  crs_msgs__srv__PlanProcessMotions_Response__Sequence * array = (crs_msgs__srv__PlanProcessMotions_Response__Sequence *)malloc(sizeof(crs_msgs__srv__PlanProcessMotions_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__PlanProcessMotions_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__PlanProcessMotions_Response__Sequence__destroy(crs_msgs__srv__PlanProcessMotions_Response__Sequence * array)
{
  if (array) {
    crs_msgs__srv__PlanProcessMotions_Response__Sequence__fini(array);
  }
  free(array);
}
