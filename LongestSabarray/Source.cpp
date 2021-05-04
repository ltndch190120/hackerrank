#include<iostream> 
#include <vector>
using namespace std;

// Utility functions to find minimum and maximum of 
// two elements 
int min(int x, int y) { return (x < y) ? x : y; }
int max(int x, int y) { return (x > y) ? x : y; }

// Returns length of the longest contiguous subarray 
int findLength(vector<int> arr, int n)
{
	int max_len = 1;  // Initialize result 
	for (int i = 0; i < n - 1; i++)
	{
		// Initialize min and max for all subarrays starting with i 
		int mn = arr[i], mx = arr[i];

		// Consider all subarrays starting with i and ending with j 
		for (int j = i + 1; j < n; j++)
		{
			// Update min and max in this subarray if needed 
			mn = min(mn, arr[j]);
			mx = max(mx, arr[j]);

			// If current subarray has all contiguous elements 
			if ((mx - mn) == j - i)
				max_len = max(max_len, mx - mn + 1);
		}
	}
	return max_len;  // Return result 
}

// Driver program to test above function 
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i){
		cin >> a[i];
	}
	cout << findLength(a, n);
	system("pause");
	return 0;
}