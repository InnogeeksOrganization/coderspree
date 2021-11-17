#include <iostream>
using namespace std;

int main()
{
     int n,i,c;
    int a=0,b=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {  
        printf("%d\n",a);
        c=a+b;
       a=b;
       b=c;
    }

    return 0;
    
}