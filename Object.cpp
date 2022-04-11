#include "Object.h"

void Object::setTipe(string type)
{
	this->type = type;
	if (type == "circle")
	{
		size[0].type = "radius";
		size[1].type = "radius";
	}
	else if (type == "rectangle")
	{
		size[0].type = "length";
		size[1].type = "width";
	}
	else if (type == "triangle")
	{
		size[0].type = "base";
		size[1].type = "height";
	}
}

string Object::getTipe()
{
	return type;
}

void Object::generate()
{
	cout << "Generate [ "
		<< type << ", "
		<< size[0].type << " = " << size[0].size
		<< ", "
		<< size[1].type << " = " << size[1].size
		<< " - Di Coordinate " << kord
		<< " ]"
		<< " sedang ";
	if (this->getBool())
	{
		cout << "enabled";
	}
	else {
		cout << "disabled";
	}
	cout << endl;
}
void Object::use()
{
	status = true;
}

void Object::setUkuran(int x, int y)
{
	size[0].size = x;
	size[1].size = y;
}

ukuran* Object::getUkuran()
{
	return size;
}

void Object::setBool(bool y)
{
	status = y;
}

bool Object::getBool()
{
	return status;
}

void Object::setKord(int x)
{
	kord = x;
}

int Object::getKord()
{
	return kord;
}