/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,n,c,i;
    printf("Print fibonacci till ");
    scanf("%d",&n);
    a=0;b=1;
    printf("%d\n%d",a,b);
    for(i=1;i<=n-2;i++)
{   c=a+b;
    printf("\n%d",c);
    a=b;
    b=c;
}
    return 0;
}