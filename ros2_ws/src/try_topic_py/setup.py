from setuptools import find_packages, setup

package_name = 'try_topic_py'

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
            "robot_news_station = TryTopic.robot_news_station:main",
            "smartphone = TryTopic.smartphone:main",
        ],
    },
)
