
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include<stdio.h>
#include <algorithm>

using namespace std;

int N;
int A[1000];

int main()
{
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		int a;
		scanf("%d", &a);
		A[a]++;
	}
	int ans = 0;
	for (int i = 1; i < 1000; i++)
		ans = max(ans, A[i - 1] + A[i]);
	printf("%d\n", ans);
	system("pause");
	return 0;
}