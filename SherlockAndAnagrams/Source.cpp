#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;



int check_anagram(string s1, string s2) {

	int a1[26] = { 0 }, a2[26] = { 0 };

	for (int i = 0; i < s1.length(); i++) {
		a1[s1[i] - 'a']++;
	}

	for (int i = 0; i < s2.length(); i++) {
		a2[s2[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		if (a1[i] - a2[i] != 0) {
			return 0;//two strings are not anagram
		}
	}
	return 1;//two strings are anagram
}


int sherlockAndAnagrams(string s) {
	int count = 0;
	for (int i = 1; i <= s.length(); i++) {
		vector <string> str;

		for (int j = 0; j + i <= s.length(); j++) {
			str.push_back(s.substr(j, i));
		}

		for (int p = 0; p < str.size(); p++) {
			for (int q = p + 1; q < str.size(); q++) {
				if (check_anagram(str[p], str[q]))count++;
			}
		}
	}
	return count;
}



int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin >> s;
		int result = sherlockAndAnagrams(s);
		cout << result << endl;
	}
	system("pause");
}