#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
	int q, i, j, k, count = 0, temp = 0, n, l;
	char string[] = "hackerrank", s1[100000];
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%s", s1);
		l = strlen(s1);
		count = 0;
		temp = 0;
		for (k = 0; k <= 9; k++)
		{
			for (j = temp; j <= l - 1; j++)
			{
				if (string[k] == s1[j])
				{
					count = count + 1;
					temp = j + 1;
					break;
				}
			}
		}
		if (count >= 10) printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}