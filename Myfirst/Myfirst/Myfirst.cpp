// Myfirst.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream.h"

int main()
{
	using namespace;
	int young;
	cout << "how may young do you have?" << endl;
	cin >> young;
	cout << "Here are two more";
	young = young + 2;
	cout << "Now you have" << young << "young" << endl;
	return 0;
}

