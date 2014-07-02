/*
 * GameState.h
 *
 *  Created on: Feb 19, 2013
 *      Author: joe
 */

#ifndef GAMESTATE_H_
#define GAMESTATE_H_

#include "SDL/SDL.h"

#include <vector>
#include <iomanip>
#include <iostream>
#include <locale>
#include <sstream>
#include <string>


using namespace std;

class GameState {
public:
	GameState();
	virtual ~GameState();

	virtual void handleEvents() = 0;
	virtual void render() = 0;

	virtual GameState* getNextState() = 0;

protected:
	//Game states
	enum GameStates {
		STATE_NULL,
		STATE_EXIT,
	};

	int nextState;

	std::string numberToString( int number);
	int stringToNumber( std::string theString );
};

#endif /* GAMESTATE_H_ */
