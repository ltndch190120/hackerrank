#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int t, i;

	cin >> t;

	string s;

	for (i = 0; i < t; i++)
	{

		cin >> s;

		bool val = next_permutation(s.begin(), s.end());

		if (val == false)
		{

			cout << "no answer" << endl;

		}

		else

		{

			cout << s << endl;

		}
	}
	system("pause");
	return 0;
}