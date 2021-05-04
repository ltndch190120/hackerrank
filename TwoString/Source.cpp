#include <iostream>
#include <string>

using namespace std;



// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
	int a[26] = { 0 };
	int b[26] = { 0 };
	for (int i = 0;i < s1.size() - 1; ++i) {
		a[s1[i] - 'a']++;
	}
	for (int j = 0; j < s2.size() - 1; ++j) {
		b[s2[j] - 'a']++;
	}
	for (int k = 0; k < 26; ++k) {
		if ( a[k] >= 1 && b[k] >= 1) {
			return "YES";
		}
	}
	return "NO";
}

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {
		rewind(stdin);
		string temp1;
		getline(cin, temp1);
		rewind(stdin);
		string temp2;
		getline(cin, temp2);
		string result = twoStrings(temp1, temp2);
		cout << result << endl;
	}
	system("pause");
	return 0;
}