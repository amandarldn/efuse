/*
 * DataTypes	.hpp
 *
 *  Created on: 17/04/2015
 *      Author: diegocesar; joaoneto; rafaelsaback
 * 
 * 	Adapted on: 03/05/2021
 * 		Author: diogomartinsac
 */

#ifndef DATATYPES_HPP_
#define DATATYPES_HPP_

#include <string>
#include <vector>
#include <stdint.h>
#include <chrono>

namespace efuse_board {

	struct StatusChannel{
		// Name of the channel/device
		std::string name;
		// Initial state of the channel; ON(true) or OFF(false)
		bool default_on;
		// Verify the output status; ON(true) or OFF(false)
		bool channel_on;
		// Maximum current possible at the channel
		double max_current;
		// Actual current being applied
		double current;
		// Verify if the voltage is OK(true) or not(false)
		bool check_voltage;
		// Verify is error red LED is on(true) or off(false)
		bool error_led;
	};

	struct Board {
		// Name of board
		std::string name;
		// Board ID
		unsigned int id;
		// Vector of channels names in one board
		std::vector<std::string> channels;

		Board()
		: id(0) {channels.resize(8);}
	};

	struct StatusBoard {
		// Name of board
		std::string name;
		std::chrono::milliseconds time;
		// Vector of channels in one board
		StatusChannel status_channel[8];
	};

	struct CmdChannel {
		// Vector with command for each channel
		bool command[8];
	};



}

#endif /* DATATYPES_HPP_ */


