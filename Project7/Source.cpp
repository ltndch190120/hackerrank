#include <iostream>
#include <stdlib.h>
#include <vector>



using namespace std;

vector<int> breakingRecords(vector<int> scores);

int main()
{
	vector<int > a;
	int n;
	cin >> n;
	a.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector <int> temp = breakingRecords(a);

	for (int i = 0; i < temp.size(); ++i)
	{
		cout << temp[i] << " ";
	}


	system("pause");
}

vector<int> breakingRecords(vector<int> scores)
{
	vector <int> a;
	vector <int> b;
	int max = scores[0];
	int min = scores[0];
	a.push_back(max);
	b.push_back(min);
	for (int i = 1; i < scores.size(); ++i)
	{
		if (scores[i] < scores[i - 1] && max > scores [i])
		{
			a.push_back(max);
			min = scores[i];
			b.push_back(min);
		}
		else if (scores[i] > scores[i - 1] && max < scores[i])
		{
			max = scores[i];
			a.push_back(max);
			b.push_back(min);
		}
		else
		{
			a.push_back(max);
			b.push_back(min);
		}
	}
	int f = a[0]; int temp1 = 0; int temp2 = 0;
	for (int i = 1; i < a.size(); ++i)
	{
		if (a[i] > f)
		{
			f = a[i];
			++temp1;
		}
	}
	vector <int> c; c.push_back(temp1);
	int k = b[0]; 
	for (int i = 0; i < b.size(); ++i)
	{
		if (b[i] < k)
		{
			k = b[i];
			++temp2;
		}
	}
	c.push_back(temp2);
	return c;
}