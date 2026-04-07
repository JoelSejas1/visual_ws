// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_description/msg/filtered_sensor.hpp"


#ifndef ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__STRUCT_HPP_
#define ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_description__msg__FilteredSensor __attribute__((deprecated))
#else
# define DEPRECATED__robot_description__msg__FilteredSensor __declspec(deprecated)
#endif

namespace robot_description
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FilteredSensor_
{
  using Type = FilteredSensor_<ContainerAllocator>;

  explicit FilteredSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_value = 0.0;
      this->name = "";
    }
  }

  explicit FilteredSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor_value = 0.0;
      this->name = "";
    }
  }

  // field types and members
  using _sensor_value_type =
    double;
  _sensor_value_type sensor_value;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__sensor_value(
    const double & _arg)
  {
    this->sensor_value = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_description::msg::FilteredSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_description::msg::FilteredSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_description::msg::FilteredSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_description::msg::FilteredSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_description__msg__FilteredSensor
    std::shared_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_description__msg__FilteredSensor
    std::shared_ptr<robot_description::msg::FilteredSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FilteredSensor_ & other) const
  {
    if (this->sensor_value != other.sensor_value) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const FilteredSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FilteredSensor_

// alias to use template instance with default allocator
using FilteredSensor =
  robot_description::msg::FilteredSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_description

#endif  // ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__STRUCT_HPP_
