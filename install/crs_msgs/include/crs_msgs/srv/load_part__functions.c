// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from crs_msgs:srv/LoadPart.idl
// generated code does not contain a copyright notice
#include "crs_msgs/srv/load_part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `path_to_part`
#include "rosidl_generator_c/string_functions.h"
// Member `part_origin`
#include "geometry_msgs/msg/pose__functions.h"

bool
crs_msgs__srv__LoadPart_Request__init(crs_msgs__srv__LoadPart_Request * msg)
{
  if (!msg) {
    return false;
  }
  // path_to_part
  if (!rosidl_generator_c__String__init(&msg->path_to_part)) {
    crs_msgs__srv__LoadPart_Request__fini(msg);
    return false;
  }
  // part_origin
  if (!geometry_msgs__msg__Pose__init(&msg->part_origin)) {
    crs_msgs__srv__LoadPart_Request__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__LoadPart_Request__fini(crs_msgs__srv__LoadPart_Request * msg)
{
  if (!msg) {
    return;
  }
  // path_to_part
  rosidl_generator_c__String__fini(&msg->path_to_part);
  // part_origin
  geometry_msgs__msg__Pose__fini(&msg->part_origin);
}

crs_msgs__srv__LoadPart_Request *
crs_msgs__srv__LoadPart_Request__create()
{
  crs_msgs__srv__LoadPart_Request * msg = (crs_msgs__srv__LoadPart_Request *)malloc(sizeof(crs_msgs__srv__LoadPart_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__LoadPart_Request));
  bool success = crs_msgs__srv__LoadPart_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__LoadPart_Request__destroy(crs_msgs__srv__LoadPart_Request * msg)
{
  if (msg) {
    crs_msgs__srv__LoadPart_Request__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__LoadPart_Request__Sequence__init(crs_msgs__srv__LoadPart_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__LoadPart_Request * data = NULL;
  if (size) {
    data = (crs_msgs__srv__LoadPart_Request *)calloc(size, sizeof(crs_msgs__srv__LoadPart_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__LoadPart_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__LoadPart_Request__fini(&data[i - 1]);
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
crs_msgs__srv__LoadPart_Request__Sequence__fini(crs_msgs__srv__LoadPart_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__LoadPart_Request__fini(&array->data[i]);
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

crs_msgs__srv__LoadPart_Request__Sequence *
crs_msgs__srv__LoadPart_Request__Sequence__create(size_t size)
{
  crs_msgs__srv__LoadPart_Request__Sequence * array = (crs_msgs__srv__LoadPart_Request__Sequence *)malloc(sizeof(crs_msgs__srv__LoadPart_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__LoadPart_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__LoadPart_Request__Sequence__destroy(crs_msgs__srv__LoadPart_Request__Sequence * array)
{
  if (array) {
    crs_msgs__srv__LoadPart_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
crs_msgs__srv__LoadPart_Response__init(crs_msgs__srv__LoadPart_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error
  if (!rosidl_generator_c__String__init(&msg->error)) {
    crs_msgs__srv__LoadPart_Response__fini(msg);
    return false;
  }
  return true;
}

void
crs_msgs__srv__LoadPart_Response__fini(crs_msgs__srv__LoadPart_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error
  rosidl_generator_c__String__fini(&msg->error);
}

crs_msgs__srv__LoadPart_Response *
crs_msgs__srv__LoadPart_Response__create()
{
  crs_msgs__srv__LoadPart_Response * msg = (crs_msgs__srv__LoadPart_Response *)malloc(sizeof(crs_msgs__srv__LoadPart_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(crs_msgs__srv__LoadPart_Response));
  bool success = crs_msgs__srv__LoadPart_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
crs_msgs__srv__LoadPart_Response__destroy(crs_msgs__srv__LoadPart_Response * msg)
{
  if (msg) {
    crs_msgs__srv__LoadPart_Response__fini(msg);
  }
  free(msg);
}


bool
crs_msgs__srv__LoadPart_Response__Sequence__init(crs_msgs__srv__LoadPart_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  crs_msgs__srv__LoadPart_Response * data = NULL;
  if (size) {
    data = (crs_msgs__srv__LoadPart_Response *)calloc(size, sizeof(crs_msgs__srv__LoadPart_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = crs_msgs__srv__LoadPart_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        crs_msgs__srv__LoadPart_Response__fini(&data[i - 1]);
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
crs_msgs__srv__LoadPart_Response__Sequence__fini(crs_msgs__srv__LoadPart_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      crs_msgs__srv__LoadPart_Response__fini(&array->data[i]);
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

crs_msgs__srv__LoadPart_Response__Sequence *
crs_msgs__srv__LoadPart_Response__Sequence__create(size_t size)
{
  crs_msgs__srv__LoadPart_Response__Sequence * array = (crs_msgs__srv__LoadPart_Response__Sequence *)malloc(sizeof(crs_msgs__srv__LoadPart_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = crs_msgs__srv__LoadPart_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
crs_msgs__srv__LoadPart_Response__Sequence__destroy(crs_msgs__srv__LoadPart_Response__Sequence * array)
{
  if (array) {
    crs_msgs__srv__LoadPart_Response__Sequence__fini(array);
  }
  free(array);
}
