// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:msg/TesseractState.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__MSG__TESSERACT_STATE__STRUCT_HPP_
#define TESSERACT_MSGS__MSG__TESSERACT_STATE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'commands'
#include "tesseract_msgs/msg/environment_command__struct.hpp"
// Member 'joint_state'
#include "sensor_msgs/msg/joint_state__struct.hpp"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/multi_dof_joint_state__struct.hpp"
// Member 'initial_state'
#include "tesseract_msgs/msg/tesseract_init_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__msg__TesseractState __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__msg__TesseractState __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TesseractState_
{
  using Type = TesseractState_<ContainerAllocator>;

  explicit TesseractState_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : joint_state(_init),
    multi_dof_joint_state(_init),
    initial_state(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->revision = 0ull;
    }
  }

  explicit TesseractState_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : id(_alloc),
    joint_state(_alloc, _init),
    multi_dof_joint_state(_alloc, _init),
    initial_state(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->revision = 0ull;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _revision_type =
    uint64_t;
  _revision_type revision;
  using _commands_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>::other>;
  _commands_type commands;
  using _joint_state_type =
    sensor_msgs::msg::JointState_<ContainerAllocator>;
  _joint_state_type joint_state;
  using _multi_dof_joint_state_type =
    sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator>;
  _multi_dof_joint_state_type multi_dof_joint_state;
  using _initial_state_type =
    tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator>;
  _initial_state_type initial_state;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const uint64_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__commands(
    const std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->commands = _arg;
    return *this;
  }
  Type & set__joint_state(
    const sensor_msgs::msg::JointState_<ContainerAllocator> & _arg)
  {
    this->joint_state = _arg;
    return *this;
  }
  Type & set__multi_dof_joint_state(
    const sensor_msgs::msg::MultiDOFJointState_<ContainerAllocator> & _arg)
  {
    this->multi_dof_joint_state = _arg;
    return *this;
  }
  Type & set__initial_state(
    const tesseract_msgs::msg::TesseractInitInfo_<ContainerAllocator> & _arg)
  {
    this->initial_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::msg::TesseractState_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::msg::TesseractState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::TesseractState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::msg::TesseractState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__msg__TesseractState
    std::shared_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__msg__TesseractState
    std::shared_ptr<tesseract_msgs::msg::TesseractState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TesseractState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    if (this->joint_state != other.joint_state) {
      return false;
    }
    if (this->multi_dof_joint_state != other.multi_dof_joint_state) {
      return false;
    }
    if (this->initial_state != other.initial_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TesseractState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TesseractState_

// alias to use template instance with default allocator
using TesseractState =
  tesseract_msgs::msg::TesseractState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__MSG__TESSERACT_STATE__STRUCT_HPP_
