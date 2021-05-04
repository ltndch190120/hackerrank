#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

vector<int> quickSort(vector<int> a);

int main()
{
	int n;
	cin >> n;
	cout << endl;
	vector <int> a;
	a.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	vector <int> value = quickSort(a);

	for (int i = 0; i < value.size(); ++i)
	{
		cout << value[i] << " ";
	}


	system("pause");
}

vector<int> quickSort(vector<int> a)
{
	vector <int> b;
	vector <int> c;
	vector <int> d;
	int value = a[0];
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] < value)
		{
			b.push_back(a[i]);
		}
		if (a[i] > value)
		{
			c.push_back(a[i]);
		}
	}
	for (int i = 0; i < b.size(); ++i)
	{
		d.push_back(b[i]);
	}
	d.push_back(value);
	for (int i = 0; i < c.size(); ++i)
	{
		d.push_back(c[i]);
	}
	return d;
}