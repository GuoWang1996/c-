#pragma once
#include <iostream>
#include "windows.h"
#include "stdio.h"
#include "Person.h"
using namespace std;
int  main() {
	Person p;
	BasicStatus* bs = p.getStatus();
	for (int i = 0; i < 20; i++)
	{
		bs->addAge(1, &p);
		Sleep(1000);
	}

}