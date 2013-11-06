cmake_minimum_required(VERSION 2.6)

project(numpy_eigen)

include(cmake/add_python_export_library.cmake)
include_directories("${PROJECT_SOURCE_DIR}/include/numpy_eigen")

#set the default path for built executables to the "bin" directory
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#set the default path for built libraries to the "lib" directory
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../cmake)

# Eigen
set(EIGEN_INCLUDE_DIRS "/home/andrew/include/gtsam/3rdparty/Eigen")
#find_package(Eigen REQUIRED)
include_directories(${EIGEN_INCLUDE_DIRS})
#add_definitions(${EIGEN_DEFINITIONS})

INCLUDE(src/autogen_files.cmake)
add_python_export_library(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/python/${PROJECT_NAME}
 ${AUTOGEN_FILES}
)
#rosbuild_link_boost(${PROJECT_NAME} system)
INCLUDE(src/autogen_test_files.cmake)
add_python_export_library(${PROJECT_NAME}_test ${PROJECT_SOURCE_DIR}/python/${PROJECT_NAME}
  ${AUTOGEN_TEST_FILES}
)
