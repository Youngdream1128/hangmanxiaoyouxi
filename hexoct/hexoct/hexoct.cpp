// hexoct.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;
	auks = 19.99 + 11.99;
	bats = (int) 19.99 + (int) 11.99;
	coots = int(19.99) + int(11.99);
	cout << "auks = " << auks << ", bats = " << bats
		<< ", coots = " << coots << endl;
	char ch = 'z';
	cout << "The code for " << ch << "is"
		<< int(ch) << endl << "Yes, the code is " << static_cast<int>(ch) << endl;
	cin.get();
	cin.get();
    return 0;
}

