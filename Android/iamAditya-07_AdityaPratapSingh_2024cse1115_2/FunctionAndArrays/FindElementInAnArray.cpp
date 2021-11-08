#include<iostream>
using namespace std;

int main(){
   int n,arr[1000],d,count=0;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   cin>>d;
    for(int j=0;j<n;j++){
        if(arr[j]==d){
            cout<<j;
            count++;
        }
         
       
    }
    
    if(count==0){
        cout<<-1;
    }
    
   
    
}