#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    
    // write your code here
    for(int i=0;i<n;i++)
    {
        if(arr[i]==data)
        {
            cout<<data;
            break;
        }
        else
        if(data>arr[i] && data<arr[i+1])
        {
            cout<<arr[i+1]<<endl<<arr[i];
        }
    }
}