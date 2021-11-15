

#include <stdio.h>
int main() {
	int i, j, space, n;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (space = 1; space <= i - 1; space++)
		{
			printf("\t");
		}

		printf("*\t");
		printf("\n");
	}
}