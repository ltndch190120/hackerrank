#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> icecreamParlor(int m, vector<int> arr) {
	int result = 0;
	vector<int> max(0);
	for (int i = 0; i < arr.size(); ++i) {
		for (int j = i + 1; j < arr.size() ; ++j) {
			result = arr[i] + arr[j];
			if (result == m) {
				max.push_back(i+1);
				max.push_back(j+1);
				return max;
			}
		}
	}
	return max;
}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int m,k;
		cin >> m >> k;
		vector<int> temp(k);
		for (int j = 0; j < k; ++j) {
			cin >> temp[j];
		}
		vector<int> result =  icecreamParlor(m, temp);
		for (auto i : result) {
			cout << i << " ";
		}
	}

	system("pause");
}