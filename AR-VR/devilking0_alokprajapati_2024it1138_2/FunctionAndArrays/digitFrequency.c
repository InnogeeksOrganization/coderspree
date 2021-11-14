#include<iostream>
using namespace std;
#include<stdio.h>

int main() {
	int a[100];
	int i = -1, j, d, num, count = 0;
	scanf("%d", &num);
	while (num > 0)
	{
		i++;
		a[i] = num % 10;
		num = num / 10;
	}

	scanf("%d", &d);
	for (j = 0; j <= i; j++)
	{
		if (a[j] == d)
			count++;

	}
	printf("%d", count);
}