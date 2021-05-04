#include <iostream>
#include <vector>
using namespace std;



/*
 * Complete the getMoneySpent function below.
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {

	vector <long long> c;
	long long sum;
	for (int i = 0; i < keyboards.size(); ++i)
	{

		for (int j = 0; j < drives.size(); ++j)
		{
			sum = keyboards[i] + drives[j];
			c.push_back(sum);
		}
	}
	long long max = 0; int k = 0;
	for (int i = 0; i < c.size(); ++i)
	{
		if (c[i] > max && c[i] <= b)
		{
			max = c[i];
			k = 1;
		}
		
	}
	if (k == 0)
	{
		max = -1;
	}
	return max;
}

int main()
{
	int d;
	int n;
	int m;
	cin >> d;
	cin >> n;
	cin >> m;
	vector<int> a; a.resize(n);
	vector<int> b; b.resize(m);
	for (int i = 0; i < a.size(); ++i)
	{
		cin >> a[i];
	}
	for (int j = 0; j < b.size(); ++j)
	{
		cin >> b[j];
	}
	int temp = getMoneySpent(a, b, d);
	cout << temp;

	system("pause");
	return 0;
}