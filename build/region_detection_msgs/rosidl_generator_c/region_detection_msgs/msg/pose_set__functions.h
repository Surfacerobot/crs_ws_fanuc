// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__MSG__POSE_SET__FUNCTIONS_H_
#define REGION_DETECTION_MSGS__MSG__POSE_SET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "region_detection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "region_detection_msgs/msg/pose_set__struct.h"

/// Initialize msg/PoseSet message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * region_detection_msgs__msg__PoseSet
 * )) before or use
 * region_detection_msgs__msg__PoseSet__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
bool
region_detection_msgs__msg__PoseSet__init(region_detection_msgs__msg__PoseSet * msg);

/// Finalize msg/PoseSet message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__msg__PoseSet__fini(region_detection_msgs__msg__PoseSet * msg);

/// Create msg/PoseSet message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * region_detection_msgs__msg__PoseSet__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
region_detection_msgs__msg__PoseSet *
region_detection_msgs__msg__PoseSet__create();

/// Destroy msg/PoseSet message.
/**
 * It calls
 * region_detection_msgs__msg__PoseSet__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__msg__PoseSet__destroy(region_detection_msgs__msg__PoseSet * msg);


/// Initialize array of msg/PoseSet messages.
/**
 * It allocates the memory for the number of elements and calls
 * region_detection_msgs__msg__PoseSet__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
bool
region_detection_msgs__msg__PoseSet__Sequence__init(region_detection_msgs__msg__PoseSet__Sequence * array, size_t size);

/// Finalize array of msg/PoseSet messages.
/**
 * It calls
 * region_detection_msgs__msg__PoseSet__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__msg__PoseSet__Sequence__fini(region_detection_msgs__msg__PoseSet__Sequence * array);

/// Create array of msg/PoseSet messages.
/**
 * It allocates the memory for the array and calls
 * region_detection_msgs__msg__PoseSet__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
region_detection_msgs__msg__PoseSet__Sequence *
region_detection_msgs__msg__PoseSet__Sequence__create(size_t size);

/// Destroy array of msg/PoseSet messages.
/**
 * It calls
 * region_detection_msgs__msg__PoseSet__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__msg__PoseSet__Sequence__destroy(region_detection_msgs__msg__PoseSet__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // REGION_DETECTION_MSGS__MSG__POSE_SET__FUNCTIONS_H_
