#include <iostream>
#include <algorithm>
#include <math.h>
#include <limits>
#include <stdlib.h>
#include <string>


using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int A = 0, c;
	int i = a;
	while (i <= b)
	{
		int j = a++;
		while (j <= b)
		{
			c = i ^ j;
			A = max(A, c);
			j++;
		}
		i++;
	}
	cout << A;
}