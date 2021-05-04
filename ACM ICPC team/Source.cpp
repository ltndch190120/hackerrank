#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
	int n;
	int m;
	cin >> n >> m;
	vector<string> bit(n);
	for (int i = 0; i < n;++i)
	{
		cin >> bit[i];
	}
	int count = 0;
	int max = 0;
	vector <int> cover(0);
	for (int i = 0; i < bit.size()-1; ++i)
	{
		for (int j = i+1; j < bit.size(); ++j)
		{
			count = 0;
			for (int k = 0; k < bit[i].length(); ++k)
			{
				
				if (bit[i][k] > bit[j][k] || bit[i][k] <bit[j][k])
				{
					++count;
				}
				else if (bit[i][k] == bit[j][k] && bit[i][k] != '0')
				{
					++count;
				}
			}
			cover.push_back(count);
			if (max < count)
			{
				max = count;
			}
		}
	}
	int dem = 0;
	for (int i = 0; i < cover.size(); ++i)
	{
		if (max == cover[i])
		{
			++dem;
		}
	}
	cout << max << endl << dem;

	system("pause");
}

