#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

int jumpingOnClouds(vector<int> c, int k);


int main()
{
	int k;
	cin >> k;
	vector <int > a;
	int n;
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int temp = jumpingOnClouds(a, k);
	cout << temp;
	system("pause");
}

int jumpingOnClouds(vector<int> c, int k) {

	int energyConsumed = 0;
	int i = 0;
	do {
		if (c.size() <= i + k) {
			i = 0;
		}
		else {
			i = i + k;
		}
		energyConsumed += 1 + 2 * c[i];
	} while (i != 0);
	return 100 - energyConsumed;;

}