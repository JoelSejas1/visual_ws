import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from robot_description.msg import FilteredSensor


class FilterNode(Node):
    def __init__(self):
        super().__init__('nodo4')

        self.sensor1_value = 0.0
        self.sensor2_value = 0.0
        self.sensor3_value = 0.0

        self.sub1 = self.create_subscription(Float64, '/sensor_1', self.callback_sensor1, 10)
        self.sub2 = self.create_subscription(Float64, '/sensor_2', self.callback_sensor2, 10)
        self.sub3 = self.create_subscription(Float64, '/sensor_3', self.callback_sensor3, 10)

        self.publisher_ = self.create_publisher(FilteredSensor, '/filtered_sensor', 10)

        self.timer = self.create_timer(1.0, self.publish_filtered_sensor)

    def callback_sensor1(self, msg):
        self.sensor1_value = msg.data

    def callback_sensor2(self, msg):
        self.sensor2_value = msg.data

    def callback_sensor3(self, msg):
        self.sensor3_value = msg.data

    def publish_filtered_sensor(self):
        promedio = (self.sensor1_value + self.sensor2_value + self.sensor3_value) / 3.0

        msg = FilteredSensor()
        msg.sensor_value = promedio
        msg.name = 'average_sensor'

        self.publisher_.publish(msg)
        self.get_logger().info(
            f'Promedio publicado: {msg.sensor_value:.2f} | Nombre: {msg.name}'
        )


def main(args=None):
    rclpy.init(args=args)
    node = FilterNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()