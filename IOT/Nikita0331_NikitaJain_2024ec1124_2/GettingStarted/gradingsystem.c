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
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);
    if(marks > 90 )
        printf("excellent");
    else if(marks > 80 && marks <91)
        printf("good");
    else if(marks > 70 && marks < 81)
        printf("fair");
    else if(marks > 60 && marks <71)
        printf("just satisfy");
    else
        printf("below expectation");
    return 0;
}