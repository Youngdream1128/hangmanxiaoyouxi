 // 第三章编程练习.cpp: 定义控制台应用程序的入口点。
//
/* 3.1
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int inch = 12;
	cout << "Enter your height in 英寸." << endl;
	int x;
	cin >> x;
	cout << "Your height is " << x / inch << " 英尺 "
		<< x % inch << "英寸.";
	cin.get();
	cin.get();
    return 0;
} */

/* 3.2
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int inch = 12;
	const double meter = 0.0254; 
	const float pou = 2.2;
	cout << "Enter your heigh and weight:";
	int x, y; 
	float z;
	cin >> x >> y >> z;
	cout << "Your height is " << x << "英尺 " << y << "英寸. "
		<< z << "磅." << endl;
	cout << "Your height is " << (x * inch + y) * meter << "米 " << z / pou << "Kg. " << endl;
	double a = (x * inch + y) * meter;
	double b = z / 2.2;
	cout << "Your BMI is " << b / (a * a) << endl;
	cin.get();
	cin.get();
	return 0;

	
} */


/* 3.3
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int du = 60;
	const int fen = 60;
	cout << "Enter a latitude in degrees, mintures, and seconds:\n"
		<< "First, enter the degrees: ";
	double a;
	cin >> a;
	cout << "Next, enter the minutes of arc: ";
	double b;
	cin >> b;
	cout << "Finally, enter the seconds of arc:";
	double c;
	cin >> c;
	cout << a << " degrees, " << b << " minutes, "
		<< c << " seconds = " <<  a + b / du + c / fen / du  << " degrees.";
	cin.get();
	cin.get();
	return 0;
}
*/

/* 3.4
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int day = 86400;
	const int hour = 3600;
	const int minute = 60;
	cout << "Enter the number of seconds: ";
	long long a;
	cin >> a;
	cout << a << " seconds = " << a / day << " days, " << a % day / hour
		<< " hours, " << a % day % hour / minute << " mintes, " << a % day % hour % minute << " seconds.\n";
	cin.get();
	cin.get();
	return 0;
} */

/* 3.6
#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter the world's population: ";
	long long w;
	cin >> w;
	cout << "Enter the population of the US: ";
	long long u;
	cin >> u;

	cout << "The population of the US is " << double(u) / double (w) * 100 << "% of the world population." << endl;
	cin.get();
	cin.get();
	return 0;
}  */

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const  double km = 0.6214;
	const double gal = 3.875;
	cout << "Enter your mile and gas" << endl;
	double a, b;
	cin >> a >> b;
	cout << "The EU is " << b / a * 100 << "L/100KM" << endl;
	cout << "The US is " << (a * km) / (b / gal) << "mpg" << endl;
	cin.get();
	cin.get();
	return 0;

} 