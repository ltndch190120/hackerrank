#include <iostream>
#include <stdlib.h>
#include <vector>
#include <math.h>

using namespace std;

void nhap(vector<int> &c);
vector<int> compareTriplets(vector<int> a, vector<int> b);
void xuat(vector<int> c);

int main()
{
	vector<int > a;
	a.resize(3);
	vector <int> b;
	b.resize(3);
	
	nhap(a);
	nhap(b);
	xuat(a);
	cout << "\n";
	xuat(b);

	vector <int> f;
	f = compareTriplets(a, b);
	cout << endl;
	for (int i = 0; i < f.size(); i++)
	{
		cout << f[i] << " ";
	}

	system("pause");
}


void nhap(vector<int> &c)
{
	for (int i = 0; i < 3; i++)
	{
		cout << i << " ";
		cin >> c[i]; 
	}
}

void xuat(vector<int> c)
{
	for (int i = 0; i < 3; i++)
	{
		cout << c[i] << " ";
	}
}





vector<int> compareTriplets(vector<int> a, vector<int> b) {

	int temp = 0;
	int temp1 = 0;
	int temp3 = 0;
	vector<int> c;
	c.resize(2);
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > b[i])
		{
			c[0] = temp++;
		}
		else if (a[i] < b[i])
		{
			c[1] = temp1++;
		}

	}
	return c;

}