#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
 
def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_ints_client_no_oop")

    client = node.create_client(AddTwoInts, "add_two_ints") #create client
    while not client.wait_for_service(timeout_sec=1.0): #wait for service
        node.get_logger().warn("Service not available, waiting again...") #warning (yellow color)

    request = AddTwoInts.Request()
    request.a = 3
    request.b = 4

    future = client.call_async(request) #call service Future is a class that represents the result of an asynchronous computation.

    rclpy.spin_until_future_complete(node, future) #wait for response 

    try:
        response = future.result()
        node.get_logger().info(str(request.a) + " + " + str(request.b) + " = " + str(response.sum)) #response
    except Exception as e:
        node.get_logger().error("Service call failed %r" % (e,))
    
    rclpy.shutdown()
 
 
if __name__ == "__main__":
    main()