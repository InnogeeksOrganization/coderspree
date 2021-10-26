#include <iostream>
using namespace std;
int main()
{
   int high,low,i,count=0,j;
   scanf("%d",&low);                  
   scanf("%d",&high);                   
  
   for(i=low;i<=high;i++)
   {   count=0;
       for(j=2;j*j<=i;j++)
       {
            if(i%j==0)
            {
                count++;
                break;
                
            }
       }
   
    
   if(count==0)
   {
       printf("%d\n",i);
   }
  
   
   }
   return 0;

}