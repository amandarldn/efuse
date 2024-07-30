from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='flatfish_ros_efuse_serial',
            executable='ExampleNode',
            output='screen'
        )
    ])