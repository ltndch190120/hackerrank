#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

void miniMaxSum(vector<int> arr);

int main()
{

	vector <int> arr;
	arr.resize(5);
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i]; cout << " ";
	}
	miniMaxSum(arr);
	system("pause");
}


void miniMaxSum(vector<int> arr) {
	vector<long long> a;
	for (int i = 0; i < arr.size(); ++i)
	{
		long long sum = 0;
		for (int j = 0; j < arr.size(); ++j)
		{
			if (j != i)
			{
				sum += arr[j];

			}
		}
		a.push_back(sum);
	}
	long long max = a[0]; long long min = a[0];
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		else if(min>a[i])
		{
			min = a[i];
		}
	}
	cout << min << " " << max;

}
