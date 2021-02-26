// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:msg/ProcessMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__MSG__PROCESS_MOTION_PLAN__STRUCT_HPP_
#define CRS_MSGS__MSG__PROCESS_MOTION_PLAN__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start'
// Member 'process_motions'
// Member 'free_motions'
// Member 'end'
#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"
// Member 'force_controlled_process_motions'
#include "cartesian_trajectory_msgs/msg/cartesian_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__msg__ProcessMotionPlan __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__msg__ProcessMotionPlan __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProcessMotionPlan_
{
  using Type = ProcessMotionPlan_<ContainerAllocator>;

  explicit ProcessMotionPlan_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : start(_init),
    end(_init)
  {
    (void)_init;
  }

  explicit ProcessMotionPlan_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    end(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _start_type start;
  using _process_motions_type =
    std::vector<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>>::other>;
  _process_motions_type process_motions;
  using _force_controlled_process_motions_type =
    std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>::other>;
  _force_controlled_process_motions_type force_controlled_process_motions;
  using _free_motions_type =
    std::vector<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>>::other>;
  _free_motions_type free_motions;
  using _end_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _end_type end;

  // setters for named parameter idiom
  Type & set__start(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__process_motions(
    const std::vector<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>>::other> & _arg)
  {
    this->process_motions = _arg;
    return *this;
  }
  Type & set__force_controlled_process_motions(
    const std::vector<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartesian_trajectory_msgs::msg::CartesianTrajectory_<ContainerAllocator>>::other> & _arg)
  {
    this->force_controlled_process_motions = _arg;
    return *this;
  }
  Type & set__free_motions(
    const std::vector<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>, typename ContainerAllocator::template rebind<trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>>::other> & _arg)
  {
    this->free_motions = _arg;
    return *this;
  }
  Type & set__end(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__msg__ProcessMotionPlan
    std::shared_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__msg__ProcessMotionPlan
    std::shared_ptr<crs_msgs::msg::ProcessMotionPlan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProcessMotionPlan_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->process_motions != other.process_motions) {
      return false;
    }
    if (this->force_controlled_process_motions != other.force_controlled_process_motions) {
      return false;
    }
    if (this->free_motions != other.free_motions) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProcessMotionPlan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProcessMotionPlan_

// alias to use template instance with default allocator
using ProcessMotionPlan =
  crs_msgs::msg::ProcessMotionPlan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace crs_msgs

#endif  // CRS_MSGS__MSG__PROCESS_MOTION_PLAN__STRUCT_HPP_
