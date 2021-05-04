#include <iostream>
#include <string>
#include <vector>
using namespace std;




int palindromeIndex(string s) {
	int begin = 0;
	int end = s.size() - 1;
	while (begin < end) {
		if (s[begin] != s[end]) {
			if (s[begin + 1] == s[end]) {
				if (s[begin] == s[end - 1] && s[begin + 1] == s[end - 2]) {
					return end;
				}
				else
					return begin;
			}
			else if (s[end - 1] == s[begin]) {
				return end;
			}
		}
		begin++;
		end--;
	}

	return -1;
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		string s;
		rewind(stdin);
		getline(cin, s);
		cout<<palindromeIndex(s)<<endl;
		
	}
	system("pause");
}