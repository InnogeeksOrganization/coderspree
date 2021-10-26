#include <iostream>
using namespace std;
int main()
{
   int t,n,i,j;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
       scanf("%d",&n);
       
       int count=0;
       for(j=2;j*j<=n;j++)
       {
           if(n%j==0)
           {
               count++;
               break;
           }
       }
       
       if(count==0)
       {
           printf("prime\n");
       }
       else
       {
           printf("not prime\n");
       }
       
   }

return 0;
    
}