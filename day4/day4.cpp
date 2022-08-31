// day4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//深拷贝和浅拷贝

#include <iostream>
#include <string>
using namespace std;
class Person {

	
public:
	string name;
	int age;
	int * m_height;
	Person() {
		name = "no name";
		cout << "默认构造" << endl;
	}
	Person(const char * c, int age,int height) {
		cout << "constructor" << endl;
		name = c;
		this->age = age;
		m_height = new int(height);
	}
	Person(Person &p) {
		cout << "拷贝构造" <<endl;
		this->age = p.age;
		//m_height = p.m_height; //默认浅拷贝
		m_height = new int(*p.m_height);
	}
	~Person()
	{
		if (m_height!=NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "Bye," <<name<<"!\n" ;
	}
};
void test01(){
	Person p1("郭旺",18,178);
	cout <<* p1.m_height << endl;
	Person p2 = p1;
	cout << *p2.m_height << endl;
}
int main()
{
	test01();
}


