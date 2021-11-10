#include<iostream>
using namespace std;

void reverse(int* arr, int n){
    int B[n],i,k=n-1;
    for(i=0;i<n;i++)
    {
        B[i]=arr[k];
        k--;
    }
    for(i=0;i<n;i++)
    {
        arr[i]=B[i];
       
    }
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    reverse(arr,n);
    display(arr,n);
}