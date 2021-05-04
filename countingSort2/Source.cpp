#include <iostream>
#include <stdlib.h>

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
	
	for (int k = 0; k < 100; ++k)
	{
		for (int j = 0; j < a[k]; ++j)
		{
	
			
				cout << k<<" ";
			
		}
	}

	system("pause");
}