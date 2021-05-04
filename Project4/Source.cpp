#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;

int birthdayCakeCandles(vector<int> ar);


int main()
{
	vector <int> ar;
	int n;
	cin>> n;
	ar.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
		cout << endl;
	}
	int k = birthdayCakeCandles(ar);
	cout << "\n" << k;

	system("pause");
}

int birthdayCakeCandles(vector<int> ar) {
	int temp = 1;
	for (int i = 0; i < ar.size(); ++i)
	{
		for (int j = i + 1; j < ar.size(); ++j)
		{
			if (ar[i] == ar[j])
			{
				++temp;
			}
		}
		if (temp != 1)
		{
			break;
		}
	}
	return temp;

}