#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin >> n;
    k = n/2;
    for(i=1; i<=k; i++)
    {
        for(j=i; j<=k; j++)
            cout<<"*\t";
        for(; j<=k+i;j++)
            cout<<"\t";
        for(j = 1; j<i; j++)
            cout<<"\t";
        for(;j<=k; j++)
            cout<<"*\t";
        cout<<endl;
    }
    for(i=1; i<k;i++)
    {
        cout<<"*\t";
        for(j=1; j<=i;j++)
            cout<<"*\t";
        for(;j<=k;j++)
            cout<<"\t";
        for(j=1;j<k-i;j++)
            cout<<"\t";
        for(;j<=k; j++)
            cout<<"*\t";
        cout<<endl;
    }
    return 0;
}