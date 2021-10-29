#include<iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    int base,arr[15],i=0,num=0;
    cin>>n>>base;
    while(n)
    {
        arr[i++]=n%10;
        n/=10;
    }
    for(int j=0;j<i;j++)
    {
        num += arr[j]*pow(base,j);
    }
    cout<<num;
    return 0;
}