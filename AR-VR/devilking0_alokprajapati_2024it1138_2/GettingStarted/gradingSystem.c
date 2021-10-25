#include <stdio.h>



int main()
{
	int i;

	scanf("%d", &i);
	if (i > 90)
	{
		printf("excellent");
	}
	else if (i <= 90 && i > 80)
	{
		printf("good");
	}
	else if (i > 70 && i <= 80)
	{
		printf("fair");
	}
	else if (i > 60 && i <= 70)
	{
		printf("meets expectations");
	}
	else if (i <= 60)
	{
		printf("below par");
	}

	return 0;
}