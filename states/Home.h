/*
 * Home.h
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#ifndef HOME_H_
#define HOME_H_

#include "GenericNode.h"
#include "DemoStore.h"

class Home : public GenericNode{
public:
	Home(PlayerEntity *p, GameInfo *g);
	virtual ~Home();

	void handleEvents();

	GameState* getNextState();

protected:
	//Game states
	enum GameStates {
		STATE_NULL,
		STATE_EXIT,
		STATE_STORE
	};
};

#endif /* HOME_H_ */
