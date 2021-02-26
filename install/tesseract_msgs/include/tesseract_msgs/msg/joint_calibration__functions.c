// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/JointCalibration.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/joint_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
tesseract_msgs__msg__JointCalibration__init(tesseract_msgs__msg__JointCalibration * msg)
{
  if (!msg) {
    return false;
  }
  // reference_position
  // rising
  // falling
  // empty
  return true;
}

void
tesseract_msgs__msg__JointCalibration__fini(tesseract_msgs__msg__JointCalibration * msg)
{
  if (!msg) {
    return;
  }
  // reference_position
  // rising
  // falling
  // empty
}

tesseract_msgs__msg__JointCalibration *
tesseract_msgs__msg__JointCalibration__create()
{
  tesseract_msgs__msg__JointCalibration * msg = (tesseract_msgs__msg__JointCalibration *)malloc(sizeof(tesseract_msgs__msg__JointCalibration));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__JointCalibration));
  bool success = tesseract_msgs__msg__JointCalibration__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__JointCalibration__destroy(tesseract_msgs__msg__JointCalibration * msg)
{
  if (msg) {
    tesseract_msgs__msg__JointCalibration__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__JointCalibration__Sequence__init(tesseract_msgs__msg__JointCalibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__JointCalibration * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__JointCalibration *)calloc(size, sizeof(tesseract_msgs__msg__JointCalibration));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__JointCalibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__JointCalibration__fini(&data[i - 1]);
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
tesseract_msgs__msg__JointCalibration__Sequence__fini(tesseract_msgs__msg__JointCalibration__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__JointCalibration__fini(&array->data[i]);
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

tesseract_msgs__msg__JointCalibration__Sequence *
tesseract_msgs__msg__JointCalibration__Sequence__create(size_t size)
{
  tesseract_msgs__msg__JointCalibration__Sequence * array = (tesseract_msgs__msg__JointCalibration__Sequence *)malloc(sizeof(tesseract_msgs__msg__JointCalibration__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__JointCalibration__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__JointCalibration__Sequence__destroy(tesseract_msgs__msg__JointCalibration__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__JointCalibration__Sequence__fini(array);
  }
  free(array);
}
