#include<iostream>
using namespace std;


int main(){
    int n,i,num,d;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    for(i=0;i<n;i++){
        if(d==arr[i]){
            cout<<i<<endl;
            break;
        }
    }
    if(i==n)
        cout<<"-1"<<endl;
    //write your code here
}