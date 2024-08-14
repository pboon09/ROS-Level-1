#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

def main(args=None):
    rclpy.init(args=args) #Init ROS2 Communication / Write in Every ROS2 Program
    node = Node("py_test") #Create Node Name "py_test"
    node.get_logger().info("Hello ROS2") #This is Hello World in ROS2
    rclpy.spin(node) #Allow node to alive (Let node run like while loop)
    rclpy.shutdown() #Last Line of Program

#Node is create inside the file Not this File!
#Name of node is not name of File

if __name__ == "__main__":
    main()