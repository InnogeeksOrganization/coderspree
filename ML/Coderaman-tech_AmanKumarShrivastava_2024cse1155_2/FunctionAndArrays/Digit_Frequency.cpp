#include<bits/stdc++.h>
using namespace std;

int main(){
      int t;
      cin>>t;
      while(t--){
          int a,b,p,q;
          cin>>a>>b>>p>>q;
          int color1,color2;
          color1=a+b;
          color2=p+q;
           if(a==p && b==p)
          cout<<"0"<<"\n";
          else if((color1)%2!=0 && (color2)%2==0){
              cout<<"1"<<"\n";
          }
          else if((color1)%2==0 && (color2)%2!=0){
              cout<<"1"<<"\n";
          }
          else
          cout<<"2"<<"\n";
          
      }
      return 0;
}
