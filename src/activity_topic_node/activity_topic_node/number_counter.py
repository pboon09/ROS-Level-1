#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import Int64
 
class NumberCounter(Node): 
    def __init__(self):
        super().__init__("number_counter")
        self.counter_ = 0
        self.subcriber_ = self.create_subscription(Int64, "number", self.callback_number_data, 10)
        self.publishers_ = self.create_publisher(Int64, "number_count", 10) 
        self.get_logger().info("NumberCounter has been started.")

    def callback_number_data(self, msg):
        self.counter_ += msg.data
        new_msg = Int64()
        new_msg.data = self.counter_
        self.publishers_.publish(new_msg)
        self.get_logger().info(str(msg.data))

def main(args=None):
    rclpy.init(args=args)
    node = NumberCounter()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()