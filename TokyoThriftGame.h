/*
 * TokyoThriftGame.h
 *
 *  Created on: Feb 19, 2013
 *      Author: joe
 */

#ifndef TOKYOTHRIFTGAME_H_
#define TOKYOTHRIFTGAME_H_

#include "helperClasses/Game.h"
#include "states/Title.h"
#include "Entities/PlayerEntity.h"
#include "Entities/GameInfo.h"

class TokyoThriftGame : public Game{
public:
	TokyoThriftGame();
	virtual ~TokyoThriftGame();
};

#endif /* TOKYOTHRIFTGAME_H_ */
