#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

string dayOfProgrammer(int year);

int main()
{
	string c;
	int year;
	cin >> year;
	c = dayOfProgrammer(year);

	system("pause");
}

string dayOfProgrammer(int year) {
	int month = 28;
	string c;
	if (year % 4 == 0 || year % 400 == 0 && year % 100 != 0)
	{
		month = 29;
	}
	char mont = (char) month;
	cout << mont;
	int sum = 0;
	sum = month + 31 + 31 + 30 + 31 + 30 + 31 + 31;
	int day = 256 - sum;
	
	cout << day << ".9." << year<<endl;

	return c;
}