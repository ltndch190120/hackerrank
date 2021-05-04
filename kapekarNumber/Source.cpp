#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;
long long checkKapekarNumber(long long p);
void kapekarNumber(long long x, long long y);

int main()
{
	long long x, y;
	cin >> x >> y;
	kapekarNumber(x, y);
	system("pause");
	return 0;
}

void kapekarNumber(long long x, long long y)
{
	for (long long i = x; i < y; ++i)
	{
		if (checkKapekarNumber(i) == 1)
		{
			cout << i << " ";
		}
	}
}

long long checkKapekarNumber(long long p)
{
	int f = p;
	p = p * p;
	long long l = 0;
	int u = 1;
	int t = 0;
	int r = 0;
	while (p)
	{
		int temp = p % 10;
		if (t == 0)
		{
			l = l * 10 + temp;
			t++;
		}
		else
		{
			l = l + temp * u;
		}
		p /= 10;
		if (p + l == f && l != 0 && p <= l)
		{
			r = 1;
		}
		u = u * 10;
	}
	return r;
}
