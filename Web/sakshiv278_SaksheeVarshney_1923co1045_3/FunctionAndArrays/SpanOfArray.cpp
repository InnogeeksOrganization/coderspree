#include<iostream>
using namespace std;

int main(){
   int n,i;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   int max=arr[0];
   int min=arr[0];
   for(i=0;i<n;i++){
       if(min>arr[i]){
           min=arr[i];
       }
       if(max<arr[i]){
           max=arr[i];
       }
   }
   cout<<max-min;
    
}