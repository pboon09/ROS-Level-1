from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    number_publisher_node = Node(
        package='activity_topic_node',
        executable='number_publisher'
    )

    number_counter_node = Node(
        package='activity_topic_node',
        executable='number_counter'
    )

    ld.add_action(number_publisher_node)
    ld.add_action(number_counter_node)
    return ld