// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tesseract_msgs:srv/ModifyEnvironment.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__FUNCTIONS_H_
#define TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "tesseract_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tesseract_msgs/srv/modify_environment__struct.h"

/// Initialize srv/ModifyEnvironment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__srv__ModifyEnvironment_Request
 * )) before or use
 * tesseract_msgs__srv__ModifyEnvironment_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__ModifyEnvironment_Request__init(tesseract_msgs__srv__ModifyEnvironment_Request * msg);

/// Finalize srv/ModifyEnvironment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Request__fini(tesseract_msgs__srv__ModifyEnvironment_Request * msg);

/// Create srv/ModifyEnvironment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__srv__ModifyEnvironment_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__ModifyEnvironment_Request *
tesseract_msgs__srv__ModifyEnvironment_Request__create();

/// Destroy srv/ModifyEnvironment message.
/**
 * It calls
 * tesseract_msgs__srv__ModifyEnvironment_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Request__destroy(tesseract_msgs__srv__ModifyEnvironment_Request * msg);


/// Initialize array of srv/ModifyEnvironment messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__srv__ModifyEnvironment_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__ModifyEnvironment_Request__Sequence__init(tesseract_msgs__srv__ModifyEnvironment_Request__Sequence * array, size_t size);

/// Finalize array of srv/ModifyEnvironment messages.
/**
 * It calls
 * tesseract_msgs__srv__ModifyEnvironment_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Request__Sequence__fini(tesseract_msgs__srv__ModifyEnvironment_Request__Sequence * array);

/// Create array of srv/ModifyEnvironment messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__srv__ModifyEnvironment_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__ModifyEnvironment_Request__Sequence *
tesseract_msgs__srv__ModifyEnvironment_Request__Sequence__create(size_t size);

/// Destroy array of srv/ModifyEnvironment messages.
/**
 * It calls
 * tesseract_msgs__srv__ModifyEnvironment_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Request__Sequence__destroy(tesseract_msgs__srv__ModifyEnvironment_Request__Sequence * array);

/// Initialize srv/ModifyEnvironment message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tesseract_msgs__srv__ModifyEnvironment_Response
 * )) before or use
 * tesseract_msgs__srv__ModifyEnvironment_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__ModifyEnvironment_Response__init(tesseract_msgs__srv__ModifyEnvironment_Response * msg);

/// Finalize srv/ModifyEnvironment message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Response__fini(tesseract_msgs__srv__ModifyEnvironment_Response * msg);

/// Create srv/ModifyEnvironment message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tesseract_msgs__srv__ModifyEnvironment_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__ModifyEnvironment_Response *
tesseract_msgs__srv__ModifyEnvironment_Response__create();

/// Destroy srv/ModifyEnvironment message.
/**
 * It calls
 * tesseract_msgs__srv__ModifyEnvironment_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Response__destroy(tesseract_msgs__srv__ModifyEnvironment_Response * msg);


/// Initialize array of srv/ModifyEnvironment messages.
/**
 * It allocates the memory for the number of elements and calls
 * tesseract_msgs__srv__ModifyEnvironment_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
bool
tesseract_msgs__srv__ModifyEnvironment_Response__Sequence__init(tesseract_msgs__srv__ModifyEnvironment_Response__Sequence * array, size_t size);

/// Finalize array of srv/ModifyEnvironment messages.
/**
 * It calls
 * tesseract_msgs__srv__ModifyEnvironment_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Response__Sequence__fini(tesseract_msgs__srv__ModifyEnvironment_Response__Sequence * array);

/// Create array of srv/ModifyEnvironment messages.
/**
 * It allocates the memory for the array and calls
 * tesseract_msgs__srv__ModifyEnvironment_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
tesseract_msgs__srv__ModifyEnvironment_Response__Sequence *
tesseract_msgs__srv__ModifyEnvironment_Response__Sequence__create(size_t size);

/// Destroy array of srv/ModifyEnvironment messages.
/**
 * It calls
 * tesseract_msgs__srv__ModifyEnvironment_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tesseract_msgs
void
tesseract_msgs__srv__ModifyEnvironment_Response__Sequence__destroy(tesseract_msgs__srv__ModifyEnvironment_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TESSERACT_MSGS__SRV__MODIFY_ENVIRONMENT__FUNCTIONS_H_
