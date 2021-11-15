#include<iostream>
using namespace std;

void reverse(int* arr, int n){

    int k;
    for(int i=0;i<n/2;i++){
        k = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = k;
    }
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
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
