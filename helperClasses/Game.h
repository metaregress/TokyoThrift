/*
 * Game.h
 *
 *  Created on: Sep 16, 2012
 *      Author: joe
 */

#ifndef GAME_H_
#define GAME_H_
#include <vector>
#include <iomanip>
#include <locale>
#include <sstream>
#include <iostream>
#include <string>
#include "../states/GameState.h"

using namespace std;

class Game {
	private:


	public:
	Game();
	virtual ~Game();
	int runGame();

	protected:

	int stateId;
	int nextState;

	GameState *currentState;

	std::string numberToString( int number);
	int stringToNumber( std::string theString );
};

#endif /* GAME_H_ */
