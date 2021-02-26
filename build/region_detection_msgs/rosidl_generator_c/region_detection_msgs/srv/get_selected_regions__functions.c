// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from region_detection_msgs:srv/GetSelectedRegions.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/srv/get_selected_regions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
region_detection_msgs__srv__GetSelectedRegions_Request__init(region_detection_msgs__srv__GetSelectedRegions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
region_detection_msgs__srv__GetSelectedRegions_Request__fini(region_detection_msgs__srv__GetSelectedRegions_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

region_detection_msgs__srv__GetSelectedRegions_Request *
region_detection_msgs__srv__GetSelectedRegions_Request__create()
{
  region_detection_msgs__srv__GetSelectedRegions_Request * msg = (region_detection_msgs__srv__GetSelectedRegions_Request *)malloc(sizeof(region_detection_msgs__srv__GetSelectedRegions_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(region_detection_msgs__srv__GetSelectedRegions_Request));
  bool success = region_detection_msgs__srv__GetSelectedRegions_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
region_detection_msgs__srv__GetSelectedRegions_Request__destroy(region_detection_msgs__srv__GetSelectedRegions_Request * msg)
{
  if (msg) {
    region_detection_msgs__srv__GetSelectedRegions_Request__fini(msg);
  }
  free(msg);
}


bool
region_detection_msgs__srv__GetSelectedRegions_Request__Sequence__init(region_detection_msgs__srv__GetSelectedRegions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  region_detection_msgs__srv__GetSelectedRegions_Request * data = NULL;
  if (size) {
    data = (region_detection_msgs__srv__GetSelectedRegions_Request *)calloc(size, sizeof(region_detection_msgs__srv__GetSelectedRegions_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = region_detection_msgs__srv__GetSelectedRegions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        region_detection_msgs__srv__GetSelectedRegions_Request__fini(&data[i - 1]);
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
region_detection_msgs__srv__GetSelectedRegions_Request__Sequence__fini(region_detection_msgs__srv__GetSelectedRegions_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      region_detection_msgs__srv__GetSelectedRegions_Request__fini(&array->data[i]);
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

region_detection_msgs__srv__GetSelectedRegions_Request__Sequence *
region_detection_msgs__srv__GetSelectedRegions_Request__Sequence__create(size_t size)
{
  region_detection_msgs__srv__GetSelectedRegions_Request__Sequence * array = (region_detection_msgs__srv__GetSelectedRegions_Request__Sequence *)malloc(sizeof(region_detection_msgs__srv__GetSelectedRegions_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = region_detection_msgs__srv__GetSelectedRegions_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
region_detection_msgs__srv__GetSelectedRegions_Request__Sequence__destroy(region_detection_msgs__srv__GetSelectedRegions_Request__Sequence * array)
{
  if (array) {
    region_detection_msgs__srv__GetSelectedRegions_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `selected_regions_indices`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
region_detection_msgs__srv__GetSelectedRegions_Response__init(region_detection_msgs__srv__GetSelectedRegions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // selected_regions_indices
  if (!rosidl_generator_c__int32__Sequence__init(&msg->selected_regions_indices, 0)) {
    region_detection_msgs__srv__GetSelectedRegions_Response__fini(msg);
    return false;
  }
  return true;
}

void
region_detection_msgs__srv__GetSelectedRegions_Response__fini(region_detection_msgs__srv__GetSelectedRegions_Response * msg)
{
  if (!msg) {
    return;
  }
  // selected_regions_indices
  rosidl_generator_c__int32__Sequence__fini(&msg->selected_regions_indices);
}

region_detection_msgs__srv__GetSelectedRegions_Response *
region_detection_msgs__srv__GetSelectedRegions_Response__create()
{
  region_detection_msgs__srv__GetSelectedRegions_Response * msg = (region_detection_msgs__srv__GetSelectedRegions_Response *)malloc(sizeof(region_detection_msgs__srv__GetSelectedRegions_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(region_detection_msgs__srv__GetSelectedRegions_Response));
  bool success = region_detection_msgs__srv__GetSelectedRegions_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
region_detection_msgs__srv__GetSelectedRegions_Response__destroy(region_detection_msgs__srv__GetSelectedRegions_Response * msg)
{
  if (msg) {
    region_detection_msgs__srv__GetSelectedRegions_Response__fini(msg);
  }
  free(msg);
}


bool
region_detection_msgs__srv__GetSelectedRegions_Response__Sequence__init(region_detection_msgs__srv__GetSelectedRegions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  region_detection_msgs__srv__GetSelectedRegions_Response * data = NULL;
  if (size) {
    data = (region_detection_msgs__srv__GetSelectedRegions_Response *)calloc(size, sizeof(region_detection_msgs__srv__GetSelectedRegions_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = region_detection_msgs__srv__GetSelectedRegions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        region_detection_msgs__srv__GetSelectedRegions_Response__fini(&data[i - 1]);
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
region_detection_msgs__srv__GetSelectedRegions_Response__Sequence__fini(region_detection_msgs__srv__GetSelectedRegions_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      region_detection_msgs__srv__GetSelectedRegions_Response__fini(&array->data[i]);
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

region_detection_msgs__srv__GetSelectedRegions_Response__Sequence *
region_detection_msgs__srv__GetSelectedRegions_Response__Sequence__create(size_t size)
{
  region_detection_msgs__srv__GetSelectedRegions_Response__Sequence * array = (region_detection_msgs__srv__GetSelectedRegions_Response__Sequence *)malloc(sizeof(region_detection_msgs__srv__GetSelectedRegions_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = region_detection_msgs__srv__GetSelectedRegions_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
region_detection_msgs__srv__GetSelectedRegions_Response__Sequence__destroy(region_detection_msgs__srv__GetSelectedRegions_Response__Sequence * array)
{
  if (array) {
    region_detection_msgs__srv__GetSelectedRegions_Response__Sequence__fini(array);
  }
  free(array);
}
