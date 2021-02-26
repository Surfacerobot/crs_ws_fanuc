// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:srv/GetAvailableActions.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/get_available_actions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `search_pattern`
#include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__srv__GetAvailableActions_Request__init(crs_msgs__srv__GetAvailableActions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // search_pattern
  if (!rosidl_generator_c__String__init(&msg->search_pattern)) {
    crs_msgs__srv__GetAvailableActions_Request__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__GetAvailableActions_Request__fini(crs_msgs__srv__GetAvailableActions_Request * msg)
{
  if (!msg) {
    return;
  }
  // search_pattern
  rosidl_generator_c__String__fini(&msg->search_pattern);
}

crs_msgs__srv__GetAvailableActions_Request *
crs_msgs__srv__GetAvailableActions_Request__create()
{
  crs_msgs__srv__GetAvailableActions_Request * msg = (crs_msgs__srv__GetAvailableActions_Request *)malloc(sizeof(crs_msgs__srv__GetAvailableActions_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__GetAvailableActions_Request));
  bool success = crs_msgs__srv__GetAvailableActions_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__GetAvailableActions_Request__destroy(crs_msgs__srv__GetAvailableActions_Request * msg)
{
  if (msg) {
    crs_msgs__srv__GetAvailableActions_Request__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__GetAvailableActions_Request__Sequence__init(crs_msgs__srv__GetAvailableActions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__GetAvailableActions_Request * data = NULL;
  if (size) {
    data = (crs_msgs__srv__GetAvailableActions_Request *)calloc(size, sizeof(crs_msgs__srv__GetAvailableActions_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__GetAvailableActions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__GetAvailableActions_Request__fini(&data[i - 1]);
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
crs_msgs__srv__GetAvailableActions_Request__Sequence__fini(crs_msgs__srv__GetAvailableActions_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__GetAvailableActions_Request__fini(&array->data[i]);
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

crs_msgs__srv__GetAvailableActions_Request__Sequence *
crs_msgs__srv__GetAvailableActions_Request__Sequence__create(size_t size)
{
  crs_msgs__srv__GetAvailableActions_Request__Sequence * array = (crs_msgs__srv__GetAvailableActions_Request__Sequence *)malloc(sizeof(crs_msgs__srv__GetAvailableActions_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__GetAvailableActions_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__GetAvailableActions_Request__Sequence__destroy(crs_msgs__srv__GetAvailableActions_Request__Sequence * array)
{
  if (array) {
    crs_msgs__srv__GetAvailableActions_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `action_ids`
// Member `err_msg`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__srv__GetAvailableActions_Response__init(crs_msgs__srv__GetAvailableActions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // action_ids
  if (!rosidl_generator_c__String__Sequence__init(&msg->action_ids, 0)) {
    crs_msgs__srv__GetAvailableActions_Response__fini(msg);
    return false;
  }
  // succeeded
  // err_msg
  if (!rosidl_generator_c__String__init(&msg->err_msg)) {
    crs_msgs__srv__GetAvailableActions_Response__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__GetAvailableActions_Response__fini(crs_msgs__srv__GetAvailableActions_Response * msg)
{
  if (!msg) {
    return;
  }
  // action_ids
  rosidl_generator_c__String__Sequence__fini(&msg->action_ids);
  // succeeded
  // err_msg
  rosidl_generator_c__String__fini(&msg->err_msg);
}

crs_msgs__srv__GetAvailableActions_Response *
crs_msgs__srv__GetAvailableActions_Response__create()
{
  crs_msgs__srv__GetAvailableActions_Response * msg = (crs_msgs__srv__GetAvailableActions_Response *)malloc(sizeof(crs_msgs__srv__GetAvailableActions_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__GetAvailableActions_Response));
  bool success = crs_msgs__srv__GetAvailableActions_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__GetAvailableActions_Response__destroy(crs_msgs__srv__GetAvailableActions_Response * msg)
{
  if (msg) {
    crs_msgs__srv__GetAvailableActions_Response__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__GetAvailableActions_Response__Sequence__init(crs_msgs__srv__GetAvailableActions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__GetAvailableActions_Response * data = NULL;
  if (size) {
    data = (crs_msgs__srv__GetAvailableActions_Response *)calloc(size, sizeof(crs_msgs__srv__GetAvailableActions_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__GetAvailableActions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__GetAvailableActions_Response__fini(&data[i - 1]);
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
crs_msgs__srv__GetAvailableActions_Response__Sequence__fini(crs_msgs__srv__GetAvailableActions_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__GetAvailableActions_Response__fini(&array->data[i]);
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

crs_msgs__srv__GetAvailableActions_Response__Sequence *
crs_msgs__srv__GetAvailableActions_Response__Sequence__create(size_t size)
{
  crs_msgs__srv__GetAvailableActions_Response__Sequence * array = (crs_msgs__srv__GetAvailableActions_Response__Sequence *)malloc(sizeof(crs_msgs__srv__GetAvailableActions_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__GetAvailableActions_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__GetAvailableActions_Response__Sequence__destroy(crs_msgs__srv__GetAvailableActions_Response__Sequence * array)
{
  if (array) {
    crs_msgs__srv__GetAvailableActions_Response__Sequence__fini(array);
  }
  free(array);
}
