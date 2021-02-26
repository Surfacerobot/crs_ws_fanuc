// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:msg/JointLimits.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__JOINT_LIMITS__FUNCTIONS_H_
#define TESSERACT_MSGS__MSG__JOINT_LIMITS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tesseract_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tesseract_msgs/msg/joint_limits__struct.h"

/// Initialize msg/JointLimits message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__msg__JointLimits
 * )) before or use
 * tesseract_msgs__msg__JointLimits__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__JointLimits__init(tesseract_msgs__msg__JointLimits * msg);

/// Finalize msg/JointLimits message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__JointLimits__fini(tesseract_msgs__msg__JointLimits * msg);

/// Create msg/JointLimits message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__msg__JointLimits__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__msg__JointLimits *
tesseract_msgs__msg__JointLimits__create();

/// Destroy msg/JointLimits message.
/**
 * It calls
 * tesseract_msgs__msg__JointLimits__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__JointLimits__destroy(tesseract_msgs__msg__JointLimits * msg);


/// Initialize array of msg/JointLimits messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__msg__JointLimits__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__msg__JointLimits__Sequence__init(tesseract_msgs__msg__JointLimits__Sequence * array, size_t size);

/// Finalize array of msg/JointLimits messages.
/**
 * It calls
 * tesseract_msgs__msg__JointLimits__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__JointLimits__Sequence__fini(tesseract_msgs__msg__JointLimits__Sequence * array);

/// Create array of msg/JointLimits messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__msg__JointLimits__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__msg__JointLimits__Sequence *
tesseract_msgs__msg__JointLimits__Sequence__create(size_t size);

/// Destroy array of msg/JointLimits messages.
/**
 * It calls
 * tesseract_msgs__msg__JointLimits__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__msg__JointLimits__Sequence__destroy(tesseract_msgs__msg__JointLimits__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__MSG__JOINT_LIMITS__FUNCTIONS_H_
