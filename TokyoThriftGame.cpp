/*
 * TokyoThriftGame.cpp
 *
 *  Created on: Feb 19, 2013
 *      Author: joe
 */

#include "TokyoThriftGame.h"

TokyoThriftGame::TokyoThriftGame() {
	PlayerEntity p = PlayerEntity();
	GameInfo g = GameInfo();
	currentState = new Title(&p, &g);

}

TokyoThriftGame::~TokyoThriftGame() {
	// TODO Auto-generated destructor stub
}
