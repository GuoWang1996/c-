// day10.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<fstream>
#include<string>
using namespace std;

void test01()
{
	//写文件
	ofstream file;	//创建文本形式文件流
	file.open("test.txt", ios::out);	//指定打开方式
	file << "姓名：占山" << endl;
	file << "年龄:18" << endl;
	file.close();
}
void test02()
{
	ifstream file;
	file.open("test.txt", ios::in);
	if (!file.is_open())
	{
		cout << "文件打开失败";
		return;
	}
	//第一种读方式
	//char buf[80] = {0};
	//while (file.getline(buf,80-1))
	//{
	//	cout << buf << endl;
	//}
	//第二种读方式
	/*string str;
	while (getline(file,str))
	{
		cout << str << endl;
	}*/
	//第三种
	char c;
	while (((c=file.get())!=EOF))
	{
		cout << c;
	}
	file.close();
}
int main()
{
	//test01();
	test02();
}
