#include<iostream>
#include <stdlib.h>
#include<string>

using namespace std;

int countingValleys(int n, string s);

int main()
{
	string s;
	int n;
	cin >> n;
	rewind(stdin);
	getline(cin, s);
	int temp = countingValleys(n, s);
	cout << temp;
	system("pause");
}

int countingValleys(int n, string s) {

	int temp = 0; int k = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == 'U')
		{
			++k;
		}
		else if (s[i] == 'D')
		{
			--k;
		}
		if (k == -1 && s[i+1] == 'U')
		{
			++temp;
		}

	}
	return temp;

}