from setuptools import find_packages, setup

package_name = 'my_py_pkg'

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
            "py_node_1 = my_py_pkg.my_first_node:main",
            "py_node_2 = my_py_pkg.my_second_node:main",
            "py_node_3 = my_py_pkg.my_third_node:main"
        ],
    },
)
