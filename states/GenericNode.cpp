/*
 * GenericNode.cpp
 *
 *  Created on: Dec 9, 2013
 *      Author: joe
 */

#include "GenericNode.h"

GenericNode::GenericNode() {
	// TODO Auto-generated constructor stub

}

GenericNode::~GenericNode() {
	// TODO Auto-generated destructor stub
}

void GenericNode::render(){
	cout<<description;
	for(unsigned int i=0; i<options.size(); i++){
		cout<<i+1 << " "  << options.at(i);
	}
}
