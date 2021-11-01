#include <iostream>
#include <math.h>
using namespace std;
int anyBaseToDecimal(int n,int base)
{
    int i=0,num=0,arr[15];
    while(n)
    {
        arr[i++]=n%10;
        n/=10;
    }
    for(int j=0;j<i;j++)
    {
        num += arr[j]*pow(base,j);
    }
   // cout<<num<<endl;
    return num;
    
}

int decimalToAnyBase(int n,int base)
{
    int i=0,num=0,arr[15];
    while(n)
    {
        arr[i++]= n%base ;
        n/=base;
    }
    for(int j=i-1;j>=0;j--)
        num=num*10 + arr[j];
    return num;
}
int main()
{
    int n,b1,b2,dec,num;
    cin>>n>>b1>>b2;
    dec= anyBaseToDecimal(n,b1);
    num= decimalToAnyBase(dec,b2);
    cout<<num;
    return 0;
}