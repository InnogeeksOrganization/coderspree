#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,count=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
     
    }
    
    int b=pow(10,count-1);
    while(b!=0)
    {
        r=n/b;
        printf("%d \n",r);
        n=n%b;
        b=b/10;
    }
    
 
}   
