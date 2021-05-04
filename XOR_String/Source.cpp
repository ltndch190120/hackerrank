#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string strings_xor(string s, string t) {

    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == t[i])
            res += '0';
        else
            res += '1';
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s, t;
    std::cin >> s >> t;
    std::cout << strings_xor(s, t) << endl;
    return 0;
}



