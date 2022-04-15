#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max,min;
    max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){min=arr[i];max=arr[i];}
        if(arr[i]>max){max=arr[i];}
        if(arr[i]<min){min=arr[i];}
    }
    cout<<max-min;
    
    return 0;
}