#include <iostream>  
#include <algorithm>  
#include <vector>  
#include <string>  
#include <cctype>  
#include <map>

using namespace std;


string isValid(string s) {
	int a[27] = { 0 };
	for (int i = 0; i < s.size(); ++i) {
		a[s[i] - 'a']++;
	}
	
	vector<int> temp;
	for (int i = 0; i < 27; ++i) {
		if (a[i] > 0) {
			temp.push_back(a[i]);
		}
	}
	int count = 0;
	for (int i = 1; i < temp.size(); ++i) {
		if (a[i] != a[0]) {
			count++;
		}
	}
	if (count > 1) { return "NO"; }
	return "YES";
}

int main()
{
	
	string temp;
	getline(cin, temp);
	string result = isValid(temp);
	cout << result;


	system("pause");
	return 0;
}