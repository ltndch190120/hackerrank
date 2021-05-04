#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> b(n);
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		sum += b[i];
	}
	int result = 0;
	if (sum % 2 == 1)
	{
		cout << "NO";
	}

	else
	{
		for (int i = 0; i < n; ++i)
		{
			if (b[i] % 2 != 0)
			{
				b[i] = b[i] + 1;
				b[i + 1] = b[i + 1] + 1;
				result += 2;
			}
		}
		cout << result;
	}
	
	

	system("pause");
}