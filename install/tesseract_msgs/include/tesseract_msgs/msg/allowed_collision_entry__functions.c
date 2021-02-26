// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/allowed_collision_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `link_1`
// Member `link_2`
// Member `reason`
#include "rosidl_generator_c/string_functions.h"

bool
tesseract_msgs__msg__AllowedCollisionEntry__init(tesseract_msgs__msg__AllowedCollisionEntry * msg)
{
  if (!msg) {
    return false;
  }
  // link_1
  if (!rosidl_generator_c__String__init(&msg->link_1)) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  // link_2
  if (!rosidl_generator_c__String__init(&msg->link_2)) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  // reason
  if (!rosidl_generator_c__String__init(&msg->reason)) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__AllowedCollisionEntry__fini(tesseract_msgs__msg__AllowedCollisionEntry * msg)
{
  if (!msg) {
    return;
  }
  // link_1
  rosidl_generator_c__String__fini(&msg->link_1);
  // link_2
  rosidl_generator_c__String__fini(&msg->link_2);
  // reason
  rosidl_generator_c__String__fini(&msg->reason);
}

tesseract_msgs__msg__AllowedCollisionEntry *
tesseract_msgs__msg__AllowedCollisionEntry__create()
{
  tesseract_msgs__msg__AllowedCollisionEntry * msg = (tesseract_msgs__msg__AllowedCollisionEntry *)malloc(sizeof(tesseract_msgs__msg__AllowedCollisionEntry));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__AllowedCollisionEntry));
  bool success = tesseract_msgs__msg__AllowedCollisionEntry__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__AllowedCollisionEntry__destroy(tesseract_msgs__msg__AllowedCollisionEntry * msg)
{
  if (msg) {
    tesseract_msgs__msg__AllowedCollisionEntry__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__AllowedCollisionEntry * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__AllowedCollisionEntry *)calloc(size, sizeof(tesseract_msgs__msg__AllowedCollisionEntry));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__AllowedCollisionEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__AllowedCollisionEntry__fini(&data[i - 1]);
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
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__AllowedCollisionEntry__fini(&array->data[i]);
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

tesseract_msgs__msg__AllowedCollisionEntry__Sequence *
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__create(size_t size)
{
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array = (tesseract_msgs__msg__AllowedCollisionEntry__Sequence *)malloc(sizeof(tesseract_msgs__msg__AllowedCollisionEntry__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__AllowedCollisionEntry__Sequence__destroy(tesseract_msgs__msg__AllowedCollisionEntry__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(array);
  }
  free(array);
}
