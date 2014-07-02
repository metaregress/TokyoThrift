/*
 * GenericItem.h
 *
 *  Created on: Sep 22, 2013
 *      Author: joe
 */

#ifndef GENERICITEM_H_
#define GENERICITEM_H_

class GenericItem {
public:
	GenericItem();
	virtual ~GenericItem();

private:
	int value;

	enum ItemTypes {
		TOY,
		CLOTHING,
		BOOK,
		MOVIE
	};

};

#endif /* GENERICITEM_H_ */
