#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String
 
class SmartphoneNode(Node): 
    def __init__(self):
        super().__init__("smartphone")
        self.subcriber_ = self.create_subscription(String, "robot_news", self.callback_robot_news, 10) #DataType TopicName CallbackFunction QueueSize
        self.get_logger().info("Smartphone has been started.")
    
    def callback_robot_news(self, msg):
        self.get_logger().info(msg.data) #Print the message

def main(args=None):
    rclpy.init(args=args)
    node = SmartphoneNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()