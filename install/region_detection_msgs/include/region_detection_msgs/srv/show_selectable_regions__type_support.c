// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from region_detection_msgs:srv/ShowSelectableRegions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "region_detection_msgs/srv/show_selectable_regions__rosidl_typesupport_introspection_c.h"
#include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "region_detection_msgs/srv/show_selectable_regions__functions.h"
#include "region_detection_msgs/srv/show_selectable_regions__struct.h"


// Include directives for member types
// Member `selectable_regions`
#include "geometry_msgs/msg/pose_array.h"
// Member `selectable_regions`
#include "geometry_msgs/msg/pose_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__srv__ShowSelectableRegions_Request__init(message_memory);
}

void ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_fini_function(void * message_memory)
{
  region_detection_msgs__srv__ShowSelectableRegions_Request__fini(message_memory);
}

size_t ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__size_function__PoseArray__selectable_regions(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__get_const_function__PoseArray__selectable_regions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__get_function__PoseArray__selectable_regions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__resize_function__PoseArray__selectable_regions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_member_array[2] = {
  {
    "selectable_regions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__ShowSelectableRegions_Request, selectable_regions),  // bytes offset in struct
    NULL,  // default value
    ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__size_function__PoseArray__selectable_regions,  // size() function pointer
    ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__get_const_function__PoseArray__selectable_regions,  // get_const(index) function pointer
    ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__get_function__PoseArray__selectable_regions,  // get(index) function pointer
    ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__resize_function__PoseArray__selectable_regions  // resize(index) function pointer
  },
  {
    "start_selected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__ShowSelectableRegions_Request, start_selected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_members = {
  "region_detection_msgs__srv",  // message namespace
  "ShowSelectableRegions_Request",  // message name
  2,  // number of fields
  sizeof(region_detection_msgs__srv__ShowSelectableRegions_Request),
  ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_member_array,  // message members
  ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_type_support_handle = {
  0,
  &ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions_Request)() {
  ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_type_support_handle.typesupport_identifier) {
    ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShowSelectableRegions_Request__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "region_detection_msgs/srv/show_selectable_regions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "region_detection_msgs/srv/show_selectable_regions__functions.h"
// already included above
// #include "region_detection_msgs/srv/show_selectable_regions__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__srv__ShowSelectableRegions_Response__init(message_memory);
}

void ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_fini_function(void * message_memory)
{
  region_detection_msgs__srv__ShowSelectableRegions_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__ShowSelectableRegions_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_members = {
  "region_detection_msgs__srv",  // message namespace
  "ShowSelectableRegions_Response",  // message name
  1,  // number of fields
  sizeof(region_detection_msgs__srv__ShowSelectableRegions_Response),
  ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_member_array,  // message members
  ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_type_support_handle = {
  0,
  &ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions_Response)() {
  if (!ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_type_support_handle.typesupport_identifier) {
    ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ShowSelectableRegions_Response__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "region_detection_msgs/srv/show_selectable_regions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_members = {
  "region_detection_msgs__srv",  // service namespace
  "ShowSelectableRegions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_Request_message_type_support_handle,
  NULL  // response message
  // region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_Response_message_type_support_handle
};

static rosidl_service_type_support_t region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_type_support_handle = {
  0,
  &region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions)() {
  if (!region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_type_support_handle.typesupport_identifier) {
    region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, ShowSelectableRegions_Response)()->data;
  }

  return &region_detection_msgs__srv__show_selectable_regions__rosidl_typesupport_introspection_c__ShowSelectableRegions_service_type_support_handle;
}
