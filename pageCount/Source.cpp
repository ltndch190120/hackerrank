#include <iostream>
#include <vector>
#include<stdlib.h>

using namespace std;
int pageCount(int n, int p);


int main()
{
	int n;
	int p;
	cin >> n;
	cin >> p;
	int temp = pageCount(n, p);
	cout << temp;
	system("pause");
}


int pageCount(int n, int p) {
	vector<int> a;
	for (int i = 1; i <= n; ++i)
	{
		
		a.push_back(i);
	}
	int temp = 0;
	for (int i = 1; i < a.size(); i = i + 2)
	{
		if (a[i] == p || a[i + 1] == p)
		{
			break;
		}
		temp++;
	}
	return temp;
}