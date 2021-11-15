#include<iostream>
using namespace std;
int max(int n, int arr[])
{
    int i,max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int min(int n,int arr[])
{
    int i,min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n,arr[10000];
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f,g;
    f=max(n,arr);
    g=min(n,arr);
    int span=f-g;
    cout<<span;
}