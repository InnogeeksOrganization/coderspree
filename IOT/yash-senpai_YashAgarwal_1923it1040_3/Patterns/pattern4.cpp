#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    for(i=1; i<=n; i++)
    {
        for(j = 1; j<i; j++)
            cout<<"\t";
        for(; j<=n; j++)
            cout<<"*\t";
        cout<<endl;
    }
    return 0;
}
