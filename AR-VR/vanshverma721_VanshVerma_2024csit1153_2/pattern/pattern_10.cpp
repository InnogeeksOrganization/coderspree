#include <iostream>
using namespace std;

int main()
{
   int n,i,j,outersp,innersp;
  scanf("%d",&n);
  outersp=n/2;
  innersp=-1;
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=outersp;j++)
    {
        printf("\t");
    }  
    
    printf("*\t");
    
    for(j=1;j<=innersp;j++)
    {
        printf("\t");
    }
    
    if(i>1 && i<n)
    {
        printf("*\t");
    }
    
    if(i<=n/2)
    {
        outersp--;
        innersp=innersp+2;
    }
    else
    {
        outersp++;
        innersp=innersp-2;
    }
    printf("\n");
  }
    
}