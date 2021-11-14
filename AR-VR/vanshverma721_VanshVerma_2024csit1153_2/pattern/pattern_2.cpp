#include <iostream>
using namespace std;

int main()
{
     int i,j,n;
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=i;j>=1;j--)
       {
           printf("*\t");
       }
       printf("\n");
   }
}