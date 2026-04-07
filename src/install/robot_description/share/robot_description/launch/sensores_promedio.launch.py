from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='visual_pubsub',
            executable='sensor1_publisher', 
            name='sensor1'
        ),
        Node(
            package='visual_pubsub',
            executable='sensor2_publisher', 
            name='sensor2'
        ),
        Node(
            package='visual_pubsub',
            executable='sensor3_publisher',
            name='sensor3'
        ),
        Node(
            package='visual_pubsub',
            executable='filter_node', 
            name='procesador_promedio'
        ),
        Node(
            package='visual_pubsub',
            executable='filtered_sensor_subscriber', 
            name='visualizador_final',
            output='screen' 
        )
    ])