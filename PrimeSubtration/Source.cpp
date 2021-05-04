#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


bool isPrime(long long x)
{
	if (x < 2)
	{
		return false;
	}
	else if (x == 2)
	{
		return true;
	}
	else {
		for (long long i = 2; i < sqrt(x); ++i)
		{
			if (x%i == 0)
			{
				return false;
			}
		}
	}
	return true;
}



bool checkPrime(long long x,long long y)
{
	long long temp = x - y;
	for (long long i = 2; i <= temp; ++i)
	{
		if (isPrime(i) == true)
		{
			if (temp%i == 0)
			{
				return true;
			}
		}
	}
	return false;

}



int main()
{
	int n; 
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		long long x, y;
		cin >> x >> y;
		if (checkPrime(x, y) == true)
		{
			cout << "Yes"<<endl;
		}
		else
		{
			cout << "No"<<endl;
		}
	}
	system("pause");
}