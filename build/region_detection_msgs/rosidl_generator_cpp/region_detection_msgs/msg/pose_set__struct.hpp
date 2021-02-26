// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from region_detection_msgs:msg/PoseSet.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__MSG__POSE_SET__STRUCT_HPP_
#define REGION_DETECTION_MSGS__MSG__POSE_SET__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose_arrays'
#include "geometry_msgs/msg/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__msg__PoseSet __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__msg__PoseSet __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PoseSet_
{
  using Type = PoseSet_<ContainerAllocator>;

  explicit PoseSet_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PoseSet_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pose_arrays_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _pose_arrays_type pose_arrays;

  // setters for named parameter idiom
  Type & set__pose_arrays(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->pose_arrays = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    region_detection_msgs::msg::PoseSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::msg::PoseSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::msg::PoseSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::msg::PoseSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__msg__PoseSet
    std::shared_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__msg__PoseSet
    std::shared_ptr<region_detection_msgs::msg::PoseSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PoseSet_ & other) const
  {
    if (this->pose_arrays != other.pose_arrays) {
      return false;
    }
    return true;
  }
  bool operator!=(const PoseSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PoseSet_

// alias to use template instance with default allocator
using PoseSet =
  region_detection_msgs::msg::PoseSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace region_detection_msgs

#endif  // REGION_DETECTION_MSGS__MSG__POSE_SET__STRUCT_HPP_
