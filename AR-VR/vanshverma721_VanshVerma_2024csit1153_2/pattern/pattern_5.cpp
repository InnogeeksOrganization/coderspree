#include <iostream>
using namespace std;

int main()
{
 int i,j,n,space,star;
   scanf("%d",&n);
   space=n/2;
   star=1;
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
       
       if(i<=n/2)
       {
           space--;
           star=star+2;
       }
       else
       {
           space++;
           star=star-2;
       }
       printf("\n");
   }
}

   

    
