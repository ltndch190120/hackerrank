#include <iostream>
#include <stdlib.h>
#include <string>
#include <xstring>

using namespace std;


int main()
{
	string s;
	getline(cin, s);
	int x = s.size() -1;

	string b = s.substr(x - 1);




	if (b == "PM")
	{
		for (int i = 0; s[i] != ':'; ++i)
		{
			if (s[i] < '1' &&s[i+1] <'8')
			{
				s[i] = s[i] + 1;
				s[i + 1] = s[i + 1] + 2;
				break;
			}
			else if (s[i] == '1' && s[i + 1] <= '1')
			{
				s[i] = s[i] + 1;
				s[i + 1] = s[i+1] + 2;
				break;
			}
			else if(s[i] <'1' &&s[i+1] <= '9')
			{
				s[i] = s[i] + 2;
				s[i + 1] = s[i + 1] - 8;
				break;
			}
		
		}
		s.erase(s.begin() + (x - 1), s.begin() + x+1);
		cout << s;
	}
	else if(b=="AM")
	{
		for (int i = 0; s[i] != ':'; ++i)
		{
			if (s[i] >= '1' && s[i+1] <= '9' )
			{
				s[i] = s[i] - 1;
				s[i + 1] = s[i + 1] - 2; break;
			}
			else if (s[i] == '2' && s[i + 1] <= '1')
			{
				s[i] = s[i] - 2;
				s[i + 1] = s[i + 1] + 8; break;
			}
			else if (s[i] >= 2 && s[i + 1] <= 3)
			{
				s[i] = s[i]  -1;
				s[i + 1] = s[i + 1] - 2; break;
			}
		}
		s.erase(s.begin() + (x - 1), s.begin() + x + 1);
		cout << s;
	}

	system("pause");
} 