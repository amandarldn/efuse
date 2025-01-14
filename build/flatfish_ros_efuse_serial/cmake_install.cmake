# Install script for directory: /home/amandarln/ros_ws/src/flatfish_ros_efuse_serial

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/amandarln/ros_ws/install/flatfish_ros_efuse_serial")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/flatfish_ros_efuse_serial")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_c/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_typesupport_fastrtps_c/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_cpp/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_typesupport_fastrtps_cpp/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_typesupport_introspection_c/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.h$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_typesupport_introspection_cpp/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.hpp$")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial-0.0.0-py3.10.egg-info" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_python/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial.egg-info/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/home/amandarln/ros_ws/install/flatfish_ros_efuse_serial/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial"
      )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial:/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial:/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial:/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_generator_py/flatfish_ros_efuse_serial/libflatfish_ros_efuse_serial__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libflatfish_ros_efuse_serial__rosidl_generator_py.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/msg/Board.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/msg/BoardArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/msg/CmdChannel.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/msg/StatusBoard.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/msg/StatusBoardArray.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/msg/StatusChannel.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/srv/DefaultPowerUp.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/srv/ResetBoard.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/srv/SetChannelOn.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/srv/SetChannelsOn.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_adapter/flatfish_ros_efuse_serial/srv/SetMaxCurrent.idl")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/msg/Board.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/msg/BoardArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/msg/CmdChannel.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/msg/StatusBoard.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/msg/StatusBoardArray.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/msg" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/msg/StatusChannel.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/srv/DefaultPowerUp.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/DefaultPowerUp_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/DefaultPowerUp_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/srv/ResetBoard.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/ResetBoard_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/ResetBoard_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/srv/SetChannelOn.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/SetChannelOn_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/SetChannelOn_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/srv/SetChannelsOn.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/SetChannelsOn_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/SetChannelsOn_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/srv/SetMaxCurrent.srv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/SetMaxCurrent_Request.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/srv" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/srv/SetMaxCurrent_Response.msg")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE DIRECTORY FILES
    "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/config"
    "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/launch"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/include/")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libEFuseNode.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so"
         OLD_RPATH "/opt/ros/humble/lib:/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/home/amandarln/ros_ws/install/ros_driver_base/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseNode.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/libEFuseDriver.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so"
         OLD_RPATH "/home/amandarln/ros_ws/install/ros_driver_base/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libEFuseDriver.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial" TYPE EXECUTABLE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ExampleNode")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode"
         OLD_RPATH "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial:/home/amandarln/ros_ws/install/ros_driver_base/lib:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/flatfish_ros_efuse_serial/ExampleNode")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/flatfish_ros_efuse_serial")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/flatfish_ros_efuse_serial")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/environment" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_index/share/ament_index/resource_index/packages/flatfish_ros_efuse_serial")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cppExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_cppExport.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_typesupport_fastrtps_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_introspection_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/flatfish_ros_efuse_serial__rosidl_typesupport_cppExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serial__rosidl_generator_pyExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport.cmake"
         "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/CMakeFiles/Export/share/flatfish_ros_efuse_serial/cmake/export_flatfish_ros_efuse_serialExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial/cmake" TYPE FILE FILES
    "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_core/flatfish_ros_efuse_serialConfig.cmake"
    "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/ament_cmake_core/flatfish_ros_efuse_serialConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/flatfish_ros_efuse_serial" TYPE FILE FILES "/home/amandarln/ros_ws/src/flatfish_ros_efuse_serial/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/flatfish_ros_efuse_serial__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/amandarln/ros_ws/build/flatfish_ros_efuse_serial/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
