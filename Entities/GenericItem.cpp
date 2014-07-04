/*
 * GenericItem.cpp
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#include "GenericItem.h"

GenericItem::GenericItem(int itemPrice, std::string itemName) {
	price = itemPrice;
	name = itemName;
}

GenericItem::GenericItem() {
	// TODO Auto-generated constructor stub

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
