/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1; i<6; i++)
        printf("*");
        printf("\n");
    for(i=1; i<4; i++)
    {
        for(j=4; j>=1; j--)
        {
            if(i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1; i<6; i++)
        printf("*");
        printf("\n");
    return 0;
}