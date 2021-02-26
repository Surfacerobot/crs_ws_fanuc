// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/JointDynamics.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__JOINT_DYNAMICS__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__JOINT_DYNAMICS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__JointDynamics __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__JointDynamics __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointDynamics_
{
  using Type = JointDynamics_<ContainerAllocator>;

  explicit JointDynamics_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->damping = 0.0;
      this->friction = 0.0;
      this->empty = false;
    }
  }

  explicit JointDynamics_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->damping = 0.0;
      this->friction = 0.0;
      this->empty = false;
    }
  }

  // field types and members
  using _damping_type =
    double;
  _damping_type damping;
  using _friction_type =
    double;
  _friction_type friction;
  using _empty_type =
    bool;
  _empty_type empty;

  // setters for named parameter idiom
  Type & set__damping(
    const double & _arg)
  {
    this->damping = _arg;
    return *this;
  }
  Type & set__friction(
    const double & _arg)
  {
    this->friction = _arg;
    return *this;
  }
  Type & set__empty(
    const bool & _arg)
  {
    this->empty = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::JointDynamics_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::JointDynamics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointDynamics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::JointDynamics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__JointDynamics
    std::shared_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__JointDynamics
    std::shared_ptr<tesseract_msgs::msg::JointDynamics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointDynamics_ & other) const
  {
    if (this->damping != other.damping) {
      return false;
    }
    if (this->friction != other.friction) {
      return false;
    }
    if (this->empty != other.empty) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointDynamics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointDynamics_

// alias to use template instance with default allocator
using JointDynamics =
  tesseract_msgs::msg::JointDynamics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__JOINT_DYNAMICS__STRUCT_HPP_
