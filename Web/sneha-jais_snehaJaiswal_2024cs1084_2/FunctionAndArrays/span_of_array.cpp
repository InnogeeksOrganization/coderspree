#include<bits/stdc++.h>
using namespace std;

int main(){


   
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
      int MaxVal=a[0],MinVal=a[0];
    for(int i=0; i<n; i++){
      if(a[i]>MaxVal)
      MaxVal=a[i];
      
      else if(a[i]<MinVal)
      MinVal=a[i];
       
    }
    
    int ans= MaxVal-MinVal;
    cout<<ans;
    return 0;
    
}