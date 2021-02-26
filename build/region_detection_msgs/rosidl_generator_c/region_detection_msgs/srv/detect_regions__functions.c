// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/srv/detect_regions__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `images`
#include "sensor_msgs/msg/image__functions.h"
// Member `clouds`
#include "sensor_msgs/msg/point_cloud2__functions.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped__functions.h"

bool
region_detection_msgs__srv__DetectRegions_Request__init(region_detection_msgs__srv__DetectRegions_Request * msg)
{
  if (!msg) {
    return false;
  }
  // images
  if (!sensor_msgs__msg__Image__Sequence__init(&msg->images, 0)) {
    region_detection_msgs__srv__DetectRegions_Request__fini(msg);
    return false;
  }
  // clouds
  if (!sensor_msgs__msg__PointCloud2__Sequence__init(&msg->clouds, 0)) {
    region_detection_msgs__srv__DetectRegions_Request__fini(msg);
    return false;
  }
  // transforms
  if (!geometry_msgs__msg__TransformStamped__Sequence__init(&msg->transforms, 0)) {
    region_detection_msgs__srv__DetectRegions_Request__fini(msg);
    return false;
  }
  return true;
}

void
region_detection_msgs__srv__DetectRegions_Request__fini(region_detection_msgs__srv__DetectRegions_Request * msg)
{
  if (!msg) {
    return;
  }
  // images
  sensor_msgs__msg__Image__Sequence__fini(&msg->images);
  // clouds
  sensor_msgs__msg__PointCloud2__Sequence__fini(&msg->clouds);
  // transforms
  geometry_msgs__msg__TransformStamped__Sequence__fini(&msg->transforms);
}

region_detection_msgs__srv__DetectRegions_Request *
region_detection_msgs__srv__DetectRegions_Request__create()
{
  region_detection_msgs__srv__DetectRegions_Request * msg = (region_detection_msgs__srv__DetectRegions_Request *)malloc(sizeof(region_detection_msgs__srv__DetectRegions_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(region_detection_msgs__srv__DetectRegions_Request));
  bool success = region_detection_msgs__srv__DetectRegions_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
region_detection_msgs__srv__DetectRegions_Request__destroy(region_detection_msgs__srv__DetectRegions_Request * msg)
{
  if (msg) {
    region_detection_msgs__srv__DetectRegions_Request__fini(msg);
  }
  free(msg);
}


bool
region_detection_msgs__srv__DetectRegions_Request__Sequence__init(region_detection_msgs__srv__DetectRegions_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  region_detection_msgs__srv__DetectRegions_Request * data = NULL;
  if (size) {
    data = (region_detection_msgs__srv__DetectRegions_Request *)calloc(size, sizeof(region_detection_msgs__srv__DetectRegions_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = region_detection_msgs__srv__DetectRegions_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        region_detection_msgs__srv__DetectRegions_Request__fini(&data[i - 1]);
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
region_detection_msgs__srv__DetectRegions_Request__Sequence__fini(region_detection_msgs__srv__DetectRegions_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      region_detection_msgs__srv__DetectRegions_Request__fini(&array->data[i]);
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

region_detection_msgs__srv__DetectRegions_Request__Sequence *
region_detection_msgs__srv__DetectRegions_Request__Sequence__create(size_t size)
{
  region_detection_msgs__srv__DetectRegions_Request__Sequence * array = (region_detection_msgs__srv__DetectRegions_Request__Sequence *)malloc(sizeof(region_detection_msgs__srv__DetectRegions_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = region_detection_msgs__srv__DetectRegions_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
region_detection_msgs__srv__DetectRegions_Request__Sequence__destroy(region_detection_msgs__srv__DetectRegions_Request__Sequence * array)
{
  if (array) {
    region_detection_msgs__srv__DetectRegions_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `detected_regions`
#include "geometry_msgs/msg/pose_array__functions.h"
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

bool
region_detection_msgs__srv__DetectRegions_Response__init(region_detection_msgs__srv__DetectRegions_Response * msg)
{
  if (!msg) {
    return false;
  }
  // detected_regions
  if (!geometry_msgs__msg__PoseArray__Sequence__init(&msg->detected_regions, 0)) {
    region_detection_msgs__srv__DetectRegions_Response__fini(msg);
    return false;
  }
  // succeeded
  // err_msg
  if (!rosidl_generator_c__String__init(&msg->err_msg)) {
    region_detection_msgs__srv__DetectRegions_Response__fini(msg);
    return false;
  }
  return true;
}

void
region_detection_msgs__srv__DetectRegions_Response__fini(region_detection_msgs__srv__DetectRegions_Response * msg)
{
  if (!msg) {
    return;
  }
  // detected_regions
  geometry_msgs__msg__PoseArray__Sequence__fini(&msg->detected_regions);
  // succeeded
  // err_msg
  rosidl_generator_c__String__fini(&msg->err_msg);
}

region_detection_msgs__srv__DetectRegions_Response *
region_detection_msgs__srv__DetectRegions_Response__create()
{
  region_detection_msgs__srv__DetectRegions_Response * msg = (region_detection_msgs__srv__DetectRegions_Response *)malloc(sizeof(region_detection_msgs__srv__DetectRegions_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(region_detection_msgs__srv__DetectRegions_Response));
  bool success = region_detection_msgs__srv__DetectRegions_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
region_detection_msgs__srv__DetectRegions_Response__destroy(region_detection_msgs__srv__DetectRegions_Response * msg)
{
  if (msg) {
    region_detection_msgs__srv__DetectRegions_Response__fini(msg);
  }
  free(msg);
}


bool
region_detection_msgs__srv__DetectRegions_Response__Sequence__init(region_detection_msgs__srv__DetectRegions_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  region_detection_msgs__srv__DetectRegions_Response * data = NULL;
  if (size) {
    data = (region_detection_msgs__srv__DetectRegions_Response *)calloc(size, sizeof(region_detection_msgs__srv__DetectRegions_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = region_detection_msgs__srv__DetectRegions_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        region_detection_msgs__srv__DetectRegions_Response__fini(&data[i - 1]);
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
region_detection_msgs__srv__DetectRegions_Response__Sequence__fini(region_detection_msgs__srv__DetectRegions_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      region_detection_msgs__srv__DetectRegions_Response__fini(&array->data[i]);
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

region_detection_msgs__srv__DetectRegions_Response__Sequence *
region_detection_msgs__srv__DetectRegions_Response__Sequence__create(size_t size)
{
  region_detection_msgs__srv__DetectRegions_Response__Sequence * array = (region_detection_msgs__srv__DetectRegions_Response__Sequence *)malloc(sizeof(region_detection_msgs__srv__DetectRegions_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = region_detection_msgs__srv__DetectRegions_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
region_detection_msgs__srv__DetectRegions_Response__Sequence__destroy(region_detection_msgs__srv__DetectRegions_Response__Sequence * array)
{
  if (array) {
    region_detection_msgs__srv__DetectRegions_Response__Sequence__fini(array);
  }
  free(array);
}
