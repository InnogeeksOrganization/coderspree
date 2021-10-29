#include <iostream>
using namespace std;

int main()
{
    long num=0,num2=0;
    int n,base,arr[20],i=0;
    cin>>n>>base;
    while(n)
    {
        arr[i++]= n%base ;
        n=n/base;
    }
    for(int j=i-1;j>=0;j--)
        cout<<arr[j];
    return 0;
}