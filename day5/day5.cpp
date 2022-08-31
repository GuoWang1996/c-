// day5.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Person
{
	static int num;
private:
	int hour;
public:
	void add(int a,int b)
	{
		int c = a + b;
	}
	static void test2()
	{
		num++;
		cout << "静态成员函数---"<<num<<endl;
	}
	Person operator+(const Person& p)
	{
		Person p1;
		p1.hour = hour - p.hour;
		return p1;
	}
	Person()
	{
	}
	Person(int hour) {
		this->hour = hour;
	}
	int getHour() 
	{
		return this->hour;
	}
	
};
int Person::num = 0;

void test01() 
{
	Person p1(30);
	p1.add(1,3);
	Person p2(40);
	Person p3(40);
	Person p4 = p1 + p2+ p3;
	std::cout << p4.getHour() << endl;

}
Person p(30);
Person *p_point = &p;
int main()
{
	p_point->add(1,3);
	p_point->test2();
	Person::test2();
	system("pause");
    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
