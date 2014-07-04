/*
 * DemoStore.cpp
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#include "DemoStore.h"

DemoStore::DemoStore(PlayerEntity* p, GameInfo* g) {
	nextState = STATE_NULL;

	playerData = *p;
	gameInfo = *g;

	inventory = std::vector<GenericItem>();
	int inventorySize = 2 + (rand() % 4);

	description = "You are in a run-down second hand store\nThe owner greets you wearily\n";

	for(unsigned int i=0; i<inventorySize; i++){
		inventory.push_back(GenericItem());
	}

	for(unsigned int i=0; i<inventory.size(); i++){
		options.push_back("Buy a " + inventory.at(i).getFullName() + "(" + GameState::numberToString(inventory.at(i).getPrice()) + " dollars)" + "\n");
	}
	options.push_back("Go home\n");

}

DemoStore::~DemoStore() {
	// TODO Auto-generated destructor stub
}

void DemoStore::handleEvents(){
	int selection;
	cin>>selection;
	int homeOption = inventory.size()+1; //to keep us from getting confused after we delete an item post-purchase
	int selectionPurchase=selection-1; //to match up with the way options are displayed as 1-based instead of 0-based
	for(unsigned int i=0; i<inventory.size(); i++){
		if(selectionPurchase==i){
			bool purchase = buyItem(inventory.at(i));
			//currently this mucks up the map for some reason and the indices keep showing up but being misleading; leaving this out until I can figure out a fix
			if(purchase){
				inventory.erase(inventory.begin() + i);
				options.erase(options.begin() + i);
			}
			nextState=STATE_NULL;
		}
	}
	if(selection==homeOption){
		nextState=STATE_HOME;
	}
	//TODO: warn on invalid input. not sure how
}

GameState* DemoStore::getNextState(){
	if(nextState==STATE_NULL){
		return this;
	}
	else if(nextState==STATE_EXIT){
		return NULL;
	}
	else if(nextState==STATE_HOME){
		return new Home(&playerData, &gameInfo);
	}
	else{
		return this;
	}
}

bool DemoStore::buyItem(GenericItem item){
	if(playerData.getMoney() >= item.getPrice()){
		playerData.setMoney(playerData.getMoney() - item.getPrice());
		cout<<"You purchase the " + item.getName() + "\n";
		playerData.addItem(item);
		return true;
	}
	else{
		cout<<"You do not have enough money to purchase the " + item.getName() + "\n";
		return false;
	}
}
