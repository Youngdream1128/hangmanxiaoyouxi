// vonvert.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
double uk(double);
int main()
{
	using namespace std;
	cout << "What's your weight?" << endl;
	double x;
	cin >> x;
	cout << "pounds" << endl;
	double y;
	y = uk(x);
	cout << "It is " << y << " stone." << endl;
	cin.get();
	cin.get();
    return 0;
}

double uk(double n)
{
	using namespace std;
	n = 12 * n;
	return n;
}