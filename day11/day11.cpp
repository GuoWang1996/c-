// day11.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;
class Person
{
public:
    unsigned long long age;
	char name[64];
	Person();
	~Person();

	
};

Person::Person()
{
}

Person::~Person()
{
}

void test01()
{
	ofstream file;
	file.open("Person.txt", ios::out | ios::binary);
	Person p;
	p.age = LLONG_MAX;
	cout << p.age << endl;
	strcpy_s(p.name, sizeof(p.name)/sizeof(char), "张三");
	//file << "姓名：占山" << endl;	//为什么这样写不会以二进制形式写入
	file.write((char *)&p, sizeof(Person));
	file.close();
}
void test02()
{
	ifstream file;
	file.open("Person.txt", ios::in | ios::binary);
	Person p;
	file.read((char *)&p,sizeof p);
	cout <<  " 年龄：" << p.age;
}
int main()
{
	test02();
}
