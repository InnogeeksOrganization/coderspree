#include<iostream>
using namespace std;

int main(){
   int n,i,d,ans=-1;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   cin>>d;
   for(i=0;i<n;i++){
       if(arr[i]==d){
          ans=i;
          break;
       }
   }
   cout<<ans;
}