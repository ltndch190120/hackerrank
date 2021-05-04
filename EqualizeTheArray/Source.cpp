#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

int c[1000];

int main()
{
	int arr[1000];
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		c[arr[i]]++;
    }

	vector <int> a;
	vector <int>b;

	for (int i = 0; i < 1000; ++i)
	{
		int sum = 0;
		if (c[i] > 0)
		{
			a.push_back(c[i]);
		}
	
	}
	int max = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}

	cout << (n-max);
	system("pause");
	
}