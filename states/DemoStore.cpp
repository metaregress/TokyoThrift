/*
 * DemoStore.cpp
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#include "DemoStore.h"

DemoStore::DemoStore(PlayerEntity p, GameInfo g) {
	nextState = STATE_NULL;

	playerData = p;
	gameInfo = g;

	description = "You are in a run-down second hand store\nThe owner greets you wearily\n";

	options[0] = "Buy a lamp(100 dollars)\n";
	options[1] = "Buy a chair(200 dollars)\n";
	options[2] = "Go home\n";

}

DemoStore::~DemoStore() {
	// TODO Auto-generated destructor stub
}

void DemoStore::handleEvents(){
	int selection;
	cin>>selection;
	switch(selection){
	case 1:
		if(playerData.getMoney() >= 100){
			playerData.setMoney(playerData.getMoney() - 100);
			cout<<"You purchase the lamp\n";
			nextState=STATE_NULL;
		}
		else{
			cout<<"You do not have enough money to purchase the lamp\n";
		}
		break;

	case 2:
		if(playerData.getMoney() >= 200){
			playerData.setMoney(playerData.getMoney() - 200);
			cout<<"You purchase the chair\n";
			nextState=STATE_NULL;
		}
		else{
			cout<<"You do not have enough money to purchase the chair\n";
		}
		break;
	case 3:
			cout<<"You leave for home\n";
			nextState=STATE_HOME;
			break;


	default:
		cout<<"Invalid selection!\n";
		nextState=STATE_NULL;
		break;
	}
}

GameState* DemoStore::getNextState(){
	if(nextState==STATE_NULL){
		return this;
	}
	else if(nextState==STATE_EXIT){
		return NULL;
	}
	else if(nextState==STATE_HOME){
		return new Home(playerData, gameInfo);
	}
	else{
		return this;
	}
}
