/*
 * Home.cpp
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#include "Home.h"

Home::Home(PlayerEntity p, GameInfo g) {
	nextState = STATE_NULL;

	playerData = p;
	gameInfo = g;

	description = "You are in your apartment in the suburbs of Tokyo\nYou have " + GameState::numberToString(playerData.getMoney()) + " dollars in your bank account.\nIt is currently " + GameState::numberToString(gameInfo.getCurrentDate()) + "\n";

	options[0] = "Go to the store\n";
	options[1] = "Go to bed\n";

}

Home::~Home() {
	// TODO Auto-generated destructor stub
}

void Home::handleEvents(){
	int selection;
	cin>>selection;
	switch(selection){
	case 1:
		cout<<"You walk to the store\n";
		nextState=STATE_STORE;
		break;

	case 2:
		gameInfo.setCurrentDate(gameInfo.getCurrentDate()+1);
		cout<<"You rest for the night\n";
		break;

	default:
		cout<<"Invalid selection!\n";
		nextState=STATE_NULL;
		break;
	}
}

GameState* Home::getNextState(){
	if(nextState==STATE_NULL){
		return this;
	}
	else if(nextState==STATE_EXIT){
		return NULL;
	}
	else if(nextState==STATE_STORE){
		return new DemoStore(playerData, gameInfo);
	}
	else{
		return this;
	}
}
