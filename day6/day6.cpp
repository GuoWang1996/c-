// day6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person
{
public:
	int age;
	virtual void speak() {
		printf("我是Person!\n");
	}
	virtual void eat() {
		printf("Person在eat!\n");
	}
	Person()
	{
	}
	Person(int age)
	{
		this->age = age;
	}
	~Person()
	{
	}
};
class Student:public Person
{
public:
	
	void speak() {
		printf("我是Student@!\n");
	}
	virtual void sleep() {
		printf("学生在睡觉!\n");
	}
	 void eat() {
		printf("学生在eat!\n");
	}
	 Student(int age)
	 {
		 this->age = age;
	 }
};
class Techer :public Person
{
public:

	void eat() {
		printf("我是Techer@!\n");
	}
};
void doWork(Person& p)
{
	p.eat();
}
Techer t;
Student s(18);
void test01()
{
	
	doWork(t);
	doWork(s);
}

int main()
{
	test01();
	system("pause");
}