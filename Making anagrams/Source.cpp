#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <string>
#include <set>

using namespace std;


int main()
{

	string in1, in2;
	getline(cin, in1);
	getline(cin, in2);
	// dùng getline
	int array[26] = { 0 };
	for (int i = 0; i < in1.length(); i++)
		array[in1[i] - 'a']++;
	for (int i = 0; i < in2.length(); i++)
		array[in2[i] - 'a']--;
	int sum = 0;
	for (int i = 0; i < 26; i++)
		sum += abs(array[i]);
	cout << sum;
	return 0;
}