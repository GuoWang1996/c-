// day9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<stack>
#include<map>
#include<string>
using namespace std;
int main()
{
	//栈容器
	stack<int> a;
	a.push(134);
	a.push(43);
	cout << a.top()<<endl;
	
	//map容器
	map<int,string> m1;	//创建map
	m1.insert(pair<int,string>(1,"123"));
	m1.insert(pair<int, string>(21, "sb"));
	string s = m1[21];	//根据键获取值
	cout<<"map:"<<s;
}


