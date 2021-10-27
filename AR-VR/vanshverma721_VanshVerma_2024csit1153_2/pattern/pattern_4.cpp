#include <iostream>
using namespace std;

int main()
{
   int i,j,n,space,star;
   scanf("%d",&n);
   space=0;
   star=n;
   for(i=1;i<=n;i++)
   {   
      for(j=1;j<=space;j++)
      {
          printf("\t");
      }
      for(j=1;j<=star;j++)
      {
          printf("*\t");
      }
      space++;
      star--;
      printf("\n");
       
   }

}