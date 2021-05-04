#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;


void inputVector(vector <int> &a);
void outPutVector(vector<int> a);
vector<int> rotLeft(vector<int> a, int d);

int main()
{
	vector <int> a;
	int d;
	int n;
	cin >> n;
	a.resize(n);
	cin >> d;
	inputVector(a);
	//outPutVector(a);
	vector <int> b;
	b.resize(n);
	b = rotLeft(a, d);

	outPutVector(b);

	system("pause");
}

void inputVector(vector <int> &a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << "Enter a[" << i << "]: ";
		cin >> a[i];
	}
}

void outPutVector(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << "  ";
	}
}

vector<int> rotLeft(vector<int> a, int d) 
{
	int temp;
	
	for (int i = 0; i < a.size(); i++)
	{
		if (i < d)
		{
			temp = a[0];
			a.push_back(temp);
			a.erase(a.begin() + 0);
		}
		else
		{
			return a;
		}
	}

}