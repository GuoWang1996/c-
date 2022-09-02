#include "Person.h"
#include <iostream>
#include "windows.h"
#include "stdio.h"
int Person::getAge()
{
	return age;
}

void Person::setAge(int age)
{
	this->age = age;
}

BasicStatus* Person::getStatus()
{
	return this->bs;
}

void Person::setStatus(BasicStatus *bs)
{
	this->bs = bs;
}

Person::Person() :age(0)
{
	this->bs = ChildrenStatus::getIntance();
}

void ChildrenStatus::addAge(int age, Person*p)
{
	if (p == NULL)return;
	int ageNow = p->getAge();
	ageNow = ageNow + age;
	if (ageNow <= 3)
	{
		p->setAge(ageNow);
		cout << "【幼儿状态】:" << p->getAge() << endl;
	}
	else
	{
		p->setStatus(TeenagersStatus::getIntance());
		p->getStatus()->addAge(age, p);
	}
}
//获取ChildrenStatus实例
ChildrenStatus* ChildrenStatus::getIntance()
{
	static ChildrenStatus cs;
	return &cs;
}

TeenagersStatus* TeenagersStatus::getIntance()
{
	static TeenagersStatus ts;
	return &ts;
}

void TeenagersStatus::addAge(int age, Person*p)
{
	if (p == NULL)return;
	int ageNow = p->getAge();
	ageNow = ageNow + age;
	if (ageNow>3&&ageNow <= 18)
	{
		p->setAge(ageNow);
		cout << "【青少年状态状态】:" << p->getAge() << endl;
	}
	else
	{

	}
}
