/*
 * EFuseNode.cpp
 *
 * 	Created on: 03/05/2021
 * 		Author: diogomartinsac
 */


#include <flatfish_ros_efuse_serial/EFuseNode.hpp>
#include <builtin_interfaces/msg/duration.hpp>

EFuseNode::EFuseNode(): Node("efuse_node"), efuse_(new efuse_board::EFuseDriver())
{
    RCLCPP_INFO(get_logger(), "EFuse Node Initialized!");
    loadConfig();
    initializePublishers();
    initializeServices();
    initializeTimers();
}

EFuseNode::EFuseNode(const int buffer_size) : Node("efuse_node"), efuse_(new efuse_board::EFuseDriver(buffer_size)) {
    RCLCPP_INFO(get_logger(), "EFuse Node Initialized!");
    loadConfig();
    initializePublishers();
    initializeServices();
    initializeTimers();
}

EFuseNode::~EFuseNode() {
    delete efuse_;
}

void EFuseNode::loadConfig() {
    std::vector<std::string> board_list;
    if (!this->get_parameter("io_port", io_port_))
        throw std::runtime_error(
            "Couldn't find io_port on the ROS parameter server.");
    if (!this->get_parameter("io_read_timeout", io_read_timeout_))
        throw std::runtime_error(
            "Couldn't find io_read_timeout on the ROS parameter server.");
    if (!this->get_parameter("io_write_timeout", io_write_timeout_))
        throw std::runtime_error(
            "Couldn't find io_write_timeout on the ROS parameter server.");
    if (!this->get_parameter("io_status_interval", io_status_interval_))
        throw std::runtime_error(
            "Couldn't find io_status_interval on the ROS parameter server.");
    if (!this->get_parameter("boards", board_list)) {
         
        throw std::runtime_error(
            "Couldn't find Efuse boards on the ROS parameter server.");
    } else {
        EFuseNode::parseYaml(board_list);
        RCLCPP_INFO(get_logger(), "EFuse Parameters loaded successfully.");
    }

    auto io_read_timeout = std::chrono::milliseconds(io_read_timeout_);
    auto io_write_timeout = std::chrono::milliseconds(io_read_timeout_);

    efuse_->openURI(io_port_);
    efuse_->setNumberOfBoards(efuse_boards_.size());
    efuse_->setReadTimeout(io_read_timeout);
    efuse_->setWriteTimeout(io_write_timeout);
}

void EFuseNode::initializeServices() {
    RCLCPP_INFO(get_logger(), "Initializing EFuse Services");
    setChannelOn_ = this->create_service<flatfish_ros_efuse_serial::srv::SetChannelOn>(
        "setChannelOn", 
        std::bind(&EFuseNode::setChannelOnCallback, this, std::placeholders::_1, std::placeholders::_2)
    );

    setChannelsOn_ = this->create_service<flatfish_ros_efuse_serial::srv::SetChannelsOn>(
        "setChannelsOn", 
        std::bind(&EFuseNode::setChannelsOnCallback, this, std::placeholders::_1, std::placeholders::_2)
    );

    setMaxCurrent_ = this->create_service<flatfish_ros_efuse_serial::srv::SetMaxCurrent>(
        "setMaxCurrent", 
        std::bind(&EFuseNode::setMaxCurrentCallback, this, std::placeholders::_1, std::placeholders::_2)
    );

    defaultPowerUp_ = this->create_service<flatfish_ros_efuse_serial::srv::DefaultPowerUp>(
        "defaultPowerUp", 
        std::bind(&EFuseNode::defaultPowerUpCallback, this, std::placeholders::_1, std::placeholders::_2)
    );

    resetBoard_ = this->create_service<flatfish_ros_efuse_serial::srv::ResetBoard>(
        "resetBoard", 
        std::bind(&EFuseNode::resetBoardCallback, this, std::placeholders::_1, std::placeholders::_2)
    );
}

void EFuseNode::initializePublishers() {
    RCLCPP_INFO(get_logger(),"Initializing EFuse Publishers");
    getStatus_ = this->create_publisher<flatfish_ros_efuse_serial::msg::StatusBoardArray>(
        "getStatus",
        rclcpp::QoS(1)
    );
}

void EFuseNode::initializeTimers() {
    RCLCPP_INFO(get_logger(),"Initializing EFuse Timers");
    auto interval = std::chrono::milliseconds(io_status_interval_);

    // Cria o timer com o intervalo especificado e a callback associada
    getStatusTimer_ = this->create_wall_timer(
        interval, 
        std::bind(&EFuseNode::getStatusTimerCallback, this)
    );
}

bool EFuseNode::setChannelOnCallback(
    const std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn::Request> request,
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelOn::Response> response) {
    efuse_->setChannelOn(request->board, request->channel, request->state);
    return true;
}

bool EFuseNode::setChannelsOnCallback(
    const std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelsOn::Request> request,
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetChannelsOn::Response> response) {
    efuse_board::CmdChannel cmd;
    for (int i = 0; i< number_of_channels; i++)
        cmd.command[i] = request->command.channel[i];
    efuse_->setChannelOn(request->board, cmd);
    return true;
}


bool EFuseNode::setMaxCurrentCallback(
    const std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent::Request> request,
    std::shared_ptr<flatfish_ros_efuse_serial::srv::SetMaxCurrent::Response> response) {
    efuse_->setMaxCurrent(request->board, request->channel, request->value);
    return true;
}


bool EFuseNode::defaultPowerUpCallback(
    const std::shared_ptr<flatfish_ros_efuse_serial::srv::DefaultPowerUp::Request> request,
    std::shared_ptr<flatfish_ros_efuse_serial::srv::DefaultPowerUp::Response> response) {
    efuse_board::CmdChannel cmd;
    for (int i = 0; i < number_of_channels; i++) {
        cmd.command[i] = request->command.channel[i];
    }
    efuse_->defaultPowerUp(request->board, cmd);
    return true;
}

bool EFuseNode::resetBoardCallback(
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard::Request> request,
    std::shared_ptr<flatfish_ros_efuse_serial::srv::ResetBoard::Response> response) {
    efuse_->resetBoard(request->board);
    return true;
}

void EFuseNode::getStatusTimerCallback() {
    efuse_board::StatusBoard buffer_status_board;
    flatfish_ros_efuse_serial::msg::StatusBoard status_board;
    flatfish_ros_efuse_serial::msg::StatusBoardArray status_board_array;
    for (efuse_board::Board& efuse_board : efuse_boards_) {
        status_board.name = efuse_board.name;
        status_board.time = this->now();
        for (int i = 0; i < number_of_channels; i++) {
            buffer_status_board.status_channel[i] = efuse_->getStatus(efuse_board.id, i+1);
            status_board.status_channel[i].name = efuse_board.channels[i];
            status_board.status_channel[i].default_on = buffer_status_board.status_channel[i].default_on;
            status_board.status_channel[i].channel_on = buffer_status_board.status_channel[i].channel_on;
            status_board.status_channel[i].max_current = buffer_status_board.status_channel[i].max_current;
            status_board.status_channel[i].current = buffer_status_board.status_channel[i].current;
            status_board.status_channel[i].check_voltage = buffer_status_board.status_channel[i].check_voltage;
            status_board.status_channel[i].error_led = buffer_status_board.status_channel[i].error_led;
        }
        status_board_array.status_board.push_back(status_board);
    }
    getStatus_->publish(status_board_array);
}

void EFuseNode::parseYaml(const std::vector<std::string>& board_list) {
    efuse_board::Board tmp_board;
    std::vector<std::string> tmp_channels;
    int board_count = board_list.size();

    tmp_channels.reserve(number_of_channels);
    efuse_boards_.reserve(board_count);
    for (int i = 0; i != board_count; i++) {
        tmp_board.name = board_list[i]; // Exemplo, ajuste conforme necessário
        tmp_board.id = i; // Exemplo, ajuste conforme necessário
        for (int j = 0; j < number_of_channels; ++j)
            tmp_channels.push_back("channel_" + std::to_string(j + 1)); // Exemplo, ajuste conforme necessário
        tmp_board.channels = tmp_channels;
        tmp_channels.clear();
        efuse_boards_.push_back(tmp_board);
    }
}