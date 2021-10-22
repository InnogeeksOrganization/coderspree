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
    int n;
    printf("enter number : ");
    scanf("%d",&n);
    {
        int i,j,flag = 0;
        for(i = 2; i<=n/2; i++)
        {
            if(n%i == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            printf("number is not prime");
        else
            printf("number is prime");
    }
    return 0;
}