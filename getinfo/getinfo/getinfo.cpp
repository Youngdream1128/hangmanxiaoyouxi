// getinfo.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an integar: " << endl;
	int count;
	cin >> count;
	simon(count);
	cout << "Done!" << endl;
	cin.get();
	cin.get();
    return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}

