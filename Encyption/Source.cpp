#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

using namespace std;


int main()
{
	string s;
	getline(cin, s);

	int row = sqrt(s.length());
	int column ;
	if (row >= sqrt(s.length())) column = row;
	else column = row + 1;

	for (int i = 0; i < column; ++i)
	{
		for (int j = i; j < s.length(); j+=column)
		{
			cout << s[j];
		}
		cout << " ";
	}


	system("pause");
}