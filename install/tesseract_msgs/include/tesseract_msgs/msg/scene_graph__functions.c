// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:msg/SceneGraph.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/msg/scene_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `graph_name`
// Member `graph_root`
#include "rosidl_generator_c/string_functions.h"
// Member `link_list`
#include "tesseract_msgs/msg/link__functions.h"
// Member `joint_list`
#include "tesseract_msgs/msg/joint__functions.h"
// Member `acm`
#include "tesseract_msgs/msg/allowed_collision_entry__functions.h"

bool
tesseract_msgs__msg__SceneGraph__init(tesseract_msgs__msg__SceneGraph * msg)
{
  if (!msg) {
    return false;
  }
  // graph_name
  if (!rosidl_generator_c__String__init(&msg->graph_name)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // graph_root
  if (!rosidl_generator_c__String__init(&msg->graph_root)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // link_list
  if (!tesseract_msgs__msg__Link__Sequence__init(&msg->link_list, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // joint_list
  if (!tesseract_msgs__msg__Joint__Sequence__init(&msg->joint_list, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  // acm
  if (!tesseract_msgs__msg__AllowedCollisionEntry__Sequence__init(&msg->acm, 0)) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__msg__SceneGraph__fini(tesseract_msgs__msg__SceneGraph * msg)
{
  if (!msg) {
    return;
  }
  // graph_name
  rosidl_generator_c__String__fini(&msg->graph_name);
  // graph_root
  rosidl_generator_c__String__fini(&msg->graph_root);
  // link_list
  tesseract_msgs__msg__Link__Sequence__fini(&msg->link_list);
  // joint_list
  tesseract_msgs__msg__Joint__Sequence__fini(&msg->joint_list);
  // acm
  tesseract_msgs__msg__AllowedCollisionEntry__Sequence__fini(&msg->acm);
}

tesseract_msgs__msg__SceneGraph *
tesseract_msgs__msg__SceneGraph__create()
{
  tesseract_msgs__msg__SceneGraph * msg = (tesseract_msgs__msg__SceneGraph *)malloc(sizeof(tesseract_msgs__msg__SceneGraph));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__msg__SceneGraph));
  bool success = tesseract_msgs__msg__SceneGraph__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__msg__SceneGraph__destroy(tesseract_msgs__msg__SceneGraph * msg)
{
  if (msg) {
    tesseract_msgs__msg__SceneGraph__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__msg__SceneGraph__Sequence__init(tesseract_msgs__msg__SceneGraph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__msg__SceneGraph * data = NULL;
  if (size) {
    data = (tesseract_msgs__msg__SceneGraph *)calloc(size, sizeof(tesseract_msgs__msg__SceneGraph));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__msg__SceneGraph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__msg__SceneGraph__fini(&data[i - 1]);
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
tesseract_msgs__msg__SceneGraph__Sequence__fini(tesseract_msgs__msg__SceneGraph__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__msg__SceneGraph__fini(&array->data[i]);
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

tesseract_msgs__msg__SceneGraph__Sequence *
tesseract_msgs__msg__SceneGraph__Sequence__create(size_t size)
{
  tesseract_msgs__msg__SceneGraph__Sequence * array = (tesseract_msgs__msg__SceneGraph__Sequence *)malloc(sizeof(tesseract_msgs__msg__SceneGraph__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__msg__SceneGraph__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__msg__SceneGraph__Sequence__destroy(tesseract_msgs__msg__SceneGraph__Sequence * array)
{
  if (array) {
    tesseract_msgs__msg__SceneGraph__Sequence__fini(array);
  }
  free(array);
}
