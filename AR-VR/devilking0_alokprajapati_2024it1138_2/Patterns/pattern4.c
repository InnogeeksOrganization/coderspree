#include <stdio.h>

int main()
{
	int i, j, space, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (space = 0; space < i - 1; space++)
			printf("\t");

		for (j = i; j <= n; j++)
			printf("*\t");


		printf("\n");
	}


}