/*
 * GenericNode.h
 *
 *  Created on: Dec 9, 2013
 *      Author: joe
 */

#ifndef GENERICNODE_H_
#define GENERICNODE_H_

#include <vector>

#include "GameState.h"
#include "../Entities/GameInfo.h"
#include "../Entities/PlayerEntity.h"

class GenericNode : public GameState {
public:
	GenericNode();
	virtual ~GenericNode();
	void render();

protected:
	std::vector<std::string> options;
	std::string description;
	std::string name;

	PlayerEntity playerData;
	GameInfo gameInfo;
};

#endif /* GENERICNODE_H_ */
