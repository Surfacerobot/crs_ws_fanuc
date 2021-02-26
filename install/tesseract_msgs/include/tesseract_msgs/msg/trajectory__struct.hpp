// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TRAJECTORY__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__TRAJECTORY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tesseract_state'
#include "tesseract_msgs/msg/tesseract_state__struct.hpp"
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/multi_dof_joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__Trajectory __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory_
{
  using Type = Trajectory_<ContainerAllocator>;

  explicit Trajectory_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : tesseract_state(_init),
    joint_trajectory(_init),
    multi_dof_joint_trajectory(_init)
  {
    (void)_init;
  }

  explicit Trajectory_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : tesseract_state(_alloc, _init),
    joint_trajectory(_alloc, _init),
    multi_dof_joint_trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tesseract_state_type =
    tesseract_msgs::msg::TesseractState_<ContainerAllocator>;
  _tesseract_state_type tesseract_state;
  using _joint_trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _joint_trajectory_type joint_trajectory;
  using _multi_dof_joint_trajectory_type =
    trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator>;
  _multi_dof_joint_trajectory_type multi_dof_joint_trajectory;

  // setters for named parameter idiom
  Type & set__tesseract_state(
    const tesseract_msgs::msg::TesseractState_<ContainerAllocator> & _arg)
  {
    this->tesseract_state = _arg;
    return *this;
  }
  Type & set__joint_trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->joint_trajectory = _arg;
    return *this;
  }
  Type & set__multi_dof_joint_trajectory(
    const trajectory_msgs::msg::MultiDOFJointTrajectory_<ContainerAllocator> & _arg)
  {
    this->multi_dof_joint_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__Trajectory
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__Trajectory
    std::shared_ptr<tesseract_msgs::msg::Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_ & other) const
  {
    if (this->tesseract_state != other.tesseract_state) {
      return false;
    }
    if (this->joint_trajectory != other.joint_trajectory) {
      return false;
    }
    if (this->multi_dof_joint_trajectory != other.multi_dof_joint_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_

// alias to use template instance with default allocator
using Trajectory =
  tesseract_msgs::msg::Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__TRAJECTORY__STRUCT_HPP_
