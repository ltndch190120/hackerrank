#include<iostream>
#include <set>
using namespace std;

int main()
{
	int n, m, tmp;
	cin >> n >> m;
	set<int> s;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		s.insert(tmp);
	}
	std :: set<int>::iterator it = s.begin(), prev;
	int max = 2 * (*it) - 0;
	for (prev = it++; it != s.end(); prev = it++)
		if (*it - *prev > max)
			max = *it - *prev;

	if (2 * ((n - 1) - *prev) > max)
		max = 2 * ((n - 1) - *prev);

	cout << max / 2;
	system("pause");
}