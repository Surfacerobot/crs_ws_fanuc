// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:msg/ToolProcessPath.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__TOOL_PROCESS_PATH__STRUCT_HPP_
#define CRS_MSGS__MSG__TOOL_PROCESS_PATH__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'rasters'
#include "geometry_msgs/msg/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__msg__ToolProcessPath __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__msg__ToolProcessPath __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ToolProcessPath_
{
  using Type = ToolProcessPath_<ContainerAllocator>;

  explicit ToolProcessPath_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ToolProcessPath_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _rasters_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _rasters_type rasters;

  // setters for named parameter idiom
  Type & set__rasters(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->rasters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::msg::ToolProcessPath_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::msg::ToolProcessPath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__msg__ToolProcessPath
    std::shared_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__msg__ToolProcessPath
    std::shared_ptr<crs_msgs::msg::ToolProcessPath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToolProcessPath_ & other) const
  {
    if (this->rasters != other.rasters) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToolProcessPath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToolProcessPath_

// alias to use template instance with default allocator
using ToolProcessPath =
  crs_msgs::msg::ToolProcessPath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crs_msgs

#endif  // CRS_MSGS__MSG__TOOL_PROCESS_PATH__STRUCT_HPP_
