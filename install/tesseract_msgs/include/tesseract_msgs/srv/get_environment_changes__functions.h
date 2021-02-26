// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__GET_ENVIRONMENT_CHANGES__FUNCTIONS_H_
#define TESSERACT_MSGS__SRV__GET_ENVIRONMENT_CHANGES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tesseract_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tesseract_msgs/srv/get_environment_changes__struct.h"

/// Initialize srv/GetEnvironmentChanges message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__srv__GetEnvironmentChanges_Request
 * )) before or use
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__init(tesseract_msgs__srv__GetEnvironmentChanges_Request * msg);

/// Finalize srv/GetEnvironmentChanges message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Request__fini(tesseract_msgs__srv__GetEnvironmentChanges_Request * msg);

/// Create srv/GetEnvironmentChanges message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__GetEnvironmentChanges_Request *
tesseract_msgs__srv__GetEnvironmentChanges_Request__create();

/// Destroy srv/GetEnvironmentChanges message.
/**
 * It calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Request__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Request * msg);


/// Initialize array of srv/GetEnvironmentChanges messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__init(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetEnvironmentChanges messages.
/**
 * It calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__fini(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array);

/// Create array of srv/GetEnvironmentChanges messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence *
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetEnvironmentChanges messages.
/**
 * It calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Request__Sequence * array);

/// Initialize srv/GetEnvironmentChanges message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__srv__GetEnvironmentChanges_Response
 * )) before or use
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__init(tesseract_msgs__srv__GetEnvironmentChanges_Response * msg);

/// Finalize srv/GetEnvironmentChanges message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Response__fini(tesseract_msgs__srv__GetEnvironmentChanges_Response * msg);

/// Create srv/GetEnvironmentChanges message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__GetEnvironmentChanges_Response *
tesseract_msgs__srv__GetEnvironmentChanges_Response__create();

/// Destroy srv/GetEnvironmentChanges message.
/**
 * It calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Response__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Response * msg);


/// Initialize array of srv/GetEnvironmentChanges messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__init(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetEnvironmentChanges messages.
/**
 * It calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__fini(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array);

/// Create array of srv/GetEnvironmentChanges messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence *
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetEnvironmentChanges messages.
/**
 * It calls
 * tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence__destroy(tesseract_msgs__srv__GetEnvironmentChanges_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__GET_ENVIRONMENT_CHANGES__FUNCTIONS_H_
