/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
void dec_any(int n, int b) {
    int bin[9],i=0;
    for(i=0;i<9;i++)
        bin[i]=-1;
    i=0;
    while(n>0)
    {
        bin[i++]=n%b;
        n = n/b;
    }
    for(i=8;i>=0;i--){
        if(bin[i] != -1)
            printf("Converted number %d",bin[i]);
    }
}

int main() 
{
  int n,b;
  printf("Enter any decimal number : ");
  scanf("%d",&n);
  printf("Enter the base which u want to convert : ");
  scanf("%d",&b);
  dec_any(n, b);
}