#include<iostream>
using namespace std;

int main(){
    int n,i;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data;
    cin>>data;
    for(i=0;i<n;i++){
        if(data==arr[i]){
            cout<<arr[i];
            return 0;
        }
    }
    i=0;
    while(data>arr[i]){
        i++;
    }
    if(i==n || i==0)
        cout<<arr[i];
    else
        cout<<arr[i]<<endl<<arr[i-1]<<endl;
        
    return 0;
    // write your code here
    
}