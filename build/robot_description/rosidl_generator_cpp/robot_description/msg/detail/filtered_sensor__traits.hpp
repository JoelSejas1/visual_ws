// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_description/msg/filtered_sensor.hpp"


#ifndef ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_
#define ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_description/msg/detail/filtered_sensor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_description
{

namespace msg
{

inline void to_flow_style_yaml(
  const FilteredSensor & msg,
  std::ostream & out)
{
  out << "{";
  // member: sensor_value
  {
    out << "sensor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_value, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FilteredSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sensor_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_value: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_value, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FilteredSensor & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_description

namespace rosidl_generator_traits
{

[[deprecated("use robot_description::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_description::msg::FilteredSensor & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_description::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_description::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_description::msg::FilteredSensor & msg)
{
  return robot_description::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_description::msg::FilteredSensor>()
{
  return "robot_description::msg::FilteredSensor";
}

template<>
inline const char * name<robot_description::msg::FilteredSensor>()
{
  return "robot_description/msg/FilteredSensor";
}

template<>
struct has_fixed_size<robot_description::msg::FilteredSensor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_description::msg::FilteredSensor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_description::msg::FilteredSensor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_DESCRIPTION__MSG__DETAIL__FILTERED_SENSOR__TRAITS_HPP_
