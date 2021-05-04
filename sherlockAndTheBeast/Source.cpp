#include <iostream>
#include <string>
#include <algorithm>>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, z;
		cin >> n;
		z = n;

		if (z % 3 == 0) {
			cout << string(z, '5') << endl;
		}
		while (z % 3 != 0) {
			z -= 5;
			if (z < 0) {
				cout << "-1" << endl;
				break;
			}
			else {
				if (z % 3 == 0)
					cout << string(z, '5') << string((n - z), '3') << endl;
			}
		}
	}
	system("pause");
}