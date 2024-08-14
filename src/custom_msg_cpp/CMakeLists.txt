cmake_minimum_required(VERSION 3.8)
project(custom_msg_cpp)

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
find_package(my_robot_interfaces REQUIRED)

# Delete Build Testing

# Add the below
add_executable(hardware_status_publisher src/hw_status_publisher.cpp)
ament_target_dependencies(hardware_status_publisher rclcpp my_robot_interfaces)

install(TARGETS
  hardware_status_publisher
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()

