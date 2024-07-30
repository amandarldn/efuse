// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from flatfish_ros_efuse_serial:srv/DefaultPowerUp.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "flatfish_ros_efuse_serial/srv/detail/default_power_up__struct.h"
#include "flatfish_ros_efuse_serial/srv/detail/default_power_up__functions.h"

bool flatfish_ros_efuse_serial__msg__cmd_channel__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * flatfish_ros_efuse_serial__msg__cmd_channel__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool flatfish_ros_efuse_serial__srv__default_power_up__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("flatfish_ros_efuse_serial.srv._default_power_up.DefaultPowerUp_Request", full_classname_dest, 70) == 0);
  }
  flatfish_ros_efuse_serial__srv__DefaultPowerUp_Request * ros_message = _ros_message;
  {  // board
    PyObject * field = PyObject_GetAttrString(_pymsg, "board");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->board = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    if (!flatfish_ros_efuse_serial__msg__cmd_channel__convert_from_py(field, &ros_message->command)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * flatfish_ros_efuse_serial__srv__default_power_up__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DefaultPowerUp_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("flatfish_ros_efuse_serial.srv._default_power_up");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DefaultPowerUp_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  flatfish_ros_efuse_serial__srv__DefaultPowerUp_Request * ros_message = (flatfish_ros_efuse_serial__srv__DefaultPowerUp_Request *)raw_ros_message;
  {  // board
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->board);
    {
      int rc = PyObject_SetAttrString(_pymessage, "board", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = flatfish_ros_efuse_serial__msg__cmd_channel__convert_to_py(&ros_message->command);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/default_power_up__struct.h"
// already included above
// #include "flatfish_ros_efuse_serial/srv/detail/default_power_up__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool flatfish_ros_efuse_serial__srv__default_power_up__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[72];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("flatfish_ros_efuse_serial.srv._default_power_up.DefaultPowerUp_Response", full_classname_dest, 71) == 0);
  }
  flatfish_ros_efuse_serial__srv__DefaultPowerUp_Response * ros_message = _ros_message;
  {  // error
    PyObject * field = PyObject_GetAttrString(_pymsg, "error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * flatfish_ros_efuse_serial__srv__default_power_up__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DefaultPowerUp_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("flatfish_ros_efuse_serial.srv._default_power_up");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DefaultPowerUp_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  flatfish_ros_efuse_serial__srv__DefaultPowerUp_Response * ros_message = (flatfish_ros_efuse_serial__srv__DefaultPowerUp_Response *)raw_ros_message;
  {  // error
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
