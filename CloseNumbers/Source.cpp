#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>


using namespace std;

vector<int> closestNumbers(vector<int> arr) {
	vector <int> result(0);
	sort(arr.begin(), arr.end());
	int min = INT_MAX;
	for (int i = 0; i < arr.size() - 1; ++i)
	{
		if (arr[i + 1] - arr[i] < min)
		{
			min = arr[i + 1] - arr[i];
		}
	}

	for (int i = 0; i < arr.size() - 1; ++i)
	{
		if (arr[i + 1] - arr[i] == min)
		{
			result.push_back(arr[i]);
			result.push_back(arr[i + 1]);
		}
	}
	return result;
}

int main()
{
	vector<int> a(4);
	for (int i = 0; i < 4; ++i)
	{
		cin >> a[i];
	}
	vector<int> result = closestNumbers(a);

	for (auto i : result)
	{
		cout << i << "  ";
	}

	system("pause");
}