#include <stdio.h>

int main()
{
	int i, j, space, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (space = 1; space <= n - i; space++)
			printf("\t");
		for (j = 1; j <= i; j++)
			printf("*\t");
		printf("\n");
	}
}