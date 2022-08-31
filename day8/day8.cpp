// day8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print3(int num) {
	cout << num << endl;
}
int main()
{
	vector<int> a;//创建vector int类型容器
	a.push_back(1);//添加到容器末尾的元素的值
	a.pop_back();//	删除容器末尾的元素。
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(55);
	a.push_back(61);
	
	vector<int>::iterator m_begain = a.begin();	//迭代器开始
	vector<int>::iterator m_end = a.end();
	//a.earse；
	//第一种遍历方式
	//while (m_begain != m_end)
	//{
	//	cout<<*m_begain <<endl;
	//	*m_begain++;
	//}
	//第二种遍历方式
	for (;m_begain != a.end();)
	{
		cout << *m_begain << endl;
		if (*m_begain==5)
		{
			m_begain=a.erase(m_begain);
		}
		else {
			m_begain++;
		}
		
	}
	//第三种遍历方式 stl提供的遍历算法
	
	//for_each(a.begin(), a.end(), print3);
    std::cout << "Hello World!\n";
}
