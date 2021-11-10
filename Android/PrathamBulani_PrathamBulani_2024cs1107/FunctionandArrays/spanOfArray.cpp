#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   sort(arr,arr+n);
   int span =arr[n-1] - arr[0];
   cout<<span<<endl;
   return 0;
}