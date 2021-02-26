// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__FUNCTIONS_H_
#define REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "region_detection_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "region_detection_msgs/srv/detect_regions__struct.h"

/// Initialize srv/DetectRegions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * region_detection_msgs__srv__DetectRegions_Request
 * )) before or use
 * region_detection_msgs__srv__DetectRegions_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
bool
region_detection_msgs__srv__DetectRegions_Request__init(region_detection_msgs__srv__DetectRegions_Request * msg);

/// Finalize srv/DetectRegions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Request__fini(region_detection_msgs__srv__DetectRegions_Request * msg);

/// Create srv/DetectRegions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * region_detection_msgs__srv__DetectRegions_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
region_detection_msgs__srv__DetectRegions_Request *
region_detection_msgs__srv__DetectRegions_Request__create();

/// Destroy srv/DetectRegions message.
/**
 * It calls
 * region_detection_msgs__srv__DetectRegions_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Request__destroy(region_detection_msgs__srv__DetectRegions_Request * msg);


/// Initialize array of srv/DetectRegions messages.
/**
 * It allocates the memory for the number of elements and calls
 * region_detection_msgs__srv__DetectRegions_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
bool
region_detection_msgs__srv__DetectRegions_Request__Sequence__init(region_detection_msgs__srv__DetectRegions_Request__Sequence * array, size_t size);

/// Finalize array of srv/DetectRegions messages.
/**
 * It calls
 * region_detection_msgs__srv__DetectRegions_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Request__Sequence__fini(region_detection_msgs__srv__DetectRegions_Request__Sequence * array);

/// Create array of srv/DetectRegions messages.
/**
 * It allocates the memory for the array and calls
 * region_detection_msgs__srv__DetectRegions_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
region_detection_msgs__srv__DetectRegions_Request__Sequence *
region_detection_msgs__srv__DetectRegions_Request__Sequence__create(size_t size);

/// Destroy array of srv/DetectRegions messages.
/**
 * It calls
 * region_detection_msgs__srv__DetectRegions_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Request__Sequence__destroy(region_detection_msgs__srv__DetectRegions_Request__Sequence * array);

/// Initialize srv/DetectRegions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * region_detection_msgs__srv__DetectRegions_Response
 * )) before or use
 * region_detection_msgs__srv__DetectRegions_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
bool
region_detection_msgs__srv__DetectRegions_Response__init(region_detection_msgs__srv__DetectRegions_Response * msg);

/// Finalize srv/DetectRegions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Response__fini(region_detection_msgs__srv__DetectRegions_Response * msg);

/// Create srv/DetectRegions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * region_detection_msgs__srv__DetectRegions_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
region_detection_msgs__srv__DetectRegions_Response *
region_detection_msgs__srv__DetectRegions_Response__create();

/// Destroy srv/DetectRegions message.
/**
 * It calls
 * region_detection_msgs__srv__DetectRegions_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Response__destroy(region_detection_msgs__srv__DetectRegions_Response * msg);


/// Initialize array of srv/DetectRegions messages.
/**
 * It allocates the memory for the number of elements and calls
 * region_detection_msgs__srv__DetectRegions_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
bool
region_detection_msgs__srv__DetectRegions_Response__Sequence__init(region_detection_msgs__srv__DetectRegions_Response__Sequence * array, size_t size);

/// Finalize array of srv/DetectRegions messages.
/**
 * It calls
 * region_detection_msgs__srv__DetectRegions_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Response__Sequence__fini(region_detection_msgs__srv__DetectRegions_Response__Sequence * array);

/// Create array of srv/DetectRegions messages.
/**
 * It allocates the memory for the array and calls
 * region_detection_msgs__srv__DetectRegions_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
region_detection_msgs__srv__DetectRegions_Response__Sequence *
region_detection_msgs__srv__DetectRegions_Response__Sequence__create(size_t size);

/// Destroy array of srv/DetectRegions messages.
/**
 * It calls
 * region_detection_msgs__srv__DetectRegions_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_region_detection_msgs
void
region_detection_msgs__srv__DetectRegions_Response__Sequence__destroy(region_detection_msgs__srv__DetectRegions_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // REGION_DETECTION_MSGS__SRV__DETECT_REGIONS__FUNCTIONS_H_
