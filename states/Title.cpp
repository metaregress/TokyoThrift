/*
 * Title.cpp
 *
 *  Created on: Feb 20, 2013
 *      Author: joe
 */

#include "Title.h"

Title::Title(PlayerEntity *p, GameInfo *g) {
	nextState = STATE_NULL;

	description = "Welcome to Tokyo Thrift!\n";

	options.push_back("Begin Game!\n");
	options.push_back("Exit\n");

	playerData = *p;
	gameInfo = *g;
}

Title::~Title() {
	// TODO Auto-generated destructor stub
}

void Title::handleEvents(){
	int selection;
	cin>>selection;
	switch(selection){
	case 1:
		cout<<"Please enter your name\n";
		cin>>name;
		cout<<"Hello " + name + "\n";
		nextState=STATE_GAME;
		break;

	case 2:
		nextState=STATE_EXIT;
		break;

	default:
		cout<<"Invalid selection!\n";
		nextState=STATE_NULL;
		break;
	}
}



GameState* Title::getNextState(){
	if(nextState==STATE_NULL){
		return this;
	}
	else if(nextState==STATE_EXIT){
		return NULL;
	}
	else if(nextState==STATE_GAME){
		return new Home(&playerData, &gameInfo);
	}
	else{
		return this;
	}
}
