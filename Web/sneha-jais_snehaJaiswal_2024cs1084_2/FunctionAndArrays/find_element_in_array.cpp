#include<iostream>
using namespace std;


int main(){
    //write your code here
    int k=-1;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    int d;
    cin>>d;
    
    for(int i=0; i<n; i++){
        if(arr[i]==d)
         k=i;
 }
    cout<<k;    
    return 0;
}