/*
 * GameInfo.cpp
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#include "GameInfo.h"

GameInfo::GameInfo() {
	dayLimit = 90;
	currentDate = 0;

}

GameInfo::~GameInfo() {
	// TODO Auto-generated destructor stub
}

int GameInfo::getCurrentDate(){
	return currentDate;
}

int GameInfo::getDayLimit(){
	return dayLimit;
}

void GameInfo::setCurrentDate(int value){
	currentDate = value;
}
