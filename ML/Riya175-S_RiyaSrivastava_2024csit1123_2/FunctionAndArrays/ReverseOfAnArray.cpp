#include<iostream>
using namespace std;
void display(int* arr, int n)
{
    for(int i = n-1 ; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    display(arr,n);
}