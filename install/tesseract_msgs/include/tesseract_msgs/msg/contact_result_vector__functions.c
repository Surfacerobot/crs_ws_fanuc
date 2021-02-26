// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/ContactResultVector.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/contact_result_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `contacts`
#include "tesseract_msgs/msg/contact_result__functions.h"

bool
tesseract_msgs__msg__ContactResultVector__init(tesseract_msgs__msg__ContactResultVector * msg)
{
  if (!msg) {
    return false;
  }
  // contacts
  if (!tesseract_msgs__msg__ContactResult__Sequence__init(&msg->contacts, 0)) {
    tesseract_msgs__msg__ContactResultVector__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__ContactResultVector__fini(tesseract_msgs__msg__ContactResultVector * msg)
{
  if (!msg) {
    return;
  }
  // contacts
  tesseract_msgs__msg__ContactResult__Sequence__fini(&msg->contacts);
}

tesseract_msgs__msg__ContactResultVector *
tesseract_msgs__msg__ContactResultVector__create()
{
  tesseract_msgs__msg__ContactResultVector * msg = (tesseract_msgs__msg__ContactResultVector *)malloc(sizeof(tesseract_msgs__msg__ContactResultVector));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__ContactResultVector));
  bool success = tesseract_msgs__msg__ContactResultVector__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__ContactResultVector__destroy(tesseract_msgs__msg__ContactResultVector * msg)
{
  if (msg) {
    tesseract_msgs__msg__ContactResultVector__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__ContactResultVector__Sequence__init(tesseract_msgs__msg__ContactResultVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__ContactResultVector * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__ContactResultVector *)calloc(size, sizeof(tesseract_msgs__msg__ContactResultVector));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__ContactResultVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__ContactResultVector__fini(&data[i - 1]);
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
tesseract_msgs__msg__ContactResultVector__Sequence__fini(tesseract_msgs__msg__ContactResultVector__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__ContactResultVector__fini(&array->data[i]);
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

tesseract_msgs__msg__ContactResultVector__Sequence *
tesseract_msgs__msg__ContactResultVector__Sequence__create(size_t size)
{
  tesseract_msgs__msg__ContactResultVector__Sequence * array = (tesseract_msgs__msg__ContactResultVector__Sequence *)malloc(sizeof(tesseract_msgs__msg__ContactResultVector__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__ContactResultVector__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__ContactResultVector__Sequence__destroy(tesseract_msgs__msg__ContactResultVector__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__ContactResultVector__Sequence__fini(array);
  }
  free(array);
}
