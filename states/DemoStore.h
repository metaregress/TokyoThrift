/*
 * DemoStore.h
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#ifndef DEMOSTORE_H_
#define DEMOSTORE_H_

#include "GenericNode.h"
#include "Home.h"

class DemoStore : public GenericNode{
public:
	DemoStore(PlayerEntity p, GameInfo g);
	virtual ~DemoStore();

	void handleEvents();

	GameState* getNextState();

protected:
	//Game states
	enum GameStates {
		STATE_NULL,
		STATE_EXIT,
		STATE_HOME
	};
};

#endif /* DEMOSTORE_H_ */
