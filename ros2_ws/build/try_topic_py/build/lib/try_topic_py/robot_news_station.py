#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String #This is the dependency of the message type we are using, so add the dependency in package.xml too
 
class RobotNewsStationNode(Node): 
    def __init__(self):
        super().__init__("robot_news_station") 

        self.robot_name_ = "C3PO"
        self.publishers_ = self.create_publisher(String, "robot_news", 10) #DataType TopicName QueueSize
        self.timer_ = self.create_timer(0.5, self.publish_news)
        self.get_logger().info("Robot News Station has been started.")

    def publish_news(self):
        msg = String() #Create a message object
        msg.data = "Hi, this is " + self.robot_name_ + " from the Robot News Station." #Set the message
        self.publishers_.publish(msg) #Publish the message
 
def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStationNode() 
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()