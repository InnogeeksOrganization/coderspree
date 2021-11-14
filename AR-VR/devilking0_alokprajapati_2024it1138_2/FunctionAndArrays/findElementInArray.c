#include<iostream>
using namespace std;


#include<stdio.h>
int main()
{
	int a[10000000];
	int i, num, n, count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &num);
	for (i = 0; i < n; i++)
	{
		if (a[i] == num)
		{
			count = 1;
			printf("%d", i);
			break;
		}
	}
	if (count == 0)
	{
		printf("%d", -1);
	}

	return 0;
}