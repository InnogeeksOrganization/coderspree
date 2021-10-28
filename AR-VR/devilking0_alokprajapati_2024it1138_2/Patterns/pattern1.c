
#include <stdio.h>

int main()
{
	int i, j, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*\t");
		printf("\n");
	}

}
