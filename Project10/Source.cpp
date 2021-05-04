#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;

int migratoryBirds(vector<int> arr);


int main()
{
	vector <int> arr;
	int n;
	cin >> n;
	arr.resize(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int temp = migratoryBirds(arr);
	cout << endl << temp;
	system("pause");
}

int migratoryBirds(vector<int> arr) {
	
	vector<int> c = {1,2,3,4,5};
	int temp1 = 0;
	vector <int> b;
	for (int i = 0; i < c.size(); ++i)
	{
		int k = 0; int temp = 1;
		for (int j = 0; j < arr.size(); ++j)
		{
			if (c[i] == arr[j])
			{
				++k;
				if (k >= 2)
				{
					++temp;
				}
			}
			
		}
		b.push_back(temp);
	}
	int max = b[0]; int p = 0; int o = 0;
	for (int i = 0; i < b.size(); ++i)
	{
		if (b[i] > max)
		{
			max = b[i];
			o = i;
		}
	}
	vector <int> a;
	a.push_back(o);
	int n = 0;
	for (int i = 0; i < b.size(); ++i)
	{
		if (max == b[i])
		{
			++p;
			n = i;
			if (p >= 2)
			{
				a.push_back(i);
			}
		}
	
	}
	int min = arr[a[0]];
	if (p >= 2)
	{
	
		for (int i = 0; i < a.size(); ++i)
		{
			if (arr[a[i]] < min)
				min = arr[a[i]];
		}
	}
	else
	{
		min = arr[n];
	}
	return min;


}


