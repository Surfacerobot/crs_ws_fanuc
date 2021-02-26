// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from region_detection_msgs:srv/CropData.idl
// generated code does not contain a copyright notice

#ifndef REGION_DETECTION_MSGS__SRV__CROP_DATA__STRUCT_HPP_
#define REGION_DETECTION_MSGS__SRV__CROP_DATA__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'crop_regions'
// Member 'input_data'
#include "geometry_msgs/msg/pose_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__CropData_Request __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__CropData_Request __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CropData_Request_
{
  using Type = CropData_Request_<ContainerAllocator>;

  explicit CropData_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CropData_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _crop_regions_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _crop_regions_type crop_regions;
  using _input_data_type =
    std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other>;
  _input_data_type input_data;

  // setters for named parameter idiom
  Type & set__crop_regions(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->crop_regions = _arg;
    return *this;
  }
  Type & set__input_data(
    const std::vector<geometry_msgs::msg::PoseArray_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::PoseArray_<ContainerAllocator>>::other> & _arg)
  {
    this->input_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    region_detection_msgs::srv::CropData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::CropData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::CropData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::CropData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__CropData_Request
    std::shared_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__CropData_Request
    std::shared_ptr<region_detection_msgs::srv::CropData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CropData_Request_ & other) const
  {
    if (this->crop_regions != other.crop_regions) {
      return false;
    }
    if (this->input_data != other.input_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const CropData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CropData_Request_

// alias to use template instance with default allocator
using CropData_Request =
  region_detection_msgs::srv::CropData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs


// Include directives for member types
// Member 'cropped_data'
#include "region_detection_msgs/msg/pose_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__region_detection_msgs__srv__CropData_Response __attribute__((deprecated))
#else
# define DEPRECATED__region_detection_msgs__srv__CropData_Response __declspec(deprecated)
#endif

namespace region_detection_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CropData_Response_
{
  using Type = CropData_Response_<ContainerAllocator>;

  explicit CropData_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  explicit CropData_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : err_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->succeeded = false;
      this->err_msg = "";
    }
  }

  // field types and members
  using _cropped_data_type =
    std::vector<region_detection_msgs::msg::PoseSet_<ContainerAllocator>, typename ContainerAllocator::template rebind<region_detection_msgs::msg::PoseSet_<ContainerAllocator>>::other>;
  _cropped_data_type cropped_data;
  using _succeeded_type =
    bool;
  _succeeded_type succeeded;
  using _err_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _err_msg_type err_msg;

  // setters for named parameter idiom
  Type & set__cropped_data(
    const std::vector<region_detection_msgs::msg::PoseSet_<ContainerAllocator>, typename ContainerAllocator::template rebind<region_detection_msgs::msg::PoseSet_<ContainerAllocator>>::other> & _arg)
  {
    this->cropped_data = _arg;
    return *this;
  }
  Type & set__succeeded(
    const bool & _arg)
  {
    this->succeeded = _arg;
    return *this;
  }
  Type & set__err_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->err_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    region_detection_msgs::srv::CropData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const region_detection_msgs::srv::CropData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::CropData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      region_detection_msgs::srv::CropData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__region_detection_msgs__srv__CropData_Response
    std::shared_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__region_detection_msgs__srv__CropData_Response
    std::shared_ptr<region_detection_msgs::srv::CropData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CropData_Response_ & other) const
  {
    if (this->cropped_data != other.cropped_data) {
      return false;
    }
    if (this->succeeded != other.succeeded) {
      return false;
    }
    if (this->err_msg != other.err_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const CropData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CropData_Response_

// alias to use template instance with default allocator
using CropData_Response =
  region_detection_msgs::srv::CropData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace region_detection_msgs

namespace region_detection_msgs
{

namespace srv
{

struct CropData
{
  using Request = region_detection_msgs::srv::CropData_Request;
  using Response = region_detection_msgs::srv::CropData_Response;
};

}  // namespace srv

}  // namespace region_detection_msgs

#endif  // REGION_DETECTION_MSGS__SRV__CROP_DATA__STRUCT_HPP_
