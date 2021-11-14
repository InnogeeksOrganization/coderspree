#include<iostream>
using namespace std;
int main()
{
    int n,b,t,r,k=0,a[10];
    cin>>n;
    cin>>b;
    while(n>0)
    {
        r=n%b;
        a[k]=r;
        k++;
        n=n/b;
    }
    t=k;
    for(k=t-1;k>=0;k--)
    {
        cout<<a[k];
    }
    return 0;
}