#pragma once
#include <iostream>
class Person
{
private:
	int i2;
public:
	int i;
	static int j;
public:
	int getI();
	void setI(int i);
	static void add();
	static Person* getIntance();
public:
	~Person();

private:
	Person();
	Person(const Person& p) {};
	const Person* operator=(const Person& p) {};
};

