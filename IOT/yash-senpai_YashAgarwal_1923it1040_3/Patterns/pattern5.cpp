#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    cin >> n;
    k = n/2;
    for(i=1; i<=k+1; i++)
    {
        j =0;
        for(j=0; j<=k-i; j++)
            cout<<"\t";
        for(; j<=k; j++)
            cout<<"*\t";
        for(j=1; j<i;j++)
            cout<<"*\t";
        cout<<endl;
    }
    for(i = 1;i<=n-(k+1);i++)
    {
        for(j =1; j <=i; j++)
            cout<<"\t";
        for(; j<=k+1; j++)
            cout<<"*\t";
        for(; j<=n-i; j++)
            cout<<"*\t";
        cout<<endl;
    }
    return 0;
}