#pragma once
#ifndef Copy
#include "Copy.h"

Copy::Copy(int x, int y, int wart) {

	static int i = 0;
	this->x = x;
	this->y = y;
	this->pointer = new int(wart); 
	i++;

}
Copy::~Copy() {

	static int i = 0;
	i++;
	delete pointer; 
}
/*Copy::Copy(const Copy& obj) { //deuxieme constructeur

	this->x = x;
	this->y = y;
	this->pointer = new int(*(obj.pointer));
}*/





#endif