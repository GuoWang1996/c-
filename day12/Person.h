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

//�������״̬
class BasicStatus
{
public:
	virtual void addAge(int age, Person*p) {};
public:

	BasicStatus() {};
	virtual ~BasicStatus() {};

private:

};

//�׶�״̬   -����ģʽ��������˽�л�
class ChildrenStatus:public BasicStatus
{
public:
	static ChildrenStatus* getIntance();
	void addAge(int age, Person*p);
public:
	    ~ChildrenStatus(){};
private:
	ChildrenStatus() {};
	ChildrenStatus(const ChildrenStatus& cs) = delete;	//	��ֹ��������
    const ChildrenStatus&operator=(const ChildrenStatus& cs) = delete;	// ��ֹ��ֵ�������=�� �﷨���� cs2=cs |cs2.operator=(cs){cs.delete}
};


//�׶�״̬   -����ģʽ��������˽�л�
class TeenagersStatus :public BasicStatus
{
public:
	static TeenagersStatus* getIntance();
	void addAge(int age, Person*p);
public:
	~TeenagersStatus() {};
private:
	TeenagersStatus(){};
	TeenagersStatus(const ChildrenStatus& cs) = delete;	//	��ֹ��������
	const TeenagersStatus&operator=(const TeenagersStatus& cs) = delete;	// ��ֹ��ֵ�������=�� �﷨���� cs2=cs |cs2.operator=(cs){cs.delete}
};