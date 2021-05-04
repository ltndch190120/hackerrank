#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;



int main()
{
	string s;
	getline(cin, s);
	int temp = 1;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] <= 97)
		{
			++temp;
		}
	}
	cout << temp;
	system("pause");
}
