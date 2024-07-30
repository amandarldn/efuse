/*
 * exampleNode.cpp
 *
 * 	Created on: 03/05/2021
 * 		Author: diogomartinsac
 */

#include <flatfish_ros_efuse_serial/EFuseNode.hpp>
#include "rclcpp/rclcpp.hpp"

int main(int argc, char** argv) {

    rclcpp::init(argc, argv);
    auto node = std::make_shared<EFuseNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
