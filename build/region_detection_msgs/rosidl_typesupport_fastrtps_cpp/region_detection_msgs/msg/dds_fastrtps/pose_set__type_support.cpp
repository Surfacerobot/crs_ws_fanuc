// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice
#include "region_detection_msgs/msg/pose_set__rosidl_typesupport_fastrtps_cpp.hpp"
#include "region_detection_msgs/msg/pose_set__struct.hpp"

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

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
cdr_serialize(
  const region_detection_msgs::msg::PoseSet & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pose_arrays
  {
    size_t size = ros_message.pose_arrays.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.pose_arrays[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  region_detection_msgs::msg::PoseSet & ros_message)
{
  // Member: pose_arrays
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.pose_arrays.resize(size);
    for (size_t i = 0; i < size; i++) {
      geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.pose_arrays[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
get_serialized_size(
  const region_detection_msgs::msg::PoseSet & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pose_arrays
  {
    size_t array_size = ros_message.pose_arrays.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.pose_arrays[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_region_detection_msgs
max_serialized_size_PoseSet(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: pose_arrays
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

  return current_alignment - initial_alignment;
}

static bool _PoseSet__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const region_detection_msgs::msg::PoseSet *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PoseSet__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<region_detection_msgs::msg::PoseSet *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PoseSet__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const region_detection_msgs::msg::PoseSet *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PoseSet__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PoseSet(full_bounded, 0);
}

static message_type_support_callbacks_t _PoseSet__callbacks = {
  "region_detection_msgs::msg",
  "PoseSet",
  _PoseSet__cdr_serialize,
  _PoseSet__cdr_deserialize,
  _PoseSet__get_serialized_size,
  _PoseSet__max_serialized_size
};

static rosidl_message_type_support_t _PoseSet__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PoseSet__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace region_detection_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_region_detection_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<region_detection_msgs::msg::PoseSet>()
{
  return &region_detection_msgs::msg::typesupport_fastrtps_cpp::_PoseSet__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, region_detection_msgs, msg, PoseSet)() {
  return &region_detection_msgs::msg::typesupport_fastrtps_cpp::_PoseSet__handle;
}

#ifdef __cplusplus
}
#endif
