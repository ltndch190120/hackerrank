#include <iostream>
#include <algorithm>

using namespace std;




int DSunfaceArea(int a[120][120],int H,int W) {

	int area = 2 * H * W;
	for (int i = 1; i <= H; ++i) {
		for (int j = 1; j <= W; ++j) {
			area += max(0, a[i][j] - a[i - 1][j]);
			area += max(0, a[i][j] - a[i + 1][j]);
			area += max(0, a[i][j] - a[i][j - 1]);
			area += max(0, a[i][j] - a[i][j + 1]);
		}
	}
	return area;
}

int main()
{
	int a[120][120];
	int W, H;
	cin >> H >> W;
	for (int i = 1; i <= H; ++i) {
		for (int j = 1; j <= W; ++j) {
			cin >> a[i][j];
		}
	}
	cout << DSunfaceArea(a,H,W);

	system("pause");
}