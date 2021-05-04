#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;


vector<int> cutTheSticks(vector<int> arr);


int main()
{
	int n;
	cin >> n;
	vector <int> arr;
	arr.resize(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector <int> k = cutTheSticks(arr);

	for (int i = 0; i < k.size(); ++i)
	{
		cout << k[i];
	}

	system("pause");
}

vector<int> cutTheSticks(vector<int> arr) {
	int n = arr.size();
	vector<int> b;
	b.push_back(n);
	while(true)
	{
		int min = 99999;
		for (int j = 0; j < n; j++)
		{
			if (arr[j] < min && arr[j] != 0)
			{
				min = arr[j];
			}
		}
		for (int k = 0; k < n; ++k)
		{
			if (arr[k] != 0)
			{
				arr[k] = arr[k] - min;
			}
		}
		int temp1 = 0;
		for (int f = 0; f < n; ++f)
		{
			if (arr[f] > 0)
			{
				++temp1;
			
			}
		}
		if (temp1 != 0)
		{
			b.push_back(temp1);
		}
		int temp = 0;
		for (int v = 0; v < arr.size(); ++v)
		{
			if (arr[v] == 0)
			{
				++temp;
			}
		}
		if (temp == arr.size())
		{
			break;
		}
	
	}
	return b;

}