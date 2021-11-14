#include<iostream>
using namespace std;

#include<stdio.h>

int main() {
	int a[100];
	int num, b, i = 0, j;
	scanf("%d", &num);
	scanf("%d", &b);
	while (num > 0)
	{
		a[i] = num % b;
		i++;
		num = num / b;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", a[j]);
	}
}