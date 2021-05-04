#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#define MAX 300

using namespace std;




int main()
{
	int a[MAX][MAX];
	int rows, cols, rot;
	cin >> rows >> cols >> rot;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> a[i][j];
		}
	}

	for (int r = 0; r <= rows-1; r++) {
		for (int c = 0; c <= cols-1; c++) {

		}
	}

	system("pause");
	return 0;
}