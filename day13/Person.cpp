#include "Person.h"
using namespace std;
int Person::j = 10;

int Person::getI()
{
	return i2;
}

void Person::setI(int i)
{
	i2 = i;
}

void Person::add()
{
	cout << "¾²Ì¬-----"<<endl;
}

Person* Person::getIntance()
{
	static Person p;
	return &p;
}

Person::Person() :i(0)
{
}
Person::~Person()
{
}
