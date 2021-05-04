#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

void sort(vector<int> &a)
{
	for (int i = 0; i <= a.size() - 2; ++i)
	{
		for (int j = i + 1; j <= a.size() - 1; ++j)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}


long marcsCakewalk(vector<int> calorie) {
	long result = 0;

	sort(calorie);
	for (int i = 0; i < calorie.size(); ++i)
	{
		result = (pow(2, i)*calorie[i]) + result;
	}
	return result;
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	long temp = marcsCakewalk(a);
	cout << temp;

	system("pause");
}