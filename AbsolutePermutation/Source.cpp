#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;



 void Rotate(vector<int> a, int k)
{
	if (k > 0)
	{
		int tmp = a[1];
		for (int i = 1; i < a.size()-1 ; i++) 
			a[i] = a[i + 1];
		a[a.size()- 1] = tmp;
		//Gọi đệ quy nè
		Rotate(a, k - 1);
	}
}

vector<int> absolutePermutation(int n, int k) {
	vector<int> a(n+1);
	int i = 1;
	while (true) {
	
		a[i] = i;
		if (i == n) { break; }
		++i;
	}
	Rotate(a, k);

	return a;
}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int temp1, temp2;
		cin >> temp1 >> temp2;
		for (auto i : absolutePermutation(temp1, temp2)) {
			cout << i << "  ";
		}
	}


	system("pause");
	return 0;
}