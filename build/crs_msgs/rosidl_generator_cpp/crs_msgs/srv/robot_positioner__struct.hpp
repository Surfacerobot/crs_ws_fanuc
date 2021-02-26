// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/RobotPositioner.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__ROBOT_POSITIONER__STRUCT_HPP_
#define CRS_MSGS__SRV__ROBOT_POSITIONER__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__RobotPositioner_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__RobotPositioner_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotPositioner_Request_
{
  using Type = RobotPositioner_Request_<ContainerAllocator>;

  explicit RobotPositioner_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_position = 0;
      this->robot_rail = 0;
    }
  }

  explicit RobotPositioner_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_position = 0;
      this->robot_rail = 0;
    }
  }

  // field types and members
  using _robot_position_type =
    uint8_t;
  _robot_position_type robot_position;
  using _robot_rail_type =
    uint8_t;
  _robot_rail_type robot_rail;

  // setters for named parameter idiom
  Type & set__robot_position(
    const uint8_t & _arg)
  {
    this->robot_position = _arg;
    return *this;
  }
  Type & set__robot_rail(
    const uint8_t & _arg)
  {
    this->robot_rail = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POSITION1 =
    0u;
  static constexpr uint8_t POSITION2 =
    1u;
  static constexpr uint8_t POSITION3 =
    2u;
  static constexpr uint8_t RAIL1 =
    0u;
  static constexpr uint8_t RAIL2 =
    1u;

  // pointer types
  using RawPtr =
    crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__RobotPositioner_Request
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__RobotPositioner_Request
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPositioner_Request_ & other) const
  {
    if (this->robot_position != other.robot_position) {
      return false;
    }
    if (this->robot_rail != other.robot_rail) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPositioner_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPositioner_Request_

// alias to use template instance with default allocator
using RobotPositioner_Request =
  crs_msgs::srv::RobotPositioner_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t RobotPositioner_Request_<ContainerAllocator>::POSITION1;
template<typename ContainerAllocator>
constexpr uint8_t RobotPositioner_Request_<ContainerAllocator>::POSITION2;
template<typename ContainerAllocator>
constexpr uint8_t RobotPositioner_Request_<ContainerAllocator>::POSITION3;
template<typename ContainerAllocator>
constexpr uint8_t RobotPositioner_Request_<ContainerAllocator>::RAIL1;
template<typename ContainerAllocator>
constexpr uint8_t RobotPositioner_Request_<ContainerAllocator>::RAIL2;

}  // namespace srv

}  // namespace crs_msgs


#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__RobotPositioner_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__RobotPositioner_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RobotPositioner_Response_
{
  using Type = RobotPositioner_Response_<ContainerAllocator>;

  explicit RobotPositioner_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit RobotPositioner_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__RobotPositioner_Response
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__RobotPositioner_Response
    std::shared_ptr<crs_msgs::srv::RobotPositioner_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotPositioner_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotPositioner_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotPositioner_Response_

// alias to use template instance with default allocator
using RobotPositioner_Response =
  crs_msgs::srv::RobotPositioner_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct RobotPositioner
{
  using Request = crs_msgs::srv::RobotPositioner_Request;
  using Response = crs_msgs::srv::RobotPositioner_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__ROBOT_POSITIONER__STRUCT_HPP_
