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
#include "../Entities/GenericItem.h"
#include <vector>

class DemoStore : public GenericNode{
public:
	DemoStore(PlayerEntity* p, GameInfo* g);
	virtual ~DemoStore();

	void handleEvents();

	GameState* getNextState();

	std::vector<GenericItem> getInventory();

protected:
	std::vector<GenericItem> inventory;
	bool buyItem(GenericItem item);
	//Game states
	enum GameStates {
		STATE_NULL,
		STATE_EXIT,
		STATE_HOME
	};
};

#endif /* DEMOSTORE_H_ */
