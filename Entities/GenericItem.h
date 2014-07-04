/*
 * GenericItem.h
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#ifndef GENERICITEM_H_
#define GENERICITEM_H_

#include <string>
#include <vector>
#include <stdlib.h>

class GenericItem {
public:
	GenericItem(int itemPrice, std::string itemName, std::string itemAdjective="");
	GenericItem();
	virtual ~GenericItem();

	int getPrice();
	std::string getName();
	std::string getFullName();

private:
	int price;
	std:: string name;
	std::string adjective;

	enum ItemTypes {
		TOY,
		CLOTHING,
		BOOK,
		MOVIE
	};

};

#endif /* GENERICITEM_H_ */
