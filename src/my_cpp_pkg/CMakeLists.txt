cmake_minimum_required(VERSION 3.8)
project(my_cpp_pkg)

# Add this if you dont have
# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set((CMAKE_CXX_STANDARD 14))
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

# Delete Build Testing

# Add the below
add_executable(cpp_node_1 src/my_first_node.cpp)
ament_target_dependencies(cpp_node_1 rclcpp)

add_executable(cpp_node_2 src/my_second_node.cpp)
ament_target_dependencies(cpp_node_2 rclcpp)

install(TARGETS
  cpp_node_1
  cpp_node_2
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
