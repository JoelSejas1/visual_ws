// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_description/msg/filtered_sensor.hpp"


#ifndef ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_
#define ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_description/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_description
{

namespace msg
{

namespace builder
{

class Init_FilteredSensor_name
{
public:
  explicit Init_FilteredSensor_name(::robot_description::msg::FilteredSensor & msg)
  : msg_(msg)
  {}
  ::robot_description::msg::FilteredSensor name(::robot_description::msg::FilteredSensor::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_description::msg::FilteredSensor msg_;
};

class Init_FilteredSensor_sensor_value
{
public:
  Init_FilteredSensor_sensor_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilteredSensor_name sensor_value(::robot_description::msg::FilteredSensor::_sensor_value_type arg)
  {
    msg_.sensor_value = std::move(arg);
    return Init_FilteredSensor_name(msg_);
  }

private:
  ::robot_description::msg::FilteredSensor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_description::msg::FilteredSensor>()
{
  return robot_description::msg::builder::Init_FilteredSensor_sensor_value();
}

}  // namespace robot_description

#endif  // ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__BUILDER_HPP_
