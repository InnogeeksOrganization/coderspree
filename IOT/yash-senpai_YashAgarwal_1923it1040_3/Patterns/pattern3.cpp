#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    cin >> n;
    for(int i = 1; i<=n; i++)
    {
        for(j=1; j<=n-i;j++)
            cout<<" \t";
        for(;j<=n;j++)
            cout<<"*\t";
        cout<<endl;
    }
    return 0;
}