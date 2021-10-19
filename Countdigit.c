/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
        count++;
        n=n/10;
    } 
    while(n!=0);
    printf("Total digits in given number : %d", count);
    return 0;
}