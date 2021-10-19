/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i ,j,n;
    float mar;
    printf("Enter the marks of student\n");
    scanf("%f",&mar);
    if(mar>90)
    printf("Exellent\n");
    else if(mar>80&&mar<=90)
    printf("Good");
    else if(mar>70&&mar<=80)
    printf("Fair");
    else if(mar>60&&mar<=70)
    printf("Meets Expectation");
    else if(mar>=60)
    printf("Below par");
   
}