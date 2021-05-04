#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar);


int main()
{
	vector <int> ar;
	int n;
	int k;
	cin >> n;
	cin >> k;
	ar.resize(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> ar[i];
	}

	int temp = divisibleSumPairs(n, k, ar);
	cout << temp;

	system("pause");
}

int divisibleSumPairs(int n, int k, vector<int> ar) {

	int temp = 0;
	for (int i = 0; i < ar.size(); ++i)
	{
		for (int j = 1;j < ar.size(); ++j)
		{
			if (i < j && (ar[i] +ar[j] ) % k ==0 )
			{
				++temp;
			}
		}
	}
	return temp;

}
