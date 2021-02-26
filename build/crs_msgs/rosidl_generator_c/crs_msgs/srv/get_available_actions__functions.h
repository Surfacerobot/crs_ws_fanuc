// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from crs_msgs:srv/GetAvailableActions.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__GET_AVAILABLE_ACTIONS__FUNCTIONS_H_
#define CRS_MSGS__SRV__GET_AVAILABLE_ACTIONS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "crs_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "crs_msgs/srv/get_available_actions__struct.h"

/// Initialize srv/GetAvailableActions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crs_msgs__srv__GetAvailableActions_Request
 * )) before or use
 * crs_msgs__srv__GetAvailableActions_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
bool
crs_msgs__srv__GetAvailableActions_Request__init(crs_msgs__srv__GetAvailableActions_Request * msg);

/// Finalize srv/GetAvailableActions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Request__fini(crs_msgs__srv__GetAvailableActions_Request * msg);

/// Create srv/GetAvailableActions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crs_msgs__srv__GetAvailableActions_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
crs_msgs__srv__GetAvailableActions_Request *
crs_msgs__srv__GetAvailableActions_Request__create();

/// Destroy srv/GetAvailableActions message.
/**
 * It calls
 * crs_msgs__srv__GetAvailableActions_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Request__destroy(crs_msgs__srv__GetAvailableActions_Request * msg);


/// Initialize array of srv/GetAvailableActions messages.
/**
 * It allocates the memory for the number of elements and calls
 * crs_msgs__srv__GetAvailableActions_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
bool
crs_msgs__srv__GetAvailableActions_Request__Sequence__init(crs_msgs__srv__GetAvailableActions_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetAvailableActions messages.
/**
 * It calls
 * crs_msgs__srv__GetAvailableActions_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Request__Sequence__fini(crs_msgs__srv__GetAvailableActions_Request__Sequence * array);

/// Create array of srv/GetAvailableActions messages.
/**
 * It allocates the memory for the array and calls
 * crs_msgs__srv__GetAvailableActions_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
crs_msgs__srv__GetAvailableActions_Request__Sequence *
crs_msgs__srv__GetAvailableActions_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetAvailableActions messages.
/**
 * It calls
 * crs_msgs__srv__GetAvailableActions_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Request__Sequence__destroy(crs_msgs__srv__GetAvailableActions_Request__Sequence * array);

/// Initialize srv/GetAvailableActions message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * crs_msgs__srv__GetAvailableActions_Response
 * )) before or use
 * crs_msgs__srv__GetAvailableActions_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
bool
crs_msgs__srv__GetAvailableActions_Response__init(crs_msgs__srv__GetAvailableActions_Response * msg);

/// Finalize srv/GetAvailableActions message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Response__fini(crs_msgs__srv__GetAvailableActions_Response * msg);

/// Create srv/GetAvailableActions message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * crs_msgs__srv__GetAvailableActions_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
crs_msgs__srv__GetAvailableActions_Response *
crs_msgs__srv__GetAvailableActions_Response__create();

/// Destroy srv/GetAvailableActions message.
/**
 * It calls
 * crs_msgs__srv__GetAvailableActions_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Response__destroy(crs_msgs__srv__GetAvailableActions_Response * msg);


/// Initialize array of srv/GetAvailableActions messages.
/**
 * It allocates the memory for the number of elements and calls
 * crs_msgs__srv__GetAvailableActions_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
bool
crs_msgs__srv__GetAvailableActions_Response__Sequence__init(crs_msgs__srv__GetAvailableActions_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetAvailableActions messages.
/**
 * It calls
 * crs_msgs__srv__GetAvailableActions_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Response__Sequence__fini(crs_msgs__srv__GetAvailableActions_Response__Sequence * array);

/// Create array of srv/GetAvailableActions messages.
/**
 * It allocates the memory for the array and calls
 * crs_msgs__srv__GetAvailableActions_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
crs_msgs__srv__GetAvailableActions_Response__Sequence *
crs_msgs__srv__GetAvailableActions_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetAvailableActions messages.
/**
 * It calls
 * crs_msgs__srv__GetAvailableActions_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_crs_msgs
void
crs_msgs__srv__GetAvailableActions_Response__Sequence__destroy(crs_msgs__srv__GetAvailableActions_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CRS_MSGS__SRV__GET_AVAILABLE_ACTIONS__FUNCTIONS_H_
