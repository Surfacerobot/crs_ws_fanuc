// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from region_detection_msgs:srv/ShowSelectableRegions.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/srv/show_selectable_regions__rosidl_typesupport_fastrtps_cpp.hpp"
#include "region_detection_msgs/srv/show_selectable_regions__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::PoseArray &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::PoseArray &);
size_t get_serialized_size(
  const geometry_msgs::msg::PoseArray &,
  size_t current_alignment);
size_t
max_serialized_size_PoseArray(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace region_detection_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
cdr_serialize(
  const region_detection_msgs::srv::ShowSelectableRegions_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: selectable_regions
  {
    size_t size = ros_message.selectable_regions.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.selectable_regions[i],
        cdr);
    }
  }
  // Member: start_selected
  cdr << (ros_message.start_selected ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  region_detection_msgs::srv::ShowSelectableRegions_Request & ros_message)
{
  // Member: selectable_regions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.selectable_regions.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.selectable_regions[i]);
    }
  }

  // Member: start_selected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.start_selected = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
get_serialized_size(
  const region_detection_msgs::srv::ShowSelectableRegions_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: selectable_regions
  {
    size_t array_size = ros_message.selectable_regions.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.selectable_regions[index], current_alignment);
    }
  }
  // Member: start_selected
  {
    size_t item_size = sizeof(ros_message.start_selected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
max_serialized_size_ShowSelectableRegions_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: selectable_regions
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PoseArray(
        full_bounded, current_alignment);
    }
  }

  // Member: start_selected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ShowSelectableRegions_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const region_detection_msgs::srv::ShowSelectableRegions_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShowSelectableRegions_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<region_detection_msgs::srv::ShowSelectableRegions_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShowSelectableRegions_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const region_detection_msgs::srv::ShowSelectableRegions_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShowSelectableRegions_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ShowSelectableRegions_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ShowSelectableRegions_Request__callbacks = {
  "region_detection_msgs::srv",
  "ShowSelectableRegions_Request",
  _ShowSelectableRegions_Request__cdr_serialize,
  _ShowSelectableRegions_Request__cdr_deserialize,
  _ShowSelectableRegions_Request__get_serialized_size,
  _ShowSelectableRegions_Request__max_serialized_size
};

static rosidl_message_type_support_t _ShowSelectableRegions_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ShowSelectableRegions_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace region_detection_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<region_detection_msgs::srv::ShowSelectableRegions_Request>()
{
  return &region_detection_msgs::srv::typesupport_fastrtps_cpp::_ShowSelectableRegions_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, region_detection_msgs, srv, ShowSelectableRegions_Request)() {
  return &region_detection_msgs::srv::typesupport_fastrtps_cpp::_ShowSelectableRegions_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace region_detection_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
cdr_serialize(
  const region_detection_msgs::srv::ShowSelectableRegions_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  region_detection_msgs::srv::ShowSelectableRegions_Response & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
get_serialized_size(
  const region_detection_msgs::srv::ShowSelectableRegions_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
max_serialized_size_ShowSelectableRegions_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _ShowSelectableRegions_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const region_detection_msgs::srv::ShowSelectableRegions_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ShowSelectableRegions_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<region_detection_msgs::srv::ShowSelectableRegions_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ShowSelectableRegions_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const region_detection_msgs::srv::ShowSelectableRegions_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ShowSelectableRegions_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ShowSelectableRegions_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ShowSelectableRegions_Response__callbacks = {
  "region_detection_msgs::srv",
  "ShowSelectableRegions_Response",
  _ShowSelectableRegions_Response__cdr_serialize,
  _ShowSelectableRegions_Response__cdr_deserialize,
  _ShowSelectableRegions_Response__get_serialized_size,
  _ShowSelectableRegions_Response__max_serialized_size
};

static rosidl_message_type_support_t _ShowSelectableRegions_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ShowSelectableRegions_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace region_detection_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<region_detection_msgs::srv::ShowSelectableRegions_Response>()
{
  return &region_detection_msgs::srv::typesupport_fastrtps_cpp::_ShowSelectableRegions_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, region_detection_msgs, srv, ShowSelectableRegions_Response)() {
  return &region_detection_msgs::srv::typesupport_fastrtps_cpp::_ShowSelectableRegions_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace region_detection_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ShowSelectableRegions__callbacks = {
  "region_detection_msgs::srv",
  "ShowSelectableRegions",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, region_detection_msgs, srv, ShowSelectableRegions_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, region_detection_msgs, srv, ShowSelectableRegions_Response)(),
};

static rosidl_service_type_support_t _ShowSelectableRegions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ShowSelectableRegions__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace region_detection_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_region_detection_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<region_detection_msgs::srv::ShowSelectableRegions>()
{
  return &region_detection_msgs::srv::typesupport_fastrtps_cpp::_ShowSelectableRegions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, region_detection_msgs, srv, ShowSelectableRegions)() {
  return &region_detection_msgs::srv::typesupport_fastrtps_cpp::_ShowSelectableRegions__handle;
}

#ifdef __cplusplus
}
#endif
