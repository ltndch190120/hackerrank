#include <iostream>

#include <stdlib.h>
#include <vector>


using namespace std;


void nhap(vector<int > &a);

int getTotalX(vector<int> a, vector<int> b);

int main()
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	vector <int> a;
	a.resize(n);
	vector <int> b;
	b.resize(m);

	nhap(a); cout << endl;
	nhap(b);

	int c = getTotalX(a, b);
	cout << c;
	system("pause");
}

void nhap(vector<int > &a)
{
	for (int i = 0; i < a.size(); ++i)
	{
		cin >> a[i];
	}
}

int getTotalX(vector<int> a, vector<int> b) {
	int k = a.size() - 1;
	vector <int> c;
	int min = b[0];
	int max1 = a[0];
	for (int i = 0; i < b.size(); ++i)
	{
		if (b[i] < min)
		{
			min = b[i];
		}
	}
	for (int j = 0; j < a.size(); j++)
	{
		if (a[j] > max1)
		{
			max1 = a[j];
		}
	}

	for (int i = max1; i <= min; ++i)
	{
		int f = 0; 
		for (int j = 0; j < a.size(); ++j)
		{
			if (i % a[j] == 0)
			{
				f = i;
			}
			else
			{
				f = 0; break;
			}
			
		}
		if (f != 0)
		{
			c.push_back(f);
		}
	}
	
	int temp = 0;
	for (int i = 0; i < c.size(); ++i)
	{
		int temp1 = 0;
		for (int j = 0; j < b.size(); ++j)
		{
			if ( b[j] % c[i] != 0)
			{
				break;
			}
			else
			{
				++temp1;
			}
			if (temp1 == b.size())
			{
				++temp;
			}
		}
	}

	return temp;
}