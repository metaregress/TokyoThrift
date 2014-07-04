/*
 * GenericItem.h
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#ifndef GENERICITEM_H_
#define GENERICITEM_H_

#include <string>

class GenericItem {
public:
	GenericItem(int itemPrice, std::string itemName);
	GenericItem();
	virtual ~GenericItem();

	int getPrice();
	std::string getName();

private:
	int price;
	std:: string name;

	enum ItemTypes {
		TOY,
		CLOTHING,
		BOOK,
		MOVIE
	};

};

#endif /* GENERICITEM_H_ */
