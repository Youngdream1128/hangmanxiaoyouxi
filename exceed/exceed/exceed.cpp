// exceed.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#define ZERO 0
#include <climits>

int main()
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars deposited." << endl
	    << "Add $1 to each account." << endl << "Now";
	sam++;
	sue++;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars deposited." << endl;
	cout << "Take $1 from each account. " << endl << "Now ";
	sam--;
	sue--;
	cout << "Sam has " << sam << " dollars and Sue has " << sue
		<< " dollars deposited." << endl << "Lucky Sue!" << endl;
	cin.get();
    return 0;
}

