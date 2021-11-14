#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    int* inv = new int[n];
    //int inv[n];
    for(int i = 0; i<n ; i++){
        inv[arr[i]] = i;
    }
    return inv;
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}