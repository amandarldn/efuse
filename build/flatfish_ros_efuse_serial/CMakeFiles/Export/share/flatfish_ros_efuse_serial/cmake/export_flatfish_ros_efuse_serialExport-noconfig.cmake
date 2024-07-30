#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "flatfish_ros_efuse_serial::EFuseNode" for configuration ""
set_property(TARGET flatfish_ros_efuse_serial::EFuseNode APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(flatfish_ros_efuse_serial::EFuseNode PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libEFuseNode.so"
  IMPORTED_SONAME_NOCONFIG "libEFuseNode.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS flatfish_ros_efuse_serial::EFuseNode )
list(APPEND _IMPORT_CHECK_FILES_FOR_flatfish_ros_efuse_serial::EFuseNode "${_IMPORT_PREFIX}/lib/libEFuseNode.so" )

# Import target "flatfish_ros_efuse_serial::EFuseDriver" for configuration ""
set_property(TARGET flatfish_ros_efuse_serial::EFuseDriver APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(flatfish_ros_efuse_serial::EFuseDriver PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libEFuseDriver.so"
  IMPORTED_SONAME_NOCONFIG "libEFuseDriver.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS flatfish_ros_efuse_serial::EFuseDriver )
list(APPEND _IMPORT_CHECK_FILES_FOR_flatfish_ros_efuse_serial::EFuseDriver "${_IMPORT_PREFIX}/lib/libEFuseDriver.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
