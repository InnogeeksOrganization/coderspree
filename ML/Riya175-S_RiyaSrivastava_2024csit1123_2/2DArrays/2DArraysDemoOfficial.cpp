#include<bits/stdc++.h>
using namespace std;
int main() 
{
    //Write your code here.
    int i,j,n,m;
    cin>>n;
    cin>>m;
    int arr[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}