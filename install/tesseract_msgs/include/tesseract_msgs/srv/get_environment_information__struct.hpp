// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tesseract_msgs:srv/GetEnvironmentInformation.idl
// generated code does not contain a copyright notice

#ifndef TESSERACT_MSGS__SRV__GET_ENVIRONMENT_INFORMATION__STRUCT_HPP_
#define TESSERACT_MSGS__SRV__GET_ENVIRONMENT_INFORMATION__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Request __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Request __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEnvironmentInformation_Request_
{
  using Type = GetEnvironmentInformation_Request_<ContainerAllocator>;

  explicit GetEnvironmentInformation_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->flags = 0;
    }
  }

  explicit GetEnvironmentInformation_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->flags = 0;
    }
  }

  // field types and members
  using _flags_type =
    uint8_t;
  _flags_type flags;

  // setters for named parameter idiom
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COMMAND_HISTORY =
    0u;
  static constexpr uint8_t LINK_LIST =
    1u;
  static constexpr uint8_t JOINT_LIST =
    2u;
  static constexpr uint8_t LINK_NAMES =
    4u;
  static constexpr uint8_t JOINT_NAMES =
    8u;
  static constexpr uint8_t ACTIVE_LINK_NAMES =
    16u;
  static constexpr uint8_t ACTIVE_JOINT_NAMES =
    32u;
  static constexpr uint8_t LINK_TRANSFORMS =
    64u;
  static constexpr uint8_t JOINT_TRANSFORMS =
    128u;
  static constexpr uint8_t ALLOWED_COLLISION_MATRIX =
    254u;

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Request
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Request
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEnvironmentInformation_Request_ & other) const
  {
    if (this->flags != other.flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEnvironmentInformation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEnvironmentInformation_Request_

// alias to use template instance with default allocator
using GetEnvironmentInformation_Request =
  tesseract_msgs::srv::GetEnvironmentInformation_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::COMMAND_HISTORY;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::LINK_LIST;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::JOINT_LIST;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::LINK_NAMES;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::JOINT_NAMES;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::ACTIVE_LINK_NAMES;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::ACTIVE_JOINT_NAMES;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::LINK_TRANSFORMS;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::JOINT_TRANSFORMS;
template<typename ContainerAllocator>
constexpr uint8_t GetEnvironmentInformation_Request_<ContainerAllocator>::ALLOWED_COLLISION_MATRIX;

}  // namespace srv

}  // namespace tesseract_msgs


// Include directives for member types
// Member 'command_history'
#include "tesseract_msgs/msg/environment_command__struct.hpp"
// Member 'links'
#include "tesseract_msgs/msg/link__struct.hpp"
// Member 'joints'
#include "tesseract_msgs/msg/joint__struct.hpp"
// Member 'link_transforms'
// Member 'joint_transforms'
#include "tesseract_msgs/msg/transform_map__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Response __attribute__((deprecated))
#else
# define DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Response __declspec(deprecated)
#endif

namespace tesseract_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetEnvironmentInformation_Response_
{
  using Type = GetEnvironmentInformation_Response_<ContainerAllocator>;

  explicit GetEnvironmentInformation_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : link_transforms(_init),
    joint_transforms(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->id = "";
      this->revision = 0ull;
    }
  }

  explicit GetEnvironmentInformation_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : id(_alloc),
    link_transforms(_alloc, _init),
    joint_transforms(_alloc, _init)
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
  using _command_history_type =
    std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>::other>;
  _command_history_type command_history;
  using _links_type =
    std::vector<tesseract_msgs::msg::Link_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Link_<ContainerAllocator>>::other>;
  _links_type links;
  using _joints_type =
    std::vector<tesseract_msgs::msg::Joint_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Joint_<ContainerAllocator>>::other>;
  _joints_type joints;
  using _link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _link_names_type link_names;
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _joint_names_type joint_names;
  using _active_link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _active_link_names_type active_link_names;
  using _active_joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _active_joint_names_type active_joint_names;
  using _link_transforms_type =
    tesseract_msgs::msg::TransformMap_<ContainerAllocator>;
  _link_transforms_type link_transforms;
  using _joint_transforms_type =
    tesseract_msgs::msg::TransformMap_<ContainerAllocator>;
  _joint_transforms_type joint_transforms;

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
  Type & set__command_history(
    const std::vector<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::EnvironmentCommand_<ContainerAllocator>>::other> & _arg)
  {
    this->command_history = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<tesseract_msgs::msg::Link_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Link_<ContainerAllocator>>::other> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__joints(
    const std::vector<tesseract_msgs::msg::Joint_<ContainerAllocator>, typename ContainerAllocator::template rebind<tesseract_msgs::msg::Joint_<ContainerAllocator>>::other> & _arg)
  {
    this->joints = _arg;
    return *this;
  }
  Type & set__link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->link_names = _arg;
    return *this;
  }
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__active_link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->active_link_names = _arg;
    return *this;
  }
  Type & set__active_joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->active_joint_names = _arg;
    return *this;
  }
  Type & set__link_transforms(
    const tesseract_msgs::msg::TransformMap_<ContainerAllocator> & _arg)
  {
    this->link_transforms = _arg;
    return *this;
  }
  Type & set__joint_transforms(
    const tesseract_msgs::msg::TransformMap_<ContainerAllocator> & _arg)
  {
    this->joint_transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Response
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tesseract_msgs__srv__GetEnvironmentInformation_Response
    std::shared_ptr<tesseract_msgs::srv::GetEnvironmentInformation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetEnvironmentInformation_Response_ & other) const
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
    if (this->command_history != other.command_history) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    if (this->joints != other.joints) {
      return false;
    }
    if (this->link_names != other.link_names) {
      return false;
    }
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->active_link_names != other.active_link_names) {
      return false;
    }
    if (this->active_joint_names != other.active_joint_names) {
      return false;
    }
    if (this->link_transforms != other.link_transforms) {
      return false;
    }
    if (this->joint_transforms != other.joint_transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetEnvironmentInformation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetEnvironmentInformation_Response_

// alias to use template instance with default allocator
using GetEnvironmentInformation_Response =
  tesseract_msgs::srv::GetEnvironmentInformation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tesseract_msgs

namespace tesseract_msgs
{

namespace srv
{

struct GetEnvironmentInformation
{
  using Request = tesseract_msgs::srv::GetEnvironmentInformation_Request;
  using Response = tesseract_msgs::srv::GetEnvironmentInformation_Response;
};

}  // namespace srv

}  // namespace tesseract_msgs

#endif  // TESSERACT_MSGS__SRV__GET_ENVIRONMENT_INFORMATION__STRUCT_HPP_
