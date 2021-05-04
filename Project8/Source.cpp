#include <iostream>
#include <stdlib.h>
#include <vector>



using namespace std;

int birthday(vector<int> s, int d, int m);

int main()
{
	int d;
	int m;
	int n;
	vector<int> s;
	cin >> n;
	s.resize(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	cout << "\n";
	cin >> d;
	cin >> m;
	cout << "\n\t\t xuat\n";
	int temp = birthday(s, d, m);
	cout << temp;
	system("pause");
}


int birthday(vector<int> s, int d, int m) {

	int n = s.size(); int temp = 0;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		if (m <= n)
		{
			for (int j = i; j < m; ++j)
			{
				sum += s[j];
				
			}
			if (sum == d)
			{
				++temp;
			}
		}
		++m;
	}
	return temp;

}