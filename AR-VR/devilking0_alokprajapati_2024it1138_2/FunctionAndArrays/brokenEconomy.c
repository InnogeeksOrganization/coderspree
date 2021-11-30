
#include<stdio.h>

int main() {
	int a[1000];
	int size, num, i, v1, v2, m = 0;



	scanf("%d", &size);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &a[i]);
	}

	scanf("%d", &num);

	for (i = 0; i < size; i++)
	{
		if (a[i] == num)
		{
			m = num;
		}
		else if (a[i] < num)
		{
			v1 = a[i];
			v2 = a[i + 1];

		}

	}
	if (m > 0)
	{
		printf("%d", m);
	}

	else
	{
		printf("%d\n%d", v2, v1);
	}



}


