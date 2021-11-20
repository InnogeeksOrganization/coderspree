#include<iostream>
using namespace std;
#define ll long long

int main(){
    
   ll n,i;
   cin>>n;
   ll arr[n];
   for(i=0;i<n;i++)
   cin>>arr[i];
   ll d,flag=0;
   cin>>d;
   for(i=0;i<n;i++){
       if(arr[i]==d){
           flag=1;
           cout<<i<<" ";
           break;
       }
   }
   if(flag==0)
   cout<<"-1"<<" ";
   return 0;
}