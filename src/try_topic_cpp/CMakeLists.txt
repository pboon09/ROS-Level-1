cmake_minimum_required(VERSION 3.8)
project(try_topic_cpp)

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
add_executable(robot_news_station src/robot_news_station.cpp)
ament_target_dependencies(robot_news_station rclcpp example_interfaces)

add_executable(smartphone src/smartphone.cpp)
ament_target_dependencies(smartphone rclcpp example_interfaces)

install(TARGETS
  robot_news_station
  smartphone
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()