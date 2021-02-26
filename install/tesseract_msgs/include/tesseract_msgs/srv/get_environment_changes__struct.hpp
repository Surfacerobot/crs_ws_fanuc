// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:srv/GetEnvironmentChanges.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__GET_ENVIRONMENT_CHANGES__STRUCT_HPP_
#define TESSERACT_MSGS__SRV__GET_ENVIRONMENT_CHANGES__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Request __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEnvironmentChanges_Request_
{
  using Type = GetEnvironmentChanges_Request_<ContainerAllocator>;

  explicit GetEnvironmentChanges_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->revision = 0ull;
    }
  }

  explicit GetEnvironmentChanges_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->revision = 0ull;
    }
  }

  // field types and members
  using _revision_type =
    uint64_t;
  _revision_type revision;

  // setters for named parameter idiom
  Type & set__revision(
    const uint64_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Request
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Request
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEnvironmentChanges_Request_ & other) const
  {
    if (this->revision != other.revision) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEnvironmentChanges_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEnvironmentChanges_Request_

// alias to use template instance with default allocator
using GetEnvironmentChanges_Request =
  tesseract_msgs::srv::GetEnvironmentChanges_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'commands'
#include "tesseract_msgs/msg/environment_command__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Response __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEnvironmentChanges_Response_
{
  using Type = GetEnvironmentChanges_Response_<ContainerAllocator>;

  explicit GetEnvironmentChanges_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->id = "";
      this->revision = 0ull;
    }
  }

  explicit GetEnvironmentChanges_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->id = "";
      this->revision = 0ull;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _revision_type =
    uint64_t;
  _revision_type revision;
  using _commands_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>::other>;
  _commands_type commands;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Response
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentChanges_Response
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentChanges_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEnvironmentChanges_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->commands != other.commands) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEnvironmentChanges_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEnvironmentChanges_Response_

// alias to use template instance with default allocator
using GetEnvironmentChanges_Response =
  tesseract_msgs::srv::GetEnvironmentChanges_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs

namespace tesseract_msgs
{

namespace srv
{

struct GetEnvironmentChanges
{
  using Request = tesseract_msgs::srv::GetEnvironmentChanges_Request;
  using Response = tesseract_msgs::srv::GetEnvironmentChanges_Response;
};

}  // namespace srv

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__GET_ENVIRONMENT_CHANGES__STRUCT_HPP_
