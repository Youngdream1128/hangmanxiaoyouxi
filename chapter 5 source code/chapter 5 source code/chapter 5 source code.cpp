// chapter 5 source code.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
#include <ctime>


/*int main()
{
	using namespace std;
	int i;
	  for (i = 0; i < 5; i++)
		cout << "C++ know loops.\n";
	cout << "C++ know when to stop.\n";
	cin.get();
    return 0;
}*/

/*const int ArSize = 16;
int main()
{
	long long factorials[ArSize];
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;
	std::cin.get();
	return 0;
}*/

/*int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	getline(cin, word);
	// display letters in reverse order
	for (int i = 0 ; i < word.size(); i++)
		cout << word[i];
	cout << "\nBye.\n";
	cin.get();
	cin.get();
	return 0;
} */

/*int main()
{
	using namespace std;
	cout << "The Amazing Accounto will sum and average ";
	cout << "five numbers for you.\n";
	cout << "Please enter five values:\n";
	double number;
	double sum = 0.0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << ".\n";
	cout << "The Amazing Accounto bids  you adieu!\n";
	cin.get();
	cin.get();
	return 0;
} */

/*int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;
	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";
	cin.get();
	cin.get();
	return 0;
} */

/*(int main()
{
	using namespace std;
	int quizscores[10] = { 20, 20, 20, 20,20, 19,20, 20, 20 };
	cout << "Doing it right: \n";
	int i;
	for (i = 0; quizscores[i] == 20; i++)
		cout << "quiz " << i << " is a 20\n";
	cout << "Doing it dangerously wrong:\n";
	//for (i = 0; quizscores[i] = 20; i++)
		//cout << "quiz " << i << " is a 20\n";
	cin.get();
	return 0;
}*/

/*int main()
{
	using namespace std;
	char word[5] = "?ate";
	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	cin.get();
	return 0;
} */

/*int main()
{
	const int ArSize = 20;
	using namespace std;
	char name[ArSize];
	cout << "Your first name, please: ";
	cin >> name;
	cout << "Here is your name, verticalized and ASCIIized:\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}
	cin.get();
	cin.get();
	return 0;
}  */

/*int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC;   // conver to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";
	return 0;
} */

/*int main()
{
	using namespace std;
	int n;
	cout << "Enter numbers in teh range 1 - 10 to find ";
	cout << "my favorite number" << endl;
	do
	{
		cin >> n;
	} while (n != 7);
	cout << "Yes. 7 is my favorite number." << endl;
	cin.get();
	cin.get();
	return 0;
} */

/*int main()
{
	using namespace std;
	char ch;
	int count = 0;					 // use basic input
	cout << "ENter characters; enter # to quit: " << endl;
	cin >> ch;						// get a character
	while (ch != '#')				// test the character
	{
		cout << ch;					// echo the character
		++count;					// count the character
		cin >> ch;					// get the next character

	}
	cout << endl << count << " characters read" << endl;
	cin.get();
	cin.get();
	return 0;
} */

/* int main()
{
	using namespace std;
	char ch;
	int count = 0;					 
	//cout << "ENter characters; enter # to quit: " << endl;
	cin.get(ch);				// use tje cin.get(ch) function
	//while (ch != '#')	
	//while (cin.fail() == false) // test for EOF
	while (cin)
	{
		cout << ch;					
		++count;					
		cin.get(ch);					

	}
	cout << endl << count << " characters read" << endl;
	float secs = 10;
	clock_t delay = secs * CLOCKS_PER_SEC;   // conver to clock ticks
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cin.get();
	return 0;
}  */

int main()
{
	const int Cities = 5;
	const int Years = 4;
	using namespace std;
	const char * cities[Cities] =  //指针数组
	{
		"Gribble City",
		"Gribbletown",
		"New Griblle",
		"San Gribble",
		"Gribble Vista"
	};
	int maxtemps[Years][Cities] =  // 二维数组	
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91, 107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108},

	};
	cout << "Maximum temperatures for 2008 - 2001\n\n";
	for (int city = 0; city < Cities; ++city)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Years; ++year)
			cout << maxtemps[year][city] << "\t";
		cout << endl;
	}
	cin.get();
	return 0;
}
