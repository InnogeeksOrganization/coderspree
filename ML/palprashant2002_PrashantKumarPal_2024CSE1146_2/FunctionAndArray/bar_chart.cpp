#include<iostream>
using namespace std;
int main()
{
    int n,d,ch=0,k=0;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}