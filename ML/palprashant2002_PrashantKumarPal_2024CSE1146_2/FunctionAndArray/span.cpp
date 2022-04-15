#include<iostream>
using namespace std;
int main()
{
    int n,min,max,span;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    min=INT_MAX;
    max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    span=max-min;
    cout<<span;
}