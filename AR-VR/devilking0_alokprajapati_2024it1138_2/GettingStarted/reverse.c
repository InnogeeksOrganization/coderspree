#include <stdio.h>





int main()
{
	int a[100];
	int i, size;
	scanf("%d", &size);
	for (i = 0; i < size; i++)
		scanf("%d", &a[i]);

	for (i = size - 1; i >= 0; i--)
		printf("%d", a[i]);
	return 0;
}