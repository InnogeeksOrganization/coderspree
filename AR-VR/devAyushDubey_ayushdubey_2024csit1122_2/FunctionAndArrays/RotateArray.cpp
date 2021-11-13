#include<iostream>
#include<cmath>
using namespace std;

void rotate(long int* arr,long int* arr2, int n,int k){
    int i,j=n;
    if(k<0)
        k+=n;
    for(i=k-1;i>=0;i--)
        arr2[i] = arr[--j];
    j=0;
    for(i=k;i<n;i++)
        arr2[i]=arr[j++];
   // write your code here
    
}

void display(long int* arr2, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,k;
    cin>>n;
    long int arr[n],arr2[n],r;
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    k = r;
    if(r>n || r<(-1 * n))
        k = r % n;
    rotate(arr,arr2,n,k);
    display(arr2,n);
}