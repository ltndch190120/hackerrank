#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

// Complete the maximumToys function below.
int maximumToys(vector<int> prices, int k) {

	sort(prices.begin(), prices.end());
	int sum = 0;
	int temp = 0;
	for (int i = 0; i < prices.size(); ++i)
	{
		sum += prices[i];
		if (sum > k)
		{
			temp = i;
			break;
		}
	}
	return temp;

}

int main()
{
	int n, k;
	cin >> n;
	cin >> k;
	vector<int> prices(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> prices[i];
	}
	int result = maximumToys(prices, k);
	cout << result;

	system("pause");
	return 0;
}

