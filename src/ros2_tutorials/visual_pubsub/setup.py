from setuptools import find_packages, setup

package_name = 'visual_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='carlos',
    maintainer_email='menachocarlos5@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'inversebio = visual_pubsub.robotbio:main',
            'inverse = visual_pubsub.robota:main',
            'sensor1_publisher = visual_pubsub.sensor1_publisher:main',
            'sensor2_publisher = visual_pubsub.sensor2_publisher:main',
            'sensor3_publisher = visual_pubsub.sensor3_publisher:main',
            'filter_node = visual_pubsub.filter_node:main',
            'filtered_sensor_subscriber = visual_pubsub.filtered_sensor_subscriber:main',
        ],
    },
)
