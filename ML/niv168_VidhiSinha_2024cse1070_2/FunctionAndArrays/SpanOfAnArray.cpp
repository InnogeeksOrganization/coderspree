#include<iostream>
using namespace std;

int main(){
   int arr[20],n,d,max,min,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   max=arr[0];
   min=arr[0];
   for(i=0;i<n;i++)
   {
      if(arr[i]>max)
      {
          max=arr[i];
      }
      if(arr[i]<min)
      {
          min=arr[i];
      }
   }
   cout<<max-min;
    
}