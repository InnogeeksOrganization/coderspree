#include<iostream>
using namespace std;

int main()
{
    int i,arr[100],n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" " ;
    }
    return 0;
}