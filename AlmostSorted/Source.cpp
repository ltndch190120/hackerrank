#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void almostSorted(vector<int> arr) {
	if (is_sorted(arr.begin(), arr.end())) { cout << "yes"; return; }
	int first, last;

	for (int i = 0; i < arr.size() - 1; i++)
		if (arr[i] > arr[i + 1])
		{
			first = i; break;
		}

	for (int i = arr.size() - 1; i > 0; i--)
		if (arr[i - 1] > arr[i])
		{
			last = i; break;
		}

	swap(arr[first], arr[last]);
	if (is_sorted(arr.begin(), arr.end())) {
		cout << "yes" << endl << "swap " << first + 1 << " " << last + 1;
		return;
	}
	swap(arr[first], arr[last]);

	reverse(arr.begin() + first, arr.begin() + last + 1);

	if (is_sorted(arr.begin(), arr.end())) {
		cout << "yes" << endl << "reverse " << first + 1 << " " << last + 1;
		return;
	}

	cout << "no";

}