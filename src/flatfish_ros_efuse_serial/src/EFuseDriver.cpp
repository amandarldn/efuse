/*
 * EFuseDriver.cpp
 *
 *  Created on: 17/04/2015
 *      Author: rafaelsaback
 * 
 *  Adapted on: 03/05/2021
 *      Author: diogomartinsac          
 */

#include <flatfish_ros_efuse_serial/EFuseDriver.hpp>
#include <boost/crc.hpp>

using namespace efuse_board;
using namespace std;

EFuseDriver::EFuseDriver()
    : ros_driver_base::Driver(max_packet_size, true) {}

EFuseDriver::EFuseDriver(const int buffer_size)
    : ros_driver_base::Driver(buffer_size, true) {}

EFuseDriver::~EFuseDriver() {}

void EFuseDriver::setNumberOfBoards(const int& count)
{
    number_of_boards = count;
}

void EFuseDriver::setChannelOn(uint8_t board, const CmdChannel &cmd)
{
    sendCommand(board, 0x01, 0x00, cmd2Byte(cmd));
}

void EFuseDriver::setChannelOn(uint8_t board, uint8_t channel, bool flip)
{
    uint8_t state = flip ? 0x01 : 0x00;
    sendCommand(board, 0x05, channel, state);
}

void EFuseDriver::setMaxCurrent(uint8_t board, uint8_t channel, double value)
{
    sendCommand(board, 0x02, channel, static_cast<uint8_t>(value*10));
}

void EFuseDriver::defaultPowerUp(uint8_t board, const CmdChannel &cmd)
{
    sendCommand(board, 0x03, 0x00, cmd2Byte(cmd));
}

StatusChannel EFuseDriver::getStatus(uint8_t board, uint8_t channel)
{
    vector<uint8_t> answer = sendCommand(board, 0x04, channel, 0x00);
    StatusChannel status;
    status.channel_on    = answer[4] == 0x01;
    status.max_current   = ((double)answer[5])*0.1;
    status.current       = ((double)answer[6])*0.1;
    status.check_voltage = answer[7] == 0x01;
    status.error_led     = answer[8] == 0x01;
    status.default_on    = answer[9] == 0x01;
    return status;
}

void EFuseDriver::resetBoard(uint8_t board)
{
    sendCommand(board, 0x06, 0x00, 0xFF);
}


bool EFuseDriver::checkCRC(uint8_t const* buffer, int size_buffer) const
{
    uint8_t crc = genCRC(buffer, size_buffer-1);
    return (buffer[size_buffer-1] == crc);
}

uint8_t EFuseDriver::genCRC(uint8_t const * buffer, int size_buffer) const
{
    // CRC-8-Dallas/Maxim. Using polynomial 0x31 and
    // reflected input and remainder
    boost::crc_basic<8> result(0x31, 0, 0, true, true);
    result.process_bytes(buffer, size_buffer);
    return result.checksum();
}

// Convert the CmdChannel to a byte (true=1, false=0)
uint8_t EFuseDriver::cmd2Byte (const CmdChannel &cmd)
{
    uint8_t result = 0;
    // Check all values of the command
    for (int i = 0; i < number_of_channels; i++) {
        if (cmd.command[i])  // If cmd(i)==true, set bit(i)=1
            result |= (1 << i);
    }
    return result;
}

std::vector<uint8_t> EFuseDriver::receiveAnswer()
{
    std::vector<uint8_t> buffer(max_packet_size);
    ros_driver_base::Driver::readPacket(&buffer[0], max_packet_size, 700, 600);
    return buffer;
}

void EFuseDriver::checkAnswer( uint8_t const* buffer, std::vector<uint8_t> const& answer )
{
    if ( buffer[0] != answer[0] || buffer[1] != answer[1] )
        throw std::runtime_error("unepxected error reported by efuse board");
    if (buffer[2] == answer[2] && answer[2] != 0x04) {
        if (answer[3] != 0xFF)
            throw std::runtime_error("could not perform expected command");
        // Command executed.
        return;
    }
    else if (answer[2] == 0x04 && buffer[3] == answer[3])
        // Right status answer
        return;
    if (answer[2] == 0x00) {
        if (answer[3] == 0xAE)
            throw std::runtime_error("wrong board address");
        if (answer[3] == 0x00)
            throw std::runtime_error("CRC error in command");
        if (answer[3] == 0x01)
            throw std::runtime_error("internal CRC error");
    }
    throw std::runtime_error("unexpected reply from efuse board");
}

vector<uint8_t> EFuseDriver::sendCommand(uint8_t board, uint8_t byte2, uint8_t byte3, uint8_t byte4)
{
    uint8_t cmd[6] = { 0xAA, board, byte2, byte3, byte4, 0 };
    cmd[5] = genCRC(cmd, 5);

    /** For unknown reasons (after switching a channel on/off),
     * sometimes the efuse goes to debug mode and wait for the end-character '\n'.
     *  Make sure it can return to binary mode if it's the case,
     * by sending '\n' to two boards.
     */
    for (int j=0; j < number_of_boards; j++) {
        ros_driver_base::Driver::writePacket(cmd, 6);
        try {
            vector<uint8_t> answer = receiveAnswer();
            checkAnswer(cmd, answer);
            return answer;
        } catch (std::runtime_error &e) {
            // Reset efuse to binary mode.
            uint8_t to_bin[3] = { '\n', 'F', '\n' };
            ros_driver_base::Driver::writePacket(to_bin, 3);
            usleep(100);
            std::cout << "Setting device to binary mode. Try attempt: " << j << std::endl;
        }
    }
    throw runtime_error("could not receive a answer from command.");
}

int EFuseDriver::extractPacket(const uint8_t* buffer, size_t buffer_size) const
{
    if (buffer_size < 5)
        return 0;
    else if (buffer[0] != 0xAA)
        return -1;

    uint8_t data = buffer[2];

    size_t packet_size;

    // Check the kind of message in order to know its size
    if ((data == 0x00 || data == 0x01 || data == 0x02 || data == 0x03 ||
         data == 0x05 || data == 0x06))
        packet_size = 5;
    else if (data == 0x04)
        packet_size = 11;
    else
        return -1;

    if (buffer_size < packet_size)
        return 0;

    if (!checkCRC(buffer, packet_size))
        return -1;  // CRC from answer not valid
    return packet_size;
}

