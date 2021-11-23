#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    int a2[n],i;
    for(i=0;i<n;i++)
        a2[arr[i]]=i;
    for(i=0;i<n;i++)
        arr[i]=a2[i];
    return arr;
    
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
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}