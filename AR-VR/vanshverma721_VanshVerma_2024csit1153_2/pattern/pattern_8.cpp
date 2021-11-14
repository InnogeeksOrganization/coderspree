#include <iostream>
using namespace std;

int main()
{
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {   
       for(j=1;j<=n-i;j++)
       {
           printf("\t");
       }
       printf("*\t");
       printf("\n");
   }
    
}