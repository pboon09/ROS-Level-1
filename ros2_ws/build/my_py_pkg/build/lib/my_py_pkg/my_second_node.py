#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__("py_test") #Node Name
        self.counter_ = 0
        self.get_logger().info("Hello ROS2 but Library") 
        self.create_timer(0.5, self.timer_callback) #Call this function every 0.5 second or 2 Hz
    
    def timer_callback(self):
        self.counter_ += 1
        self.get_logger().info("Hello " + str(self.counter_)) 

def main(args=None):
    rclpy.init(args=args) #Init ROS2 Communication / Write in Every ROS2 Program
    node = MyNode()
    rclpy.spin(node) #Allow node to alive (Let node run like while loop)
    rclpy.shutdown() #Last Line of Program

#Node is create inside the file Not this File!
#Name of node is not name of File

if __name__ == "__main__":
    main()