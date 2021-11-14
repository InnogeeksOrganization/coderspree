#include<iostream>
using namespace std;

#include<stdio.h>
#include<math.h>




int main()
{
	int num, b;
	int m, d = 0, n = 0, r;
	scanf("%d%d", &num, &b);

	while (num > 0)
	{
		m = num % 10;
		r = pow(b, n);
		d = d + m * r;
		num = num / 10;
		n++;


	}
	printf("%d", d);
	return 0;
}