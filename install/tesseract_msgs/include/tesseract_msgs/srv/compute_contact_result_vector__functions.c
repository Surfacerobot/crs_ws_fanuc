// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:srv/ComputeContactResultVector.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/srv/compute_contact_result_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `joint_states`
#include "sensor_msgs/msg/joint_state__functions.h"

bool
tesseract_msgs__srv__ComputeContactResultVector_Request__init(tesseract_msgs__srv__ComputeContactResultVector_Request * msg)
{
  if (!msg) {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__init(&msg->joint_states)) {
    tesseract_msgs__srv__ComputeContactResultVector_Request__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__srv__ComputeContactResultVector_Request__fini(tesseract_msgs__srv__ComputeContactResultVector_Request * msg)
{
  if (!msg) {
    return;
  }
  // joint_states
  sensor_msgs__msg__JointState__fini(&msg->joint_states);
}

tesseract_msgs__srv__ComputeContactResultVector_Request *
tesseract_msgs__srv__ComputeContactResultVector_Request__create()
{
  tesseract_msgs__srv__ComputeContactResultVector_Request * msg = (tesseract_msgs__srv__ComputeContactResultVector_Request *)malloc(sizeof(tesseract_msgs__srv__ComputeContactResultVector_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__ComputeContactResultVector_Request));
  bool success = tesseract_msgs__srv__ComputeContactResultVector_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__ComputeContactResultVector_Request__destroy(tesseract_msgs__srv__ComputeContactResultVector_Request * msg)
{
  if (msg) {
    tesseract_msgs__srv__ComputeContactResultVector_Request__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence__init(tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__srv__ComputeContactResultVector_Request * data = NULL;
  if (size) {
    data = (tesseract_msgs__srv__ComputeContactResultVector_Request *)calloc(size, sizeof(tesseract_msgs__srv__ComputeContactResultVector_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__ComputeContactResultVector_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__ComputeContactResultVector_Request__fini(&data[i - 1]);
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
tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence__fini(tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__srv__ComputeContactResultVector_Request__fini(&array->data[i]);
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

tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence *
tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence__create(size_t size)
{
  tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence * array = (tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence *)malloc(sizeof(tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence__destroy(tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence * array)
{
  if (array) {
    tesseract_msgs__srv__ComputeContactResultVector_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `collision_result`
#include "tesseract_msgs/msg/contact_result_vector__functions.h"

bool
tesseract_msgs__srv__ComputeContactResultVector_Response__init(tesseract_msgs__srv__ComputeContactResultVector_Response * msg)
{
  if (!msg) {
    return false;
  }
  // collision_result
  if (!tesseract_msgs__msg__ContactResultVector__init(&msg->collision_result)) {
    tesseract_msgs__srv__ComputeContactResultVector_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
tesseract_msgs__srv__ComputeContactResultVector_Response__fini(tesseract_msgs__srv__ComputeContactResultVector_Response * msg)
{
  if (!msg) {
    return;
  }
  // collision_result
  tesseract_msgs__msg__ContactResultVector__fini(&msg->collision_result);
  // success
}

tesseract_msgs__srv__ComputeContactResultVector_Response *
tesseract_msgs__srv__ComputeContactResultVector_Response__create()
{
  tesseract_msgs__srv__ComputeContactResultVector_Response * msg = (tesseract_msgs__srv__ComputeContactResultVector_Response *)malloc(sizeof(tesseract_msgs__srv__ComputeContactResultVector_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__ComputeContactResultVector_Response));
  bool success = tesseract_msgs__srv__ComputeContactResultVector_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__ComputeContactResultVector_Response__destroy(tesseract_msgs__srv__ComputeContactResultVector_Response * msg)
{
  if (msg) {
    tesseract_msgs__srv__ComputeContactResultVector_Response__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence__init(tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__srv__ComputeContactResultVector_Response * data = NULL;
  if (size) {
    data = (tesseract_msgs__srv__ComputeContactResultVector_Response *)calloc(size, sizeof(tesseract_msgs__srv__ComputeContactResultVector_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__ComputeContactResultVector_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__ComputeContactResultVector_Response__fini(&data[i - 1]);
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
tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence__fini(tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__srv__ComputeContactResultVector_Response__fini(&array->data[i]);
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

tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence *
tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence__create(size_t size)
{
  tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence * array = (tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence *)malloc(sizeof(tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence__destroy(tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence * array)
{
  if (array) {
    tesseract_msgs__srv__ComputeContactResultVector_Response__Sequence__fini(array);
  }
  free(array);
}
