#pragma once
#include "windows.h"
#include "stdio.h"
#include <iostream>
using namespace std;
class ����״̬����;
class Player
{
public:
	Player();
	~Player() {};
public:
	int getAge();
	void setAge(int age);
	����״̬���� *�õ���ǰ״̬();
	void ���õ�ǰ״̬(����״̬���� * ״̬);
private:
	int age;
	����״̬����* ���ﵱǰ״̬;
};

class ����״̬���� 
{
public:
	����״̬����() {};
	virtual ~����״̬����() {};
public:
	virtual void ��������(int age, Player *p) {};
};


class �׶�״̬:public ����״̬����
{
public:
	~�׶�״̬() {};
	static �׶�״̬* getIntance();
	void ��������(int age, Player *p) ;
private:
	�׶�״̬() {};
	�׶�״̬(const �׶�״̬ & ״̬)=delete;
	const �׶�״̬&operator=(const �׶�״̬ & ״̬)  = delete;
};
