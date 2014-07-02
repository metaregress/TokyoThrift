/*
 * GameState.cpp
 *
 *  Created on: Feb 19, 2013
 *      Author: joe
 */

#include "GameState.h"

GameState::GameState() {
	// TODO Auto-generated constructor stub

}

GameState::~GameState() {
	// TODO Auto-generated destructor stub
}

std::string GameState::numberToString( int number ){
	ostringstream ss;
	ss << number;
	return ss.str();
}

int GameState::stringToNumber( std::string theString ){
	istringstream ss(theString);
	int result;
	return ss >> result ? result : 0;
}
