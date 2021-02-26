// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tesseract_msgs:srv/SaveSceneGraph.idl
// generated code does not contain a copyright notice
#include "tesseract_msgs/srv/save_scene_graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `filepath`
#include "rosidl_generator_c/string_functions.h"

bool
tesseract_msgs__srv__SaveSceneGraph_Request__init(tesseract_msgs__srv__SaveSceneGraph_Request * msg)
{
  if (!msg) {
    return false;
  }
  // filepath
  if (!rosidl_generator_c__String__init(&msg->filepath)) {
    tesseract_msgs__srv__SaveSceneGraph_Request__fini(msg);
    return false;
  }
  return true;
}

void
tesseract_msgs__srv__SaveSceneGraph_Request__fini(tesseract_msgs__srv__SaveSceneGraph_Request * msg)
{
  if (!msg) {
    return;
  }
  // filepath
  rosidl_generator_c__String__fini(&msg->filepath);
}

tesseract_msgs__srv__SaveSceneGraph_Request *
tesseract_msgs__srv__SaveSceneGraph_Request__create()
{
  tesseract_msgs__srv__SaveSceneGraph_Request * msg = (tesseract_msgs__srv__SaveSceneGraph_Request *)malloc(sizeof(tesseract_msgs__srv__SaveSceneGraph_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__SaveSceneGraph_Request));
  bool success = tesseract_msgs__srv__SaveSceneGraph_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__SaveSceneGraph_Request__destroy(tesseract_msgs__srv__SaveSceneGraph_Request * msg)
{
  if (msg) {
    tesseract_msgs__srv__SaveSceneGraph_Request__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__init(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__srv__SaveSceneGraph_Request * data = NULL;
  if (size) {
    data = (tesseract_msgs__srv__SaveSceneGraph_Request *)calloc(size, sizeof(tesseract_msgs__srv__SaveSceneGraph_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__SaveSceneGraph_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__SaveSceneGraph_Request__fini(&data[i - 1]);
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
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__fini(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__srv__SaveSceneGraph_Request__fini(&array->data[i]);
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

tesseract_msgs__srv__SaveSceneGraph_Request__Sequence *
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__create(size_t size)
{
  tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array = (tesseract_msgs__srv__SaveSceneGraph_Request__Sequence *)malloc(sizeof(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__destroy(tesseract_msgs__srv__SaveSceneGraph_Request__Sequence * array)
{
  if (array) {
    tesseract_msgs__srv__SaveSceneGraph_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `id`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
tesseract_msgs__srv__SaveSceneGraph_Response__init(tesseract_msgs__srv__SaveSceneGraph_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // id
  if (!rosidl_generator_c__String__init(&msg->id)) {
    tesseract_msgs__srv__SaveSceneGraph_Response__fini(msg);
    return false;
  }
  // revision
  return true;
}

void
tesseract_msgs__srv__SaveSceneGraph_Response__fini(tesseract_msgs__srv__SaveSceneGraph_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // id
  rosidl_generator_c__String__fini(&msg->id);
  // revision
}

tesseract_msgs__srv__SaveSceneGraph_Response *
tesseract_msgs__srv__SaveSceneGraph_Response__create()
{
  tesseract_msgs__srv__SaveSceneGraph_Response * msg = (tesseract_msgs__srv__SaveSceneGraph_Response *)malloc(sizeof(tesseract_msgs__srv__SaveSceneGraph_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tesseract_msgs__srv__SaveSceneGraph_Response));
  bool success = tesseract_msgs__srv__SaveSceneGraph_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tesseract_msgs__srv__SaveSceneGraph_Response__destroy(tesseract_msgs__srv__SaveSceneGraph_Response * msg)
{
  if (msg) {
    tesseract_msgs__srv__SaveSceneGraph_Response__fini(msg);
  }
  free(msg);
}


bool
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__init(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tesseract_msgs__srv__SaveSceneGraph_Response * data = NULL;
  if (size) {
    data = (tesseract_msgs__srv__SaveSceneGraph_Response *)calloc(size, sizeof(tesseract_msgs__srv__SaveSceneGraph_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tesseract_msgs__srv__SaveSceneGraph_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tesseract_msgs__srv__SaveSceneGraph_Response__fini(&data[i - 1]);
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
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__fini(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tesseract_msgs__srv__SaveSceneGraph_Response__fini(&array->data[i]);
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

tesseract_msgs__srv__SaveSceneGraph_Response__Sequence *
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__create(size_t size)
{
  tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array = (tesseract_msgs__srv__SaveSceneGraph_Response__Sequence *)malloc(sizeof(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__destroy(tesseract_msgs__srv__SaveSceneGraph_Response__Sequence * array)
{
  if (array) {
    tesseract_msgs__srv__SaveSceneGraph_Response__Sequence__fini(array);
  }
  free(array);
}
