#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n-i||j>=n+i)
            cout<<"   ";
            else
            cout<<" * ";
        }
        cout<<"\n";
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=i||j>=2*n-i)
            cout<<"   ";
            else
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}