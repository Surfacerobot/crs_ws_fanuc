// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/srv/get_environment_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__init(tesseract_msgs__srv__GetEnvironmentInformation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // flags
  return true;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(tesseract_msgs__srv__GetEnvironmentInformation_Request * msg)
{
  if (!msg) {
    return;
  }
  // flags
}

tesseract_msgs__srv__GetEnvironmentInformation_Request *
tesseract_msgs__srv__GetEnvironmentInformation_Request__create()
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request * msg = (tesseract_msgs__srv__GetEnvironmentInformation_Request *)malloc(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request));
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Request__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Request * msg)
{
  if (msg) {
    tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__init(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__srv__GetEnvironmentInformation_Request * data = NULL;
  if (size) {
    data = (tesseract_msgs__srv__GetEnvironmentInformation_Request *)calloc(size, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__GetEnvironmentInformation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(&data[i - 1]);
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
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__fini(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__srv__GetEnvironmentInformation_Request__fini(&array->data[i]);
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

tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence *
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__create(size_t size)
{
  tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array = (tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence *)malloc(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence * array)
{
  if (array) {
    tesseract_msgs__srv__GetEnvironmentInformation_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `id`
// Member `link_names`
// Member `joint_names`
// Member `active_link_names`
// Member `active_joint_names`
#include "rosidl_generator_c/string_functions.h"
// Member `command_history`
#include "tesseract_msgs/msg/environment_command__functions.h"
// Member `links`
#include "tesseract_msgs/msg/link__functions.h"
// Member `joints`
#include "tesseract_msgs/msg/joint__functions.h"
// Member `link_transforms`
// Member `joint_transforms`
#include "tesseract_msgs/msg/transform_map__functions.h"

bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__init(tesseract_msgs__srv__GetEnvironmentInformation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // id
  if (!rosidl_generator_c__String__init(&msg->id)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // revision
  // command_history
  if (!tesseract_msgs__msg__EnvironmentCommand__Sequence__init(&msg->command_history, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // links
  if (!tesseract_msgs__msg__Link__Sequence__init(&msg->links, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joints
  if (!tesseract_msgs__msg__Joint__Sequence__init(&msg->joints, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // link_names
  if (!rosidl_generator_c__String__Sequence__init(&msg->link_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joint_names
  if (!rosidl_generator_c__String__Sequence__init(&msg->joint_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // active_link_names
  if (!rosidl_generator_c__String__Sequence__init(&msg->active_link_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // active_joint_names
  if (!rosidl_generator_c__String__Sequence__init(&msg->active_joint_names, 0)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // link_transforms
  if (!tesseract_msgs__msg__TransformMap__init(&msg->link_transforms)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  // joint_transforms
  if (!tesseract_msgs__msg__TransformMap__init(&msg->joint_transforms)) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(tesseract_msgs__srv__GetEnvironmentInformation_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // id
  rosidl_generator_c__String__fini(&msg->id);
  // revision
  // command_history
  tesseract_msgs__msg__EnvironmentCommand__Sequence__fini(&msg->command_history);
  // links
  tesseract_msgs__msg__Link__Sequence__fini(&msg->links);
  // joints
  tesseract_msgs__msg__Joint__Sequence__fini(&msg->joints);
  // link_names
  rosidl_generator_c__String__Sequence__fini(&msg->link_names);
  // joint_names
  rosidl_generator_c__String__Sequence__fini(&msg->joint_names);
  // active_link_names
  rosidl_generator_c__String__Sequence__fini(&msg->active_link_names);
  // active_joint_names
  rosidl_generator_c__String__Sequence__fini(&msg->active_joint_names);
  // link_transforms
  tesseract_msgs__msg__TransformMap__fini(&msg->link_transforms);
  // joint_transforms
  tesseract_msgs__msg__TransformMap__fini(&msg->joint_transforms);
}

tesseract_msgs__srv__GetEnvironmentInformation_Response *
tesseract_msgs__srv__GetEnvironmentInformation_Response__create()
{
  tesseract_msgs__srv__GetEnvironmentInformation_Response * msg = (tesseract_msgs__srv__GetEnvironmentInformation_Response *)malloc(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response));
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Response__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Response * msg)
{
  if (msg) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__init(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__srv__GetEnvironmentInformation_Response * data = NULL;
  if (size) {
    data = (tesseract_msgs__srv__GetEnvironmentInformation_Response *)calloc(size, sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__GetEnvironmentInformation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(&data[i - 1]);
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
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__fini(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__srv__GetEnvironmentInformation_Response__fini(&array->data[i]);
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

tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence *
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__create(size_t size)
{
  tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array = (tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence *)malloc(sizeof(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence * array)
{
  if (array) {
    tesseract_msgs__srv__GetEnvironmentInformation_Response__Sequence__fini(array);
  }
  free(array);
}
