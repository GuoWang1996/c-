#include <iostream>
#include "windows.h"
using namespace std;
class Person
{
public:
	int age;
	Person(int age) {
		this->age = age;
	}
	Person ageAdd(Person &p) {
		this->age += p.age;
		return *this;
	}


};


void test() {
	Person p1(14);
	Person p2(18);
	p2.ageAdd(p1).ageAdd(p1);
	cout <<p2.age << endl;
}

int main() {
	test();

	system("pause");
}