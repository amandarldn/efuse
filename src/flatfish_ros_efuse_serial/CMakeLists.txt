cmake_minimum_required(VERSION 3.8)
project(flatfish_ros_efuse_serial)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(ros_driver_base REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Board.msg"
  "msg/BoardArray.msg"
  "msg/CmdChannel.msg"
  "msg/StatusBoard.msg"
  "msg/StatusBoardArray.msg"
  "msg/StatusChannel.msg"
  "srv/DefaultPowerUp.srv"
  "srv/ResetBoard.srv"
  "srv/SetChannelOn.srv"
  "srv/SetChannelsOn.srv"
  "srv/SetMaxCurrent.srv"
  DEPENDENCIES builtin_interfaces
)

ament_export_dependencies(rosidl_default_runtime)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} rosidl_typesupport_cpp)

add_library(EFuseDriver src/EFuseDriver.cpp)
target_compile_features(EFuseDriver PUBLIC c_std_17 cxx_std_20)
target_include_directories(EFuseDriver PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_definitions(EFuseDriver PRIVATE "FLATFISH_ROS_EFUSE_SERIAL_BUILDING_LIBRARY")
ament_target_dependencies(
  EFuseDriver
  "ros_driver_base"
)

add_library(EFuseNode src/EFuseNode.cpp)
target_compile_features(EFuseNode PUBLIC c_std_17 cxx_std_20)
target_include_directories(EFuseNode PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_definitions(EFuseNode PRIVATE "FLATFISH_ROS_EFUSE_SERIAL_BUILDING_LIBRARY")
ament_target_dependencies(
  EFuseNode
  "rclcpp"
  "builtin_interfaces"
)
target_link_libraries(EFuseNode EFuseDriver "${cpp_typesupport_target}")

install(DIRECTORY
  "config"
  "launch"
  DESTINATION share/${PROJECT_NAME}
)

install(
  DIRECTORY include/
  DESTINATION include
)

install(
  TARGETS EFuseNode EFuseDriver
  EXPORT export_${PROJECT_NAME}
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

add_executable(ExampleNode src/ExampleNode.cpp)
target_include_directories(ExampleNode PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_link_libraries(ExampleNode EFuseNode EFuseDriver)

install(TARGETS ExampleNode
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(
  include
)

ament_export_libraries(
  EFuseNode EFuseDriver
)

ament_export_targets(
  export_${PROJECT_NAME}
)

ament_package()