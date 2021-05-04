#include <iostream>
#include <vector>
#include <string>

using namespace std;




vector<string> weightedUniformStrings(string s, vector<int> queries) {
	vector<int> listValue;
	vector<string> temp;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == s[i + 1]) {
			int sum = s[i] - 96;
			listValue.push_back(s[i] - 96);
			int j = i;
			while (s[i] == s[j + 1])
			{
				sum += s[j] - 96;
				listValue.push_back(sum);
				++j;
			}
			i = j;
		}
		else {
			listValue.push_back(s[i] - 96);
		}
	}
		string a = "Yes";
		string b = "No";
		for (int i = 0; i < queries.size(); ++i) {
			bool check = false;
			for (int j = 0; j < listValue.size(); ++j) {
				if (queries[i] == listValue[j]) {
					temp.push_back(a); check = true;
					break;
				}
			}
			if (check == false) {
				temp.push_back(b);
			}
		}

	
	return temp;
}



int main() {
	string input;
	getline(cin, input);
	int n; 
	cin >> n;
	vector <int> weighted(n);
	for (int i = 0; i < n; ++i) {
		cin >> weighted[i];

	}
	vector<string> result = weightedUniformStrings(input, weighted);
	for (int i = 0; i < result.size(); ++i) {
		cout << result[i] << endl;
	}
	system("pause");
	return 0;
}