#pragma once
#include "Factory.h"

class GameManager
{
private:
	string type[3] = { "circle","rectangle","triangle" };
	Object array[9];
	Factory factory;
public:
	void generateObject();
	void printArray();
	void printVectorSize();
	string randomTipe(int index);
	void useObject();
};
