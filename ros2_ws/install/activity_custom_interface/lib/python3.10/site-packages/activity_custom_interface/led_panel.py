#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
 
from my_robot_interfaces.msg import LedStateArray
from my_robot_interfaces.srv import SetLed
 
class LedPanelNode(Node):
    def __init__(self):
        super().__init__("led_panel")

        self.led_states_ = [0,0,0]

        self.led_panel_publisher_ = self.create_publisher(LedStateArray, "led_panel", 10)
        self.led_states_timer_ = self.create_timer(4, self.publish_led_states)

        self.set_led_service_ = self.create_service(SetLed, "set_led", self.callback_led_states)

        self.get_logger().info("Led Panel has been started.")
    
    def publish_led_states(self):
        msg = LedStateArray()
        msg.led_states = self.led_states_
        self.led_panel_publisher_.publish(msg)
    
    def callback_led_states(self, request, response):
        led_number = request.led_number
        state = request.state

        if led_number <= 0 or led_number > len(self.led_states_):
            response.success = False
            return response
        
        if state not in [0,1]:
            response.success = False
            return response
        
        self.led_states_[led_number-1] = state
        response.success = True
        self.publish_led_states()
        return response
 
def main(args=None):
    rclpy.init(args=args)
    node = LedPanelNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()