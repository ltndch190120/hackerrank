#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <set>

using namespace std;

void bigSorting(vector<string> unsorted);

int main()
{
	int n;
	cin >> n;
	vector<string> s(n);

	for (int i = 0; i < n; ++i)
	{
		rewind(stdin);
		getline(cin, s[i]);
	}

	bigSorting(s);

	system("pause");
}

void bigSorting(vector<string> unsorted) 
{

	for (int i = 0; i <= unsorted.size() - 2; ++i)
	{
		for (int j = i + 1; j <= unsorted.size() - 1; ++j)
		{
			if (unsorted[i].length() > unsorted[j].length())
			{
				swap(unsorted[i], unsorted[j]);
			}
			else if (unsorted[i].length() == unsorted[j].length())
			{
				for (int k = 0; k < unsorted[i].length(); ++k)
				{
					if (unsorted[i][k] > unsorted[j][k])
					{
						swap(unsorted[i], unsorted[j]);
						break;
					}
					else if (unsorted[i][k] < unsorted[j][k])
					{
						break;
					}
				}

			}
		}
	}
	
	for (int i = 0; i < unsorted.size(); ++i)
	{
		cout << unsorted[i] << endl;
	}
}