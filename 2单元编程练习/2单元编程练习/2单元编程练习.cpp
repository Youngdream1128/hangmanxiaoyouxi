// 2单元编程练习.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
/* 1.
#include <iostream>
using namespace std;
int main()
{
	cout << " James live in Shenzhen" << endl;
	cin.get();
	return 0;
} */

/* 2.
#include <iostream>
using namespace std;

int main()
{
	cout << "Please enter " << endl;
	int n;
	cin >> n;
	cout << "This is " << 220 * n << "mile" << endl;
	cin.get();
	cin.get();
	return 0;
} */

/* 3
#include <iostream>
using namespace std;
void young();
void dream();

int main()
{
	young();
	dream();
	cin.get();
	return 0;
}
void young( )
{
	cout << "Three blind mice"
		<< endl
		<< "Three blind mice"
		<< endl;
 }
void dream()
{
	cout << "See how they run"
		<< endl
		<< "See how they run"
		<< endl;
} */

/* 4
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter your age : " << endl;
	int n;
	cin >> n;
	cout << "Your age include " << 12 * n << " monthes." << endl;
	cin.get();
	cin.get();
	return 0;
} */


/* 5
#include <iostream>
using namespace std;
double degrees(double);

int main()
{
	cout << "Please enter a Celsius valus : ";
	double n;
	cin >> n;
	cout << n
		<< " degrees Celius is "
		<< degrees(n)
		<< " degrees Fahrenheit"
		<< endl;
	cin.get();
	cin.get();
	return 0;
}
double degrees(double x)
{
	return 3.4 * x;
 } */

#include <iostream>
using namespace std;
void times(int x, int y);

int main()
{
	
	cout << "Enter the number of hours :";
	int x;
	cin >> x;
	cout << "Enter the number of mintes :";
	int y;
	cin >> y;
	times(x, y);
	cin.get();
	cin.get();
	return 0;
}

void times(int x, int y)
{
	cout << "Time :"
		<< x
		<< ":"
		<< y;
}

