/*
 * PlayerEntity.h
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#ifndef PLAYERENTITY_H_
#define PLAYERENTITY_H_

#include "GenericItem.h"
#include <vector>

class PlayerEntity {
public:
	PlayerEntity();
	virtual ~PlayerEntity();

	int getMoney();
	void setMoney(int value);
	std::vector<GenericItem> getInventory();

private:
	int money;
	std::vector<GenericItem> inventory;
};

#endif /* PLAYERENTITY_H_ */
