#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <set>
#include <map>
#include <Bits.h>
#include <math.h>
#include <limits>

using namespace std;
string a = "abcdefghijklmnopqrstuvwxyz";  // quét từ đầu đến cuối :

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int maxi = 0;// khởi tạo max để so sánh độ dài từng chuỗi hợp lệ 
	for (int i = 0; i < 26; i++) {
		for (int j = i + 1; j < 26; j++) {
			char x = a[i];
			char y = a[j];
			string t = "";
			for (int k = 0; k < n; k++) {
				if (s[k] == x || s[k] == y) {
					t += s[k];
				}
			}
			
			bool flag = true;  // kiểm tra điều kiện : vd :  abab => true ngược lại false;
			for (int f = 0; f + 1 < t.size(); f++)
			{
				if (t[f] == t[f + 1])
				{
					flag = false; break;  
				}
			}
			int ts = t.size();
			if ((flag) && (ts > 1)) maxi = max(maxi, ts); // tìm max của chuỗi hợp lệ

		}
	}
	cout << maxi << endl;
	system("pause");
	return 0;
}