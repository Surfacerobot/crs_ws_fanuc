// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:msg/ToolProcessPath.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__TOOL_PROCESS_PATH__FUNCTIONS_H_
#define CRS_MSGS__MSG__TOOL_PROCESS_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "crs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "crs_msgs/msg/tool_process_path__struct.h"

/// Initialize msg/ToolProcessPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crs_msgs__msg__ToolProcessPath
 * )) before or use
 * crs_msgs__msg__ToolProcessPath__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
bool
crs_msgs__msg__ToolProcessPath__init(crs_msgs__msg__ToolProcessPath * msg);

/// Finalize msg/ToolProcessPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__msg__ToolProcessPath__fini(crs_msgs__msg__ToolProcessPath * msg);

/// Create msg/ToolProcessPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crs_msgs__msg__ToolProcessPath__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
crs_msgs__msg__ToolProcessPath *
crs_msgs__msg__ToolProcessPath__create();

/// Destroy msg/ToolProcessPath message.
/**
 * It calls
 * crs_msgs__msg__ToolProcessPath__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__msg__ToolProcessPath__destroy(crs_msgs__msg__ToolProcessPath * msg);


/// Initialize array of msg/ToolProcessPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * crs_msgs__msg__ToolProcessPath__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
bool
crs_msgs__msg__ToolProcessPath__Sequence__init(crs_msgs__msg__ToolProcessPath__Sequence * array, size_t size);

/// Finalize array of msg/ToolProcessPath messages.
/**
 * It calls
 * crs_msgs__msg__ToolProcessPath__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__msg__ToolProcessPath__Sequence__fini(crs_msgs__msg__ToolProcessPath__Sequence * array);

/// Create array of msg/ToolProcessPath messages.
/**
 * It allocates the memory for the array and calls
 * crs_msgs__msg__ToolProcessPath__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
crs_msgs__msg__ToolProcessPath__Sequence *
crs_msgs__msg__ToolProcessPath__Sequence__create(size_t size);

/// Destroy array of msg/ToolProcessPath messages.
/**
 * It calls
 * crs_msgs__msg__ToolProcessPath__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__msg__ToolProcessPath__Sequence__destroy(crs_msgs__msg__ToolProcessPath__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__MSG__TOOL_PROCESS_PATH__FUNCTIONS_H_
