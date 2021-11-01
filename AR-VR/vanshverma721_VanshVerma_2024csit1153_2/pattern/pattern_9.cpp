#include <iostream>
using namespace std;

int main()
{
     int i,j,n,a,space,star;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {   
           if(i==j || i+j==n+1)
           printf("*\t");
           else
           printf("\t");
       }
       printf("\n");
   }
}