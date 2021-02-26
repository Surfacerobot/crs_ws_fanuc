// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:srv/GetConfiguration.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/get_configuration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
crs_msgs__srv__GetConfiguration_Request__init(crs_msgs__srv__GetConfiguration_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
crs_msgs__srv__GetConfiguration_Request__fini(crs_msgs__srv__GetConfiguration_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

crs_msgs__srv__GetConfiguration_Request *
crs_msgs__srv__GetConfiguration_Request__create()
{
  crs_msgs__srv__GetConfiguration_Request * msg = (crs_msgs__srv__GetConfiguration_Request *)malloc(sizeof(crs_msgs__srv__GetConfiguration_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__GetConfiguration_Request));
  bool success = crs_msgs__srv__GetConfiguration_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__GetConfiguration_Request__destroy(crs_msgs__srv__GetConfiguration_Request * msg)
{
  if (msg) {
    crs_msgs__srv__GetConfiguration_Request__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__GetConfiguration_Request__Sequence__init(crs_msgs__srv__GetConfiguration_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__GetConfiguration_Request * data = NULL;
  if (size) {
    data = (crs_msgs__srv__GetConfiguration_Request *)calloc(size, sizeof(crs_msgs__srv__GetConfiguration_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__GetConfiguration_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__GetConfiguration_Request__fini(&data[i - 1]);
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
crs_msgs__srv__GetConfiguration_Request__Sequence__fini(crs_msgs__srv__GetConfiguration_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__GetConfiguration_Request__fini(&array->data[i]);
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

crs_msgs__srv__GetConfiguration_Request__Sequence *
crs_msgs__srv__GetConfiguration_Request__Sequence__create(size_t size)
{
  crs_msgs__srv__GetConfiguration_Request__Sequence * array = (crs_msgs__srv__GetConfiguration_Request__Sequence *)malloc(sizeof(crs_msgs__srv__GetConfiguration_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__GetConfiguration_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__GetConfiguration_Request__Sequence__destroy(crs_msgs__srv__GetConfiguration_Request__Sequence * array)
{
  if (array) {
    crs_msgs__srv__GetConfiguration_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `config`
#include "crs_msgs/msg/process_configuration__functions.h"
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__srv__GetConfiguration_Response__init(crs_msgs__srv__GetConfiguration_Response * msg)
{
  if (!msg) {
    return false;
  }
  // config
  if (!crs_msgs__msg__ProcessConfiguration__init(&msg->config)) {
    crs_msgs__srv__GetConfiguration_Response__fini(msg);
    return false;
  }
  // success
  // err_msg
  if (!rosidl_generator_c__String__init(&msg->err_msg)) {
    crs_msgs__srv__GetConfiguration_Response__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__GetConfiguration_Response__fini(crs_msgs__srv__GetConfiguration_Response * msg)
{
  if (!msg) {
    return;
  }
  // config
  crs_msgs__msg__ProcessConfiguration__fini(&msg->config);
  // success
  // err_msg
  rosidl_generator_c__String__fini(&msg->err_msg);
}

crs_msgs__srv__GetConfiguration_Response *
crs_msgs__srv__GetConfiguration_Response__create()
{
  crs_msgs__srv__GetConfiguration_Response * msg = (crs_msgs__srv__GetConfiguration_Response *)malloc(sizeof(crs_msgs__srv__GetConfiguration_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__GetConfiguration_Response));
  bool success = crs_msgs__srv__GetConfiguration_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__GetConfiguration_Response__destroy(crs_msgs__srv__GetConfiguration_Response * msg)
{
  if (msg) {
    crs_msgs__srv__GetConfiguration_Response__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__GetConfiguration_Response__Sequence__init(crs_msgs__srv__GetConfiguration_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__GetConfiguration_Response * data = NULL;
  if (size) {
    data = (crs_msgs__srv__GetConfiguration_Response *)calloc(size, sizeof(crs_msgs__srv__GetConfiguration_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__GetConfiguration_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__GetConfiguration_Response__fini(&data[i - 1]);
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
crs_msgs__srv__GetConfiguration_Response__Sequence__fini(crs_msgs__srv__GetConfiguration_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__GetConfiguration_Response__fini(&array->data[i]);
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

crs_msgs__srv__GetConfiguration_Response__Sequence *
crs_msgs__srv__GetConfiguration_Response__Sequence__create(size_t size)
{
  crs_msgs__srv__GetConfiguration_Response__Sequence * array = (crs_msgs__srv__GetConfiguration_Response__Sequence *)malloc(sizeof(crs_msgs__srv__GetConfiguration_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__GetConfiguration_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__GetConfiguration_Response__Sequence__destroy(crs_msgs__srv__GetConfiguration_Response__Sequence * array)
{
  if (array) {
    crs_msgs__srv__GetConfiguration_Response__Sequence__fini(array);
  }
  free(array);
}
