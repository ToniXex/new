#include<iostream>
#include "factory.h"

int main() {
	factory lox;
	lox.addFurniture("iodfghjkl", 5, 4, 3, "t", "g", 2);
	lox.addFurniture("io", 5, 4, 3, "t", "y", 2);
	lox.addFurniture("io", 5432, 4, 3, "t", "y", 2);
	for(int i = 0; i < lox.getCountFurnitures(); i++){
		lox.printFurniture(i);
	}
	lox.deleteFurniture(1);
	for (int i = 0; i < lox.getCountFurnitures(); i++) {
		lox.printFurniture(i);
	}
	return 0;
}