#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d,count=0;
    cin>>d;
    for(int i=0;i<n;i++){
        if(arr[i]==d){
            cout<<i;
            break;
        }
        count++;
    }
    if(count==n){
        cout<<"-1";
    }
    
    return 0;
}