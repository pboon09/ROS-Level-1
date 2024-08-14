cmake_minimum_required(VERSION 3.8)
project(service_cpp)

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
find_package(example_interfaces REQUIRED)

# Delete Build Testing

# Add the below
add_executable(add_two_ints_server src/add_two_ints_server.cpp)
ament_target_dependencies(add_two_ints_server rclcpp example_interfaces)

add_executable(add_two_ints_client_no_oop src/add_two_ints_client_no_oop.cpp)
ament_target_dependencies(add_two_ints_client_no_oop rclcpp example_interfaces)

add_executable(add_two_ints_client src/add_two_ints_client.cpp)
ament_target_dependencies(add_two_ints_client rclcpp example_interfaces)

install(TARGETS
  add_two_ints_server
  add_two_ints_client_no_oop
  add_two_ints_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()