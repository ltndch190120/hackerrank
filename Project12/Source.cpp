#include <iostream>

#include <vector>
#include <stdlib.h>

using namespace std;

bool identicalCheck(vector <int> c, int x);
int sockMerchant(int n, vector<int> ar);

int main()
{
	int n;
	cin >> n;
	vector<int> ar;
	ar.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}

	int temp = sockMerchant(n, ar);
	cout << temp;
	system("pause");
}


int sockMerchant(int n, vector<int> ar) {

	vector<int> c;
	c.push_back(ar[0]);
	for (int i = 0; i < n; ++i)
	{
		if (identicalCheck(c, ar[i]) == true)
		{
			c.push_back(ar[i]);
		}
	}
	int temp = 0;
	vector <int> b;
	for (int i = 0; i < c.size(); ++i)
	{
		int k = 0; int p = 1;
		for (int j = 0; j < ar.size(); ++j)
		{
			if (ar[j] == c[i])
			{
				++k;
				if (k >= 2)
				{
					++p;
				}
			}
		}
		b.push_back(p);
	}
	int sum = 0;
	for (int i = 0; i < b.size(); ++i)
	{
		if (b[i] >= 2)
		{
			if (b[i] % 2 == 0)
			{
				sum = b[i] / 2;
				temp += sum;
			}
			else if (b[i] % 2 != 0)
			{
				sum = b[i] / 2;
				temp += sum;
			}
		}
	}


	return temp;

}


bool identicalCheck(vector <int> c, int x)
{
	for (int i = 0; i < c.size(); ++i)
	{
		if (c[i] == x)
		{
			return false;
		}
	}
	return true;

}
