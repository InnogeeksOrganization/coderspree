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
    int i,j,k;
    for(i=1;i<=5;i++)
   { 
        for(j=i;j<5;j++)
    { 
           printf(" ");
    }
    for(k=1;k<=i;k++)
    {
         printf("*");
    }
      printf("\n");
   }
    return 0;
}