#include<stdio.h>

int main()
{
	int i, j, n, m, k, p = 1;
	scanf("%d", &n);
	m = (n*(n + 1)) / 2;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			printf("%d\t", p);
			p++;


		}
		printf("\n");

	}

}