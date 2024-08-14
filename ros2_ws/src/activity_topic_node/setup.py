from setuptools import find_packages, setup

package_name = 'activity_topic_node'

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
    maintainer='pboon09',
    maintainer_email='pboonchanachai@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "number_publisher = activity_topic_node.number_publisher:main",
            "number_counter = activity_topic_node.number_counter:main",
        ],
    },
)
