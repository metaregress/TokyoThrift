/*
 * Game.cpp
 *
 * The main class for handling things like winstates,
 * doing legwork and so on.
 *
 *  Created on: Sep 16, 2012
 *      Author: joe
 */

#include "Game.h"

Game::Game() {
	//initialize graphics
}

Game::~Game() {

}

std::string Game::numberToString( int number ){
	ostringstream ss;
	ss << number;
	return ss.str();
}

int Game::stringToNumber( std::string theString ){
	istringstream ss(theString);
	int result;
	return ss >> result ? result : 0;
}

int Game::runGame(){
	//can haz event loop

	while( currentState != NULL ){
		currentState->render();

		currentState->handleEvents();

		currentState = currentState->getNextState();


	}

	return 1;
}
