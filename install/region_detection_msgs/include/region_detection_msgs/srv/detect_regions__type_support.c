// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from region_detection_msgs:srv/DetectRegions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "region_detection_msgs/srv/detect_regions__rosidl_typesupport_introspection_c.h"
#include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "region_detection_msgs/srv/detect_regions__functions.h"
#include "region_detection_msgs/srv/detect_regions__struct.h"


// Include directives for member types
// Member `images`
#include "sensor_msgs/msg/image.h"
// Member `images`
#include "sensor_msgs/msg/image__rosidl_typesupport_introspection_c.h"
// Member `clouds`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `clouds`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped.h"
// Member `transforms`
#include "geometry_msgs/msg/transform_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__srv__DetectRegions_Request__init(message_memory);
}

void DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_fini_function(void * message_memory)
{
  region_detection_msgs__srv__DetectRegions_Request__fini(message_memory);
}

size_t DetectRegions_Request__rosidl_typesupport_introspection_c__size_function__Image__images(
  const void * untyped_member)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectRegions_Request__rosidl_typesupport_introspection_c__get_const_function__Image__images(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__Image__Sequence * member =
    (const sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectRegions_Request__rosidl_typesupport_introspection_c__get_function__Image__images(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectRegions_Request__rosidl_typesupport_introspection_c__resize_function__Image__images(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__Image__Sequence * member =
    (sensor_msgs__msg__Image__Sequence *)(untyped_member);
  sensor_msgs__msg__Image__Sequence__fini(member);
  return sensor_msgs__msg__Image__Sequence__init(member, size);
}

size_t DetectRegions_Request__rosidl_typesupport_introspection_c__size_function__PointCloud2__clouds(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectRegions_Request__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__clouds(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectRegions_Request__rosidl_typesupport_introspection_c__get_function__PointCloud2__clouds(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectRegions_Request__rosidl_typesupport_introspection_c__resize_function__PointCloud2__clouds(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  sensor_msgs__msg__PointCloud2__Sequence__fini(member);
  return sensor_msgs__msg__PointCloud2__Sequence__init(member, size);
}

size_t DetectRegions_Request__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms(
  const void * untyped_member)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectRegions_Request__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__TransformStamped__Sequence * member =
    (const geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectRegions_Request__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectRegions_Request__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__TransformStamped__Sequence * member =
    (geometry_msgs__msg__TransformStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__TransformStamped__Sequence__fini(member);
  return geometry_msgs__msg__TransformStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_member_array[3] = {
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__DetectRegions_Request, images),  // bytes offset in struct
    NULL,  // default value
    DetectRegions_Request__rosidl_typesupport_introspection_c__size_function__Image__images,  // size() function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__get_const_function__Image__images,  // get_const(index) function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__get_function__Image__images,  // get(index) function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__resize_function__Image__images  // resize(index) function pointer
  },
  {
    "clouds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__DetectRegions_Request, clouds),  // bytes offset in struct
    NULL,  // default value
    DetectRegions_Request__rosidl_typesupport_introspection_c__size_function__PointCloud2__clouds,  // size() function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__clouds,  // get_const(index) function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__get_function__PointCloud2__clouds,  // get(index) function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__resize_function__PointCloud2__clouds  // resize(index) function pointer
  },
  {
    "transforms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__DetectRegions_Request, transforms),  // bytes offset in struct
    NULL,  // default value
    DetectRegions_Request__rosidl_typesupport_introspection_c__size_function__TransformStamped__transforms,  // size() function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__get_const_function__TransformStamped__transforms,  // get_const(index) function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__get_function__TransformStamped__transforms,  // get(index) function pointer
    DetectRegions_Request__rosidl_typesupport_introspection_c__resize_function__TransformStamped__transforms  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_members = {
  "region_detection_msgs__srv",  // message namespace
  "DetectRegions_Request",  // message name
  3,  // number of fields
  sizeof(region_detection_msgs__srv__DetectRegions_Request),
  DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_member_array,  // message members
  DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_type_support_handle = {
  0,
  &DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions_Request)() {
  DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, TransformStamped)();
  if (!DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_type_support_handle.typesupport_identifier) {
    DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectRegions_Request__rosidl_typesupport_introspection_c__DetectRegions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "region_detection_msgs/srv/detect_regions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "region_detection_msgs/srv/detect_regions__functions.h"
// already included above
// #include "region_detection_msgs/srv/detect_regions__struct.h"


// Include directives for member types
// Member `detected_regions`
#include "geometry_msgs/msg/pose_array.h"
// Member `detected_regions`
#include "geometry_msgs/msg/pose_array__rosidl_typesupport_introspection_c.h"
// Member `err_msg`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c_message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  region_detection_msgs__srv__DetectRegions_Response__init(message_memory);
}

void DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_fini_function(void * message_memory)
{
  region_detection_msgs__srv__DetectRegions_Response__fini(message_memory);
}

size_t DetectRegions_Response__rosidl_typesupport_introspection_c__size_function__PoseArray__detected_regions(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectRegions_Response__rosidl_typesupport_introspection_c__get_const_function__PoseArray__detected_regions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseArray__Sequence * member =
    (const geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectRegions_Response__rosidl_typesupport_introspection_c__get_function__PoseArray__detected_regions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectRegions_Response__rosidl_typesupport_introspection_c__resize_function__PoseArray__detected_regions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseArray__Sequence * member =
    (geometry_msgs__msg__PoseArray__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseArray__Sequence__fini(member);
  return geometry_msgs__msg__PoseArray__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_member_array[3] = {
  {
    "detected_regions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__DetectRegions_Response, detected_regions),  // bytes offset in struct
    NULL,  // default value
    DetectRegions_Response__rosidl_typesupport_introspection_c__size_function__PoseArray__detected_regions,  // size() function pointer
    DetectRegions_Response__rosidl_typesupport_introspection_c__get_const_function__PoseArray__detected_regions,  // get_const(index) function pointer
    DetectRegions_Response__rosidl_typesupport_introspection_c__get_function__PoseArray__detected_regions,  // get(index) function pointer
    DetectRegions_Response__rosidl_typesupport_introspection_c__resize_function__PoseArray__detected_regions  // resize(index) function pointer
  },
  {
    "succeeded",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__DetectRegions_Response, succeeded),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "err_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(region_detection_msgs__srv__DetectRegions_Response, err_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_members = {
  "region_detection_msgs__srv",  // message namespace
  "DetectRegions_Response",  // message name
  3,  // number of fields
  sizeof(region_detection_msgs__srv__DetectRegions_Response),
  DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_member_array,  // message members
  DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_type_support_handle = {
  0,
  &DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions_Response)() {
  DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseArray)();
  if (!DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_type_support_handle.typesupport_identifier) {
    DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectRegions_Response__rosidl_typesupport_introspection_c__DetectRegions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "region_detection_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "region_detection_msgs/srv/detect_regions__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_members = {
  "region_detection_msgs__srv",  // service namespace
  "DetectRegions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_Request_message_type_support_handle,
  NULL  // response message
  // region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_Response_message_type_support_handle
};

static rosidl_service_type_support_t region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_type_support_handle = {
  0,
  &region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_region_detection_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions)() {
  if (!region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_type_support_handle.typesupport_identifier) {
    region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, region_detection_msgs, srv, DetectRegions_Response)()->data;
  }

  return &region_detection_msgs__srv__detect_regions__rosidl_typesupport_introspection_c__DetectRegions_service_type_support_handle;
}
