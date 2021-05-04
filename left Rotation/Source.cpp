#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <alg.h>
#include <algorithm>
#include <set>
#include <map>

using namespace std;


int main()
{
	int n, d;
	cin >> n;
	int a[100000];
	cin >> d;
	for (int i = 0; i < n; cin >> a[i], i++);
	d = d % n;
	for (int i = d; i < n; i++)
		cout << a[i] << " ";

	for (int i = 0; i < d; i++)
		cout << a[i] << " ";
	


	system("pause");
}

