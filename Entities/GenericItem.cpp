/*
 * GenericItem.cpp
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#include "GenericItem.h"

GenericItem::GenericItem(int itemPrice, std::string itemName, std::string itemAdjective) {
	price = itemPrice;
	name = itemName;
	adjective = itemAdjective;
}

GenericItem::GenericItem() {
	//randomly generate a bunch of stuff
	std::vector<std::string> itemNames = std::vector<std::string>();
	itemNames.push_back("broom");
	itemNames.push_back("lamp");
	itemNames.push_back("chair");
	itemNames.push_back("hat");

	std::vector<std::string> itemAdjectives = std::vector<std::string>();
	itemAdjectives.push_back("nice");
	itemAdjectives.push_back("shabby");
	itemAdjectives.push_back("old");
	itemAdjectives.push_back("shiny");

	std::vector<int> itemPrices = std::vector<int>();
	itemPrices.push_back(100);
	itemPrices.push_back(200);
	itemPrices.push_back(300);
	itemPrices.push_back(500);

	name = itemNames.at(rand() % itemNames.size());
	adjective = itemAdjectives.at(rand() % itemNames.size());
	price = itemPrices.at(rand() % itemNames.size());

}

GenericItem::~GenericItem() {
	// TODO Auto-generated destructor stub
}

int GenericItem::getPrice(){
	return price;
}

std::string GenericItem::getName(){
	return name;
}

std::string GenericItem::getFullName(){
	return adjective + " " + name;
}
