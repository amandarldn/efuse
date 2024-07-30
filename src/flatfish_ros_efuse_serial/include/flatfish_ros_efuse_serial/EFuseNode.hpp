/*
 * EFuseNode.hpp
 *
 * 	Created on: 03/05/2021
 * 		Author: diogomartinsac
 */

#ifndef AUV_EFUSE_SERIAL_INCLUDE_EFUSENODE_HPP_
#define AUV_EFUSE_SERIAL_INCLUDE_EFUSENODE_HPP_

#include <math.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>

#include "rclcpp/rclcpp.hpp"

#include <flatfish_ros_efuse_serial/EFuseDriver.hpp>

// Custom Message types
#include <flatfish_ros_efuse_serial/msg/board.hpp>
#include <flatfish_ros_efuse_serial/msg/board_array.hpp>
#include <flatfish_ros_efuse_serial/msg/cmd_channel.hpp>
#include <flatfish_ros_efuse_serial/msg/status_board.hpp>
#include <flatfish_ros_efuse_serial/msg/status_board_array.hpp>
#include <flatfish_ros_efuse_serial/msg/status_channel.hpp>

//Custom Services types
#include <flatfish_ros_efuse_serial/srv/default_power_up.hpp>
#include <flatfish_ros_efuse_serial/srv/reset_board.hpp>
#include <flatfish_ros_efuse_serial/srv/set_channel_on.hpp>
#include <flatfish_ros_efuse_serial/srv/set_channels_on.hpp>
#include <flatfish_ros_efuse_serial/srv/set_max_current.hpp>


class EFuseNode : public rclcpp::Node{
 private:
    static const int number_of_channels = 8;
    /**
     * @brief EfuseDriver pointer.
     * 
     */
    efuse_board::EFuseDriver* efuse_;

    /**
     * @brief The io port to connect to.
     * 
     */
    std::string io_port_;

    /**
     * @brief The read timeout in milliseconds.
     * 
     */
    int io_read_timeout_;

    /**
     * @brief The write timeout in milliseconds.
     * 
     */
    int io_write_timeout_;

    /**
     * @brief The status interval in milliseconds.
     * 
     */
    int io_status_interval_;

    /**
     * @brief List of all efuse boards.
     * 
     */
    std::vector<efuse_board::Board> efuse_boards_;

    /**
     * @brief Service analogous to the 0x05 command
     * Switch on/off one of the channels from the selected board.  
     */
    rclcpp::Service<flatfish_ros_efuse_serial::srv::SetChannelOn>::SharedPtr setChannelOn_;

    /**
     * @brief Service analogous to the 0x01 commandChannel
     * Switch on/off each of the 8channels of the board specified in the command.
     */
    rclcpp::Service<flatfish_ros_efuse_serial::srv::SetChannelsOn>::SharedPtr setChannelsOn_;

    /**
     * @brief Service analogous to the 0x02 command
     * Modifies the maximum current value for a specific channel of the selected board.
     */
    rclcpp::Service<flatfish_ros_efuse_serial::srv::SetMaxCurrent>::SharedPtr setMaxCurrent_;

    /**
     * @brief Service analogous to the 0x03 command
     * Sets the default value on / off for each channel when the board is powered.
     */
    rclcpp::Service<flatfish_ros_efuse_serial::srv::DefaultPowerUp>::SharedPtr defaultPowerUp_;

    /**
     * @brief Service analogous to the 0x06 command.
     * Reset a chosen board.
     */
    rclcpp::Service<flatfish_ros_efuse_serial::srv::ResetBoard>::SharedPtr resetBoard_;

    /**
     * @brief Publishes the status of all declared EFuse boards. Analogous to the 0x04 command.
     * 
     */
    rclcpp::Publisher<flatfish_ros_efuse_serial::msg::StatusBoardArray>::SharedPtr getStatus_;

    /**
     * @brief Request the status of all declared EFuse boards based on a given time interval.
     * 
     */
    rclcpp::TimerBase::SharedPtr getStatusTimer_;

 public:
    explicit EFuseNode();
    EFuseNode(const int buffer_size);
    virtual ~EFuseNode();

 private:
    /**
     * @brief Load ROS parameters 
     * 
     */
    void loadConfig();

    /**
     * @brief Setup publishers within class constructor
     * 
     */
    void initializePublishers();

    /**
     * @brief Setup services within class constructor
     * 
     */
    void initializeServices();

    /**
     * @brief Setup timers within class constructor
     * 
     */
    void initializeTimers();

    /**
     * @brief Service callback. Switch on/off one of the channels from the selected board
     * 
     * @param request - Message structure: 
     *                      board - Board number //
     *                      channel - Channel number //
     *                      value - (True: turns the channel on)
     *                              (False: turns the channel off)
     * @param response - Return the feedback of the command
     * @return true 
     * @return false 
     */
    bool setChannelOnCallback(
        std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn::Request> request,
        std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn::Response> response);

    /**
     * @brief Service callback. Switch on/off each of the 8 channels of the board specified in the command
     * 
     * @param request - Message structure: 
     *                      board - Board number //
     *                      command[8] - (True: turns the channel on)
     *                                   (False: turns the channel off)       
     * @param response - Return the feedback of the command
     * @return true 
     * @return false 
     */
    bool setChannelsOnCallback(
        std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelsOn::Request>request,
        std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelsOn::Response> response);

    /**
     * @brief Service callback. Sets the maximum current value for a specific channel
     * 
     * @param request - Message structure: 
     *                  board - Board number //
     *                  channel - Channel number //
     *                  value - Max current value
     * @param response - Return the feedback of the command
     * @return true 
     * @return false 
     */
    bool setMaxCurrentCallback(
        std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent::Request> request,
        std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent::Response> response);

    /**
     * @brief Service callback. Define the default values on/off for each channel when the board is powered
     * 
     * @param request - Message structure: 
     *                      board - Board number //
     *                      command[8] - (True: turns the channel on)
     * 	         		  			     (False: turns the channel off)
     * @param response Return the feedback of the command
     * @return true 
     * @return false 
     */
    bool defaultPowerUpCallback(
        std::shared_ptr<flatfish_ros_efuse_serial::srv::DefaultPowerUp::Request> request,
        std::shared_ptr<flatfish_ros_efuse_serial::srv::DefaultPowerUp::Response> response);

    /**
     * @brief Service callback. Resets a chosen board
     * 
     * @param request - Message structure: board - Board number
     * @param response - Return the feedback of the command
     * @return true 
     * @return false 
     */
    bool resetBoardCallback(
        std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard::Request> request,
        std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard::Response> response);

    /**
     * @brief Timer callback. Gets the status of all declared EFuse boards.
     * 
     */
    void getStatusTimerCallback();

    /**
     * @brief Parse Efuse boards from Yaml to vector of boards
     * 
     * @param board_list
     */
    void parseYaml(const std::vector<std::string>& board_list);
};

#endif  // AUV_EFUSE_SERIAL_INCLUDE_EFUSENODE_HPP_
