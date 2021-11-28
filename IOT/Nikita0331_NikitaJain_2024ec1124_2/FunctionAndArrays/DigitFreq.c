/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
int dig_freq(int n, int d) 
{
  int rem, count=0;
  while(n>0)
  {
    rem = n%10;
    if(rem == d)
        count++;
    n = n/10;
  }
  return count;
}
int main() 
{
  int n, d;
  printf("Enter any number : ");
  scanf("%d",&n);
  printf("Enter the number for find frequency : ");
  scanf("%d",&d);
  int res = dig_freq(n, d);
  printf("Frequency of given number : %d",res);
}