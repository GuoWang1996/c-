// day3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//拷贝构造函数调用时机

#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	std::string name;
	int age;
public:
	Person() {
		name = "no name";
		cout << "default constructor" << endl;
	}
	Person(const char * c,int age) {
		cout << "constructor" << endl;
		name = c;
		this->age = age;
		
	}
	/*Person(Person &p) {
		cout << "copy constructor" << endl;
		this->age = p.age;
	}*/
		~Person()
		{
			cout << "Bye,Person" << name << endl;
		}
};
void dowork(Person p) {
	//cout << "Bye,Person" << name << endl;
}
Person doWork2() {
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
//1.使用一个初始化完毕的对象来初始化新对象；
void test() {
	Person p1("fw",24);
	Person p2(p1);
	
}
//2.使用值传递方式给函数传参 隐式调用拷贝函数
void test02() {
	Person p;
	dowork(p);
}
//3.值方式返回局部对象

void test03() {
	Person p2 = doWork2();
	cout << (int*)&p2 << endl;
	//Person p1("fw", 24);
	//cout << (int*)&p1 << endl;
	//Person p2=p1 ;
	//cout << (int*)&p2 << endl;
}
int main()
{
	test();
}

