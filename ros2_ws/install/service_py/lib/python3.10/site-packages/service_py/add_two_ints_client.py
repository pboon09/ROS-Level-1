#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from functools import partial
from example_interfaces.srv import AddTwoInts
 
class AddTwoIntsClientNode(Node):
    def __init__(self):
        super().__init__("add_two_ints_client")
        self.call_add_two_ints_server(3, 10)
        self.call_add_two_ints_server(8, 1)
        self.call_add_two_ints_server(7, 14)
    
    def call_add_two_ints_server(self, a, b):
        client = self.create_client(AddTwoInts, "add_two_ints") #create client (service, service name)
        while not client.wait_for_service(timeout_sec=1.0): #wait for service
            self.get_logger().warn("Service not available, waiting again...") #warning (yellow color)
        
        request = AddTwoInts.Request()
        request.a = a
        request.b = b

        future = client.call_async(request) #call service Future is a class that represents the result of an asynchronous computation.
        future.add_done_callback(partial(self.callback_call_add_two_ints, a=a, b=b)) #Partial is a function that allows you to fix a certain number of arguments of a function and generate a new function.
    
    def callback_call_add_two_ints(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info(str(a) + " + " + str(b) + " = " + str(response.sum)) #response
        except Exception as e:
            self.get_logger().error("Service call failed %r" % (e,))

 
 
def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClientNode()
    rclpy.spin(node)
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()