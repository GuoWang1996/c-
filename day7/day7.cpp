// day7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	//string a(30,'$');
	string a = "hello";
	a.reserve(15);
	a = a + "123";
	cout << a << endl;
	cout << a.npos;
	//cout << a.capacity() << endl;
	//a.reserve(40);
	//cout << a.capacity() << endl;

	//cout << a.capacity() << endl;
	system("pause");
}

