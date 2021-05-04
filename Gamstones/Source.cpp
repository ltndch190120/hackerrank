#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
	int n;
	cin >> n;
	vector<string> arr(n);
	int temp[26] = { 0 };
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		for (int j = 0; j < arr[i].size(); ++j)
		{
			char k = arr[i][j];
			if (temp[k - 'a'] == i)
			{
				temp[k - 'a']++;
				if (temp[k - 'a'] == n)
				{
					count++;
				}
			}
		}
	}
	cout << count;
	system("pause");
}

