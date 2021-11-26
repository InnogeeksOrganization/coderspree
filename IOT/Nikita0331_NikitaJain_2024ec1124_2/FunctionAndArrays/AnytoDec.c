/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>
#include<conio.h>

int any_dec(int n, int b)
{
    int rem,num=0,i=0;
    while(n>0){
        rem = n%10;
        n=n/10;
        num = num + rem*pow(b,i++);
    }
    return num;
}

int main()
{
  int n;
  int b;
  printf("Enter any base number : ");
  scanf("%d",&n);
  printf("Enter the base of given number : ");
  scanf("%d",&b);
  int res = any_dec(n, b);
  printf("Decimal number : %d",res);
}