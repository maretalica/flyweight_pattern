#include "Factory.h"

Object* Factory::getObject(string type)
{
	Object* returnObject = new Object;

	struct tipeObject
	{
		tipeObject(string const& n) : type(n) {}
		bool operator () (Object& p) { return p.getTipe() == type; }
	private:
		string type;
	};

	vector<Object>::iterator it = find_if(listOf.begin(), listOf.end(), tipeObject(type));

	if (it != listOf.end())
	{
		*returnObject = *it;
	}
	else
	{
		Object* temp;
		temp = new Object();
		temp->setTipe(type);
		listOf.push_back(*temp);
		returnObject = temp;
	}
	return returnObject;
}