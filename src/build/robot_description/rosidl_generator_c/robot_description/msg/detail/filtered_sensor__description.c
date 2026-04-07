// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_description:msg/FilteredSensor.idl
// generated code does not contain a copyright notice

#include "robot_description/msg/detail/filtered_sensor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_description
const rosidl_type_hash_t *
robot_description__msg__FilteredSensor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xde, 0x40, 0x5d, 0x04, 0x47, 0x42, 0x92, 0x62,
      0xd4, 0xab, 0x82, 0xea, 0xba, 0x19, 0x81, 0x58,
      0x9e, 0x92, 0x0f, 0xf1, 0xc6, 0x1d, 0xd8, 0x8e,
      0xef, 0x8c, 0x19, 0xa0, 0x47, 0xe8, 0xac, 0xfc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_description__msg__FilteredSensor__TYPE_NAME[] = "robot_description/msg/FilteredSensor";

// Define type names, field names, and default values
static char robot_description__msg__FilteredSensor__FIELD_NAME__sensor_value[] = "sensor_value";
static char robot_description__msg__FilteredSensor__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field robot_description__msg__FilteredSensor__FIELDS[] = {
  {
    {robot_description__msg__FilteredSensor__FIELD_NAME__sensor_value, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_description__msg__FilteredSensor__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_description__msg__FilteredSensor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_description__msg__FilteredSensor__TYPE_NAME, 36, 36},
      {robot_description__msg__FilteredSensor__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 sensor_value\n"
  "string name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_description__msg__FilteredSensor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_description__msg__FilteredSensor__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_description__msg__FilteredSensor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_description__msg__FilteredSensor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
