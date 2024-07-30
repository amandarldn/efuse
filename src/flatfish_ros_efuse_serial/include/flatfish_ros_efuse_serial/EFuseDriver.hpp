/*
 * EFuseDriver.hpp
 *
 *  Created on: 17/04/2015
 *      Author: diegocesar; joaoneto; rafaelsaback;
 *  
 *  Adapted on: 03/05/2021
 *      Author: diogomartinsac;
 */

#ifndef DRIVERS_EFUSE_BOARD_SRC_EFUSEDRIVER_HPP_
#define DRIVERS_EFUSE_BOARD_SRC_EFUSEDRIVER_HPP_

#include <stdint.h>
#include <string.h>
#include <vector>
#include <iostream>
#include "ros_driver_base/driver.hpp"
#include <flatfish_ros_efuse_serial/DataTypes.hpp>


namespace efuse_board {

class EFuseDriver : public ros_driver_base::Driver {
 public:
        EFuseDriver();
        explicit EFuseDriver(const int buffer_size);
        virtual ~EFuseDriver();

        static const int max_packet_size = 50;
        static const int number_of_channels = 8;
        int number_of_boards = 1;

       /**
        * @brief Set the number of boards
        * 
        * @param count 
        */
        void setNumberOfBoards(const int& count);
        /**
         * Turns on/off the specified channel
         * @param board - Board
         * @param cmd - Vector of command - True: turns the channel on
         * 				  	  False: turns the channel off
         * Return the feedback of the command
         */
        void setChannelOn(uint8_t board, const CmdChannel &cmd);


        /**
         * Turns on/off the specified channel
         * @param board - Board number
         * @param channel - Channel number
         * @param value - True: turns the channel on
         * 		     False: turns the channel off
         * Return the feedback of the command
         */
        void setChannelOn(uint8_t board, uint8_t channel, bool flip);

        /**
         * Sets the maximum current value for a specific channel
         * @param board - Board number
         * @param channel - Channel number
         * @param value - Max current value
         * Return the feedback of the command
         */
        void setMaxCurrent(uint8_t board, uint8_t channel, double value);

        /**
         * Define the default values on/off for each channel when the board is powered
         * @param board - Board number
         * @param cmd - Vector of command - True: turns the channel on
         * 				  	  False: turns the channel off
         * Return the feedback of the command
         */
        void defaultPowerUp(uint8_t board, const CmdChannel &cmd);

        /**
         * Gets the status of a specific board
         * @param board - Board number
         * @param channel - Channel number
         * @status - Response with status of the channel
         * Return the feedback of the command
         */
        StatusChannel getStatus(uint8_t board, uint8_t channel);

        /**
         * Resets a chosen board
         * @param board - Board number
         * Return the feedback of the command
         */
        void resetBoard(uint8_t board);



 private:
        /**
         * Check the CRC at the end of a message
         *  @param string - Message from efuse
         *  @param size_string - size of the message
         *  Return true if CRC is valid
         * TODO: verify input
         */
        bool checkCRC(uint8_t const* buffer, int size_buffer) const;

        /**
         * Generate the CRC of a command message
         * @param string - Message to be send to efuse, without crc
         * @para size_string - size of the message
         * Return CRC generated
         * TODO: generate CRC
         */
        uint8_t genCRC(uint8_t const* buffer, int size_buffer) const;

        /**
         * Convert bool[8] to uint8_t (true=1, false=0)
         * para@ cmd - Vector of bool, size 8.
         * Return Byte where 1=true and 0=false
         */
        uint8_t cmd2Byte(const CmdChannel &cmd);

        /**
         * Return the size of the read packet.
         * Negative values means error
         * @para buffer - message from efuse
         * Return size of message
         */
        std::vector<uint8_t> receiveAnswer();

        /**
         *	Verify answer from efuse
         *	@para buffer - Packet send to efuse
         *	@para answer - Message from efuse
         *	@para size - Size of answer
         *	Return kind of answer (1=valid; 0=not done; negative values=error)
         */
        void checkAnswer(uint8_t const* buffer,
                            std::vector<uint8_t> const& answer);

        /**
         * Send command to efuse and verify the answer
         * @para buffer - Command to be sent
         * Return kind of answer (1=valid; 0=not done; negative values=error)
         */
        std::vector<uint8_t> sendCommand(uint8_t board, uint8_t byte2,
                                        uint8_t byte3, uint8_t byte4);


 protected:
        /**
         * Extracts the packet from the message
         */
        virtual int extractPacket(const uint8_t* buffer,
                                size_t buffer_size) const;
};

} /* namespace efuse_board */

#endif /* DRIVERS_EFUSE_BOARD_SRC_EFUSEDRIVER_HPP_ */
