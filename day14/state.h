#pragma once
#include "windows.h"
#include "stdio.h"
#include <iostream>
using namespace std;
class 人物状态基类;
class Player
{
public:
	Player();
	~Player() {};
public:
	int getAge();
	void setAge(int age);
	人物状态基类 *得到当前状态();
	void 设置当前状态(人物状态基类 * 状态);
private:
	int age;
	人物状态基类* 人物当前状态;
};

class 人物状态基类 
{
public:
	人物状态基类() {};
	virtual ~人物状态基类() {};
public:
	virtual void 增加年龄(int age, Player *p) {};
};


class 幼儿状态:public 人物状态基类
{
public:
	~幼儿状态() {};
	static 幼儿状态* getIntance();
	void 增加年龄(int age, Player *p) ;
private:
	幼儿状态() {};
	幼儿状态(const 幼儿状态 & 状态)=delete;
	const 幼儿状态&operator=(const 幼儿状态 & 状态)  = delete;
};
