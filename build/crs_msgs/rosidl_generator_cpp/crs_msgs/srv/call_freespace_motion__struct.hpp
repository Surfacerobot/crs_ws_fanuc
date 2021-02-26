// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/CallFreespaceMotion.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__CALL_FREESPACE_MOTION__STRUCT_HPP_
#define CRS_MSGS__SRV__CALL_FREESPACE_MOTION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start_position'
// Member 'goal_position'
#include "sensor_msgs/msg/joint_state__struct.hpp"
// Member 'goal_pose'
#include "geometry_msgs/msg/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CallFreespaceMotion_Request_
{
  using Type = CallFreespaceMotion_Request_<ContainerAllocator>;

  explicit CallFreespaceMotion_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : start_position(_init),
    goal_position(_init),
    goal_pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_link = "";
      this->num_steps = 0l;
      this->execute = false;
    }
  }

  explicit CallFreespaceMotion_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : target_link(_alloc),
    start_position(_alloc, _init),
    goal_position(_alloc, _init),
    goal_pose(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_link = "";
      this->num_steps = 0l;
      this->execute = false;
    }
  }

  // field types and members
  using _target_link_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _target_link_type target_link;
  using _start_position_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _start_position_type start_position;
  using _goal_position_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _goal_position_type goal_position;
  using _goal_pose_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _goal_pose_type goal_pose;
  using _num_steps_type =
    int32_t;
  _num_steps_type num_steps;
  using _execute_type =
    bool;
  _execute_type execute;

  // setters for named parameter idiom
  Type & set__target_link(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->target_link = _arg;
    return *this;
  }
  Type & set__start_position(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->start_position = _arg;
    return *this;
  }
  Type & set__goal_position(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->goal_position = _arg;
    return *this;
  }
  Type & set__goal_pose(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->goal_pose = _arg;
    return *this;
  }
  Type & set__num_steps(
    const int32_t & _arg)
  {
    this->num_steps = _arg;
    return *this;
  }
  Type & set__execute(
    const bool & _arg)
  {
    this->execute = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Request
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Request
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CallFreespaceMotion_Request_ & other) const
  {
    if (this->target_link != other.target_link) {
      return false;
    }
    if (this->start_position != other.start_position) {
      return false;
    }
    if (this->goal_position != other.goal_position) {
      return false;
    }
    if (this->goal_pose != other.goal_pose) {
      return false;
    }
    if (this->num_steps != other.num_steps) {
      return false;
    }
    if (this->execute != other.execute) {
      return false;
    }
    return true;
  }
  bool operator!=(const CallFreespaceMotion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CallFreespaceMotion_Request_

// alias to use template instance with default allocator
using CallFreespaceMotion_Request =
  crs_msgs::srv::CallFreespaceMotion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


// Include directives for member types
// Member 'output_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CallFreespaceMotion_Response_
{
  using Type = CallFreespaceMotion_Response_<ContainerAllocator>;

  explicit CallFreespaceMotion_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : output_trajectory(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit CallFreespaceMotion_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : output_trajectory(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _output_trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _output_trajectory_type output_trajectory;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__output_trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->output_trajectory = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Response
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__CallFreespaceMotion_Response
    std::shared_ptr<crs_msgs::srv::CallFreespaceMotion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CallFreespaceMotion_Response_ & other) const
  {
    if (this->output_trajectory != other.output_trajectory) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const CallFreespaceMotion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CallFreespaceMotion_Response_

// alias to use template instance with default allocator
using CallFreespaceMotion_Response =
  crs_msgs::srv::CallFreespaceMotion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct CallFreespaceMotion
{
  using Request = crs_msgs::srv::CallFreespaceMotion_Request;
  using Response = crs_msgs::srv::CallFreespaceMotion_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__CALL_FREESPACE_MOTION__STRUCT_HPP_
