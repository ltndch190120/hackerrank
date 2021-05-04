#include <iostream>
#include <stdlib.h>
#define MAX 1000000

using namespace std;

int a[100];

int main()
{

	int n;
	cin >> n;
	
	int i = 0;
	while (i < n)
	{
		int x;
		cin >> x;
		a[x]++;
		++i;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	system("pause");
	return 0;
}