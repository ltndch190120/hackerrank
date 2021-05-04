#include <iostream>

using namespace std;




// Complete the migratoryBirds function below.



int b[100000];
int main()
{
	int a[10000];
	int n;
	cin >> n;


	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		b[a[i]]++;
	}
	int max = b[0]; int k;
	for (int i = 0; i < 1000000; ++i)
	{
		if (max < b[i])
		{
			max = b[i];
			k = i;
		}
	}

	cout << k;


	system("pause");
	return 0;
}