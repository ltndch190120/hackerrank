#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


string LarryArray(vector<int> A) {
	int count = 0;
	for (int i = 0; i<A.size() - 1; ++i) {
		for (int j = i + 1; j < A.size() ; ++j) {
			if (A[i] > A[j])
				count++;
		}
	}
	if (count % 2 == 0) { return "YES"; }
	return "NO";
}



int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int n;
		cin >> n;
		vector<int> temp(n);
		for (int j = 0; j < n; ++j) {
			cin >> temp[j];
		}
		string result = LarryArray(temp);
		cout << result;
	}

	system("pause");
	return 0;
}