#include<iostream>
using namespace std;
int main()
{
    int n,d,ch=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to search in array : ";
    cin>>d;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            cout<<"Element found at index"<<i;
            ch=1;
        }
    }
    if(ch==0)
        cout<<-1;
}