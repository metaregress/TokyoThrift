/*
 * GameInfo.h
 *
 * This class is responsible for all the information about the game state,
 * such as date, time of day, and so on
 *
 *  Created on: Feb 16, 2014
 *      Author: joe
 */

#ifndef GAMEINFO_H_
#define GAMEINFO_H_

class GameInfo {
public:
	GameInfo();
	virtual ~GameInfo();

	int getCurrentDate();
	void setCurrentDate(int value);
	int getDayLimit();

protected:
	int dayLimit;
	int currentDate;
};

#endif /* GAMEINFO_H_ */
