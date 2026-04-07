import random
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64


class Sensor1Publisher(Node):
    def __init__(self):
        super().__init__('nodo1')
        self.publisher_ = self.create_publisher(Float64, '/sensor_1', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = Float64()
        msg.data = random.uniform(0.0, 10.0)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Sensor 1: {msg.data:.2f}')


def main(args=None):
    rclpy.init(args=args)
    node = Sensor1Publisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()