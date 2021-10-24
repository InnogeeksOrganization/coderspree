#include<iostream>
using namespace std;
int main()
{
    //write your code here
    int arr[30], n, i, d, flag=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    
    for(i=0; i<n; i++)
    {
        if(arr[i]==d)
        {
            cout<<i;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
}