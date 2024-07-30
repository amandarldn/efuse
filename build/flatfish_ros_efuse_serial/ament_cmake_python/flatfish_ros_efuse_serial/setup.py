from setuptools import find_packages
from setuptools import setup

setup(
    name='flatfish_ros_efuse_serial',
    version='0.0.0',
    packages=find_packages(
        include=('flatfish_ros_efuse_serial', 'flatfish_ros_efuse_serial.*')),
)
