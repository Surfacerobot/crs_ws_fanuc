// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from crs_msgs:srv/LocalizeToPart.idl
// generated code does not contain a copyright notice

#ifndef CRS_MSGS__SRV__LOCALIZE_TO_PART__STRUCT_HPP_
#define CRS_MSGS__SRV__LOCALIZE_TO_PART__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'point_clouds'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"
// Member 'transforms'
#include "geometry_msgs/msg/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__LocalizeToPart_Request __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__LocalizeToPart_Request __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LocalizeToPart_Request_
{
  using Type = LocalizeToPart_Request_<ContainerAllocator>;

  explicit LocalizeToPart_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = "";
    }
  }

  explicit LocalizeToPart_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : frame(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame = "";
    }
  }

  // field types and members
  using _frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _frame_type frame;
  using _point_clouds_type =
    std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other>;
  _point_clouds_type point_clouds;
  using _transforms_type =
    std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other>;
  _transforms_type transforms;

  // setters for named parameter idiom
  Type & set__frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->frame = _arg;
    return *this;
  }
  Type & set__point_clouds(
    const std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other> & _arg)
  {
    this->point_clouds = _arg;
    return *this;
  }
  Type & set__transforms(
    const std::vector<geometry_msgs::msg::TransformStamped_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::TransformStamped_<ContainerAllocator>>::other> & _arg)
  {
    this->transforms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__LocalizeToPart_Request
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__LocalizeToPart_Request
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizeToPart_Request_ & other) const
  {
    if (this->frame != other.frame) {
      return false;
    }
    if (this->point_clouds != other.point_clouds) {
      return false;
    }
    if (this->transforms != other.transforms) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizeToPart_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizeToPart_Request_

// alias to use template instance with default allocator
using LocalizeToPart_Request =
  crs_msgs::srv::LocalizeToPart_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs


// Include directives for member types
// Member 'transform'
// already included above
// #include "geometry_msgs/msg/transform_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__crs_msgs__srv__LocalizeToPart_Response __attribute__((deprecated))
#else
# define DEPRECATED__crs_msgs__srv__LocalizeToPart_Response __declspec(deprecated)
#endif

namespace crs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LocalizeToPart_Response_
{
  using Type = LocalizeToPart_Response_<ContainerAllocator>;

  explicit LocalizeToPart_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : transform(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit LocalizeToPart_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : error(_alloc),
    transform(_alloc, _init)
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
  using _transform_type =
    geometry_msgs::msg::TransformStamped_<ContainerAllocator>;
  _transform_type transform;

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
  Type & set__transform(
    const geometry_msgs::msg::TransformStamped_<ContainerAllocator> & _arg)
  {
    this->transform = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__crs_msgs__srv__LocalizeToPart_Response
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__crs_msgs__srv__LocalizeToPart_Response
    std::shared_ptr<crs_msgs::srv::LocalizeToPart_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizeToPart_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    if (this->transform != other.transform) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizeToPart_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizeToPart_Response_

// alias to use template instance with default allocator
using LocalizeToPart_Response =
  crs_msgs::srv::LocalizeToPart_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace crs_msgs

namespace crs_msgs
{

namespace srv
{

struct LocalizeToPart
{
  using Request = crs_msgs::srv::LocalizeToPart_Request;
  using Response = crs_msgs::srv::LocalizeToPart_Response;
};

}  // namespace srv

}  // namespace crs_msgs

#endif  // CRS_MSGS__SRV__LOCALIZE_TO_PART__STRUCT_HPP_
