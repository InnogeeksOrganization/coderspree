#include<iostream>
using namespace std;

void rotate(int* arr, int n, int k){
   int b[n],c[n];
   k=k%n;
   int i,j=0;
   if(k<0)
        k=n+k;
    
    for(i=k;i<n;i++)
    {
        c[i]=arr[j++];  
    }
    for(i=0;i<k;i++)
    {  
        c[i]=arr[j++];
    }
    for(i=0;i<n;i++)
        arr[i]=c[i];
}
    
void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    display(arr,n);
}