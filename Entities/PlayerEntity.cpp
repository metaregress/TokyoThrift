/*
 * PlayerEntity.cpp
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#include "PlayerEntity.h"

PlayerEntity::PlayerEntity() {
	money = 500;
	inventory = std::vector<GenericItem>();
}

PlayerEntity::~PlayerEntity() {
	// TODO Auto-generated destructor stub
}

int PlayerEntity::getMoney(){
	return money;
}

void PlayerEntity::setMoney(int value){
	money = value;
}

std::vector<GenericItem> PlayerEntity::getInventory(){
	return inventory;
}
