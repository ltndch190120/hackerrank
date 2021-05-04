#include <iostream>
#include <stdlib.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {

	int k = n; int temp; int f = 0;
	while (n != 0)
	{
		temp = n % 10;
		if (temp != 0)
		{
			if (k % temp == 0)
			{
				++f;
			}
		}
		n = n / 10;
	}
	return f;

}

int main()
{

	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin >> n;
		int temp = findDigits(n);
		cout << temp;
	}

	system("pause");
	return 0;
}