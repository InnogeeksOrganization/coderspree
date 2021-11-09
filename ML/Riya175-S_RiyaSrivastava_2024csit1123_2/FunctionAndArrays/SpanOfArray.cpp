#include<iostream>
using namespace std;
int main()
{
    //write your code here
    long long arr[100000], n ,i,j, temp;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<arr[n-1]-arr[0];
}