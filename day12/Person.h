#pragma once
#include <iostream>
#include "windows.h"
#include "stdio.h"
using namespace std;
class BasicStatus;

class Person
{
private:
	int age;
	BasicStatus* bs;
public:
	int getAge() ;
	void setAge(int age) ;
	BasicStatus* getStatus();
	void setStatus(BasicStatus *bs);
public:
	Person();
	~Person() {};

};

//人物基础状态
class BasicStatus
{
public:
	virtual void addAge(int age, Person*p) {};
public:

	BasicStatus() {};
	virtual ~BasicStatus() {};

private:

};

//幼儿状态   -单例模式，构造器私有化
class ChildrenStatus:public BasicStatus
{
public:
	static ChildrenStatus* getIntance();
	void addAge(int age, Person*p);
public:
	    ~ChildrenStatus(){};
private:
	ChildrenStatus() {};
	ChildrenStatus(const ChildrenStatus& cs) = delete;	//	禁止拷贝构造
    const ChildrenStatus&operator=(const ChildrenStatus& cs) = delete;	// 禁止赋值运算符‘=’ 语法类似 cs2=cs |cs2.operator=(cs){cs.delete}
};


//幼儿状态   -单例模式，构造器私有化
class TeenagersStatus :public BasicStatus
{
public:
	static TeenagersStatus* getIntance();
	void addAge(int age, Person*p);
public:
	~TeenagersStatus() {};
private:
	TeenagersStatus(){};
	TeenagersStatus(const ChildrenStatus& cs) = delete;	//	禁止拷贝构造
	const TeenagersStatus&operator=(const TeenagersStatus& cs) = delete;	// 禁止赋值运算符‘=’ 语法类似 cs2=cs |cs2.operator=(cs){cs.delete}
};