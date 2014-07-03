/*
 * Title.h
 *
 *  Created on: Feb 20, 2013
 *      Author: joe
 */

#ifndef TITLE_H_
#define TITLE_H_

#include "GenericNode.h"
#include "Home.h"

class Title : public GenericNode {
public:
	Title(PlayerEntity *p, GameInfo *g);
	virtual ~Title();

	void handleEvents();

	GameState* getNextState();

protected:
	//Game states
	enum GameStates {
		STATE_NULL,
		STATE_EXIT,
		STATE_GAME
	};
};

#endif /* TITLE_H_ */
