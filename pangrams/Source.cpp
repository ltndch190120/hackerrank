#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>

using namespace std;


int main()
{
	string s;
	getline(cin, s);
	
	vector<int> tmp;
	vector <int> tmp1;
	for (int i = 65; i <= 90; ++i)
	{
		tmp.push_back(i);
	}
	for (int i = 97; i <= 122; ++i)
	{
		tmp1.push_back(i);
	}
	vector <int> tmp2(0);
	
	for (int i = 0; i < s.size(); ++i)
	{
		if (check(tmp, tmp1, tmp2, s[i]) == true)
		{
			i++;
		}
	}

	system("pause");
}

bool check(vector<int> tmp, vector<int> tmp1, vector<int> tmp2, char k)
{
	for (int i = 0; i < tmp.size(); ++i)
	{
		if (tmp[i] == int(k) || tmp1[i] == int(k))
		{
			if (check2(tmp2, k) == true)
			{
				tmp2.push_back()
			}
		}
	}
	
}

bool check2(vector<int> tmp2,int t)
{
	for (int i = 0; i < tmp2.size(); ++i)
	{
		if (tmp2[i] == t)
		{
			return false;
		}
	}
	return true;
}