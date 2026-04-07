import rclpy
from rclpy.node import Node
from robot_description.msg import FilteredSensor


class FilteredSensorSubscriber(Node):
    def __init__(self):
        super().__init__('nodo5')
        self.subscription = self.create_subscription(
            FilteredSensor,
            '/filtered_sensor',
            self.listener_callback,
            10
        )

    def listener_callback(self, msg):
        self.get_logger().info(
            f'Valor filtrado en tiempo real: {msg.sensor_value:.2f} | Nombre: {msg.name}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = FilteredSensorSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()